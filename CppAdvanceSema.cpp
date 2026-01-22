#include "CppAdvanceSema.h"
#include "StringUtils.h"
#include <optional>
#include <filesystem>
using namespace std::literals::string_literals;

const char* CurrentCppAdvanceCompilingFile{};
std::string DLLName{};
std::string CurrentCppAdvanceCompilingFileSource;
bool UnitTestMode = false;

void CppAdvanceCompilerError(std::string_view output, const Token* token)
{
	SourcePosition position = {token->getLine(),token->getCharPositionInLine()};
	std::cout << "\x1b[1m\x1b[34m" << CurrentCppAdvanceCompilingFile << ":" << position.toString() << ":\x1b[31m error: \x1b[22m" << output << "\x1b[33m" << std::endl;
	if (!CurrentCppAdvanceCompilingFileSource.empty()) {
		auto txt = StringSplit(CurrentCppAdvanceCompilingFileSource, '\n')[position.line - 1];
		StringReplace(txt, "\t", " ");
		std::cout << std::format("{:>5}", position.line) << " | " << txt << std::endl;
	}
	std::cout << std::string(5,' ') << " | " << std::string(position.column, ' ') << "^" << std::string(token->getStopIndex()-token->getStartIndex(),'~') << "\x1b[0m" << std::endl;
	std::exit(-1);
}

void CppAdvanceCompilerError(std::string_view output, SourcePosition position)
{
	std::cout << "\x1b[1m\x1b[34m" << CurrentCppAdvanceCompilingFile << ":" << position.toString() << ":\x1b[31m error: \x1b[22m" << output << "\x1b[33m" << std::endl;
	if (!CurrentCppAdvanceCompilingFileSource.empty()) {
		auto txt = StringSplit(CurrentCppAdvanceCompilingFileSource, '\n')[position.line - 1];
		StringReplace(txt, "\t", " ");
		std::cout << std::format("{:>5}", position.line) << " | " << txt << std::endl;
	}
	std::cout << std::string(5, ' ') << " | " << std::string(position.column, ' ') << "^" << "\x1b[0m" << std::endl;
	std::exit(-1);
}

std::string FindFileInIncludePaths(const std::string& fileName) {
	// Сначала проверяем в текущей директории
	if (std::filesystem::exists(fileName)) {
		return fileName;
	}

	// Затем ищем в путях include
	for (const auto& path : cppParserArgs) {
		std::filesystem::path fullPath = std::filesystem::path(std::string_view(path).substr(2)) / fileName;
		if (std::filesystem::exists(fullPath)) {
			return fullPath.string();
		}
	}

	throw std::runtime_error("File not found: " + fileName);
}

std::string CppAdvanceSema::getCurrentCompilationCondition()
{
	const auto& conditions = getStackUnderlyingContainer(conditionStack);
	std::string result;
	bool first = true;
	for (const auto& cond : conditions)
	{
		if (!first) result += " && ";
		result += "(";
		result += cond;
		result += ")";
		first = false;
	}
	return result;
}

CppAdvanceParser::TemplateParamsContext* CppAdvanceSema::getLastTypeTemplateParams()
{
	const auto& structs = getStackUnderlyingContainer(structStack);
	for (auto it = structs.rbegin(); it != structs.rend(); ++it)
	{
		auto params = it->get()->templateParams;
		if (params)
			return params;
	}
	return nullptr;
}

CppAdvanceParser::TemplateArgumentListContext* CppAdvanceSema::getLastTypeTemplateSpecializationArgs()
{
	const auto& structs = getStackUnderlyingContainer(structStack);
	for (auto it = structs.rbegin(); it != structs.rend(); ++it)
	{
		auto params = it->get()->templateSpecializationArgs;
		if (params)
			return params;
	}
	return nullptr;
}

CppAdvanceParser::ConstraintClauseContext* CppAdvanceSema::getLastTypeConstraints()
{
	const auto& structs = getStackUnderlyingContainer(structStack);
	for (auto it = structs.rbegin(); it != structs.rend(); ++it)
	{
		auto params = it->get()->constraints;
		if (params)
			return params;
	}
	return nullptr;
}

std::string CppAdvanceSema::getCurrentFullTypeName()
{
	const auto& structs = getStackUnderlyingContainer(currentTypeWithTemplate);
	std::string result;
	for (int i = 0; i < structs.size(); ++i)
	{
		if (i > 0) result += ".";
		auto type = structs[i];
		if (i < (structs.size() - 1) && type.starts_with("__Class_")) type = type.substr(8);
        result += type;
	}
	return result;
}

void CppAdvanceSema::tryToAddTypeInStackFromOperator(std::string_view op)
{
	auto opName = getCustomOperatorName(op);
	auto full = typeStack.top() + "." + opName;
	if (functionTable.contains(full))
	{
		typeStack.push(functionTable[full]);
	}
	else if (functionTable.contains(opName))
	{
		typeStack.push(functionTable[opName]);
	}
}

inline constexpr uint64_t FNV_PRIME = 1099511628211ULL;
inline constexpr uint64_t FNV_OFFSET_BASIS = 14695981039346656037ULL;

std::string CppAdvanceSema::getNamedTupleId(std::string_view tuple)
{
	std::string result{ tuple };
	StringReplace(result, " ", "");
	StringReplace(result, "\t", "");
	StringReplace(result, "\r", "");
	StringReplace(result, "\n", "");
	uint64_t hash = FNV_OFFSET_BASIS;
	for (char c : result) {
		hash ^= c;
		hash *= FNV_PRIME;
	}
	return std::format("__ntuples.NamedTuple_{:016x}",hash);
}

std::string CppAdvanceSema::getInterfaceMethodId(std::string_view name, CppAdvanceParser::ParamDeclClauseContext* params)
{
	std::string result{ name };
	if (params)
	{
		result += "_";
		auto paramList = params->paramDeclList()->paramDeclaration();
		for (auto param : paramList)
		{
			result += param->Identifier()->getText();
			result += param->theTypeId()->getText();
		}
	}
	uint64_t hash = FNV_OFFSET_BASIS;
	for (char c : result) {
		hash ^= c;
		hash *= FNV_PRIME;
	}
	return std::format("{:016x}", hash);
}

std::string CppAdvanceSema::getUnitTestId(CppAdvanceParser::UnitTestDeclarationContext* test)
{
	std::string result;
	if (test->StringLiteral())
	{
		result += test->StringLiteral()->getText();
	}
	else
	{
		result += filename;
		result += "_";
		result += std::to_string(test->getStart()->getLine());
	}

	uint64_t hash = FNV_OFFSET_BASIS;
	for (char c : result) {
		hash ^= c;
		hash *= FNV_PRIME;
	}
	return std::format("__Test_{:016x}", hash);
}

std::string CppAdvanceSema::getCustomOperatorName(std::string_view op)
{
	static std::unordered_map<std::string, std::string> cache;
	auto it = cache.find(std::string(op));
	if (it != cache.end())
	{
		return it->second;
	}

	constexpr int OPCHAR_LENGTH = 4;
	std::string result = "_operator";
	result.reserve(result.length() + OPCHAR_LENGTH * op.length());
	for (char c : op)
	{
		result += '_';
		switch (c)
		{
			case '+': result += "add"; break;
            case '-': result += "sub"; break;
            case '*': result += "mul"; break;
            case '/': result += "div"; break;
            case '%': result += "mod"; break;
            case '&': result += "and"; break;
            case '|': result += "or"; break;
            case '^': result += "xor"; break;
            case '~': result += "not"; break;
            case '=': result += "eq"; break;
            case '!': result += "ne"; break;
            case '<': result += "lt"; break;
            case '>': result += "gt"; break;
			case '\\': result += "bsl"; break;
		default:
			break;
		}
	}

	cache.insert({ std::string(op), result });
	return result;
}

void CppAdvanceSema::enterProgram(CppAdvanceParser::ProgramContext* ctx)
{
	ast = ctx;
	if (firstPass) {
		while(!initStates.empty()) initStates.pop();
		while(!ifContexts.empty()) ifContexts.pop();
		globalVariables.clear();
		globalConstants.clear();
		globalTypeAliases.clear();
		globalFunctions.clear();
		protectedSymbols.clear();
		protectedVersions.clear();
		while (!conditionStack.empty()) conditionStack.pop();
		while (!currentAccessSpecifier.empty()) currentAccessSpecifier.pop();
		while (!currentTypeKind.empty()) currentTypeKind.pop();
		cppParser.parse(FindFileInIncludePaths("CppAdvance.h"));
		typeset.globalTypes.insert("super");
	}
	while (!symbolContexts.empty()) symbolContexts.pop();
	symbolContexts.push({});
	currentAccessSpecifier.push(std::nullopt);
	/*for (const auto& [k, v] : cppParser.parametersTable)
	{
		for (const auto& value : v)
		{
			std::cout << k << ":\t" << value << "\n";
		}
	}
	abort();*/
}

void CppAdvanceSema::exitProgram(CppAdvanceParser::ProgramContext* ctx)
{
	firstPass = false;
	while (!symbolContexts.empty()) symbolContexts.pop();
	while (!currentAccessSpecifier.empty()) currentAccessSpecifier.pop();
	while (!currentTypeKind.empty()) currentTypeKind.pop();
}

void CppAdvanceSema::enterStat(CppAdvanceParser::StatContext* ctx)
{
	//if (firstPass && functionBody) return;
	currentStatement = ctx;
	if (ctx->Unsafe())
	{
		if (++unsafeDepth > 1)
			CppAdvanceCompilerError("Unsafe context recursion", ctx->Unsafe()->getSymbol());
	}
}

void CppAdvanceSema::exitStat(CppAdvanceParser::StatContext* ctx)
{
	//if (firstPass && functionBody) return;
	if (ctx->Unsafe()) --unsafeDepth;
	while (!typeStack.empty()) typeStack.pop();
	currentTemplateArgs.clear();
	currentSubtype.clear();
}

void CppAdvanceSema::enterExpr(CppAdvanceParser::ExprContext* ctx)
{
	
}

void CppAdvanceSema::exitExpr(CppAdvanceParser::ExprContext* ctx)
{
	if (!typeStack.empty()) contextTypes[ctx] = typeStack.top();
}

void CppAdvanceSema::checkIntegerLiteral(TerminalNode* literal, bool minus)
{
	if (firstPass == functionBody > 0) return;
	std::string txt = literal->getText();
	if (txt.empty()) return;
	auto base = 10;
	if (txt.length() > 2 && txt[0] == '0') {
		if (txt[1] == 'b') base = 2;
		else if (txt[1] == 'o') base = 8;
		else if (txt[1] == 'x') base = 16;
		txt = txt.substr(2);
	}
	auto suffix = ""s;
	auto spos = txt.find_last_of("big");
	if (spos != txt.npos) {
        suffix = "big";
	}
	else {
		spos = txt.find_last_of('u');
		if (spos != txt.npos) {
            suffix = txt.substr(spos);
		}
		else {
			spos = txt.find_last_of('i');
			if (spos != txt.npos) {
				suffix = txt.substr(spos);
			}
		}
	}
	StringReplace(txt, "_", "");
	if (suffix.empty() || suffix == "big") {
		
	}
	else if (suffix == "u") {
		if (minus) {
			CppAdvanceCompilerError("Cannot assign a signed value to the unsigned type", literal->getSymbol());
		}
	}
	else if (suffix == "i8") {
		auto value = 0ull;
		auto result = std::from_chars(txt.c_str(),txt.c_str()+txt.length(),value,base);
		if ((int)result.ec || value > 128 || (value == 128 && !minus)) {
			CppAdvanceCompilerError(std::format("The value {} is out of range for the type i8", txt), literal->getSymbol());
		}
	}
	else if (suffix == "i16") {
		auto value = 0ull;
		auto result = std::from_chars(txt.c_str(), txt.c_str() + txt.length(), value, base);
		if ((int)result.ec || value > 32768 || (value == 32768 && !minus)) {
			CppAdvanceCompilerError(std::format("The value {} is out of range for the type i16", txt), literal->getSymbol());
		}
	}
	else if (suffix == "i32") {
		auto value = 0ull;
		auto result = std::from_chars(txt.c_str(), txt.c_str() + txt.length(), value, base);
		if ((int)result.ec || value > 2147483648 || (value == 2147483648 && !minus)) {
			CppAdvanceCompilerError(std::format("The value {} is out of range for the type i32", txt), literal->getSymbol());
		}
	}
	else if (suffix == "i64") {
		auto value = 0ull;
		auto result = std::from_chars(txt.c_str(), txt.c_str() + txt.length(), value, base);
		if ((int)result.ec || value > 9223372036854775808ULL || (value == 9223372036854775808ULL && !minus)) {
			CppAdvanceCompilerError(std::format("The value {} is out of range for the type i64", txt), literal->getSymbol());
		}
	}
	else if (suffix == "u8") {
		if (minus) {
			CppAdvanceCompilerError("Cannot assign a signed value to the type u8", literal->getSymbol());
		}
		auto value = 0ull;
		auto result = std::from_chars(txt.c_str(), txt.c_str() + txt.length(), value, base);
		if ((int)result.ec || value > UINT8_MAX) {
			CppAdvanceCompilerError(std::format("The value {} is out of range for the type u8", txt), literal->getSymbol());
		}
	}
	else if (suffix == "u16") {
		if (minus) {
			CppAdvanceCompilerError("Cannot assign a signed value to the type u16", literal->getSymbol());
		}
		auto value = 0ull;
		auto result = std::from_chars(txt.c_str(), txt.c_str() + txt.length(), value, base);
		if ((int)result.ec || value > UINT16_MAX) {
			CppAdvanceCompilerError(std::format("The value {} is out of range for the type u16", txt), literal->getSymbol());
		}
	}
	else if (suffix == "u32") {
		if (minus) {
			CppAdvanceCompilerError("Cannot assign a signed value to the type u32", literal->getSymbol());
		}
		auto value = 0ull;
		auto result = std::from_chars(txt.c_str(), txt.c_str() + txt.length(), value, base);
		if ((int)result.ec || value > UINT32_MAX) {
			CppAdvanceCompilerError(std::format("The value {} is out of range for the type u32", txt), literal->getSymbol());
		}
	}
	else if (suffix == "u64") {
		if (minus) {
			CppAdvanceCompilerError("Cannot assign a signed value to the type u64", literal->getSymbol());
		}
		auto value = 0ull;
		auto result = std::from_chars(txt.c_str(), txt.c_str() + txt.length(), value, base);
		if ((int)result.ec) {
			CppAdvanceCompilerError(std::format("The value {} is out of range for the type u64", txt), literal->getSymbol());
		}
	}
	else if (suffix == "iz") {
		auto value = 0ull;
		auto result = std::from_chars(txt.c_str(), txt.c_str() + txt.length(), value, base);
		if ((int)result.ec || value > (static_cast<size_t>(INTPTR_MAX) + 1) || (value == (static_cast<size_t>(INTPTR_MAX) + 1) && !minus)) {
			CppAdvanceCompilerError(std::format("The value {} is out of range for the type isize", txt), literal->getSymbol());
		}
	}
	else if (suffix == "uz") {
		if (minus) {
			CppAdvanceCompilerError("Cannot assign a signed value to the type usize", literal->getSymbol());
		}
		auto value = 0ull;
		auto result = std::from_chars(txt.c_str(), txt.c_str() + txt.length(), value, base);
		if ((int)result.ec || value > UINTPTR_MAX) {
			CppAdvanceCompilerError(std::format("The value {} is out of range for the type usize", txt), literal->getSymbol());
		}
	}
	else if (suffix == "i128") {
		if (txt.length() < 32) return;
		auto value = 0ull;
		auto result = std::from_chars(txt.c_str(), txt.c_str() + txt.length(), value, base);
		if ((int)result.ec) {
			if (base == 10 && (txt.length() > 43
				|| (txt.length() == 43 &&
					((txt == "170141183460469231731687303715884105728i128" && !minus) || (txt > "170141183460469231731687303715884105728i128"))))) {
				CppAdvanceCompilerError(std::format("The value {} is out of range for the type i128", txt), literal->getSymbol());
			}
			else if (base == 2 && (txt.length() > 132 || (txt.length() == 132 && txt[0] != '0'))) {
				CppAdvanceCompilerError(std::format("The value {} is out of range for the type i128", txt), literal->getSymbol());
			}
			else if (base == 16 && (txt.length() > 36 || (txt.length() == 36 && txt[0] > '7'))) {
				CppAdvanceCompilerError(std::format("The value {} is out of range for the type i128", txt), literal->getSymbol());
			}
			else if (base == 8 && txt.length() > 44) {
				CppAdvanceCompilerError(std::format("The value {} is out of range for the type i128", txt), literal->getSymbol());
			}
		}
	}
	else if (suffix == "u128") {
		if (minus) {
			CppAdvanceCompilerError("Cannot assign a signed value to the type u128", literal->getSymbol());
		}
		auto value = 0ull;
		auto result = std::from_chars(txt.c_str(), txt.c_str() + txt.length(), value, base);
		if ((int)result.ec) {
			if (base == 10 && (txt.length() > 43
				|| (txt.length() == 43 && txt > "340282366920938463463374607431768211455u128"))) {
				CppAdvanceCompilerError(std::format("The value {} is out of range for the type u128", txt), literal->getSymbol());
			}
			else if (base == 2 && txt.length() > 132) {
				CppAdvanceCompilerError(std::format("The value {} is out of range for the type u128", txt), literal->getSymbol());
			}
			else if (base == 16 && txt.length() > 36) {
				CppAdvanceCompilerError(std::format("The value {} is out of range for the type u128", txt), literal->getSymbol());
			}
			else if (base == 8 && txt.length() > 44) {
				CppAdvanceCompilerError(std::format("The value {} is out of range for the type u128", txt), literal->getSymbol());
			}
		}
	}
	else {
		assert(false);
	}
}

void CppAdvanceSema::checkAsciiLiteral(TerminalNode* literal)
{
	if (firstPass == functionBody > 0) return;
	std::string txt = literal->getText();
	if (txt.starts_with('b')) {
		if (txt.length() > 5 || (txt.length() == 5 && txt[2] != '\\'))
		{
			CppAdvanceCompilerError(std::format("The value {} is out of range for the type byte", txt), literal->getSymbol());
		}
	}
}

void CppAdvanceSema::enterUnaryExpression(CppAdvanceParser::UnaryExpressionContext* ctx)
{
	if (firstPass) unaryExpressions.push(ctx);
	if (firstPass == functionBody > 0) return;
	if (auto upo = ctx->unaryPrefixOperator())
	{
		literalMinus = upo->Minus();
	}
	else if (ctx->Out())
	{
		isOutExpression = true;
		auto id = ctx->unaryExpressionTail()->getText();
		initStates.top().definitelyAssigned.insert(id);
	}
}

void CppAdvanceSema::exitUnaryExpression(CppAdvanceParser::UnaryExpressionContext* ctx)
{
	if (firstPass) {
		unaryExpressions.pop();
		if (functionBody) return;
	}
	literalMinus = false;
	isOutExpression = false;
	if (ctx->Sizeof() || ctx->unaryExpressionTail()->Sizeof() || ctx->unaryExpressionTail()->Alignof())
	{
		typeStack.push("usize");
	}
	else if (ctx->unaryCustomOperator())
	{
		tryToAddTypeInStackFromOperator(ctx->unaryCustomOperator()->getText());
	}
}

void CppAdvanceSema::enterLiteral(CppAdvanceParser::LiteralContext* ctx)
{
	
}

void CppAdvanceSema::enterFunctionBody(CppAdvanceParser::FunctionBodyContext*)
{
	++functionBody;
	++depth;
}

void CppAdvanceSema::exitFunctionBody(CppAdvanceParser::FunctionBodyContext*)
{
	--depth;
	--functionBody;
}

void CppAdvanceSema::exitSimpleDeclaration(CppAdvanceParser::SimpleDeclarationContext* ctx)
{
	if (firstPass && functionBody) return;
	bool isConst = false;
	bool isVolatile = false;
	bool isThreadLocal = false;
	bool isStatic = false;
	bool isMutable = false;
	bool isUnowned = false;
	bool isWeak = false;

	if (auto spec = ctx->declSpecifierSeq())
	{
		for (auto d : spec->declSpecifier())
		{
			if (d->Const() || d->Let()) isConst = true;
			else if (d->Volatile()) isVolatile = true;
			else if (d->Thread_local()) isThreadLocal = true;
			else if (d->Static()) {
				isStatic = true;
				if (!functionBody && !isTypeDefinitionBody()) CppAdvanceCompilerError("Global variables and constants are implicitly static, explicit declaration is not required", d->Static()->getSymbol());
			}
			else if (d->Mutable()) {
				isMutable = true;
				if (!functionBody && !isTypeDefinitionBody()) CppAdvanceCompilerError("Global variables and constants are implicitly mutable, explicit declaration is not required", d->Mutable()->getSymbol());
			}
			else if (d->Unowned()) isUnowned = true;
			else if (d->Weak()) isWeak = true;
		}
	}

	if (isTypeDefinitionBody() && currentTypeKind.top() == TypeKind::EnumClass) {
		isConst = true;
	}

	if (isConst && isMutable)
	{
		CppAdvanceCompilerError("Constant cannot be mutable", ctx->declSpecifierSeq()->getStart());
	}
	if (isConst && isVolatile)
	{
		CppAdvanceCompilerError("Constant is not required to be volatile", ctx->declSpecifierSeq()->getStart());
	}
	if (isVolatile && isThreadLocal)
	{
		CppAdvanceCompilerError("Thread local variable is not required to be volatile", ctx->declSpecifierSeq()->getStart());
	}
	if (isConst && isThreadLocal)
	{
		CppAdvanceCompilerError("Thread local variable cannot be constant", ctx->declSpecifierSeq()->getStart());
	}
	if (isConst && !ctx->initializerClause() && !ctx->initializerList() && (!isTypeDefinitionBody() || functionBody))
	{
		CppAdvanceCompilerError("The constant must be explicitly initialized", ctx->declSpecifierSeq()->getStart());
	}
	if (isVolatile && !ctx->theTypeId())
	{
		CppAdvanceCompilerError("The volatile variable must have an explicit type", ctx->Assign()->getSymbol());
	}
	if (isUnowned && isWeak)
	{
		CppAdvanceCompilerError("The reference cannot be unowned and weak at the same time", ctx->declSpecifierSeq()->getStart());
	}

	if (ctx->Void())
	{
		if (!functionBody)
		{
			CppAdvanceCompilerError("Cannot to declare the uninitialized variable outside the function body", ctx->Void()->getSymbol());
		}
		else if (loopDepth > 0)
		{
			CppAdvanceCompilerError("Cannot to declare the uninitialized variable in the loop body", ctx->Void()->getSymbol());
		}
		else
		{
			auto id = ctx->Identifier()->getText();
			initStates.top().potentiallyAssigned.insert(id);
			if (initStates.top().definitelyAssigned.contains(id))
				initStates.top().definitelyAssigned.erase(id);
		}
	}
	if (ctx->Star() && unsafeDepth <= 0)
	{
		CppAdvanceCompilerError("Cannot to use raw pointers in the safe context", ctx->Star()->getSymbol());
	}

	if (auto t = ctx->theTypeId())
	{
		//symbolTable[ctx->Identifier()->getText()] = t->getText();
		symbolTable[ctx->Identifier()->getText()] = contextTypes[t];
		if (isTypeDefinitionBody() && !functionBody)
		{
			symbolTable.globalSymbolTable[currentType+"."+ ctx->Identifier()->getText()] = contextTypes[t];
		}
		if (isWeak)
		{
			if (!t->VertLine().empty())
			{
				CppAdvanceCompilerError("Weak reference cannot be used with unions", ctx->declSpecifierSeq()->getStart());
			}
			if (auto post = t->singleTypeId(0)->typePostfix())
			{
				if (!post->arrayDeclarator().back()->Question())
					CppAdvanceCompilerError("Weak reference must be optional", ctx->declSpecifierSeq()->getStart());
			}
			else if (!t->singleTypeId(0)->Question())
			{
				CppAdvanceCompilerError("Weak reference must be optional", ctx->declSpecifierSeq()->getStart());
			}
		}
	}
	else
	{
		symbolTable[ctx->Identifier()->getText()] = contextTypes[ctx->initializerClause()];
		if (!currentSubtype.empty()) symbolTable[ctx->Identifier()->getText()] += "<"+ currentSubtype+">";
		if (isTypeDefinitionBody() && !functionBody)
		{
			CppAdvanceCompilerError("A field cannot have an implicit type", ctx->Assign()->getSymbol());
		}
	}
	
	if (!functionBody && firstPass)
	{
		if (ctx->Star())
		{
			CppAdvanceCompilerError("Global variables cannot be auto pointer type, full type required", ctx->Star()->getSymbol());
		}
		if (isTypeDefinitionBody() && currentTypeKind.top() == TypeKind::StaticClass)
		{
			isStatic = true;
		}
		CppAdvanceParser::AccessSpecifierContext* acc = nullptr;
		CppAdvanceParser::AttributeSpecifierSeqContext* attributes = nullptr;
		std::optional<AccessSpecifier> access = std::nullopt;
		bool isProtectedInternal = false;

		if (!isTypeDefinitionBody()) {
			if (auto block = reinterpret_cast<CppAdvanceParser::BlockDeclarationContext*>(ctx->parent))
			{
				if (auto decl = reinterpret_cast<CppAdvanceParser::DeclarationContext*>(block->parent))
				{
					acc = decl->accessSpecifier();
					attributes = decl->attributeSpecifierSeq();
				}
			}
		}
		else
		{
			if (auto block = reinterpret_cast<CppAdvanceParser::MemberBlockDeclarationContext*>(ctx->parent))
			{
				auto decl = reinterpret_cast<CppAdvanceParser::StructMemberDeclarationContext*>(block->parent);
				isProtectedInternal = decl->protectedInternal();
				acc = decl->accessSpecifier();
				attributes = decl->attributeSpecifierSeq();
			}
		}
		if (isProtectedInternal)
		{
			if (currentAccessSpecifier.top())
				CppAdvanceCompilerError("Cannot to redefine access specifier", ctx->getStart());
			if (!isStatic)
				CppAdvanceCompilerError("Cannot to declare non-static protected internal field, use public/internal/protected/private", ctx->getStart());
			if (isTypeDefinitionBody() && currentTypeKind.top() != TypeKind::Class)
				CppAdvanceCompilerError("Cannot to declare protected field in the struct/union/enum", ctx->getStart());
			access = AccessSpecifier::ProtectedInternal;
		}
		else if (acc)
		{
			if (currentAccessSpecifier.top())
				CppAdvanceCompilerError("Cannot to redefine access specifier", acc->getStart());
			if (acc->Public())
			{
				access = AccessSpecifier::Public;
			}
			else if (acc->Protected())
			{
				access = AccessSpecifier::Protected;
				if (isTypeDefinitionBody() && currentTypeKind.top() != TypeKind::Class)
					CppAdvanceCompilerError("Cannot to declare protected field in the struct/union/enum", ctx->getStart());
			}
			else if (acc->Private())
			{
				access = AccessSpecifier::Private;
			}
			else if (acc->Internal())
			{
				access = AccessSpecifier::Internal;
			}
		}
		
		if (currentAccessSpecifier.top()) access = currentAccessSpecifier.top();
		if (isThreadLocal)
		{
			if (access)
			{
				if (*access != AccessSpecifier::Private && !isTypeDefinitionBody()) CppAdvanceCompilerError("Thread-local variables should always be private. Use getters/setters to configure access or thread-local variables", ctx->declSpecifierSeq()->getStart());
			} else access = AccessSpecifier::Private;
		}
		else
		{
			if (!access) {
				if (!isTypeDefinitionBody())
					access = AccessSpecifier::Internal;
				else
					access = AccessSpecifier::Private;
			}
		}
		auto id = ctx->Identifier();
		if (!isTypeDefinitionBody())
		{
			if (*access == AccessSpecifier::Protected) protectedSymbols.insert(id->getText());
			if (unsafeDepth > 0) cppParser.unsafeVariables.insert(id->getText());
			globalVariables.emplace_back(VariableDefinition{ id->getText(), nullptr, nullptr, ctx->theTypeId(), 
				{ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()}, ctx->initializerClause(), ctx->initializerList(), 
				attributes, *access, getCurrentCompilationCondition(), "", false, isConst, isVolatile, isThreadLocal, unsafeDepth > 0, 
				false, isUnowned, isWeak});
		}
		else
		{
			if (currentTypeKind.top() == TypeKind::UnionStruct && *access != AccessSpecifier::Private)
				CppAdvanceCompilerError("Raw union field must be private", ctx->getStart());

			if (unsafeDepth > 0) cppParser.unsafeVariables.insert(currentType+"." + id->getText());
			structStack.top()->fields.emplace_back(VariableDefinition{ id->getText(), nullptr, nullptr, ctx->theTypeId(), 
				{ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()}, ctx->initializerClause(), ctx->initializerList(),
				attributes, *access, getCurrentCompilationCondition(), getCurrentFullTypeName(), isStatic, isConst, isVolatile, isThreadLocal, 
				unsafeDepth > 0, false, isUnowned, isWeak});
			if (isStatic || isThreadLocal)
			{
				if (isProtectedTypeDefinition) access = AccessSpecifier::Protected;
				else access = AccessSpecifier::Private;
				staticFields.emplace_back(VariableDefinition{ id->getText(), getLastTypeTemplateParams(), getLastTypeConstraints(), ctx->theTypeId(), 
					{ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()}, ctx->initializerClause(), ctx->initializerList(), 
					attributes, *access, getCurrentCompilationCondition(), getCurrentFullTypeName(), isStatic, isConst, isVolatile, isThreadLocal,
					isUnsafeTypeDefinition, getLastTypeTemplateSpecializationArgs() != nullptr, isUnowned, isWeak });
			}
		}
	}
}

void CppAdvanceSema::enterAssignmentExpression(CppAdvanceParser::AssignmentExpressionContext* ctx)
{
	//if (firstPass && functionBody) return;
	if (ctx->initializerClause())
	{
		if (isCondition)
			CppAdvanceCompilerError("Cannot to use assignment operators in the condition. Maybe you mean the equality operator?", ctx->assignmentOperator()->getStart());
		if (ctx->assignmentOperator()->Assign()) {
			isAssignment = true;
			currentAssignment = ctx;
		}
		lvalue = true;
	}
}

void CppAdvanceSema::exitAssignmentExpression(CppAdvanceParser::AssignmentExpressionContext* ctx)
{
	//if (firstPass && functionBody) return;
	if (ctx->initializerClause())
	{
		isAssignment = false;
	}
	currentAssignment = nullptr;
}

void CppAdvanceSema::enterPrimaryExpression(CppAdvanceParser::PrimaryExpressionContext* ctx)
{
	if (ctx->Super() && (currentType.empty() || currentTypeKind.top() != TypeKind::Class))
		CppAdvanceCompilerError("Super keyword can using only in the derived class", ctx->Super()->getSymbol());
	if (ctx->Field() && propertyBody)
		fieldAssignment = true;
	if (firstPass && functionBody) return;
	if (unsafeDepth == 0 && ctx->getText().find("__Unsafe") != std::string::npos)
		CppAdvanceCompilerError("Cannot to use unsafe data in the safe context", ctx->getStart());

	if (lvalue && ctx->idExpression() && ctx->idExpression()->unqualifiedId())
	{
		auto uid = ctx->idExpression()->unqualifiedId();
		auto txt = uid->getText();
		if (initStates.top().potentiallyAssigned.contains(txt) && !initStates.top().definitelyAssigned.contains(txt))
		{
			if (isAssignment && loopDepth <= 0)
			{
				initStates.top().definitelyAssigned.insert(txt);
				uninitConstructs.insert(currentAssignment);
			}
			else
			{
				CppAdvanceCompilerError("Cannot to use uninitialized value", uid->getStart());
			}
		}
		else if (unsafeDepth == 0)
		{
			if (cppParser.unsafeVariables.contains(txt))
			{
				CppAdvanceCompilerError("Cannot to use unsafe variable in the safe context", uid->Identifier()->getSymbol());
			}
			/*else if (cppParser.unsafeFunctions.contains(txt))
			{
				CppAdvanceCompilerError("Cannot to call unsafe function in the safe context", uid->Identifier()->getSymbol());
			}*/
		}
	}
	else if (ctx->idExpression() && ctx->idExpression()->unqualifiedId())
	{
		auto uid = ctx->idExpression()->unqualifiedId();
		auto txt = uid->getText();
		if (!isOutExpression && !initStates.empty() && initStates.top().potentiallyAssigned.contains(txt) && !initStates.top().definitelyAssigned.contains(txt))
		{
			CppAdvanceCompilerError("Cannot to use uninitialized value", uid->getStart());
		}
		else if (unsafeDepth == 0)
		{
			if (cppParser.unsafeVariables.contains(txt))
			{
				CppAdvanceCompilerError("Cannot to use unsafe variable in the safe context", uid->Identifier()->getSymbol());
			}
			/*else if (cppParser.unsafeFunctions.contains(txt))
			{
				CppAdvanceCompilerError("Cannot to call unsafe function in the safe context", uid->Identifier()->getSymbol());
			}*/
		}
	}
}

