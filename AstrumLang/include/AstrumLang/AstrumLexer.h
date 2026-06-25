
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
    MultilineStringLiteral = 20, BooleanLiteral = 21, Abstract = 22, Alignof = 23, 
    As = 24, Assert = 25, Assume = 26, Await = 27, Bool = 28, Break = 29, 
    Catch = 30, Char = 31, Byte = 32, Class = 33, Const = 34, Consteval = 35, 
    Continue = 36, Cpp = 37, Debug = 38, Decay = 39, Decimal = 40, Decltype = 41, 
    Declval = 42, Default = 43, Defer = 44, Delete = 45, Do = 46, Else = 47, 
    Enum = 48, Extension = 49, Extern = 50, False_ = 51, Final = 52, F16 = 53, 
    F32 = 54, F64 = 55, F128 = 56, Fext = 57, Field = 58, For = 59, Forward = 60, 
    Friend = 61, Get = 62, If = 63, Import = 64, Implicit = 65, In = 66, 
    Inout = 67, I8 = 68, I16 = 69, I32 = 70, I64 = 71, I128 = 72, Isize = 73, 
    Inline = 74, Interface = 75, Internal = 76, Is = 77, Lazy = 78, Let = 79, 
    Lock = 80, Move = 81, Mutable = 82, Nameof = 83, New = 84, Noexcept = 85, 
    Null = 86, Object = 87, Offsetof = 88, Operator_ = 89, Out = 90, Override = 91, 
    Package = 92, Private = 93, Protected = 94, Public = 95, Ref = 96, Return = 97, 
    Self = 98, Set = 99, Sizeof = 100, Stackalloc = 101, Static = 102, Str = 103, 
    Struct = 104, Super = 105, Switch = 106, Test = 107, This = 108, Thread_local = 109, 
    Throw = 110, True_ = 111, Try = 112, Type = 113, Union = 114, Unowned = 115, 
    Using = 116, U8 = 117, U16 = 118, U32 = 119, U64 = 120, U128 = 121, 
    Unsafe = 122, Usize = 123, Version = 124, Virtual = 125, Void = 126, 
    Volatile = 127, Weak = 128, Where = 129, While = 130, Yield = 131, Not = 132, 
    And = 133, Or = 134, Identifier = 135, LeftParen = 136, RightParen = 137, 
    LeftBracket = 138, RightBracket = 139, LeftBrace = 140, RightBrace = 141, 
    Plus = 142, Minus = 143, Star = 144, DoubleStar = 145, Div = 146, Mod = 147, 
    LifetimeAnnotation = 148, Caret = 149, DoubleCaret = 150, Amp = 151, 
    VertLine = 152, Tilde = 153, Colon = 154, Assign = 155, Less = 156, 
    Greater = 157, PlusAssign = 158, MinusAssign = 159, TildeAssign = 160, 
    StarAssign = 161, DoubleStarAssign = 162, DivAssign = 163, ModAssign = 164, 
    XorAssign = 165, AndAssign = 166, OrAssign = 167, LeftShiftAssign = 168, 
    RightShiftAssign = 169, SignedRightShiftAssign = 170, Equal = 171, NotEqual = 172, 
    IdentityEqual = 173, NotIdentityEqual = 174, Spaceship = 175, LessEqual = 176, 
    GreaterEqual = 177, PlusPlus = 178, MinusMinus = 179, Comma = 180, Arrow = 181, 
    AssignArrow = 182, EqualArrow = 183, Exclamation = 184, Question = 185, 
    DoubleQuestion = 186, DoubleQuestionAssign = 187, Doublecolon = 188, 
    Semi = 189, Dot = 190, DoubleDot = 191, DoubleDotEqual = 192, Dollar = 193, 
    Hash = 194, Ellipsis = 195, Apostroph = 196, AtSign = 197, Op1 = 198, 
    Op2 = 199, Op10 = 200, Op3 = 201, Op4 = 202, Op5 = 203, Op7 = 204, Op6 = 205, 
    Op8 = 206, Op9 = 207, DOUBLE_CURLY_INSIDE = 208, OPEN_BRACE_INSIDE = 209, 
    REGULAR_CHAR_INSIDE = 210, VERBATIUM_DOUBLE_GRAVE_INSIDE = 211, MULTILINE_QUOTES_INSIDE = 212, 
    DOUBLE_QUOTE_INSIDE = 213, GRAVE_INSIDE = 214, TRIPLE_QUOTE_INSIDE = 215, 
    REGULAR_STRING_INSIDE = 216, GRAVE_STRING_INSIDE = 217, MULTILINE_STRING_INSIDE = 218, 
    CLOSE_BRACE_INSIDE = 219, FORMAT_STRING = 220, DOUBLE_CURLY_CLOSE_INSIDE = 221
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
