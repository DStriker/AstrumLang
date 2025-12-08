
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
    As = 19, Asm = 20, Assert = 21, Auto = 22, Await = 23, Bool = 24, Break = 25, 
    Case = 26, Catch = 27, Char = 28, Byte = 29, Class = 30, Concept = 31, 
    Const = 32, Consteval = 33, Continue = 34, Copy = 35, Debug = 36, Decimal = 37, 
    Decltype = 38, Default = 39, Delete = 40, Do = 41, Else = 42, Enum = 43, 
    Extern = 44, False_ = 45, Final = 46, F32 = 47, F64 = 48, Fext = 49, 
    Field = 50, For = 51, Forward = 52, Friend = 53, Get = 54, Goto = 55, 
    If = 56, Import = 57, Implicit = 58, In = 59, Inout = 60, I8 = 61, I16 = 62, 
    I32 = 63, I64 = 64, I128 = 65, Isize = 66, Inline = 67, Interface = 68, 
    Internal = 69, Is = 70, Let = 71, Lock = 72, Module = 73, Move = 74, 
    Mutable = 75, Namespace = 76, New = 77, Noexcept = 78, Null = 79, Object = 80, 
    Operator_ = 81, Out = 82, Override = 83, Private = 84, Protected = 85, 
    Public = 86, Ref = 87, Requires = 88, Return = 89, Rune = 90, Self = 91, 
    Set = 92, Sizeof = 93, Stackalloc = 94, Static = 95, Str = 96, Struct = 97, 
    Super = 98, Switch = 99, That = 100, This = 101, Thread_local = 102, 
    Throw = 103, True_ = 104, Try = 105, Type = 106, Typeof = 107, Union = 108, 
    Unowned = 109, Using = 110, U8 = 111, U16 = 112, U32 = 113, U64 = 114, 
    U128 = 115, Unsafe = 116, Usize = 117, Version = 118, Virtual = 119, 
    Void = 120, Volatile = 121, Weak = 122, While = 123, Yield = 124, Not = 125, 
    And = 126, Or = 127, Identifier = 128, LeftParen = 129, RightParen = 130, 
    LeftBracket = 131, RightBracket = 132, LeftBrace = 133, RightBrace = 134, 
    Plus = 135, Minus = 136, Star = 137, DoubleStar = 138, Div = 139, Mod = 140, 
    LifetimeAnnotation = 141, Caret = 142, Amp = 143, VertLine = 144, Tilde = 145, 
    Colon = 146, Assign = 147, Less = 148, Greater = 149, PlusAssign = 150, 
    MinusAssign = 151, StarAssign = 152, DivAssign = 153, ModAssign = 154, 
    XorAssign = 155, AndAssign = 156, OrAssign = 157, LeftShiftAssign = 158, 
    RightShiftAssign = 159, SignedLeftShiftAssign = 160, SignedRightShiftAssign = 161, 
    Equal = 162, NotEqual = 163, Spaceship = 164, LessEqual = 165, GreaterEqual = 166, 
    PlusPlus = 167, MinusMinus = 168, Comma = 169, Arrow = 170, Exclamation = 171, 
    Question = 172, DoubleQuestion = 173, DoubleQuestionAssign = 174, Doublecolon = 175, 
    Semi = 176, Dot = 177, DoubleDot = 178, DoubleDotLess = 179, Dollar = 180, 
    Ellipsis = 181, Apostroph = 182, AtSign = 183, DOUBLE_CURLY_INSIDE = 184, 
    FORMAT_STRING = 185, DecimalLiteral = 186, OctalLiteral = 187, HexadecimalLiteral = 188, 
    BinaryLiteral = 189, Integersuffix = 190, DOUBLE_CURLY_CLOSE_INSIDE = 191
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
    RuleClassDefinition = 25, RuleClassHead = 26, RuleBaseClause = 27, RuleBaseSpecifierList = 28, 
    RuleBaseSpecifier = 29, RuleProperty = 30, RulePropertyBody = 31, RuleAbstractProperty = 32, 
    RuleAbstractPropertyBody = 33, RulePropertyGetter = 34, RulePropertySetter = 35, 
    RuleAbstractPropertyGetter = 36, RuleAbstractPropertySetter = 37, RuleExternFunctionDeclaration = 38, 
    RuleFunctionTemplateDeclaration = 39, RuleFunctionDefinition = 40, RuleAbstractMethodDeclaration = 41, 
    RuleConstructor = 42, RuleConstructorBody = 43, RuleMemberInitializationList = 44, 
    RuleDelegatingConstructorBody = 45, RuleDelegatingConstructorStatement = 46, 
    RuleMemberInitializationStatement = 47, RuleDestructor = 48, RuleConversionFunction = 49, 
    RuleIndexer = 50, RuleIndexerProperty = 51, RuleIndexerGetter = 52, 
    RuleIndexerSetter = 53, RuleFunctionSpecifier = 54, RuleImplicitSpecification = 55, 
    RuleTemplateParams = 56, RuleTemplateParamDeclaration = 57, RuleTemplateTypename = 58, 
    RuleFunctionParams = 59, RuleParamDeclClause = 60, RuleParamDeclList = 61, 
    RuleParamDeclaration = 62, RuleParamSpecification = 63, RuleReturnType = 64, 
    RuleFunctionBody = 65, RuleShortFunctionBody = 66, RuleExceptionSpecification = 67, 
    RuleDeclSpecifier = 68, RuleDeclSpecifierSeq = 69, RuleIdentifierSeq = 70, 
    RuleFriendDeclaration = 71, RuleSelectionStatement = 72, RuleCondition = 73, 
    RuleElseBranch = 74, RuleDeclarator = 75, RuleIterationStatement = 76, 
    RuleWhileCondition = 77, RuleDoWhileCondition = 78, RuleForInitStatement = 79, 
    RuleForRangeDeclaration = 80, RuleForRangeInitializer = 81, RuleExpressionSeq = 82, 
    RuleJumpStatement = 83, RuleSimpleDeclaration = 84, RuleDeconstructionDeclaration = 85, 
    RuleRefDeclaration = 86, RuleMemberRefDeclaration = 87, RuleSimpleMultiDeclaration = 88, 
    RuleMultiDeclaration = 89, RuleConstantDeclaration = 90, RuleForwardVarDeclaration = 91, 
    RuleAliasDeclaration = 92, RuleVersionSelectionStatement = 93, RuleVersionSelectionStatementBlock = 94, 
    RuleScopeSafeCompoundStatement = 95, RuleExpr = 96, RuleMultiplicativeExpression = 97, 
    RuleMultiplicativeBranch = 98, RuleAdditiveExpression = 99, RuleAdditiveBranch = 100, 
    RuleShiftExpression = 101, RuleShiftBranch = 102, RuleThreeWayComparisonExpression = 103, 
    RuleRelationalExpression = 104, RuleRelationalBranch = 105, RuleEqualityExpression = 106, 
    RuleEqualityBranch = 107, RuleAndExpression = 108, RuleExclusiveOrExpression = 109, 
    RuleInclusiveOrExpression = 110, RuleLogicalAndExpression = 111, RuleLogicalOrExpression = 112, 
    RuleNullCoalescingExpression = 113, RuleNullCoalescingBranch = 114, 
    RuleConditionalExpression = 115, RuleConstantExpression = 116, RuleAssignmentExpression = 117, 
    RuleInitializerClause = 118, RuleBracedInitList = 119, RuleInitializerList = 120, 
    RuleInitializerPart = 121, RuleExpressionList = 122, RuleExpressionListPart = 123, 
    RuleAssignmentOperator = 124, RuleShiftOperator = 125, RuleTryBlock = 126, 
    RuleExceptionHandler = 127, RuleExceptionDeclaration = 128, RuleThrowExpression = 129, 
    RuleSimpleTypeSpecifier = 130, RuleNamedTupleField = 131, RuleNestedNameSpecifier = 132, 
    RuleNamespaceName = 133, RuleTemplateName = 134, RuleSimpleTemplateId = 135, 
    RuleOperatorTemplateId = 136, RuleTemplateId = 137, RuleTemplateArgumentList = 138, 
    RuleTemplateArgument = 139, RuleIdExpression = 140, RuleQualifiedId = 141, 
    RuleUnqualifiedId = 142, RuleTheTypeId = 143, RuleTypePostfix = 144, 
    RuleArrayDeclarator = 145, RulePointerOperator = 146, RulePointerOperatorSeq = 147, 
    RuleTypeSpecifierSeq = 148, RuleTypeSpecifier = 149, RuleTrailingTypeSpecifier = 150, 
    RuleTypeNameSpecifier = 151, RuleCvQualifierSeq = 152, RuleCvQualifier = 153, 
    RuleTypename = 154, RuleClassName = 155, RuleDecltypeSpecifier = 156, 
    RuleEnumName = 157, RuleAccessSpecifier = 158, RuleProtectedInternal = 159, 
    RuleOperatorFunctionId = 160, RuleConversionFunctionId = 161, RuleUnaryExpression = 162, 
    RuleNewExpression = 163, RuleStackallocExpression = 164, RuleMemorySpaceSetter = 165, 
    RuleNewInitializer = 166, RulePostfixExpression = 167, RuleTupleExpression = 168, 
    RulePrimaryExpression = 169, RuleUnaryPrefixOperator = 170, RuleRefCaptureOperator = 171, 
    RuleUnaryPostfixOperator = 172, RuleNot = 173, RuleOperator = 174, RuleLiteral = 175
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
  class BaseClauseContext;
  class BaseSpecifierListContext;
  class BaseSpecifierContext;
  class PropertyContext;
  class PropertyBodyContext;
  class AbstractPropertyContext;
  class AbstractPropertyBodyContext;
  class PropertyGetterContext;
  class PropertySetterContext;
  class AbstractPropertyGetterContext;
  class AbstractPropertySetterContext;
  class ExternFunctionDeclarationContext;
  class FunctionTemplateDeclarationContext;
  class FunctionDefinitionContext;
  class AbstractMethodDeclarationContext;
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
  class MultiplicativeExpressionContext;
  class MultiplicativeBranchContext;
  class AdditiveExpressionContext;
  class AdditiveBranchContext;
  class ShiftExpressionContext;
  class ShiftBranchContext;
  class ThreeWayComparisonExpressionContext;
  class RelationalExpressionContext;
  class RelationalBranchContext;
  class EqualityExpressionContext;
  class EqualityBranchContext;
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
  class NewExpressionContext;
  class StackallocExpressionContext;
  class MemorySpaceSetterContext;
  class NewInitializerContext;
  class PostfixExpressionContext;
  class TupleExpressionContext;
  class PrimaryExpressionContext;
  class UnaryPrefixOperatorContext;
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
    ClassDefinitionContext *classDefinition();
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
    antlr4::tree::TerminalNode *Ref();
    TemplateParamsContext *templateParams();
    BaseClauseContext *baseClause();

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

  class  AbstractPropertyBodyContext : public antlr4::ParserRuleContext {
  public:
    AbstractPropertyBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    AbstractPropertyGetterContext *abstractPropertyGetter();
    AbstractPropertySetterContext *abstractPropertySetter();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AbstractPropertyBodyContext* abstractPropertyBody();

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
    antlr4::tree::TerminalNode *Greater();
    antlr4::tree::TerminalNode *Assign();
    antlr4::tree::TerminalNode *Equal();
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
    antlr4::tree::TerminalNode *Greater();
    ExpressionStatementContext *expressionStatement();
    antlr4::tree::TerminalNode *Assign();
    antlr4::tree::TerminalNode *Equal();

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

  class  MultiplicativeExpressionContext : public antlr4::ParserRuleContext {
  public:
    MultiplicativeExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnaryExpressionContext *unaryExpression();
    std::vector<MultiplicativeBranchContext *> multiplicativeBranch();
    MultiplicativeBranchContext* multiplicativeBranch(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MultiplicativeExpressionContext* multiplicativeExpression();

  class  MultiplicativeBranchContext : public antlr4::ParserRuleContext {
  public:
    MultiplicativeBranchContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnaryExpressionContext *unaryExpression();
    antlr4::tree::TerminalNode *Star();
    antlr4::tree::TerminalNode *Div();
    antlr4::tree::TerminalNode *Mod();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MultiplicativeBranchContext* multiplicativeBranch();

  class  AdditiveExpressionContext : public antlr4::ParserRuleContext {
  public:
    AdditiveExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MultiplicativeExpressionContext *multiplicativeExpression();
    std::vector<AdditiveBranchContext *> additiveBranch();
    AdditiveBranchContext* additiveBranch(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AdditiveExpressionContext* additiveExpression();

  class  AdditiveBranchContext : public antlr4::ParserRuleContext {
  public:
    AdditiveBranchContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MultiplicativeExpressionContext *multiplicativeExpression();
    antlr4::tree::TerminalNode *Plus();
    antlr4::tree::TerminalNode *Minus();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AdditiveBranchContext* additiveBranch();

  class  ShiftExpressionContext : public antlr4::ParserRuleContext {
  public:
    ShiftExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AdditiveExpressionContext *additiveExpression();
    std::vector<ShiftBranchContext *> shiftBranch();
    ShiftBranchContext* shiftBranch(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ShiftExpressionContext* shiftExpression();

  class  ShiftBranchContext : public antlr4::ParserRuleContext {
  public:
    ShiftBranchContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ShiftOperatorContext *shiftOperator();
    AdditiveExpressionContext *additiveExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ShiftBranchContext* shiftBranch();

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
    RelationalBranchContext *relationalBranch();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RelationalExpressionContext* relationalExpression();

  class  RelationalBranchContext : public antlr4::ParserRuleContext {
  public:
    RelationalBranchContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ThreeWayComparisonExpressionContext *threeWayComparisonExpression();
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *Greater();
    antlr4::tree::TerminalNode *LessEqual();
    antlr4::tree::TerminalNode *GreaterEqual();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RelationalBranchContext* relationalBranch();

  class  EqualityExpressionContext : public antlr4::ParserRuleContext {
  public:
    EqualityExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RelationalExpressionContext *relationalExpression();
    std::vector<EqualityBranchContext *> equalityBranch();
    EqualityBranchContext* equalityBranch(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EqualityExpressionContext* equalityExpression();

  class  EqualityBranchContext : public antlr4::ParserRuleContext {
  public:
    EqualityBranchContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RelationalExpressionContext *relationalExpression();
    antlr4::tree::TerminalNode *Equal();
    antlr4::tree::TerminalNode *NotEqual();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EqualityBranchContext* equalityBranch();

  class  AndExpressionContext : public antlr4::ParserRuleContext {
  public:
    AndExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<EqualityExpressionContext *> equalityExpression();
    EqualityExpressionContext* equalityExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Amp();
    antlr4::tree::TerminalNode* Amp(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AndExpressionContext* andExpression();

  class  ExclusiveOrExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExclusiveOrExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AndExpressionContext *> andExpression();
    AndExpressionContext* andExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Caret();
    antlr4::tree::TerminalNode* Caret(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExclusiveOrExpressionContext* exclusiveOrExpression();

  class  InclusiveOrExpressionContext : public antlr4::ParserRuleContext {
  public:
    InclusiveOrExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExclusiveOrExpressionContext *> exclusiveOrExpression();
    ExclusiveOrExpressionContext* exclusiveOrExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> VertLine();
    antlr4::tree::TerminalNode* VertLine(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InclusiveOrExpressionContext* inclusiveOrExpression();

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
    antlr4::tree::TerminalNode *StarAssign();
    antlr4::tree::TerminalNode *DivAssign();
    antlr4::tree::TerminalNode *ModAssign();
    antlr4::tree::TerminalNode *RightShiftAssign();
    antlr4::tree::TerminalNode *LeftShiftAssign();
    antlr4::tree::TerminalNode *AndAssign();
    antlr4::tree::TerminalNode *XorAssign();
    antlr4::tree::TerminalNode *OrAssign();
    antlr4::tree::TerminalNode *DoubleQuestionAssign();

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
    TypeSpecifierSeqContext *typeSpecifierSeq();
    antlr4::tree::TerminalNode *Question();
    TypePostfixContext *typePostfix();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TheTypeIdContext* theTypeId();

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
    PostfixExpressionContext *postfixExpression();
    UnaryExpressionContext *unaryExpression();
    UnaryPrefixOperatorContext *unaryPrefixOperator();
    RefCaptureOperatorContext *refCaptureOperator();
    antlr4::tree::TerminalNode *Out();
    antlr4::tree::TerminalNode *PlusPlus();
    antlr4::tree::TerminalNode *MinusMinus();
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

  UnaryExpressionContext* unaryExpression();

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
    antlr4::tree::TerminalNode *Dot();
    antlr4::tree::TerminalNode *IntegerLiteral();
    IdExpressionContext *idExpression();
    antlr4::tree::TerminalNode *Question();
    antlr4::tree::TerminalNode *Greater();
    antlr4::tree::TerminalNode *PlusPlus();
    antlr4::tree::TerminalNode *MinusMinus();
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UnaryPrefixOperatorContext* unaryPrefixOperator();

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
    antlr4::tree::TerminalNode *Plus();
    antlr4::tree::TerminalNode *Minus();
    antlr4::tree::TerminalNode *Star();
    antlr4::tree::TerminalNode *Div();
    antlr4::tree::TerminalNode *Mod();
    antlr4::tree::TerminalNode *Caret();
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
    antlr4::tree::TerminalNode *StarAssign();
    antlr4::tree::TerminalNode *ModAssign();
    antlr4::tree::TerminalNode *XorAssign();
    antlr4::tree::TerminalNode *AndAssign();
    antlr4::tree::TerminalNode *OrAssign();
    antlr4::tree::TerminalNode *RightShiftAssign();
    antlr4::tree::TerminalNode *LeftShiftAssign();
    antlr4::tree::TerminalNode *Equal();
    antlr4::tree::TerminalNode *NotEqual();
    antlr4::tree::TerminalNode *LessEqual();
    antlr4::tree::TerminalNode *Spaceship();
    antlr4::tree::TerminalNode *PlusPlus();
    antlr4::tree::TerminalNode *MinusMinus();
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();

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

  bool nestedNameSpecifierSempred(NestedNameSpecifierContext *_localctx, size_t predicateIndex);
  bool postfixExpressionSempred(PostfixExpressionContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

