
#include "export.h"


// Generated from AstrumParser.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "AstrumParser.h"


namespace AstrumLang {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by AstrumParser.
 */
class ASTRUMLANG_API AstrumParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by AstrumParser.
   */
    virtual std::any visitModule(AstrumParser::ModuleContext *context) = 0;

    virtual std::any visitPackageDeclaration(AstrumParser::PackageDeclarationContext *context) = 0;

    virtual std::any visitPackageName(AstrumParser::PackageNameContext *context) = 0;

    virtual std::any visitNestedPackageName(AstrumParser::NestedPackageNameContext *context) = 0;

    virtual std::any visitModuleName(AstrumParser::ModuleNameContext *context) = 0;

    virtual std::any visitImportDeclaration(AstrumParser::ImportDeclarationContext *context) = 0;

    virtual std::any visitDeclarationSeq(AstrumParser::DeclarationSeqContext *context) = 0;

    virtual std::any visitDeclaration(AstrumParser::DeclarationContext *context) = 0;

    virtual std::any visitSymbolSpecifierSeq(AstrumParser::SymbolSpecifierSeqContext *context) = 0;

    virtual std::any visitVersionDefinition(AstrumParser::VersionDefinitionContext *context) = 0;

    virtual std::any visitExternVariableDeclaration(AstrumParser::ExternVariableDeclarationContext *context) = 0;

    virtual std::any visitBlockDeclaration(AstrumParser::BlockDeclarationContext *context) = 0;

    virtual std::any visitMemberBlockDeclaration(AstrumParser::MemberBlockDeclarationContext *context) = 0;

    virtual std::any visitAssertDeclaration(AstrumParser::AssertDeclarationContext *context) = 0;

    virtual std::any visitAssumeDeclaration(AstrumParser::AssumeDeclarationContext *context) = 0;

    virtual std::any visitUnitTestDeclaration(AstrumParser::UnitTestDeclarationContext *context) = 0;

    virtual std::any visitDeclarationCompoundStatement(AstrumParser::DeclarationCompoundStatementContext *context) = 0;

    virtual std::any visitVersionConditionalDeclaration(AstrumParser::VersionConditionalDeclarationContext *context) = 0;

    virtual std::any visitVersionIfDeclaration(AstrumParser::VersionIfDeclarationContext *context) = 0;

    virtual std::any visitVersionElseDeclaration(AstrumParser::VersionElseDeclarationContext *context) = 0;

    virtual std::any visitDeclSpecifier(AstrumParser::DeclSpecifierContext *context) = 0;

    virtual std::any visitDeclSpecifierSeq(AstrumParser::DeclSpecifierSeqContext *context) = 0;

    virtual std::any visitIdentifierSeq(AstrumParser::IdentifierSeqContext *context) = 0;

    virtual std::any visitSimpleDeclaration(AstrumParser::SimpleDeclarationContext *context) = 0;

    virtual std::any visitBitFieldDeclaration(AstrumParser::BitFieldDeclarationContext *context) = 0;

    virtual std::any visitDeconstructionDeclaration(AstrumParser::DeconstructionDeclarationContext *context) = 0;

    virtual std::any visitRefDeclaration(AstrumParser::RefDeclarationContext *context) = 0;

    virtual std::any visitMemberRefDeclaration(AstrumParser::MemberRefDeclarationContext *context) = 0;

    virtual std::any visitSimpleMultiDeclaration(AstrumParser::SimpleMultiDeclarationContext *context) = 0;

    virtual std::any visitMultiDeclaration(AstrumParser::MultiDeclarationContext *context) = 0;

    virtual std::any visitConstantDeclaration(AstrumParser::ConstantDeclarationContext *context) = 0;

    virtual std::any visitForwardVarDeclaration(AstrumParser::ForwardVarDeclarationContext *context) = 0;

    virtual std::any visitAliasDeclaration(AstrumParser::AliasDeclarationContext *context) = 0;

    virtual std::any visitAccessSpecifier(AstrumParser::AccessSpecifierContext *context) = 0;

    virtual std::any visitProtectedInternal(AstrumParser::ProtectedInternalContext *context) = 0;

