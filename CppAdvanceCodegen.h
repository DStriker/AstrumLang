#pragma once
#include "CppAdvanceSema.h"

class CppAdvanceCodegen
{
	mutable bool literalMinus = false;
	mutable bool lvalue = false;
	mutable bool functionBody = false;
	mutable bool isUnsafe = false;
	mutable bool isVolatile = false;
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
	mutable bool isNewDeleteOperator = false;
	mutable bool isPropertySetter = false;
	mutable bool isPrivateStruct = false;
	mutable bool functionProlog = false;
	mutable int depth = 0;
	mutable int varargDepth = -1;
	mutable std::unordered_map<std::string,std::string> symbolTable;
	mutable std::unordered_map<std::string, CppAdvanceParser::TheTypeIdContext*> refParameters;
	mutable std::vector<std::pair<std::string, CppAdvanceParser::TheTypeIdContext*>> namedReturns;
	mutable std::vector<ConstantDefinition> selfConstants;
	mutable std::string currentType;
	mutable std::string currentLabel;
	mutable std::string currentDeclarationName;
	mutable std::string currentShortType;
	mutable std::string currentTypeWithTemplate;
	mutable std::string currentPropertyField;
	std::string filename;

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
	void printTypeDefinitions() const;
	void printVersions() const;

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
	void printStatement(CppAdvanceParser::StatContext* ctx) const;
	void printDeclarationStatement(CppAdvanceParser::DeclarationStatementContext* ctx) const;
	void printDeclarationCompoundStatement(CppAdvanceParser::DeclarationCompoundStatementContext* ctx) const;
	void printCompoundStatement(CppAdvanceParser::CompoundStatementContext* ctx) const;
	void printScopeSafeCompoundStatement(CppAdvanceParser::ScopeSafeCompoundStatementContext* ctx) const;
	void printExpressionStatement(CppAdvanceParser::ExpressionStatementContext* ctx) const;
	void printSelectionStatement(CppAdvanceParser::SelectionStatementContext* ctx) const;
	void printIterationStatement(CppAdvanceParser::IterationStatementContext* ctx) const;
	void printForInitStatement(CppAdvanceParser::ForInitStatementContext* ctx) const;
	void printVersionSelectionStatement(CppAdvanceParser::VersionSelectionStatementContext* ctx) const;
	void printVersionSelectionStatementBlock(CppAdvanceParser::VersionSelectionStatementBlockContext* ctx) const;
	void printLabeledStatement(CppAdvanceParser::LabeledStatementContext* ctx) const;
	void printJumpStatement(CppAdvanceParser::JumpStatementContext* ctx) const;
	void printTryBlock(CppAdvanceParser::TryBlockContext* ctx) const;
	void printExceptionHandler(CppAdvanceParser::ExceptionHandlerContext* ctx) const;
	void printExceptionDeclaration(CppAdvanceParser::ExceptionDeclarationContext* ctx, int i = 0) const;
	void printCondition(CppAdvanceParser::ConditionContext* ctx) const;
	void printLoopCondition(CppAdvanceParser::WhileConditionContext* ctx) const;
	void printDeclarator(CppAdvanceParser::DeclaratorContext* ctx) const;
	void printTemplateParams(CppAdvanceParser::TemplateParamsContext* ctx) const;
	void printTemplateParamDeclaration(CppAdvanceParser::TemplateParamDeclarationContext* ctx) const;
	void printTemplateIdentifier(CppAdvanceParser::TemplateIdContext* ctx) const;
	void printSimpleTemplateId(CppAdvanceParser::SimpleTemplateIdContext* ctx) const;
	void printClassName(CppAdvanceParser::ClassNameContext* ctx) const;
	void printStructDefinition(CppAdvanceParser::StructDefinitionContext* ctx) const;
	void printStructHead(CppAdvanceParser::StructHeadContext* ctx) const;
	void printStructMemberSpecification(CppAdvanceParser::StructMemberSpecificationContext* ctx) const;
	void printStructMemberDeclaration(CppAdvanceParser::StructMemberDeclarationContext* ctx) const;
	void printMemberDeclarationCompoundStatement(CppAdvanceParser::MemberDeclarationCompoundStatementContext* ctx) const;
	void printOperator(CppAdvanceParser::OperatorContext* ctx) const;
	void printOperatorTemplateId(CppAdvanceParser::OperatorTemplateIdContext* ctx) const;
	void printOperatorFunctionId(CppAdvanceParser::OperatorFunctionIdContext* ctx) const;
	void printConversionFunctionId(CppAdvanceParser::ConversionFunctionIdContext* ctx) const;
	void printTemplateArgumentList(CppAdvanceParser::TemplateArgumentListContext* ctx) const;
	void printTemplateArgument(CppAdvanceParser::TemplateArgumentContext* ctx) const;
	void printConstructor(CppAdvanceParser::ConstructorContext* ctx) const;
	void printConstructorBody(CppAdvanceParser::ConstructorBodyContext* ctx) const;
	void printDelegatingConstructorBody(CppAdvanceParser::DelegatingConstructorBodyContext* ctx) const;
	void printDelegatingConstructorStatement(CppAdvanceParser::DelegatingConstructorStatementContext* ctx) const;
	void printMemberInitializationStatement(CppAdvanceParser::MemberInitializationStatementContext* ctx, bool insideBody = false) const;
	void printConversionFunction(CppAdvanceParser::ConversionFunctionContext* ctx) const;
	void printIndexer(CppAdvanceParser::IndexerContext* ctx) const;
	void printProperty(CppAdvanceParser::PropertyContext* ctx) const;
	void printFunctionDefinition(CppAdvanceParser::FunctionDefinitionContext* ctx) const;
	void printFunctionParameters(CppAdvanceParser::FunctionParamsContext* ctx) const;
	void printParamDeclClause(CppAdvanceParser::ParamDeclClauseContext* ctx) const;
	void printParamDeclaration(CppAdvanceParser::ParamDeclarationContext* ctx) const;
	void printExceptionSpecification(CppAdvanceParser::ExceptionSpecificationContext* ctx) const;
	void printImplicitSpecification(CppAdvanceParser::ImplicitSpecificationContext* ctx) const;
	void printFunctionBody(CppAdvanceParser::FunctionBodyContext* ctx) const;
	void printShortFunctionBody(CppAdvanceParser::ShortFunctionBodyContext* ctx) const;
	void printSimpleDeclaration(CppAdvanceParser::SimpleDeclarationContext* ctx) const;
	void printDeconstructionDeclaration(CppAdvanceParser::DeconstructionDeclarationContext* ctx) const;
	void printSimpleTypeSpecifier(CppAdvanceParser::SimpleTypeSpecifierContext* ctx) const;
	void printRefDeclaration(CppAdvanceParser::RefDeclarationContext* ctx) const;
	void printMultiDeclaration(CppAdvanceParser::MultiDeclarationContext* ctx) const;
	void printConstantDeclaration(CppAdvanceParser::ConstantDeclarationContext* ctx) const;
	void printForwardVarDeclaration(CppAdvanceParser::ForwardVarDeclarationContext* ctx) const;
	void printAliasDeclaration(CppAdvanceParser::AliasDeclarationContext* ctx) const;
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
	void printLogicalOrExpression(CppAdvanceParser::LogicalOrExpressionContext* ctx) const;
	void printLogicalAndExpression(CppAdvanceParser::LogicalAndExpressionContext* ctx) const;
	void printInclusiveOrExpression(CppAdvanceParser::InclusiveOrExpressionContext* ctx) const;
	void printExclusiveOrExpression(CppAdvanceParser::ExclusiveOrExpressionContext* ctx) const;
	void printAndExpression(CppAdvanceParser::AndExpressionContext* ctx) const;
	void printEqualityExpression(CppAdvanceParser::EqualityExpressionContext* ctx) const;
	void printRelationalExpression(CppAdvanceParser::RelationalExpressionContext* ctx) const;
	void printThreeWayComparisonExpression(CppAdvanceParser::ThreeWayComparisonExpressionContext* ctx) const;
	void printShiftExpression(CppAdvanceParser::ShiftExpressionContext* ctx) const;
	void printAdditiveExpression(CppAdvanceParser::AdditiveExpressionContext* ctx) const;
	void printMultiplicativeExpression(CppAdvanceParser::MultiplicativeExpressionContext* ctx) const;
	void printUnaryExpression(CppAdvanceParser::UnaryExpressionContext* ctx) const;
	void printPostfixExpression(CppAdvanceParser::PostfixExpressionContext* ctx) const;
	void printPrimaryExpression(CppAdvanceParser::PrimaryExpressionContext* ctx) const;
	void printTupleExpression(CppAdvanceParser::TupleExpressionContext* ctx) const;
	void printTypeSpecifierSeq(CppAdvanceParser::TypeSpecifierSeqContext* ctx) const;
	void printTypeId(CppAdvanceParser::TheTypeIdContext* ctx) const;
	void printArrayDeclarator(CppAdvanceParser::ArrayDeclaratorContext* ctx) const;
	void printIdExpression(CppAdvanceParser::IdExpressionContext* ctx) const;
	void printQualifiedId(CppAdvanceParser::QualifiedIdContext* ctx) const;
	void printUnqualifiedId(CppAdvanceParser::UnqualifiedIdContext* ctx) const;
	void printNestedNameSpecifier(CppAdvanceParser::NestedNameSpecifierContext* ctx) const;
	void printLiteral(CppAdvanceParser::LiteralContext* ctx) const;
	void printIntegerLiteral(std::string txt, bool minus) const;
	void printFloatLiteral(std::string txt, bool minus) const;
	void printDecimalLiteral(std::string txt, bool minus) const;
	void printCharacterLiteral(std::string txt) const;
	void printStringLiteral(std::string txt) const;
	void printMultilineStringLiteral(std::string txt) const;
};
