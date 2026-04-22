#pragma once
#include <filesystem>
#include <format>
#include <optional>
#include <variant>

#include "AstrumErrorListener.h"
#include "AstrumParserBaseVisitor.h"
#include "CppSymbolParser.h"
#include "SourcePosition.h"

using antlr4::Token;
using antlr4::tree::ParseTree;
using antlr4::tree::TerminalNode;

namespace AstrumLang {

	enum class AccessSpecifier { Public, Internal, Protected, ProtectedInternal, Private };

	struct VariableDefinition {
		std::string id;
		AstrumParser::TemplateParamsContext* templateParams;
		AstrumParser::ConstraintClauseContext* constraints;
		AstrumParser::TheTypeIdContext* type;
		SourcePosition pos;
		AstrumParser::InitializerClauseContext* initializer;
		AstrumParser::InitializerListContext* initializerList;
		AstrumParser::AttributeSpecifierSeqContext* attributes;
		AccessSpecifier access;
		std::string compilationCondition;
		std::string parentType;
		bool isStatic             = false;
		bool isConst              = false;
		bool isVolatile           = false;
		bool isThreadLocal        = false;
		bool isUnsafe             = false;
		bool isTypeSpecialization = false;
		bool isUnowned            = false;
		bool isWeak               = false;
		uint8_t bitWidth          = 0;
	};

	struct ConstantDefinition {
		std::string id;
		AstrumParser::TemplateParamsContext* templateParams;
		AstrumParser::TheTypeIdContext* type;
		SourcePosition pos;
		AstrumParser::InitializerClauseContext* initializer;
		AstrumParser::AttributeSpecifierSeqContext* attributes;
		AccessSpecifier access = AccessSpecifier::Public;
		std::string compilationCondition;
		std::string parentType;
		AstrumParser::ConstantExpressionContext* expression         = nullptr;
		AstrumParser::ExpressionListContext* expressionList         = nullptr;
		AstrumParser::UnionEnumeratorClauseContext* unionEnumerator = nullptr;
	};

	struct TypeAliasDefinition {
		std::string id;
		AstrumParser::TemplateParamsContext* templateParams;
		AstrumParser::TheTypeIdContext* type;
		SourcePosition pos;
		AccessSpecifier access = AccessSpecifier::Public;
		std::string compilationCondition;
		bool isUnsafe = false;
	};

	struct StaticAssert {
		AstrumParser::ConstantExpressionContext* expression;
		std::string message;
		SourcePosition pos;
		std::string compilationCondition;
	};

	struct Version {
		std::string id;
		int64_t value;
		SourcePosition pos;
		AccessSpecifier access = AccessSpecifier::Private;
		std::string compilationCondition;
		bool isDefault = false;
	};

	struct FunctionDefinition {
		std::string id;
		AstrumParser::TemplateParamsContext* templateParams;
		AstrumParser::TemplateArgumentListContext* templateSpecializationArgs;
		AstrumParser::ConstraintClauseContext* constraints;
		AstrumParser::FunctionParamsContext* params;
		AstrumParser::TheTypeIdContext* returnType;
		AstrumParser::ExpressionContext* expression;
		AstrumParser::ExceptionSpecificationContext* exceptionSpecification;
		AstrumParser::AttributeSpecifierSeqContext* attributes;
		SourcePosition pos;
		AccessSpecifier access;
		std::string compilationCondition;
		bool isInline        = false;
		bool isConstexpr     = false;
		bool isConsteval     = false;
		bool isUnsafe        = false;
		bool isRefReturn     = false;
		bool isConstReturn   = false;
		bool isForwardReturn = false;
		bool isCommutative   = false;
		int8_t varargs       = -1;
	};

	struct MethodDefinition : public FunctionDefinition {
		std::string shortType;
		std::string parentType;
		AstrumParser::TemplateParamsContext* parentTemplateParams;
		AstrumParser::TemplateArgumentListContext* parentTemplateSpecializationArgs;
		AstrumParser::ConstraintClauseContext* parentConstraints;
		AstrumParser::ImplicitSpecificationContext* implicitSpecification;
		bool isProtectedType                                = false;
		bool isUnsafeType                                   = false;
		bool isDefault                                      = false;
		bool isMutating                                     = false;
		bool isStatic                                       = false;
		bool isVirtual                                      = false;
		bool isOverride                                     = false;
		bool isAbstract                                     = false;
		bool isFinal                                        = false;
		bool isConstructor                                  = false;
		bool isDestructor                                   = false;
		bool isConverter                                    = false;
		AstrumParser::ParamDeclClauseContext* indexerParams = nullptr;
		AstrumParser::IndexerGetterContext* indexerGetter   = nullptr;
		AstrumParser::IndexerSetterContext* indexerSetter   = nullptr;
	};

	struct PropertyDefinition {
		std::string id;
		AstrumParser::TheTypeIdContext* type;
		SourcePosition pos;
		AstrumParser::InitializerClauseContext* initializer;
		AstrumParser::PropertyGetterContext* getter;
		AstrumParser::PropertySetterContext* setter;
		AstrumParser::ExpressionContext* expression;
		AstrumParser::AttributeSpecifierSeqContext* attributes;
		AccessSpecifier access;
		std::string compilationCondition;
		std::string shortType;
		std::string parentType;
		AstrumParser::TemplateParamsContext* parentTemplateParams;
		AstrumParser::TemplateArgumentListContext* parentTemplateSpecializationArgs;
		AstrumParser::ConstraintClauseContext* parentConstraints;
		bool isStatic        = false;
		bool isConst         = false;
		bool isRef           = false;
		bool isUnsafe        = false;
		bool isPrivateType   = false;
		bool isProtectedType = false;
		bool isUnsafeType    = false;
		bool isVirtual       = false;
		bool isOverride      = false;
		bool isAbstract      = false;
		bool isFinal         = false;
		bool isInline        = false;
		bool isConstexpr     = false;
	};