void CppAdvanceSema::enterInitializerClause(CppAdvanceParser::InitializerClauseContext*)
{
	lvalue = false;
}

void CppAdvanceSema::enterPostfixExpression(CppAdvanceParser::PostfixExpressionContext* ctx)
{
	if (firstPass && ctx->Question()) {
		if (lvalue)
		{
			conditionalPrerequisites[currentStatement].push_back(ctx->postfixExpression());
		}
		//else {
			if (!optionalChains.contains(unaryExpressions.top()))
			{
				optionalChains.insert_or_assign(unaryExpressions.top(), 1);
			}
			else
			{
				optionalChains[unaryExpressions.top()]++;
			}
			if (!optionalChains.contains(ctx->postfixExpression()))
			{
				optionalChains.insert_or_assign(ctx->postfixExpression(), 1);
			}
			else
			{
				optionalChains[ctx->postfixExpression()]++;
			}
		//}
	}
	if (firstPass && functionBody) return;

	if (auto upo = ctx->unaryPostfixOperator())
	{
		if (!upo->Star().empty() || !upo->DoubleStar().empty())
		{
			if (unsafeDepth <= 0)
				CppAdvanceCompilerError("Cannot to use dereferencing of the raw pointer in the safe context", upo->getStart());
		}
		else if (upo->Amp())
		{
			if (unsafeDepth <= 0)
				CppAdvanceCompilerError("Cannot to get raw address in the safe context", upo->getStart());
		}
	}
	else if(ctx->Dot())
	{
		if (unsafeDepth == 0)
		{
			auto txt = ctx->getText();
			auto pos = txt.rfind('.');
			if (cppParser.unsafeVariables.contains(txt))
			{
				CppAdvanceCompilerError("Cannot to use unsafe variable in the safe context", ctx->idExpression()->getStart());
			}
			else
			{
				txt = txt.substr(0, pos);
				if (cppParser.unsafeVariables.contains(txt)) 
					CppAdvanceCompilerError("Cannot to use unsafe variable in the safe context", ctx->postfixExpression()->getStart()); 
				/*else if (cppParser.unsafeFunctions.contains(txt))
				{
					CppAdvanceCompilerError("Cannot to call unsafe function in the safe context", ctx->postfixExpression()->getStart());
				}*/
			}
		}
	}
}

void CppAdvanceSema::enterTypeSpecifierSeq(CppAdvanceParser::TypeSpecifierSeqContext* ctx)
{
	if (firstPass && functionBody) return;
	if (unsafeDepth <= 0)
	{
		if (!ctx->pointerOperator().empty())
		{
			CppAdvanceCompilerError("Cannot to use raw pointers in the safe context", ctx->pointerOperator(0)->getStart());
		}
	}
}

void CppAdvanceSema::enterDeclaration(CppAdvanceParser::DeclarationContext* ctx)
{
	if (ctx->Unsafe()) {
		if (++unsafeDepth > 1)
            CppAdvanceCompilerError("Unsafe context recursion", ctx->Unsafe()->getSymbol());
	}
	else if(auto spec = ctx->symbolSpecifierSeq())
	{
		if (spec->Unsafe() && ++unsafeDepth > 1)
			CppAdvanceCompilerError("Unsafe context recursion", ctx->Unsafe()->getSymbol());
		if (auto access = spec->accessSpecifier())
		{
			if (currentAccessSpecifier.top())
				CppAdvanceCompilerError("Access specifier context recursion",access->getStart());
			if (access->Public()) currentAccessSpecifier.top() = AccessSpecifier::Public;
			else if (access->Protected()) currentAccessSpecifier.top() = AccessSpecifier::Protected;
			else if (access->Internal()) currentAccessSpecifier.top() = AccessSpecifier::Internal;
			else if (access->Private()) currentAccessSpecifier.top() = AccessSpecifier::Private;
		}
	}
}

void CppAdvanceSema::exitDeclaration(CppAdvanceParser::DeclarationContext* ctx)
{
	if (ctx->Unsafe()) --unsafeDepth;
	else if (auto spec = ctx->symbolSpecifierSeq())
	{
		if (spec->Unsafe()) --unsafeDepth;
		currentAccessSpecifier.top() = std::nullopt;
	}
}

void CppAdvanceSema::enterExternVariableDeclaration(CppAdvanceParser::ExternVariableDeclarationContext* ctx)
{
	if (!functionBody && unsafeDepth > 0)
		cppParser.unsafeVariables.insert(ctx->Identifier()->getText());
}

void CppAdvanceSema::enterRefDeclaration(CppAdvanceParser::RefDeclarationContext* ctx)
{
	if (firstPass && functionBody) return;
	bool isConst = ctx->Const() || ctx->Let();

	if (!functionBody)
	{
		CppAdvanceCompilerError("Global variable cannot be the reference variable", ctx->Amp()->getSymbol());
	}
	if (!ctx->initializerClause())
	{
		CppAdvanceCompilerError("Local reference variable must be explicitly initialized", ctx->Amp()->getSymbol());
	}
}

void CppAdvanceSema::enterMultiDeclaration(CppAdvanceParser::MultiDeclarationContext* ctx)
{
	if (!functionBody)
		CppAdvanceCompilerError("Multi declarations cannot be used outside function body", ctx->Colon()[1]->getSymbol());
}

void CppAdvanceSema::enterConstantDeclaration(CppAdvanceParser::ConstantDeclarationContext* ctx)
{
	if (firstPass && functionBody) return;

	if (ctx->theTypeId())
	{
		symbolTable[ctx->Identifier()->getText()] = contextTypes[ctx->theTypeId()];
		if (!ctx->theTypeId()->VertLine().empty())
			CppAdvanceCompilerError("Compile-time constant cannot be union", ctx->theTypeId()->VertLine(0)->getSymbol());
		if (!ctx->theTypeId()->singleTypeId(0)->typeSpecifierSeq()->pointerOperator().empty())
			CppAdvanceCompilerError("Compile-time constant cannot be pointer", 
				ctx->theTypeId()->singleTypeId(0)->typeSpecifierSeq()->pointerOperator()[0]->getStart());
	}

	if (!functionBody && firstPass)
	{
		CppAdvanceParser::AccessSpecifierContext* acc = nullptr;
		CppAdvanceParser::AttributeSpecifierSeqContext* attributes = nullptr;
		std::optional<AccessSpecifier> access = std::nullopt;
		if (!isTypeDefinitionBody())
		{
			if (auto block = reinterpret_cast<CppAdvanceParser::BlockDeclarationContext*>(ctx->parent))
			{
				if (auto decl = reinterpret_cast<CppAdvanceParser::DeclarationContext*>(block->parent))
				{
					acc = decl->accessSpecifier();
                    attributes = decl->attributeSpecifierSeq();
				}
			}
		}
		else
		{
			if (auto block = reinterpret_cast<CppAdvanceParser::MemberBlockDeclarationContext*>(ctx->parent))
			{
				if (auto decl = reinterpret_cast<CppAdvanceParser::StructMemberDeclarationContext*>(block->parent)) {
					if (decl->protectedInternal())
						CppAdvanceCompilerError("Cannot to declare protected internal constant", decl->protectedInternal()->getStart());
					acc = decl->accessSpecifier();
                    attributes = decl->attributeSpecifierSeq();
				}
			}
		}

		if (acc)
		{
			if (currentAccessSpecifier.top())
				CppAdvanceCompilerError("Cannot to redefine access specifier", acc->getStart());
			if (acc->Public())
			{
				access = AccessSpecifier::Public;
			}
			else if (acc->Protected())
			{
				if (isTypeDefinitionBody() && currentTypeKind.top() != TypeKind::Class)
					CppAdvanceCompilerError("Cannot to declare protected member outside the class", acc->Protected()->getSymbol());
				access = AccessSpecifier::Protected;
			}
			else if (acc->Private())
			{
				access = AccessSpecifier::Private;
			}
			else if (acc->Internal())
			{
				CppAdvanceCompilerError("Compile-time constant cannot be internal (use public, protected or private to the access setup)", acc->Internal()->getSymbol());
			}
		}

		if (currentAccessSpecifier.top()) access = currentAccessSpecifier.top();
		if (!access) {
			access = AccessSpecifier::Public;
		}
		if (!isTypeDefinitionBody())
		{
			if (*access == AccessSpecifier::Protected) protectedSymbols.insert(ctx->Identifier()->getText());
			globalConstants.emplace_back(ConstantDefinition{ ctx->Identifier()->getText(), ctx->templateParams(), ctx->theTypeId(), 
				{ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()}, ctx->initializerClause(), 
				attributes, *access, getCurrentCompilationCondition(), ""});
		}
		else
		{
			structStack.top()->constants.emplace_back(ConstantDefinition{ ctx->Identifier()->getText(), ctx->templateParams(), ctx->theTypeId(),
				{ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()}, ctx->initializerClause(),
				attributes, *access, getCurrentCompilationCondition(), getCurrentFullTypeName() });
		}
	}
}

void CppAdvanceSema::enterAliasDeclaration(CppAdvanceParser::AliasDeclarationContext* ctx)
{
	//if (firstPass == functionBody) return;
	auto name = ctx->Identifier()->getText();
	aliasTable[name] = ctx->theTypeId()->getText();
	typeset.insert(name);
	if(!functionBody && !isTypeDefinitionBody())
		typeset.globalTypes.insert(name);

	if (!functionBody && firstPass)
	{
		if (isTypeDefinitionBody())
		{
			aliasTable.globalAliasTable[currentType+"." + name] = ctx->theTypeId()->getText();
			typeset.globalTypes.insert(currentType + "." + name);
		}
		CppAdvanceParser::AccessSpecifierContext* acc = nullptr;
		std::optional<AccessSpecifier> access = std::nullopt;
		if (auto block = dynamic_cast<CppAdvanceParser::BlockDeclarationContext*>(ctx->parent))
		{
			if (auto decl = dynamic_cast<CppAdvanceParser::DeclarationContext*>(block->parent))
			{
				acc = decl->accessSpecifier();
				
			}
		}
		else if (auto block = dynamic_cast<CppAdvanceParser::MemberBlockDeclarationContext*>(ctx->parent))
		{
			if (auto decl = dynamic_cast<CppAdvanceParser::StructMemberDeclarationContext*>(block->parent))
			{
				if (decl->protectedInternal())
					CppAdvanceCompilerError("Cannot to declare protected internal alias", decl->protectedInternal()->getStart());
				acc = decl->accessSpecifier();
			}
		}
		if (acc)
		{
			if (currentAccessSpecifier.top())
				CppAdvanceCompilerError("Cannot to redefine access specifier", acc->getStart());
			if (acc->Public())
			{
				access = AccessSpecifier::Public;
			}
			else if (acc->Protected())
			{
				access = AccessSpecifier::Protected;
			}
			else if (acc->Private())
			{
				access = AccessSpecifier::Private;
			}
			else if (acc->Internal())
			{
				CppAdvanceCompilerError("Type alias cannot be internal (use public, protected or private to the access setup)", acc->Internal()->getSymbol());
			}
		}

		if (currentAccessSpecifier.top()) access = currentAccessSpecifier.top();
		if (!access) {
			if (isTypeDefinitionBody())
				access = AccessSpecifier::Private;
			else
				access = AccessSpecifier::Public;
		}
		if (*access == AccessSpecifier::Protected) {
			protectedSymbols.insert(name);
			if (isTypeDefinitionBody() && currentTypeKind.top() != TypeKind::Class)
				CppAdvanceCompilerError("Cannot to declare protected member outside the class body", acc->Protected()->getSymbol());
		}
		if (unsafeDepth > 0) {
			cppParser.unsafeTypes.insert(name);
			if (isTypeDefinitionBody())
				cppParser.unsafeTypes.insert(currentType + "." + name);
		}

		if (!isTypeDefinitionBody())
		{
			globalTypeAliases.emplace_back(TypeAliasDefinition{ name, ctx->templateParams(), ctx->theTypeId(), {ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()}, *access, getCurrentCompilationCondition(), unsafeDepth > 0 });
		}
		else
		{
			structStack.top()->typeAliases.emplace_back(TypeAliasDefinition{ name, ctx->templateParams(), ctx->theTypeId(), {ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()}, *access, getCurrentCompilationCondition(), unsafeDepth > 0 });
		}
	}
}

void CppAdvanceSema::enterSimpleTypeSpecifier(CppAdvanceParser::SimpleTypeSpecifierContext* ctx)
{
	if (unsafeDepth <= 0)
	{
		if (ctx->typename_())
		{
			auto txt = ctx->getText();
			if (txt.find('<') != txt.npos) txt = txt.substr(0, txt.rfind('<'));
			if (cppParser.unsafeTypes.contains(txt))
				CppAdvanceCompilerError("Cannot to use unsafe type in the safe context", ctx->typename_()->getStart());
		}
	}
	if (ctx->Self() && !isTypeDefinitionBody())
		CppAdvanceCompilerError("Cannot to use self type alias outside the type body", ctx->Self()->getSymbol());
}

void CppAdvanceSema::enterCondition(CppAdvanceParser::ConditionContext*)
{
	isCondition = true;
}

void CppAdvanceSema::exitCondition(CppAdvanceParser::ConditionContext*)
{
	isCondition = false;
}

void CppAdvanceSema::enterVersionDefinition(CppAdvanceParser::VersionDefinitionContext* ctx)
{
	if (firstPass)
	{
		std::optional<AccessSpecifier> access = std::nullopt;
		if (currentAccessSpecifier.top()) {
			if (ctx->accessSpecifier())
				CppAdvanceCompilerError("Cannot to re-define access specifer", ctx->accessSpecifier()->getStart());
			access = currentAccessSpecifier.top();
		}
		else if (auto acc = ctx->accessSpecifier())
		{
			if (acc->Public())
			{
				access = AccessSpecifier::Public;
			}
			else if (acc->Protected())
			{
				access = AccessSpecifier::Protected;
				protectedVersions.insert(ctx->Identifier()->getText());
			}
			else if (acc->Private())
			{
				access = AccessSpecifier::Private;
			}
			else if (acc->Internal())
			{
				CppAdvanceCompilerError("Version cannot be internal (use public, protected or private to the access setup)", ctx->accessSpecifier()->getStart());
			}
		}
		if (!access) access = AccessSpecifier::Private;
		int64_t value = 1;
		if (auto lit = ctx->IntegerLiteral())
		{
			auto txt = lit->getText();
			std::from_chars(txt.c_str(), txt.c_str() + txt.size(), value);
		}
		else if (auto lit = ctx->BooleanLiteral())
		{
			auto txt = lit->getText();
			if (txt == "true") value = 1;
			else value = 0;
		}
		versions.emplace_back(Version{ ctx->Identifier()->getText(), value, {ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()}, *access, getCurrentCompilationCondition(), (bool)ctx->Default() });
	}
}

void CppAdvanceSema::enterVersionConditionalDeclaration(CppAdvanceParser::VersionConditionalDeclarationContext* ctx)
{
	std::string result;
	if (auto condition = ctx->condition())
	{
		auto interval = condition->getSourceInterval();
		for (size_t i = interval.a; i <= interval.b; ++i)
		{
			auto token = parser->getTokenStream()->get(i);
			if (token->getType() == CppAdvanceParser::Identifier)
			{
				auto id = token->getText();
				result += "ADV_VERSION_" + (protectedVersions.contains(id) ? ("__" + StringUpper(filename) + "_PROTECTED_") : "") + id;
			}
			else
			{
				result += token->getText();
			}
			result += " ";
		}
	}
	else if (ctx->Debug())
	{
		if (ctx->not_()) result += "!";
		if (auto id = ctx->Identifier())
		{
			result += "ADV_DEBUG_";
			result += id->getText();
		}
		else
		{
			result += "_DEBUG";
		}
	}
	conditionStack.push(result);
}

void CppAdvanceSema::exitVersionConditionalDeclaration(CppAdvanceParser::VersionConditionalDeclarationContext* ctx)
{
	conditionStack.pop();
}

void CppAdvanceSema::enterVersionElseDeclaration(CppAdvanceParser::VersionElseDeclarationContext* ctx)
{
	conditionStack.top() = "!(" +conditionStack.top()+ ")";
}

void CppAdvanceSema::enterWhileCondition(CppAdvanceParser::WhileConditionContext*)
{
	isCondition = true;
}

void CppAdvanceSema::exitWhileCondition(CppAdvanceParser::WhileConditionContext*)
{
	isCondition = false;
}

void CppAdvanceSema::enterDoWhileCondition(CppAdvanceParser::DoWhileConditionContext*)
{
	isCondition = true;
}

void CppAdvanceSema::exitDoWhileCondition(CppAdvanceParser::DoWhileConditionContext*)
{
	isCondition = false;
}

void CppAdvanceSema::enterExceptionHandler(CppAdvanceParser::ExceptionHandlerContext*)
{
	isCatch = true;
}

void CppAdvanceSema::exitExceptionHandler(CppAdvanceParser::ExceptionHandlerContext*)
{
	isCatch = false;
}

void CppAdvanceSema::enterThrowExpression(CppAdvanceParser::ThrowExpressionContext* ctx)
{
	if (!isCatch && !ctx->assignmentExpression())
		CppAdvanceCompilerError("Cannot to re-throw exception outside the catch block", ctx->start);
}

void CppAdvanceSema::enterFunctionDefinition(CppAdvanceParser::FunctionDefinitionContext* ctx)
{
	//if (firstPass == functionBody) return;
	symbolContexts.push(symbolContexts.top());
	bool isInline = false;
	bool isStatic = false;
	bool isConstexpr = false;
	bool isConsteval = false;
	bool isUnsafe = false;
	bool isMutating = false;
	bool isVirtual = false;
	bool isOverride = false;
	bool isFinal = false;
	bool isRefReturn = false;
	bool isConstReturn = false;
	bool isForwardReturn = false;
	bool isCommutative = false;
	bool isMain = false;
	int8_t varargDepth = -1;
	CppAdvanceParser::TheTypeIdContext* returnType = nullptr;
	CppAdvanceParser::ExprContext* expression = nullptr;
	CppAdvanceParser::FunctionParamsContext* params = ctx->functionParams();
	CppAdvanceParser::TemplateParamsContext* templateParams = ctx->templateParams();
	CppAdvanceParser::TemplateArgumentListContext* templateSpecializationArgs = nullptr;
	CppAdvanceParser::ConstraintClauseContext* constraints = ctx->constraintClause();
	CppAdvanceParser::ExceptionSpecificationContext* exceptions = ctx->exceptionSpecification();
	CppAdvanceParser::AttributeSpecifierSeqContext* attributes = nullptr;

	for (auto spec : ctx->functionSpecifier()) {
		if (spec->Inline()) isInline = true;
		else if (spec->Consteval()) isConsteval = true;
		else if (spec->Unsafe()) {
			isUnsafe = true;
			if (unsafeDepth > 0)
				CppAdvanceCompilerError("Unsafe context recursion", spec->Unsafe()->getSymbol());
			else if (functionBody > 0)
				CppAdvanceCompilerError("Local function cannot be directly marked as unsafe, use unsafe block", spec->Unsafe()->getSymbol());
		}
		else if (spec->Static()) {
            isStatic = true;
			if (!isTypeDefinitionBody() || isFriendDefinition)
				CppAdvanceCompilerError("Global functions are implicitly static", spec->Static()->getSymbol());
		}
		else if (spec->Mutable())
		{
			isMutating = true;
			if (!isTypeDefinitionBody() || isFriendDefinition)
				CppAdvanceCompilerError("Global function cannot be mutating", spec->Mutable()->getSymbol());
			if (currentTypeKind.top() == TypeKind::Class || 
				currentTypeKind.top() == TypeKind::StaticClass ||
				currentTypeKind.top() == TypeKind::Interface)
				CppAdvanceCompilerError("Method of the reference type is implicitly mutating", spec->Mutable()->getSymbol());
			if (currentTypeKind.top() == TypeKind::Enum || currentTypeKind.top() == TypeKind::EnumClass)
				CppAdvanceCompilerError("Enums are immutable. They cannot contain a mutating method", spec->Mutable()->getSymbol());
			if (currentTypeKind.top() == TypeKind::Union)
				CppAdvanceCompilerError("Unions are immutable. They cannot contain a mutating method", spec->Mutable()->getSymbol());
		}
		else if (spec->Virtual())
		{
			isVirtual = true;
			if (!isTypeDefinitionBody() || isFriendDefinition)
				CppAdvanceCompilerError("Global function cannot be virtual", spec->Virtual()->getSymbol());
			else if(currentTypeKind.top() != TypeKind::Class)
				CppAdvanceCompilerError("Cannot to declare virtual method outside the class body", spec->Virtual()->getSymbol());
			else if(functionBody > 0)
				CppAdvanceCompilerError("Local function cannot be virtual", spec->Virtual()->getSymbol());
		}
		else if (spec->Override())
		{
			isOverride = true;
			if (!isTypeDefinitionBody() || isFriendDefinition)
				CppAdvanceCompilerError("Global function cannot be overrided", spec->Override()->getSymbol());
			if (currentTypeKind.top() == TypeKind::StaticClass)
				CppAdvanceCompilerError("Static class method cannot be overrided", spec->Override()->getSymbol());
			if (currentTypeKind.top() == TypeKind::Interface)
				CppAdvanceCompilerError("Interface method cannot be overrided", spec->Override()->getSymbol());
			if (currentTypeKind.top() == TypeKind::Extension)
				CppAdvanceCompilerError("Extension method cannot be overrided", spec->Override()->getSymbol());
			if (functionBody > 0)
				CppAdvanceCompilerError("Local function cannot be overrided", spec->Override()->getSymbol());
		}
		else if (spec->Final())
		{
			isFinal = true;
			if (!isTypeDefinitionBody() || isFriendDefinition)
				CppAdvanceCompilerError("Global function cannot be final", spec->Final()->getSymbol());
			else if (currentTypeKind.top() != TypeKind::Class && currentTypeKind.top() != TypeKind::Interface)
				CppAdvanceCompilerError("Cannot to declare final method outside the class/interface body", spec->Final()->getSymbol());
			else if (functionBody > 0)
				CppAdvanceCompilerError("Local function cannot be final", spec->Virtual()->getSymbol());
		}
	}

	if (ctx->shortFunctionBody())
	{
		expression = ctx->shortFunctionBody()->expressionStatement()->expr();
	}

	if (!isUnsafe && unsafeDepth > 0) isUnsafe = true;
    if (isUnsafe && unsafeDepth <= 0) unsafeDepth++;

	if (!firstPass)
	{
		initStates.push(InitState{});
		if (auto decl = params->paramDeclClause()) {
			auto declList = decl->paramDeclList();
			for (auto param : declList->paramDeclaration())
			{
				auto id = param->Identifier()->getText();
				if (auto spec = param->paramSpecification(); spec && spec->Out()) {
					if (ctx->shortFunctionBody())
						CppAdvanceCompilerError("Arrow functions doesn't support out parameters", spec->Out()->getSymbol());
					outParams.insert(id);
					initStates.top().potentiallyAssigned.insert(id);
				}

				if (functionBody > 0 && !param->theTypeId())
				{
					CppAdvanceCompilerError("Local function must have defined types for all params", param->getStop());
				}
			}
		}

		if (auto ret = ctx->returnType())
		{
			if (auto idc = ret->Identifier())
			{
				if (ctx->shortFunctionBody())
					CppAdvanceCompilerError("Arrow functions doesn't support named returns", idc->getSymbol());
				auto id = idc->getText();
				outParams.insert(id);
				initStates.top().potentiallyAssigned.insert(id);
			}
			else if (ret->theTypeId() && ret->theTypeId()->VertLine().empty() 
				&& ret->theTypeId()->singleTypeId(0)->typeSpecifierSeq() 
				&& ret->theTypeId()->singleTypeId(0)->typeSpecifierSeq()->simpleTypeSpecifier())
			{
				auto tup = ret->theTypeId()->singleTypeId(0)->typeSpecifierSeq()->simpleTypeSpecifier()->namedTupleField();
				for (auto element : tup)
				{
					auto id = element->Identifier()->getText();
					outParams.insert(id);
					initStates.top().potentiallyAssigned.insert(id);
				}
			}
		}
		if (constraints && !templateParams)
		{
			CppAdvanceCompilerError("Only generic function can have constraints", constraints->Where()->getSymbol());
		}

		if (functionBody > 0)
		{
			if (ctx->simpleTemplateId())
			{
				CppAdvanceCompilerError("Local function cannot be specialization", ctx->simpleTemplateId()->getStart());
			}
			if (ctx->operatorFunctionId())
			{
				CppAdvanceCompilerError("Local function cannot be operator overloading", ctx->operatorFunctionId()->getStart());
			}
			if (ctx->shortFunctionBody() && !ctx->returnType())
			{
				CppAdvanceCompilerError("Local function must have defined return type", ctx->functionParams()->getStop());
			}
		}
	}

	if (firstPass && !functionBody) {
		if (isTypeDefinitionBody())
		{
			if (currentTypeKind.top() == TypeKind::StaticClass) {
				isStatic = true;
			}
			else if (currentTypeKind.top() == TypeKind::UnionStruct && !isStatic && !isUnsafe) {
				CppAdvanceCompilerError("Raw union instance method cannot be safe, it requires an unsafe specifier", ctx->getStart());
			}
		}

		if (isStatic) {
			if (isMutating)
				CppAdvanceCompilerError("Static method cannot be mutating", ctx->getStart());
			if (isVirtual || isOverride)
				CppAdvanceCompilerError("Static method cannot be virtual or override", ctx->getStart());

			if (currentTypeKind.top() == TypeKind::Interface)
			{
				if (!isFinal)
					CppAdvanceCompilerError("Not-final static method in the interface cannot have body", ctx->getStart());
			}
			else if (isFinal) 
			{
				CppAdvanceCompilerError("Static method cannot be final outside the interface body", ctx->getStart());
			}
		}

		int lifetimes = 0;
		int paramCount = 0;
		std::string firstParamType;
		if (auto decl = params->paramDeclClause())
		{
			bool isDefault = false;
			auto declList = decl->paramDeclList();
			if (decl->Ellipsis() && !templateParams) {
				if (ctx->Identifier()) {
					varargDepth = declList->paramDeclaration().size() - 1;
					cppParser.varargFunctions[ctx->Identifier()->getText()] = varargDepth;
				}
				else
				{
					CppAdvanceCompilerError("Operator function cannot to have a variadic arguments length", decl->Ellipsis()->getSymbol());
				}
			}
			paramCount = declList->paramDeclaration().size();
			if (auto t = declList->paramDeclaration(0)->theTypeId())
			{
				firstParamType = t->getText();
			}

			for (auto param : declList->paramDeclaration())
			{
				if (param->LifetimeAnnotation()) ++lifetimes;
				if (param->initializerClause())
				{
					isDefault = true;
					if (auto spec = param->paramSpecification()) {
						if (spec->Inout() || spec->Ref() || spec->Out())
							CppAdvanceCompilerError("Mutable reference parameters cannot have default value", param->initializerClause()->getStart());
					}
				}
				else if (isDefault)
				{
					CppAdvanceCompilerError("Default function parameters must be located at the end of the parameter list", param->Identifier()->getSymbol());
				}
			}
		}

		if (auto ret = ctx->returnType())
		{
			if (isTypeDefinitionBody() && ctx->LifetimeAnnotation()) lifetimes++;
			returnType = ret->theTypeId();
			if (ret->Const()) isConstReturn = true;
			if (ret->Ref()) {
				isRefReturn = true;
				//if (lifetimes <= 1 && ctx->functionParams()->paramDeclClause())
					//CppAdvanceCompilerError("A function that returns a reference must have object lifetime annotations (for arguments or method owner).", ret->Ref()->getSymbol());
			}
			if (ret->Forward())
				isForwardReturn = true;
		}

		bool isDefault = false;
		if (auto body = ctx->functionBody())
		{
			if (body->Assign()) isInline = true;
			else if (body->Equal()) isConstexpr = true;
			if (isTypeDefinitionBody() && currentTypeKind.top() == TypeKind::Interface)
				isDefault = true;
		}
		else if (auto body = ctx->shortFunctionBody())
		{
			if (body->AssignArrow()) isInline = true;
			else if (body->EqualArrow()) isConstexpr = true;
			if (isTypeDefinitionBody() && currentTypeKind.top() == TypeKind::Interface)
				isDefault = true;
		}

		if (auto tid = ctx->simpleTemplateId())
		{
			templateSpecializationArgs = tid->templateArgumentList();
		}

		if ((templateParams || templateSpecializationArgs) && isTypeDefinitionBody())
		{
			if (currentTypeKind.top() == TypeKind::Interface)
				CppAdvanceCompilerError("Interface method cannot be generic", ctx->getStart());
			else if(currentTypeKind.top() == TypeKind::Extension && isStatic)
				CppAdvanceCompilerError("Static extension method cannot be generic", ctx->getStart());
		}

		CppAdvanceParser::AccessSpecifierContext* acc = nullptr;
		std::optional<AccessSpecifier> access = std::nullopt;
		bool isProtectedInternal = false;
		if (!isTypeDefinitionBody())
		{
			if (auto decl = reinterpret_cast<CppAdvanceParser::DeclarationContext*>(ctx->parent))
			{
				if (decl->accessSpecifier())
				{
					acc = decl->accessSpecifier();
				}
				attributes = decl->attributeSpecifierSeq();
			}
		}
		else if (currentTypeKind.top() == TypeKind::Enum || currentTypeKind.top() == TypeKind::Union)
		{
			if (auto decl = reinterpret_cast<CppAdvanceParser::EnumMemberDeclarationContext*>(ctx->parent))
			{
				if (decl->accessSpecifier())
				{
					acc = decl->accessSpecifier();
				}
				attributes = decl->attributeSpecifierSeq();
			}
		}
		else if (currentTypeKind.top() == TypeKind::Extension)
		{
			if (auto decl = reinterpret_cast<CppAdvanceParser::ExtensionMemberDeclarationContext*>(ctx->parent))
			{
				attributes = decl->attributeSpecifierSeq();
			}
		}
		else if (auto decl = reinterpret_cast<CppAdvanceParser::StructMemberDeclarationContext*>(ctx->parent))
		{
			isProtectedInternal = decl->protectedInternal();
			if (decl->accessSpecifier())
			{
				acc = decl->accessSpecifier();
			}
			attributes = decl->attributeSpecifierSeq();
		}
		
		if (acc)
		{
			if (currentAccessSpecifier.top())
				CppAdvanceCompilerError("Cannot to redefine access specifier", acc->getStart());
			if (acc->Public())
			{
				access = AccessSpecifier::Public;
			}
			else if (acc->Protected())
			{
				if (isTypeDefinitionBody() && currentTypeKind.top() != TypeKind::Class)
					CppAdvanceCompilerError("Cannot to declare protected member outside the class body", acc->getStart());
				access = AccessSpecifier::Protected;
			}
			else if (acc->Private())
			{
				access = AccessSpecifier::Private;
			}
			else if (acc->Internal())
			{
				access = AccessSpecifier::Internal;
			}
		}
		else if (isProtectedInternal)
		{
			if (currentAccessSpecifier.top())
				CppAdvanceCompilerError("Cannot to redefine access specifier", acc->getStart());
			if (isTypeDefinitionBody() && currentTypeKind.top() != TypeKind::Class)
				CppAdvanceCompilerError("Cannot to declare protected internal member outside the class body", ctx->getStart());
			access = AccessSpecifier::ProtectedInternal;
		}

		if (isTypeDefinitionBody())
		{
			if (currentTypeKind.top() == TypeKind::Interface) {
				access = AccessSpecifier::Public;
			}
			else if (currentTypeKind.top() == TypeKind::Extension) {
				access = structStack.top()->access;
			}
		}
		else if (ctx->Identifier() && ctx->Identifier()->getText() == "main")
		{
			isMain = true;
			if (access)
			{
				CppAdvanceCompilerError("Main function cannot have an explicit access specifier", ctx->getStart());
			}
			else
			{
				access = AccessSpecifier::Private;
			}

			if (paramCount > 1 || !firstParamType.empty() && firstParamType != "str[]")
			{
				CppAdvanceCompilerError("Main function can have only one parameter of the type str[]", 
					ctx->functionParams()->paramDeclClause()->paramDeclList()->paramDeclaration().back()->getStop());
			}

			if (returnType && returnType->getText() != "i32")
			{
				CppAdvanceCompilerError("Main function can return only i32 value", returnType->getStart());
			}
		}


		if (!isFriendDefinition) {
			if (currentAccessSpecifier.top()) access = currentAccessSpecifier.top();
			if (!access) access = AccessSpecifier::Internal;
		}
		else
		{
			access = structStack.top()->access;
		}
		std::string id;
		bool isOperator = false;
		if (isMain)
		{
			id = "__Astrum_Main";
		}
		else if (ctx->Identifier()) {
			id = ctx->Identifier()->getText();
		}
		else if (ctx->simpleTemplateId()) {
			id = ctx->simpleTemplateId()->templateName()->Identifier()->getText();
		}
		else if (ctx->operatorFunctionId()) {
			if (isTypeDefinitionBody() && currentTypeKind.top() == TypeKind::StaticClass)
				CppAdvanceCompilerError("Static class cannot overload operators", ctx->operatorFunctionId()->getStart());
			id = ctx->operatorFunctionId()->getText(); 
			auto op = ctx->operatorFunctionId()->operator_();
			if (op->Exclamation()) id = "operator*";
			StringReplace(id, "operator", "operator ");
			isOperator = true;
			if (ctx->operatorFunctionId()->operator_()->New())
			{
				if (isTypeDefinitionBody()) {
					if (!isStatic)
						CppAdvanceCompilerError("Operator new/delete overloading must be static", ctx->operatorFunctionId()->getStop());
					if (currentTypeKind.top() != TypeKind::Class)
						CppAdvanceCompilerError("Operator new/delete overloading supports only for classes", ctx->operatorFunctionId()->getStop());
				}
				if (!returnType || returnType->getText() != "Pointer")
					CppAdvanceCompilerError("Operator new must return Pointer", ctx->operatorFunctionId()->getStop());
				if (params->paramDeclClause()) {
					auto paramsDecl = params->paramDeclClause()->paramDeclList()->paramDeclaration();
					if (paramsDecl.size() > 1 || paramsDecl[0]->theTypeId() && paramsDecl[0]->theTypeId()->getText() != "usize")
						CppAdvanceCompilerError("Operator can receive only one parameter of the type usize", ctx->operatorFunctionId()->getStop());
				}
			} else if (ctx->operatorFunctionId()->operator_()->Delete())
			{
				if (isTypeDefinitionBody()) {
					if (!isStatic)
						CppAdvanceCompilerError("Operator new/delete overloading must be static", ctx->operatorFunctionId()->getStop());
					if (currentTypeKind.top() != TypeKind::Class)
						CppAdvanceCompilerError("Operator new/delete overloading supports only for classes", ctx->operatorFunctionId()->getStop());
				}
				if (returnType)
					CppAdvanceCompilerError("Operator delete cannot return nothing", ctx->returnType()->getStop());
				if (params->paramDeclClause()) {
					auto paramsDecl = params->paramDeclClause()->paramDeclList()->paramDeclaration();
					if (paramsDecl.size() > 2 || paramsDecl[0]->theTypeId() && paramsDecl[0]->theTypeId()->getText() != "Pointer")
						CppAdvanceCompilerError("Operator delete must receive parameter of the type Pointer", ctx->operatorFunctionId()->getStop());
				}
				else {
					CppAdvanceCompilerError("Operator delete must receive parameter of the type Pointer", ctx->operatorFunctionId()->getStop());
				}
			}
			else if (op->In())
			{
				id = "_operator_in";
			}
			else if (op->DoubleCaret() || op->Tilde() || op->TildeAssign() || op->DoubleStar() || op->DoubleStarAssign() || op->Greater().size() > 2
				|| op->SignedRightShiftAssign()
				|| op->Op1() || op->Op2() || op->Op3() || op->Op4() || op->Op5() || op->Op6() || op->Op7() || op->Op8() || op->Op9() || op->Op10())
			{
				id = getCustomOperatorName(op->getText());
			}
		}
		if (isOperator && !id.ends_with("new") && !id.ends_with("delete"))
			StringReplace(id, " ", "");

		if (ctx->operatorFunctionId() && attributes)
		{
			for (auto attr : attributes->attributeSpecifier())
			{
				if (attr->Identifier()->getText() == "AllowPostfix" || attr->Identifier()->getText() == "Commutative")
					isCommutative = true;
			}
		}

		if (isCommutative && !isTypeDefinitionBody() && params && !params->paramDeclClause())
			CppAdvanceCompilerError("Operator function should have parameters", ctx->functionParams()->getStart());

		if (!isTypeDefinitionBody() || isFriendDefinition)
		{
			if (*access == AccessSpecifier::Protected && !isOperator) protectedSymbols.insert(id);
			if (isFriendDefinition) isInline = true;
			auto def = FunctionDefinition{ id, templateParams, templateSpecializationArgs, constraints, params, returnType, expression, exceptions, attributes,
				{ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()}, *access, getCurrentCompilationCondition(),
				isInline || isConstexpr, isConstexpr, isConsteval, isUnsafe, isRefReturn, isConstReturn, isForwardReturn, isCommutative, varargDepth };
			if (isFriendDefinition)
			{
				structStack.top()->friendFuncDefinitions.emplace_back(def);
			}
			globalFunctions.emplace_back(def);
		}
		else
		{
			auto lastTparams = getLastTypeTemplateParams();
			auto lastSpec = getLastTypeTemplateSpecializationArgs();
			auto lastConstraints = getLastTypeConstraints();
			auto fullType = getCurrentFullTypeName();
			structStack.top()->methods.emplace_back(
				MethodDefinition{ id, templateParams, templateSpecializationArgs, constraints, params, returnType, expression, exceptions, attributes,
				{ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()}, *access, getCurrentCompilationCondition(), 
				isInline || isConstexpr, isConstexpr, isConsteval, isUnsafe, isRefReturn, isConstReturn, isForwardReturn, isCommutative, varargDepth, 
				currentType, fullType, lastTparams, lastSpec, lastConstraints, nullptr, isProtectedTypeDefinition, isUnsafeTypeDefinition, isDefault,
				isMutating, isStatic, isVirtual,
				isOverride, false, isFinal});
			methods.insert_or_assign(SourcePosition{ctx->getStart()->getLine(),ctx->getStart()->getCharPositionInLine()},
				MethodDefinition{ id, templateParams, templateSpecializationArgs, constraints, params, returnType, expression, exceptions,attributes,
				{ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()}, 
				isPrivateTypeDefinition ? AccessSpecifier::Private : AccessSpecifier::Internal, getCurrentCompilationCondition(),
				isInline || isConstexpr, isConstexpr, isConsteval, isUnsafe, isRefReturn, isConstReturn, isForwardReturn, isCommutative, varargDepth,
				currentType, fullType, lastTparams, lastSpec, lastConstraints, nullptr, isProtectedTypeDefinition, isUnsafeTypeDefinition, isDefault,
				isMutating, isStatic, isVirtual,
				isOverride && currentTypeKind.top() == TypeKind::Class, false, isFinal && currentTypeKind.top() == TypeKind::Class });
		}
	}
}

