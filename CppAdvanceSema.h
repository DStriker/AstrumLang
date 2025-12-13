#pragma once
#include "CppAdvanceParserBaseListener.h"
#include <variant>
#include <format>
#include "CppSymbolParser.h"
#include <optional>

using antlr4::Token;
using antlr4::tree::ParseTree;
using antlr4::tree::TerminalNode;

extern const char* CurrentCppAdvanceCompilingFile;
extern std::string CurrentCppAdvanceCompilingFileSource;
extern std::string DLLName;

struct SourcePosition
{
	size_t line;
	size_t column;

	constexpr auto operator<=>(const SourcePosition& that) const noexcept {
		return line == that.line ? column <=> that.column : line <=> that.line;
	}

	std::string toString() const {
		return std::format("{}:{}", line, column);
	}
};

struct DeclarationSymbol
{
	bool start = false;
	CppAdvanceParser::DeclarationStatementContext* declaration{};
    const Token* token{};
	bool member = false;
	bool returnParameter = false;

	DeclarationSymbol(bool s = false, const Token* id = nullptr, bool mem = false, bool ret = false) : start{s}, token{id}, member{mem}, returnParameter{ret} {}

	SourcePosition position() const {
		assert(token);
		return { token->getLine(), token->getCharPositionInLine() };
	}
};

struct IdentifierSymbol
{
	enum kind : uint8_t {
		Use,
		UsingDeclaration,
		Deactivation
	} _kind = Use;

	bool isCaptured = false;
	bool isAfterDot = false;
	const Token* token{};

	IdentifierSymbol(const Token* id, kind k = Use, bool afterDot = false) : token{id}, _kind{k}, isAfterDot{afterDot} {}

	SourcePosition position() const {
		assert(token);
        return { token->getLine(), token->getCharPositionInLine() };
	}

	bool isUse() const {
		return _kind == Use;
	}

	bool isUsingDeclaration() const {
		return _kind == UsingDeclaration;
	}

	bool isDeactivation() const {
		return _kind == Deactivation;
	}
};

struct Symbol
{
	enum active : uint8_t {
		Declaration = 0,
		Identifier,
		//
	};

	std::variant<DeclarationSymbol, IdentifierSymbol> symbol;
	int depth = -1;
	bool start = true;

	Symbol(int depth, const DeclarationSymbol& sym) : symbol{ sym }, depth{ depth }, start{ sym.start } {}
	Symbol(int depth, const IdentifierSymbol& sym) : symbol{ sym }, depth{ depth }, start{ !sym.isDeactivation() } {}

	bool isDeclaration() const {
		return symbol.index() == Declaration;
	}

	bool isIdentifier() const {
		return symbol.index() == Identifier;
	}

	auto& asDeclaration() const {
		return std::get<DeclarationSymbol>(symbol);
	}

	auto& asIdentifier() const {
		return std::get<IdentifierSymbol>(symbol);
	}

	SourcePosition getPosition() const {
		switch (symbol.index())
		{
		case Declaration:
			return std::get<DeclarationSymbol>(symbol).position();
		case Identifier:
			return std::get<IdentifierSymbol>(symbol).position();
		default:
			return { 0,0 };
		}
	}

	const Token* getToken() const {
		switch (symbol.index())
		{
		case Declaration:
			return std::get<DeclarationSymbol>(symbol).token;
		case Identifier:
			return std::get<IdentifierSymbol>(symbol).token;
		default:
			return nullptr;
		}
	}

	size_t getTokenIndex() const {
		return getToken()->getTokenIndex();
	}
};

extern void CppAdvanceCompilerError(std::string_view output, const Token* token);
extern void CppAdvanceCompilerError(std::string_view output, SourcePosition position);

enum class AccessSpecifier {
	Public,
	Internal,
	Protected,
	ProtectedInternal,
	Private
};