    virtual std::any visitStatement(AstrumParser::StatementContext *context) = 0;

    virtual std::any visitLabeledStatement(AstrumParser::LabeledStatementContext *context) = 0;

    virtual std::any visitDeclarationStatement(AstrumParser::DeclarationStatementContext *context) = 0;

    virtual std::any visitExpressionStatement(AstrumParser::ExpressionStatementContext *context) = 0;

    virtual std::any visitCompoundStatement(AstrumParser::CompoundStatementContext *context) = 0;

    virtual std::any visitSelectionStatement(AstrumParser::SelectionStatementContext *context) = 0;

    virtual std::any visitCondition(AstrumParser::ConditionContext *context) = 0;

    virtual std::any visitElseBranch(AstrumParser::ElseBranchContext *context) = 0;

    virtual std::any visitSwitchStatementBranch(AstrumParser::SwitchStatementBranchContext *context) = 0;

    virtual std::any visitDeclarator(AstrumParser::DeclaratorContext *context) = 0;

    virtual std::any visitInlineCppStatement(AstrumParser::InlineCppStatementContext *context) = 0;

    virtual std::any visitIterationStatement(AstrumParser::IterationStatementContext *context) = 0;

    virtual std::any visitWhileCondition(AstrumParser::WhileConditionContext *context) = 0;

    virtual std::any visitDoWhileCondition(AstrumParser::DoWhileConditionContext *context) = 0;

    virtual std::any visitForInitStatement(AstrumParser::ForInitStatementContext *context) = 0;

    virtual std::any visitForRangeDeclaration(AstrumParser::ForRangeDeclarationContext *context) = 0;

    virtual std::any visitForRangeInitializer(AstrumParser::ForRangeInitializerContext *context) = 0;

    virtual std::any visitExpressionSeq(AstrumParser::ExpressionSeqContext *context) = 0;

    virtual std::any visitJumpStatement(AstrumParser::JumpStatementContext *context) = 0;

    virtual std::any visitVersionSelectionStatement(AstrumParser::VersionSelectionStatementContext *context) = 0;

    virtual std::any visitVersionSelectionStatementBlock(AstrumParser::VersionSelectionStatementBlockContext *context) = 0;

    virtual std::any visitScopeSafeCompoundStatement(AstrumParser::ScopeSafeCompoundStatementContext *context) = 0;

    virtual std::any visitTryBlock(AstrumParser::TryBlockContext *context) = 0;

    virtual std::any visitExceptionHandler(AstrumParser::ExceptionHandlerContext *context) = 0;

    virtual std::any visitExceptionDeclaration(AstrumParser::ExceptionDeclarationContext *context) = 0;

    virtual std::any visitExpression(AstrumParser::ExpressionContext *context) = 0;

    virtual std::any visitRangeExpression(AstrumParser::RangeExpressionContext *context) = 0;

    virtual std::any visitRangeExpressionStart(AstrumParser::RangeExpressionStartContext *context) = 0;

    virtual std::any visitRangeExpressionEnd(AstrumParser::RangeExpressionEndContext *context) = 0;

    virtual std::any visitSwitchExpression(AstrumParser::SwitchExpressionContext *context) = 0;

    virtual std::any visitSwitchExpressionBranch(AstrumParser::SwitchExpressionBranchContext *context) = 0;

    virtual std::any visitPowerExpression(AstrumParser::PowerExpressionContext *context) = 0;

    virtual std::any visitMultiplicativeExpression(AstrumParser::MultiplicativeExpressionContext *context) = 0;

    virtual std::any visitAdditiveExpression(AstrumParser::AdditiveExpressionContext *context) = 0;

    virtual std::any visitShiftExpression(AstrumParser::ShiftExpressionContext *context) = 0;

    virtual std::any visitThreeWayComparisonExpression(AstrumParser::ThreeWayComparisonExpressionContext *context) = 0;

    virtual std::any visitRelationalExpression(AstrumParser::RelationalExpressionContext *context) = 0;

    virtual std::any visitEqualityExpression(AstrumParser::EqualityExpressionContext *context) = 0;

