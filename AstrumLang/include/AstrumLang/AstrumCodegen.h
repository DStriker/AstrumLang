#pragma once
#include "AstrumSema.h"

namespace AstrumLang {
	class ASTRUMLANG_API AstrumCodegen {
		std::unordered_map<std::string, std::string> symbolTable;
		std::unordered_map<std::string, AstrumParser::TheTypeIdContext*> refParameters;
		std::unordered_set<AstrumParser::PostfixExpressionContext*> ignoredExpressions;
		std::unordered_set<AstrumParser::IdExpressionContext*> functionCallExpressions;
		std::unordered_map<std::string, std::vector<std::string>> enumValues;
		std::unordered_set<std::string> importedPackages;
		std::vector<std::pair<std::string, AstrumParser::TheTypeIdContext*>> namedReturns;
		std::vector<ConstantDefinition> selfConstants;
		std::stack<AstrumParser::UnaryExpressionContext*> unaryExpressions;
		std::stack<AstrumParser::SelectionStatementContext*> switchStatements;
		std::stack<AstrumParser::SwitchExpressionContext*> switchExpressions;
		std::stack<std::pair<int, int>> switchProcessedVariants;
		AstrumParser::TemplateParamsContext* currentTemplateParams         = nullptr;
		AstrumParser::TemplateArgumentListContext* currentTemplateSpecArgs = nullptr;
		AstrumParser::SimpleDeclarationContext* currentDeclaration         = nullptr;
		AstrumParser::AssignmentExpressionContext* currentAssignment       = nullptr;
		AstrumParser::EqualityExpressionContext* currentEquality           = nullptr;
		AstrumParser::RelationalExpressionContext* currentIs               = nullptr;
		AstrumParser::SelectionStatementContext* currentIf                 = nullptr;
		std::string currentType;
		std::string currentLabel;
		std::string currentDeclarationName;
		std::string currentShortType;
		std::string currentTypeWithTemplate;
		std::string currentPropertyField;
		std::string lastEnumValue;
		std::optional<AccessSpecifier> currentAccessSpecifier;
		std::string filename;
		int depth                       = 0;
		int varargDepth                 = -1;
		int currentTupleSize            = 0;
		bool firstPass                  = true;
		bool literalMinus               = false;
		bool lvalue                     = false;
		bool functionBody               = false;
		bool isUnsafe                   = false;
		bool isVolatile                 = false;
		bool isUnowned                  = false;
		bool isWeak                     = false;
		bool isPtr                      = false;
		bool emptyLine                  = false;
		bool isDeclaration              = false;
		bool isFunctionDeclaration      = false;
		bool isVersionCondition         = false;
		bool isVarargs                  = false;
		bool isAssignment               = false;
		bool isOutExpression            = false;
		bool isTemplateParamDeclaration = false;
		bool isVariadicTemplate         = false;
		bool isStructDeclaration        = false;
		bool isNested                   = false;
		bool isNewDeleteOperator        = false;
		bool isPropertySetter           = false;
		bool isPrivateStruct            = false;
		bool isDestructor               = false;
		bool isExtension                = false;
		bool functionProlog             = false;
		bool checkForRefStruct          = false;
		bool isAlignas                  = false;
		bool ifProlog                   = false;
		bool isCondition                = false;
		bool isUnitTestBody             = false;
		bool isMainFunction             = false;
		bool isLambda                   = false;

		class StreamSwitcher {
			std::ofstream* file1;
			std::ofstream* file2;
			std::ofstream* currentStream;

		   public:
			StreamSwitcher(std::ofstream& f1, std::ofstream& f2)
			    : file1(&f1), file2(&f2), currentStream(&f1) {}

			void switchTo(bool useFile2) { currentStream = useFile2 ? file2 : file1; }

			template <typename T>
			StreamSwitcher& operator<<(const T& value) {
				*currentStream << value;
				return *this;
			}

