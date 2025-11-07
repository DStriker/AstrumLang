
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
    As = 19, Asm = 20, Assert = 21, Auto = 22, Await = 23, Bool = 24, Break = 25, 
    Case = 26, Catch = 27, Char = 28, Byte = 29, Class = 30, Concept = 31, 
    Const = 32, Consteval = 33, Continue = 34, Copy = 35, Debug = 36, Decimal = 37, 
    Decltype = 38, Default = 39, Delete = 40, Do = 41, Else = 42, Enum = 43, 
    Extern = 44, False_ = 45, Final = 46, F32 = 47, F64 = 48, Fext = 49, 
    Field = 50, For = 51, Forward = 52, Friend = 53, Get = 54, Goto = 55, 
    If = 56, Import = 57, Implicit = 58, In = 59, Inout = 60, I8 = 61, I16 = 62, 
    I32 = 63, I64 = 64, I128 = 65, Isize = 66, Inline = 67, Interface = 68, 
    Internal = 69, Is = 70, Let = 71, Lock = 72, Module = 73, Move = 74, 
    Mutable = 75, Namespace = 76, New = 77, Noexcept = 78, Null = 79, Operator_ = 80, 
    Out = 81, Override = 82, Private = 83, Protected = 84, Public = 85, 
    Ref = 86, Requires = 87, Return = 88, Rune = 89, Self = 90, Set = 91, 
    Sizeof = 92, Static = 93, Str = 94, Struct = 95, Super = 96, Switch = 97, 
    That = 98, This = 99, Thread_local = 100, Throw = 101, True_ = 102, 
    Try = 103, Type = 104, Typeof = 105, Union = 106, Using = 107, U8 = 108, 
    U16 = 109, U32 = 110, U64 = 111, U128 = 112, Unsafe = 113, Usize = 114, 
    Version = 115, Virtual = 116, Void = 117, Volatile = 118, While = 119, 
    Yield = 120, Not = 121, And = 122, Or = 123, Identifier = 124, LeftParen = 125, 
    RightParen = 126, LeftBracket = 127, RightBracket = 128, LeftBrace = 129, 
    RightBrace = 130, Plus = 131, Minus = 132, Star = 133, DoubleStar = 134, 
    Div = 135, Mod = 136, LifetimeAnnotation = 137, Caret = 138, Amp = 139, 
    VertLine = 140, Tilde = 141, Colon = 142, Assign = 143, Less = 144, 
    Greater = 145, PlusAssign = 146, MinusAssign = 147, StarAssign = 148, 
    DivAssign = 149, ModAssign = 150, XorAssign = 151, AndAssign = 152, 
    OrAssign = 153, LeftShiftAssign = 154, RightShiftAssign = 155, SignedLeftShiftAssign = 156, 
    SignedRightShiftAssign = 157, Equal = 158, NotEqual = 159, Spaceship = 160, 
    LessEqual = 161, GreaterEqual = 162, PlusPlus = 163, MinusMinus = 164, 
    Comma = 165, Arrow = 166, Question = 167, DoubleQuestion = 168, DoubleQuestionEqual = 169, 
    Doublecolon = 170, Semi = 171, Dot = 172, DoubleDot = 173, DoubleDotLess = 174, 
    Dollar = 175, Ellipsis = 176, Apostroph = 177, AtSign = 178, DOUBLE_CURLY_INSIDE = 179, 
    FORMAT_STRING = 180, DecimalLiteral = 181, OctalLiteral = 182, HexadecimalLiteral = 183, 
    BinaryLiteral = 184, Integersuffix = 185, DOUBLE_CURLY_CLOSE_INSIDE = 186
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