    virtual std::any visitAndExpression(AstrumParser::AndExpressionContext *context) = 0;

    virtual std::any visitExclusiveOrExpression(AstrumParser::ExclusiveOrExpressionContext *context) = 0;

    virtual std::any visitInclusiveOrExpression(AstrumParser::InclusiveOrExpressionContext *context) = 0;

    virtual std::any visitLogicalAndExpression(AstrumParser::LogicalAndExpressionContext *context) = 0;

    virtual std::any visitLogicalOrExpression(AstrumParser::LogicalOrExpressionContext *context) = 0;

    virtual std::any visitNullCoalescingExpression(AstrumParser::NullCoalescingExpressionContext *context) = 0;

    virtual std::any visitNullCoalescingBranch(AstrumParser::NullCoalescingBranchContext *context) = 0;

    virtual std::any visitConditionalExpression(AstrumParser::ConditionalExpressionContext *context) = 0;

    virtual std::any visitConstantExpression(AstrumParser::ConstantExpressionContext *context) = 0;

    virtual std::any visitAssignmentExpression(AstrumParser::AssignmentExpressionContext *context) = 0;

    virtual std::any visitInitializerClause(AstrumParser::InitializerClauseContext *context) = 0;

    virtual std::any visitBracedInitList(AstrumParser::BracedInitListContext *context) = 0;

    virtual std::any visitInitializerList(AstrumParser::InitializerListContext *context) = 0;

    virtual std::any visitInitializerPart(AstrumParser::InitializerPartContext *context) = 0;

    virtual std::any visitCollectionExpression(AstrumParser::CollectionExpressionContext *context) = 0;

    virtual std::any visitKeyValuePairExpression(AstrumParser::KeyValuePairExpressionContext *context) = 0;

    virtual std::any visitExpressionList(AstrumParser::ExpressionListContext *context) = 0;

    virtual std::any visitExpressionListPart(AstrumParser::ExpressionListPartContext *context) = 0;

    virtual std::any visitThrowExpression(AstrumParser::ThrowExpressionContext *context) = 0;

    virtual std::any visitIdExpression(AstrumParser::IdExpressionContext *context) = 0;

    virtual std::any visitQualifiedId(AstrumParser::QualifiedIdContext *context) = 0;

    virtual std::any visitUnqualifiedId(AstrumParser::UnqualifiedIdContext *context) = 0;

    virtual std::any visitUnaryExpression(AstrumParser::UnaryExpressionContext *context) = 0;

    virtual std::any visitUnaryExpressionTail(AstrumParser::UnaryExpressionTailContext *context) = 0;

    virtual std::any visitNewExpression(AstrumParser::NewExpressionContext *context) = 0;

    virtual std::any visitStackallocExpression(AstrumParser::StackallocExpressionContext *context) = 0;

    virtual std::any visitMemorySpaceSetter(AstrumParser::MemorySpaceSetterContext *context) = 0;

    virtual std::any visitNewInitializer(AstrumParser::NewInitializerContext *context) = 0;

    virtual std::any visitFullPostfixExpression(AstrumParser::FullPostfixExpressionContext *context) = 0;

    virtual std::any visitPostfixExpression(AstrumParser::PostfixExpressionContext *context) = 0;

    virtual std::any visitTupleExpression(AstrumParser::TupleExpressionContext *context) = 0;

    virtual std::any visitMethodBindingExpression(AstrumParser::MethodBindingExpressionContext *context) = 0;

    virtual std::any visitMethodOwnerExpression(AstrumParser::MethodOwnerExpressionContext *context) = 0;

    virtual std::any visitMethodName(AstrumParser::MethodNameContext *context) = 0;

    virtual std::any visitPrimaryExpression(AstrumParser::PrimaryExpressionContext *context) = 0;

    virtual std::any visitFoldExpression(AstrumParser::FoldExpressionContext *context) = 0;

    virtual std::any visitFoldLeftExpression(AstrumParser::FoldLeftExpressionContext *context) = 0;

    virtual std::any visitFoldRightExpression(AstrumParser::FoldRightExpressionContext *context) = 0;

