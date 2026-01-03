
// Generated from CppAdvanceLexer.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  CppAdvanceLexer : public antlr4::Lexer {
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
    INTERPOLATION_STRING = 1, INTERPOLATION_FORMAT = 2
  };

  explicit CppAdvanceLexer(antlr4::CharStream *input);

  ~CppAdvanceLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