void CppAdvanceSema::enterShortFunctionBody(CppAdvanceParser::ShortFunctionBodyContext*)
{
	functionBody++;
	++depth;
}

void CppAdvanceSema::exitShortFunctionBody(CppAdvanceParser::ShortFunctionBodyContext*)
{
	--depth;
	--functionBody;
}

void CppAdvanceSema::exitFunctionDefinition(CppAdvanceParser::FunctionDefinitionContext* ctx)
{
	//if (firstPass == functionBody) return;
	if (firstPass != functionBody > 0) {
		std::string funcname;
		if (!currentType.empty() && !isFriendDefinition) funcname += currentType + ".";
		if (ctx->Identifier())
			funcname += ctx->Identifier()->getText();
		else if (ctx->simpleTemplateId())
			funcname += ctx->simpleTemplateId()->templateName()->Identifier()->getText();
		else if (ctx->operatorFunctionId())
			funcname += ctx->operatorFunctionId()->getText();
		if (ctx->returnType())
		{
			/*auto ret = ctx->returnType()->getText();
			StringReplace(ret, "const ", "");
			StringReplace(ret, "ref ", "");*/
			functionTable[funcname] = contextTypes[ctx->returnType()];
		}
		else if (ctx->functionBody()) {
			functionTable[funcname] = "void";
		}
		auto funcnameWithParams = funcname + "/";
		if (auto params = ctx->functionParams()->paramDeclClause()) {
			std::string args;
			bool first = true;
			for (auto param : params->paramDeclList()->paramDeclaration()) {
				if (!first) {
					args += ",,";
					funcnameWithParams += ",,";
				}
				auto id = param->Identifier()->getText();
				args += id;
				funcnameWithParams += contextTypes[param->theTypeId()];
				activeDefaultParams[funcname].insert_or_assign(id, param->initializerClause());
				first = false;
			}
			if (!args.empty())
				cppParser.parametersTable[funcname].insert(args);
		}
		if (unsafeDepth > 0)
			cppParser.unsafeFunctions.insert(funcnameWithParams);
	}
	auto specs = ctx->functionSpecifier();
	if (std::any_of(specs.begin(), specs.end(), [&](auto spec) ->bool { return spec->Unsafe(); }))
        --unsafeDepth;

	if (!firstPass)
	{
		auto currentState = initStates.top();
		for (const auto& param : outParams)
		{
			if (currentState.definitelyAssigned.find(param) == currentState.definitelyAssigned.end())
			{
				CppAdvanceCompilerError(std::format("Out parameter {} was not initialized on all execution flow", param), ctx->getStop());
			}
		}
		initStates.pop();
	}
	outParams.clear();
	symbolContexts.pop();
}

void CppAdvanceSema::exitPrimaryExpression(CppAdvanceParser::PrimaryExpressionContext* ctx)
{
	if (ctx->This()) {
		typeStack.push(currentType);
	}
	else if (ctx->Type())
	{
		typeStack.push("System.Type");
	}
}

void CppAdvanceSema::exitNestedNameSpecifier(CppAdvanceParser::NestedNameSpecifierContext* ctx)
{
	if (firstPass && functionBody) return;
	if (auto name = ctx->typename_()) {
		auto txt = name->getText();
		auto pos = txt.find('<');
		if (pos != txt.npos && !txt.starts_with("std.tuple<")) {
			currentSubtype = txt.substr(pos+1,txt.rfind('>')-pos-1);
			txt = txt.substr(0, pos);
		}
		if (aliasTable.contains(txt))
		{
			txt = aliasTable[txt];
			pos = txt.find('<');
			if (pos != txt.npos && !txt.starts_with("std.tuple<")) {
				currentSubtype = txt.substr(pos + 1, txt.rfind('>') - pos - 1);
				currentSubtype = currentSubtype.substr(0, currentSubtype.find(','));
				txt = txt.substr(0, pos);
			}
			typeStack.push(txt);
			//std::cout << typeStack.top() << std::endl;
		}
		else if (typeset.contains(txt)) {
			typeStack.push(txt);
			//std::cout << typeStack.top() << std::endl;
		}
		else if (symbolTable.contains(txt))
		{
			txt = symbolTable[txt];
			pos = txt.find('<');
			if (pos != txt.npos && !txt.starts_with("std.tuple<")) {
				currentSubtype = txt.substr(pos + 1, txt.rfind('>') - pos - 1);
				currentSubtype = currentSubtype.substr(0, currentSubtype.find(','));
				txt = txt.substr(0, pos);
			}
			typeStack.push(txt);
			//std::cout << typeStack.top() << std::endl;
		}
	}
	else if (auto name = ctx->namespaceName()) {
		auto txt = name->getText();
		if (aliasTable.contains(txt))
		{
			typeStack.push(aliasTable[txt]);
			//std::cout << typeStack.top() << std::endl;
		}
		else if (typeset.contains(txt)) {
			typeStack.push(txt);
			//std::cout << typeStack.top() << std::endl;
		}
		else if (symbolTable.contains(txt))
		{
			typeStack.push(symbolTable[txt]);
			//std::cout << typeStack.top() << std::endl;
		}
	}
	else if (auto id = ctx->Identifier())
	{
		auto txt = ctx->getText();
		txt = txt.substr(0, txt.rfind('.'));
		if (aliasTable.contains(txt))
		{
			typeStack.push(aliasTable[txt]);
			//std::cout << typeStack.top() << std::endl;
		}
		else if (typeset.contains(txt)) {
			typeStack.push(txt);
			//std::cout << typeStack.top() << std::endl;
		}
		else if(symbolTable.contains(txt))
		{
			txt = symbolTable[txt];
			auto pos = txt.find('<');
			if (pos != txt.npos && !txt.starts_with("std.tuple<")) {
				currentSubtype = txt.substr(pos + 1, txt.rfind('>') - pos - 1);
				currentSubtype = currentSubtype.substr(0, currentSubtype.find(','));
				txt = txt.substr(0, pos);
			}
			typeStack.push(txt);
			//std::cout << typeStack.top() << std::endl;
		}
		else if (!typeStack.empty())
		{
			if (symbolTable.contains(typeStack.top() + "." + id->getText()))
			{
				txt = symbolTable[typeStack.top() + "." + id->getText()];
				auto pos = txt.find('<');
				if (pos != txt.npos && !txt.starts_with("std.tuple<")) {
					currentSubtype = txt.substr(pos + 1, txt.rfind('>') - pos - 1);
					currentSubtype = currentSubtype.substr(0, currentSubtype.find(','));
					txt = txt.substr(0, pos);
				}
				typeStack.push(txt);
				//std::cout << typeStack.top() << std::endl;
			}
		}
	}
	else if (auto id = ctx->simpleTemplateId())
	{
		auto txt = ctx->getText();
		txt = txt.substr(0, txt.rfind('.'));
		auto pos = txt.find('<');
		if (pos != txt.npos) {
			currentSubtype = txt.substr(pos+1,txt.rfind('>')-pos-1);
			txt = txt.substr(0, pos);
		}
		if (aliasTable.contains(txt))
		{
			typeStack.push(aliasTable[txt]);
			//std::cout << typeStack.top() << std::endl;
		}
		else if (typeset.contains(txt)) {
			typeStack.push(txt);
			//std::cout << typeStack.top() << std::endl;
		}
		else if (symbolTable.contains(txt))
		{
			txt = symbolTable[txt];
			auto pos = txt.find('<');
			if (pos != txt.npos) {
				currentSubtype = txt.substr(pos + 1, txt.rfind('>') - pos - 1);
				currentSubtype = currentSubtype.substr(0, currentSubtype.find(','));
				txt = txt.substr(0, pos);
			}
			typeStack.push(symbolTable[txt]);
			//std::cout << typeStack.top() << std::endl;
		}
		else if (!typeStack.empty())
		{
			if (symbolTable.contains(typeStack.top() + "." + id->templateName()->getText()))
			{
				txt = symbolTable[typeStack.top() + "." + id->templateName()->getText()];
				auto pos = txt.find('<');
				if (pos != txt.npos) {
					currentSubtype = txt.substr(pos + 1, txt.rfind('>') - pos - 1);
					currentSubtype = currentSubtype.substr(0, currentSubtype.find(','));
					txt = txt.substr(0, pos);
				}
				typeStack.push(txt);
				//std::cout << typeStack.top() << std::endl;
			}
		}
	}
}

void CppAdvanceSema::enterNestedNameSpecifier(CppAdvanceParser::NestedNameSpecifierContext* ctx)
{
	
}

void CppAdvanceSema::enterIdExpression(CppAdvanceParser::IdExpressionContext*)
{
	
}

void CppAdvanceSema::exitIdExpression(CppAdvanceParser::IdExpressionContext* ctx)
{
	if (firstPass && functionBody) return;
	if (auto uq = ctx->unqualifiedId())
	{
		std::string txt;
		if (auto id = uq->Identifier()) txt = id->getText();
		else if (auto tid = uq->templateId())
		{
			CppAdvanceParser::TemplateArgumentListContext* args = nullptr;
			if (auto stid = tid->simpleTemplateId())
			{
				txt = stid->templateName()->getText();
				args = stid->templateArgumentList();
			}
			else
			{
				txt = tid->operatorTemplateId()->operatorFunctionId()->getText();
				if (!txt.ends_with("new") && !txt.ends_with("delete")) StringReplace(txt, " ", "");
				args = tid->operatorTemplateId()->templateArgumentList();
			}
			if (args)
			{
				currentSubtype = args->templateArgument(0)->getText();
				currentSubtype = currentSubtype.substr(0, currentSubtype.find(','));
			}
		}
		else if (auto op = uq->operatorFunctionId())
		{
			txt = op->getText();
			if (!txt.ends_with("new") && !txt.ends_with("delete")) StringReplace(txt, " ", "");
		}
		else if (auto op = uq->conversionFunctionId())
		{
			txt = op->getText();
		}
		else if (uq->Tilde()) {
			if (auto name = uq->className())
			{
				txt = uq->getText();
			}
		}
		if (aliasTable.contains(txt))
		{
			txt = aliasTable[txt];
			auto pos = txt.find('<');
			if (pos != txt.npos && !txt.starts_with("std.tuple<")) {
				currentSubtype = txt.substr(pos + 1, txt.rfind('>') - pos - 1);
				currentSubtype = currentSubtype.substr(0, currentSubtype.find(','));
				txt = txt.substr(0, pos);
			}
			typeStack.push(txt);
			//std::cout << typeStack.top() << std::endl;
		}
		else if (typeset.contains(txt)) {
			typeStack.push(txt);
			//std::cout << typeStack.top() << std::endl;
		}
		else if (symbolTable.contains(txt)) {
			txt = symbolTable[txt];
			if (aliasTable.contains(txt)) txt = aliasTable[txt];
			auto pos = txt.find('<');
			if (pos != txt.npos && !txt.starts_with("std.tuple<")) {
				currentSubtype = txt.substr(pos + 1, txt.rfind('>') - pos - 1);
				currentSubtype = currentSubtype.substr(0, currentSubtype.find(','));
				txt = txt.substr(0, pos);
			}
			typeStack.push(txt);
			//std::cout << typeStack.top() << std::endl;
		}
	}
	//else if (auto q = ctx->qualifiedId()) {
	//	auto uq = q->unqualifiedId();
	//	auto txt = q->getText();
	//	if (aliasTable.contains(txt))
	//	{
	//		typeStack.push(aliasTable[txt]);
	//		//std::cout << typeStack.top() << std::endl;
	//	}
	//	else if (typeset.contains(txt)) {
	//		typeStack.push(txt);
	//		//std::cout << typeStack.top() << std::endl;
	//	}
	//	else if (symbolTable.contains(txt)) {
	//		txt = symbolTable[txt];
	//		if (aliasTable.contains(txt)) txt = aliasTable[txt];
	//		typeStack.push(txt);
	//		//std::cout << typeStack.top() << std::endl;
	//	}
	//	else if (symbolTable.contains(typeStack.top() + "." + uq->getText())) {
	//		typeStack.push(symbolTable[typeStack.top() + "." + uq->getText()]);
	//		//std::cout << typeStack.top() << std::endl;
	//	}
	//}
	if (!typeStack.empty()) {
		contextTypes[ctx] = typeStack.top();
		//std::cout << "ctx " << ctx << ": " << typeStack.top() << std::endl;
	}
}

void CppAdvanceSema::exitPostfixExpression(CppAdvanceParser::PostfixExpressionContext* ctx)
{
	if (firstPass) {
		if (auto expr = ctx->postfixExpression())
		{
			if (optionalChains.contains(expr))
			{
				if (!optionalChains.contains(ctx))
				{
					optionalChains.insert_or_assign(ctx, 1);
				}
				else
				{
					optionalChains[ctx]++;
				}
			}
		}
		if (functionBody) return;
	}
	
	if (auto upo = ctx->unaryPostfixOperator())
	{
		if (!upo->Star().empty() || !upo->DoubleStar().empty())
		{
			if (!typeStack.empty()) {
				if (typeStack.top().starts_with('*'))
					typeStack.push(typeStack.top().substr(typeStack.top().find_first_not_of('*')));
				else {
					if (!currentSubtype.empty())
						typeStack.push(currentSubtype);
					else
						typeStack.push(functionTable[typeStack.top() + ".operator*"]);
				}
			}
		}
		if (upo->Amp())
		{
			typeStack.push("*" + typeStack.top());
		}
	}
	else if (ctx->Dot())
	{
		if (unsafeDepth == 0)
		{
			std::string txt = contextTypes[ctx->postfixExpression()] + "." + ctx->getText().substr(ctx->getText().rfind('.') + 1);
			if (cppParser.unsafeVariables.contains(txt))
				CppAdvanceCompilerError("Cannot to use unsafe variable in the safe context", ctx->getStop());
			/*else if (cppParser.unsafeFunctions.contains(txt))
			{
				CppAdvanceCompilerError("Cannot to call unsafe function in the safe context", ctx->getStop());
			}*/
		}
		if (auto literal = ctx->IntegerLiteral())
		{
			if (!typeStack.empty()) {
				if (typeStack.top().starts_with("std.tuple<")) {
					auto typestr = typeStack.top().substr(typeStack.top().find('<')+1);
					typestr = typestr.substr(0, typestr.rfind('>'));
					auto types = StringSplit(typestr, ',');
					auto index = std::stoi(literal->getText());
					if (types.size() > index)
					{
						auto type = types[index];
						StringTrim(type);
						auto pos = type.find('<');
						if (pos != type.npos && !type.starts_with("std.tuple")) {
							auto subtype = type.substr(pos + 1, type.rfind('>') - pos - 1);
							subtype = subtype.substr(0, subtype.find(','));
							currentSubtype = subtype;
							type = type.substr(0, pos);
						}
						typeStack.push(type);
					}
				}
				else
				{
					auto type = symbolTable[typeStack.top() + "." + literal->getText()];
					auto pos = type.find('<');
					if (pos != type.npos && !type.starts_with("std.tuple")) {
						auto subtype = type.substr(pos + 1, type.rfind('>') - pos - 1);
						subtype = subtype.substr(0, subtype.find(','));
						currentSubtype = subtype;
						type = type.substr(0, pos);
					}
					typeStack.push(type);
				}
			}
		}
		else if (ctx->Type())
		{
			typeStack.push("System.Type");
		}
		else
		{
			auto txt = ctx->getText();
			auto id = txt;
			auto dotpos = id.rfind('.');
			if (dotpos != id.npos) id = id.substr(dotpos + 1);
			auto tplpos = id.find('<');
			if (tplpos != id.npos) {
				auto ptplpos = id.rfind('>');
				auto tpl = id.substr(tplpos + 1, ptplpos - tplpos - 1);
				currentTemplateArgs = StringSplit(tpl, ',');
				for (auto& arg : currentTemplateArgs)
				{
					auto atplpos = arg.find('<');
					if (atplpos != arg.npos) arg = arg.substr(0, atplpos);
					StringTrim(arg);
				}
				id = id.substr(0, tplpos);
			}
			else
			{
				currentTemplateArgs.clear();
			}

			if (aliasTable.contains(txt))
			{
				typeStack.push(aliasTable[txt]);
				//std::cout << typeStack.top() << std::endl;
			}
			else if (typeset.contains(txt)) {
				typeStack.push(txt);
				//std::cout << typeStack.top() << std::endl;
			}
			else if (symbolTable.contains(txt)) {
				txt = symbolTable[txt];
				auto pos = txt.find('<');
				if (pos != txt.npos && !txt.starts_with("std.tuple")) {
					auto subtype = txt.substr(pos + 1, txt.rfind('>') - pos - 1);
					subtype = subtype.substr(0, subtype.find(','));
					currentSubtype = subtype;
					txt = txt.substr(0, pos);
				}
				if (aliasTable.contains(txt)) txt = aliasTable[txt];
				pos = txt.find('<');
				if (pos != txt.npos && !txt.starts_with("std.tuple")) {
					auto subtype = txt.substr(pos + 1, txt.rfind('>') - pos - 1);
					subtype = subtype.substr(0, subtype.find(','));
					currentSubtype = subtype;
					txt = txt.substr(0, pos);
				}
				typeStack.push(txt);
				//std::cout << typeStack.top() << std::endl;
			}
			else if (!typeStack.empty() && ctx->idExpression()) {
				txt = symbolTable[typeStack.top() + "." + id];
				auto pos = txt.find('<');
				if (pos != txt.npos && !txt.starts_with("std.tuple")) {
					auto subtype = txt.substr(pos + 1, txt.rfind('>') - pos - 1);
					subtype = subtype.substr(0, subtype.find(','));
					currentSubtype = subtype;
					txt = txt.substr(0, pos);
				}
				if (aliasTable.contains(txt)) txt = aliasTable[txt];
				pos = txt.find('<');
				if (pos != txt.npos && !txt.starts_with("std.tuple")) {
					auto subtype = txt.substr(pos + 1, txt.rfind('>') - pos - 1);
					subtype = subtype.substr(0, subtype.find(','));
					currentSubtype = subtype;
					txt = txt.substr(0, pos);
				}
				typeStack.push(txt);
				//std::cout << typeStack.top() << std::endl;
			}
		}
	}
	else if (ctx->LeftParen() && ctx->postfixExpression())
	{
		std::string funcname;
		auto txt = ctx->postfixExpression()->getText();
		auto dotpos = txt.rfind('.');
		auto tplpos = txt.npos;
		if (dotpos != txt.npos)
		{
			tplpos = txt.find('<', dotpos + 1);
		}
		else
		{
			tplpos = txt.find('<');
		}
		if (tplpos != txt.npos) {
			auto ptplpos = txt.rfind('>');
			auto tpl = txt.substr(tplpos + 1, ptplpos - tplpos - 1);
			currentTemplateArgs = StringSplit(tpl, ',');
			for (auto& arg : currentTemplateArgs)
			{
				auto atplpos = arg.find('<');
				if (atplpos != arg.npos) arg = arg.substr(0, atplpos);
				StringTrim(arg);
			}
		}
		else
		{
			currentTemplateArgs.clear();
		}
		if (dotpos != txt.npos && tplpos != txt.npos && dotpos < tplpos || dotpos == txt.npos && tplpos != txt.npos) txt = txt.substr(0, tplpos);
		auto txt2 = txt;
		auto txt3 = txt;
		bool found = true;
		if (dotpos != std::string::npos) txt2 = txt2.substr(dotpos+1);
		if (!typeStack.empty()) {
			if (auto expr = ctx->postfixExpression()->postfixExpression()) {
				if (contextTypes.contains(expr))
					typeStack.push(contextTypes[expr]);
				txt3 = typeStack.top() + "." + txt2;
			}
		}
		if (aliasTable.contains(txt))
		{
			typeStack.push(aliasTable[txt]);
			funcname = txt;
			//std::cout << typeStack.top() << std::endl;
		}
		else if (typeset.contains(txt)) {
			typeStack.push(txt);
			funcname = txt;
			//std::cout << typeStack.top() << std::endl;
		}
		else if (functionTable.contains(txt)) {
			funcname = txt;
			txt = functionTable[txt];
			if (aliasTable.contains(txt)) txt = aliasTable[txt];
			else if (!typeset.contains(txt) && txt != "void") {
				auto pos = txt.find('<');
				if (pos != txt.npos && !txt.starts_with("std.tuple")) {
					txt = txt.substr(0, pos);
					auto subtype = txt.substr(pos + 1, txt.rfind('>') - pos - 1);
					subtype = subtype.substr(0, subtype.find(','));
					StringTrim(subtype);
					if (!typeset.contains(subtype)) {
						if (!currentTemplateArgs.empty()) subtype = currentTemplateArgs[0].substr(0, currentTemplateArgs[0].find('<'));
						if (!typeset.contains(subtype)) subtype = currentSubtype;
					}
					if (typeset.contains(subtype)) currentSubtype = subtype;
				}
				if (!typeset.contains(txt)) {
					if (!currentTemplateArgs.empty()) txt = currentTemplateArgs[0].substr(0, currentTemplateArgs[0].find('<'));
					if (!typeset.contains(txt) && !currentSubtype.empty()) txt = currentSubtype;
					if (!typeset.contains(txt) && !txt.starts_with("std.tuple"))
						found = false;
				}
				if (aliasTable.contains(txt)) txt = aliasTable[txt];
			}
			typeStack.push(txt);
			//std::cout << typeStack.top() << std::endl;
		}
		else if (!typeStack.empty() && functionTable.contains(txt2)) {
			funcname = txt2;
			txt2 = functionTable[txt2];
			if (aliasTable.contains(txt2)) txt2 = aliasTable[txt2];
			else if (!typeset.contains(txt2) && txt2 != "void") {
				auto pos = txt2.find('<');
				if (pos != txt2.npos && !txt.starts_with("std.tuple")) {
					txt2 = txt2.substr(0, pos);
					auto subtype = txt2.substr(pos + 1, txt2.rfind('>') - pos - 1);
					subtype = subtype.substr(0, subtype.find(','));
					StringTrim(subtype);
					if (!typeset.contains(subtype)) {
						if (!currentTemplateArgs.empty()) subtype = currentTemplateArgs[0].substr(0, currentTemplateArgs[0].find('<'));
						if (!typeset.contains(subtype)) subtype = currentSubtype;
					}
					if (typeset.contains(subtype)) currentSubtype = subtype;
				}
				if (!typeset.contains(txt2)) {
					if (!currentTemplateArgs.empty()) txt2 = currentTemplateArgs[0].substr(0, currentTemplateArgs[0].find('<'));
					if (!typeset.contains(txt2) && !currentSubtype.empty()) txt2 = currentSubtype;
					if (!typeset.contains(txt2) && !txt2.starts_with("std.tuple"))
						found = false;
				}
				if (aliasTable.contains(txt2)) txt2 = aliasTable[txt2];
			}
			typeStack.push(txt2);
			//std::cout << typeStack.top() << std::endl;
		}
		else if (!typeStack.empty() && functionTable.contains(txt3)) {
			funcname = txt3;
			txt3 = functionTable[txt3];
			if (aliasTable.contains(txt3)) txt3 = aliasTable[txt3];
			else if (!typeset.contains(txt3) && txt3 != "void") {
				auto pos = txt3.find('<');
				if (pos != txt3.npos && !txt.starts_with("std.tuple")) {
					txt3 = txt3.substr(0, pos);
					auto subtype = txt3.substr(pos + 1, txt3.rfind('>') - pos - 1);
					subtype = subtype.substr(0, subtype.find(','));
					StringTrim(subtype);
					if (!typeset.contains(subtype)) {
						if (!currentTemplateArgs.empty()) subtype = currentTemplateArgs[0].substr(0, currentTemplateArgs[0].find('<'));
						if (!typeset.contains(subtype)) subtype = currentSubtype;
					}
					if (typeset.contains(subtype)) currentSubtype = subtype;
				}
				if (!typeset.contains(txt3)) {
					if (!currentTemplateArgs.empty()) txt3 = currentTemplateArgs[0].substr(0, currentTemplateArgs[0].find('<'));
					if (!typeset.contains(txt3) && !currentSubtype.empty()) txt3 = currentSubtype;
					if (!typeset.contains(txt3) && !txt3.starts_with("std.tuple"))
						found = false;
				}
				if (aliasTable.contains(txt3)) txt3 = aliasTable[txt3];
			}
			typeStack.push(txt3);
			//std::cout << typeStack.top() << std::endl;
		}

		if (auto exprs = ctx->expressionList())
		{
			bool named = false;
			std::unordered_set<std::string> knownParams;
			if (cppParser.parametersTable.contains(funcname))
			{
				for (const auto& func : cppParser.parametersTable[funcname])
				{
					auto params = StringSplit(func, ",,");
					for (const auto& param : params) {
                        knownParams.insert(param.substr(0,param.find('=')));
					}
				}
			}
			if (activeDefaultParams.contains(funcname))
			{
				for (const auto& param : activeDefaultParams[funcname])
				{
					knownParams.insert(param.first);
				}
			}
			funcname += "/";
			bool first = true;
			for (auto part : exprs->expressionListPart()) {
				std::string paramType;
				if (contextTypes.contains(part->conditionalExpression()))
					paramType = contextTypes[part->conditionalExpression()];

				if (!first)
				{
					funcname += ",,";
				}

				first = false;
				funcname += paramType;
				if (unsafeDepth <= 0 && cppParser.unsafeFunctions.contains(funcname))
				{
					CppAdvanceCompilerError("Cannot to call unsafe function in safe context", ctx->LeftParen()->getSymbol());
				}

				if (!found)
				{
					found = true;
					typeStack.push(paramType);
				}

				if (auto id = part->Identifier()) {
					if (part->Out())
					{
						parameterPrerequisites[currentStatement].emplace_back(id->getText(),part->theTypeId());
					}
					else {
						named = true;
						if (!knownParams.contains(id->getText()))
							CppAdvanceCompilerError("Unknown argument name", id->getSymbol());
					}
				}
				else if (named) {
					CppAdvanceCompilerError("Named arguments can only appear after positional arguments", part->getStart());
				}
			}
		}
	}
	else if (ctx->LeftBracket() && !typeStack.empty())
	{
		typeStack.push(contextTypes[ctx->postfixExpression()]);
		if (functionTable.contains(typeStack.top() + "._operator_subscript")) {
			auto type = functionTable[typeStack.top() + "._operator_subscript"];
            if (aliasTable.contains(type)) type = aliasTable[type];
			if (!typeset.contains(type) && !currentSubtype.empty())
				type = currentSubtype;
			typeStack.push(type);
		}
	}
	if (!typeStack.empty() && !typeStack.top().empty())
	{
		contextTypes[ctx] = typeStack.top();
		//std::cout << "ctx pe " << ctx << ": " << typeStack.top() << std::endl;
	}
}

