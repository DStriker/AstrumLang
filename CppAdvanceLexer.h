
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
    Extension = 44, Extern = 45, False_ = 46, Final = 47, F32 = 48, F64 = 49, 
    Fext = 50, Field = 51, For = 52, Forward = 53, Friend = 54, Get = 55, 
    Goto = 56, If = 57, Import = 58, Implicit = 59, In = 60, Inout = 61, 
    I8 = 62, I16 = 63, I32 = 64, I64 = 65, I128 = 66, Isize = 67, Inline = 68, 
    Interface = 69, Internal = 70, Is = 71, Let = 72, Lock = 73, Module = 74, 
    Move = 75, Mutable = 76, Namespace = 77, New = 78, Noexcept = 79, Null = 80, 
    Object = 81, Operator_ = 82, Out = 83, Override = 84, Private = 85, 
    Protected = 86, Public = 87, Ref = 88, Requires = 89, Return = 90, Rune = 91, 
    Self = 92, Set = 93, Sizeof = 94, Stackalloc = 95, Static = 96, Str = 97, 
    Struct = 98, Super = 99, Switch = 100, That = 101, This = 102, Thread_local = 103, 
    Throw = 104, True_ = 105, Try = 106, Type = 107, Typeof = 108, Union = 109, 
    Unowned = 110, Using = 111, U8 = 112, U16 = 113, U32 = 114, U64 = 115, 
    U128 = 116, Unsafe = 117, Usize = 118, Version = 119, Virtual = 120, 
    Void = 121, Volatile = 122, Weak = 123, While = 124, Yield = 125, Not = 126, 
    And = 127, Or = 128, Identifier = 129, LeftParen = 130, RightParen = 131, 
    LeftBracket = 132, RightBracket = 133, LeftBrace = 134, RightBrace = 135, 
    Plus = 136, Minus = 137, Star = 138, DoubleStar = 139, Div = 140, Mod = 141, 
    LifetimeAnnotation = 142, Caret = 143, Amp = 144, VertLine = 145, Tilde = 146, 
    Colon = 147, Assign = 148, Less = 149, Greater = 150, PlusAssign = 151, 
    MinusAssign = 152, StarAssign = 153, DivAssign = 154, ModAssign = 155, 
    XorAssign = 156, AndAssign = 157, OrAssign = 158, LeftShiftAssign = 159, 
    RightShiftAssign = 160, SignedLeftShiftAssign = 161, SignedRightShiftAssign = 162, 
    Equal = 163, NotEqual = 164, Spaceship = 165, LessEqual = 166, GreaterEqual = 167, 
    PlusPlus = 168, MinusMinus = 169, Comma = 170, Arrow = 171, Exclamation = 172, 
    Question = 173, DoubleQuestion = 174, DoubleQuestionAssign = 175, Doublecolon = 176, 
    Semi = 177, Dot = 178, DoubleDot = 179, DoubleDotLess = 180, Dollar = 181, 
    Ellipsis = 182, Apostroph = 183, AtSign = 184, DOUBLE_CURLY_INSIDE = 185, 
    FORMAT_STRING = 186, DecimalLiteral = 187, OctalLiteral = 188, HexadecimalLiteral = 189, 
    BinaryLiteral = 190, Integersuffix = 191, DOUBLE_CURLY_CLOSE_INSIDE = 192
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