			StreamSwitcher& operator<<(std::ostream& (*manipulator)(std::ostream&) ) {
				manipulator(*currentStream);
				return *this;
			}
		};

		void printGlobalVariables();
		void printGlobalConstants();
		void printGlobalTypeAliases();
		void printGlobalFunctions();
		void printForwardDeclarations();
		void printType(StructDefinition* type);
		void printStructWrapper(StructDefinition* type);
		void printClassRef(StructDefinition* type);
		void printInterface(StructDefinition* type);
		void printExtension(StructDefinition* type);
		void printEnumClassData(StructDefinition* type);
		void printTypeDefinitions();
		void printVersions();
		void printRefStructCheck(AstrumParser::TheTypeIdContext* type);
		void printSpecialFunctionDefinitions();
		void printTypeSpecialFunctionDefinitions(StructDefinition* type,
		                                         StructDefinition* parent);

	   public:
		/*const*/ AstrumSema& sema;
		std::ofstream cppout;
		std::ofstream hout;
		StreamSwitcher out {cppout, hout};

		AstrumCodegen(/*const*/ AstrumSema& sem)
		    : filename {sem.filename},
		      sema {sem},
		      cppout {sem.filenamePath / (sem.filename + ".cpp")},
		      hout {sem.filenamePath / (sem.filename + ".h")} {}

