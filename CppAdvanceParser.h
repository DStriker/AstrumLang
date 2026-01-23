
// Generated from CppAdvanceParser.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  CppAdvanceParser : public antlr4::Parser {
public:
  enum {
    Whitespace = 1, Newline = 2, BlockComment = 3, LineComment = 4, IntegerLiteral = 5, 
    CharacterLiteral = 6, FloatingLiteral = 7, DecimalTypeLiteral = 8, DecimalLiteral = 9, 
    OctalLiteral = 10, HexadecimalLiteral = 11, BinaryLiteral = 12, StringLiteral = 13, 
    RegularString = 14, HexStringLiteral = 15, GraveString = 16, InterpolatedRegularStringStart = 17, 
    InterpolatedGraveStringStart = 18, InterpolatedMultilineStringStart = 19, 
    MultilineStringLiteral = 20, BooleanLiteral = 21, Directive = 22, Abstract = 23, 
    Alignof = 24, As = 25, Assert = 26, Assume = 27, Await = 28, Bool = 29, 
    Break = 30, Catch = 31, Char = 32, Byte = 33, Class = 34, Const = 35, 
    Consteval = 36, Continue = 37, Cpp = 38, Debug = 39, Decay = 40, Decimal = 41, 
    Decltype = 42, Declval = 43, Default = 44, Delete = 45, Do = 46, Else = 47, 
    Enum = 48, Extension = 49, Extern = 50, False_ = 51, Final = 52, F32 = 53, 
    F64 = 54, Fext = 55, Field = 56, For = 57, Forward = 58, Friend = 59, 
    Get = 60, If = 61, Import = 62, Implicit = 63, In = 64, Inout = 65, 
    I8 = 66, I16 = 67, I32 = 68, I64 = 69, I128 = 70, Isize = 71, Inline = 72, 
    Interface = 73, Internal = 74, Is = 75, Let = 76, Lock = 77, Move = 78, 
    Mutable = 79, New = 80, Noexcept = 81, Null = 82, Object = 83, Operator_ = 84, 
    Out = 85, Override = 86, Package = 87, Private = 88, Protected = 89, 
    Public = 90, Ref = 91, Return = 92, Rune = 93, Self = 94, Set = 95, 
    Sizeof = 96, Stackalloc = 97, Static = 98, Str = 99, Struct = 100, Super = 101, 
    Switch = 102, Test = 103, This = 104, Thread_local = 105, Throw = 106, 
    True_ = 107, Try = 108, Type = 109, Union = 110, Unowned = 111, Using = 112, 
    U8 = 113, U16 = 114, U32 = 115, U64 = 116, U128 = 117, Unsafe = 118, 
    Usize = 119, Version = 120, Virtual = 121, Void = 122, Volatile = 123, 
    Weak = 124, Where = 125, While = 126, Yield = 127, Not = 128, And = 129, 
    Or = 130, Identifier = 131, LeftParen = 132, RightParen = 133, LeftBracket = 134, 
    RightBracket = 135, LeftBrace = 136, RightBrace = 137, Plus = 138, Minus = 139, 
    Star = 140, DoubleStar = 141, Div = 142, Mod = 143, LifetimeAnnotation = 144, 
    Caret = 145, DoubleCaret = 146, Amp = 147, VertLine = 148, Tilde = 149, 
    Colon = 150, Assign = 151, Less = 152, Greater = 153, PlusAssign = 154, 
    MinusAssign = 155, TildeAssign = 156, StarAssign = 157, DoubleStarAssign = 158, 
    DivAssign = 159, ModAssign = 160, XorAssign = 161, AndAssign = 162, 
    OrAssign = 163, LeftShiftAssign = 164, RightShiftAssign = 165, SignedRightShiftAssign = 166, 
    Equal = 167, NotEqual = 168, IdentityEqual = 169, NotIdentityEqual = 170, 
    Spaceship = 171, LessEqual = 172, GreaterEqual = 173, PlusPlus = 174, 
    MinusMinus = 175, Comma = 176, Arrow = 177, AssignArrow = 178, EqualArrow = 179, 
    Exclamation = 180, Question = 181, DoubleQuestion = 182, DoubleQuestionAssign = 183, 
    Doublecolon = 184, Semi = 185, Dot = 186, DoubleDot = 187, DoubleDotEqual = 188, 
    Dollar = 189, Ellipsis = 190, Apostroph = 191, AtSign = 192, Op1 = 193, 
    Op2 = 194, Op10 = 195, Op3 = 196, Op4 = 197, Op5 = 198, Op7 = 199, Op6 = 200, 
    Op8 = 201, Op9 = 202, DOUBLE_CURLY_INSIDE = 203, OPEN_BRACE_INSIDE = 204, 
    REGULAR_CHAR_INSIDE = 205, VERBATIUM_DOUBLE_GRAVE_INSIDE = 206, MULTILINE_QUOTES_INSIDE = 207, 
    DOUBLE_QUOTE_INSIDE = 208, GRAVE_INSIDE = 209, TRIPLE_QUOTE_INSIDE = 210, 
    REGULAR_STRING_INSIDE = 211, GRAVE_STRING_INSIDE = 212, MULTILINE_STRING_INSIDE = 213, 
    CLOSE_BRACE_INSIDE = 214, FORMAT_STRING = 215, DOUBLE_CURLY_CLOSE_INSIDE = 216
  };

  enum {
    RuleModule = 0, RulePackageDeclaration = 1, RulePackageName = 2, RuleNestedPackageName = 3, 
    RuleModuleName = 4, RuleImportDeclaration = 5, RuleStat = 6, RuleDeclarationSeq = 7, 
    RuleDeclaration = 8, RuleSymbolSpecifierSeq = 9, RuleVersionDefinition = 10, 
    RuleExternVariableDeclaration = 11, RuleBlockDeclaration = 12, RuleMemberBlockDeclaration = 13, 
    RuleAssertDeclaration = 14, RuleAssumeDeclaration = 15, RuleUnitTestDeclaration = 16, 
    RuleLabeledStatement = 17, RuleDeclarationStatement = 18, RuleExpressionStatement = 19, 
    RuleDeclarationCompoundStatement = 20, RuleVersionConditionalDeclaration = 21, 
    RuleVersionIfDeclaration = 22, RuleVersionElseDeclaration = 23, RuleCompoundStatement = 24, 
    RuleStructDefinition = 25, RuleStructHead = 26, RuleStructMemberSpecification = 27, 
    RuleMemberDeclarationCompoundStatement = 28, RuleMemberVersionConditionalDeclaration = 29, 
    RuleMemberVersionIfDeclaration = 30, RuleMemberVersionElseDeclaration = 31, 
    RuleStructMemberDeclaration = 32, RuleClassDefinition = 33, RuleClassHead = 34, 
    RuleInterfaceDefinition = 35, RuleInterfaceHead = 36, RuleInterfaceMemberSpecification = 37, 
    RuleInterfaceMemberDeclaration = 38, RuleEnumDefinition = 39, RuleEnumHead = 40, 
    RuleEnumBase = 41, RuleEnumList = 42, RuleEnumeratorDefinition = 43, 
    RuleEnumMemberSpecification = 44, RuleEnumMemberDeclaration = 45, RuleEnumClassDefinition = 46, 
    RuleEnumClassHead = 47, RuleEnumClassList = 48, RuleClassEnumeratorDefinition = 49, 
    RuleEnumClassMemberSpecification = 50, RuleUnionDefinition = 51, RuleUnionHead = 52, 
    RuleUnionList = 53, RuleUnionEnumerator = 54, RuleUnionEnumeratorClause = 55, 
    RuleUnionMemberSpecification = 56, RuleExtensionDefinition = 57, RuleExtensionHead = 58, 
    RuleExtensionMemberSpecification = 59, RuleExtensionMemberDeclaration = 60, 
    RuleBaseClause = 61, RuleBaseSpecifierList = 62, RuleBaseSpecifier = 63, 
    RuleProperty = 64, RulePropertyBody = 65, RuleAbstractProperty = 66, 
    RuleInterfaceProperty = 67, RulePropertyGetter = 68, RulePropertySetter = 69, 
    RuleAbstractPropertyGetter = 70, RuleAbstractPropertySetter = 71, RuleExternFunctionDeclaration = 72, 
    RuleFunctionTemplateDeclaration = 73, RuleFunctionDefinition = 74, RuleAbstractMethodDeclaration = 75, 
    RuleInterfaceMethodDeclaration = 76, RuleConstructor = 77, RuleConstructorBody = 78, 
    RuleMemberInitializationList = 79, RuleDelegatingConstructorBody = 80, 
    RuleDelegatingConstructorStatement = 81, RuleMemberInitializationStatement = 82, 
    RuleDestructor = 83, RuleConversionFunction = 84, RuleIndexer = 85, 
    RuleIndexerProperty = 86, RuleIndexerGetter = 87, RuleIndexerSetter = 88, 
    RuleInterfaceIndexer = 89, RuleAssociatedTypeDeclaration = 90, RuleFunctionSpecifier = 91, 
    RuleImplicitSpecification = 92, RuleTemplateParams = 93, RuleTemplateParamDeclaration = 94, 
    RuleTemplateTypename = 95, RuleFunctionParams = 96, RuleParamDeclClause = 97, 
    RuleParamDeclList = 98, RuleParamDeclaration = 99, RuleParamSpecification = 100, 
    RuleReturnType = 101, RuleFunctionBody = 102, RuleShortFunctionBody = 103, 
    RuleExceptionSpecification = 104, RuleDeclSpecifier = 105, RuleDeclSpecifierSeq = 106, 
    RuleIdentifierSeq = 107, RuleFriendDeclaration = 108, RuleExternMethodDeclaration = 109, 
    RuleAttributeSpecifierSeq = 110, RuleAttributeSpecifier = 111, RuleAttributeArgumentClause = 112, 
    RuleSelectionStatement = 113, RuleCondition = 114, RuleElseBranch = 115, 
    RuleSwitchStatementBranch = 116, RuleDeclarator = 117, RuleInlineCppStatement = 118, 
    RuleIterationStatement = 119, RuleWhileCondition = 120, RuleDoWhileCondition = 121, 
    RuleForInitStatement = 122, RuleForRangeDeclaration = 123, RuleForRangeInitializer = 124, 
    RuleExpressionSeq = 125, RuleJumpStatement = 126, RuleSimpleDeclaration = 127, 
    RuleBitFieldDeclaration = 128, RuleDeconstructionDeclaration = 129, 
    RuleRefDeclaration = 130, RuleMemberRefDeclaration = 131, RuleSimpleMultiDeclaration = 132, 
    RuleMultiDeclaration = 133, RuleConstantDeclaration = 134, RuleForwardVarDeclaration = 135, 
    RuleAliasDeclaration = 136, RuleVersionSelectionStatement = 137, RuleVersionSelectionStatementBlock = 138, 
    RuleScopeSafeCompoundStatement = 139, RuleExpr = 140, RuleRangeExpression = 141, 
    RuleRangeExpressionStart = 142, RuleRangeExpressionEnd = 143, RuleSwitchExpression = 144, 
    RuleSwitchExpressionBranch = 145, RulePowerExpression = 146, RuleMultiplicativeExpression = 147, 
    RuleAdditiveExpression = 148, RuleShiftExpression = 149, RuleThreeWayComparisonExpression = 150, 
    RuleRelationalExpression = 151, RuleEqualityExpression = 152, RuleAndExpression = 153, 
    RuleExclusiveOrExpression = 154, RuleInclusiveOrExpression = 155, RuleLogicalAndExpression = 156, 
    RuleLogicalOrExpression = 157, RuleNullCoalescingExpression = 158, RuleNullCoalescingBranch = 159, 
    RuleConditionalExpression = 160, RuleConstantExpression = 161, RuleAssignmentExpression = 162, 
    RuleInitializerClause = 163, RuleBracedInitList = 164, RuleInitializerList = 165, 
    RuleInitializerPart = 166, RuleExpressionList = 167, RuleExpressionListPart = 168, 
    RuleConstraintClause = 169, RulePatternList = 170, RulePatternCombinationOperator = 171, 
    RulePattern = 172, RuleTypeTrait = 173, RulePropertyPattern = 174, RuleAssignmentOperator = 175, 
    RuleShiftOperator = 176, RuleTryBlock = 177, RuleExceptionHandler = 178, 
    RuleExceptionDeclaration = 179, RuleThrowExpression = 180, RuleSimpleTypeSpecifier = 181, 
    RuleFunctionTypeId = 182, RuleTypeIdWithSpecification = 183, RuleNamedTupleField = 184, 
    RuleNestedNameSpecifier = 185, RuleNamespaceName = 186, RuleTemplateName = 187, 
    RuleSimpleTemplateId = 188, RuleOperatorTemplateId = 189, RuleTemplateId = 190, 
    RuleTemplateArgumentList = 191, RuleTemplateArgument = 192, RuleIdExpression = 193, 
    RuleQualifiedId = 194, RuleUnqualifiedId = 195, RuleTheTypeId = 196, 
    RuleSingleTypeId = 197, RuleTypePostfix = 198, RuleArrayDeclarator = 199, 
    RulePointerOperator = 200, RulePointerOperatorSeq = 201, RuleTypeSpecifierSeq = 202, 
    RuleTypeSpecifier = 203, RuleTrailingTypeSpecifier = 204, RuleTypeNameSpecifier = 205, 
    RuleCvQualifierSeq = 206, RuleCvQualifier = 207, RuleTypename = 208, 
    RuleClassName = 209, RuleDecltypeSpecifier = 210, RuleDecaySpecifier = 211, 
    RuleEnumName = 212, RuleAccessSpecifier = 213, RuleProtectedInternal = 214, 
    RuleOperatorFunctionId = 215, RuleConversionFunctionId = 216, RuleUnaryExpression = 217, 
    RuleUnaryExpressionTail = 218, RuleNewExpression = 219, RuleStackallocExpression = 220, 
    RuleMemorySpaceSetter = 221, RuleNewInitializer = 222, RuleFullPostfixExpression = 223, 
    RulePostfixExpression = 224, RuleTupleExpression = 225, RuleMethodBindingExpression = 226, 
    RuleMethodOwnerExpression = 227, RuleMethodName = 228, RuleLambdaExpression = 229, 
    RuleLambdaCaptureList = 230, RuleLambdaCaptureClause = 231, RuleCapture = 232, 
    RuleLambdaDeclarator = 233, RuleLambdaBody = 234, RulePrimaryExpression = 235, 
    RuleFoldExpression = 236, RuleFoldLeftExpression = 237, RuleFoldRightExpression = 238, 
    RuleTemplateDeductionGuide = 239, RuleUnaryPrefixOperator = 240, RuleUnaryCustomOperator = 241, 
    RuleRefCaptureOperator = 242, RuleUnaryPostfixOperator = 243, RuleNot = 244, 
    RuleOperator = 245, RuleLiteral = 246, RuleInterpolatedStringLiteral = 247, 
    RuleInterpolatedRegularStringLiteral = 248, RuleInterpolatedRegularStringPart = 249, 
    RuleInterpolatedVerbatiumStringLiteral = 250, RuleInterpolatedVerbatiumStringPart = 251, 
    RuleInterpolatedMultilineStringLiteral = 252, RuleInterpolatedMultilineStringPart = 253, 
    RuleInterpolatedExpression = 254, RuleDeclvalExpression = 255
  };

  explicit CppAdvanceParser(antlr4::TokenStream *input);

  CppAdvanceParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~CppAdvanceParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ModuleContext;
  class PackageDeclarationContext;
  class PackageNameContext;
  class NestedPackageNameContext;
  class ModuleNameContext;
  class ImportDeclarationContext;
  class StatContext;
  class DeclarationSeqContext;
  class DeclarationContext;
  class SymbolSpecifierSeqContext;
  class VersionDefinitionContext;
  class ExternVariableDeclarationContext;
  class BlockDeclarationContext;
  class MemberBlockDeclarationContext;
  class AssertDeclarationContext;
  class AssumeDeclarationContext;
  class UnitTestDeclarationContext;
  class LabeledStatementContext;
  class DeclarationStatementContext;
  class ExpressionStatementContext;
  class DeclarationCompoundStatementContext;
  class VersionConditionalDeclarationContext;
  class VersionIfDeclarationContext;
  class VersionElseDeclarationContext;
  class CompoundStatementContext;
  class StructDefinitionContext;
  class StructHeadContext;
  class StructMemberSpecificationContext;
  class MemberDeclarationCompoundStatementContext;
  class MemberVersionConditionalDeclarationContext;
  class MemberVersionIfDeclarationContext;
  class MemberVersionElseDeclarationContext;
  class StructMemberDeclarationContext;
  class ClassDefinitionContext;
  class ClassHeadContext;
  class InterfaceDefinitionContext;
  class InterfaceHeadContext;
  class InterfaceMemberSpecificationContext;
  class InterfaceMemberDeclarationContext;
  class EnumDefinitionContext;
  class EnumHeadContext;
  class EnumBaseContext;
  class EnumListContext;
  class EnumeratorDefinitionContext;
  class EnumMemberSpecificationContext;
  class EnumMemberDeclarationContext;
  class EnumClassDefinitionContext;
  class EnumClassHeadContext;
  class EnumClassListContext;
  class ClassEnumeratorDefinitionContext;
  class EnumClassMemberSpecificationContext;
  class UnionDefinitionContext;
  class UnionHeadContext;
  class UnionListContext;
  class UnionEnumeratorContext;
  class UnionEnumeratorClauseContext;
  class UnionMemberSpecificationContext;
  class ExtensionDefinitionContext;
  class ExtensionHeadContext;
  class ExtensionMemberSpecificationContext;
  class ExtensionMemberDeclarationContext;
  class BaseClauseContext;
  class BaseSpecifierListContext;
  class BaseSpecifierContext;
  class PropertyContext;
  class PropertyBodyContext;
  class AbstractPropertyContext;
  class InterfacePropertyContext;
  class PropertyGetterContext;
  class PropertySetterContext;
  class AbstractPropertyGetterContext;
  class AbstractPropertySetterContext;
  class ExternFunctionDeclarationContext;
  class FunctionTemplateDeclarationContext;
  class FunctionDefinitionContext;
  class AbstractMethodDeclarationContext;
  class InterfaceMethodDeclarationContext;
  class ConstructorContext;
  class ConstructorBodyContext;
  class MemberInitializationListContext;
  class DelegatingConstructorBodyContext;
  class DelegatingConstructorStatementContext;
  class MemberInitializationStatementContext;
  class DestructorContext;
  class ConversionFunctionContext;
  class IndexerContext;
  class IndexerPropertyContext;
  class IndexerGetterContext;
  class IndexerSetterContext;
  class InterfaceIndexerContext;
  class AssociatedTypeDeclarationContext;
  class FunctionSpecifierContext;
  class ImplicitSpecificationContext;
  class TemplateParamsContext;
  class TemplateParamDeclarationContext;
  class TemplateTypenameContext;
  class FunctionParamsContext;
  class ParamDeclClauseContext;
  class ParamDeclListContext;
  class ParamDeclarationContext;
  class ParamSpecificationContext;
  class ReturnTypeContext;
  class FunctionBodyContext;
  class ShortFunctionBodyContext;
  class ExceptionSpecificationContext;
  class DeclSpecifierContext;
  class DeclSpecifierSeqContext;
  class IdentifierSeqContext;
  class FriendDeclarationContext;
  class ExternMethodDeclarationContext;
  class AttributeSpecifierSeqContext;
  class AttributeSpecifierContext;
  class AttributeArgumentClauseContext;
  class SelectionStatementContext;
  class ConditionContext;
  class ElseBranchContext;
  class SwitchStatementBranchContext;
  class DeclaratorContext;
  class InlineCppStatementContext;
  class IterationStatementContext;
  class WhileConditionContext;
  class DoWhileConditionContext;
  class ForInitStatementContext;
  class ForRangeDeclarationContext;
  class ForRangeInitializerContext;
  class ExpressionSeqContext;
  class JumpStatementContext;
  class SimpleDeclarationContext;
  class BitFieldDeclarationContext;
  class DeconstructionDeclarationContext;
  class RefDeclarationContext;
  class MemberRefDeclarationContext;
  class SimpleMultiDeclarationContext;
  class MultiDeclarationContext;
  class ConstantDeclarationContext;
  class ForwardVarDeclarationContext;
  class AliasDeclarationContext;
  class VersionSelectionStatementContext;
  class VersionSelectionStatementBlockContext;
  class ScopeSafeCompoundStatementContext;
  class ExprContext;
  class RangeExpressionContext;
  class RangeExpressionStartContext;
  class RangeExpressionEndContext;
  class SwitchExpressionContext;
  class SwitchExpressionBranchContext;
  class PowerExpressionContext;
  class MultiplicativeExpressionContext;
  class AdditiveExpressionContext;
  class ShiftExpressionContext;
  class ThreeWayComparisonExpressionContext;
  class RelationalExpressionContext;
  class EqualityExpressionContext;
  class AndExpressionContext;
  class ExclusiveOrExpressionContext;
  class InclusiveOrExpressionContext;
  class LogicalAndExpressionContext;
  class LogicalOrExpressionContext;
  class NullCoalescingExpressionContext;
  class NullCoalescingBranchContext;
  class ConditionalExpressionContext;
  class ConstantExpressionContext;
  class AssignmentExpressionContext;
  class InitializerClauseContext;
  class BracedInitListContext;
  class InitializerListContext;
  class InitializerPartContext;
  class ExpressionListContext;
  class ExpressionListPartContext;
  class ConstraintClauseContext;
  class PatternListContext;
  class PatternCombinationOperatorContext;
  class PatternContext;
  class TypeTraitContext;
  class PropertyPatternContext;
  class AssignmentOperatorContext;
  class ShiftOperatorContext;
  class TryBlockContext;
  class ExceptionHandlerContext;
  class ExceptionDeclarationContext;
  class ThrowExpressionContext;
  class SimpleTypeSpecifierContext;
  class FunctionTypeIdContext;
  class TypeIdWithSpecificationContext;
  class NamedTupleFieldContext;
  class NestedNameSpecifierContext;
  class NamespaceNameContext;
  class TemplateNameContext;
  class SimpleTemplateIdContext;
  class OperatorTemplateIdContext;
  class TemplateIdContext;
  class TemplateArgumentListContext;
  class TemplateArgumentContext;
  class IdExpressionContext;
  class QualifiedIdContext;
  class UnqualifiedIdContext;
  class TheTypeIdContext;
  class SingleTypeIdContext;
  class TypePostfixContext;
  class ArrayDeclaratorContext;
  class PointerOperatorContext;
  class PointerOperatorSeqContext;
  class TypeSpecifierSeqContext;
  class TypeSpecifierContext;
  class TrailingTypeSpecifierContext;
  class TypeNameSpecifierContext;
  class CvQualifierSeqContext;
  class CvQualifierContext;
  class TypenameContext;
  class ClassNameContext;
  class DecltypeSpecifierContext;
  class DecaySpecifierContext;
  class EnumNameContext;
  class AccessSpecifierContext;
  class ProtectedInternalContext;
  class OperatorFunctionIdContext;
  class ConversionFunctionIdContext;
  class UnaryExpressionContext;
  class UnaryExpressionTailContext;
  class NewExpressionContext;
  class StackallocExpressionContext;
  class MemorySpaceSetterContext;
  class NewInitializerContext;
  class FullPostfixExpressionContext;
  class PostfixExpressionContext;
  class TupleExpressionContext;
  class MethodBindingExpressionContext;
  class MethodOwnerExpressionContext;
  class MethodNameContext;
  class LambdaExpressionContext;
  class LambdaCaptureListContext;
  class LambdaCaptureClauseContext;
  class CaptureContext;
  class LambdaDeclaratorContext;
  class LambdaBodyContext;
  class PrimaryExpressionContext;
  class FoldExpressionContext;
  class FoldLeftExpressionContext;
  class FoldRightExpressionContext;
  class TemplateDeductionGuideContext;
  class UnaryPrefixOperatorContext;
  class UnaryCustomOperatorContext;
  class RefCaptureOperatorContext;
  class UnaryPostfixOperatorContext;
  class NotContext;
  class OperatorContext;
  class LiteralContext;
  class InterpolatedStringLiteralContext;
  class InterpolatedRegularStringLiteralContext;
  class InterpolatedRegularStringPartContext;
  class InterpolatedVerbatiumStringLiteralContext;
  class InterpolatedVerbatiumStringPartContext;
  class InterpolatedMultilineStringLiteralContext;
  class InterpolatedMultilineStringPartContext;
  class InterpolatedExpressionContext;
  class DeclvalExpressionContext; 

  class  ModuleContext : public antlr4::ParserRuleContext {
  public:
    ModuleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationSeqContext *declarationSeq();
    antlr4::tree::TerminalNode *EOF();
    PackageDeclarationContext *packageDeclaration();
    std::vector<ImportDeclarationContext *> importDeclaration();
    ImportDeclarationContext* importDeclaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ModuleContext* module();

  class  PackageDeclarationContext : public antlr4::ParserRuleContext {
  public:
    PackageDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Package();
    PackageNameContext *packageName();
    antlr4::tree::TerminalNode *Semi();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PackageDeclarationContext* packageDeclaration();

  class  PackageNameContext : public antlr4::ParserRuleContext {
  public:
    PackageNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    NestedPackageNameContext *nestedPackageName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PackageNameContext* packageName();

  class  NestedPackageNameContext : public antlr4::ParserRuleContext {
  public:
    NestedPackageNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Dot();
    NestedPackageNameContext *nestedPackageName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NestedPackageNameContext* nestedPackageName();
  NestedPackageNameContext* nestedPackageName(int precedence);
  class  ModuleNameContext : public antlr4::ParserRuleContext {
  public:
    ModuleNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    NestedPackageNameContext *nestedPackageName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ModuleNameContext* moduleName();

  class  ImportDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ImportDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Import();
    ModuleNameContext *moduleName();
    antlr4::tree::TerminalNode *Semi();
    antlr4::tree::TerminalNode *Public();
    antlr4::tree::TerminalNode *As();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *StringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ImportDeclarationContext* importDeclaration();

  class  StatContext : public antlr4::ParserRuleContext {
  public:
    StatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationStatementContext *declarationStatement();
    ExpressionStatementContext *expressionStatement();
    LabeledStatementContext *labeledStatement();
    VersionSelectionStatementContext *versionSelectionStatement();
    SelectionStatementContext *selectionStatement();
    IterationStatementContext *iterationStatement();
    JumpStatementContext *jumpStatement();
    TryBlockContext *tryBlock();
    FunctionDefinitionContext *functionDefinition();
    CompoundStatementContext *compoundStatement();
    antlr4::tree::TerminalNode *Unsafe();
    InlineCppStatementContext *inlineCppStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StatContext* stat();

  class  DeclarationSeqContext : public antlr4::ParserRuleContext {
  public:
    DeclarationSeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeclarationSeqContext* declarationSeq();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockDeclarationContext *blockDeclaration();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();
    AccessSpecifierContext *accessSpecifier();
    antlr4::tree::TerminalNode *Unsafe();
    StructDefinitionContext *structDefinition();
    ClassDefinitionContext *classDefinition();
    InterfaceDefinitionContext *interfaceDefinition();
    ExtensionDefinitionContext *extensionDefinition();
    EnumDefinitionContext *enumDefinition();
    EnumClassDefinitionContext *enumClassDefinition();
    UnionDefinitionContext *unionDefinition();
    SymbolSpecifierSeqContext *symbolSpecifierSeq();
    DeclarationCompoundStatementContext *declarationCompoundStatement();
    ExternVariableDeclarationContext *externVariableDeclaration();
    VersionDefinitionContext *versionDefinition();
    VersionConditionalDeclarationContext *versionConditionalDeclaration();
    FunctionDefinitionContext *functionDefinition();
    FunctionTemplateDeclarationContext *functionTemplateDeclaration();
    ExternFunctionDeclarationContext *externFunctionDeclaration();
    TemplateDeductionGuideContext *templateDeductionGuide();
    UnitTestDeclarationContext *unitTestDeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeclarationContext* declaration();

  class  SymbolSpecifierSeqContext : public antlr4::ParserRuleContext {
  public:
    SymbolSpecifierSeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AccessSpecifierContext *accessSpecifier();
    antlr4::tree::TerminalNode *Unsafe();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SymbolSpecifierSeqContext* symbolSpecifierSeq();

  class  VersionDefinitionContext : public antlr4::ParserRuleContext {
  public:
    VersionDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Version();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Semi();
    AccessSpecifierContext *accessSpecifier();
    antlr4::tree::TerminalNode *Assign();
    antlr4::tree::TerminalNode *IntegerLiteral();
    antlr4::tree::TerminalNode *BooleanLiteral();
    antlr4::tree::TerminalNode *Default();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VersionDefinitionContext* versionDefinition();

  class  ExternVariableDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ExternVariableDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Extern();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Colon();
    TheTypeIdContext *theTypeId();
    antlr4::tree::TerminalNode *Semi();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExternVariableDeclarationContext* externVariableDeclaration();

  class  BlockDeclarationContext : public antlr4::ParserRuleContext {
  public:
    BlockDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleDeclarationContext *simpleDeclaration();
    SimpleMultiDeclarationContext *simpleMultiDeclaration();
    DeconstructionDeclarationContext *deconstructionDeclaration();
    RefDeclarationContext *refDeclaration();
    MultiDeclarationContext *multiDeclaration();
    ConstantDeclarationContext *constantDeclaration();
    ForwardVarDeclarationContext *forwardVarDeclaration();
    AliasDeclarationContext *aliasDeclaration();
    AssertDeclarationContext *assertDeclaration();
    AssumeDeclarationContext *assumeDeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BlockDeclarationContext* blockDeclaration();

  class  MemberBlockDeclarationContext : public antlr4::ParserRuleContext {
  public:
    MemberBlockDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleDeclarationContext *simpleDeclaration();
    SimpleMultiDeclarationContext *simpleMultiDeclaration();
    BitFieldDeclarationContext *bitFieldDeclaration();
    MemberRefDeclarationContext *memberRefDeclaration();
    ConstantDeclarationContext *constantDeclaration();
    AliasDeclarationContext *aliasDeclaration();
    AssertDeclarationContext *assertDeclaration();
    AssumeDeclarationContext *assumeDeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MemberBlockDeclarationContext* memberBlockDeclaration();

  class  AssertDeclarationContext : public antlr4::ParserRuleContext {
  public:
    AssertDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Assert();
    antlr4::tree::TerminalNode *LeftParen();
    std::vector<ConditionalExpressionContext *> conditionalExpression();
    ConditionalExpressionContext* conditionalExpression(size_t i);
    antlr4::tree::TerminalNode *Comma();
    antlr4::tree::TerminalNode *RightParen();
    antlr4::tree::TerminalNode *Semi();
    ConstantExpressionContext *constantExpression();
    antlr4::tree::TerminalNode *StringLiteral();
    antlr4::tree::TerminalNode *Static();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssertDeclarationContext* assertDeclaration();

  class  AssumeDeclarationContext : public antlr4::ParserRuleContext {
  public:
    AssumeDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Assume();
    ConditionalExpressionContext *conditionalExpression();
    antlr4::tree::TerminalNode *Semi();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssumeDeclarationContext* assumeDeclaration();

  class  UnitTestDeclarationContext : public antlr4::ParserRuleContext {
  public:
    UnitTestDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Test();
    CompoundStatementContext *compoundStatement();
    antlr4::tree::TerminalNode *StringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UnitTestDeclarationContext* unitTestDeclaration();

  class  LabeledStatementContext : public antlr4::ParserRuleContext {
  public:
    LabeledStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Colon();
    IterationStatementContext *iterationStatement();
    SelectionStatementContext *selectionStatement();
    CompoundStatementContext *compoundStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LabeledStatementContext* labeledStatement();

  class  DeclarationStatementContext : public antlr4::ParserRuleContext {
  public:
    DeclarationStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockDeclarationContext *blockDeclaration();
    StructDefinitionContext *structDefinition();
    ExternVariableDeclarationContext *externVariableDeclaration();
    ExternFunctionDeclarationContext *externFunctionDeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeclarationStatementContext* declarationStatement();

  class  ExpressionStatementContext : public antlr4::ParserRuleContext {
  public:
    ExpressionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Semi();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpressionStatementContext* expressionStatement();

  class  DeclarationCompoundStatementContext : public antlr4::ParserRuleContext {
  public:
    DeclarationCompoundStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeclarationCompoundStatementContext* declarationCompoundStatement();

  class  VersionConditionalDeclarationContext : public antlr4::ParserRuleContext {
  public:
    VersionConditionalDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    VersionIfDeclarationContext *versionIfDeclaration();
    antlr4::tree::TerminalNode *Version();
    antlr4::tree::TerminalNode *LeftParen();
    ConditionContext *condition();
    antlr4::tree::TerminalNode *RightParen();
    antlr4::tree::TerminalNode *Debug();
    antlr4::tree::TerminalNode *Else();
    VersionElseDeclarationContext *versionElseDeclaration();
    NotContext *not_();
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VersionConditionalDeclarationContext* versionConditionalDeclaration();

  class  VersionIfDeclarationContext : public antlr4::ParserRuleContext {
  public:
    VersionIfDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationContext *declaration();
    DeclarationCompoundStatementContext *declarationCompoundStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VersionIfDeclarationContext* versionIfDeclaration();

  class  VersionElseDeclarationContext : public antlr4::ParserRuleContext {
  public:
    VersionElseDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationContext *declaration();
    DeclarationCompoundStatementContext *declarationCompoundStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VersionElseDeclarationContext* versionElseDeclaration();

  class  CompoundStatementContext : public antlr4::ParserRuleContext {
  public:
    CompoundStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    std::vector<StatContext *> stat();
    StatContext* stat(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CompoundStatementContext* compoundStatement();

  class  StructDefinitionContext : public antlr4::ParserRuleContext {
  public:
    StructDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StructHeadContext *structHead();
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    StructMemberSpecificationContext *structMemberSpecification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StructDefinitionContext* structDefinition();

  class  StructHeadContext : public antlr4::ParserRuleContext {
  public:
    StructHeadContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Struct();
    ClassNameContext *className();
    antlr4::tree::TerminalNode *Unsafe();
    TemplateParamsContext *templateParams();
    BaseClauseContext *baseClause();
    ConstraintClauseContext *constraintClause();
    antlr4::tree::TerminalNode *Ref();
    antlr4::tree::TerminalNode *Union();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StructHeadContext* structHead();

  class  StructMemberSpecificationContext : public antlr4::ParserRuleContext {
  public:
    StructMemberSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StructMemberDeclarationContext *> structMemberDeclaration();
    StructMemberDeclarationContext* structMemberDeclaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StructMemberSpecificationContext* structMemberSpecification();

  class  MemberDeclarationCompoundStatementContext : public antlr4::ParserRuleContext {
  public:
    MemberDeclarationCompoundStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    std::vector<StructMemberDeclarationContext *> structMemberDeclaration();
    StructMemberDeclarationContext* structMemberDeclaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MemberDeclarationCompoundStatementContext* memberDeclarationCompoundStatement();

  class  MemberVersionConditionalDeclarationContext : public antlr4::ParserRuleContext {
  public:
    MemberVersionConditionalDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    MemberVersionIfDeclarationContext *memberVersionIfDeclaration();
    antlr4::tree::TerminalNode *Version();
    antlr4::tree::TerminalNode *LeftParen();
    ConditionContext *condition();
    antlr4::tree::TerminalNode *RightParen();
    antlr4::tree::TerminalNode *Debug();
    antlr4::tree::TerminalNode *Else();
    MemberVersionElseDeclarationContext *memberVersionElseDeclaration();
    NotContext *not_();
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MemberVersionConditionalDeclarationContext* memberVersionConditionalDeclaration();

  class  MemberVersionIfDeclarationContext : public antlr4::ParserRuleContext {
  public:
    MemberVersionIfDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StructMemberDeclarationContext *structMemberDeclaration();
    MemberDeclarationCompoundStatementContext *memberDeclarationCompoundStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MemberVersionIfDeclarationContext* memberVersionIfDeclaration();

  class  MemberVersionElseDeclarationContext : public antlr4::ParserRuleContext {
  public:
    MemberVersionElseDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StructMemberDeclarationContext *structMemberDeclaration();
    MemberDeclarationCompoundStatementContext *memberDeclarationCompoundStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MemberVersionElseDeclarationContext* memberVersionElseDeclaration();

  class  StructMemberDeclarationContext : public antlr4::ParserRuleContext {
  public:
    StructMemberDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MemberBlockDeclarationContext *memberBlockDeclaration();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();
    AccessSpecifierContext *accessSpecifier();
    ProtectedInternalContext *protectedInternal();
    StructDefinitionContext *structDefinition();
    ClassDefinitionContext *classDefinition();
    EnumDefinitionContext *enumDefinition();
    EnumClassDefinitionContext *enumClassDefinition();
    UnionDefinitionContext *unionDefinition();
    SymbolSpecifierSeqContext *symbolSpecifierSeq();
    MemberDeclarationCompoundStatementContext *memberDeclarationCompoundStatement();
    MemberVersionConditionalDeclarationContext *memberVersionConditionalDeclaration();
    FunctionDefinitionContext *functionDefinition();
    ConstructorContext *constructor();
    ConversionFunctionContext *conversionFunction();
    IndexerContext *indexer();
    PropertyContext *property();
    FunctionTemplateDeclarationContext *functionTemplateDeclaration();
    AbstractMethodDeclarationContext *abstractMethodDeclaration();
    AbstractPropertyContext *abstractProperty();
    FriendDeclarationContext *friendDeclaration();
    ExternMethodDeclarationContext *externMethodDeclaration();
    DestructorContext *destructor();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StructMemberDeclarationContext* structMemberDeclaration();

  class  ClassDefinitionContext : public antlr4::ParserRuleContext {
  public:
    ClassDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassHeadContext *classHead();
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    StructMemberSpecificationContext *structMemberSpecification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassDefinitionContext* classDefinition();

  class  ClassHeadContext : public antlr4::ParserRuleContext {
  public:
    ClassHeadContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Class();
    ClassNameContext *className();
    antlr4::tree::TerminalNode *Unsafe();
    TemplateParamsContext *templateParams();
    BaseClauseContext *baseClause();
    ConstraintClauseContext *constraintClause();
    antlr4::tree::TerminalNode *Abstract();
    antlr4::tree::TerminalNode *Final();
    antlr4::tree::TerminalNode *Static();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassHeadContext* classHead();

  class  InterfaceDefinitionContext : public antlr4::ParserRuleContext {
  public:
    InterfaceDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InterfaceHeadContext *interfaceHead();
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    InterfaceMemberSpecificationContext *interfaceMemberSpecification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InterfaceDefinitionContext* interfaceDefinition();

  class  InterfaceHeadContext : public antlr4::ParserRuleContext {
  public:
    InterfaceHeadContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Interface();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Unsafe();
    TemplateParamsContext *templateParams();
    BaseClauseContext *baseClause();
    ConstraintClauseContext *constraintClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InterfaceHeadContext* interfaceHead();

  class  InterfaceMemberSpecificationContext : public antlr4::ParserRuleContext {
  public:
    InterfaceMemberSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<InterfaceMemberDeclarationContext *> interfaceMemberDeclaration();
    InterfaceMemberDeclarationContext* interfaceMemberDeclaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InterfaceMemberSpecificationContext* interfaceMemberSpecification();

  class  InterfaceMemberDeclarationContext : public antlr4::ParserRuleContext {
  public:
    InterfaceMemberDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionDefinitionContext *functionDefinition();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();
    InterfaceMethodDeclarationContext *interfaceMethodDeclaration();
    InterfaceIndexerContext *interfaceIndexer();
    InterfacePropertyContext *interfaceProperty();
    ConstantDeclarationContext *constantDeclaration();
    AliasDeclarationContext *aliasDeclaration();
    AssociatedTypeDeclarationContext *associatedTypeDeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InterfaceMemberDeclarationContext* interfaceMemberDeclaration();

  class  EnumDefinitionContext : public antlr4::ParserRuleContext {
  public:
    EnumDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EnumHeadContext *enumHead();
    antlr4::tree::TerminalNode *LeftBrace();
    EnumListContext *enumList();
    antlr4::tree::TerminalNode *RightBrace();
    EnumMemberSpecificationContext *enumMemberSpecification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumDefinitionContext* enumDefinition();

  class  EnumHeadContext : public antlr4::ParserRuleContext {
  public:
    EnumHeadContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Enum();
    antlr4::tree::TerminalNode *Identifier();
    EnumBaseContext *enumBase();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumHeadContext* enumHead();

  class  EnumBaseContext : public antlr4::ParserRuleContext {
  public:
    EnumBaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Colon();
    SimpleTypeSpecifierContext *simpleTypeSpecifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumBaseContext* enumBase();

  class  EnumListContext : public antlr4::ParserRuleContext {
  public:
    EnumListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<EnumeratorDefinitionContext *> enumeratorDefinition();
    EnumeratorDefinitionContext* enumeratorDefinition(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumListContext* enumList();

  class  EnumeratorDefinitionContext : public antlr4::ParserRuleContext {
  public:
    EnumeratorDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();
    antlr4::tree::TerminalNode *Assign();
    ConstantExpressionContext *constantExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumeratorDefinitionContext* enumeratorDefinition();

  class  EnumMemberSpecificationContext : public antlr4::ParserRuleContext {
  public:
    EnumMemberSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Semi();
    std::vector<EnumMemberDeclarationContext *> enumMemberDeclaration();
    EnumMemberDeclarationContext* enumMemberDeclaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumMemberSpecificationContext* enumMemberSpecification();

  class  EnumMemberDeclarationContext : public antlr4::ParserRuleContext {
  public:
    EnumMemberDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionDefinitionContext *functionDefinition();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();
    AccessSpecifierContext *accessSpecifier();
    PropertyContext *property();
    FriendDeclarationContext *friendDeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumMemberDeclarationContext* enumMemberDeclaration();

  class  EnumClassDefinitionContext : public antlr4::ParserRuleContext {
  public:
    EnumClassDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EnumClassHeadContext *enumClassHead();
    antlr4::tree::TerminalNode *LeftBrace();
    EnumClassListContext *enumClassList();
    antlr4::tree::TerminalNode *RightBrace();
    EnumClassMemberSpecificationContext *enumClassMemberSpecification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumClassDefinitionContext* enumClassDefinition();

  class  EnumClassHeadContext : public antlr4::ParserRuleContext {
  public:
    EnumClassHeadContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Enum();
    antlr4::tree::TerminalNode *Class();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Unsafe();
    BaseClauseContext *baseClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumClassHeadContext* enumClassHead();

  class  EnumClassListContext : public antlr4::ParserRuleContext {
  public:
    EnumClassListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ClassEnumeratorDefinitionContext *> classEnumeratorDefinition();
    ClassEnumeratorDefinitionContext* classEnumeratorDefinition(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumClassListContext* enumClassList();

  class  ClassEnumeratorDefinitionContext : public antlr4::ParserRuleContext {
  public:
    ClassEnumeratorDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();
    antlr4::tree::TerminalNode *LeftParen();
    ExpressionListContext *expressionList();
    antlr4::tree::TerminalNode *RightParen();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassEnumeratorDefinitionContext* classEnumeratorDefinition();

  class  EnumClassMemberSpecificationContext : public antlr4::ParserRuleContext {
  public:
    EnumClassMemberSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Semi();
    std::vector<StructMemberDeclarationContext *> structMemberDeclaration();
    StructMemberDeclarationContext* structMemberDeclaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumClassMemberSpecificationContext* enumClassMemberSpecification();

  class  UnionDefinitionContext : public antlr4::ParserRuleContext {
  public:
    UnionDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnionHeadContext *unionHead();
    antlr4::tree::TerminalNode *LeftBrace();
    UnionListContext *unionList();
    antlr4::tree::TerminalNode *RightBrace();
    UnionMemberSpecificationContext *unionMemberSpecification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UnionDefinitionContext* unionDefinition();

  class  UnionHeadContext : public antlr4::ParserRuleContext {
  public:
    UnionHeadContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Union();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Unsafe();
    TemplateParamsContext *templateParams();
    BaseClauseContext *baseClause();
    ConstraintClauseContext *constraintClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UnionHeadContext* unionHead();

  class  UnionListContext : public antlr4::ParserRuleContext {
  public:
    UnionListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<UnionEnumeratorContext *> unionEnumerator();
    UnionEnumeratorContext* unionEnumerator(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UnionListContext* unionList();

  class  UnionEnumeratorContext : public antlr4::ParserRuleContext {
  public:
    UnionEnumeratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();
    antlr4::tree::TerminalNode *LeftParen();
    UnionEnumeratorClauseContext *unionEnumeratorClause();
    antlr4::tree::TerminalNode *RightParen();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UnionEnumeratorContext* unionEnumerator();

  class  UnionEnumeratorClauseContext : public antlr4::ParserRuleContext {
  public:
    UnionEnumeratorClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TheTypeIdContext *> theTypeId();
    TheTypeIdContext* theTypeId(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Colon();
    antlr4::tree::TerminalNode* Colon(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UnionEnumeratorClauseContext* unionEnumeratorClause();

  class  UnionMemberSpecificationContext : public antlr4::ParserRuleContext {
  public:
    UnionMemberSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Semi();
    std::vector<EnumMemberDeclarationContext *> enumMemberDeclaration();
    EnumMemberDeclarationContext* enumMemberDeclaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UnionMemberSpecificationContext* unionMemberSpecification();

  class  ExtensionDefinitionContext : public antlr4::ParserRuleContext {
  public:
    ExtensionDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExtensionHeadContext *extensionHead();
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    ExtensionMemberSpecificationContext *extensionMemberSpecification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExtensionDefinitionContext* extensionDefinition();

  class  ExtensionHeadContext : public antlr4::ParserRuleContext {
  public:
    ExtensionHeadContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Extension();
    TemplateParamsContext *templateParams();
    TheTypeIdContext *theTypeId();
    antlr4::tree::TerminalNode *Unsafe();
    ConstraintClauseContext *constraintClause();
    BaseClauseContext *baseClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExtensionHeadContext* extensionHead();

  class  ExtensionMemberSpecificationContext : public antlr4::ParserRuleContext {
  public:
    ExtensionMemberSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExtensionMemberDeclarationContext *> extensionMemberDeclaration();
    ExtensionMemberDeclarationContext* extensionMemberDeclaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExtensionMemberSpecificationContext* extensionMemberSpecification();

  class  ExtensionMemberDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ExtensionMemberDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionDefinitionContext *functionDefinition();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();
    ConstructorContext *constructor();
    IndexerContext *indexer();
    PropertyContext *property();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExtensionMemberDeclarationContext* extensionMemberDeclaration();

  class  BaseClauseContext : public antlr4::ParserRuleContext {
  public:
    BaseClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Colon();
    BaseSpecifierListContext *baseSpecifierList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BaseClauseContext* baseClause();

  class  BaseSpecifierListContext : public antlr4::ParserRuleContext {
  public:
    BaseSpecifierListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<BaseSpecifierContext *> baseSpecifier();
    BaseSpecifierContext* baseSpecifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BaseSpecifierListContext* baseSpecifierList();

  class  BaseSpecifierContext : public antlr4::ParserRuleContext {
  public:
    BaseSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassNameContext *className();
    NestedNameSpecifierContext *nestedNameSpecifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BaseSpecifierContext* baseSpecifier();

  class  PropertyContext : public antlr4::ParserRuleContext {
  public:
    PropertyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Colon();
    TheTypeIdContext *theTypeId();
    FunctionBodyContext *functionBody();
    ShortFunctionBodyContext *shortFunctionBody();
    PropertyBodyContext *propertyBody();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();
    AccessSpecifierContext *accessSpecifier();
    antlr4::tree::TerminalNode *Unsafe();
    antlr4::tree::TerminalNode *Const();
    antlr4::tree::TerminalNode *Ref();
    antlr4::tree::TerminalNode *Static();
    antlr4::tree::TerminalNode *Virtual();
    antlr4::tree::TerminalNode *Override();
    antlr4::tree::TerminalNode *Final();
    antlr4::tree::TerminalNode *Assign();
    InitializerClauseContext *initializerClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PropertyContext* property();

  class  PropertyBodyContext : public antlr4::ParserRuleContext {
  public:
    PropertyBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    PropertyGetterContext *propertyGetter();
    PropertySetterContext *propertySetter();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PropertyBodyContext* propertyBody();

  class  AbstractPropertyContext : public antlr4::ParserRuleContext {
  public:
    AbstractPropertyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Abstract();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Colon();
    TheTypeIdContext *theTypeId();
    PropertyBodyContext *propertyBody();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();
    AccessSpecifierContext *accessSpecifier();
    antlr4::tree::TerminalNode *Const();
    antlr4::tree::TerminalNode *Ref();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AbstractPropertyContext* abstractProperty();

  class  InterfacePropertyContext : public antlr4::ParserRuleContext {
  public:
    InterfacePropertyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Colon();
    TheTypeIdContext *theTypeId();
    PropertyBodyContext *propertyBody();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();
    antlr4::tree::TerminalNode *Const();
    antlr4::tree::TerminalNode *Ref();
    antlr4::tree::TerminalNode *Static();
    antlr4::tree::TerminalNode *Semi();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InterfacePropertyContext* interfaceProperty();

  class  PropertyGetterContext : public antlr4::ParserRuleContext {
  public:
    PropertyGetterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Get();
    FunctionBodyContext *functionBody();
    ShortFunctionBodyContext *shortFunctionBody();
    antlr4::tree::TerminalNode *Semi();
    AccessSpecifierContext *accessSpecifier();
    ProtectedInternalContext *protectedInternal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PropertyGetterContext* propertyGetter();

  class  PropertySetterContext : public antlr4::ParserRuleContext {
  public:
    PropertySetterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Set();
    FunctionBodyContext *functionBody();
    ShortFunctionBodyContext *shortFunctionBody();
    antlr4::tree::TerminalNode *Semi();
    AccessSpecifierContext *accessSpecifier();
    ProtectedInternalContext *protectedInternal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PropertySetterContext* propertySetter();

  class  AbstractPropertyGetterContext : public antlr4::ParserRuleContext {
  public:
    AbstractPropertyGetterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Get();
    antlr4::tree::TerminalNode *Semi();
    AccessSpecifierContext *accessSpecifier();
    ProtectedInternalContext *protectedInternal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AbstractPropertyGetterContext* abstractPropertyGetter();

  class  AbstractPropertySetterContext : public antlr4::ParserRuleContext {
  public:
    AbstractPropertySetterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Set();
    antlr4::tree::TerminalNode *Semi();
    AccessSpecifierContext *accessSpecifier();
    ProtectedInternalContext *protectedInternal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AbstractPropertySetterContext* abstractPropertySetter();

  class  ExternFunctionDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ExternFunctionDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Extern();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Colon();
    FunctionParamsContext *functionParams();
    ReturnTypeContext *returnType();
    antlr4::tree::TerminalNode *Semi();
    antlr4::tree::TerminalNode *Unsafe();
    antlr4::tree::TerminalNode *LifetimeAnnotation();
    ExceptionSpecificationContext *exceptionSpecification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExternFunctionDeclarationContext* externFunctionDeclaration();

  class  FunctionTemplateDeclarationContext : public antlr4::ParserRuleContext {
  public:
    FunctionTemplateDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Colon();
    TemplateParamsContext *templateParams();
    FunctionParamsContext *functionParams();
    antlr4::tree::TerminalNode *Semi();
    std::vector<FunctionSpecifierContext *> functionSpecifier();
    FunctionSpecifierContext* functionSpecifier(size_t i);
    ReturnTypeContext *returnType();
    antlr4::tree::TerminalNode *LifetimeAnnotation();
    ExceptionSpecificationContext *exceptionSpecification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionTemplateDeclarationContext* functionTemplateDeclaration();

  class  FunctionDefinitionContext : public antlr4::ParserRuleContext {
  public:
    FunctionDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Colon();
    FunctionParamsContext *functionParams();
    antlr4::tree::TerminalNode *Identifier();
    SimpleTemplateIdContext *simpleTemplateId();
    OperatorFunctionIdContext *operatorFunctionId();
    FunctionBodyContext *functionBody();
    ShortFunctionBodyContext *shortFunctionBody();
    std::vector<FunctionSpecifierContext *> functionSpecifier();
    FunctionSpecifierContext* functionSpecifier(size_t i);
    TemplateParamsContext *templateParams();
    ReturnTypeContext *returnType();
    antlr4::tree::TerminalNode *LifetimeAnnotation();
    ExceptionSpecificationContext *exceptionSpecification();
    ConstraintClauseContext *constraintClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionDefinitionContext* functionDefinition();

  class  AbstractMethodDeclarationContext : public antlr4::ParserRuleContext {
  public:
    AbstractMethodDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Abstract();
    antlr4::tree::TerminalNode *Colon();
    FunctionParamsContext *functionParams();
    antlr4::tree::TerminalNode *Semi();
    antlr4::tree::TerminalNode *Identifier();
    OperatorFunctionIdContext *operatorFunctionId();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();
    AccessSpecifierContext *accessSpecifier();
    ProtectedInternalContext *protectedInternal();
    antlr4::tree::TerminalNode *Mutable();
    ReturnTypeContext *returnType();
    antlr4::tree::TerminalNode *LifetimeAnnotation();
    ExceptionSpecificationContext *exceptionSpecification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AbstractMethodDeclarationContext* abstractMethodDeclaration();

  class  InterfaceMethodDeclarationContext : public antlr4::ParserRuleContext {
  public:
    InterfaceMethodDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Colon();
    FunctionParamsContext *functionParams();
    antlr4::tree::TerminalNode *Semi();
    antlr4::tree::TerminalNode *Identifier();
    OperatorFunctionIdContext *operatorFunctionId();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();
    antlr4::tree::TerminalNode *Static();
    ReturnTypeContext *returnType();
    antlr4::tree::TerminalNode *LifetimeAnnotation();
    ExceptionSpecificationContext *exceptionSpecification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InterfaceMethodDeclarationContext* interfaceMethodDeclaration();

  class  ConstructorContext : public antlr4::ParserRuleContext {
  public:
    ConstructorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *This();
    FunctionParamsContext *functionParams();
    ConstructorBodyContext *constructorBody();
    DelegatingConstructorBodyContext *delegatingConstructorBody();
    antlr4::tree::TerminalNode *Inline();
    antlr4::tree::TerminalNode *Unsafe();
    ImplicitSpecificationContext *implicitSpecification();
    TemplateParamsContext *templateParams();
    ExceptionSpecificationContext *exceptionSpecification();
    ConstraintClauseContext *constraintClause();
    antlr4::tree::TerminalNode *Default();
    antlr4::tree::TerminalNode *Semi();
    antlr4::tree::TerminalNode *Assign();
    antlr4::tree::TerminalNode *Equal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstructorContext* constructor();

  class  ConstructorBodyContext : public antlr4::ParserRuleContext {
  public:
    ConstructorBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    DelegatingConstructorStatementContext *delegatingConstructorStatement();
    MemberInitializationListContext *memberInitializationList();
    std::vector<StatContext *> stat();
    StatContext* stat(size_t i);
    antlr4::tree::TerminalNode *Assign();
    antlr4::tree::TerminalNode *Equal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstructorBodyContext* constructorBody();

  class  MemberInitializationListContext : public antlr4::ParserRuleContext {
  public:
    MemberInitializationListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<MemberInitializationStatementContext *> memberInitializationStatement();
    MemberInitializationStatementContext* memberInitializationStatement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MemberInitializationListContext* memberInitializationList();

  class  DelegatingConstructorBodyContext : public antlr4::ParserRuleContext {
  public:
    DelegatingConstructorBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AssignArrow();
    antlr4::tree::TerminalNode *EqualArrow();
    DelegatingConstructorStatementContext *delegatingConstructorStatement();
    MemberInitializationStatementContext *memberInitializationStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DelegatingConstructorBodyContext* delegatingConstructorBody();

  class  DelegatingConstructorStatementContext : public antlr4::ParserRuleContext {
  public:
    DelegatingConstructorStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    antlr4::tree::TerminalNode *Semi();
    antlr4::tree::TerminalNode *This();
    antlr4::tree::TerminalNode *Super();
    ExpressionListContext *expressionList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DelegatingConstructorStatementContext* delegatingConstructorStatement();

  class  MemberInitializationStatementContext : public antlr4::ParserRuleContext {
  public:
    MemberInitializationStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Assign();
    InitializerClauseContext *initializerClause();
    antlr4::tree::TerminalNode *Semi();
    antlr4::tree::TerminalNode *This();
    antlr4::tree::TerminalNode *Dot();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MemberInitializationStatementContext* memberInitializationStatement();

  class  DestructorContext : public antlr4::ParserRuleContext {
  public:
    DestructorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Tilde();
    antlr4::tree::TerminalNode *This();
    FunctionBodyContext *functionBody();
    ShortFunctionBodyContext *shortFunctionBody();
    antlr4::tree::TerminalNode *Inline();
    ExceptionSpecificationContext *exceptionSpecification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DestructorContext* destructor();

  class  ConversionFunctionContext : public antlr4::ParserRuleContext {
  public:
    ConversionFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConversionFunctionIdContext *conversionFunctionId();
    FunctionBodyContext *functionBody();
    ShortFunctionBodyContext *shortFunctionBody();
    std::vector<FunctionSpecifierContext *> functionSpecifier();
    FunctionSpecifierContext* functionSpecifier(size_t i);
    ImplicitSpecificationContext *implicitSpecification();
    TemplateParamsContext *templateParams();
    ExceptionSpecificationContext *exceptionSpecification();
    ConstraintClauseContext *constraintClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConversionFunctionContext* conversionFunction();

  class  IndexerContext : public antlr4::ParserRuleContext {
  public:
    IndexerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *This();
    antlr4::tree::TerminalNode *LeftBracket();
    ParamDeclClauseContext *paramDeclClause();
    antlr4::tree::TerminalNode *RightBracket();
    ReturnTypeContext *returnType();
    FunctionBodyContext *functionBody();
    ShortFunctionBodyContext *shortFunctionBody();
    IndexerPropertyContext *indexerProperty();
    std::vector<FunctionSpecifierContext *> functionSpecifier();
    FunctionSpecifierContext* functionSpecifier(size_t i);
    TemplateParamsContext *templateParams();
    ExceptionSpecificationContext *exceptionSpecification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IndexerContext* indexer();

  class  IndexerPropertyContext : public antlr4::ParserRuleContext {
  public:
    IndexerPropertyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBrace();
    IndexerGetterContext *indexerGetter();
    IndexerSetterContext *indexerSetter();
    antlr4::tree::TerminalNode *RightBrace();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IndexerPropertyContext* indexerProperty();

  class  IndexerGetterContext : public antlr4::ParserRuleContext {
  public:
    IndexerGetterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Get();
    FunctionBodyContext *functionBody();
    ShortFunctionBodyContext *shortFunctionBody();
    AccessSpecifierContext *accessSpecifier();
    ProtectedInternalContext *protectedInternal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IndexerGetterContext* indexerGetter();

  class  IndexerSetterContext : public antlr4::ParserRuleContext {
  public:
    IndexerSetterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Set();
    FunctionBodyContext *functionBody();
    ShortFunctionBodyContext *shortFunctionBody();
    AccessSpecifierContext *accessSpecifier();
    ProtectedInternalContext *protectedInternal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IndexerSetterContext* indexerSetter();

  class  InterfaceIndexerContext : public antlr4::ParserRuleContext {
  public:
    InterfaceIndexerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *This();
    antlr4::tree::TerminalNode *LeftBracket();
    ParamDeclClauseContext *paramDeclClause();
    antlr4::tree::TerminalNode *RightBracket();
    ReturnTypeContext *returnType();
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *Get();
    std::vector<antlr4::tree::TerminalNode *> Semi();
    antlr4::tree::TerminalNode* Semi(size_t i);
    antlr4::tree::TerminalNode *RightBrace();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();
    ExceptionSpecificationContext *exceptionSpecification();
    antlr4::tree::TerminalNode *Set();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InterfaceIndexerContext* interfaceIndexer();

  class  AssociatedTypeDeclarationContext : public antlr4::ParserRuleContext {
  public:
    AssociatedTypeDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Type();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Semi();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssociatedTypeDeclarationContext* associatedTypeDeclaration();

  class  FunctionSpecifierContext : public antlr4::ParserRuleContext {
  public:
    FunctionSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Inline();
    antlr4::tree::TerminalNode *Unsafe();
    antlr4::tree::TerminalNode *Consteval();
    antlr4::tree::TerminalNode *Mutable();
    antlr4::tree::TerminalNode *Static();
    antlr4::tree::TerminalNode *Virtual();
    antlr4::tree::TerminalNode *Override();
    antlr4::tree::TerminalNode *Final();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionSpecifierContext* functionSpecifier();

  class  ImplicitSpecificationContext : public antlr4::ParserRuleContext {
  public:
    ImplicitSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Implicit();
    antlr4::tree::TerminalNode *LeftParen();
    ConstantExpressionContext *constantExpression();
    antlr4::tree::TerminalNode *RightParen();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ImplicitSpecificationContext* implicitSpecification();

  class  TemplateParamsContext : public antlr4::ParserRuleContext {
  public:
    TemplateParamsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Less();
    std::vector<TemplateParamDeclarationContext *> templateParamDeclaration();
    TemplateParamDeclarationContext* templateParamDeclaration(size_t i);
    antlr4::tree::TerminalNode *Greater();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TemplateParamsContext* templateParams();

  class  TemplateParamDeclarationContext : public antlr4::ParserRuleContext {
  public:
    TemplateParamDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    TemplateParamsContext *templateParams();
    antlr4::tree::TerminalNode *Ellipsis();
    antlr4::tree::TerminalNode *Colon();
    antlr4::tree::TerminalNode *In();
    antlr4::tree::TerminalNode *Out();
    TemplateTypenameContext *templateTypename();
    antlr4::tree::TerminalNode *Assign();
    TheTypeIdContext *theTypeId();
    ConditionalExpressionContext *conditionalExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TemplateParamDeclarationContext* templateParamDeclaration();

  class  TemplateTypenameContext : public antlr4::ParserRuleContext {
  public:
    TemplateTypenameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Type();
    TheTypeIdContext *theTypeId();
    antlr4::tree::TerminalNode *Is();
    antlr4::tree::TerminalNode *Identifier();
    SimpleTemplateIdContext *simpleTemplateId();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TemplateTypenameContext* templateTypename();

  class  FunctionParamsContext : public antlr4::ParserRuleContext {
  public:
    FunctionParamsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    ParamDeclClauseContext *paramDeclClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionParamsContext* functionParams();

  class  ParamDeclClauseContext : public antlr4::ParserRuleContext {
  public:
    ParamDeclClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParamDeclListContext *paramDeclList();
    antlr4::tree::TerminalNode *Ellipsis();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ParamDeclClauseContext* paramDeclClause();

  class  ParamDeclListContext : public antlr4::ParserRuleContext {
  public:
    ParamDeclListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ParamDeclarationContext *> paramDeclaration();
    ParamDeclarationContext* paramDeclaration(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ParamDeclListContext* paramDeclList();

  class  ParamDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ParamDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();
    ParamSpecificationContext *paramSpecification();
    antlr4::tree::TerminalNode *Colon();
    TheTypeIdContext *theTypeId();
    antlr4::tree::TerminalNode *Assign();
    InitializerClauseContext *initializerClause();
    antlr4::tree::TerminalNode *LifetimeAnnotation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ParamDeclarationContext* paramDeclaration();

  class  ParamSpecificationContext : public antlr4::ParserRuleContext {
  public:
    ParamSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Move();
    antlr4::tree::TerminalNode *Forward();
    antlr4::tree::TerminalNode *In();
    antlr4::tree::TerminalNode *Inout();
    antlr4::tree::TerminalNode *Out();
    antlr4::tree::TerminalNode *Ref();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ParamSpecificationContext* paramSpecification();

  class  ReturnTypeContext : public antlr4::ParserRuleContext {
  public:
    ReturnTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Arrow();
    TheTypeIdContext *theTypeId();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Colon();
    antlr4::tree::TerminalNode *Ref();
    antlr4::tree::TerminalNode *Forward();
    antlr4::tree::TerminalNode *Const();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReturnTypeContext* returnType();

  class  FunctionBodyContext : public antlr4::ParserRuleContext {
  public:
    FunctionBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CompoundStatementContext *compoundStatement();
    antlr4::tree::TerminalNode *Assign();
    antlr4::tree::TerminalNode *Equal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionBodyContext* functionBody();

  class  ShortFunctionBodyContext : public antlr4::ParserRuleContext {
  public:
    ShortFunctionBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionStatementContext *expressionStatement();
    antlr4::tree::TerminalNode *AssignArrow();
    antlr4::tree::TerminalNode *EqualArrow();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ShortFunctionBodyContext* shortFunctionBody();

  class  ExceptionSpecificationContext : public antlr4::ParserRuleContext {
  public:
    ExceptionSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Noexcept();
    antlr4::tree::TerminalNode *LeftParen();
    ConstantExpressionContext *constantExpression();
    antlr4::tree::TerminalNode *RightParen();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExceptionSpecificationContext* exceptionSpecification();

  class  DeclSpecifierContext : public antlr4::ParserRuleContext {
  public:
    DeclSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Static();
    antlr4::tree::TerminalNode *Thread_local();
    antlr4::tree::TerminalNode *Mutable();
    antlr4::tree::TerminalNode *Const();
    antlr4::tree::TerminalNode *Volatile();
    antlr4::tree::TerminalNode *Let();
    antlr4::tree::TerminalNode *Unowned();
    antlr4::tree::TerminalNode *Weak();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeclSpecifierContext* declSpecifier();

  class  DeclSpecifierSeqContext : public antlr4::ParserRuleContext {
  public:
    DeclSpecifierSeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DeclSpecifierContext *> declSpecifier();
    DeclSpecifierContext* declSpecifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeclSpecifierSeqContext* declSpecifierSeq();

  class  IdentifierSeqContext : public antlr4::ParserRuleContext {
  public:
    IdentifierSeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IdentifierSeqContext* identifierSeq();

  class  FriendDeclarationContext : public antlr4::ParserRuleContext {
  public:
    FriendDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Friend();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Semi();
    TemplateParamsContext *templateParams();
    antlr4::tree::TerminalNode *Colon();
    FunctionParamsContext *functionParams();
    ReturnTypeContext *returnType();
    antlr4::tree::TerminalNode *LifetimeAnnotation();
    ExceptionSpecificationContext *exceptionSpecification();
    FunctionDefinitionContext *functionDefinition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FriendDeclarationContext* friendDeclaration();

  class  ExternMethodDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ExternMethodDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Extern();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Colon();
    FunctionParamsContext *functionParams();
    ReturnTypeContext *returnType();
    antlr4::tree::TerminalNode *Semi();
    AccessSpecifierContext *accessSpecifier();
    antlr4::tree::TerminalNode *LifetimeAnnotation();
    ExceptionSpecificationContext *exceptionSpecification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExternMethodDeclarationContext* externMethodDeclaration();

  class  AttributeSpecifierSeqContext : public antlr4::ParserRuleContext {
  public:
    AttributeSpecifierSeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AttributeSpecifierContext *> attributeSpecifier();
    AttributeSpecifierContext* attributeSpecifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AttributeSpecifierSeqContext* attributeSpecifierSeq();

  class  AttributeSpecifierContext : public antlr4::ParserRuleContext {
  public:
    AttributeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AtSign();
    antlr4::tree::TerminalNode *Identifier();
    NestedNameSpecifierContext *nestedNameSpecifier();
    AttributeArgumentClauseContext *attributeArgumentClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AttributeSpecifierContext* attributeSpecifier();

  class  AttributeArgumentClauseContext : public antlr4::ParserRuleContext {
  public:
    AttributeArgumentClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParen();
    ExpressionListContext *expressionList();
    antlr4::tree::TerminalNode *RightParen();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AttributeArgumentClauseContext* attributeArgumentClause();

  class  SelectionStatementContext : public antlr4::ParserRuleContext {
  public:
    SelectionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    antlr4::tree::TerminalNode *LeftParen();
    ConditionContext *condition();
    antlr4::tree::TerminalNode *RightParen();
    StatContext *stat();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();
    antlr4::tree::TerminalNode *Static();
    antlr4::tree::TerminalNode *Else();
    ElseBranchContext *elseBranch();
    CompoundStatementContext *compoundStatement();
    antlr4::tree::TerminalNode *Consteval();
    NotContext *not_();
    antlr4::tree::TerminalNode *Switch();
    ThreeWayComparisonExpressionContext *threeWayComparisonExpression();
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    std::vector<SwitchStatementBranchContext *> switchStatementBranch();
    SwitchStatementBranchContext* switchStatementBranch(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SelectionStatementContext* selectionStatement();

  class  ConditionContext : public antlr4::ParserRuleContext {
  public:
    ConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LogicalOrExpressionContext *logicalOrExpression();
    SimpleDeclarationContext *simpleDeclaration();
    DeclaratorContext *declarator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConditionContext* condition();

  class  ElseBranchContext : public antlr4::ParserRuleContext {
  public:
    ElseBranchContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatContext *stat();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ElseBranchContext* elseBranch();

  class  SwitchStatementBranchContext : public antlr4::ParserRuleContext {
  public:
    SwitchStatementBranchContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PatternListContext *patternList();
    antlr4::tree::TerminalNode *AssignArrow();
    StatContext *stat();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SwitchStatementBranchContext* switchStatementBranch();

  class  DeclaratorContext : public antlr4::ParserRuleContext {
  public:
    DeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierSeqContext *identifierSeq();
    antlr4::tree::TerminalNode *Colon();
    antlr4::tree::TerminalNode *Assign();
    InitializerClauseContext *initializerClause();
    TheTypeIdContext *theTypeId();
    antlr4::tree::TerminalNode *Const();
    antlr4::tree::TerminalNode *Let();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeclaratorContext* declarator();

  class  InlineCppStatementContext : public antlr4::ParserRuleContext {
  public:
    InlineCppStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Cpp();
    antlr4::tree::TerminalNode *StringLiteral();
    antlr4::tree::TerminalNode *Semi();
    antlr4::tree::TerminalNode *Unsafe();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InlineCppStatementContext* inlineCppStatement();

  class  IterationStatementContext : public antlr4::ParserRuleContext {
  public:
    IterationStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *While();
    antlr4::tree::TerminalNode *LeftParen();
    WhileConditionContext *whileCondition();
    antlr4::tree::TerminalNode *RightParen();
    StatContext *stat();
    CompoundStatementContext *compoundStatement();
    antlr4::tree::TerminalNode *Do();
    DoWhileConditionContext *doWhileCondition();
    antlr4::tree::TerminalNode *Semi();
    antlr4::tree::TerminalNode *For();
    ForInitStatementContext *forInitStatement();
    ExpressionSeqContext *expressionSeq();
    ForRangeDeclarationContext *forRangeDeclaration();
    antlr4::tree::TerminalNode *In();
    ForRangeInitializerContext *forRangeInitializer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IterationStatementContext* iterationStatement();

  class  WhileConditionContext : public antlr4::ParserRuleContext {
  public:
    WhileConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LogicalOrExpressionContext *logicalOrExpression();
    DeclaratorContext *declarator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  WhileConditionContext* whileCondition();

  class  DoWhileConditionContext : public antlr4::ParserRuleContext {
  public:
    DoWhileConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LogicalOrExpressionContext *logicalOrExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DoWhileConditionContext* doWhileCondition();

  class  ForInitStatementContext : public antlr4::ParserRuleContext {
  public:
    ForInitStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LogicalOrExpressionContext *logicalOrExpression();
    antlr4::tree::TerminalNode *Semi();
    BlockDeclarationContext *blockDeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ForInitStatementContext* forInitStatement();

  class  ForRangeDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ForRangeDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierSeqContext *identifierSeq();
    antlr4::tree::TerminalNode *Amp();
    antlr4::tree::TerminalNode *Const();
    antlr4::tree::TerminalNode *Let();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ForRangeDeclarationContext* forRangeDeclaration();

  class  ForRangeInitializerContext : public antlr4::ParserRuleContext {
  public:
    ForRangeInitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LogicalOrExpressionContext *logicalOrExpression();
    BracedInitListContext *bracedInitList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ForRangeInitializerContext* forRangeInitializer();

  class  ExpressionSeqContext : public antlr4::ParserRuleContext {
  public:
    ExpressionSeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *Comma();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpressionSeqContext* expressionSeq();

  class  JumpStatementContext : public antlr4::ParserRuleContext {
  public:
    JumpStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Semi();
    antlr4::tree::TerminalNode *Break();
    antlr4::tree::TerminalNode *Continue();
    antlr4::tree::TerminalNode *Return();
    antlr4::tree::TerminalNode *Identifier();
    ExprContext *expr();
    BracedInitListContext *bracedInitList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  JumpStatementContext* jumpStatement();

  class  SimpleDeclarationContext : public antlr4::ParserRuleContext {
  public:
    SimpleDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Colon();
    antlr4::tree::TerminalNode *Semi();
    TheTypeIdContext *theTypeId();
    antlr4::tree::TerminalNode *Assign();
    antlr4::tree::TerminalNode *Void();
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    InitializerClauseContext *initializerClause();
    DeclSpecifierSeqContext *declSpecifierSeq();
    InitializerListContext *initializerList();
    antlr4::tree::TerminalNode *Star();
    antlr4::tree::TerminalNode *Const();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SimpleDeclarationContext* simpleDeclaration();

  class  BitFieldDeclarationContext : public antlr4::ParserRuleContext {
  public:
    BitFieldDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    std::vector<antlr4::tree::TerminalNode *> Colon();
    antlr4::tree::TerminalNode* Colon(size_t i);
    TheTypeIdContext *theTypeId();
    antlr4::tree::TerminalNode *IntegerLiteral();
    antlr4::tree::TerminalNode *Semi();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BitFieldDeclarationContext* bitFieldDeclaration();

  class  DeconstructionDeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeconstructionDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierSeqContext *identifierSeq();
    antlr4::tree::TerminalNode *Colon();
    antlr4::tree::TerminalNode *Assign();
    InitializerClauseContext *initializerClause();
    antlr4::tree::TerminalNode *Semi();
    antlr4::tree::TerminalNode *Const();
    antlr4::tree::TerminalNode *Let();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeconstructionDeclarationContext* deconstructionDeclaration();

  class  RefDeclarationContext : public antlr4::ParserRuleContext {
  public:
    RefDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Amp();
    IdentifierSeqContext *identifierSeq();
    antlr4::tree::TerminalNode *Colon();
    antlr4::tree::TerminalNode *Semi();
    TypeSpecifierSeqContext *typeSpecifierSeq();
    antlr4::tree::TerminalNode *Assign();
    InitializerClauseContext *initializerClause();
    antlr4::tree::TerminalNode *Const();
    antlr4::tree::TerminalNode *Let();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RefDeclarationContext* refDeclaration();

  class  MemberRefDeclarationContext : public antlr4::ParserRuleContext {
  public:
    MemberRefDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Amp();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Colon();
    TheTypeIdContext *theTypeId();
    antlr4::tree::TerminalNode *Semi();
    antlr4::tree::TerminalNode *Const();
    antlr4::tree::TerminalNode *Let();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MemberRefDeclarationContext* memberRefDeclaration();

  class  SimpleMultiDeclarationContext : public antlr4::ParserRuleContext {
  public:
    SimpleMultiDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);
    antlr4::tree::TerminalNode *Colon();
    TheTypeIdContext *theTypeId();
    antlr4::tree::TerminalNode *Semi();
    DeclSpecifierSeqContext *declSpecifierSeq();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SimpleMultiDeclarationContext* simpleMultiDeclaration();

  class  MultiDeclarationContext : public antlr4::ParserRuleContext {
  public:
    MultiDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InitializerClauseContext *initializerClause();
    antlr4::tree::TerminalNode *Semi();
    DeclSpecifierSeqContext *declSpecifierSeq();
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Colon();
    antlr4::tree::TerminalNode* Colon(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Assign();
    antlr4::tree::TerminalNode* Assign(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MultiDeclarationContext* multiDeclaration();

  class  ConstantDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ConstantDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Colon();
    antlr4::tree::TerminalNode *Equal();
    InitializerClauseContext *initializerClause();
    antlr4::tree::TerminalNode *Semi();
    antlr4::tree::TerminalNode *Const();
    TheTypeIdContext *theTypeId();
    TemplateParamsContext *templateParams();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstantDeclarationContext* constantDeclaration();

  class  ForwardVarDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ForwardVarDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Forward();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Colon();
    antlr4::tree::TerminalNode *Assign();
    InitializerClauseContext *initializerClause();
    antlr4::tree::TerminalNode *Semi();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ForwardVarDeclarationContext* forwardVarDeclaration();

  class  AliasDeclarationContext : public antlr4::ParserRuleContext {
  public:
    AliasDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Type();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Assign();
    TheTypeIdContext *theTypeId();
    antlr4::tree::TerminalNode *Semi();
    TemplateParamsContext *templateParams();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AliasDeclarationContext* aliasDeclaration();

  class  VersionSelectionStatementContext : public antlr4::ParserRuleContext {
  public:
    VersionSelectionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    antlr4::tree::TerminalNode *Version();
    antlr4::tree::TerminalNode *LeftParen();
    ConditionContext *condition();
    antlr4::tree::TerminalNode *RightParen();
    std::vector<VersionSelectionStatementBlockContext *> versionSelectionStatementBlock();
    VersionSelectionStatementBlockContext* versionSelectionStatementBlock(size_t i);
    antlr4::tree::TerminalNode *Else();
    antlr4::tree::TerminalNode *Debug();
    ScopeSafeCompoundStatementContext *scopeSafeCompoundStatement();
    NotContext *not_();
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VersionSelectionStatementContext* versionSelectionStatement();

  class  VersionSelectionStatementBlockContext : public antlr4::ParserRuleContext {
  public:
    VersionSelectionStatementBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ScopeSafeCompoundStatementContext *scopeSafeCompoundStatement();
    StatContext *stat();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VersionSelectionStatementBlockContext* versionSelectionStatementBlock();

  class  ScopeSafeCompoundStatementContext : public antlr4::ParserRuleContext {
  public:
    ScopeSafeCompoundStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    std::vector<StatContext *> stat();
    StatContext* stat(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ScopeSafeCompoundStatementContext* scopeSafeCompoundStatement();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignmentExpressionContext *assignmentExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExprContext* expr();

  class  RangeExpressionContext : public antlr4::ParserRuleContext {
  public:
    RangeExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnaryExpressionContext *unaryExpression();
    antlr4::tree::TerminalNode *DoubleDot();
    antlr4::tree::TerminalNode *DoubleDotEqual();
    RangeExpressionStartContext *rangeExpressionStart();
    RangeExpressionEndContext *rangeExpressionEnd();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RangeExpressionContext* rangeExpression();

  class  RangeExpressionStartContext : public antlr4::ParserRuleContext {
  public:
    RangeExpressionStartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnaryExpressionContext *unaryExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RangeExpressionStartContext* rangeExpressionStart();

  class  RangeExpressionEndContext : public antlr4::ParserRuleContext {
  public:
    RangeExpressionEndContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnaryExpressionContext *unaryExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RangeExpressionEndContext* rangeExpressionEnd();

  class  SwitchExpressionContext : public antlr4::ParserRuleContext {
  public:
    SwitchExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RangeExpressionContext *rangeExpression();
    antlr4::tree::TerminalNode *Switch();
    ThreeWayComparisonExpressionContext *threeWayComparisonExpression();
    antlr4::tree::TerminalNode *LeftBrace();
    std::vector<SwitchExpressionBranchContext *> switchExpressionBranch();
    SwitchExpressionBranchContext* switchExpressionBranch(size_t i);
    antlr4::tree::TerminalNode *RightBrace();
    antlr4::tree::TerminalNode *Arrow();
    TheTypeIdContext *theTypeId();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SwitchExpressionContext* switchExpression();

  class  SwitchExpressionBranchContext : public antlr4::ParserRuleContext {
  public:
    SwitchExpressionBranchContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PatternListContext *patternList();
    antlr4::tree::TerminalNode *AssignArrow();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SwitchExpressionBranchContext* switchExpressionBranch();

  class  PowerExpressionContext : public antlr4::ParserRuleContext {
  public:
    PowerExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SwitchExpressionContext *switchExpression();
    std::vector<PowerExpressionContext *> powerExpression();
    PowerExpressionContext* powerExpression(size_t i);
    antlr4::tree::TerminalNode *DoubleStar();
    antlr4::tree::TerminalNode *DoubleCaret();
    antlr4::tree::TerminalNode *Op10();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PowerExpressionContext* powerExpression();
  PowerExpressionContext* powerExpression(int precedence);
  class  MultiplicativeExpressionContext : public antlr4::ParserRuleContext {
  public:
    MultiplicativeExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PowerExpressionContext *powerExpression();
    std::vector<MultiplicativeExpressionContext *> multiplicativeExpression();
    MultiplicativeExpressionContext* multiplicativeExpression(size_t i);
    antlr4::tree::TerminalNode *Star();
    antlr4::tree::TerminalNode *Div();
    antlr4::tree::TerminalNode *Mod();
    antlr4::tree::TerminalNode *Op9();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MultiplicativeExpressionContext* multiplicativeExpression();
  MultiplicativeExpressionContext* multiplicativeExpression(int precedence);
  class  AdditiveExpressionContext : public antlr4::ParserRuleContext {
  public:
    AdditiveExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MultiplicativeExpressionContext *multiplicativeExpression();
    std::vector<AdditiveExpressionContext *> additiveExpression();
    AdditiveExpressionContext* additiveExpression(size_t i);
    antlr4::tree::TerminalNode *Plus();
    antlr4::tree::TerminalNode *Minus();
    antlr4::tree::TerminalNode *Tilde();
    antlr4::tree::TerminalNode *Op8();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AdditiveExpressionContext* additiveExpression();
  AdditiveExpressionContext* additiveExpression(int precedence);
  class  ShiftExpressionContext : public antlr4::ParserRuleContext {
  public:
    ShiftExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AdditiveExpressionContext *additiveExpression();
    std::vector<ShiftExpressionContext *> shiftExpression();
    ShiftExpressionContext* shiftExpression(size_t i);
    ShiftOperatorContext *shiftOperator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ShiftExpressionContext* shiftExpression();
  ShiftExpressionContext* shiftExpression(int precedence);
  class  ThreeWayComparisonExpressionContext : public antlr4::ParserRuleContext {
  public:
    ThreeWayComparisonExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ShiftExpressionContext *> shiftExpression();
    ShiftExpressionContext* shiftExpression(size_t i);
    antlr4::tree::TerminalNode *Spaceship();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ThreeWayComparisonExpressionContext* threeWayComparisonExpression();

  class  RelationalExpressionContext : public antlr4::ParserRuleContext {
  public:
    RelationalExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ThreeWayComparisonExpressionContext *threeWayComparisonExpression();
    antlr4::tree::TerminalNode *As();
    TheTypeIdContext *theTypeId();
    antlr4::tree::TerminalNode *Is();
    PatternListContext *patternList();
    antlr4::tree::TerminalNode *Question();
    antlr4::tree::TerminalNode *Type();
    TypeTraitContext *typeTrait();
    std::vector<RelationalExpressionContext *> relationalExpression();
    RelationalExpressionContext* relationalExpression(size_t i);
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *Greater();
    antlr4::tree::TerminalNode *LessEqual();
    antlr4::tree::TerminalNode *GreaterEqual();
    antlr4::tree::TerminalNode *Op6();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RelationalExpressionContext* relationalExpression();
  RelationalExpressionContext* relationalExpression(int precedence);
  class  EqualityExpressionContext : public antlr4::ParserRuleContext {
  public:
    EqualityExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RelationalExpressionContext *relationalExpression();
    antlr4::tree::TerminalNode *Type();
    std::vector<TheTypeIdContext *> theTypeId();
    TheTypeIdContext* theTypeId(size_t i);
    antlr4::tree::TerminalNode *Equal();
    antlr4::tree::TerminalNode *NotEqual();
    std::vector<EqualityExpressionContext *> equalityExpression();
    EqualityExpressionContext* equalityExpression(size_t i);
    antlr4::tree::TerminalNode *IdentityEqual();
    antlr4::tree::TerminalNode *NotIdentityEqual();
    antlr4::tree::TerminalNode *Op5();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EqualityExpressionContext* equalityExpression();
  EqualityExpressionContext* equalityExpression(int precedence);
  class  AndExpressionContext : public antlr4::ParserRuleContext {
  public:
    AndExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EqualityExpressionContext *equalityExpression();
    std::vector<AndExpressionContext *> andExpression();
    AndExpressionContext* andExpression(size_t i);
    antlr4::tree::TerminalNode *Amp();
    antlr4::tree::TerminalNode *Op4();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AndExpressionContext* andExpression();
  AndExpressionContext* andExpression(int precedence);
  class  ExclusiveOrExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExclusiveOrExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AndExpressionContext *andExpression();
    std::vector<ExclusiveOrExpressionContext *> exclusiveOrExpression();
    ExclusiveOrExpressionContext* exclusiveOrExpression(size_t i);
    antlr4::tree::TerminalNode *Caret();
    antlr4::tree::TerminalNode *Op3();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExclusiveOrExpressionContext* exclusiveOrExpression();
  ExclusiveOrExpressionContext* exclusiveOrExpression(int precedence);
  class  InclusiveOrExpressionContext : public antlr4::ParserRuleContext {
  public:
    InclusiveOrExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExclusiveOrExpressionContext *exclusiveOrExpression();
    std::vector<InclusiveOrExpressionContext *> inclusiveOrExpression();
    InclusiveOrExpressionContext* inclusiveOrExpression(size_t i);
    antlr4::tree::TerminalNode *VertLine();
    antlr4::tree::TerminalNode *Op2();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InclusiveOrExpressionContext* inclusiveOrExpression();
  InclusiveOrExpressionContext* inclusiveOrExpression(int precedence);
  class  LogicalAndExpressionContext : public antlr4::ParserRuleContext {
  public:
    LogicalAndExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<InclusiveOrExpressionContext *> inclusiveOrExpression();
    InclusiveOrExpressionContext* inclusiveOrExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> And();
    antlr4::tree::TerminalNode* And(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LogicalAndExpressionContext* logicalAndExpression();

  class  LogicalOrExpressionContext : public antlr4::ParserRuleContext {
  public:
    LogicalOrExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LogicalAndExpressionContext *> logicalAndExpression();
    LogicalAndExpressionContext* logicalAndExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Or();
    antlr4::tree::TerminalNode* Or(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LogicalOrExpressionContext* logicalOrExpression();

  class  NullCoalescingExpressionContext : public antlr4::ParserRuleContext {
  public:
    NullCoalescingExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LogicalOrExpressionContext *logicalOrExpression();
    std::vector<antlr4::tree::TerminalNode *> DoubleQuestion();
    antlr4::tree::TerminalNode* DoubleQuestion(size_t i);
    std::vector<NullCoalescingBranchContext *> nullCoalescingBranch();
    NullCoalescingBranchContext* nullCoalescingBranch(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NullCoalescingExpressionContext* nullCoalescingExpression();

  class  NullCoalescingBranchContext : public antlr4::ParserRuleContext {
  public:
    NullCoalescingBranchContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LogicalOrExpressionContext *logicalOrExpression();
    ThrowExpressionContext *throwExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NullCoalescingBranchContext* nullCoalescingBranch();

  class  ConditionalExpressionContext : public antlr4::ParserRuleContext {
  public:
    ConditionalExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NullCoalescingExpressionContext *nullCoalescingExpression();
    antlr4::tree::TerminalNode *Question();
    antlr4::tree::TerminalNode *Colon();
    AssignmentExpressionContext *assignmentExpression();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConditionalExpressionContext* conditionalExpression();

  class  ConstantExpressionContext : public antlr4::ParserRuleContext {
  public:
    ConstantExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConditionalExpressionContext *conditionalExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstantExpressionContext* constantExpression();

  class  AssignmentExpressionContext : public antlr4::ParserRuleContext {
  public:
    AssignmentExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LogicalOrExpressionContext *logicalOrExpression();
    AssignmentOperatorContext *assignmentOperator();
    InitializerClauseContext *initializerClause();
    ConditionalExpressionContext *conditionalExpression();
    ThrowExpressionContext *throwExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssignmentExpressionContext* assignmentExpression();

  class  InitializerClauseContext : public antlr4::ParserRuleContext {
  public:
    InitializerClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignmentExpressionContext *assignmentExpression();
    antlr4::tree::TerminalNode *Ellipsis();
    BracedInitListContext *bracedInitList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InitializerClauseContext* initializerClause();

  class  BracedInitListContext : public antlr4::ParserRuleContext {
  public:
    BracedInitListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    InitializerListContext *initializerList();
    antlr4::tree::TerminalNode *Comma();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BracedInitListContext* bracedInitList();

  class  InitializerListContext : public antlr4::ParserRuleContext {
  public:
    InitializerListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<InitializerPartContext *> initializerPart();
    InitializerPartContext* initializerPart(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InitializerListContext* initializerList();

  class  InitializerPartContext : public antlr4::ParserRuleContext {
  public:
    InitializerPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InitializerClauseContext *initializerClause();
    antlr4::tree::TerminalNode *Ellipsis();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InitializerPartContext* initializerPart();

  class  ExpressionListContext : public antlr4::ParserRuleContext {
  public:
    ExpressionListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionListPartContext *> expressionListPart();
    ExpressionListPartContext* expressionListPart(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpressionListContext* expressionList();

  class  ExpressionListPartContext : public antlr4::ParserRuleContext {
  public:
    ExpressionListPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConditionalExpressionContext *conditionalExpression();
    BracedInitListContext *bracedInitList();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Assign();
    antlr4::tree::TerminalNode *Ellipsis();
    antlr4::tree::TerminalNode *Out();
    antlr4::tree::TerminalNode *Colon();
    TheTypeIdContext *theTypeId();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpressionListPartContext* expressionListPart();

  class  ConstraintClauseContext : public antlr4::ParserRuleContext {
  public:
    ConstraintClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Where();
    ConstantExpressionContext *constantExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstraintClauseContext* constraintClause();

  class  PatternListContext : public antlr4::ParserRuleContext {
  public:
    PatternListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PatternContext *> pattern();
    PatternContext* pattern(size_t i);
    std::vector<PatternCombinationOperatorContext *> patternCombinationOperator();
    PatternCombinationOperatorContext* patternCombinationOperator(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PatternListContext* patternList();

  class  PatternCombinationOperatorContext : public antlr4::ParserRuleContext {
  public:
    PatternCombinationOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *And();
    antlr4::tree::TerminalNode *Or();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PatternCombinationOperatorContext* patternCombinationOperator();

  class  PatternContext : public antlr4::ParserRuleContext {
  public:
    PatternContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TheTypeIdContext *theTypeId();
    NotContext *not_();
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);
    antlr4::tree::TerminalNode *LeftBrace();
    std::vector<PropertyPatternContext *> propertyPattern();
    PropertyPatternContext* propertyPattern(size_t i);
    antlr4::tree::TerminalNode *RightBrace();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);
    ShiftExpressionContext *shiftExpression();
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *Let();
    antlr4::tree::TerminalNode *RightParen();
    std::vector<PatternListContext *> patternList();
    PatternListContext* patternList(size_t i);
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *RightBracket();
    antlr4::tree::TerminalNode *Greater();
    antlr4::tree::TerminalNode *GreaterEqual();
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *LessEqual();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PatternContext* pattern();

  class  TypeTraitContext : public antlr4::ParserRuleContext {
  public:
    TypeTraitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Void();
    antlr4::tree::TerminalNode *Null();
    antlr4::tree::TerminalNode *Struct();
    antlr4::tree::TerminalNode *Enum();
    antlr4::tree::TerminalNode *Class();
    antlr4::tree::TerminalNode *Unowned();
    antlr4::tree::TerminalNode *Weak();
    antlr4::tree::TerminalNode *Interface();
    antlr4::tree::TerminalNode *Union();
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    antlr4::tree::TerminalNode *Arrow();
    antlr4::tree::TerminalNode *Star();
    std::vector<antlr4::tree::TerminalNode *> Amp();
    antlr4::tree::TerminalNode* Amp(size_t i);
    antlr4::tree::TerminalNode *Question();
    antlr4::tree::TerminalNode *Ref();
    antlr4::tree::TerminalNode *Const();
    antlr4::tree::TerminalNode *Volatile();
    antlr4::tree::TerminalNode *Abstract();
    antlr4::tree::TerminalNode *Final();
    antlr4::tree::TerminalNode *New();
    antlr4::tree::TerminalNode *Tilde();
    antlr4::tree::TerminalNode *Operator_();
    std::vector<TheTypeIdContext *> theTypeId();
    TheTypeIdContext* theTypeId(size_t i);
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Greater();
    NotContext *not_();
    std::vector<antlr4::tree::TerminalNode *> Or();
    antlr4::tree::TerminalNode* Or(size_t i);
    antlr4::tree::TerminalNode *Default();
    antlr4::tree::TerminalNode *Noexcept();
    antlr4::tree::TerminalNode *Implicit();
    antlr4::tree::TerminalNode *Move();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeTraitContext* typeTrait();

  class  PropertyPatternContext : public antlr4::ParserRuleContext {
  public:
    PropertyPatternContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Colon();
    PatternListContext *patternList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PropertyPatternContext* propertyPattern();

  class  AssignmentOperatorContext : public antlr4::ParserRuleContext {
  public:
    AssignmentOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Assign();
    antlr4::tree::TerminalNode *PlusAssign();
    antlr4::tree::TerminalNode *MinusAssign();
    antlr4::tree::TerminalNode *TildeAssign();
    antlr4::tree::TerminalNode *StarAssign();
    antlr4::tree::TerminalNode *DoubleStarAssign();
    antlr4::tree::TerminalNode *DivAssign();
    antlr4::tree::TerminalNode *ModAssign();
    antlr4::tree::TerminalNode *RightShiftAssign();
    antlr4::tree::TerminalNode *LeftShiftAssign();
    antlr4::tree::TerminalNode *SignedRightShiftAssign();
    antlr4::tree::TerminalNode *AndAssign();
    antlr4::tree::TerminalNode *XorAssign();
    antlr4::tree::TerminalNode *OrAssign();
    antlr4::tree::TerminalNode *DoubleQuestionAssign();
    antlr4::tree::TerminalNode *Op1();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssignmentOperatorContext* assignmentOperator();

  class  ShiftOperatorContext : public antlr4::ParserRuleContext {
  public:
    ShiftOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Greater();
    antlr4::tree::TerminalNode* Greater(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Less();
    antlr4::tree::TerminalNode* Less(size_t i);
    antlr4::tree::TerminalNode *Op7();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ShiftOperatorContext* shiftOperator();

  class  TryBlockContext : public antlr4::ParserRuleContext {
  public:
    TryBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Try();
    CompoundStatementContext *compoundStatement();
    std::vector<ExceptionHandlerContext *> exceptionHandler();
    ExceptionHandlerContext* exceptionHandler(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TryBlockContext* tryBlock();

  class  ExceptionHandlerContext : public antlr4::ParserRuleContext {
  public:
    ExceptionHandlerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Catch();
    ExceptionDeclarationContext *exceptionDeclaration();
    CompoundStatementContext *compoundStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExceptionHandlerContext* exceptionHandler();

  class  ExceptionDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ExceptionDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Colon();
    std::vector<SimpleTypeSpecifierContext *> simpleTypeSpecifier();
    SimpleTypeSpecifierContext* simpleTypeSpecifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Or();
    antlr4::tree::TerminalNode* Or(size_t i);
    antlr4::tree::TerminalNode *Ellipsis();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExceptionDeclarationContext* exceptionDeclaration();

  class  ThrowExpressionContext : public antlr4::ParserRuleContext {
  public:
    ThrowExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Throw();
    AssignmentExpressionContext *assignmentExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ThrowExpressionContext* throwExpression();

  class  SimpleTypeSpecifierContext : public antlr4::ParserRuleContext {
  public:
    SimpleTypeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypenameContext *typename_();
    NestedNameSpecifierContext *nestedNameSpecifier();
    antlr4::tree::TerminalNode *I8();
    antlr4::tree::TerminalNode *U8();
    antlr4::tree::TerminalNode *I16();
    antlr4::tree::TerminalNode *U16();
    antlr4::tree::TerminalNode *I32();
    antlr4::tree::TerminalNode *U32();
    antlr4::tree::TerminalNode *I64();
    antlr4::tree::TerminalNode *U64();
    antlr4::tree::TerminalNode *I128();
    antlr4::tree::TerminalNode *U128();
    antlr4::tree::TerminalNode *Isize();
    antlr4::tree::TerminalNode *Usize();
    antlr4::tree::TerminalNode *F32();
    antlr4::tree::TerminalNode *F64();
    antlr4::tree::TerminalNode *Fext();
    antlr4::tree::TerminalNode *Char();
    antlr4::tree::TerminalNode *Byte();
    antlr4::tree::TerminalNode *Rune();
    antlr4::tree::TerminalNode *Bool();
    antlr4::tree::TerminalNode *Str();
    antlr4::tree::TerminalNode *Self();
    antlr4::tree::TerminalNode *Object();
    DecltypeSpecifierContext *decltypeSpecifier();
    DecaySpecifierContext *decaySpecifier();
    FunctionTypeIdContext *functionTypeId();
    antlr4::tree::TerminalNode *LeftParen();
    std::vector<TheTypeIdContext *> theTypeId();
    TheTypeIdContext* theTypeId(size_t i);
    antlr4::tree::TerminalNode *RightParen();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);
    antlr4::tree::TerminalNode *Ellipsis();
    std::vector<NamedTupleFieldContext *> namedTupleField();
    NamedTupleFieldContext* namedTupleField(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SimpleTypeSpecifierContext* simpleTypeSpecifier();

  class  FunctionTypeIdContext : public antlr4::ParserRuleContext {
  public:
    FunctionTypeIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    antlr4::tree::TerminalNode *Arrow();
    TheTypeIdContext *theTypeId();
    antlr4::tree::TerminalNode *Void();
    std::vector<TypeIdWithSpecificationContext *> typeIdWithSpecification();
    TypeIdWithSpecificationContext* typeIdWithSpecification(size_t i);
    antlr4::tree::TerminalNode *Ellipsis();
    antlr4::tree::TerminalNode *Const();
    antlr4::tree::TerminalNode *Ref();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionTypeIdContext* functionTypeId();

  class  TypeIdWithSpecificationContext : public antlr4::ParserRuleContext {
  public:
    TypeIdWithSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TheTypeIdContext *theTypeId();
    ParamSpecificationContext *paramSpecification();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeIdWithSpecificationContext* typeIdWithSpecification();

  class  NamedTupleFieldContext : public antlr4::ParserRuleContext {
  public:
    NamedTupleFieldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Colon();
    TheTypeIdContext *theTypeId();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NamedTupleFieldContext* namedTupleField();

  class  NestedNameSpecifierContext : public antlr4::ParserRuleContext {
  public:
    NestedNameSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Dot();
    TypenameContext *typename_();
    NamespaceNameContext *namespaceName();
    DecltypeSpecifierContext *decltypeSpecifier();
    NestedNameSpecifierContext *nestedNameSpecifier();
    antlr4::tree::TerminalNode *Identifier();
    SimpleTemplateIdContext *simpleTemplateId();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NestedNameSpecifierContext* nestedNameSpecifier();
  NestedNameSpecifierContext* nestedNameSpecifier(int precedence);
  class  NamespaceNameContext : public antlr4::ParserRuleContext {
  public:
    NamespaceNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NamespaceNameContext* namespaceName();

  class  TemplateNameContext : public antlr4::ParserRuleContext {
  public:
    TemplateNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TemplateNameContext* templateName();

  class  SimpleTemplateIdContext : public antlr4::ParserRuleContext {
  public:
    SimpleTemplateIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TemplateNameContext *templateName();
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *Greater();
    TemplateArgumentListContext *templateArgumentList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SimpleTemplateIdContext* simpleTemplateId();

  class  OperatorTemplateIdContext : public antlr4::ParserRuleContext {
  public:
    OperatorTemplateIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OperatorFunctionIdContext *operatorFunctionId();
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *Greater();
    TemplateArgumentListContext *templateArgumentList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OperatorTemplateIdContext* operatorTemplateId();

  class  TemplateIdContext : public antlr4::ParserRuleContext {
  public:
    TemplateIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleTemplateIdContext *simpleTemplateId();
    OperatorTemplateIdContext *operatorTemplateId();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TemplateIdContext* templateId();

  class  TemplateArgumentListContext : public antlr4::ParserRuleContext {
  public:
    TemplateArgumentListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TemplateArgumentContext *> templateArgument();
    TemplateArgumentContext* templateArgument(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TemplateArgumentListContext* templateArgumentList();

  class  TemplateArgumentContext : public antlr4::ParserRuleContext {
  public:
    TemplateArgumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TheTypeIdContext *theTypeId();
    ConditionalExpressionContext *conditionalExpression();
    IdExpressionContext *idExpression();
    antlr4::tree::TerminalNode *Ellipsis();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TemplateArgumentContext* templateArgument();

  class  IdExpressionContext : public antlr4::ParserRuleContext {
  public:
    IdExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnqualifiedIdContext *unqualifiedId();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IdExpressionContext* idExpression();

  class  QualifiedIdContext : public antlr4::ParserRuleContext {
  public:
    QualifiedIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NestedNameSpecifierContext *nestedNameSpecifier();
    UnqualifiedIdContext *unqualifiedId();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  QualifiedIdContext* qualifiedId();

  class  UnqualifiedIdContext : public antlr4::ParserRuleContext {
  public:
    UnqualifiedIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    OperatorFunctionIdContext *operatorFunctionId();
    ConversionFunctionIdContext *conversionFunctionId();
    antlr4::tree::TerminalNode *Tilde();
    ClassNameContext *className();
    DecltypeSpecifierContext *decltypeSpecifier();
    TemplateIdContext *templateId();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UnqualifiedIdContext* unqualifiedId();

  class  TheTypeIdContext : public antlr4::ParserRuleContext {
  public:
    TheTypeIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SingleTypeIdContext *> singleTypeId();
    SingleTypeIdContext* singleTypeId(size_t i);
    std::vector<antlr4::tree::TerminalNode *> VertLine();
    antlr4::tree::TerminalNode* VertLine(size_t i);
    antlr4::tree::TerminalNode *Static();
    antlr4::tree::TerminalNode *Identifier();
    SimpleTemplateIdContext *simpleTemplateId();
    ConstantExpressionContext *constantExpression();
    antlr4::tree::TerminalNode *Question();
    std::vector<TheTypeIdContext *> theTypeId();
    TheTypeIdContext* theTypeId(size_t i);
    antlr4::tree::TerminalNode *Colon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TheTypeIdContext* theTypeId();

  class  SingleTypeIdContext : public antlr4::ParserRuleContext {
  public:
    SingleTypeIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeSpecifierSeqContext *typeSpecifierSeq();
    antlr4::tree::TerminalNode *Question();
    TypePostfixContext *typePostfix();
    antlr4::tree::TerminalNode *LeftParen();
    TheTypeIdContext *theTypeId();
    antlr4::tree::TerminalNode *RightParen();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SingleTypeIdContext* singleTypeId();

  class  TypePostfixContext : public antlr4::ParserRuleContext {
  public:
    TypePostfixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ArrayDeclaratorContext *> arrayDeclarator();
    ArrayDeclaratorContext* arrayDeclarator(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypePostfixContext* typePostfix();

  class  ArrayDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    ArrayDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *RightBracket();
    ConstantExpressionContext *constantExpression();
    antlr4::tree::TerminalNode *Question();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArrayDeclaratorContext* arrayDeclarator();

  class  PointerOperatorContext : public antlr4::ParserRuleContext {
  public:
    PointerOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Star();
    antlr4::tree::TerminalNode *DoubleStar();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PointerOperatorContext* pointerOperator();

  class  PointerOperatorSeqContext : public antlr4::ParserRuleContext {
  public:
    PointerOperatorSeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PointerOperatorContext *> pointerOperator();
    PointerOperatorContext* pointerOperator(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PointerOperatorSeqContext* pointerOperatorSeq();

  class  TypeSpecifierSeqContext : public antlr4::ParserRuleContext {
  public:
    TypeSpecifierSeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleTypeSpecifierContext *simpleTypeSpecifier();
    std::vector<PointerOperatorContext *> pointerOperator();
    PointerOperatorContext* pointerOperator(size_t i);
    CvQualifierContext *cvQualifier();
    antlr4::tree::TerminalNode *Void();
    antlr4::tree::TerminalNode *LeftParen();
    FunctionTypeIdContext *functionTypeId();
    antlr4::tree::TerminalNode *RightParen();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeSpecifierSeqContext* typeSpecifierSeq();

  class  TypeSpecifierContext : public antlr4::ParserRuleContext {
  public:
    TypeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TrailingTypeSpecifierContext *trailingTypeSpecifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeSpecifierContext* typeSpecifier();

  class  TrailingTypeSpecifierContext : public antlr4::ParserRuleContext {
  public:
    TrailingTypeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleTypeSpecifierContext *simpleTypeSpecifier();
    CvQualifierContext *cvQualifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TrailingTypeSpecifierContext* trailingTypeSpecifier();

  class  TypeNameSpecifierContext : public antlr4::ParserRuleContext {
  public:
    TypeNameSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Type();
    NestedNameSpecifierContext *nestedNameSpecifier();
    antlr4::tree::TerminalNode *Identifier();
    SimpleTemplateIdContext *simpleTemplateId();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeNameSpecifierContext* typeNameSpecifier();

  class  CvQualifierSeqContext : public antlr4::ParserRuleContext {
  public:
    CvQualifierSeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CvQualifierContext *> cvQualifier();
    CvQualifierContext* cvQualifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CvQualifierSeqContext* cvQualifierSeq();

  class  CvQualifierContext : public antlr4::ParserRuleContext {
  public:
    CvQualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Const();
    antlr4::tree::TerminalNode *Volatile();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CvQualifierContext* cvQualifier();

  class  TypenameContext : public antlr4::ParserRuleContext {
  public:
    TypenameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassNameContext *className();
    EnumNameContext *enumName();
    SimpleTemplateIdContext *simpleTemplateId();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypenameContext* typename_();

  class  ClassNameContext : public antlr4::ParserRuleContext {
  public:
    ClassNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    SimpleTemplateIdContext *simpleTemplateId();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClassNameContext* className();

  class  DecltypeSpecifierContext : public antlr4::ParserRuleContext {
  public:
    DecltypeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Decltype();
    antlr4::tree::TerminalNode *LeftParen();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RightParen();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DecltypeSpecifierContext* decltypeSpecifier();

  class  DecaySpecifierContext : public antlr4::ParserRuleContext {
  public:
    DecaySpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Decay();
    antlr4::tree::TerminalNode *LeftParen();
    TheTypeIdContext *theTypeId();
    antlr4::tree::TerminalNode *RightParen();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DecaySpecifierContext* decaySpecifier();

  class  EnumNameContext : public antlr4::ParserRuleContext {
  public:
    EnumNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EnumNameContext* enumName();

  class  AccessSpecifierContext : public antlr4::ParserRuleContext {
  public:
    AccessSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Private();
    antlr4::tree::TerminalNode *Protected();
    antlr4::tree::TerminalNode *Public();
    antlr4::tree::TerminalNode *Internal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AccessSpecifierContext* accessSpecifier();

  class  ProtectedInternalContext : public antlr4::ParserRuleContext {
  public:
    ProtectedInternalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Protected();
    antlr4::tree::TerminalNode *Internal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ProtectedInternalContext* protectedInternal();

  class  OperatorFunctionIdContext : public antlr4::ParserRuleContext {
  public:
    OperatorFunctionIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Operator_();
    OperatorContext *operator_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OperatorFunctionIdContext* operatorFunctionId();

  class  ConversionFunctionIdContext : public antlr4::ParserRuleContext {
  public:
    ConversionFunctionIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Operator_();
    TheTypeIdContext *theTypeId();
    antlr4::tree::TerminalNode *Ref();
    antlr4::tree::TerminalNode *Const();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConversionFunctionIdContext* conversionFunctionId();

  class  UnaryExpressionContext : public antlr4::ParserRuleContext {
  public:
    UnaryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnaryExpressionTailContext *unaryExpressionTail();
    UnaryPrefixOperatorContext *unaryPrefixOperator();
    RefCaptureOperatorContext *refCaptureOperator();
    antlr4::tree::TerminalNode *Out();
    antlr4::tree::TerminalNode *PlusPlus();
    antlr4::tree::TerminalNode *MinusMinus();
    UnaryCustomOperatorContext *unaryCustomOperator();
    antlr4::tree::TerminalNode *Sizeof();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UnaryExpressionContext* unaryExpression();

  class  UnaryExpressionTailContext : public antlr4::ParserRuleContext {
  public:
    UnaryExpressionTailContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FullPostfixExpressionContext *fullPostfixExpression();
    antlr4::tree::TerminalNode *Sizeof();
    antlr4::tree::TerminalNode *LeftParen();
    TheTypeIdContext *theTypeId();
    antlr4::tree::TerminalNode *RightParen();
    antlr4::tree::TerminalNode *Ellipsis();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Alignof();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UnaryExpressionTailContext* unaryExpressionTail();

  class  NewExpressionContext : public antlr4::ParserRuleContext {
  public:
    NewExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *New();
    TheTypeIdContext *theTypeId();
    MemorySpaceSetterContext *memorySpaceSetter();
    NewInitializerContext *newInitializer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NewExpressionContext* newExpression();

  class  StackallocExpressionContext : public antlr4::ParserRuleContext {
  public:
    StackallocExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Stackalloc();
    TheTypeIdContext *theTypeId();
    MemorySpaceSetterContext *memorySpaceSetter();
    NewInitializerContext *newInitializer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StackallocExpressionContext* stackallocExpression();

  class  MemorySpaceSetterContext : public antlr4::ParserRuleContext {
  public:
    MemorySpaceSetterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Less();
    ConstantExpressionContext *constantExpression();
    antlr4::tree::TerminalNode *Greater();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MemorySpaceSetterContext* memorySpaceSetter();

  class  NewInitializerContext : public antlr4::ParserRuleContext {
  public:
    NewInitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    ExpressionListContext *expressionList();
    BracedInitListContext *bracedInitList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NewInitializerContext* newInitializer();

  class  FullPostfixExpressionContext : public antlr4::ParserRuleContext {
  public:
    FullPostfixExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PostfixExpressionContext *postfixExpression();
    antlr4::tree::TerminalNode *PlusPlus();
    antlr4::tree::TerminalNode *MinusMinus();
    UnaryCustomOperatorContext *unaryCustomOperator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FullPostfixExpressionContext* fullPostfixExpression();

  class  PostfixExpressionContext : public antlr4::ParserRuleContext {
  public:
    PostfixExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrimaryExpressionContext *primaryExpression();
    NewExpressionContext *newExpression();
    StackallocExpressionContext *stackallocExpression();
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    SimpleTypeSpecifierContext *simpleTypeSpecifier();
    ExpressionListContext *expressionList();
    antlr4::tree::TerminalNode *Move();
    PostfixExpressionContext *postfixExpression();
    antlr4::tree::TerminalNode *Forward();
    antlr4::tree::TerminalNode *Dot();
    antlr4::tree::TerminalNode *Type();
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *RightBracket();
    antlr4::tree::TerminalNode *Question();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();
    antlr4::tree::TerminalNode *IntegerLiteral();
    IdExpressionContext *idExpression();
    antlr4::tree::TerminalNode *Greater();
    UnaryPostfixOperatorContext *unaryPostfixOperator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PostfixExpressionContext* postfixExpression();
  PostfixExpressionContext* postfixExpression(int precedence);
  class  TupleExpressionContext : public antlr4::ParserRuleContext {
  public:
    TupleExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParen();
    std::vector<ConditionalExpressionContext *> conditionalExpression();
    ConditionalExpressionContext* conditionalExpression(size_t i);
    antlr4::tree::TerminalNode *RightParen();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TupleExpressionContext* tupleExpression();

  class  MethodBindingExpressionContext : public antlr4::ParserRuleContext {
  public:
    MethodBindingExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Amp();
    antlr4::tree::TerminalNode *LeftBrace();
    MethodNameContext *methodName();
    antlr4::tree::TerminalNode *RightBrace();
    MethodOwnerExpressionContext *methodOwnerExpression();
    antlr4::tree::TerminalNode *Dot();
    antlr4::tree::TerminalNode *Weak();
    antlr4::tree::TerminalNode *Unowned();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MethodBindingExpressionContext* methodBindingExpression();

  class  MethodOwnerExpressionContext : public antlr4::ParserRuleContext {
  public:
    MethodOwnerExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnaryExpressionContext *unaryExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MethodOwnerExpressionContext* methodOwnerExpression();

  class  MethodNameContext : public antlr4::ParserRuleContext {
  public:
    MethodNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MethodNameContext* methodName();

  class  LambdaExpressionContext : public antlr4::ParserRuleContext {
  public:
    LambdaExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LambdaDeclaratorContext *lambdaDeclarator();
    LambdaBodyContext *lambdaBody();
    LambdaCaptureListContext *lambdaCaptureList();
    TemplateParamsContext *templateParams();
    ConstraintClauseContext *constraintClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LambdaExpressionContext* lambdaExpression();

  class  LambdaCaptureListContext : public antlr4::ParserRuleContext {
  public:
    LambdaCaptureListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBracket();
    LambdaCaptureClauseContext *lambdaCaptureClause();
    antlr4::tree::TerminalNode *RightBracket();
    antlr4::tree::TerminalNode *Mutable();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LambdaCaptureListContext* lambdaCaptureList();

  class  LambdaCaptureClauseContext : public antlr4::ParserRuleContext {
  public:
    LambdaCaptureClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CaptureContext *> capture();
    CaptureContext* capture(size_t i);
    antlr4::tree::TerminalNode *Assign();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LambdaCaptureClauseContext* lambdaCaptureClause();

  class  CaptureContext : public antlr4::ParserRuleContext {
  public:
    CaptureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *This();
    antlr4::tree::TerminalNode *Weak();
    antlr4::tree::TerminalNode *Unowned();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Assign();
    InitializerClauseContext *initializerClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CaptureContext* capture();

  class  LambdaDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    LambdaDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionParamsContext *functionParams();
    antlr4::tree::TerminalNode *Identifier();
    ReturnTypeContext *returnType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LambdaDeclaratorContext* lambdaDeclarator();

  class  LambdaBodyContext : public antlr4::ParserRuleContext {
  public:
    LambdaBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionBodyContext *functionBody();
    antlr4::tree::TerminalNode *AssignArrow();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LambdaBodyContext* lambdaBody();

  class  PrimaryExpressionContext : public antlr4::ParserRuleContext {
  public:
    PrimaryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LiteralContext *literal();
    antlr4::tree::TerminalNode *This();
    antlr4::tree::TerminalNode *Super();
    antlr4::tree::TerminalNode *Field();
    antlr4::tree::TerminalNode *LeftParen();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RightParen();
    FoldExpressionContext *foldExpression();
    TheTypeIdContext *theTypeId();
    antlr4::tree::TerminalNode *Dot();
    antlr4::tree::TerminalNode *Type();
    antlr4::tree::TerminalNode *Identifier();
    TupleExpressionContext *tupleExpression();
    IdExpressionContext *idExpression();
    antlr4::tree::TerminalNode *Doublecolon();
    LambdaExpressionContext *lambdaExpression();
    MethodBindingExpressionContext *methodBindingExpression();
    DeclvalExpressionContext *declvalExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrimaryExpressionContext* primaryExpression();

  class  FoldExpressionContext : public antlr4::ParserRuleContext {
  public:
    FoldExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    FoldLeftExpressionContext *foldLeftExpression();
    antlr4::tree::TerminalNode *Ellipsis();
    FoldRightExpressionContext *foldRightExpression();
    std::vector<OperatorContext *> operator_();
    OperatorContext* operator_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> And();
    antlr4::tree::TerminalNode* And(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Or();
    antlr4::tree::TerminalNode* Or(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FoldExpressionContext* foldExpression();

  class  FoldLeftExpressionContext : public antlr4::ParserRuleContext {
  public:
    FoldLeftExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnaryExpressionContext *unaryExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FoldLeftExpressionContext* foldLeftExpression();

  class  FoldRightExpressionContext : public antlr4::ParserRuleContext {
  public:
    FoldRightExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnaryExpressionContext *unaryExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FoldRightExpressionContext* foldRightExpression();

  class  TemplateDeductionGuideContext : public antlr4::ParserRuleContext {
  public:
    TemplateDeductionGuideContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TemplateNameContext *templateName();
    antlr4::tree::TerminalNode *LeftParen();
    std::vector<TheTypeIdContext *> theTypeId();
    TheTypeIdContext* theTypeId(size_t i);
    antlr4::tree::TerminalNode *RightParen();
    antlr4::tree::TerminalNode *Arrow();
    SimpleTemplateIdContext *simpleTemplateId();
    antlr4::tree::TerminalNode *Semi();
    TemplateParamsContext *templateParams();
    ImplicitSpecificationContext *implicitSpecification();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);
    ConstraintClauseContext *constraintClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TemplateDeductionGuideContext* templateDeductionGuide();

  class  UnaryPrefixOperatorContext : public antlr4::ParserRuleContext {
  public:
    UnaryPrefixOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Plus();
    antlr4::tree::TerminalNode *Minus();
    antlr4::tree::TerminalNode *Tilde();
    NotContext *not_();
    antlr4::tree::TerminalNode *Dollar();
    antlr4::tree::TerminalNode *Caret();
    antlr4::tree::TerminalNode *DoubleCaret();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UnaryPrefixOperatorContext* unaryPrefixOperator();

  class  UnaryCustomOperatorContext : public antlr4::ParserRuleContext {
  public:
    UnaryCustomOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Op2();
    antlr4::tree::TerminalNode *Op3();
    antlr4::tree::TerminalNode *Op4();
    antlr4::tree::TerminalNode *Op7();
    antlr4::tree::TerminalNode *Op8();
    antlr4::tree::TerminalNode *Op9();
    antlr4::tree::TerminalNode *Op10();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UnaryCustomOperatorContext* unaryCustomOperator();

  class  RefCaptureOperatorContext : public antlr4::ParserRuleContext {
  public:
    RefCaptureOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Amp();
    antlr4::tree::TerminalNode *Ref();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RefCaptureOperatorContext* refCaptureOperator();

  class  UnaryPostfixOperatorContext : public antlr4::ParserRuleContext {
  public:
    UnaryPostfixOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Star();
    antlr4::tree::TerminalNode* Star(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DoubleStar();
    antlr4::tree::TerminalNode* DoubleStar(size_t i);
    antlr4::tree::TerminalNode *Amp();
    antlr4::tree::TerminalNode *Exclamation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UnaryPostfixOperatorContext* unaryPostfixOperator();

  class  NotContext : public antlr4::ParserRuleContext {
  public:
    NotContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Exclamation();
    antlr4::tree::TerminalNode *Not();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NotContext* not_();

  class  OperatorContext : public antlr4::ParserRuleContext {
  public:
    OperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *New();
    antlr4::tree::TerminalNode *Delete();
    antlr4::tree::TerminalNode *In();
    antlr4::tree::TerminalNode *Plus();
    antlr4::tree::TerminalNode *Minus();
    antlr4::tree::TerminalNode *Star();
    antlr4::tree::TerminalNode *DoubleStar();
    antlr4::tree::TerminalNode *Div();
    antlr4::tree::TerminalNode *Mod();
    antlr4::tree::TerminalNode *Caret();
    antlr4::tree::TerminalNode *DoubleCaret();
    antlr4::tree::TerminalNode *Amp();
    antlr4::tree::TerminalNode *Exclamation();
    antlr4::tree::TerminalNode *VertLine();
    antlr4::tree::TerminalNode *Tilde();
    std::vector<antlr4::tree::TerminalNode *> Greater();
    antlr4::tree::TerminalNode* Greater(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Less();
    antlr4::tree::TerminalNode* Less(size_t i);
    antlr4::tree::TerminalNode *GreaterEqual();
    antlr4::tree::TerminalNode *Assign();
    antlr4::tree::TerminalNode *PlusAssign();
    antlr4::tree::TerminalNode *MinusAssign();
    antlr4::tree::TerminalNode *TildeAssign();
    antlr4::tree::TerminalNode *StarAssign();
    antlr4::tree::TerminalNode *DoubleStarAssign();
    antlr4::tree::TerminalNode *ModAssign();
    antlr4::tree::TerminalNode *XorAssign();
    antlr4::tree::TerminalNode *AndAssign();
    antlr4::tree::TerminalNode *OrAssign();
    antlr4::tree::TerminalNode *RightShiftAssign();
    antlr4::tree::TerminalNode *LeftShiftAssign();
    antlr4::tree::TerminalNode *SignedRightShiftAssign();
    antlr4::tree::TerminalNode *Equal();
    antlr4::tree::TerminalNode *NotEqual();
    antlr4::tree::TerminalNode *LessEqual();
    antlr4::tree::TerminalNode *Spaceship();
    antlr4::tree::TerminalNode *PlusPlus();
    antlr4::tree::TerminalNode *MinusMinus();
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    antlr4::tree::TerminalNode *Op1();
    antlr4::tree::TerminalNode *Op2();
    antlr4::tree::TerminalNode *Op3();
    antlr4::tree::TerminalNode *Op4();
    antlr4::tree::TerminalNode *Op5();
    antlr4::tree::TerminalNode *Op6();
    antlr4::tree::TerminalNode *Op7();
    antlr4::tree::TerminalNode *Op8();
    antlr4::tree::TerminalNode *Op9();
    antlr4::tree::TerminalNode *Op10();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OperatorContext* operator_();

  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IntegerLiteral();
    antlr4::tree::TerminalNode *FloatingLiteral();
    antlr4::tree::TerminalNode *DecimalTypeLiteral();
    antlr4::tree::TerminalNode *BooleanLiteral();
    antlr4::tree::TerminalNode *CharacterLiteral();
    antlr4::tree::TerminalNode *StringLiteral();
    antlr4::tree::TerminalNode *MultilineStringLiteral();
    InterpolatedStringLiteralContext *interpolatedStringLiteral();
    antlr4::tree::TerminalNode *Null();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LiteralContext* literal();

  class  InterpolatedStringLiteralContext : public antlr4::ParserRuleContext {
  public:
    InterpolatedStringLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InterpolatedRegularStringLiteralContext *interpolatedRegularStringLiteral();
    InterpolatedVerbatiumStringLiteralContext *interpolatedVerbatiumStringLiteral();
    InterpolatedMultilineStringLiteralContext *interpolatedMultilineStringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InterpolatedStringLiteralContext* interpolatedStringLiteral();

  class  InterpolatedRegularStringLiteralContext : public antlr4::ParserRuleContext {
  public:
    InterpolatedRegularStringLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *InterpolatedRegularStringStart();
    antlr4::tree::TerminalNode *DOUBLE_QUOTE_INSIDE();
    std::vector<InterpolatedRegularStringPartContext *> interpolatedRegularStringPart();
    InterpolatedRegularStringPartContext* interpolatedRegularStringPart(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InterpolatedRegularStringLiteralContext* interpolatedRegularStringLiteral();

  class  InterpolatedRegularStringPartContext : public antlr4::ParserRuleContext {
  public:
    InterpolatedRegularStringPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InterpolatedExpressionContext *interpolatedExpression();
    antlr4::tree::TerminalNode *DOUBLE_CURLY_INSIDE();
    antlr4::tree::TerminalNode *REGULAR_CHAR_INSIDE();
    antlr4::tree::TerminalNode *REGULAR_STRING_INSIDE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InterpolatedRegularStringPartContext* interpolatedRegularStringPart();

  class  InterpolatedVerbatiumStringLiteralContext : public antlr4::ParserRuleContext {
  public:
    InterpolatedVerbatiumStringLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *InterpolatedGraveStringStart();
    antlr4::tree::TerminalNode *GRAVE_INSIDE();
    std::vector<InterpolatedVerbatiumStringPartContext *> interpolatedVerbatiumStringPart();
    InterpolatedVerbatiumStringPartContext* interpolatedVerbatiumStringPart(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InterpolatedVerbatiumStringLiteralContext* interpolatedVerbatiumStringLiteral();

  class  InterpolatedVerbatiumStringPartContext : public antlr4::ParserRuleContext {
  public:
    InterpolatedVerbatiumStringPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InterpolatedExpressionContext *interpolatedExpression();
    antlr4::tree::TerminalNode *DOUBLE_CURLY_INSIDE();
    antlr4::tree::TerminalNode *VERBATIUM_DOUBLE_GRAVE_INSIDE();
    antlr4::tree::TerminalNode *GRAVE_STRING_INSIDE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InterpolatedVerbatiumStringPartContext* interpolatedVerbatiumStringPart();

  class  InterpolatedMultilineStringLiteralContext : public antlr4::ParserRuleContext {
  public:
    InterpolatedMultilineStringLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *InterpolatedMultilineStringStart();
    antlr4::tree::TerminalNode *TRIPLE_QUOTE_INSIDE();
    std::vector<InterpolatedMultilineStringPartContext *> interpolatedMultilineStringPart();
    InterpolatedMultilineStringPartContext* interpolatedMultilineStringPart(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InterpolatedMultilineStringLiteralContext* interpolatedMultilineStringLiteral();

  class  InterpolatedMultilineStringPartContext : public antlr4::ParserRuleContext {
  public:
    InterpolatedMultilineStringPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InterpolatedExpressionContext *interpolatedExpression();
    antlr4::tree::TerminalNode *DOUBLE_CURLY_INSIDE();
    antlr4::tree::TerminalNode *MULTILINE_QUOTES_INSIDE();
    antlr4::tree::TerminalNode *MULTILINE_STRING_INSIDE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InterpolatedMultilineStringPartContext* interpolatedMultilineStringPart();

  class  InterpolatedExpressionContext : public antlr4::ParserRuleContext {
  public:
    InterpolatedExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NullCoalescingExpressionContext *nullCoalescingExpression();
    antlr4::tree::TerminalNode *Colon();
    std::vector<antlr4::tree::TerminalNode *> FORMAT_STRING();
    antlr4::tree::TerminalNode* FORMAT_STRING(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InterpolatedExpressionContext* interpolatedExpression();

  class  DeclvalExpressionContext : public antlr4::ParserRuleContext {
  public:
    DeclvalExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Declval();
    antlr4::tree::TerminalNode *LeftParen();
    TheTypeIdContext *theTypeId();
    antlr4::tree::TerminalNode *RightParen();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeclvalExpressionContext* declvalExpression();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool nestedPackageNameSempred(NestedPackageNameContext *_localctx, size_t predicateIndex);
  bool powerExpressionSempred(PowerExpressionContext *_localctx, size_t predicateIndex);
  bool multiplicativeExpressionSempred(MultiplicativeExpressionContext *_localctx, size_t predicateIndex);
  bool additiveExpressionSempred(AdditiveExpressionContext *_localctx, size_t predicateIndex);
  bool shiftExpressionSempred(ShiftExpressionContext *_localctx, size_t predicateIndex);
  bool relationalExpressionSempred(RelationalExpressionContext *_localctx, size_t predicateIndex);
  bool equalityExpressionSempred(EqualityExpressionContext *_localctx, size_t predicateIndex);
  bool andExpressionSempred(AndExpressionContext *_localctx, size_t predicateIndex);
  bool exclusiveOrExpressionSempred(ExclusiveOrExpressionContext *_localctx, size_t predicateIndex);
  bool inclusiveOrExpressionSempred(InclusiveOrExpressionContext *_localctx, size_t predicateIndex);
  bool nestedNameSpecifierSempred(NestedNameSpecifierContext *_localctx, size_t predicateIndex);
  bool postfixExpressionSempred(PostfixExpressionContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