void CppAdvanceSema::exitRefDeclaration(CppAdvanceParser::RefDeclarationContext* ctx)
{
	auto seq = ctx->identifierSeq();
	for (auto id : seq->Identifier())
	{
		symbolTable[id->getText()] = contextTypes[ctx->initializerClause()];
		if (!currentSubtype.empty()) symbolTable[id->getText()] += "<" + currentSubtype + ">";
	}
}

void CppAdvanceSema::exitMultiDeclaration(CppAdvanceParser::MultiDeclarationContext* ctx)
{
	for (auto id : ctx->Identifier())
	{
		symbolTable[id->getText()] = contextTypes[ctx->initializerClause()];
		if (!currentSubtype.empty()) symbolTable[id->getText()] += "<" + currentSubtype + ">";
	}
}

void CppAdvanceSema::exitConstantDeclaration(CppAdvanceParser::ConstantDeclarationContext* ctx)
{
	if (!ctx->theTypeId())
	{
		auto id = ctx->Identifier()->getText();
		auto t = contextTypes[ctx->initializerClause()];
		if (!currentSubtype.empty()) t += "<" + currentSubtype + ">";
		symbolTable[id] = t;
		if (isTypeDefinitionBody() && !functionBody)
		{
			symbolTable.globalSymbolTable[currentType + "." + id] = t;
		}
	}
	if (functionBody && ctx->templateParams())
	{
		CppAdvanceCompilerError("Cannot to use variable template in the function body", ctx->templateParams()->getStart());
	}
}

void CppAdvanceSema::exitInitializerClause(CppAdvanceParser::InitializerClauseContext* ctx)
{
	if (!typeStack.empty())
		contextTypes[ctx] = typeStack.top();
}

void CppAdvanceSema::exitRelationalExpression(CppAdvanceParser::RelationalExpressionContext* ctx)
{
	if (!ctx->relationalExpression().empty() || ctx->Is())
	{
		typeStack.push("bool");
		if (ctx->Is())
		{
			if (isCondition && firstPass)
			{
				auto patterns = ctx->patternList();
				auto pattern = patterns->pattern()[0];
				auto ops = patterns->patternCombinationOperator();
				if (!(pattern->theTypeId() && (pattern->not_() && !pattern->LeftBrace() || pattern->getText() == "_"))
					&& std::all_of(ops.begin(), ops.end(), [](auto op) { return !op->Or(); })) {
					ifPrerequisites[currentIfStatement].push_back(ctx);
					auto type = pattern->theTypeId()->getText();
					if (auto pos = type.find('<'); pos != std::string::npos)
					{
						type = type.substr(0, pos);
					}
					symbolTable[!pattern->Identifier().empty() ? pattern->Identifier(0)->getText() : ctx->threeWayComparisonExpression()->getText()]
						= type;
				}
			}
		}
	}
	else if (ctx->As())
	{
		typeStack.push(contextTypes[ctx->theTypeId()]);
	}
}

void CppAdvanceSema::exitEqualityExpression(CppAdvanceParser::EqualityExpressionContext* ctx)
{
	if (!ctx->equalityExpression().empty())
	{
		typeStack.push("bool");
	}
}

void CppAdvanceSema::exitLogicalAndExpression(CppAdvanceParser::LogicalAndExpressionContext* ctx)
{
	if (!ctx->And().empty())
	{
		typeStack.push("bool");
	}
}

void CppAdvanceSema::exitLogicalOrExpression(CppAdvanceParser::LogicalOrExpressionContext* ctx)
{
	if (!ctx->Or().empty())
	{
		typeStack.push("bool");
	}
}

void CppAdvanceSema::enterForwardVarDeclaration(CppAdvanceParser::ForwardVarDeclarationContext* ctx)
{
	if (!functionBody)
		CppAdvanceCompilerError("Forward variable declarations cannot be used outside function body", ctx->Forward()->getSymbol());
}

void CppAdvanceSema::exitForwardVarDeclaration(CppAdvanceParser::ForwardVarDeclarationContext* ctx)
{
	if (firstPass) return;
	symbolTable[ctx->Identifier()->getText()] = contextTypes[ctx->initializerClause()];
	if (!currentSubtype.empty()) symbolTable[ctx->Identifier()->getText()] += "<" + currentSubtype + ">";
}

void CppAdvanceSema::exitJumpStatement(CppAdvanceParser::JumpStatementContext* ctx)
{
	if (firstPass) return;
	if (isUnitTestBody)
	{
		CppAdvanceCompilerError("Unit test cannot return value", ctx->Return()->getSymbol());
	}
	if (ctx->Return() && std::any_of(outParams.begin(), outParams.end(), [&](const auto& param) { return !initStates.top().definitelyAssigned.contains(param); }))
	{
		CppAdvanceCompilerError("Each branch of a function must initialize all out parameters", ctx->Return()->getSymbol());
	}
}

void CppAdvanceSema::enterSelectionStatement(CppAdvanceParser::SelectionStatementContext* ctx)
{
	currentIfStatement = ctx;
	if (firstPass) return;
	if (ctx->If()) {
		IfContext ictx;
		ictx.before = initStates.top();
		ictx.hasElse = ctx->Else();
		initStates.push(ictx.before);
		ifContexts.push(ictx);
		symbolContexts.push(symbolContexts.top());
	}
	else if (ctx->Switch())
	{
		currentSwitchData.push({0, ctx->switchStatementBranch().size()});
	}
}

void CppAdvanceSema::exitSelectionStatement(CppAdvanceParser::SelectionStatementContext* ctx)
{
	if (firstPass) return;
	if (ctx->If()) {
		auto& ictx = ifContexts.top();
		InitState elseState;
		if (ictx.hasElse)
		{
			elseState = ictx.otherwise;
		}
		else
		{
			elseState = ictx.before;
			ictx.then = initStates.top();
		}

		initStates.pop();
		auto& currentState = initStates.top();
		currentState.definitelyAssigned = ictx.then.intersect(elseState.definitelyAssigned);
		currentState.potentiallyAssigned = ictx.then.unite(elseState.potentiallyAssigned);

		ifContexts.pop();
		symbolContexts.pop();
	}
	else if (ctx->Switch())
	{
		auto branches = ctx->switchStatementBranch();
		auto last = branches.size() - 1;
		if (branches[last]->patternList()->getText() != "_")
		{
			auto& ictx = ifContexts.top();
			InitState elseState = ictx.before;
			ictx.then = initStates.top();

			initStates.pop();
			auto& currentState = initStates.top();
			currentState.definitelyAssigned = ictx.then.intersect(elseState.definitelyAssigned);
			currentState.potentiallyAssigned = ictx.then.unite(elseState.potentiallyAssigned);

			ifContexts.pop();
		}
		for (int i = last - 1; i >= 0; i--)
		{
			auto& ictx = ifContexts.top();
			InitState elseState = initStates.top();

			initStates.pop();
			auto& currentState = initStates.top();
			currentState.definitelyAssigned = ictx.then.intersect(elseState.definitelyAssigned);
			currentState.potentiallyAssigned = ictx.then.unite(elseState.potentiallyAssigned);

			ifContexts.pop();
		}
		currentSwitchData.pop();
	}
}

void CppAdvanceSema::enterElseBranch(CppAdvanceParser::ElseBranchContext*)
{
	if (firstPass) return;
	ifContexts.top().then = initStates.top();
	initStates.pop();
	initStates.push(ifContexts.top().before);
}

void CppAdvanceSema::exitElseBranch(CppAdvanceParser::ElseBranchContext*)
{
	if (firstPass) return;
	ifContexts.top().otherwise = initStates.top();
}

void CppAdvanceSema::enterLabeledStatement(CppAdvanceParser::LabeledStatementContext*)
{
	if (firstPass) return;
	initStates.push(initStates.top());
}

void CppAdvanceSema::exitLabeledStatement(CppAdvanceParser::LabeledStatementContext*)
{
	if (firstPass) return;
	initStates.pop();
}

void CppAdvanceSema::enterTryBlock(CppAdvanceParser::TryBlockContext*)
{
	if (firstPass) return;
	initStates.push(initStates.top());
}

void CppAdvanceSema::exitTryBlock(CppAdvanceParser::TryBlockContext*)
{
	if (firstPass) return;
	initStates.pop();
}

void CppAdvanceSema::enterFunctionTemplateDeclaration(CppAdvanceParser::FunctionTemplateDeclarationContext* ctx)
{
	bool isInline = false;
	bool isConstexpr = false;
	bool isConsteval = false;
	bool isUnsafe = false;
	bool isRefReturn = false;
	bool isConstReturn = false;
	bool isForwardReturn = false;
	int8_t varargDepth = -1;
	CppAdvanceParser::TheTypeIdContext* returnType = nullptr;
	CppAdvanceParser::ExprContext* expression = nullptr;
	CppAdvanceParser::FunctionParamsContext* params = ctx->functionParams();
	CppAdvanceParser::TemplateParamsContext* templateParams = ctx->templateParams();
	CppAdvanceParser::TemplateArgumentListContext* templateSpecializationArgs = nullptr;
	CppAdvanceParser::ExceptionSpecificationContext* exceptions = ctx->exceptionSpecification();

	for (auto spec : ctx->functionSpecifier()) {
		if (spec->Inline()) isInline = true;
		else if (spec->Consteval()) isConsteval = true;
		else if (spec->Unsafe()) {
			isUnsafe = true;
			if (unsafeDepth > 0)
				CppAdvanceCompilerError("Unsafe context recursion", spec->Unsafe()->getSymbol());
		}
	}

	if (!isUnsafe && unsafeDepth > 0) isUnsafe = true;
	if (isUnsafe && unsafeDepth <= 0) unsafeDepth++;

	if (firstPass && !functionBody) {
		int lifetimes = 0;
		if (auto decl = params->paramDeclClause())
		{
			bool isDefault = false;
			auto declList = decl->paramDeclList();
			if (decl->Ellipsis() && !templateParams) {
				varargDepth = declList->paramDeclaration().size() - 1;
				cppParser.varargFunctions[ctx->Identifier()->getText()] = varargDepth;
			}
			for (auto param : declList->paramDeclaration())
			{
				if (param->LifetimeAnnotation()) ++lifetimes;
				if (param->initializerClause())
				{
					isDefault = true;
					if (auto spec = param->paramSpecification()) {
						if (spec->Inout() || spec->Ref() || spec->Out())
							CppAdvanceCompilerError("Mutable reference parameters cannot have default value", param->initializerClause()->getStart());
					}
				}
				else if (isDefault)
				{
					CppAdvanceCompilerError("Default function parameters must be located at the end of the parameter list", param->Identifier()->getSymbol());
				}
			}
		}

		if (auto ret = ctx->returnType())
		{
			returnType = ret->theTypeId();
			if (ret->Const()) isConstReturn = true;
			if (ret->Ref()) {
				isRefReturn = true;
				if (lifetimes == 0 && ctx->functionParams()->paramDeclClause())
					CppAdvanceCompilerError("A function that returns a reference must have object lifetime annotations (for arguments or method owner).", ret->Ref()->getSymbol());
			}
			if (ret->Forward())
				isForwardReturn = true;
		}

		std::optional<AccessSpecifier> access = std::nullopt;
		if (auto decl = dynamic_cast<CppAdvanceParser::DeclarationContext*>(ctx->parent))
		{
			if (auto acc = decl->accessSpecifier())
			{
				if (currentAccessSpecifier.top())
					CppAdvanceCompilerError("Cannot to redefine access specifier", acc->getStart());
				if (acc->Public())
				{
					access = AccessSpecifier::Public;
				}
				else if (acc->Protected())
				{
					access = AccessSpecifier::Protected;
				}
				else if (acc->Private())
				{
					access = AccessSpecifier::Private;
				}
				else if (acc->Internal())
				{
					access = AccessSpecifier::Internal;
				}
			}
		}

		if (currentAccessSpecifier.top()) access = currentAccessSpecifier.top();
		if (!access) access = AccessSpecifier::Internal;
		auto id = ctx->Identifier();
		if (*access == AccessSpecifier::Protected) protectedSymbols.insert(id->getText());
		globalFunctions.emplace_back(
			FunctionDefinition{ id->getText(), templateParams, templateSpecializationArgs, nullptr, params, returnType, expression, exceptions,
			nullptr, {ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()}, *access, getCurrentCompilationCondition(), 
			isInline || isConstexpr, isConstexpr, isConsteval, isUnsafe, isRefReturn, isConstReturn, isForwardReturn, false, varargDepth });
	}
}

void CppAdvanceSema::exitFunctionTemplateDeclaration(CppAdvanceParser::FunctionTemplateDeclarationContext* ctx)
{
	if (firstPass != functionBody > 0) {
		auto idc = ctx->Identifier();
		auto funcname = idc->getText();
		if (ctx->returnType())
		{
			/*auto ret = ctx->returnType()->getText();
			StringReplace(ret, "const ", "");
			StringReplace(ret, "ref ", "");*/
			functionTable[funcname] = contextTypes[ctx->returnType()];
		}
		else {
			functionTable[funcname] = "void";
		}
		if (auto params = ctx->functionParams()->paramDeclClause()) {
			std::string args;
			bool first = true;
			for (auto param : params->paramDeclList()->paramDeclaration()) {
				if (!first) args += ",,";
				auto id = param->Identifier()->getText();
				args += id;
				activeDefaultParams[funcname].insert_or_assign(id, param->initializerClause());
				first = false;
			}
			if (!args.empty())
				cppParser.parametersTable[funcname].insert(args);
		}
	}
	auto specs = ctx->functionSpecifier();
	if (std::any_of(specs.begin(), specs.end(), [&](auto spec) ->bool { return spec->Unsafe(); }))
		--unsafeDepth;
}

void CppAdvanceSema::enterExternFunctionDeclaration(CppAdvanceParser::ExternFunctionDeclarationContext* ctx)
{
	if (!functionBody && unsafeDepth > 0 || ctx->Unsafe())
		cppParser.unsafeFunctions.insert(ctx->Identifier()->getText());
}

void CppAdvanceSema::exitConditionalExpression(CppAdvanceParser::ConditionalExpressionContext* ctx)
{
	if (!typeStack.empty())
		contextTypes[ctx] = typeStack.top();
}

void CppAdvanceSema::exitReturnType(CppAdvanceParser::ReturnTypeContext* ctx)
{
	if (!typeStack.empty()) {
		contextTypes[ctx] = typeStack.top();
		if (!currentSubtype.empty()) contextTypes[ctx] += "<"+currentSubtype+">";
		if (auto id = ctx->Identifier())
		{
			symbolTable[id->getText()] = contextTypes[ctx->theTypeId()];
		}
		else if (auto t = ctx->theTypeId())
		{
			if (t->VertLine().empty()) {
				if (auto st = t->singleTypeId(0)->typeSpecifierSeq()->simpleTypeSpecifier()) {
					for (auto f : st->namedTupleField())
					{
						symbolTable[f->Identifier()->getText()] = contextTypes[f->theTypeId()];
					}
				}
			}
		}
	}
}

void CppAdvanceSema::exitTheTypeId(CppAdvanceParser::TheTypeIdContext* ctx)
{
	if (!ctx->VertLine().empty())
	{
		contextTypes[ctx] = "Union" + std::to_string(ctx->VertLine().size() + 1);
	}
	else if (!typeStack.empty()) {
		contextTypes[ctx] = typeStack.top();
		if (!currentSubtype.empty()) contextTypes[ctx] += "<" + currentSubtype + ">";
	}
}

void CppAdvanceSema::exitSimpleTypeSpecifier(CppAdvanceParser::SimpleTypeSpecifierContext* ctx)
{
	if (!ctx->namedTupleField().empty())
	{
		auto tuple = getNamedTupleId(ctx->getText());
		typeStack.push(tuple);
		if (!typeset.contains(tuple))
		{
			typeset.insert(tuple);
			auto access = (currentAccessSpecifier.top() ? *currentAccessSpecifier.top() : AccessSpecifier::Public);
			forwardDeclarations.push_back({ tuple,{},{},access,{0,0},"" });
			auto id = tuple;
			if (id.find('.') != id.npos) id = id.substr(id.rfind('.') + 1);
			std::vector<std::pair<std::string, CppAdvanceParser::TheTypeIdContext*>> fields;
			int i = 0;
			for (auto field : ctx->namedTupleField()) {
				auto fieldName = field->Identifier()->getText();
				auto fieldTypeId = field->theTypeId();
				fields.emplace_back(fieldName, fieldTypeId);
				symbolTable.globalSymbolTable[tuple + "." + fieldName] = contextTypes[fieldTypeId];
				symbolTable.globalSymbolTable[tuple + "." + std::to_string(i++)] = contextTypes[fieldTypeId];
			}
			namedTuples[tuple] = NamedTuple{ std::move(id),std::move(fields),access };
		}
	}
	else if (ctx->functionTypeId())
	{
		typeStack.push("CppAdvance.FunctionRef");
	}
	else if (!ctx->theTypeId().empty())
	{
		std::string type = "std.tuple<";
		bool first = true;
		for (auto t : ctx->theTypeId())
		{
			if (!first) type += ",";
			first = false;
			type += contextTypes[t];
		}
		type += ">";
		typeStack.push(type);
	}
	else if (auto t = ctx->typename_())
	{
		std::string id;
		if (ctx->nestedNameSpecifier()) id = ctx->nestedNameSpecifier()->getText();
		if (auto cls = t->className()) {
			if (cls->Identifier())
				id += cls->Identifier()->getText();
			else
				id += cls->simpleTemplateId()->templateName()->Identifier()->getText();
		}
		else id += t->simpleTemplateId()->templateName()->Identifier()->getText();
		typeStack.push(id);
	}
	else
	{
		typeStack.push(ctx->getText());
	}
}

void CppAdvanceSema::exitDeconstructionDeclaration(CppAdvanceParser::DeconstructionDeclarationContext* ctx)
{
	currentSubtype.clear();
	if (!typeStack.empty()) {
		if (typeStack.top().starts_with("std.tuple<")) {
			auto typestr = typeStack.top().substr(typeStack.top().find('<') + 1);
			typestr = typestr.substr(0, typestr.rfind('>'));
			auto types = StringSplit(typestr, ',');
			auto index = 0;
			for (auto id : ctx->identifierSeq()->Identifier()) {
				if (types.size() > index)
				{
					auto type = types[index++];
					StringTrim(type);
					auto pos = type.find('<');
					if (pos != type.npos && !type.starts_with("std.tuple")) {
						auto subtype = type.substr(pos + 1, type.rfind('>') - pos - 1);
						subtype = subtype.substr(0, subtype.find(','));
						currentSubtype = subtype;
						type = type.substr(0, pos);
					}
					if (!currentSubtype.empty()) type += "<" + currentSubtype + ">";
					symbolTable[id->getText()] = type;
				}
			}
			
		}
		else
		{
			auto index = 0;
			for (auto id : ctx->identifierSeq()->Identifier()) {
				auto type = symbolTable[typeStack.top() + "." + std::to_string(index++)];
				auto pos = type.find('<');
				if (pos != type.npos && !type.starts_with("std.tuple")) {
					auto subtype = type.substr(pos + 1, type.rfind('>') - pos - 1);
					subtype = subtype.substr(0, subtype.find(','));
					currentSubtype = subtype;
					type = type.substr(0, pos);
				}
				if (!currentSubtype.empty()) type += "<" + currentSubtype + ">";
				symbolTable[id->getText()] = type;
			}
		}
	}
}

void CppAdvanceSema::exitParamDeclaration(CppAdvanceParser::ParamDeclarationContext* ctx)
{
	if (auto t = ctx->theTypeId())
	{
		symbolTable[ctx->Identifier()->getText()] = contextTypes[t];
	}
}

void CppAdvanceSema::enterCompoundStatement(CppAdvanceParser::CompoundStatementContext*)
{
	symbolContexts.push(symbolContexts.top());
}

void CppAdvanceSema::exitCompoundStatement(CppAdvanceParser::CompoundStatementContext*)
{
	symbolContexts.pop();
}

void CppAdvanceSema::enterStructDefinition(CppAdvanceParser::StructDefinitionContext* ctx)
{
	symbolContexts.push(symbolContexts.top());
	currentAccessSpecifier.push(std::nullopt);
	if (ctx->structHead()->Ref()) currentTypeKind.push(TypeKind::RefStruct);
	else if (ctx->structHead()->Union()) currentTypeKind.push(TypeKind::UnionStruct);
	else currentTypeKind.push(TypeKind::Struct);

	if (ctx->structHead()->baseClause())
	{
		if (ctx->structHead()->Ref())
			CppAdvanceCompilerError("Ref struct cannot inherit other types or implement interfaces", ctx->structHead()->baseClause()->getStart());
		if (ctx->structHead()->Union())
			CppAdvanceCompilerError("Raw union cannot inherit other types or implement interfaces", ctx->structHead()->baseClause()->getStart());
	}

	auto namectx = ctx->structHead()->className();
	bool primaryType = true;
	if (!currentType.empty()) {
		currentType += ".";
		primaryType = false;
	}
	std::string name;
	if (namectx->Identifier()) name = namectx->Identifier()->getText();
	else name = namectx->simpleTemplateId()->templateName()->getText();
	currentType += name; 
	typeset.insert(name);
	if (ctx->structHead()->Unsafe())
	{
		unsafeDepth++;
	}

	if (firstPass && !functionBody)
	{
		typeset.globalTypes.insert(currentType);
		CppAdvanceParser::TemplateParamsContext* tparams = ctx->structHead()->templateParams();
		CppAdvanceParser::TemplateArgumentListContext* tspec = nullptr;
		CppAdvanceParser::ConstraintClauseContext* constraints = ctx->structHead()->constraintClause();
		CppAdvanceParser::BaseSpecifierListContext* interfaces = nullptr;
		CppAdvanceParser::AttributeSpecifierSeqContext* attributes = nullptr;

		if (auto t = namectx->simpleTemplateId())
		{
			tspec = t->templateArgumentList();
		}

		if (auto b = ctx->structHead()->baseClause())
		{
			interfaces = b->baseSpecifierList();
		}

		if (constraints && !tparams)
		{
			CppAdvanceCompilerError("Only generic type can have constraints", constraints->Where()->getSymbol());
		}

		bool isUnsafe = unsafeDepth > 0;

		CppAdvanceParser::AccessSpecifierContext* acc = nullptr;
		std::optional<AccessSpecifier> access;
		if (auto decl = dynamic_cast<CppAdvanceParser::DeclarationContext*>(ctx->parent))
		{
			acc = decl->accessSpecifier();
			attributes = decl->attributeSpecifierSeq();
			
		}
		else if(auto decl = dynamic_cast<CppAdvanceParser::StructMemberDeclarationContext*>(ctx->parent))
		{
			acc = decl->accessSpecifier();
			attributes = decl->attributeSpecifierSeq();
		}

		if (acc)
		{
			if (currentAccessSpecifier.top())
				CppAdvanceCompilerError("Cannot to redefine access specifier", acc->getStart());
			if (acc->Public())
			{
				access = AccessSpecifier::Public;
			}
			else if (acc->Protected())
			{
				access = AccessSpecifier::Protected;
			}
			else if (acc->Private())
			{
				access = AccessSpecifier::Private;
			}
			else if (acc->Internal())
			{
				access = AccessSpecifier::Internal;
			}
		}

		if (!access) {
			if (currentAccessSpecifier.top()) access = currentAccessSpecifier.top();
			else access = AccessSpecifier::Internal;
		}

		if (isUnsafe) {
			cppParser.unsafeTypes.insert(currentType);
			if (primaryType) isUnsafeTypeDefinition = true;
		}

		if (primaryType) {
			if (*access == AccessSpecifier::Protected)
				isProtectedTypeDefinition = true;
			else if (*access == AccessSpecifier::Private)
				isPrivateTypeDefinition = true;
		}

		auto def = std::make_shared<StructDefinition>( currentTypeKind.top(),
			name, tparams, tspec, constraints, *access,getCurrentCompilationCondition(), SourcePosition{ ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine() },
			std::vector<VariableDefinition>{}, std::vector<ConstantDefinition>{}, interfaces, std::vector<TypeAliasDefinition>{}, std::vector<PropertyDefinition>{},
			std::vector<MethodDefinition>{}, std::vector<std::shared_ptr<StructDefinition>>{}, std::vector<ForwardDeclaration>{},
			std::vector<FunctionDeclaration>{}, std::vector<FunctionDefinition>{}, isUnsafe, false, false, false);
		def->attributes = attributes;
		if (!structStack.empty())
			structStack.top()->nestedStructs.push_back(def);
		structStack.push(def);
		if (namectx->simpleTemplateId()) {
			if (namectx->simpleTemplateId()->templateArgumentList())
			{
				name += "<{{specialization}}>";
			}
		}
		else if (auto tparams = ctx->structHead()->templateParams())
		{
			name += "<";
			bool first = true;
			for (auto param : tparams->templateParamDeclaration())
			{
				if (param->Identifier()) {
					if (!first) name += ", ";
					first = false;
					name += param->Identifier()->getText();
				}
				if (param->Ellipsis())
				{
					name += "...";
				}
			}
			name += ">";
		}
		currentTypeWithTemplate.push(name);
	}
}

void CppAdvanceSema::exitStructDefinition(CppAdvanceParser::StructDefinitionContext* ctx)
{
	auto pos = currentType.rfind('.');
	if (firstPass && !functionBody) {
		if (pos == currentType.npos) {
			isUnsafeTypeDefinition = false;
			isProtectedTypeDefinition = false;
			isPrivateTypeDefinition = false;
			auto& top = structStack.top();
			if (top->access == AccessSpecifier::Protected) protectedSymbols.insert(top->id);
			if (!top->templateSpecializationArgs)
				forwardDeclarations.push_back({ top->id,top->templateParams,top->constraints,top->access,{0,0},top->compilationCondition,top->isUnsafe, 
					currentTypeKind.top() == TypeKind::UnionStruct });
			globalStructs.push_back(top);
		}
		int idx = 0;
		for (const auto& field : structStack.top()->fields)
		{
			if (!field.isStatic && !field.isThreadLocal)
				symbolTable.globalSymbolTable[currentType + "." + std::to_string(idx++)] = contextTypes[field.type];
		}
		structStack.pop();
		currentTypeWithTemplate.pop();
	}

	if (ctx->structHead()->Unsafe())
	{
		unsafeDepth--;
	}

	if (pos != currentType.npos)
	{
		currentType = currentType.substr(0,pos);
	}
	else
	{
		currentType.clear();
	}
	currentAccessSpecifier.pop();
	currentTypeKind.pop();
	symbolContexts.pop();
}

void CppAdvanceSema::enterStructMemberDeclaration(CppAdvanceParser::StructMemberDeclarationContext* ctx)
{
	if (auto spec = ctx->symbolSpecifierSeq())
	{
		if (spec->Unsafe() && ++unsafeDepth > 1)
			CppAdvanceCompilerError("Unsafe context recursion", spec->Unsafe()->getSymbol());
		if (auto access = spec->accessSpecifier())
		{
			if (currentAccessSpecifier.top())
				CppAdvanceCompilerError("Access specifier context recursion", access->getStart());
			if (access->Public()) currentAccessSpecifier.top() = AccessSpecifier::Public;
			else if (access->Protected()) currentAccessSpecifier.top() = AccessSpecifier::Protected;
			else if (access->Internal()) currentAccessSpecifier.top() = AccessSpecifier::Internal;
			else if (access->Private()) currentAccessSpecifier.top() = AccessSpecifier::Private;
		}
	}
}

void CppAdvanceSema::exitStructMemberDeclaration(CppAdvanceParser::StructMemberDeclarationContext* ctx)
{
	if (auto spec = ctx->symbolSpecifierSeq())
	{
		if (spec->Unsafe()) --unsafeDepth;
		currentAccessSpecifier.top() = std::nullopt;
	}
}

void CppAdvanceSema::enterMemberVersionConditionalDeclaration(CppAdvanceParser::MemberVersionConditionalDeclarationContext* ctx)
{
	std::string result;
	if (auto condition = ctx->condition())
	{
		auto interval = condition->getSourceInterval();
		for (size_t i = interval.a; i <= interval.b; ++i)
		{
			auto token = parser->getTokenStream()->get(i);
			if (token->getType() == CppAdvanceParser::Identifier)
			{
				auto id = token->getText();
				result += "ADV_VERSION_" + (protectedVersions.contains(id) ? ("__" + StringUpper(filename) + "_PROTECTED_") : "") + id;
			}
			else
			{
				result += token->getText();
			}
			result += " ";
		}
	}
	else if (ctx->Debug())
	{
		if (ctx->not_()) result += "!";
		if (auto id = ctx->Identifier())
		{
			result += "ADV_DEBUG_";
			result += id->getText();
		}
		else
		{
			result += "_DEBUG";
		}
	}
	conditionStack.push(result);
}

void CppAdvanceSema::exitMemberVersionConditionalDeclaration(CppAdvanceParser::MemberVersionConditionalDeclarationContext*)
{
	conditionStack.pop();
}

void CppAdvanceSema::enterMemberRefDeclaration(CppAdvanceParser::MemberRefDeclarationContext* ctx)
{
	if (firstPass && functionBody) return;

	if (currentTypeKind.empty() || currentTypeKind.top() != TypeKind::RefStruct)
		CppAdvanceCompilerError("Cannot to declare reference field outside the ref struct", ctx->Amp()->getSymbol());
}

void CppAdvanceSema::exitMemberRefDeclaration(CppAdvanceParser::MemberRefDeclarationContext* ctx)
{
	if (firstPass && !functionBody)
	{
		bool isConst = ctx->Const() || ctx->Let();
		CppAdvanceParser::AccessSpecifierContext* acc = nullptr;
		CppAdvanceParser::AttributeSpecifierSeqContext* attributes = nullptr;
		std::optional<AccessSpecifier> access = std::nullopt;
		if (auto block = reinterpret_cast<CppAdvanceParser::MemberBlockDeclarationContext*>(ctx->parent))
		{
			if (auto decl = reinterpret_cast<CppAdvanceParser::StructMemberDeclarationContext*>(block->parent)) {
				if(decl->protectedInternal())
					CppAdvanceCompilerError("Cannot to declare protected internal reference variable", decl->protectedInternal()->getStart());
				acc = decl->accessSpecifier();
				attributes = decl->attributeSpecifierSeq();
			}
		}
		if (acc)
		{
			if (currentAccessSpecifier.top())
				CppAdvanceCompilerError("Cannot to redefine access specifier", acc->getStart());
			if (acc->Public())
			{
				access = AccessSpecifier::Public;
			}
			else if (acc->Private())
			{
				access = AccessSpecifier::Private;
			}
		}

		if (currentAccessSpecifier.top()) access = currentAccessSpecifier.top();
		if (!access) access = AccessSpecifier::Private;
		auto id = ctx->Identifier();
		if (unsafeDepth > 0) cppParser.unsafeVariables.insert(currentType + "." + id->getText());
		structStack.top()->fields.emplace_back(
			VariableDefinition{ "& "+id->getText(), nullptr, nullptr, ctx->theTypeId(), {ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()},
			nullptr, nullptr, attributes, *access, getCurrentCompilationCondition(), "", false, isConst, false, false, unsafeDepth > 0, false});
	}
}

