
// Generated from CppAdvanceParser.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "CppAdvanceParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by CppAdvanceParser.
 */
class  CppAdvanceParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(CppAdvanceParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(CppAdvanceParser::ProgramContext *ctx) = 0;

  virtual void enterStat(CppAdvanceParser::StatContext *ctx) = 0;
  virtual void exitStat(CppAdvanceParser::StatContext *ctx) = 0;

  virtual void enterDeclarationSeq(CppAdvanceParser::DeclarationSeqContext *ctx) = 0;
  virtual void exitDeclarationSeq(CppAdvanceParser::DeclarationSeqContext *ctx) = 0;

  virtual void enterDeclaration(CppAdvanceParser::DeclarationContext *ctx) = 0;
  virtual void exitDeclaration(CppAdvanceParser::DeclarationContext *ctx) = 0;

  virtual void enterSymbolSpecifierSeq(CppAdvanceParser::SymbolSpecifierSeqContext *ctx) = 0;
  virtual void exitSymbolSpecifierSeq(CppAdvanceParser::SymbolSpecifierSeqContext *ctx) = 0;

  virtual void enterVersionDefinition(CppAdvanceParser::VersionDefinitionContext *ctx) = 0;
  virtual void exitVersionDefinition(CppAdvanceParser::VersionDefinitionContext *ctx) = 0;

  virtual void enterExternVariableDeclaration(CppAdvanceParser::ExternVariableDeclarationContext *ctx) = 0;
  virtual void exitExternVariableDeclaration(CppAdvanceParser::ExternVariableDeclarationContext *ctx) = 0;

  virtual void enterBlockDeclaration(CppAdvanceParser::BlockDeclarationContext *ctx) = 0;
  virtual void exitBlockDeclaration(CppAdvanceParser::BlockDeclarationContext *ctx) = 0;

  virtual void enterMemberBlockDeclaration(CppAdvanceParser::MemberBlockDeclarationContext *ctx) = 0;
  virtual void exitMemberBlockDeclaration(CppAdvanceParser::MemberBlockDeclarationContext *ctx) = 0;

  virtual void enterAssertDeclaration(CppAdvanceParser::AssertDeclarationContext *ctx) = 0;
  virtual void exitAssertDeclaration(CppAdvanceParser::AssertDeclarationContext *ctx) = 0;

  virtual void enterUnitTestDeclaration(CppAdvanceParser::UnitTestDeclarationContext *ctx) = 0;
  virtual void exitUnitTestDeclaration(CppAdvanceParser::UnitTestDeclarationContext *ctx) = 0;

  virtual void enterLabeledStatement(CppAdvanceParser::LabeledStatementContext *ctx) = 0;
  virtual void exitLabeledStatement(CppAdvanceParser::LabeledStatementContext *ctx) = 0;

  virtual void enterDeclarationStatement(CppAdvanceParser::DeclarationStatementContext *ctx) = 0;
  virtual void exitDeclarationStatement(CppAdvanceParser::DeclarationStatementContext *ctx) = 0;

  virtual void enterExpressionStatement(CppAdvanceParser::ExpressionStatementContext *ctx) = 0;
  virtual void exitExpressionStatement(CppAdvanceParser::ExpressionStatementContext *ctx) = 0;

  virtual void enterDeclarationCompoundStatement(CppAdvanceParser::DeclarationCompoundStatementContext *ctx) = 0;
  virtual void exitDeclarationCompoundStatement(CppAdvanceParser::DeclarationCompoundStatementContext *ctx) = 0;

  virtual void enterVersionConditionalDeclaration(CppAdvanceParser::VersionConditionalDeclarationContext *ctx) = 0;
  virtual void exitVersionConditionalDeclaration(CppAdvanceParser::VersionConditionalDeclarationContext *ctx) = 0;

  virtual void enterVersionIfDeclaration(CppAdvanceParser::VersionIfDeclarationContext *ctx) = 0;
  virtual void exitVersionIfDeclaration(CppAdvanceParser::VersionIfDeclarationContext *ctx) = 0;

  virtual void enterVersionElseDeclaration(CppAdvanceParser::VersionElseDeclarationContext *ctx) = 0;
  virtual void exitVersionElseDeclaration(CppAdvanceParser::VersionElseDeclarationContext *ctx) = 0;

  virtual void enterCompoundStatement(CppAdvanceParser::CompoundStatementContext *ctx) = 0;
  virtual void exitCompoundStatement(CppAdvanceParser::CompoundStatementContext *ctx) = 0;

  virtual void enterStructDefinition(CppAdvanceParser::StructDefinitionContext *ctx) = 0;
  virtual void exitStructDefinition(CppAdvanceParser::StructDefinitionContext *ctx) = 0;

  virtual void enterStructHead(CppAdvanceParser::StructHeadContext *ctx) = 0;
  virtual void exitStructHead(CppAdvanceParser::StructHeadContext *ctx) = 0;

  virtual void enterStructMemberSpecification(CppAdvanceParser::StructMemberSpecificationContext *ctx) = 0;
  virtual void exitStructMemberSpecification(CppAdvanceParser::StructMemberSpecificationContext *ctx) = 0;

  virtual void enterMemberDeclarationCompoundStatement(CppAdvanceParser::MemberDeclarationCompoundStatementContext *ctx) = 0;
  virtual void exitMemberDeclarationCompoundStatement(CppAdvanceParser::MemberDeclarationCompoundStatementContext *ctx) = 0;

  virtual void enterMemberVersionConditionalDeclaration(CppAdvanceParser::MemberVersionConditionalDeclarationContext *ctx) = 0;
  virtual void exitMemberVersionConditionalDeclaration(CppAdvanceParser::MemberVersionConditionalDeclarationContext *ctx) = 0;

  virtual void enterMemberVersionIfDeclaration(CppAdvanceParser::MemberVersionIfDeclarationContext *ctx) = 0;
  virtual void exitMemberVersionIfDeclaration(CppAdvanceParser::MemberVersionIfDeclarationContext *ctx) = 0;

  virtual void enterMemberVersionElseDeclaration(CppAdvanceParser::MemberVersionElseDeclarationContext *ctx) = 0;
  virtual void exitMemberVersionElseDeclaration(CppAdvanceParser::MemberVersionElseDeclarationContext *ctx) = 0;

  virtual void enterStructMemberDeclaration(CppAdvanceParser::StructMemberDeclarationContext *ctx) = 0;
  virtual void exitStructMemberDeclaration(CppAdvanceParser::StructMemberDeclarationContext *ctx) = 0;

  virtual void enterClassDefinition(CppAdvanceParser::ClassDefinitionContext *ctx) = 0;
  virtual void exitClassDefinition(CppAdvanceParser::ClassDefinitionContext *ctx) = 0;

  virtual void enterClassHead(CppAdvanceParser::ClassHeadContext *ctx) = 0;
  virtual void exitClassHead(CppAdvanceParser::ClassHeadContext *ctx) = 0;

  virtual void enterInterfaceDefinition(CppAdvanceParser::InterfaceDefinitionContext *ctx) = 0;
  virtual void exitInterfaceDefinition(CppAdvanceParser::InterfaceDefinitionContext *ctx) = 0;

  virtual void enterInterfaceHead(CppAdvanceParser::InterfaceHeadContext *ctx) = 0;
  virtual void exitInterfaceHead(CppAdvanceParser::InterfaceHeadContext *ctx) = 0;

  virtual void enterInterfaceMemberSpecification(CppAdvanceParser::InterfaceMemberSpecificationContext *ctx) = 0;
  virtual void exitInterfaceMemberSpecification(CppAdvanceParser::InterfaceMemberSpecificationContext *ctx) = 0;

  virtual void enterInterfaceMemberDeclaration(CppAdvanceParser::InterfaceMemberDeclarationContext *ctx) = 0;
  virtual void exitInterfaceMemberDeclaration(CppAdvanceParser::InterfaceMemberDeclarationContext *ctx) = 0;

  virtual void enterEnumDefinition(CppAdvanceParser::EnumDefinitionContext *ctx) = 0;
  virtual void exitEnumDefinition(CppAdvanceParser::EnumDefinitionContext *ctx) = 0;

  virtual void enterEnumHead(CppAdvanceParser::EnumHeadContext *ctx) = 0;
  virtual void exitEnumHead(CppAdvanceParser::EnumHeadContext *ctx) = 0;

  virtual void enterEnumBase(CppAdvanceParser::EnumBaseContext *ctx) = 0;
  virtual void exitEnumBase(CppAdvanceParser::EnumBaseContext *ctx) = 0;

  virtual void enterEnumList(CppAdvanceParser::EnumListContext *ctx) = 0;
  virtual void exitEnumList(CppAdvanceParser::EnumListContext *ctx) = 0;

  virtual void enterEnumeratorDefinition(CppAdvanceParser::EnumeratorDefinitionContext *ctx) = 0;
  virtual void exitEnumeratorDefinition(CppAdvanceParser::EnumeratorDefinitionContext *ctx) = 0;

  virtual void enterEnumMemberSpecification(CppAdvanceParser::EnumMemberSpecificationContext *ctx) = 0;
  virtual void exitEnumMemberSpecification(CppAdvanceParser::EnumMemberSpecificationContext *ctx) = 0;

  virtual void enterEnumMemberDeclaration(CppAdvanceParser::EnumMemberDeclarationContext *ctx) = 0;
  virtual void exitEnumMemberDeclaration(CppAdvanceParser::EnumMemberDeclarationContext *ctx) = 0;

  virtual void enterEnumClassDefinition(CppAdvanceParser::EnumClassDefinitionContext *ctx) = 0;
  virtual void exitEnumClassDefinition(CppAdvanceParser::EnumClassDefinitionContext *ctx) = 0;

  virtual void enterEnumClassHead(CppAdvanceParser::EnumClassHeadContext *ctx) = 0;
  virtual void exitEnumClassHead(CppAdvanceParser::EnumClassHeadContext *ctx) = 0;

  virtual void enterEnumClassList(CppAdvanceParser::EnumClassListContext *ctx) = 0;
  virtual void exitEnumClassList(CppAdvanceParser::EnumClassListContext *ctx) = 0;

  virtual void enterClassEnumeratorDefinition(CppAdvanceParser::ClassEnumeratorDefinitionContext *ctx) = 0;
  virtual void exitClassEnumeratorDefinition(CppAdvanceParser::ClassEnumeratorDefinitionContext *ctx) = 0;

  virtual void enterEnumClassMemberSpecification(CppAdvanceParser::EnumClassMemberSpecificationContext *ctx) = 0;
  virtual void exitEnumClassMemberSpecification(CppAdvanceParser::EnumClassMemberSpecificationContext *ctx) = 0;

  virtual void enterUnionDefinition(CppAdvanceParser::UnionDefinitionContext *ctx) = 0;
  virtual void exitUnionDefinition(CppAdvanceParser::UnionDefinitionContext *ctx) = 0;

  virtual void enterUnionHead(CppAdvanceParser::UnionHeadContext *ctx) = 0;
  virtual void exitUnionHead(CppAdvanceParser::UnionHeadContext *ctx) = 0;

  virtual void enterUnionList(CppAdvanceParser::UnionListContext *ctx) = 0;
  virtual void exitUnionList(CppAdvanceParser::UnionListContext *ctx) = 0;

  virtual void enterUnionEnumerator(CppAdvanceParser::UnionEnumeratorContext *ctx) = 0;
  virtual void exitUnionEnumerator(CppAdvanceParser::UnionEnumeratorContext *ctx) = 0;

  virtual void enterUnionEnumeratorClause(CppAdvanceParser::UnionEnumeratorClauseContext *ctx) = 0;
  virtual void exitUnionEnumeratorClause(CppAdvanceParser::UnionEnumeratorClauseContext *ctx) = 0;

  virtual void enterUnionMemberSpecification(CppAdvanceParser::UnionMemberSpecificationContext *ctx) = 0;
  virtual void exitUnionMemberSpecification(CppAdvanceParser::UnionMemberSpecificationContext *ctx) = 0;

  virtual void enterExtensionDefinition(CppAdvanceParser::ExtensionDefinitionContext *ctx) = 0;
  virtual void exitExtensionDefinition(CppAdvanceParser::ExtensionDefinitionContext *ctx) = 0;

  virtual void enterExtensionHead(CppAdvanceParser::ExtensionHeadContext *ctx) = 0;
  virtual void exitExtensionHead(CppAdvanceParser::ExtensionHeadContext *ctx) = 0;

  virtual void enterExtensionMemberSpecification(CppAdvanceParser::ExtensionMemberSpecificationContext *ctx) = 0;
  virtual void exitExtensionMemberSpecification(CppAdvanceParser::ExtensionMemberSpecificationContext *ctx) = 0;

  virtual void enterExtensionMemberDeclaration(CppAdvanceParser::ExtensionMemberDeclarationContext *ctx) = 0;
  virtual void exitExtensionMemberDeclaration(CppAdvanceParser::ExtensionMemberDeclarationContext *ctx) = 0;

  virtual void enterBaseClause(CppAdvanceParser::BaseClauseContext *ctx) = 0;
  virtual void exitBaseClause(CppAdvanceParser::BaseClauseContext *ctx) = 0;

  virtual void enterBaseSpecifierList(CppAdvanceParser::BaseSpecifierListContext *ctx) = 0;
  virtual void exitBaseSpecifierList(CppAdvanceParser::BaseSpecifierListContext *ctx) = 0;

  virtual void enterBaseSpecifier(CppAdvanceParser::BaseSpecifierContext *ctx) = 0;
  virtual void exitBaseSpecifier(CppAdvanceParser::BaseSpecifierContext *ctx) = 0;

  virtual void enterProperty(CppAdvanceParser::PropertyContext *ctx) = 0;
  virtual void exitProperty(CppAdvanceParser::PropertyContext *ctx) = 0;

  virtual void enterPropertyBody(CppAdvanceParser::PropertyBodyContext *ctx) = 0;
  virtual void exitPropertyBody(CppAdvanceParser::PropertyBodyContext *ctx) = 0;

  virtual void enterAbstractProperty(CppAdvanceParser::AbstractPropertyContext *ctx) = 0;
  virtual void exitAbstractProperty(CppAdvanceParser::AbstractPropertyContext *ctx) = 0;

  virtual void enterInterfaceProperty(CppAdvanceParser::InterfacePropertyContext *ctx) = 0;
  virtual void exitInterfaceProperty(CppAdvanceParser::InterfacePropertyContext *ctx) = 0;

  virtual void enterPropertyGetter(CppAdvanceParser::PropertyGetterContext *ctx) = 0;
  virtual void exitPropertyGetter(CppAdvanceParser::PropertyGetterContext *ctx) = 0;

  virtual void enterPropertySetter(CppAdvanceParser::PropertySetterContext *ctx) = 0;
  virtual void exitPropertySetter(CppAdvanceParser::PropertySetterContext *ctx) = 0;

  virtual void enterAbstractPropertyGetter(CppAdvanceParser::AbstractPropertyGetterContext *ctx) = 0;
  virtual void exitAbstractPropertyGetter(CppAdvanceParser::AbstractPropertyGetterContext *ctx) = 0;

  virtual void enterAbstractPropertySetter(CppAdvanceParser::AbstractPropertySetterContext *ctx) = 0;
  virtual void exitAbstractPropertySetter(CppAdvanceParser::AbstractPropertySetterContext *ctx) = 0;

  virtual void enterExternFunctionDeclaration(CppAdvanceParser::ExternFunctionDeclarationContext *ctx) = 0;
  virtual void exitExternFunctionDeclaration(CppAdvanceParser::ExternFunctionDeclarationContext *ctx) = 0;

  virtual void enterFunctionTemplateDeclaration(CppAdvanceParser::FunctionTemplateDeclarationContext *ctx) = 0;
  virtual void exitFunctionTemplateDeclaration(CppAdvanceParser::FunctionTemplateDeclarationContext *ctx) = 0;

  virtual void enterFunctionDefinition(CppAdvanceParser::FunctionDefinitionContext *ctx) = 0;
  virtual void exitFunctionDefinition(CppAdvanceParser::FunctionDefinitionContext *ctx) = 0;

  virtual void enterAbstractMethodDeclaration(CppAdvanceParser::AbstractMethodDeclarationContext *ctx) = 0;
  virtual void exitAbstractMethodDeclaration(CppAdvanceParser::AbstractMethodDeclarationContext *ctx) = 0;

  virtual void enterInterfaceMethodDeclaration(CppAdvanceParser::InterfaceMethodDeclarationContext *ctx) = 0;
  virtual void exitInterfaceMethodDeclaration(CppAdvanceParser::InterfaceMethodDeclarationContext *ctx) = 0;

  virtual void enterConstructor(CppAdvanceParser::ConstructorContext *ctx) = 0;
  virtual void exitConstructor(CppAdvanceParser::ConstructorContext *ctx) = 0;

  virtual void enterConstructorBody(CppAdvanceParser::ConstructorBodyContext *ctx) = 0;
  virtual void exitConstructorBody(CppAdvanceParser::ConstructorBodyContext *ctx) = 0;

  virtual void enterMemberInitializationList(CppAdvanceParser::MemberInitializationListContext *ctx) = 0;
  virtual void exitMemberInitializationList(CppAdvanceParser::MemberInitializationListContext *ctx) = 0;

  virtual void enterDelegatingConstructorBody(CppAdvanceParser::DelegatingConstructorBodyContext *ctx) = 0;
  virtual void exitDelegatingConstructorBody(CppAdvanceParser::DelegatingConstructorBodyContext *ctx) = 0;

  virtual void enterDelegatingConstructorStatement(CppAdvanceParser::DelegatingConstructorStatementContext *ctx) = 0;
  virtual void exitDelegatingConstructorStatement(CppAdvanceParser::DelegatingConstructorStatementContext *ctx) = 0;

  virtual void enterMemberInitializationStatement(CppAdvanceParser::MemberInitializationStatementContext *ctx) = 0;
  virtual void exitMemberInitializationStatement(CppAdvanceParser::MemberInitializationStatementContext *ctx) = 0;

  virtual void enterDestructor(CppAdvanceParser::DestructorContext *ctx) = 0;
  virtual void exitDestructor(CppAdvanceParser::DestructorContext *ctx) = 0;

  virtual void enterConversionFunction(CppAdvanceParser::ConversionFunctionContext *ctx) = 0;
  virtual void exitConversionFunction(CppAdvanceParser::ConversionFunctionContext *ctx) = 0;

  virtual void enterIndexer(CppAdvanceParser::IndexerContext *ctx) = 0;
  virtual void exitIndexer(CppAdvanceParser::IndexerContext *ctx) = 0;

  virtual void enterIndexerProperty(CppAdvanceParser::IndexerPropertyContext *ctx) = 0;
  virtual void exitIndexerProperty(CppAdvanceParser::IndexerPropertyContext *ctx) = 0;

  virtual void enterIndexerGetter(CppAdvanceParser::IndexerGetterContext *ctx) = 0;
  virtual void exitIndexerGetter(CppAdvanceParser::IndexerGetterContext *ctx) = 0;

  virtual void enterIndexerSetter(CppAdvanceParser::IndexerSetterContext *ctx) = 0;
  virtual void exitIndexerSetter(CppAdvanceParser::IndexerSetterContext *ctx) = 0;

  virtual void enterInterfaceIndexer(CppAdvanceParser::InterfaceIndexerContext *ctx) = 0;
  virtual void exitInterfaceIndexer(CppAdvanceParser::InterfaceIndexerContext *ctx) = 0;

  virtual void enterFunctionSpecifier(CppAdvanceParser::FunctionSpecifierContext *ctx) = 0;
  virtual void exitFunctionSpecifier(CppAdvanceParser::FunctionSpecifierContext *ctx) = 0;

  virtual void enterImplicitSpecification(CppAdvanceParser::ImplicitSpecificationContext *ctx) = 0;
  virtual void exitImplicitSpecification(CppAdvanceParser::ImplicitSpecificationContext *ctx) = 0;

  virtual void enterTemplateParams(CppAdvanceParser::TemplateParamsContext *ctx) = 0;
  virtual void exitTemplateParams(CppAdvanceParser::TemplateParamsContext *ctx) = 0;

  virtual void enterTemplateParamDeclaration(CppAdvanceParser::TemplateParamDeclarationContext *ctx) = 0;
  virtual void exitTemplateParamDeclaration(CppAdvanceParser::TemplateParamDeclarationContext *ctx) = 0;

  virtual void enterTemplateTypename(CppAdvanceParser::TemplateTypenameContext *ctx) = 0;
  virtual void exitTemplateTypename(CppAdvanceParser::TemplateTypenameContext *ctx) = 0;

  virtual void enterFunctionParams(CppAdvanceParser::FunctionParamsContext *ctx) = 0;
  virtual void exitFunctionParams(CppAdvanceParser::FunctionParamsContext *ctx) = 0;

  virtual void enterParamDeclClause(CppAdvanceParser::ParamDeclClauseContext *ctx) = 0;
  virtual void exitParamDeclClause(CppAdvanceParser::ParamDeclClauseContext *ctx) = 0;

  virtual void enterParamDeclList(CppAdvanceParser::ParamDeclListContext *ctx) = 0;
  virtual void exitParamDeclList(CppAdvanceParser::ParamDeclListContext *ctx) = 0;

  virtual void enterParamDeclaration(CppAdvanceParser::ParamDeclarationContext *ctx) = 0;
  virtual void exitParamDeclaration(CppAdvanceParser::ParamDeclarationContext *ctx) = 0;

  virtual void enterParamSpecification(CppAdvanceParser::ParamSpecificationContext *ctx) = 0;
  virtual void exitParamSpecification(CppAdvanceParser::ParamSpecificationContext *ctx) = 0;

  virtual void enterReturnType(CppAdvanceParser::ReturnTypeContext *ctx) = 0;
  virtual void exitReturnType(CppAdvanceParser::ReturnTypeContext *ctx) = 0;

  virtual void enterFunctionBody(CppAdvanceParser::FunctionBodyContext *ctx) = 0;
  virtual void exitFunctionBody(CppAdvanceParser::FunctionBodyContext *ctx) = 0;

  virtual void enterShortFunctionBody(CppAdvanceParser::ShortFunctionBodyContext *ctx) = 0;
  virtual void exitShortFunctionBody(CppAdvanceParser::ShortFunctionBodyContext *ctx) = 0;

  virtual void enterExceptionSpecification(CppAdvanceParser::ExceptionSpecificationContext *ctx) = 0;
  virtual void exitExceptionSpecification(CppAdvanceParser::ExceptionSpecificationContext *ctx) = 0;

  virtual void enterDeclSpecifier(CppAdvanceParser::DeclSpecifierContext *ctx) = 0;
  virtual void exitDeclSpecifier(CppAdvanceParser::DeclSpecifierContext *ctx) = 0;

  virtual void enterDeclSpecifierSeq(CppAdvanceParser::DeclSpecifierSeqContext *ctx) = 0;
  virtual void exitDeclSpecifierSeq(CppAdvanceParser::DeclSpecifierSeqContext *ctx) = 0;

  virtual void enterIdentifierSeq(CppAdvanceParser::IdentifierSeqContext *ctx) = 0;
  virtual void exitIdentifierSeq(CppAdvanceParser::IdentifierSeqContext *ctx) = 0;

  virtual void enterFriendDeclaration(CppAdvanceParser::FriendDeclarationContext *ctx) = 0;
  virtual void exitFriendDeclaration(CppAdvanceParser::FriendDeclarationContext *ctx) = 0;

  virtual void enterAttributeSpecifierSeq(CppAdvanceParser::AttributeSpecifierSeqContext *ctx) = 0;
  virtual void exitAttributeSpecifierSeq(CppAdvanceParser::AttributeSpecifierSeqContext *ctx) = 0;

  virtual void enterAttributeSpecifier(CppAdvanceParser::AttributeSpecifierContext *ctx) = 0;
  virtual void exitAttributeSpecifier(CppAdvanceParser::AttributeSpecifierContext *ctx) = 0;

  virtual void enterAttributeArgumentClause(CppAdvanceParser::AttributeArgumentClauseContext *ctx) = 0;
  virtual void exitAttributeArgumentClause(CppAdvanceParser::AttributeArgumentClauseContext *ctx) = 0;

  virtual void enterSelectionStatement(CppAdvanceParser::SelectionStatementContext *ctx) = 0;
  virtual void exitSelectionStatement(CppAdvanceParser::SelectionStatementContext *ctx) = 0;

  virtual void enterCondition(CppAdvanceParser::ConditionContext *ctx) = 0;
  virtual void exitCondition(CppAdvanceParser::ConditionContext *ctx) = 0;

  virtual void enterElseBranch(CppAdvanceParser::ElseBranchContext *ctx) = 0;
  virtual void exitElseBranch(CppAdvanceParser::ElseBranchContext *ctx) = 0;

  virtual void enterSwitchStatementBranch(CppAdvanceParser::SwitchStatementBranchContext *ctx) = 0;
  virtual void exitSwitchStatementBranch(CppAdvanceParser::SwitchStatementBranchContext *ctx) = 0;

  virtual void enterDeclarator(CppAdvanceParser::DeclaratorContext *ctx) = 0;
  virtual void exitDeclarator(CppAdvanceParser::DeclaratorContext *ctx) = 0;

  virtual void enterInlineCppStatement(CppAdvanceParser::InlineCppStatementContext *ctx) = 0;
  virtual void exitInlineCppStatement(CppAdvanceParser::InlineCppStatementContext *ctx) = 0;

  virtual void enterIterationStatement(CppAdvanceParser::IterationStatementContext *ctx) = 0;
  virtual void exitIterationStatement(CppAdvanceParser::IterationStatementContext *ctx) = 0;

  virtual void enterWhileCondition(CppAdvanceParser::WhileConditionContext *ctx) = 0;
  virtual void exitWhileCondition(CppAdvanceParser::WhileConditionContext *ctx) = 0;

  virtual void enterDoWhileCondition(CppAdvanceParser::DoWhileConditionContext *ctx) = 0;
  virtual void exitDoWhileCondition(CppAdvanceParser::DoWhileConditionContext *ctx) = 0;

  virtual void enterForInitStatement(CppAdvanceParser::ForInitStatementContext *ctx) = 0;
  virtual void exitForInitStatement(CppAdvanceParser::ForInitStatementContext *ctx) = 0;

  virtual void enterForRangeDeclaration(CppAdvanceParser::ForRangeDeclarationContext *ctx) = 0;
  virtual void exitForRangeDeclaration(CppAdvanceParser::ForRangeDeclarationContext *ctx) = 0;

  virtual void enterForRangeInitializer(CppAdvanceParser::ForRangeInitializerContext *ctx) = 0;
  virtual void exitForRangeInitializer(CppAdvanceParser::ForRangeInitializerContext *ctx) = 0;

  virtual void enterExpressionSeq(CppAdvanceParser::ExpressionSeqContext *ctx) = 0;
  virtual void exitExpressionSeq(CppAdvanceParser::ExpressionSeqContext *ctx) = 0;

  virtual void enterJumpStatement(CppAdvanceParser::JumpStatementContext *ctx) = 0;
  virtual void exitJumpStatement(CppAdvanceParser::JumpStatementContext *ctx) = 0;

  virtual void enterSimpleDeclaration(CppAdvanceParser::SimpleDeclarationContext *ctx) = 0;
  virtual void exitSimpleDeclaration(CppAdvanceParser::SimpleDeclarationContext *ctx) = 0;

  virtual void enterDeconstructionDeclaration(CppAdvanceParser::DeconstructionDeclarationContext *ctx) = 0;
  virtual void exitDeconstructionDeclaration(CppAdvanceParser::DeconstructionDeclarationContext *ctx) = 0;

  virtual void enterRefDeclaration(CppAdvanceParser::RefDeclarationContext *ctx) = 0;
  virtual void exitRefDeclaration(CppAdvanceParser::RefDeclarationContext *ctx) = 0;

  virtual void enterMemberRefDeclaration(CppAdvanceParser::MemberRefDeclarationContext *ctx) = 0;
  virtual void exitMemberRefDeclaration(CppAdvanceParser::MemberRefDeclarationContext *ctx) = 0;

  virtual void enterSimpleMultiDeclaration(CppAdvanceParser::SimpleMultiDeclarationContext *ctx) = 0;
  virtual void exitSimpleMultiDeclaration(CppAdvanceParser::SimpleMultiDeclarationContext *ctx) = 0;

  virtual void enterMultiDeclaration(CppAdvanceParser::MultiDeclarationContext *ctx) = 0;
  virtual void exitMultiDeclaration(CppAdvanceParser::MultiDeclarationContext *ctx) = 0;

  virtual void enterConstantDeclaration(CppAdvanceParser::ConstantDeclarationContext *ctx) = 0;
  virtual void exitConstantDeclaration(CppAdvanceParser::ConstantDeclarationContext *ctx) = 0;

  virtual void enterForwardVarDeclaration(CppAdvanceParser::ForwardVarDeclarationContext *ctx) = 0;
  virtual void exitForwardVarDeclaration(CppAdvanceParser::ForwardVarDeclarationContext *ctx) = 0;

  virtual void enterAliasDeclaration(CppAdvanceParser::AliasDeclarationContext *ctx) = 0;
  virtual void exitAliasDeclaration(CppAdvanceParser::AliasDeclarationContext *ctx) = 0;

  virtual void enterVersionSelectionStatement(CppAdvanceParser::VersionSelectionStatementContext *ctx) = 0;
  virtual void exitVersionSelectionStatement(CppAdvanceParser::VersionSelectionStatementContext *ctx) = 0;

  virtual void enterVersionSelectionStatementBlock(CppAdvanceParser::VersionSelectionStatementBlockContext *ctx) = 0;
  virtual void exitVersionSelectionStatementBlock(CppAdvanceParser::VersionSelectionStatementBlockContext *ctx) = 0;

  virtual void enterScopeSafeCompoundStatement(CppAdvanceParser::ScopeSafeCompoundStatementContext *ctx) = 0;
  virtual void exitScopeSafeCompoundStatement(CppAdvanceParser::ScopeSafeCompoundStatementContext *ctx) = 0;

  virtual void enterExpr(CppAdvanceParser::ExprContext *ctx) = 0;
  virtual void exitExpr(CppAdvanceParser::ExprContext *ctx) = 0;

  virtual void enterRangeExpression(CppAdvanceParser::RangeExpressionContext *ctx) = 0;
  virtual void exitRangeExpression(CppAdvanceParser::RangeExpressionContext *ctx) = 0;

  virtual void enterRangeExpressionStart(CppAdvanceParser::RangeExpressionStartContext *ctx) = 0;
  virtual void exitRangeExpressionStart(CppAdvanceParser::RangeExpressionStartContext *ctx) = 0;

  virtual void enterRangeExpressionEnd(CppAdvanceParser::RangeExpressionEndContext *ctx) = 0;
  virtual void exitRangeExpressionEnd(CppAdvanceParser::RangeExpressionEndContext *ctx) = 0;

  virtual void enterSwitchExpression(CppAdvanceParser::SwitchExpressionContext *ctx) = 0;
  virtual void exitSwitchExpression(CppAdvanceParser::SwitchExpressionContext *ctx) = 0;

  virtual void enterSwitchExpressionBranch(CppAdvanceParser::SwitchExpressionBranchContext *ctx) = 0;
  virtual void exitSwitchExpressionBranch(CppAdvanceParser::SwitchExpressionBranchContext *ctx) = 0;

  virtual void enterPowerExpression(CppAdvanceParser::PowerExpressionContext *ctx) = 0;
  virtual void exitPowerExpression(CppAdvanceParser::PowerExpressionContext *ctx) = 0;

  virtual void enterMultiplicativeExpression(CppAdvanceParser::MultiplicativeExpressionContext *ctx) = 0;
  virtual void exitMultiplicativeExpression(CppAdvanceParser::MultiplicativeExpressionContext *ctx) = 0;

  virtual void enterAdditiveExpression(CppAdvanceParser::AdditiveExpressionContext *ctx) = 0;
  virtual void exitAdditiveExpression(CppAdvanceParser::AdditiveExpressionContext *ctx) = 0;

  virtual void enterShiftExpression(CppAdvanceParser::ShiftExpressionContext *ctx) = 0;
  virtual void exitShiftExpression(CppAdvanceParser::ShiftExpressionContext *ctx) = 0;

  virtual void enterThreeWayComparisonExpression(CppAdvanceParser::ThreeWayComparisonExpressionContext *ctx) = 0;
  virtual void exitThreeWayComparisonExpression(CppAdvanceParser::ThreeWayComparisonExpressionContext *ctx) = 0;

  virtual void enterRelationalExpression(CppAdvanceParser::RelationalExpressionContext *ctx) = 0;
  virtual void exitRelationalExpression(CppAdvanceParser::RelationalExpressionContext *ctx) = 0;

  virtual void enterEqualityExpression(CppAdvanceParser::EqualityExpressionContext *ctx) = 0;
  virtual void exitEqualityExpression(CppAdvanceParser::EqualityExpressionContext *ctx) = 0;

  virtual void enterAndExpression(CppAdvanceParser::AndExpressionContext *ctx) = 0;
  virtual void exitAndExpression(CppAdvanceParser::AndExpressionContext *ctx) = 0;

  virtual void enterExclusiveOrExpression(CppAdvanceParser::ExclusiveOrExpressionContext *ctx) = 0;
  virtual void exitExclusiveOrExpression(CppAdvanceParser::ExclusiveOrExpressionContext *ctx) = 0;

  virtual void enterInclusiveOrExpression(CppAdvanceParser::InclusiveOrExpressionContext *ctx) = 0;
  virtual void exitInclusiveOrExpression(CppAdvanceParser::InclusiveOrExpressionContext *ctx) = 0;

  virtual void enterLogicalAndExpression(CppAdvanceParser::LogicalAndExpressionContext *ctx) = 0;
  virtual void exitLogicalAndExpression(CppAdvanceParser::LogicalAndExpressionContext *ctx) = 0;

  virtual void enterLogicalOrExpression(CppAdvanceParser::LogicalOrExpressionContext *ctx) = 0;
  virtual void exitLogicalOrExpression(CppAdvanceParser::LogicalOrExpressionContext *ctx) = 0;

  virtual void enterNullCoalescingExpression(CppAdvanceParser::NullCoalescingExpressionContext *ctx) = 0;
  virtual void exitNullCoalescingExpression(CppAdvanceParser::NullCoalescingExpressionContext *ctx) = 0;

  virtual void enterNullCoalescingBranch(CppAdvanceParser::NullCoalescingBranchContext *ctx) = 0;
  virtual void exitNullCoalescingBranch(CppAdvanceParser::NullCoalescingBranchContext *ctx) = 0;

  virtual void enterConditionalExpression(CppAdvanceParser::ConditionalExpressionContext *ctx) = 0;
  virtual void exitConditionalExpression(CppAdvanceParser::ConditionalExpressionContext *ctx) = 0;

  virtual void enterConstantExpression(CppAdvanceParser::ConstantExpressionContext *ctx) = 0;
  virtual void exitConstantExpression(CppAdvanceParser::ConstantExpressionContext *ctx) = 0;

  virtual void enterAssignmentExpression(CppAdvanceParser::AssignmentExpressionContext *ctx) = 0;
  virtual void exitAssignmentExpression(CppAdvanceParser::AssignmentExpressionContext *ctx) = 0;

  virtual void enterInitializerClause(CppAdvanceParser::InitializerClauseContext *ctx) = 0;
  virtual void exitInitializerClause(CppAdvanceParser::InitializerClauseContext *ctx) = 0;

  virtual void enterBracedInitList(CppAdvanceParser::BracedInitListContext *ctx) = 0;
  virtual void exitBracedInitList(CppAdvanceParser::BracedInitListContext *ctx) = 0;

  virtual void enterInitializerList(CppAdvanceParser::InitializerListContext *ctx) = 0;
  virtual void exitInitializerList(CppAdvanceParser::InitializerListContext *ctx) = 0;

  virtual void enterInitializerPart(CppAdvanceParser::InitializerPartContext *ctx) = 0;
  virtual void exitInitializerPart(CppAdvanceParser::InitializerPartContext *ctx) = 0;

  virtual void enterExpressionList(CppAdvanceParser::ExpressionListContext *ctx) = 0;
  virtual void exitExpressionList(CppAdvanceParser::ExpressionListContext *ctx) = 0;

  virtual void enterExpressionListPart(CppAdvanceParser::ExpressionListPartContext *ctx) = 0;
  virtual void exitExpressionListPart(CppAdvanceParser::ExpressionListPartContext *ctx) = 0;

  virtual void enterConstraintClause(CppAdvanceParser::ConstraintClauseContext *ctx) = 0;
  virtual void exitConstraintClause(CppAdvanceParser::ConstraintClauseContext *ctx) = 0;

  virtual void enterPatternList(CppAdvanceParser::PatternListContext *ctx) = 0;
  virtual void exitPatternList(CppAdvanceParser::PatternListContext *ctx) = 0;

  virtual void enterPatternCombinationOperator(CppAdvanceParser::PatternCombinationOperatorContext *ctx) = 0;
  virtual void exitPatternCombinationOperator(CppAdvanceParser::PatternCombinationOperatorContext *ctx) = 0;

  virtual void enterPattern(CppAdvanceParser::PatternContext *ctx) = 0;
  virtual void exitPattern(CppAdvanceParser::PatternContext *ctx) = 0;

  virtual void enterTypeTrait(CppAdvanceParser::TypeTraitContext *ctx) = 0;
  virtual void exitTypeTrait(CppAdvanceParser::TypeTraitContext *ctx) = 0;

  virtual void enterPropertyPattern(CppAdvanceParser::PropertyPatternContext *ctx) = 0;
  virtual void exitPropertyPattern(CppAdvanceParser::PropertyPatternContext *ctx) = 0;

  virtual void enterAssignmentOperator(CppAdvanceParser::AssignmentOperatorContext *ctx) = 0;
  virtual void exitAssignmentOperator(CppAdvanceParser::AssignmentOperatorContext *ctx) = 0;

  virtual void enterShiftOperator(CppAdvanceParser::ShiftOperatorContext *ctx) = 0;
  virtual void exitShiftOperator(CppAdvanceParser::ShiftOperatorContext *ctx) = 0;

  virtual void enterTryBlock(CppAdvanceParser::TryBlockContext *ctx) = 0;
  virtual void exitTryBlock(CppAdvanceParser::TryBlockContext *ctx) = 0;

  virtual void enterExceptionHandler(CppAdvanceParser::ExceptionHandlerContext *ctx) = 0;
  virtual void exitExceptionHandler(CppAdvanceParser::ExceptionHandlerContext *ctx) = 0;

  virtual void enterExceptionDeclaration(CppAdvanceParser::ExceptionDeclarationContext *ctx) = 0;
  virtual void exitExceptionDeclaration(CppAdvanceParser::ExceptionDeclarationContext *ctx) = 0;

  virtual void enterThrowExpression(CppAdvanceParser::ThrowExpressionContext *ctx) = 0;
  virtual void exitThrowExpression(CppAdvanceParser::ThrowExpressionContext *ctx) = 0;

  virtual void enterSimpleTypeSpecifier(CppAdvanceParser::SimpleTypeSpecifierContext *ctx) = 0;
  virtual void exitSimpleTypeSpecifier(CppAdvanceParser::SimpleTypeSpecifierContext *ctx) = 0;

  virtual void enterFunctionTypeId(CppAdvanceParser::FunctionTypeIdContext *ctx) = 0;
  virtual void exitFunctionTypeId(CppAdvanceParser::FunctionTypeIdContext *ctx) = 0;

  virtual void enterTypeIdWithSpecification(CppAdvanceParser::TypeIdWithSpecificationContext *ctx) = 0;
  virtual void exitTypeIdWithSpecification(CppAdvanceParser::TypeIdWithSpecificationContext *ctx) = 0;

  virtual void enterNamedTupleField(CppAdvanceParser::NamedTupleFieldContext *ctx) = 0;
  virtual void exitNamedTupleField(CppAdvanceParser::NamedTupleFieldContext *ctx) = 0;

  virtual void enterNestedNameSpecifier(CppAdvanceParser::NestedNameSpecifierContext *ctx) = 0;
  virtual void exitNestedNameSpecifier(CppAdvanceParser::NestedNameSpecifierContext *ctx) = 0;

  virtual void enterNamespaceName(CppAdvanceParser::NamespaceNameContext *ctx) = 0;
  virtual void exitNamespaceName(CppAdvanceParser::NamespaceNameContext *ctx) = 0;

  virtual void enterTemplateName(CppAdvanceParser::TemplateNameContext *ctx) = 0;
  virtual void exitTemplateName(CppAdvanceParser::TemplateNameContext *ctx) = 0;

  virtual void enterSimpleTemplateId(CppAdvanceParser::SimpleTemplateIdContext *ctx) = 0;
  virtual void exitSimpleTemplateId(CppAdvanceParser::SimpleTemplateIdContext *ctx) = 0;

  virtual void enterOperatorTemplateId(CppAdvanceParser::OperatorTemplateIdContext *ctx) = 0;
  virtual void exitOperatorTemplateId(CppAdvanceParser::OperatorTemplateIdContext *ctx) = 0;

  virtual void enterTemplateId(CppAdvanceParser::TemplateIdContext *ctx) = 0;
  virtual void exitTemplateId(CppAdvanceParser::TemplateIdContext *ctx) = 0;

  virtual void enterTemplateArgumentList(CppAdvanceParser::TemplateArgumentListContext *ctx) = 0;
  virtual void exitTemplateArgumentList(CppAdvanceParser::TemplateArgumentListContext *ctx) = 0;

  virtual void enterTemplateArgument(CppAdvanceParser::TemplateArgumentContext *ctx) = 0;
  virtual void exitTemplateArgument(CppAdvanceParser::TemplateArgumentContext *ctx) = 0;

  virtual void enterIdExpression(CppAdvanceParser::IdExpressionContext *ctx) = 0;
  virtual void exitIdExpression(CppAdvanceParser::IdExpressionContext *ctx) = 0;

  virtual void enterQualifiedId(CppAdvanceParser::QualifiedIdContext *ctx) = 0;
  virtual void exitQualifiedId(CppAdvanceParser::QualifiedIdContext *ctx) = 0;

  virtual void enterUnqualifiedId(CppAdvanceParser::UnqualifiedIdContext *ctx) = 0;
  virtual void exitUnqualifiedId(CppAdvanceParser::UnqualifiedIdContext *ctx) = 0;

  virtual void enterTheTypeId(CppAdvanceParser::TheTypeIdContext *ctx) = 0;
  virtual void exitTheTypeId(CppAdvanceParser::TheTypeIdContext *ctx) = 0;

  virtual void enterSingleTypeId(CppAdvanceParser::SingleTypeIdContext *ctx) = 0;
  virtual void exitSingleTypeId(CppAdvanceParser::SingleTypeIdContext *ctx) = 0;

  virtual void enterTypePostfix(CppAdvanceParser::TypePostfixContext *ctx) = 0;
  virtual void exitTypePostfix(CppAdvanceParser::TypePostfixContext *ctx) = 0;

  virtual void enterArrayDeclarator(CppAdvanceParser::ArrayDeclaratorContext *ctx) = 0;
  virtual void exitArrayDeclarator(CppAdvanceParser::ArrayDeclaratorContext *ctx) = 0;

  virtual void enterPointerOperator(CppAdvanceParser::PointerOperatorContext *ctx) = 0;
  virtual void exitPointerOperator(CppAdvanceParser::PointerOperatorContext *ctx) = 0;

  virtual void enterPointerOperatorSeq(CppAdvanceParser::PointerOperatorSeqContext *ctx) = 0;
  virtual void exitPointerOperatorSeq(CppAdvanceParser::PointerOperatorSeqContext *ctx) = 0;

  virtual void enterTypeSpecifierSeq(CppAdvanceParser::TypeSpecifierSeqContext *ctx) = 0;
  virtual void exitTypeSpecifierSeq(CppAdvanceParser::TypeSpecifierSeqContext *ctx) = 0;

  virtual void enterTypeSpecifier(CppAdvanceParser::TypeSpecifierContext *ctx) = 0;
  virtual void exitTypeSpecifier(CppAdvanceParser::TypeSpecifierContext *ctx) = 0;

  virtual void enterTrailingTypeSpecifier(CppAdvanceParser::TrailingTypeSpecifierContext *ctx) = 0;
  virtual void exitTrailingTypeSpecifier(CppAdvanceParser::TrailingTypeSpecifierContext *ctx) = 0;

  virtual void enterTypeNameSpecifier(CppAdvanceParser::TypeNameSpecifierContext *ctx) = 0;
  virtual void exitTypeNameSpecifier(CppAdvanceParser::TypeNameSpecifierContext *ctx) = 0;

  virtual void enterCvQualifierSeq(CppAdvanceParser::CvQualifierSeqContext *ctx) = 0;
  virtual void exitCvQualifierSeq(CppAdvanceParser::CvQualifierSeqContext *ctx) = 0;

  virtual void enterCvQualifier(CppAdvanceParser::CvQualifierContext *ctx) = 0;
  virtual void exitCvQualifier(CppAdvanceParser::CvQualifierContext *ctx) = 0;

  virtual void enterTypename(CppAdvanceParser::TypenameContext *ctx) = 0;
  virtual void exitTypename(CppAdvanceParser::TypenameContext *ctx) = 0;

  virtual void enterClassName(CppAdvanceParser::ClassNameContext *ctx) = 0;
  virtual void exitClassName(CppAdvanceParser::ClassNameContext *ctx) = 0;

  virtual void enterDecltypeSpecifier(CppAdvanceParser::DecltypeSpecifierContext *ctx) = 0;
  virtual void exitDecltypeSpecifier(CppAdvanceParser::DecltypeSpecifierContext *ctx) = 0;

  virtual void enterDecaySpecifier(CppAdvanceParser::DecaySpecifierContext *ctx) = 0;
  virtual void exitDecaySpecifier(CppAdvanceParser::DecaySpecifierContext *ctx) = 0;

  virtual void enterEnumName(CppAdvanceParser::EnumNameContext *ctx) = 0;
  virtual void exitEnumName(CppAdvanceParser::EnumNameContext *ctx) = 0;

  virtual void enterAccessSpecifier(CppAdvanceParser::AccessSpecifierContext *ctx) = 0;
  virtual void exitAccessSpecifier(CppAdvanceParser::AccessSpecifierContext *ctx) = 0;

  virtual void enterProtectedInternal(CppAdvanceParser::ProtectedInternalContext *ctx) = 0;
  virtual void exitProtectedInternal(CppAdvanceParser::ProtectedInternalContext *ctx) = 0;

  virtual void enterOperatorFunctionId(CppAdvanceParser::OperatorFunctionIdContext *ctx) = 0;
  virtual void exitOperatorFunctionId(CppAdvanceParser::OperatorFunctionIdContext *ctx) = 0;

  virtual void enterConversionFunctionId(CppAdvanceParser::ConversionFunctionIdContext *ctx) = 0;
  virtual void exitConversionFunctionId(CppAdvanceParser::ConversionFunctionIdContext *ctx) = 0;

  virtual void enterUnaryExpression(CppAdvanceParser::UnaryExpressionContext *ctx) = 0;
  virtual void exitUnaryExpression(CppAdvanceParser::UnaryExpressionContext *ctx) = 0;

  virtual void enterUnaryExpressionTail(CppAdvanceParser::UnaryExpressionTailContext *ctx) = 0;
  virtual void exitUnaryExpressionTail(CppAdvanceParser::UnaryExpressionTailContext *ctx) = 0;

  virtual void enterNewExpression(CppAdvanceParser::NewExpressionContext *ctx) = 0;
  virtual void exitNewExpression(CppAdvanceParser::NewExpressionContext *ctx) = 0;

  virtual void enterStackallocExpression(CppAdvanceParser::StackallocExpressionContext *ctx) = 0;
  virtual void exitStackallocExpression(CppAdvanceParser::StackallocExpressionContext *ctx) = 0;

  virtual void enterMemorySpaceSetter(CppAdvanceParser::MemorySpaceSetterContext *ctx) = 0;
  virtual void exitMemorySpaceSetter(CppAdvanceParser::MemorySpaceSetterContext *ctx) = 0;

  virtual void enterNewInitializer(CppAdvanceParser::NewInitializerContext *ctx) = 0;
  virtual void exitNewInitializer(CppAdvanceParser::NewInitializerContext *ctx) = 0;

  virtual void enterFullPostfixExpression(CppAdvanceParser::FullPostfixExpressionContext *ctx) = 0;
  virtual void exitFullPostfixExpression(CppAdvanceParser::FullPostfixExpressionContext *ctx) = 0;

  virtual void enterPostfixExpression(CppAdvanceParser::PostfixExpressionContext *ctx) = 0;
  virtual void exitPostfixExpression(CppAdvanceParser::PostfixExpressionContext *ctx) = 0;

  virtual void enterTupleExpression(CppAdvanceParser::TupleExpressionContext *ctx) = 0;
  virtual void exitTupleExpression(CppAdvanceParser::TupleExpressionContext *ctx) = 0;

  virtual void enterMethodBindingExpression(CppAdvanceParser::MethodBindingExpressionContext *ctx) = 0;
  virtual void exitMethodBindingExpression(CppAdvanceParser::MethodBindingExpressionContext *ctx) = 0;

  virtual void enterMethodOwnerExpression(CppAdvanceParser::MethodOwnerExpressionContext *ctx) = 0;
  virtual void exitMethodOwnerExpression(CppAdvanceParser::MethodOwnerExpressionContext *ctx) = 0;

  virtual void enterMethodName(CppAdvanceParser::MethodNameContext *ctx) = 0;
  virtual void exitMethodName(CppAdvanceParser::MethodNameContext *ctx) = 0;

  virtual void enterLambdaExpression(CppAdvanceParser::LambdaExpressionContext *ctx) = 0;
  virtual void exitLambdaExpression(CppAdvanceParser::LambdaExpressionContext *ctx) = 0;

  virtual void enterLambdaCaptureList(CppAdvanceParser::LambdaCaptureListContext *ctx) = 0;
  virtual void exitLambdaCaptureList(CppAdvanceParser::LambdaCaptureListContext *ctx) = 0;

  virtual void enterLambdaCaptureClause(CppAdvanceParser::LambdaCaptureClauseContext *ctx) = 0;
  virtual void exitLambdaCaptureClause(CppAdvanceParser::LambdaCaptureClauseContext *ctx) = 0;

  virtual void enterCapture(CppAdvanceParser::CaptureContext *ctx) = 0;
  virtual void exitCapture(CppAdvanceParser::CaptureContext *ctx) = 0;

  virtual void enterLambdaDeclarator(CppAdvanceParser::LambdaDeclaratorContext *ctx) = 0;
  virtual void exitLambdaDeclarator(CppAdvanceParser::LambdaDeclaratorContext *ctx) = 0;

  virtual void enterLambdaBody(CppAdvanceParser::LambdaBodyContext *ctx) = 0;
  virtual void exitLambdaBody(CppAdvanceParser::LambdaBodyContext *ctx) = 0;

  virtual void enterPrimaryExpression(CppAdvanceParser::PrimaryExpressionContext *ctx) = 0;
  virtual void exitPrimaryExpression(CppAdvanceParser::PrimaryExpressionContext *ctx) = 0;

  virtual void enterFoldExpression(CppAdvanceParser::FoldExpressionContext *ctx) = 0;
  virtual void exitFoldExpression(CppAdvanceParser::FoldExpressionContext *ctx) = 0;

  virtual void enterFoldLeftExpression(CppAdvanceParser::FoldLeftExpressionContext *ctx) = 0;
  virtual void exitFoldLeftExpression(CppAdvanceParser::FoldLeftExpressionContext *ctx) = 0;

  virtual void enterFoldRightExpression(CppAdvanceParser::FoldRightExpressionContext *ctx) = 0;
  virtual void exitFoldRightExpression(CppAdvanceParser::FoldRightExpressionContext *ctx) = 0;

  virtual void enterTemplateDeductionGuide(CppAdvanceParser::TemplateDeductionGuideContext *ctx) = 0;
  virtual void exitTemplateDeductionGuide(CppAdvanceParser::TemplateDeductionGuideContext *ctx) = 0;

  virtual void enterUnaryPrefixOperator(CppAdvanceParser::UnaryPrefixOperatorContext *ctx) = 0;
  virtual void exitUnaryPrefixOperator(CppAdvanceParser::UnaryPrefixOperatorContext *ctx) = 0;

  virtual void enterUnaryCustomOperator(CppAdvanceParser::UnaryCustomOperatorContext *ctx) = 0;
  virtual void exitUnaryCustomOperator(CppAdvanceParser::UnaryCustomOperatorContext *ctx) = 0;

  virtual void enterRefCaptureOperator(CppAdvanceParser::RefCaptureOperatorContext *ctx) = 0;
  virtual void exitRefCaptureOperator(CppAdvanceParser::RefCaptureOperatorContext *ctx) = 0;

  virtual void enterUnaryPostfixOperator(CppAdvanceParser::UnaryPostfixOperatorContext *ctx) = 0;
  virtual void exitUnaryPostfixOperator(CppAdvanceParser::UnaryPostfixOperatorContext *ctx) = 0;

  virtual void enterNot(CppAdvanceParser::NotContext *ctx) = 0;
  virtual void exitNot(CppAdvanceParser::NotContext *ctx) = 0;

  virtual void enterOperator(CppAdvanceParser::OperatorContext *ctx) = 0;
  virtual void exitOperator(CppAdvanceParser::OperatorContext *ctx) = 0;

  virtual void enterLiteral(CppAdvanceParser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(CppAdvanceParser::LiteralContext *ctx) = 0;

  virtual void enterInterpolatedStringLiteral(CppAdvanceParser::InterpolatedStringLiteralContext *ctx) = 0;
  virtual void exitInterpolatedStringLiteral(CppAdvanceParser::InterpolatedStringLiteralContext *ctx) = 0;

  virtual void enterInterpolatedRegularStringLiteral(CppAdvanceParser::InterpolatedRegularStringLiteralContext *ctx) = 0;
  virtual void exitInterpolatedRegularStringLiteral(CppAdvanceParser::InterpolatedRegularStringLiteralContext *ctx) = 0;

  virtual void enterInterpolatedRegularStringPart(CppAdvanceParser::InterpolatedRegularStringPartContext *ctx) = 0;
  virtual void exitInterpolatedRegularStringPart(CppAdvanceParser::InterpolatedRegularStringPartContext *ctx) = 0;

  virtual void enterInterpolatedVerbatiumStringLiteral(CppAdvanceParser::InterpolatedVerbatiumStringLiteralContext *ctx) = 0;
  virtual void exitInterpolatedVerbatiumStringLiteral(CppAdvanceParser::InterpolatedVerbatiumStringLiteralContext *ctx) = 0;

  virtual void enterInterpolatedVerbatiumStringPart(CppAdvanceParser::InterpolatedVerbatiumStringPartContext *ctx) = 0;
  virtual void exitInterpolatedVerbatiumStringPart(CppAdvanceParser::InterpolatedVerbatiumStringPartContext *ctx) = 0;

  virtual void enterInterpolatedMultilineStringLiteral(CppAdvanceParser::InterpolatedMultilineStringLiteralContext *ctx) = 0;
  virtual void exitInterpolatedMultilineStringLiteral(CppAdvanceParser::InterpolatedMultilineStringLiteralContext *ctx) = 0;

  virtual void enterInterpolatedMultilineStringPart(CppAdvanceParser::InterpolatedMultilineStringPartContext *ctx) = 0;
  virtual void exitInterpolatedMultilineStringPart(CppAdvanceParser::InterpolatedMultilineStringPartContext *ctx) = 0;

  virtual void enterInterpolatedExpression(CppAdvanceParser::InterpolatedExpressionContext *ctx) = 0;
  virtual void exitInterpolatedExpression(CppAdvanceParser::InterpolatedExpressionContext *ctx) = 0;

  virtual void enterDeclvalExpression(CppAdvanceParser::DeclvalExpressionContext *ctx) = 0;
  virtual void exitDeclvalExpression(CppAdvanceParser::DeclvalExpressionContext *ctx) = 0;


};