struct VariableDefinition 
{
	std::string id;
	CppAdvanceParser::TemplateParamsContext* templateParams;
	CppAdvanceParser::TheTypeIdContext* type;
	SourcePosition pos;
	CppAdvanceParser::InitializerClauseContext* initializer;
	CppAdvanceParser::InitializerListContext* initializerList;
	AccessSpecifier access;
	std::string compilationCondition;
	std::string parentType;
	bool isStatic = false;
	bool isConst = false;
	bool isVolatile = false;
	bool isThreadLocal = false;
	bool isUnsafe = false;
	bool isTypeSpecialization = false;
	bool isUnowned = false;
	bool isWeak = false;
};

struct ConstantDefinition 
{
	std::string id;
	CppAdvanceParser::TemplateParamsContext* templateParams;
	CppAdvanceParser::TheTypeIdContext* type;
	SourcePosition pos;
	CppAdvanceParser::InitializerClauseContext* initializer;
	AccessSpecifier access = AccessSpecifier::Public;
	std::string compilationCondition;
	std::string parentType;
};

struct TypeAliasDefinition
{
    std::string id;
	CppAdvanceParser::TemplateParamsContext* templateParams;
	CppAdvanceParser::TheTypeIdContext* type;
	SourcePosition pos;
	AccessSpecifier access = AccessSpecifier::Public;
	std::string compilationCondition;
	bool isUnsafe = false;
};

struct Version 
{
	std::string id;
	int64_t value;
	SourcePosition pos;
	AccessSpecifier access = AccessSpecifier::Private;
	std::string compilationCondition;
	bool isDefault = false;
};

struct FunctionDefinition
{
	std::string id;
	CppAdvanceParser::TemplateParamsContext* templateParams;
	CppAdvanceParser::TemplateArgumentListContext* templateSpecializationArgs;
	CppAdvanceParser::FunctionParamsContext* params;
	CppAdvanceParser::TheTypeIdContext* returnType;
	CppAdvanceParser::ExprContext* expression;
	CppAdvanceParser::ExceptionSpecificationContext* exceptionSpecification;
	SourcePosition pos;
	AccessSpecifier access;
	std::string compilationCondition;
	bool isInline = false;
	bool isConstexpr = false;
	bool isConsteval = false;
	bool isUnsafe = false;
	bool isRefReturn = false;
	bool isConstReturn = false;
	bool isForwardReturn = false;
	int8_t varargs = -1;
};

struct MethodDefinition : public FunctionDefinition
{
	std::string shortType;
	std::string parentType;
	CppAdvanceParser::TemplateParamsContext* parentTemplateParams;
	CppAdvanceParser::TemplateArgumentListContext* parentTemplateSpecializationArgs;
	CppAdvanceParser::ImplicitSpecificationContext* implicitSpecification;
	bool isProtectedType = false;
	bool isUnsafeType = false;
	bool isDefault = false;
	bool isMutating = false;
	bool isStatic = false;
	bool isVirtual = false;
	bool isOverride = false;
	bool isAbstract = false;
	bool isFinal = false;
	bool isConstructor = false;
	bool isDestructor = false;
	bool isConverter = false;
	CppAdvanceParser::ParamDeclClauseContext* indexerParams = nullptr;
	CppAdvanceParser::IndexerGetterContext* indexerGetter = nullptr;
	CppAdvanceParser::IndexerSetterContext* indexerSetter = nullptr;
};

struct PropertyDefinition {
	std::string id;
	CppAdvanceParser::TheTypeIdContext* type;
	SourcePosition pos;
	CppAdvanceParser::InitializerClauseContext* initializer;
	CppAdvanceParser::PropertyGetterContext* getter;
	CppAdvanceParser::PropertySetterContext* setter;
	CppAdvanceParser::ExprContext* expression;
	AccessSpecifier access;
	std::string compilationCondition;
	std::string shortType;
	std::string parentType;
	CppAdvanceParser::TemplateParamsContext* parentTemplateParams;
	CppAdvanceParser::TemplateArgumentListContext* parentTemplateSpecializationArgs;
	bool isStatic = false;
	bool isConst = false;
	bool isRef = false;
	bool isUnsafe = false;
	bool isPrivateType = false;
	bool isProtectedType = false;
	bool isUnsafeType = false;
	bool isVirtual = false;
	bool isOverride = false;
	bool isAbstract = false;
	bool isFinal = false;
	bool isInline = false;
	bool isConstexpr = false;
};

