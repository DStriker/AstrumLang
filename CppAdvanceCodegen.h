#pragma once
#include "CppAdvanceSema.h"

class CppAdvanceCodegen
{
	mutable std::unordered_map<std::string,std::string> symbolTable;
	mutable std::unordered_map<std::string, CppAdvanceParser::TheTypeIdContext*> refParameters;
	mutable std::unordered_set<CppAdvanceParser::PostfixExpressionContext*> ignoredExpressions;
	mutable std::unordered_set<CppAdvanceParser::IdExpressionContext*> functionCallExpressions;
	mutable std::unordered_map<std::string, std::vector<std::string>> enumValues;
	mutable std::vector<std::pair<std::string, CppAdvanceParser::TheTypeIdContext*>> namedReturns;
	mutable std::vector<ConstantDefinition> selfConstants;
	mutable std::stack<CppAdvanceParser::UnaryExpressionContext*> unaryExpressions;
	mutable std::stack<CppAdvanceParser::SelectionStatementContext*> switchStatements;
	mutable std::stack<CppAdvanceParser::SwitchExpressionContext*> switchExpressions;
	mutable std::stack<std::pair<int, int>> switchProcessedVariants;
	mutable CppAdvanceParser::TemplateParamsContext* currentTemplateParams = nullptr;
	mutable CppAdvanceParser::TemplateArgumentListContext* currentTemplateSpecArgs = nullptr;
	mutable CppAdvanceParser::SimpleDeclarationContext* currentDeclaration = nullptr;
	mutable CppAdvanceParser::AssignmentExpressionContext* currentAssignment = nullptr;
	mutable CppAdvanceParser::EqualityExpressionContext* currentEquality = nullptr;
	mutable CppAdvanceParser::RelationalExpressionContext* currentIs = nullptr;
	mutable CppAdvanceParser::SelectionStatementContext* currentIf = nullptr;
	mutable std::string currentType;
	mutable std::string currentLabel;
	mutable std::string currentDeclarationName;
	mutable std::string currentShortType;
	mutable std::string currentTypeWithTemplate;
	mutable std::string currentPropertyField;
	mutable std::string lastEnumValue;
	mutable std::optional <AccessSpecifier> currentAccessSpecifier;
	std::string filename;
	mutable int depth = 0;
	mutable int varargDepth = -1;
	mutable int currentTupleSize = 0;
	mutable bool literalMinus = false;
	mutable bool lvalue = false;
	mutable bool functionBody = false;
	mutable bool isUnsafe = false;
	mutable bool isVolatile = false;
	mutable bool isUnowned = false;
	mutable bool isWeak = false;
	mutable bool isPtr = false;
	mutable bool emptyLine = false;
	mutable bool isDeclaration = false;
	mutable bool isFunctionDeclaration = false;
	mutable bool isVersionCondition = false;
	mutable bool isVarargs = false;
	mutable bool isAssignment = false;
	mutable bool isOutExpression = false;
	mutable bool isTemplateParamDeclaration = false;
	mutable bool isVariadicTemplate = false;
	mutable bool isStructDeclaration = false;
	mutable bool isNested = false;
	mutable bool isNewDeleteOperator = false;
	mutable bool isPropertySetter = false;
	mutable bool isPrivateStruct = false;
	mutable bool isDestructor = false;
	mutable bool isExtension = false;
	mutable bool functionProlog = false;
	mutable bool checkForRefStruct = false;
	mutable bool isAlignas = false;
	mutable bool ifProlog = false;
	mutable bool isCondition = false;
	mutable bool isUnitTestBody = false;
	mutable bool isMainFunction = false;
	mutable bool isLambda = false;

	class StreamSwitcher {
	private:
		std::ofstream* file1;
		std::ofstream* file2;
		std::ofstream* currentStream;

	public:
		StreamSwitcher(std::ofstream& f1, std::ofstream& f2)
			: file1(&f1), file2(&f2), currentStream(&f1) {}

		void switchTo(bool useFile2) {
			currentStream = useFile2 ? file2 : file1;
		}

		template<typename T>
		StreamSwitcher& operator<<(const T& value) {
			*currentStream << value;
			return *this;
		}

		StreamSwitcher& operator<<(std::ostream& (*manipulator)(std::ostream&)) {
			manipulator(*currentStream);
			return *this;
		}
	};