    virtual std::any visitDeclvalExpression(AstrumParser::DeclvalExpressionContext *context) = 0;

    virtual std::any visitLambdaExpression(AstrumParser::LambdaExpressionContext *context) = 0;

    virtual std::any visitLambdaCaptureList(AstrumParser::LambdaCaptureListContext *context) = 0;

    virtual std::any visitLambdaCaptureClause(AstrumParser::LambdaCaptureClauseContext *context) = 0;

    virtual std::any visitCapture(AstrumParser::CaptureContext *context) = 0;

    virtual std::any visitLambdaDeclarator(AstrumParser::LambdaDeclaratorContext *context) = 0;

    virtual std::any visitLambdaBody(AstrumParser::LambdaBodyContext *context) = 0;

    virtual std::any visitTheTypeId(AstrumParser::TheTypeIdContext *context) = 0;

    virtual std::any visitSingleTypeId(AstrumParser::SingleTypeIdContext *context) = 0;

    virtual std::any visitTypePostfix(AstrumParser::TypePostfixContext *context) = 0;

    virtual std::any visitArrayDeclarator(AstrumParser::ArrayDeclaratorContext *context) = 0;

    virtual std::any visitPointerOperator(AstrumParser::PointerOperatorContext *context) = 0;

    virtual std::any visitPointerOperatorSeq(AstrumParser::PointerOperatorSeqContext *context) = 0;

    virtual std::any visitTypeSpecifierSeq(AstrumParser::TypeSpecifierSeqContext *context) = 0;

    virtual std::any visitTypeSpecifier(AstrumParser::TypeSpecifierContext *context) = 0;

    virtual std::any visitTrailingTypeSpecifier(AstrumParser::TrailingTypeSpecifierContext *context) = 0;

    virtual std::any visitTypeNameSpecifier(AstrumParser::TypeNameSpecifierContext *context) = 0;

    virtual std::any visitCvQualifierSeq(AstrumParser::CvQualifierSeqContext *context) = 0;

    virtual std::any visitCvQualifier(AstrumParser::CvQualifierContext *context) = 0;

    virtual std::any visitTypename(AstrumParser::TypenameContext *context) = 0;

    virtual std::any visitClassName(AstrumParser::ClassNameContext *context) = 0;

    virtual std::any visitDecltypeSpecifier(AstrumParser::DecltypeSpecifierContext *context) = 0;

    virtual std::any visitDecaySpecifier(AstrumParser::DecaySpecifierContext *context) = 0;

    virtual std::any visitEnumName(AstrumParser::EnumNameContext *context) = 0;

    virtual std::any visitSimpleTypeSpecifier(AstrumParser::SimpleTypeSpecifierContext *context) = 0;

    virtual std::any visitFunctionTypeId(AstrumParser::FunctionTypeIdContext *context) = 0;

    virtual std::any visitTypeIdWithSpecification(AstrumParser::TypeIdWithSpecificationContext *context) = 0;

    virtual std::any visitNamedTupleField(AstrumParser::NamedTupleFieldContext *context) = 0;

    virtual std::any visitNestedNameSpecifier(AstrumParser::NestedNameSpecifierContext *context) = 0;

    virtual std::any visitNamespaceName(AstrumParser::NamespaceNameContext *context) = 0;

    virtual std::any visitTemplateName(AstrumParser::TemplateNameContext *context) = 0;

    virtual std::any visitSimpleTemplateId(AstrumParser::SimpleTemplateIdContext *context) = 0;

    virtual std::any visitOperatorTemplateId(AstrumParser::OperatorTemplateIdContext *context) = 0;

    virtual std::any visitTemplateId(AstrumParser::TemplateIdContext *context) = 0;

    virtual std::any visitPatternList(AstrumParser::PatternListContext *context) = 0;

    virtual std::any visitPatternCombinationOperator(AstrumParser::PatternCombinationOperatorContext *context) = 0;

    virtual std::any visitPattern(AstrumParser::PatternContext *context) = 0;

    virtual std::any visitPropertyPattern(AstrumParser::PropertyPatternContext *context) = 0;

    virtual std::any visitStructDefinition(AstrumParser::StructDefinitionContext *context) = 0;