void CppAdvanceSema::exitTupleExpression(CppAdvanceParser::TupleExpressionContext* ctx)
{
	if (!ctx->conditionalExpression().empty()) {
		std::string type = "std.tuple<";
		bool first = true;
		for (auto expr : ctx->conditionalExpression())
		{
			if (!first) type += ",";
			first = false;
			type += contextTypes[expr];
		}
		type += ">";
		typeStack.push(type);
	}
}

void CppAdvanceSema::enterConstructor(CppAdvanceParser::ConstructorContext* ctx)
{
	if (currentTypeKind.top() == TypeKind::StaticClass)
		CppAdvanceCompilerError("Static class cannot have a constructor", ctx->This()->getSymbol());
	symbolContexts.push(symbolContexts.top());
	bool isInline = ctx->Inline();
	bool isConstexpr = false;
	bool isUnsafe = false;
	bool isDefault = ctx->Default();
	int8_t varargDepth = -1;
	CppAdvanceParser::FunctionParamsContext* params = ctx->functionParams();
	CppAdvanceParser::TemplateParamsContext* templateParams = ctx->templateParams();
	CppAdvanceParser::ConstraintClauseContext* constraints = ctx->constraintClause();
	CppAdvanceParser::ExceptionSpecificationContext* exceptions = ctx->exceptionSpecification();
	CppAdvanceParser::ImplicitSpecificationContext* implicit = ctx->implicitSpecification();
	CppAdvanceParser::AttributeSpecifierSeqContext* attributes = nullptr;

	if (ctx->Unsafe()) {
		isUnsafe = true;
		if (unsafeDepth > 0)
			CppAdvanceCompilerError("Unsafe context recursion", ctx->Unsafe()->getSymbol());
	}

	if (!isUnsafe && unsafeDepth > 0) isUnsafe = true;
	if (isUnsafe && unsafeDepth <= 0) unsafeDepth++;

	if (firstPass && !functionBody) {
		if (currentTypeKind.top() == TypeKind::Class) {
			if (structStack.top()->isAbstract && implicit)
				CppAdvanceCompilerError("Abstract class cannot have an implicit constructor", implicit->getStart());
			constructorCounts.top()++;
		}
		if (constraints && !templateParams)
		{
			CppAdvanceCompilerError("Only generic constructor can have constraints", constraints->Where()->getSymbol());
		}

		if (isDefault) isInline = true;
		if (ctx->Equal()) isConstexpr = true;
		if (auto decl = params->paramDeclClause())
		{
			bool isDefaultParam = false;
			auto declList = decl->paramDeclList();
			if (decl->Ellipsis() && !templateParams) {
				varargDepth = declList->paramDeclaration().size() - 1;
				cppParser.varargFunctions[currentType] = varargDepth;
			}
			for (auto param : declList->paramDeclaration())
			{
				auto spec = param->paramSpecification();
				if (spec && spec->Out())
					CppAdvanceCompilerError("Cannot to use out parameters in the constructor", spec->Out()->getSymbol());
				if (param->initializerClause())
				{
					isDefaultParam = true;
					if (spec) {
						if (spec->Inout() || spec->Ref() || spec->Out())
							CppAdvanceCompilerError("Mutable reference parameters cannot have default value", param->initializerClause()->getStart());
					}
				}
				else if (isDefaultParam)
				{
					CppAdvanceCompilerError("Default function parameters must be located at the end of the parameter list", param->Identifier()->getSymbol());
				}
			}
		}
		else
		{
			structStack.top()->isDefaultConstructible = true;
		}

		if (auto body = ctx->constructorBody())
		{
			if (body->Assign()) isInline = true;
			else if (body->Equal()) isConstexpr = true;
		}
		else if (auto body = ctx->delegatingConstructorBody())
		{
			if (body->AssignArrow()) isInline = true;
			else if (body->EqualArrow()) isConstexpr = true;
		}

		if (isConstexpr) structStack.top()->isConstexpr = true;

		CppAdvanceParser::AccessSpecifierContext* acc = nullptr;
		std::optional<AccessSpecifier> access = std::nullopt;
		bool isProtectedInternal = false;
		if (currentTypeKind.top() != TypeKind::Extension) {
			if (auto decl = reinterpret_cast<CppAdvanceParser::StructMemberDeclarationContext*>(ctx->parent))
			{
				isProtectedInternal = decl->protectedInternal();
				attributes = decl->attributeSpecifierSeq();
				if (decl->accessSpecifier())
				{
					acc = decl->accessSpecifier();
				}
			}
		}
		else
		{
			if (auto decl = reinterpret_cast<CppAdvanceParser::ExtensionMemberDeclarationContext*>(ctx->parent))
			{
				attributes = decl->attributeSpecifierSeq();
			}
		}

		if (acc)
		{
			if (currentAccessSpecifier.top())
				CppAdvanceCompilerError("Cannot to redefine access specifier", acc->getStart());
			if (acc->Public())
			{
				access = AccessSpecifier::Public;
			}
			else if (acc->Protected())
			{
				if (isTypeDefinitionBody() && currentTypeKind.top() != TypeKind::Class)
					CppAdvanceCompilerError("Cannot to declare protected member outside the class body", acc->getStart());
				access = AccessSpecifier::Protected;
			}
			else if (acc->Private())
			{
				access = AccessSpecifier::Private;
			}
			else if (acc->Internal())
			{
				access = AccessSpecifier::Internal;
			}

			if (currentTypeKind.top() == TypeKind::EnumClass && !acc->Private())
			{
				CppAdvanceCompilerError("Enum class constructor must be private", acc->getStart());
			}
		}
		else if (isProtectedInternal)
		{
			if (currentAccessSpecifier.top())
				CppAdvanceCompilerError("Cannot to redefine access specifier", ctx->getStart());
			if (isTypeDefinitionBody() && currentTypeKind.top() != TypeKind::Class)
				CppAdvanceCompilerError("Cannot to declare protected internal member outside the class body", ctx->getStart());
			if (currentTypeKind.top() == TypeKind::EnumClass)
			{
				CppAdvanceCompilerError("Enum class constructor must be private", ctx->getStart());
			}
			access = AccessSpecifier::ProtectedInternal;
		}

		if (currentTypeKind.top() == TypeKind::Extension)
		{
			access = structStack.top()->access;
		}

		if (currentTypeKind.top() != TypeKind::EnumClass) {
			if (currentAccessSpecifier.top()) access = currentAccessSpecifier.top();
			if (!access) access = AccessSpecifier::Internal;
		}
		else
		{
			access = AccessSpecifier::Private;
		}

		if ((*access == AccessSpecifier::Public || *access == AccessSpecifier::Internal) && structStack.top()->isAbstract)
			CppAdvanceCompilerError("Cannot to define public or internal constructor in the abstract class", ctx->getStart());

		std::string id = structStack.top()->id;
		if (currentTypeKind.top() == TypeKind::Class || currentTypeKind.top() == TypeKind::EnumClass) id = "__Class_" + id;
		
		auto lastTparams = getLastTypeTemplateParams();
		auto lastSpec = getLastTypeTemplateSpecializationArgs();
		auto lastConstraints = getLastTypeConstraints();
		auto fullType = getCurrentFullTypeName();
		structStack.top()->methods.emplace_back(
			MethodDefinition{ id, templateParams, nullptr, constraints, params, nullptr, nullptr, exceptions,attributes,
			{ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()}, *access, getCurrentCompilationCondition(),
			isInline || isConstexpr, isConstexpr, false, isUnsafe, false, false, false, false, varargDepth,
			currentType, fullType, lastTparams, lastSpec, lastConstraints, implicit, isProtectedTypeDefinition, isUnsafeTypeDefinition, isDefault, true, false, false,
			false, false, false, true });
		methods.insert_or_assign(SourcePosition{ ctx->getStart()->getLine(),ctx->getStart()->getCharPositionInLine() },
			MethodDefinition{ id, templateParams, nullptr, constraints, params, nullptr, nullptr, exceptions,attributes,
			{ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()},
			isPrivateTypeDefinition ? AccessSpecifier::Private : AccessSpecifier::Internal, getCurrentCompilationCondition(),
			isInline || isConstexpr, isConstexpr, false, isUnsafe, false, false, false, false, varargDepth,
			currentType, fullType, lastTparams, lastSpec, lastConstraints, implicit, isProtectedTypeDefinition, isUnsafeTypeDefinition, isDefault, true, false, false,
			false, false, false, true });
	}
}

void CppAdvanceSema::exitConstructor(CppAdvanceParser::ConstructorContext* ctx)
{
	if (ctx->Unsafe())
		--unsafeDepth;

	if (firstPass && !functionBody) {
		if (auto params = ctx->functionParams()->paramDeclClause())
		{
			if (params->paramDeclList()->paramDeclaration().size() == currentFields[ctx->constructorBody()].size())
			{
				structStack.top()->hasAggregateInit = true;
			}
			std::string args;
			bool first = true;
			auto funcname = currentType + "." + currentType;
			for (auto param : params->paramDeclList()->paramDeclaration()) {
				if (!first) {
					args += ",,";
				}
				auto id = param->Identifier()->getText();
				args += id;
				activeDefaultParams[funcname].insert_or_assign(id, param->initializerClause());
				first = false;
			}
			if (!args.empty())
				cppParser.parametersTable[funcname].insert(args);
		}
	}

	outParams.clear();
	symbolContexts.pop();
}

void CppAdvanceSema::enterConstructorBody(CppAdvanceParser::ConstructorBodyContext* ctx)
{
	++depth;
	++functionBody;

	if (firstPass)
	{
		for (const auto& field : structStack.top()->fields)
		{
			if (!field.isStatic && !field.isThreadLocal) {
				auto id = field.id;
				StringReplace(id, "& ", "");
				currentFields[ctx].insert(id);
			}
		}
		for (const auto& prop : structStack.top()->properties)
		{
			if (!prop.isStatic && prop.setter && propertiesNeedField.contains(prop.setter)) {
				auto id = prop.id;
				StringReplace(id, "& ", "");
				currentFields[ctx].insert("p_" + id);
			}
		}

		if (currentTypeKind.top() == TypeKind::Extension)
		{
			if (!ctx->delegatingConstructorStatement() || !ctx->delegatingConstructorStatement()->This())
				CppAdvanceCompilerError("Extension constructor must call the original type constructor", ctx->getStart());
		}
	}
}

void CppAdvanceSema::exitConstructorBody(CppAdvanceParser::ConstructorBodyContext*)
{
	--depth == 0;
	--functionBody;
}

void CppAdvanceSema::enterDelegatingConstructorBody(CppAdvanceParser::DelegatingConstructorBodyContext*)
{
	++depth;
	++functionBody;
}

void CppAdvanceSema::exitDelegatingConstructorBody(CppAdvanceParser::DelegatingConstructorBodyContext*)
{
	--depth;
	functionBody--;
}

void CppAdvanceSema::enterDelegatingConstructorStatement(CppAdvanceParser::DelegatingConstructorStatementContext* ctx)
{
	if (ctx->Super() && currentTypeKind.top() != TypeKind::Class)
		CppAdvanceCompilerError("Cannot to delegate constructor of a superclass outside the class body", ctx->Super()->getSymbol());
}

void CppAdvanceSema::exitDelegatingConstructorStatement(CppAdvanceParser::DelegatingConstructorStatementContext*)
{
	while (!typeStack.empty()) typeStack.pop();
	currentTemplateArgs.clear();
	currentSubtype.clear();
}

void CppAdvanceSema::enterMemberInitializationStatement(CppAdvanceParser::MemberInitializationStatementContext*)
{
	
}

void CppAdvanceSema::exitMemberInitializationStatement(CppAdvanceParser::MemberInitializationStatementContext*)
{
	while (!typeStack.empty()) typeStack.pop();
	currentTemplateArgs.clear();
	currentSubtype.clear();
}

void CppAdvanceSema::enterConversionFunction(CppAdvanceParser::ConversionFunctionContext* ctx)
{
	if (isTypeDefinitionBody()) {
		if (currentTypeKind.top() == TypeKind::StaticClass)
			CppAdvanceCompilerError("Static class cannot define type conversions", ctx->conversionFunctionId()->getStart());
		else if (currentTypeKind.top() == TypeKind::UnionStruct)
			CppAdvanceCompilerError("Raw union does not support type conversions", ctx->conversionFunctionId()->getStart());
	}
	symbolContexts.push(symbolContexts.top());
	bool isInline = false;
	bool isConstexpr = false;
	bool isConsteval = false;
	bool isUnsafe = false;
	bool isVirtual = false;
	bool isOverride = false;
	bool isFinal = false;
	CppAdvanceParser::TheTypeIdContext* returnType = ctx->conversionFunctionId()->theTypeId();
	CppAdvanceParser::ExprContext* expression = nullptr;
	CppAdvanceParser::TemplateParamsContext* templateParams = ctx->templateParams();
	CppAdvanceParser::ConstraintClauseContext* constraints = ctx->constraintClause();
	CppAdvanceParser::ExceptionSpecificationContext* exceptions = ctx->exceptionSpecification();
	CppAdvanceParser::ImplicitSpecificationContext* implicit = ctx->implicitSpecification();
	CppAdvanceParser::AttributeSpecifierSeqContext* attributes = nullptr;

	for (auto spec : ctx->functionSpecifier()) {
		if (spec->Inline()) isInline = true;
		else if (spec->Consteval()) isConsteval = true;
		else if (spec->Unsafe()) {
			isUnsafe = true;
			if (unsafeDepth > 0)
				CppAdvanceCompilerError("Unsafe context recursion", spec->Unsafe()->getSymbol());
		}
		else if (spec->Static()) {
			CppAdvanceCompilerError("Conversion method cannot be static", spec->Static()->getSymbol());
		}
		else if (spec->Mutable())
		{
			CppAdvanceCompilerError("Conversion method cannot be mutating", spec->Mutable()->getSymbol());
		}
		else if (spec->Virtual())
		{
			isVirtual = true;
			if (currentTypeKind.top() != TypeKind::Class)
				CppAdvanceCompilerError("Cannot to declare virtual method outside the class body", spec->Virtual()->getSymbol());
		}
		else if (spec->Override())
		{
			isOverride = true;
		}
		else if (spec->Final())
		{
			isFinal = true;
			if (currentTypeKind.top() != TypeKind::Class)
				CppAdvanceCompilerError("Cannot to declare final method outside the class body", spec->Final()->getSymbol());
		}
	}

	if (ctx->shortFunctionBody())
	{
		expression = ctx->shortFunctionBody()->expressionStatement()->expr();
	}

	if (!isUnsafe && unsafeDepth > 0) isUnsafe = true;
	if (isUnsafe && unsafeDepth <= 0) unsafeDepth++;

	if (firstPass && !functionBody) {
		if (auto body = ctx->functionBody())
		{
			if (body->Assign()) isInline = true;
			else if (body->Equal()) isConstexpr = true;
		}
		else if (auto body = ctx->shortFunctionBody())
		{
			if (body->AssignArrow()) isInline = true;
			else if (body->EqualArrow()) isConstexpr = true;
		}

		CppAdvanceParser::AccessSpecifierContext* acc = nullptr;
		std::optional<AccessSpecifier> access = std::nullopt;
		bool isProtectedInternal = false;
		if (constraints && !templateParams)
		{
			CppAdvanceCompilerError("Only generic function can have constraints", constraints->Where()->getSymbol());
		}
		if (auto decl = reinterpret_cast<CppAdvanceParser::StructMemberDeclarationContext*>(ctx->parent))
		{
			isProtectedInternal = decl->protectedInternal();
			if (decl->accessSpecifier())
			{
				acc = decl->accessSpecifier();
			}
			attributes = decl->attributeSpecifierSeq();
		}

		if (acc)
		{
			if (currentAccessSpecifier.top())
				CppAdvanceCompilerError("Cannot to redefine access specifier", acc->getStart());
			if (acc->Public())
			{
				access = AccessSpecifier::Public;
			}
			else if (acc->Protected())
			{
				if (currentTypeKind.top() != TypeKind::Class)
					CppAdvanceCompilerError("Cannot to declare protected member outside the class body", acc->getStart());
				access = AccessSpecifier::Protected;
			}
			else if (acc->Private())
			{
				access = AccessSpecifier::Private;
			}
			else if (acc->Internal())
			{
				access = AccessSpecifier::Internal;
			}
		}
		else if (isProtectedInternal)
		{
			if (currentAccessSpecifier.top())
				CppAdvanceCompilerError("Cannot to redefine access specifier", acc->getStart());
			if (currentTypeKind.top() != TypeKind::Class)
				CppAdvanceCompilerError("Cannot to declare protected internal member outside the class body", acc->getStart());
			access = AccessSpecifier::ProtectedInternal;
		}

		if (currentAccessSpecifier.top()) access = currentAccessSpecifier.top();
		if (!access) access = AccessSpecifier::Internal;
		std::string id;
		auto lastTparams = getLastTypeTemplateParams();
		auto lastSpec = getLastTypeTemplateSpecializationArgs();
		auto lastConstraints = getLastTypeConstraints();
		auto fullType = getCurrentFullTypeName();
		bool isRefReturn = ctx->conversionFunctionId()->Ref();
		bool isConstReturn = ctx->conversionFunctionId()->Const();
		structStack.top()->methods.emplace_back(
			MethodDefinition{ id, templateParams, nullptr, constraints, nullptr, returnType, expression, exceptions, attributes,
			{ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()}, *access, getCurrentCompilationCondition(),
			isInline || isConstexpr, isConstexpr, isConsteval, isUnsafe, isRefReturn, isConstReturn, false, false, -1,
			currentType, fullType, lastTparams, lastSpec, lastConstraints, implicit, isProtectedTypeDefinition, isUnsafeTypeDefinition, false, false, false, isVirtual,
			isOverride, false, isFinal, false, false, true });
		methods.insert_or_assign(SourcePosition{ ctx->getStart()->getLine(),ctx->getStart()->getCharPositionInLine() },
			MethodDefinition{ id, templateParams, nullptr, constraints, nullptr, returnType, expression, exceptions, attributes,
			{ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()},
			isPrivateTypeDefinition ? AccessSpecifier::Private : AccessSpecifier::Internal, getCurrentCompilationCondition(),
			isInline || isConstexpr, isConstexpr, isConsteval, isUnsafe, isRefReturn, isConstReturn, false, false, -1,
			currentType, fullType, lastTparams, lastSpec, lastConstraints, implicit, isProtectedTypeDefinition, isUnsafeTypeDefinition, false, false, false, isVirtual,
			isOverride && currentTypeKind.top() == TypeKind::Class, false, isFinal && currentTypeKind.top() == TypeKind::Class, false, false, true });
	}
}

void CppAdvanceSema::exitConversionFunction(CppAdvanceParser::ConversionFunctionContext* ctx)
{
	auto specs = ctx->functionSpecifier();
	if (std::any_of(specs.begin(), specs.end(), [&](auto spec) ->bool { return spec->Unsafe(); }))
		--unsafeDepth;
	symbolContexts.pop();
}

void CppAdvanceSema::exitThreeWayComparisonExpression(CppAdvanceParser::ThreeWayComparisonExpressionContext* ctx)
{
	if (ctx->Spaceship())
	{
		typeStack.push("std.strong_ordering");
	}
}

void CppAdvanceSema::enterIndexer(CppAdvanceParser::IndexerContext* ctx)
{
	if (currentTypeKind.top() == TypeKind::StaticClass)
		CppAdvanceCompilerError("Static class cannot have an indexer", ctx->getStart());
	else if (currentTypeKind.top() == TypeKind::UnionStruct)
		CppAdvanceCompilerError("Raw union cannot have an indexer", ctx->getStart());
	symbolContexts.push(symbolContexts.top());
	bool isInline = false;
	bool isStatic = false;
	bool isConstexpr = false;
	bool isConsteval = false;
	bool isUnsafe = false;
	bool isMutating = false;
	bool isVirtual = false;
	bool isOverride = false;
	bool isFinal = false;
	bool isRefReturn = false;
	bool isConstReturn = false;
	bool isForwardReturn = false;
	int8_t varargDepth = -1;
	CppAdvanceParser::TheTypeIdContext* returnType = ctx->returnType()->theTypeId();
	CppAdvanceParser::ExprContext* expression = nullptr;
	CppAdvanceParser::ParamDeclClauseContext* params = ctx->paramDeclClause();
	CppAdvanceParser::TemplateParamsContext* templateParams = ctx->templateParams();
	CppAdvanceParser::ExceptionSpecificationContext* exceptions = ctx->exceptionSpecification();
	CppAdvanceParser::AttributeSpecifierSeqContext* attributes = nullptr;
	CppAdvanceParser::IndexerGetterContext* getter = nullptr;
	CppAdvanceParser::IndexerSetterContext* setter = nullptr;
	//functionBody++;

	for (auto spec : ctx->functionSpecifier()) {
		if (spec->Inline()) isInline = true;
		else if (spec->Consteval()) isConsteval = true;
		else if (spec->Unsafe()) {
			isUnsafe = true;
			if (unsafeDepth > 0)
				CppAdvanceCompilerError("Unsafe context recursion", spec->Unsafe()->getSymbol());
		}
		else if (spec->Static()) {
			isStatic = true;
		}
		else if (spec->Mutable())
		{
			isMutating = true;
		}
		else if (spec->Virtual())
		{
			isVirtual = true;
			if (currentTypeKind.top() != TypeKind::Class)
				CppAdvanceCompilerError("Cannot to declare virtual method outside the class body", spec->Virtual()->getSymbol());
		}
		else if (spec->Override())
		{
			isOverride = true;
		}
		else if (spec->Final())
		{
			isFinal = true;
			if (currentTypeKind.top() != TypeKind::Class)
				CppAdvanceCompilerError("Cannot to declare final method outside the class body", spec->Final()->getSymbol());
		}
	}

	if (ctx->shortFunctionBody())
	{
		expression = ctx->shortFunctionBody()->expressionStatement()->expr();
	}

	if (!isUnsafe && unsafeDepth > 0) isUnsafe = true;
	if (isUnsafe && unsafeDepth <= 0) unsafeDepth++;

	if (!firstPass)
	{
		if (!setter) initStates.push(InitState{});
		auto declList = params->paramDeclList();
		for (auto param : declList->paramDeclaration())
		{
			auto id = param->Identifier()->getText();
			if (auto spec = param->paramSpecification(); spec && spec->Out()) {
				if (ctx->shortFunctionBody())
					CppAdvanceCompilerError("Arrow functions doesn't support out parameters", spec->Out()->getSymbol());
				outParams.insert(id);
				initStates.top().potentiallyAssigned.insert(id);
			}
		}

		if (auto ret = ctx->returnType())
		{
			if (auto idc = ret->Identifier())
			{
				if (ctx->shortFunctionBody())
					CppAdvanceCompilerError("Arrow functions doesn't support named returns", idc->getSymbol());
				auto id = idc->getText();
				outParams.insert(id);
				initStates.top().potentiallyAssigned.insert(id);
			}
			else if (ret->theTypeId() && ret->theTypeId()->VertLine().empty() 
				&& ret->theTypeId()->singleTypeId(0)->typeSpecifierSeq() 
				&& ret->theTypeId()->singleTypeId(0)->typeSpecifierSeq()->simpleTypeSpecifier())
			{
				auto tup = ret->theTypeId()->singleTypeId(0)->typeSpecifierSeq()->simpleTypeSpecifier()->namedTupleField();
				for (auto element : tup)
				{
					auto id = element->Identifier()->getText();
					outParams.insert(id);
					initStates.top().potentiallyAssigned.insert(id);
				}
			}
		}
	}

	if (auto prop = ctx->indexerProperty())
	{
		getter = prop->indexerGetter();
		setter = prop->indexerSetter();
	}

	if (setter && functionBody)
		CppAdvanceCompilerError("Cannot to declare indexer property in the local type", setter->Set()->getSymbol());

	if (firstPass && !functionBody) {
		if (isStatic) {
			if (isMutating)
				CppAdvanceCompilerError("Static method cannot be mutating", ctx->getStart());
			if (isVirtual || isOverride || isFinal)
				CppAdvanceCompilerError("Static method cannot be virtual, override or final", ctx->getStart());
		}

		int lifetimes = 0;
		bool isDefault = false;
		auto declList = params->paramDeclList();
		if (params->Ellipsis() && !templateParams) {
			CppAdvanceCompilerError("Operator function cannot to have a variadic arguments length", params->Ellipsis()->getSymbol());
		}
		for (auto param : declList->paramDeclaration())
		{
			if (param->LifetimeAnnotation()) ++lifetimes;
			if (param->initializerClause())
			{
				isDefault = true;
				if (auto spec = param->paramSpecification()) {
					if (spec->Inout() || spec->Ref() || spec->Out())
						CppAdvanceCompilerError("Mutable reference parameters cannot have default value", param->initializerClause()->getStart());
				}
			}
			else if (isDefault)
			{
				CppAdvanceCompilerError("Default function parameters must be located at the end of the parameter list", param->Identifier()->getSymbol());
			}
		}

		if (auto ret = ctx->returnType())
		{
			if (ret->Const()) isConstReturn = true;
			if (ret->Ref()) 
				isRefReturn = true;			
			if (ret->Forward())
				isForwardReturn = true;
		}

		if (auto body = ctx->functionBody())
		{
			if (body->Assign()) isInline = true;
			else if (body->Equal()) isConstexpr = true;
		}
		else if (auto body = ctx->shortFunctionBody())
		{
			if (body->AssignArrow()) isInline = true;
			else if (body->EqualArrow()) isConstexpr = true;
		}

		CppAdvanceParser::AccessSpecifierContext* acc = nullptr;
		std::optional<AccessSpecifier> access = std::nullopt;
		bool isProtectedInternal = false;
		if (currentTypeKind.top() == TypeKind::Extension)
		{
			if (auto decl = reinterpret_cast<CppAdvanceParser::ExtensionMemberDeclarationContext*>(ctx->parent))
			{
				attributes = decl->attributeSpecifierSeq();
			}
		}
		else if (auto decl = reinterpret_cast<CppAdvanceParser::StructMemberDeclarationContext*>(ctx->parent))
		{
			isProtectedInternal = decl->protectedInternal();
			if (decl->accessSpecifier())
			{
				acc = decl->accessSpecifier();
			}
			attributes = decl->attributeSpecifierSeq();
		}

		if (acc)
		{
			if (currentAccessSpecifier.top())
				CppAdvanceCompilerError("Cannot to redefine access specifier", acc->getStart());
			if (acc->Public())
			{
				access = AccessSpecifier::Public;
			}
			else if (acc->Protected())
			{
				if (isTypeDefinitionBody() && currentTypeKind.top() != TypeKind::Class)
					CppAdvanceCompilerError("Cannot to declare protected member outside the class body", acc->getStart());
				access = AccessSpecifier::Protected;
			}
			else if (acc->Private())
			{
				access = AccessSpecifier::Private;
			}
			else if (acc->Internal())
			{
				access = AccessSpecifier::Internal;
			}
		}
		else if (isProtectedInternal)
		{
			if (currentAccessSpecifier.top())
				CppAdvanceCompilerError("Cannot to redefine access specifier", acc->getStart());
			if (isTypeDefinitionBody() && currentTypeKind.top() != TypeKind::Class)
				CppAdvanceCompilerError("Cannot to declare protected internal member outside the class body", acc->getStart());
			access = AccessSpecifier::ProtectedInternal;
		}
		if (currentTypeKind.top() == TypeKind::Extension)
		{
			access = structStack.top()->access;
		}

		if (currentAccessSpecifier.top()) access = currentAccessSpecifier.top();
		if (!access) access = AccessSpecifier::Internal;
		std::string id = "_operator_subscript";
		
		auto lastTparams = getLastTypeTemplateParams();
		auto lastSpec = getLastTypeTemplateSpecializationArgs();
		auto lastConstraints = getLastTypeConstraints();
		auto fullType = getCurrentFullTypeName();
		structStack.top()->methods.emplace_back(
			MethodDefinition{ id, templateParams, nullptr, nullptr, nullptr, returnType, expression, exceptions, attributes,
			{ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()}, *access, getCurrentCompilationCondition(),
			isInline || isConstexpr, isConstexpr, isConsteval, isUnsafe, isRefReturn, isConstReturn, isForwardReturn, false, varargDepth,
			currentType, fullType, lastTparams, lastSpec, lastConstraints, nullptr, isProtectedTypeDefinition, isUnsafeTypeDefinition, false, isMutating, isStatic, isVirtual,
			isOverride, false, isFinal, false,false,false,params, getter, setter });
		methods.insert_or_assign(SourcePosition{ ctx->getStart()->getLine(),ctx->getStart()->getCharPositionInLine() },
			MethodDefinition{ id, templateParams, nullptr, nullptr, nullptr, returnType, expression, exceptions, attributes,
			{ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()},
			isPrivateTypeDefinition ? AccessSpecifier::Private : AccessSpecifier::Internal, getCurrentCompilationCondition(),
			isInline || isConstexpr, isConstexpr, isConsteval, isUnsafe, isRefReturn, isConstReturn, isForwardReturn, false, varargDepth,
			currentType, fullType, lastTparams, lastSpec, lastConstraints, nullptr, isProtectedTypeDefinition, isUnsafeTypeDefinition, false, isMutating, isStatic, isVirtual,
			isOverride && currentTypeKind.top() == TypeKind::Class, false, isFinal && currentTypeKind.top() == TypeKind::Class, false,false,false,params, getter, setter });
	}
}

void CppAdvanceSema::exitIndexer(CppAdvanceParser::IndexerContext* ctx)
{
	//functionBody--;
	if (firstPass && !functionBody) {
		std::string funcname;
		if (!currentType.empty()) funcname += currentType + ".";
		funcname += "_operator_subscript";
		functionTable[funcname] = contextTypes[ctx->returnType()];
		std::string args;
		bool first = true;
		auto funcnameWithParams = funcname + "/";
		for (auto param : ctx->paramDeclClause()->paramDeclList()->paramDeclaration()) {
			if (!first) {
				args += ",,";
				funcnameWithParams += ",,";
			}
			auto id = param->Identifier()->getText();
			args += id;
			funcnameWithParams += contextTypes[param->theTypeId()];
			activeDefaultParams[funcname].insert_or_assign(id, param->initializerClause());
			first = false;
		}
		if (!args.empty())
			cppParser.parametersTable[funcname].insert(args);
		if (unsafeDepth > 0)
			cppParser.unsafeFunctions.insert(funcnameWithParams);
	}
	if (!firstPass && ctx->indexerProperty() && !ctx->indexerProperty()->indexerSetter())
		initStates.pop();
	auto specs = ctx->functionSpecifier();
	if (std::any_of(specs.begin(), specs.end(), [&](auto spec) ->bool { return spec->Unsafe(); }))
		--unsafeDepth;
	symbolContexts.pop();
}

void CppAdvanceSema::enterIndexerGetter(CppAdvanceParser::IndexerGetterContext* ctx)
{
	symbolContexts.push(symbolContexts.top());
	if (currentTypeKind.top() != TypeKind::Class) {
		if (auto spec = ctx->accessSpecifier())
		{
			if (spec->Protected())
				CppAdvanceCompilerError("Cannot to declare protected member outside the class", spec->Protected()->getSymbol());
		}
		else if (ctx->protectedInternal())
		{
			CppAdvanceCompilerError("Cannot to declare protected internal member outside the class", spec->Protected()->getSymbol());
		}
	}
	++functionBody;
	++depth;
	if (!firstPass)
	{
		initStates.push(InitState{});
	}
}