	void printGlobalVariables() const;
	void printGlobalConstants() const;
	void printGlobalTypeAliases() const;
	void printGlobalFunctions() const;
	void printForwardDeclarations() const;
	void printType(StructDefinition* type) const;
	void printStructWrapper(StructDefinition* type) const;
	void printClassRef(StructDefinition* type) const;
	void printInterface(StructDefinition* type) const;
	void printExtension(StructDefinition* type) const;
	void printEnumClassData(StructDefinition* type) const;
	void printTypeDefinitions() const;
	void printVersions() const;
	void printRefStructCheck(CppAdvanceParser::TheTypeIdContext* type) const;
	void printSpecialFunctionDefinitions() const;
	void printTypeSpecialFunctionDefinitions(StructDefinition* type, StructDefinition* parent) const;

public:
	/*const*/ CppAdvanceSema& sema;
	mutable std::ofstream cppout;
	mutable std::ofstream hout;
	mutable StreamSwitcher out{ cppout, hout };

	CppAdvanceCodegen(/*const*/ CppAdvanceSema& sem, std::string filename) : filename{ filename }, sema{ sem }, cppout{ filename + ".cpp" }, hout{ filename + ".h" } {}

	void print() const;
	void printDeclarationSeq(CppAdvanceParser::DeclarationSeqContext* ctx) const;
	void printDeclaration(CppAdvanceParser::DeclarationContext* ctx) const;
	void printBlockDeclaration(CppAdvanceParser::BlockDeclarationContext* ctx) const;
	void printDeclSpecifierSeq(CppAdvanceParser::DeclSpecifierSeqContext* ctx) const;
	void printDeclSpecifier(CppAdvanceParser::DeclSpecifierContext* ctx) const;
	void printExternVariableDeclaration(CppAdvanceParser::ExternVariableDeclarationContext* ctx) const;
	void printExternFunctionDeclaration(CppAdvanceParser::ExternFunctionDeclarationContext* ctx) const;
	void printTemplateDeductionGuide(CppAdvanceParser::TemplateDeductionGuideContext* ctx) const;
	void printStatement(CppAdvanceParser::StatContext* ctx) const;
	void printDeclarationStatement(CppAdvanceParser::DeclarationStatementContext* ctx) const;
	void printDeclarationCompoundStatement(CppAdvanceParser::DeclarationCompoundStatementContext* ctx) const;
	void printCompoundStatement(CppAdvanceParser::CompoundStatementContext* ctx) const;
	void printScopeSafeCompoundStatement(CppAdvanceParser::ScopeSafeCompoundStatementContext* ctx) const;
	void printExpressionStatement(CppAdvanceParser::ExpressionStatementContext* ctx) const;
	void printSelectionStatement(CppAdvanceParser::SelectionStatementContext* ctx) const;
	void printSwitchStatementBranch(CppAdvanceParser::SwitchStatementBranchContext* ctx, 
		CppAdvanceParser::ThreeWayComparisonExpressionContext* switchExpr, int branchIndex) const;
	void printIterationStatement(CppAdvanceParser::IterationStatementContext* ctx) const;
	void printForInitStatement(CppAdvanceParser::ForInitStatementContext* ctx) const;
	void printVersionSelectionStatement(CppAdvanceParser::VersionSelectionStatementContext* ctx) const;
	void printVersionSelectionStatementBlock(CppAdvanceParser::VersionSelectionStatementBlockContext* ctx) const;
	void printLabeledStatement(CppAdvanceParser::LabeledStatementContext* ctx) const;
	void printJumpStatement(CppAdvanceParser::JumpStatementContext* ctx) const;
	void printTryBlock(CppAdvanceParser::TryBlockContext* ctx) const;
	void printExceptionHandler(CppAdvanceParser::ExceptionHandlerContext* ctx) const;
	void printExceptionDeclaration(CppAdvanceParser::ExceptionDeclarationContext* ctx, int i = 0) const;
	void printInlineCppStatement(CppAdvanceParser::InlineCppStatementContext* ctx) const;
	void printCondition(CppAdvanceParser::ConditionContext* ctx) const;
	void printLoopCondition(CppAdvanceParser::WhileConditionContext* ctx) const;
	void printDeclarator(CppAdvanceParser::DeclaratorContext* ctx) const;
	void printTemplateParams(CppAdvanceParser::TemplateParamsContext* ctx, bool printTemplateKeyword = true) const;
	void printTemplateParamDeclaration(CppAdvanceParser::TemplateParamDeclarationContext* ctx) const;
	void printTemplateIdentifier(CppAdvanceParser::TemplateIdContext* ctx) const;
	void printSimpleTemplateId(CppAdvanceParser::SimpleTemplateIdContext* ctx) const;
	void printClassName(CppAdvanceParser::ClassNameContext* ctx) const;
	void printStructDefinition(CppAdvanceParser::StructDefinitionContext* ctx) const;
	void printStructHead(CppAdvanceParser::StructHeadContext* ctx) const;
	void printClassDefinition(CppAdvanceParser::ClassDefinitionContext* ctx) const;
	void printClassHead(CppAdvanceParser::ClassHeadContext* ctx) const;
	void printStructMemberSpecification(CppAdvanceParser::StructMemberSpecificationContext* ctx) const;
	void printStructMemberDeclaration(CppAdvanceParser::StructMemberDeclarationContext* ctx) const;
	void printMemberDeclarationCompoundStatement(CppAdvanceParser::MemberDeclarationCompoundStatementContext* ctx) const;
	void printEnumDefinition(CppAdvanceParser::EnumDefinitionContext* ctx) const;
	void printEnumMemberSpecification(CppAdvanceParser::EnumMemberSpecificationContext* ctx) const;
	void printEnumMemberDeclaration(CppAdvanceParser::EnumMemberDeclarationContext* ctx) const;
	void printEnumClassDefinition(CppAdvanceParser::EnumClassDefinitionContext* ctx) const;
	void printEnumClassList(CppAdvanceParser::EnumClassListContext* ctx) const;
	void printEnumClassEnumerator(CppAdvanceParser::ClassEnumeratorDefinitionContext* ctx) const;
	void printEnumClassMemberSpecification(CppAdvanceParser::EnumClassMemberSpecificationContext* ctx) const;
	void printAttributeSpecifierSeq(CppAdvanceParser::AttributeSpecifierSeqContext* ctx) const;
	void printAttributeSpecifier(CppAdvanceParser::AttributeSpecifierContext* ctx) const;
	void printAttributeArgumentClause(CppAdvanceParser::AttributeArgumentClauseContext* ctx) const;
	void printOperator(CppAdvanceParser::OperatorContext* ctx) const;
	void printOperatorTemplateId(CppAdvanceParser::OperatorTemplateIdContext* ctx) const;
	void printOperatorFunctionId(CppAdvanceParser::OperatorFunctionIdContext* ctx) const;
	void printConversionFunctionId(CppAdvanceParser::ConversionFunctionIdContext* ctx) const;
	void printTemplateArgumentList(CppAdvanceParser::TemplateArgumentListContext* ctx) const;
	void printTemplateArgument(CppAdvanceParser::TemplateArgumentContext* ctx) const;
	void printBaseSpecifier(CppAdvanceParser::BaseSpecifierContext* ctx) const;
	void printConstructor(CppAdvanceParser::ConstructorContext* ctx) const;
	void printConstructorBody(CppAdvanceParser::ConstructorBodyContext* ctx) const;
	void printDelegatingConstructorBody(CppAdvanceParser::DelegatingConstructorBodyContext* ctx) const;
	void printDelegatingConstructorStatement(CppAdvanceParser::DelegatingConstructorStatementContext* ctx) const;
	void printDestructor(CppAdvanceParser::DestructorContext* ctx) const;
	void printMemberInitializationStatement(CppAdvanceParser::MemberInitializationStatementContext* ctx, bool insideBody = false) const;
	void printConversionFunction(CppAdvanceParser::ConversionFunctionContext* ctx) const;
	void printIndexer(CppAdvanceParser::IndexerContext* ctx) const;
	void printProperty(CppAdvanceParser::PropertyContext* ctx) const;
	void printFunctionTemplateDeclaration(CppAdvanceParser::FunctionTemplateDeclarationContext* ctx) const;
	void printFunctionDefinition(CppAdvanceParser::FunctionDefinitionContext* ctx) const;
	void printLocalFunction(CppAdvanceParser::FunctionDefinitionContext* ctx) const;
	void printFunctionParameters(CppAdvanceParser::FunctionParamsContext* ctx) const;
	void printParamDeclClause(CppAdvanceParser::ParamDeclClauseContext* ctx) const;
	void printParamDeclaration(CppAdvanceParser::ParamDeclarationContext* ctx) const;
	void printExceptionSpecification(CppAdvanceParser::ExceptionSpecificationContext* ctx) const;
	void printImplicitSpecification(CppAdvanceParser::ImplicitSpecificationContext* ctx) const;
	void printConstraintClause(CppAdvanceParser::ConstraintClauseContext* ctx) const;
	void printFunctionBody(CppAdvanceParser::FunctionBodyContext* ctx) const;
	void printShortFunctionBody(CppAdvanceParser::ShortFunctionBodyContext* ctx) const;
	void printFriendDeclaration(CppAdvanceParser::FriendDeclarationContext* ctx) const;
	void printMemberBlockDeclaration(CppAdvanceParser::MemberBlockDeclarationContext* ctx) const;
	void printSimpleDeclaration(CppAdvanceParser::SimpleDeclarationContext* ctx) const;
	void printSimpleMultiDeclaration(CppAdvanceParser::SimpleMultiDeclarationContext* ctx) const;
	void printDeconstructionDeclaration(CppAdvanceParser::DeconstructionDeclarationContext* ctx) const;
	void printSimpleTypeSpecifier(CppAdvanceParser::SimpleTypeSpecifierContext* ctx) const;
	void printRefDeclaration(CppAdvanceParser::RefDeclarationContext* ctx) const;
	void printMemberRefDeclaration(CppAdvanceParser::MemberRefDeclarationContext* ctx) const;
	void printMultiDeclaration(CppAdvanceParser::MultiDeclarationContext* ctx) const;
	void printConstantDeclaration(CppAdvanceParser::ConstantDeclarationContext* ctx) const;
	void printForwardVarDeclaration(CppAdvanceParser::ForwardVarDeclarationContext* ctx) const;
	void printAliasDeclaration(CppAdvanceParser::AliasDeclarationContext* ctx) const;
	void printAssertDeclaration(CppAdvanceParser::AssertDeclarationContext* ctx) const;
	void printUnitTestDeclaration(CppAdvanceParser::UnitTestDeclarationContext* ctx) const;
	void printExpression(CppAdvanceParser::ExprContext* ctx) const;
	void printAssignmentExpression(CppAdvanceParser::AssignmentExpressionContext* ctx) const;
	void printAssignmentOperator(CppAdvanceParser::AssignmentOperatorContext* ctx) const;
	void printInitializerClause(CppAdvanceParser::InitializerClauseContext* ctx) const;
	void printBracedInitList(CppAdvanceParser::BracedInitListContext* ctx) const;
	void printInitializerList(CppAdvanceParser::InitializerListContext* ctx) const;
	void printInitializerPart(CppAdvanceParser::InitializerPartContext* ctx) const;
	void printThrowExpression(CppAdvanceParser::ThrowExpressionContext* ctx) const;
	void printExpressionList(CppAdvanceParser::ExpressionListContext* ctx) const;
	void printExpressionListPart(CppAdvanceParser::ExpressionListPartContext* ctx) const;
	void printExpressionSeq(CppAdvanceParser::ExpressionSeqContext* ctx) const;
	void printConstantExpression(CppAdvanceParser::ConstantExpressionContext* ctx) const;
	void printConditionalExpression(CppAdvanceParser::ConditionalExpressionContext* ctx) const;
	void printNullCoalescingExpression(CppAdvanceParser::NullCoalescingExpressionContext* ctx) const;
	void printLogicalOrExpression(CppAdvanceParser::LogicalOrExpressionContext* ctx) const;
	void printLogicalAndExpression(CppAdvanceParser::LogicalAndExpressionContext* ctx) const;
	void printInclusiveOrExpression(CppAdvanceParser::InclusiveOrExpressionContext* ctx) const;
	void printExclusiveOrExpression(CppAdvanceParser::ExclusiveOrExpressionContext* ctx) const;
	void printAndExpression(CppAdvanceParser::AndExpressionContext* ctx) const;
	void printEqualityExpression(CppAdvanceParser::EqualityExpressionContext* ctx) const;
	void printRelationalExpression(CppAdvanceParser::RelationalExpressionContext* ctx) const;
	void printThreeWayComparisonExpression(CppAdvanceParser::ThreeWayComparisonExpressionContext* ctx) const;
	void printPatternList(CppAdvanceParser::PatternListContext* ctx, CppAdvanceParser::ThreeWayComparisonExpressionContext* leftExpr,
		std::string_view tmpName, std::string_view propertyName = "", bool isDeconstruction = false, bool isIndex = false, bool skipFirst = false) const;
	void printShiftExpression(CppAdvanceParser::ShiftExpressionContext* ctx) const;
	void printAdditiveExpression(CppAdvanceParser::AdditiveExpressionContext* ctx) const;
	void printMultiplicativeExpression(CppAdvanceParser::MultiplicativeExpressionContext* ctx) const;
	void printPowerExpression(CppAdvanceParser::PowerExpressionContext* ctx) const;
	void printSwitchExpression(CppAdvanceParser::SwitchExpressionContext* ctx) const;
	void printSwitchExpressionBranch(CppAdvanceParser::SwitchExpressionBranchContext* ctx,
		CppAdvanceParser::ThreeWayComparisonExpressionContext* switchExpr, int branchIndex) const;
	void printRangeExpression(CppAdvanceParser::RangeExpressionContext* ctx) const;
	void printUnaryExpression(CppAdvanceParser::UnaryExpressionContext* ctx) const;
	void printUnaryExpressionTail(CppAdvanceParser::UnaryExpressionTailContext* ctx) const;
	void printNewExpression(CppAdvanceParser::NewExpressionContext* ctx) const;
	void printStackallocExpression(CppAdvanceParser::StackallocExpressionContext* ctx) const;
	void printClassInitializer(CppAdvanceParser::TheTypeIdContext* type, CppAdvanceParser::NewInitializerContext* init) const;
	void printFullPostfixExpression(CppAdvanceParser::FullPostfixExpressionContext* ctx) const;
	void printPostfixExpression(CppAdvanceParser::PostfixExpressionContext* ctx) const;
	void printPrimaryExpression(CppAdvanceParser::PrimaryExpressionContext* ctx) const;
	void printTupleExpression(CppAdvanceParser::TupleExpressionContext* ctx) const;
	void printFoldExpression(CppAdvanceParser::FoldExpressionContext* ctx) const;
	void printLambdaExpression(CppAdvanceParser::LambdaExpressionContext* ctx) const;
	void printMethodBindingExpression(CppAdvanceParser::MethodBindingExpressionContext* ctx) const;
	void printTypeSpecifierSeq(CppAdvanceParser::TypeSpecifierSeqContext* ctx) const;
	void printTypeId(CppAdvanceParser::TheTypeIdContext* ctx) const;
	void printTypeIdWithSpecification(CppAdvanceParser::TypeIdWithSpecificationContext* ctx) const;
	void printSingleTypeId(CppAdvanceParser::SingleTypeIdContext* ctx) const;
	void printTypePostfix(CppAdvanceParser::TypePostfixContext* ctx) const;
	void printArrayDeclarator(CppAdvanceParser::ArrayDeclaratorContext* ctx) const;
	void printIdExpression(CppAdvanceParser::IdExpressionContext* ctx) const;
	void printQualifiedId(CppAdvanceParser::QualifiedIdContext* ctx) const;
	void printUnqualifiedId(CppAdvanceParser::UnqualifiedIdContext* ctx) const;
	void printNestedNameSpecifier(CppAdvanceParser::NestedNameSpecifierContext* ctx) const;
	void printIdentifier(antlr4::tree::TerminalNode* node) const;
	void printLiteral(CppAdvanceParser::LiteralContext* ctx) const;
	void printIntegerLiteral(std::string txt, bool minus) const;
	void printFloatLiteral(std::string txt, bool minus) const;
	void printDecimalLiteral(std::string txt, bool minus) const;
	void printCharacterLiteral(std::string txt) const;
	void printStringLiteral(std::string txt) const;
	void printMultilineStringLiteral(std::string txt) const;
	void printInterpolatedStringLiteral(CppAdvanceParser::InterpolatedStringLiteralContext* ctx) const;
	void printDeclvalExpression(CppAdvanceParser::DeclvalExpressionContext* ctx) const;
};