	struct NamedTuple {
		std::string id;
		std::vector<std::pair<std::string, AstrumParser::TheTypeIdContext*>> fields;
		AccessSpecifier access = AccessSpecifier::Private;
	};

	struct ForwardDeclaration {
		std::string id;
		AstrumParser::TemplateParamsContext* templateParams;
		AstrumParser::ConstraintClauseContext* constraints;
		AccessSpecifier access = AccessSpecifier::Internal;
		SourcePosition pos;
		std::string compilationCondition;
		bool isUnsafe   = false;
		bool isRawUnion = false;
	};

	struct FunctionDeclaration {
		std::string id;
		AstrumParser::FunctionParamsContext* params;
		AstrumParser::ReturnTypeContext* returnType;
		AstrumParser::ExceptionSpecificationContext* exceptions;
		SourcePosition pos;
		std::string compilationCondition;
		bool isExtern = false;
	};

	enum class TypeKind {
		Struct,
		RefStruct,
		Class,
		StaticClass,
		Interface,
		Enum,
		EnumClass,
		Union,
		UnionStruct,
		Extension
	};

	struct StructDefinition {
		TypeKind kind;
		std::string id;
		AstrumParser::TemplateParamsContext* templateParams;
		AstrumParser::TemplateArgumentListContext* templateSpecializationArgs;
		AstrumParser::ConstraintClauseContext* constraints;
		AccessSpecifier access = AccessSpecifier::Internal;
		std::string compilationCondition;
		SourcePosition pos;
		AstrumParser::BaseSpecifierListContext* interfaces;
		std::vector<VariableDefinition> fields;
		std::vector<ConstantDefinition> constants;
		std::vector<TypeAliasDefinition> typeAliases;
		std::vector<PropertyDefinition> properties;
		std::vector<MethodDefinition> methods;
		std::vector<std::shared_ptr<StructDefinition>> nestedStructs;
		std::vector<ForwardDeclaration> friendTypes;
		std::vector<FunctionDeclaration> friendFuncDeclarations;
		std::vector<FunctionDefinition> friendFuncDefinitions;
		std::vector<StaticAssert> staticAsserts;
		std::optional<MethodDefinition> staticConstructor;
		std::optional<MethodDefinition> staticDestructor;

		bool isUnsafe                                          = false;
		bool isAbstract                                        = false;
		bool isFinal                                           = false;
		bool hasAggregateInit                                  = false;
		bool isConstexpr                                       = false;
		bool isDefaultConstructible                            = false;
		AstrumParser::EnumBaseContext* enumBase                = nullptr;
		AstrumParser::TheTypeIdContext* extensionType          = nullptr;
		AstrumParser::AttributeSpecifierSeqContext* attributes = nullptr;

		StructDefinition(TypeKind _kind, std::string _id,
		                 AstrumParser::TemplateParamsContext* _targs,
		                 AstrumParser::TemplateArgumentListContext* _tspec,
		                 AstrumParser::ConstraintClauseContext* _constraints,
		                 AccessSpecifier _access, std::string _ccond, SourcePosition _pos,
		                 const std::vector<VariableDefinition>& _fields,
		                 const std::vector<ConstantDefinition>& _constants,
		                 AstrumParser::BaseSpecifierListContext* _bases,
		                 const std::vector<TypeAliasDefinition>& _typeAliases,
		                 const std::vector<PropertyDefinition>& _properties,
		                 const std::vector<MethodDefinition>& _methods,
		                 const std::vector<std::shared_ptr<StructDefinition>>& _nestedStructs,
		                 const std::vector<ForwardDeclaration>& _friendTypes,
		                 const std::vector<FunctionDeclaration>& _friendDecls,
		                 const std::vector<FunctionDefinition>& _friendDefs, bool _isUnsafe,
		                 bool _isAbstract, bool _isFinal, bool _hasAggregateInit,
		                 AstrumParser::EnumBaseContext* _enumBase = nullptr)
		    : kind {_kind},
		      id {std::move(_id)},
		      templateParams {_targs},
		      templateSpecializationArgs {_tspec},
		      constraints {_constraints},
		      access {_access},
		      compilationCondition {std::move(_ccond)},
		      pos {_pos},
		      interfaces {_bases},
		      fields {_fields},
		      constants {_constants},
		      typeAliases {typeAliases},
		      properties {_properties},
		      methods {_methods},
		      nestedStructs {_nestedStructs},
		      friendTypes {_friendTypes},
		      friendFuncDeclarations {_friendDecls},
		      friendFuncDefinitions {_friendDefs},
		      isUnsafe {_isUnsafe},
		      isAbstract {_isAbstract},
		      isFinal {_isFinal},
		      hasAggregateInit {_hasAggregateInit},
		      enumBase {_enumBase} {}
	};

	class ASTRUMLANG_API AstrumSema : public AstrumParserBaseVisitor {
		struct InitState {
			using VarSet = std::set<std::string>;

			VarSet definitelyAssigned;
			VarSet potentiallyAssigned;

			VarSet intersect(const VarSet& other) const {
				VarSet result;
				std::set_intersection(definitelyAssigned.begin(), definitelyAssigned.end(),
				                      other.begin(), other.end(),
				                      std::inserter(result, result.begin()));
				return result;
			}

			VarSet unite(const VarSet& other) const {
				VarSet result;
				std::set_union(potentiallyAssigned.begin(), potentiallyAssigned.end(),
				               other.begin(), other.end(), std::inserter(result, result.begin()));
				return result;
			}
		};

		struct IfContext {
			InitState before;
			InitState then;
			InitState otherwise;
			bool hasElse;
		};

		struct SymbolContext {
			std::unordered_map<std::string, std::string> symbolTable;
			std::unordered_map<std::string, std::string> aliasTable;
			std::unordered_set<std::string> types;
		};

