
#include "export.h"


// Generated from AstrumParser.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"


namespace AstrumLang {


class ASTRUMLANG_API AstrumParser : public antlr4::Parser {
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
    Mutable = 79, Nameof = 80, New = 81, Noexcept = 82, Null = 83, Object = 84, 
    Offsetof = 85, Operator_ = 86, Out = 87, Override = 88, Package = 89, 
    Private = 90, Protected = 91, Public = 92, Ref = 93, Return = 94, Rune = 95, 
    Self = 96, Set = 97, Sizeof = 98, Stackalloc = 99, Static = 100, Str = 101, 
    Struct = 102, Super = 103, Switch = 104, Test = 105, This = 106, Thread_local = 107, 
    Throw = 108, True_ = 109, Try = 110, Type = 111, Union = 112, Unowned = 113, 
    Using = 114, U8 = 115, U16 = 116, U32 = 117, U64 = 118, U128 = 119, 
    Unsafe = 120, Usize = 121, Version = 122, Virtual = 123, Void = 124, 
    Volatile = 125, Weak = 126, Where = 127, While = 128, Yield = 129, Not = 130, 
    And = 131, Or = 132, Identifier = 133, LeftParen = 134, RightParen = 135, 
    LeftBracket = 136, RightBracket = 137, LeftBrace = 138, RightBrace = 139, 
    Plus = 140, Minus = 141, Star = 142, DoubleStar = 143, Div = 144, Mod = 145, 
    LifetimeAnnotation = 146, Caret = 147, DoubleCaret = 148, Amp = 149, 
    VertLine = 150, Tilde = 151, Colon = 152, Assign = 153, Less = 154, 
    Greater = 155, PlusAssign = 156, MinusAssign = 157, TildeAssign = 158, 
    StarAssign = 159, DoubleStarAssign = 160, DivAssign = 161, ModAssign = 162, 
    XorAssign = 163, AndAssign = 164, OrAssign = 165, LeftShiftAssign = 166, 
    RightShiftAssign = 167, SignedRightShiftAssign = 168, Equal = 169, NotEqual = 170, 
    IdentityEqual = 171, NotIdentityEqual = 172, Spaceship = 173, LessEqual = 174, 
    GreaterEqual = 175, PlusPlus = 176, MinusMinus = 177, Comma = 178, Arrow = 179, 
    AssignArrow = 180, EqualArrow = 181, Exclamation = 182, Question = 183, 
    DoubleQuestion = 184, DoubleQuestionAssign = 185, Doublecolon = 186, 
    Semi = 187, Dot = 188, DoubleDot = 189, DoubleDotEqual = 190, Dollar = 191, 
    Ellipsis = 192, Apostroph = 193, AtSign = 194, Op1 = 195, Op2 = 196, 
    Op10 = 197, Op3 = 198, Op4 = 199, Op5 = 200, Op7 = 201, Op6 = 202, Op8 = 203, 
    Op9 = 204, DOUBLE_CURLY_INSIDE = 205, OPEN_BRACE_INSIDE = 206, REGULAR_CHAR_INSIDE = 207, 
    VERBATIUM_DOUBLE_GRAVE_INSIDE = 208, MULTILINE_QUOTES_INSIDE = 209, 
    DOUBLE_QUOTE_INSIDE = 210, GRAVE_INSIDE = 211, TRIPLE_QUOTE_INSIDE = 212, 
    REGULAR_STRING_INSIDE = 213, GRAVE_STRING_INSIDE = 214, MULTILINE_STRING_INSIDE = 215, 
    CLOSE_BRACE_INSIDE = 216, FORMAT_STRING = 217, DOUBLE_CURLY_CLOSE_INSIDE = 218
  };

  enum {
    RuleModule = 0, RulePackageDeclaration = 1, RulePackageName = 2, RuleNestedPackageName = 3, 
    RuleModuleName = 4, RuleImportDeclaration = 5, RuleDeclarationSeq = 6, 
    RuleDeclaration = 7, RuleSymbolSpecifierSeq = 8, RuleVersionDefinition = 9, 
    RuleExternVariableDeclaration = 10, RuleBlockDeclaration = 11, RuleMemberBlockDeclaration = 12, 
    RuleAssertDeclaration = 13, RuleAssumeDeclaration = 14, RuleUnitTestDeclaration = 15, 
    RuleDeclarationCompoundStatement = 16, RuleVersionConditionalDeclaration = 17, 
    RuleVersionIfDeclaration = 18, RuleVersionElseDeclaration = 19, RuleDeclSpecifier = 20, 
    RuleDeclSpecifierSeq = 21, RuleIdentifierSeq = 22, RuleSimpleDeclaration = 23, 
    RuleBitFieldDeclaration = 24, RuleDeconstructionDeclaration = 25, RuleRefDeclaration = 26, 
    RuleMemberRefDeclaration = 27, RuleSimpleMultiDeclaration = 28, RuleMultiDeclaration = 29, 
    RuleConstantDeclaration = 30, RuleForwardVarDeclaration = 31, RuleAliasDeclaration = 32, 
    RuleAccessSpecifier = 33, RuleProtectedInternal = 34, RuleStatement = 35, 
    RuleLabeledStatement = 36, RuleDeclarationStatement = 37, RuleExpressionStatement = 38, 
    RuleCompoundStatement = 39, RuleSelectionStatement = 40, RuleCondition = 41, 
    RuleElseBranch = 42, RuleSwitchStatementBranch = 43, RuleDeclarator = 44, 
    RuleInlineCppStatement = 45, RuleIterationStatement = 46, RuleWhileCondition = 47, 
    RuleDoWhileCondition = 48, RuleForInitStatement = 49, RuleForRangeDeclaration = 50, 
    RuleForRangeInitializer = 51, RuleExpressionSeq = 52, RuleJumpStatement = 53, 
    RuleYieldStatement = 54, RuleVersionSelectionStatement = 55, RuleVersionSelectionStatementBlock = 56, 
    RuleScopeSafeCompoundStatement = 57, RuleTryBlock = 58, RuleExceptionHandler = 59, 
    RuleExceptionDeclaration = 60, RuleLockStatement = 61, RuleExpression = 62, 
    RuleRangeExpression = 63, RuleRangeExpressionStart = 64, RuleRangeExpressionEnd = 65, 
    RuleSwitchExpression = 66, RuleSwitchExpressionBranch = 67, RulePowerExpression = 68, 
    RuleMultiplicativeExpression = 69, RuleAdditiveExpression = 70, RuleShiftExpression = 71, 
    RuleThreeWayComparisonExpression = 72, RuleRelationalExpression = 73, 
    RuleEqualityExpression = 74, RuleAndExpression = 75, RuleExclusiveOrExpression = 76, 
    RuleInclusiveOrExpression = 77, RuleLogicalAndExpression = 78, RuleLogicalOrExpression = 79, 
    RuleNullCoalescingExpression = 80, RuleNullCoalescingBranch = 81, RuleConditionalExpression = 82, 
    RuleConstantExpression = 83, RuleAssignmentExpression = 84, RuleInitializerClause = 85, 
    RuleBracedInitList = 86, RuleInitializerList = 87, RuleInitializerPart = 88, 
    RuleCollectionExpression = 89, RuleKeyValuePairExpression = 90, RuleExpressionList = 91, 
    RuleExpressionListPart = 92, RuleThrowExpression = 93, RuleIdExpression = 94, 
    RuleQualifiedId = 95, RuleUnqualifiedId = 96, RuleUnaryExpression = 97, 
    RuleUnaryExpressionTail = 98, RuleNewExpression = 99, RuleStackallocExpression = 100, 
    RuleMemorySpaceSetter = 101, RuleNewInitializer = 102, RuleFullPostfixExpression = 103, 
    RulePostfixExpression = 104, RuleTupleExpression = 105, RuleMethodBindingExpression = 106, 
    RuleMethodOwnerExpression = 107, RuleMethodName = 108, RulePrimaryExpression = 109, 
    RuleFoldExpression = 110, RuleFoldLeftExpression = 111, RuleFoldRightExpression = 112, 
    RuleDeclvalExpression = 113, RuleLambdaExpression = 114, RuleLambdaCaptureList = 115, 
    RuleLambdaCaptureClause = 116, RuleCapture = 117, RuleLambdaDeclarator = 118, 
    RuleLambdaBody = 119, RuleTheTypeId = 120, RuleSingleTypeId = 121, RuleTypePostfix = 122, 
    RuleArrayDeclarator = 123, RulePointerOperator = 124, RulePointerOperatorSeq = 125, 
    RuleTypeSpecifierSeq = 126, RuleTypeSpecifier = 127, RuleTrailingTypeSpecifier = 128, 
    RuleTypeNameSpecifier = 129, RuleCvQualifierSeq = 130, RuleCvQualifier = 131, 
    RuleTypename = 132, RuleClassName = 133, RuleDecltypeSpecifier = 134, 
    RuleDecaySpecifier = 135, RuleEnumName = 136, RuleSimpleTypeSpecifier = 137, 
    RuleFunctionTypeId = 138, RuleTypeIdWithSpecification = 139, RuleNamedTupleField = 140, 
    RuleNestedNameSpecifier = 141, RuleNamespaceName = 142, RuleTemplateName = 143, 
    RuleSimpleTemplateId = 144, RuleOperatorTemplateId = 145, RuleTemplateId = 146, 
    RulePatternList = 147, RulePatternCombinationOperator = 148, RulePattern = 149, 
    RulePropertyPattern = 150, RuleStructDefinition = 151, RuleStructHead = 152, 
    RuleStructMemberSpecification = 153, RuleMemberDeclarationCompoundStatement = 154, 
    RuleMemberVersionConditionalDeclaration = 155, RuleMemberVersionIfDeclaration = 156, 
    RuleMemberVersionElseDeclaration = 157, RuleStructMemberDeclaration = 158, 
    RuleClassDefinition = 159, RuleClassHead = 160, RuleInterfaceDefinition = 161, 
    RuleInterfaceHead = 162, RuleInterfaceMemberSpecification = 163, RuleInterfaceMemberDeclaration = 164, 
    RuleAssociatedTypeDeclaration = 165, RuleEnumDefinition = 166, RuleEnumHead = 167, 
    RuleEnumBase = 168, RuleEnumList = 169, RuleEnumeratorDefinition = 170, 
    RuleEnumMemberSpecification = 171, RuleEnumMemberDeclaration = 172, 
    RuleEnumClassDefinition = 173, RuleEnumClassHead = 174, RuleEnumClassList = 175, 
    RuleClassEnumeratorDefinition = 176, RuleEnumClassMemberSpecification = 177, 
    RuleUnionDefinition = 178, RuleUnionHead = 179, RuleUnionList = 180, 
    RuleUnionEnumerator = 181, RuleUnionEnumeratorClause = 182, RuleUnionMemberSpecification = 183, 
    RuleExtensionDefinition = 184, RuleExtensionHead = 185, RuleExtensionMemberSpecification = 186, 
    RuleExtensionMemberDeclaration = 187, RuleBaseClause = 188, RuleBaseSpecifierList = 189, 
    RuleBaseSpecifier = 190, RuleProperty = 191, RulePropertyBody = 192, 
    RuleAbstractProperty = 193, RuleInterfaceProperty = 194, RulePropertyGetter = 195, 
    RulePropertySetter = 196, RuleAbstractPropertyGetter = 197, RuleAbstractPropertySetter = 198, 
    RuleExternFunctionDeclaration = 199, RuleFunctionTemplateDeclaration = 200, 
    RuleFunctionDefinition = 201, RuleAbstractMethodDeclaration = 202, RuleInterfaceMethodDeclaration = 203, 
    RuleFunctionSpecifier = 204, RuleFunctionParams = 205, RuleParamDeclClause = 206, 
    RuleParamDeclList = 207, RuleParamDeclaration = 208, RuleParamSpecification = 209, 
    RuleReturnType = 210, RuleFunctionBody = 211, RuleShortFunctionBody = 212, 
    RuleExceptionSpecification = 213, RuleFriendDeclaration = 214, RuleExternMethodDeclaration = 215, 
    RuleOperatorFunctionId = 216, RuleConstructor = 217, RuleConstructorBody = 218, 
    RuleMemberInitializationList = 219, RuleDelegatingConstructorBody = 220, 
    RuleDelegatingConstructorStatement = 221, RuleMemberInitializationStatement = 222, 
    RuleImplicitSpecification = 223, RuleStaticConstructor = 224, RuleDestructor = 225, 
    RuleStaticDestructor = 226, RuleConversionFunction = 227, RuleConversionFunctionId = 228, 
    RuleIndexer = 229, RuleIndexerProperty = 230, RuleIndexerGetter = 231, 
    RuleIndexerSetter = 232, RuleInterfaceIndexer = 233, RuleTemplateParams = 234, 
    RuleTemplateParamDeclaration = 235, RuleTemplateTypename = 236, RuleTemplateArgumentList = 237, 
    RuleTemplateArgument = 238, RuleConstraintClause = 239, RuleTypeTrait = 240, 
    RuleTemplateDeductionGuide = 241, RuleAttributeSpecifierSeq = 242, RuleAttributeSpecifier = 243, 
    RuleAttributeArgumentClause = 244, RuleAssignmentOperator = 245, RuleShiftOperator = 246, 
    RuleUnaryPrefixOperator = 247, RuleUnaryCustomOperator = 248, RuleRefCaptureOperator = 249, 
    RuleUnaryPostfixOperator = 250, RuleNot = 251, RuleOperator = 252, RuleLiteral = 253, 
    RuleInterpolatedStringLiteral = 254, RuleInterpolatedRegularStringLiteral = 255, 
    RuleInterpolatedRegularStringPart = 256, RuleInterpolatedVerbatiumStringLiteral = 257, 
    RuleInterpolatedVerbatiumStringPart = 258, RuleInterpolatedMultilineStringLiteral = 259, 
    RuleInterpolatedMultilineStringPart = 260, RuleInterpolatedExpression = 261
  };