void CppAdvanceSema::enterIndexerSetter(CppAdvanceParser::IndexerSetterContext* ctx)
{
	symbolContexts.push(symbolContexts.top());
	if (currentTypeKind.top() != TypeKind::Class) {
		if (auto spec = ctx->accessSpecifier())
		{
			if (spec->Protected())
				CppAdvanceCompilerError("Cannot to declare protected member outside the class", spec->Protected()->getSymbol());
		}
		else if (ctx->protectedInternal())
		{
			CppAdvanceCompilerError("Cannot to declare protected internal member outside the class", spec->Protected()->getSymbol());
		}
	}
	++functionBody;
	++depth;
	if (!firstPass)
	{
		initStates.push(InitState{});
	}
}

void CppAdvanceSema::exitIndexerGetter(CppAdvanceParser::IndexerGetterContext*)
{
	--functionBody;
	--depth;
	if (!firstPass)
	{
		initStates.pop();
	}
	symbolContexts.pop();
}

void CppAdvanceSema::exitIndexerSetter(CppAdvanceParser::IndexerSetterContext*)
{
	--functionBody;
	--depth;
	if (!firstPass)
	{
		initStates.pop();
	}
	symbolContexts.pop();
}

void CppAdvanceSema::enterProperty(CppAdvanceParser::PropertyContext* ctx)
{
	symbolContexts.push(symbolContexts.top());
	propertyBody = true;
	functionBody++;
	bool isStatic = ctx->Static();
	bool isUnsafe = ctx->Unsafe();
	bool isVirtual = ctx->Virtual();
	bool isOverride = ctx->Override();
	bool isFinal = ctx->Final();
	bool isRefReturn = ctx->Ref();
	bool isConstReturn = ctx->Const();
	isRefProperty = isRefReturn;
	CppAdvanceParser::TheTypeIdContext* propertyType = ctx->theTypeId();
	CppAdvanceParser::PropertyGetterContext* getter = nullptr;
	CppAdvanceParser::PropertySetterContext* setter = nullptr;
	CppAdvanceParser::ExprContext* expression = nullptr;
	CppAdvanceParser::InitializerClauseContext* initializer = ctx->initializerClause();

	if (isUnsafe)
	{
		if (unsafeDepth > 0)
			CppAdvanceCompilerError("Unsafe context recursion", ctx->Unsafe()->getSymbol());
		++unsafeDepth;
	}
	else if (unsafeDepth > 0)
	{
		isUnsafe = true;
	}

	if (currentTypeKind.top() != TypeKind::Class)
	{
		if (isVirtual)
			CppAdvanceCompilerError("Cannot to declare virtual property outside the class body", ctx->Virtual()->getSymbol());
		if (isFinal)
			CppAdvanceCompilerError("Cannot to declare final property outside the class body", ctx->Final()->getSymbol());
	}

	/*if (isStatic && currentTypeKind.top() == TypeKind::Extension)
		CppAdvanceCompilerError("Extension property cannot be static", ctx->Static()->getSymbol());*/

	if (ctx->shortFunctionBody())
	{
		expression = ctx->shortFunctionBody()->expressionStatement()->expr();
	}

	if (firstPass && functionBody <= 1) {
		bool isInline = false;
		bool isConstexpr = false;

		if (auto body = ctx->propertyBody())
		{
			getter = body->propertyGetter();
			setter = body->propertySetter();
			if (currentTypeKind.top() == TypeKind::Enum || currentTypeKind.top() == TypeKind::EnumClass 
				|| currentTypeKind.top() == TypeKind::Union || currentTypeKind.top() == TypeKind::UnionStruct)
				CppAdvanceCompilerError("Enums and unions can only have computed properties", body->getStart());
		}
		else if (auto body = ctx->functionBody())
		{
			if (body->Equal()) isConstexpr = true;
			else if (body->Assign()) isInline = true;
		}
		else if (auto body = ctx->shortFunctionBody())
		{
			if (body->EqualArrow()) isConstexpr = true;
			else if (body->AssignArrow()) isInline = true;
		}

		if (currentTypeKind.top() == TypeKind::StaticClass) {
			isStatic = true;
		}
		else if (currentTypeKind.top() == TypeKind::UnionStruct && !isStatic && !isUnsafe)
		{
			CppAdvanceCompilerError("Raw union instance property cannot be safe, it requires an unsafe specifier", ctx->getStart());
		}

		CppAdvanceParser::AccessSpecifierContext* acc = ctx->accessSpecifier();
		std::optional<AccessSpecifier> access = std::nullopt;

		if (acc)
		{
			if (currentAccessSpecifier.top())
				CppAdvanceCompilerError("Cannot to redefine access specifier", acc->getStart());
			if (acc->Public())
			{
				access = AccessSpecifier::Public;
			}
			else if (acc->Protected())
			{
				if (currentTypeKind.top() != TypeKind::Class)
					CppAdvanceCompilerError("Cannot to declare protected member outside the class body", acc->getStart());
				access = AccessSpecifier::Protected;
			}
			else if (acc->Private())
			{
				access = AccessSpecifier::Private;
			}
			else if (acc->Internal())
			{
				access = AccessSpecifier::Internal;
			}
		}

		if (currentTypeKind.top() == TypeKind::Extension)
		{
			access = structStack.top()->access;
		}

		if (currentAccessSpecifier.top()) access = currentAccessSpecifier.top();
		if (!access) access = AccessSpecifier::Public;
		std::string id = ctx->Identifier()->getText();
		auto lastTparams = getLastTypeTemplateParams();
		auto lastSpec = getLastTypeTemplateSpecializationArgs();
		auto lastConstraints = getLastTypeConstraints();
		auto fullType = getCurrentFullTypeName();
		auto pos = SourcePosition{ ctx->getStart()->getLine(),ctx->getStart()->getCharPositionInLine() };
		auto property = PropertyDefinition{ id, propertyType, pos, initializer, getter, setter, expression, 
			ctx->attributeSpecifierSeq(), *access, getCurrentCompilationCondition(),
			currentType, fullType, lastTparams, lastSpec, lastConstraints, isStatic, isConstReturn, isRefReturn, isUnsafe, isPrivateTypeDefinition,
			isProtectedTypeDefinition, isUnsafeTypeDefinition, isVirtual, isOverride, false,
			isFinal && currentTypeKind.top() == TypeKind::Class, isInline, isConstexpr };
		structStack.top()->properties.emplace_back(property);
		if (currentTypeKind.top() != TypeKind::Extension) properties.insert_or_assign(pos,property);
	}
}

void CppAdvanceSema::exitProperty(CppAdvanceParser::PropertyContext* ctx)
{
	propertyBody = false;
	isRefProperty = false;
	functionBody--;
	if (firstPass != functionBody > 0) {
		std::string funcname;
		std::string prefix;
		if (!currentType.empty()) prefix = currentType + ".";
		std::string propertyName = ctx->Identifier()->getText();
		if (auto body = ctx->propertyBody())
		{
			if (body->propertySetter())
			{
				if (ctx->Static())
					functionTable[prefix + "set" + propertyName] = "void";
				else
					functionTable[prefix + "set" + propertyName] = currentType;
			}
			else
			{
				functionTable[prefix + "get" + propertyName] = contextTypes[ctx->theTypeId()];
			}
		}
		else
		{
			functionTable[prefix + "get" + propertyName] = contextTypes[ctx->theTypeId()];
		}
		symbolTable.globalSymbolTable.insert_or_assign(prefix + propertyName, contextTypes[ctx->theTypeId()]);
		if (unsafeDepth > 0) {
			cppParser.unsafeVariables.insert(prefix + propertyName);
			cppParser.unsafeVariables.insert(prefix + "p_" + propertyName);
			cppParser.unsafeFunctions.insert(prefix + "set" + propertyName + "/" + contextTypes[ctx->theTypeId()]);
			cppParser.unsafeFunctions.insert(prefix + "get" + propertyName + "/");
		}
	}
	if (ctx->Unsafe())
		--unsafeDepth;

	symbolContexts.pop();
}

void CppAdvanceSema::enterPropertyGetter(CppAdvanceParser::PropertyGetterContext* ctx)
{
	symbolContexts.push(symbolContexts.top());
	if (currentTypeKind.top() != TypeKind::Class)
	{
		if (auto spec = ctx->accessSpecifier())
		{
			if (spec->Protected())
				CppAdvanceCompilerError("Cannot to declare protected member outside the class", spec->Protected()->getSymbol());
		}
		else if (ctx->protectedInternal())
		{
			CppAdvanceCompilerError("Cannot to declare protected internal member outside the class", spec->Protected()->getSymbol());
		}
	}
	
	++functionBody;
	++depth;
	if (!firstPass)
	{
		initStates.push(InitState{});
	}
}

void CppAdvanceSema::exitPropertyGetter(CppAdvanceParser::PropertyGetterContext* ctx)
{
	--functionBody;
	--depth;
	if (!firstPass)
	{
		initStates.pop();
	}
	symbolContexts.pop();
}

void CppAdvanceSema::enterPropertySetter(CppAdvanceParser::PropertySetterContext* ctx)
{
	symbolContexts.push(symbolContexts.top());
	if (currentTypeKind.top() != TypeKind::Class)
	{
		if (auto spec = ctx->accessSpecifier())
		{
			if (spec->Protected())
				CppAdvanceCompilerError("Cannot to declare protected member outside the class", spec->Protected()->getSymbol());
		}
		else if (ctx->protectedInternal())
		{
			CppAdvanceCompilerError("Cannot to declare protected internal member outside the class", spec->Protected()->getSymbol());
		}
	}

	++functionBody;
	fieldAssignment = ctx->Semi();
	++depth;
	if (!firstPass)
	{
		initStates.push(InitState{});
	}
}

void CppAdvanceSema::exitPropertySetter(CppAdvanceParser::PropertySetterContext* ctx)
{
	--functionBody;
	if (fieldAssignment) {
		if (isRefProperty && currentTypeKind.top() != TypeKind::RefStruct)
            CppAdvanceCompilerError("Cannot to use reference data property outside the ref struct body", ctx->getStart());
		propertiesNeedField.insert(ctx);
	}
	fieldAssignment = false;
	--depth;
	if (!firstPass)
	{
		initStates.pop();
	}
	symbolContexts.pop();
}

void CppAdvanceSema::enterSimpleMultiDeclaration(CppAdvanceParser::SimpleMultiDeclarationContext*)
{
	
}

void CppAdvanceSema::exitSimpleMultiDeclaration(CppAdvanceParser::SimpleMultiDeclarationContext* ctx)
{
	if (firstPass && functionBody) return;
	if (isTypeDefinitionBody() && currentTypeKind.top() == TypeKind::StaticClass && !functionBody)
		CppAdvanceCompilerError("Static class cannot have multiple fields with one definition", ctx->getStart());

	bool isConst = false;
	bool isVolatile = false;
	bool isThreadLocal = false;
	bool isStatic = false;
	bool isMutable = false;
	bool isUnowned = false;
	bool isWeak = false;

	if (auto spec = ctx->declSpecifierSeq())
	{
		for (auto d : spec->declSpecifier())
		{
			if (d->Const() || d->Let()) isConst = true;
			else if (d->Volatile()) isVolatile = true;
			else if (d->Thread_local()) isThreadLocal = true;
			else if (d->Static()) {
				isStatic = true;
				if (!functionBody && !isTypeDefinitionBody()) CppAdvanceCompilerError("Global variables and constants are implicitly static, explicit declaration is not required", d->Static()->getSymbol());
			}
			else if (d->Mutable()) {
				isMutable = true;
				if (!functionBody && !isTypeDefinitionBody()) CppAdvanceCompilerError("Global variables and constants are implicitly mutable, explicit declaration is not required", d->Mutable()->getSymbol());
			}
			else if (d->Unowned()) isUnowned = true;
			else if (d->Weak()) isWeak = true;
		}
	}

	if (isTypeDefinitionBody() && currentTypeKind.top() == TypeKind::EnumClass) {
		isConst = true;
	}

	if (isConst && isMutable)
	{
		CppAdvanceCompilerError("Constant cannot be mutable", ctx->declSpecifierSeq()->getStart());
	}
	if (isConst && isVolatile)
	{
		CppAdvanceCompilerError("Constant is not required to be volatile", ctx->declSpecifierSeq()->getStart());
	}
	if (isVolatile && isThreadLocal)
	{
		CppAdvanceCompilerError("Thread local variable is not required to be volatile", ctx->declSpecifierSeq()->getStart());
	}
	if (isConst && isThreadLocal)
	{
		CppAdvanceCompilerError("Thread local variable cannot be constant", ctx->declSpecifierSeq()->getStart());
	}
	if (isConst && (!isTypeDefinitionBody() || functionBody))
	{
		CppAdvanceCompilerError("The constant must be explicitly initialized", ctx->declSpecifierSeq()->getStart());
	}
	if (isUnowned && isWeak)
	{
		CppAdvanceCompilerError("The reference cannot be unowned and weak at the same time", ctx->declSpecifierSeq()->getStart());
	}

	auto ids = ctx->Identifier();
	for (auto id : ids)
	{
		auto txt = id->getText();
		symbolTable[txt] = contextTypes[ctx->theTypeId()];
		if (isTypeDefinitionBody() && !functionBody)
		{
			symbolTable.globalSymbolTable[currentType + "." + txt] = contextTypes[ctx->theTypeId()];
		}
	}

	if (isWeak)
	{
		if (auto type = ctx->theTypeId())
		{
			if (!type->VertLine().empty())
			{
				CppAdvanceCompilerError("Weak reference cannot be used with unions", ctx->declSpecifierSeq()->getStart());
			}
			if (auto post = type->singleTypeId(0)->typePostfix())
			{
				if (!post->arrayDeclarator().back()->Question())
					CppAdvanceCompilerError("Weak reference must be optional", ctx->declSpecifierSeq()->getStart());
			}
			else if (!type->singleTypeId(0)->Question())
			{
				CppAdvanceCompilerError("Weak reference must be optional", ctx->declSpecifierSeq()->getStart());
			}
		}
	}

	if (!functionBody && firstPass)
	{
		CppAdvanceParser::AccessSpecifierContext* acc = nullptr;
		CppAdvanceParser::AttributeSpecifierSeqContext* attributes = nullptr;
		std::optional<AccessSpecifier> access = std::nullopt;
		bool isProtectedInternal = false;
		if (!isTypeDefinitionBody())
		{
			if (auto block = reinterpret_cast<CppAdvanceParser::BlockDeclarationContext*>(ctx->parent))
			{
				if (auto decl = reinterpret_cast<CppAdvanceParser::DeclarationContext*>(block->parent))
				{
					acc = decl->accessSpecifier();
					attributes = decl->attributeSpecifierSeq();
				}
			}
		}
		else
		{
			if (auto block = reinterpret_cast<CppAdvanceParser::MemberBlockDeclarationContext*>(ctx->parent))
			{
				if (auto decl = reinterpret_cast<CppAdvanceParser::StructMemberDeclarationContext*>(block->parent)) {
					isProtectedInternal = decl->protectedInternal();
					acc = decl->accessSpecifier();
                    attributes = decl->attributeSpecifierSeq();
				}
			}
		}
		if (isProtectedInternal)
		{
			if (currentAccessSpecifier.top())
				CppAdvanceCompilerError("Cannot to redefine access specifier", ctx->getStart());
			if (!isStatic)
				CppAdvanceCompilerError("Cannot to declare non-static protected internal field, use public/internal/protected/private", ctx->getStart());
			if (isTypeDefinitionBody() && currentTypeKind.top() != TypeKind::Class)
				CppAdvanceCompilerError("Cannot to declare protected field in the struct/union/enum", ctx->getStart());
			access = AccessSpecifier::ProtectedInternal;
		}
		else if (acc)
		{
			if (currentAccessSpecifier.top())
				CppAdvanceCompilerError("Cannot to redefine access specifier", acc->getStart());
			if (acc->Public())
			{
				access = AccessSpecifier::Public;
			}
			else if (acc->Protected())
			{
				access = AccessSpecifier::Protected;
				if (isTypeDefinitionBody() && currentTypeKind.top() != TypeKind::Class)
					CppAdvanceCompilerError("Cannot to declare protected field in the struct/union/enum", ctx->getStart());
			}
			else if (acc->Private())
			{
				access = AccessSpecifier::Private;
			}
			else if (acc->Internal())
			{
				access = AccessSpecifier::Internal;
			}
		}

		if (currentAccessSpecifier.top()) access = currentAccessSpecifier.top();
		if (isThreadLocal)
		{
			if (access)
			{
				if (*access != AccessSpecifier::Private && !isTypeDefinitionBody()) CppAdvanceCompilerError("Thread-local variables should always be private. Use getters/setters to configure access or thread-local variables", ctx->declSpecifierSeq()->getStart());
			}
			else access = AccessSpecifier::Private;
		}
		else
		{
			if (!access) {
				if (!isTypeDefinitionBody())
					access = AccessSpecifier::Internal;
				else
					access = AccessSpecifier::Private;
			}
		}
		for (auto id : ids)
		{
			if (!isTypeDefinitionBody())
			{
				if (*access == AccessSpecifier::Protected) protectedSymbols.insert(id->getText());
				if (unsafeDepth > 0) cppParser.unsafeVariables.insert(id->getText());
				globalVariables.emplace_back(VariableDefinition{ id->getText(), nullptr, nullptr, ctx->theTypeId(), 
					{ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()}, nullptr, nullptr, attributes, *access, 
					getCurrentCompilationCondition(), "", false, isConst, isVolatile, isThreadLocal, unsafeDepth > 0, false, isUnowned, isWeak });
			}
			else
			{
				if (currentTypeKind.top() == TypeKind::UnionStruct && *access != AccessSpecifier::Private)
					CppAdvanceCompilerError("Raw union field must be private", ctx->getStart());
				if (unsafeDepth > 0) cppParser.unsafeVariables.insert(currentType + "." + id->getText());
				structStack.top()->fields.emplace_back(VariableDefinition{ id->getText(), nullptr, nullptr, ctx->theTypeId(), 
					{ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()}, nullptr, nullptr, attributes, *access,
					getCurrentCompilationCondition(), "", isStatic, isConst, isVolatile, isThreadLocal, unsafeDepth > 0, false, isUnowned, isWeak });
				if (isStatic || isThreadLocal)
				{
					if (isProtectedTypeDefinition) access = AccessSpecifier::Protected;
					else access = AccessSpecifier::Private;
					staticFields.emplace_back(VariableDefinition{ id->getText(), getLastTypeTemplateParams(), getLastTypeConstraints(), ctx->theTypeId(),
						{ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()}, nullptr, nullptr, attributes, *access,
						getCurrentCompilationCondition(), getCurrentFullTypeName(), isStatic, isConst, isVolatile, isThreadLocal, 
						isUnsafeTypeDefinition, getLastTypeTemplateSpecializationArgs() != nullptr, isUnowned, isWeak });
				}
			}
		}
	}
}

void CppAdvanceSema::enterFriendDeclaration(CppAdvanceParser::FriendDeclarationContext*)
{
	isFriendDefinition = true;
}

void CppAdvanceSema::enterClassDefinition(CppAdvanceParser::ClassDefinitionContext* ctx)
{
	symbolContexts.push(symbolContexts.top());
	currentAccessSpecifier.push(std::nullopt);
	bool isStatic = ctx->classHead()->Static();
	if (isStatic)
	{
		currentTypeKind.push(TypeKind::StaticClass);
	}
	else
	{
		currentTypeKind.push(TypeKind::Class);
	}

	auto namectx = ctx->classHead()->className();
	bool primaryType = true;
	if (!currentType.empty()) {
		currentType += ".";
		primaryType = false;
	}
	std::string name;
	if (namectx->Identifier()) name = namectx->Identifier()->getText();
	else name = namectx->simpleTemplateId()->templateName()->getText();
	currentType += name;
	typeset.insert(name);
	if (ctx->classHead()->Unsafe())
	{
		unsafeDepth++;
	}

	if (firstPass && !functionBody)
	{
		typeset.globalTypes.insert(currentType);
		constructorCounts.push(0);
		CppAdvanceParser::TemplateParamsContext* tparams = ctx->classHead()->templateParams();
		CppAdvanceParser::TemplateArgumentListContext* tspec = nullptr;
		CppAdvanceParser::ConstraintClauseContext* constraints = ctx->classHead()->constraintClause();
		CppAdvanceParser::BaseSpecifierListContext* bases = nullptr;
		CppAdvanceParser::AttributeSpecifierSeqContext* attributes = nullptr;

		if (auto t = namectx->simpleTemplateId())
		{
			tspec = t->templateArgumentList();
		}

		if (auto b = ctx->classHead()->baseClause())
		{
			bases = b->baseSpecifierList();
			if (isStatic && bases->baseSpecifier().size() > 1)
				CppAdvanceCompilerError("Static class can be inherited only from other static classes", b->getStart());
		}
		if (constraints && !tparams)
		{
			CppAdvanceCompilerError("Only generic type can have constraints", constraints->Where()->getSymbol());
		}

		bool isUnsafe = unsafeDepth > 0;

		CppAdvanceParser::AccessSpecifierContext* acc = nullptr;
		std::optional<AccessSpecifier> access;
		if (auto decl = dynamic_cast<CppAdvanceParser::DeclarationContext*>(ctx->parent))
		{
			acc = decl->accessSpecifier();
			attributes = decl->attributeSpecifierSeq();
		}
		else if (auto decl = dynamic_cast<CppAdvanceParser::StructMemberDeclarationContext*>(ctx->parent))
		{
			acc = decl->accessSpecifier();
			attributes = decl->attributeSpecifierSeq();
		}

		if (acc)
		{
			if (currentAccessSpecifier.top())
				CppAdvanceCompilerError("Cannot to redefine access specifier", acc->getStart());
			if (acc->Public())
			{
				access = AccessSpecifier::Public;
			}
			else if (acc->Protected())
			{
				access = AccessSpecifier::Protected;
			}
			else if (acc->Private())
			{
				access = AccessSpecifier::Private;
			}
			else if (acc->Internal())
			{
				access = AccessSpecifier::Internal;
			}
		}

		if (!access) {
			if (currentAccessSpecifier.top()) access = currentAccessSpecifier.top();
			else access = AccessSpecifier::Internal;
		}

		if (isUnsafe) {
			cppParser.unsafeTypes.insert(currentType);
			if (primaryType) isUnsafeTypeDefinition = true;
		}

		if (primaryType) {
			if (*access == AccessSpecifier::Protected)
				isProtectedTypeDefinition = true;
			else if (*access == AccessSpecifier::Private)
				isPrivateTypeDefinition = true;
		}

		auto def = std::make_shared<StructDefinition>(currentTypeKind.top(),
			name, tparams, tspec, constraints, *access, getCurrentCompilationCondition(), SourcePosition{ ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine() },
			std::vector<VariableDefinition>{}, std::vector<ConstantDefinition>{}, bases, std::vector<TypeAliasDefinition>{}, std::vector<PropertyDefinition>{},
			std::vector<MethodDefinition>{}, std::vector<std::shared_ptr<StructDefinition>>{}, std::vector<ForwardDeclaration>{},
			std::vector<FunctionDeclaration>{}, std::vector<FunctionDefinition>{}, isUnsafe, ctx->classHead()->Abstract(), ctx->classHead()->Final(),
			false);
		def->attributes = attributes;
		if (!structStack.empty())
			structStack.top()->nestedStructs.push_back(def);
		structStack.push(def);
		if (namectx->simpleTemplateId()) {
			if (namectx->simpleTemplateId()->templateArgumentList())
			{
				name += "<{{specialization}}>";
			}
		}
		else if (auto tparams = ctx->classHead()->templateParams())
		{
			name += "<";
			bool first = true;
			for (auto param : tparams->templateParamDeclaration())
			{
				if (param->Identifier()) {
					if (!first) name += ", ";
					first = false;
					name += param->Identifier()->getText();
				}
				if (param->Ellipsis())
				{
					name += "...";
				}
			}
			name += ">";
		}
		if (!isStatic) name = "__Class_" + name;
		currentTypeWithTemplate.push(name);
	}
}

void CppAdvanceSema::exitClassDefinition(CppAdvanceParser::ClassDefinitionContext* ctx)
{
	auto pos = currentType.rfind('.');
	if (firstPass && !functionBody) {
		if (pos == currentType.npos) {
			isUnsafeTypeDefinition = false;
			isProtectedTypeDefinition = false;
			isPrivateTypeDefinition = false;
			auto& top = structStack.top();
			if (top->access == AccessSpecifier::Protected) protectedSymbols.insert(top->id);
			if (constructorCounts.top() == 0) top->isDefaultConstructible = true;
			constructorCounts.pop();
			if (!top->templateSpecializationArgs) {
				forwardDeclarations.push_back({ top->id,top->templateParams,top->constraints,top->access,{0,0},top->compilationCondition,top->isUnsafe });
				if (currentTypeKind.top() != TypeKind::StaticClass) {
					forwardDeclarations.push_back({ top->id + "__Unowned",top->templateParams,top->constraints,top->access,{0,0},top->compilationCondition,top->isUnsafe });
					forwardDeclarations.push_back({ top->id + "__Weak",top->templateParams,top->constraints,top->access,{0,0},top->compilationCondition,top->isUnsafe });
					forwardDeclarations.push_back({ "__Class_" + top->id,top->templateParams,top->constraints,top->access,{0,0},top->compilationCondition,top->isUnsafe });
				}
			}
			globalStructs.push_back(top);
		}
		int idx = 0;
		for (const auto& field : structStack.top()->fields)
		{
			if (!field.isStatic && !field.isThreadLocal)
				symbolTable.globalSymbolTable[currentType + "." + std::to_string(idx++)] = contextTypes[field.type];
		}
		structStack.pop();
		currentTypeWithTemplate.pop();
	}

	if (ctx->classHead()->Unsafe())
	{
		unsafeDepth--;
	}

	if (pos != currentType.npos)
	{
		currentType = currentType.substr(0, pos);
	}
	else
	{
		currentType.clear();
	}
	currentAccessSpecifier.pop();
	currentTypeKind.pop();
	symbolContexts.pop();
}

void CppAdvanceSema::exitNewExpression(CppAdvanceParser::NewExpressionContext* ctx)
{
	typeStack.push(contextTypes[ctx->theTypeId()]);
}

void CppAdvanceSema::enterDestructor(CppAdvanceParser::DestructorContext* ctx)
{
	if (currentTypeKind.top() != TypeKind::Class && currentTypeKind.top() != TypeKind::Struct && currentTypeKind.top() != TypeKind::RefStruct
		&& currentTypeKind.top() != TypeKind::Union && currentTypeKind.top() != TypeKind::UnionStruct)
		CppAdvanceCompilerError("Cannot to define destructor outside the class/struct/union body", ctx->Tilde()->getSymbol());

	symbolContexts.push(symbolContexts.top());
	if (functionBody || !firstPass) return;
	std::string id = "~" + structStack.top()->id;
	if (currentTypeKind.top() == TypeKind::Class) id.insert(1, "__Class_");
	auto lastTparams = getLastTypeTemplateParams();
	auto lastSpec = getLastTypeTemplateSpecializationArgs();
	auto lastConstraints = getLastTypeConstraints();
	auto fullType = getCurrentFullTypeName();
	auto pos = SourcePosition{ ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine() };
	CppAdvanceParser::ExprContext* expression = nullptr;
	bool isInline = ctx->Inline();
	bool isConstexpr = false;
	bool isUnsafe = unsafeDepth > 0;

	if (auto body = ctx->functionBody())
	{
		if (body->Equal()) isConstexpr = true;
		else if (body->Assign()) isInline = true;
	}
	else if (auto body = ctx->shortFunctionBody())
	{
		expression = body->expressionStatement()->expr();
		if (body->EqualArrow()) isConstexpr = true;
		else if (body->AssignArrow()) isInline = true;
	}

	structStack.top()->methods.emplace_back(
		MethodDefinition{ id, nullptr, nullptr, nullptr, nullptr, nullptr, expression, ctx->exceptionSpecification(), nullptr,
		pos, AccessSpecifier::Public, getCurrentCompilationCondition(),
		isInline || isConstexpr, isConstexpr, false, isUnsafe, false, false, false, false, -1,
		currentType, fullType, lastTparams, lastSpec, lastConstraints, nullptr, isProtectedTypeDefinition, isUnsafeTypeDefinition, false, true, false, false,
		false, false, false, false, true });
	methods.insert_or_assign(pos,
		MethodDefinition{ id, nullptr, nullptr, nullptr, nullptr, nullptr, expression, ctx->exceptionSpecification(), nullptr,
		pos, isPrivateTypeDefinition ? AccessSpecifier::Private : AccessSpecifier::Internal, getCurrentCompilationCondition(),
		isInline || isConstexpr, isConstexpr, false, isUnsafe, false, false, false, false, -1,
		currentType, fullType, lastTparams, lastSpec, lastConstraints, nullptr, isProtectedTypeDefinition, isUnsafeTypeDefinition, false, true, false, false,
		false, false, false, false, true });
}

void CppAdvanceSema::exitDestructor(CppAdvanceParser::DestructorContext*)
{
	symbolContexts.pop();
}

void CppAdvanceSema::enterAbstractProperty(CppAdvanceParser::AbstractPropertyContext* ctx)
{
	symbolContexts.push(symbolContexts.top());
	propertyBody = true;
	//functionBody++;
	bool isUnsafe = false;
	bool isRefReturn = ctx->Ref();
	bool isConstReturn = ctx->Const();
	isRefProperty = isRefReturn;
	CppAdvanceParser::TheTypeIdContext* propertyType = ctx->theTypeId();
	CppAdvanceParser::PropertyGetterContext* getter = ctx->propertyBody()->propertyGetter();
	CppAdvanceParser::PropertySetterContext* setter = ctx->propertyBody()->propertySetter();

	if (unsafeDepth > 0)
	{
		isUnsafe = true;
	}

	if (firstPass && !functionBody) {
		if (!structStack.top()->isAbstract)
		{
			CppAdvanceCompilerError("An abstract property can only be declared in an abstract class", ctx->Abstract()->getSymbol());
		}

		std::optional<AccessSpecifier> access = std::nullopt;

		if (auto acc = ctx->accessSpecifier())
		{
			if (currentAccessSpecifier.top())
				CppAdvanceCompilerError("Cannot to redefine access specifier", acc->getStart());
			if (acc->Public())
			{
				access = AccessSpecifier::Public;
			}
			else if (acc->Protected())
			{
				if (currentTypeKind.top() != TypeKind::Class)
					CppAdvanceCompilerError("Cannot to declare protected member outside the class body", acc->getStart());
				access = AccessSpecifier::Protected;
			}
			else if (acc->Private())
			{
				CppAdvanceCompilerError("An abstract property cannot be private", acc->getStart());
			}
			else if (acc->Internal())
			{
				access = AccessSpecifier::Internal;
			}
		}

		if (getter)
		{
			if (getter->accessSpecifier() && getter->accessSpecifier()->Private())
				CppAdvanceCompilerError("An abstract property cannot be private", getter->accessSpecifier()->Private()->getSymbol());
			if (getter->functionBody())
				CppAdvanceCompilerError("An abstract property cannot have definition", getter->functionBody()->getStart());
			if (getter->shortFunctionBody())
				CppAdvanceCompilerError("An abstract property cannot have definition", getter->shortFunctionBody()->getStart());
		}
		if (setter)
		{
			if (setter->accessSpecifier() && setter->accessSpecifier()->Private())
				CppAdvanceCompilerError("An abstract property cannot be private", setter->accessSpecifier()->Private()->getSymbol());
			if (setter->functionBody())
				CppAdvanceCompilerError("An abstract property cannot have definition", setter->functionBody()->getStart());
			if (setter->shortFunctionBody())
				CppAdvanceCompilerError("An abstract property cannot have definition", setter->shortFunctionBody()->getStart());
		}

		if (currentAccessSpecifier.top()) access = currentAccessSpecifier.top();
		if (!access) access = AccessSpecifier::Public;
		std::string id = ctx->Identifier()->getText();
		auto lastTparams = getLastTypeTemplateParams();
		auto lastSpec = getLastTypeTemplateSpecializationArgs();
		auto lastConstraints = getLastTypeConstraints();
		auto fullType = getCurrentFullTypeName();
		auto pos = SourcePosition{ ctx->getStart()->getLine(),ctx->getStart()->getCharPositionInLine() };
		auto property = PropertyDefinition{ id, propertyType, pos, nullptr, getter, setter, nullptr,
			ctx->attributeSpecifierSeq(), *access, getCurrentCompilationCondition(),
			currentType, fullType, lastTparams, lastSpec, lastConstraints, false, isConstReturn, isRefReturn, isUnsafe, isPrivateTypeDefinition,
			isProtectedTypeDefinition, isUnsafeTypeDefinition, false, false, true, false, false, false };
		structStack.top()->properties.emplace_back(property);
		properties.insert_or_assign(pos, property);
	}
}

