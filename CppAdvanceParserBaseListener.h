
// Generated from CppAdvanceParser.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "CppAdvanceParserListener.h"


/**
 * This class provides an empty implementation of CppAdvanceParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  CppAdvanceParserBaseListener : public CppAdvanceParserListener {
public:

  virtual void enterProgram(CppAdvanceParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(CppAdvanceParser::ProgramContext * /*ctx*/) override { }

  virtual void enterStat(CppAdvanceParser::StatContext * /*ctx*/) override { }
  virtual void exitStat(CppAdvanceParser::StatContext * /*ctx*/) override { }

  virtual void enterDeclarationSeq(CppAdvanceParser::DeclarationSeqContext * /*ctx*/) override { }
  virtual void exitDeclarationSeq(CppAdvanceParser::DeclarationSeqContext * /*ctx*/) override { }

  virtual void enterDeclaration(CppAdvanceParser::DeclarationContext * /*ctx*/) override { }
  virtual void exitDeclaration(CppAdvanceParser::DeclarationContext * /*ctx*/) override { }

  virtual void enterSymbolSpecifierSeq(CppAdvanceParser::SymbolSpecifierSeqContext * /*ctx*/) override { }
  virtual void exitSymbolSpecifierSeq(CppAdvanceParser::SymbolSpecifierSeqContext * /*ctx*/) override { }

  virtual void enterVersionDefinition(CppAdvanceParser::VersionDefinitionContext * /*ctx*/) override { }
  virtual void exitVersionDefinition(CppAdvanceParser::VersionDefinitionContext * /*ctx*/) override { }

  virtual void enterExternVariableDeclaration(CppAdvanceParser::ExternVariableDeclarationContext * /*ctx*/) override { }
  virtual void exitExternVariableDeclaration(CppAdvanceParser::ExternVariableDeclarationContext * /*ctx*/) override { }

  virtual void enterBlockDeclaration(CppAdvanceParser::BlockDeclarationContext * /*ctx*/) override { }
  virtual void exitBlockDeclaration(CppAdvanceParser::BlockDeclarationContext * /*ctx*/) override { }

  virtual void enterMemberBlockDeclaration(CppAdvanceParser::MemberBlockDeclarationContext * /*ctx*/) override { }
  virtual void exitMemberBlockDeclaration(CppAdvanceParser::MemberBlockDeclarationContext * /*ctx*/) override { }

  virtual void enterLabeledStatement(CppAdvanceParser::LabeledStatementContext * /*ctx*/) override { }
  virtual void exitLabeledStatement(CppAdvanceParser::LabeledStatementContext * /*ctx*/) override { }

  virtual void enterDeclarationStatement(CppAdvanceParser::DeclarationStatementContext * /*ctx*/) override { }
  virtual void exitDeclarationStatement(CppAdvanceParser::DeclarationStatementContext * /*ctx*/) override { }

  virtual void enterExpressionStatement(CppAdvanceParser::ExpressionStatementContext * /*ctx*/) override { }
  virtual void exitExpressionStatement(CppAdvanceParser::ExpressionStatementContext * /*ctx*/) override { }

  virtual void enterDeclarationCompoundStatement(CppAdvanceParser::DeclarationCompoundStatementContext * /*ctx*/) override { }
  virtual void exitDeclarationCompoundStatement(CppAdvanceParser::DeclarationCompoundStatementContext * /*ctx*/) override { }

  virtual void enterVersionConditionalDeclaration(CppAdvanceParser::VersionConditionalDeclarationContext * /*ctx*/) override { }
  virtual void exitVersionConditionalDeclaration(CppAdvanceParser::VersionConditionalDeclarationContext * /*ctx*/) override { }

  virtual void enterVersionIfDeclaration(CppAdvanceParser::VersionIfDeclarationContext * /*ctx*/) override { }
  virtual void exitVersionIfDeclaration(CppAdvanceParser::VersionIfDeclarationContext * /*ctx*/) override { }

  virtual void enterVersionElseDeclaration(CppAdvanceParser::VersionElseDeclarationContext * /*ctx*/) override { }
  virtual void exitVersionElseDeclaration(CppAdvanceParser::VersionElseDeclarationContext * /*ctx*/) override { }

  virtual void enterCompoundStatement(CppAdvanceParser::CompoundStatementContext * /*ctx*/) override { }
  virtual void exitCompoundStatement(CppAdvanceParser::CompoundStatementContext * /*ctx*/) override { }

  virtual void enterStructDefinition(CppAdvanceParser::StructDefinitionContext * /*ctx*/) override { }
  virtual void exitStructDefinition(CppAdvanceParser::StructDefinitionContext * /*ctx*/) override { }

  virtual void enterStructHead(CppAdvanceParser::StructHeadContext * /*ctx*/) override { }
  virtual void exitStructHead(CppAdvanceParser::StructHeadContext * /*ctx*/) override { }

  virtual void enterStructMemberSpecification(CppAdvanceParser::StructMemberSpecificationContext * /*ctx*/) override { }
  virtual void exitStructMemberSpecification(CppAdvanceParser::StructMemberSpecificationContext * /*ctx*/) override { }

  virtual void enterMemberDeclarationCompoundStatement(CppAdvanceParser::MemberDeclarationCompoundStatementContext * /*ctx*/) override { }
  virtual void exitMemberDeclarationCompoundStatement(CppAdvanceParser::MemberDeclarationCompoundStatementContext * /*ctx*/) override { }

  virtual void enterMemberVersionConditionalDeclaration(CppAdvanceParser::MemberVersionConditionalDeclarationContext * /*ctx*/) override { }
  virtual void exitMemberVersionConditionalDeclaration(CppAdvanceParser::MemberVersionConditionalDeclarationContext * /*ctx*/) override { }

  virtual void enterMemberVersionIfDeclaration(CppAdvanceParser::MemberVersionIfDeclarationContext * /*ctx*/) override { }
  virtual void exitMemberVersionIfDeclaration(CppAdvanceParser::MemberVersionIfDeclarationContext * /*ctx*/) override { }

  virtual void enterMemberVersionElseDeclaration(CppAdvanceParser::MemberVersionElseDeclarationContext * /*ctx*/) override { }
  virtual void exitMemberVersionElseDeclaration(CppAdvanceParser::MemberVersionElseDeclarationContext * /*ctx*/) override { }

  virtual void enterStructMemberDeclaration(CppAdvanceParser::StructMemberDeclarationContext * /*ctx*/) override { }
  virtual void exitStructMemberDeclaration(CppAdvanceParser::StructMemberDeclarationContext * /*ctx*/) override { }

  virtual void enterClassDefinition(CppAdvanceParser::ClassDefinitionContext * /*ctx*/) override { }
  virtual void exitClassDefinition(CppAdvanceParser::ClassDefinitionContext * /*ctx*/) override { }

  virtual void enterClassHead(CppAdvanceParser::ClassHeadContext * /*ctx*/) override { }
  virtual void exitClassHead(CppAdvanceParser::ClassHeadContext * /*ctx*/) override { }

  virtual void enterBaseClause(CppAdvanceParser::BaseClauseContext * /*ctx*/) override { }
  virtual void exitBaseClause(CppAdvanceParser::BaseClauseContext * /*ctx*/) override { }

  virtual void enterBaseSpecifierList(CppAdvanceParser::BaseSpecifierListContext * /*ctx*/) override { }
  virtual void exitBaseSpecifierList(CppAdvanceParser::BaseSpecifierListContext * /*ctx*/) override { }

  virtual void enterBaseSpecifier(CppAdvanceParser::BaseSpecifierContext * /*ctx*/) override { }
  virtual void exitBaseSpecifier(CppAdvanceParser::BaseSpecifierContext * /*ctx*/) override { }

  virtual void enterProperty(CppAdvanceParser::PropertyContext * /*ctx*/) override { }
  virtual void exitProperty(CppAdvanceParser::PropertyContext * /*ctx*/) override { }

  virtual void enterPropertyBody(CppAdvanceParser::PropertyBodyContext * /*ctx*/) override { }
  virtual void exitPropertyBody(CppAdvanceParser::PropertyBodyContext * /*ctx*/) override { }

  virtual void enterAbstractProperty(CppAdvanceParser::AbstractPropertyContext * /*ctx*/) override { }
  virtual void exitAbstractProperty(CppAdvanceParser::AbstractPropertyContext * /*ctx*/) override { }

  virtual void enterAbstractPropertyBody(CppAdvanceParser::AbstractPropertyBodyContext * /*ctx*/) override { }
  virtual void exitAbstractPropertyBody(CppAdvanceParser::AbstractPropertyBodyContext * /*ctx*/) override { }

  virtual void enterPropertyGetter(CppAdvanceParser::PropertyGetterContext * /*ctx*/) override { }
  virtual void exitPropertyGetter(CppAdvanceParser::PropertyGetterContext * /*ctx*/) override { }

  virtual void enterPropertySetter(CppAdvanceParser::PropertySetterContext * /*ctx*/) override { }
  virtual void exitPropertySetter(CppAdvanceParser::PropertySetterContext * /*ctx*/) override { }

  virtual void enterAbstractPropertyGetter(CppAdvanceParser::AbstractPropertyGetterContext * /*ctx*/) override { }
  virtual void exitAbstractPropertyGetter(CppAdvanceParser::AbstractPropertyGetterContext * /*ctx*/) override { }

  virtual void enterAbstractPropertySetter(CppAdvanceParser::AbstractPropertySetterContext * /*ctx*/) override { }
  virtual void exitAbstractPropertySetter(CppAdvanceParser::AbstractPropertySetterContext * /*ctx*/) override { }

  virtual void enterExternFunctionDeclaration(CppAdvanceParser::ExternFunctionDeclarationContext * /*ctx*/) override { }
  virtual void exitExternFunctionDeclaration(CppAdvanceParser::ExternFunctionDeclarationContext * /*ctx*/) override { }

  virtual void enterFunctionTemplateDeclaration(CppAdvanceParser::FunctionTemplateDeclarationContext * /*ctx*/) override { }
  virtual void exitFunctionTemplateDeclaration(CppAdvanceParser::FunctionTemplateDeclarationContext * /*ctx*/) override { }

  virtual void enterFunctionDefinition(CppAdvanceParser::FunctionDefinitionContext * /*ctx*/) override { }
  virtual void exitFunctionDefinition(CppAdvanceParser::FunctionDefinitionContext * /*ctx*/) override { }

  virtual void enterAbstractMethodDeclaration(CppAdvanceParser::AbstractMethodDeclarationContext * /*ctx*/) override { }
  virtual void exitAbstractMethodDeclaration(CppAdvanceParser::AbstractMethodDeclarationContext * /*ctx*/) override { }

  virtual void enterConstructor(CppAdvanceParser::ConstructorContext * /*ctx*/) override { }
  virtual void exitConstructor(CppAdvanceParser::ConstructorContext * /*ctx*/) override { }

  virtual void enterConstructorBody(CppAdvanceParser::ConstructorBodyContext * /*ctx*/) override { }
  virtual void exitConstructorBody(CppAdvanceParser::ConstructorBodyContext * /*ctx*/) override { }

  virtual void enterMemberInitializationList(CppAdvanceParser::MemberInitializationListContext * /*ctx*/) override { }
  virtual void exitMemberInitializationList(CppAdvanceParser::MemberInitializationListContext * /*ctx*/) override { }

  virtual void enterDelegatingConstructorBody(CppAdvanceParser::DelegatingConstructorBodyContext * /*ctx*/) override { }
  virtual void exitDelegatingConstructorBody(CppAdvanceParser::DelegatingConstructorBodyContext * /*ctx*/) override { }

  virtual void enterDelegatingConstructorStatement(CppAdvanceParser::DelegatingConstructorStatementContext * /*ctx*/) override { }
  virtual void exitDelegatingConstructorStatement(CppAdvanceParser::DelegatingConstructorStatementContext * /*ctx*/) override { }

  virtual void enterMemberInitializationStatement(CppAdvanceParser::MemberInitializationStatementContext * /*ctx*/) override { }
  virtual void exitMemberInitializationStatement(CppAdvanceParser::MemberInitializationStatementContext * /*ctx*/) override { }

  virtual void enterDestructor(CppAdvanceParser::DestructorContext * /*ctx*/) override { }
  virtual void exitDestructor(CppAdvanceParser::DestructorContext * /*ctx*/) override { }

  virtual void enterConversionFunction(CppAdvanceParser::ConversionFunctionContext * /*ctx*/) override { }
  virtual void exitConversionFunction(CppAdvanceParser::ConversionFunctionContext * /*ctx*/) override { }

  virtual void enterIndexer(CppAdvanceParser::IndexerContext * /*ctx*/) override { }
  virtual void exitIndexer(CppAdvanceParser::IndexerContext * /*ctx*/) override { }

  virtual void enterIndexerProperty(CppAdvanceParser::IndexerPropertyContext * /*ctx*/) override { }
  virtual void exitIndexerProperty(CppAdvanceParser::IndexerPropertyContext * /*ctx*/) override { }

  virtual void enterIndexerGetter(CppAdvanceParser::IndexerGetterContext * /*ctx*/) override { }
  virtual void exitIndexerGetter(CppAdvanceParser::IndexerGetterContext * /*ctx*/) override { }

  virtual void enterIndexerSetter(CppAdvanceParser::IndexerSetterContext * /*ctx*/) override { }
  virtual void exitIndexerSetter(CppAdvanceParser::IndexerSetterContext * /*ctx*/) override { }

  virtual void enterFunctionSpecifier(CppAdvanceParser::FunctionSpecifierContext * /*ctx*/) override { }
  virtual void exitFunctionSpecifier(CppAdvanceParser::FunctionSpecifierContext * /*ctx*/) override { }

  virtual void enterImplicitSpecification(CppAdvanceParser::ImplicitSpecificationContext * /*ctx*/) override { }
  virtual void exitImplicitSpecification(CppAdvanceParser::ImplicitSpecificationContext * /*ctx*/) override { }

  virtual void enterTemplateParams(CppAdvanceParser::TemplateParamsContext * /*ctx*/) override { }
  virtual void exitTemplateParams(CppAdvanceParser::TemplateParamsContext * /*ctx*/) override { }

  virtual void enterTemplateParamDeclaration(CppAdvanceParser::TemplateParamDeclarationContext * /*ctx*/) override { }
  virtual void exitTemplateParamDeclaration(CppAdvanceParser::TemplateParamDeclarationContext * /*ctx*/) override { }

  virtual void enterTemplateTypename(CppAdvanceParser::TemplateTypenameContext * /*ctx*/) override { }
  virtual void exitTemplateTypename(CppAdvanceParser::TemplateTypenameContext * /*ctx*/) override { }

  virtual void enterFunctionParams(CppAdvanceParser::FunctionParamsContext * /*ctx*/) override { }
  virtual void exitFunctionParams(CppAdvanceParser::FunctionParamsContext * /*ctx*/) override { }

  virtual void enterParamDeclClause(CppAdvanceParser::ParamDeclClauseContext * /*ctx*/) override { }
  virtual void exitParamDeclClause(CppAdvanceParser::ParamDeclClauseContext * /*ctx*/) override { }

  virtual void enterParamDeclList(CppAdvanceParser::ParamDeclListContext * /*ctx*/) override { }
  virtual void exitParamDeclList(CppAdvanceParser::ParamDeclListContext * /*ctx*/) override { }

  virtual void enterParamDeclaration(CppAdvanceParser::ParamDeclarationContext * /*ctx*/) override { }
  virtual void exitParamDeclaration(CppAdvanceParser::ParamDeclarationContext * /*ctx*/) override { }

  virtual void enterParamSpecification(CppAdvanceParser::ParamSpecificationContext * /*ctx*/) override { }
  virtual void exitParamSpecification(CppAdvanceParser::ParamSpecificationContext * /*ctx*/) override { }

  virtual void enterReturnType(CppAdvanceParser::ReturnTypeContext * /*ctx*/) override { }
  virtual void exitReturnType(CppAdvanceParser::ReturnTypeContext * /*ctx*/) override { }

  virtual void enterFunctionBody(CppAdvanceParser::FunctionBodyContext * /*ctx*/) override { }
  virtual void exitFunctionBody(CppAdvanceParser::FunctionBodyContext * /*ctx*/) override { }

  virtual void enterShortFunctionBody(CppAdvanceParser::ShortFunctionBodyContext * /*ctx*/) override { }
  virtual void exitShortFunctionBody(CppAdvanceParser::ShortFunctionBodyContext * /*ctx*/) override { }

  virtual void enterExceptionSpecification(CppAdvanceParser::ExceptionSpecificationContext * /*ctx*/) override { }
  virtual void exitExceptionSpecification(CppAdvanceParser::ExceptionSpecificationContext * /*ctx*/) override { }

  virtual void enterDeclSpecifier(CppAdvanceParser::DeclSpecifierContext * /*ctx*/) override { }
  virtual void exitDeclSpecifier(CppAdvanceParser::DeclSpecifierContext * /*ctx*/) override { }

  virtual void enterDeclSpecifierSeq(CppAdvanceParser::DeclSpecifierSeqContext * /*ctx*/) override { }
  virtual void exitDeclSpecifierSeq(CppAdvanceParser::DeclSpecifierSeqContext * /*ctx*/) override { }

  virtual void enterIdentifierSeq(CppAdvanceParser::IdentifierSeqContext * /*ctx*/) override { }
  virtual void exitIdentifierSeq(CppAdvanceParser::IdentifierSeqContext * /*ctx*/) override { }

  virtual void enterFriendDeclaration(CppAdvanceParser::FriendDeclarationContext * /*ctx*/) override { }
  virtual void exitFriendDeclaration(CppAdvanceParser::FriendDeclarationContext * /*ctx*/) override { }

  virtual void enterSelectionStatement(CppAdvanceParser::SelectionStatementContext * /*ctx*/) override { }
  virtual void exitSelectionStatement(CppAdvanceParser::SelectionStatementContext * /*ctx*/) override { }

  virtual void enterCondition(CppAdvanceParser::ConditionContext * /*ctx*/) override { }
  virtual void exitCondition(CppAdvanceParser::ConditionContext * /*ctx*/) override { }

  virtual void enterElseBranch(CppAdvanceParser::ElseBranchContext * /*ctx*/) override { }
  virtual void exitElseBranch(CppAdvanceParser::ElseBranchContext * /*ctx*/) override { }

  virtual void enterDeclarator(CppAdvanceParser::DeclaratorContext * /*ctx*/) override { }
  virtual void exitDeclarator(CppAdvanceParser::DeclaratorContext * /*ctx*/) override { }

  virtual void enterIterationStatement(CppAdvanceParser::IterationStatementContext * /*ctx*/) override { }
  virtual void exitIterationStatement(CppAdvanceParser::IterationStatementContext * /*ctx*/) override { }

  virtual void enterWhileCondition(CppAdvanceParser::WhileConditionContext * /*ctx*/) override { }
  virtual void exitWhileCondition(CppAdvanceParser::WhileConditionContext * /*ctx*/) override { }

  virtual void enterDoWhileCondition(CppAdvanceParser::DoWhileConditionContext * /*ctx*/) override { }
  virtual void exitDoWhileCondition(CppAdvanceParser::DoWhileConditionContext * /*ctx*/) override { }

  virtual void enterForInitStatement(CppAdvanceParser::ForInitStatementContext * /*ctx*/) override { }
  virtual void exitForInitStatement(CppAdvanceParser::ForInitStatementContext * /*ctx*/) override { }

  virtual void enterForRangeDeclaration(CppAdvanceParser::ForRangeDeclarationContext * /*ctx*/) override { }
  virtual void exitForRangeDeclaration(CppAdvanceParser::ForRangeDeclarationContext * /*ctx*/) override { }

  virtual void enterForRangeInitializer(CppAdvanceParser::ForRangeInitializerContext * /*ctx*/) override { }
  virtual void exitForRangeInitializer(CppAdvanceParser::ForRangeInitializerContext * /*ctx*/) override { }

  virtual void enterExpressionSeq(CppAdvanceParser::ExpressionSeqContext * /*ctx*/) override { }
  virtual void exitExpressionSeq(CppAdvanceParser::ExpressionSeqContext * /*ctx*/) override { }

  virtual void enterJumpStatement(CppAdvanceParser::JumpStatementContext * /*ctx*/) override { }
  virtual void exitJumpStatement(CppAdvanceParser::JumpStatementContext * /*ctx*/) override { }

  virtual void enterSimpleDeclaration(CppAdvanceParser::SimpleDeclarationContext * /*ctx*/) override { }
  virtual void exitSimpleDeclaration(CppAdvanceParser::SimpleDeclarationContext * /*ctx*/) override { }

  virtual void enterDeconstructionDeclaration(CppAdvanceParser::DeconstructionDeclarationContext * /*ctx*/) override { }
  virtual void exitDeconstructionDeclaration(CppAdvanceParser::DeconstructionDeclarationContext * /*ctx*/) override { }

  virtual void enterRefDeclaration(CppAdvanceParser::RefDeclarationContext * /*ctx*/) override { }
  virtual void exitRefDeclaration(CppAdvanceParser::RefDeclarationContext * /*ctx*/) override { }

  virtual void enterMemberRefDeclaration(CppAdvanceParser::MemberRefDeclarationContext * /*ctx*/) override { }
  virtual void exitMemberRefDeclaration(CppAdvanceParser::MemberRefDeclarationContext * /*ctx*/) override { }

  virtual void enterSimpleMultiDeclaration(CppAdvanceParser::SimpleMultiDeclarationContext * /*ctx*/) override { }
  virtual void exitSimpleMultiDeclaration(CppAdvanceParser::SimpleMultiDeclarationContext * /*ctx*/) override { }

  virtual void enterMultiDeclaration(CppAdvanceParser::MultiDeclarationContext * /*ctx*/) override { }
  virtual void exitMultiDeclaration(CppAdvanceParser::MultiDeclarationContext * /*ctx*/) override { }

  virtual void enterConstantDeclaration(CppAdvanceParser::ConstantDeclarationContext * /*ctx*/) override { }
  virtual void exitConstantDeclaration(CppAdvanceParser::ConstantDeclarationContext * /*ctx*/) override { }

  virtual void enterForwardVarDeclaration(CppAdvanceParser::ForwardVarDeclarationContext * /*ctx*/) override { }
  virtual void exitForwardVarDeclaration(CppAdvanceParser::ForwardVarDeclarationContext * /*ctx*/) override { }

  virtual void enterAliasDeclaration(CppAdvanceParser::AliasDeclarationContext * /*ctx*/) override { }
  virtual void exitAliasDeclaration(CppAdvanceParser::AliasDeclarationContext * /*ctx*/) override { }

  virtual void enterVersionSelectionStatement(CppAdvanceParser::VersionSelectionStatementContext * /*ctx*/) override { }
  virtual void exitVersionSelectionStatement(CppAdvanceParser::VersionSelectionStatementContext * /*ctx*/) override { }

  virtual void enterVersionSelectionStatementBlock(CppAdvanceParser::VersionSelectionStatementBlockContext * /*ctx*/) override { }
  virtual void exitVersionSelectionStatementBlock(CppAdvanceParser::VersionSelectionStatementBlockContext * /*ctx*/) override { }

  virtual void enterScopeSafeCompoundStatement(CppAdvanceParser::ScopeSafeCompoundStatementContext * /*ctx*/) override { }
  virtual void exitScopeSafeCompoundStatement(CppAdvanceParser::ScopeSafeCompoundStatementContext * /*ctx*/) override { }

  virtual void enterExpr(CppAdvanceParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(CppAdvanceParser::ExprContext * /*ctx*/) override { }

  virtual void enterMultiplicativeExpression(CppAdvanceParser::MultiplicativeExpressionContext * /*ctx*/) override { }
  virtual void exitMultiplicativeExpression(CppAdvanceParser::MultiplicativeExpressionContext * /*ctx*/) override { }

  virtual void enterMultiplicativeBranch(CppAdvanceParser::MultiplicativeBranchContext * /*ctx*/) override { }
  virtual void exitMultiplicativeBranch(CppAdvanceParser::MultiplicativeBranchContext * /*ctx*/) override { }

  virtual void enterAdditiveExpression(CppAdvanceParser::AdditiveExpressionContext * /*ctx*/) override { }
  virtual void exitAdditiveExpression(CppAdvanceParser::AdditiveExpressionContext * /*ctx*/) override { }

  virtual void enterAdditiveBranch(CppAdvanceParser::AdditiveBranchContext * /*ctx*/) override { }
  virtual void exitAdditiveBranch(CppAdvanceParser::AdditiveBranchContext * /*ctx*/) override { }

  virtual void enterShiftExpression(CppAdvanceParser::ShiftExpressionContext * /*ctx*/) override { }
  virtual void exitShiftExpression(CppAdvanceParser::ShiftExpressionContext * /*ctx*/) override { }

  virtual void enterShiftBranch(CppAdvanceParser::ShiftBranchContext * /*ctx*/) override { }
  virtual void exitShiftBranch(CppAdvanceParser::ShiftBranchContext * /*ctx*/) override { }

  virtual void enterThreeWayComparisonExpression(CppAdvanceParser::ThreeWayComparisonExpressionContext * /*ctx*/) override { }
  virtual void exitThreeWayComparisonExpression(CppAdvanceParser::ThreeWayComparisonExpressionContext * /*ctx*/) override { }

  virtual void enterRelationalExpression(CppAdvanceParser::RelationalExpressionContext * /*ctx*/) override { }
  virtual void exitRelationalExpression(CppAdvanceParser::RelationalExpressionContext * /*ctx*/) override { }

  virtual void enterRelationalBranch(CppAdvanceParser::RelationalBranchContext * /*ctx*/) override { }
  virtual void exitRelationalBranch(CppAdvanceParser::RelationalBranchContext * /*ctx*/) override { }

  virtual void enterEqualityExpression(CppAdvanceParser::EqualityExpressionContext * /*ctx*/) override { }
  virtual void exitEqualityExpression(CppAdvanceParser::EqualityExpressionContext * /*ctx*/) override { }

  virtual void enterEqualityBranch(CppAdvanceParser::EqualityBranchContext * /*ctx*/) override { }
  virtual void exitEqualityBranch(CppAdvanceParser::EqualityBranchContext * /*ctx*/) override { }

  virtual void enterAndExpression(CppAdvanceParser::AndExpressionContext * /*ctx*/) override { }
  virtual void exitAndExpression(CppAdvanceParser::AndExpressionContext * /*ctx*/) override { }

  virtual void enterExclusiveOrExpression(CppAdvanceParser::ExclusiveOrExpressionContext * /*ctx*/) override { }
  virtual void exitExclusiveOrExpression(CppAdvanceParser::ExclusiveOrExpressionContext * /*ctx*/) override { }

  virtual void enterInclusiveOrExpression(CppAdvanceParser::InclusiveOrExpressionContext * /*ctx*/) override { }
  virtual void exitInclusiveOrExpression(CppAdvanceParser::InclusiveOrExpressionContext * /*ctx*/) override { }

  virtual void enterLogicalAndExpression(CppAdvanceParser::LogicalAndExpressionContext * /*ctx*/) override { }
  virtual void exitLogicalAndExpression(CppAdvanceParser::LogicalAndExpressionContext * /*ctx*/) override { }

  virtual void enterLogicalOrExpression(CppAdvanceParser::LogicalOrExpressionContext * /*ctx*/) override { }
  virtual void exitLogicalOrExpression(CppAdvanceParser::LogicalOrExpressionContext * /*ctx*/) override { }

  virtual void enterNullCoalescingExpression(CppAdvanceParser::NullCoalescingExpressionContext * /*ctx*/) override { }
  virtual void exitNullCoalescingExpression(CppAdvanceParser::NullCoalescingExpressionContext * /*ctx*/) override { }

  virtual void enterConditionalExpression(CppAdvanceParser::ConditionalExpressionContext * /*ctx*/) override { }
  virtual void exitConditionalExpression(CppAdvanceParser::ConditionalExpressionContext * /*ctx*/) override { }

  virtual void enterConstantExpression(CppAdvanceParser::ConstantExpressionContext * /*ctx*/) override { }
  virtual void exitConstantExpression(CppAdvanceParser::ConstantExpressionContext * /*ctx*/) override { }

  virtual void enterAssignmentExpression(CppAdvanceParser::AssignmentExpressionContext * /*ctx*/) override { }
  virtual void exitAssignmentExpression(CppAdvanceParser::AssignmentExpressionContext * /*ctx*/) override { }

  virtual void enterInitializerClause(CppAdvanceParser::InitializerClauseContext * /*ctx*/) override { }
  virtual void exitInitializerClause(CppAdvanceParser::InitializerClauseContext * /*ctx*/) override { }

  virtual void enterBracedInitList(CppAdvanceParser::BracedInitListContext * /*ctx*/) override { }
  virtual void exitBracedInitList(CppAdvanceParser::BracedInitListContext * /*ctx*/) override { }

  virtual void enterInitializerList(CppAdvanceParser::InitializerListContext * /*ctx*/) override { }
  virtual void exitInitializerList(CppAdvanceParser::InitializerListContext * /*ctx*/) override { }

  virtual void enterInitializerPart(CppAdvanceParser::InitializerPartContext * /*ctx*/) override { }
  virtual void exitInitializerPart(CppAdvanceParser::InitializerPartContext * /*ctx*/) override { }

  virtual void enterExpressionList(CppAdvanceParser::ExpressionListContext * /*ctx*/) override { }
  virtual void exitExpressionList(CppAdvanceParser::ExpressionListContext * /*ctx*/) override { }

  virtual void enterExpressionListPart(CppAdvanceParser::ExpressionListPartContext * /*ctx*/) override { }
  virtual void exitExpressionListPart(CppAdvanceParser::ExpressionListPartContext * /*ctx*/) override { }

  virtual void enterAssignmentOperator(CppAdvanceParser::AssignmentOperatorContext * /*ctx*/) override { }
  virtual void exitAssignmentOperator(CppAdvanceParser::AssignmentOperatorContext * /*ctx*/) override { }

  virtual void enterShiftOperator(CppAdvanceParser::ShiftOperatorContext * /*ctx*/) override { }
  virtual void exitShiftOperator(CppAdvanceParser::ShiftOperatorContext * /*ctx*/) override { }

  virtual void enterTryBlock(CppAdvanceParser::TryBlockContext * /*ctx*/) override { }
  virtual void exitTryBlock(CppAdvanceParser::TryBlockContext * /*ctx*/) override { }

  virtual void enterExceptionHandler(CppAdvanceParser::ExceptionHandlerContext * /*ctx*/) override { }
  virtual void exitExceptionHandler(CppAdvanceParser::ExceptionHandlerContext * /*ctx*/) override { }

  virtual void enterExceptionDeclaration(CppAdvanceParser::ExceptionDeclarationContext * /*ctx*/) override { }
  virtual void exitExceptionDeclaration(CppAdvanceParser::ExceptionDeclarationContext * /*ctx*/) override { }

  virtual void enterThrowExpression(CppAdvanceParser::ThrowExpressionContext * /*ctx*/) override { }
  virtual void exitThrowExpression(CppAdvanceParser::ThrowExpressionContext * /*ctx*/) override { }

  virtual void enterSimpleTypeSpecifier(CppAdvanceParser::SimpleTypeSpecifierContext * /*ctx*/) override { }
  virtual void exitSimpleTypeSpecifier(CppAdvanceParser::SimpleTypeSpecifierContext * /*ctx*/) override { }

  virtual void enterNamedTupleField(CppAdvanceParser::NamedTupleFieldContext * /*ctx*/) override { }
  virtual void exitNamedTupleField(CppAdvanceParser::NamedTupleFieldContext * /*ctx*/) override { }

  virtual void enterNestedNameSpecifier(CppAdvanceParser::NestedNameSpecifierContext * /*ctx*/) override { }
  virtual void exitNestedNameSpecifier(CppAdvanceParser::NestedNameSpecifierContext * /*ctx*/) override { }

  virtual void enterNamespaceName(CppAdvanceParser::NamespaceNameContext * /*ctx*/) override { }
  virtual void exitNamespaceName(CppAdvanceParser::NamespaceNameContext * /*ctx*/) override { }

  virtual void enterTemplateName(CppAdvanceParser::TemplateNameContext * /*ctx*/) override { }
  virtual void exitTemplateName(CppAdvanceParser::TemplateNameContext * /*ctx*/) override { }

  virtual void enterSimpleTemplateId(CppAdvanceParser::SimpleTemplateIdContext * /*ctx*/) override { }
  virtual void exitSimpleTemplateId(CppAdvanceParser::SimpleTemplateIdContext * /*ctx*/) override { }

  virtual void enterOperatorTemplateId(CppAdvanceParser::OperatorTemplateIdContext * /*ctx*/) override { }
  virtual void exitOperatorTemplateId(CppAdvanceParser::OperatorTemplateIdContext * /*ctx*/) override { }

  virtual void enterTemplateId(CppAdvanceParser::TemplateIdContext * /*ctx*/) override { }
  virtual void exitTemplateId(CppAdvanceParser::TemplateIdContext * /*ctx*/) override { }

  virtual void enterTemplateArgumentList(CppAdvanceParser::TemplateArgumentListContext * /*ctx*/) override { }
  virtual void exitTemplateArgumentList(CppAdvanceParser::TemplateArgumentListContext * /*ctx*/) override { }

  virtual void enterTemplateArgument(CppAdvanceParser::TemplateArgumentContext * /*ctx*/) override { }
  virtual void exitTemplateArgument(CppAdvanceParser::TemplateArgumentContext * /*ctx*/) override { }

  virtual void enterIdExpression(CppAdvanceParser::IdExpressionContext * /*ctx*/) override { }
  virtual void exitIdExpression(CppAdvanceParser::IdExpressionContext * /*ctx*/) override { }

  virtual void enterQualifiedId(CppAdvanceParser::QualifiedIdContext * /*ctx*/) override { }
  virtual void exitQualifiedId(CppAdvanceParser::QualifiedIdContext * /*ctx*/) override { }

  virtual void enterUnqualifiedId(CppAdvanceParser::UnqualifiedIdContext * /*ctx*/) override { }
  virtual void exitUnqualifiedId(CppAdvanceParser::UnqualifiedIdContext * /*ctx*/) override { }

  virtual void enterTheTypeId(CppAdvanceParser::TheTypeIdContext * /*ctx*/) override { }
  virtual void exitTheTypeId(CppAdvanceParser::TheTypeIdContext * /*ctx*/) override { }

  virtual void enterTypePostfix(CppAdvanceParser::TypePostfixContext * /*ctx*/) override { }
  virtual void exitTypePostfix(CppAdvanceParser::TypePostfixContext * /*ctx*/) override { }

  virtual void enterArrayDeclarator(CppAdvanceParser::ArrayDeclaratorContext * /*ctx*/) override { }
  virtual void exitArrayDeclarator(CppAdvanceParser::ArrayDeclaratorContext * /*ctx*/) override { }

  virtual void enterPointerOperator(CppAdvanceParser::PointerOperatorContext * /*ctx*/) override { }
  virtual void exitPointerOperator(CppAdvanceParser::PointerOperatorContext * /*ctx*/) override { }

  virtual void enterPointerOperatorSeq(CppAdvanceParser::PointerOperatorSeqContext * /*ctx*/) override { }
  virtual void exitPointerOperatorSeq(CppAdvanceParser::PointerOperatorSeqContext * /*ctx*/) override { }

  virtual void enterTypeSpecifierSeq(CppAdvanceParser::TypeSpecifierSeqContext * /*ctx*/) override { }
  virtual void exitTypeSpecifierSeq(CppAdvanceParser::TypeSpecifierSeqContext * /*ctx*/) override { }

  virtual void enterTypeSpecifier(CppAdvanceParser::TypeSpecifierContext * /*ctx*/) override { }
  virtual void exitTypeSpecifier(CppAdvanceParser::TypeSpecifierContext * /*ctx*/) override { }

  virtual void enterTrailingTypeSpecifier(CppAdvanceParser::TrailingTypeSpecifierContext * /*ctx*/) override { }
  virtual void exitTrailingTypeSpecifier(CppAdvanceParser::TrailingTypeSpecifierContext * /*ctx*/) override { }

  virtual void enterTypeNameSpecifier(CppAdvanceParser::TypeNameSpecifierContext * /*ctx*/) override { }
  virtual void exitTypeNameSpecifier(CppAdvanceParser::TypeNameSpecifierContext * /*ctx*/) override { }

  virtual void enterCvQualifierSeq(CppAdvanceParser::CvQualifierSeqContext * /*ctx*/) override { }
  virtual void exitCvQualifierSeq(CppAdvanceParser::CvQualifierSeqContext * /*ctx*/) override { }

  virtual void enterCvQualifier(CppAdvanceParser::CvQualifierContext * /*ctx*/) override { }
  virtual void exitCvQualifier(CppAdvanceParser::CvQualifierContext * /*ctx*/) override { }

  virtual void enterTypename(CppAdvanceParser::TypenameContext * /*ctx*/) override { }
  virtual void exitTypename(CppAdvanceParser::TypenameContext * /*ctx*/) override { }

  virtual void enterClassName(CppAdvanceParser::ClassNameContext * /*ctx*/) override { }
  virtual void exitClassName(CppAdvanceParser::ClassNameContext * /*ctx*/) override { }

  virtual void enterDecltypeSpecifier(CppAdvanceParser::DecltypeSpecifierContext * /*ctx*/) override { }
  virtual void exitDecltypeSpecifier(CppAdvanceParser::DecltypeSpecifierContext * /*ctx*/) override { }

  virtual void enterEnumName(CppAdvanceParser::EnumNameContext * /*ctx*/) override { }
  virtual void exitEnumName(CppAdvanceParser::EnumNameContext * /*ctx*/) override { }

  virtual void enterAccessSpecifier(CppAdvanceParser::AccessSpecifierContext * /*ctx*/) override { }
  virtual void exitAccessSpecifier(CppAdvanceParser::AccessSpecifierContext * /*ctx*/) override { }

  virtual void enterProtectedInternal(CppAdvanceParser::ProtectedInternalContext * /*ctx*/) override { }
  virtual void exitProtectedInternal(CppAdvanceParser::ProtectedInternalContext * /*ctx*/) override { }

  virtual void enterOperatorFunctionId(CppAdvanceParser::OperatorFunctionIdContext * /*ctx*/) override { }
  virtual void exitOperatorFunctionId(CppAdvanceParser::OperatorFunctionIdContext * /*ctx*/) override { }

  virtual void enterConversionFunctionId(CppAdvanceParser::ConversionFunctionIdContext * /*ctx*/) override { }
  virtual void exitConversionFunctionId(CppAdvanceParser::ConversionFunctionIdContext * /*ctx*/) override { }

  virtual void enterUnaryExpression(CppAdvanceParser::UnaryExpressionContext * /*ctx*/) override { }
  virtual void exitUnaryExpression(CppAdvanceParser::UnaryExpressionContext * /*ctx*/) override { }

  virtual void enterNewExpression(CppAdvanceParser::NewExpressionContext * /*ctx*/) override { }
  virtual void exitNewExpression(CppAdvanceParser::NewExpressionContext * /*ctx*/) override { }

  virtual void enterNewInitializer(CppAdvanceParser::NewInitializerContext * /*ctx*/) override { }
  virtual void exitNewInitializer(CppAdvanceParser::NewInitializerContext * /*ctx*/) override { }

  virtual void enterPostfixExpression(CppAdvanceParser::PostfixExpressionContext * /*ctx*/) override { }
  virtual void exitPostfixExpression(CppAdvanceParser::PostfixExpressionContext * /*ctx*/) override { }

  virtual void enterTupleExpression(CppAdvanceParser::TupleExpressionContext * /*ctx*/) override { }
  virtual void exitTupleExpression(CppAdvanceParser::TupleExpressionContext * /*ctx*/) override { }

  virtual void enterPrimaryExpression(CppAdvanceParser::PrimaryExpressionContext * /*ctx*/) override { }
  virtual void exitPrimaryExpression(CppAdvanceParser::PrimaryExpressionContext * /*ctx*/) override { }

  virtual void enterUnaryPrefixOperator(CppAdvanceParser::UnaryPrefixOperatorContext * /*ctx*/) override { }
  virtual void exitUnaryPrefixOperator(CppAdvanceParser::UnaryPrefixOperatorContext * /*ctx*/) override { }

  virtual void enterRefCaptureOperator(CppAdvanceParser::RefCaptureOperatorContext * /*ctx*/) override { }
  virtual void exitRefCaptureOperator(CppAdvanceParser::RefCaptureOperatorContext * /*ctx*/) override { }

  virtual void enterUnaryPostfixOperator(CppAdvanceParser::UnaryPostfixOperatorContext * /*ctx*/) override { }
  virtual void exitUnaryPostfixOperator(CppAdvanceParser::UnaryPostfixOperatorContext * /*ctx*/) override { }

  virtual void enterNot(CppAdvanceParser::NotContext * /*ctx*/) override { }
  virtual void exitNot(CppAdvanceParser::NotContext * /*ctx*/) override { }

  virtual void enterOperator(CppAdvanceParser::OperatorContext * /*ctx*/) override { }
  virtual void exitOperator(CppAdvanceParser::OperatorContext * /*ctx*/) override { }

  virtual void enterLiteral(CppAdvanceParser::LiteralContext * /*ctx*/) override { }
  virtual void exitLiteral(CppAdvanceParser::LiteralContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

