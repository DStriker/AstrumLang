
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
    Try = 103, Type = 104, Typeof = 105, Union = 106, Unowned = 107, Using = 108, 
    U8 = 109, U16 = 110, U32 = 111, U64 = 112, U128 = 113, Unsafe = 114, 
    Usize = 115, Version = 116, Virtual = 117, Void = 118, Volatile = 119, 
    Weak = 120, While = 121, Yield = 122, Not = 123, And = 124, Or = 125, 
    Identifier = 126, LeftParen = 127, RightParen = 128, LeftBracket = 129, 
    RightBracket = 130, LeftBrace = 131, RightBrace = 132, Plus = 133, Minus = 134, 
    Star = 135, DoubleStar = 136, Div = 137, Mod = 138, LifetimeAnnotation = 139, 
    Caret = 140, Amp = 141, VertLine = 142, Tilde = 143, Colon = 144, Assign = 145, 
    Less = 146, Greater = 147, PlusAssign = 148, MinusAssign = 149, StarAssign = 150, 
    DivAssign = 151, ModAssign = 152, XorAssign = 153, AndAssign = 154, 
    OrAssign = 155, LeftShiftAssign = 156, RightShiftAssign = 157, SignedLeftShiftAssign = 158, 
    SignedRightShiftAssign = 159, Equal = 160, NotEqual = 161, Spaceship = 162, 
    LessEqual = 163, GreaterEqual = 164, PlusPlus = 165, MinusMinus = 166, 
    Comma = 167, Arrow = 168, Exclamation = 169, Question = 170, DoubleQuestion = 171, 
    DoubleQuestionAssign = 172, Doublecolon = 173, Semi = 174, Dot = 175, 
    DoubleDot = 176, DoubleDotLess = 177, Dollar = 178, Ellipsis = 179, 
    Apostroph = 180, AtSign = 181, DOUBLE_CURLY_INSIDE = 182, FORMAT_STRING = 183, 
    DecimalLiteral = 184, OctalLiteral = 185, HexadecimalLiteral = 186, 
    BinaryLiteral = 187, Integersuffix = 188, DOUBLE_CURLY_CLOSE_INSIDE = 189
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