struct InitState {
	using VarSet = std::set<std::string>;

	VarSet definitelyAssigned;
	VarSet potentiallyAssigned;

	VarSet intersect(const VarSet& other) const {
        VarSet result;
        std::set_intersection(definitelyAssigned.begin(), definitelyAssigned.end(), other.begin(), other.end(), std::inserter(result, result.begin()));
        return result;
	}

	VarSet unite(const VarSet& other) const {
		VarSet result;
		std::set_union(potentiallyAssigned.begin(), potentiallyAssigned.end(), other.begin(), other.end(), std::inserter(result, result.begin()));
		return result;
	}
};

struct IfContext {
	InitState before;
    InitState then;
    InitState otherwise;
	bool hasElse;
};

struct NamedTuple {
    std::string id;
    std::vector<std::pair<std::string, CppAdvanceParser::TheTypeIdContext*>> fields;
	AccessSpecifier access = AccessSpecifier::Private;
};

struct ForwardDeclaration {
	std::string id;
	CppAdvanceParser::TemplateParamsContext* templateParams;
	AccessSpecifier access = AccessSpecifier::Internal;
	SourcePosition pos;
	std::string compilationCondition;
	bool isUnsafe = false;
};

struct FunctionDeclaration {
	std::string id;
	CppAdvanceParser::FunctionParamsContext* params;
	CppAdvanceParser::ReturnTypeContext* returnType;
	CppAdvanceParser::ExceptionSpecificationContext* exceptions;
	SourcePosition pos;
	std::string compilationCondition;
};

enum class TypeKind {
	Struct,
	RefStruct,
	Class,
	StaticClass,
	Interface,
	Enum,
	Union
};

struct StructDefinition {
	TypeKind kind;
	std::string id;
	CppAdvanceParser::TemplateParamsContext* templateParams;
	CppAdvanceParser::TemplateArgumentListContext* templateSpecializationArgs;
	AccessSpecifier access = AccessSpecifier::Internal;
	std::string compilationCondition;
	SourcePosition pos;
	CppAdvanceParser::BaseSpecifierListContext* interfaces;
	std::vector<VariableDefinition> fields;
	std::vector<ConstantDefinition> constants;
	std::vector<TypeAliasDefinition> typeAliases;
	std::vector<PropertyDefinition> properties;
	std::vector<MethodDefinition> methods;
	std::vector<std::shared_ptr<StructDefinition>> nestedStructs;
	std::vector<ForwardDeclaration> friendTypes;
	std::vector<FunctionDeclaration> friendFuncDeclarations;
	std::vector<FunctionDefinition> friendFuncDefinitions;

	bool isUnsafe = false;
	bool isAbstract = false;
	bool isFinal = false;
	bool hasAggregateInit = false;
	bool isConstexpr = false;
	bool isDefaultConstructible = false;
	//bool isStatic = false;

	StructDefinition(TypeKind _kind, std::string _id, CppAdvanceParser::TemplateParamsContext* _targs, CppAdvanceParser::TemplateArgumentListContext* _tspec, AccessSpecifier _access, std::string _ccond, SourcePosition _pos,
		const std::vector<VariableDefinition>& _fields, const std::vector<ConstantDefinition>& _constants, CppAdvanceParser::BaseSpecifierListContext* _bases,
		const std::vector<TypeAliasDefinition>& _typeAliases, const std::vector<PropertyDefinition>& _properties, const std::vector<MethodDefinition>& _methods,
		const std::vector<std::shared_ptr<StructDefinition>>& _nestedStructs, const std::vector<ForwardDeclaration>& _friendTypes,
		const std::vector<FunctionDeclaration>& _friendDecls, const std::vector<FunctionDefinition>& _friendDefs, bool _isUnsafe, bool _isAbstract, bool _isFinal, bool _hasAggregateInit)
		: kind{_kind},id { std::move(_id) }, templateParams{ _targs }, templateSpecializationArgs{ _tspec }, access{ _access }, compilationCondition{ std::move(_ccond) }, pos{ _pos },
		interfaces{_bases}, fields{ _fields }, constants{ _constants }, typeAliases{ typeAliases }, properties{_properties},
		methods{ _methods }, nestedStructs{ _nestedStructs }, friendTypes{ _friendTypes }, friendFuncDeclarations{_friendDecls},
		friendFuncDefinitions{ _friendDefs }, isUnsafe{ _isUnsafe }, isAbstract{ _isAbstract }, isFinal{ _isFinal }, hasAggregateInit{_hasAggregateInit } {}
};