void CppAdvanceSema::exitAbstractProperty(CppAdvanceParser::AbstractPropertyContext* ctx)
{
	propertyBody = false;
	isRefProperty = false;
	//functionBody--;
	if (firstPass != functionBody > 0) {
		std::string funcname;
		std::string prefix;
		if (!currentType.empty()) prefix = currentType + ".";
		std::string propertyName = ctx->Identifier()->getText();
		if (auto body = ctx->propertyBody())
		{
			if (body->propertySetter())
			{
				functionTable[prefix + "set" + propertyName] = currentType;
			}
			else
			{
				functionTable[prefix + "get" + propertyName] = contextTypes[ctx->theTypeId()];
			}
		}
		else
		{
			functionTable[prefix + "get" + propertyName] = contextTypes[ctx->theTypeId()];
		}
		symbolTable.globalSymbolTable.insert_or_assign(prefix + propertyName, contextTypes[ctx->theTypeId()]);
		if (unsafeDepth > 0) {
			cppParser.unsafeVariables.insert(prefix + propertyName);
			cppParser.unsafeVariables.insert(prefix + "p_" + propertyName);
			cppParser.unsafeFunctions.insert(prefix + "set" + propertyName + "/" + contextTypes[ctx->theTypeId()]);
			cppParser.unsafeFunctions.insert(prefix + "get" + propertyName + "/");
		}
	}

	symbolContexts.pop();
}

void CppAdvanceSema::enterAbstractMethodDeclaration(CppAdvanceParser::AbstractMethodDeclarationContext* ctx)
{
	symbolContexts.push(symbolContexts.top());
	bool isMutating = ctx->Mutable();
	bool isRefReturn = false;
	bool isConstReturn = false;
	int8_t varargDepth = -1;
	CppAdvanceParser::TheTypeIdContext* returnType = nullptr;
	CppAdvanceParser::FunctionParamsContext* params = ctx->functionParams();
	CppAdvanceParser::ExceptionSpecificationContext* exceptions = ctx->exceptionSpecification();

	if (firstPass && !functionBody) {
		if (!structStack.top()->isAbstract)
			CppAdvanceCompilerError("An abstract method can only be declared in an abstract class", ctx->Abstract()->getSymbol());

		int lifetimes = 0;
		if (auto decl = params->paramDeclClause())
		{
			auto declList = decl->paramDeclList();
			if (decl->Ellipsis()) {
				if (ctx->Identifier()) {
					varargDepth = declList->paramDeclaration().size() - 1;
					cppParser.varargFunctions[ctx->Identifier()->getText()] = varargDepth;
				}
				else
				{
					CppAdvanceCompilerError("Operator function cannot to have a variadic arguments length", decl->Ellipsis()->getSymbol());
				}
			}
			for (auto param : declList->paramDeclaration())
			{
				if (param->LifetimeAnnotation()) ++lifetimes;
				if (param->initializerClause())
				{
					if (auto spec = param->paramSpecification()) {
						if (spec->Inout() || spec->Ref() || spec->Out())
							CppAdvanceCompilerError("Mutable reference parameters cannot have default value", param->initializerClause()->getStart());
					}
				}
			}
		}

		if (auto ret = ctx->returnType())
		{
			if (isTypeDefinitionBody() && ctx->LifetimeAnnotation()) lifetimes++;
			returnType = ret->theTypeId();
			if (ret->Const()) isConstReturn = true;
			if (ret->Ref()) {
				isRefReturn = true;
			}
		}

		std::optional<AccessSpecifier> access;
		bool isProtectedInternal = ctx->protectedInternal();

		if (auto acc = ctx->accessSpecifier())
		{
			if (currentAccessSpecifier.top())
				CppAdvanceCompilerError("Cannot to redefine access specifier", acc->getStart());
			if (acc->Public())
			{
				access = AccessSpecifier::Public;
			}
			else if (acc->Protected())
			{
				if (isTypeDefinitionBody() && currentTypeKind.top() != TypeKind::Class)
					CppAdvanceCompilerError("Cannot to declare protected member outside the class body", acc->getStart());
				access = AccessSpecifier::Protected;
			}
			else if (acc->Private())
			{
				CppAdvanceCompilerError("An abstract method cannot be private", acc->getStart());
			}
			else if (acc->Internal())
			{
				access = AccessSpecifier::Internal;
			}
		}
		else if (isProtectedInternal)
		{
			if (currentAccessSpecifier.top())
				CppAdvanceCompilerError("Cannot to redefine access specifier", acc->getStart());
			if (isTypeDefinitionBody() && currentTypeKind.top() != TypeKind::Class)
				CppAdvanceCompilerError("Cannot to declare protected internal member outside the class body", acc->getStart());
			access = AccessSpecifier::ProtectedInternal;
		}

		if (currentAccessSpecifier.top()) access = currentAccessSpecifier.top();
		if (!access) access = AccessSpecifier::Internal;
		std::string id;
		bool isOperator = false;
		if (ctx->Identifier()) id = ctx->Identifier()->getText();
		else if (ctx->operatorFunctionId()) {
			id = ctx->operatorFunctionId()->getText();
			if (ctx->operatorFunctionId()->operator_()->Exclamation()) id = "operator*";
			StringReplace(id, "operator", "operator ");
			isOperator = true;
		}
		if (isOperator && !id.ends_with("new") && !id.ends_with("delete"))
		StringReplace(id, " ", "");
		auto lastTparams = getLastTypeTemplateParams();
		auto lastSpec = getLastTypeTemplateSpecializationArgs();
		auto lastConstraints = getLastTypeConstraints();
		auto fullType = getCurrentFullTypeName();
		auto def = MethodDefinition{ id, nullptr, nullptr, nullptr, params, returnType, nullptr, exceptions, ctx->attributeSpecifierSeq(),
			{ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()}, *access, getCurrentCompilationCondition(),
			false, false, false, false, isRefReturn, isConstReturn, false, false, varargDepth,
			currentType, fullType, lastTparams, lastSpec, lastConstraints, nullptr, isProtectedTypeDefinition, isUnsafeTypeDefinition, false,
			isMutating, false, false, false, true, false };
		structStack.top()->methods.emplace_back(def);
		methods.insert_or_assign(SourcePosition{ ctx->getStart()->getLine(),ctx->getStart()->getCharPositionInLine() }, def);
	}
}

void CppAdvanceSema::exitAbstractMethodDeclaration(CppAdvanceParser::AbstractMethodDeclarationContext* ctx)
{
	if (firstPass != functionBody > 0) {
		std::string funcname;
		if (!currentType.empty()) funcname += currentType + ".";
		if (ctx->Identifier())
			funcname += ctx->Identifier()->getText();
		else if (ctx->operatorFunctionId())
			funcname += ctx->operatorFunctionId()->getText();
		if (ctx->returnType())
		{
			functionTable[funcname] = contextTypes[ctx->returnType()];
		}
		else {
			functionTable[funcname] = "void";
		}
		auto funcnameWithParams = funcname + "/";
		if (auto params = ctx->functionParams()->paramDeclClause()) {
			std::string args;
			bool first = true;
			for (auto param : params->paramDeclList()->paramDeclaration()) {
				if (!first) {
					args += ",,";
					funcnameWithParams += ",,";
				}
				auto id = param->Identifier()->getText();
				args += id;
				funcnameWithParams += contextTypes[param->theTypeId()];
				activeDefaultParams[funcname].insert_or_assign(id, param->initializerClause());
				first = false;
			}
			if (!args.empty())
				cppParser.parametersTable[funcname].insert(args);
		}
		if (unsafeDepth > 0)
			cppParser.unsafeFunctions.insert(funcnameWithParams);
	}

	symbolContexts.pop();
}

void CppAdvanceSema::exitStackallocExpression(CppAdvanceParser::StackallocExpressionContext* ctx)
{
	typeStack.push(contextTypes[ctx->theTypeId()]);
	if (firstPass) return;
	if (!functionBody)
		CppAdvanceCompilerError("Stackalloc expression can be used only in the function body", ctx->Stackalloc()->getSymbol());

	stackallocPrerequisites[currentStatement].emplace_back(ctx);
}

void CppAdvanceSema::enterInterfaceDefinition(CppAdvanceParser::InterfaceDefinitionContext* ctx)
{
	symbolContexts.push(symbolContexts.top());
	currentAccessSpecifier.push(std::nullopt);
	currentTypeKind.push(TypeKind::Interface);

	bool primaryType = true;
	if (!currentType.empty()) {
		currentType += ".";
		primaryType = false;
	}
	std::string name = ctx->interfaceHead()->Identifier()->getText();
	currentType += name;
	typeset.insert(name);
	if (ctx->interfaceHead()->Unsafe())
	{
		unsafeDepth++;
	}

	if (firstPass && !functionBody)
	{
		typeset.globalTypes.insert(currentType);
		CppAdvanceParser::TemplateParamsContext* tparams = ctx->interfaceHead()->templateParams();
		CppAdvanceParser::ConstraintClauseContext* constraints = ctx->interfaceHead()->constraintClause();
		CppAdvanceParser::BaseSpecifierListContext* baseInterfaces = nullptr;
		CppAdvanceParser::AttributeSpecifierSeqContext* attributes = nullptr;

		if (auto b = ctx->interfaceHead()->baseClause())
		{
			baseInterfaces = b->baseSpecifierList();
		}

		if (constraints && !tparams)
		{
			CppAdvanceCompilerError("Only generic type can have constraints", constraints->Where()->getSymbol());
		}
		bool isUnsafe = unsafeDepth > 0;

		CppAdvanceParser::AccessSpecifierContext* acc = nullptr;
		std::optional<AccessSpecifier> access;
		if (auto decl = dynamic_cast<CppAdvanceParser::DeclarationContext*>(ctx->parent))
		{
			acc = decl->accessSpecifier();
			attributes = decl->attributeSpecifierSeq();
		}

		if (acc)
		{
			if (currentAccessSpecifier.top())
				CppAdvanceCompilerError("Cannot to redefine access specifier", acc->getStart());
			if (acc->Public())
			{
				access = AccessSpecifier::Public;
			}
			else if (acc->Protected())
			{
				access = AccessSpecifier::Protected;
			}
			else if (acc->Private())
			{
				access = AccessSpecifier::Private;
			}
			else if (acc->Internal())
			{
				access = AccessSpecifier::Internal;
			}
		}

		if (!access) {
			if (currentAccessSpecifier.top()) access = currentAccessSpecifier.top();
			else access = AccessSpecifier::Internal;
		}

		if (isUnsafe) {
			cppParser.unsafeTypes.insert(currentType);
			if (primaryType) isUnsafeTypeDefinition = true;
		}

		if (primaryType) {
			if (*access == AccessSpecifier::Protected)
				isProtectedTypeDefinition = true;
			else if (*access == AccessSpecifier::Private)
				isPrivateTypeDefinition = true;
		}

		auto def = std::make_shared<StructDefinition>(TypeKind::Interface,
			name, tparams, nullptr, constraints, *access, getCurrentCompilationCondition(), SourcePosition{ ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine() },
			std::vector<VariableDefinition>{}, std::vector<ConstantDefinition>{}, baseInterfaces, std::vector<TypeAliasDefinition>{}, std::vector<PropertyDefinition>{},
			std::vector<MethodDefinition>{}, std::vector<std::shared_ptr<StructDefinition>>{}, std::vector<ForwardDeclaration>{},
			std::vector<FunctionDeclaration>{}, std::vector<FunctionDefinition>{}, isUnsafe, false, false, false);
		def->attributes = attributes;
		/*if (!structStack.empty())
			structStack.top()->nestedStructs.push_back(def);*/
		structStack.push(def);
		if (auto tparams = ctx->interfaceHead()->templateParams())
		{
			name += "<";
			bool first = true;
			for (auto param : tparams->templateParamDeclaration())
			{
				if (param->Identifier()) {
					if (!first) name += ", ";
					first = false;
					name += param->Identifier()->getText();
				}
				if (param->Ellipsis())
				{
					name += "...";
				}
			}
			name += ">";
		}
		currentTypeWithTemplate.push(name);
	}
}

void CppAdvanceSema::exitInterfaceDefinition(CppAdvanceParser::InterfaceDefinitionContext* ctx)
{
	auto pos = currentType.rfind('.');
	if (firstPass && !functionBody) {
		if (pos == currentType.npos) {
			isUnsafeTypeDefinition = false;
			isProtectedTypeDefinition = false;
			isPrivateTypeDefinition = false;
			auto& top = structStack.top();
			if (top->access == AccessSpecifier::Protected) protectedSymbols.insert(top->id);
			forwardDeclarations.push_back({ top->id,top->templateParams,top->constraints,top->access,{0,0},top->compilationCondition,top->isUnsafe });
			forwardDeclarations.push_back({ top->id + "__Unowned",top->templateParams,top->constraints,top->access,{0,0},top->compilationCondition,top->isUnsafe});
			forwardDeclarations.push_back({ top->id + "__Weak",top->templateParams,top->constraints,top->access,{0,0},top->compilationCondition,top->isUnsafe});
			globalStructs.push_back(top);
		}
		int idx = 0;
		for (const auto& field : structStack.top()->fields)
		{
			if (!field.isStatic && !field.isThreadLocal)
				symbolTable.globalSymbolTable[currentType + "." + std::to_string(idx++)] = contextTypes[field.type];
		}
		structStack.pop();
		currentTypeWithTemplate.pop();
	}

	if (ctx->interfaceHead()->Unsafe())
	{
		unsafeDepth--;
	}

	if (pos != currentType.npos)
	{
		currentType = currentType.substr(0, pos);
	}
	else
	{
		currentType.clear();
	}
	currentAccessSpecifier.pop();
	currentTypeKind.pop();
	symbolContexts.pop();
}

void CppAdvanceSema::enterInterfaceProperty(CppAdvanceParser::InterfacePropertyContext* ctx)
{
	symbolContexts.push(symbolContexts.top());
	propertyBody = true;
	//functionBody++;
	bool isUnsafe = false;
	bool isRefReturn = ctx->Ref();
	bool isConstReturn = ctx->Const();
	isRefProperty = isRefReturn;
	CppAdvanceParser::TheTypeIdContext* propertyType = ctx->theTypeId();
	CppAdvanceParser::PropertyGetterContext* getter = nullptr;
	CppAdvanceParser::PropertySetterContext* setter = nullptr;

	if (unsafeDepth > 0)
	{
		isUnsafe = true;
	}

	if (firstPass && !functionBody) {
		if (ctx->propertyBody())
		{
			getter = ctx->propertyBody()->propertyGetter();
			setter = ctx->propertyBody()->propertySetter();
		}

		if (getter)
		{
			if (getter->accessSpecifier() || getter->protectedInternal())
				CppAdvanceCompilerError("An interface property must be public", getter->getStart());
			if (getter->functionBody())
				CppAdvanceCompilerError("An interface property cannot have definition", getter->functionBody()->getStart());
			if (getter->shortFunctionBody())
				CppAdvanceCompilerError("An interface property cannot have definition", getter->shortFunctionBody()->getStart());
		}
		if (setter)
		{
			if (setter->accessSpecifier() || setter->protectedInternal())
				CppAdvanceCompilerError("An interface property must be public", setter->getStart());
			if (setter->functionBody())
				CppAdvanceCompilerError("An interface property cannot have definition", setter->functionBody()->getStart());
			if (setter->shortFunctionBody())
				CppAdvanceCompilerError("An interface property cannot have definition", setter->shortFunctionBody()->getStart());
		}

		std::string id = ctx->Identifier()->getText();
		auto lastTparams = getLastTypeTemplateParams();
		auto lastSpec = getLastTypeTemplateSpecializationArgs();
		auto lastConstraints = getLastTypeConstraints();
		auto fullType = getCurrentFullTypeName();
		auto pos = SourcePosition{ ctx->getStart()->getLine(),ctx->getStart()->getCharPositionInLine() };
		auto property = PropertyDefinition{ id, propertyType, pos, nullptr, getter, setter, nullptr,
			ctx->attributeSpecifierSeq(), AccessSpecifier::Public, getCurrentCompilationCondition(),
			currentType, fullType, lastTparams, lastSpec, lastConstraints, ctx->Static() != nullptr, isConstReturn, isRefReturn, isUnsafe, isPrivateTypeDefinition,
			isProtectedTypeDefinition, isUnsafeTypeDefinition };
		structStack.top()->properties.emplace_back(property);
		//properties.insert_or_assign(pos, property);
	}
}

void CppAdvanceSema::exitInterfaceProperty(CppAdvanceParser::InterfacePropertyContext* ctx)
{
	propertyBody = false;
	isRefProperty = false;
	//functionBody--;
	if (firstPass != functionBody > 0) {
		std::string funcname;
		std::string prefix;
		if (!currentType.empty()) prefix = currentType + ".";
		std::string propertyName = ctx->Identifier()->getText();
		if (auto body = ctx->propertyBody())
		{
			if (body->propertySetter())
			{
				functionTable[prefix + "set" + propertyName] = currentType;
			}
			else
			{
				functionTable[prefix + "get" + propertyName] = contextTypes[ctx->theTypeId()];
			}
		}
		else
		{
			functionTable[prefix + "get" + propertyName] = contextTypes[ctx->theTypeId()];
		}
		symbolTable.globalSymbolTable.insert_or_assign(prefix + propertyName, contextTypes[ctx->theTypeId()]);
		if (unsafeDepth > 0) {
			cppParser.unsafeVariables.insert(prefix + propertyName);
			cppParser.unsafeVariables.insert(prefix + "p_" + propertyName);
			cppParser.unsafeFunctions.insert(prefix + "set" + propertyName + "/" + contextTypes[ctx->theTypeId()]);
			cppParser.unsafeFunctions.insert(prefix + "get" + propertyName + "/");
		}
	}

	symbolContexts.pop();
}

void CppAdvanceSema::enterInterfaceMethodDeclaration(CppAdvanceParser::InterfaceMethodDeclarationContext* ctx)
{
	symbolContexts.push(symbolContexts.top());
	bool isRefReturn = false;
	bool isConstReturn = false;
	int8_t varargDepth = -1;
	CppAdvanceParser::TheTypeIdContext* returnType = nullptr;
	CppAdvanceParser::FunctionParamsContext* params = ctx->functionParams();
	CppAdvanceParser::ExceptionSpecificationContext* exceptions = ctx->exceptionSpecification();

	if (firstPass && !functionBody) {
		int lifetimes = 0;
		if (auto decl = params->paramDeclClause())
		{
			auto declList = decl->paramDeclList();
			if (decl->Ellipsis()) {
				if (ctx->Identifier()) {
					varargDepth = declList->paramDeclaration().size() - 1;
					cppParser.varargFunctions[ctx->Identifier()->getText()] = varargDepth;
				}
				else
				{
					CppAdvanceCompilerError("Operator function cannot to have a variadic arguments length", decl->Ellipsis()->getSymbol());
				}
			}
			for (auto param : declList->paramDeclaration())
			{
				if (param->LifetimeAnnotation()) ++lifetimes;
				if (param->initializerClause())
				{
					if (auto spec = param->paramSpecification()) {
						if (spec->Inout() || spec->Ref() || spec->Out())
							CppAdvanceCompilerError("Mutable reference parameters cannot have default value", param->initializerClause()->getStart());
					}
				}
			}
		}

		if (auto ret = ctx->returnType())
		{
			if (isTypeDefinitionBody() && ctx->LifetimeAnnotation()) lifetimes++;
			returnType = ret->theTypeId();
			if (ret->Const()) isConstReturn = true;
			if (ret->Ref()) {
				isRefReturn = true;
			}
		}

		std::string id;
		bool isOperator = false;
		if (ctx->Identifier()) id = ctx->Identifier()->getText();
		else if (ctx->operatorFunctionId()) {
			id = ctx->operatorFunctionId()->getText();
			if (ctx->operatorFunctionId()->operator_()->Exclamation()) id = "operator*";
			StringReplace(id, "operator", "operator ");
			isOperator = true;
		}
		if (isOperator && !id.ends_with("new") && !id.ends_with("delete"))
			StringReplace(id, " ", "");
		auto lastTparams = getLastTypeTemplateParams();
		auto lastSpec = getLastTypeTemplateSpecializationArgs();
		auto lastConstraints = getLastTypeConstraints();
		auto fullType = getCurrentFullTypeName();
		auto def = MethodDefinition{ id, nullptr, nullptr, nullptr, params, returnType, nullptr, exceptions, ctx->attributeSpecifierSeq(),
			{ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()}, AccessSpecifier::Public, getCurrentCompilationCondition(),
			false, false, false, false, isRefReturn, isConstReturn, false, false, varargDepth,
			currentType, fullType, lastTparams, lastSpec, lastConstraints, nullptr, isProtectedTypeDefinition, isUnsafeTypeDefinition, false,
			false, ctx->Static() != nullptr, false, false, true, false };
		structStack.top()->methods.emplace_back(def);
		//methods.insert_or_assign(SourcePosition{ ctx->getStart()->getLine(),ctx->getStart()->getCharPositionInLine() }, def);
	}
}

void CppAdvanceSema::exitInterfaceMethodDeclaration(CppAdvanceParser::InterfaceMethodDeclarationContext* ctx)
{
	if (firstPass != functionBody > 0) {
		std::string funcname;
		if (!currentType.empty()) funcname += currentType + ".";
		if (ctx->Identifier())
			funcname += ctx->Identifier()->getText();
		else if (ctx->operatorFunctionId())
			funcname += ctx->operatorFunctionId()->getText();
		if (ctx->returnType())
		{
			functionTable[funcname] = contextTypes[ctx->returnType()];
		}
		else {
			functionTable[funcname] = "void";
		}
		auto funcnameWithParams = funcname + "/";
		if (auto params = ctx->functionParams()->paramDeclClause()) {
			std::string args;
			bool first = true;
			for (auto param : params->paramDeclList()->paramDeclaration()) {
				if (!first) {
					args += ",,";
					funcnameWithParams += ",,";
				}
				auto id = param->Identifier()->getText();
				args += id;
				funcnameWithParams += contextTypes[param->theTypeId()];
				activeDefaultParams[funcname].insert_or_assign(id, param->initializerClause());
				first = false;
			}
			if (!args.empty())
				cppParser.parametersTable[funcname].insert(args);
		}
		if (unsafeDepth > 0)
			cppParser.unsafeFunctions.insert(funcnameWithParams);
	}

	symbolContexts.pop();
}

void CppAdvanceSema::enterInterfaceIndexer(CppAdvanceParser::InterfaceIndexerContext* ctx)
{
	symbolContexts.push(symbolContexts.top());
	bool isInline = false;
	bool isStatic = false;
	bool isConstexpr = false;
	bool isConsteval = false;
	bool isUnsafe = false;
	bool isMutating = false;
	bool isVirtual = false;
	bool isOverride = false;
	bool isFinal = false;
	bool isRefReturn = false;
	bool isConstReturn = false;
	bool isForwardReturn = false;
	int8_t varargDepth = -1;
	CppAdvanceParser::TheTypeIdContext* returnType = ctx->returnType()->theTypeId();
	CppAdvanceParser::ParamDeclClauseContext* params = ctx->paramDeclClause();
	CppAdvanceParser::ExceptionSpecificationContext* exceptions = ctx->exceptionSpecification();
	CppAdvanceParser::IndexerGetterContext* getter = nullptr;
	CppAdvanceParser::IndexerSetterContext* setter = ctx->Set() ? (CppAdvanceParser::IndexerSetterContext*)1 : nullptr;
	//functionBody++;

	if (!isUnsafe && unsafeDepth > 0) isUnsafe = true;
	if (isUnsafe && unsafeDepth <= 0) unsafeDepth++;

	if (firstPass && !functionBody) {
		if (auto ret = ctx->returnType())
		{
			if (ret->Const()) isConstReturn = true;
			if (ret->Ref())
				isRefReturn = true;
			if (ret->Forward())
				isForwardReturn = true;
		}

		std::string id = "_operator_subscript";

		auto lastTparams = getLastTypeTemplateParams();
		auto lastSpec = getLastTypeTemplateSpecializationArgs();
		auto lastConstraints = getLastTypeConstraints();
		auto fullType = getCurrentFullTypeName();
		structStack.top()->methods.emplace_back(
			MethodDefinition{ id, nullptr, nullptr, nullptr, nullptr, returnType, nullptr, exceptions, ctx->attributeSpecifierSeq(),
			{ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()}, AccessSpecifier::Public, getCurrentCompilationCondition(),
			isInline || isConstexpr, isConstexpr, isConsteval, isUnsafe, isRefReturn, isConstReturn, isForwardReturn, false, varargDepth,
			currentType, fullType, lastTparams, lastSpec, lastConstraints, nullptr, isProtectedTypeDefinition, isUnsafeTypeDefinition, false, isMutating, isStatic, isVirtual,
			isOverride, false, isFinal, false,false,false,params, getter, setter });
		/*methods.insert_or_assign(SourcePosition{ ctx->getStart()->getLine(),ctx->getStart()->getCharPositionInLine() },
			MethodDefinition{ id, templateParams, nullptr, nullptr, returnType, expression, exceptions,
			{ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()},
			isPrivateTypeDefinition ? AccessSpecifier::Private : AccessSpecifier::Internal, getCurrentCompilationCondition(),
			isInline || isConstexpr, isConstexpr, isConsteval, isUnsafe, isRefReturn, isConstReturn, isForwardReturn, varargDepth,
			currentType, fullType, lastTparams, lastSpec, nullptr, isProtectedTypeDefinition, isUnsafeTypeDefinition, false, isMutating, isStatic, isVirtual,
			isOverride && currentTypeKind.top() == TypeKind::Class, false, isFinal && currentTypeKind.top() == TypeKind::Class, false,false,false,params, getter, setter });*/
	}
}

void CppAdvanceSema::exitInterfaceIndexer(CppAdvanceParser::InterfaceIndexerContext* ctx)
{
	//functionBody--;
	if (firstPass && !functionBody) {
		std::string funcname;
		if (!currentType.empty()) funcname += currentType + ".";
		funcname += "_operator_subscript";
		functionTable[funcname] = contextTypes[ctx->returnType()];
		std::string args;
		bool first = true;
		auto funcnameWithParams = funcname + "/";
		for (auto param : ctx->paramDeclClause()->paramDeclList()->paramDeclaration()) {
			if (!first) {
				args += ",,";
				funcnameWithParams += ",,";
			}
			auto id = param->Identifier()->getText();
			args += id;
			funcnameWithParams += contextTypes[param->theTypeId()];
			activeDefaultParams[funcname].insert_or_assign(id, param->initializerClause());
			first = false;
		}
		if (!args.empty())
			cppParser.parametersTable[funcname].insert(args);
		if (unsafeDepth > 0)
			cppParser.unsafeFunctions.insert(funcnameWithParams);
	}
	symbolContexts.pop();
}

void CppAdvanceSema::enterTemplateParamDeclaration(CppAdvanceParser::TemplateParamDeclarationContext* ctx)
{
	if ((ctx->In() || ctx->Out()) && (!isTypeDefinitionBody() || currentTypeKind.top() != TypeKind::Interface))
		CppAdvanceCompilerError("In/out generic parameters enabled only in the generic interface definition", ctx->getStart());
}

void CppAdvanceSema::enterExtensionDefinition(CppAdvanceParser::ExtensionDefinitionContext* ctx)
{
	symbolContexts.push(symbolContexts.top());
	currentAccessSpecifier.push(std::nullopt);
	currentTypeKind.push(TypeKind::Extension);

	bool primaryType = true;
	if (!currentType.empty()) {
		currentType += ".";
		primaryType = false;
	}
	std::string name;
	if (auto className = ctx->extensionHead()->theTypeId())
	{
		name = className->getText();
	}
	else if (auto params = ctx->extensionHead()->templateParams())
	{
		if (params->templateParamDeclaration().size() == 1)
            name = params->templateParamDeclaration(0)->Identifier()->getText();
		else 
			CppAdvanceCompilerError("Generic extensions can be used only with one generic parameter", 
				params->templateParamDeclaration(1)->Identifier()->getSymbol());
	}
	currentType += name;
	typeset.insert(name);
	if (ctx->extensionHead()->Unsafe())
	{
		unsafeDepth++;
	}

	if (firstPass && !functionBody)
	{
		typeset.globalTypes.insert(currentType);
		CppAdvanceParser::TemplateParamsContext* tparams = ctx->extensionHead()->templateParams();
		CppAdvanceParser::TemplateArgumentListContext* tspec = nullptr;
		CppAdvanceParser::ConstraintClauseContext* constraints = ctx->extensionHead()->constraintClause();
		CppAdvanceParser::BaseSpecifierListContext* baseInterfaces = nullptr;

		if (auto b = ctx->extensionHead()->baseClause())
		{
			baseInterfaces = b->baseSpecifierList();
		}
		if (constraints && !tparams)
		{
			CppAdvanceCompilerError("Only generic type can have constraints", constraints->Where()->getSymbol());
		}

		bool isUnsafe = unsafeDepth > 0;

		CppAdvanceParser::AccessSpecifierContext* acc = nullptr;
		std::optional<AccessSpecifier> access;
		if (auto decl = dynamic_cast<CppAdvanceParser::DeclarationContext*>(ctx->parent))
		{
			acc = decl->accessSpecifier();

		}

		if (acc)
		{
			if (currentAccessSpecifier.top())
				CppAdvanceCompilerError("Cannot to redefine access specifier", acc->getStart());
			if (acc->Public())
			{
				access = AccessSpecifier::Public;
			}
			else if (acc->Protected())
			{
				access = AccessSpecifier::Protected;
			}
			else if (acc->Private())
			{
				access = AccessSpecifier::Private;
			}
			else if (acc->Internal())
			{
				access = AccessSpecifier::Internal;
			}
		}

		if (!access) {
			if (currentAccessSpecifier.top()) access = currentAccessSpecifier.top();
			else access = AccessSpecifier::Internal;
		}

		if (isUnsafe) {
			cppParser.unsafeTypes.insert(currentType);
			if (primaryType) isUnsafeTypeDefinition = true;
		}

		if (primaryType) {
			if (*access == AccessSpecifier::Protected)
				isProtectedTypeDefinition = true;
			else if (*access == AccessSpecifier::Private)
				isPrivateTypeDefinition = true;
		}
		auto mangledName = name;
		StringReplace(mangledName, "<", "_tspec_");
		StringReplace(mangledName, ">", "_tspec_");
		StringReplace(mangledName, "|", "_vline_");
		StringReplace(mangledName, "[", "_brack_");
		StringReplace(mangledName, "]", "_brack_");
		StringReplace(mangledName, ".", "_point_");
		StringReplace(mangledName, ":", "_colon_");
		StringReplace(mangledName, "(", "_paren_");
		StringReplace(mangledName, ")", "_paren_");
		StringReplace(mangledName, "?", "_quest_");
		StringReplace(mangledName, ",", "_comma_");
		StringReplace(mangledName, " ", "_");

		auto def = std::make_shared<StructDefinition>(TypeKind::Extension,
			mangledName, tparams, tspec, constraints, *access, getCurrentCompilationCondition(), SourcePosition{ ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine() },
			std::vector<VariableDefinition>{}, std::vector<ConstantDefinition>{}, baseInterfaces, std::vector<TypeAliasDefinition>{}, std::vector<PropertyDefinition>{},
			std::vector<MethodDefinition>{}, std::vector<std::shared_ptr<StructDefinition>>{}, std::vector<ForwardDeclaration>{},
			std::vector<FunctionDeclaration>{}, std::vector<FunctionDefinition>{}, isUnsafe, false, false, false);
		def->extensionType = ctx->extensionHead()->theTypeId();
		/*if (!structStack.empty())
			structStack.top()->nestedStructs.push_back(def);*/
		structStack.push(def);
		if (auto tparams = ctx->extensionHead()->templateParams())
		{
			name += "<";
			bool first = true;
			for (auto param : tparams->templateParamDeclaration())
			{
				if (param->Identifier()) {
					if (!first) name += ", ";
					first = false;
					name += param->Identifier()->getText();
				}
				if (param->Ellipsis())
				{
					name += "...";
				}
			}
			name += ">";
		}
		currentTypeWithTemplate.push(name);
	}
}