    virtual std::any visitStructHead(AstrumParser::StructHeadContext *context) = 0;

    virtual std::any visitStructMemberSpecification(AstrumParser::StructMemberSpecificationContext *context) = 0;

    virtual std::any visitMemberDeclarationCompoundStatement(AstrumParser::MemberDeclarationCompoundStatementContext *context) = 0;

    virtual std::any visitMemberVersionConditionalDeclaration(AstrumParser::MemberVersionConditionalDeclarationContext *context) = 0;

    virtual std::any visitMemberVersionIfDeclaration(AstrumParser::MemberVersionIfDeclarationContext *context) = 0;

    virtual std::any visitMemberVersionElseDeclaration(AstrumParser::MemberVersionElseDeclarationContext *context) = 0;

    virtual std::any visitStructMemberDeclaration(AstrumParser::StructMemberDeclarationContext *context) = 0;

    virtual std::any visitClassDefinition(AstrumParser::ClassDefinitionContext *context) = 0;

    virtual std::any visitClassHead(AstrumParser::ClassHeadContext *context) = 0;

    virtual std::any visitInterfaceDefinition(AstrumParser::InterfaceDefinitionContext *context) = 0;

    virtual std::any visitInterfaceHead(AstrumParser::InterfaceHeadContext *context) = 0;

    virtual std::any visitInterfaceMemberSpecification(AstrumParser::InterfaceMemberSpecificationContext *context) = 0;

    virtual std::any visitInterfaceMemberDeclaration(AstrumParser::InterfaceMemberDeclarationContext *context) = 0;

    virtual std::any visitAssociatedTypeDeclaration(AstrumParser::AssociatedTypeDeclarationContext *context) = 0;

    virtual std::any visitEnumDefinition(AstrumParser::EnumDefinitionContext *context) = 0;

    virtual std::any visitEnumHead(AstrumParser::EnumHeadContext *context) = 0;

    virtual std::any visitEnumBase(AstrumParser::EnumBaseContext *context) = 0;

    virtual std::any visitEnumList(AstrumParser::EnumListContext *context) = 0;

    virtual std::any visitEnumeratorDefinition(AstrumParser::EnumeratorDefinitionContext *context) = 0;

    virtual std::any visitEnumMemberSpecification(AstrumParser::EnumMemberSpecificationContext *context) = 0;

    virtual std::any visitEnumMemberDeclaration(AstrumParser::EnumMemberDeclarationContext *context) = 0;

    virtual std::any visitEnumClassDefinition(AstrumParser::EnumClassDefinitionContext *context) = 0;

    virtual std::any visitEnumClassHead(AstrumParser::EnumClassHeadContext *context) = 0;

    virtual std::any visitEnumClassList(AstrumParser::EnumClassListContext *context) = 0;

    virtual std::any visitClassEnumeratorDefinition(AstrumParser::ClassEnumeratorDefinitionContext *context) = 0;

    virtual std::any visitEnumClassMemberSpecification(AstrumParser::EnumClassMemberSpecificationContext *context) = 0;

    virtual std::any visitUnionDefinition(AstrumParser::UnionDefinitionContext *context) = 0;

    virtual std::any visitUnionHead(AstrumParser::UnionHeadContext *context) = 0;

    virtual std::any visitUnionList(AstrumParser::UnionListContext *context) = 0;

    virtual std::any visitUnionEnumerator(AstrumParser::UnionEnumeratorContext *context) = 0;

    virtual std::any visitUnionEnumeratorClause(AstrumParser::UnionEnumeratorClauseContext *context) = 0;

    virtual std::any visitUnionMemberSpecification(AstrumParser::UnionMemberSpecificationContext *context) = 0;

    virtual std::any visitExtensionDefinition(AstrumParser::ExtensionDefinitionContext *context) = 0;

    virtual std::any visitExtensionHead(AstrumParser::ExtensionHeadContext *context) = 0;

    virtual std::any visitExtensionMemberSpecification(AstrumParser::ExtensionMemberSpecificationContext *context) = 0;