struct SymbolContext {
	std::unordered_map<std::string, std::string> symbolTable;
	std::unordered_map<std::string, std::string> aliasTable;
	std::unordered_set<std::string> types;
	/*std::unordered_map<std::string, std::string> functionTable;
	std::unordered_map<std::string, std::unordered_map<std::string, CppAdvanceParser::InitializerClauseContext*>> activeDefaultParams;*/
};

class CppAdvanceSema : public CppAdvanceParserBaseListener
{
	template<class T>
	static const std::deque<T>& getStackUnderlyingContainer(const std::stack<T>& dataStack) {
		return *reinterpret_cast<const std::deque<T>*>(&dataStack);
	}

	std::string getCurrentCompilationCondition();
	CppAdvanceParser::TemplateParamsContext* getLastTypeTemplateParams();
	CppAdvanceParser::TemplateArgumentListContext* getLastTypeTemplateSpecializationArgs();
	std::string getCurrentFullTypeName();
	CppAdvanceParser* parser;
	std::string filename;
public:
	CppAdvanceParser::ProgramContext* ast;
	CppSymbolParser cppParser;
	std::string currentType;
	std::string currentSubtype;
	std::stack<std::string> currentTypeWithTemplate;
	std::stack<InitState> initStates;
	std::stack<IfContext> ifContexts;
	std::vector<VariableDefinition> globalVariables;
	std::vector<ConstantDefinition> globalConstants;
	std::vector<TypeAliasDefinition> globalTypeAliases;
	std::vector<FunctionDefinition> globalFunctions;
	std::vector<VariableDefinition> staticFields;
	std::stack<std::shared_ptr<StructDefinition>> structStack;
	std::vector<std::shared_ptr<StructDefinition>> globalStructs;
	std::vector<Version> versions;
	std::vector<ForwardDeclaration> forwardDeclarations;
	std::vector<std::string> currentTemplateArgs;
	std::unordered_set<std::string> protectedSymbols;
	std::unordered_set<std::string> protectedVersions;
	std::unordered_map<antlr4::tree::ParseTree*, std::string> contextTypes;
	struct SymbolTable {
		std::unordered_map<std::string, std::string>& globalSymbolTable;
		std::stack<SymbolContext>& symbolContexts;

		bool contains(const std::string& id) {
            return symbolContexts.top().symbolTable.contains(id) || globalSymbolTable.contains(id);
		}

		std::string& operator[](const std::string& id){
			if (globalSymbolTable.contains(id))
			{
				return globalSymbolTable[id];
			}
			return symbolContexts.top().symbolTable[id];
		}
	} symbolTable;

	struct AliasTable {
		std::unordered_map<std::string, std::string>& globalAliasTable;
		std::stack<SymbolContext>& symbolContexts;

		bool contains(const std::string& id) {
			return symbolContexts.top().aliasTable.contains(id) || globalAliasTable.contains(id);
		}

		std::string& operator[](const std::string& id) {
			if (globalAliasTable.contains(id))
			{
				return globalAliasTable[id];
			}
			return symbolContexts.top().aliasTable[id];
		}
	} aliasTable;

	struct TypeSet {
		std::unordered_set<std::string>& globalTypes;
		std::stack<SymbolContext>& symbolContexts;

		bool contains(const std::string& id) {
			return symbolContexts.top().types.contains(id) || globalTypes.contains(id);
		}

		void insert(const std::string& id) {
			symbolContexts.top().types.insert(id);
		}
	} typeset;
	
