#include "AstrumSema.h"

#include <filesystem>
#include <optional>

#include "CompilerSettings.h"
#include "StringUtils.h"
using namespace std::literals::string_literals;

namespace AstrumLang {

	// hack for stack iteration
	template <class T>
	static const std::deque<T>& getStackUnderlyingContainer(const std::stack<T>& dataStack) {
		return *reinterpret_cast<const std::deque<T>*>(&dataStack);
	}

	std::string AstrumSema::getCurrentCompilationCondition() {
		const auto& conditions = getStackUnderlyingContainer(conditionStack);
		std::string result;
		bool first = true;
		for (const auto& cond : conditions) {
			if (!first)
				result += " && ";
			result += "(";
			result += cond;
			result += ")";
			first = false;
		}
		return result;
	}

	AstrumParser::TemplateParamsContext* AstrumSema::getLastTypeTemplateParams() {
		const auto& structs = getStackUnderlyingContainer(structStack);
		for (auto it = structs.rbegin(); it != structs.rend(); ++it) {
			auto params = it->get()->templateParams;
			if (params)
				return params;
		}
		return nullptr;
	}

	AstrumParser::TemplateArgumentListContext* AstrumSema::getLastTypeTemplateSpecializationArgs() {
		const auto& structs = getStackUnderlyingContainer(structStack);
		for (auto it = structs.rbegin(); it != structs.rend(); ++it) {
			auto params = it->get()->templateSpecializationArgs;
			if (params)
				return params;
		}
		return nullptr;
	}

	AstrumParser::ConstraintClauseContext* AstrumSema::getLastTypeConstraints() {
		const auto& structs = getStackUnderlyingContainer(structStack);
		for (auto it = structs.rbegin(); it != structs.rend(); ++it) {
			auto params = it->get()->constraints;
			if (params)
				return params;
		}
		return nullptr;
	}

	std::string AstrumSema::getCurrentFullTypeName() {
		const auto& structs = getStackUnderlyingContainer(currentTypeWithTemplate);
		std::string result;
		for (int i = 0; i < structs.size(); ++i) {
			if (i > 0)
				result += ".";
			auto type = structs[i];
			if (i < (structs.size() - 1) && type.starts_with("__Class_"))
				type = type.substr(8);
			result += type;
		}
		return result;
	}

	void AstrumSema::tryToAddTypeInStackFromOperator(std::string_view op) {
		auto opName = getCustomOperatorName(op);
		auto full   = typeStack.top() + "." + opName;
		if (functionTable.contains(full)) {
			typeStack.push(functionTable[full]);
		} else if (functionTable.contains(opName)) {
			typeStack.push(functionTable[opName]);
		}
	}

	void AstrumSema::notifyErrorListeners(const std::string& msg, const antlr4::Token* token) {
		for (auto listener : errorListeners) { listener->semanticError(this, msg, token); }
	}

	bool AstrumSema::checkForCurrentPass() {
		return (firstPass != (functionBody > 0)) || propertyBody;
	}

	std::optional<AccessSpecifier> AstrumSema::resolveAccessSpecifier(
	    AstrumParser::AccessSpecifierContext* acc, bool isProtectedInternal) {
		if (isProtectedInternal) {
			if (currentAccessSpecifier.top())
				notifyErrorListeners("Cannot to redefine access specifier",
				                     acc ? acc->getStart() : nullptr);

			return AccessSpecifier::ProtectedInternal;
		}

		if (acc) {
			if (currentAccessSpecifier.top())
				notifyErrorListeners("Cannot to redefine access specifier", acc->getStart());

			if (acc->Public())
				return AccessSpecifier::Public;

			if (acc->Protected())
				return AccessSpecifier::Protected;

			if (acc->Private())
				return AccessSpecifier::Private;

			if (acc->Internal())
				return AccessSpecifier::Internal;
		}

		if (currentAccessSpecifier.top())
			return currentAccessSpecifier.top();

		return {};
	}

	void AstrumSema::setupTypeDefinition(TypeKind kind, bool isUnsafe,
	                                     std::optional<AccessSpecifier>& access, bool primaryType) {
		typeset.globalTypes.insert(currentType);

		if (isUnsafe) {
			cppParser.unsafeTypes.insert(currentType);

			if (primaryType)
				isUnsafeTypeDefinition = true;
		}

		if (primaryType && access) {
			if (*access == AccessSpecifier::Protected)
				isProtectedTypeDefinition = true;

			else if (*access == AccessSpecifier::Private)
				isPrivateTypeDefinition = true;
		}
	}

	void AstrumSema::finalizeTypeDefinition(std::shared_ptr<StructDefinition>& top) {
		if (top->access == AccessSpecifier::Protected)
			protectedSymbols.insert(top->id);

		if (!top->templateSpecializationArgs)
			forwardDeclarations.push_back({top->id,
			                               top->templateParams,
			                               top->constraints,
			                               top->access,
			                               {0, 0},
			                               top->compilationCondition,
			                               top->isUnsafe,
			                               top->kind == TypeKind::UnionStruct});

		globalStructs.push_back(top);
	}