  explicit AstrumParser(antlr4::TokenStream *input);

  AstrumParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~AstrumParser() override;

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
  class DeclarationCompoundStatementContext;
  class VersionConditionalDeclarationContext;
  class VersionIfDeclarationContext;
  class VersionElseDeclarationContext;
  class DeclSpecifierContext;
  class DeclSpecifierSeqContext;
  class IdentifierSeqContext;
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
  class AccessSpecifierContext;
  class ProtectedInternalContext;
  class StatementContext;
  class LabeledStatementContext;
  class DeclarationStatementContext;
  class ExpressionStatementContext;
  class CompoundStatementContext;
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
  class YieldStatementContext;
  class VersionSelectionStatementContext;
  class VersionSelectionStatementBlockContext;
  class ScopeSafeCompoundStatementContext;
  class TryBlockContext;
  class ExceptionHandlerContext;
  class ExceptionDeclarationContext;
  class LockStatementContext;
  class ExpressionContext;
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
  class CollectionExpressionContext;
  class KeyValuePairExpressionContext;
  class ExpressionListContext;
  class ExpressionListPartContext;
  class ThrowExpressionContext;
  class IdExpressionContext;
  class QualifiedIdContext;
  class UnqualifiedIdContext;
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
  class PrimaryExpressionContext;
  class FoldExpressionContext;
  class FoldLeftExpressionContext;
  class FoldRightExpressionContext;
  class DeclvalExpressionContext;
  class LambdaExpressionContext;
  class LambdaCaptureListContext;
  class LambdaCaptureClauseContext;
  class CaptureContext;
  class LambdaDeclaratorContext;
  class LambdaBodyContext;
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
  class PatternListContext;
  class PatternCombinationOperatorContext;
  class PatternContext;
  class PropertyPatternContext;
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
  class AssociatedTypeDeclarationContext;
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
  class FunctionSpecifierContext;
  class FunctionParamsContext;
  class ParamDeclClauseContext;
  class ParamDeclListContext;
  class ParamDeclarationContext;
  class ParamSpecificationContext;
  class ReturnTypeContext;
  class FunctionBodyContext;
  class ShortFunctionBodyContext;
  class ExceptionSpecificationContext;
  class FriendDeclarationContext;
  class ExternMethodDeclarationContext;
  class OperatorFunctionIdContext;
  class ConstructorContext;
  class ConstructorBodyContext;
  class MemberInitializationListContext;
  class DelegatingConstructorBodyContext;
  class DelegatingConstructorStatementContext;
  class MemberInitializationStatementContext;
  class ImplicitSpecificationContext;
  class StaticConstructorContext;
  class DestructorContext;
  class StaticDestructorContext;
  class ConversionFunctionContext;
  class ConversionFunctionIdContext;
  class IndexerContext;
  class IndexerPropertyContext;
  class IndexerGetterContext;
  class IndexerSetterContext;
  class InterfaceIndexerContext;
  class TemplateParamsContext;
  class TemplateParamDeclarationContext;
  class TemplateTypenameContext;
  class TemplateArgumentListContext;
  class TemplateArgumentContext;
  class ConstraintClauseContext;
  class TypeTraitContext;
  class TemplateDeductionGuideContext;
  class AttributeSpecifierSeqContext;
  class AttributeSpecifierContext;
  class AttributeArgumentClauseContext;
  class AssignmentOperatorContext;
  class ShiftOperatorContext;
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