	/*std::unordered_map<std::string, std::string>& globalAliasTable;*/
	std::unordered_map<std::string, std::string>& functionTable;
	std::unordered_map<std::string, std::unordered_map<std::string, CppAdvanceParser::InitializerClauseContext*>> activeDefaultParams;
	std::stack<SymbolContext> symbolContexts;
	std::unordered_set<std::string> outParams;
	std::unordered_set<CppAdvanceParser::AssignmentExpressionContext*> uninitConstructs;
	std::unordered_map<CppAdvanceParser::StatContext*, 
		std::vector<std::pair<std::string, CppAdvanceParser::TheTypeIdContext*>>> parameterPrerequisites;
	std::unordered_map<CppAdvanceParser::StatContext*, 
		std::vector<CppAdvanceParser::StackallocExpressionContext*>> stackallocPrerequisites;
	std::unordered_map<CppAdvanceParser::StatContext*, 
		std::vector<CppAdvanceParser::PostfixExpressionContext*>> conditionalPrerequisites;
	std::unordered_map<std::string,NamedTuple> namedTuples;
	std::unordered_map<CppAdvanceParser::ConstructorBodyContext*, std::unordered_set<std::string>> currentFields;
	std::unordered_set<CppAdvanceParser::PropertySetterContext*> propertiesNeedField;
	std::unordered_map<antlr4::tree::ParseTree*, int> optionalChains;
	std::map<SourcePosition, MethodDefinition> methods;
	std::map<SourcePosition, PropertyDefinition> properties;
	std::stack<std::string> typeStack;
	std::stack<std::string> conditionStack;
	std::stack<std::optional<AccessSpecifier>> currentAccessSpecifier;
	std::stack<TypeKind> currentTypeKind;
	std::stack<int> constructorCounts;
	std::stack<CppAdvanceParser::UnaryExpressionContext*> unaryExpressions;
	CppAdvanceParser::AssignmentExpressionContext* currentAssignment{};
	CppAdvanceParser::StatContext* currentStatement{};
	bool firstPass = true;
	bool literalMinus = false;
	bool functionBody = false;
	bool prevFunctionBody = false;
	bool propertyBody = false;
	bool isAssignment = false;
	bool fieldAssignment = false;
	bool lvalue = false;
	bool isCondition = false;
	bool isCatch = false;
	bool isOutExpression = false;
	bool isProtectedTypeDefinition = false;
	bool isPrivateTypeDefinition = false;
	bool isUnsafeTypeDefinition = false;
	bool isRefProperty = false;
	bool isFriendDefinition = false;
	int depth = 0;
	int unsafeDepth = 0;
	int loopDepth = 0;

	CppAdvanceSema(CppAdvanceParser* parser, std::string_view file) : parser{ parser }, filename{ file }, symbolTable{ cppParser.symbolTable, symbolContexts }, aliasTable{ cppParser.aliasTable, symbolContexts }, typeset{cppParser.types,symbolContexts}, functionTable{ cppParser.functionTable } {}

	std::string getNamedTupleId(std::string_view tuple);
	std::string getInterfaceMethodId(std::string_view name, CppAdvanceParser::ParamDeclClauseContext* params);

	inline bool isTypeDefinitionBody() {
		return !currentType.empty();
	}

	void enterProgram(CppAdvanceParser::ProgramContext* ctx) override;


	void exitProgram(CppAdvanceParser::ProgramContext* ctx) override;


	void enterStat(CppAdvanceParser::StatContext* ctx) override;


	void exitStat(CppAdvanceParser::StatContext* ctx) override;


	void enterExpr(CppAdvanceParser::ExprContext* ctx) override;


	void exitExpr(CppAdvanceParser::ExprContext* ctx) override;

	void checkIntegerLiteral(TerminalNode* literal, bool minus = false);
	void checkAsciiLiteral(TerminalNode* literal);


	void enterUnaryExpression(CppAdvanceParser::UnaryExpressionContext*) override;


	void exitUnaryExpression(CppAdvanceParser::UnaryExpressionContext*) override;


	void enterLiteral(CppAdvanceParser::LiteralContext*) override;


	void enterFunctionBody(CppAdvanceParser::FunctionBodyContext*) override;