	void AstrumSema::processFunctionParams(AstrumParser::FunctionParamsContext* params,
	                                       std::string& funcname) {
		if (auto decl = params->paramDeclClause()) {
			std::string args;
			bool first    = true;
			auto declList = decl->paramDeclList();

			for (auto param : declList->paramDeclaration()) {
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

	void AstrumSema::checkFunctionSpecifiers(
	    const std::vector<AstrumParser::FunctionSpecifierContext*>& specs, bool& isInline,
	    bool& isStatic, bool& isConstexpr, bool& isConsteval, bool& isUnsafe, bool& isMutating,
	    bool& isVirtual, bool& isOverride, bool& isFinal) {
		for (auto spec : specs) {
			if (spec->Inline())
				isInline = true;

			else if (spec->Consteval())
				isConsteval = true;

			else if (spec->Unsafe()) {
				isUnsafe = true;

				if (unsafeDepth > 0)
					notifyErrorListeners("Unsafe context recursion", spec->Unsafe()->getSymbol());

			} else if (spec->Static())
				isStatic = true;

			else if (spec->Mutable())
				isMutating = true;

			else if (spec->Virtual())
				isVirtual = true;

			else if (spec->Override())
				isOverride = true;

			else if (spec->Final())
				isFinal = true;
		}
	}

	void AstrumSema::addErrorListener(AstrumErrorListener* listener) {
		assert(listener != nullptr);
		errorListeners.insert(listener);
	}

	void AstrumSema::removeErrorListener(AstrumErrorListener* listener) {
		errorListeners.erase(listener);
	}

	void AstrumSema::removeErrorListeners() { errorListeners.clear(); }

	AstrumSema::AstrumSema(AstrumParser* parser, AstrumParser::ModuleContext* module,
	                       std::string_view file)
	    : parser {parser},
	      filename {std::filesystem::path(file).stem().string()},
	      filenamePath {std::filesystem::path(file).parent_path()},
	      ast {module},
	      symbolTable {cppParser.symbolTable, symbolContexts},
	      aliasTable {cppParser.aliasTable, symbolContexts},
	      typeset {cppParser.types, symbolContexts},
	      functionTable {cppParser.functionTable} {}

	void AstrumSema::runFirstPass() {
		firstPass = true;
		visitModule(ast);
	}

	void AstrumSema::runSecondPass() {
		firstPass = false;
		visitModule(ast);
	}

	std::string AstrumSema::getNamedTupleId(std::string_view tuple) {
		std::string result {tuple};
		StringReplace(result, " ", "");
		StringReplace(result, "\t", "");
		StringReplace(result, "\r", "");
		StringReplace(result, "\n", "");

		return std::format("__ntuples.NamedTuple_{:016x}", StringHash(result));
	}

	std::string AstrumSema::getInterfaceMethodId(std::string_view name,
	                                             AstrumParser::ParamDeclClauseContext* params) {
		std::string result {name};
		if (params) {
			result += "_";
			auto paramList = params->paramDeclList()->paramDeclaration();
			for (auto param : paramList) {
				result += param->Identifier()->getText();
				result += param->theTypeId()->getText();
			}
		}
		return std::format("{:016x}", StringHash(result));
	}

	std::string AstrumSema::getUnitTestId(AstrumParser::UnitTestDeclarationContext* test) {
		std::string result;
		if (test->StringLiteral()) {
			result += test->StringLiteral()->getText();
		} else {
			result += filename;
			result += "_";
			result += std::to_string(test->getStart()->getLine());
		}

		return std::format("__Test_{:016x}", StringHash(result));
	}

	std::string AstrumSema::getCustomOperatorName(std::string_view op) {
		static std::unordered_map<std::string, std::string> cache;
		auto it = cache.find(std::string(op));
		if (it != cache.end()) {
			return it->second;
		}

		constexpr int OPCHAR_LENGTH = 4;
		std::string result          = "_operator";
		result.reserve(result.length() + OPCHAR_LENGTH * op.length());
		for (char c : op) {
			result += '_';
			switch (c) {
				case '+':
					result += "add";
					break;
				case '-':
					result += "sub";
					break;
				case '*':
					result += "mul";
					break;
				case '/':
					result += "div";
					break;
				case '%':
					result += "mod";
					break;
				case '&':
					result += "and";
					break;
				case '|':
					result += "or";
					break;
				case '^':
					result += "xor";
					break;
				case '~':
					result += "not";
					break;
				case '=':
					result += "eq";
					break;
				case '!':
					result += "ne";
					break;
				case '<':
					result += "lt";
					break;
				case '>':
					result += "gt";
					break;
				case '\\':
					result += "bsl";
					break;
				default:
					break;
			}
		}

		cache.insert({std::string(op), result});
		return result;
	}

	void AstrumSema::checkIntegerLiteral(TerminalNode* literal, bool minus) {
		if (firstPass == functionBody > 0)
			return;
		std::string txt = literal->getText();
		if (txt.empty())
			return;
		auto base = 10;
		if (txt.length() > 2 && txt[0] == '0') {
			if (txt[1] == 'b')
				base = 2;
			else if (txt[1] == 'o')
				base = 8;
			else if (txt[1] == 'x')
				base = 16;
			txt = txt.substr(2);
		}
		auto suffix = ""s;
		auto spos   = txt.find_last_of("big");
		if (spos != txt.npos) {
			suffix = "big";
		} else {
			spos = txt.find_last_of('u');
			if (spos != txt.npos) {
				suffix = txt.substr(spos);
			} else {
				spos = txt.find_last_of('i');
				if (spos != txt.npos) {
					suffix = txt.substr(spos);
				}
			}
		}
		StringReplace(txt, "_", "");
		if (suffix.empty() || suffix == "big") {
		} else if (suffix == "u") {
			if (minus) {
				notifyErrorListeners("Cannot assign a signed value to the unsigned type",
				                     literal->getSymbol());
			}
		} else if (suffix == "i8") {
			auto value  = 0ull;
			auto result = std::from_chars(txt.c_str(), txt.c_str() + txt.length(), value, base);
			if ((int) result.ec || value > 128 || (value == 128 && !minus)) {
				notifyErrorListeners(
				    std::format("The value {} is out of range for the type i8", txt),
				    literal->getSymbol());
			}
		} else if (suffix == "i16") {
			auto value  = 0ull;
			auto result = std::from_chars(txt.c_str(), txt.c_str() + txt.length(), value, base);
			if ((int) result.ec || value > 32768 || (value == 32768 && !minus)) {
				notifyErrorListeners(
				    std::format("The value {} is out of range for the type i16", txt),
				    literal->getSymbol());
			}
		} else if (suffix == "i32") {
			auto value  = 0ull;
			auto result = std::from_chars(txt.c_str(), txt.c_str() + txt.length(), value, base);
			if ((int) result.ec || value > 2147483648 || (value == 2147483648 && !minus)) {
				notifyErrorListeners(
				    std::format("The value {} is out of range for the type i32", txt),
				    literal->getSymbol());
			}
		} else if (suffix == "i64") {
			auto value  = 0ull;
			auto result = std::from_chars(txt.c_str(), txt.c_str() + txt.length(), value, base);
			if ((int) result.ec || value > 9223372036854775808ULL ||
			    (value == 9223372036854775808ULL && !minus)) {
				notifyErrorListeners(
				    std::format("The value {} is out of range for the type i64", txt),
				    literal->getSymbol());
			}
		} else if (suffix == "u8") {
			if (minus) {
				notifyErrorListeners("Cannot assign a signed value to the type u8",
				                     literal->getSymbol());
			}
			auto value  = 0ull;
			auto result = std::from_chars(txt.c_str(), txt.c_str() + txt.length(), value, base);
			if ((int) result.ec || value > UINT8_MAX) {
				notifyErrorListeners(
				    std::format("The value {} is out of range for the type u8", txt),
				    literal->getSymbol());
			}
		} else if (suffix == "u16") {
			if (minus) {
				notifyErrorListeners("Cannot assign a signed value to the type u16",
				                     literal->getSymbol());
			}
			auto value  = 0ull;
			auto result = std::from_chars(txt.c_str(), txt.c_str() + txt.length(), value, base);
			if ((int) result.ec || value > UINT16_MAX) {
				notifyErrorListeners(
				    std::format("The value {} is out of range for the type u16", txt),
				    literal->getSymbol());
			}
		} else if (suffix == "u32") {
			if (minus) {
				notifyErrorListeners("Cannot assign a signed value to the type u32",
				                     literal->getSymbol());
			}
			auto value  = 0ull;
			auto result = std::from_chars(txt.c_str(), txt.c_str() + txt.length(), value, base);
			if ((int) result.ec || value > UINT32_MAX) {
				notifyErrorListeners(
				    std::format("The value {} is out of range for the type u32", txt),
				    literal->getSymbol());
			}
		} else if (suffix == "u64") {
			if (minus) {
				notifyErrorListeners("Cannot assign a signed value to the type u64",
				                     literal->getSymbol());
			}
			auto value  = 0ull;
			auto result = std::from_chars(txt.c_str(), txt.c_str() + txt.length(), value, base);
			if ((int) result.ec) {
				notifyErrorListeners(
				    std::format("The value {} is out of range for the type u64", txt),
				    literal->getSymbol());
			}
		} else if (suffix == "iz") {
			auto value  = 0ull;
			auto result = std::from_chars(txt.c_str(), txt.c_str() + txt.length(), value, base);
			if ((int) result.ec || value > (static_cast<size_t>(INTPTR_MAX) + 1) ||
			    (value == (static_cast<size_t>(INTPTR_MAX) + 1) && !minus)) {
				notifyErrorListeners(
				    std::format("The value {} is out of range for the type isize", txt),
				    literal->getSymbol());
			}
		} else if (suffix == "uz") {
			if (minus) {
				notifyErrorListeners("Cannot assign a signed value to the type usize",
				                     literal->getSymbol());
			}
			auto value  = 0ull;
			auto result = std::from_chars(txt.c_str(), txt.c_str() + txt.length(), value, base);
			if ((int) result.ec || value > UINTPTR_MAX) {
				notifyErrorListeners(
				    std::format("The value {} is out of range for the type usize", txt),
				    literal->getSymbol());
			}
		} else if (suffix == "i128") {
			if (txt.length() < 32)
				return;
			auto value  = 0ull;
			auto result = std::from_chars(txt.c_str(), txt.c_str() + txt.length(), value, base);
			if ((int) result.ec) {
				if (base == 10 &&
				    (txt.length() > 43 ||
				     (txt.length() == 43 &&
				      ((txt == "170141183460469231731687303715884105728i128" && !minus) ||
				       (txt > "170141183460469231731687303715884105728i128"))))) {
					notifyErrorListeners(
					    std::format("The value {} is out of range for the type i128", txt),
					    literal->getSymbol());
				} else if (base == 2 &&
				           (txt.length() > 132 || (txt.length() == 132 && txt[0] != '0'))) {
					notifyErrorListeners(
					    std::format("The value {} is out of range for the type i128", txt),
					    literal->getSymbol());
				} else if (base == 16 &&
				           (txt.length() > 36 || (txt.length() == 36 && txt[0] > '7'))) {
					notifyErrorListeners(
					    std::format("The value {} is out of range for the type i128", txt),
					    literal->getSymbol());
				} else if (base == 8 && txt.length() > 44) {
					notifyErrorListeners(
					    std::format("The value {} is out of range for the type i128", txt),
					    literal->getSymbol());
				}
			}
		} else if (suffix == "u128") {
			if (minus) {
				notifyErrorListeners("Cannot assign a signed value to the type u128",
				                     literal->getSymbol());
			}
			auto value  = 0ull;
			auto result = std::from_chars(txt.c_str(), txt.c_str() + txt.length(), value, base);
			if ((int) result.ec) {
				if (base == 10 &&
				    (txt.length() > 43 ||
				     (txt.length() == 43 && txt > "340282366920938463463374607431768211455u128"))) {
					notifyErrorListeners(
					    std::format("The value {} is out of range for the type u128", txt),
					    literal->getSymbol());
				} else if (base == 2 && txt.length() > 132) {
					notifyErrorListeners(
					    std::format("The value {} is out of range for the type u128", txt),
					    literal->getSymbol());
				} else if (base == 16 && txt.length() > 36) {
					notifyErrorListeners(
					    std::format("The value {} is out of range for the type u128", txt),
					    literal->getSymbol());
				} else if (base == 8 && txt.length() > 44) {
					notifyErrorListeners(
					    std::format("The value {} is out of range for the type u128", txt),
					    literal->getSymbol());
				}
			}
		} else {
			assert(false);
		}
	}

	void AstrumSema::checkAsciiLiteral(TerminalNode* literal) {
		if (firstPass == functionBody > 0)
			return;
		std::string txt = literal->getText();
		if (txt.starts_with('b')) {
			if (txt.length() > 5 || (txt.length() == 5 && txt[2] != '\\')) {
				notifyErrorListeners(
				    std::format("The value {} is out of range for the type byte", txt),
				    literal->getSymbol());
			}
		}
	}

	std::any AstrumSema::visitModule(AstrumParser::ModuleContext* ctx) {
		if (firstPass) {
			globalVariables.clear();
			globalConstants.clear();
			globalTypeAliases.clear();
			globalFunctions.clear();
			protectedSymbols.clear();
			protectedVersions.clear();
			cppParser.init();
			typeset.globalTypes.insert("super");
		}
		symbolContexts.push({});
		currentAccessSpecifier.push(std::nullopt);

		visitChildren(ctx);

		while (!initStates.empty()) initStates.pop();
		while (!ifContexts.empty()) ifContexts.pop();
		while (!symbolContexts.empty()) symbolContexts.pop();
		while (!conditionStack.empty()) conditionStack.pop();
		while (!currentAccessSpecifier.empty()) currentAccessSpecifier.pop();
		while (!currentTypeKind.empty()) currentTypeKind.pop();

		return 0;
	}

	std::any AstrumSema::visitPackageDeclaration(AstrumParser::PackageDeclarationContext* ctx) {
		if (firstPass) {
			auto name = ctx->packageName()->getText();
			StringReplace(name, ".", "::");
			packageName = std::move(name);
		}
		return 0;
	}

	std::any AstrumSema::visitPackageName(AstrumParser::PackageNameContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitNestedPackageName(AstrumParser::NestedPackageNameContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitModuleName(AstrumParser::ModuleNameContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitImportDeclaration(AstrumParser::ImportDeclarationContext* ctx) {
		auto loadModule = [&](const std::string& path, const std::string& originalName) {
			auto foundFile = CompilerSettings::findFileInIncludePaths(path);
			if (!foundFile.has_value()) {
				notifyErrorListeners("Cannot find module " + originalName,
				                     ctx->Import()->getSymbol());
			}

			if (ctx->As()) {
				cppParser.parse(*foundFile, ctx->Identifier()->getText());
			} else {
				cppParser.parse(*foundFile);
			}
		};

		if (firstPass && (ctx->Public() || ctx->StringLiteral())) {
			std::string path;
			std::string originalName;
			if (ctx->moduleName()) {
				path         = ctx->moduleName()->getText();
				originalName = path;
				StringReplace(path, ".", "/");
			} else {
				originalName = ctx->StringLiteral()->getText();
				path         = originalName.substr(1, originalName.length() - 2);
			}

			loadModule(path, originalName);
		} else if (!firstPass && !ctx->Public() && ctx->moduleName()) {
			std::string path         = ctx->moduleName()->getText();
			std::string originalName = path;
			StringReplace(path, ".", "/");

			loadModule(path, originalName);
		}

		return 0;
	}

	std::any AstrumSema::visitDeclarationSeq(AstrumParser::DeclarationSeqContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitDeclaration(AstrumParser::DeclarationContext* ctx) {
		if (ctx->Unsafe()) {
			if (++unsafeDepth > 1)
				notifyErrorListeners("Unsafe context recursion", ctx->Unsafe()->getSymbol());
		} else if (auto spec = ctx->symbolSpecifierSeq()) {
			if (spec->Unsafe() && ++unsafeDepth > 1)
				notifyErrorListeners("Unsafe context recursion", ctx->Unsafe()->getSymbol());
			if (auto access = spec->accessSpecifier()) {
				if (currentAccessSpecifier.top())
					notifyErrorListeners("Access specifier context recursion", access->getStart());
				if (access->Public())
					currentAccessSpecifier.top() = AccessSpecifier::Public;
				else if (access->Protected())
					currentAccessSpecifier.top() = AccessSpecifier::Protected;
				else if (access->Internal())
					currentAccessSpecifier.top() = AccessSpecifier::Internal;
				else if (access->Private())
					currentAccessSpecifier.top() = AccessSpecifier::Private;
			}
		}

		visitChildren(ctx);

		if (ctx->Unsafe())
			--unsafeDepth;
		else if (auto spec = ctx->symbolSpecifierSeq()) {
			if (spec->Unsafe())
				--unsafeDepth;
			currentAccessSpecifier.top() = std::nullopt;
		}

		return 0;
	}

	std::any AstrumSema::visitSymbolSpecifierSeq(AstrumParser::SymbolSpecifierSeqContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitVersionDefinition(AstrumParser::VersionDefinitionContext* ctx) {
		if (firstPass) {
			std::optional<AccessSpecifier> access = std::nullopt;
			if (currentAccessSpecifier.top()) {
				if (ctx->accessSpecifier())
					notifyErrorListeners("Cannot to re-define access specifer",
					                     ctx->accessSpecifier()->getStart());
				access = currentAccessSpecifier.top();
			} else if (auto acc = ctx->accessSpecifier()) {
				if (acc->Public()) {
					access = AccessSpecifier::Public;
				} else if (acc->Protected()) {
					access = AccessSpecifier::Protected;
					protectedVersions.insert(ctx->Identifier()->getText());
				} else if (acc->Private()) {
					access = AccessSpecifier::Private;
				} else if (acc->Internal()) {
					notifyErrorListeners(
					    "Version cannot be internal (use public, protected or private to the "
					    "access setup)",
					    ctx->accessSpecifier()->getStart());
				}
			}
			if (!access)
				access = AccessSpecifier::Private;
			int64_t value = 1;
			if (auto lit = ctx->IntegerLiteral()) {
				auto txt = lit->getText();
				std::from_chars(txt.c_str(), txt.c_str() + txt.size(), value);
			} else if (auto lit = ctx->BooleanLiteral()) {
				auto txt = lit->getText();
				if (txt == "true")
					value = 1;
				else
					value = 0;
			}
			versions.emplace_back(
			    Version {ctx->Identifier()->getText(),
			             value,
			             {ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()},
			             *access,
			             getCurrentCompilationCondition(),
			             (bool) ctx->Default()});
		}

		return 0;
	}

	std::any AstrumSema::visitExternVariableDeclaration(
	    AstrumParser::ExternVariableDeclarationContext* ctx) {
		if (!functionBody && unsafeDepth > 0)
			cppParser.unsafeVariables.insert(ctx->Identifier()->getText());
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitBlockDeclaration(AstrumParser::BlockDeclarationContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitMemberBlockDeclaration(
	    AstrumParser::MemberBlockDeclarationContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitAssertDeclaration(AstrumParser::AssertDeclarationContext* ctx) {
		if (firstPass) {
			if (ctx->Static()) {
				if (isTypeDefinitionBody()) {
					structStack.top()->staticAsserts.push_back(
					    {ctx->constantExpression(),
					     ctx->StringLiteral()->getText(),
					     {ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()},
					     getCurrentCompilationCondition()});
				}
			} else {
				if (!functionBody)
					notifyErrorListeners(
					    "Runtime assert declaration can only appear in the function body",
					    ctx->Assert()->getSymbol());
			}
		}
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitAssumeDeclaration(AstrumParser::AssumeDeclarationContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitUnitTestDeclaration(AstrumParser::UnitTestDeclarationContext* ctx) {
		if (CompilerSettings::get().unitTestMode && !firstPass) {
			isUnitTestBody = true;
			functionBody++;

			visitChildren(ctx);

			functionBody--;
			isUnitTestBody = false;
		}

		return 0;
	}

	std::any AstrumSema::visitDeclarationCompoundStatement(
	    AstrumParser::DeclarationCompoundStatementContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitVersionConditionalDeclaration(
	    AstrumParser::VersionConditionalDeclarationContext* ctx) {
		std::string result;
		if (auto condition = ctx->condition()) {
			auto interval = condition->getSourceInterval();
			for (size_t i = interval.a; i <= interval.b; ++i) {
				auto token = parser->getTokenStream()->get(i);
				if (token->getType() == AstrumParser::Identifier) {
					auto id = token->getText();
					result += "ADV_VERSION_" +
					          (protectedVersions.contains(id)
					               ? ("__" + StringUpper(filename) + "_PROTECTED_")
					               : "") +
					          id;
				} else {
					result += token->getText();
				}
				result += " ";
			}
		} else if (ctx->Debug()) {
			if (ctx->not_())
				result += "!";
			if (auto id = ctx->Identifier()) {
				result += "ADV_DEBUG_";
				result += id->getText();
			} else {
				result += "_DEBUG";
			}
		}
		conditionStack.push(result);

		visitChildren(ctx);

		conditionStack.pop();
		return 0;
	}

	std::any AstrumSema::visitVersionIfDeclaration(AstrumParser::VersionIfDeclarationContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitVersionElseDeclaration(
	    AstrumParser::VersionElseDeclarationContext* ctx) {
		conditionStack.top() = "!(" + conditionStack.top() + ")";
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitDeclSpecifier(AstrumParser::DeclSpecifierContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitDeclSpecifierSeq(AstrumParser::DeclSpecifierSeqContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitIdentifierSeq(AstrumParser::IdentifierSeqContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitSimpleDeclaration(AstrumParser::SimpleDeclarationContext* ctx) {
		if (!checkForCurrentPass())
			return 0;

		currentSubtype.clear();
		visitChildren(ctx);

		bool isConst       = false;
		bool isVolatile    = false;
		bool isThreadLocal = false;
		bool isLazy        = false;
		bool isStatic      = false;
		bool isMutable     = false;
		bool isUnowned     = false;
		bool isWeak        = false;

		if (auto spec = ctx->declSpecifierSeq()) {
			for (auto d : spec->declSpecifier()) {
				if (d->Const() || d->Let())
					isConst = true;
				else if (d->Volatile())
					isVolatile = true;
				else if (d->Thread_local())
					isThreadLocal = true;
				else if (d->Lazy())
					isLazy = true;
				else if (d->Static()) {
					isStatic = true;
					if (!functionBody && !isTypeDefinitionBody())
						notifyErrorListeners(
						    "Global variables and constants are implicitly static, explicit "
						    "declaration is not required",
						    d->Static()->getSymbol());
				} else if (d->Mutable()) {
					isMutable = true;
					if (!functionBody && !isTypeDefinitionBody())
						notifyErrorListeners(
						    "Global variables and constants are implicitly mutable, explicit "
						    "declaration is not required",
						    d->Mutable()->getSymbol());
				} else if (d->Unowned())
					isUnowned = true;
				else if (d->Weak())
					isWeak = true;
			}
		}

		if (isTypeDefinitionBody() && currentTypeKind.top() == TypeKind::EnumClass) {
			isConst = true;
		}

		if (isConst && isMutable) {
			notifyErrorListeners("Constant cannot be mutable", ctx->declSpecifierSeq()->getStart());
		}
		if (isConst && isVolatile) {
			notifyErrorListeners("Constant is not required to be volatile",
			                     ctx->declSpecifierSeq()->getStart());
		}
		if (isVolatile && isThreadLocal) {
			notifyErrorListeners("Thread local variable is not required to be volatile",
			                     ctx->declSpecifierSeq()->getStart());
		}
		if (isConst && isThreadLocal) {
			notifyErrorListeners("Thread local variable cannot be constant",
			                     ctx->declSpecifierSeq()->getStart());
		}
		if (isConst && !ctx->initializerClause() && !ctx->initializerList() &&
		    (!isTypeDefinitionBody() || functionBody)) {
			notifyErrorListeners("The constant must be explicitly initialized",
			                     ctx->declSpecifierSeq()->getStart());
		}
		if (isVolatile && !ctx->theTypeId()) {
			notifyErrorListeners("The volatile variable must have an explicit type",
			                     ctx->Assign()->getSymbol());
		}
		if (isUnowned && isWeak) {
			notifyErrorListeners("The reference cannot be unowned and weak at the same time",
			                     ctx->declSpecifierSeq()->getStart());
		}

		if (isLazy && !isStatic && !isThreadLocal) {
			notifyErrorListeners("Only static variable can be lazy",
			                     ctx->declSpecifierSeq()->getStart());
		}

		if (ctx->Void()) {
			if (!functionBody) {
				notifyErrorListeners(
				    "Cannot to declare the uninitialized variable outside the function body",
				    ctx->Void()->getSymbol());
			} else if (loopDepth > 0) {
				notifyErrorListeners(
				    "Cannot to declare the uninitialized variable in the loop body",
				    ctx->Void()->getSymbol());
			} else {
				auto id = ctx->Identifier()->getText();
				initStates.top().potentiallyAssigned.insert(id);
				if (initStates.top().definitelyAssigned.contains(id))
					initStates.top().definitelyAssigned.erase(id);
			}
		}
		if (ctx->Star() && unsafeDepth <= 0) {
			notifyErrorListeners("Cannot to use raw pointers in the safe context",
			                     ctx->Star()->getSymbol());
		}

		if (auto t = ctx->theTypeId()) {
			symbolTable[ctx->Identifier()->getText()] = contextTypes[t];
			if (isTypeDefinitionBody() && !functionBody) {
				symbolTable.globalSymbolTable[currentType + "." + ctx->Identifier()->getText()] =
				    contextTypes[t];
			}
			if (isWeak) {
				if (!t->VertLine().empty()) {
					notifyErrorListeners("Weak reference cannot be used with unions",
					                     ctx->declSpecifierSeq()->getStart());
				}
				if (auto post = t->singleTypeId(0)->typePostfix()) {
					if (!post->arrayDeclarator().back()->Question())
						notifyErrorListeners("Weak reference must be optional",
						                     ctx->declSpecifierSeq()->getStart());
				} else if (!t->singleTypeId(0)->Question()) {
					notifyErrorListeners("Weak reference must be optional",
					                     ctx->declSpecifierSeq()->getStart());
				}
			}
		} else {
			symbolTable[ctx->Identifier()->getText()] = contextTypes[ctx->initializerClause()];
			if (!currentSubtype.empty())
				symbolTable[ctx->Identifier()->getText()] += "<" + currentSubtype + ">";
			if (isTypeDefinitionBody() && !functionBody) {
				notifyErrorListeners("A field cannot have an implicit type",
				                     ctx->Assign()->getSymbol());
			}
		}

		// fields and global variables
		if (!functionBody && firstPass) {
			if (ctx->Star()) {
				notifyErrorListeners(
				    "Global variables cannot be auto pointer type, full type required",
				    ctx->Star()->getSymbol());
			}
			if (isTypeDefinitionBody() && currentTypeKind.top() == TypeKind::StaticClass) {
				isStatic = true;
			}
			AstrumParser::AccessSpecifierContext* acc              = nullptr;
			AstrumParser::AttributeSpecifierSeqContext* attributes = nullptr;
			bool isProtectedInternal                               = false;

			if (!isTypeDefinitionBody()) {
				if (auto block =
				        reinterpret_cast<AstrumParser::BlockDeclarationContext*>(ctx->parent)) {
					if (auto decl =
					        reinterpret_cast<AstrumParser::DeclarationContext*>(block->parent)) {
						acc        = decl->accessSpecifier();
						attributes = decl->attributeSpecifierSeq();
					}
				}
			} else {
				if (auto block = reinterpret_cast<AstrumParser::MemberBlockDeclarationContext*>(
				        ctx->parent)) {
					auto decl = reinterpret_cast<AstrumParser::StructMemberDeclarationContext*>(
					    block->parent);
					isProtectedInternal = decl->protectedInternal();
					acc                 = decl->accessSpecifier();
					attributes          = decl->attributeSpecifierSeq();
				}
			}

			std::optional<AccessSpecifier> access =
			    resolveAccessSpecifier(acc, isProtectedInternal);
			if (isProtectedInternal) {
				if (!isStatic)
					notifyErrorListeners(
					    "Cannot to declare non-static protected internal field, use "
					    "public/internal/protected/private",
					    ctx->getStart());
				if (isTypeDefinitionBody() && currentTypeKind.top() != TypeKind::Class)
					notifyErrorListeners(
					    "Cannot to declare protected field in the struct/union/enum",
					    ctx->getStart());
			} else if (access && *access == AccessSpecifier::Protected) {
				if (isTypeDefinitionBody() && currentTypeKind.top() != TypeKind::Class)
					notifyErrorListeners(
					    "Cannot to declare protected field in the struct/union/enum",
					    ctx->getStart());
			}

			if (isThreadLocal) {
				if (access) {
					if (*access != AccessSpecifier::Private && !isTypeDefinitionBody())
						notifyErrorListeners(
						    "Thread-local variables should always be private. Use getters/setters "
						    "to configure access or thread-local variables",
						    ctx->declSpecifierSeq()->getStart());
				} else
					access = AccessSpecifier::Private;
			} else {
				if (!access) {
					if (!isTypeDefinitionBody())
						access = AccessSpecifier::Internal;
					else
						access = AccessSpecifier::Private;
				}
			}
			auto id = ctx->Identifier();
			if (!isTypeDefinitionBody()) {
				if (*access == AccessSpecifier::Protected)
					protectedSymbols.insert(id->getText());
				if (unsafeDepth > 0)
					cppParser.unsafeVariables.insert(id->getText());
				globalVariables.emplace_back(VariableDefinition {
				    id->getText(),
				    nullptr,
				    nullptr,
				    ctx->theTypeId(),
				    {ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()},
				    ctx->initializerClause(),
				    ctx->initializerList(),
				    attributes,
				    *access,
				    getCurrentCompilationCondition(),
				    "",
				    false,
				    isConst,
				    isVolatile,
				    isThreadLocal,
				    isLazy,
				    unsafeDepth > 0,
				    false,
				    isUnowned,
				    isWeak});
			} else if (isLazy) {
				auto lastTparams     = getLastTypeTemplateParams();
				auto lastSpec        = getLastTypeTemplateSpecializationArgs();
				auto lastConstraints = getLastTypeConstraints();
				auto fullType        = getCurrentFullTypeName();
				SourcePosition pos   = {ctx->getStart()->getLine(),
                                      ctx->getStart()->getCharPositionInLine()};
				auto property        = PropertyDefinition {id->getText(),
                                                    ctx->theTypeId(),
                                                    pos,
                                                    ctx->initializerClause(),
                                                    nullptr,
                                                    nullptr,
                                                    nullptr,
                                                    attributes,
                                                    *access,
                                                    getCurrentCompilationCondition(),
                                                    currentType,
                                                    fullType,
                                                    lastTparams,
                                                    lastSpec,
                                                    lastConstraints,
                                                    true,
                                                    isConst,
                                                    true,
                                                    false,
                                                    isPrivateTypeDefinition,
                                                    isProtectedTypeDefinition,
                                                    isUnsafeTypeDefinition,
                                                    false,
                                                    false,
                                                    false,
                                                    false,
                                                    false,
                                                    false,
                                                    true};
				structStack.top()->properties.emplace_back(property);
				if (currentTypeKind.top() != TypeKind::Extension)
					properties.insert_or_assign(pos, property);
			} else {
				if (currentTypeKind.top() == TypeKind::UnionStruct &&
				    *access != AccessSpecifier::Private)
					notifyErrorListeners("Raw union field must be private", ctx->getStart());

				if (unsafeDepth > 0)
					cppParser.unsafeVariables.insert(currentType + "." + id->getText());
				structStack.top()->fields.emplace_back(VariableDefinition {
				    id->getText(),
				    nullptr,
				    nullptr,
				    ctx->theTypeId(),
				    {ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()},
				    ctx->initializerClause(),
				    ctx->initializerList(),
				    attributes,
				    *access,
				    getCurrentCompilationCondition(),
				    getCurrentFullTypeName(),
				    isStatic,
				    isConst,
				    isVolatile,
				    isThreadLocal,
				    isLazy,
				    unsafeDepth > 0,
				    false,
				    isUnowned,
				    isWeak});
				if (isStatic || isThreadLocal) {
					if (isProtectedTypeDefinition)
						access = AccessSpecifier::Protected;
					else
						access = AccessSpecifier::Private;
					staticFields.emplace_back(VariableDefinition {
					    id->getText(),
					    getLastTypeTemplateParams(),
					    getLastTypeConstraints(),
					    ctx->theTypeId(),
					    {ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()},
					    ctx->initializerClause(),
					    ctx->initializerList(),
					    attributes,
					    *access,
					    getCurrentCompilationCondition(),
					    getCurrentFullTypeName(),
					    isStatic,
					    isConst,
					    isVolatile,
					    isThreadLocal,
					    isLazy,
					    isUnsafeTypeDefinition,
					    getLastTypeTemplateSpecializationArgs() != nullptr,
					    isUnowned,
					    isWeak});
				}
			}
		}

		return 0;
	}

	std::any AstrumSema::visitBitFieldDeclaration(AstrumParser::BitFieldDeclarationContext* ctx) {
		if (!checkForCurrentPass())
			return 0;

		visitChildren(ctx);

		if (ctx->theTypeId()->getText().find('*') != std::string::npos && unsafeDepth <= 0) {
			notifyErrorListeners("Cannot to use raw pointers in the safe context",
			                     ctx->theTypeId()->getStart());
		}

		symbolTable[ctx->Identifier()->getText()] = contextTypes[ctx->theTypeId()];

		if (!functionBody && firstPass) {
			symbolTable.globalSymbolTable[currentType + "." + ctx->Identifier()->getText()] =
			    contextTypes[ctx->theTypeId()];
			if (currentTypeKind.top() != TypeKind::Struct &&
			    currentTypeKind.top() != TypeKind::RefStruct &&
			    currentTypeKind.top() != TypeKind::Class &&
			    currentTypeKind.top() != TypeKind::EnumClass) {
				notifyErrorListeners("Cannot to use bit field in this context",
				                     ctx->IntegerLiteral()->getSymbol());
			}
			AstrumParser::AccessSpecifierContext* acc              = nullptr;
			AstrumParser::AttributeSpecifierSeqContext* attributes = nullptr;
			bool isProtectedInternal                               = false;

			if (auto block =
			        reinterpret_cast<AstrumParser::MemberBlockDeclarationContext*>(ctx->parent)) {
				auto decl =
				    reinterpret_cast<AstrumParser::StructMemberDeclarationContext*>(block->parent);
				isProtectedInternal = decl->protectedInternal();
				acc                 = decl->accessSpecifier();
				attributes          = decl->attributeSpecifierSeq();
			}

			std::optional<AccessSpecifier> access =
			    resolveAccessSpecifier(acc, isProtectedInternal);
			if (isProtectedInternal) {
				notifyErrorListeners(
				    "Cannot to declare protected internal field with specified bit width",
				    ctx->IntegerLiteral()->getSymbol());
			} else if (access && *access == AccessSpecifier::Protected) {
				if (currentTypeKind.top() != TypeKind::Class)
					notifyErrorListeners(
					    "Cannot to declare protected field in the struct/union/enum",
					    ctx->getStart());
			}

			if (!access) {
				if (!isTypeDefinitionBody())
					access = AccessSpecifier::Internal;
				else
					access = AccessSpecifier::Private;
			}
			auto id = ctx->Identifier();

			if (unsafeDepth > 0)
				cppParser.unsafeVariables.insert(currentType + "." + id->getText());
			structStack.top()->fields.emplace_back(VariableDefinition {
			    id->getText(),
			    nullptr,
			    nullptr,
			    ctx->theTypeId(),
			    {ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()},
			    nullptr,
			    nullptr,
			    attributes,
			    *access,
			    getCurrentCompilationCondition(),
			    getCurrentFullTypeName(),
			    false,
			    false,
			    false,
			    false,
			    false,
			    unsafeDepth > 0,
			    false,
			    false,
			    false,
			    static_cast<uint8_t>(std::stoi(ctx->IntegerLiteral()->getText()))});
		}

		return 0;
	}

	std::any AstrumSema::visitDeconstructionDeclaration(
	    AstrumParser::DeconstructionDeclarationContext* ctx) {
		visitChildren(ctx);

		currentSubtype.clear();
		if (!typeStack.empty()) {
			auto saveSymbolInTable = [&](auto type, auto id) {
				auto pos = type.find('<');
				if (pos != type.npos && !type.starts_with("std.tuple")) {
					auto subtype   = type.substr(pos + 1, type.rfind('>') - pos - 1);
					subtype        = subtype.substr(0, subtype.find(','));
					currentSubtype = subtype;
					type           = type.substr(0, pos);
				}
				if (!currentSubtype.empty())
					type += "<" + currentSubtype + ">";
				symbolTable[id->getText()] = type;
			};

			if (typeStack.top().starts_with("std.tuple<")) {
				auto typestr = typeStack.top().substr(typeStack.top().find('<') + 1);
				typestr      = typestr.substr(0, typestr.rfind('>'));
				auto types   = StringSplit(typestr, ',');
				auto index   = 0;
				for (auto id : ctx->identifierSeq()->Identifier()) {
					if (types.size() > index) {
						auto type = types[index++];
						StringTrim(type);
						saveSymbolInTable(type, id);
					}
				}

			} else {
				auto index = 0;
				for (auto id : ctx->identifierSeq()->Identifier()) {
					auto type = symbolTable[typeStack.top() + "." + std::to_string(index++)];
					saveSymbolInTable(type, id);
				}
			}
		}

		return 0;
	}

	std::any AstrumSema::visitRefDeclaration(AstrumParser::RefDeclarationContext* ctx) {
		if (!checkForCurrentPass())
			return 0;

		bool isConst = ctx->Const() || ctx->Let();

		if (!functionBody) {
			notifyErrorListeners("Global variable cannot be the reference variable",
			                     ctx->Amp()->getSymbol());
		}
		if (!ctx->initializerClause()) {
			notifyErrorListeners("Local reference variable must be explicitly initialized",
			                     ctx->Amp()->getSymbol());
		}

		visitChildren(ctx);

		auto seq = ctx->identifierSeq();
		for (auto id : seq->Identifier()) {
			symbolTable[id->getText()] = contextTypes[ctx->initializerClause()];
			if (!currentSubtype.empty())
				symbolTable[id->getText()] += "<" + currentSubtype + ">";
		}

		return 0;
	}

	std::any AstrumSema::visitMemberRefDeclaration(AstrumParser::MemberRefDeclarationContext* ctx) {
		if (!checkForCurrentPass())
			return 0;

		if (currentTypeKind.empty() || currentTypeKind.top() != TypeKind::RefStruct)
			notifyErrorListeners("Cannot to declare reference field outside the ref struct",
			                     ctx->Amp()->getSymbol());

		visitChildren(ctx);

		if (firstPass) {
			bool isConst                                           = ctx->Const() || ctx->Let();
			AstrumParser::AccessSpecifierContext* acc              = nullptr;
			AstrumParser::AttributeSpecifierSeqContext* attributes = nullptr;
			std::optional<AccessSpecifier> access                  = std::nullopt;
			if (auto block =
			        reinterpret_cast<AstrumParser::MemberBlockDeclarationContext*>(ctx->parent)) {
				if (auto decl = reinterpret_cast<AstrumParser::StructMemberDeclarationContext*>(
				        block->parent)) {
					if (decl->protectedInternal())
						notifyErrorListeners(
						    "Cannot to declare protected internal reference variable",
						    decl->protectedInternal()->getStart());
					acc        = decl->accessSpecifier();
					attributes = decl->attributeSpecifierSeq();
				}
			}
			if (acc) {
				if (currentAccessSpecifier.top())
					notifyErrorListeners("Cannot to redefine access specifier", acc->getStart());
				if (acc->Public()) {
					access = AccessSpecifier::Public;
				} else if (acc->Private()) {
					access = AccessSpecifier::Private;
				}
			}

			if (currentAccessSpecifier.top())
				access = currentAccessSpecifier.top();
			if (!access)
				access = AccessSpecifier::Private;
			auto id = ctx->Identifier();
			if (unsafeDepth > 0)
				cppParser.unsafeVariables.insert(currentType + "." + id->getText());
			structStack.top()->fields.emplace_back(VariableDefinition {
			    "& " + id->getText(),
			    nullptr,
			    nullptr,
			    ctx->theTypeId(),
			    {ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()},
			    nullptr,
			    nullptr,
			    attributes,
			    *access,
			    getCurrentCompilationCondition(),
			    "",
			    false,
			    isConst,
			    false,
			    false,
			    false,
			    unsafeDepth > 0,
			    false});
		}

		return 0;
	}

	std::any AstrumSema::visitSimpleMultiDeclaration(
	    AstrumParser::SimpleMultiDeclarationContext* ctx) {
		if (!checkForCurrentPass())
			return 0;

		visitChildren(ctx);

		if (isTypeDefinitionBody() && currentTypeKind.top() == TypeKind::StaticClass &&
		    !functionBody)
			notifyErrorListeners("Static class cannot have multiple fields with one definition",
			                     ctx->getStart());

		bool isConst       = false;
		bool isVolatile    = false;
		bool isThreadLocal = false;
		bool isLazy        = false;
		bool isStatic      = false;
		bool isMutable     = false;
		bool isUnowned     = false;
		bool isWeak        = false;

		if (auto spec = ctx->declSpecifierSeq()) {
			for (auto d : spec->declSpecifier()) {
				if (d->Const() || d->Let())
					isConst = true;
				else if (d->Volatile())
					isVolatile = true;
				else if (d->Thread_local())
					isThreadLocal = true;
				else if (d->Lazy())
					isLazy = true;
				else if (d->Static()) {
					isStatic = true;
					if (!functionBody && !isTypeDefinitionBody())
						notifyErrorListeners(
						    "Global variables and constants are implicitly static, explicit "
						    "declaration is not required",
						    d->Static()->getSymbol());
				} else if (d->Mutable()) {
					isMutable = true;
					if (!functionBody && !isTypeDefinitionBody())
						notifyErrorListeners(
						    "Global variables and constants are implicitly mutable, explicit "
						    "declaration is not required",
						    d->Mutable()->getSymbol());
				} else if (d->Unowned())
					isUnowned = true;
				else if (d->Weak())
					isWeak = true;
			}
		}

		if (isTypeDefinitionBody() && currentTypeKind.top() == TypeKind::EnumClass) {
			isConst = true;
		}

		if (isConst && isMutable) {
			notifyErrorListeners("Constant cannot be mutable", ctx->declSpecifierSeq()->getStart());
		}
		if (isConst && isVolatile) {
			notifyErrorListeners("Constant is not required to be volatile",
			                     ctx->declSpecifierSeq()->getStart());
		}
		if (isVolatile && isThreadLocal) {
			notifyErrorListeners("Thread local variable is not required to be volatile",
			                     ctx->declSpecifierSeq()->getStart());
		}
		if (isConst && isThreadLocal) {
			notifyErrorListeners("Thread local variable cannot be constant",
			                     ctx->declSpecifierSeq()->getStart());
		}
		if (isConst && (!isTypeDefinitionBody() || functionBody)) {
			notifyErrorListeners("The constant must be explicitly initialized",
			                     ctx->declSpecifierSeq()->getStart());
		}
		if (isUnowned && isWeak) {
			notifyErrorListeners("The reference cannot be unowned and weak at the same time",
			                     ctx->declSpecifierSeq()->getStart());
		}
		if (isLazy) {
			notifyErrorListeners("Cannot to initialize multiple variables by lazy",
			                     ctx->declSpecifierSeq()->getStart());
		}

		auto ids = ctx->Identifier();
		for (auto id : ids) {
			auto txt         = id->getText();
			symbolTable[txt] = contextTypes[ctx->theTypeId()];
			if (isTypeDefinitionBody() && !functionBody) {
				symbolTable.globalSymbolTable[currentType + "." + txt] =
				    contextTypes[ctx->theTypeId()];
			}
		}

		if (isWeak) {
			if (auto type = ctx->theTypeId()) {
				if (!type->VertLine().empty()) {
					notifyErrorListeners("Weak reference cannot be used with unions",
					                     ctx->declSpecifierSeq()->getStart());
				}
				if (auto post = type->singleTypeId(0)->typePostfix()) {
					if (!post->arrayDeclarator().back()->Question())
						notifyErrorListeners("Weak reference must be optional",
						                     ctx->declSpecifierSeq()->getStart());
				} else if (!type->singleTypeId(0)->Question()) {
					notifyErrorListeners("Weak reference must be optional",
					                     ctx->declSpecifierSeq()->getStart());
				}
			}
		}

		if (!functionBody && firstPass) {
			AstrumParser::AccessSpecifierContext* acc              = nullptr;
			AstrumParser::AttributeSpecifierSeqContext* attributes = nullptr;
			bool isProtectedInternal                               = false;
			if (!isTypeDefinitionBody()) {
				if (auto block =
				        reinterpret_cast<AstrumParser::BlockDeclarationContext*>(ctx->parent)) {
					if (auto decl =
					        reinterpret_cast<AstrumParser::DeclarationContext*>(block->parent)) {
						acc        = decl->accessSpecifier();
						attributes = decl->attributeSpecifierSeq();
					}
				}
			} else {
				if (auto block = reinterpret_cast<AstrumParser::MemberBlockDeclarationContext*>(
				        ctx->parent)) {
					if (auto decl = reinterpret_cast<AstrumParser::StructMemberDeclarationContext*>(
					        block->parent)) {
						isProtectedInternal = decl->protectedInternal();
						acc                 = decl->accessSpecifier();
						attributes          = decl->attributeSpecifierSeq();
					}
				}
			}

			std::optional<AccessSpecifier> access =
			    resolveAccessSpecifier(acc, isProtectedInternal);
			if (isProtectedInternal) {
				if (!isStatic)
					notifyErrorListeners(
					    "Cannot to declare non-static protected internal field, use "
					    "public/internal/protected/private",
					    ctx->getStart());
				if (isTypeDefinitionBody() && currentTypeKind.top() != TypeKind::Class)
					notifyErrorListeners(
					    "Cannot to declare protected field in the struct/union/enum",
					    ctx->getStart());
			} else if (access && *access == AccessSpecifier::Protected) {
				if (isTypeDefinitionBody() && currentTypeKind.top() != TypeKind::Class)
					notifyErrorListeners(
					    "Cannot to declare protected field in the struct/union/enum",
					    ctx->getStart());
			}

			if (isThreadLocal) {
				if (access) {
					if (*access != AccessSpecifier::Private && !isTypeDefinitionBody())
						notifyErrorListeners(
						    "Thread-local variables should always be private. Use getters/setters "
						    "to configure access or thread-local variables",
						    ctx->declSpecifierSeq()->getStart());
				} else
					access = AccessSpecifier::Private;
			} else {
				if (!access) {
					if (!isTypeDefinitionBody())
						access = AccessSpecifier::Internal;
					else
						access = AccessSpecifier::Private;
				}
			}
			for (auto id : ids) {
				if (!isTypeDefinitionBody()) {
					if (*access == AccessSpecifier::Protected)
						protectedSymbols.insert(id->getText());
					if (unsafeDepth > 0)
						cppParser.unsafeVariables.insert(id->getText());
					globalVariables.emplace_back(VariableDefinition {
					    id->getText(),
					    nullptr,
					    nullptr,
					    ctx->theTypeId(),
					    {ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()},
					    nullptr,
					    nullptr,
					    attributes,
					    *access,
					    getCurrentCompilationCondition(),
					    "",
					    false,
					    isConst,
					    isVolatile,
					    isThreadLocal,
					    isLazy,
					    unsafeDepth > 0,
					    false,
					    isUnowned,
					    isWeak});
				} else {
					if (currentTypeKind.top() == TypeKind::UnionStruct &&
					    *access != AccessSpecifier::Private)
						notifyErrorListeners("Raw union field must be private", ctx->getStart());
					if (unsafeDepth > 0)
						cppParser.unsafeVariables.insert(currentType + "." + id->getText());
					structStack.top()->fields.emplace_back(VariableDefinition {
					    id->getText(),
					    nullptr,
					    nullptr,
					    ctx->theTypeId(),
					    {ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()},
					    nullptr,
					    nullptr,
					    attributes,
					    *access,
					    getCurrentCompilationCondition(),
					    "",
					    isStatic,
					    isConst,
					    isVolatile,
					    isThreadLocal,
					    isLazy,
					    unsafeDepth > 0,
					    false,
					    isUnowned,
					    isWeak});
					if (isStatic || isThreadLocal) {
						if (isProtectedTypeDefinition)
							access = AccessSpecifier::Protected;
						else
							access = AccessSpecifier::Private;
						staticFields.emplace_back(VariableDefinition {
						    id->getText(),
						    getLastTypeTemplateParams(),
						    getLastTypeConstraints(),
						    ctx->theTypeId(),
						    {ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()},
						    nullptr,
						    nullptr,
						    attributes,
						    *access,
						    getCurrentCompilationCondition(),
						    getCurrentFullTypeName(),
						    isStatic,
						    isConst,
						    isVolatile,
						    isThreadLocal,
						    isLazy,
						    isUnsafeTypeDefinition,
						    getLastTypeTemplateSpecializationArgs() != nullptr,
						    isUnowned,
						    isWeak});
					}
				}
			}
		}

		return 0;
	}

	std::any AstrumSema::visitMultiDeclaration(AstrumParser::MultiDeclarationContext* ctx) {
		if (!functionBody)
			notifyErrorListeners("Multi declarations cannot be used outside function body",
			                     ctx->Colon()[1]->getSymbol());

		visitChildren(ctx);

		for (auto id : ctx->Identifier()) {
			symbolTable[id->getText()] = contextTypes[ctx->initializerClause()];
			if (!currentSubtype.empty())
				symbolTable[id->getText()] += "<" + currentSubtype + ">";
		}

		return 0;
	}

	std::any AstrumSema::visitConstantDeclaration(AstrumParser::ConstantDeclarationContext* ctx) {
		if (!checkForCurrentPass())
			return 0;

		if (ctx->theTypeId()) {
			symbolTable[ctx->Identifier()->getText()] = contextTypes[ctx->theTypeId()];
			if (!ctx->theTypeId()->VertLine().empty())
				notifyErrorListeners("Compile-time constant cannot be union",
				                     ctx->theTypeId()->VertLine(0)->getSymbol());
			if (!ctx->theTypeId()->singleTypeId(0)->typeSpecifierSeq()->pointerOperator().empty())
				notifyErrorListeners("Compile-time constant cannot be pointer",
				                     ctx->theTypeId()
				                         ->singleTypeId(0)
				                         ->typeSpecifierSeq()
				                         ->pointerOperator()[0]
				                         ->getStart());
		}

		if (firstPass) {
			AstrumParser::AccessSpecifierContext* acc              = nullptr;
			AstrumParser::AttributeSpecifierSeqContext* attributes = nullptr;
			std::optional<AccessSpecifier> access                  = std::nullopt;
			if (!isTypeDefinitionBody()) {
				if (auto block =
				        reinterpret_cast<AstrumParser::BlockDeclarationContext*>(ctx->parent)) {
					if (auto decl =
					        reinterpret_cast<AstrumParser::DeclarationContext*>(block->parent)) {
						acc        = decl->accessSpecifier();
						attributes = decl->attributeSpecifierSeq();
					}
				}
			} else {
				if (auto block = reinterpret_cast<AstrumParser::MemberBlockDeclarationContext*>(
				        ctx->parent)) {
					if (auto decl = reinterpret_cast<AstrumParser::StructMemberDeclarationContext*>(
					        block->parent)) {
						if (decl->protectedInternal())
							notifyErrorListeners("Cannot to declare protected internal constant",
							                     decl->protectedInternal()->getStart());
						acc        = decl->accessSpecifier();
						attributes = decl->attributeSpecifierSeq();
					}
				}
			}

			access = resolveAccessSpecifier(acc, false);
			if (access && *access == AccessSpecifier::Protected) {
				if (isTypeDefinitionBody() && currentTypeKind.top() != TypeKind::Class)
					notifyErrorListeners("Cannot to declare protected member outside the class",
					                     acc->Protected()->getSymbol());
			} else if (access && *access == AccessSpecifier::Internal) {
				notifyErrorListeners(
				    "Compile-time constant cannot be internal (use public, protected or "
				    "private to the access setup)",
				    acc->Internal()->getSymbol());
			}

			if (!access) {
				access = AccessSpecifier::Public;
			}
			if (!isTypeDefinitionBody()) {
				if (*access == AccessSpecifier::Protected)
					protectedSymbols.insert(ctx->Identifier()->getText());
				globalConstants.emplace_back(ConstantDefinition {
				    ctx->Identifier()->getText(),
				    ctx->templateParams(),
				    ctx->theTypeId(),
				    {ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()},
				    ctx->initializerClause(),
				    attributes,
				    *access,
				    getCurrentCompilationCondition(),
				    ""});
			} else {
				structStack.top()->constants.emplace_back(ConstantDefinition {
				    ctx->Identifier()->getText(),
				    ctx->templateParams(),
				    ctx->theTypeId(),
				    {ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()},
				    ctx->initializerClause(),
				    attributes,
				    *access,
				    getCurrentCompilationCondition(),
				    getCurrentFullTypeName()});
			}
		}

		visitChildren(ctx);

		if (!ctx->theTypeId()) {
			auto id = ctx->Identifier()->getText();
			auto t  = contextTypes[ctx->initializerClause()];
			if (!currentSubtype.empty())
				t += "<" + currentSubtype + ">";
			symbolTable[id] = t;
			if (isTypeDefinitionBody() && !functionBody) {
				symbolTable.globalSymbolTable[currentType + "." + id] = t;
			}
		}
		if (functionBody && ctx->templateParams()) {
			notifyErrorListeners("Cannot to use variable template in the function body",
			                     ctx->templateParams()->getStart());
		}

		return 0;
	}

	std::any AstrumSema::visitForwardVarDeclaration(
	    AstrumParser::ForwardVarDeclarationContext* ctx) {
		if (!functionBody)
			notifyErrorListeners(
			    "Forward variable declarations cannot be used outside function body",
			    ctx->Forward()->getSymbol());

		visitChildren(ctx);

		if (!firstPass) {
			symbolTable[ctx->Identifier()->getText()] = contextTypes[ctx->initializerClause()];
			if (!currentSubtype.empty())
				symbolTable[ctx->Identifier()->getText()] += "<" + currentSubtype + ">";
		}

		return 0;
	}

	std::any AstrumSema::visitAliasDeclaration(AstrumParser::AliasDeclarationContext* ctx) {
		if (!checkForCurrentPass())
			return 0;

		auto name        = ctx->Identifier()->getText();
		aliasTable[name] = ctx->theTypeId()->getText();
		typeset.insert(name);
		if (!functionBody && !isTypeDefinitionBody())
			typeset.globalTypes.insert(name);

		if (firstPass) {
			if (isTypeDefinitionBody()) {
				aliasTable.globalAliasTable[currentType + "." + name] = ctx->theTypeId()->getText();
				typeset.globalTypes.insert(currentType + "." + name);
			}
			AstrumParser::AccessSpecifierContext* acc = nullptr;
			if (auto block = dynamic_cast<AstrumParser::BlockDeclarationContext*>(ctx->parent)) {
				if (auto decl = dynamic_cast<AstrumParser::DeclarationContext*>(block->parent)) {
					acc = decl->accessSpecifier();
				}
			} else if (auto block = dynamic_cast<AstrumParser::MemberBlockDeclarationContext*>(
			               ctx->parent)) {
				if (auto decl = dynamic_cast<AstrumParser::StructMemberDeclarationContext*>(
				        block->parent)) {
					if (decl->protectedInternal())
						notifyErrorListeners("Cannot to declare protected internal alias",
						                     decl->protectedInternal()->getStart());
					acc = decl->accessSpecifier();
				}
			}

			std::optional<AccessSpecifier> access = resolveAccessSpecifier(acc, false);
			if (access && *access == AccessSpecifier::Internal) {
				notifyErrorListeners(
				    "Type alias cannot be internal (use public, protected or private to the "
				    "access setup)",
				    acc->Internal()->getSymbol());
			}

			if (!access) {
				if (isTypeDefinitionBody())
					access = AccessSpecifier::Private;
				else
					access = AccessSpecifier::Public;
			}
			if (*access == AccessSpecifier::Protected) {
				protectedSymbols.insert(name);
				if (isTypeDefinitionBody() && currentTypeKind.top() != TypeKind::Class)
					notifyErrorListeners(
					    "Cannot to declare protected member outside the class body",
					    acc->Protected()->getSymbol());
			}
			if (unsafeDepth > 0) {
				cppParser.unsafeTypes.insert(name);
				if (isTypeDefinitionBody())
					cppParser.unsafeTypes.insert(currentType + "." + name);
			}

			if (!isTypeDefinitionBody()) {
				globalTypeAliases.emplace_back(TypeAliasDefinition {
				    name,
				    ctx->templateParams(),
				    ctx->theTypeId(),
				    {ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()},
				    *access,
				    getCurrentCompilationCondition(),
				    unsafeDepth > 0});
			} else {
				structStack.top()->typeAliases.emplace_back(TypeAliasDefinition {
				    name,
				    ctx->templateParams(),
				    ctx->theTypeId(),
				    {ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()},
				    *access,
				    getCurrentCompilationCondition(),
				    unsafeDepth > 0});
			}
		}

		return visitChildren(ctx);
	}

	std::any AstrumSema::visitAccessSpecifier(AstrumParser::AccessSpecifierContext* ctx) {
		return 0;
	}

	std::any AstrumSema::visitProtectedInternal(AstrumParser::ProtectedInternalContext* ctx) {
		return 0;
	}

	std::any AstrumSema::visitStatement(AstrumParser::StatementContext* ctx) {
		currentStatement = ctx;
		if (ctx->Unsafe()) {
			if (++unsafeDepth > 1)
				notifyErrorListeners("Unsafe context recursion", ctx->Unsafe()->getSymbol());
		}

		visitChildren(ctx);

		if (ctx->Unsafe())
			--unsafeDepth;
		while (!typeStack.empty()) typeStack.pop();
		currentTemplateArgs.clear();
		currentSubtype.clear();
		return 0;
	}

	std::any AstrumSema::visitLabeledStatement(AstrumParser::LabeledStatementContext* ctx) {
		if (!firstPass)
			initStates.push(initStates.top());

		visitChildren(ctx);

		if (!firstPass)
			initStates.pop();

		return 0;
	}

	std::any AstrumSema::visitDeclarationStatement(AstrumParser::DeclarationStatementContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitExpressionStatement(AstrumParser::ExpressionStatementContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitCompoundStatement(AstrumParser::CompoundStatementContext* ctx) {
		symbolContexts.push(symbolContexts.top());

		visitChildren(ctx);

		symbolContexts.pop();

		return 0;
	}

	std::any AstrumSema::visitSelectionStatement(AstrumParser::SelectionStatementContext* ctx) {
		currentIfStatement = ctx;
		if (!firstPass) {
			if (ctx->If()) {
				IfContext ictx;
				ictx.before  = initStates.top();
				ictx.hasElse = ctx->Else();
				initStates.push(ictx.before);
				ifContexts.push(ictx);
				symbolContexts.push(symbolContexts.top());
			} else if (ctx->Switch()) {
				currentSwitchData.push({0, ctx->switchStatementBranch().size()});
			}
		}

		visitChildren(ctx);

		if (!firstPass) {
			if (ctx->If()) {
				auto& ictx = ifContexts.top();
				InitState elseState;
				if (ictx.hasElse) {
					elseState = ictx.otherwise;
				} else {
					elseState = ictx.before;
					ictx.then = initStates.top();
				}

				initStates.pop();
				auto& currentState              = initStates.top();
				currentState.definitelyAssigned = ictx.then.intersect(elseState.definitelyAssigned);
				currentState.potentiallyAssigned = ictx.then.unite(elseState.potentiallyAssigned);

				ifContexts.pop();
				symbolContexts.pop();
			} else if (ctx->Switch()) {
				auto branches = ctx->switchStatementBranch();
				auto last     = branches.size() - 1;
				if (branches[last]->patternList()->getText() != "_") {
					auto& ictx          = ifContexts.top();
					InitState elseState = ictx.before;
					ictx.then           = initStates.top();

					initStates.pop();
					auto& currentState = initStates.top();
					currentState.definitelyAssigned =
					    ictx.then.intersect(elseState.definitelyAssigned);
					currentState.potentiallyAssigned =
					    ictx.then.unite(elseState.potentiallyAssigned);

					ifContexts.pop();
				}
				for (int i = last - 1; i >= 0; i--) {
					auto& ictx          = ifContexts.top();
					InitState elseState = initStates.top();

					initStates.pop();
					auto& currentState = initStates.top();
					currentState.definitelyAssigned =
					    ictx.then.intersect(elseState.definitelyAssigned);
					currentState.potentiallyAssigned =
					    ictx.then.unite(elseState.potentiallyAssigned);

					ifContexts.pop();
				}
				currentSwitchData.pop();
			}
		}

		return 0;
	}

	std::any AstrumSema::visitCondition(AstrumParser::ConditionContext* ctx) {
		isCondition = true;
		visitChildren(ctx);
		isCondition = false;
		return 0;
	}

	std::any AstrumSema::visitElseBranch(AstrumParser::ElseBranchContext* ctx) {
		if (!firstPass) {
			ifContexts.top().then = initStates.top();
			initStates.pop();
			initStates.push(ifContexts.top().before);
		}

		visitChildren(ctx);

		if (!firstPass) {
			ifContexts.top().otherwise = initStates.top();
		}

		return 0;
	}

	std::any AstrumSema::visitSwitchStatementBranch(
	    AstrumParser::SwitchStatementBranchContext* ctx) {
		if (!firstPass) {
			symbolContexts.push(symbolContexts.top());
			auto pattern = ctx->patternList()->pattern(0);
			if (pattern->theTypeId() && pattern->getText() != "_") {
				auto parent = static_cast<AstrumParser::SelectionStatementContext*>(ctx->parent);
				auto type   = pattern->theTypeId()->getText();
				if (auto pos = type.find('<'); pos != std::string::npos) {
					type = type.substr(0, pos);
				}
				symbolTable[!pattern->Identifier().empty()
				                ? pattern->Identifier(0)->getText()
				                : parent->threeWayComparisonExpression()->getText()] = type;
			}
			auto switchData = currentSwitchData.top();
			if (switchData.first > 0) {
				ifContexts.top().then = initStates.top();
				initStates.pop();
				initStates.push(ifContexts.top().before);
			}
			if (ctx->patternList()->getText() != "_") {
				IfContext ictx;
				ictx.before  = initStates.top();
				ictx.hasElse = switchData.second - switchData.first > 1;
				initStates.push(ictx.before);
				ifContexts.push(ictx);
			} else if (switchData.second - switchData.first > 1) {
				notifyErrorListeners("Default branch must be last in the switch",
				                     ctx->patternList()->getStart());
			}
		}

		visitChildren(ctx);

		if (!firstPass) {
			symbolContexts.pop();
			++currentSwitchData.top().first;
		}

		return 0;
	}

	std::any AstrumSema::visitDeclarator(AstrumParser::DeclaratorContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitInlineCppStatement(AstrumParser::InlineCppStatementContext* ctx) {
		if (!firstPass) {
			if (!ctx->Unsafe() && unsafeDepth <= 0)
				notifyErrorListeners("Inline C++ block can be declared only in unsafe context",
				                     ctx->Cpp()->getSymbol());
		}

		return 0;
	}

	std::any AstrumSema::visitIterationStatement(AstrumParser::IterationStatementContext* ctx) {
		if (!firstPass)
			++loopDepth;

		visitChildren(ctx);

		if (!firstPass)
			--loopDepth;

		return 0;
	}

	std::any AstrumSema::visitWhileCondition(AstrumParser::WhileConditionContext* ctx) {
		isCondition = true;
		visitChildren(ctx);
		isCondition = false;
		return 0;
	}

	std::any AstrumSema::visitDoWhileCondition(AstrumParser::DoWhileConditionContext* ctx) {
		isCondition = true;
		visitChildren(ctx);
		isCondition = false;
		return 0;
	}

	std::any AstrumSema::visitForInitStatement(AstrumParser::ForInitStatementContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitForRangeDeclaration(AstrumParser::ForRangeDeclarationContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitForRangeInitializer(AstrumParser::ForRangeInitializerContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitExpressionSeq(AstrumParser::ExpressionSeqContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitJumpStatement(AstrumParser::JumpStatementContext* ctx) {
		visitChildren(ctx);
		if (!firstPass) {
			if (isUnitTestBody) {
				notifyErrorListeners("Unit test cannot return value", ctx->Return()->getSymbol());
			}
			if (ctx->Return() &&
			    std::any_of(outParams.begin(), outParams.end(), [&](const auto& param) {
				    return !initStates.top().definitelyAssigned.contains(param);
			    })) {
				notifyErrorListeners("Each branch of a function must initialize all out parameters",
				                     ctx->Return()->getSymbol());
			}
		}

		return 0;
	}

	std::any AstrumSema::visitVersionSelectionStatement(
	    AstrumParser::VersionSelectionStatementContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitVersionSelectionStatementBlock(
	    AstrumParser::VersionSelectionStatementBlockContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitScopeSafeCompoundStatement(
	    AstrumParser::ScopeSafeCompoundStatementContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitTryBlock(AstrumParser::TryBlockContext* ctx) {
		if (!firstPass)
			initStates.push(initStates.top());

		visitChildren(ctx);

		if (!firstPass)
			initStates.pop();

		return 0;
	}

	std::any AstrumSema::visitExceptionHandler(AstrumParser::ExceptionHandlerContext* ctx) {
		isCatch = true;
		visitChildren(ctx);
		isCatch = false;
		return 0;
	}

	std::any AstrumSema::visitExceptionDeclaration(AstrumParser::ExceptionDeclarationContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitExpression(AstrumParser::ExpressionContext* ctx) {
		visitChildren(ctx);
		if (!typeStack.empty())
			contextTypes[ctx] = typeStack.top();
		return 0;
	}

	std::any AstrumSema::visitRangeExpression(AstrumParser::RangeExpressionContext* ctx) {
		visitChildren(ctx);
		if (ctx->DoubleDot() || ctx->DoubleDotEqual())
			typeStack.push("System.Range");
		return 0;
	}

	std::any AstrumSema::visitRangeExpressionStart(AstrumParser::RangeExpressionStartContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitRangeExpressionEnd(AstrumParser::RangeExpressionEndContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitSwitchExpression(AstrumParser::SwitchExpressionContext* ctx) {
		if (!firstPass && ctx->Switch())
			currentSwitchData.push({0, ctx->switchExpressionBranch().size()});

		visitChildren(ctx);

		if (ctx->Switch()) {
			if (ctx->theTypeId()) {
				typeStack.push(contextTypes[ctx->theTypeId()]);
			} else {
				typeStack.push(contextTypes[ctx->switchExpressionBranch(0)->expression()]);
			}
			if (!firstPass)
				currentSwitchData.pop();
		}

		return 0;
	}

	std::any AstrumSema::visitSwitchExpressionBranch(
	    AstrumParser::SwitchExpressionBranchContext* ctx) {
		symbolContexts.push(symbolContexts.top());
		if (firstPass == functionBody > 0) {
			auto pattern = ctx->patternList()->pattern(0);
			if (pattern->theTypeId() && pattern->getText() != "_") {
				auto parent = static_cast<AstrumParser::SwitchExpressionContext*>(ctx->parent);
				auto type   = pattern->theTypeId()->getText();
				if (auto pos = type.find('<'); pos != std::string::npos) {
					type = type.substr(0, pos);
				}
				symbolTable[!pattern->Identifier().empty()
				                ? pattern->Identifier(0)->getText()
				                : parent->threeWayComparisonExpression()->getText()] = type;
			}
		}
		if (!firstPass) {
			auto switchData = currentSwitchData.top();
			if (switchData.second - switchData.first > 1 && ctx->patternList()->getText() == "_") {
				notifyErrorListeners("Default branch must be last in the switch",
				                     ctx->patternList()->getStart());
			}
			++currentSwitchData.top().first;
		}

		visitChildren(ctx);

		symbolContexts.pop();
		return 0;
	}

	std::any AstrumSema::visitPowerExpression(AstrumParser::PowerExpressionContext* ctx) {
		if (!checkForCurrentPass())
			return 0;

		visitChildren(ctx);

		if (ctx->Op10()) {
			tryToAddTypeInStackFromOperator(ctx->Op10()->getText());
		}

		return 0;
	}

	std::any AstrumSema::visitMultiplicativeExpression(
	    AstrumParser::MultiplicativeExpressionContext* ctx) {
		if (!checkForCurrentPass())
			return 0;

		visitChildren(ctx);

		if (ctx->Op9()) {
			tryToAddTypeInStackFromOperator(ctx->Op9()->getText());
		}

		return 0;
	}

	std::any AstrumSema::visitAdditiveExpression(AstrumParser::AdditiveExpressionContext* ctx) {
		if (!checkForCurrentPass())
			return 0;

		visitChildren(ctx);

		if (ctx->Op8()) {
			tryToAddTypeInStackFromOperator(ctx->Op8()->getText());
		}

		return 0;
	}

	std::any AstrumSema::visitShiftExpression(AstrumParser::ShiftExpressionContext* ctx) {
		if (!checkForCurrentPass())
			return 0;

		visitChildren(ctx);

		if (ctx->shiftOperator() && ctx->shiftOperator()->Op7()) {
			tryToAddTypeInStackFromOperator(ctx->shiftOperator()->Op7()->getText());
		}

		return 0;
	}

	std::any AstrumSema::visitThreeWayComparisonExpression(
	    AstrumParser::ThreeWayComparisonExpressionContext* ctx) {
		visitChildren(ctx);

		if (ctx->Spaceship()) {
			typeStack.push("std.strong_ordering");
		}

		return 0;
	}

	std::any AstrumSema::visitRelationalExpression(AstrumParser::RelationalExpressionContext* ctx) {
		visitChildren(ctx);

		if (!ctx->relationalExpression().empty() || ctx->Is() || ctx->In()) {
			typeStack.push("bool");
			if (ctx->Is()) {
				if (isCondition && firstPass) {
					auto patterns = ctx->patternList();
					auto pattern  = patterns->pattern()[0];
					auto ops      = patterns->patternCombinationOperator();
					if (!(pattern->theTypeId() && (pattern->not_() && !pattern->LeftBrace() ||
					                               pattern->getText() == "_")) &&
					    std::all_of(ops.begin(), ops.end(), [](auto op) { return !op->Or(); })) {
						ifPrerequisites[currentIfStatement].push_back(ctx);
						auto type = pattern->theTypeId()->getText();
						if (auto pos = type.find('<'); pos != std::string::npos) {
							type = type.substr(0, pos);
						}
						symbolTable[!pattern->Identifier().empty()
						                ? pattern->Identifier(0)->getText()
						                : ctx->threeWayComparisonExpression(0)->getText()] = type;
					}
				}
			}
		} else if (ctx->As()) {
			typeStack.push(contextTypes[ctx->theTypeId()]);
		}

		return 0;
	}

	std::any AstrumSema::visitEqualityExpression(AstrumParser::EqualityExpressionContext* ctx) {
		visitChildren(ctx);

		if (!ctx->equalityExpression().empty()) {
			typeStack.push("bool");
		}

		return 0;
	}

	std::any AstrumSema::visitAndExpression(AstrumParser::AndExpressionContext* ctx) {
		if (!checkForCurrentPass())
			return 0;

		visitChildren(ctx);

		if (ctx->Op4()) {
			tryToAddTypeInStackFromOperator(ctx->Op4()->getText());
		}

		return 0;
	}

	std::any AstrumSema::visitExclusiveOrExpression(
	    AstrumParser::ExclusiveOrExpressionContext* ctx) {
		if (!checkForCurrentPass())
			return 0;

		visitChildren(ctx);

		if (ctx->Op3()) {
			tryToAddTypeInStackFromOperator(ctx->Op3()->getText());
		}

		return 0;
	}

	std::any AstrumSema::visitInclusiveOrExpression(
	    AstrumParser::InclusiveOrExpressionContext* ctx) {
		if (!checkForCurrentPass())
			return 0;

		visitChildren(ctx);

		if (ctx->Op2()) {
			tryToAddTypeInStackFromOperator(ctx->Op2()->getText());
		}

		return 0;
	}

	std::any AstrumSema::visitLogicalAndExpression(AstrumParser::LogicalAndExpressionContext* ctx) {
		visitChildren(ctx);

		if (!ctx->And().empty()) {
			typeStack.push("bool");
		}

		return 0;
	}

	std::any AstrumSema::visitLogicalOrExpression(AstrumParser::LogicalOrExpressionContext* ctx) {
		visitChildren(ctx);

		if (!ctx->Or().empty()) {
			typeStack.push("bool");
		}

		return 0;
	}

	std::any AstrumSema::visitNullCoalescingExpression(
	    AstrumParser::NullCoalescingExpressionContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitNullCoalescingBranch(AstrumParser::NullCoalescingBranchContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitConditionalExpression(
	    AstrumParser::ConditionalExpressionContext* ctx) {
		visitChildren(ctx);

		if (!typeStack.empty())
			contextTypes[ctx] = typeStack.top();

		return 0;
	}

	std::any AstrumSema::visitConstantExpression(AstrumParser::ConstantExpressionContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitAssignmentExpression(AstrumParser::AssignmentExpressionContext* ctx) {
		if (ctx->initializerClause()) {
			if (isCondition)
				notifyErrorListeners(
				    "Cannot to use assignment operators in the condition. Maybe you mean the "
				    "equality operator?",
				    ctx->assignmentOperator()->getStart());
			if (ctx->assignmentOperator()->Assign()) {
				isAssignment      = true;
				currentAssignment = ctx;
			}
			lvalue = true;
		}

		visitChildren(ctx);

		if (ctx->initializerClause()) {
			isAssignment = false;
		}
		currentAssignment = nullptr;

		return 0;
	}

	std::any AstrumSema::visitInitializerClause(AstrumParser::InitializerClauseContext* ctx) {
		lvalue = false;

		visitChildren(ctx);

		if (!typeStack.empty())
			contextTypes[ctx] = typeStack.top();

		return 0;
	}

	std::any AstrumSema::visitBracedInitList(AstrumParser::BracedInitListContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitInitializerList(AstrumParser::InitializerListContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitInitializerPart(AstrumParser::InitializerPartContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitExpressionList(AstrumParser::ExpressionListContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitExpressionListPart(AstrumParser::ExpressionListPartContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitThrowExpression(AstrumParser::ThrowExpressionContext* ctx) {
		if (!isCatch && !ctx->assignmentExpression())
			notifyErrorListeners("Cannot to re-throw exception outside the catch block",
			                     ctx->start);

		return visitChildren(ctx);
	}

	std::any AstrumSema::visitIdExpression(AstrumParser::IdExpressionContext* ctx) {
		if (!checkForCurrentPass())
			return 0;

		visitChildren(ctx);

		if (auto uq = ctx->unqualifiedId()) {
			std::string txt;
			if (auto id = uq->Identifier())
				txt = id->getText();
			else if (auto tid = uq->templateId()) {
				AstrumParser::TemplateArgumentListContext* args = nullptr;
				if (auto stid = tid->simpleTemplateId()) {
					txt  = stid->templateName()->getText();
					args = stid->templateArgumentList();
				} else {
					txt = tid->operatorTemplateId()->operatorFunctionId()->getText();
					if (!txt.ends_with("new") && !txt.ends_with("delete"))
						StringReplace(txt, " ", "");
					args = tid->operatorTemplateId()->templateArgumentList();
				}
				if (args) {
					currentSubtype = args->templateArgument(0)->getText();
					currentSubtype = currentSubtype.substr(0, currentSubtype.find(','));
				}
			} else if (auto op = uq->operatorFunctionId()) {
				txt = op->getText();
				if (!txt.ends_with("new") && !txt.ends_with("delete"))
					StringReplace(txt, " ", "");
			} else if (auto op = uq->conversionFunctionId()) {
				txt = op->getText();
			} else if (uq->Tilde()) {
				if (auto name = uq->className()) {
					txt = uq->getText();
				}
			}
			if (aliasTable.contains(txt)) {
				txt      = aliasTable[txt];
				auto pos = txt.find('<');
				if (pos != txt.npos && !txt.starts_with("std.tuple<")) {
					currentSubtype = txt.substr(pos + 1, txt.rfind('>') - pos - 1);
					currentSubtype = currentSubtype.substr(0, currentSubtype.find(','));
					txt            = txt.substr(0, pos);
				}
				typeStack.push(txt);
			} else if (typeset.contains(txt)) {
				typeStack.push(txt);
			} else if (symbolTable.contains(txt)) {
				txt = symbolTable[txt];
				if (aliasTable.contains(txt))
					txt = aliasTable[txt];
				auto pos = txt.find('<');
				if (pos != txt.npos && !txt.starts_with("std.tuple<")) {
					currentSubtype = txt.substr(pos + 1, txt.rfind('>') - pos - 1);
					currentSubtype = currentSubtype.substr(0, currentSubtype.find(','));
					txt            = txt.substr(0, pos);
				}
				typeStack.push(txt);
			}
		}
		if (!typeStack.empty()) {
			contextTypes[ctx] = typeStack.top();
		}

		return 0;
	}

	std::any AstrumSema::visitQualifiedId(AstrumParser::QualifiedIdContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitUnqualifiedId(AstrumParser::UnqualifiedIdContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitUnaryExpression(AstrumParser::UnaryExpressionContext* ctx) {
		unaryExpressions.push(ctx);
		if (checkForCurrentPass()) {
			if (auto upo = ctx->unaryPrefixOperator()) {
				literalMinus = upo->Minus();
			} else if (ctx->Out()) {
				isOutExpression = true;
				auto id         = ctx->unaryExpressionTail()->getText();
				initStates.top().definitelyAssigned.insert(id);
			}
		}

		visitChildren(ctx);

		unaryExpressions.pop();

		if (checkForCurrentPass()) {
			literalMinus    = false;
			isOutExpression = false;
			if (ctx->Sizeof() || ctx->unaryExpressionTail()->Sizeof() ||
			    ctx->unaryExpressionTail()->Alignof() || ctx->unaryExpressionTail()->Offsetof()) {
				typeStack.push("usize");
			} else if (ctx->Nameof() || ctx->unaryExpressionTail()->Nameof()) {
				typeStack.push("Str");
			} else if (ctx->unaryCustomOperator()) {
				tryToAddTypeInStackFromOperator(ctx->unaryCustomOperator()->getText());
			}
		}

		return 0;
	}

	std::any AstrumSema::visitUnaryExpressionTail(AstrumParser::UnaryExpressionTailContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitNewExpression(AstrumParser::NewExpressionContext* ctx) {
		visitChildren(ctx);
		typeStack.push(contextTypes[ctx->theTypeId()]);
		return 0;
	}

	std::any AstrumSema::visitStackallocExpression(AstrumParser::StackallocExpressionContext* ctx) {
		visitChildren(ctx);

		typeStack.push(contextTypes[ctx->theTypeId()]);
		if (!firstPass) {
			if (!functionBody)
				notifyErrorListeners("Stackalloc expression can be used only in the function body",
				                     ctx->Stackalloc()->getSymbol());

			stackallocPrerequisites[currentStatement].emplace_back(ctx);
		}

		return 0;
	}

	std::any AstrumSema::visitMemorySpaceSetter(AstrumParser::MemorySpaceSetterContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitNewInitializer(AstrumParser::NewInitializerContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitFullPostfixExpression(
	    AstrumParser::FullPostfixExpressionContext* ctx) {
		if (!checkForCurrentPass())
			return 0;

		visitChildren(ctx);

		if (!typeStack.empty() && !typeStack.top().empty()) {
			if (ctx->unaryCustomOperator()) {
				tryToAddTypeInStackFromOperator(ctx->unaryCustomOperator()->getText());
			}
			contextTypes[ctx] = typeStack.top();
		}

		return 0;
	}

	std::any AstrumSema::visitPostfixExpression(AstrumParser::PostfixExpressionContext* ctx) {
		if ((firstPass || functionBody && !firstPass) && ctx->Question()) {
			if (lvalue) {
				conditionalPrerequisites[currentStatement].push_back(ctx->postfixExpression());
			}
			if (!optionalChains.contains(unaryExpressions.top())) {
				optionalChains.insert_or_assign(unaryExpressions.top(), 1);
			} else {
				optionalChains[unaryExpressions.top()]++;
			}
			if (!optionalChains.contains(ctx->postfixExpression())) {
				optionalChains.insert_or_assign(ctx->postfixExpression(), 1);
			} else {
				optionalChains[ctx->postfixExpression()]++;
			}
		}

		if (checkForCurrentPass()) {
			if (auto upo = ctx->unaryPostfixOperator()) {
				if (!upo->Star().empty() || !upo->DoubleStar().empty()) {
					if (unsafeDepth <= 0)
						notifyErrorListeners(
						    "Cannot to use dereferencing of the raw pointer in the safe context",
						    upo->getStart());
				} else if (upo->Amp()) {
					if (unsafeDepth <= 0)
						notifyErrorListeners("Cannot to get raw address in the safe context",
						                     upo->getStart());
				}
			} else if (ctx->Dot()) {
				if (unsafeDepth == 0) {
					auto txt = ctx->getText();
					auto pos = txt.rfind('.');
					if (cppParser.unsafeVariables.contains(txt)) {
						notifyErrorListeners("Cannot to use unsafe variable in the safe context",
						                     ctx->idExpression()->getStart());
					} else {
						txt = txt.substr(0, pos);
						if (cppParser.unsafeVariables.contains(txt))
							notifyErrorListeners(
							    "Cannot to use unsafe variable in the safe context",
							    ctx->postfixExpression()->getStart());
					}
				}
			}
		}

		visitChildren(ctx);

		if (firstPass || functionBody && !firstPass) {
			if (auto expr = ctx->postfixExpression()) {
				if (optionalChains.contains(expr)) {
					if (!optionalChains.contains(ctx)) {
						optionalChains.insert_or_assign(ctx, 1);
					} else {
						optionalChains[ctx]++;
					}
				}
			}
			if (functionBody)
				return 0;
		}

		if (auto upo = ctx->unaryPostfixOperator()) {
			if (!upo->Star().empty() || !upo->DoubleStar().empty()) {
				if (!typeStack.empty()) {
					if (typeStack.top().starts_with('*'))
						typeStack.push(
						    typeStack.top().substr(typeStack.top().find_first_not_of('*')));
					else {
						if (!currentSubtype.empty())
							typeStack.push(currentSubtype);
						else
							typeStack.push(functionTable[typeStack.top() + ".operator*"]);
					}
				}
			}
			if (upo->Amp()) {
				typeStack.push("*" + typeStack.top());
			}
		} else if (ctx->Dot()) {
			if (unsafeDepth == 0) {
				std::string txt = contextTypes[ctx->postfixExpression()] + "." +
				                  ctx->getText().substr(ctx->getText().rfind('.') + 1);
				if (cppParser.unsafeVariables.contains(txt))
					notifyErrorListeners("Cannot to use unsafe variable in the safe context",
					                     ctx->getStop());
			}
			if (auto literal = ctx->IntegerLiteral()) {
				if (!typeStack.empty()) {
					if (typeStack.top().starts_with("std.tuple<")) {
						auto typestr = typeStack.top().substr(typeStack.top().find('<') + 1);
						typestr      = typestr.substr(0, typestr.rfind('>'));
						auto types   = StringSplit(typestr, ',');
						auto index   = std::stoi(literal->getText());
						if (types.size() > index) {
							auto type = types[index];
							StringTrim(type);
							auto pos = type.find('<');
							if (pos != type.npos && !type.starts_with("std.tuple")) {
								auto subtype   = type.substr(pos + 1, type.rfind('>') - pos - 1);
								subtype        = subtype.substr(0, subtype.find(','));
								currentSubtype = subtype;
								type           = type.substr(0, pos);
							}
							typeStack.push(type);
						}
					} else {
						auto type = symbolTable[typeStack.top() + "." + literal->getText()];
						auto pos  = type.find('<');
						if (pos != type.npos && !type.starts_with("std.tuple")) {
							auto subtype   = type.substr(pos + 1, type.rfind('>') - pos - 1);
							subtype        = subtype.substr(0, subtype.find(','));
							currentSubtype = subtype;
							type           = type.substr(0, pos);
						}
						typeStack.push(type);
					}
				}
			} else if (ctx->Type()) {
				typeStack.push("System.Type");
			} else {
				auto txt    = ctx->getText();
				auto id     = txt;
				auto dotpos = id.rfind('.');
				if (dotpos != id.npos)
					id = id.substr(dotpos + 1);
				auto tplpos = id.find('<');
				if (tplpos != id.npos) {
					auto ptplpos        = id.rfind('>');
					auto tpl            = id.substr(tplpos + 1, ptplpos - tplpos - 1);
					currentTemplateArgs = StringSplit(tpl, ',');
					for (auto& arg : currentTemplateArgs) {
						auto atplpos = arg.find('<');
						if (atplpos != arg.npos)
							arg = arg.substr(0, atplpos);
						StringTrim(arg);
					}
					id = id.substr(0, tplpos);
				} else {
					currentTemplateArgs.clear();
				}

				if (aliasTable.contains(txt)) {
					typeStack.push(aliasTable[txt]);
				} else if (typeset.contains(txt)) {
					typeStack.push(txt);
				} else if (symbolTable.contains(txt)) {
					txt      = symbolTable[txt];
					auto pos = txt.find('<');
					if (pos != txt.npos && !txt.starts_with("std.tuple")) {
						auto subtype   = txt.substr(pos + 1, txt.rfind('>') - pos - 1);
						subtype        = subtype.substr(0, subtype.find(','));
						currentSubtype = subtype;
						txt            = txt.substr(0, pos);
					}
					if (aliasTable.contains(txt))
						txt = aliasTable[txt];
					pos = txt.find('<');
					if (pos != txt.npos && !txt.starts_with("std.tuple")) {
						auto subtype   = txt.substr(pos + 1, txt.rfind('>') - pos - 1);
						subtype        = subtype.substr(0, subtype.find(','));
						currentSubtype = subtype;
						txt            = txt.substr(0, pos);
					}
					typeStack.push(txt);
				} else if (!typeStack.empty() && ctx->idExpression()) {
					txt      = symbolTable[typeStack.top() + "." + id];
					auto pos = txt.find('<');
					if (pos != txt.npos && !txt.starts_with("std.tuple")) {
						auto subtype   = txt.substr(pos + 1, txt.rfind('>') - pos - 1);
						subtype        = subtype.substr(0, subtype.find(','));
						currentSubtype = subtype;
						txt            = txt.substr(0, pos);
					}
					if (aliasTable.contains(txt))
						txt = aliasTable[txt];
					pos = txt.find('<');
					if (pos != txt.npos && !txt.starts_with("std.tuple")) {
						auto subtype   = txt.substr(pos + 1, txt.rfind('>') - pos - 1);
						subtype        = subtype.substr(0, subtype.find(','));
						currentSubtype = subtype;
						txt            = txt.substr(0, pos);
					}
					typeStack.push(txt);
				}
			}
		} else if (ctx->LeftParen() && ctx->postfixExpression()) {
			std::string funcname;
			auto txt    = ctx->postfixExpression()->getText();
			auto dotpos = txt.rfind('.');
			auto tplpos = txt.npos;
			if (dotpos != txt.npos) {
				tplpos = txt.find('<', dotpos + 1);
			} else {
				tplpos = txt.find('<');
			}
			if (tplpos != txt.npos) {
				auto ptplpos        = txt.rfind('>');
				auto tpl            = txt.substr(tplpos + 1, ptplpos - tplpos - 1);
				currentTemplateArgs = StringSplit(tpl, ',');
				for (auto& arg : currentTemplateArgs) {
					auto atplpos = arg.find('<');
					if (atplpos != arg.npos)
						arg = arg.substr(0, atplpos);
					StringTrim(arg);
				}
			} else {
				currentTemplateArgs.clear();
			}
			if (dotpos != txt.npos && tplpos != txt.npos && dotpos < tplpos ||
			    dotpos == txt.npos && tplpos != txt.npos)
				txt = txt.substr(0, tplpos);
			auto txt2  = txt;
			auto txt3  = txt;
			bool found = true;
			if (dotpos != std::string::npos)
				txt2 = txt2.substr(dotpos + 1);
			if (!typeStack.empty()) {
				if (auto expr = ctx->postfixExpression()->postfixExpression()) {
					if (contextTypes.contains(expr))
						typeStack.push(contextTypes[expr]);
					txt3 = typeStack.top() + "." + txt2;
				}
			}
			if (aliasTable.contains(txt)) {
				typeStack.push(aliasTable[txt]);
				funcname = txt;
			} else if (typeset.contains(txt)) {
				typeStack.push(txt);
				funcname = txt;
			} else if (functionTable.contains(txt)) {
				funcname = txt;
				txt      = functionTable[txt];
				if (aliasTable.contains(txt))
					txt = aliasTable[txt];
				else if (!typeset.contains(txt) && txt != "void") {
					auto pos = txt.find('<');
					if (pos != txt.npos && !txt.starts_with("std.tuple")) {
						txt          = txt.substr(0, pos);
						auto subtype = txt.substr(pos + 1, txt.rfind('>') - pos - 1);
						subtype      = subtype.substr(0, subtype.find(','));
						StringTrim(subtype);
						if (!typeset.contains(subtype)) {
							if (!currentTemplateArgs.empty())
								subtype = currentTemplateArgs[0].substr(
								    0, currentTemplateArgs[0].find('<'));
							if (!typeset.contains(subtype))
								subtype = currentSubtype;
						}
						if (typeset.contains(subtype))
							currentSubtype = subtype;
					}
					if (!typeset.contains(txt)) {
						if (!currentTemplateArgs.empty())
							txt =
							    currentTemplateArgs[0].substr(0, currentTemplateArgs[0].find('<'));
						if (!typeset.contains(txt) && !currentSubtype.empty())
							txt = currentSubtype;
						if (!typeset.contains(txt) && !txt.starts_with("std.tuple"))
							found = false;
					}
					if (aliasTable.contains(txt))
						txt = aliasTable[txt];
				}
				typeStack.push(txt);
			} else if (!typeStack.empty() && functionTable.contains(txt2)) {
				funcname = txt2;
				txt2     = functionTable[txt2];
				if (aliasTable.contains(txt2))
					txt2 = aliasTable[txt2];
				else if (!typeset.contains(txt2) && txt2 != "void") {
					auto pos = txt2.find('<');
					if (pos != txt2.npos && !txt.starts_with("std.tuple")) {
						txt2         = txt2.substr(0, pos);
						auto subtype = txt2.substr(pos + 1, txt2.rfind('>') - pos - 1);
						subtype      = subtype.substr(0, subtype.find(','));
						StringTrim(subtype);
						if (!typeset.contains(subtype)) {
							if (!currentTemplateArgs.empty())
								subtype = currentTemplateArgs[0].substr(
								    0, currentTemplateArgs[0].find('<'));
							if (!typeset.contains(subtype))
								subtype = currentSubtype;
						}
						if (typeset.contains(subtype))
							currentSubtype = subtype;
					}
					if (!typeset.contains(txt2)) {
						if (!currentTemplateArgs.empty())
							txt2 =
							    currentTemplateArgs[0].substr(0, currentTemplateArgs[0].find('<'));
						if (!typeset.contains(txt2) && !currentSubtype.empty())
							txt2 = currentSubtype;
						if (!typeset.contains(txt2) && !txt2.starts_with("std.tuple"))
							found = false;
					}
					if (aliasTable.contains(txt2))
						txt2 = aliasTable[txt2];
				}
				typeStack.push(txt2);
			} else if (!typeStack.empty() && functionTable.contains(txt3)) {
				funcname = txt3;
				txt3     = functionTable[txt3];
				if (aliasTable.contains(txt3))
					txt3 = aliasTable[txt3];
				else if (!typeset.contains(txt3) && txt3 != "void") {
					auto pos = txt3.find('<');
					if (pos != txt3.npos && !txt.starts_with("std.tuple")) {
						txt3         = txt3.substr(0, pos);
						auto subtype = txt3.substr(pos + 1, txt3.rfind('>') - pos - 1);
						subtype      = subtype.substr(0, subtype.find(','));
						StringTrim(subtype);
						if (!typeset.contains(subtype)) {
							if (!currentTemplateArgs.empty())
								subtype = currentTemplateArgs[0].substr(
								    0, currentTemplateArgs[0].find('<'));
							if (!typeset.contains(subtype))
								subtype = currentSubtype;
						}
						if (typeset.contains(subtype))
							currentSubtype = subtype;
					}
					if (!typeset.contains(txt3)) {
						if (!currentTemplateArgs.empty())
							txt3 =
							    currentTemplateArgs[0].substr(0, currentTemplateArgs[0].find('<'));
						if (!typeset.contains(txt3) && !currentSubtype.empty())
							txt3 = currentSubtype;
						if (!typeset.contains(txt3) && !txt3.starts_with("std.tuple"))
							found = false;
					}
					if (aliasTable.contains(txt3))
						txt3 = aliasTable[txt3];
				}
				typeStack.push(txt3);
			}

			if (auto exprs = ctx->expressionList()) {
				bool named = false;
				std::unordered_set<std::string> knownParams;
				if (cppParser.parametersTable.contains(funcname)) {
					for (const auto& func : cppParser.parametersTable[funcname]) {
						auto params = StringSplit(func, ",,");
						for (const auto& param : params) {
							knownParams.insert(param.substr(0, param.find('=')));
						}
					}
				}
				if (activeDefaultParams.contains(funcname)) {
					for (const auto& param : activeDefaultParams[funcname]) {
						knownParams.insert(param.first);
					}
				}
				funcname += "/";
				bool first = true;
				for (auto part : exprs->expressionListPart()) {
					std::string paramType;
					if (contextTypes.contains(part->conditionalExpression()))
						paramType = contextTypes[part->conditionalExpression()];

					if (!first) {
						funcname += ",,";
					}

					first = false;
					funcname += paramType;
					if (unsafeDepth <= 0 && cppParser.unsafeFunctions.contains(funcname)) {
						notifyErrorListeners("Cannot to call unsafe function in safe context",
						                     ctx->LeftParen()->getSymbol());
					}

					if (!found) {
						found = true;
						typeStack.push(paramType);
					}

					if (auto id = part->Identifier()) {
						if (part->Out()) {
							parameterPrerequisites[currentStatement].emplace_back(
							    id->getText(), part->theTypeId());
						} else {
							named = true;
							if (!knownParams.contains(id->getText()))
								notifyErrorListeners("Unknown argument name", id->getSymbol());
						}
					} else if (named) {
						notifyErrorListeners(
						    "Named arguments can only appear after positional arguments",
						    part->getStart());
					}
				}
			}
		} else if (ctx->LeftBracket() && !typeStack.empty()) {
			typeStack.push(contextTypes[ctx->postfixExpression()]);
			if (functionTable.contains(typeStack.top() + "._operator_subscript")) {
				auto type = functionTable[typeStack.top() + "._operator_subscript"];
				if (aliasTable.contains(type))
					type = aliasTable[type];
				if (!typeset.contains(type) && !currentSubtype.empty())
					type = currentSubtype;
				typeStack.push(type);
			}
		}
		if (!typeStack.empty() && !typeStack.top().empty()) {
			contextTypes[ctx] = typeStack.top();
		}

		return 0;
	}

	std::any AstrumSema::visitTupleExpression(AstrumParser::TupleExpressionContext* ctx) {
		visitChildren(ctx);

		if (!ctx->conditionalExpression().empty()) {
			std::string type = "std.tuple<";
			bool first       = true;
			for (auto expr : ctx->conditionalExpression()) {
				if (!first)
					type += ",";
				first = false;
				type += contextTypes[expr];
			}
			type += ">";
			typeStack.push(type);
		}

		return 0;
	}

	std::any AstrumSema::visitMethodBindingExpression(
	    AstrumParser::MethodBindingExpressionContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitMethodOwnerExpression(
	    AstrumParser::MethodOwnerExpressionContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitMethodName(AstrumParser::MethodNameContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitPrimaryExpression(AstrumParser::PrimaryExpressionContext* ctx) {
		if (ctx->Super() && (currentType.empty() || currentTypeKind.top() != TypeKind::Class))
			notifyErrorListeners("Super keyword can using only in the derived class",
			                     ctx->Super()->getSymbol());
		if (ctx->Field() && propertyBody)
			fieldAssignment = true;

		if (!checkForCurrentPass())
			return 0;

		if (unsafeDepth == 0 && ctx->getText().find("__Unsafe") != std::string::npos)
			notifyErrorListeners("Cannot to use unsafe data in the safe context", ctx->getStart());

		if (lvalue && ctx->idExpression() && ctx->idExpression()->unqualifiedId()) {
			auto uid = ctx->idExpression()->unqualifiedId();
			auto txt = uid->getText();
			if (initStates.top().potentiallyAssigned.contains(txt) &&
			    !initStates.top().definitelyAssigned.contains(txt)) {
				if (isAssignment && loopDepth <= 0) {
					initStates.top().definitelyAssigned.insert(txt);
					uninitConstructs.insert(currentAssignment);
				} else {
					notifyErrorListeners("Cannot to use uninitialized value", uid->getStart());
				}
			} else if (unsafeDepth == 0) {
				if (cppParser.unsafeVariables.contains(txt)) {
					notifyErrorListeners("Cannot to use unsafe variable in the safe context",
					                     uid->Identifier()->getSymbol());
				}
			}
		} else if (ctx->idExpression() && ctx->idExpression()->unqualifiedId()) {
			auto uid = ctx->idExpression()->unqualifiedId();
			auto txt = uid->getText();
			if (!isOutExpression && !initStates.empty() &&
			    initStates.top().potentiallyAssigned.contains(txt) &&
			    !initStates.top().definitelyAssigned.contains(txt)) {
				notifyErrorListeners("Cannot to use uninitialized value", uid->getStart());
			} else if (unsafeDepth == 0) {
				if (cppParser.unsafeVariables.contains(txt)) {
					notifyErrorListeners("Cannot to use unsafe variable in the safe context",
					                     uid->Identifier()->getSymbol());
				}
			}
		}

		visitChildren(ctx);

		if (ctx->This()) {
			typeStack.push(currentType);
		} else if (ctx->Type()) {
			typeStack.push("System.Type");
		}

		return 0;
	}

	std::any AstrumSema::visitFoldExpression(AstrumParser::FoldExpressionContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitFoldLeftExpression(AstrumParser::FoldLeftExpressionContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitFoldRightExpression(AstrumParser::FoldRightExpressionContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitDeclvalExpression(AstrumParser::DeclvalExpressionContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitLambdaExpression(AstrumParser::LambdaExpressionContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitLambdaCaptureList(AstrumParser::LambdaCaptureListContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitLambdaCaptureClause(AstrumParser::LambdaCaptureClauseContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitCapture(AstrumParser::CaptureContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitLambdaDeclarator(AstrumParser::LambdaDeclaratorContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitLambdaBody(AstrumParser::LambdaBodyContext* ctx) {
		functionBody++;
		visitChildren(ctx);
		functionBody--;
		return 0;
	}

	std::any AstrumSema::visitTheTypeId(AstrumParser::TheTypeIdContext* ctx) {
		currentSubtype.clear();
		visitChildren(ctx);

		if (!ctx->VertLine().empty()) {
			contextTypes[ctx] = "Union" + std::to_string(ctx->VertLine().size() + 1);
		} else if (!typeStack.empty()) {
			contextTypes[ctx] = typeStack.top();
			if (!currentSubtype.empty())
				contextTypes[ctx] += "<" + currentSubtype + ">";
		}

		return 0;
	}

	std::any AstrumSema::visitSingleTypeId(AstrumParser::SingleTypeIdContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitTypePostfix(AstrumParser::TypePostfixContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitArrayDeclarator(AstrumParser::ArrayDeclaratorContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitPointerOperator(AstrumParser::PointerOperatorContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitPointerOperatorSeq(AstrumParser::PointerOperatorSeqContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitTypeSpecifierSeq(AstrumParser::TypeSpecifierSeqContext* ctx) {
		if (unsafeDepth <= 0) {
			if (!ctx->pointerOperator().empty()) {
				notifyErrorListeners("Cannot to use raw pointers in the safe context",
				                     ctx->pointerOperator(0)->getStart());
			}
		}

		return visitChildren(ctx);
	}

	std::any AstrumSema::visitTypeSpecifier(AstrumParser::TypeSpecifierContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitTrailingTypeSpecifier(
	    AstrumParser::TrailingTypeSpecifierContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitTypeNameSpecifier(AstrumParser::TypeNameSpecifierContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitCvQualifierSeq(AstrumParser::CvQualifierSeqContext* ctx) { return 0; }

	std::any AstrumSema::visitCvQualifier(AstrumParser::CvQualifierContext* ctx) { return 0; }

	std::any AstrumSema::visitTypename(AstrumParser::TypenameContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitClassName(AstrumParser::ClassNameContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitDecltypeSpecifier(AstrumParser::DecltypeSpecifierContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitDecaySpecifier(AstrumParser::DecaySpecifierContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitEnumName(AstrumParser::EnumNameContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitSimpleTypeSpecifier(AstrumParser::SimpleTypeSpecifierContext* ctx) {
		if (unsafeDepth <= 0) {
			if (ctx->typename_()) {
				auto txt = ctx->getText();
				if (txt.find('<') != txt.npos)
					txt = txt.substr(0, txt.rfind('<'));
				if (cppParser.unsafeTypes.contains(txt))
					notifyErrorListeners("Cannot to use unsafe type in the safe context",
					                     ctx->typename_()->getStart());
			}
		}
		if (ctx->Self() && !isTypeDefinitionBody())
			notifyErrorListeners("Cannot to use self type alias outside the type body",
			                     ctx->Self()->getSymbol());

		visitChildren(ctx);

		if (!ctx->namedTupleField().empty()) {
			auto tuple = getNamedTupleId(ctx->getText());
			typeStack.push(tuple);
			if (!typeset.contains(tuple)) {
				typeset.insert(tuple);
				auto access = (currentAccessSpecifier.top() ? *currentAccessSpecifier.top()
				                                            : AccessSpecifier::Public);
				forwardDeclarations.push_back({tuple, {}, {}, access, {0, 0}, ""});
				auto id = tuple;
				if (id.find('.') != id.npos)
					id = id.substr(id.rfind('.') + 1);
				std::vector<std::pair<std::string, AstrumParser::TheTypeIdContext*>> fields;
				int i = 0;
				for (auto field : ctx->namedTupleField()) {
					auto fieldName   = field->Identifier()->getText();
					auto fieldTypeId = field->theTypeId();
					fields.emplace_back(fieldName, fieldTypeId);
					symbolTable.globalSymbolTable[tuple + "." + fieldName] =
					    contextTypes[fieldTypeId];
					symbolTable.globalSymbolTable[tuple + "." + std::to_string(i++)] =
					    contextTypes[fieldTypeId];
				}
				namedTuples[tuple] = NamedTuple {std::move(id), std::move(fields), access};
			}
		} else if (ctx->functionTypeId()) {
			typeStack.push("CppAdvance.FunctionRef");
		} else if (!ctx->theTypeId().empty()) {
			std::string type = "std.tuple<";
			bool first       = true;
			for (auto t : ctx->theTypeId()) {
				if (!first)
					type += ",";
				first = false;
				type += contextTypes[t];
			}
			type += ">";
			typeStack.push(type);
		} else if (auto t = ctx->typename_()) {
			std::string id;
			if (ctx->nestedNameSpecifier())
				id = ctx->nestedNameSpecifier()->getText();
			if (auto cls = t->className()) {
				if (cls->Identifier())
					id += cls->Identifier()->getText();
				else
					id += cls->simpleTemplateId()->templateName()->Identifier()->getText();
			} else
				id += t->simpleTemplateId()->templateName()->Identifier()->getText();
			typeStack.push(id);
		} else {
			typeStack.push(ctx->getText());
		}

		return 0;
	}

	std::any AstrumSema::visitFunctionTypeId(AstrumParser::FunctionTypeIdContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitTypeIdWithSpecification(
	    AstrumParser::TypeIdWithSpecificationContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitNamedTupleField(AstrumParser::NamedTupleFieldContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitNestedNameSpecifier(AstrumParser::NestedNameSpecifierContext* ctx) {
		if (!checkForCurrentPass())
			return 0;

		visitChildren(ctx);

		if (auto name = ctx->typename_()) {
			auto txt = name->getText();
			auto pos = txt.find('<');
			if (pos != txt.npos && !txt.starts_with("std.tuple<")) {
				currentSubtype = txt.substr(pos + 1, txt.rfind('>') - pos - 1);
				txt            = txt.substr(0, pos);
			}
			if (aliasTable.contains(txt)) {
				txt = aliasTable[txt];
				pos = txt.find('<');
				if (pos != txt.npos && !txt.starts_with("std.tuple<")) {
					currentSubtype = txt.substr(pos + 1, txt.rfind('>') - pos - 1);
					currentSubtype = currentSubtype.substr(0, currentSubtype.find(','));
					txt            = txt.substr(0, pos);
				}
				typeStack.push(txt);
			} else if (typeset.contains(txt)) {
				typeStack.push(txt);
			} else if (symbolTable.contains(txt)) {
				txt = symbolTable[txt];
				pos = txt.find('<');
				if (pos != txt.npos && !txt.starts_with("std.tuple<")) {
					currentSubtype = txt.substr(pos + 1, txt.rfind('>') - pos - 1);
					currentSubtype = currentSubtype.substr(0, currentSubtype.find(','));
					txt            = txt.substr(0, pos);
				}
				typeStack.push(txt);
			}
		} else if (auto name = ctx->namespaceName()) {
			auto txt = name->getText();
			if (aliasTable.contains(txt)) {
				typeStack.push(aliasTable[txt]);
			} else if (typeset.contains(txt)) {
				typeStack.push(txt);
			} else if (symbolTable.contains(txt)) {
				typeStack.push(symbolTable[txt]);
			}
		} else if (auto id = ctx->Identifier()) {
			auto txt = ctx->getText();
			txt      = txt.substr(0, txt.rfind('.'));
			if (aliasTable.contains(txt)) {
				typeStack.push(aliasTable[txt]);
			} else if (typeset.contains(txt)) {
				typeStack.push(txt);
			} else if (symbolTable.contains(txt)) {
				txt      = symbolTable[txt];
				auto pos = txt.find('<');
				if (pos != txt.npos && !txt.starts_with("std.tuple<")) {
					currentSubtype = txt.substr(pos + 1, txt.rfind('>') - pos - 1);
					currentSubtype = currentSubtype.substr(0, currentSubtype.find(','));
					txt            = txt.substr(0, pos);
				}
				typeStack.push(txt);
			} else if (!typeStack.empty()) {
				if (symbolTable.contains(typeStack.top() + "." + id->getText())) {
					txt      = symbolTable[typeStack.top() + "." + id->getText()];
					auto pos = txt.find('<');
					if (pos != txt.npos && !txt.starts_with("std.tuple<")) {
						currentSubtype = txt.substr(pos + 1, txt.rfind('>') - pos - 1);
						currentSubtype = currentSubtype.substr(0, currentSubtype.find(','));
						txt            = txt.substr(0, pos);
					}
					typeStack.push(txt);
				}
			}
		} else if (auto id = ctx->simpleTemplateId()) {
			auto txt = ctx->getText();
			txt      = txt.substr(0, txt.rfind('.'));
			auto pos = txt.find('<');
			if (pos != txt.npos) {
				currentSubtype = txt.substr(pos + 1, txt.rfind('>') - pos - 1);
				txt            = txt.substr(0, pos);
			}
			if (aliasTable.contains(txt)) {
				typeStack.push(aliasTable[txt]);
			} else if (typeset.contains(txt)) {
				typeStack.push(txt);
			} else if (symbolTable.contains(txt)) {
				txt      = symbolTable[txt];
				auto pos = txt.find('<');
				if (pos != txt.npos) {
					currentSubtype = txt.substr(pos + 1, txt.rfind('>') - pos - 1);
					currentSubtype = currentSubtype.substr(0, currentSubtype.find(','));
					txt            = txt.substr(0, pos);
				}
				typeStack.push(symbolTable[txt]);
			} else if (!typeStack.empty()) {
				if (symbolTable.contains(typeStack.top() + "." + id->templateName()->getText())) {
					txt      = symbolTable[typeStack.top() + "." + id->templateName()->getText()];
					auto pos = txt.find('<');
					if (pos != txt.npos) {
						currentSubtype = txt.substr(pos + 1, txt.rfind('>') - pos - 1);
						currentSubtype = currentSubtype.substr(0, currentSubtype.find(','));
						txt            = txt.substr(0, pos);
					}
					typeStack.push(txt);
				}
			}
		}

		return 0;
	}

	std::any AstrumSema::visitNamespaceName(AstrumParser::NamespaceNameContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitTemplateName(AstrumParser::TemplateNameContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitSimpleTemplateId(AstrumParser::SimpleTemplateIdContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitOperatorTemplateId(AstrumParser::OperatorTemplateIdContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitTemplateId(AstrumParser::TemplateIdContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitPatternList(AstrumParser::PatternListContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitPatternCombinationOperator(
	    AstrumParser::PatternCombinationOperatorContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitPattern(AstrumParser::PatternContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitPropertyPattern(AstrumParser::PropertyPatternContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitStructDefinition(AstrumParser::StructDefinitionContext* ctx) {
		symbolContexts.push(symbolContexts.top());
		currentAccessSpecifier.push(std::nullopt);
		if (ctx->structHead()->Ref())
			currentTypeKind.push(TypeKind::RefStruct);
		else if (ctx->structHead()->Union())
			currentTypeKind.push(TypeKind::UnionStruct);
		else
			currentTypeKind.push(TypeKind::Struct);

		if (ctx->structHead()->baseClause()) {
			if (ctx->structHead()->Ref())
				notifyErrorListeners(
				    "Ref struct cannot inherit other types or implement interfaces",
				    ctx->structHead()->baseClause()->getStart());
			if (ctx->structHead()->Union())
				notifyErrorListeners("Raw union cannot inherit other types or implement interfaces",
				                     ctx->structHead()->baseClause()->getStart());
		}

		auto namectx     = ctx->structHead()->className();
		bool primaryType = true;
		if (!currentType.empty()) {
			currentType += ".";
			primaryType = false;
		}
		std::string name;
		if (namectx->Identifier())
			name = namectx->Identifier()->getText();
		else
			name = namectx->simpleTemplateId()->templateName()->getText();
		currentType += name;
		typeset.insert(name);
		if (ctx->structHead()->Unsafe()) {
			unsafeDepth++;
		}

		if (firstPass && !functionBody) {
			AstrumParser::TemplateParamsContext* tparams     = ctx->structHead()->templateParams();
			AstrumParser::TemplateArgumentListContext* tspec = nullptr;
			AstrumParser::ConstraintClauseContext* constraints =
			    ctx->structHead()->constraintClause();
			AstrumParser::BaseSpecifierListContext* interfaces     = nullptr;
			AstrumParser::AttributeSpecifierSeqContext* attributes = nullptr;

			if (auto t = namectx->simpleTemplateId()) {
				tspec = t->templateArgumentList();
			}

			if (auto b = ctx->structHead()->baseClause()) {
				interfaces = b->baseSpecifierList();
			}

			if (constraints && !tparams) {
				notifyErrorListeners("Only generic type can have constraints",
				                     constraints->Where()->getSymbol());
			}

			bool isUnsafe = unsafeDepth > 0;

			AstrumParser::AccessSpecifierContext* acc = nullptr;
			if (auto decl = dynamic_cast<AstrumParser::DeclarationContext*>(ctx->parent)) {
				acc        = decl->accessSpecifier();
				attributes = decl->attributeSpecifierSeq();

			} else if (auto decl = dynamic_cast<AstrumParser::StructMemberDeclarationContext*>(
			               ctx->parent)) {
				acc        = decl->accessSpecifier();
				attributes = decl->attributeSpecifierSeq();
			}

			std::optional<AccessSpecifier> access = resolveAccessSpecifier(acc, false);

			if (!access) {
				if (currentAccessSpecifier.top())
					access = currentAccessSpecifier.top();
				else
					access = AccessSpecifier::Internal;
			}

			setupTypeDefinition(currentTypeKind.top(), isUnsafe, access, primaryType);

			auto def = std::make_shared<StructDefinition>(
			    currentTypeKind.top(), name, tparams, tspec, constraints, *access,
			    getCurrentCompilationCondition(),
			    SourcePosition {ctx->getStart()->getLine(),
			                    ctx->getStart()->getCharPositionInLine()},
			    std::vector<VariableDefinition> {}, std::vector<ConstantDefinition> {}, interfaces,
			    std::vector<TypeAliasDefinition> {}, std::vector<PropertyDefinition> {},
			    std::vector<MethodDefinition> {}, std::vector<std::shared_ptr<StructDefinition>> {},
			    std::vector<ForwardDeclaration> {}, std::vector<FunctionDeclaration> {},
			    std::vector<FunctionDefinition> {}, isUnsafe, false, false, false);
			def->attributes = attributes;
			if (!structStack.empty())
				structStack.top()->nestedStructs.push_back(def);
			structStack.push(def);
			if (namectx->simpleTemplateId()) {
				if (namectx->simpleTemplateId()->templateArgumentList()) {
					name += "<{{specialization}}>";
				}
			} else if (auto tparams = ctx->structHead()->templateParams()) {
				name += "<";
				bool first = true;
				for (auto param : tparams->templateParamDeclaration()) {
					if (param->Identifier()) {
						if (!first)
							name += ", ";
						first = false;
						name += param->Identifier()->getText();
					}
					if (param->Ellipsis()) {
						name += "...";
					}
				}
				name += ">";
			}
			currentTypeWithTemplate.push(name);
		}

		visitChildren(ctx);

		auto pos = currentType.rfind('.');
		if (firstPass && !functionBody) {
			if (pos == currentType.npos) {
				isUnsafeTypeDefinition    = false;
				isProtectedTypeDefinition = false;
				isPrivateTypeDefinition   = false;
				finalizeTypeDefinition(structStack.top());
			}
			int idx = 0;
			for (const auto& field : structStack.top()->fields) {
				if (!field.isStatic && !field.isThreadLocal)
					symbolTable.globalSymbolTable[currentType + "." + std::to_string(idx++)] =
					    contextTypes[field.type];
			}
			structStack.pop();
			currentTypeWithTemplate.pop();
		}

		if (ctx->structHead()->Unsafe()) {
			unsafeDepth--;
		}

		if (pos != currentType.npos) {
			currentType = currentType.substr(0, pos);
		} else {
			currentType.clear();
		}
		currentAccessSpecifier.pop();
		currentTypeKind.pop();
		symbolContexts.pop();

		return 0;
	}

	std::any AstrumSema::visitStructHead(AstrumParser::StructHeadContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitStructMemberSpecification(
	    AstrumParser::StructMemberSpecificationContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitMemberDeclarationCompoundStatement(
	    AstrumParser::MemberDeclarationCompoundStatementContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitMemberVersionConditionalDeclaration(
	    AstrumParser::MemberVersionConditionalDeclarationContext* ctx) {
		std::string result;
		if (auto condition = ctx->condition()) {
			auto interval = condition->getSourceInterval();
			for (size_t i = interval.a; i <= interval.b; ++i) {
				auto token = parser->getTokenStream()->get(i);
				if (token->getType() == AstrumParser::Identifier) {
					auto id = token->getText();
					result += "ADV_VERSION_" +
					          (protectedVersions.contains(id)
					               ? ("__" + StringUpper(filename) + "_PROTECTED_")
					               : "") +
					          id;
				} else {
					result += token->getText();
				}
				result += " ";
			}
		} else if (ctx->Debug()) {
			if (ctx->not_())
				result += "!";
			if (auto id = ctx->Identifier()) {
				result += "ADV_DEBUG_";
				result += id->getText();
			} else {
				result += "_DEBUG";
			}
		}
		conditionStack.push(result);

		visitChildren(ctx);

		conditionStack.pop();
		return 0;
	}

	std::any AstrumSema::visitMemberVersionIfDeclaration(
	    AstrumParser::MemberVersionIfDeclarationContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitMemberVersionElseDeclaration(
	    AstrumParser::MemberVersionElseDeclarationContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitStructMemberDeclaration(
	    AstrumParser::StructMemberDeclarationContext* ctx) {
		if (auto spec = ctx->symbolSpecifierSeq()) {
			if (spec->Unsafe() && ++unsafeDepth > 1)
				notifyErrorListeners("Unsafe context recursion", spec->Unsafe()->getSymbol());
			if (auto access = spec->accessSpecifier()) {
				if (currentAccessSpecifier.top())
					notifyErrorListeners("Access specifier context recursion", access->getStart());
				if (access->Public())
					currentAccessSpecifier.top() = AccessSpecifier::Public;
				else if (access->Protected())
					currentAccessSpecifier.top() = AccessSpecifier::Protected;
				else if (access->Internal())
					currentAccessSpecifier.top() = AccessSpecifier::Internal;
				else if (access->Private())
					currentAccessSpecifier.top() = AccessSpecifier::Private;
			}
		}

		visitChildren(ctx);

		if (auto spec = ctx->symbolSpecifierSeq()) {
			if (spec->Unsafe())
				--unsafeDepth;
			currentAccessSpecifier.top() = std::nullopt;
		}

		return 0;
	}

	std::any AstrumSema::visitClassDefinition(AstrumParser::ClassDefinitionContext* ctx) {
		symbolContexts.push(symbolContexts.top());
		currentAccessSpecifier.push(std::nullopt);
		bool isStatic = ctx->classHead()->Static();
		if (isStatic) {
			currentTypeKind.push(TypeKind::StaticClass);
		} else {
			currentTypeKind.push(TypeKind::Class);
		}

		auto namectx     = ctx->classHead()->className();
		bool primaryType = true;
		if (!currentType.empty()) {
			currentType += ".";
			primaryType = false;
		}
		std::string name;
		if (namectx->Identifier())
			name = namectx->Identifier()->getText();
		else
			name = namectx->simpleTemplateId()->templateName()->getText();
		currentType += name;
		typeset.insert(name);
		if (ctx->classHead()->Unsafe()) {
			unsafeDepth++;
		}

		if (firstPass && !functionBody) {
			constructorCounts.push(0);
			AstrumParser::TemplateParamsContext* tparams     = ctx->classHead()->templateParams();
			AstrumParser::TemplateArgumentListContext* tspec = nullptr;
			AstrumParser::ConstraintClauseContext* constraints =
			    ctx->classHead()->constraintClause();
			AstrumParser::BaseSpecifierListContext* bases          = nullptr;
			AstrumParser::AttributeSpecifierSeqContext* attributes = nullptr;

			if (auto t = namectx->simpleTemplateId()) {
				tspec = t->templateArgumentList();
			}

			if (auto b = ctx->classHead()->baseClause()) {
				bases = b->baseSpecifierList();
				if (isStatic && bases->baseSpecifier().size() > 1)
					notifyErrorListeners(
					    "Static class can be inherited only from other static classes",
					    b->getStart());
			}
			if (constraints && !tparams) {
				notifyErrorListeners("Only generic type can have constraints",
				                     constraints->Where()->getSymbol());
			}

			bool isUnsafe = unsafeDepth > 0;

			AstrumParser::AccessSpecifierContext* acc = nullptr;
			if (auto decl = dynamic_cast<AstrumParser::DeclarationContext*>(ctx->parent)) {
				acc        = decl->accessSpecifier();
				attributes = decl->attributeSpecifierSeq();
			} else if (auto decl = dynamic_cast<AstrumParser::StructMemberDeclarationContext*>(
			               ctx->parent)) {
				acc        = decl->accessSpecifier();
				attributes = decl->attributeSpecifierSeq();
			}

			auto access = resolveAccessSpecifier(acc, false);

			if (!access) {
				access = AccessSpecifier::Internal;
			}

			setupTypeDefinition(currentTypeKind.top(), isUnsafe, access, primaryType);

			auto def = std::make_shared<StructDefinition>(
			    currentTypeKind.top(), name, tparams, tspec, constraints, *access,
			    getCurrentCompilationCondition(),
			    SourcePosition {ctx->getStart()->getLine(),
			                    ctx->getStart()->getCharPositionInLine()},
			    std::vector<VariableDefinition> {}, std::vector<ConstantDefinition> {}, bases,
			    std::vector<TypeAliasDefinition> {}, std::vector<PropertyDefinition> {},
			    std::vector<MethodDefinition> {}, std::vector<std::shared_ptr<StructDefinition>> {},
			    std::vector<ForwardDeclaration> {}, std::vector<FunctionDeclaration> {},
			    std::vector<FunctionDefinition> {}, isUnsafe, ctx->classHead()->Abstract(),
			    ctx->classHead()->Final(), false);
			def->attributes = attributes;
			if (!structStack.empty())
				structStack.top()->nestedStructs.push_back(def);
			structStack.push(def);
			if (namectx->simpleTemplateId()) {
				if (namectx->simpleTemplateId()->templateArgumentList()) {
					name += "<{{specialization}}>";
				}
			} else if (auto tparams = ctx->classHead()->templateParams()) {
				name += "<";
				bool first = true;
				for (auto param : tparams->templateParamDeclaration()) {
					if (param->Identifier()) {
						if (!first)
							name += ", ";
						first = false;
						name += param->Identifier()->getText();
					}
					if (param->Ellipsis()) {
						name += "...";
					}
				}
				name += ">";
			}
			if (!isStatic)
				name = "__Class_" + name;
			currentTypeWithTemplate.push(name);
		}

		visitChildren(ctx);

		auto pos = currentType.rfind('.');
		if (firstPass && !functionBody) {
			if (pos == currentType.npos) {
				isUnsafeTypeDefinition    = false;
				isProtectedTypeDefinition = false;
				isPrivateTypeDefinition   = false;
				auto& top                 = structStack.top();
				finalizeTypeDefinition(top);
				if (constructorCounts.top() == 0)
					top->isDefaultConstructible = true;
				constructorCounts.pop();
				if (!top->templateSpecializationArgs) {
					if (currentTypeKind.top() != TypeKind::StaticClass) {
						forwardDeclarations.push_back({top->id + "__Unowned",
						                               top->templateParams,
						                               top->constraints,
						                               top->access,
						                               {0, 0},
						                               top->compilationCondition,
						                               top->isUnsafe});
						forwardDeclarations.push_back({top->id + "__Weak",
						                               top->templateParams,
						                               top->constraints,
						                               top->access,
						                               {0, 0},
						                               top->compilationCondition,
						                               top->isUnsafe});
						forwardDeclarations.push_back({"__Class_" + top->id,
						                               top->templateParams,
						                               top->constraints,
						                               top->access,
						                               {0, 0},
						                               top->compilationCondition,
						                               top->isUnsafe});
					}
				}
			}
			int idx = 0;
			for (const auto& field : structStack.top()->fields) {
				if (!field.isStatic && !field.isThreadLocal)
					symbolTable.globalSymbolTable[currentType + "." + std::to_string(idx++)] =
					    contextTypes[field.type];
			}
			structStack.pop();
			currentTypeWithTemplate.pop();
		}

		if (ctx->classHead()->Unsafe()) {
			unsafeDepth--;
		}

		if (pos != currentType.npos) {
			currentType = currentType.substr(0, pos);
		} else {
			currentType.clear();
		}
		currentAccessSpecifier.pop();
		currentTypeKind.pop();
		symbolContexts.pop();

		return 0;
	}

	std::any AstrumSema::visitClassHead(AstrumParser::ClassHeadContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitInterfaceDefinition(AstrumParser::InterfaceDefinitionContext* ctx) {
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
		if (ctx->interfaceHead()->Unsafe()) {
			unsafeDepth++;
		}

		if (firstPass && !functionBody) {
			AstrumParser::TemplateParamsContext* tparams = ctx->interfaceHead()->templateParams();
			AstrumParser::ConstraintClauseContext* constraints =
			    ctx->interfaceHead()->constraintClause();
			AstrumParser::BaseSpecifierListContext* baseInterfaces = nullptr;
			AstrumParser::AttributeSpecifierSeqContext* attributes = nullptr;

			if (auto b = ctx->interfaceHead()->baseClause()) {
				baseInterfaces = b->baseSpecifierList();
			}

			if (constraints && !tparams) {
				notifyErrorListeners("Only generic type can have constraints",
				                     constraints->Where()->getSymbol());
			}
			bool isUnsafe = unsafeDepth > 0;

			AstrumParser::AccessSpecifierContext* acc = nullptr;
			if (auto decl = dynamic_cast<AstrumParser::DeclarationContext*>(ctx->parent)) {
				acc        = decl->accessSpecifier();
				attributes = decl->attributeSpecifierSeq();
			}

			auto access = resolveAccessSpecifier(acc, false);

			if (!access) {
				access = AccessSpecifier::Internal;
			}

			setupTypeDefinition(currentTypeKind.top(), isUnsafe, access, primaryType);

			auto def = std::make_shared<StructDefinition>(
			    TypeKind::Interface, name, tparams, nullptr, constraints, *access,
			    getCurrentCompilationCondition(),
			    SourcePosition {ctx->getStart()->getLine(),
			                    ctx->getStart()->getCharPositionInLine()},
			    std::vector<VariableDefinition> {}, std::vector<ConstantDefinition> {},
			    baseInterfaces, std::vector<TypeAliasDefinition> {},
			    std::vector<PropertyDefinition> {}, std::vector<MethodDefinition> {},
			    std::vector<std::shared_ptr<StructDefinition>> {},
			    std::vector<ForwardDeclaration> {}, std::vector<FunctionDeclaration> {},
			    std::vector<FunctionDefinition> {}, isUnsafe, false, false, false);
			def->attributes = attributes;
			structStack.push(def);
			if (auto tparams = ctx->interfaceHead()->templateParams()) {
				name += "<";
				bool first = true;
				for (auto param : tparams->templateParamDeclaration()) {
					if (param->Identifier()) {
						if (!first)
							name += ", ";
						first = false;
						name += param->Identifier()->getText();
					}
					if (param->Ellipsis()) {
						name += "...";
					}
				}
				name += ">";
			}
			currentTypeWithTemplate.push(name);
		}

		visitChildren(ctx);

		auto pos = currentType.rfind('.');
		if (firstPass && !functionBody) {
			if (pos == currentType.npos) {
				isUnsafeTypeDefinition    = false;
				isProtectedTypeDefinition = false;
				isPrivateTypeDefinition   = false;
				auto& top                 = structStack.top();
				finalizeTypeDefinition(top);
				forwardDeclarations.push_back({top->id + "__Unowned",
				                               top->templateParams,
				                               top->constraints,
				                               top->access,
				                               {0, 0},
				                               top->compilationCondition,
				                               top->isUnsafe});
				forwardDeclarations.push_back({top->id + "__Weak",
				                               top->templateParams,
				                               top->constraints,
				                               top->access,
				                               {0, 0},
				                               top->compilationCondition,
				                               top->isUnsafe});
			}
			int idx = 0;
			for (const auto& field : structStack.top()->fields) {
				if (!field.isStatic && !field.isThreadLocal)
					symbolTable.globalSymbolTable[currentType + "." + std::to_string(idx++)] =
					    contextTypes[field.type];
			}
			structStack.pop();
			currentTypeWithTemplate.pop();
		}

		if (ctx->interfaceHead()->Unsafe()) {
			unsafeDepth--;
		}

		if (pos != currentType.npos) {
			currentType = currentType.substr(0, pos);
		} else {
			currentType.clear();
		}
		currentAccessSpecifier.pop();
		currentTypeKind.pop();
		symbolContexts.pop();

		return 0;
	}

	std::any AstrumSema::visitInterfaceHead(AstrumParser::InterfaceHeadContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitInterfaceMemberSpecification(
	    AstrumParser::InterfaceMemberSpecificationContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitInterfaceMemberDeclaration(
	    AstrumParser::InterfaceMemberDeclarationContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitAssociatedTypeDeclaration(
	    AstrumParser::AssociatedTypeDeclarationContext* ctx) {
		auto name = ctx->Identifier()->getText();
		typeset.insert(name);

		if (!functionBody && firstPass) {
			structStack.top()->typeAliases.emplace_back(TypeAliasDefinition {
			    name,
			    nullptr,
			    nullptr,
			    {ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()},
			    AccessSpecifier::Public,
			    getCurrentCompilationCondition(),
			    unsafeDepth > 0});
		}

		return visitChildren(ctx);
	}

	std::any AstrumSema::visitEnumDefinition(AstrumParser::EnumDefinitionContext* ctx) {
		symbolContexts.push(symbolContexts.top());
		currentAccessSpecifier.push(std::nullopt);
		currentTypeKind.push(TypeKind::Enum);

		if (auto base = ctx->enumHead()->enumBase()) {
			auto tbase = base->simpleTypeSpecifier();
			if (!tbase->Bool() && !tbase->Byte() && !tbase->Char() && !tbase->F32() &&
			    !tbase->F64() && !tbase->I16() && !tbase->I32() && !tbase->I64() && !tbase->I8() &&
			    !tbase->Rune() && !tbase->Str() && !tbase->U16() && !tbase->U32() &&
			    !tbase->U64() && !tbase->U8() && !tbase->Usize() && !tbase->Isize())
				notifyErrorListeners("Enum base must be one of the built-in types",
				                     ctx->enumHead()->enumBase()->getStart());
		}

		bool primaryType = true;
		if (!currentType.empty()) {
			currentType += ".";
			primaryType = false;
		}
		std::string name = ctx->enumHead()->Identifier()->getText();
		currentType += name;
		typeset.insert(name);

		if (firstPass && !functionBody) {
			bool isUnsafe = unsafeDepth > 0;
			bool isFlags  = false;

			AstrumParser::AccessSpecifierContext* acc              = nullptr;
			AstrumParser::AttributeSpecifierSeqContext* attributes = nullptr;
			if (auto decl = dynamic_cast<AstrumParser::DeclarationContext*>(ctx->parent)) {
				acc        = decl->accessSpecifier();
				attributes = decl->attributeSpecifierSeq();
			} else if (auto decl = dynamic_cast<AstrumParser::StructMemberDeclarationContext*>(
			               ctx->parent)) {
				acc        = decl->accessSpecifier();
				attributes = decl->attributeSpecifierSeq();
			}

			auto access = resolveAccessSpecifier(acc, false);

			if (!access) {
				access = AccessSpecifier::Internal;
			}

			setupTypeDefinition(currentTypeKind.top(), isUnsafe, access, primaryType);

			if (attributes) {
				for (auto attr : attributes->attributeSpecifier()) {
					if (attr->Identifier()->getText() == "Flags")
						isFlags = true;
				}
			}

			auto def = std::make_shared<StructDefinition>(
			    TypeKind::Enum, name, nullptr, nullptr, nullptr, *access,
			    getCurrentCompilationCondition(),
			    SourcePosition {ctx->getStart()->getLine(),
			                    ctx->getStart()->getCharPositionInLine()},
			    std::vector<VariableDefinition> {}, std::vector<ConstantDefinition> {}, nullptr,
			    std::vector<TypeAliasDefinition> {}, std::vector<PropertyDefinition> {},
			    std::vector<MethodDefinition> {}, std::vector<std::shared_ptr<StructDefinition>> {},
			    std::vector<ForwardDeclaration> {}, std::vector<FunctionDeclaration> {},
			    std::vector<FunctionDefinition> {}, isUnsafe, isFlags, false, false,
			    ctx->enumHead()->enumBase());
			def->attributes = attributes;
			if (!structStack.empty())
				structStack.top()->nestedStructs.push_back(def);
			structStack.push(def);
			currentTypeWithTemplate.push(name);
		}

		visitChildren(ctx);

		auto pos = currentType.rfind('.');
		if (firstPass && !functionBody) {
			if (pos == currentType.npos) {
				isUnsafeTypeDefinition    = false;
				isProtectedTypeDefinition = false;
				isPrivateTypeDefinition   = false;
				auto& top                 = structStack.top();
				finalizeTypeDefinition(top);
				forwardDeclarations.push_back({"__Class_" + top->id,
				                               nullptr,
				                               nullptr,
				                               top->access,
				                               {0, 0},
				                               top->compilationCondition,
				                               top->isUnsafe});
			}
			structStack.pop();
			currentTypeWithTemplate.pop();
		}

		if (pos != currentType.npos) {
			currentType = currentType.substr(0, pos);
		} else {
			currentType.clear();
		}
		currentAccessSpecifier.pop();
		currentTypeKind.pop();
		symbolContexts.pop();

		return 0;
	}

	std::any AstrumSema::visitEnumHead(AstrumParser::EnumHeadContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitEnumBase(AstrumParser::EnumBaseContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitEnumList(AstrumParser::EnumListContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitEnumeratorDefinition(AstrumParser::EnumeratorDefinitionContext* ctx) {
		if (checkForCurrentPass()) {
			auto id                                               = ctx->Identifier()->getText();
			symbolTable[id]                                       = structStack.top()->id;
			symbolTable.globalSymbolTable[currentType + "." + id] = structStack.top()->id;
			structStack.top()->constants.emplace_back(ConstantDefinition {
			    ctx->Identifier()->getText(),
			    nullptr,
			    nullptr,
			    {ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()},
			    nullptr,
			    ctx->attributeSpecifierSeq(),
			    AccessSpecifier::Public,
			    getCurrentCompilationCondition(),
			    getCurrentFullTypeName(),
			    ctx->constantExpression()});
		}

		return visitChildren(ctx);
	}

	std::any AstrumSema::visitEnumMemberSpecification(
	    AstrumParser::EnumMemberSpecificationContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitEnumMemberDeclaration(
	    AstrumParser::EnumMemberDeclarationContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitEnumClassDefinition(AstrumParser::EnumClassDefinitionContext* ctx) {
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
		if (ctx->enumClassHead()->Unsafe()) {
			unsafeDepth++;
		}

		if (firstPass && !functionBody) {
			constructorCounts.push(0);
			AstrumParser::BaseSpecifierListContext* bases = nullptr;

			if (auto b = ctx->enumClassHead()->baseClause()) {
				bases = b->baseSpecifierList();
			}

			bool isUnsafe = unsafeDepth > 0;

			AstrumParser::AccessSpecifierContext* acc              = nullptr;
			AstrumParser::AttributeSpecifierSeqContext* attributes = nullptr;
			if (auto decl = dynamic_cast<AstrumParser::DeclarationContext*>(ctx->parent)) {
				acc        = decl->accessSpecifier();
				attributes = decl->attributeSpecifierSeq();
			} else if (auto decl = dynamic_cast<AstrumParser::StructMemberDeclarationContext*>(
			               ctx->parent)) {
				acc        = decl->accessSpecifier();
				attributes = decl->attributeSpecifierSeq();
			}

			auto access = resolveAccessSpecifier(acc, false);

			if (!access) {
				access = AccessSpecifier::Internal;
			}

			setupTypeDefinition(currentTypeKind.top(), isUnsafe, access, primaryType);

			auto def = std::make_shared<StructDefinition>(
			    TypeKind::EnumClass, name, nullptr, nullptr, nullptr, *access,
			    getCurrentCompilationCondition(),
			    SourcePosition {ctx->getStart()->getLine(),
			                    ctx->getStart()->getCharPositionInLine()},
			    std::vector<VariableDefinition> {}, std::vector<ConstantDefinition> {}, bases,
			    std::vector<TypeAliasDefinition> {}, std::vector<PropertyDefinition> {},
			    std::vector<MethodDefinition> {}, std::vector<std::shared_ptr<StructDefinition>> {},
			    std::vector<ForwardDeclaration> {}, std::vector<FunctionDeclaration> {},
			    std::vector<FunctionDefinition> {}, isUnsafe, false, false, false);
			def->attributes = attributes;
			if (!structStack.empty())
				structStack.top()->nestedStructs.push_back(def);
			structStack.push(def);
			currentTypeWithTemplate.push("__Class_" + name);
		}

		visitChildren(ctx);

		auto pos = currentType.rfind('.');
		if (firstPass && !functionBody) {
			if (pos == currentType.npos) {
				isUnsafeTypeDefinition    = false;
				isProtectedTypeDefinition = false;
				isPrivateTypeDefinition   = false;
				auto& top                 = structStack.top();
				finalizeTypeDefinition(top);
				if (constructorCounts.top() == 0)
					top->isDefaultConstructible = true;
				constructorCounts.pop();
				forwardDeclarations.push_back({top->id + "__Unowned",
				                               top->templateParams,
				                               top->constraints,
				                               top->access,
				                               {0, 0},
				                               top->compilationCondition,
				                               top->isUnsafe});
				forwardDeclarations.push_back({top->id + "__Weak",
				                               top->templateParams,
				                               top->constraints,
				                               top->access,
				                               {0, 0},
				                               top->compilationCondition,
				                               top->isUnsafe});
				forwardDeclarations.push_back({"__Class_" + top->id,
				                               top->templateParams,
				                               top->constraints,
				                               top->access,
				                               {0, 0},
				                               top->compilationCondition,
				                               top->isUnsafe});
			}
			int idx = 0;
			for (const auto& field : structStack.top()->fields) {
				if (!field.isStatic && !field.isThreadLocal)
					symbolTable.globalSymbolTable[currentType + "." + std::to_string(idx++)] =
					    contextTypes[field.type];
			}
			structStack.pop();
			currentTypeWithTemplate.pop();
		}

		if (ctx->enumClassHead()->Unsafe()) {
			unsafeDepth--;
		}

		if (pos != currentType.npos) {
			currentType = currentType.substr(0, pos);
		} else {
			currentType.clear();
		}
		currentAccessSpecifier.pop();
		currentTypeKind.pop();
		symbolContexts.pop();

		return 0;
	}

	std::any AstrumSema::visitEnumClassHead(AstrumParser::EnumClassHeadContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitEnumClassList(AstrumParser::EnumClassListContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitClassEnumeratorDefinition(
	    AstrumParser::ClassEnumeratorDefinitionContext* ctx) {
		if (checkForCurrentPass()) {
			auto id                                               = ctx->Identifier()->getText();
			symbolTable[id]                                       = structStack.top()->id;
			symbolTable.globalSymbolTable[currentType + "." + id] = structStack.top()->id;
			structStack.top()->constants.emplace_back(ConstantDefinition {
			    id,
			    nullptr,
			    nullptr,
			    {ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()},
			    nullptr,
			    ctx->attributeSpecifierSeq(),
			    AccessSpecifier::Public,
			    getCurrentCompilationCondition(),
			    getCurrentFullTypeName(),
			    nullptr,
			    ctx->expressionList()});
		}

		return visitChildren(ctx);
	}

	std::any AstrumSema::visitEnumClassMemberSpecification(
	    AstrumParser::EnumClassMemberSpecificationContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitUnionDefinition(AstrumParser::UnionDefinitionContext* ctx) {
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
		if (ctx->unionHead()->Unsafe()) {
			unsafeDepth++;
		}

		if (firstPass && !functionBody) {
			constructorCounts.push(0);
			AstrumParser::TemplateParamsContext* templateParams =
			    ctx->unionHead()->templateParams();
			AstrumParser::ConstraintClauseContext* constraints =
			    ctx->unionHead()->constraintClause();
			AstrumParser::BaseSpecifierListContext* bases          = nullptr;
			AstrumParser::AttributeSpecifierSeqContext* attributes = nullptr;

			if (auto b = ctx->unionHead()->baseClause()) {
				bases = b->baseSpecifierList();
			}
			if (constraints && !templateParams) {
				notifyErrorListeners("Only generic type can have constraints",
				                     constraints->Where()->getSymbol());
			}

			bool isUnsafe = unsafeDepth > 0;

			AstrumParser::AccessSpecifierContext* acc = nullptr;
			if (auto decl = dynamic_cast<AstrumParser::DeclarationContext*>(ctx->parent)) {
				acc        = decl->accessSpecifier();
				attributes = decl->attributeSpecifierSeq();
			} else if (auto decl = dynamic_cast<AstrumParser::StructMemberDeclarationContext*>(
			               ctx->parent)) {
				acc        = decl->accessSpecifier();
				attributes = decl->attributeSpecifierSeq();
			}

			auto access = resolveAccessSpecifier(acc, false);

			if (!access) {
				access = AccessSpecifier::Internal;
			}

			currentAccessSpecifier.push(access);

			setupTypeDefinition(currentTypeKind.top(), isUnsafe, access, primaryType);

			auto def = std::make_shared<StructDefinition>(
			    TypeKind::Union, name, templateParams, nullptr, constraints, *access,
			    getCurrentCompilationCondition(),
			    SourcePosition {ctx->getStart()->getLine(),
			                    ctx->getStart()->getCharPositionInLine()},
			    std::vector<VariableDefinition> {}, std::vector<ConstantDefinition> {}, bases,
			    std::vector<TypeAliasDefinition> {}, std::vector<PropertyDefinition> {},
			    std::vector<MethodDefinition> {}, std::vector<std::shared_ptr<StructDefinition>> {},
			    std::vector<ForwardDeclaration> {}, std::vector<FunctionDeclaration> {},
			    std::vector<FunctionDefinition> {}, isUnsafe, false, false, false);
			def->attributes = attributes;
			if (!structStack.empty())
				structStack.top()->nestedStructs.push_back(def);
			structStack.push(def);
			if (templateParams) {
				name += "<";
				bool first = true;
				for (auto param : templateParams->templateParamDeclaration()) {
					if (param->Identifier()) {
						if (!first)
							name += ", ";
						first = false;
						name += param->Identifier()->getText();
					}
					if (param->Ellipsis()) {
						name += "...";
					}
				}
				name += ">";
			}
			currentTypeWithTemplate.push(name);
		}

		visitChildren(ctx);

		auto pos = currentType.rfind('.');
		if (firstPass && !functionBody) {
			if (pos == currentType.npos) {
				isUnsafeTypeDefinition    = false;
				isProtectedTypeDefinition = false;
				isPrivateTypeDefinition   = false;
				auto& top                 = structStack.top();
				finalizeTypeDefinition(top);
				forwardDeclarations.push_back({"__Class_" + top->id,
				                               top->templateParams,
				                               top->constraints,
				                               top->access,
				                               {0, 0},
				                               top->compilationCondition,
				                               top->isUnsafe});
			}
			structStack.pop();
			currentTypeWithTemplate.pop();
			currentAccessSpecifier.pop();
		}

		if (pos != currentType.npos) {
			currentType = currentType.substr(0, pos);
		} else {
			currentType.clear();
		}
		currentTypeKind.pop();
		symbolContexts.pop();

		return 0;
	}

	std::any AstrumSema::visitUnionHead(AstrumParser::UnionHeadContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitUnionList(AstrumParser::UnionListContext* ctx) {
		visitChildren(ctx);
		currentAccessSpecifier.pop();
		return 0;
	}

	std::any AstrumSema::visitUnionEnumerator(AstrumParser::UnionEnumeratorContext* ctx) {
		if (checkForCurrentPass()) {
			auto id = ctx->Identifier()->getText();
			typeset.insert(id);
			typeset.globalTypes.insert(currentType + "." + id);
			if (auto clause = ctx->unionEnumeratorClause()) {
				if (clause->theTypeId().empty()) {
					auto rhs                                            = clause->getText();
					aliasTable[id]                                      = rhs;
					aliasTable.globalAliasTable[currentType + "." + id] = rhs;
				}
			}
			structStack.top()->constants.emplace_back(ConstantDefinition {
			    id,
			    nullptr,
			    nullptr,
			    {ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()},
			    nullptr,
			    ctx->attributeSpecifierSeq(),
			    AccessSpecifier::Public,
			    getCurrentCompilationCondition(),
			    getCurrentFullTypeName(),
			    nullptr,
			    nullptr,
			    ctx->unionEnumeratorClause()});
		}

		return visitChildren(ctx);
	}

	std::any AstrumSema::visitUnionEnumeratorClause(
	    AstrumParser::UnionEnumeratorClauseContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitUnionMemberSpecification(
	    AstrumParser::UnionMemberSpecificationContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitExtensionDefinition(AstrumParser::ExtensionDefinitionContext* ctx) {
		symbolContexts.push(symbolContexts.top());
		currentAccessSpecifier.push(std::nullopt);
		currentTypeKind.push(TypeKind::Extension);

		bool primaryType = true;
		if (!currentType.empty()) {
			currentType += ".";
			primaryType = false;
		}
		std::string name;
		if (auto className = ctx->extensionHead()->theTypeId()) {
			name = className->getText();
		} else if (auto params = ctx->extensionHead()->templateParams()) {
			if (params->templateParamDeclaration().size() == 1)
				name = params->templateParamDeclaration(0)->Identifier()->getText();
			else
				notifyErrorListeners(
				    "Generic extensions can be used only with one generic parameter",
				    params->templateParamDeclaration(1)->Identifier()->getSymbol());
		}
		currentType += name;
		typeset.insert(name);
		if (ctx->extensionHead()->Unsafe()) {
			unsafeDepth++;
		}

		if (firstPass && !functionBody) {
			AstrumParser::TemplateParamsContext* tparams = ctx->extensionHead()->templateParams();
			AstrumParser::TemplateArgumentListContext* tspec = nullptr;
			AstrumParser::ConstraintClauseContext* constraints =
			    ctx->extensionHead()->constraintClause();
			AstrumParser::BaseSpecifierListContext* baseInterfaces = nullptr;

			if (auto b = ctx->extensionHead()->baseClause()) {
				baseInterfaces = b->baseSpecifierList();
			}
			if (constraints && !tparams) {
				notifyErrorListeners("Only generic type can have constraints",
				                     constraints->Where()->getSymbol());
			}

			bool isUnsafe = unsafeDepth > 0;

			AstrumParser::AccessSpecifierContext* acc = nullptr;
			if (auto decl = dynamic_cast<AstrumParser::DeclarationContext*>(ctx->parent)) {
				acc = decl->accessSpecifier();
			}

			auto access = resolveAccessSpecifier(acc, false);

			if (!access) {
				if (currentAccessSpecifier.top())
					access = currentAccessSpecifier.top();
				else
					access = AccessSpecifier::Internal;
			}

			setupTypeDefinition(currentTypeKind.top(), isUnsafe, access, primaryType);
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

			auto def = std::make_shared<StructDefinition>(
			    TypeKind::Extension, mangledName, tparams, tspec, constraints, *access,
			    getCurrentCompilationCondition(),
			    SourcePosition {ctx->getStart()->getLine(),
			                    ctx->getStart()->getCharPositionInLine()},
			    std::vector<VariableDefinition> {}, std::vector<ConstantDefinition> {},
			    baseInterfaces, std::vector<TypeAliasDefinition> {},
			    std::vector<PropertyDefinition> {}, std::vector<MethodDefinition> {},
			    std::vector<std::shared_ptr<StructDefinition>> {},
			    std::vector<ForwardDeclaration> {}, std::vector<FunctionDeclaration> {},
			    std::vector<FunctionDefinition> {}, isUnsafe, false, false, false);
			def->extensionType = ctx->extensionHead()->theTypeId();
			structStack.push(def);
			if (auto tparams = ctx->extensionHead()->templateParams()) {
				name += "<";
				bool first = true;
				for (auto param : tparams->templateParamDeclaration()) {
					if (param->Identifier()) {
						if (!first)
							name += ", ";
						first = false;
						name += param->Identifier()->getText();
					}
					if (param->Ellipsis()) {
						name += "...";
					}
				}
				name += ">";
			}
			currentTypeWithTemplate.push(name);
		}

		visitChildren(ctx);

		auto pos = currentType.rfind('.');
		if (firstPass && !functionBody) {
			if (pos == currentType.npos) {
				isUnsafeTypeDefinition    = false;
				isProtectedTypeDefinition = false;
				isPrivateTypeDefinition   = false;
				auto& top                 = structStack.top();
				globalStructs.push_back(top);
			}
			structStack.pop();
			currentTypeWithTemplate.pop();
		}

		if (ctx->extensionHead()->Unsafe()) {
			unsafeDepth--;
		}

		if (pos != currentType.npos) {
			currentType = currentType.substr(0, pos);
		} else {
			currentType.clear();
		}
		currentAccessSpecifier.pop();
		currentTypeKind.pop();
		symbolContexts.pop();

		return 0;
	}

	std::any AstrumSema::visitExtensionHead(AstrumParser::ExtensionHeadContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitExtensionMemberSpecification(
	    AstrumParser::ExtensionMemberSpecificationContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitExtensionMemberDeclaration(
	    AstrumParser::ExtensionMemberDeclarationContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitBaseClause(AstrumParser::BaseClauseContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitBaseSpecifierList(AstrumParser::BaseSpecifierListContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitBaseSpecifier(AstrumParser::BaseSpecifierContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitProperty(AstrumParser::PropertyContext* ctx) {
		symbolContexts.push(symbolContexts.top());
		propertyBody = true;
		functionBody++;
		bool isStatic                                       = ctx->Static();
		bool isUnsafe                                       = ctx->Unsafe();
		bool isVirtual                                      = ctx->Virtual();
		bool isOverride                                     = ctx->Override();
		bool isFinal                                        = ctx->Final();
		bool isRefReturn                                    = ctx->Ref();
		bool isConstReturn                                  = ctx->Const();
		isRefProperty                                       = isRefReturn;
		AstrumParser::TheTypeIdContext* propertyType        = ctx->theTypeId();
		AstrumParser::PropertyGetterContext* getter         = nullptr;
		AstrumParser::PropertySetterContext* setter         = nullptr;
		AstrumParser::ExpressionContext* expression         = nullptr;
		AstrumParser::InitializerClauseContext* initializer = ctx->initializerClause();

		if (isUnsafe) {
			if (unsafeDepth > 0)
				notifyErrorListeners("Unsafe context recursion", ctx->Unsafe()->getSymbol());
			++unsafeDepth;
		} else if (unsafeDepth > 0) {
			isUnsafe = true;
		}

		if (currentTypeKind.top() != TypeKind::Class) {
			if (isVirtual)
				notifyErrorListeners("Cannot to declare virtual property outside the class body",
				                     ctx->Virtual()->getSymbol());
			if (isFinal)
				notifyErrorListeners("Cannot to declare final property outside the class body",
				                     ctx->Final()->getSymbol());
		}

		if (ctx->shortFunctionBody()) {
			expression = ctx->shortFunctionBody()->expressionStatement()->expression();
		}

		if (firstPass && functionBody <= 1) {
			bool isInline    = false;
			bool isConstexpr = false;

			if (auto body = ctx->propertyBody()) {
				getter = body->propertyGetter();
				setter = body->propertySetter();
				if (currentTypeKind.top() == TypeKind::Enum ||
				    currentTypeKind.top() == TypeKind::EnumClass ||
				    currentTypeKind.top() == TypeKind::Union ||
				    currentTypeKind.top() == TypeKind::UnionStruct)
					notifyErrorListeners("Enums and unions can only have computed properties",
					                     body->getStart());
			} else if (auto body = ctx->functionBody()) {
				if (body->Equal())
					isConstexpr = true;
				else if (body->Assign())
					isInline = true;
			} else if (auto body = ctx->shortFunctionBody()) {
				if (body->EqualArrow())
					isConstexpr = true;
				else if (body->AssignArrow())
					isInline = true;
			}

			if (currentTypeKind.top() == TypeKind::StaticClass) {
				isStatic = true;
			} else if (currentTypeKind.top() == TypeKind::UnionStruct && !isStatic && !isUnsafe) {
				notifyErrorListeners(
				    "Raw union instance property cannot be safe, it requires an unsafe specifier",
				    ctx->getStart());
			}

			AstrumParser::AccessSpecifierContext* acc = ctx->accessSpecifier();
			std::optional<AccessSpecifier> access     = std::nullopt;

			if (acc) {
				if (currentAccessSpecifier.top())
					notifyErrorListeners("Cannot to redefine access specifier", acc->getStart());
				if (acc->Public()) {
					access = AccessSpecifier::Public;
				} else if (acc->Protected()) {
					if (currentTypeKind.top() != TypeKind::Class)
						notifyErrorListeners(
						    "Cannot to declare protected member outside the class body",
						    acc->getStart());
					access = AccessSpecifier::Protected;
				} else if (acc->Private()) {
					access = AccessSpecifier::Private;
				} else if (acc->Internal()) {
					access = AccessSpecifier::Internal;
				}
			}

			if (currentTypeKind.top() == TypeKind::Extension) {
				access = structStack.top()->access;
			}

			if (currentAccessSpecifier.top())
				access = currentAccessSpecifier.top();
			if (!access)
				access = AccessSpecifier::Public;
			std::string id       = ctx->Identifier()->getText();
			auto lastTparams     = getLastTypeTemplateParams();
			auto lastSpec        = getLastTypeTemplateSpecializationArgs();
			auto lastConstraints = getLastTypeConstraints();
			auto fullType        = getCurrentFullTypeName();
			auto pos             = SourcePosition {ctx->getStart()->getLine(),
                                       ctx->getStart()->getCharPositionInLine()};
			auto property        = PropertyDefinition {id,
                                                propertyType,
                                                pos,
                                                initializer,
                                                getter,
                                                setter,
                                                expression,
                                                ctx->attributeSpecifierSeq(),
                                                *access,
                                                getCurrentCompilationCondition(),
                                                currentType,
                                                fullType,
                                                lastTparams,
                                                lastSpec,
                                                lastConstraints,
                                                isStatic,
                                                isConstReturn,
                                                isRefReturn,
                                                isUnsafe,
                                                isPrivateTypeDefinition,
                                                isProtectedTypeDefinition,
                                                isUnsafeTypeDefinition,
                                                isVirtual,
                                                isOverride,
                                                false,
                                                isFinal && currentTypeKind.top() == TypeKind::Class,
                                                isInline,
                                                isConstexpr};
			structStack.top()->properties.emplace_back(property);
			if (currentTypeKind.top() != TypeKind::Extension)
				properties.insert_or_assign(pos, property);
		}

		visitChildren(ctx);

		propertyBody  = false;
		isRefProperty = false;
		functionBody--;
		if (firstPass != functionBody > 0) {
			std::string funcname;
			std::string prefix;
			if (!currentType.empty())
				prefix = currentType + ".";
			std::string propertyName = ctx->Identifier()->getText();
			if (auto body = ctx->propertyBody()) {
				if (body->propertySetter()) {
					if (ctx->Static())
						functionTable[prefix + "set" + propertyName] = "void";
					else
						functionTable[prefix + "set" + propertyName] = currentType;
				} else {
					functionTable[prefix + "get" + propertyName] = contextTypes[ctx->theTypeId()];
				}
			} else {
				functionTable[prefix + "get" + propertyName] = contextTypes[ctx->theTypeId()];
			}
			symbolTable.globalSymbolTable.insert_or_assign(prefix + propertyName,
			                                               contextTypes[ctx->theTypeId()]);
			if (unsafeDepth > 0) {
				cppParser.unsafeVariables.insert(prefix + propertyName);
				cppParser.unsafeVariables.insert(prefix + "p_" + propertyName);
				cppParser.unsafeFunctions.insert(prefix + "set" + propertyName + "/" +
				                                 contextTypes[ctx->theTypeId()]);
				cppParser.unsafeFunctions.insert(prefix + "get" + propertyName + "/");
			}
		}
		if (ctx->Unsafe())
			--unsafeDepth;

		symbolContexts.pop();

		return 0;
	}

	std::any AstrumSema::visitPropertyBody(AstrumParser::PropertyBodyContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitAbstractProperty(AstrumParser::AbstractPropertyContext* ctx) {
		symbolContexts.push(symbolContexts.top());
		propertyBody                                 = true;
		bool isUnsafe                                = false;
		bool isRefReturn                             = ctx->Ref();
		bool isConstReturn                           = ctx->Const();
		isRefProperty                                = isRefReturn;
		isAbstractProperty                           = true;
		AstrumParser::TheTypeIdContext* propertyType = ctx->theTypeId();
		AstrumParser::PropertyGetterContext* getter  = ctx->propertyBody()->propertyGetter();
		AstrumParser::PropertySetterContext* setter  = ctx->propertyBody()->propertySetter();

		if (unsafeDepth > 0) {
			isUnsafe = true;
		}

		if (firstPass && !functionBody) {
			if (!structStack.top()->isAbstract) {
				notifyErrorListeners(
				    "An abstract property can only be declared in an abstract class",
				    ctx->Abstract()->getSymbol());
			}

			std::optional<AccessSpecifier> access = std::nullopt;

			if (auto acc = ctx->accessSpecifier()) {
				if (currentAccessSpecifier.top())
					notifyErrorListeners("Cannot to redefine access specifier", acc->getStart());
				if (acc->Public()) {
					access = AccessSpecifier::Public;
				} else if (acc->Protected()) {
					if (currentTypeKind.top() != TypeKind::Class)
						notifyErrorListeners(
						    "Cannot to declare protected member outside the class body",
						    acc->getStart());
					access = AccessSpecifier::Protected;
				} else if (acc->Private()) {
					notifyErrorListeners("An abstract property cannot be private", acc->getStart());
				} else if (acc->Internal()) {
					access = AccessSpecifier::Internal;
				}
			}

			if (getter) {
				if (getter->accessSpecifier() && getter->accessSpecifier()->Private())
					notifyErrorListeners("An abstract property cannot be private",
					                     getter->accessSpecifier()->Private()->getSymbol());
				if (getter->functionBody())
					notifyErrorListeners("An abstract property cannot have definition",
					                     getter->functionBody()->getStart());
				if (getter->shortFunctionBody())
					notifyErrorListeners("An abstract property cannot have definition",
					                     getter->shortFunctionBody()->getStart());
			}
			if (setter) {
				if (setter->accessSpecifier() && setter->accessSpecifier()->Private())
					notifyErrorListeners("An abstract property cannot be private",
					                     setter->accessSpecifier()->Private()->getSymbol());
				if (setter->functionBody())
					notifyErrorListeners("An abstract property cannot have definition",
					                     setter->functionBody()->getStart());
				if (setter->shortFunctionBody())
					notifyErrorListeners("An abstract property cannot have definition",
					                     setter->shortFunctionBody()->getStart());
			}

			if (currentAccessSpecifier.top())
				access = currentAccessSpecifier.top();
			if (!access)
				access = AccessSpecifier::Public;
			std::string id       = ctx->Identifier()->getText();
			auto lastTparams     = getLastTypeTemplateParams();
			auto lastSpec        = getLastTypeTemplateSpecializationArgs();
			auto lastConstraints = getLastTypeConstraints();
			auto fullType        = getCurrentFullTypeName();
			auto pos             = SourcePosition {ctx->getStart()->getLine(),
                                       ctx->getStart()->getCharPositionInLine()};
			auto property        = PropertyDefinition {id,
                                                propertyType,
                                                pos,
                                                nullptr,
                                                getter,
                                                setter,
                                                nullptr,
                                                ctx->attributeSpecifierSeq(),
                                                *access,
                                                getCurrentCompilationCondition(),
                                                currentType,
                                                fullType,
                                                lastTparams,
                                                lastSpec,
                                                lastConstraints,
                                                false,
                                                isConstReturn,
                                                isRefReturn,
                                                isUnsafe,
                                                isPrivateTypeDefinition,
                                                isProtectedTypeDefinition,
                                                isUnsafeTypeDefinition,
                                                false,
                                                false,
                                                true,
                                                false,
                                                false,
                                                false};
			structStack.top()->properties.emplace_back(property);
			properties.insert_or_assign(pos, property);
		}

		visitChildren(ctx);

		propertyBody       = false;
		isRefProperty      = false;
		isAbstractProperty = false;
		if (firstPass != functionBody > 0) {
			std::string funcname;
			std::string prefix;
			if (!currentType.empty())
				prefix = currentType + ".";
			std::string propertyName = ctx->Identifier()->getText();
			if (auto body = ctx->propertyBody()) {
				if (body->propertySetter()) {
					functionTable[prefix + "set" + propertyName] = currentType;
				} else {
					functionTable[prefix + "get" + propertyName] = contextTypes[ctx->theTypeId()];
				}
			} else {
				functionTable[prefix + "get" + propertyName] = contextTypes[ctx->theTypeId()];
			}
			symbolTable.globalSymbolTable.insert_or_assign(prefix + propertyName,
			                                               contextTypes[ctx->theTypeId()]);
			if (unsafeDepth > 0) {
				cppParser.unsafeVariables.insert(prefix + propertyName);
				cppParser.unsafeVariables.insert(prefix + "p_" + propertyName);
				cppParser.unsafeFunctions.insert(prefix + "set" + propertyName + "/" +
				                                 contextTypes[ctx->theTypeId()]);
				cppParser.unsafeFunctions.insert(prefix + "get" + propertyName + "/");
			}
		}

		symbolContexts.pop();

		return 0;
	}

	std::any AstrumSema::visitInterfaceProperty(AstrumParser::InterfacePropertyContext* ctx) {
		symbolContexts.push(symbolContexts.top());
		propertyBody                                 = true;
		bool isUnsafe                                = false;
		bool isRefReturn                             = ctx->Ref();
		bool isConstReturn                           = ctx->Const();
		isRefProperty                                = isRefReturn;
		AstrumParser::TheTypeIdContext* propertyType = ctx->theTypeId();
		AstrumParser::PropertyGetterContext* getter  = nullptr;
		AstrumParser::PropertySetterContext* setter  = nullptr;

		if (unsafeDepth > 0) {
			isUnsafe = true;
		}

		if (firstPass && !functionBody) {
			if (ctx->propertyBody()) {
				getter = ctx->propertyBody()->propertyGetter();
				setter = ctx->propertyBody()->propertySetter();
			}

			if (getter) {
				if (getter->accessSpecifier() || getter->protectedInternal())
					notifyErrorListeners("An interface property must be public",
					                     getter->getStart());
				if (getter->functionBody())
					notifyErrorListeners("An interface property cannot have definition",
					                     getter->functionBody()->getStart());
				if (getter->shortFunctionBody())
					notifyErrorListeners("An interface property cannot have definition",
					                     getter->shortFunctionBody()->getStart());
			}
			if (setter) {
				if (setter->accessSpecifier() || setter->protectedInternal())
					notifyErrorListeners("An interface property must be public",
					                     setter->getStart());
				if (setter->functionBody())
					notifyErrorListeners("An interface property cannot have definition",
					                     setter->functionBody()->getStart());
				if (setter->shortFunctionBody())
					notifyErrorListeners("An interface property cannot have definition",
					                     setter->shortFunctionBody()->getStart());
			}

			std::string id       = ctx->Identifier()->getText();
			auto lastTparams     = getLastTypeTemplateParams();
			auto lastSpec        = getLastTypeTemplateSpecializationArgs();
			auto lastConstraints = getLastTypeConstraints();
			auto fullType        = getCurrentFullTypeName();
			auto pos             = SourcePosition {ctx->getStart()->getLine(),
                                       ctx->getStart()->getCharPositionInLine()};
			auto property        = PropertyDefinition {id,
                                                propertyType,
                                                pos,
                                                nullptr,
                                                getter,
                                                setter,
                                                nullptr,
                                                ctx->attributeSpecifierSeq(),
                                                AccessSpecifier::Public,
                                                getCurrentCompilationCondition(),
                                                currentType,
                                                fullType,
                                                lastTparams,
                                                lastSpec,
                                                lastConstraints,
                                                ctx->Static() != nullptr,
                                                isConstReturn,
                                                isRefReturn,
                                                isUnsafe,
                                                isPrivateTypeDefinition,
                                                isProtectedTypeDefinition,
                                                isUnsafeTypeDefinition};
			structStack.top()->properties.emplace_back(property);
		}

		visitChildren(ctx);

		propertyBody  = false;
		isRefProperty = false;
		if (firstPass != functionBody > 0) {
			std::string funcname;
			std::string prefix;
			if (!currentType.empty())
				prefix = currentType + ".";
			std::string propertyName = ctx->Identifier()->getText();
			if (auto body = ctx->propertyBody()) {
				if (body->propertySetter()) {
					functionTable[prefix + "set" + propertyName] = currentType;
				} else {
					functionTable[prefix + "get" + propertyName] = contextTypes[ctx->theTypeId()];
				}
			} else {
				functionTable[prefix + "get" + propertyName] = contextTypes[ctx->theTypeId()];
			}
			symbolTable.globalSymbolTable.insert_or_assign(prefix + propertyName,
			                                               contextTypes[ctx->theTypeId()]);
			if (unsafeDepth > 0) {
				cppParser.unsafeVariables.insert(prefix + propertyName);
				cppParser.unsafeVariables.insert(prefix + "p_" + propertyName);
				cppParser.unsafeFunctions.insert(prefix + "set" + propertyName + "/" +
				                                 contextTypes[ctx->theTypeId()]);
				cppParser.unsafeFunctions.insert(prefix + "get" + propertyName + "/");
			}
		}

		symbolContexts.pop();

		return 0;
	}

	std::any AstrumSema::visitPropertyGetter(AstrumParser::PropertyGetterContext* ctx) {
		symbolContexts.push(symbolContexts.top());
		if (currentTypeKind.top() != TypeKind::Class) {
			if (auto spec = ctx->accessSpecifier()) {
				if (spec->Protected())
					notifyErrorListeners("Cannot to declare protected member outside the class",
					                     spec->Protected()->getSymbol());
			} else if (ctx->protectedInternal()) {
				notifyErrorListeners(
				    "Cannot to declare protected internal member outside the class",
				    spec->Protected()->getSymbol());
			}
		}

		++functionBody;
		++depth;
		if (!firstPass) {
			initStates.push(InitState {});
		}

		visitChildren(ctx);

		--functionBody;
		--depth;
		if (!firstPass) {
			initStates.pop();
		}
		symbolContexts.pop();

		return 0;
	}

	std::any AstrumSema::visitPropertySetter(AstrumParser::PropertySetterContext* ctx) {
		symbolContexts.push(symbolContexts.top());
		if (currentTypeKind.top() != TypeKind::Class) {
			if (auto spec = ctx->accessSpecifier()) {
				if (spec->Protected())
					notifyErrorListeners("Cannot to declare protected member outside the class",
					                     spec->Protected()->getSymbol());
			} else if (ctx->protectedInternal()) {
				notifyErrorListeners(
				    "Cannot to declare protected internal member outside the class",
				    spec->Protected()->getSymbol());
			}
		}

		++functionBody;
		fieldAssignment = ctx->Semi();
		++depth;
		if (!firstPass) {
			initStates.push(InitState {});
		}

		visitChildren(ctx);

		--functionBody;
		if (fieldAssignment) {
			if (isRefProperty && currentTypeKind.top() != TypeKind::RefStruct)
				notifyErrorListeners(
				    "Cannot to use reference data property outside the ref struct body",
				    ctx->getStart());
			if (!isAbstractProperty)
				propertiesNeedField.insert(ctx);
		}
		fieldAssignment = false;
		--depth;
		if (!firstPass) {
			initStates.pop();
		}
		symbolContexts.pop();

		return 0;
	}

	std::any AstrumSema::visitAbstractPropertyGetter(
	    AstrumParser::AbstractPropertyGetterContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitAbstractPropertySetter(
	    AstrumParser::AbstractPropertySetterContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitExternFunctionDeclaration(
	    AstrumParser::ExternFunctionDeclarationContext* ctx) {
		if (!functionBody && unsafeDepth > 0 || ctx->Unsafe())
			cppParser.unsafeFunctions.insert(ctx->Identifier()->getText());

		return visitChildren(ctx);
	}

	std::any AstrumSema::visitFunctionTemplateDeclaration(
	    AstrumParser::FunctionTemplateDeclarationContext* ctx) {
		bool isInline        = false;
		bool isConstexpr     = false;
		bool isConsteval     = false;
		bool isUnsafe        = false;
		bool isRefReturn     = false;
		bool isConstReturn   = false;
		bool isForwardReturn = false;

		bool isStatic = false, isMutating = false, isVirtual = false, isOverride = false,
		     isFinal = false;

		int8_t varargDepth                                  = -1;
		AstrumParser::TheTypeIdContext* returnType          = nullptr;
		AstrumParser::ExpressionContext* expression         = nullptr;
		AstrumParser::FunctionParamsContext* params         = ctx->functionParams();
		AstrumParser::TemplateParamsContext* templateParams = ctx->templateParams();
		AstrumParser::TemplateArgumentListContext* templateSpecializationArgs = nullptr;
		AstrumParser::ExceptionSpecificationContext* exceptions = ctx->exceptionSpecification();

		for (auto spec : ctx->functionSpecifier()) {
			if (spec->Inline())
				isInline = true;
			else if (spec->Consteval())
				isConsteval = true;
			else if (spec->Unsafe()) {
				isUnsafe = true;
				if (unsafeDepth > 0)
					notifyErrorListeners("Unsafe context recursion", spec->Unsafe()->getSymbol());
			}
		}

		checkFunctionSpecifiers(ctx->functionSpecifier(), isInline, isStatic, isConstexpr,
		                        isConsteval, isUnsafe, isMutating, isVirtual, isOverride, isFinal);

		if (!isUnsafe && unsafeDepth > 0)
			isUnsafe = true;
		if (isUnsafe && unsafeDepth <= 0)
			unsafeDepth++;

		if (firstPass && !functionBody) {
			int lifetimes = 0;
			if (auto decl = params->paramDeclClause()) {
				bool isDefault = false;
				auto declList  = decl->paramDeclList();
				if (decl->Ellipsis() && !templateParams) {
					varargDepth = declList->paramDeclaration().size() - 1;
					cppParser.varargFunctions[ctx->Identifier()->getText()] = varargDepth;
				}
				for (auto param : declList->paramDeclaration()) {
					if (param->LifetimeAnnotation())
						++lifetimes;
					if (param->initializerClause()) {
						isDefault = true;
						if (auto spec = param->paramSpecification()) {
							if (spec->Inout() || spec->Ref() || spec->Out())
								notifyErrorListeners(
								    "Mutable reference parameters cannot have default value",
								    param->initializerClause()->getStart());
						}
					} else if (isDefault) {
						notifyErrorListeners(
						    "Default function parameters must be located at the end of the "
						    "parameter list",
						    param->Identifier()->getSymbol());
					}
				}
			}

			if (auto ret = ctx->returnType()) {
				returnType = ret->theTypeId();
				if (ret->Const())
					isConstReturn = true;
				if (ret->Ref()) {
					isRefReturn = true;
					if (lifetimes == 0 && ctx->functionParams()->paramDeclClause())
						notifyErrorListeners(
						    "A function that returns a reference must have object lifetime "
						    "annotations (for arguments or method owner).",
						    ret->Ref()->getSymbol());
				}
				if (ret->Forward())
					isForwardReturn = true;
			}

			std::optional<AccessSpecifier> access = std::nullopt;
			if (auto decl = dynamic_cast<AstrumParser::DeclarationContext*>(ctx->parent)) {
				if (auto acc = decl->accessSpecifier()) {
					if (currentAccessSpecifier.top())
						notifyErrorListeners("Cannot to redefine access specifier",
						                     acc->getStart());
					if (acc->Public()) {
						access = AccessSpecifier::Public;
					} else if (acc->Protected()) {
						access = AccessSpecifier::Protected;
					} else if (acc->Private()) {
						access = AccessSpecifier::Private;
					} else if (acc->Internal()) {
						access = AccessSpecifier::Internal;
					}
				}
			}

			if (currentAccessSpecifier.top())
				access = currentAccessSpecifier.top();
			if (!access)
				access = AccessSpecifier::Internal;
			auto id = ctx->Identifier();
			if (*access == AccessSpecifier::Protected)
				protectedSymbols.insert(id->getText());
			globalFunctions.emplace_back(FunctionDefinition {
			    id->getText(),
			    templateParams,
			    templateSpecializationArgs,
			    nullptr,
			    params,
			    returnType,
			    expression,
			    exceptions,
			    nullptr,
			    {ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()},
			    *access,
			    getCurrentCompilationCondition(),
			    isInline || isConstexpr,
			    isConstexpr,
			    isConsteval,
			    isUnsafe,
			    isRefReturn,
			    isConstReturn,
			    isForwardReturn,
			    false,
			    varargDepth});
		}

		visitChildren(ctx);

		if (checkForCurrentPass()) {
			auto idc      = ctx->Identifier();
			auto funcname = idc->getText();
			if (ctx->returnType()) {
				functionTable[funcname] = contextTypes[ctx->returnType()];
			} else {
				functionTable[funcname] = "void";
			}
			processFunctionParams(params, funcname);
		}
		auto specs = ctx->functionSpecifier();
		if (std::any_of(specs.begin(), specs.end(),
		                [&](auto spec) -> bool { return spec->Unsafe(); }))
			--unsafeDepth;

		return 0;
	}

	std::any AstrumSema::visitFunctionDefinition(AstrumParser::FunctionDefinitionContext* ctx) {
		symbolContexts.push(symbolContexts.top());
		bool isInline                                       = false;
		bool isStatic                                       = false;
		bool isConstexpr                                    = false;
		bool isConsteval                                    = false;
		bool isUnsafe                                       = false;
		bool isMutating                                     = false;
		bool isVirtual                                      = false;
		bool isOverride                                     = false;
		bool isFinal                                        = false;
		bool isRefReturn                                    = false;
		bool isConstReturn                                  = false;
		bool isForwardReturn                                = false;
		bool isCommutative                                  = false;
		bool isMain                                         = false;
		int8_t varargDepth                                  = -1;
		AstrumParser::TheTypeIdContext* returnType          = nullptr;
		AstrumParser::ExpressionContext* expression         = nullptr;
		AstrumParser::FunctionParamsContext* params         = ctx->functionParams();
		AstrumParser::TemplateParamsContext* templateParams = ctx->templateParams();
		AstrumParser::TemplateArgumentListContext* templateSpecializationArgs = nullptr;
		AstrumParser::ConstraintClauseContext* constraints      = ctx->constraintClause();
		AstrumParser::ExceptionSpecificationContext* exceptions = ctx->exceptionSpecification();
		AstrumParser::AttributeSpecifierSeqContext* attributes  = nullptr;

		checkFunctionSpecifiers(ctx->functionSpecifier(), isInline, isStatic, isConstexpr,
		                        isConsteval, isUnsafe, isMutating, isVirtual, isOverride, isFinal);

		if (isUnsafe && functionBody > 0) {
			notifyErrorListeners(
			    "Local function cannot be directly marked as unsafe, use unsafe block",
			    ctx->getStart());
		}

		if (isStatic && (!isTypeDefinitionBody() || isFriendDefinition))
			notifyErrorListeners("Global functions are implicitly static", ctx->getStart());

		if (isMutating) {
			if (!isTypeDefinitionBody() || isFriendDefinition)
				notifyErrorListeners("Global function cannot be mutating", ctx->getStart());
			if (currentTypeKind.top() == TypeKind::Class ||
			    currentTypeKind.top() == TypeKind::StaticClass ||
			    currentTypeKind.top() == TypeKind::Interface)
				notifyErrorListeners("Method of the reference type is implicitly mutating",
				                     ctx->getStart());
			if (currentTypeKind.top() == TypeKind::Enum ||
			    currentTypeKind.top() == TypeKind::EnumClass)
				notifyErrorListeners("Enums are immutable. They cannot contain a mutating method",
				                     ctx->getStart());
			if (currentTypeKind.top() == TypeKind::Union)
				notifyErrorListeners("Unions are immutable. They cannot contain a mutating method",
				                     ctx->getStart());
		}

		if (isVirtual) {
			if (!isTypeDefinitionBody() || isFriendDefinition)
				notifyErrorListeners("Global function cannot be virtual", ctx->getStart());
			else if (currentTypeKind.top() != TypeKind::Class)
				notifyErrorListeners("Cannot to declare virtual method outside the class body",
				                     ctx->getStart());
			else if (functionBody > 0)
				notifyErrorListeners("Local function cannot be virtual", ctx->getStart());
		}

		if (isOverride) {
			if (!isTypeDefinitionBody() || isFriendDefinition)
				notifyErrorListeners("Global function cannot be overrided", ctx->getStart());
			if (currentTypeKind.top() == TypeKind::StaticClass)
				notifyErrorListeners("Static class method cannot be overrided", ctx->getStart());
			if (currentTypeKind.top() == TypeKind::Interface)
				notifyErrorListeners("Interface method cannot be overrided", ctx->getStart());
			if (currentTypeKind.top() == TypeKind::Extension)
				notifyErrorListeners("Extension method cannot be overrided", ctx->getStart());
			if (functionBody > 0)
				notifyErrorListeners("Local function cannot be overrided", ctx->getStart());
		}

		if (isFinal) {
			if (!isTypeDefinitionBody() || isFriendDefinition)
				notifyErrorListeners("Global function cannot be final", ctx->getStart());
			else if (currentTypeKind.top() != TypeKind::Class &&
			         currentTypeKind.top() != TypeKind::Interface)
				notifyErrorListeners(
				    "Cannot to declare final method outside the class/interface body",
				    ctx->getStart());
			else if (functionBody > 0)
				notifyErrorListeners("Local function cannot be final", ctx->getStart());
		}

		if (ctx->shortFunctionBody()) {
			expression = ctx->shortFunctionBody()->expressionStatement()->expression();
		}

		if (!isUnsafe && unsafeDepth > 0)
			isUnsafe = true;
		if (isUnsafe && unsafeDepth <= 0)
			unsafeDepth++;

		if (!firstPass) {
			initStates.push(InitState {});
			if (auto decl = params->paramDeclClause()) {
				auto declList = decl->paramDeclList();
				for (auto param : declList->paramDeclaration()) {
					auto id = param->Identifier()->getText();
					if (auto spec = param->paramSpecification(); spec && spec->Out()) {
						if (ctx->shortFunctionBody())
							notifyErrorListeners("Arrow functions doesn't support out parameters",
							                     spec->Out()->getSymbol());
						outParams.insert(id);
						initStates.top().potentiallyAssigned.insert(id);
					}

					if (functionBody > 0 && !param->theTypeId()) {
						notifyErrorListeners(
						    "Local function must have defined types for all params",
						    param->getStop());
					}
				}
			}

			if (auto ret = ctx->returnType()) {
				if (auto idc = ret->Identifier()) {
					if (ctx->shortFunctionBody())
						notifyErrorListeners("Arrow functions doesn't support named returns",
						                     idc->getSymbol());
					auto id = idc->getText();
					outParams.insert(id);
					initStates.top().potentiallyAssigned.insert(id);
				} else if (ret->theTypeId() && ret->theTypeId()->VertLine().empty() &&
				           ret->theTypeId()->singleTypeId(0)->typeSpecifierSeq() &&
				           ret->theTypeId()
				               ->singleTypeId(0)
				               ->typeSpecifierSeq()
				               ->simpleTypeSpecifier()) {
					auto tup = ret->theTypeId()
					               ->singleTypeId(0)
					               ->typeSpecifierSeq()
					               ->simpleTypeSpecifier()
					               ->namedTupleField();
					for (auto element : tup) {
						auto id = element->Identifier()->getText();
						outParams.insert(id);
						initStates.top().potentiallyAssigned.insert(id);
					}
				}
			}
			if (constraints && !templateParams) {
				notifyErrorListeners("Only generic function can have constraints",
				                     constraints->Where()->getSymbol());
			}

			if (functionBody > 0) {
				if (ctx->simpleTemplateId()) {
					notifyErrorListeners("Local function cannot be specialization",
					                     ctx->simpleTemplateId()->getStart());
				}
				if (ctx->operatorFunctionId()) {
					notifyErrorListeners("Local function cannot be operator overloading",
					                     ctx->operatorFunctionId()->getStart());
				}
				if (ctx->shortFunctionBody() && !ctx->returnType()) {
					notifyErrorListeners("Local function must have defined return type",
					                     ctx->functionParams()->getStop());
				}
			}
		}

		if (firstPass && !functionBody) {
			if (isTypeDefinitionBody()) {
				if (currentTypeKind.top() == TypeKind::StaticClass) {
					isStatic = true;
				} else if (currentTypeKind.top() == TypeKind::UnionStruct && !isStatic &&
				           !isUnsafe) {
					notifyErrorListeners(
					    "Raw union instance method cannot be safe, it requires an unsafe specifier",
					    ctx->getStart());
				}
			}

			if (isStatic) {
				if (isMutating)
					notifyErrorListeners("Static method cannot be mutating", ctx->getStart());
				if (isVirtual || isOverride)
					notifyErrorListeners("Static method cannot be virtual or override",
					                     ctx->getStart());

				if (currentTypeKind.top() == TypeKind::Interface) {
					if (!isFinal)
						notifyErrorListeners(
						    "Not-final static method in the interface cannot have body",
						    ctx->getStart());
				} else if (isFinal) {
					notifyErrorListeners("Static method cannot be final outside the interface body",
					                     ctx->getStart());
				}
			}

			int lifetimes  = 0;
			int paramCount = 0;
			std::string firstParamType;
			if (auto decl = params->paramDeclClause()) {
				bool isDefault = false;
				auto declList  = decl->paramDeclList();
				if (decl->Ellipsis() && !templateParams) {
					if (ctx->Identifier()) {
						varargDepth = declList->paramDeclaration().size() - 1;
						cppParser.varargFunctions[ctx->Identifier()->getText()] = varargDepth;
					} else {
						notifyErrorListeners(
						    "Operator function cannot to have a variadic arguments length",
						    decl->Ellipsis()->getSymbol());
					}
				}
				paramCount = declList->paramDeclaration().size();
				if (auto t = declList->paramDeclaration(0)->theTypeId()) {
					firstParamType = t->getText();
				}

				for (auto param : declList->paramDeclaration()) {
					if (param->LifetimeAnnotation())
						++lifetimes;
					if (param->initializerClause()) {
						isDefault = true;
						if (auto spec = param->paramSpecification()) {
							if (spec->Inout() || spec->Ref() || spec->Out())
								notifyErrorListeners(
								    "Mutable reference parameters cannot have default value",
								    param->initializerClause()->getStart());
						}
					} else if (isDefault) {
						notifyErrorListeners(
						    "Default function parameters must be located at the end of the "
						    "parameter list",
						    param->Identifier()->getSymbol());
					}
				}
			}

			if (auto ret = ctx->returnType()) {
				if (isTypeDefinitionBody() && ctx->LifetimeAnnotation())
					lifetimes++;
				returnType = ret->theTypeId();
				if (ret->Const())
					isConstReturn = true;
				if (ret->Ref()) {
					isRefReturn = true;
				}
				if (ret->Forward())
					isForwardReturn = true;
			}

			bool isDefault = false;
			if (auto body = ctx->functionBody()) {
				if (body->Assign())
					isInline = true;
				else if (body->Equal())
					isConstexpr = true;
				if (isTypeDefinitionBody() && currentTypeKind.top() == TypeKind::Interface)
					isDefault = true;
			} else if (auto body = ctx->shortFunctionBody()) {
				if (body->AssignArrow())
					isInline = true;
				else if (body->EqualArrow())
					isConstexpr = true;
				if (isTypeDefinitionBody() && currentTypeKind.top() == TypeKind::Interface)
					isDefault = true;
			}

			if (auto tid = ctx->simpleTemplateId()) {
				templateSpecializationArgs = tid->templateArgumentList();
			}

			if ((templateParams || templateSpecializationArgs) && isTypeDefinitionBody()) {
				if (currentTypeKind.top() == TypeKind::Interface)
					notifyErrorListeners("Interface method cannot be generic", ctx->getStart());
				else if (currentTypeKind.top() == TypeKind::Extension && isStatic)
					notifyErrorListeners("Static extension method cannot be generic",
					                     ctx->getStart());
			}

			AstrumParser::AccessSpecifierContext* acc = nullptr;
			std::optional<AccessSpecifier> access     = std::nullopt;
			bool isProtectedInternal                  = false;
			if (!isTypeDefinitionBody()) {
				if (auto decl = reinterpret_cast<AstrumParser::DeclarationContext*>(ctx->parent)) {
					if (decl->accessSpecifier()) {
						acc = decl->accessSpecifier();
					}
					attributes = decl->attributeSpecifierSeq();
				}
			} else if (currentTypeKind.top() == TypeKind::Enum ||
			           currentTypeKind.top() == TypeKind::Union) {
				if (auto decl = reinterpret_cast<AstrumParser::EnumMemberDeclarationContext*>(
				        ctx->parent)) {
					if (decl->accessSpecifier()) {
						acc = decl->accessSpecifier();
					}
					attributes = decl->attributeSpecifierSeq();
				}
			} else if (currentTypeKind.top() == TypeKind::Extension) {
				if (auto decl = reinterpret_cast<AstrumParser::ExtensionMemberDeclarationContext*>(
				        ctx->parent)) {
					attributes = decl->attributeSpecifierSeq();
				}
			} else if (auto decl = reinterpret_cast<AstrumParser::StructMemberDeclarationContext*>(
			               ctx->parent)) {
				isProtectedInternal = decl->protectedInternal();
				if (decl->accessSpecifier()) {
					acc = decl->accessSpecifier();
				}
				attributes = decl->attributeSpecifierSeq();
			}

			if (acc) {
				if (currentAccessSpecifier.top())
					notifyErrorListeners("Cannot to redefine access specifier", acc->getStart());
				if (acc->Public()) {
					access = AccessSpecifier::Public;
				} else if (acc->Protected()) {
					if (isTypeDefinitionBody() && currentTypeKind.top() != TypeKind::Class)
						notifyErrorListeners(
						    "Cannot to declare protected member outside the class body",
						    acc->getStart());
					access = AccessSpecifier::Protected;
				} else if (acc->Private()) {
					access = AccessSpecifier::Private;
				} else if (acc->Internal()) {
					access = AccessSpecifier::Internal;
				}
			} else if (isProtectedInternal) {
				if (currentAccessSpecifier.top())
					notifyErrorListeners("Cannot to redefine access specifier", acc->getStart());
				if (isTypeDefinitionBody() && currentTypeKind.top() != TypeKind::Class)
					notifyErrorListeners(
					    "Cannot to declare protected internal member outside the class body",
					    ctx->getStart());
				access = AccessSpecifier::ProtectedInternal;
			}

			if (isTypeDefinitionBody()) {
				if (currentTypeKind.top() == TypeKind::Interface) {
					access = AccessSpecifier::Public;
				} else if (currentTypeKind.top() == TypeKind::Extension) {
					access = structStack.top()->access;
				}
			} else if (ctx->Identifier() && ctx->Identifier()->getText() == "main") {
				isMain = true;
				if (access) {
					notifyErrorListeners("Main function cannot have an explicit access specifier",
					                     ctx->getStart());
				} else {
					access = AccessSpecifier::Private;
				}

				if (paramCount > 1 || !firstParamType.empty() && firstParamType != "str[]") {
					notifyErrorListeners(
					    "Main function can have only one parameter of the type str[]",
					    ctx->functionParams()
					        ->paramDeclClause()
					        ->paramDeclList()
					        ->paramDeclaration()
					        .back()
					        ->getStop());
				}

				if (returnType && returnType->getText() != "i32") {
					notifyErrorListeners("Main function can return only i32 value",
					                     returnType->getStart());
				}
			}

			if (!isFriendDefinition) {
				if (currentAccessSpecifier.top())
					access = currentAccessSpecifier.top();
				if (!access)
					access = AccessSpecifier::Internal;
			} else {
				access = structStack.top()->access;
			}
			std::string id;
			bool isOperator = false;
			if (isMain) {
				id = "__Astrum_Main";
			} else if (ctx->Identifier()) {
				id = ctx->Identifier()->getText();
			} else if (ctx->simpleTemplateId()) {
				id = ctx->simpleTemplateId()->templateName()->Identifier()->getText();
			} else if (ctx->operatorFunctionId()) {
				if (isTypeDefinitionBody() && currentTypeKind.top() == TypeKind::StaticClass)
					notifyErrorListeners("Static class cannot overload operators",
					                     ctx->operatorFunctionId()->getStart());
				id      = ctx->operatorFunctionId()->getText();
				auto op = ctx->operatorFunctionId()->operator_();
				if (op->Exclamation())
					id = "operator*";
				StringReplace(id, "operator", "operator ");
				isOperator = true;
				if (ctx->operatorFunctionId()->operator_()->New()) {
					if (isTypeDefinitionBody()) {
						if (!isStatic)
							notifyErrorListeners("Operator new/delete overloading must be static",
							                     ctx->operatorFunctionId()->getStop());
						if (currentTypeKind.top() != TypeKind::Class)
							notifyErrorListeners(
							    "Operator new/delete overloading supports only for classes",
							    ctx->operatorFunctionId()->getStop());
					}
					if (!returnType || returnType->getText() != "Pointer")
						notifyErrorListeners("Operator new must return Pointer",
						                     ctx->operatorFunctionId()->getStop());
					if (params->paramDeclClause()) {
						auto paramsDecl =
						    params->paramDeclClause()->paramDeclList()->paramDeclaration();
						if (paramsDecl.size() > 1 ||
						    paramsDecl[0]->theTypeId() &&
						        paramsDecl[0]->theTypeId()->getText() != "usize")
							notifyErrorListeners(
							    "Operator can receive only one parameter of the type usize",
							    ctx->operatorFunctionId()->getStop());
					}
				} else if (ctx->operatorFunctionId()->operator_()->Delete()) {
					if (isTypeDefinitionBody()) {
						if (!isStatic)
							notifyErrorListeners("Operator new/delete overloading must be static",
							                     ctx->operatorFunctionId()->getStop());
						if (currentTypeKind.top() != TypeKind::Class)
							notifyErrorListeners(
							    "Operator new/delete overloading supports only for classes",
							    ctx->operatorFunctionId()->getStop());
					}
					if (returnType)
						notifyErrorListeners("Operator delete cannot return nothing",
						                     ctx->returnType()->getStop());
					if (params->paramDeclClause()) {
						auto paramsDecl =
						    params->paramDeclClause()->paramDeclList()->paramDeclaration();
						if (paramsDecl.size() > 2 ||
						    paramsDecl[0]->theTypeId() &&
						        paramsDecl[0]->theTypeId()->getText() != "Pointer")
							notifyErrorListeners(
							    "Operator delete must receive parameter of the type Pointer",
							    ctx->operatorFunctionId()->getStop());
					} else {
						notifyErrorListeners(
						    "Operator delete must receive parameter of the type Pointer",
						    ctx->operatorFunctionId()->getStop());
					}
				} else if (op->In()) {
					id = "_operator_in";
				} else if (op->DoubleCaret() || op->Tilde() || op->TildeAssign() ||
				           op->DoubleStar() || op->DoubleStarAssign() || op->Greater().size() > 2 ||
				           op->SignedRightShiftAssign() || op->Op1() || op->Op2() || op->Op3() ||
				           op->Op4() || op->Op5() || op->Op6() || op->Op7() || op->Op8() ||
				           op->Op9() || op->Op10()) {
					id = getCustomOperatorName(op->getText());
				}
			}
			if (isOperator && !id.ends_with("new") && !id.ends_with("delete"))
				StringReplace(id, " ", "");

			if (ctx->operatorFunctionId() && attributes) {
				for (auto attr : attributes->attributeSpecifier()) {
					if (attr->Identifier()->getText() == "AllowPostfix" ||
					    attr->Identifier()->getText() == "Commutative")
						isCommutative = true;
				}
			}

			if (isCommutative && !isTypeDefinitionBody() && params && !params->paramDeclClause())
				notifyErrorListeners("Operator function should have parameters",
				                     ctx->functionParams()->getStart());

			if (!isTypeDefinitionBody() || isFriendDefinition) {
				if (*access == AccessSpecifier::Protected && !isOperator)
					protectedSymbols.insert(id);
				if (isFriendDefinition)
					isInline = true;
				auto def = FunctionDefinition {
				    id,
				    templateParams,
				    templateSpecializationArgs,
				    constraints,
				    params,
				    returnType,
				    expression,
				    exceptions,
				    attributes,
				    {ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()},
				    *access,
				    getCurrentCompilationCondition(),
				    isInline || isConstexpr,
				    isConstexpr,
				    isConsteval,
				    isUnsafe,
				    isRefReturn,
				    isConstReturn,
				    isForwardReturn,
				    isCommutative,
				    varargDepth};
				if (isFriendDefinition) {
					structStack.top()->friendFuncDefinitions.emplace_back(def);
				}
				globalFunctions.emplace_back(def);
			} else {
				auto lastTparams     = getLastTypeTemplateParams();
				auto lastSpec        = getLastTypeTemplateSpecializationArgs();
				auto lastConstraints = getLastTypeConstraints();
				auto fullType        = getCurrentFullTypeName();
				structStack.top()->methods.emplace_back(MethodDefinition {
				    id,
				    templateParams,
				    templateSpecializationArgs,
				    constraints,
				    params,
				    returnType,
				    expression,
				    exceptions,
				    attributes,
				    {ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()},
				    *access,
				    getCurrentCompilationCondition(),
				    isInline || isConstexpr,
				    isConstexpr,
				    isConsteval,
				    isUnsafe,
				    isRefReturn,
				    isConstReturn,
				    isForwardReturn,
				    isCommutative,
				    varargDepth,
				    currentType,
				    fullType,
				    lastTparams,
				    lastSpec,
				    lastConstraints,
				    nullptr,
				    isProtectedTypeDefinition,
				    isUnsafeTypeDefinition,
				    isDefault,
				    isMutating,
				    isStatic,
				    isVirtual,
				    isOverride,
				    false,
				    isFinal});
				methods.insert_or_assign(
				    SourcePosition {ctx->getStart()->getLine(),
				                    ctx->getStart()->getCharPositionInLine()},
				    MethodDefinition {
				        id,
				        templateParams,
				        templateSpecializationArgs,
				        constraints,
				        params,
				        returnType,
				        expression,
				        exceptions,
				        attributes,
				        {ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()},
				        isPrivateTypeDefinition ? AccessSpecifier::Private
				                                : AccessSpecifier::Internal,
				        getCurrentCompilationCondition(),
				        isInline || isConstexpr,
				        isConstexpr,
				        isConsteval,
				        isUnsafe,
				        isRefReturn,
				        isConstReturn,
				        isForwardReturn,
				        isCommutative,
				        varargDepth,
				        currentType,
				        fullType,
				        lastTparams,
				        lastSpec,
				        lastConstraints,
				        nullptr,
				        isProtectedTypeDefinition,
				        isUnsafeTypeDefinition,
				        isDefault,
				        isMutating,
				        isStatic,
				        isVirtual,
				        isOverride && currentTypeKind.top() == TypeKind::Class,
				        false,
				        isFinal && currentTypeKind.top() == TypeKind::Class});
			}
		}

		visitChildren(ctx);

		if (checkForCurrentPass()) {
			std::string funcname;
			if (!currentType.empty() && !isFriendDefinition)
				funcname += currentType + ".";
			if (ctx->Identifier())
				funcname += ctx->Identifier()->getText();
			else if (ctx->simpleTemplateId())
				funcname += ctx->simpleTemplateId()->templateName()->Identifier()->getText();
			else if (ctx->operatorFunctionId())
				funcname += ctx->operatorFunctionId()->getText();
			if (ctx->returnType()) {
				functionTable[funcname] = contextTypes[ctx->returnType()];
			} else if (ctx->functionBody()) {
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
		if (std::any_of(specs.begin(), specs.end(),
		                [&](auto spec) -> bool { return spec->Unsafe(); }))
			--unsafeDepth;

		if (!firstPass) {
			auto currentState = initStates.top();
			for (const auto& param : outParams) {
				if (currentState.definitelyAssigned.find(param) ==
				    currentState.definitelyAssigned.end()) {
					notifyErrorListeners(
					    std::format("Out parameter {} was not initialized on all execution flow",
					                param),
					    ctx->getStop());
				}
			}
			initStates.pop();
		}
		outParams.clear();
		symbolContexts.pop();

		return 0;
	}

	std::any AstrumSema::visitAbstractMethodDeclaration(
	    AstrumParser::AbstractMethodDeclarationContext* ctx) {
		symbolContexts.push(symbolContexts.top());
		bool isMutating                                         = ctx->Mutable();
		bool isRefReturn                                        = false;
		bool isConstReturn                                      = false;
		int8_t varargDepth                                      = -1;
		AstrumParser::TheTypeIdContext* returnType              = nullptr;
		AstrumParser::FunctionParamsContext* params             = ctx->functionParams();
		AstrumParser::ExceptionSpecificationContext* exceptions = ctx->exceptionSpecification();

		if (firstPass && !functionBody) {
			if (!structStack.top()->isAbstract)
				notifyErrorListeners("An abstract method can only be declared in an abstract class",
				                     ctx->Abstract()->getSymbol());

			int lifetimes = 0;
			if (auto decl = params->paramDeclClause()) {
				auto declList = decl->paramDeclList();
				if (decl->Ellipsis()) {
					if (ctx->Identifier()) {
						varargDepth = declList->paramDeclaration().size() - 1;
						cppParser.varargFunctions[ctx->Identifier()->getText()] = varargDepth;
					} else {
						notifyErrorListeners(
						    "Operator function cannot to have a variadic arguments length",
						    decl->Ellipsis()->getSymbol());
					}
				}
				for (auto param : declList->paramDeclaration()) {
					if (param->LifetimeAnnotation())
						++lifetimes;
					if (param->initializerClause()) {
						if (auto spec = param->paramSpecification()) {
							if (spec->Inout() || spec->Ref() || spec->Out())
								notifyErrorListeners(
								    "Mutable reference parameters cannot have default value",
								    param->initializerClause()->getStart());
						}
					}
				}
			}

			if (auto ret = ctx->returnType()) {
				if (isTypeDefinitionBody() && ctx->LifetimeAnnotation())
					lifetimes++;
				returnType = ret->theTypeId();
				if (ret->Const())
					isConstReturn = true;
				if (ret->Ref()) {
					isRefReturn = true;
				}
			}

			std::optional<AccessSpecifier> access;
			bool isProtectedInternal = ctx->protectedInternal();

			if (auto acc = ctx->accessSpecifier()) {
				if (currentAccessSpecifier.top())
					notifyErrorListeners("Cannot to redefine access specifier", acc->getStart());
				if (acc->Public()) {
					access = AccessSpecifier::Public;
				} else if (acc->Protected()) {
					if (isTypeDefinitionBody() && currentTypeKind.top() != TypeKind::Class)
						notifyErrorListeners(
						    "Cannot to declare protected member outside the class body",
						    acc->getStart());
					access = AccessSpecifier::Protected;
				} else if (acc->Private()) {
					notifyErrorListeners("An abstract method cannot be private", acc->getStart());
				} else if (acc->Internal()) {
					access = AccessSpecifier::Internal;
				}
			} else if (isProtectedInternal) {
				if (currentAccessSpecifier.top())
					notifyErrorListeners("Cannot to redefine access specifier", acc->getStart());
				if (isTypeDefinitionBody() && currentTypeKind.top() != TypeKind::Class)
					notifyErrorListeners(
					    "Cannot to declare protected internal member outside the class body",
					    acc->getStart());
				access = AccessSpecifier::ProtectedInternal;
			}

			if (currentAccessSpecifier.top())
				access = currentAccessSpecifier.top();
			if (!access)
				access = AccessSpecifier::Internal;
			std::string id;
			bool isOperator = false;
			if (ctx->Identifier())
				id = ctx->Identifier()->getText();
			else if (ctx->operatorFunctionId()) {
				id = ctx->operatorFunctionId()->getText();
				if (ctx->operatorFunctionId()->operator_()->Exclamation())
					id = "operator*";
				StringReplace(id, "operator", "operator ");
				isOperator = true;
			}
			if (isOperator && !id.ends_with("new") && !id.ends_with("delete"))
				StringReplace(id, " ", "");
			auto lastTparams     = getLastTypeTemplateParams();
			auto lastSpec        = getLastTypeTemplateSpecializationArgs();
			auto lastConstraints = getLastTypeConstraints();
			auto fullType        = getCurrentFullTypeName();
			auto def             = MethodDefinition {
                id,
                nullptr,
                nullptr,
                nullptr,
                params,
                returnType,
                nullptr,
                exceptions,
                ctx->attributeSpecifierSeq(),
                {ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()},
                *access,
                getCurrentCompilationCondition(),
                false,
                false,
                false,
                false,
                isRefReturn,
                isConstReturn,
                false,
                false,
                varargDepth,
                currentType,
                fullType,
                lastTparams,
                lastSpec,
                lastConstraints,
                nullptr,
                isProtectedTypeDefinition,
                isUnsafeTypeDefinition,
                false,
                isMutating,
                false,
                false,
                false,
                true,
                false};
			structStack.top()->methods.emplace_back(def);
			methods.insert_or_assign(SourcePosition {ctx->getStart()->getLine(),
			                                         ctx->getStart()->getCharPositionInLine()},
			                         def);
		}

		visitChildren(ctx);

		if (checkForCurrentPass()) {
			std::string funcname;
			if (!currentType.empty())
				funcname += currentType + ".";
			if (ctx->Identifier())
				funcname += ctx->Identifier()->getText();
			else if (ctx->operatorFunctionId())
				funcname += ctx->operatorFunctionId()->getText();
			if (ctx->returnType()) {
				functionTable[funcname] = contextTypes[ctx->returnType()];
			} else {
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

		return 0;
	}

	std::any AstrumSema::visitInterfaceMethodDeclaration(
	    AstrumParser::InterfaceMethodDeclarationContext* ctx) {
		symbolContexts.push(symbolContexts.top());
		bool isRefReturn                                        = false;
		bool isConstReturn                                      = false;
		int8_t varargDepth                                      = -1;
		AstrumParser::TheTypeIdContext* returnType              = nullptr;
		AstrumParser::FunctionParamsContext* params             = ctx->functionParams();
		AstrumParser::ExceptionSpecificationContext* exceptions = ctx->exceptionSpecification();

		if (firstPass && !functionBody) {
			int lifetimes = 0;
			if (auto decl = params->paramDeclClause()) {
				auto declList = decl->paramDeclList();
				if (decl->Ellipsis()) {
					if (ctx->Identifier()) {
						varargDepth = declList->paramDeclaration().size() - 1;
						cppParser.varargFunctions[ctx->Identifier()->getText()] = varargDepth;
					} else {
						notifyErrorListeners(
						    "Operator function cannot to have a variadic arguments length",
						    decl->Ellipsis()->getSymbol());
					}
				}
				for (auto param : declList->paramDeclaration()) {
					if (param->LifetimeAnnotation())
						++lifetimes;
					if (param->initializerClause()) {
						if (auto spec = param->paramSpecification()) {
							if (spec->Inout() || spec->Ref() || spec->Out())
								notifyErrorListeners(
								    "Mutable reference parameters cannot have default value",
								    param->initializerClause()->getStart());
						}
					}
				}
			}

			if (auto ret = ctx->returnType()) {
				if (isTypeDefinitionBody() && ctx->LifetimeAnnotation())
					lifetimes++;
				returnType = ret->theTypeId();
				if (ret->Const())
					isConstReturn = true;
				if (ret->Ref()) {
					isRefReturn = true;
				}
			}

			std::string id;
			bool isOperator = false;
			if (ctx->Identifier())
				id = ctx->Identifier()->getText();
			else if (ctx->operatorFunctionId()) {
				id = ctx->operatorFunctionId()->getText();
				if (ctx->operatorFunctionId()->operator_()->Exclamation())
					id = "operator*";
				StringReplace(id, "operator", "operator ");
				isOperator = true;
			}
			if (isOperator && !id.ends_with("new") && !id.ends_with("delete"))
				StringReplace(id, " ", "");
			auto lastTparams     = getLastTypeTemplateParams();
			auto lastSpec        = getLastTypeTemplateSpecializationArgs();
			auto lastConstraints = getLastTypeConstraints();
			auto fullType        = getCurrentFullTypeName();
			auto def             = MethodDefinition {
                id,
                nullptr,
                nullptr,
                nullptr,
                params,
                returnType,
                nullptr,
                exceptions,
                ctx->attributeSpecifierSeq(),
                {ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()},
                AccessSpecifier::Public,
                getCurrentCompilationCondition(),
                false,
                false,
                false,
                false,
                isRefReturn,
                isConstReturn,
                false,
                false,
                varargDepth,
                currentType,
                fullType,
                lastTparams,
                lastSpec,
                lastConstraints,
                nullptr,
                isProtectedTypeDefinition,
                isUnsafeTypeDefinition,
                false,
                false,
                ctx->Static() != nullptr,
                false,
                false,
                true,
                false};
			structStack.top()->methods.emplace_back(def);
		}

		visitChildren(ctx);

		if (checkForCurrentPass()) {
			std::string funcname;
			if (!currentType.empty())
				funcname += currentType + ".";
			if (ctx->Identifier())
				funcname += ctx->Identifier()->getText();
			else if (ctx->operatorFunctionId())
				funcname += ctx->operatorFunctionId()->getText();
			if (ctx->returnType()) {
				functionTable[funcname] = contextTypes[ctx->returnType()];
			} else {
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

		return 0;
	}

	std::any AstrumSema::visitFunctionSpecifier(AstrumParser::FunctionSpecifierContext* ctx) {
		return 0;
	}

	std::any AstrumSema::visitFunctionParams(AstrumParser::FunctionParamsContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitParamDeclClause(AstrumParser::ParamDeclClauseContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitParamDeclList(AstrumParser::ParamDeclListContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitParamDeclaration(AstrumParser::ParamDeclarationContext* ctx) {
		visitChildren(ctx);

		if (auto t = ctx->theTypeId()) {
			symbolTable[ctx->Identifier()->getText()] = contextTypes[t];
		}

		return 0;
	}

	std::any AstrumSema::visitParamSpecification(AstrumParser::ParamSpecificationContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitReturnType(AstrumParser::ReturnTypeContext* ctx) {
		visitChildren(ctx);

		if (!typeStack.empty()) {
			contextTypes[ctx] = typeStack.top();
			if (!currentSubtype.empty())
				contextTypes[ctx] += "<" + currentSubtype + ">";
			if (auto id = ctx->Identifier()) {
				symbolTable[id->getText()] = contextTypes[ctx->theTypeId()];
			} else if (auto t = ctx->theTypeId()) {
				if (t->VertLine().empty()) {
					if (auto st = t->singleTypeId(0)->typeSpecifierSeq()->simpleTypeSpecifier()) {
						for (auto f : st->namedTupleField()) {
							symbolTable[f->Identifier()->getText()] = contextTypes[f->theTypeId()];
						}
					}
				}
			}
		}

		return 0;
	}

	std::any AstrumSema::visitFunctionBody(AstrumParser::FunctionBodyContext* ctx) {
		depth++;
		functionBody++;

		if (!firstPass || propertyBody)
			visitChildren(ctx);

		depth--;
		functionBody--;

		return 0;
	}

	std::any AstrumSema::visitShortFunctionBody(AstrumParser::ShortFunctionBodyContext* ctx) {
		depth++;
		functionBody++;

		if (!firstPass || propertyBody)
			visitChildren(ctx);

		depth--;
		functionBody--;

		return 0;
	}

	std::any AstrumSema::visitExceptionSpecification(
	    AstrumParser::ExceptionSpecificationContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitFriendDeclaration(AstrumParser::FriendDeclarationContext* ctx) {
		isFriendDefinition = true;

		visitChildren(ctx);

		isFriendDefinition = false;
		if (!firstPass || functionBody)
			return 0;

		if (ctx->functionDefinition()) {
			// do nothing
		} else if (ctx->functionParams()) {
			structStack.top()->friendFuncDeclarations.emplace_back(FunctionDeclaration {
			    ctx->Identifier()->getText(),
			    ctx->functionParams(),
			    ctx->returnType(),
			    ctx->exceptionSpecification(),
			    {ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()},
			    getCurrentCompilationCondition()});
		} else {
			structStack.top()->friendTypes.emplace_back(ForwardDeclaration {
			    ctx->Identifier()->getText(),
			    ctx->templateParams(),
			    nullptr,
			    AccessSpecifier::Internal,
			    {ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()},
			    getCurrentCompilationCondition(),
			    false});
		}

		return 0;
	}

	std::any AstrumSema::visitExternMethodDeclaration(
	    AstrumParser::ExternMethodDeclarationContext* ctx) {
		isFriendDefinition = true;

		visitChildren(ctx);

		isFriendDefinition = false;
		if (!firstPass || functionBody)
			return 0;

		structStack.top()->friendFuncDeclarations.emplace_back(FunctionDeclaration {
		    ctx->Identifier()->getText(),
		    ctx->functionParams(),
		    ctx->returnType(),
		    ctx->exceptionSpecification(),
		    {ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()},
		    getCurrentCompilationCondition(),
		    true});

		return 0;
	}

	std::any AstrumSema::visitOperatorFunctionId(AstrumParser::OperatorFunctionIdContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitConstructor(AstrumParser::ConstructorContext* ctx) {
		if (currentTypeKind.top() == TypeKind::StaticClass)
			notifyErrorListeners("Static class cannot have a constructor",
			                     ctx->This()->getSymbol());
		symbolContexts.push(symbolContexts.top());
		bool isInline                                           = ctx->Inline();
		bool isConstexpr                                        = false;
		bool isUnsafe                                           = false;
		bool isDefault                                          = ctx->Default();
		int8_t varargDepth                                      = -1;
		AstrumParser::FunctionParamsContext* params             = ctx->functionParams();
		AstrumParser::TemplateParamsContext* templateParams     = ctx->templateParams();
		AstrumParser::ConstraintClauseContext* constraints      = ctx->constraintClause();
		AstrumParser::ExceptionSpecificationContext* exceptions = ctx->exceptionSpecification();
		AstrumParser::ImplicitSpecificationContext* implicit    = ctx->implicitSpecification();
		AstrumParser::AttributeSpecifierSeqContext* attributes  = nullptr;

		if (ctx->Unsafe()) {
			isUnsafe = true;
			if (unsafeDepth > 0)
				notifyErrorListeners("Unsafe context recursion", ctx->Unsafe()->getSymbol());
		}

		if (!isUnsafe && unsafeDepth > 0)
			isUnsafe = true;
		if (isUnsafe && unsafeDepth <= 0)
			unsafeDepth++;

		if (firstPass && !functionBody) {
			if (currentTypeKind.top() == TypeKind::Class) {
				if (structStack.top()->isAbstract && implicit)
					notifyErrorListeners("Abstract class cannot have an implicit constructor",
					                     implicit->getStart());
				constructorCounts.top()++;
			}
			if (constraints && !templateParams) {
				notifyErrorListeners("Only generic constructor can have constraints",
				                     constraints->Where()->getSymbol());
			}

			if (isDefault)
				isInline = true;
			if (ctx->Equal())
				isConstexpr = true;
			if (auto decl = params->paramDeclClause()) {
				bool isDefaultParam = false;
				auto declList       = decl->paramDeclList();
				if (decl->Ellipsis() && !templateParams) {
					varargDepth = declList->paramDeclaration().size() - 1;
					cppParser.varargFunctions[currentType] = varargDepth;
				}
				for (auto param : declList->paramDeclaration()) {
					auto spec = param->paramSpecification();
					if (spec && spec->Out())
						notifyErrorListeners("Cannot to use out parameters in the constructor",
						                     spec->Out()->getSymbol());
					if (param->initializerClause()) {
						isDefaultParam = true;
						if (spec) {
							if (spec->Inout() || spec->Ref() || spec->Out())
								notifyErrorListeners(
								    "Mutable reference parameters cannot have default value",
								    param->initializerClause()->getStart());
						}
					} else if (isDefaultParam) {
						notifyErrorListeners(
						    "Default function parameters must be located at the end of the "
						    "parameter list",
						    param->Identifier()->getSymbol());
					}
				}
			} else {
				structStack.top()->isDefaultConstructible = true;
			}

			if (auto body = ctx->constructorBody()) {
				if (body->Assign())
					isInline = true;
				else if (body->Equal())
					isConstexpr = true;
			} else if (auto body = ctx->delegatingConstructorBody()) {
				if (body->AssignArrow())
					isInline = true;
				else if (body->EqualArrow())
					isConstexpr = true;
			}

			if (isConstexpr)
				structStack.top()->isConstexpr = true;

			AstrumParser::AccessSpecifierContext* acc = nullptr;
			std::optional<AccessSpecifier> access     = std::nullopt;
			bool isProtectedInternal                  = false;
			if (currentTypeKind.top() != TypeKind::Extension) {
				if (auto decl = reinterpret_cast<AstrumParser::StructMemberDeclarationContext*>(
				        ctx->parent)) {
					isProtectedInternal = decl->protectedInternal();
					attributes          = decl->attributeSpecifierSeq();
					if (decl->accessSpecifier()) {
						acc = decl->accessSpecifier();
					}
				}
			} else {
				if (auto decl = reinterpret_cast<AstrumParser::ExtensionMemberDeclarationContext*>(
				        ctx->parent)) {
					attributes = decl->attributeSpecifierSeq();
				}
			}

			if (acc) {
				if (currentAccessSpecifier.top())
					notifyErrorListeners("Cannot to redefine access specifier", acc->getStart());
				if (acc->Public()) {
					access = AccessSpecifier::Public;
				} else if (acc->Protected()) {
					if (isTypeDefinitionBody() && currentTypeKind.top() != TypeKind::Class)
						notifyErrorListeners(
						    "Cannot to declare protected member outside the class body",
						    acc->getStart());
					access = AccessSpecifier::Protected;
				} else if (acc->Private()) {
					access = AccessSpecifier::Private;
				} else if (acc->Internal()) {
					access = AccessSpecifier::Internal;
				}

				if (currentTypeKind.top() == TypeKind::EnumClass && !acc->Private()) {
					notifyErrorListeners("Enum class constructor must be private", acc->getStart());
				}
			} else if (isProtectedInternal) {
				if (currentAccessSpecifier.top())
					notifyErrorListeners("Cannot to redefine access specifier", ctx->getStart());
				if (isTypeDefinitionBody() && currentTypeKind.top() != TypeKind::Class)
					notifyErrorListeners(
					    "Cannot to declare protected internal member outside the class body",
					    ctx->getStart());
				if (currentTypeKind.top() == TypeKind::EnumClass) {
					notifyErrorListeners("Enum class constructor must be private", ctx->getStart());
				}
				access = AccessSpecifier::ProtectedInternal;
			}

			if (currentTypeKind.top() == TypeKind::Extension) {
				access = structStack.top()->access;
			}

			if (currentTypeKind.top() != TypeKind::EnumClass) {
				if (currentAccessSpecifier.top())
					access = currentAccessSpecifier.top();
				if (!access)
					access = AccessSpecifier::Internal;
			} else {
				access = AccessSpecifier::Private;
			}

			if ((*access == AccessSpecifier::Public || *access == AccessSpecifier::Internal) &&
			    structStack.top()->isAbstract)
				notifyErrorListeners(
				    "Cannot to define public or internal constructor in the abstract class",
				    ctx->getStart());

			std::string id = structStack.top()->id;
			if (currentTypeKind.top() == TypeKind::Class ||
			    currentTypeKind.top() == TypeKind::EnumClass)
				id = "__Class_" + id;

			auto lastTparams     = getLastTypeTemplateParams();
			auto lastSpec        = getLastTypeTemplateSpecializationArgs();
			auto lastConstraints = getLastTypeConstraints();
			auto fullType        = getCurrentFullTypeName();
			structStack.top()->methods.emplace_back(MethodDefinition {
			    id,
			    templateParams,
			    nullptr,
			    constraints,
			    params,
			    nullptr,
			    nullptr,
			    exceptions,
			    attributes,
			    {ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()},
			    *access,
			    getCurrentCompilationCondition(),
			    isInline || isConstexpr,
			    isConstexpr,
			    false,
			    isUnsafe,
			    false,
			    false,
			    false,
			    false,
			    varargDepth,
			    currentType,
			    fullType,
			    lastTparams,
			    lastSpec,
			    lastConstraints,
			    implicit,
			    isProtectedTypeDefinition,
			    isUnsafeTypeDefinition,
			    isDefault,
			    true,
			    false,
			    false,
			    false,
			    false,
			    false,
			    true});
			methods.insert_or_assign(
			    SourcePosition {ctx->getStart()->getLine(),
			                    ctx->getStart()->getCharPositionInLine()},
			    MethodDefinition {
			        id,
			        templateParams,
			        nullptr,
			        constraints,
			        params,
			        nullptr,
			        nullptr,
			        exceptions,
			        attributes,
			        {ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()},
			        isPrivateTypeDefinition ? AccessSpecifier::Private : AccessSpecifier::Internal,
			        getCurrentCompilationCondition(),
			        isInline || isConstexpr,
			        isConstexpr,
			        false,
			        isUnsafe,
			        false,
			        false,
			        false,
			        false,
			        varargDepth,
			        currentType,
			        fullType,
			        lastTparams,
			        lastSpec,
			        lastConstraints,
			        implicit,
			        isProtectedTypeDefinition,
			        isUnsafeTypeDefinition,
			        isDefault,
			        true,
			        false,
			        false,
			        false,
			        false,
			        false,
			        true});
		}

		visitChildren(ctx);

		if (ctx->Unsafe())
			--unsafeDepth;

		if (firstPass && !functionBody) {
			if (auto params = ctx->functionParams()->paramDeclClause()) {
				if (params->paramDeclList()->paramDeclaration().size() ==
				    currentFields[ctx->constructorBody()].size()) {
					structStack.top()->hasAggregateInit = true;
				}
				std::string args;
				bool first    = true;
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

		return 0;
	}

	std::any AstrumSema::visitConstructorBody(AstrumParser::ConstructorBodyContext* ctx) {
		++depth;
		++functionBody;

		if (firstPass) {
			for (const auto& field : structStack.top()->fields) {
				if (!field.isStatic && !field.isThreadLocal) {
					auto id = field.id;
					StringReplace(id, "& ", "");
					currentFields[ctx].insert(id);
				}
			}
			for (const auto& prop : structStack.top()->properties) {
				if (!prop.isStatic && prop.setter && propertiesNeedField.contains(prop.setter)) {
					auto id = prop.id;
					StringReplace(id, "& ", "");
					currentFields[ctx].insert("p_" + id);
				}
			}

			if (currentTypeKind.top() == TypeKind::Extension) {
				if (!ctx->delegatingConstructorStatement() ||
				    !ctx->delegatingConstructorStatement()->This())
					notifyErrorListeners(
					    "Extension constructor must call the original type constructor",
					    ctx->getStart());
			}
		}

		visitChildren(ctx);

		--depth;
		--functionBody;

		return 0;
	}

	std::any AstrumSema::visitMemberInitializationList(
	    AstrumParser::MemberInitializationListContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitDelegatingConstructorBody(
	    AstrumParser::DelegatingConstructorBodyContext* ctx) {
		depth++;
		functionBody++;

		visitChildren(ctx);

		depth--;
		functionBody--;

		return 0;
	}

	std::any AstrumSema::visitDelegatingConstructorStatement(
	    AstrumParser::DelegatingConstructorStatementContext* ctx) {
		if (ctx->Super() && currentTypeKind.top() != TypeKind::Class)
			notifyErrorListeners(
			    "Cannot to delegate constructor of a superclass outside the class body",
			    ctx->Super()->getSymbol());

		visitChildren(ctx);

		while (!typeStack.empty()) typeStack.pop();
		currentTemplateArgs.clear();
		currentSubtype.clear();

		return 0;
	}

	std::any AstrumSema::visitMemberInitializationStatement(
	    AstrumParser::MemberInitializationStatementContext* ctx) {
		visitChildren(ctx);

		while (!typeStack.empty()) typeStack.pop();
		currentTemplateArgs.clear();
		currentSubtype.clear();

		return 0;
	}

	std::any AstrumSema::visitImplicitSpecification(
	    AstrumParser::ImplicitSpecificationContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitDestructor(AstrumParser::DestructorContext* ctx) {
		if (currentTypeKind.top() != TypeKind::Class && currentTypeKind.top() != TypeKind::Struct &&
		    currentTypeKind.top() != TypeKind::RefStruct &&
		    currentTypeKind.top() != TypeKind::Union &&
		    currentTypeKind.top() != TypeKind::UnionStruct)
			notifyErrorListeners("Cannot to define destructor outside the class/struct/union body",
			                     ctx->Tilde()->getSymbol());

		if (!checkForCurrentPass())
			return 0;

		symbolContexts.push(symbolContexts.top());

		std::string id = "~" + structStack.top()->id;
		if (currentTypeKind.top() == TypeKind::Class)
			id.insert(1, "__Class_");
		auto lastTparams     = getLastTypeTemplateParams();
		auto lastSpec        = getLastTypeTemplateSpecializationArgs();
		auto lastConstraints = getLastTypeConstraints();
		auto fullType        = getCurrentFullTypeName();
		auto pos =
		    SourcePosition {ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()};
		AstrumParser::ExpressionContext* expression = nullptr;
		bool isInline                               = ctx->Inline();
		bool isConstexpr                            = false;
		bool isUnsafe                               = unsafeDepth > 0;

		if (auto body = ctx->functionBody()) {
			if (body->Equal())
				isConstexpr = true;
			else if (body->Assign())
				isInline = true;
		} else if (auto body = ctx->shortFunctionBody()) {
			expression = body->expressionStatement()->expression();
			if (body->EqualArrow())
				isConstexpr = true;
			else if (body->AssignArrow())
				isInline = true;
		}

		structStack.top()->methods.emplace_back(MethodDefinition {id,
		                                                          nullptr,
		                                                          nullptr,
		                                                          nullptr,
		                                                          nullptr,
		                                                          nullptr,
		                                                          expression,
		                                                          ctx->exceptionSpecification(),
		                                                          nullptr,
		                                                          pos,
		                                                          AccessSpecifier::Public,
		                                                          getCurrentCompilationCondition(),
		                                                          isInline || isConstexpr,
		                                                          isConstexpr,
		                                                          false,
		                                                          isUnsafe,
		                                                          false,
		                                                          false,
		                                                          false,
		                                                          false,
		                                                          -1,
		                                                          currentType,
		                                                          fullType,
		                                                          lastTparams,
		                                                          lastSpec,
		                                                          lastConstraints,
		                                                          nullptr,
		                                                          isProtectedTypeDefinition,
		                                                          isUnsafeTypeDefinition,
		                                                          false,
		                                                          true,
		                                                          false,
		                                                          false,
		                                                          false,
		                                                          false,
		                                                          false,
		                                                          false,
		                                                          true});
		methods.insert_or_assign(
		    pos, MethodDefinition {
		             id,
		             nullptr,
		             nullptr,
		             nullptr,
		             nullptr,
		             nullptr,
		             expression,
		             ctx->exceptionSpecification(),
		             nullptr,
		             pos,
		             isPrivateTypeDefinition ? AccessSpecifier::Private : AccessSpecifier::Internal,
		             getCurrentCompilationCondition(),
		             isInline || isConstexpr,
		             isConstexpr,
		             false,
		             isUnsafe,
		             false,
		             false,
		             false,
		             false,
		             -1,
		             currentType,
		             fullType,
		             lastTparams,
		             lastSpec,
		             lastConstraints,
		             nullptr,
		             isProtectedTypeDefinition,
		             isUnsafeTypeDefinition,
		             false,
		             true,
		             false,
		             false,
		             false,
		             false,
		             false,
		             false,
		             true});

		visitChildren(ctx);

		symbolContexts.pop();

		return 0;
	}

	std::any AstrumSema::visitConversionFunction(AstrumParser::ConversionFunctionContext* ctx) {
		if (isTypeDefinitionBody()) {
			if (currentTypeKind.top() == TypeKind::StaticClass)
				notifyErrorListeners("Static class cannot define type conversions",
				                     ctx->conversionFunctionId()->getStart());
			else if (currentTypeKind.top() == TypeKind::UnionStruct)
				notifyErrorListeners("Raw union does not support type conversions",
				                     ctx->conversionFunctionId()->getStart());
		}
		symbolContexts.push(symbolContexts.top());
		bool isInline                               = false;
		bool isConstexpr                            = false;
		bool isConsteval                            = false;
		bool isUnsafe                               = false;
		bool isVirtual                              = false;
		bool isOverride                             = false;
		bool isFinal                                = false;
		AstrumParser::TheTypeIdContext* returnType  = ctx->conversionFunctionId()->theTypeId();
		AstrumParser::ExpressionContext* expression = nullptr;
		AstrumParser::TemplateParamsContext* templateParams     = ctx->templateParams();
		AstrumParser::ConstraintClauseContext* constraints      = ctx->constraintClause();
		AstrumParser::ExceptionSpecificationContext* exceptions = ctx->exceptionSpecification();
		AstrumParser::ImplicitSpecificationContext* implicit    = ctx->implicitSpecification();
		AstrumParser::AttributeSpecifierSeqContext* attributes  = nullptr;

		bool isStatic = false, isMutating = false;
		checkFunctionSpecifiers(ctx->functionSpecifier(), isInline, isStatic, isConstexpr,
		                        isConsteval, isUnsafe, isMutating, isVirtual, isOverride, isFinal);

		if (isStatic)
			notifyErrorListeners("Conversion method cannot be static", ctx->getStart());

		if (isMutating)
			notifyErrorListeners("Conversion method cannot be mutating", ctx->getStart());

		if (isVirtual && currentTypeKind.top() != TypeKind::Class)
			notifyErrorListeners("Cannot to declare virtual method outside the class body",
			                     ctx->getStart());

		if (isFinal && currentTypeKind.top() != TypeKind::Class)
			notifyErrorListeners("Cannot to declare final method outside the class body",
			                     ctx->getStart());

		if (ctx->shortFunctionBody()) {
			expression = ctx->shortFunctionBody()->expressionStatement()->expression();
		}

		if (!isUnsafe && unsafeDepth > 0)
			isUnsafe = true;
		if (isUnsafe && unsafeDepth <= 0)
			unsafeDepth++;

		if (firstPass && !functionBody) {
			if (auto body = ctx->functionBody()) {
				if (body->Assign())
					isInline = true;
				else if (body->Equal())
					isConstexpr = true;
			} else if (auto body = ctx->shortFunctionBody()) {
				if (body->AssignArrow())
					isInline = true;
				else if (body->EqualArrow())
					isConstexpr = true;
			}

			AstrumParser::AccessSpecifierContext* acc = nullptr;
			bool isProtectedInternal                  = false;
			if (constraints && !templateParams) {
				notifyErrorListeners("Only generic function can have constraints",
				                     constraints->Where()->getSymbol());
			}
			if (auto decl =
			        reinterpret_cast<AstrumParser::StructMemberDeclarationContext*>(ctx->parent)) {
				isProtectedInternal = decl->protectedInternal();
				if (decl->accessSpecifier()) {
					acc = decl->accessSpecifier();
				}
				attributes = decl->attributeSpecifierSeq();
			}

			auto access = resolveAccessSpecifier(acc, isProtectedInternal);
			if (access && *access == AccessSpecifier::Protected &&
			    currentTypeKind.top() != TypeKind::Class)
				notifyErrorListeners("Cannot to declare protected member outside the class body",
				                     acc->getStart());

			if (isProtectedInternal && currentTypeKind.top() != TypeKind::Class)
				notifyErrorListeners(
				    "Cannot to declare protected internal member outside the class body",
				    acc->getStart());

			if (!access)
				access = AccessSpecifier::Internal;
			std::string id;
			auto lastTparams     = getLastTypeTemplateParams();
			auto lastSpec        = getLastTypeTemplateSpecializationArgs();
			auto lastConstraints = getLastTypeConstraints();
			auto fullType        = getCurrentFullTypeName();
			bool isRefReturn     = ctx->conversionFunctionId()->Ref();
			bool isConstReturn   = ctx->conversionFunctionId()->Const();
			structStack.top()->methods.emplace_back(MethodDefinition {
			    id,
			    templateParams,
			    nullptr,
			    constraints,
			    nullptr,
			    returnType,
			    expression,
			    exceptions,
			    attributes,
			    {ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()},
			    *access,
			    getCurrentCompilationCondition(),
			    isInline || isConstexpr,
			    isConstexpr,
			    isConsteval,
			    isUnsafe,
			    isRefReturn,
			    isConstReturn,
			    false,
			    false,
			    -1,
			    currentType,
			    fullType,
			    lastTparams,
			    lastSpec,
			    lastConstraints,
			    implicit,
			    isProtectedTypeDefinition,
			    isUnsafeTypeDefinition,
			    false,
			    false,
			    false,
			    isVirtual,
			    isOverride,
			    false,
			    isFinal,
			    false,
			    false,
			    true});
			methods.insert_or_assign(
			    SourcePosition {ctx->getStart()->getLine(),
			                    ctx->getStart()->getCharPositionInLine()},
			    MethodDefinition {
			        id,
			        templateParams,
			        nullptr,
			        constraints,
			        nullptr,
			        returnType,
			        expression,
			        exceptions,
			        attributes,
			        {ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()},
			        isPrivateTypeDefinition ? AccessSpecifier::Private : AccessSpecifier::Internal,
			        getCurrentCompilationCondition(),
			        isInline || isConstexpr,
			        isConstexpr,
			        isConsteval,
			        isUnsafe,
			        isRefReturn,
			        isConstReturn,
			        false,
			        false,
			        -1,
			        currentType,
			        fullType,
			        lastTparams,
			        lastSpec,
			        lastConstraints,
			        implicit,
			        isProtectedTypeDefinition,
			        isUnsafeTypeDefinition,
			        false,
			        false,
			        false,
			        isVirtual,
			        isOverride && currentTypeKind.top() == TypeKind::Class,
			        false,
			        isFinal && currentTypeKind.top() == TypeKind::Class,
			        false,
			        false,
			        true});
		}

		visitChildren(ctx);

		auto specs = ctx->functionSpecifier();
		if (std::any_of(specs.begin(), specs.end(),
		                [&](auto spec) -> bool { return spec->Unsafe(); }))
			--unsafeDepth;
		symbolContexts.pop();

		return 0;
	}

	std::any AstrumSema::visitConversionFunctionId(AstrumParser::ConversionFunctionIdContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitIndexer(AstrumParser::IndexerContext* ctx) {
		if (currentTypeKind.top() == TypeKind::StaticClass)
			notifyErrorListeners("Static class cannot have an indexer", ctx->getStart());
		else if (currentTypeKind.top() == TypeKind::UnionStruct)
			notifyErrorListeners("Raw union cannot have an indexer", ctx->getStart());
		symbolContexts.push(symbolContexts.top());
		bool isInline                                           = false;
		bool isStatic                                           = false;
		bool isConstexpr                                        = false;
		bool isConsteval                                        = false;
		bool isUnsafe                                           = false;
		bool isMutating                                         = false;
		bool isVirtual                                          = false;
		bool isOverride                                         = false;
		bool isFinal                                            = false;
		bool isRefReturn                                        = false;
		bool isConstReturn                                      = false;
		bool isForwardReturn                                    = false;
		int8_t varargDepth                                      = -1;
		AstrumParser::TheTypeIdContext* returnType              = ctx->returnType()->theTypeId();
		AstrumParser::ExpressionContext* expression             = nullptr;
		AstrumParser::ParamDeclClauseContext* params            = ctx->paramDeclClause();
		AstrumParser::TemplateParamsContext* templateParams     = ctx->templateParams();
		AstrumParser::ExceptionSpecificationContext* exceptions = ctx->exceptionSpecification();
		AstrumParser::AttributeSpecifierSeqContext* attributes  = nullptr;
		AstrumParser::IndexerGetterContext* getter              = nullptr;
		AstrumParser::IndexerSetterContext* setter              = nullptr;

		for (auto spec : ctx->functionSpecifier()) {
			if (spec->Inline())
				isInline = true;
			else if (spec->Consteval())
				isConsteval = true;
			else if (spec->Unsafe()) {
				isUnsafe = true;
				if (unsafeDepth > 0)
					notifyErrorListeners("Unsafe context recursion", spec->Unsafe()->getSymbol());
			} else if (spec->Static()) {
				isStatic = true;
			} else if (spec->Mutable()) {
				isMutating = true;
			} else if (spec->Virtual()) {
				isVirtual = true;
				if (currentTypeKind.top() != TypeKind::Class)
					notifyErrorListeners("Cannot to declare virtual method outside the class body",
					                     spec->Virtual()->getSymbol());
			} else if (spec->Override()) {
				isOverride = true;
			} else if (spec->Final()) {
				isFinal = true;
				if (currentTypeKind.top() != TypeKind::Class)
					notifyErrorListeners("Cannot to declare final method outside the class body",
					                     spec->Final()->getSymbol());
			}
		}

		if (ctx->shortFunctionBody()) {
			expression = ctx->shortFunctionBody()->expressionStatement()->expression();
		}

		if (!isUnsafe && unsafeDepth > 0)
			isUnsafe = true;
		if (isUnsafe && unsafeDepth <= 0)
			unsafeDepth++;

		if (!firstPass) {
			if (!setter)
				initStates.push(InitState {});
			auto declList = params->paramDeclList();
			for (auto param : declList->paramDeclaration()) {
				auto id = param->Identifier()->getText();
				if (auto spec = param->paramSpecification(); spec && spec->Out()) {
					if (ctx->shortFunctionBody())
						notifyErrorListeners("Arrow functions doesn't support out parameters",
						                     spec->Out()->getSymbol());
					outParams.insert(id);
					initStates.top().potentiallyAssigned.insert(id);
				}
			}

			if (auto ret = ctx->returnType()) {
				if (auto idc = ret->Identifier()) {
					if (ctx->shortFunctionBody())
						notifyErrorListeners("Arrow functions doesn't support named returns",
						                     idc->getSymbol());
					auto id = idc->getText();
					outParams.insert(id);
					initStates.top().potentiallyAssigned.insert(id);
				} else if (ret->theTypeId() && ret->theTypeId()->VertLine().empty() &&
				           ret->theTypeId()->singleTypeId(0)->typeSpecifierSeq() &&
				           ret->theTypeId()
				               ->singleTypeId(0)
				               ->typeSpecifierSeq()
				               ->simpleTypeSpecifier()) {
					auto tup = ret->theTypeId()
					               ->singleTypeId(0)
					               ->typeSpecifierSeq()
					               ->simpleTypeSpecifier()
					               ->namedTupleField();
					for (auto element : tup) {
						auto id = element->Identifier()->getText();
						outParams.insert(id);
						initStates.top().potentiallyAssigned.insert(id);
					}
				}
			}
		}

		if (auto prop = ctx->indexerProperty()) {
			getter = prop->indexerGetter();
			setter = prop->indexerSetter();
		}

		if (setter && functionBody)
			notifyErrorListeners("Cannot to declare indexer property in the local type",
			                     setter->Set()->getSymbol());

		if (firstPass && !functionBody) {
			if (isStatic) {
				if (isMutating)
					notifyErrorListeners("Static method cannot be mutating", ctx->getStart());
				if (isVirtual || isOverride || isFinal)
					notifyErrorListeners("Static method cannot be virtual, override or final",
					                     ctx->getStart());
			}

			int lifetimes  = 0;
			bool isDefault = false;
			auto declList  = params->paramDeclList();
			if (params->Ellipsis() && !templateParams) {
				notifyErrorListeners("Operator function cannot to have a variadic arguments length",
				                     params->Ellipsis()->getSymbol());
			}
			for (auto param : declList->paramDeclaration()) {
				if (param->LifetimeAnnotation())
					++lifetimes;
				if (param->initializerClause()) {
					isDefault = true;
					if (auto spec = param->paramSpecification()) {
						if (spec->Inout() || spec->Ref() || spec->Out())
							notifyErrorListeners(
							    "Mutable reference parameters cannot have default value",
							    param->initializerClause()->getStart());
					}
				} else if (isDefault) {
					notifyErrorListeners(
					    "Default function parameters must be located at the end of the parameter "
					    "list",
					    param->Identifier()->getSymbol());
				}
			}

			if (auto ret = ctx->returnType()) {
				if (ret->Const())
					isConstReturn = true;
				if (ret->Ref())
					isRefReturn = true;
				if (ret->Forward())
					isForwardReturn = true;
			}

			if (auto body = ctx->functionBody()) {
				if (body->Assign())
					isInline = true;
				else if (body->Equal())
					isConstexpr = true;
			} else if (auto body = ctx->shortFunctionBody()) {
				if (body->AssignArrow())
					isInline = true;
				else if (body->EqualArrow())
					isConstexpr = true;
			}

			AstrumParser::AccessSpecifierContext* acc = nullptr;
			std::optional<AccessSpecifier> access     = std::nullopt;
			bool isProtectedInternal                  = false;
			if (currentTypeKind.top() == TypeKind::Extension) {
				if (auto decl = reinterpret_cast<AstrumParser::ExtensionMemberDeclarationContext*>(
				        ctx->parent)) {
					attributes = decl->attributeSpecifierSeq();
				}
			} else if (auto decl = reinterpret_cast<AstrumParser::StructMemberDeclarationContext*>(
			               ctx->parent)) {
				isProtectedInternal = decl->protectedInternal();
				if (decl->accessSpecifier()) {
					acc = decl->accessSpecifier();
				}
				attributes = decl->attributeSpecifierSeq();
			}

			if (acc) {
				if (currentAccessSpecifier.top())
					notifyErrorListeners("Cannot to redefine access specifier", acc->getStart());
				if (acc->Public()) {
					access = AccessSpecifier::Public;
				} else if (acc->Protected()) {
					if (isTypeDefinitionBody() && currentTypeKind.top() != TypeKind::Class)
						notifyErrorListeners(
						    "Cannot to declare protected member outside the class body",
						    acc->getStart());
					access = AccessSpecifier::Protected;
				} else if (acc->Private()) {
					access = AccessSpecifier::Private;
				} else if (acc->Internal()) {
					access = AccessSpecifier::Internal;
				}
			} else if (isProtectedInternal) {
				if (currentAccessSpecifier.top())
					notifyErrorListeners("Cannot to redefine access specifier", acc->getStart());
				if (isTypeDefinitionBody() && currentTypeKind.top() != TypeKind::Class)
					notifyErrorListeners(
					    "Cannot to declare protected internal member outside the class body",
					    acc->getStart());
				access = AccessSpecifier::ProtectedInternal;
			}
			if (currentTypeKind.top() == TypeKind::Extension) {
				access = structStack.top()->access;
			}

			if (currentAccessSpecifier.top())
				access = currentAccessSpecifier.top();
			if (!access)
				access = AccessSpecifier::Internal;
			std::string id = "_operator_subscript";

			auto lastTparams     = getLastTypeTemplateParams();
			auto lastSpec        = getLastTypeTemplateSpecializationArgs();
			auto lastConstraints = getLastTypeConstraints();
			auto fullType        = getCurrentFullTypeName();
			structStack.top()->methods.emplace_back(MethodDefinition {
			    id,
			    templateParams,
			    nullptr,
			    nullptr,
			    nullptr,
			    returnType,
			    expression,
			    exceptions,
			    attributes,
			    {ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()},
			    *access,
			    getCurrentCompilationCondition(),
			    isInline || isConstexpr,
			    isConstexpr,
			    isConsteval,
			    isUnsafe,
			    isRefReturn,
			    isConstReturn,
			    isForwardReturn,
			    false,
			    varargDepth,
			    currentType,
			    fullType,
			    lastTparams,
			    lastSpec,
			    lastConstraints,
			    nullptr,
			    isProtectedTypeDefinition,
			    isUnsafeTypeDefinition,
			    false,
			    isMutating,
			    isStatic,
			    isVirtual,
			    isOverride,
			    false,
			    isFinal,
			    false,
			    false,
			    false,
			    params,
			    getter,
			    setter});
			methods.insert_or_assign(
			    SourcePosition {ctx->getStart()->getLine(),
			                    ctx->getStart()->getCharPositionInLine()},
			    MethodDefinition {
			        id,
			        templateParams,
			        nullptr,
			        nullptr,
			        nullptr,
			        returnType,
			        expression,
			        exceptions,
			        attributes,
			        {ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()},
			        isPrivateTypeDefinition ? AccessSpecifier::Private : AccessSpecifier::Internal,
			        getCurrentCompilationCondition(),
			        isInline || isConstexpr,
			        isConstexpr,
			        isConsteval,
			        isUnsafe,
			        isRefReturn,
			        isConstReturn,
			        isForwardReturn,
			        false,
			        varargDepth,
			        currentType,
			        fullType,
			        lastTparams,
			        lastSpec,
			        lastConstraints,
			        nullptr,
			        isProtectedTypeDefinition,
			        isUnsafeTypeDefinition,
			        false,
			        isMutating,
			        isStatic,
			        isVirtual,
			        isOverride && currentTypeKind.top() == TypeKind::Class,
			        false,
			        isFinal && currentTypeKind.top() == TypeKind::Class,
			        false,
			        false,
			        false,
			        params,
			        getter,
			        setter});
		}

		visitChildren(ctx);

		if (firstPass && !functionBody) {
			std::string funcname;
			if (!currentType.empty())
				funcname += currentType + ".";
			funcname += "_operator_subscript";
			functionTable[funcname] = contextTypes[ctx->returnType()];
			std::string args;
			bool first              = true;
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
		if (std::any_of(specs.begin(), specs.end(),
		                [&](auto spec) -> bool { return spec->Unsafe(); }))
			--unsafeDepth;
		symbolContexts.pop();

		return 0;
	}

	std::any AstrumSema::visitIndexerProperty(AstrumParser::IndexerPropertyContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitIndexerGetter(AstrumParser::IndexerGetterContext* ctx) {
		symbolContexts.push(symbolContexts.top());
		if (currentTypeKind.top() != TypeKind::Class) {
			if (auto spec = ctx->accessSpecifier()) {
				if (spec->Protected())
					notifyErrorListeners("Cannot to declare protected member outside the class",
					                     spec->Protected()->getSymbol());
			} else if (ctx->protectedInternal()) {
				notifyErrorListeners(
				    "Cannot to declare protected internal member outside the class",
				    spec->Protected()->getSymbol());
			}
		}
		++functionBody;
		++depth;
		if (!firstPass) {
			initStates.push(InitState {});
		}

		visitChildren(ctx);

		--functionBody;
		--depth;
		if (!firstPass) {
			initStates.pop();
		}
		symbolContexts.pop();

		return 0;
	}

	std::any AstrumSema::visitIndexerSetter(AstrumParser::IndexerSetterContext* ctx) {
		symbolContexts.push(symbolContexts.top());
		if (currentTypeKind.top() != TypeKind::Class) {
			if (auto spec = ctx->accessSpecifier()) {
				if (spec->Protected())
					notifyErrorListeners("Cannot to declare protected member outside the class",
					                     spec->Protected()->getSymbol());
			} else if (ctx->protectedInternal()) {
				notifyErrorListeners(
				    "Cannot to declare protected internal member outside the class",
				    spec->Protected()->getSymbol());
			}
		}
		++functionBody;
		++depth;
		if (!firstPass) {
			initStates.push(InitState {});
		}

		visitChildren(ctx);

		--functionBody;
		--depth;
		if (!firstPass) {
			initStates.pop();
		}
		symbolContexts.pop();

		return 0;
	}

	std::any AstrumSema::visitInterfaceIndexer(AstrumParser::InterfaceIndexerContext* ctx) {
		symbolContexts.push(symbolContexts.top());
		bool isInline                                           = false;
		bool isStatic                                           = false;
		bool isConstexpr                                        = false;
		bool isConsteval                                        = false;
		bool isUnsafe                                           = false;
		bool isMutating                                         = false;
		bool isVirtual                                          = false;
		bool isOverride                                         = false;
		bool isFinal                                            = false;
		bool isRefReturn                                        = false;
		bool isConstReturn                                      = false;
		bool isForwardReturn                                    = false;
		int8_t varargDepth                                      = -1;
		AstrumParser::TheTypeIdContext* returnType              = ctx->returnType()->theTypeId();
		AstrumParser::ParamDeclClauseContext* params            = ctx->paramDeclClause();
		AstrumParser::ExceptionSpecificationContext* exceptions = ctx->exceptionSpecification();
		AstrumParser::IndexerGetterContext* getter              = nullptr;
		AstrumParser::IndexerSetterContext* setter =
		    ctx->Set() ? (AstrumParser::IndexerSetterContext*) 1 : nullptr;

		if (!isUnsafe && unsafeDepth > 0)
			isUnsafe = true;
		if (isUnsafe && unsafeDepth <= 0)
			unsafeDepth++;

		if (firstPass && !functionBody) {
			if (auto ret = ctx->returnType()) {
				if (ret->Const())
					isConstReturn = true;
				if (ret->Ref())
					isRefReturn = true;
				if (ret->Forward())
					isForwardReturn = true;
			}

			std::string id = "_operator_subscript";

			auto lastTparams     = getLastTypeTemplateParams();
			auto lastSpec        = getLastTypeTemplateSpecializationArgs();
			auto lastConstraints = getLastTypeConstraints();
			auto fullType        = getCurrentFullTypeName();
			structStack.top()->methods.emplace_back(MethodDefinition {
			    id,
			    nullptr,
			    nullptr,
			    nullptr,
			    nullptr,
			    returnType,
			    nullptr,
			    exceptions,
			    ctx->attributeSpecifierSeq(),
			    {ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()},
			    AccessSpecifier::Public,
			    getCurrentCompilationCondition(),
			    isInline || isConstexpr,
			    isConstexpr,
			    isConsteval,
			    isUnsafe,
			    isRefReturn,
			    isConstReturn,
			    isForwardReturn,
			    false,
			    varargDepth,
			    currentType,
			    fullType,
			    lastTparams,
			    lastSpec,
			    lastConstraints,
			    nullptr,
			    isProtectedTypeDefinition,
			    isUnsafeTypeDefinition,
			    false,
			    isMutating,
			    isStatic,
			    isVirtual,
			    isOverride,
			    false,
			    isFinal,
			    false,
			    false,
			    false,
			    params,
			    getter,
			    setter});
		}

		visitChildren(ctx);

		if (firstPass && !functionBody) {
			std::string funcname;
			if (!currentType.empty())
				funcname += currentType + ".";
			funcname += "_operator_subscript";
			functionTable[funcname] = contextTypes[ctx->returnType()];
			std::string args;
			bool first              = true;
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

		return 0;
	}

	std::any AstrumSema::visitTemplateParams(AstrumParser::TemplateParamsContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitTemplateParamDeclaration(
	    AstrumParser::TemplateParamDeclarationContext* ctx) {
		if ((ctx->In() || ctx->Out()) &&
		    (!isTypeDefinitionBody() || currentTypeKind.top() != TypeKind::Interface))
			notifyErrorListeners(
			    "In/out generic parameters enabled only in the generic interface definition",
			    ctx->getStart());

		return visitChildren(ctx);
	}

	std::any AstrumSema::visitTemplateTypename(AstrumParser::TemplateTypenameContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitTemplateArgumentList(AstrumParser::TemplateArgumentListContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitTemplateArgument(AstrumParser::TemplateArgumentContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitConstraintClause(AstrumParser::ConstraintClauseContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitTypeTrait(AstrumParser::TypeTraitContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitTemplateDeductionGuide(
	    AstrumParser::TemplateDeductionGuideContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitAttributeSpecifierSeq(
	    AstrumParser::AttributeSpecifierSeqContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitAttributeSpecifier(AstrumParser::AttributeSpecifierContext* ctx) {
		auto id = ctx->Identifier()->getText();
		if (id == "Align" && !ctx->attributeArgumentClause()) {
			notifyErrorListeners("Align attribute should have integer value",
			                     ctx->Identifier()->getSymbol());
		}

		return visitChildren(ctx);
	}

	std::any AstrumSema::visitAttributeArgumentClause(
	    AstrumParser::AttributeArgumentClauseContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitAssignmentOperator(AstrumParser::AssignmentOperatorContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitShiftOperator(AstrumParser::ShiftOperatorContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitUnaryPrefixOperator(AstrumParser::UnaryPrefixOperatorContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitUnaryCustomOperator(AstrumParser::UnaryCustomOperatorContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitRefCaptureOperator(AstrumParser::RefCaptureOperatorContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitUnaryPostfixOperator(AstrumParser::UnaryPostfixOperatorContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitNot(AstrumParser::NotContext* ctx) { return visitChildren(ctx); }

	std::any AstrumSema::visitOperator(AstrumParser::OperatorContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitLiteral(AstrumParser::LiteralContext* ctx) {
		if (checkForCurrentPass()) {
			if (auto literal = ctx->IntegerLiteral()) {
				checkIntegerLiteral(literal, literalMinus);
				typeStack.push("i32");
			} else if (ctx->FloatingLiteral()) {
				typeStack.push("f64");
			} else if (ctx->BooleanLiteral()) {
				typeStack.push("bool");
			} else if (auto literal = ctx->CharacterLiteral()) {
				checkAsciiLiteral(literal);
				typeStack.push("char");
			} else if (ctx->StringLiteral() || ctx->MultilineStringLiteral()) {
				typeStack.push("Str");
			} else if (ctx->interpolatedStringLiteral()) {
				typeStack.push("StringInterpolation");
			} else if (ctx->Null()) {
				typeStack.push("null");
			}
		}

		return 0;
	}

	std::any AstrumSema::visitInterpolatedStringLiteral(
	    AstrumParser::InterpolatedStringLiteralContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitInterpolatedRegularStringLiteral(
	    AstrumParser::InterpolatedRegularStringLiteralContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitInterpolatedRegularStringPart(
	    AstrumParser::InterpolatedRegularStringPartContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitInterpolatedVerbatiumStringLiteral(
	    AstrumParser::InterpolatedVerbatiumStringLiteralContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitInterpolatedVerbatiumStringPart(
	    AstrumParser::InterpolatedVerbatiumStringPartContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitInterpolatedMultilineStringLiteral(
	    AstrumParser::InterpolatedMultilineStringLiteralContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitInterpolatedMultilineStringPart(
	    AstrumParser::InterpolatedMultilineStringPartContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitInterpolatedExpression(
	    AstrumParser::InterpolatedExpressionContext* ctx) {
		return visitChildren(ctx);
	}

	std::any AstrumSema::visitCollectionExpression(AstrumParser::CollectionExpressionContext* ctx) {
		visitChildren(ctx);
		typeStack.push("std.initializer_list");
		return 0;
	}

	std::any AstrumSema::visitKeyValuePairExpression(
	    AstrumParser::KeyValuePairExpressionContext* ctx) {
		visitChildren(ctx);
		typeStack.push("std.pair");
		return 0;
	}

	std::any AstrumSema::visitStaticConstructor(AstrumParser::StaticConstructorContext* ctx) {
		symbolContexts.push(symbolContexts.top());
		bool isInline    = false;
		bool isConstexpr = false;

		if (firstPass && !functionBody) {
			if (structStack.top()->staticConstructor.has_value())
				notifyErrorListeners("Type can have only one static constructor.",
				                     ctx->Static()->getSymbol());

			if (auto body = ctx->functionBody()) {
				if (body->Assign())
					isInline = true;
				else if (body->Equal())
					isConstexpr = true;
			} else if (auto body = ctx->shortFunctionBody()) {
				if (body->AssignArrow())
					isInline = true;
				else if (body->EqualArrow())
					isConstexpr = true;
			}

			if (isConstexpr)
				structStack.top()->isConstexpr = true;

			std::string id = structStack.top()->id;
			if (currentTypeKind.top() == TypeKind::Class ||
			    currentTypeKind.top() == TypeKind::EnumClass)
				id = "__Class_" + id;

			auto lastTparams     = getLastTypeTemplateParams();
			auto lastSpec        = getLastTypeTemplateSpecializationArgs();
			auto lastConstraints = getLastTypeConstraints();
			auto fullType        = getCurrentFullTypeName();
			auto def             = MethodDefinition {
                id,
                nullptr,
                nullptr,
                nullptr,
                nullptr,
                nullptr,
                nullptr,
                nullptr,
                nullptr,
                {ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()},
                AccessSpecifier::Private,
                getCurrentCompilationCondition(),
                isInline || isConstexpr,
                isConstexpr,
                false,
                false,
                false,
                false,
                false,
                false,
                -1,
                currentType,
                fullType,
                lastTparams,
                lastSpec,
                lastConstraints,
                nullptr,
                isProtectedTypeDefinition,
                isUnsafeTypeDefinition,
                false,
                true,
                true,
                false,
                false,
                false,
                false,
                true};
			structStack.top()->staticConstructor = def;
			methods.insert_or_assign(SourcePosition {ctx->getStart()->getLine(),
			                                         ctx->getStart()->getCharPositionInLine()},
			                         def);
		}

		visitChildren(ctx);

		outParams.clear();
		symbolContexts.pop();

		return 0;
	}

	std::any AstrumSema::visitStaticDestructor(AstrumParser::StaticDestructorContext* ctx) {
		symbolContexts.push(symbolContexts.top());
		bool isInline    = false;
		bool isConstexpr = false;

		if (firstPass && !functionBody) {
			if (structStack.top()->staticDestructor.has_value())
				notifyErrorListeners("Type can have only one static destructor.",
				                     ctx->Static()->getSymbol());

			if (auto body = ctx->functionBody()) {
				if (body->Assign())
					isInline = true;
				else if (body->Equal())
					isConstexpr = true;
			} else if (auto body = ctx->shortFunctionBody()) {
				if (body->AssignArrow())
					isInline = true;
				else if (body->EqualArrow())
					isConstexpr = true;
			}

			if (isConstexpr)
				structStack.top()->isConstexpr = true;

			std::string id = "~" + structStack.top()->id;
			if (currentTypeKind.top() == TypeKind::Class ||
			    currentTypeKind.top() == TypeKind::EnumClass)
				id = "__Class_" + id;

			auto lastTparams     = getLastTypeTemplateParams();
			auto lastSpec        = getLastTypeTemplateSpecializationArgs();
			auto lastConstraints = getLastTypeConstraints();
			auto fullType        = getCurrentFullTypeName();
			auto def             = MethodDefinition {
                id,
                nullptr,
                nullptr,
                nullptr,
                nullptr,
                nullptr,
                nullptr,
                nullptr,
                nullptr,
                {ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine()},
                AccessSpecifier::Private,
                getCurrentCompilationCondition(),
                isInline || isConstexpr,
                isConstexpr,
                false,
                false,
                false,
                false,
                false,
                false,
                -1,
                currentType,
                fullType,
                lastTparams,
                lastSpec,
                lastConstraints,
                nullptr,
                isProtectedTypeDefinition,
                isUnsafeTypeDefinition,
                false,
                true,
                true,
                false,
                false,
                false,
                false,
                false,
                true};
			structStack.top()->staticDestructor = def;
			methods.insert_or_assign(SourcePosition {ctx->getStart()->getLine(),
			                                         ctx->getStart()->getCharPositionInLine()},
			                         def);
		}

		visitChildren(ctx);

		outParams.clear();
		symbolContexts.pop();

		return 0;
	}

	std::any AstrumSema::visitLockStatement(AstrumParser::LockStatementContext* ctx) {
		if (!firstPass)
			initStates.push(initStates.top());

		visitChildren(ctx);

		if (!firstPass)
			initStates.pop();

		return 0;
	}

	std::any AstrumSema::visitYieldStatement(AstrumParser::YieldStatementContext* ctx) {
		visitChildren(ctx);
		if (!firstPass) {
			if (isUnitTestBody) {
				notifyErrorListeners("Unit test cannot yield value", ctx->Yield()->getSymbol());
			}
			if (ctx->Yield() &&
			    std::any_of(outParams.begin(), outParams.end(), [&](const auto& param) {
				    return !initStates.top().definitelyAssigned.contains(param);
			    })) {
				notifyErrorListeners("Each branch of a function must initialize all out parameters",
				                     ctx->Yield()->getSymbol());
			}
		}

		return 0;
	}

	std::any AstrumSema::visitDeferStatement(AstrumParser::DeferStatementContext* ctx) {
		if (!firstPass)
			initStates.push(initStates.top());

		visitChildren(ctx);

		if (!firstPass)
			initStates.pop();

		return 0;
	}

}  // namespace AstrumLang