		void printFirstPass();
		void printSecondPass();
		void printImportDeclaration(AstrumParser::ImportDeclarationContext* ctx);
		void printDeclarationSeq(AstrumParser::DeclarationSeqContext* ctx);
		void printDeclaration(AstrumParser::DeclarationContext* ctx);
		void printBlockDeclaration(AstrumParser::BlockDeclarationContext* ctx);
		void printDeclSpecifierSeq(AstrumParser::DeclSpecifierSeqContext* ctx);
		void printDeclSpecifier(AstrumParser::DeclSpecifierContext* ctx);
		void printExternVariableDeclaration(
		    AstrumParser::ExternVariableDeclarationContext* ctx);
		void printExternFunctionDeclaration(
		    AstrumParser::ExternFunctionDeclarationContext* ctx);
		void printTemplateDeductionGuide(AstrumParser::TemplateDeductionGuideContext* ctx);
		void printStatement(AstrumParser::StatementContext* ctx);
		void printDeclarationStatement(AstrumParser::DeclarationStatementContext* ctx);
		void printDeclarationCompoundStatement(
		    AstrumParser::DeclarationCompoundStatementContext* ctx);
		void printCompoundStatement(AstrumParser::CompoundStatementContext* ctx);
		void printScopeSafeCompoundStatement(
		    AstrumParser::ScopeSafeCompoundStatementContext* ctx);
		void printExpressionStatement(AstrumParser::ExpressionStatementContext* ctx);
		void printSelectionStatement(AstrumParser::SelectionStatementContext* ctx);
		void printSwitchStatementBranch(
		    AstrumParser::SwitchStatementBranchContext* ctx,
		    AstrumParser::ThreeWayComparisonExpressionContext* switchExpr, int branchIndex);
		void printIterationStatement(AstrumParser::IterationStatementContext* ctx);
		void printForInitStatement(AstrumParser::ForInitStatementContext* ctx);
		void printVersionSelectionStatement(
		    AstrumParser::VersionSelectionStatementContext* ctx);
		void printVersionSelectionStatementBlock(
		    AstrumParser::VersionSelectionStatementBlockContext* ctx);
		void printLabeledStatement(AstrumParser::LabeledStatementContext* ctx);
		void printJumpStatement(AstrumParser::JumpStatementContext* ctx);
		void printTryBlock(AstrumParser::TryBlockContext* ctx);
		void printExceptionHandler(AstrumParser::ExceptionHandlerContext* ctx);
		void printExceptionDeclaration(AstrumParser::ExceptionDeclarationContext* ctx,
		                               int i = 0);
		void printInlineCppStatement(AstrumParser::InlineCppStatementContext* ctx);
		void printCondition(AstrumParser::ConditionContext* ctx);
		void printLoopCondition(AstrumParser::WhileConditionContext* ctx);
		void printDeclarator(AstrumParser::DeclaratorContext* ctx);
		void printTemplateParams(AstrumParser::TemplateParamsContext* ctx,
		                         bool printTemplateKeyword = true);
		void printTemplateParamDeclaration(
		    AstrumParser::TemplateParamDeclarationContext* ctx);
		void printTemplateIdentifier(AstrumParser::TemplateIdContext* ctx);
		void printSimpleTemplateId(AstrumParser::SimpleTemplateIdContext* ctx);
		void printClassName(AstrumParser::ClassNameContext* ctx);
		void printStructDefinition(AstrumParser::StructDefinitionContext* ctx);
		void printStructHead(AstrumParser::StructHeadContext* ctx);
		void printClassDefinition(AstrumParser::ClassDefinitionContext* ctx);
		void printClassHead(AstrumParser::ClassHeadContext* ctx);
		void printStructMemberSpecification(
		    AstrumParser::StructMemberSpecificationContext* ctx);
		void printStructMemberDeclaration(AstrumParser::StructMemberDeclarationContext* ctx);
		void printMemberDeclarationCompoundStatement(
		    AstrumParser::MemberDeclarationCompoundStatementContext* ctx);
		void printEnumDefinition(AstrumParser::EnumDefinitionContext* ctx);
		void printEnumMemberSpecification(AstrumParser::EnumMemberSpecificationContext* ctx);
		void printEnumMemberDeclaration(AstrumParser::EnumMemberDeclarationContext* ctx);
		void printEnumClassDefinition(AstrumParser::EnumClassDefinitionContext* ctx);
		void printEnumClassList(AstrumParser::EnumClassListContext* ctx);
		void printEnumClassEnumerator(AstrumParser::ClassEnumeratorDefinitionContext* ctx);
		void printEnumClassMemberSpecification(
		    AstrumParser::EnumClassMemberSpecificationContext* ctx);
		void printAttributeSpecifierSeq(AstrumParser::AttributeSpecifierSeqContext* ctx);
		void printAttributeSpecifier(AstrumParser::AttributeSpecifierContext* ctx);
		void printAttributeArgumentClause(AstrumParser::AttributeArgumentClauseContext* ctx);
		void printOperator(AstrumParser::OperatorContext* ctx);
		void printOperatorTemplateId(AstrumParser::OperatorTemplateIdContext* ctx);
		void printOperatorFunctionId(AstrumParser::OperatorFunctionIdContext* ctx);
		void printConversionFunctionId(AstrumParser::ConversionFunctionIdContext* ctx);
		void printTemplateArgumentList(AstrumParser::TemplateArgumentListContext* ctx);
		void printTemplateArgument(AstrumParser::TemplateArgumentContext* ctx);
		void printBaseSpecifier(AstrumParser::BaseSpecifierContext* ctx);
		void printConstructor(AstrumParser::ConstructorContext* ctx);
		void printConstructorBody(AstrumParser::ConstructorBodyContext* ctx);
		void printDelegatingConstructorBody(
		    AstrumParser::DelegatingConstructorBodyContext* ctx);
		void printDelegatingConstructorStatement(
		    AstrumParser::DelegatingConstructorStatementContext* ctx);
		void printDestructor(AstrumParser::DestructorContext* ctx);
		void printMemberInitializationStatement(
		    AstrumParser::MemberInitializationStatementContext* ctx, bool insideBody = false);
		void printConversionFunction(AstrumParser::ConversionFunctionContext* ctx);
		void printIndexer(AstrumParser::IndexerContext* ctx);
		void printProperty(AstrumParser::PropertyContext* ctx);
		void printFunctionTemplateDeclaration(
		    AstrumParser::FunctionTemplateDeclarationContext* ctx);
		void printFunctionDefinition(AstrumParser::FunctionDefinitionContext* ctx);
		void printLocalFunction(AstrumParser::FunctionDefinitionContext* ctx);
		void printFunctionParameters(AstrumParser::FunctionParamsContext* ctx);
		void printParamDeclClause(AstrumParser::ParamDeclClauseContext* ctx);
		void printParamDeclaration(AstrumParser::ParamDeclarationContext* ctx);
		void printExceptionSpecification(AstrumParser::ExceptionSpecificationContext* ctx);
		void printImplicitSpecification(AstrumParser::ImplicitSpecificationContext* ctx);
		void printConstraintClause(AstrumParser::ConstraintClauseContext* ctx);
		void printFunctionBody(AstrumParser::FunctionBodyContext* ctx);
		void printShortFunctionBody(AstrumParser::ShortFunctionBodyContext* ctx);
		void printFriendDeclaration(AstrumParser::FriendDeclarationContext* ctx);
		void printMemberBlockDeclaration(AstrumParser::MemberBlockDeclarationContext* ctx);
		void printSimpleDeclaration(AstrumParser::SimpleDeclarationContext* ctx);
		void printSimpleMultiDeclaration(AstrumParser::SimpleMultiDeclarationContext* ctx);
		void printDeconstructionDeclaration(
		    AstrumParser::DeconstructionDeclarationContext* ctx);
		void printSimpleTypeSpecifier(AstrumParser::SimpleTypeSpecifierContext* ctx);
		void printRefDeclaration(AstrumParser::RefDeclarationContext* ctx);
		void printMemberRefDeclaration(AstrumParser::MemberRefDeclarationContext* ctx);
		void printMultiDeclaration(AstrumParser::MultiDeclarationContext* ctx);
		void printConstantDeclaration(AstrumParser::ConstantDeclarationContext* ctx);
		void printForwardVarDeclaration(AstrumParser::ForwardVarDeclarationContext* ctx);
		void printAliasDeclaration(AstrumParser::AliasDeclarationContext* ctx);
		void printAssertDeclaration(AstrumParser::AssertDeclarationContext* ctx);
		void printAssumeDeclaration(AstrumParser::AssumeDeclarationContext* ctx);
		void printUnitTestDeclaration(AstrumParser::UnitTestDeclarationContext* ctx);
		void printExpression(AstrumParser::ExpressionContext* ctx);
		void printAssignmentExpression(AstrumParser::AssignmentExpressionContext* ctx);
		void printAssignmentOperator(AstrumParser::AssignmentOperatorContext* ctx);
		void printInitializerClause(AstrumParser::InitializerClauseContext* ctx);
		void printBracedInitList(AstrumParser::BracedInitListContext* ctx);
		void printInitializerList(AstrumParser::InitializerListContext* ctx);
		void printInitializerPart(AstrumParser::InitializerPartContext* ctx);
		void printThrowExpression(AstrumParser::ThrowExpressionContext* ctx);
		void printExpressionList(AstrumParser::ExpressionListContext* ctx);
		void printExpressionListPart(AstrumParser::ExpressionListPartContext* ctx);
		void printExpressionSeq(AstrumParser::ExpressionSeqContext* ctx);
		void printConstantExpression(AstrumParser::ConstantExpressionContext* ctx);
		void printConditionalExpression(AstrumParser::ConditionalExpressionContext* ctx);
		void printNullCoalescingExpression(
		    AstrumParser::NullCoalescingExpressionContext* ctx);
		void printLogicalOrExpression(AstrumParser::LogicalOrExpressionContext* ctx);
		void printLogicalAndExpression(AstrumParser::LogicalAndExpressionContext* ctx);
		void printInclusiveOrExpression(AstrumParser::InclusiveOrExpressionContext* ctx);
		void printExclusiveOrExpression(AstrumParser::ExclusiveOrExpressionContext* ctx);
		void printAndExpression(AstrumParser::AndExpressionContext* ctx);
		void printEqualityExpression(AstrumParser::EqualityExpressionContext* ctx);
		void printRelationalExpression(AstrumParser::RelationalExpressionContext* ctx);
		void printThreeWayComparisonExpression(
		    AstrumParser::ThreeWayComparisonExpressionContext* ctx);
		void printPatternList(AstrumParser::PatternListContext* ctx,
		                      AstrumParser::ThreeWayComparisonExpressionContext* leftExpr,
		                      std::string_view tmpName, std::string_view propertyName = "",
		                      bool isDeconstruction = false, bool isIndex = false,
		                      bool skipFirst = false);
		void printShiftExpression(AstrumParser::ShiftExpressionContext* ctx);
		void printAdditiveExpression(AstrumParser::AdditiveExpressionContext* ctx);
		void printMultiplicativeExpression(
		    AstrumParser::MultiplicativeExpressionContext* ctx);
		void printPowerExpression(AstrumParser::PowerExpressionContext* ctx);
		void printSwitchExpression(AstrumParser::SwitchExpressionContext* ctx);
		void printSwitchExpressionBranch(
		    AstrumParser::SwitchExpressionBranchContext* ctx,
		    AstrumParser::ThreeWayComparisonExpressionContext* switchExpr, int branchIndex);
		void printRangeExpression(AstrumParser::RangeExpressionContext* ctx);
		void printUnaryExpression(AstrumParser::UnaryExpressionContext* ctx);
		void printUnaryExpressionTail(AstrumParser::UnaryExpressionTailContext* ctx);
		void printNewExpression(AstrumParser::NewExpressionContext* ctx);
		void printStackallocExpression(AstrumParser::StackallocExpressionContext* ctx);
		void printClassInitializer(AstrumParser::TheTypeIdContext* type,
		                           AstrumParser::NewInitializerContext* init);
		void printFullPostfixExpression(AstrumParser::FullPostfixExpressionContext* ctx);
		void printPostfixExpression(AstrumParser::PostfixExpressionContext* ctx);
		void printPrimaryExpression(AstrumParser::PrimaryExpressionContext* ctx);
		void printTupleExpression(AstrumParser::TupleExpressionContext* ctx);
		void printFoldExpression(AstrumParser::FoldExpressionContext* ctx);
		void printLambdaExpression(AstrumParser::LambdaExpressionContext* ctx);
		void printMethodBindingExpression(AstrumParser::MethodBindingExpressionContext* ctx);
		void printTypeSpecifierSeq(AstrumParser::TypeSpecifierSeqContext* ctx);
		void printTypeId(AstrumParser::TheTypeIdContext* ctx);
		void printTypeIdWithSpecification(AstrumParser::TypeIdWithSpecificationContext* ctx);
		void printSingleTypeId(AstrumParser::SingleTypeIdContext* ctx);
		void printTypePostfix(AstrumParser::TypePostfixContext* ctx);
		void printArrayDeclarator(AstrumParser::ArrayDeclaratorContext* ctx);
		void printIdExpression(AstrumParser::IdExpressionContext* ctx);
		void printQualifiedId(AstrumParser::QualifiedIdContext* ctx);
		void printUnqualifiedId(AstrumParser::UnqualifiedIdContext* ctx);
		void printNestedNameSpecifier(AstrumParser::NestedNameSpecifierContext* ctx);
		void printIdentifier(antlr4::tree::TerminalNode* node);
		void printLiteral(AstrumParser::LiteralContext* ctx);
		void printIntegerLiteral(std::string txt, bool minus);
		void printFloatLiteral(std::string txt, bool minus);
		void printDecimalLiteral(std::string txt, bool minus);
		void printCharacterLiteral(std::string txt);
		void printStringLiteral(std::string txt);
		void printMultilineStringLiteral(std::string txt);
		void printInterpolatedStringLiteral(
		    AstrumParser::InterpolatedStringLiteralContext* ctx);
		void printDeclvalExpression(AstrumParser::DeclvalExpressionContext* ctx);
	};
}  // namespace AstrumLang