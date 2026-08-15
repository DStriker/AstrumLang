#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"

namespace System {
namespace __Unsafe {} namespace __AsciiChar$Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
class AsciiChar;
class $Class_AsciiChar;
} namespace $extensions {
} namespace System {
//###############################################################################
//# Type definitions
//###############################################################################
class $Class_AsciiChar;
	#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	struct AsciiChar final : public Builtin::Enum {
		public: using $self = AsciiChar;
		public: using $class = $Class_AsciiChar;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		private: Builtin::u8 __value;
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: constexpr auto getValue() const noexcept { return __value; } ADV_PROPERTY_GETTER(public, Value, getValue, Builtin::u8)
		public: constexpr AsciiChar() noexcept = default;
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		private: static constexpr Builtin::Str __names[] = {"Null", "StartOfHeading", "StartOfText", "EndOfText", "EndOfTransmission", "Enquiry", "Acknowledge", "Bell", "Backspace", "HorizontalTab", "LineFeed", "VerticalTab", "FormFeed", "CarriageReturn", "ShiftOut", "ShiftIn", "DataLinkEscape", "DeviceControl1", "DeviceControl2", "DeviceControl3", "DeviceControl4", "NegativeAcknowledge", "SynchronousIdle", "EndOfTransmissionBlock", "Cancel", "EndOfMedium", "Substitute", "Escape", "FileSeparator", "GroupSeparator", "RecordSeparator", "UnitSeparator", "Space", "ExclamationMark", "QuotationMark", "NumberSign", "DollarSign", "PercentSign", "Ampersand", "Apostrophe", "LeftParenthesis", "RightParenthesis", "Asterisk", "PlusSign", "Comma", "HyphenMinus", "FullStop", "Solidus", "Digit0", "Digit1", "Digit2", "Digit3", "Digit4", "Digit5", "Digit6", "Digit7", "Digit8", "Digit9", "Colon", "Semicolon", "LessThanSign", "EqualsSign", "GreaterThanSign", "QuestionMark", "CommercialAt", "CapitalA", "CapitalB", "CapitalC", "CapitalD", "CapitalE", "CapitalF", "CapitalG", "CapitalH", "CapitalI", "CapitalJ", "CapitalK", "CapitalL", "CapitalM", "CapitalN", "CapitalO", "CapitalP", "CapitalQ", "CapitalR", "CapitalS", "CapitalT", "CapitalU", "CapitalV", "CapitalW", "CapitalX", "CapitalY", "CapitalZ", "LeftSquareBracket", "ReverseSolidus", "RightSquareBracket", "CircumflexAccent", "LowLine", "GraveAccent", "SmallA", "SmallB", "SmallC", "SmallD", "SmallE", "SmallF", "SmallG", "SmallH", "SmallI", "SmallJ", "SmallK", "SmallL", "SmallM", "SmallN", "SmallO", "SmallP", "SmallQ", "SmallR", "SmallS", "SmallT", "SmallU", "SmallV", "SmallW", "SmallX", "SmallY", "SmallZ", "LeftCurlyBracket", "VerticalLine", "RightCurlyBracket", "Tilde", "Delete"};
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static constexpr int __variants = 128;
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static constexpr std::span<const Builtin::Str> GetNames() noexcept { return __names; }
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		private: static const AsciiChar __values[];
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static constexpr std::span<const AsciiChar> GetValues() noexcept;
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: constexpr operator bool() const noexcept { return static_cast<bool>(__value); } 
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: constexpr bool operator ==(const $self& that) const noexcept { return __value == that.__value; } 
		public: constexpr auto operator <=>(const $self& that) const noexcept { return __value <=> that.__value; } 
		#line 4 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar Null;
		#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar StartOfHeading;
		#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar StartOfText;
		#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar EndOfText;
		#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar EndOfTransmission;
		#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar Enquiry;
		#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar Acknowledge;
		#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar Bell;
		#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar Backspace;
		#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar HorizontalTab;
		#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar LineFeed;
		#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar VerticalTab;
		#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar FormFeed;
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar CarriageReturn;
		#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar ShiftOut;
		#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar ShiftIn;
		#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar DataLinkEscape;
		#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar DeviceControl1;
		#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar DeviceControl2;
		#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar DeviceControl3;
		#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar DeviceControl4;
		#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar NegativeAcknowledge;
		#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar SynchronousIdle;
		#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar EndOfTransmissionBlock;
		#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar Cancel;
		#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar EndOfMedium;
		#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar Substitute;
		#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar Escape;
		#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar FileSeparator;
		#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar GroupSeparator;
		#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar RecordSeparator;
		#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar UnitSeparator;
		#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar Space;
		#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar ExclamationMark;
		#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar QuotationMark;
		#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar NumberSign;
		#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar DollarSign;
		#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar PercentSign;
		#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar Ampersand;
		#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar Apostrophe;
		#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar LeftParenthesis;
		#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar RightParenthesis;
		#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar Asterisk;
		#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar PlusSign;
		#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar Comma;
		#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar HyphenMinus;
		#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar FullStop;
		#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar Solidus;
		#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar Digit0;
		#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar Digit1;
		#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar Digit2;
		#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar Digit3;
		#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar Digit4;
		#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar Digit5;
		#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar Digit6;
		#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar Digit7;
		#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar Digit8;
		#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar Digit9;
		#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar Colon;
		#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar Semicolon;
		#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar LessThanSign;
		#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar EqualsSign;
		#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar GreaterThanSign;
		#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar QuestionMark;
		#line 68 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar CommercialAt;
		#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar CapitalA;
		#line 70 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar CapitalB;
		#line 71 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar CapitalC;
		#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar CapitalD;
		#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar CapitalE;
		#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar CapitalF;
		#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar CapitalG;
		#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar CapitalH;
		#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar CapitalI;
		#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar CapitalJ;
		#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar CapitalK;
		#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar CapitalL;
		#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar CapitalM;
		#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar CapitalN;
		#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar CapitalO;
		#line 84 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar CapitalP;
		#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar CapitalQ;
		#line 86 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar CapitalR;
		#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar CapitalS;
		#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar CapitalT;
		#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar CapitalU;
		#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar CapitalV;
		#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar CapitalW;
		#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar CapitalX;
		#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar CapitalY;
		#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar CapitalZ;
		#line 95 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar LeftSquareBracket;
		#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar ReverseSolidus;
		#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar RightSquareBracket;
		#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar CircumflexAccent;
		#line 99 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar LowLine;
		#line 100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar GraveAccent;
		#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar SmallA;
		#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar SmallB;
		#line 103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar SmallC;
		#line 104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar SmallD;
		#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar SmallE;
		#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar SmallF;
		#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar SmallG;
		#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar SmallH;
		#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar SmallI;
		#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar SmallJ;
		#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar SmallK;
		#line 112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar SmallL;
		#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar SmallM;
		#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar SmallN;
		#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar SmallO;
		#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar SmallP;
		#line 117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar SmallQ;
		#line 118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar SmallR;
		#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar SmallS;
		#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar SmallT;
		#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar SmallU;
		#line 122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar SmallV;
		#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar SmallW;
		#line 124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar SmallX;
		#line 125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar SmallY;
		#line 126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar SmallZ;
		#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar LeftCurlyBracket;
		#line 128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar VerticalLine;
		#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar RightCurlyBracket;
		#line 130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar Tilde;
		#line 131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: static ASTRUMSTD_HIDDEN const AsciiChar Delete;
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: constexpr operator Builtin::u8() const noexcept { return __value; }
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		private: constexpr AsciiChar(Builtin::u8 value) : __value(value) {}
		public: static constexpr $self FromValue(Builtin::u8 rawValue) { return $self(rawValue); }
		
	};
	
	#line 4 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::Null = Builtin::u8(Builtin::i32(0));
	
	#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::StartOfHeading = Builtin::u8(Builtin::i32(1));
	
	#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::StartOfText = Builtin::u8(Builtin::i32(2));
	
	#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::EndOfText = Builtin::u8(Builtin::i32(3));
	
	#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::EndOfTransmission = Builtin::u8(Builtin::i32(4));
	
	#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::Enquiry = Builtin::u8(Builtin::i32(5));
	
	#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::Acknowledge = Builtin::u8(Builtin::i32(6));
	
	#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::Bell = Builtin::u8(Builtin::i32(7));
	
	#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::Backspace = Builtin::u8(Builtin::i32(8));
	
	#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::HorizontalTab = Builtin::u8(Builtin::i32(9));
	
	#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::LineFeed = Builtin::u8(Builtin::i32(10));
	
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::VerticalTab = Builtin::u8(Builtin::i32(11));
	
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::FormFeed = Builtin::u8(Builtin::i32(12));
	
	#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::CarriageReturn = Builtin::u8(Builtin::i32(13));
	
	#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::ShiftOut = Builtin::u8(Builtin::i32(14));
	
	#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::ShiftIn = Builtin::u8(Builtin::i32(15));
	
	#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::DataLinkEscape = Builtin::u8(Builtin::i32(16));
	
	#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::DeviceControl1 = Builtin::u8(Builtin::i32(17));
	
	#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::DeviceControl2 = Builtin::u8(Builtin::i32(18));
	
	#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::DeviceControl3 = Builtin::u8(Builtin::i32(19));
	
	#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::DeviceControl4 = Builtin::u8(Builtin::i32(20));
	
	#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::NegativeAcknowledge = Builtin::u8(Builtin::i32(21));
	
	#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::SynchronousIdle = Builtin::u8(Builtin::i32(22));
	
	#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::EndOfTransmissionBlock = Builtin::u8(Builtin::i32(23));
	
	#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::Cancel = Builtin::u8(Builtin::i32(24));
	
	#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::EndOfMedium = Builtin::u8(Builtin::i32(25));
	
	#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::Substitute = Builtin::u8(Builtin::i32(26));
	
	#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::Escape = Builtin::u8(Builtin::i32(27));
	
	#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::FileSeparator = Builtin::u8(Builtin::i32(28));
	
	#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::GroupSeparator = Builtin::u8(Builtin::i32(29));
	
	#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::RecordSeparator = Builtin::u8(Builtin::i32(30));
	
	#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::UnitSeparator = Builtin::u8(Builtin::i32(31));
	
	#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::Space = Builtin::u8(Builtin::i32(32));
	
	#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::ExclamationMark = Builtin::u8(Builtin::i32(33));
	
	#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::QuotationMark = Builtin::u8(Builtin::i32(34));
	
	#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::NumberSign = Builtin::u8(Builtin::i32(35));
	
	#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::DollarSign = Builtin::u8(Builtin::i32(36));
	
	#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::PercentSign = Builtin::u8(Builtin::i32(37));
	
	#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::Ampersand = Builtin::u8(Builtin::i32(38));
	
	#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::Apostrophe = Builtin::u8(Builtin::i32(39));
	
	#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::LeftParenthesis = Builtin::u8(Builtin::i32(40));
	
	#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::RightParenthesis = Builtin::u8(Builtin::i32(41));
	
	#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::Asterisk = Builtin::u8(Builtin::i32(42));
	
	#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::PlusSign = Builtin::u8(Builtin::i32(43));
	
	#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::Comma = Builtin::u8(Builtin::i32(44));
	
	#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::HyphenMinus = Builtin::u8(Builtin::i32(45));
	
	#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::FullStop = Builtin::u8(Builtin::i32(46));
	
	#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::Solidus = Builtin::u8(Builtin::i32(47));
	
	#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::Digit0 = Builtin::u8(Builtin::i32(48));
	
	#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::Digit1 = Builtin::u8(Builtin::i32(49));
	
	#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::Digit2 = Builtin::u8(Builtin::i32(50));
	
	#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::Digit3 = Builtin::u8(Builtin::i32(51));
	
	#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::Digit4 = Builtin::u8(Builtin::i32(52));
	
	#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::Digit5 = Builtin::u8(Builtin::i32(53));
	
	#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::Digit6 = Builtin::u8(Builtin::i32(54));
	
	#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::Digit7 = Builtin::u8(Builtin::i32(55));
	
	#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::Digit8 = Builtin::u8(Builtin::i32(56));
	
	#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::Digit9 = Builtin::u8(Builtin::i32(57));
	
	#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::Colon = Builtin::u8(Builtin::i32(58));
	
	#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::Semicolon = Builtin::u8(Builtin::i32(59));
	
	#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::LessThanSign = Builtin::u8(Builtin::i32(60));
	
	#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::EqualsSign = Builtin::u8(Builtin::i32(61));
	
	#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::GreaterThanSign = Builtin::u8(Builtin::i32(62));
	
	#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::QuestionMark = Builtin::u8(Builtin::i32(63));
	
	#line 68 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::CommercialAt = Builtin::u8(Builtin::i32(64));
	
	#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::CapitalA = Builtin::u8(Builtin::i32(65));
	
	#line 70 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::CapitalB = Builtin::u8(Builtin::i32(66));
	
	#line 71 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::CapitalC = Builtin::u8(Builtin::i32(67));
	
	#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::CapitalD = Builtin::u8(Builtin::i32(68));
	
	#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::CapitalE = Builtin::u8(Builtin::i32(69));
	
	#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::CapitalF = Builtin::u8(Builtin::i32(70));
	
	#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::CapitalG = Builtin::u8(Builtin::i32(71));
	
	#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::CapitalH = Builtin::u8(Builtin::i32(72));
	
	#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::CapitalI = Builtin::u8(Builtin::i32(73));
	
	#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::CapitalJ = Builtin::u8(Builtin::i32(74));
	
	#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::CapitalK = Builtin::u8(Builtin::i32(75));
	
	#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::CapitalL = Builtin::u8(Builtin::i32(76));
	
	#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::CapitalM = Builtin::u8(Builtin::i32(77));
	
	#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::CapitalN = Builtin::u8(Builtin::i32(78));
	
	#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::CapitalO = Builtin::u8(Builtin::i32(79));
	
	#line 84 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::CapitalP = Builtin::u8(Builtin::i32(80));
	
	#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::CapitalQ = Builtin::u8(Builtin::i32(81));
	
	#line 86 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::CapitalR = Builtin::u8(Builtin::i32(82));
	
	#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::CapitalS = Builtin::u8(Builtin::i32(83));
	
	#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::CapitalT = Builtin::u8(Builtin::i32(84));
	
	#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::CapitalU = Builtin::u8(Builtin::i32(85));
	
	#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::CapitalV = Builtin::u8(Builtin::i32(86));
	
	#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::CapitalW = Builtin::u8(Builtin::i32(87));
	
	#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::CapitalX = Builtin::u8(Builtin::i32(88));
	
	#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::CapitalY = Builtin::u8(Builtin::i32(89));
	
	#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::CapitalZ = Builtin::u8(Builtin::i32(90));
	
	#line 95 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::LeftSquareBracket = Builtin::u8(Builtin::i32(91));
	
	#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::ReverseSolidus = Builtin::u8(Builtin::i32(92));
	
	#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::RightSquareBracket = Builtin::u8(Builtin::i32(93));
	
	#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::CircumflexAccent = Builtin::u8(Builtin::i32(94));
	
	#line 99 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::LowLine = Builtin::u8(Builtin::i32(95));
	
	#line 100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::GraveAccent = Builtin::u8(Builtin::i32(96));
	
	#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::SmallA = Builtin::u8(Builtin::i32(97));
	
	#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::SmallB = Builtin::u8(Builtin::i32(98));
	
	#line 103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::SmallC = Builtin::u8(Builtin::i32(99));
	
	#line 104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::SmallD = Builtin::u8(Builtin::i32(100));
	
	#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::SmallE = Builtin::u8(Builtin::i32(101));
	
	#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::SmallF = Builtin::u8(Builtin::i32(102));
	
	#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::SmallG = Builtin::u8(Builtin::i32(103));
	
	#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::SmallH = Builtin::u8(Builtin::i32(104));
	
	#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::SmallI = Builtin::u8(Builtin::i32(105));
	
	#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::SmallJ = Builtin::u8(Builtin::i32(106));
	
	#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::SmallK = Builtin::u8(Builtin::i32(107));
	
	#line 112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::SmallL = Builtin::u8(Builtin::i32(108));
	
	#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::SmallM = Builtin::u8(Builtin::i32(109));
	
	#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::SmallN = Builtin::u8(Builtin::i32(110));
	
	#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::SmallO = Builtin::u8(Builtin::i32(111));
	
	#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::SmallP = Builtin::u8(Builtin::i32(112));
	
	#line 117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::SmallQ = Builtin::u8(Builtin::i32(113));
	
	#line 118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::SmallR = Builtin::u8(Builtin::i32(114));
	
	#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::SmallS = Builtin::u8(Builtin::i32(115));
	
	#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::SmallT = Builtin::u8(Builtin::i32(116));
	
	#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::SmallU = Builtin::u8(Builtin::i32(117));
	
	#line 122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::SmallV = Builtin::u8(Builtin::i32(118));
	
	#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::SmallW = Builtin::u8(Builtin::i32(119));
	
	#line 124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::SmallX = Builtin::u8(Builtin::i32(120));
	
	#line 125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::SmallY = Builtin::u8(Builtin::i32(121));
	
	#line 126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::SmallZ = Builtin::u8(Builtin::i32(122));
	
	#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::LeftCurlyBracket = Builtin::u8(Builtin::i32(123));
	
	#line 128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::VerticalLine = Builtin::u8(Builtin::i32(124));
	
	#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::RightCurlyBracket = Builtin::u8(Builtin::i32(125));
	
	#line 130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::Tilde = Builtin::u8(Builtin::i32(126));
	
	#line 131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	inline constexpr AsciiChar AsciiChar::Delete = Builtin::u8(Builtin::i32(127));
	inline constexpr AsciiChar AsciiChar::__values[] = {Null, StartOfHeading, StartOfText, EndOfText, EndOfTransmission, Enquiry, Acknowledge, Bell, Backspace, HorizontalTab, LineFeed, VerticalTab, FormFeed, CarriageReturn, ShiftOut, ShiftIn, DataLinkEscape, DeviceControl1, DeviceControl2, DeviceControl3, DeviceControl4, NegativeAcknowledge, SynchronousIdle, EndOfTransmissionBlock, Cancel, EndOfMedium, Substitute, Escape, FileSeparator, GroupSeparator, RecordSeparator, UnitSeparator, Space, ExclamationMark, QuotationMark, NumberSign, DollarSign, PercentSign, Ampersand, Apostrophe, LeftParenthesis, RightParenthesis, Asterisk, PlusSign, Comma, HyphenMinus, FullStop, Solidus, Digit0, Digit1, Digit2, Digit3, Digit4, Digit5, Digit6, Digit7, Digit8, Digit9, Colon, Semicolon, LessThanSign, EqualsSign, GreaterThanSign, QuestionMark, CommercialAt, CapitalA, CapitalB, CapitalC, CapitalD, CapitalE, CapitalF, CapitalG, CapitalH, CapitalI, CapitalJ, CapitalK, CapitalL, CapitalM, CapitalN, CapitalO, CapitalP, CapitalQ, CapitalR, CapitalS, CapitalT, CapitalU, CapitalV, CapitalW, CapitalX, CapitalY, CapitalZ, LeftSquareBracket, ReverseSolidus, RightSquareBracket, CircumflexAccent, LowLine, GraveAccent, SmallA, SmallB, SmallC, SmallD, SmallE, SmallF, SmallG, SmallH, SmallI, SmallJ, SmallK, SmallL, SmallM, SmallN, SmallO, SmallP, SmallQ, SmallR, SmallS, SmallT, SmallU, SmallV, SmallW, SmallX, SmallY, SmallZ, LeftCurlyBracket, VerticalLine, RightCurlyBracket, Tilde, Delete};
	inline constexpr std::span<const AsciiChar> AsciiChar::GetValues() noexcept { return __values; }
	#define ADV_USING_ENUM_AsciiChar \
	constexpr auto Null = AsciiChar::Null;\
	constexpr auto StartOfHeading = AsciiChar::StartOfHeading;\
	constexpr auto StartOfText = AsciiChar::StartOfText;\
	constexpr auto EndOfText = AsciiChar::EndOfText;\
	constexpr auto EndOfTransmission = AsciiChar::EndOfTransmission;\
	constexpr auto Enquiry = AsciiChar::Enquiry;\
	constexpr auto Acknowledge = AsciiChar::Acknowledge;\
	constexpr auto Bell = AsciiChar::Bell;\
	constexpr auto Backspace = AsciiChar::Backspace;\
	constexpr auto HorizontalTab = AsciiChar::HorizontalTab;\
	constexpr auto LineFeed = AsciiChar::LineFeed;\
	constexpr auto VerticalTab = AsciiChar::VerticalTab;\
	constexpr auto FormFeed = AsciiChar::FormFeed;\
	constexpr auto CarriageReturn = AsciiChar::CarriageReturn;\
	constexpr auto ShiftOut = AsciiChar::ShiftOut;\
	constexpr auto ShiftIn = AsciiChar::ShiftIn;\
	constexpr auto DataLinkEscape = AsciiChar::DataLinkEscape;\
	constexpr auto DeviceControl1 = AsciiChar::DeviceControl1;\
	constexpr auto DeviceControl2 = AsciiChar::DeviceControl2;\
	constexpr auto DeviceControl3 = AsciiChar::DeviceControl3;\
	constexpr auto DeviceControl4 = AsciiChar::DeviceControl4;\
	constexpr auto NegativeAcknowledge = AsciiChar::NegativeAcknowledge;\
	constexpr auto SynchronousIdle = AsciiChar::SynchronousIdle;\
	constexpr auto EndOfTransmissionBlock = AsciiChar::EndOfTransmissionBlock;\
	constexpr auto Cancel = AsciiChar::Cancel;\
	constexpr auto EndOfMedium = AsciiChar::EndOfMedium;\
	constexpr auto Substitute = AsciiChar::Substitute;\
	constexpr auto Escape = AsciiChar::Escape;\
	constexpr auto FileSeparator = AsciiChar::FileSeparator;\
	constexpr auto GroupSeparator = AsciiChar::GroupSeparator;\
	constexpr auto RecordSeparator = AsciiChar::RecordSeparator;\
	constexpr auto UnitSeparator = AsciiChar::UnitSeparator;\
	constexpr auto Space = AsciiChar::Space;\
	constexpr auto ExclamationMark = AsciiChar::ExclamationMark;\
	constexpr auto QuotationMark = AsciiChar::QuotationMark;\
	constexpr auto NumberSign = AsciiChar::NumberSign;\
	constexpr auto DollarSign = AsciiChar::DollarSign;\
	constexpr auto PercentSign = AsciiChar::PercentSign;\
	constexpr auto Ampersand = AsciiChar::Ampersand;\
	constexpr auto Apostrophe = AsciiChar::Apostrophe;\
	constexpr auto LeftParenthesis = AsciiChar::LeftParenthesis;\
	constexpr auto RightParenthesis = AsciiChar::RightParenthesis;\
	constexpr auto Asterisk = AsciiChar::Asterisk;\
	constexpr auto PlusSign = AsciiChar::PlusSign;\
	constexpr auto Comma = AsciiChar::Comma;\
	constexpr auto HyphenMinus = AsciiChar::HyphenMinus;\
	constexpr auto FullStop = AsciiChar::FullStop;\
	constexpr auto Solidus = AsciiChar::Solidus;\
	constexpr auto Digit0 = AsciiChar::Digit0;\
	constexpr auto Digit1 = AsciiChar::Digit1;\
	constexpr auto Digit2 = AsciiChar::Digit2;\
	constexpr auto Digit3 = AsciiChar::Digit3;\
	constexpr auto Digit4 = AsciiChar::Digit4;\
	constexpr auto Digit5 = AsciiChar::Digit5;\
	constexpr auto Digit6 = AsciiChar::Digit6;\
	constexpr auto Digit7 = AsciiChar::Digit7;\
	constexpr auto Digit8 = AsciiChar::Digit8;\
	constexpr auto Digit9 = AsciiChar::Digit9;\
	constexpr auto Colon = AsciiChar::Colon;\
	constexpr auto Semicolon = AsciiChar::Semicolon;\
	constexpr auto LessThanSign = AsciiChar::LessThanSign;\
	constexpr auto EqualsSign = AsciiChar::EqualsSign;\
	constexpr auto GreaterThanSign = AsciiChar::GreaterThanSign;\
	constexpr auto QuestionMark = AsciiChar::QuestionMark;\
	constexpr auto CommercialAt = AsciiChar::CommercialAt;\
	constexpr auto CapitalA = AsciiChar::CapitalA;\
	constexpr auto CapitalB = AsciiChar::CapitalB;\
	constexpr auto CapitalC = AsciiChar::CapitalC;\
	constexpr auto CapitalD = AsciiChar::CapitalD;\
	constexpr auto CapitalE = AsciiChar::CapitalE;\
	constexpr auto CapitalF = AsciiChar::CapitalF;\
	constexpr auto CapitalG = AsciiChar::CapitalG;\
	constexpr auto CapitalH = AsciiChar::CapitalH;\
	constexpr auto CapitalI = AsciiChar::CapitalI;\
	constexpr auto CapitalJ = AsciiChar::CapitalJ;\
	constexpr auto CapitalK = AsciiChar::CapitalK;\
	constexpr auto CapitalL = AsciiChar::CapitalL;\
	constexpr auto CapitalM = AsciiChar::CapitalM;\
	constexpr auto CapitalN = AsciiChar::CapitalN;\
	constexpr auto CapitalO = AsciiChar::CapitalO;\
	constexpr auto CapitalP = AsciiChar::CapitalP;\
	constexpr auto CapitalQ = AsciiChar::CapitalQ;\
	constexpr auto CapitalR = AsciiChar::CapitalR;\
	constexpr auto CapitalS = AsciiChar::CapitalS;\
	constexpr auto CapitalT = AsciiChar::CapitalT;\
	constexpr auto CapitalU = AsciiChar::CapitalU;\
	constexpr auto CapitalV = AsciiChar::CapitalV;\
	constexpr auto CapitalW = AsciiChar::CapitalW;\
	constexpr auto CapitalX = AsciiChar::CapitalX;\
	constexpr auto CapitalY = AsciiChar::CapitalY;\
	constexpr auto CapitalZ = AsciiChar::CapitalZ;\
	constexpr auto LeftSquareBracket = AsciiChar::LeftSquareBracket;\
	constexpr auto ReverseSolidus = AsciiChar::ReverseSolidus;\
	constexpr auto RightSquareBracket = AsciiChar::RightSquareBracket;\
	constexpr auto CircumflexAccent = AsciiChar::CircumflexAccent;\
	constexpr auto LowLine = AsciiChar::LowLine;\
	constexpr auto GraveAccent = AsciiChar::GraveAccent;\
	constexpr auto SmallA = AsciiChar::SmallA;\
	constexpr auto SmallB = AsciiChar::SmallB;\
	constexpr auto SmallC = AsciiChar::SmallC;\
	constexpr auto SmallD = AsciiChar::SmallD;\
	constexpr auto SmallE = AsciiChar::SmallE;\
	constexpr auto SmallF = AsciiChar::SmallF;\
	constexpr auto SmallG = AsciiChar::SmallG;\
	constexpr auto SmallH = AsciiChar::SmallH;\
	constexpr auto SmallI = AsciiChar::SmallI;\
	constexpr auto SmallJ = AsciiChar::SmallJ;\
	constexpr auto SmallK = AsciiChar::SmallK;\
	constexpr auto SmallL = AsciiChar::SmallL;\
	constexpr auto SmallM = AsciiChar::SmallM;\
	constexpr auto SmallN = AsciiChar::SmallN;\
	constexpr auto SmallO = AsciiChar::SmallO;\
	constexpr auto SmallP = AsciiChar::SmallP;\
	constexpr auto SmallQ = AsciiChar::SmallQ;\
	constexpr auto SmallR = AsciiChar::SmallR;\
	constexpr auto SmallS = AsciiChar::SmallS;\
	constexpr auto SmallT = AsciiChar::SmallT;\
	constexpr auto SmallU = AsciiChar::SmallU;\
	constexpr auto SmallV = AsciiChar::SmallV;\
	constexpr auto SmallW = AsciiChar::SmallW;\
	constexpr auto SmallX = AsciiChar::SmallX;\
	constexpr auto SmallY = AsciiChar::SmallY;\
	constexpr auto SmallZ = AsciiChar::SmallZ;\
	constexpr auto LeftCurlyBracket = AsciiChar::LeftCurlyBracket;\
	constexpr auto VerticalLine = AsciiChar::VerticalLine;\
	constexpr auto RightCurlyBracket = AsciiChar::RightCurlyBracket;\
	constexpr auto Tilde = AsciiChar::Tilde;\
	constexpr auto Delete = AsciiChar::Delete;\
	
	
	
	#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	class $Class_AsciiChar final : public Builtin::ValueType
	{
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
		public: using $underlying = AsciiChar; using $self = $underlying;
		$self __value;
		$Class_AsciiChar(const $underlying& value) noexcept(std::is_nothrow_copy_constructible_v<$underlying>) : __value{value} {}
		operator $underlying() const noexcept { return __value; }
		
	};
	#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	ADV_CHECK_FOR_CONCRETE(AsciiChar);
	
//###############################################################################
//# Function definitions
//###############################################################################

#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\AsciiChar.ast"
	

}