    virtual std::any visitExtensionMemberDeclaration(AstrumParser::ExtensionMemberDeclarationContext *context) = 0;

    virtual std::any visitBaseClause(AstrumParser::BaseClauseContext *context) = 0;

    virtual std::any visitBaseSpecifierList(AstrumParser::BaseSpecifierListContext *context) = 0;

    virtual std::any visitBaseSpecifier(AstrumParser::BaseSpecifierContext *context) = 0;

    virtual std::any visitProperty(AstrumParser::PropertyContext *context) = 0;

    virtual std::any visitPropertyBody(AstrumParser::PropertyBodyContext *context) = 0;

    virtual std::any visitAbstractProperty(AstrumParser::AbstractPropertyContext *context) = 0;

    virtual std::any visitInterfaceProperty(AstrumParser::InterfacePropertyContext *context) = 0;

    virtual std::any visitPropertyGetter(AstrumParser::PropertyGetterContext *context) = 0;

    virtual std::any visitPropertySetter(AstrumParser::PropertySetterContext *context) = 0;

    virtual std::any visitAbstractPropertyGetter(AstrumParser::AbstractPropertyGetterContext *context) = 0;

    virtual std::any visitAbstractPropertySetter(AstrumParser::AbstractPropertySetterContext *context) = 0;

    virtual std::any visitExternFunctionDeclaration(AstrumParser::ExternFunctionDeclarationContext *context) = 0;

    virtual std::any visitFunctionTemplateDeclaration(AstrumParser::FunctionTemplateDeclarationContext *context) = 0;

    virtual std::any visitFunctionDefinition(AstrumParser::FunctionDefinitionContext *context) = 0;

    virtual std::any visitAbstractMethodDeclaration(AstrumParser::AbstractMethodDeclarationContext *context) = 0;

    virtual std::any visitInterfaceMethodDeclaration(AstrumParser::InterfaceMethodDeclarationContext *context) = 0;

    virtual std::any visitFunctionSpecifier(AstrumParser::FunctionSpecifierContext *context) = 0;

    virtual std::any visitFunctionParams(AstrumParser::FunctionParamsContext *context) = 0;

    virtual std::any visitParamDeclClause(AstrumParser::ParamDeclClauseContext *context) = 0;

    virtual std::any visitParamDeclList(AstrumParser::ParamDeclListContext *context) = 0;

    virtual std::any visitParamDeclaration(AstrumParser::ParamDeclarationContext *context) = 0;

    virtual std::any visitParamSpecification(AstrumParser::ParamSpecificationContext *context) = 0;

    virtual std::any visitReturnType(AstrumParser::ReturnTypeContext *context) = 0;

    virtual std::any visitFunctionBody(AstrumParser::FunctionBodyContext *context) = 0;

    virtual std::any visitShortFunctionBody(AstrumParser::ShortFunctionBodyContext *context) = 0;

    virtual std::any visitExceptionSpecification(AstrumParser::ExceptionSpecificationContext *context) = 0;

    virtual std::any visitFriendDeclaration(AstrumParser::FriendDeclarationContext *context) = 0;

    virtual std::any visitExternMethodDeclaration(AstrumParser::ExternMethodDeclarationContext *context) = 0;

    virtual std::any visitOperatorFunctionId(AstrumParser::OperatorFunctionIdContext *context) = 0;

    virtual std::any visitConstructor(AstrumParser::ConstructorContext *context) = 0;

    virtual std::any visitConstructorBody(AstrumParser::ConstructorBodyContext *context) = 0;

    virtual std::any visitMemberInitializationList(AstrumParser::MemberInitializationListContext *context) = 0;

    virtual std::any visitDelegatingConstructorBody(AstrumParser::DelegatingConstructorBodyContext *context) = 0;

    virtual std::any visitDelegatingConstructorStatement(AstrumParser::DelegatingConstructorStatementContext *context) = 0;

    virtual std::any visitMemberInitializationStatement(AstrumParser::MemberInitializationStatementContext *context) = 0;

    virtual std::any visitImplicitSpecification(AstrumParser::ImplicitSpecificationContext *context) = 0;

    virtual std::any visitDestructor(AstrumParser::DestructorContext *context) = 0;