	void exitFunctionBody(CppAdvanceParser::FunctionBodyContext*) override;


	void exitSimpleDeclaration(CppAdvanceParser::SimpleDeclarationContext*) override;


	void enterAssignmentExpression(CppAdvanceParser::AssignmentExpressionContext*) override;


	void exitAssignmentExpression(CppAdvanceParser::AssignmentExpressionContext*) override;


	void enterPrimaryExpression(CppAdvanceParser::PrimaryExpressionContext*) override;


	void enterInitializerClause(CppAdvanceParser::InitializerClauseContext*) override;


	void enterPostfixExpression(CppAdvanceParser::PostfixExpressionContext*) override;


	void enterTypeSpecifierSeq(CppAdvanceParser::TypeSpecifierSeqContext*) override;


	void enterDeclaration(CppAdvanceParser::DeclarationContext*) override;


	void exitDeclaration(CppAdvanceParser::DeclarationContext*) override;


	void enterExternVariableDeclaration(CppAdvanceParser::ExternVariableDeclarationContext*) override;


	void enterRefDeclaration(CppAdvanceParser::RefDeclarationContext*) override;


	void enterMultiDeclaration(CppAdvanceParser::MultiDeclarationContext*) override;


	void enterConstantDeclaration(CppAdvanceParser::ConstantDeclarationContext*) override;


	void enterAliasDeclaration(CppAdvanceParser::AliasDeclarationContext*) override;


	void enterSimpleTypeSpecifier(CppAdvanceParser::SimpleTypeSpecifierContext*) override;


	void enterCondition(CppAdvanceParser::ConditionContext*) override;


	void exitCondition(CppAdvanceParser::ConditionContext*) override;


	void enterVersionDefinition(CppAdvanceParser::VersionDefinitionContext*) override;


	void enterVersionConditionalDeclaration(CppAdvanceParser::VersionConditionalDeclarationContext*) override;


	void exitVersionConditionalDeclaration(CppAdvanceParser::VersionConditionalDeclarationContext*) override;


	void enterVersionElseDeclaration(CppAdvanceParser::VersionElseDeclarationContext*) override;


	void enterWhileCondition(CppAdvanceParser::WhileConditionContext*) override;


	void exitWhileCondition(CppAdvanceParser::WhileConditionContext*) override;


	void enterDoWhileCondition(CppAdvanceParser::DoWhileConditionContext*) override;


	void exitDoWhileCondition(CppAdvanceParser::DoWhileConditionContext*) override;


	void enterExceptionHandler(CppAdvanceParser::ExceptionHandlerContext*) override;


	void exitExceptionHandler(CppAdvanceParser::ExceptionHandlerContext*) override;


	void enterThrowExpression(CppAdvanceParser::ThrowExpressionContext*) override;


	void enterFunctionDefinition(CppAdvanceParser::FunctionDefinitionContext*) override;


	void enterShortFunctionBody(CppAdvanceParser::ShortFunctionBodyContext*) override;


	void exitShortFunctionBody(CppAdvanceParser::ShortFunctionBodyContext*) override;


	void exitFunctionDefinition(CppAdvanceParser::FunctionDefinitionContext*) override;


	void exitPrimaryExpression(CppAdvanceParser::PrimaryExpressionContext*) override;


	void exitNestedNameSpecifier(CppAdvanceParser::NestedNameSpecifierContext*) override;


	void enterNestedNameSpecifier(CppAdvanceParser::NestedNameSpecifierContext*) override;


	void enterIdExpression(CppAdvanceParser::IdExpressionContext*) override;


	void exitIdExpression(CppAdvanceParser::IdExpressionContext*) override;


	void exitPostfixExpression(CppAdvanceParser::PostfixExpressionContext*) override;


	void exitRefDeclaration(CppAdvanceParser::RefDeclarationContext*) override;


	void exitMultiDeclaration(CppAdvanceParser::MultiDeclarationContext*) override;


	void exitConstantDeclaration(CppAdvanceParser::ConstantDeclarationContext*) override;


	void exitInitializerClause(CppAdvanceParser::InitializerClauseContext*) override;