void CppAdvanceSema::exitExtensionDefinition(CppAdvanceParser::ExtensionDefinitionContext* ctx)
{
	auto pos = currentType.rfind('.');
	if (firstPass && !functionBody) {
		if (pos == currentType.npos) {
			isUnsafeTypeDefinition = false;
			isProtectedTypeDefinition = false;
			isPrivateTypeDefinition = false;
			auto& top = structStack.top();
			globalStructs.push_back(top);
		}
		structStack.pop();
		currentTypeWithTemplate.pop();
	}

	if (ctx->extensionHead()->Unsafe())
	{
		unsafeDepth--;
	}

	if (pos != currentType.npos)
	{
		currentType = currentType.substr(0, pos);
	}
	else
	{
		currentType.clear();
	}
	currentAccessSpecifier.pop();
	currentTypeKind.pop();
	symbolContexts.pop();
}

void CppAdvanceSema::enterEnumDefinition(CppAdvanceParser::EnumDefinitionContext* ctx)
{
	symbolContexts.push(symbolContexts.top());
	currentAccessSpecifier.push(std::nullopt);
	currentTypeKind.push(TypeKind::Enum);

	if (auto base = ctx->enumHead()->enumBase())
	{
		auto tbase = base->simpleTypeSpecifier();
		if (!tbase->Bool() && !tbase->Byte() && !tbase->Char() &&
			!tbase->F32() && !tbase->F64() && !tbase->I16() &&
			!tbase->I32() && !tbase->I64() && !tbase->I8() &&
			!tbase->Rune() && !tbase->Str() && !tbase->U16() &&
			!tbase->U32() && !tbase->U64() && !tbase->U8() &&
			!tbase->Usize() && !tbase->Isize()
			)
			CppAdvanceCompilerError("Enum base must be one of the built-in types", ctx->enumHead()->enumBase()->getStart());
	}

	bool primaryType = true;
	if (!currentType.empty()) {
		currentType += ".";
		primaryType = false;
	}
	std::string name = ctx->enumHead()->Identifier()->getText();
	currentType += name;
	typeset.insert(name);

	if (firstPass && !functionBody)
	{
		typeset.globalTypes.insert(currentType);
		bool isUnsafe = unsafeDepth > 0;
		bool isFlags = false;

		CppAdvanceParser::AccessSpecifierContext* acc = nullptr;
		CppAdvanceParser::AttributeSpecifierSeqContext* attributes = nullptr;
		std::optional<AccessSpecifier> access;
		if (auto decl = dynamic_cast<CppAdvanceParser::DeclarationContext*>(ctx->parent))
		{
			acc = decl->accessSpecifier();
			attributes = decl->attributeSpecifierSeq();
		}
		else if (auto decl = dynamic_cast<CppAdvanceParser::StructMemberDeclarationContext*>(ctx->parent))
		{
			acc = decl->accessSpecifier();
			attributes = decl->attributeSpecifierSeq();
		}

		if (acc)
		{
			if (currentAccessSpecifier.top())
				CppAdvanceCompilerError("Cannot to redefine access specifier", acc->getStart());
			if (acc->Public())
			{
				access = AccessSpecifier::Public;
			}
			else if (acc->Protected())
			{
				access = AccessSpecifier::Protected;
			}
			else if (acc->Private())
			{
				access = AccessSpecifier::Private;
			}
			else if (acc->Internal())
			{
				access = AccessSpecifier::Internal;
			}
		}

		if (!access) {
			if (currentAccessSpecifier.top()) access = currentAccessSpecifier.top();
			else access = AccessSpecifier::Internal;
		}

		if (isUnsafe) {
			cppParser.unsafeTypes.insert(currentType);
			if (primaryType) isUnsafeTypeDefinition = true;
		}

		if (primaryType) {
			if (*access == AccessSpecifier::Protected)
				isProtectedTypeDefinition = true;
			else if (*access == AccessSpecifier::Private)
				isPrivateTypeDefinition = true;
		}

		if (attributes)
		{
			for (auto attr : attributes->attributeSpecifier())
			{
				if (attr->Identifier()->getText() == "Flags")
					isFlags = true;
			}
		}

		auto def = std::make_shared<StructDefinition>(TypeKind::Enum,
			name, nullptr, nullptr, nullptr, *access, getCurrentCompilationCondition(), SourcePosition{ ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine() },
			std::vector<VariableDefinition>{}, std::vector<ConstantDefinition>{}, nullptr, std::vector<TypeAliasDefinition>{}, std::vector<PropertyDefinition>{},
			std::vector<MethodDefinition>{}, std::vector<std::shared_ptr<StructDefinition>>{}, std::vector<ForwardDeclaration>{},
			std::vector<FunctionDeclaration>{}, std::vector<FunctionDefinition>{}, isUnsafe, isFlags, false, false, ctx->enumHead()->enumBase());
		def->attributes = attributes;
		if (!structStack.empty())
			structStack.top()->nestedStructs.push_back(def);
		structStack.push(def);
		currentTypeWithTemplate.push(name);
	}
}

void CppAdvanceSema::exitEnumDefinition(CppAdvanceParser::EnumDefinitionContext* ctx)
{
	auto pos = currentType.rfind('.');
	if (firstPass && !functionBody) {
		if (pos == currentType.npos) {
			isUnsafeTypeDefinition = false;
			isProtectedTypeDefinition = false;
			isPrivateTypeDefinition = false;
			auto& top = structStack.top();
			if (top->access == AccessSpecifier::Protected) protectedSymbols.insert(top->id);
			forwardDeclarations.push_back({ top->id,nullptr,nullptr,top->access,{0,0},top->compilationCondition,top->isUnsafe });
			forwardDeclarations.push_back({ "__Class_"+top->id,nullptr,nullptr,top->access,{0,0},top->compilationCondition,top->isUnsafe});
			globalStructs.push_back(top);
		}
		structStack.pop();
		currentTypeWithTemplate.pop();
	}

	if (pos != currentType.npos)
	{
		currentType = currentType.substr(0, pos);
	}
	else
	{
		currentType.clear();
	}
	currentAccessSpecifier.pop();
	currentTypeKind.pop();
	symbolContexts.pop();
}

void CppAdvanceSema::enterEnumeratorDefinition(CppAdvanceParser::EnumeratorDefinitionContext* ctx)
{
	if (!functionBody && firstPass)
	{
		auto id = ctx->Identifier()->getText();
		symbolTable[id] = structStack.top()->id;
		symbolTable.globalSymbolTable[currentType + "." + id] = structStack.top()->id;
		structStack.top()->constants.emplace_back(ConstantDefinition{ ctx->Identifier()->getText(), nullptr, nullptr,
			{ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()}, nullptr, ctx->attributeSpecifierSeq(), AccessSpecifier::Public,
			getCurrentCompilationCondition(), getCurrentFullTypeName(), ctx->constantExpression() });
	}
}

void CppAdvanceSema::exitEnumeratorDefinition(CppAdvanceParser::EnumeratorDefinitionContext* ctx)
{}

void CppAdvanceSema::enterEnumClassDefinition(CppAdvanceParser::EnumClassDefinitionContext* ctx)
{
	symbolContexts.push(symbolContexts.top());
	currentAccessSpecifier.push(std::nullopt);
	currentTypeKind.push(TypeKind::EnumClass);

	bool primaryType = true;
	if (!currentType.empty()) {
		currentType += ".";
		primaryType = false;
	}
	std::string name = ctx->enumClassHead()->Identifier()->getText();
	currentType += name;
	typeset.insert(name);
	if (ctx->enumClassHead()->Unsafe())
	{
		unsafeDepth++;
	}

	if (firstPass && !functionBody)
	{
		typeset.globalTypes.insert(currentType);
		constructorCounts.push(0);
		CppAdvanceParser::BaseSpecifierListContext* bases = nullptr;

		if (auto b = ctx->enumClassHead()->baseClause())
		{
			bases = b->baseSpecifierList();
		}

		bool isUnsafe = unsafeDepth > 0;

		CppAdvanceParser::AccessSpecifierContext* acc = nullptr;
		CppAdvanceParser::AttributeSpecifierSeqContext* attributes = nullptr;
		std::optional<AccessSpecifier> access;
		if (auto decl = dynamic_cast<CppAdvanceParser::DeclarationContext*>(ctx->parent))
		{
			acc = decl->accessSpecifier();
			attributes = decl->attributeSpecifierSeq();
		}
		else if (auto decl = dynamic_cast<CppAdvanceParser::StructMemberDeclarationContext*>(ctx->parent))
		{
			acc = decl->accessSpecifier();
			attributes = decl->attributeSpecifierSeq();
		}

		if (acc)
		{
			if (currentAccessSpecifier.top())
				CppAdvanceCompilerError("Cannot to redefine access specifier", acc->getStart());
			if (acc->Public())
			{
				access = AccessSpecifier::Public;
			}
			else if (acc->Protected())
			{
				access = AccessSpecifier::Protected;
			}
			else if (acc->Private())
			{
				access = AccessSpecifier::Private;
			}
			else if (acc->Internal())
			{
				access = AccessSpecifier::Internal;
			}
		}

		if (!access) {
			if (currentAccessSpecifier.top()) access = currentAccessSpecifier.top();
			else access = AccessSpecifier::Internal;
		}

		if (isUnsafe) {
			cppParser.unsafeTypes.insert(currentType);
			if (primaryType) isUnsafeTypeDefinition = true;
		}

		if (primaryType) {
			if (*access == AccessSpecifier::Protected)
				isProtectedTypeDefinition = true;
			else if (*access == AccessSpecifier::Private)
				isPrivateTypeDefinition = true;
		}

		auto def = std::make_shared<StructDefinition>(TypeKind::EnumClass,
			name, nullptr, nullptr, nullptr, *access, getCurrentCompilationCondition(), SourcePosition{ ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine() },
			std::vector<VariableDefinition>{}, std::vector<ConstantDefinition>{}, bases, std::vector<TypeAliasDefinition>{}, std::vector<PropertyDefinition>{},
			std::vector<MethodDefinition>{}, std::vector<std::shared_ptr<StructDefinition>>{}, std::vector<ForwardDeclaration>{},
			std::vector<FunctionDeclaration>{}, std::vector<FunctionDefinition>{}, isUnsafe, false, false, false);
		def->attributes = attributes;
		if (!structStack.empty())
			structStack.top()->nestedStructs.push_back(def);
		structStack.push(def);
		currentTypeWithTemplate.push("__Class_" + name);
	}
}

void CppAdvanceSema::exitEnumClassDefinition(CppAdvanceParser::EnumClassDefinitionContext* ctx)
{
	auto pos = currentType.rfind('.');
	if (firstPass && !functionBody) {
		if (pos == currentType.npos) {
			isUnsafeTypeDefinition = false;
			isProtectedTypeDefinition = false;
			isPrivateTypeDefinition = false;
			auto& top = structStack.top();
			if (top->access == AccessSpecifier::Protected) protectedSymbols.insert(top->id);
			if (constructorCounts.top() == 0) top->isDefaultConstructible = true;
			constructorCounts.pop();
			forwardDeclarations.push_back({ top->id,top->templateParams,top->constraints,top->access,{0,0},top->compilationCondition,top->isUnsafe });
			forwardDeclarations.push_back({ top->id + "__Unowned",top->templateParams,top->constraints,top->access,{0,0},top->compilationCondition,top->isUnsafe });
			forwardDeclarations.push_back({ top->id + "__Weak",top->templateParams,top->constraints,top->access,{0,0},top->compilationCondition,top->isUnsafe });
			forwardDeclarations.push_back({ "__Class_" + top->id,top->templateParams,top->constraints,top->access,{0,0},top->compilationCondition,top->isUnsafe });
			globalStructs.push_back(top);
		}
		int idx = 0;
		for (const auto& field : structStack.top()->fields)
		{
			if (!field.isStatic && !field.isThreadLocal)
				symbolTable.globalSymbolTable[currentType + "." + std::to_string(idx++)] = contextTypes[field.type];
		}
		structStack.pop();
		currentTypeWithTemplate.pop();
	}

	if (ctx->enumClassHead()->Unsafe())
	{
		unsafeDepth--;
	}

	if (pos != currentType.npos)
	{
		currentType = currentType.substr(0, pos);
	}
	else
	{
		currentType.clear();
	}
	currentAccessSpecifier.pop();
	currentTypeKind.pop();
	symbolContexts.pop();
}

void CppAdvanceSema::enterClassEnumeratorDefinition(CppAdvanceParser::ClassEnumeratorDefinitionContext* ctx)
{
	if (!functionBody && firstPass)
	{
		auto id = ctx->Identifier()->getText();
		symbolTable[id] = structStack.top()->id;
		symbolTable.globalSymbolTable[currentType+"."+id] = structStack.top()->id;
		structStack.top()->constants.emplace_back(ConstantDefinition{ id, nullptr, nullptr,
			{ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()}, nullptr, ctx->attributeSpecifierSeq(), AccessSpecifier::Public,
			getCurrentCompilationCondition(), getCurrentFullTypeName(), nullptr, ctx->expressionList() });
	}
}

void CppAdvanceSema::exitClassEnumeratorDefinition(CppAdvanceParser::ClassEnumeratorDefinitionContext*)
{}

void CppAdvanceSema::enterUnionEnumerator(CppAdvanceParser::UnionEnumeratorContext* ctx)
{
	if (!functionBody && firstPass)
	{
		auto id = ctx->Identifier()->getText();
		typeset.insert(id);
		typeset.globalTypes.insert(currentType + "." + id);
		if (auto clause = ctx->unionEnumeratorClause())
		{
			if (clause->theTypeId().empty()) {
				auto rhs = clause->getText();
				aliasTable[id] = rhs;
				aliasTable.globalAliasTable[currentType + "." + id] = rhs;
			}
		}
		structStack.top()->constants.emplace_back(ConstantDefinition{ id, nullptr, nullptr,
			{ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()}, nullptr, ctx->attributeSpecifierSeq(), AccessSpecifier::Public,
			getCurrentCompilationCondition(), getCurrentFullTypeName(), nullptr, nullptr, ctx->unionEnumeratorClause() });
	}
}

void CppAdvanceSema::exitUnionEnumerator(CppAdvanceParser::UnionEnumeratorContext*)
{}

void CppAdvanceSema::enterUnionDefinition(CppAdvanceParser::UnionDefinitionContext* ctx)
{
	symbolContexts.push(symbolContexts.top());
	currentAccessSpecifier.push(std::nullopt);
	currentTypeKind.push(TypeKind::Union);

	bool primaryType = true;
	if (!currentType.empty()) {
		currentType += ".";
		primaryType = false;
	}
	std::string name = ctx->unionHead()->Identifier()->getText();
	currentType += name;
	typeset.insert(name);
	if (ctx->unionHead()->Unsafe())
	{
		unsafeDepth++;
	}

	if (firstPass && !functionBody)
	{
		typeset.globalTypes.insert(currentType);
		constructorCounts.push(0);
		CppAdvanceParser::TemplateParamsContext* templateParams = ctx->unionHead()->templateParams();
		CppAdvanceParser::ConstraintClauseContext* constraints = ctx->unionHead()->constraintClause();
		CppAdvanceParser::BaseSpecifierListContext* bases = nullptr;
		CppAdvanceParser::AttributeSpecifierSeqContext* attributes = nullptr;

		if (auto b = ctx->unionHead()->baseClause())
		{
			bases = b->baseSpecifierList();
		}
		if (constraints && !templateParams)
		{
			CppAdvanceCompilerError("Only generic type can have constraints", constraints->Where()->getSymbol());
		}

		bool isUnsafe = unsafeDepth > 0;

		CppAdvanceParser::AccessSpecifierContext* acc = nullptr;
		std::optional<AccessSpecifier> access;
		if (auto decl = dynamic_cast<CppAdvanceParser::DeclarationContext*>(ctx->parent))
		{
			acc = decl->accessSpecifier();
			attributes = decl->attributeSpecifierSeq();
		}
		else if (auto decl = dynamic_cast<CppAdvanceParser::StructMemberDeclarationContext*>(ctx->parent))
		{
			acc = decl->accessSpecifier();
			attributes = decl->attributeSpecifierSeq();
		}

		if (acc)
		{
			if (currentAccessSpecifier.top())
				CppAdvanceCompilerError("Cannot to redefine access specifier", acc->getStart());
			if (acc->Public())
			{
				access = AccessSpecifier::Public;
			}
			else if (acc->Protected())
			{
				access = AccessSpecifier::Protected;
			}
			else if (acc->Private())
			{
				access = AccessSpecifier::Private;
			}
			else if (acc->Internal())
			{
				access = AccessSpecifier::Internal;
			}
		}

		if (!access) {
			if (currentAccessSpecifier.top()) access = currentAccessSpecifier.top();
			else access = AccessSpecifier::Internal;
		}

		currentAccessSpecifier.push(access);

		if (isUnsafe) {
			cppParser.unsafeTypes.insert(currentType);
			if (primaryType) isUnsafeTypeDefinition = true;
		}

		if (primaryType) {
			if (*access == AccessSpecifier::Protected)
				isProtectedTypeDefinition = true;
			else if (*access == AccessSpecifier::Private)
				isPrivateTypeDefinition = true;
		}

		auto def = std::make_shared<StructDefinition>(TypeKind::Union,
			name, templateParams, nullptr, constraints, *access, getCurrentCompilationCondition(), SourcePosition{ ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine() },
			std::vector<VariableDefinition>{}, std::vector<ConstantDefinition>{}, bases, std::vector<TypeAliasDefinition>{}, std::vector<PropertyDefinition>{},
			std::vector<MethodDefinition>{}, std::vector<std::shared_ptr<StructDefinition>>{}, std::vector<ForwardDeclaration>{},
			std::vector<FunctionDeclaration>{}, std::vector<FunctionDefinition>{}, isUnsafe, false, false, false);
		def->attributes = attributes;
		if (!structStack.empty())
			structStack.top()->nestedStructs.push_back(def);
		structStack.push(def); 
		if (templateParams)
		{
			name += "<";
			bool first = true;
			for (auto param : templateParams->templateParamDeclaration())
			{
				if (param->Identifier()) {
					if (!first) name += ", ";
					first = false;
					name += param->Identifier()->getText();
				}
				if (param->Ellipsis())
				{
					name += "...";
				}
			}
			name += ">";
		}
		currentTypeWithTemplate.push(name);
	}
}

void CppAdvanceSema::exitUnionDefinition(CppAdvanceParser::UnionDefinitionContext* ctx)
{
	auto pos = currentType.rfind('.');
	if (firstPass && !functionBody) {
		if (pos == currentType.npos) {
			isUnsafeTypeDefinition = false;
			isProtectedTypeDefinition = false;
			isPrivateTypeDefinition = false;
			auto& top = structStack.top();
			if (top->access == AccessSpecifier::Protected) protectedSymbols.insert(top->id);
			forwardDeclarations.push_back({ top->id,top->templateParams,top->constraints,top->access,{0,0},top->compilationCondition,top->isUnsafe });
			forwardDeclarations.push_back({ "__Class_" + top->id,top->templateParams,top->constraints,top->access,{0,0},top->compilationCondition,top->isUnsafe });
			globalStructs.push_back(top);
		}
		structStack.pop();
		currentTypeWithTemplate.pop();
		currentAccessSpecifier.pop();
	}

	if (pos != currentType.npos)
	{
		currentType = currentType.substr(0, pos);
	}
	else
	{
		currentType.clear();
	}
	currentTypeKind.pop();
	symbolContexts.pop();
}

void CppAdvanceSema::exitUnionList(CppAdvanceParser::UnionListContext* ctx)
{
	currentAccessSpecifier.pop();
}

void CppAdvanceSema::enterFullPostfixExpression(CppAdvanceParser::FullPostfixExpressionContext* ctx)
{
	
}

void CppAdvanceSema::exitFullPostfixExpression(CppAdvanceParser::FullPostfixExpressionContext* ctx)
{
	if (firstPass && functionBody) return;
	if (!typeStack.empty() && !typeStack.top().empty())
	{
		if (ctx->unaryCustomOperator())
		{
			tryToAddTypeInStackFromOperator(ctx->unaryCustomOperator()->getText());
		}
		contextTypes[ctx] = typeStack.top();
	}
}

void CppAdvanceSema::exitPowerExpression(CppAdvanceParser::PowerExpressionContext* ctx)
{
	if (firstPass && functionBody) return;
	if (ctx->Op10())
	{
		tryToAddTypeInStackFromOperator(ctx->Op10()->getText());
	}
}

void CppAdvanceSema::exitMultiplicativeExpression(CppAdvanceParser::MultiplicativeExpressionContext* ctx)
{
	if (firstPass && functionBody) return;
	if (ctx->Op9())
	{
		tryToAddTypeInStackFromOperator(ctx->Op9()->getText());
	}
}

void CppAdvanceSema::exitAdditiveExpression(CppAdvanceParser::AdditiveExpressionContext* ctx)
{
	if (firstPass && functionBody) return;
	if (ctx->Op8())
	{
		tryToAddTypeInStackFromOperator(ctx->Op8()->getText());
	}
}

void CppAdvanceSema::exitShiftExpression(CppAdvanceParser::ShiftExpressionContext* ctx)
{
	if (firstPass && functionBody) return;
	if (ctx->shiftOperator() && ctx->shiftOperator()->Op7())
	{
		tryToAddTypeInStackFromOperator(ctx->shiftOperator()->Op7()->getText());
	}
}

void CppAdvanceSema::exitAndExpression(CppAdvanceParser::AndExpressionContext* ctx)
{
	if (firstPass && functionBody) return;
	if (ctx->Op4())
	{
		tryToAddTypeInStackFromOperator(ctx->Op4()->getText());
	}
}

void CppAdvanceSema::exitExclusiveOrExpression(CppAdvanceParser::ExclusiveOrExpressionContext* ctx)
{
	if (firstPass && functionBody) return;
	if (ctx->Op3())
	{
		tryToAddTypeInStackFromOperator(ctx->Op3()->getText());
	}
}

void CppAdvanceSema::exitInclusiveOrExpression(CppAdvanceParser::InclusiveOrExpressionContext* ctx)
{
	if (firstPass && functionBody) return;
	if (ctx->Op2())
	{
		tryToAddTypeInStackFromOperator(ctx->Op2()->getText());
	}
}

void CppAdvanceSema::enterAttributeSpecifier(CppAdvanceParser::AttributeSpecifierContext* ctx)
{
	auto id = ctx->Identifier()->getText();
	if (id == "Align" && !ctx->attributeArgumentClause())
	{
		CppAdvanceCompilerError("Align attribute should have integer value", ctx->Identifier()->getSymbol());
	}
}

void CppAdvanceSema::enterSwitchStatementBranch(CppAdvanceParser::SwitchStatementBranchContext* ctx)
{
	if (firstPass) return;
	symbolContexts.push(symbolContexts.top());
	auto pattern = ctx->patternList()->pattern(0);
	if (pattern->theTypeId() && pattern->getText() != "_")
	{
		auto parent = static_cast<CppAdvanceParser::SelectionStatementContext*>(ctx->parent);
		auto type = pattern->theTypeId()->getText();
		if (auto pos = type.find('<'); pos != std::string::npos)
		{
			type = type.substr(0, pos);
		}
		symbolTable[!pattern->Identifier().empty() ? pattern->Identifier(0)->getText() : parent->threeWayComparisonExpression()->getText()] = type;
	}
	auto switchData = currentSwitchData.top();
	if (switchData.first > 0)
	{
		ifContexts.top().then = initStates.top();
		initStates.pop();
		initStates.push(ifContexts.top().before);
	}
	if (ctx->patternList()->getText() != "_") {
		IfContext ictx;
		ictx.before = initStates.top();
		ictx.hasElse = switchData.second - switchData.first > 1;
		initStates.push(ictx.before);
		ifContexts.push(ictx);
	}
	else if(switchData.second - switchData.first > 1)
	{
		CppAdvanceCompilerError("Default branch must be last in the switch", ctx->patternList()->getStart());
	}
}

void CppAdvanceSema::exitSwitchStatementBranch(CppAdvanceParser::SwitchStatementBranchContext* ctx)
{
	if (firstPass) return;
	symbolContexts.pop();
	++currentSwitchData.top().first;
}

void CppAdvanceSema::enterSwitchExpression(CppAdvanceParser::SwitchExpressionContext* ctx)
{
	if (firstPass || !ctx->Switch()) return;
	currentSwitchData.push({ 0, ctx->switchExpressionBranch().size() });
}

void CppAdvanceSema::exitSwitchExpression(CppAdvanceParser::SwitchExpressionContext* ctx)
{
	if (!ctx->Switch()) return;
	if (ctx->theTypeId())
	{
		typeStack.push(contextTypes[ctx->theTypeId()]);
	}
	else {
		typeStack.push(contextTypes[ctx->switchExpressionBranch(0)->expr()]);
	}
	if (firstPass) return;
	currentSwitchData.pop();
}

void CppAdvanceSema::enterSwitchExpressionBranch(CppAdvanceParser::SwitchExpressionBranchContext* ctx)
{
	symbolContexts.push(symbolContexts.top());
	if (firstPass == functionBody > 0)
	{
		auto pattern = ctx->patternList()->pattern(0);
		if (pattern->theTypeId() && pattern->getText() != "_")
		{
			auto parent = static_cast<CppAdvanceParser::SwitchExpressionContext*>(ctx->parent);
			auto type = pattern->theTypeId()->getText();
			if (auto pos = type.find('<'); pos != std::string::npos)
			{
				type = type.substr(0, pos);
			}
			symbolTable[!pattern->Identifier().empty() ? pattern->Identifier(0)->getText() : parent->threeWayComparisonExpression()->getText()] = type;
		}
	}
	if (firstPass) return;
	auto switchData = currentSwitchData.top();
	if (switchData.second - switchData.first > 1 && ctx->patternList()->getText() == "_")
	{
		CppAdvanceCompilerError("Default branch must be last in the switch", ctx->patternList()->getStart());
	}
	++currentSwitchData.top().first;
}

void CppAdvanceSema::exitSwitchExpressionBranch(CppAdvanceParser::SwitchExpressionBranchContext*)
{
	symbolContexts.pop();
}

void CppAdvanceSema::enterUnitTestDeclaration(CppAdvanceParser::UnitTestDeclarationContext* ctx)
{
	isUnitTestBody = true;
	functionBody++;
}

void CppAdvanceSema::exitUnitTestDeclaration(CppAdvanceParser::UnitTestDeclarationContext* ctx)
{
	isUnitTestBody = false;
	functionBody--;
}

void CppAdvanceSema::enterInlineCppStatement(CppAdvanceParser::InlineCppStatementContext* ctx)
{
	if (!firstPass)
	{
		if (!ctx->Unsafe() && unsafeDepth <= 0)
            CppAdvanceCompilerError("Inline C++ block can be declared only in unsafe context", ctx->Cpp()->getSymbol());
	}
}

void CppAdvanceSema::exitInterpolatedStringLiteral(CppAdvanceParser::InterpolatedStringLiteralContext* ctx)
{
	
}

void CppAdvanceSema::exitLiteral(CppAdvanceParser::LiteralContext* ctx)
{
	if (firstPass == functionBody > 0) return;
	if (auto literal = ctx->IntegerLiteral()) {
		checkIntegerLiteral(literal, literalMinus);
		typeStack.push("i32");
	}
	else if (ctx->FloatingLiteral())
	{
		typeStack.push("f64");
	}
	else if (ctx->BooleanLiteral())
	{
		typeStack.push("bool");
	}
	else if (auto literal = ctx->CharacterLiteral()) {
		checkAsciiLiteral(literal);
		typeStack.push("char");
	}
	else if (ctx->StringLiteral() || ctx->MultilineStringLiteral())
	{
		typeStack.push("Str");
	}
	else if (ctx->interpolatedStringLiteral())
	{
		typeStack.push("StringInterpolation");
	}
	else if (ctx->Null())
	{
		typeStack.push("null");
	}
}

void CppAdvanceSema::enterLambdaBody(CppAdvanceParser::LambdaBodyContext* ctx)
{
	functionBody++;
}

void CppAdvanceSema::exitLambdaBody(CppAdvanceParser::LambdaBodyContext* ctx)
{
	functionBody--;
}

void CppAdvanceSema::enterExternMethodDeclaration(CppAdvanceParser::ExternMethodDeclarationContext*)
{
	isFriendDefinition = true;
}

void CppAdvanceSema::exitExternMethodDeclaration(CppAdvanceParser::ExternMethodDeclarationContext* ctx)
{
	isFriendDefinition = false;
	if (!firstPass || functionBody) return;

	structStack.top()->friendFuncDeclarations.emplace_back(FunctionDeclaration{ ctx->Identifier()->getText(), ctx->functionParams(),
		ctx->returnType(), ctx->exceptionSpecification(), { ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine() },
		getCurrentCompilationCondition(), true });
}

void CppAdvanceSema::enterAssociatedTypeDeclaration(CppAdvanceParser::AssociatedTypeDeclarationContext* ctx)
{
	auto name = ctx->Identifier()->getText();
	typeset.insert(name);

	if (!functionBody && firstPass)
	{
		structStack.top()->typeAliases.emplace_back(TypeAliasDefinition{ name, nullptr, nullptr, 
			{ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()}, AccessSpecifier::Public, getCurrentCompilationCondition(),
			unsafeDepth > 0 });
	}
}

void CppAdvanceSema::exitRangeExpression(CppAdvanceParser::RangeExpressionContext* ctx)
{
	if (ctx->DoubleDot() || ctx->DoubleDotEqual()) 
		typeStack.push("System.Range");
}

void CppAdvanceSema::enterAssertDeclaration(CppAdvanceParser::AssertDeclarationContext* ctx)
{
	if (ctx->Static()) {
		if (firstPass && isTypeDefinitionBody())
		{
			structStack.top()->staticAsserts.push_back({ctx->constantExpression(), ctx->StringLiteral()->getText(),
				{ ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine() }, getCurrentCompilationCondition()});
		}
	} else
	{
		if (!functionBody)
			CppAdvanceCompilerError("Runtime assert declaration can only appear in the function body", ctx->Assert()->getSymbol());
	}
}

void CppAdvanceSema::exitFriendDeclaration(CppAdvanceParser::FriendDeclarationContext* ctx)
{
	isFriendDefinition = false;
	if (!firstPass || functionBody) return;

	if (ctx->functionDefinition())
	{
		//do nothing
	}
	else if (ctx->functionParams())
	{
		structStack.top()->friendFuncDeclarations.emplace_back(FunctionDeclaration{ctx->Identifier()->getText(), ctx->functionParams(),
			ctx->returnType(), ctx->exceptionSpecification(), { ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine() }, 
			getCurrentCompilationCondition()});
	}
	else
	{
		structStack.top()->friendTypes.emplace_back(ForwardDeclaration{ ctx->Identifier()->getText(), ctx->templateParams(),nullptr, 
			AccessSpecifier::Internal,{ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()},
			getCurrentCompilationCondition(), false });
	}
}

void CppAdvanceSema::enterIterationStatement(CppAdvanceParser::IterationStatementContext*)
{
	if (firstPass) return;
	++loopDepth;
}

void CppAdvanceSema::exitIterationStatement(CppAdvanceParser::IterationStatementContext*)
{
	if (firstPass) return;
	--loopDepth;
}

void TestIgnoringParseTreeWalker::enterRule(antlr4::tree::ParseTreeListener* listener, ParseTree* r) const
{
	if (dynamic_cast<CppAdvanceParser::UnitTestDeclarationContext*>(r) != nullptr)
	{
		isUnitTestBody = true;
		return;
	}
	if (!isUnitTestBody)
	{
		ParseTreeWalker::enterRule(listener, r);
	}
}

void TestIgnoringParseTreeWalker::exitRule(antlr4::tree::ParseTreeListener* listener, ParseTree* r) const
{
	if (dynamic_cast<CppAdvanceParser::UnitTestDeclarationContext*>(r) != nullptr)
	{
		isUnitTestBody = false;
		return;
	}
	if (!isUnitTestBody)
	{
		ParseTreeWalker::exitRule(listener, r);
	}
}