		//************************************
		// Combine all specified compilation conditions in the current context and returns a string
		// with result
		//************************************
		std::string getCurrentCompilationCondition();
		//************************************
		// Returns a template parameters for last specified type
		//************************************
		AstrumParser::TemplateParamsContext* getLastTypeTemplateParams();
		//************************************
		// Returns a template specialization arguments for last specified type
		//************************************
		AstrumParser::TemplateArgumentListContext* getLastTypeTemplateSpecializationArgs();
		//************************************
		// Returns a template constraints for last specified type
		//************************************
		AstrumParser::ConstraintClauseContext* getLastTypeConstraints();
		//************************************
		// Returns a full name for the last specified type
		//************************************
		std::string getCurrentFullTypeName();
		void tryToAddTypeInStackFromOperator(std::string_view op);

		//************************************
		// Notifies error handlers that a semantic error has occurred
		//************************************
		void notifyErrorListeners(const std::string& msg, const antlr4::Token* token);

		bool checkForCurrentPass();

		std::optional<AccessSpecifier> resolveAccessSpecifier(
		    AstrumParser::AccessSpecifierContext* acc, bool isProtectedInternal);
		void setupTypeDefinition(TypeKind kind, bool isUnsafe,
		                         std::optional<AccessSpecifier>& access, bool primaryType);
		void finalizeTypeDefinition(std::shared_ptr<StructDefinition>& top);
		void processFunctionParams(AstrumParser::FunctionParamsContext* params,
		                           std::string& funcname);
		void checkFunctionSpecifiers(
		    const std::vector<AstrumParser::FunctionSpecifierContext*>& specs, bool& isInline,
		    bool& isStatic, bool& isConstexpr, bool& isConsteval, bool& isUnsafe, bool& isMutating,
		    bool& isVirtual, bool& isOverride, bool& isFinal);

		AstrumParser* parser;
		std::string currentType;
		std::string currentSubtype;
		std::stack<std::string> currentTypeWithTemplate;
		std::stack<InitState> initStates;
		std::stack<IfContext> ifContexts;
		std::stack<std::shared_ptr<StructDefinition>> structStack;
		std::stack<std::string> typeStack;
		std::stack<std::string> conditionStack;
		std::stack<std::optional<AccessSpecifier>> currentAccessSpecifier;
		std::stack<TypeKind> currentTypeKind;
		std::stack<int> constructorCounts;
		std::stack<AstrumParser::UnaryExpressionContext*> unaryExpressions;
		std::stack<std::pair<int, int>> currentSwitchData;
		std::set<AstrumErrorListener*> errorListeners;
		AstrumParser::AssignmentExpressionContext* currentAssignment {};
		AstrumParser::StatementContext* currentStatement {};
		AstrumParser::SelectionStatementContext* currentIfStatement {};
		int depth                      = 0;
		int unsafeDepth                = 0;
		int loopDepth                  = 0;
		int functionBody               = 0;
		bool firstPass                 = true;
		bool literalMinus              = false;
		bool propertyBody              = false;
		bool isAssignment              = false;
		bool fieldAssignment           = false;
		bool lvalue                    = false;
		bool isCondition               = false;
		bool isCatch                   = false;
		bool isOutExpression           = false;
		bool isProtectedTypeDefinition = false;
		bool isPrivateTypeDefinition   = false;
		bool isUnsafeTypeDefinition    = false;
		bool isRefProperty             = false;
		bool isAbstractProperty        = false;
		bool isFriendDefinition        = false;
		bool isUnitTestBody            = false;

	   public:
		AstrumParser::ModuleContext* ast;
		std::stack<SymbolContext> symbolContexts;
		CppSymbolParser cppParser;
		std::string packageName;
		std::string filename;
		std::filesystem::path filenamePath;
		std::vector<VariableDefinition> globalVariables;
		std::vector<ConstantDefinition> globalConstants;
		std::vector<TypeAliasDefinition> globalTypeAliases;
		std::vector<FunctionDefinition> globalFunctions;
		std::vector<VariableDefinition> staticFields;
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
				return symbolContexts.top().symbolTable.contains(id) ||
				       globalSymbolTable.contains(id);
			}