    virtual std::any visitConversionFunction(AstrumParser::ConversionFunctionContext *context) = 0;

    virtual std::any visitConversionFunctionId(AstrumParser::ConversionFunctionIdContext *context) = 0;

    virtual std::any visitIndexer(AstrumParser::IndexerContext *context) = 0;

    virtual std::any visitIndexerProperty(AstrumParser::IndexerPropertyContext *context) = 0;

    virtual std::any visitIndexerGetter(AstrumParser::IndexerGetterContext *context) = 0;

    virtual std::any visitIndexerSetter(AstrumParser::IndexerSetterContext *context) = 0;

    virtual std::any visitInterfaceIndexer(AstrumParser::InterfaceIndexerContext *context) = 0;

    virtual std::any visitTemplateParams(AstrumParser::TemplateParamsContext *context) = 0;

    virtual std::any visitTemplateParamDeclaration(AstrumParser::TemplateParamDeclarationContext *context) = 0;

    virtual std::any visitTemplateTypename(AstrumParser::TemplateTypenameContext *context) = 0;

    virtual std::any visitTemplateArgumentList(AstrumParser::TemplateArgumentListContext *context) = 0;

    virtual std::any visitTemplateArgument(AstrumParser::TemplateArgumentContext *context) = 0;

    virtual std::any visitConstraintClause(AstrumParser::ConstraintClauseContext *context) = 0;

    virtual std::any visitTypeTrait(AstrumParser::TypeTraitContext *context) = 0;

    virtual std::any visitTemplateDeductionGuide(AstrumParser::TemplateDeductionGuideContext *context) = 0;

    virtual std::any visitAttributeSpecifierSeq(AstrumParser::AttributeSpecifierSeqContext *context) = 0;

    virtual std::any visitAttributeSpecifier(AstrumParser::AttributeSpecifierContext *context) = 0;

    virtual std::any visitAttributeArgumentClause(AstrumParser::AttributeArgumentClauseContext *context) = 0;

    virtual std::any visitAssignmentOperator(AstrumParser::AssignmentOperatorContext *context) = 0;

    virtual std::any visitShiftOperator(AstrumParser::ShiftOperatorContext *context) = 0;

    virtual std::any visitUnaryPrefixOperator(AstrumParser::UnaryPrefixOperatorContext *context) = 0;

    virtual std::any visitUnaryCustomOperator(AstrumParser::UnaryCustomOperatorContext *context) = 0;

    virtual std::any visitRefCaptureOperator(AstrumParser::RefCaptureOperatorContext *context) = 0;

    virtual std::any visitUnaryPostfixOperator(AstrumParser::UnaryPostfixOperatorContext *context) = 0;

    virtual std::any visitNot(AstrumParser::NotContext *context) = 0;

    virtual std::any visitOperator(AstrumParser::OperatorContext *context) = 0;

    virtual std::any visitLiteral(AstrumParser::LiteralContext *context) = 0;

    virtual std::any visitInterpolatedStringLiteral(AstrumParser::InterpolatedStringLiteralContext *context) = 0;

    virtual std::any visitInterpolatedRegularStringLiteral(AstrumParser::InterpolatedRegularStringLiteralContext *context) = 0;

    virtual std::any visitInterpolatedRegularStringPart(AstrumParser::InterpolatedRegularStringPartContext *context) = 0;

    virtual std::any visitInterpolatedVerbatiumStringLiteral(AstrumParser::InterpolatedVerbatiumStringLiteralContext *context) = 0;

    virtual std::any visitInterpolatedVerbatiumStringPart(AstrumParser::InterpolatedVerbatiumStringPartContext *context) = 0;

    virtual std::any visitInterpolatedMultilineStringLiteral(AstrumParser::InterpolatedMultilineStringLiteralContext *context) = 0;

    virtual std::any visitInterpolatedMultilineStringPart(AstrumParser::InterpolatedMultilineStringPartContext *context) = 0;

    virtual std::any visitInterpolatedExpression(AstrumParser::InterpolatedExpressionContext *context) = 0;


};

}  // namespace AstrumLang