	void exitRelationalExpression(CppAdvanceParser::RelationalExpressionContext*) override;


	void exitEqualityExpression(CppAdvanceParser::EqualityExpressionContext*) override;


	void exitLogicalAndExpression(CppAdvanceParser::LogicalAndExpressionContext*) override;


	void exitLogicalOrExpression(CppAdvanceParser::LogicalOrExpressionContext*) override;


	void enterForwardVarDeclaration(CppAdvanceParser::ForwardVarDeclarationContext*) override;


	void exitForwardVarDeclaration(CppAdvanceParser::ForwardVarDeclarationContext*) override;


	void exitJumpStatement(CppAdvanceParser::JumpStatementContext*) override;


	void enterSelectionStatement(CppAdvanceParser::SelectionStatementContext*) override;


	void exitSelectionStatement(CppAdvanceParser::SelectionStatementContext*) override;


	void enterIterationStatement(CppAdvanceParser::IterationStatementContext*) override;


	void exitIterationStatement(CppAdvanceParser::IterationStatementContext*) override;


	void enterElseBranch(CppAdvanceParser::ElseBranchContext*) override;


	void exitElseBranch(CppAdvanceParser::ElseBranchContext*) override;


	void enterLabeledStatement(CppAdvanceParser::LabeledStatementContext*) override;


	void exitLabeledStatement(CppAdvanceParser::LabeledStatementContext*) override;


	void enterTryBlock(CppAdvanceParser::TryBlockContext*) override;


	void exitTryBlock(CppAdvanceParser::TryBlockContext*) override;


	void enterFunctionTemplateDeclaration(CppAdvanceParser::FunctionTemplateDeclarationContext*) override;


	void exitFunctionTemplateDeclaration(CppAdvanceParser::FunctionTemplateDeclarationContext*) override;


	void enterExternFunctionDeclaration(CppAdvanceParser::ExternFunctionDeclarationContext*) override;


	void exitConditionalExpression(CppAdvanceParser::ConditionalExpressionContext*) override;


	void exitReturnType(CppAdvanceParser::ReturnTypeContext*) override;


	void exitTheTypeId(CppAdvanceParser::TheTypeIdContext*) override;


	void exitSimpleTypeSpecifier(CppAdvanceParser::SimpleTypeSpecifierContext*) override;


	void exitDeconstructionDeclaration(CppAdvanceParser::DeconstructionDeclarationContext*) override;


	void exitParamDeclaration(CppAdvanceParser::ParamDeclarationContext*) override;


	void enterCompoundStatement(CppAdvanceParser::CompoundStatementContext*) override;


	void exitCompoundStatement(CppAdvanceParser::CompoundStatementContext*) override;


	void enterStructDefinition(CppAdvanceParser::StructDefinitionContext*) override;


	void exitStructDefinition(CppAdvanceParser::StructDefinitionContext*) override;


	void enterStructMemberDeclaration(CppAdvanceParser::StructMemberDeclarationContext*) override;


	void exitStructMemberDeclaration(CppAdvanceParser::StructMemberDeclarationContext*) override;


	void enterMemberVersionConditionalDeclaration(CppAdvanceParser::MemberVersionConditionalDeclarationContext*) override;


	void exitMemberVersionConditionalDeclaration(CppAdvanceParser::MemberVersionConditionalDeclarationContext*) override;


	void enterMemberRefDeclaration(CppAdvanceParser::MemberRefDeclarationContext*) override;


	void exitMemberRefDeclaration(CppAdvanceParser::MemberRefDeclarationContext*) override;


	void exitTupleExpression(CppAdvanceParser::TupleExpressionContext*) override;


	void enterConstructor(CppAdvanceParser::ConstructorContext*) override;


	void exitConstructor(CppAdvanceParser::ConstructorContext*) override;


	void enterConstructorBody(CppAdvanceParser::ConstructorBodyContext*) override;


	void exitConstructorBody(CppAdvanceParser::ConstructorBodyContext*) override;


	void enterDelegatingConstructorBody(CppAdvanceParser::DelegatingConstructorBodyContext*) override;


	void exitDelegatingConstructorBody(CppAdvanceParser::DelegatingConstructorBodyContext*) override;