			std::string& operator[](const std::string& id) {
				if (globalSymbolTable.contains(id)) {
					return globalSymbolTable[id];
				}
				return symbolContexts.top().symbolTable[id];
			}
		} symbolTable;

		struct AliasTable {
			std::unordered_map<std::string, std::string>& globalAliasTable;
			std::stack<SymbolContext>& symbolContexts;

			bool contains(const std::string& id) {
				return symbolContexts.top().aliasTable.contains(id) ||
				       globalAliasTable.contains(id);
			}

			std::string& operator[](const std::string& id) {
				if (globalAliasTable.contains(id)) {
					return globalAliasTable[id];
				}
				return symbolContexts.top().aliasTable[id];
			}
		} aliasTable;

		struct TypeSet {
			std::unordered_set<std::string>& globalTypes;
			std::stack<SymbolContext>& symbolContexts;

			bool contains(const std::string& id) {
				return !symbolContexts.empty() && symbolContexts.top().types.contains(id) ||
				       globalTypes.contains(id);
			}

			void insert(const std::string& id) { symbolContexts.top().types.insert(id); }
		} typeset;

		std::unordered_map<std::string, std::string>& functionTable;
		std::unordered_map<std::string,
		                   std::unordered_map<std::string, AstrumParser::InitializerClauseContext*>>
		    activeDefaultParams;
		std::unordered_set<std::string> outParams;
		std::unordered_set<AstrumParser::AssignmentExpressionContext*> uninitConstructs;
		std::unordered_map<AstrumParser::StatementContext*,
		                   std::vector<std::pair<std::string, AstrumParser::TheTypeIdContext*>>>
		    parameterPrerequisites;
		std::unordered_map<AstrumParser::StatementContext*,
		                   std::vector<AstrumParser::StackallocExpressionContext*>>
		    stackallocPrerequisites;
		std::unordered_map<AstrumParser::StatementContext*,
		                   std::vector<AstrumParser::PostfixExpressionContext*>>
		    conditionalPrerequisites;
		std::unordered_map<AstrumParser::SelectionStatementContext*,
		                   std::vector<AstrumParser::RelationalExpressionContext*>>
		    ifPrerequisites;
		std::unordered_map<std::string, NamedTuple> namedTuples;
		std::unordered_map<AstrumParser::ConstructorBodyContext*, std::unordered_set<std::string>>
		    currentFields;
		std::unordered_set<AstrumParser::PropertySetterContext*> propertiesNeedField;
		std::unordered_map<antlr4::tree::ParseTree*, int> optionalChains;
		std::map<SourcePosition, MethodDefinition> methods;
		std::map<SourcePosition, PropertyDefinition> properties;

		AstrumSema(AstrumParser* parser, AstrumParser::ModuleContext* module,
		           std::string_view file);

		//************************************
		// Run semantic analyzer and executes a two passes: declaration pass and function body pass.
		// Generates tables of types and functions
		//************************************

		//************************************
		// Declaration pass
		//************************************
		void runFirstPass();
		//************************************
		// Function body pass
		//************************************
		void runSecondPass();

		//************************************
		// Error listeners management
		//************************************
		void addErrorListener(AstrumErrorListener* listener);
		void removeErrorListener(AstrumErrorListener* listener);
		void removeErrorListeners();

		//************************************
		// Generates an unique id for named tuple
		//************************************
		std::string getNamedTupleId(std::string_view tuple);
		//************************************
		// Generates an unique id for interface method
		//************************************
		std::string getInterfaceMethodId(std::string_view name,
		                                 AstrumParser::ParamDeclClauseContext* params);
		//************************************
		// Generates an unique id for unit test
		//************************************
		std::string getUnitTestId(AstrumParser::UnitTestDeclarationContext* test);
		//************************************
		// Generates a name for user-defined operator function
		//************************************
		std::string getCustomOperatorName(std::string_view op);

		//************************************
		// Check for type context
		//************************************
		inline bool isTypeDefinitionBody() { return !currentType.empty(); }

		void checkIntegerLiteral(TerminalNode* literal, bool minus);
		void checkAsciiLiteral(TerminalNode* literal);

		std::any visitModule(AstrumParser::ModuleContext* ctx) override;

		std::any visitPackageDeclaration(AstrumParser::PackageDeclarationContext* ctx) override;

		std::any visitPackageName(AstrumParser::PackageNameContext* ctx) override;

		std::any visitNestedPackageName(AstrumParser::NestedPackageNameContext* ctx) override;

		std::any visitModuleName(AstrumParser::ModuleNameContext* ctx) override;

		std::any visitImportDeclaration(AstrumParser::ImportDeclarationContext* ctx) override;

		std::any visitDeclarationSeq(AstrumParser::DeclarationSeqContext* ctx) override;

		std::any visitDeclaration(AstrumParser::DeclarationContext* ctx) override;

		std::any visitSymbolSpecifierSeq(AstrumParser::SymbolSpecifierSeqContext* ctx) override;

		std::any visitVersionDefinition(AstrumParser::VersionDefinitionContext* ctx) override;

		std::any visitExternVariableDeclaration(
		    AstrumParser::ExternVariableDeclarationContext* ctx) override;

		std::any visitBlockDeclaration(AstrumParser::BlockDeclarationContext* ctx) override;

		std::any visitMemberBlockDeclaration(
		    AstrumParser::MemberBlockDeclarationContext* ctx) override;

		std::any visitAssertDeclaration(AstrumParser::AssertDeclarationContext* ctx) override;

		std::any visitAssumeDeclaration(AstrumParser::AssumeDeclarationContext* ctx) override;

		std::any visitUnitTestDeclaration(AstrumParser::UnitTestDeclarationContext* ctx) override;

		std::any visitDeclarationCompoundStatement(
		    AstrumParser::DeclarationCompoundStatementContext* ctx) override;

		std::any visitVersionConditionalDeclaration(
		    AstrumParser::VersionConditionalDeclarationContext* ctx) override;

		std::any visitVersionIfDeclaration(AstrumParser::VersionIfDeclarationContext* ctx) override;

		std::any visitVersionElseDeclaration(
		    AstrumParser::VersionElseDeclarationContext* ctx) override;

		std::any visitDeclSpecifier(AstrumParser::DeclSpecifierContext* ctx) override;

		std::any visitDeclSpecifierSeq(AstrumParser::DeclSpecifierSeqContext* ctx) override;

		std::any visitIdentifierSeq(AstrumParser::IdentifierSeqContext* ctx) override;

		std::any visitSimpleDeclaration(AstrumParser::SimpleDeclarationContext* ctx) override;

		std::any visitBitFieldDeclaration(AstrumParser::BitFieldDeclarationContext* ctx) override;

		std::any visitDeconstructionDeclaration(
		    AstrumParser::DeconstructionDeclarationContext* ctx) override;

		std::any visitRefDeclaration(AstrumParser::RefDeclarationContext* ctx) override;

		std::any visitMemberRefDeclaration(AstrumParser::MemberRefDeclarationContext* ctx) override;

		std::any visitSimpleMultiDeclaration(
		    AstrumParser::SimpleMultiDeclarationContext* ctx) override;

		std::any visitMultiDeclaration(AstrumParser::MultiDeclarationContext* ctx) override;

		std::any visitConstantDeclaration(AstrumParser::ConstantDeclarationContext* ctx) override;

		std::any visitForwardVarDeclaration(
		    AstrumParser::ForwardVarDeclarationContext* ctx) override;

		std::any visitAliasDeclaration(AstrumParser::AliasDeclarationContext* ctx) override;

		std::any visitAccessSpecifier(AstrumParser::AccessSpecifierContext* ctx) override;

		std::any visitProtectedInternal(AstrumParser::ProtectedInternalContext* ctx) override;

		std::any visitStatement(AstrumParser::StatementContext* ctx) override;

		std::any visitLabeledStatement(AstrumParser::LabeledStatementContext* ctx) override;

		std::any visitDeclarationStatement(AstrumParser::DeclarationStatementContext* ctx) override;

		std::any visitExpressionStatement(AstrumParser::ExpressionStatementContext* ctx) override;

		std::any visitCompoundStatement(AstrumParser::CompoundStatementContext* ctx) override;

		std::any visitSelectionStatement(AstrumParser::SelectionStatementContext* ctx) override;

		std::any visitCondition(AstrumParser::ConditionContext* ctx) override;

		std::any visitElseBranch(AstrumParser::ElseBranchContext* ctx) override;

		std::any visitSwitchStatementBranch(
		    AstrumParser::SwitchStatementBranchContext* ctx) override;

		std::any visitDeclarator(AstrumParser::DeclaratorContext* ctx) override;

		std::any visitInlineCppStatement(AstrumParser::InlineCppStatementContext* ctx) override;

		std::any visitIterationStatement(AstrumParser::IterationStatementContext* ctx) override;

		std::any visitWhileCondition(AstrumParser::WhileConditionContext* ctx) override;

		std::any visitDoWhileCondition(AstrumParser::DoWhileConditionContext* ctx) override;

		std::any visitForInitStatement(AstrumParser::ForInitStatementContext* ctx) override;

		std::any visitForRangeDeclaration(AstrumParser::ForRangeDeclarationContext* ctx) override;

		std::any visitForRangeInitializer(AstrumParser::ForRangeInitializerContext* ctx) override;

		std::any visitExpressionSeq(AstrumParser::ExpressionSeqContext* ctx) override;

		std::any visitJumpStatement(AstrumParser::JumpStatementContext* ctx) override;

		std::any visitVersionSelectionStatement(
		    AstrumParser::VersionSelectionStatementContext* ctx) override;

		std::any visitVersionSelectionStatementBlock(
		    AstrumParser::VersionSelectionStatementBlockContext* ctx) override;

		std::any visitScopeSafeCompoundStatement(
		    AstrumParser::ScopeSafeCompoundStatementContext* ctx) override;

		std::any visitTryBlock(AstrumParser::TryBlockContext* ctx) override;

		std::any visitExceptionHandler(AstrumParser::ExceptionHandlerContext* ctx) override;

		std::any visitExceptionDeclaration(AstrumParser::ExceptionDeclarationContext* ctx) override;

		std::any visitExpression(AstrumParser::ExpressionContext* ctx) override;

		std::any visitRangeExpression(AstrumParser::RangeExpressionContext* ctx) override;

		std::any visitRangeExpressionStart(AstrumParser::RangeExpressionStartContext* ctx) override;

		std::any visitRangeExpressionEnd(AstrumParser::RangeExpressionEndContext* ctx) override;

		std::any visitSwitchExpression(AstrumParser::SwitchExpressionContext* ctx) override;

		std::any visitSwitchExpressionBranch(
		    AstrumParser::SwitchExpressionBranchContext* ctx) override;

		std::any visitPowerExpression(AstrumParser::PowerExpressionContext* ctx) override;

		std::any visitMultiplicativeExpression(
		    AstrumParser::MultiplicativeExpressionContext* ctx) override;

		std::any visitAdditiveExpression(AstrumParser::AdditiveExpressionContext* ctx) override;

		std::any visitShiftExpression(AstrumParser::ShiftExpressionContext* ctx) override;

		std::any visitThreeWayComparisonExpression(
		    AstrumParser::ThreeWayComparisonExpressionContext* ctx) override;

		std::any visitRelationalExpression(AstrumParser::RelationalExpressionContext* ctx) override;

		std::any visitEqualityExpression(AstrumParser::EqualityExpressionContext* ctx) override;

		std::any visitAndExpression(AstrumParser::AndExpressionContext* ctx) override;

		std::any visitExclusiveOrExpression(
		    AstrumParser::ExclusiveOrExpressionContext* ctx) override;

		std::any visitInclusiveOrExpression(
		    AstrumParser::InclusiveOrExpressionContext* ctx) override;

		std::any visitLogicalAndExpression(AstrumParser::LogicalAndExpressionContext* ctx) override;

		std::any visitLogicalOrExpression(AstrumParser::LogicalOrExpressionContext* ctx) override;

		std::any visitNullCoalescingExpression(
		    AstrumParser::NullCoalescingExpressionContext* ctx) override;

		std::any visitNullCoalescingBranch(AstrumParser::NullCoalescingBranchContext* ctx) override;

		std::any visitConditionalExpression(
		    AstrumParser::ConditionalExpressionContext* ctx) override;

		std::any visitConstantExpression(AstrumParser::ConstantExpressionContext* ctx) override;

		std::any visitAssignmentExpression(AstrumParser::AssignmentExpressionContext* ctx) override;

		std::any visitInitializerClause(AstrumParser::InitializerClauseContext* ctx) override;

		std::any visitBracedInitList(AstrumParser::BracedInitListContext* ctx) override;

		std::any visitInitializerList(AstrumParser::InitializerListContext* ctx) override;

		std::any visitInitializerPart(AstrumParser::InitializerPartContext* ctx) override;

		std::any visitExpressionList(AstrumParser::ExpressionListContext* ctx) override;

		std::any visitExpressionListPart(AstrumParser::ExpressionListPartContext* ctx) override;

		std::any visitThrowExpression(AstrumParser::ThrowExpressionContext* ctx) override;

		std::any visitIdExpression(AstrumParser::IdExpressionContext* ctx) override;

		std::any visitQualifiedId(AstrumParser::QualifiedIdContext* ctx) override;

		std::any visitUnqualifiedId(AstrumParser::UnqualifiedIdContext* ctx) override;

		std::any visitUnaryExpression(AstrumParser::UnaryExpressionContext* ctx) override;

		std::any visitUnaryExpressionTail(AstrumParser::UnaryExpressionTailContext* ctx) override;

		std::any visitNewExpression(AstrumParser::NewExpressionContext* ctx) override;

		std::any visitStackallocExpression(AstrumParser::StackallocExpressionContext* ctx) override;

		std::any visitMemorySpaceSetter(AstrumParser::MemorySpaceSetterContext* ctx) override;

		std::any visitNewInitializer(AstrumParser::NewInitializerContext* ctx) override;

		std::any visitFullPostfixExpression(
		    AstrumParser::FullPostfixExpressionContext* ctx) override;

		std::any visitPostfixExpression(AstrumParser::PostfixExpressionContext* ctx) override;

		std::any visitTupleExpression(AstrumParser::TupleExpressionContext* ctx) override;

		std::any visitMethodBindingExpression(
		    AstrumParser::MethodBindingExpressionContext* ctx) override;

		std::any visitMethodOwnerExpression(
		    AstrumParser::MethodOwnerExpressionContext* ctx) override;

		std::any visitMethodName(AstrumParser::MethodNameContext* ctx) override;

		std::any visitPrimaryExpression(AstrumParser::PrimaryExpressionContext* ctx) override;

		std::any visitFoldExpression(AstrumParser::FoldExpressionContext* ctx) override;

		std::any visitFoldLeftExpression(AstrumParser::FoldLeftExpressionContext* ctx) override;

		std::any visitFoldRightExpression(AstrumParser::FoldRightExpressionContext* ctx) override;

		std::any visitDeclvalExpression(AstrumParser::DeclvalExpressionContext* ctx) override;

		std::any visitLambdaExpression(AstrumParser::LambdaExpressionContext* ctx) override;

		std::any visitLambdaCaptureList(AstrumParser::LambdaCaptureListContext* ctx) override;

		std::any visitLambdaCaptureClause(AstrumParser::LambdaCaptureClauseContext* ctx) override;

		std::any visitCapture(AstrumParser::CaptureContext* ctx) override;

		std::any visitLambdaDeclarator(AstrumParser::LambdaDeclaratorContext* ctx) override;

		std::any visitLambdaBody(AstrumParser::LambdaBodyContext* ctx) override;

		std::any visitTheTypeId(AstrumParser::TheTypeIdContext* ctx) override;

		std::any visitSingleTypeId(AstrumParser::SingleTypeIdContext* ctx) override;

		std::any visitTypePostfix(AstrumParser::TypePostfixContext* ctx) override;

		std::any visitArrayDeclarator(AstrumParser::ArrayDeclaratorContext* ctx) override;

		std::any visitPointerOperator(AstrumParser::PointerOperatorContext* ctx) override;

		std::any visitPointerOperatorSeq(AstrumParser::PointerOperatorSeqContext* ctx) override;

		std::any visitTypeSpecifierSeq(AstrumParser::TypeSpecifierSeqContext* ctx) override;

		std::any visitTypeSpecifier(AstrumParser::TypeSpecifierContext* ctx) override;

		std::any visitTrailingTypeSpecifier(
		    AstrumParser::TrailingTypeSpecifierContext* ctx) override;

		std::any visitTypeNameSpecifier(AstrumParser::TypeNameSpecifierContext* ctx) override;

		std::any visitCvQualifierSeq(AstrumParser::CvQualifierSeqContext* ctx) override;

		std::any visitCvQualifier(AstrumParser::CvQualifierContext* ctx) override;

		std::any visitTypename(AstrumParser::TypenameContext* ctx) override;

		std::any visitClassName(AstrumParser::ClassNameContext* ctx) override;

		std::any visitDecltypeSpecifier(AstrumParser::DecltypeSpecifierContext* ctx) override;

		std::any visitDecaySpecifier(AstrumParser::DecaySpecifierContext* ctx) override;

		std::any visitEnumName(AstrumParser::EnumNameContext* ctx) override;

		std::any visitSimpleTypeSpecifier(AstrumParser::SimpleTypeSpecifierContext* ctx) override;

		std::any visitFunctionTypeId(AstrumParser::FunctionTypeIdContext* ctx) override;

		std::any visitTypeIdWithSpecification(
		    AstrumParser::TypeIdWithSpecificationContext* ctx) override;

		std::any visitNamedTupleField(AstrumParser::NamedTupleFieldContext* ctx) override;

		std::any visitNestedNameSpecifier(AstrumParser::NestedNameSpecifierContext* ctx) override;

		std::any visitNamespaceName(AstrumParser::NamespaceNameContext* ctx) override;

		std::any visitTemplateName(AstrumParser::TemplateNameContext* ctx) override;

		std::any visitSimpleTemplateId(AstrumParser::SimpleTemplateIdContext* ctx) override;

		std::any visitOperatorTemplateId(AstrumParser::OperatorTemplateIdContext* ctx) override;

		std::any visitTemplateId(AstrumParser::TemplateIdContext* ctx) override;

		std::any visitPatternList(AstrumParser::PatternListContext* ctx) override;

		std::any visitPatternCombinationOperator(
		    AstrumParser::PatternCombinationOperatorContext* ctx) override;

		std::any visitPattern(AstrumParser::PatternContext* ctx) override;

		std::any visitPropertyPattern(AstrumParser::PropertyPatternContext* ctx) override;

		std::any visitStructDefinition(AstrumParser::StructDefinitionContext* ctx) override;

		std::any visitStructHead(AstrumParser::StructHeadContext* ctx) override;

		std::any visitStructMemberSpecification(
		    AstrumParser::StructMemberSpecificationContext* ctx) override;

		std::any visitMemberDeclarationCompoundStatement(
		    AstrumParser::MemberDeclarationCompoundStatementContext* ctx) override;

		std::any visitMemberVersionConditionalDeclaration(
		    AstrumParser::MemberVersionConditionalDeclarationContext* ctx) override;

		std::any visitMemberVersionIfDeclaration(
		    AstrumParser::MemberVersionIfDeclarationContext* ctx) override;

		std::any visitMemberVersionElseDeclaration(
		    AstrumParser::MemberVersionElseDeclarationContext* ctx) override;

		std::any visitStructMemberDeclaration(
		    AstrumParser::StructMemberDeclarationContext* ctx) override;

		std::any visitClassDefinition(AstrumParser::ClassDefinitionContext* ctx) override;

		std::any visitClassHead(AstrumParser::ClassHeadContext* ctx) override;

		std::any visitInterfaceDefinition(AstrumParser::InterfaceDefinitionContext* ctx) override;

		std::any visitInterfaceHead(AstrumParser::InterfaceHeadContext* ctx) override;

		std::any visitInterfaceMemberSpecification(
		    AstrumParser::InterfaceMemberSpecificationContext* ctx) override;

		std::any visitInterfaceMemberDeclaration(
		    AstrumParser::InterfaceMemberDeclarationContext* ctx) override;

		std::any visitAssociatedTypeDeclaration(
		    AstrumParser::AssociatedTypeDeclarationContext* ctx) override;

		std::any visitEnumDefinition(AstrumParser::EnumDefinitionContext* ctx) override;

		std::any visitEnumHead(AstrumParser::EnumHeadContext* ctx) override;

		std::any visitEnumBase(AstrumParser::EnumBaseContext* ctx) override;

		std::any visitEnumList(AstrumParser::EnumListContext* ctx) override;

		std::any visitEnumeratorDefinition(AstrumParser::EnumeratorDefinitionContext* ctx) override;

		std::any visitEnumMemberSpecification(
		    AstrumParser::EnumMemberSpecificationContext* ctx) override;

		std::any visitEnumMemberDeclaration(
		    AstrumParser::EnumMemberDeclarationContext* ctx) override;

		std::any visitEnumClassDefinition(AstrumParser::EnumClassDefinitionContext* ctx) override;

		std::any visitEnumClassHead(AstrumParser::EnumClassHeadContext* ctx) override;

		std::any visitEnumClassList(AstrumParser::EnumClassListContext* ctx) override;

		std::any visitClassEnumeratorDefinition(
		    AstrumParser::ClassEnumeratorDefinitionContext* ctx) override;

		std::any visitEnumClassMemberSpecification(
		    AstrumParser::EnumClassMemberSpecificationContext* ctx) override;

		std::any visitUnionDefinition(AstrumParser::UnionDefinitionContext* ctx) override;

		std::any visitUnionHead(AstrumParser::UnionHeadContext* ctx) override;

		std::any visitUnionList(AstrumParser::UnionListContext* ctx) override;

		std::any visitUnionEnumerator(AstrumParser::UnionEnumeratorContext* ctx) override;

		std::any visitUnionEnumeratorClause(
		    AstrumParser::UnionEnumeratorClauseContext* ctx) override;

		std::any visitUnionMemberSpecification(
		    AstrumParser::UnionMemberSpecificationContext* ctx) override;

		std::any visitExtensionDefinition(AstrumParser::ExtensionDefinitionContext* ctx) override;

		std::any visitExtensionHead(AstrumParser::ExtensionHeadContext* ctx) override;

		std::any visitExtensionMemberSpecification(
		    AstrumParser::ExtensionMemberSpecificationContext* ctx) override;

		std::any visitExtensionMemberDeclaration(
		    AstrumParser::ExtensionMemberDeclarationContext* ctx) override;

		std::any visitBaseClause(AstrumParser::BaseClauseContext* ctx) override;

		std::any visitBaseSpecifierList(AstrumParser::BaseSpecifierListContext* ctx) override;

		std::any visitBaseSpecifier(AstrumParser::BaseSpecifierContext* ctx) override;

		std::any visitProperty(AstrumParser::PropertyContext* ctx) override;

		std::any visitPropertyBody(AstrumParser::PropertyBodyContext* ctx) override;

		std::any visitAbstractProperty(AstrumParser::AbstractPropertyContext* ctx) override;

		std::any visitInterfaceProperty(AstrumParser::InterfacePropertyContext* ctx) override;

		std::any visitPropertyGetter(AstrumParser::PropertyGetterContext* ctx) override;

		std::any visitPropertySetter(AstrumParser::PropertySetterContext* ctx) override;

		std::any visitAbstractPropertyGetter(
		    AstrumParser::AbstractPropertyGetterContext* ctx) override;

		std::any visitAbstractPropertySetter(
		    AstrumParser::AbstractPropertySetterContext* ctx) override;

		std::any visitExternFunctionDeclaration(
		    AstrumParser::ExternFunctionDeclarationContext* ctx) override;

		std::any visitFunctionTemplateDeclaration(
		    AstrumParser::FunctionTemplateDeclarationContext* ctx) override;

		std::any visitFunctionDefinition(AstrumParser::FunctionDefinitionContext* ctx) override;

		std::any visitAbstractMethodDeclaration(
		    AstrumParser::AbstractMethodDeclarationContext* ctx) override;

		std::any visitInterfaceMethodDeclaration(
		    AstrumParser::InterfaceMethodDeclarationContext* ctx) override;

		std::any visitFunctionSpecifier(AstrumParser::FunctionSpecifierContext* ctx) override;

		std::any visitFunctionParams(AstrumParser::FunctionParamsContext* ctx) override;

		std::any visitParamDeclClause(AstrumParser::ParamDeclClauseContext* ctx) override;

		std::any visitParamDeclList(AstrumParser::ParamDeclListContext* ctx) override;

		std::any visitParamDeclaration(AstrumParser::ParamDeclarationContext* ctx) override;

		std::any visitParamSpecification(AstrumParser::ParamSpecificationContext* ctx) override;

		std::any visitReturnType(AstrumParser::ReturnTypeContext* ctx) override;

		std::any visitFunctionBody(AstrumParser::FunctionBodyContext* ctx) override;

		std::any visitShortFunctionBody(AstrumParser::ShortFunctionBodyContext* ctx) override;

		std::any visitExceptionSpecification(
		    AstrumParser::ExceptionSpecificationContext* ctx) override;

		std::any visitFriendDeclaration(AstrumParser::FriendDeclarationContext* ctx) override;

		std::any visitExternMethodDeclaration(
		    AstrumParser::ExternMethodDeclarationContext* ctx) override;

		std::any visitOperatorFunctionId(AstrumParser::OperatorFunctionIdContext* ctx) override;

		std::any visitConstructor(AstrumParser::ConstructorContext* ctx) override;

		std::any visitConstructorBody(AstrumParser::ConstructorBodyContext* ctx) override;

		std::any visitMemberInitializationList(
		    AstrumParser::MemberInitializationListContext* ctx) override;

		std::any visitDelegatingConstructorBody(
		    AstrumParser::DelegatingConstructorBodyContext* ctx) override;

		std::any visitDelegatingConstructorStatement(
		    AstrumParser::DelegatingConstructorStatementContext* ctx) override;

		std::any visitMemberInitializationStatement(
		    AstrumParser::MemberInitializationStatementContext* ctx) override;

		std::any visitImplicitSpecification(
		    AstrumParser::ImplicitSpecificationContext* ctx) override;

		std::any visitDestructor(AstrumParser::DestructorContext* ctx) override;

		std::any visitConversionFunction(AstrumParser::ConversionFunctionContext* ctx) override;

		std::any visitConversionFunctionId(AstrumParser::ConversionFunctionIdContext* ctx) override;

		std::any visitIndexer(AstrumParser::IndexerContext* ctx) override;

		std::any visitIndexerProperty(AstrumParser::IndexerPropertyContext* ctx) override;

		std::any visitIndexerGetter(AstrumParser::IndexerGetterContext* ctx) override;

		std::any visitIndexerSetter(AstrumParser::IndexerSetterContext* ctx) override;

		std::any visitInterfaceIndexer(AstrumParser::InterfaceIndexerContext* ctx) override;

		std::any visitTemplateParams(AstrumParser::TemplateParamsContext* ctx) override;

		std::any visitTemplateParamDeclaration(
		    AstrumParser::TemplateParamDeclarationContext* ctx) override;

		std::any visitTemplateTypename(AstrumParser::TemplateTypenameContext* ctx) override;

		std::any visitTemplateArgumentList(AstrumParser::TemplateArgumentListContext* ctx) override;

		std::any visitTemplateArgument(AstrumParser::TemplateArgumentContext* ctx) override;

		std::any visitConstraintClause(AstrumParser::ConstraintClauseContext* ctx) override;

		std::any visitTypeTrait(AstrumParser::TypeTraitContext* ctx) override;

		std::any visitTemplateDeductionGuide(
		    AstrumParser::TemplateDeductionGuideContext* ctx) override;

		std::any visitAttributeSpecifierSeq(
		    AstrumParser::AttributeSpecifierSeqContext* ctx) override;

		std::any visitAttributeSpecifier(AstrumParser::AttributeSpecifierContext* ctx) override;

		std::any visitAttributeArgumentClause(
		    AstrumParser::AttributeArgumentClauseContext* ctx) override;

		std::any visitAssignmentOperator(AstrumParser::AssignmentOperatorContext* ctx) override;

		std::any visitShiftOperator(AstrumParser::ShiftOperatorContext* ctx) override;

		std::any visitUnaryPrefixOperator(AstrumParser::UnaryPrefixOperatorContext* ctx) override;

		std::any visitUnaryCustomOperator(AstrumParser::UnaryCustomOperatorContext* ctx) override;

		std::any visitRefCaptureOperator(AstrumParser::RefCaptureOperatorContext* ctx) override;

		std::any visitUnaryPostfixOperator(AstrumParser::UnaryPostfixOperatorContext* ctx) override;

		std::any visitNot(AstrumParser::NotContext* ctx) override;

		std::any visitOperator(AstrumParser::OperatorContext* ctx) override;

		std::any visitLiteral(AstrumParser::LiteralContext* ctx) override;

		std::any visitInterpolatedStringLiteral(
		    AstrumParser::InterpolatedStringLiteralContext* ctx) override;

		std::any visitInterpolatedRegularStringLiteral(
		    AstrumParser::InterpolatedRegularStringLiteralContext* ctx) override;

		std::any visitInterpolatedRegularStringPart(
		    AstrumParser::InterpolatedRegularStringPartContext* ctx) override;

		std::any visitInterpolatedVerbatiumStringLiteral(
		    AstrumParser::InterpolatedVerbatiumStringLiteralContext* ctx) override;

		std::any visitInterpolatedVerbatiumStringPart(
		    AstrumParser::InterpolatedVerbatiumStringPartContext* ctx) override;

		std::any visitInterpolatedMultilineStringLiteral(
		    AstrumParser::InterpolatedMultilineStringLiteralContext* ctx) override;

		std::any visitInterpolatedMultilineStringPart(
		    AstrumParser::InterpolatedMultilineStringPartContext* ctx) override;

		std::any visitInterpolatedExpression(
		    AstrumParser::InterpolatedExpressionContext* ctx) override;

		std::any visitCollectionExpression(AstrumParser::CollectionExpressionContext* ctx) override;

		std::any visitKeyValuePairExpression(
		    AstrumParser::KeyValuePairExpressionContext* ctx) override;

		std::any visitStaticConstructor(AstrumParser::StaticConstructorContext* ctx) override;

		std::any visitStaticDestructor(AstrumParser::StaticDestructorContext* ctx) override;

		std::any visitLockStatement(AstrumParser::LockStatementContext* ctx) override;

		std::any visitYieldStatement(AstrumParser::YieldStatementContext* ctx) override;
	};

}  // namespace AstrumLang