  class ASTRUMLANG_API ModuleContext : public antlr4::ParserRuleContext {
  public:
    ModuleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationSeqContext *declarationSeq();
    antlr4::tree::TerminalNode *EOF();
    PackageDeclarationContext *packageDeclaration();
    std::vector<ImportDeclarationContext *> importDeclaration();
    ImportDeclarationContext* importDeclaration(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ModuleContext* module();

  class ASTRUMLANG_API PackageDeclarationContext : public antlr4::ParserRuleContext {
  public:
    PackageDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Package();
    PackageNameContext *packageName();
    antlr4::tree::TerminalNode *Semi();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PackageDeclarationContext* packageDeclaration();

  class ASTRUMLANG_API PackageNameContext : public antlr4::ParserRuleContext {
  public:
    PackageNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    NestedPackageNameContext *nestedPackageName();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PackageNameContext* packageName();

  class ASTRUMLANG_API NestedPackageNameContext : public antlr4::ParserRuleContext {
  public:
    NestedPackageNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Dot();
    NestedPackageNameContext *nestedPackageName();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NestedPackageNameContext* nestedPackageName();
  NestedPackageNameContext* nestedPackageName(int precedence);
  class ASTRUMLANG_API ModuleNameContext : public antlr4::ParserRuleContext {
  public:
    ModuleNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    NestedPackageNameContext *nestedPackageName();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ModuleNameContext* moduleName();

  class ASTRUMLANG_API ImportDeclarationContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ImportDeclarationContext* importDeclaration();

  class ASTRUMLANG_API DeclarationSeqContext : public antlr4::ParserRuleContext {
  public:
    DeclarationSeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationSeqContext* declarationSeq();

  class ASTRUMLANG_API DeclarationContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationContext* declaration();

  class ASTRUMLANG_API SymbolSpecifierSeqContext : public antlr4::ParserRuleContext {
  public:
    SymbolSpecifierSeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AccessSpecifierContext *accessSpecifier();
    antlr4::tree::TerminalNode *Unsafe();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SymbolSpecifierSeqContext* symbolSpecifierSeq();

  class ASTRUMLANG_API VersionDefinitionContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VersionDefinitionContext* versionDefinition();

  class ASTRUMLANG_API ExternVariableDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ExternVariableDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Extern();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Colon();
    TheTypeIdContext *theTypeId();
    antlr4::tree::TerminalNode *Semi();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExternVariableDeclarationContext* externVariableDeclaration();

  class ASTRUMLANG_API BlockDeclarationContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockDeclarationContext* blockDeclaration();

  class ASTRUMLANG_API MemberBlockDeclarationContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MemberBlockDeclarationContext* memberBlockDeclaration();

  class ASTRUMLANG_API AssertDeclarationContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssertDeclarationContext* assertDeclaration();

  class ASTRUMLANG_API AssumeDeclarationContext : public antlr4::ParserRuleContext {
  public:
    AssumeDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Assume();
    ConditionalExpressionContext *conditionalExpression();
    antlr4::tree::TerminalNode *Semi();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssumeDeclarationContext* assumeDeclaration();

  class ASTRUMLANG_API UnitTestDeclarationContext : public antlr4::ParserRuleContext {
  public:
    UnitTestDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Test();
    CompoundStatementContext *compoundStatement();
    antlr4::tree::TerminalNode *StringLiteral();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnitTestDeclarationContext* unitTestDeclaration();

  class ASTRUMLANG_API DeclarationCompoundStatementContext : public antlr4::ParserRuleContext {
  public:
    DeclarationCompoundStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationCompoundStatementContext* declarationCompoundStatement();

  class ASTRUMLANG_API VersionConditionalDeclarationContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VersionConditionalDeclarationContext* versionConditionalDeclaration();

  class ASTRUMLANG_API VersionIfDeclarationContext : public antlr4::ParserRuleContext {
  public:
    VersionIfDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationContext *declaration();
    DeclarationCompoundStatementContext *declarationCompoundStatement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VersionIfDeclarationContext* versionIfDeclaration();

  class ASTRUMLANG_API VersionElseDeclarationContext : public antlr4::ParserRuleContext {
  public:
    VersionElseDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationContext *declaration();
    DeclarationCompoundStatementContext *declarationCompoundStatement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VersionElseDeclarationContext* versionElseDeclaration();

  class ASTRUMLANG_API DeclSpecifierContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclSpecifierContext* declSpecifier();

  class ASTRUMLANG_API DeclSpecifierSeqContext : public antlr4::ParserRuleContext {
  public:
    DeclSpecifierSeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DeclSpecifierContext *> declSpecifier();
    DeclSpecifierContext* declSpecifier(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclSpecifierSeqContext* declSpecifierSeq();

  class ASTRUMLANG_API IdentifierSeqContext : public antlr4::ParserRuleContext {
  public:
    IdentifierSeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierSeqContext* identifierSeq();

  class ASTRUMLANG_API SimpleDeclarationContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpleDeclarationContext* simpleDeclaration();

  class ASTRUMLANG_API BitFieldDeclarationContext : public antlr4::ParserRuleContext {
  public:
    BitFieldDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    std::vector<antlr4::tree::TerminalNode *> Colon();
    antlr4::tree::TerminalNode* Colon(size_t i);
    TheTypeIdContext *theTypeId();
    antlr4::tree::TerminalNode *IntegerLiteral();
    antlr4::tree::TerminalNode *Semi();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BitFieldDeclarationContext* bitFieldDeclaration();

  class ASTRUMLANG_API DeconstructionDeclarationContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeconstructionDeclarationContext* deconstructionDeclaration();

  class ASTRUMLANG_API RefDeclarationContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RefDeclarationContext* refDeclaration();

  class ASTRUMLANG_API MemberRefDeclarationContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MemberRefDeclarationContext* memberRefDeclaration();

  class ASTRUMLANG_API SimpleMultiDeclarationContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpleMultiDeclarationContext* simpleMultiDeclaration();

  class ASTRUMLANG_API MultiDeclarationContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MultiDeclarationContext* multiDeclaration();

  class ASTRUMLANG_API ConstantDeclarationContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantDeclarationContext* constantDeclaration();

  class ASTRUMLANG_API ForwardVarDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ForwardVarDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Forward();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Colon();
    antlr4::tree::TerminalNode *Assign();
    InitializerClauseContext *initializerClause();
    antlr4::tree::TerminalNode *Semi();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForwardVarDeclarationContext* forwardVarDeclaration();

  class ASTRUMLANG_API AliasDeclarationContext : public antlr4::ParserRuleContext {
  public:
    AliasDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Type();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Assign();
    TheTypeIdContext *theTypeId();
    antlr4::tree::TerminalNode *Semi();
    TemplateParamsContext *templateParams();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AliasDeclarationContext* aliasDeclaration();

  class ASTRUMLANG_API AccessSpecifierContext : public antlr4::ParserRuleContext {
  public:
    AccessSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Private();
    antlr4::tree::TerminalNode *Protected();
    antlr4::tree::TerminalNode *Public();
    antlr4::tree::TerminalNode *Internal();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AccessSpecifierContext* accessSpecifier();

  class ASTRUMLANG_API ProtectedInternalContext : public antlr4::ParserRuleContext {
  public:
    ProtectedInternalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Protected();
    antlr4::tree::TerminalNode *Internal();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProtectedInternalContext* protectedInternal();

  class ASTRUMLANG_API StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationStatementContext *declarationStatement();
    ExpressionStatementContext *expressionStatement();
    LabeledStatementContext *labeledStatement();
    VersionSelectionStatementContext *versionSelectionStatement();
    SelectionStatementContext *selectionStatement();
    IterationStatementContext *iterationStatement();
    JumpStatementContext *jumpStatement();
    TryBlockContext *tryBlock();
    LockStatementContext *lockStatement();
    YieldStatementContext *yieldStatement();
    FunctionDefinitionContext *functionDefinition();
    CompoundStatementContext *compoundStatement();
    antlr4::tree::TerminalNode *Unsafe();
    InlineCppStatementContext *inlineCppStatement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class ASTRUMLANG_API LabeledStatementContext : public antlr4::ParserRuleContext {
  public:
    LabeledStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Colon();
    IterationStatementContext *iterationStatement();
    SelectionStatementContext *selectionStatement();
    CompoundStatementContext *compoundStatement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LabeledStatementContext* labeledStatement();

  class ASTRUMLANG_API DeclarationStatementContext : public antlr4::ParserRuleContext {
  public:
    DeclarationStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockDeclarationContext *blockDeclaration();
    StructDefinitionContext *structDefinition();
    ExternVariableDeclarationContext *externVariableDeclaration();
    ExternFunctionDeclarationContext *externFunctionDeclaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationStatementContext* declarationStatement();

  class ASTRUMLANG_API ExpressionStatementContext : public antlr4::ParserRuleContext {
  public:
    ExpressionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Semi();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionStatementContext* expressionStatement();

  class ASTRUMLANG_API CompoundStatementContext : public antlr4::ParserRuleContext {
  public:
    CompoundStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompoundStatementContext* compoundStatement();

  class ASTRUMLANG_API SelectionStatementContext : public antlr4::ParserRuleContext {
  public:
    SelectionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    antlr4::tree::TerminalNode *LeftParen();
    ConditionContext *condition();
    antlr4::tree::TerminalNode *RightParen();
    StatementContext *statement();
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectionStatementContext* selectionStatement();

  class ASTRUMLANG_API ConditionContext : public antlr4::ParserRuleContext {
  public:
    ConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LogicalOrExpressionContext *logicalOrExpression();
    SimpleDeclarationContext *simpleDeclaration();
    DeclaratorContext *declarator();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionContext* condition();

  class ASTRUMLANG_API ElseBranchContext : public antlr4::ParserRuleContext {
  public:
    ElseBranchContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElseBranchContext* elseBranch();

  class ASTRUMLANG_API SwitchStatementBranchContext : public antlr4::ParserRuleContext {
  public:
    SwitchStatementBranchContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PatternListContext *patternList();
    antlr4::tree::TerminalNode *AssignArrow();
    StatementContext *statement();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SwitchStatementBranchContext* switchStatementBranch();

  class ASTRUMLANG_API DeclaratorContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclaratorContext* declarator();

  class ASTRUMLANG_API InlineCppStatementContext : public antlr4::ParserRuleContext {
  public:
    InlineCppStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Cpp();
    antlr4::tree::TerminalNode *StringLiteral();
    antlr4::tree::TerminalNode *Semi();
    antlr4::tree::TerminalNode *Unsafe();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InlineCppStatementContext* inlineCppStatement();

  class ASTRUMLANG_API IterationStatementContext : public antlr4::ParserRuleContext {
  public:
    IterationStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *While();
    antlr4::tree::TerminalNode *LeftParen();
    WhileConditionContext *whileCondition();
    antlr4::tree::TerminalNode *RightParen();
    StatementContext *statement();
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IterationStatementContext* iterationStatement();

  class ASTRUMLANG_API WhileConditionContext : public antlr4::ParserRuleContext {
  public:
    WhileConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LogicalOrExpressionContext *logicalOrExpression();
    DeclaratorContext *declarator();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhileConditionContext* whileCondition();

  class ASTRUMLANG_API DoWhileConditionContext : public antlr4::ParserRuleContext {
  public:
    DoWhileConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LogicalOrExpressionContext *logicalOrExpression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DoWhileConditionContext* doWhileCondition();

  class ASTRUMLANG_API ForInitStatementContext : public antlr4::ParserRuleContext {
  public:
    ForInitStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LogicalOrExpressionContext *logicalOrExpression();
    antlr4::tree::TerminalNode *Semi();
    BlockDeclarationContext *blockDeclaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForInitStatementContext* forInitStatement();

  class ASTRUMLANG_API ForRangeDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ForRangeDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierSeqContext *identifierSeq();
    antlr4::tree::TerminalNode *Amp();
    antlr4::tree::TerminalNode *Const();
    antlr4::tree::TerminalNode *Let();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForRangeDeclarationContext* forRangeDeclaration();

  class ASTRUMLANG_API ForRangeInitializerContext : public antlr4::ParserRuleContext {
  public:
    ForRangeInitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LogicalOrExpressionContext *logicalOrExpression();
    BracedInitListContext *bracedInitList();
    CollectionExpressionContext *collectionExpression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForRangeInitializerContext* forRangeInitializer();

  class ASTRUMLANG_API ExpressionSeqContext : public antlr4::ParserRuleContext {
  public:
    ExpressionSeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *Comma();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionSeqContext* expressionSeq();

  class ASTRUMLANG_API JumpStatementContext : public antlr4::ParserRuleContext {
  public:
    JumpStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Semi();
    antlr4::tree::TerminalNode *Break();
    antlr4::tree::TerminalNode *Continue();
    antlr4::tree::TerminalNode *Return();
    antlr4::tree::TerminalNode *Identifier();
    ExpressionContext *expression();
    BracedInitListContext *bracedInitList();
    CollectionExpressionContext *collectionExpression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  JumpStatementContext* jumpStatement();

  class ASTRUMLANG_API YieldStatementContext : public antlr4::ParserRuleContext {
  public:
    YieldStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Yield();
    antlr4::tree::TerminalNode *Semi();
    ExpressionContext *expression();
    BracedInitListContext *bracedInitList();
    CollectionExpressionContext *collectionExpression();
    antlr4::tree::TerminalNode *Break();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  YieldStatementContext* yieldStatement();

  class ASTRUMLANG_API VersionSelectionStatementContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VersionSelectionStatementContext* versionSelectionStatement();

  class ASTRUMLANG_API VersionSelectionStatementBlockContext : public antlr4::ParserRuleContext {
  public:
    VersionSelectionStatementBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ScopeSafeCompoundStatementContext *scopeSafeCompoundStatement();
    StatementContext *statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VersionSelectionStatementBlockContext* versionSelectionStatementBlock();

  class ASTRUMLANG_API ScopeSafeCompoundStatementContext : public antlr4::ParserRuleContext {
  public:
    ScopeSafeCompoundStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ScopeSafeCompoundStatementContext* scopeSafeCompoundStatement();

  class ASTRUMLANG_API TryBlockContext : public antlr4::ParserRuleContext {
  public:
    TryBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Try();
    CompoundStatementContext *compoundStatement();
    std::vector<ExceptionHandlerContext *> exceptionHandler();
    ExceptionHandlerContext* exceptionHandler(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TryBlockContext* tryBlock();

  class ASTRUMLANG_API ExceptionHandlerContext : public antlr4::ParserRuleContext {
  public:
    ExceptionHandlerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Catch();
    ExceptionDeclarationContext *exceptionDeclaration();
    CompoundStatementContext *compoundStatement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExceptionHandlerContext* exceptionHandler();

  class ASTRUMLANG_API ExceptionDeclarationContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExceptionDeclarationContext* exceptionDeclaration();

  class ASTRUMLANG_API LockStatementContext : public antlr4::ParserRuleContext {
  public:
    LockStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Lock();
    ConditionalExpressionContext *conditionalExpression();
    CompoundStatementContext *compoundStatement();
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    StatementContext *statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LockStatementContext* lockStatement();

  class ASTRUMLANG_API ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignmentExpressionContext *assignmentExpression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();

  class ASTRUMLANG_API RangeExpressionContext : public antlr4::ParserRuleContext {
  public:
    RangeExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnaryExpressionContext *unaryExpression();
    antlr4::tree::TerminalNode *DoubleDot();
    antlr4::tree::TerminalNode *DoubleDotEqual();
    RangeExpressionStartContext *rangeExpressionStart();
    RangeExpressionEndContext *rangeExpressionEnd();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RangeExpressionContext* rangeExpression();

  class ASTRUMLANG_API RangeExpressionStartContext : public antlr4::ParserRuleContext {
  public:
    RangeExpressionStartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnaryExpressionContext *unaryExpression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RangeExpressionStartContext* rangeExpressionStart();

  class ASTRUMLANG_API RangeExpressionEndContext : public antlr4::ParserRuleContext {
  public:
    RangeExpressionEndContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnaryExpressionContext *unaryExpression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RangeExpressionEndContext* rangeExpressionEnd();

  class ASTRUMLANG_API SwitchExpressionContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SwitchExpressionContext* switchExpression();

  class ASTRUMLANG_API SwitchExpressionBranchContext : public antlr4::ParserRuleContext {
  public:
    SwitchExpressionBranchContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PatternListContext *patternList();
    antlr4::tree::TerminalNode *AssignArrow();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SwitchExpressionBranchContext* switchExpressionBranch();

  class ASTRUMLANG_API PowerExpressionContext : public antlr4::ParserRuleContext {
  public:
    PowerExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SwitchExpressionContext *switchExpression();
    std::vector<PowerExpressionContext *> powerExpression();
    PowerExpressionContext* powerExpression(size_t i);
    antlr4::tree::TerminalNode *DoubleStar();
    antlr4::tree::TerminalNode *DoubleCaret();
    antlr4::tree::TerminalNode *Op10();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PowerExpressionContext* powerExpression();
  PowerExpressionContext* powerExpression(int precedence);
  class ASTRUMLANG_API MultiplicativeExpressionContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MultiplicativeExpressionContext* multiplicativeExpression();
  MultiplicativeExpressionContext* multiplicativeExpression(int precedence);
  class ASTRUMLANG_API AdditiveExpressionContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AdditiveExpressionContext* additiveExpression();
  AdditiveExpressionContext* additiveExpression(int precedence);
  class ASTRUMLANG_API ShiftExpressionContext : public antlr4::ParserRuleContext {
  public:
    ShiftExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AdditiveExpressionContext *additiveExpression();
    std::vector<ShiftExpressionContext *> shiftExpression();
    ShiftExpressionContext* shiftExpression(size_t i);
    ShiftOperatorContext *shiftOperator();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShiftExpressionContext* shiftExpression();
  ShiftExpressionContext* shiftExpression(int precedence);
  class ASTRUMLANG_API ThreeWayComparisonExpressionContext : public antlr4::ParserRuleContext {
  public:
    ThreeWayComparisonExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ShiftExpressionContext *> shiftExpression();
    ShiftExpressionContext* shiftExpression(size_t i);
    antlr4::tree::TerminalNode *Spaceship();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ThreeWayComparisonExpressionContext* threeWayComparisonExpression();

  class ASTRUMLANG_API RelationalExpressionContext : public antlr4::ParserRuleContext {
  public:
    RelationalExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ThreeWayComparisonExpressionContext *> threeWayComparisonExpression();
    ThreeWayComparisonExpressionContext* threeWayComparisonExpression(size_t i);
    antlr4::tree::TerminalNode *As();
    TheTypeIdContext *theTypeId();
    antlr4::tree::TerminalNode *Is();
    PatternListContext *patternList();
    antlr4::tree::TerminalNode *Question();
    antlr4::tree::TerminalNode *Type();
    TypeTraitContext *typeTrait();
    antlr4::tree::TerminalNode *In();
    NotContext *not_();
    std::vector<RelationalExpressionContext *> relationalExpression();
    RelationalExpressionContext* relationalExpression(size_t i);
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *Greater();
    antlr4::tree::TerminalNode *LessEqual();
    antlr4::tree::TerminalNode *GreaterEqual();
    antlr4::tree::TerminalNode *Op6();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RelationalExpressionContext* relationalExpression();
  RelationalExpressionContext* relationalExpression(int precedence);
  class ASTRUMLANG_API EqualityExpressionContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EqualityExpressionContext* equalityExpression();
  EqualityExpressionContext* equalityExpression(int precedence);
  class ASTRUMLANG_API AndExpressionContext : public antlr4::ParserRuleContext {
  public:
    AndExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EqualityExpressionContext *equalityExpression();
    std::vector<AndExpressionContext *> andExpression();
    AndExpressionContext* andExpression(size_t i);
    antlr4::tree::TerminalNode *Amp();
    antlr4::tree::TerminalNode *Op4();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AndExpressionContext* andExpression();
  AndExpressionContext* andExpression(int precedence);
  class ASTRUMLANG_API ExclusiveOrExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExclusiveOrExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AndExpressionContext *andExpression();
    std::vector<ExclusiveOrExpressionContext *> exclusiveOrExpression();
    ExclusiveOrExpressionContext* exclusiveOrExpression(size_t i);
    antlr4::tree::TerminalNode *Caret();
    antlr4::tree::TerminalNode *Op3();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExclusiveOrExpressionContext* exclusiveOrExpression();
  ExclusiveOrExpressionContext* exclusiveOrExpression(int precedence);
  class ASTRUMLANG_API InclusiveOrExpressionContext : public antlr4::ParserRuleContext {
  public:
    InclusiveOrExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExclusiveOrExpressionContext *exclusiveOrExpression();
    std::vector<InclusiveOrExpressionContext *> inclusiveOrExpression();
    InclusiveOrExpressionContext* inclusiveOrExpression(size_t i);
    antlr4::tree::TerminalNode *VertLine();
    antlr4::tree::TerminalNode *Op2();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InclusiveOrExpressionContext* inclusiveOrExpression();
  InclusiveOrExpressionContext* inclusiveOrExpression(int precedence);
  class ASTRUMLANG_API LogicalAndExpressionContext : public antlr4::ParserRuleContext {
  public:
    LogicalAndExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<InclusiveOrExpressionContext *> inclusiveOrExpression();
    InclusiveOrExpressionContext* inclusiveOrExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> And();
    antlr4::tree::TerminalNode* And(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicalAndExpressionContext* logicalAndExpression();

  class ASTRUMLANG_API LogicalOrExpressionContext : public antlr4::ParserRuleContext {
  public:
    LogicalOrExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LogicalAndExpressionContext *> logicalAndExpression();
    LogicalAndExpressionContext* logicalAndExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Or();
    antlr4::tree::TerminalNode* Or(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicalOrExpressionContext* logicalOrExpression();

  class ASTRUMLANG_API NullCoalescingExpressionContext : public antlr4::ParserRuleContext {
  public:
    NullCoalescingExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LogicalOrExpressionContext *logicalOrExpression();
    std::vector<antlr4::tree::TerminalNode *> DoubleQuestion();
    antlr4::tree::TerminalNode* DoubleQuestion(size_t i);
    std::vector<NullCoalescingBranchContext *> nullCoalescingBranch();
    NullCoalescingBranchContext* nullCoalescingBranch(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NullCoalescingExpressionContext* nullCoalescingExpression();

  class ASTRUMLANG_API NullCoalescingBranchContext : public antlr4::ParserRuleContext {
  public:
    NullCoalescingBranchContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LogicalOrExpressionContext *logicalOrExpression();
    ThrowExpressionContext *throwExpression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NullCoalescingBranchContext* nullCoalescingBranch();

  class ASTRUMLANG_API ConditionalExpressionContext : public antlr4::ParserRuleContext {
  public:
    ConditionalExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NullCoalescingExpressionContext *nullCoalescingExpression();
    antlr4::tree::TerminalNode *Question();
    antlr4::tree::TerminalNode *Colon();
    AssignmentExpressionContext *assignmentExpression();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionalExpressionContext* conditionalExpression();

  class ASTRUMLANG_API ConstantExpressionContext : public antlr4::ParserRuleContext {
  public:
    ConstantExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConditionalExpressionContext *conditionalExpression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantExpressionContext* constantExpression();

  class ASTRUMLANG_API AssignmentExpressionContext : public antlr4::ParserRuleContext {
  public:
    AssignmentExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LogicalOrExpressionContext *logicalOrExpression();
    AssignmentOperatorContext *assignmentOperator();
    InitializerClauseContext *initializerClause();
    ConditionalExpressionContext *conditionalExpression();
    ThrowExpressionContext *throwExpression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentExpressionContext* assignmentExpression();

  class ASTRUMLANG_API InitializerClauseContext : public antlr4::ParserRuleContext {
  public:
    InitializerClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignmentExpressionContext *assignmentExpression();
    antlr4::tree::TerminalNode *Ellipsis();
    BracedInitListContext *bracedInitList();
    CollectionExpressionContext *collectionExpression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitializerClauseContext* initializerClause();

  class ASTRUMLANG_API BracedInitListContext : public antlr4::ParserRuleContext {
  public:
    BracedInitListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    InitializerListContext *initializerList();
    antlr4::tree::TerminalNode *Comma();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BracedInitListContext* bracedInitList();

  class ASTRUMLANG_API InitializerListContext : public antlr4::ParserRuleContext {
  public:
    InitializerListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<InitializerPartContext *> initializerPart();
    InitializerPartContext* initializerPart(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitializerListContext* initializerList();

  class ASTRUMLANG_API InitializerPartContext : public antlr4::ParserRuleContext {
  public:
    InitializerPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InitializerClauseContext *initializerClause();
    antlr4::tree::TerminalNode *Ellipsis();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InitializerPartContext* initializerPart();

  class ASTRUMLANG_API CollectionExpressionContext : public antlr4::ParserRuleContext {
  public:
    CollectionExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBracket();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *RightBracket();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);
    std::vector<KeyValuePairExpressionContext *> keyValuePairExpression();
    KeyValuePairExpressionContext* keyValuePairExpression(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CollectionExpressionContext* collectionExpression();

  class ASTRUMLANG_API KeyValuePairExpressionContext : public antlr4::ParserRuleContext {
  public:
    KeyValuePairExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *Colon();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeyValuePairExpressionContext* keyValuePairExpression();

  class ASTRUMLANG_API ExpressionListContext : public antlr4::ParserRuleContext {
  public:
    ExpressionListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionListPartContext *> expressionListPart();
    ExpressionListPartContext* expressionListPart(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionListContext* expressionList();

  class ASTRUMLANG_API ExpressionListPartContext : public antlr4::ParserRuleContext {
  public:
    ExpressionListPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConditionalExpressionContext *conditionalExpression();
    BracedInitListContext *bracedInitList();
    CollectionExpressionContext *collectionExpression();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Assign();
    antlr4::tree::TerminalNode *Ellipsis();
    antlr4::tree::TerminalNode *Out();
    antlr4::tree::TerminalNode *Colon();
    TheTypeIdContext *theTypeId();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionListPartContext* expressionListPart();

  class ASTRUMLANG_API ThrowExpressionContext : public antlr4::ParserRuleContext {
  public:
    ThrowExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Throw();
    AssignmentExpressionContext *assignmentExpression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ThrowExpressionContext* throwExpression();

  class ASTRUMLANG_API IdExpressionContext : public antlr4::ParserRuleContext {
  public:
    IdExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnqualifiedIdContext *unqualifiedId();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdExpressionContext* idExpression();

  class ASTRUMLANG_API QualifiedIdContext : public antlr4::ParserRuleContext {
  public:
    QualifiedIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NestedNameSpecifierContext *nestedNameSpecifier();
    UnqualifiedIdContext *unqualifiedId();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QualifiedIdContext* qualifiedId();

  class ASTRUMLANG_API UnqualifiedIdContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnqualifiedIdContext* unqualifiedId();

  class ASTRUMLANG_API UnaryExpressionContext : public antlr4::ParserRuleContext {
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
    antlr4::tree::TerminalNode *Nameof();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnaryExpressionContext* unaryExpression();

  class ASTRUMLANG_API UnaryExpressionTailContext : public antlr4::ParserRuleContext {
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
    antlr4::tree::TerminalNode *Nameof();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *Offsetof();
    antlr4::tree::TerminalNode *Comma();
    antlr4::tree::TerminalNode *Await();
    BracedInitListContext *bracedInitList();
    CollectionExpressionContext *collectionExpression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnaryExpressionTailContext* unaryExpressionTail();

  class ASTRUMLANG_API NewExpressionContext : public antlr4::ParserRuleContext {
  public:
    NewExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *New();
    TheTypeIdContext *theTypeId();
    MemorySpaceSetterContext *memorySpaceSetter();
    NewInitializerContext *newInitializer();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NewExpressionContext* newExpression();

  class ASTRUMLANG_API StackallocExpressionContext : public antlr4::ParserRuleContext {
  public:
    StackallocExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Stackalloc();
    TheTypeIdContext *theTypeId();
    MemorySpaceSetterContext *memorySpaceSetter();
    NewInitializerContext *newInitializer();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StackallocExpressionContext* stackallocExpression();

  class ASTRUMLANG_API MemorySpaceSetterContext : public antlr4::ParserRuleContext {
  public:
    MemorySpaceSetterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Less();
    ConstantExpressionContext *constantExpression();
    antlr4::tree::TerminalNode *Greater();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MemorySpaceSetterContext* memorySpaceSetter();

  class ASTRUMLANG_API NewInitializerContext : public antlr4::ParserRuleContext {
  public:
    NewInitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    ExpressionListContext *expressionList();
    BracedInitListContext *bracedInitList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NewInitializerContext* newInitializer();

  class ASTRUMLANG_API FullPostfixExpressionContext : public antlr4::ParserRuleContext {
  public:
    FullPostfixExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PostfixExpressionContext *postfixExpression();
    antlr4::tree::TerminalNode *PlusPlus();
    antlr4::tree::TerminalNode *MinusMinus();
    UnaryCustomOperatorContext *unaryCustomOperator();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FullPostfixExpressionContext* fullPostfixExpression();

  class ASTRUMLANG_API PostfixExpressionContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PostfixExpressionContext* postfixExpression();
  PostfixExpressionContext* postfixExpression(int precedence);
  class ASTRUMLANG_API TupleExpressionContext : public antlr4::ParserRuleContext {
  public:
    TupleExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParen();
    std::vector<ConditionalExpressionContext *> conditionalExpression();
    ConditionalExpressionContext* conditionalExpression(size_t i);
    antlr4::tree::TerminalNode *RightParen();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TupleExpressionContext* tupleExpression();

  class ASTRUMLANG_API MethodBindingExpressionContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MethodBindingExpressionContext* methodBindingExpression();

  class ASTRUMLANG_API MethodOwnerExpressionContext : public antlr4::ParserRuleContext {
  public:
    MethodOwnerExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnaryExpressionContext *unaryExpression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MethodOwnerExpressionContext* methodOwnerExpression();

  class ASTRUMLANG_API MethodNameContext : public antlr4::ParserRuleContext {
  public:
    MethodNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MethodNameContext* methodName();

  class ASTRUMLANG_API PrimaryExpressionContext : public antlr4::ParserRuleContext {
  public:
    PrimaryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LiteralContext *literal();
    antlr4::tree::TerminalNode *This();
    antlr4::tree::TerminalNode *Super();
    antlr4::tree::TerminalNode *Field();
    antlr4::tree::TerminalNode *LeftParen();
    ExpressionContext *expression();
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrimaryExpressionContext* primaryExpression();

  class ASTRUMLANG_API FoldExpressionContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FoldExpressionContext* foldExpression();

  class ASTRUMLANG_API FoldLeftExpressionContext : public antlr4::ParserRuleContext {
  public:
    FoldLeftExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnaryExpressionContext *unaryExpression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FoldLeftExpressionContext* foldLeftExpression();

  class ASTRUMLANG_API FoldRightExpressionContext : public antlr4::ParserRuleContext {
  public:
    FoldRightExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnaryExpressionContext *unaryExpression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FoldRightExpressionContext* foldRightExpression();

  class ASTRUMLANG_API DeclvalExpressionContext : public antlr4::ParserRuleContext {
  public:
    DeclvalExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Declval();
    antlr4::tree::TerminalNode *LeftParen();
    TheTypeIdContext *theTypeId();
    antlr4::tree::TerminalNode *RightParen();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclvalExpressionContext* declvalExpression();

  class ASTRUMLANG_API LambdaExpressionContext : public antlr4::ParserRuleContext {
  public:
    LambdaExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LambdaDeclaratorContext *lambdaDeclarator();
    LambdaBodyContext *lambdaBody();
    LambdaCaptureListContext *lambdaCaptureList();
    TemplateParamsContext *templateParams();
    ConstraintClauseContext *constraintClause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LambdaExpressionContext* lambdaExpression();

  class ASTRUMLANG_API LambdaCaptureListContext : public antlr4::ParserRuleContext {
  public:
    LambdaCaptureListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBracket();
    LambdaCaptureClauseContext *lambdaCaptureClause();
    antlr4::tree::TerminalNode *RightBracket();
    antlr4::tree::TerminalNode *Mutable();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LambdaCaptureListContext* lambdaCaptureList();

  class ASTRUMLANG_API LambdaCaptureClauseContext : public antlr4::ParserRuleContext {
  public:
    LambdaCaptureClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CaptureContext *> capture();
    CaptureContext* capture(size_t i);
    antlr4::tree::TerminalNode *Assign();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LambdaCaptureClauseContext* lambdaCaptureClause();

  class ASTRUMLANG_API CaptureContext : public antlr4::ParserRuleContext {
  public:
    CaptureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *This();
    antlr4::tree::TerminalNode *Weak();
    antlr4::tree::TerminalNode *Unowned();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Assign();
    InitializerClauseContext *initializerClause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CaptureContext* capture();

  class ASTRUMLANG_API LambdaDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    LambdaDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionParamsContext *functionParams();
    antlr4::tree::TerminalNode *Identifier();
    ReturnTypeContext *returnType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LambdaDeclaratorContext* lambdaDeclarator();

  class ASTRUMLANG_API LambdaBodyContext : public antlr4::ParserRuleContext {
  public:
    LambdaBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionBodyContext *functionBody();
    antlr4::tree::TerminalNode *AssignArrow();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LambdaBodyContext* lambdaBody();

  class ASTRUMLANG_API TheTypeIdContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TheTypeIdContext* theTypeId();

  class ASTRUMLANG_API SingleTypeIdContext : public antlr4::ParserRuleContext {
  public:
    SingleTypeIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeSpecifierSeqContext *typeSpecifierSeq();
    antlr4::tree::TerminalNode *Question();
    TypePostfixContext *typePostfix();
    antlr4::tree::TerminalNode *LeftParen();
    TheTypeIdContext *theTypeId();
    antlr4::tree::TerminalNode *RightParen();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SingleTypeIdContext* singleTypeId();

  class ASTRUMLANG_API TypePostfixContext : public antlr4::ParserRuleContext {
  public:
    TypePostfixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ArrayDeclaratorContext *> arrayDeclarator();
    ArrayDeclaratorContext* arrayDeclarator(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypePostfixContext* typePostfix();

  class ASTRUMLANG_API ArrayDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    ArrayDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *RightBracket();
    ConstantExpressionContext *constantExpression();
    antlr4::tree::TerminalNode *Question();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrayDeclaratorContext* arrayDeclarator();

  class ASTRUMLANG_API PointerOperatorContext : public antlr4::ParserRuleContext {
  public:
    PointerOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Star();
    antlr4::tree::TerminalNode *DoubleStar();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PointerOperatorContext* pointerOperator();

  class ASTRUMLANG_API PointerOperatorSeqContext : public antlr4::ParserRuleContext {
  public:
    PointerOperatorSeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PointerOperatorContext *> pointerOperator();
    PointerOperatorContext* pointerOperator(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PointerOperatorSeqContext* pointerOperatorSeq();

  class ASTRUMLANG_API TypeSpecifierSeqContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeSpecifierSeqContext* typeSpecifierSeq();

  class ASTRUMLANG_API TypeSpecifierContext : public antlr4::ParserRuleContext {
  public:
    TypeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TrailingTypeSpecifierContext *trailingTypeSpecifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeSpecifierContext* typeSpecifier();

  class ASTRUMLANG_API TrailingTypeSpecifierContext : public antlr4::ParserRuleContext {
  public:
    TrailingTypeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleTypeSpecifierContext *simpleTypeSpecifier();
    CvQualifierContext *cvQualifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TrailingTypeSpecifierContext* trailingTypeSpecifier();

  class ASTRUMLANG_API TypeNameSpecifierContext : public antlr4::ParserRuleContext {
  public:
    TypeNameSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Type();
    NestedNameSpecifierContext *nestedNameSpecifier();
    antlr4::tree::TerminalNode *Identifier();
    SimpleTemplateIdContext *simpleTemplateId();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeNameSpecifierContext* typeNameSpecifier();

  class ASTRUMLANG_API CvQualifierSeqContext : public antlr4::ParserRuleContext {
  public:
    CvQualifierSeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CvQualifierContext *> cvQualifier();
    CvQualifierContext* cvQualifier(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CvQualifierSeqContext* cvQualifierSeq();

  class ASTRUMLANG_API CvQualifierContext : public antlr4::ParserRuleContext {
  public:
    CvQualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Const();
    antlr4::tree::TerminalNode *Volatile();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CvQualifierContext* cvQualifier();

  class ASTRUMLANG_API TypenameContext : public antlr4::ParserRuleContext {
  public:
    TypenameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassNameContext *className();
    EnumNameContext *enumName();
    SimpleTemplateIdContext *simpleTemplateId();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypenameContext* typename_();

  class ASTRUMLANG_API ClassNameContext : public antlr4::ParserRuleContext {
  public:
    ClassNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    SimpleTemplateIdContext *simpleTemplateId();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassNameContext* className();

  class ASTRUMLANG_API DecltypeSpecifierContext : public antlr4::ParserRuleContext {
  public:
    DecltypeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Decltype();
    antlr4::tree::TerminalNode *LeftParen();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RightParen();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DecltypeSpecifierContext* decltypeSpecifier();

  class ASTRUMLANG_API DecaySpecifierContext : public antlr4::ParserRuleContext {
  public:
    DecaySpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Decay();
    antlr4::tree::TerminalNode *LeftParen();
    TheTypeIdContext *theTypeId();
    antlr4::tree::TerminalNode *RightParen();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DecaySpecifierContext* decaySpecifier();

  class ASTRUMLANG_API EnumNameContext : public antlr4::ParserRuleContext {
  public:
    EnumNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumNameContext* enumName();

  class ASTRUMLANG_API SimpleTypeSpecifierContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpleTypeSpecifierContext* simpleTypeSpecifier();

  class ASTRUMLANG_API FunctionTypeIdContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionTypeIdContext* functionTypeId();

  class ASTRUMLANG_API TypeIdWithSpecificationContext : public antlr4::ParserRuleContext {
  public:
    TypeIdWithSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TheTypeIdContext *theTypeId();
    ParamSpecificationContext *paramSpecification();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeIdWithSpecificationContext* typeIdWithSpecification();

  class ASTRUMLANG_API NamedTupleFieldContext : public antlr4::ParserRuleContext {
  public:
    NamedTupleFieldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Colon();
    TheTypeIdContext *theTypeId();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamedTupleFieldContext* namedTupleField();

  class ASTRUMLANG_API NestedNameSpecifierContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NestedNameSpecifierContext* nestedNameSpecifier();
  NestedNameSpecifierContext* nestedNameSpecifier(int precedence);
  class ASTRUMLANG_API NamespaceNameContext : public antlr4::ParserRuleContext {
  public:
    NamespaceNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamespaceNameContext* namespaceName();

  class ASTRUMLANG_API TemplateNameContext : public antlr4::ParserRuleContext {
  public:
    TemplateNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TemplateNameContext* templateName();

  class ASTRUMLANG_API SimpleTemplateIdContext : public antlr4::ParserRuleContext {
  public:
    SimpleTemplateIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TemplateNameContext *templateName();
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *Greater();
    TemplateArgumentListContext *templateArgumentList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpleTemplateIdContext* simpleTemplateId();

  class ASTRUMLANG_API OperatorTemplateIdContext : public antlr4::ParserRuleContext {
  public:
    OperatorTemplateIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OperatorFunctionIdContext *operatorFunctionId();
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *Greater();
    TemplateArgumentListContext *templateArgumentList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OperatorTemplateIdContext* operatorTemplateId();

  class ASTRUMLANG_API TemplateIdContext : public antlr4::ParserRuleContext {
  public:
    TemplateIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleTemplateIdContext *simpleTemplateId();
    OperatorTemplateIdContext *operatorTemplateId();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TemplateIdContext* templateId();

  class ASTRUMLANG_API PatternListContext : public antlr4::ParserRuleContext {
  public:
    PatternListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PatternContext *> pattern();
    PatternContext* pattern(size_t i);
    std::vector<PatternCombinationOperatorContext *> patternCombinationOperator();
    PatternCombinationOperatorContext* patternCombinationOperator(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PatternListContext* patternList();

  class ASTRUMLANG_API PatternCombinationOperatorContext : public antlr4::ParserRuleContext {
  public:
    PatternCombinationOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *And();
    antlr4::tree::TerminalNode *Or();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PatternCombinationOperatorContext* patternCombinationOperator();

  class ASTRUMLANG_API PatternContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PatternContext* pattern();

  class ASTRUMLANG_API PropertyPatternContext : public antlr4::ParserRuleContext {
  public:
    PropertyPatternContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Colon();
    PatternListContext *patternList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PropertyPatternContext* propertyPattern();

  class ASTRUMLANG_API StructDefinitionContext : public antlr4::ParserRuleContext {
  public:
    StructDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StructHeadContext *structHead();
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    StructMemberSpecificationContext *structMemberSpecification();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StructDefinitionContext* structDefinition();

  class ASTRUMLANG_API StructHeadContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StructHeadContext* structHead();

  class ASTRUMLANG_API StructMemberSpecificationContext : public antlr4::ParserRuleContext {
  public:
    StructMemberSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StructMemberDeclarationContext *> structMemberDeclaration();
    StructMemberDeclarationContext* structMemberDeclaration(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StructMemberSpecificationContext* structMemberSpecification();

  class ASTRUMLANG_API MemberDeclarationCompoundStatementContext : public antlr4::ParserRuleContext {
  public:
    MemberDeclarationCompoundStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    std::vector<StructMemberDeclarationContext *> structMemberDeclaration();
    StructMemberDeclarationContext* structMemberDeclaration(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MemberDeclarationCompoundStatementContext* memberDeclarationCompoundStatement();

  class ASTRUMLANG_API MemberVersionConditionalDeclarationContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MemberVersionConditionalDeclarationContext* memberVersionConditionalDeclaration();

  class ASTRUMLANG_API MemberVersionIfDeclarationContext : public antlr4::ParserRuleContext {
  public:
    MemberVersionIfDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StructMemberDeclarationContext *structMemberDeclaration();
    MemberDeclarationCompoundStatementContext *memberDeclarationCompoundStatement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MemberVersionIfDeclarationContext* memberVersionIfDeclaration();

  class ASTRUMLANG_API MemberVersionElseDeclarationContext : public antlr4::ParserRuleContext {
  public:
    MemberVersionElseDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StructMemberDeclarationContext *structMemberDeclaration();
    MemberDeclarationCompoundStatementContext *memberDeclarationCompoundStatement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MemberVersionElseDeclarationContext* memberVersionElseDeclaration();

  class ASTRUMLANG_API StructMemberDeclarationContext : public antlr4::ParserRuleContext {
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
    StaticConstructorContext *staticConstructor();
    StaticDestructorContext *staticDestructor();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StructMemberDeclarationContext* structMemberDeclaration();

  class ASTRUMLANG_API ClassDefinitionContext : public antlr4::ParserRuleContext {
  public:
    ClassDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassHeadContext *classHead();
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    StructMemberSpecificationContext *structMemberSpecification();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassDefinitionContext* classDefinition();

  class ASTRUMLANG_API ClassHeadContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassHeadContext* classHead();

  class ASTRUMLANG_API InterfaceDefinitionContext : public antlr4::ParserRuleContext {
  public:
    InterfaceDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InterfaceHeadContext *interfaceHead();
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    InterfaceMemberSpecificationContext *interfaceMemberSpecification();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InterfaceDefinitionContext* interfaceDefinition();

  class ASTRUMLANG_API InterfaceHeadContext : public antlr4::ParserRuleContext {
  public:
    InterfaceHeadContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Interface();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Unsafe();
    TemplateParamsContext *templateParams();
    BaseClauseContext *baseClause();
    ConstraintClauseContext *constraintClause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InterfaceHeadContext* interfaceHead();

  class ASTRUMLANG_API InterfaceMemberSpecificationContext : public antlr4::ParserRuleContext {
  public:
    InterfaceMemberSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<InterfaceMemberDeclarationContext *> interfaceMemberDeclaration();
    InterfaceMemberDeclarationContext* interfaceMemberDeclaration(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InterfaceMemberSpecificationContext* interfaceMemberSpecification();

  class ASTRUMLANG_API InterfaceMemberDeclarationContext : public antlr4::ParserRuleContext {
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
    StaticConstructorContext *staticConstructor();
    StaticDestructorContext *staticDestructor();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InterfaceMemberDeclarationContext* interfaceMemberDeclaration();

  class ASTRUMLANG_API AssociatedTypeDeclarationContext : public antlr4::ParserRuleContext {
  public:
    AssociatedTypeDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Type();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Semi();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssociatedTypeDeclarationContext* associatedTypeDeclaration();

  class ASTRUMLANG_API EnumDefinitionContext : public antlr4::ParserRuleContext {
  public:
    EnumDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EnumHeadContext *enumHead();
    antlr4::tree::TerminalNode *LeftBrace();
    EnumListContext *enumList();
    antlr4::tree::TerminalNode *RightBrace();
    EnumMemberSpecificationContext *enumMemberSpecification();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumDefinitionContext* enumDefinition();

  class ASTRUMLANG_API EnumHeadContext : public antlr4::ParserRuleContext {
  public:
    EnumHeadContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Enum();
    antlr4::tree::TerminalNode *Identifier();
    EnumBaseContext *enumBase();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumHeadContext* enumHead();

  class ASTRUMLANG_API EnumBaseContext : public antlr4::ParserRuleContext {
  public:
    EnumBaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Colon();
    SimpleTypeSpecifierContext *simpleTypeSpecifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumBaseContext* enumBase();

  class ASTRUMLANG_API EnumListContext : public antlr4::ParserRuleContext {
  public:
    EnumListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<EnumeratorDefinitionContext *> enumeratorDefinition();
    EnumeratorDefinitionContext* enumeratorDefinition(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumListContext* enumList();

  class ASTRUMLANG_API EnumeratorDefinitionContext : public antlr4::ParserRuleContext {
  public:
    EnumeratorDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();
    antlr4::tree::TerminalNode *Assign();
    ConstantExpressionContext *constantExpression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumeratorDefinitionContext* enumeratorDefinition();

  class ASTRUMLANG_API EnumMemberSpecificationContext : public antlr4::ParserRuleContext {
  public:
    EnumMemberSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Semi();
    std::vector<EnumMemberDeclarationContext *> enumMemberDeclaration();
    EnumMemberDeclarationContext* enumMemberDeclaration(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumMemberSpecificationContext* enumMemberSpecification();

  class ASTRUMLANG_API EnumMemberDeclarationContext : public antlr4::ParserRuleContext {
  public:
    EnumMemberDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionDefinitionContext *functionDefinition();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();
    AccessSpecifierContext *accessSpecifier();
    PropertyContext *property();
    FriendDeclarationContext *friendDeclaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumMemberDeclarationContext* enumMemberDeclaration();

  class ASTRUMLANG_API EnumClassDefinitionContext : public antlr4::ParserRuleContext {
  public:
    EnumClassDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EnumClassHeadContext *enumClassHead();
    antlr4::tree::TerminalNode *LeftBrace();
    EnumClassListContext *enumClassList();
    antlr4::tree::TerminalNode *RightBrace();
    EnumClassMemberSpecificationContext *enumClassMemberSpecification();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumClassDefinitionContext* enumClassDefinition();

  class ASTRUMLANG_API EnumClassHeadContext : public antlr4::ParserRuleContext {
  public:
    EnumClassHeadContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Enum();
    antlr4::tree::TerminalNode *Class();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Unsafe();
    BaseClauseContext *baseClause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumClassHeadContext* enumClassHead();

  class ASTRUMLANG_API EnumClassListContext : public antlr4::ParserRuleContext {
  public:
    EnumClassListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ClassEnumeratorDefinitionContext *> classEnumeratorDefinition();
    ClassEnumeratorDefinitionContext* classEnumeratorDefinition(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumClassListContext* enumClassList();

  class ASTRUMLANG_API ClassEnumeratorDefinitionContext : public antlr4::ParserRuleContext {
  public:
    ClassEnumeratorDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();
    antlr4::tree::TerminalNode *LeftParen();
    ExpressionListContext *expressionList();
    antlr4::tree::TerminalNode *RightParen();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassEnumeratorDefinitionContext* classEnumeratorDefinition();

  class ASTRUMLANG_API EnumClassMemberSpecificationContext : public antlr4::ParserRuleContext {
  public:
    EnumClassMemberSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Semi();
    std::vector<StructMemberDeclarationContext *> structMemberDeclaration();
    StructMemberDeclarationContext* structMemberDeclaration(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumClassMemberSpecificationContext* enumClassMemberSpecification();

  class ASTRUMLANG_API UnionDefinitionContext : public antlr4::ParserRuleContext {
  public:
    UnionDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnionHeadContext *unionHead();
    antlr4::tree::TerminalNode *LeftBrace();
    UnionListContext *unionList();
    antlr4::tree::TerminalNode *RightBrace();
    UnionMemberSpecificationContext *unionMemberSpecification();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnionDefinitionContext* unionDefinition();

  class ASTRUMLANG_API UnionHeadContext : public antlr4::ParserRuleContext {
  public:
    UnionHeadContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Union();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Unsafe();
    TemplateParamsContext *templateParams();
    BaseClauseContext *baseClause();
    ConstraintClauseContext *constraintClause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnionHeadContext* unionHead();

  class ASTRUMLANG_API UnionListContext : public antlr4::ParserRuleContext {
  public:
    UnionListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<UnionEnumeratorContext *> unionEnumerator();
    UnionEnumeratorContext* unionEnumerator(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnionListContext* unionList();

  class ASTRUMLANG_API UnionEnumeratorContext : public antlr4::ParserRuleContext {
  public:
    UnionEnumeratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();
    antlr4::tree::TerminalNode *LeftParen();
    UnionEnumeratorClauseContext *unionEnumeratorClause();
    antlr4::tree::TerminalNode *RightParen();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnionEnumeratorContext* unionEnumerator();

  class ASTRUMLANG_API UnionEnumeratorClauseContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnionEnumeratorClauseContext* unionEnumeratorClause();

  class ASTRUMLANG_API UnionMemberSpecificationContext : public antlr4::ParserRuleContext {
  public:
    UnionMemberSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Semi();
    std::vector<EnumMemberDeclarationContext *> enumMemberDeclaration();
    EnumMemberDeclarationContext* enumMemberDeclaration(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnionMemberSpecificationContext* unionMemberSpecification();

  class ASTRUMLANG_API ExtensionDefinitionContext : public antlr4::ParserRuleContext {
  public:
    ExtensionDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExtensionHeadContext *extensionHead();
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    ExtensionMemberSpecificationContext *extensionMemberSpecification();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExtensionDefinitionContext* extensionDefinition();

  class ASTRUMLANG_API ExtensionHeadContext : public antlr4::ParserRuleContext {
  public:
    ExtensionHeadContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Extension();
    TemplateParamsContext *templateParams();
    TheTypeIdContext *theTypeId();
    antlr4::tree::TerminalNode *Unsafe();
    ConstraintClauseContext *constraintClause();
    BaseClauseContext *baseClause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExtensionHeadContext* extensionHead();

  class ASTRUMLANG_API ExtensionMemberSpecificationContext : public antlr4::ParserRuleContext {
  public:
    ExtensionMemberSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExtensionMemberDeclarationContext *> extensionMemberDeclaration();
    ExtensionMemberDeclarationContext* extensionMemberDeclaration(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExtensionMemberSpecificationContext* extensionMemberSpecification();

  class ASTRUMLANG_API ExtensionMemberDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ExtensionMemberDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionDefinitionContext *functionDefinition();
    AttributeSpecifierSeqContext *attributeSpecifierSeq();
    ConstructorContext *constructor();
    IndexerContext *indexer();
    PropertyContext *property();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExtensionMemberDeclarationContext* extensionMemberDeclaration();

  class ASTRUMLANG_API BaseClauseContext : public antlr4::ParserRuleContext {
  public:
    BaseClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Colon();
    BaseSpecifierListContext *baseSpecifierList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BaseClauseContext* baseClause();

  class ASTRUMLANG_API BaseSpecifierListContext : public antlr4::ParserRuleContext {
  public:
    BaseSpecifierListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<BaseSpecifierContext *> baseSpecifier();
    BaseSpecifierContext* baseSpecifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BaseSpecifierListContext* baseSpecifierList();

  class ASTRUMLANG_API BaseSpecifierContext : public antlr4::ParserRuleContext {
  public:
    BaseSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassNameContext *className();
    NestedNameSpecifierContext *nestedNameSpecifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BaseSpecifierContext* baseSpecifier();

  class ASTRUMLANG_API PropertyContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PropertyContext* property();

  class ASTRUMLANG_API PropertyBodyContext : public antlr4::ParserRuleContext {
  public:
    PropertyBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    PropertyGetterContext *propertyGetter();
    PropertySetterContext *propertySetter();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PropertyBodyContext* propertyBody();

  class ASTRUMLANG_API AbstractPropertyContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AbstractPropertyContext* abstractProperty();

  class ASTRUMLANG_API InterfacePropertyContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InterfacePropertyContext* interfaceProperty();

  class ASTRUMLANG_API PropertyGetterContext : public antlr4::ParserRuleContext {
  public:
    PropertyGetterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Get();
    FunctionBodyContext *functionBody();
    ShortFunctionBodyContext *shortFunctionBody();
    antlr4::tree::TerminalNode *Semi();
    AccessSpecifierContext *accessSpecifier();
    ProtectedInternalContext *protectedInternal();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PropertyGetterContext* propertyGetter();

  class ASTRUMLANG_API PropertySetterContext : public antlr4::ParserRuleContext {
  public:
    PropertySetterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Set();
    FunctionBodyContext *functionBody();
    ShortFunctionBodyContext *shortFunctionBody();
    antlr4::tree::TerminalNode *Semi();
    AccessSpecifierContext *accessSpecifier();
    ProtectedInternalContext *protectedInternal();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PropertySetterContext* propertySetter();

  class ASTRUMLANG_API AbstractPropertyGetterContext : public antlr4::ParserRuleContext {
  public:
    AbstractPropertyGetterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Get();
    antlr4::tree::TerminalNode *Semi();
    AccessSpecifierContext *accessSpecifier();
    ProtectedInternalContext *protectedInternal();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AbstractPropertyGetterContext* abstractPropertyGetter();

  class ASTRUMLANG_API AbstractPropertySetterContext : public antlr4::ParserRuleContext {
  public:
    AbstractPropertySetterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Set();
    antlr4::tree::TerminalNode *Semi();
    AccessSpecifierContext *accessSpecifier();
    ProtectedInternalContext *protectedInternal();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AbstractPropertySetterContext* abstractPropertySetter();

  class ASTRUMLANG_API ExternFunctionDeclarationContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExternFunctionDeclarationContext* externFunctionDeclaration();

  class ASTRUMLANG_API FunctionTemplateDeclarationContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionTemplateDeclarationContext* functionTemplateDeclaration();

  class ASTRUMLANG_API FunctionDefinitionContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionDefinitionContext* functionDefinition();

  class ASTRUMLANG_API AbstractMethodDeclarationContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AbstractMethodDeclarationContext* abstractMethodDeclaration();

  class ASTRUMLANG_API InterfaceMethodDeclarationContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InterfaceMethodDeclarationContext* interfaceMethodDeclaration();

  class ASTRUMLANG_API FunctionSpecifierContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionSpecifierContext* functionSpecifier();

  class ASTRUMLANG_API FunctionParamsContext : public antlr4::ParserRuleContext {
  public:
    FunctionParamsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    ParamDeclClauseContext *paramDeclClause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionParamsContext* functionParams();

  class ASTRUMLANG_API ParamDeclClauseContext : public antlr4::ParserRuleContext {
  public:
    ParamDeclClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParamDeclListContext *paramDeclList();
    antlr4::tree::TerminalNode *Ellipsis();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParamDeclClauseContext* paramDeclClause();

  class ASTRUMLANG_API ParamDeclListContext : public antlr4::ParserRuleContext {
  public:
    ParamDeclListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ParamDeclarationContext *> paramDeclaration();
    ParamDeclarationContext* paramDeclaration(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParamDeclListContext* paramDeclList();

  class ASTRUMLANG_API ParamDeclarationContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParamDeclarationContext* paramDeclaration();

  class ASTRUMLANG_API ParamSpecificationContext : public antlr4::ParserRuleContext {
  public:
    ParamSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Move();
    antlr4::tree::TerminalNode *Forward();
    antlr4::tree::TerminalNode *In();
    antlr4::tree::TerminalNode *Inout();
    antlr4::tree::TerminalNode *Out();
    antlr4::tree::TerminalNode *Ref();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParamSpecificationContext* paramSpecification();

  class ASTRUMLANG_API ReturnTypeContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReturnTypeContext* returnType();

  class ASTRUMLANG_API FunctionBodyContext : public antlr4::ParserRuleContext {
  public:
    FunctionBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CompoundStatementContext *compoundStatement();
    antlr4::tree::TerminalNode *Assign();
    antlr4::tree::TerminalNode *Equal();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionBodyContext* functionBody();

  class ASTRUMLANG_API ShortFunctionBodyContext : public antlr4::ParserRuleContext {
  public:
    ShortFunctionBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionStatementContext *expressionStatement();
    antlr4::tree::TerminalNode *AssignArrow();
    antlr4::tree::TerminalNode *EqualArrow();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShortFunctionBodyContext* shortFunctionBody();

  class ASTRUMLANG_API ExceptionSpecificationContext : public antlr4::ParserRuleContext {
  public:
    ExceptionSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Noexcept();
    antlr4::tree::TerminalNode *LeftParen();
    ConstantExpressionContext *constantExpression();
    antlr4::tree::TerminalNode *RightParen();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExceptionSpecificationContext* exceptionSpecification();

  class ASTRUMLANG_API FriendDeclarationContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FriendDeclarationContext* friendDeclaration();

  class ASTRUMLANG_API ExternMethodDeclarationContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExternMethodDeclarationContext* externMethodDeclaration();

  class ASTRUMLANG_API OperatorFunctionIdContext : public antlr4::ParserRuleContext {
  public:
    OperatorFunctionIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Operator_();
    OperatorContext *operator_();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OperatorFunctionIdContext* operatorFunctionId();

  class ASTRUMLANG_API ConstructorContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstructorContext* constructor();

  class ASTRUMLANG_API ConstructorBodyContext : public antlr4::ParserRuleContext {
  public:
    ConstructorBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    DelegatingConstructorStatementContext *delegatingConstructorStatement();
    MemberInitializationListContext *memberInitializationList();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    antlr4::tree::TerminalNode *Assign();
    antlr4::tree::TerminalNode *Equal();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstructorBodyContext* constructorBody();

  class ASTRUMLANG_API MemberInitializationListContext : public antlr4::ParserRuleContext {
  public:
    MemberInitializationListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<MemberInitializationStatementContext *> memberInitializationStatement();
    MemberInitializationStatementContext* memberInitializationStatement(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MemberInitializationListContext* memberInitializationList();

  class ASTRUMLANG_API DelegatingConstructorBodyContext : public antlr4::ParserRuleContext {
  public:
    DelegatingConstructorBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AssignArrow();
    antlr4::tree::TerminalNode *EqualArrow();
    DelegatingConstructorStatementContext *delegatingConstructorStatement();
    MemberInitializationStatementContext *memberInitializationStatement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DelegatingConstructorBodyContext* delegatingConstructorBody();

  class ASTRUMLANG_API DelegatingConstructorStatementContext : public antlr4::ParserRuleContext {
  public:
    DelegatingConstructorStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    antlr4::tree::TerminalNode *Semi();
    antlr4::tree::TerminalNode *This();
    antlr4::tree::TerminalNode *Super();
    ExpressionListContext *expressionList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DelegatingConstructorStatementContext* delegatingConstructorStatement();

  class ASTRUMLANG_API MemberInitializationStatementContext : public antlr4::ParserRuleContext {
  public:
    MemberInitializationStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Assign();
    InitializerClauseContext *initializerClause();
    antlr4::tree::TerminalNode *Semi();
    antlr4::tree::TerminalNode *This();
    antlr4::tree::TerminalNode *Dot();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MemberInitializationStatementContext* memberInitializationStatement();

  class ASTRUMLANG_API ImplicitSpecificationContext : public antlr4::ParserRuleContext {
  public:
    ImplicitSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Implicit();
    antlr4::tree::TerminalNode *LeftParen();
    ConstantExpressionContext *constantExpression();
    antlr4::tree::TerminalNode *RightParen();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ImplicitSpecificationContext* implicitSpecification();

  class ASTRUMLANG_API StaticConstructorContext : public antlr4::ParserRuleContext {
  public:
    StaticConstructorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Static();
    FunctionBodyContext *functionBody();
    ShortFunctionBodyContext *shortFunctionBody();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StaticConstructorContext* staticConstructor();

  class ASTRUMLANG_API DestructorContext : public antlr4::ParserRuleContext {
  public:
    DestructorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Tilde();
    antlr4::tree::TerminalNode *This();
    FunctionBodyContext *functionBody();
    ShortFunctionBodyContext *shortFunctionBody();
    antlr4::tree::TerminalNode *Inline();
    ExceptionSpecificationContext *exceptionSpecification();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DestructorContext* destructor();

  class ASTRUMLANG_API StaticDestructorContext : public antlr4::ParserRuleContext {
  public:
    StaticDestructorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Tilde();
    antlr4::tree::TerminalNode *Static();
    FunctionBodyContext *functionBody();
    ShortFunctionBodyContext *shortFunctionBody();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StaticDestructorContext* staticDestructor();

  class ASTRUMLANG_API ConversionFunctionContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConversionFunctionContext* conversionFunction();

  class ASTRUMLANG_API ConversionFunctionIdContext : public antlr4::ParserRuleContext {
  public:
    ConversionFunctionIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Operator_();
    TheTypeIdContext *theTypeId();
    antlr4::tree::TerminalNode *Ref();
    antlr4::tree::TerminalNode *Const();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConversionFunctionIdContext* conversionFunctionId();

  class ASTRUMLANG_API IndexerContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndexerContext* indexer();

  class ASTRUMLANG_API IndexerPropertyContext : public antlr4::ParserRuleContext {
  public:
    IndexerPropertyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBrace();
    IndexerGetterContext *indexerGetter();
    IndexerSetterContext *indexerSetter();
    antlr4::tree::TerminalNode *RightBrace();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndexerPropertyContext* indexerProperty();

  class ASTRUMLANG_API IndexerGetterContext : public antlr4::ParserRuleContext {
  public:
    IndexerGetterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Get();
    FunctionBodyContext *functionBody();
    ShortFunctionBodyContext *shortFunctionBody();
    AccessSpecifierContext *accessSpecifier();
    ProtectedInternalContext *protectedInternal();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndexerGetterContext* indexerGetter();

  class ASTRUMLANG_API IndexerSetterContext : public antlr4::ParserRuleContext {
  public:
    IndexerSetterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Set();
    FunctionBodyContext *functionBody();
    ShortFunctionBodyContext *shortFunctionBody();
    AccessSpecifierContext *accessSpecifier();
    ProtectedInternalContext *protectedInternal();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndexerSetterContext* indexerSetter();

  class ASTRUMLANG_API InterfaceIndexerContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InterfaceIndexerContext* interfaceIndexer();

  class ASTRUMLANG_API TemplateParamsContext : public antlr4::ParserRuleContext {
  public:
    TemplateParamsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Less();
    std::vector<TemplateParamDeclarationContext *> templateParamDeclaration();
    TemplateParamDeclarationContext* templateParamDeclaration(size_t i);
    antlr4::tree::TerminalNode *Greater();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TemplateParamsContext* templateParams();

  class ASTRUMLANG_API TemplateParamDeclarationContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TemplateParamDeclarationContext* templateParamDeclaration();

  class ASTRUMLANG_API TemplateTypenameContext : public antlr4::ParserRuleContext {
  public:
    TemplateTypenameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Type();
    TheTypeIdContext *theTypeId();
    antlr4::tree::TerminalNode *Is();
    antlr4::tree::TerminalNode *Identifier();
    SimpleTemplateIdContext *simpleTemplateId();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TemplateTypenameContext* templateTypename();

  class ASTRUMLANG_API TemplateArgumentListContext : public antlr4::ParserRuleContext {
  public:
    TemplateArgumentListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TemplateArgumentContext *> templateArgument();
    TemplateArgumentContext* templateArgument(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TemplateArgumentListContext* templateArgumentList();

  class ASTRUMLANG_API TemplateArgumentContext : public antlr4::ParserRuleContext {
  public:
    TemplateArgumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TheTypeIdContext *theTypeId();
    ConditionalExpressionContext *conditionalExpression();
    IdExpressionContext *idExpression();
    antlr4::tree::TerminalNode *Ellipsis();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TemplateArgumentContext* templateArgument();

  class ASTRUMLANG_API ConstraintClauseContext : public antlr4::ParserRuleContext {
  public:
    ConstraintClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Where();
    ConstantExpressionContext *constantExpression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstraintClauseContext* constraintClause();

  class ASTRUMLANG_API TypeTraitContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeTraitContext* typeTrait();

  class ASTRUMLANG_API TemplateDeductionGuideContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TemplateDeductionGuideContext* templateDeductionGuide();

  class ASTRUMLANG_API AttributeSpecifierSeqContext : public antlr4::ParserRuleContext {
  public:
    AttributeSpecifierSeqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AttributeSpecifierContext *> attributeSpecifier();
    AttributeSpecifierContext* attributeSpecifier(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttributeSpecifierSeqContext* attributeSpecifierSeq();

  class ASTRUMLANG_API AttributeSpecifierContext : public antlr4::ParserRuleContext {
  public:
    AttributeSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AtSign();
    antlr4::tree::TerminalNode *Identifier();
    NestedNameSpecifierContext *nestedNameSpecifier();
    AttributeArgumentClauseContext *attributeArgumentClause();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttributeSpecifierContext* attributeSpecifier();

  class ASTRUMLANG_API AttributeArgumentClauseContext : public antlr4::ParserRuleContext {
  public:
    AttributeArgumentClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParen();
    ExpressionListContext *expressionList();
    antlr4::tree::TerminalNode *RightParen();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttributeArgumentClauseContext* attributeArgumentClause();

  class ASTRUMLANG_API AssignmentOperatorContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentOperatorContext* assignmentOperator();

  class ASTRUMLANG_API ShiftOperatorContext : public antlr4::ParserRuleContext {
  public:
    ShiftOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Greater();
    antlr4::tree::TerminalNode* Greater(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Less();
    antlr4::tree::TerminalNode* Less(size_t i);
    antlr4::tree::TerminalNode *Op7();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShiftOperatorContext* shiftOperator();

  class ASTRUMLANG_API UnaryPrefixOperatorContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnaryPrefixOperatorContext* unaryPrefixOperator();

  class ASTRUMLANG_API UnaryCustomOperatorContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnaryCustomOperatorContext* unaryCustomOperator();

  class ASTRUMLANG_API RefCaptureOperatorContext : public antlr4::ParserRuleContext {
  public:
    RefCaptureOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Amp();
    antlr4::tree::TerminalNode *Ref();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RefCaptureOperatorContext* refCaptureOperator();

  class ASTRUMLANG_API UnaryPostfixOperatorContext : public antlr4::ParserRuleContext {
  public:
    UnaryPostfixOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Star();
    antlr4::tree::TerminalNode* Star(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DoubleStar();
    antlr4::tree::TerminalNode* DoubleStar(size_t i);
    antlr4::tree::TerminalNode *Amp();
    antlr4::tree::TerminalNode *Exclamation();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnaryPostfixOperatorContext* unaryPostfixOperator();

  class ASTRUMLANG_API NotContext : public antlr4::ParserRuleContext {
  public:
    NotContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Exclamation();
    antlr4::tree::TerminalNode *Not();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NotContext* not_();

  class ASTRUMLANG_API OperatorContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OperatorContext* operator_();

  class ASTRUMLANG_API LiteralContext : public antlr4::ParserRuleContext {
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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralContext* literal();

  class ASTRUMLANG_API InterpolatedStringLiteralContext : public antlr4::ParserRuleContext {
  public:
    InterpolatedStringLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InterpolatedRegularStringLiteralContext *interpolatedRegularStringLiteral();
    InterpolatedVerbatiumStringLiteralContext *interpolatedVerbatiumStringLiteral();
    InterpolatedMultilineStringLiteralContext *interpolatedMultilineStringLiteral();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InterpolatedStringLiteralContext* interpolatedStringLiteral();

  class ASTRUMLANG_API InterpolatedRegularStringLiteralContext : public antlr4::ParserRuleContext {
  public:
    InterpolatedRegularStringLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *InterpolatedRegularStringStart();
    antlr4::tree::TerminalNode *DOUBLE_QUOTE_INSIDE();
    std::vector<InterpolatedRegularStringPartContext *> interpolatedRegularStringPart();
    InterpolatedRegularStringPartContext* interpolatedRegularStringPart(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InterpolatedRegularStringLiteralContext* interpolatedRegularStringLiteral();

  class ASTRUMLANG_API InterpolatedRegularStringPartContext : public antlr4::ParserRuleContext {
  public:
    InterpolatedRegularStringPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InterpolatedExpressionContext *interpolatedExpression();
    antlr4::tree::TerminalNode *DOUBLE_CURLY_INSIDE();
    antlr4::tree::TerminalNode *REGULAR_CHAR_INSIDE();
    antlr4::tree::TerminalNode *REGULAR_STRING_INSIDE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InterpolatedRegularStringPartContext* interpolatedRegularStringPart();

  class ASTRUMLANG_API InterpolatedVerbatiumStringLiteralContext : public antlr4::ParserRuleContext {
  public:
    InterpolatedVerbatiumStringLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *InterpolatedGraveStringStart();
    antlr4::tree::TerminalNode *GRAVE_INSIDE();
    std::vector<InterpolatedVerbatiumStringPartContext *> interpolatedVerbatiumStringPart();
    InterpolatedVerbatiumStringPartContext* interpolatedVerbatiumStringPart(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InterpolatedVerbatiumStringLiteralContext* interpolatedVerbatiumStringLiteral();

  class ASTRUMLANG_API InterpolatedVerbatiumStringPartContext : public antlr4::ParserRuleContext {
  public:
    InterpolatedVerbatiumStringPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InterpolatedExpressionContext *interpolatedExpression();
    antlr4::tree::TerminalNode *DOUBLE_CURLY_INSIDE();
    antlr4::tree::TerminalNode *VERBATIUM_DOUBLE_GRAVE_INSIDE();
    antlr4::tree::TerminalNode *GRAVE_STRING_INSIDE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InterpolatedVerbatiumStringPartContext* interpolatedVerbatiumStringPart();

  class ASTRUMLANG_API InterpolatedMultilineStringLiteralContext : public antlr4::ParserRuleContext {
  public:
    InterpolatedMultilineStringLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *InterpolatedMultilineStringStart();
    antlr4::tree::TerminalNode *TRIPLE_QUOTE_INSIDE();
    std::vector<InterpolatedMultilineStringPartContext *> interpolatedMultilineStringPart();
    InterpolatedMultilineStringPartContext* interpolatedMultilineStringPart(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InterpolatedMultilineStringLiteralContext* interpolatedMultilineStringLiteral();

  class ASTRUMLANG_API InterpolatedMultilineStringPartContext : public antlr4::ParserRuleContext {
  public:
    InterpolatedMultilineStringPartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InterpolatedExpressionContext *interpolatedExpression();
    antlr4::tree::TerminalNode *DOUBLE_CURLY_INSIDE();
    antlr4::tree::TerminalNode *MULTILINE_QUOTES_INSIDE();
    antlr4::tree::TerminalNode *MULTILINE_STRING_INSIDE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InterpolatedMultilineStringPartContext* interpolatedMultilineStringPart();

  class ASTRUMLANG_API InterpolatedExpressionContext : public antlr4::ParserRuleContext {
  public:
    InterpolatedExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NullCoalescingExpressionContext *nullCoalescingExpression();
    antlr4::tree::TerminalNode *Colon();
    std::vector<antlr4::tree::TerminalNode *> FORMAT_STRING();
    antlr4::tree::TerminalNode* FORMAT_STRING(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InterpolatedExpressionContext* interpolatedExpression();


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
  bool postfixExpressionSempred(PostfixExpressionContext *_localctx, size_t predicateIndex);
  bool nestedNameSpecifierSempred(NestedNameSpecifierContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

}  // namespace AstrumLang