	void enterDelegatingConstructorStatement(CppAdvanceParser::DelegatingConstructorStatementContext*) override;


	void exitDelegatingConstructorStatement(CppAdvanceParser::DelegatingConstructorStatementContext*) override;


	void enterMemberInitializationStatement(CppAdvanceParser::MemberInitializationStatementContext*) override;


	void exitMemberInitializationStatement(CppAdvanceParser::MemberInitializationStatementContext*) override;


	void enterConversionFunction(CppAdvanceParser::ConversionFunctionContext*) override;


	void exitConversionFunction(CppAdvanceParser::ConversionFunctionContext*) override;


	void exitThreeWayComparisonExpression(CppAdvanceParser::ThreeWayComparisonExpressionContext*) override;


	void enterIndexer(CppAdvanceParser::IndexerContext*) override;


	void exitIndexer(CppAdvanceParser::IndexerContext*) override;


	void enterIndexerGetter(CppAdvanceParser::IndexerGetterContext*) override;


	void enterIndexerSetter(CppAdvanceParser::IndexerSetterContext*) override;


	void exitIndexerGetter(CppAdvanceParser::IndexerGetterContext*) override;


	void exitIndexerSetter(CppAdvanceParser::IndexerSetterContext*) override;


	void enterProperty(CppAdvanceParser::PropertyContext*) override;


	void exitProperty(CppAdvanceParser::PropertyContext*) override;


	void enterPropertyGetter(CppAdvanceParser::PropertyGetterContext*) override;


	void exitPropertyGetter(CppAdvanceParser::PropertyGetterContext*) override;


	void enterPropertySetter(CppAdvanceParser::PropertySetterContext*) override;


	void exitPropertySetter(CppAdvanceParser::PropertySetterContext*) override;


	void enterSimpleMultiDeclaration(CppAdvanceParser::SimpleMultiDeclarationContext*) override;


	void exitSimpleMultiDeclaration(CppAdvanceParser::SimpleMultiDeclarationContext*) override;


	void exitFriendDeclaration(CppAdvanceParser::FriendDeclarationContext*) override;


	void enterFriendDeclaration(CppAdvanceParser::FriendDeclarationContext*) override;


	void enterClassDefinition(CppAdvanceParser::ClassDefinitionContext*) override;


	void exitClassDefinition(CppAdvanceParser::ClassDefinitionContext*) override;


	void exitNewExpression(CppAdvanceParser::NewExpressionContext*) override;


	void enterDestructor(CppAdvanceParser::DestructorContext*) override;


	void exitDestructor(CppAdvanceParser::DestructorContext*) override;


	void enterAbstractProperty(CppAdvanceParser::AbstractPropertyContext*) override;


	void exitAbstractProperty(CppAdvanceParser::AbstractPropertyContext*) override;


	void enterAbstractMethodDeclaration(CppAdvanceParser::AbstractMethodDeclarationContext*) override;


	void exitAbstractMethodDeclaration(CppAdvanceParser::AbstractMethodDeclarationContext*) override;


	void exitStackallocExpression(CppAdvanceParser::StackallocExpressionContext*) override;


	void enterInterfaceDefinition(CppAdvanceParser::InterfaceDefinitionContext*) override;


	void exitInterfaceDefinition(CppAdvanceParser::InterfaceDefinitionContext*) override;


	void enterInterfaceProperty(CppAdvanceParser::InterfacePropertyContext*) override;


	void exitInterfaceProperty(CppAdvanceParser::InterfacePropertyContext*) override;


	void enterInterfaceMethodDeclaration(CppAdvanceParser::InterfaceMethodDeclarationContext*) override;


	void exitInterfaceMethodDeclaration(CppAdvanceParser::InterfaceMethodDeclarationContext*) override;


	void enterInterfaceIndexer(CppAdvanceParser::InterfaceIndexerContext*) override;


	void exitInterfaceIndexer(CppAdvanceParser::InterfaceIndexerContext*) override;


	void enterTemplateParamDeclaration(CppAdvanceParser::TemplateParamDeclarationContext*) override;

};
