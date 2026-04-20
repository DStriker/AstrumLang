
#include "export.h"


// Generated from AstrumParser.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "AstrumParserVisitor.h"


namespace AstrumLang {

/**
 * This class provides an empty implementation of AstrumParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class ASTRUMLANG_API AstrumParserBaseVisitor : public AstrumParserVisitor {
public:

  virtual std::any visitModule(AstrumParser::ModuleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPackageDeclaration(AstrumParser::PackageDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPackageName(AstrumParser::PackageNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNestedPackageName(AstrumParser::NestedPackageNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitModuleName(AstrumParser::ModuleNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitImportDeclaration(AstrumParser::ImportDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclarationSeq(AstrumParser::DeclarationSeqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclaration(AstrumParser::DeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSymbolSpecifierSeq(AstrumParser::SymbolSpecifierSeqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVersionDefinition(AstrumParser::VersionDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExternVariableDeclaration(AstrumParser::ExternVariableDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlockDeclaration(AstrumParser::BlockDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMemberBlockDeclaration(AstrumParser::MemberBlockDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssertDeclaration(AstrumParser::AssertDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssumeDeclaration(AstrumParser::AssumeDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnitTestDeclaration(AstrumParser::UnitTestDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclarationCompoundStatement(AstrumParser::DeclarationCompoundStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVersionConditionalDeclaration(AstrumParser::VersionConditionalDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVersionIfDeclaration(AstrumParser::VersionIfDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVersionElseDeclaration(AstrumParser::VersionElseDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclSpecifier(AstrumParser::DeclSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclSpecifierSeq(AstrumParser::DeclSpecifierSeqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdentifierSeq(AstrumParser::IdentifierSeqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimpleDeclaration(AstrumParser::SimpleDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBitFieldDeclaration(AstrumParser::BitFieldDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeconstructionDeclaration(AstrumParser::DeconstructionDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRefDeclaration(AstrumParser::RefDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMemberRefDeclaration(AstrumParser::MemberRefDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimpleMultiDeclaration(AstrumParser::SimpleMultiDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultiDeclaration(AstrumParser::MultiDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstantDeclaration(AstrumParser::ConstantDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForwardVarDeclaration(AstrumParser::ForwardVarDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAliasDeclaration(AstrumParser::AliasDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAccessSpecifier(AstrumParser::AccessSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProtectedInternal(AstrumParser::ProtectedInternalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(AstrumParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLabeledStatement(AstrumParser::LabeledStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclarationStatement(AstrumParser::DeclarationStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpressionStatement(AstrumParser::ExpressionStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompoundStatement(AstrumParser::CompoundStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelectionStatement(AstrumParser::SelectionStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCondition(AstrumParser::ConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElseBranch(AstrumParser::ElseBranchContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSwitchStatementBranch(AstrumParser::SwitchStatementBranchContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclarator(AstrumParser::DeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInlineCppStatement(AstrumParser::InlineCppStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIterationStatement(AstrumParser::IterationStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhileCondition(AstrumParser::WhileConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDoWhileCondition(AstrumParser::DoWhileConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForInitStatement(AstrumParser::ForInitStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForRangeDeclaration(AstrumParser::ForRangeDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForRangeInitializer(AstrumParser::ForRangeInitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpressionSeq(AstrumParser::ExpressionSeqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJumpStatement(AstrumParser::JumpStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVersionSelectionStatement(AstrumParser::VersionSelectionStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVersionSelectionStatementBlock(AstrumParser::VersionSelectionStatementBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitScopeSafeCompoundStatement(AstrumParser::ScopeSafeCompoundStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTryBlock(AstrumParser::TryBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExceptionHandler(AstrumParser::ExceptionHandlerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExceptionDeclaration(AstrumParser::ExceptionDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(AstrumParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRangeExpression(AstrumParser::RangeExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRangeExpressionStart(AstrumParser::RangeExpressionStartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRangeExpressionEnd(AstrumParser::RangeExpressionEndContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSwitchExpression(AstrumParser::SwitchExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSwitchExpressionBranch(AstrumParser::SwitchExpressionBranchContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPowerExpression(AstrumParser::PowerExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultiplicativeExpression(AstrumParser::MultiplicativeExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAdditiveExpression(AstrumParser::AdditiveExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitShiftExpression(AstrumParser::ShiftExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThreeWayComparisonExpression(AstrumParser::ThreeWayComparisonExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelationalExpression(AstrumParser::RelationalExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEqualityExpression(AstrumParser::EqualityExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAndExpression(AstrumParser::AndExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExclusiveOrExpression(AstrumParser::ExclusiveOrExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInclusiveOrExpression(AstrumParser::InclusiveOrExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicalAndExpression(AstrumParser::LogicalAndExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicalOrExpression(AstrumParser::LogicalOrExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNullCoalescingExpression(AstrumParser::NullCoalescingExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNullCoalescingBranch(AstrumParser::NullCoalescingBranchContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConditionalExpression(AstrumParser::ConditionalExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstantExpression(AstrumParser::ConstantExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignmentExpression(AstrumParser::AssignmentExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInitializerClause(AstrumParser::InitializerClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBracedInitList(AstrumParser::BracedInitListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInitializerList(AstrumParser::InitializerListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInitializerPart(AstrumParser::InitializerPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCollectionExpression(AstrumParser::CollectionExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitKeyValuePairExpression(AstrumParser::KeyValuePairExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpressionList(AstrumParser::ExpressionListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpressionListPart(AstrumParser::ExpressionListPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThrowExpression(AstrumParser::ThrowExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdExpression(AstrumParser::IdExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQualifiedId(AstrumParser::QualifiedIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnqualifiedId(AstrumParser::UnqualifiedIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnaryExpression(AstrumParser::UnaryExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnaryExpressionTail(AstrumParser::UnaryExpressionTailContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNewExpression(AstrumParser::NewExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStackallocExpression(AstrumParser::StackallocExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMemorySpaceSetter(AstrumParser::MemorySpaceSetterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNewInitializer(AstrumParser::NewInitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFullPostfixExpression(AstrumParser::FullPostfixExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPostfixExpression(AstrumParser::PostfixExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTupleExpression(AstrumParser::TupleExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMethodBindingExpression(AstrumParser::MethodBindingExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMethodOwnerExpression(AstrumParser::MethodOwnerExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMethodName(AstrumParser::MethodNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrimaryExpression(AstrumParser::PrimaryExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFoldExpression(AstrumParser::FoldExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFoldLeftExpression(AstrumParser::FoldLeftExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFoldRightExpression(AstrumParser::FoldRightExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclvalExpression(AstrumParser::DeclvalExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLambdaExpression(AstrumParser::LambdaExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLambdaCaptureList(AstrumParser::LambdaCaptureListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLambdaCaptureClause(AstrumParser::LambdaCaptureClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCapture(AstrumParser::CaptureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLambdaDeclarator(AstrumParser::LambdaDeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLambdaBody(AstrumParser::LambdaBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTheTypeId(AstrumParser::TheTypeIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSingleTypeId(AstrumParser::SingleTypeIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypePostfix(AstrumParser::TypePostfixContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArrayDeclarator(AstrumParser::ArrayDeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPointerOperator(AstrumParser::PointerOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPointerOperatorSeq(AstrumParser::PointerOperatorSeqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeSpecifierSeq(AstrumParser::TypeSpecifierSeqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeSpecifier(AstrumParser::TypeSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTrailingTypeSpecifier(AstrumParser::TrailingTypeSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeNameSpecifier(AstrumParser::TypeNameSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCvQualifierSeq(AstrumParser::CvQualifierSeqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCvQualifier(AstrumParser::CvQualifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypename(AstrumParser::TypenameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassName(AstrumParser::ClassNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDecltypeSpecifier(AstrumParser::DecltypeSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDecaySpecifier(AstrumParser::DecaySpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumName(AstrumParser::EnumNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimpleTypeSpecifier(AstrumParser::SimpleTypeSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionTypeId(AstrumParser::FunctionTypeIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeIdWithSpecification(AstrumParser::TypeIdWithSpecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNamedTupleField(AstrumParser::NamedTupleFieldContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNestedNameSpecifier(AstrumParser::NestedNameSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNamespaceName(AstrumParser::NamespaceNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTemplateName(AstrumParser::TemplateNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimpleTemplateId(AstrumParser::SimpleTemplateIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOperatorTemplateId(AstrumParser::OperatorTemplateIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTemplateId(AstrumParser::TemplateIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPatternList(AstrumParser::PatternListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPatternCombinationOperator(AstrumParser::PatternCombinationOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPattern(AstrumParser::PatternContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPropertyPattern(AstrumParser::PropertyPatternContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStructDefinition(AstrumParser::StructDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStructHead(AstrumParser::StructHeadContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStructMemberSpecification(AstrumParser::StructMemberSpecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMemberDeclarationCompoundStatement(AstrumParser::MemberDeclarationCompoundStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMemberVersionConditionalDeclaration(AstrumParser::MemberVersionConditionalDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMemberVersionIfDeclaration(AstrumParser::MemberVersionIfDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMemberVersionElseDeclaration(AstrumParser::MemberVersionElseDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStructMemberDeclaration(AstrumParser::StructMemberDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassDefinition(AstrumParser::ClassDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassHead(AstrumParser::ClassHeadContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInterfaceDefinition(AstrumParser::InterfaceDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInterfaceHead(AstrumParser::InterfaceHeadContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInterfaceMemberSpecification(AstrumParser::InterfaceMemberSpecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInterfaceMemberDeclaration(AstrumParser::InterfaceMemberDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssociatedTypeDeclaration(AstrumParser::AssociatedTypeDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumDefinition(AstrumParser::EnumDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumHead(AstrumParser::EnumHeadContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumBase(AstrumParser::EnumBaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumList(AstrumParser::EnumListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumeratorDefinition(AstrumParser::EnumeratorDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumMemberSpecification(AstrumParser::EnumMemberSpecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumMemberDeclaration(AstrumParser::EnumMemberDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumClassDefinition(AstrumParser::EnumClassDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumClassHead(AstrumParser::EnumClassHeadContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumClassList(AstrumParser::EnumClassListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassEnumeratorDefinition(AstrumParser::ClassEnumeratorDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumClassMemberSpecification(AstrumParser::EnumClassMemberSpecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnionDefinition(AstrumParser::UnionDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnionHead(AstrumParser::UnionHeadContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnionList(AstrumParser::UnionListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnionEnumerator(AstrumParser::UnionEnumeratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnionEnumeratorClause(AstrumParser::UnionEnumeratorClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnionMemberSpecification(AstrumParser::UnionMemberSpecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExtensionDefinition(AstrumParser::ExtensionDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExtensionHead(AstrumParser::ExtensionHeadContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExtensionMemberSpecification(AstrumParser::ExtensionMemberSpecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExtensionMemberDeclaration(AstrumParser::ExtensionMemberDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBaseClause(AstrumParser::BaseClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBaseSpecifierList(AstrumParser::BaseSpecifierListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBaseSpecifier(AstrumParser::BaseSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProperty(AstrumParser::PropertyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPropertyBody(AstrumParser::PropertyBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAbstractProperty(AstrumParser::AbstractPropertyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInterfaceProperty(AstrumParser::InterfacePropertyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPropertyGetter(AstrumParser::PropertyGetterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPropertySetter(AstrumParser::PropertySetterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAbstractPropertyGetter(AstrumParser::AbstractPropertyGetterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAbstractPropertySetter(AstrumParser::AbstractPropertySetterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExternFunctionDeclaration(AstrumParser::ExternFunctionDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionTemplateDeclaration(AstrumParser::FunctionTemplateDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionDefinition(AstrumParser::FunctionDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAbstractMethodDeclaration(AstrumParser::AbstractMethodDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInterfaceMethodDeclaration(AstrumParser::InterfaceMethodDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionSpecifier(AstrumParser::FunctionSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionParams(AstrumParser::FunctionParamsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParamDeclClause(AstrumParser::ParamDeclClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParamDeclList(AstrumParser::ParamDeclListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParamDeclaration(AstrumParser::ParamDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParamSpecification(AstrumParser::ParamSpecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturnType(AstrumParser::ReturnTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionBody(AstrumParser::FunctionBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitShortFunctionBody(AstrumParser::ShortFunctionBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExceptionSpecification(AstrumParser::ExceptionSpecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFriendDeclaration(AstrumParser::FriendDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExternMethodDeclaration(AstrumParser::ExternMethodDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOperatorFunctionId(AstrumParser::OperatorFunctionIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstructor(AstrumParser::ConstructorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstructorBody(AstrumParser::ConstructorBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMemberInitializationList(AstrumParser::MemberInitializationListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDelegatingConstructorBody(AstrumParser::DelegatingConstructorBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDelegatingConstructorStatement(AstrumParser::DelegatingConstructorStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMemberInitializationStatement(AstrumParser::MemberInitializationStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitImplicitSpecification(AstrumParser::ImplicitSpecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDestructor(AstrumParser::DestructorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConversionFunction(AstrumParser::ConversionFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConversionFunctionId(AstrumParser::ConversionFunctionIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIndexer(AstrumParser::IndexerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIndexerProperty(AstrumParser::IndexerPropertyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIndexerGetter(AstrumParser::IndexerGetterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIndexerSetter(AstrumParser::IndexerSetterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInterfaceIndexer(AstrumParser::InterfaceIndexerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTemplateParams(AstrumParser::TemplateParamsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTemplateParamDeclaration(AstrumParser::TemplateParamDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTemplateTypename(AstrumParser::TemplateTypenameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTemplateArgumentList(AstrumParser::TemplateArgumentListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTemplateArgument(AstrumParser::TemplateArgumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstraintClause(AstrumParser::ConstraintClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeTrait(AstrumParser::TypeTraitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTemplateDeductionGuide(AstrumParser::TemplateDeductionGuideContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAttributeSpecifierSeq(AstrumParser::AttributeSpecifierSeqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAttributeSpecifier(AstrumParser::AttributeSpecifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAttributeArgumentClause(AstrumParser::AttributeArgumentClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignmentOperator(AstrumParser::AssignmentOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitShiftOperator(AstrumParser::ShiftOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnaryPrefixOperator(AstrumParser::UnaryPrefixOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnaryCustomOperator(AstrumParser::UnaryCustomOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRefCaptureOperator(AstrumParser::RefCaptureOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnaryPostfixOperator(AstrumParser::UnaryPostfixOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNot(AstrumParser::NotContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOperator(AstrumParser::OperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLiteral(AstrumParser::LiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInterpolatedStringLiteral(AstrumParser::InterpolatedStringLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInterpolatedRegularStringLiteral(AstrumParser::InterpolatedRegularStringLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInterpolatedRegularStringPart(AstrumParser::InterpolatedRegularStringPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInterpolatedVerbatiumStringLiteral(AstrumParser::InterpolatedVerbatiumStringLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInterpolatedVerbatiumStringPart(AstrumParser::InterpolatedVerbatiumStringPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInterpolatedMultilineStringLiteral(AstrumParser::InterpolatedMultilineStringLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInterpolatedMultilineStringPart(AstrumParser::InterpolatedMultilineStringPartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInterpolatedExpression(AstrumParser::InterpolatedExpressionContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace AstrumLang
