
// Generated from CppAdvanceParser.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  CppAdvanceParser : public antlr4::Parser {
public:
  enum {
    Whitespace = 1, Newline = 2, BlockComment = 3, LineComment = 4, IntegerLiteral = 5, 
    CharacterLiteral = 6, FloatingLiteral = 7, DecimalTypeLiteral = 8, StringLiteral = 9, 
    RegularString = 10, HexStringLiteral = 11, GraveString = 12, MultilineStringLiteral = 13, 
    BooleanLiteral = 14, Directive = 15, Abstract = 16, Alignas = 17, Alignof = 18, 
    As = 19, Asm = 20, Assert = 21, Await = 22, Bool = 23, Break = 24, Case = 25, 
    Catch = 26, Char = 27, Byte = 28, Class = 29, Const = 30, Consteval = 31, 
    Continue = 32, Debug = 33, Decimal = 34, Decltype = 35, Default = 36, 
    Delete = 37, Do = 38, Else = 39, Enum = 40, Extension = 41, Extern = 42, 
    False_ = 43, Final = 44, F32 = 45, F64 = 46, Fext = 47, Field = 48, 
    For = 49, Forward = 50, Friend = 51, Get = 52, If = 53, Import = 54, 
    Implicit = 55, In = 56, Inout = 57, I8 = 58, I16 = 59, I32 = 60, I64 = 61, 
    I128 = 62, Isize = 63, Inline = 64, Interface = 65, Internal = 66, Is = 67, 
    Let = 68, Lock = 69, Move = 70, Mutable = 71, New = 72, Noexcept = 73, 
    Null = 74, Object = 75, Operator_ = 76, Out = 77, Override = 78, Private = 79, 
    Protected = 80, Public = 81, Ref = 82, Requires = 83, Return = 84, Rune = 85, 
    Self = 86, Set = 87, Sizeof = 88, Stackalloc = 89, Static = 90, Str = 91, 
    Struct = 92, Super = 93, Switch = 94, This = 95, Thread_local = 96, 
    Throw = 97, True_ = 98, Try = 99, Type = 100, Typeof = 101, Union = 102, 
    Unowned = 103, Using = 104, U8 = 105, U16 = 106, U32 = 107, U64 = 108, 
    U128 = 109, Unsafe = 110, Usize = 111, Version = 112, Virtual = 113, 
    Void = 114, Volatile = 115, Weak = 116, While = 117, Yield = 118, Not = 119, 
    And = 120, Or = 121, Identifier = 122, LeftParen = 123, RightParen = 124, 
    LeftBracket = 125, RightBracket = 126, LeftBrace = 127, RightBrace = 128, 
    Plus = 129, Minus = 130, Star = 131, DoubleStar = 132, Div = 133, Mod = 134, 
    LifetimeAnnotation = 135, Caret = 136, DoubleCaret = 137, Amp = 138, 
    VertLine = 139, Tilde = 140, Colon = 141, Assign = 142, Less = 143, 
    Greater = 144, PlusAssign = 145, MinusAssign = 146, TildeAssign = 147, 
    StarAssign = 148, DoubleStarAssign = 149, DivAssign = 150, ModAssign = 151, 
    XorAssign = 152, AndAssign = 153, OrAssign = 154, LeftShiftAssign = 155, 
    RightShiftAssign = 156, SignedRightShiftAssign = 157, Equal = 158, NotEqual = 159, 
    IdentityEqual = 160, NotIdentityEqual = 161, Spaceship = 162, LessEqual = 163, 
    GreaterEqual = 164, PlusPlus = 165, MinusMinus = 166, Comma = 167, Arrow = 168, 
    AssignArrow = 169, EqualArrow = 170, Exclamation = 171, Question = 172, 
    DoubleQuestion = 173, DoubleQuestionAssign = 174, Doublecolon = 175, 
    Semi = 176, Dot = 177, DoubleDot = 178, DoubleDotEqual = 179, Dollar = 180, 
    Ellipsis = 181, Apostroph = 182, AtSign = 183, Op1 = 184, Op2 = 185, 
    Op10 = 186, Op3 = 187, Op4 = 188, Op5 = 189, Op7 = 190, Op6 = 191, Op8 = 192, 
    Op9 = 193, DOUBLE_CURLY_INSIDE = 194, FORMAT_STRING = 195, DecimalLiteral = 196, 
    OctalLiteral = 197, HexadecimalLiteral = 198, BinaryLiteral = 199, Integersuffix = 200, 
    DOUBLE_CURLY_CLOSE_INSIDE = 201
  };

  enum {
    RuleProgram = 0, RuleStat = 1, RuleDeclarationSeq = 2, RuleDeclaration = 3, 
    RuleSymbolSpecifierSeq = 4, RuleVersionDefinition = 5, RuleExternVariableDeclaration = 6, 
    RuleBlockDeclaration = 7, RuleMemberBlockDeclaration = 8, RuleLabeledStatement = 9, 
    RuleDeclarationStatement = 10, RuleExpressionStatement = 11, RuleDeclarationCompoundStatement = 12, 
    RuleVersionConditionalDeclaration = 13, RuleVersionIfDeclaration = 14, 
    RuleVersionElseDeclaration = 15, RuleCompoundStatement = 16, RuleStructDefinition = 17, 
    RuleStructHead = 18, RuleStructMemberSpecification = 19, RuleMemberDeclarationCompoundStatement = 20, 
    RuleMemberVersionConditionalDeclaration = 21, RuleMemberVersionIfDeclaration = 22, 
    RuleMemberVersionElseDeclaration = 23, RuleStructMemberDeclaration = 24, 
    RuleClassDefinition = 25, RuleClassHead = 26, RuleInterfaceDefinition = 27, 
    RuleInterfaceHead = 28, RuleInterfaceMemberSpecification = 29, RuleInterfaceMemberDeclaration = 30, 
    RuleEnumDefinition = 31, RuleEnumHead = 32, RuleEnumBase = 33, RuleEnumList = 34, 
    RuleEnumeratorDefinition = 35, RuleEnumMemberSpecification = 36, RuleEnumMemberDeclaration = 37, 
    RuleEnumClassDefinition = 38, RuleEnumClassHead = 39, RuleEnumClassList = 40, 
    RuleClassEnumeratorDefinition = 41, RuleEnumClassMemberSpecification = 42, 
    RuleUnionDefinition = 43, RuleUnionHead = 44, RuleUnionList = 45, RuleUnionEnumerator = 46, 
    RuleUnionEnumeratorClause = 47, RuleUnionMemberSpecification = 48, RuleExtensionDefinition = 49, 
    RuleExtensionHead = 50, RuleExtensionMemberSpecification = 51, RuleExtensionMemberDeclaration = 52, 
    RuleBaseClause = 53, RuleBaseSpecifierList = 54, RuleBaseSpecifier = 55, 
    RuleProperty = 56, RulePropertyBody = 57, RuleAbstractProperty = 58, 
    RuleInterfaceProperty = 59, RulePropertyGetter = 60, RulePropertySetter = 61, 
    RuleAbstractPropertyGetter = 62, RuleAbstractPropertySetter = 63, RuleExternFunctionDeclaration = 64, 
    RuleFunctionTemplateDeclaration = 65, RuleFunctionDefinition = 66, RuleAbstractMethodDeclaration = 67, 
    RuleInterfaceMethodDeclaration = 68, RuleConstructor = 69, RuleConstructorBody = 70, 
    RuleMemberInitializationList = 71, RuleDelegatingConstructorBody = 72, 
    RuleDelegatingConstructorStatement = 73, RuleMemberInitializationStatement = 74, 
    RuleDestructor = 75, RuleConversionFunction = 76, RuleIndexer = 77, 
    RuleIndexerProperty = 78, RuleIndexerGetter = 79, RuleIndexerSetter = 80, 
    RuleInterfaceIndexer = 81, RuleFunctionSpecifier = 82, RuleImplicitSpecification = 83, 
    RuleTemplateParams = 84, RuleTemplateParamDeclaration = 85, RuleTemplateTypename = 86, 
    RuleFunctionParams = 87, RuleParamDeclClause = 88, RuleParamDeclList = 89, 
    RuleParamDeclaration = 90, RuleParamSpecification = 91, RuleReturnType = 92, 
    RuleFunctionBody = 93, RuleShortFunctionBody = 94, RuleExceptionSpecification = 95, 
    RuleDeclSpecifier = 96, RuleDeclSpecifierSeq = 97, RuleIdentifierSeq = 98, 
    RuleFriendDeclaration = 99, RuleSelectionStatement = 100, RuleCondition = 101, 
    RuleElseBranch = 102, RuleDeclarator = 103, RuleIterationStatement = 104, 
    RuleWhileCondition = 105, RuleDoWhileCondition = 106, RuleForInitStatement = 107, 
    RuleForRangeDeclaration = 108, RuleForRangeInitializer = 109, RuleExpressionSeq = 110, 
    RuleJumpStatement = 111, RuleSimpleDeclaration = 112, RuleDeconstructionDeclaration = 113, 
    RuleRefDeclaration = 114, RuleMemberRefDeclaration = 115, RuleSimpleMultiDeclaration = 116, 
    RuleMultiDeclaration = 117, RuleConstantDeclaration = 118, RuleForwardVarDeclaration = 119, 
    RuleAliasDeclaration = 120, RuleVersionSelectionStatement = 121, RuleVersionSelectionStatementBlock = 122, 
    RuleScopeSafeCompoundStatement = 123, RuleExpr = 124, RulePowerExpression = 125, 
    RuleMultiplicativeExpression = 126, RuleAdditiveExpression = 127, RuleShiftExpression = 128, 
    RuleThreeWayComparisonExpression = 129, RuleRelationalExpression = 130, 
    RuleEqualityExpression = 131, RuleAndExpression = 132, RuleExclusiveOrExpression = 133, 
    RuleInclusiveOrExpression = 134, RuleLogicalAndExpression = 135, RuleLogicalOrExpression = 136, 
    RuleNullCoalescingExpression = 137, RuleNullCoalescingBranch = 138, 
    RuleConditionalExpression = 139, RuleConstantExpression = 140, RuleAssignmentExpression = 141, 
    RuleInitializerClause = 142, RuleBracedInitList = 143, RuleInitializerList = 144, 
    RuleInitializerPart = 145, RuleExpressionList = 146, RuleExpressionListPart = 147, 
    RuleAssignmentOperator = 148, RuleShiftOperator = 149, RuleTryBlock = 150, 
    RuleExceptionHandler = 151, RuleExceptionDeclaration = 152, RuleThrowExpression = 153, 
    RuleSimpleTypeSpecifier = 154, RuleNamedTupleField = 155, RuleNestedNameSpecifier = 156, 
    RuleNamespaceName = 157, RuleTemplateName = 158, RuleSimpleTemplateId = 159, 
    RuleOperatorTemplateId = 160, RuleTemplateId = 161, RuleTemplateArgumentList = 162, 
    RuleTemplateArgument = 163, RuleIdExpression = 164, RuleQualifiedId = 165, 
    RuleUnqualifiedId = 166, RuleTheTypeId = 167, RuleSingleTypeId = 168, 
    RuleTypePostfix = 169, RuleArrayDeclarator = 170, RulePointerOperator = 171, 
    RulePointerOperatorSeq = 172, RuleTypeSpecifierSeq = 173, RuleTypeSpecifier = 174, 
    RuleTrailingTypeSpecifier = 175, RuleTypeNameSpecifier = 176, RuleCvQualifierSeq = 177, 
    RuleCvQualifier = 178, RuleTypename = 179, RuleClassName = 180, RuleDecltypeSpecifier = 181, 
    RuleEnumName = 182, RuleAccessSpecifier = 183, RuleProtectedInternal = 184, 
    RuleOperatorFunctionId = 185, RuleConversionFunctionId = 186, RuleUnaryExpression = 187, 
    RuleUnaryExpressionTail = 188, RuleNewExpression = 189, RuleStackallocExpression = 190, 
    RuleMemorySpaceSetter = 191, RuleNewInitializer = 192, RuleFullPostfixExpression = 193, 
    RulePostfixExpression = 194, RuleTupleExpression = 195, RulePrimaryExpression = 196, 
    RuleUnaryPrefixOperator = 197, RuleUnaryCustomOperator = 198, RuleRefCaptureOperator = 199, 
    RuleUnaryPostfixOperator = 200, RuleNot = 201, RuleOperator = 202, RuleLiteral = 203
  };

  explicit CppAdvanceParser(antlr4::TokenStream *input);

  CppAdvanceParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~CppAdvanceParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgramContext;
  class StatContext;
  class DeclarationSeqContext;
  class DeclarationContext;
  class SymbolSpecifierSeqContext;
  class VersionDefinitionContext;
  class ExternVariableDeclarationContext;
  class BlockDeclarationContext;
  class MemberBlockDeclarationContext;
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
  class SelectionStatementContext;
  class ConditionContext;
  class ElseBranchContext;
  class DeclaratorContext;
  class IterationStatementContext;
  class WhileConditionContext;
  class DoWhileConditionContext;
  class ForInitStatementContext;
  class ForRangeDeclarationContext;
  class ForRangeInitializerContext;
  class ExpressionSeqContext;
  class JumpStatementContext;
  class SimpleDeclarationContext;
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
  class AssignmentOperatorContext;
  class ShiftOperatorContext;
  class TryBlockContext;
  class ExceptionHandlerContext;
  class ExceptionDeclarationContext;
  class ThrowExpressionContext;
  class SimpleTypeSpecifierContext;
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
  class PrimaryExpressionContext;
  class UnaryPrefixOperatorContext;
  class UnaryCustomOperatorContext;
  class RefCaptureOperatorContext;
  class UnaryPostfixOperatorContext;
  class NotContext;
  class OperatorContext;
  class LiteralContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationSeqContext *declarationSeq();
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ProgramContext* program();

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
    CompoundStatementContext *compoundStatement();
    antlr4::tree::TerminalNode *Unsafe();

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
    MemberRefDeclarationContext *memberRefDeclaration();
    ConstantDeclarationContext *constantDeclaration();
    AliasDeclarationContext *aliasDeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MemberBlockDeclarationContext* memberBlockDeclaration();

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
    InterfaceMethodDeclarationContext *interfaceMethodDeclaration();
    InterfaceIndexerContext *interfaceIndexer();
    InterfacePropertyContext *interfaceProperty();
    ConstantDeclarationContext *constantDeclaration();
    AliasDeclarationContext *aliasDeclaration();

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
    antlr4::tree::TerminalNode *Const();
    antlr4::tree::TerminalNode *Ref();

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
    ExceptionSpecificationContext *exceptionSpecification();
    antlr4::tree::TerminalNode *Set();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InterfaceIndexerContext* interfaceIndexer();

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

  class  SelectionStatementContext : public antlr4::ParserRuleContext {
  public:
    SelectionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    antlr4::tree::TerminalNode *LeftParen();
    ConditionContext *condition();
    antlr4::tree::TerminalNode *RightParen();
    StatContext *stat();
    antlr4::tree::TerminalNode *Static();
    antlr4::tree::TerminalNode *Else();
    ElseBranchContext *elseBranch();
    CompoundStatementContext *compoundStatement();
    antlr4::tree::TerminalNode *Consteval();
    NotContext *not_();

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

  class  PowerExpressionContext : public antlr4::ParserRuleContext {
  public:
    PowerExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnaryExpressionContext *unaryExpression();
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
    std::vector<EqualityExpressionContext *> equalityExpression();
    EqualityExpressionContext* equalityExpression(size_t i);
    antlr4::tree::TerminalNode *IdentityEqual();
    antlr4::tree::TerminalNode *NotIdentityEqual();
    antlr4::tree::TerminalNode *Equal();
    antlr4::tree::TerminalNode *NotEqual();
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
    antlr4::tree::TerminalNode *LeftParen();
    std::vector<TheTypeIdContext *> theTypeId();
    TheTypeIdContext* theTypeId(size_t i);
    antlr4::tree::TerminalNode *RightParen();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);
    std::vector<NamedTupleFieldContext *> namedTupleField();
    NamedTupleFieldContext* namedTupleField(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SimpleTypeSpecifierContext* simpleTypeSpecifier();

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
    antlr4::tree::TerminalNode *LeftBracket();
    antlr4::tree::TerminalNode *RightBracket();
    antlr4::tree::TerminalNode *Question();
    antlr4::tree::TerminalNode *Dot();
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
    TheTypeIdContext *theTypeId();
    antlr4::tree::TerminalNode *Dot();
    antlr4::tree::TerminalNode *Identifier();
    TupleExpressionContext *tupleExpression();
    IdExpressionContext *idExpression();
    antlr4::tree::TerminalNode *Doublecolon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrimaryExpressionContext* primaryExpression();

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
    antlr4::tree::TerminalNode *Null();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LiteralContext* literal();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

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

