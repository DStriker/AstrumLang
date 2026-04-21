
#include "AstrumLexerBase.h"
#include "export.h"


// Generated from AstrumLexer.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"


namespace AstrumLang {


class ASTRUMLANG_API AstrumLexer : public AstrumLexerBase {
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
    INTERPOLATION_STRING = 1, INTERPOLATION_FORMAT = 2
  };

  explicit AstrumLexer(antlr4::CharStream *input);

  ~AstrumLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  void action(antlr4::RuleContext *context, size_t ruleIndex, size_t actionIndex) override;

  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.
  void InterpolatedRegularStringStartAction(antlr4::RuleContext *context, size_t actionIndex);
  void InterpolatedGraveStringStartAction(antlr4::RuleContext *context, size_t actionIndex);
  void InterpolatedMultilineStringStartAction(antlr4::RuleContext *context, size_t actionIndex);
  void LeftBraceAction(antlr4::RuleContext *context, size_t actionIndex);
  void RightBraceAction(antlr4::RuleContext *context, size_t actionIndex);
  void ColonAction(antlr4::RuleContext *context, size_t actionIndex);
  void OPEN_BRACE_INSIDEAction(antlr4::RuleContext *context, size_t actionIndex);
  void DOUBLE_QUOTE_INSIDEAction(antlr4::RuleContext *context, size_t actionIndex);
  void GRAVE_INSIDEAction(antlr4::RuleContext *context, size_t actionIndex);
  void TRIPLE_QUOTE_INSIDEAction(antlr4::RuleContext *context, size_t actionIndex);
  void CLOSE_BRACE_INSIDEAction(antlr4::RuleContext *context, size_t actionIndex);

  // Individual semantic predicate functions triggered by sempred() above.
  bool REGULAR_CHAR_INSIDESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool VERBATIUM_DOUBLE_GRAVE_INSIDESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool MULTILINE_QUOTES_INSIDESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool REGULAR_STRING_INSIDESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool GRAVE_STRING_INSIDESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool MULTILINE_STRING_INSIDESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);

};

}  // namespace AstrumLang
