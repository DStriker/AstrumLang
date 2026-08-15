#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "AsciiChar.h"
#include "UInt8.h"
#include "Float64.h"
#include "Range.h"
#include "System/Globalization/UnicodeCategory.h"
using namespace System::Globalization;
#include "System/Globalization/CharUnicodeInfo.h"
using namespace System::Globalization;

namespace System {
namespace __Unsafe {} namespace __Char$Protected__Unsafe {}
} namespace $extensions {
template<class __TT> struct $static_IsAsciiLetterLower;
template<class __TT> struct $static_getIsAsciiLetterLower;
template<class __TT> struct $static_IsAsciiDigit;
template<class __TT> struct $static_getIsAsciiDigit;
template<class __TT> struct $static_CodepointValue;
template<class __TT> struct $static_getCodepointValue;
template<class __TT> struct $static_Is64BitTarget;
template<class __TT> struct $static_getIs64BitTarget;
template<class __TT> struct $static_GetUnicodeCategory;
template<class __TT> struct $static_getGetUnicodeCategory;
template<class __TT> struct $static_NarrowToUInt32;
template<class __TT> struct $static_getNarrowToUInt32;
template<class __TT> struct $static_NarrowToInt64;
template<class __TT> struct $static_getNarrowToInt64;
template<class __TT> struct $static_ParagraphSeparator;
template<class __TT> struct $static_getParagraphSeparator;
template<class __TT> struct $static_IsAscii;
template<class __TT> struct $static_getIsAscii;
template<class __TT> struct $static_IsAsciiLetter;
template<class __TT> struct $static_getIsAsciiLetter;
template<class __TT> struct $static_SpaceSeparator;
template<class __TT> struct $static_getSpaceSeparator;
template<class __TT> struct $static_IsAsciiLetterUpper;
template<class __TT> struct $static_getIsAsciiLetterUpper;
template<class __TT> struct $static_IsAsciiLetterOrDigit;
template<class __TT> struct $static_getIsAsciiLetterOrDigit;
template<class __TT> struct $static_MaxUtf8Length;
template<class __TT> struct $static_getMaxUtf8Length;
template<class __TT> struct $static_Value;
template<class __TT> struct $static_getValue;
template<class __TT> struct $static_ConnectorPunctuation;
template<class __TT> struct $static_getConnectorPunctuation;
template<class __TT> struct $static_MathSymbol;
template<class __TT> struct $static_getMathSymbol;
template<class __TT> struct $static_IsAsciiSeparator;
template<class __TT> struct $static_getIsAsciiSeparator;
template<class __TT> struct $static_OtherPunctuation;
template<class __TT> struct $static_getOtherPunctuation;
template<class __TT> struct $static_IsLatin1;
template<class __TT> struct $static_getIsLatin1;
template<class __TT> struct $static_IsAsciiPunctuation;
template<class __TT> struct $static_getIsAsciiPunctuation;
template<class __TT> struct $static_OtherSymbol;
template<class __TT> struct $static_getOtherSymbol;
template<class __TT> struct $static_IsAsciiSymbol;
template<class __TT> struct $static_getIsAsciiSymbol;
template<class __TT> struct $static_IsAsciiWhiteSpace;
template<class __TT> struct $static_getIsAsciiWhiteSpace;
template<class __TT> struct $static_NarrowToInt8;
template<class __TT> struct $static_getNarrowToInt8;
template<class __TT> struct $static_GetIsWhitespace;
template<class __TT> struct $static_getGetIsWhitespace;
template<class __TT> struct $static_LowercaseLetter;
template<class __TT> struct $static_getLowercaseLetter;
template<class __TT> struct $static_FromValue;
template<class __TT> struct $static_getFromValue;
template<class __TT> struct $static_OtherLetter;
template<class __TT> struct $static_getOtherLetter;
template<class __TT> struct $static_MaxUtf16Length;
template<class __TT> struct $static_getMaxUtf16Length;
template<class __TT> struct $static_IsHexDigitUpper;
template<class __TT> struct $static_getIsHexDigitUpper;
template<class __TT> struct $static_IsValid;
template<class __TT> struct $static_getIsValid;
template<class __TT> struct $static_GetStrongBidiCategory;
template<class __TT> struct $static_getGetStrongBidiCategory;
template<class __TT> struct $static_GetNumericValue;
template<class __TT> struct $static_getGetNumericValue;
template<class __TT> struct $static_MinusOne;
template<class __TT> struct $static_getMinusOne;
template<class __TT> struct $static_IsHexDigitLower;
template<class __TT> struct $static_getIsHexDigitLower;
template<class __TT> struct $static_DecimalDigitNumber;
template<class __TT> struct $static_getDecimalDigitNumber;
template<class __TT> struct $static_IsBinDigit;
template<class __TT> struct $static_getIsBinDigit;
template<class __TT> struct $static_IsOctDigit;
template<class __TT> struct $static_getIsOctDigit;
template<class __TT> struct $static_ToUpperNeutral;
template<class __TT> struct $static_getToUpperNeutral;
template<class __TT> struct $static_IsHexDigit;
template<class __TT> struct $static_getIsHexDigit;
template<class __TT> struct $static_UppercaseLetter;
template<class __TT> struct $static_getUppercaseLetter;
template<class __TT> struct $static_TitlecaseLetter;
template<class __TT> struct $static_getTitlecaseLetter;
template<class __TT> struct $static_IsBmp;
template<class __TT> struct $static_getIsBmp;
template<class __TT> struct $static_ToUpperAscii;
template<class __TT> struct $static_getToUpperAscii;
template<class __TT> struct $static_ToLowerAscii;
template<class __TT> struct $static_getToLowerAscii;
template<class __TT> struct $static_ToLowerNeutral;
template<class __TT> struct $static_getToLowerNeutral;
template<class __TT> struct $static_IsHighSurrogate;
template<class __TT> struct $static_getIsHighSurrogate;
template<class __TT> struct $static_IsLowSurrogate;
template<class __TT> struct $static_getIsLowSurrogate;
} namespace System {
//###############################################################################
//# Global type aliases
//###############################################################################
#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
using Byte = Builtin::u8;
#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
using Char = Builtin::char32;
#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
using Rune = Builtin::char32;
//###############################################################################
//# Type definitions
//###############################################################################
	} namespace $extensions { using namespace System;
#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	using $extension_Char_15_byte = Builtin::u8;
	#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	template<class __TT> struct $static_FromDigit; template<> struct $static_FromDigit<$extension_Char_15_byte> { static inline constexpr auto get(Builtin::u32 num, Builtin::u32 radix)  -> const Builtin::Nullable<$extension_Char_15_byte>; };
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAscii($extension_Char_15_byte const& $this ) -> const bool;
	#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiDigit($extension_Char_15_byte const& $this ) -> const bool;
	#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsDigit($extension_Char_15_byte const& $this ) -> const bool;
	#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsBinDigit($extension_Char_15_byte const& $this ) -> const bool;
	#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsOctDigit($extension_Char_15_byte const& $this ) -> const bool;
	#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsHexDigit($extension_Char_15_byte const& $this ) -> const bool;
	#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsHexDigitUpper($extension_Char_15_byte const& $this ) -> const bool;
	#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsHexDigitLower($extension_Char_15_byte const& $this ) -> const bool;
	#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiLetter($extension_Char_15_byte const& $this ) -> const bool;
	#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsLetter($extension_Char_15_byte const& $this ) -> const bool;
	#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiLetterUpper($extension_Char_15_byte const& $this ) -> const bool;
	#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsLetterUpper($extension_Char_15_byte const& $this ) -> const bool;
	#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiLetterLower($extension_Char_15_byte const& $this ) -> const bool;
	#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsLetterLower($extension_Char_15_byte const& $this ) -> const bool;
	#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiLetterOrDigit($extension_Char_15_byte const& $this ) -> const bool;
	#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsLetterOrDigit($extension_Char_15_byte const& $this ) -> const bool;
	#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsIdentifierChar($extension_Char_15_byte const& $this ) -> const bool;
	#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiControl($extension_Char_15_byte const& $this ) -> const bool;
	#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsControl($extension_Char_15_byte const& $this ) -> const bool;
	#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiPunctuation($extension_Char_15_byte const& $this ) -> const bool;
	#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsPunctuation($extension_Char_15_byte const& $this ) -> const bool;
	#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiSeparator($extension_Char_15_byte const& $this ) -> const bool;
	#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsSeparator($extension_Char_15_byte const& $this ) -> const bool;
	#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiSymbol($extension_Char_15_byte const& $this ) -> const bool;
	#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsSymbol($extension_Char_15_byte const& $this ) -> const bool;
	#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiWhiteSpace($extension_Char_15_byte const& $this ) -> const bool;
	#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsWhiteSpace($extension_Char_15_byte const& $this ) -> const bool;
	#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiPrintable($extension_Char_15_byte const& $this ) -> const bool;
	#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsUtf8CodePointBoundary($extension_Char_15_byte const& $this ) -> const bool;
	#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getToLower($extension_Char_15_byte const& $this ) -> const $extension_Char_15_byte;
	#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getToUpper($extension_Char_15_byte const& $this ) -> const $extension_Char_15_byte;
	#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getToAsciiChar($extension_Char_15_byte const& $this ) -> const Builtin::Nullable<AsciiChar>;
	#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	template<class __TT> struct $static_getAscii; template<> struct $static_getAscii<$extension_Char_15_byte> { static inline constexpr auto get() -> const ByteClosedRange; };
	#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	template<class __TT> struct $static_getDigits; template<> struct $static_getDigits<$extension_Char_15_byte> { static inline constexpr auto get() -> const ByteClosedRange; };
	#line 95 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	template<class __TT> struct $static_getUppercaseLetters; template<> struct $static_getUppercaseLetters<$extension_Char_15_byte> { static inline constexpr auto get() -> const ByteClosedRange; };
	#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	template<class __TT> struct $static_getLowercaseLetters; template<> struct $static_getLowercaseLetters<$extension_Char_15_byte> { static inline constexpr auto get() -> const ByteClosedRange; };
	} namespace System{
using $extensions::$static_FromDigit;
using $extensions::getIsAscii;
using $extensions::getIsAsciiDigit;
using $extensions::getIsDigit;
using $extensions::getIsBinDigit;
using $extensions::getIsOctDigit;
using $extensions::getIsHexDigit;
using $extensions::getIsHexDigitUpper;
using $extensions::getIsHexDigitLower;
using $extensions::getIsAsciiLetter;
using $extensions::getIsLetter;
using $extensions::getIsAsciiLetterUpper;
using $extensions::getIsLetterUpper;
using $extensions::getIsAsciiLetterLower;
using $extensions::getIsLetterLower;
using $extensions::getIsAsciiLetterOrDigit;
using $extensions::getIsLetterOrDigit;
using $extensions::getIsIdentifierChar;
using $extensions::getIsAsciiControl;
using $extensions::getIsControl;
using $extensions::getIsAsciiPunctuation;
using $extensions::getIsPunctuation;
using $extensions::getIsAsciiSeparator;
using $extensions::getIsSeparator;
using $extensions::getIsAsciiSymbol;
using $extensions::getIsSymbol;
using $extensions::getIsAsciiWhiteSpace;
using $extensions::getIsWhiteSpace;
using $extensions::getIsAsciiPrintable;
using $extensions::getIsUtf8CodePointBoundary;
using $extensions::getToLower;
using $extensions::getToUpper;
using $extensions::getToAsciiChar;
using $extensions::$static_getAscii;
using $extensions::$static_getDigits;
using $extensions::$static_getUppercaseLetters;
using $extensions::$static_getLowercaseLetters;

		} namespace $extensions { using namespace System;
#line 99 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	using $extension_Char_99_char = Builtin::char32;
	#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	ASTRUMSTD_API auto _operator_eq_eq_mul($extension_Char_99_char const& $this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool;
	#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	template<class __TT> struct $static_FromScalar; template<> struct $static_FromScalar<$extension_Char_99_char> { static inline constexpr auto get(Builtin::u32 scalar)  -> const Builtin::Nullable<$extension_Char_99_char>; };
	#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	template<class __TT> struct $static_FromDigit; template<> struct $static_FromDigit<$extension_Char_99_char> { static inline constexpr auto get(Builtin::u32 num, Builtin::u32 radix)  -> const Builtin::Nullable<$extension_Char_99_char>; };
	#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	template<class __TT> struct $static_FromUtf16Surrogate; template<> struct $static_FromUtf16Surrogate<$extension_Char_99_char> { static inline constexpr auto get(Builtin::u16 highSurrogate, Builtin::u16 lowSurrogate)  -> const typename $extension_Char_99_char; };
	#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	template<class __TT> struct $static_getReplacementChar; template<> struct $static_getReplacementChar<$extension_Char_99_char> { static inline constexpr auto get() -> const $extension_Char_99_char; };
	#line 112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	template<class __TT> struct $static_getUnicodeVersion; template<> struct $static_getUnicodeVersion<$extension_Char_99_char> { static inline constexpr auto get() -> const std::tuple<Builtin::u8, Builtin::u8, Builtin::u8>; };
	#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	template<class __TT> struct $static_getMaxUtf8Length; template<> struct $static_getMaxUtf8Length<$extension_Char_99_char> { static inline constexpr auto get() -> const Builtin::usize; };
	#line 140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	template<class __TT> struct $static_getMaxUtf16Length; template<> struct $static_getMaxUtf16Length<$extension_Char_99_char> { static inline constexpr auto get() -> const Builtin::usize; };
	#line 154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getAsAscii($extension_Char_99_char const& $this ) -> const Builtin::Nullable<AsciiChar>;
	#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getHashCode($extension_Char_99_char const& $this ) -> const Builtin::u64;
	#line 165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAscii($extension_Char_99_char const& $this ) -> const bool;
	#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsLatin1($extension_Char_99_char const& $this ) -> const bool;
	#line 169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsBmp($extension_Char_99_char const& $this ) -> const bool;
	#line 170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getPlane($extension_Char_99_char const& $this ) -> const Builtin::u32;
	#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getUtf16Length($extension_Char_99_char const& $this ) -> const Builtin::u32;
	#line 182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getUtf8Length($extension_Char_99_char const& $this ) -> const Builtin::u32;
	#line 195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getCodepointValue($extension_Char_99_char const& $this ) -> const Builtin::u32;
	#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsValid($extension_Char_99_char const& $this ) -> const bool;
	#line 200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getCharUnicodeCategory($extension_Char_99_char const& $this ) -> const UnicodeCategory;
	#line 211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getBidiCategory($extension_Char_99_char const& $this ) -> const StrongBidiCategory;
	#line 215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getNumericValue($extension_Char_99_char const& $this ) -> const Builtin::Nullable<Builtin::f64>;
	#line 232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiControl($extension_Char_99_char const& $this ) -> const bool;
	#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsControl($extension_Char_99_char const& $this ) -> const bool;
	#line 236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiDigit($extension_Char_99_char const& $this ) -> const bool;
	#line 238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getIsDigit($extension_Char_99_char const& $this ) -> const bool;
	#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsBinDigit($extension_Char_99_char const& $this ) -> const bool;
	#line 248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsOctDigit($extension_Char_99_char const& $this ) -> const bool;
	#line 250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsHexDigit($extension_Char_99_char const& $this ) -> const bool;
	#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsHexDigitUpper($extension_Char_99_char const& $this ) -> const bool;
	#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsHexDigitLower($extension_Char_99_char const& $this ) -> const bool;
	#line 253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiLetter($extension_Char_99_char const& $this ) -> const bool;
	#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getIsLetter($extension_Char_99_char const& $this ) -> const bool;
	#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiLetterUpper($extension_Char_99_char const& $this ) -> const bool;
	#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getIsLetterUpper($extension_Char_99_char const& $this ) -> const bool;
	#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiLetterLower($extension_Char_99_char const& $this ) -> const bool;
	#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getIsLetterLower($extension_Char_99_char const& $this ) -> const bool;
	#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getIsLetterTitle($extension_Char_99_char const& $this ) -> const bool;
	#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiLetterOrDigit($extension_Char_99_char const& $this ) -> const bool;
	#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getIsLetterOrDigit($extension_Char_99_char const& $this ) -> const bool;
	#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsIdentifierChar($extension_Char_99_char const& $this ) -> const bool;
	#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiPunctuation($extension_Char_99_char const& $this ) -> const bool;
	#line 298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getIsPunctuation($extension_Char_99_char const& $this ) -> const bool;
	#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiSeparator($extension_Char_99_char const& $this ) -> const bool;
	#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getIsSeparator($extension_Char_99_char const& $this ) -> const bool;
	#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiSymbol($extension_Char_99_char const& $this ) -> const bool;
	#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getIsSymbol($extension_Char_99_char const& $this ) -> const bool;
	#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiWhiteSpace($extension_Char_99_char const& $this ) -> const bool;
	#line 307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getIsWhiteSpace($extension_Char_99_char const& $this ) -> const bool;
	#line 314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiPrintable($extension_Char_99_char const& $this ) -> const bool;
	#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getToLowerAscii($extension_Char_99_char const& $this ) -> const $extension_Char_99_char;
	#line 316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getToUpperAscii($extension_Char_99_char const& $this ) -> const $extension_Char_99_char;
	#line 318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getToUpper($extension_Char_99_char const& $this ) -> const $extension_Char_99_char;
	#line 329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getToUpperInvariant($extension_Char_99_char const& $this ) -> const $extension_Char_99_char;
	#line 337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getToLower($extension_Char_99_char const& $this ) -> const $extension_Char_99_char;
	#line 349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getToLowerInvariant($extension_Char_99_char const& $this ) -> const $extension_Char_99_char;
	} namespace System{
using $extensions::_operator_eq_eq_mul;
using $extensions::$static_FromScalar;
using $extensions::$static_FromDigit;
using $extensions::$static_FromUtf16Surrogate;
using $extensions::$static_getReplacementChar;
using $extensions::$static_getUnicodeVersion;
using $extensions::$static_getMaxUtf8Length;
using $extensions::$static_getMaxUtf16Length;
using $extensions::getAsAscii;
using $extensions::getHashCode;
using $extensions::getIsAscii;
using $extensions::getIsLatin1;
using $extensions::getIsBmp;
using $extensions::getPlane;
using $extensions::getUtf16Length;
using $extensions::getUtf8Length;
using $extensions::getCodepointValue;
using $extensions::getIsValid;
using $extensions::getCharUnicodeCategory;
using $extensions::getBidiCategory;
using $extensions::getNumericValue;
using $extensions::getIsAsciiControl;
using $extensions::getIsControl;
using $extensions::getIsAsciiDigit;
using $extensions::getIsDigit;
using $extensions::getIsBinDigit;
using $extensions::getIsOctDigit;
using $extensions::getIsHexDigit;
using $extensions::getIsHexDigitUpper;
using $extensions::getIsHexDigitLower;
using $extensions::getIsAsciiLetter;
using $extensions::getIsLetter;
using $extensions::getIsAsciiLetterUpper;
using $extensions::getIsLetterUpper;
using $extensions::getIsAsciiLetterLower;
using $extensions::getIsLetterLower;
using $extensions::getIsLetterTitle;
using $extensions::getIsAsciiLetterOrDigit;
using $extensions::getIsLetterOrDigit;
using $extensions::getIsIdentifierChar;
using $extensions::getIsAsciiPunctuation;
using $extensions::getIsPunctuation;
using $extensions::getIsAsciiSeparator;
using $extensions::getIsSeparator;
using $extensions::getIsAsciiSymbol;
using $extensions::getIsSymbol;
using $extensions::getIsAsciiWhiteSpace;
using $extensions::getIsWhiteSpace;
using $extensions::getIsAsciiPrintable;
using $extensions::getToLowerAscii;
using $extensions::getToUpperAscii;
using $extensions::getToUpper;
using $extensions::getToUpperInvariant;
using $extensions::getToLower;
using $extensions::getToLowerInvariant;

		} namespace $extensions { using namespace System;
#line 365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	using $extension_Char_365_char = Builtin::char32;
	#line 365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	ADV_CHECK_INTERFACE(IMinMaxValue, IMinMaxValue);
	#line 366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	template<class __TT> struct $static_getMinValue; template<> struct $static_getMinValue<$extension_Char_365_char> { static inline constexpr auto get() -> const $extension_Char_365_char; };
	#line 367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	template<class __TT> struct $static_getMaxValue; template<> struct $static_getMaxValue<$extension_Char_365_char> { static inline constexpr auto get() -> const $extension_Char_365_char; };
	#line 365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Char_365_char, IMinMaxValue, IMinMaxValue, $extension_Char_365_char);
	} namespace System{
using $extensions::$static_getMinValue;
using $extensions::$static_getMaxValue;

		} namespace $extensions { using namespace System;
#line 370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	using $extension_Char_370_char = Builtin::char32;
	#line 370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	ADV_CHECK_INTERFACE(IRangeCustomIterator, IRangeCustomIterator);
	#line 371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto RangeStepForward($extension_Char_370_char const& $this LIFETIMEBOUND, Builtin::usize steps)  -> const typename $extension_Char_370_char;
	#line 382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto RangeStepBackward($extension_Char_370_char const& $this LIFETIMEBOUND, Builtin::usize steps)  -> const typename $extension_Char_370_char;
	#line 393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	template<class __TT> struct $static_getAscii; template<> struct $static_getAscii<$extension_Char_370_char> { static inline constexpr auto get() -> const Range<Builtin::char32>; };
	#line 370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Char_370_char, IRangeCustomIterator, IRangeCustomIterator, $extension_Char_370_char);
	} namespace System{
using $extensions::RangeStepForward;
using $extensions::RangeStepBackward;
using $extensions::$static_getAscii;

		} namespace $extensions { using namespace System;
#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	using $extension_Char_397_char = Builtin::char32;
	#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	ADV_CHECK_INTERFACE(IAbstractComparable, IAbstractComparable);
	#line 398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	ASTRUMSTD_API auto _operator_lt_eq_gt_mul($extension_Char_397_char const& $this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32;
	#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Char_397_char, IAbstractComparable, IAbstractComparable, $extension_Char_397_char);
	} namespace System{
using $extensions::_operator_lt_eq_gt_mul;

		} namespace $extensions { using namespace System;
#line 412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	using $extension_Char_412_char = Builtin::char32;
	#line 412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	ADV_CHECK_INTERFACE(IConvertible, IConvertible);
	#line 413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToBoolean($extension_Char_412_char const& $this LIFETIMEBOUND) noexcept -> const bool;
	#line 414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToInt8($extension_Char_412_char const& $this LIFETIMEBOUND)  -> const Builtin::i8;
	#line 420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToUInt8($extension_Char_412_char const& $this LIFETIMEBOUND)  -> const Builtin::u8;
	#line 426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToInt16($extension_Char_412_char const& $this LIFETIMEBOUND)  -> const Builtin::i16;
	#line 432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToUInt16($extension_Char_412_char const& $this LIFETIMEBOUND)  -> const Builtin::u16;
	#line 438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToInt32($extension_Char_412_char const& $this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToUInt32($extension_Char_412_char const& $this LIFETIMEBOUND) noexcept -> const Builtin::u32;
	#line 445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToInt64($extension_Char_412_char const& $this LIFETIMEBOUND) noexcept -> const Builtin::i64;
	#line 446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToUInt64($extension_Char_412_char const& $this LIFETIMEBOUND) noexcept -> const Builtin::u64;
	#line 447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToInt128($extension_Char_412_char const& $this LIFETIMEBOUND) noexcept -> const Builtin::i128;
	#line 448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToUInt128($extension_Char_412_char const& $this LIFETIMEBOUND) noexcept -> const Builtin::u128;
	#line 449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToIsize($extension_Char_412_char const& $this LIFETIMEBOUND)  -> const Builtin::isize;
	#line 457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToUsize($extension_Char_412_char const& $this LIFETIMEBOUND) noexcept -> const Builtin::usize;
	#line 458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToFloat32($extension_Char_412_char const& $this LIFETIMEBOUND) noexcept -> const Builtin::f32;
	#line 459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToFloat64($extension_Char_412_char const& $this LIFETIMEBOUND) noexcept -> const Builtin::f64;
	#line 460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToByte($extension_Char_412_char const& $this LIFETIMEBOUND)  -> const Builtin::u8;
	#line 466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToChar($extension_Char_412_char const& $this LIFETIMEBOUND) noexcept -> const Builtin::char32;
	#line 412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION($extension_Char_412_char, IConvertible, IConvertible, $extension_Char_412_char);
	} namespace System{
using $extensions::ToBoolean;
using $extensions::ToInt8;
using $extensions::ToUInt8;
using $extensions::ToInt16;
using $extensions::ToUInt16;
using $extensions::ToInt32;
using $extensions::ToUInt32;
using $extensions::ToInt64;
using $extensions::ToUInt64;
using $extensions::ToInt128;
using $extensions::ToUInt128;
using $extensions::ToIsize;
using $extensions::ToUsize;
using $extensions::ToFloat32;
using $extensions::ToFloat64;
using $extensions::ToByte;
using $extensions::ToChar;

		} namespace $extensions { using namespace System;
#line 534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	using $extension_Char_534_u16 = Builtin::u16;
	#line 535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsHighSurrogate($extension_Char_534_u16 const& $this ) -> const bool;
	#line 536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsLowSurrogate($extension_Char_534_u16 const& $this ) -> const bool;
	#line 537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsSurrogate($extension_Char_534_u16 const& $this ) -> const bool;
	} namespace System{
using $extensions::getIsHighSurrogate;
using $extensions::getIsLowSurrogate;
using $extensions::getIsSurrogate;

	//###############################################################################
//# Free function declarations
//###############################################################################
#line 491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	namespace __Char$Protected { inline constexpr auto HexDigitFromByte(Builtin::u32 c) noexcept -> const Builtin::i32; }
#line 519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	namespace __Char$Protected { inline constexpr auto GetLatin1UnicodeCategory(Builtin::u32 c)  -> const UnicodeCategory; }
#line 525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	namespace __Char$Protected { inline constexpr auto IsWhiteSpaceLatin1(Builtin::u32 c)  -> const bool; }
//###############################################################################
//# Global compile-time constants
//###############################################################################
#line 471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
namespace __Char$Protected { inline constexpr Builtin::InlineArray<256, Builtin::u8> CharToHex = Builtin::ToInlineArray<Builtin::u8>({Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0x0)), Builtin::u8(Builtin::i32(0x1)), Builtin::u8(Builtin::i32(0x2)), Builtin::u8(Builtin::i32(0x3)), Builtin::u8(Builtin::i32(0x4)), Builtin::u8(Builtin::i32(0x5)), Builtin::u8(Builtin::i32(0x6)), Builtin::u8(Builtin::i32(0x7)), Builtin::u8(Builtin::i32(0x8)), Builtin::u8(Builtin::i32(0x9)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xA)), Builtin::u8(Builtin::i32(0xB)), Builtin::u8(Builtin::i32(0xC)), Builtin::u8(Builtin::i32(0xD)), Builtin::u8(Builtin::i32(0xE)), Builtin::u8(Builtin::i32(0xF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xa)), Builtin::u8(Builtin::i32(0xb)), Builtin::u8(Builtin::i32(0xc)), Builtin::u8(Builtin::i32(0xd)), Builtin::u8(Builtin::i32(0xe)), Builtin::u8(Builtin::i32(0xf)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF))}); }
#line 494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
namespace __Char$Protected { inline constexpr Builtin::InlineArray<256, Builtin::u8> Latin1CharInfo = Builtin::ToInlineArray<Builtin::u8>({Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x8E)), Builtin::u8(Builtin::i32(0x8E)), Builtin::u8(Builtin::i32(0x8E)), Builtin::u8(Builtin::i32(0x8E)), Builtin::u8(Builtin::i32(0x8E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x8B)), Builtin::u8(Builtin::i32(0x18)), Builtin::u8(Builtin::i32(0x18)), Builtin::u8(Builtin::i32(0x18)), Builtin::u8(Builtin::i32(0x1A)), Builtin::u8(Builtin::i32(0x18)), Builtin::u8(Builtin::i32(0x18)), Builtin::u8(Builtin::i32(0x18)), Builtin::u8(Builtin::i32(0x14)), Builtin::u8(Builtin::i32(0x15)), Builtin::u8(Builtin::i32(0x18)), Builtin::u8(Builtin::i32(0x19)), Builtin::u8(Builtin::i32(0x18)), Builtin::u8(Builtin::i32(0x13)), Builtin::u8(Builtin::i32(0x18)), Builtin::u8(Builtin::i32(0x18)), Builtin::u8(Builtin::i32(0x08)), Builtin::u8(Builtin::i32(0x08)), Builtin::u8(Builtin::i32(0x08)), Builtin::u8(Builtin::i32(0x08)), Builtin::u8(Builtin::i32(0x08)), Builtin::u8(Builtin::i32(0x08)), Builtin::u8(Builtin::i32(0x08)), Builtin::u8(Builtin::i32(0x08)), Builtin::u8(Builtin::i32(0x08)), Builtin::u8(Builtin::i32(0x08)), Builtin::u8(Builtin::i32(0x18)), Builtin::u8(Builtin::i32(0x18)), Builtin::u8(Builtin::i32(0x19)), Builtin::u8(Builtin::i32(0x19)), Builtin::u8(Builtin::i32(0x19)), Builtin::u8(Builtin::i32(0x18)), Builtin::u8(Builtin::i32(0x18)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x14)), Builtin::u8(Builtin::i32(0x18)), Builtin::u8(Builtin::i32(0x15)), Builtin::u8(Builtin::i32(0x1B)), Builtin::u8(Builtin::i32(0x12)), Builtin::u8(Builtin::i32(0x1B)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x14)), Builtin::u8(Builtin::i32(0x19)), Builtin::u8(Builtin::i32(0x15)), Builtin::u8(Builtin::i32(0x19)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x8E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x8B)), Builtin::u8(Builtin::i32(0x18)), Builtin::u8(Builtin::i32(0x1A)), Builtin::u8(Builtin::i32(0x1A)), Builtin::u8(Builtin::i32(0x1A)), Builtin::u8(Builtin::i32(0x1A)), Builtin::u8(Builtin::i32(0x1C)), Builtin::u8(Builtin::i32(0x18)), Builtin::u8(Builtin::i32(0x1B)), Builtin::u8(Builtin::i32(0x1C)), Builtin::u8(Builtin::i32(0x04)), Builtin::u8(Builtin::i32(0x16)), Builtin::u8(Builtin::i32(0x19)), Builtin::u8(Builtin::i32(0x0F)), Builtin::u8(Builtin::i32(0x1C)), Builtin::u8(Builtin::i32(0x1B)), Builtin::u8(Builtin::i32(0x1C)), Builtin::u8(Builtin::i32(0x19)), Builtin::u8(Builtin::i32(0x0A)), Builtin::u8(Builtin::i32(0x0A)), Builtin::u8(Builtin::i32(0x1B)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x18)), Builtin::u8(Builtin::i32(0x18)), Builtin::u8(Builtin::i32(0x1B)), Builtin::u8(Builtin::i32(0x0A)), Builtin::u8(Builtin::i32(0x04)), Builtin::u8(Builtin::i32(0x17)), Builtin::u8(Builtin::i32(0x0A)), Builtin::u8(Builtin::i32(0x0A)), Builtin::u8(Builtin::i32(0x0A)), Builtin::u8(Builtin::i32(0x18)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x19)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x19)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21))}); }
#line 531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
namespace __Char$Protected { inline constexpr UIntRange32 HighSurrogateRange = System::Range<Builtin::Auto<decltype(Builtin::u32(0xdc00U))>, false>(Builtin::u32(0xd800U), Builtin::u32(0xdc00U)); }
#line 532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
namespace __Char$Protected { inline constexpr UIntRange32 LowSurrogateRange = System::Range<Builtin::Auto<decltype(Builtin::u32(0xe000U))>, false>(Builtin::u32(0xdc00U), Builtin::u32(0xe000U)); }
//###############################################################################
//# Function definitions
//###############################################################################

namespace __Char$Protected {
		#line 491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		inline constexpr auto HexDigitFromByte(Builtin::u32 c) noexcept -> const Builtin::i32
		{
			#line 492 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			ADV_EXPRESSION_BODY((c <=> ADV_UPCS(Length)(__Char$Protected::CharToHex.$ref())) >= 0 ? Builtin::i32(0xFF) : ADV_UFCS(_operator_subscript)(__Char$Protected::CharToHex.$ref(), c)); 
		}
	}
namespace __Char$Protected {
		#line 519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		inline constexpr auto GetLatin1UnicodeCategory(Builtin::u32 c)  -> const UnicodeCategory
		{
			#line 521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			ADV_ASSERT(((c <=> Builtin::u32(0xFFU)) <= 0), "c<=0xFFu");
			#line 522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			return ADV_USFCS((UnicodeCategory), FromValue)(ADV_UFCS(_operator_subscript)(__Char$Protected::Latin1CharInfo.$ref(), c) & Builtin::u32(0x1FU));
		}
	}
namespace __Char$Protected {
		#line 525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		inline constexpr auto IsWhiteSpaceLatin1(Builtin::u32 c)  -> const bool
		{
			#line 527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			ADV_ASSERT(((c <=> Builtin::u32(0xFFU)) <= 0), "c<=0xFFu");
			#line 528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			return (ADV_UFCS(_operator_subscript)(__Char$Protected::Latin1CharInfo.$ref(), c) & Builtin::u32(0x80U)) != Builtin::i32(0);
		}
	}
} namespace $extensions { using namespace System;
#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto $static_FromDigit<$extension_Char_15_byte>::get(Builtin::u32 num, Builtin::u32 radix)  -> const Builtin::Nullable<$extension_Char_15_byte>
	{
		#line 71 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if ((radix <=> Builtin::u32(36U)) > 0) {
			#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if ((num <=> radix) < 0) {
			#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			if ((num <=> Builtin::u32(10U)) < 0) {
				#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
				return Builtin::u8('0') + num;
			} else {
				#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
				{
					#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
					return Builtin::u8('a') + num - Builtin::i32(10);
				}
			}
		}
		#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAscii($extension_Char_15_byte const& $this ) -> const bool
	{
		#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(($this <=> Builtin::u8(0x7FU)) <= 0); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiDigit($extension_Char_15_byte const& $this ) -> const bool
	{
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(Builtin::u8('9'))>, true>(Builtin::u8('0'), Builtin::u8('9')), $this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsDigit($extension_Char_15_byte const& $this ) -> const bool
	{
		#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAsciiDigit)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsBinDigit($extension_Char_15_byte const& $this ) -> const bool
	{
		#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(Builtin::u8('2'))>, false>(Builtin::u8('0'), Builtin::u8('2')), $this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsOctDigit($extension_Char_15_byte const& $this ) -> const bool
	{
		#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(Builtin::u8('8'))>, false>(Builtin::u8('0'), Builtin::u8('8')), $this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsHexDigit($extension_Char_15_byte const& $this ) -> const bool
	{
		#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if constexpr (Builtin::Is64BitTarget()) {
			#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			const Builtin::Auto<decltype(Builtin::u64{$this} - Builtin::u8('0'))> i = Builtin::u64{$this} - Builtin::u8('0'); 
			#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			const Builtin::Auto<decltype(Builtin::u64(18428868213665201664ULL) << (Builtin::Cast<true, Builtin::i32>(i)))> shift = Builtin::u64(18428868213665201664ULL) << (Builtin::Cast<true, Builtin::i32>(i)); 
			#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_sub_mod)(i, Builtin::i32(64)))> mask = ADV_UFCS(_operator_sub_mod)(i, Builtin::i32(64)); 
			#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			return (ADV_UFCS(NarrowToInt64)((shift & mask).$ref()) <=> Builtin::i32(0)) < 0;
		} else {
			#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			{
				#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
				return __Char$Protected::HexDigitFromByte($this) != Builtin::i32(0xFF);
			}
		}
		return {};
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsHexDigitUpper($extension_Char_15_byte const& $this ) -> const bool
	{
		#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY((ADV_UFCS(NarrowToUInt32)((Builtin::i32{$this} - Builtin::u8('0')).$ref()) <=> Builtin::i32(9)) <= 0 || (ADV_UFCS(NarrowToUInt32)((Builtin::i32{$this} - Builtin::u8('A')).$ref()) <=> (Builtin::u8('F') - Builtin::u8('A'))) <= 0); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsHexDigitLower($extension_Char_15_byte const& $this ) -> const bool
	{
		#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY((ADV_UFCS(NarrowToUInt32)((Builtin::i32{$this} - Builtin::u8('0')).$ref()) <=> Builtin::i32(9)) <= 0 || (ADV_UFCS(NarrowToUInt32)((Builtin::i32{$this} - Builtin::u8('a')).$ref()) <=> (Builtin::u8('f') - Builtin::u8('a'))) <= 0); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiLetter($extension_Char_15_byte const& $this ) -> const bool
	{
		#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY((ADV_UFCS(NarrowToUInt32)((Builtin::i32{$this | Builtin::u8(0x20U)} - Builtin::u8('a')).$ref()) <=> Builtin::u8('z') - Builtin::u8('a')) <= 0); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsLetter($extension_Char_15_byte const& $this ) -> const bool
	{
		#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAsciiLetter)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiLetterUpper($extension_Char_15_byte const& $this ) -> const bool
	{
		#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(Builtin::u8('Z'))>, true>(Builtin::u8('A'), Builtin::u8('Z')), $this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsLetterUpper($extension_Char_15_byte const& $this ) -> const bool
	{
		#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAsciiLetterUpper)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiLetterLower($extension_Char_15_byte const& $this ) -> const bool
	{
		#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(Builtin::u8('z'))>, true>(Builtin::u8('a'), Builtin::u8('z')), $this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsLetterLower($extension_Char_15_byte const& $this ) -> const bool
	{
		#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAsciiLetterLower)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiLetterOrDigit($extension_Char_15_byte const& $this ) -> const bool
	{
		#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAsciiLetter)($this.$ref()) || ADV_UPCS(IsAsciiDigit)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsLetterOrDigit($extension_Char_15_byte const& $this ) -> const bool
	{
		#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAsciiLetterOrDigit)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsIdentifierChar($extension_Char_15_byte const& $this ) -> const bool
	{
		#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAsciiLetterOrDigit)($this.$ref()) || $this == Builtin::u8('_')); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiControl($extension_Char_15_byte const& $this ) -> const bool
	{
		#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(($this <=> Builtin::u8(0x1FU)) <= 0); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsControl($extension_Char_15_byte const& $this ) -> const bool
	{
		#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(((ADV_UFCS(_operator_and_not)((Builtin::u32{$this} + Builtin::i32(1)), Builtin::u32(0x80U))) <=> Builtin::u32(0x20U)) <= 0); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiPunctuation($extension_Char_15_byte const& $this ) -> const bool
	{
		#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAscii)($this.$ref()) && ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(ADV_UPCS(Value)(ADV_USPCS(OtherPunctuation, UnicodeCategory)().$ref()))>, true>(ADV_UPCS(Value)(ADV_USPCS(ConnectorPunctuation, UnicodeCategory)().$ref()), ADV_UPCS(Value)(ADV_USPCS(OtherPunctuation, UnicodeCategory)().$ref())), ADV_UPCS(Value)(__Char$Protected::GetLatin1UnicodeCategory($this).$ref()))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsPunctuation($extension_Char_15_byte const& $this ) -> const bool
	{
		#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAsciiPunctuation)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiSeparator($extension_Char_15_byte const& $this ) -> const bool
	{
		#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY($this == Builtin::u32(0x20U)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsSeparator($extension_Char_15_byte const& $this ) -> const bool
	{
		#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAsciiSeparator)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiSymbol($extension_Char_15_byte const& $this ) -> const bool
	{
		#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAscii)($this.$ref()) && ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(ADV_UPCS(Value)(ADV_USPCS(OtherSymbol, UnicodeCategory)().$ref()))>, true>(ADV_UPCS(Value)(ADV_USPCS(MathSymbol, UnicodeCategory)().$ref()), ADV_UPCS(Value)(ADV_USPCS(OtherSymbol, UnicodeCategory)().$ref())), ADV_UPCS(Value)(__Char$Protected::GetLatin1UnicodeCategory($this).$ref()))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsSymbol($extension_Char_15_byte const& $this ) -> const bool
	{
		#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAsciiSymbol)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiWhiteSpace($extension_Char_15_byte const& $this ) -> const bool
	{
		#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAscii)($this.$ref()) && __Char$Protected::IsWhiteSpaceLatin1($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsWhiteSpace($extension_Char_15_byte const& $this ) -> const bool
	{
		#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAsciiWhiteSpace)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiPrintable($extension_Char_15_byte const& $this ) -> const bool
	{
		#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(Builtin::u8('~'))>, true>(Builtin::u8('!'), Builtin::u8('~')), $this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsUtf8CodePointBoundary($extension_Char_15_byte const& $this ) -> const bool
	{
		#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if ($this == Builtin::u8(0U)) {
			#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			return Builtin::Boolean(true);
		}
		#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return (ADV_UFCS(NarrowToInt8)($this.$ref()) <=> Builtin::i8(-0x40)) >= 0;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getToLower($extension_Char_15_byte const& $this ) -> const $extension_Char_15_byte
	{
		#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAsciiLetterUpper)($this.$ref()) ? ($this + Builtin::u8(32U)) : $this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getToUpper($extension_Char_15_byte const& $this ) -> const $extension_Char_15_byte
	{
		#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAsciiLetterLower)($this.$ref()) ? ($this - Builtin::u8(32U)) : $this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getToAsciiChar($extension_Char_15_byte const& $this ) -> const Builtin::Nullable<AsciiChar>
	{
		#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if (ADV_UPCS(IsAscii)($this.$ref())) {
			#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			return ADV_USFCS((AsciiChar), FromValue)($this);
		}
		#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return nullptr;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto $static_getAscii<$extension_Char_15_byte>::get() -> const ByteClosedRange
	{
		#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(System::Range<Builtin::Auto<decltype(Builtin::u8(0x7FU))>, true>(Builtin::u8(0U), Builtin::u8(0x7FU))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto $static_getDigits<$extension_Char_15_byte>::get() -> const ByteClosedRange
	{
		#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(System::Range<Builtin::Auto<decltype(Builtin::u8('9'))>, true>(Builtin::u8('0'), Builtin::u8('9'))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 95 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto $static_getUppercaseLetters<$extension_Char_15_byte>::get() -> const ByteClosedRange
	{
		#line 95 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(System::Range<Builtin::Auto<decltype(Builtin::u8('Z'))>, true>(Builtin::u8('A'), Builtin::u8('Z'))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto $static_getLowercaseLetters<$extension_Char_15_byte>::get() -> const ByteClosedRange
	{
		#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(System::Range<Builtin::Auto<decltype(Builtin::u8('z'))>, true>(Builtin::u8('a'), Builtin::u8('z'))); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	
} namespace $extensions { using namespace System;
#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto $static_FromScalar<$extension_Char_99_char>::get(Builtin::u32 scalar)  -> const Builtin::Nullable<$extension_Char_99_char>
	{
		#line 118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if ((((scalar ^ Builtin::i32(0xD800)) - Builtin::i32(0x800)) <=> Builtin::i32(0x110000) - Builtin::i32(0x80)) < 0) {
			#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			return $extension_Char_99_char{scalar};
		}
		#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto $static_FromDigit<$extension_Char_99_char>::get(Builtin::u32 num, Builtin::u32 radix)  -> const Builtin::Nullable<$extension_Char_99_char>
	{
		#line 125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if ((radix <=> Builtin::u32(36U)) > 0) {
			#line 126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if ((num <=> radix) < 0) {
			#line 130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			if ((num <=> Builtin::u32(10U)) < 0) {
				#line 131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
				return Builtin::u8('0') + num;
			} else {
				#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
				{
					#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
					return Builtin::u8('a') + num - Builtin::i32(10);
				}
			}
		}
		#line 136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto $static_FromUtf16Surrogate<$extension_Char_99_char>::get(Builtin::u16 highSurrogate, Builtin::u16 lowSurrogate)  -> const typename $extension_Char_99_char
	{
		#line 145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		const Builtin::Auto<decltype(Builtin::u32{highSurrogate} - ADV_UPCS(Start)(__Char$Protected::HighSurrogateRange.$ref()))> highOffset = Builtin::u32{highSurrogate} - ADV_UPCS(Start)(__Char$Protected::HighSurrogateRange.$ref()); 
		#line 146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		const Builtin::Auto<decltype(Builtin::u32{lowSurrogate} - ADV_UPCS(Start)(__Char$Protected::LowSurrogateRange.$ref()))> lowOffset = Builtin::u32{lowSurrogate} - ADV_UPCS(Start)(__Char$Protected::LowSurrogateRange.$ref()); 
		#line 147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if (((highOffset | lowOffset) <=> Builtin::u32(0x3FFU)) > 0) {
			#line 148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return (*(ADV_USFCS((Builtin::char32), FromScalar)((highOffset << Builtin::i32(10)) + lowOffset + (Builtin::i32(0x40) << Builtin::i32(10)))));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto $static_getReplacementChar<$extension_Char_99_char>::get() -> const $extension_Char_99_char
	{
		#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(Builtin::char32(U'\uFFFD')); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto $static_getUnicodeVersion<$extension_Char_99_char>::get() -> const std::tuple<Builtin::u8, Builtin::u8, Builtin::u8>
	{
		#line 112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(std::make_tuple(Builtin::u8(16U), Builtin::u8(0U), Builtin::u8(0U))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto $static_getMaxUtf8Length<$extension_Char_99_char>::get() -> const Builtin::usize
	{
		#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(4U)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto $static_getMaxUtf16Length<$extension_Char_99_char>::get() -> const Builtin::usize
	{
		#line 140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(2U)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getAsAscii($extension_Char_99_char const& $this ) -> const Builtin::Nullable<AsciiChar>
	{
		#line 156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if (ADV_UPCS(IsAscii)($this.$ref())) {
			#line 157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			return ADV_USFCS((AsciiChar), FromValue)(Builtin::Cast<true, Builtin::u8>($this));
		}
		#line 159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return nullptr;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getHashCode($extension_Char_99_char const& $this ) -> const Builtin::u64
	{
		#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u64>($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAscii($extension_Char_99_char const& $this ) -> const bool
	{
		#line 165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(($this <=> Builtin::char32(U'\u007F')) <= 0); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsLatin1($extension_Char_99_char const& $this ) -> const bool
	{
		#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(($this <=> Builtin::char32(U'\u00FF')) <= 0); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsBmp($extension_Char_99_char const& $this ) -> const bool
	{
		#line 169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(($this <=> Builtin::char32(U'\uFFFF')) <= 0); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getPlane($extension_Char_99_char const& $this ) -> const Builtin::u32
	{
		#line 170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY((Builtin::Cast<true, Builtin::u32>($this)) >> Builtin::i32(16)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getUtf16Length($extension_Char_99_char const& $this ) -> const Builtin::u32
	{
		#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		Builtin::Auto<decltype(Builtin::Cast<true, Builtin::u32>($this))> result = Builtin::Cast<true, Builtin::u32>($this); 
		#line 175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_UFCS(_operator_sub_mod_eq)(result, Builtin::u32(0x10000U));
		#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_UFCS(_operator_add_mod_eq)(result, (Builtin::u32(2U) << Builtin::i32(24)));
		#line 177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		result >>= Builtin::i32(24);
		#line 178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT(((result <=> ADV_USPCS(MaxUtf16Length, $extension_Char_99_char)()) <= 0), "result<=self.MaxUtf16Length");
		#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return result;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getUtf8Length($extension_Char_99_char const& $this ) -> const Builtin::u32
	{
		#line 184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		Builtin::Auto<decltype(Builtin::Cast<true, Builtin::u32>($this))> result = Builtin::Cast<true, Builtin::u32>($this); 
		#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		const Builtin::Auto<decltype((ADV_UFCS(_operator_sub_mod)(result, Builtin::u32(0x800U))) >> Builtin::i32(31))> a = (ADV_UFCS(_operator_sub_mod)(result, Builtin::u32(0x800U))) >> Builtin::i32(31); 
		#line 186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		result ^= Builtin::u32(0xF800U);
		#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_UFCS(_operator_sub_mod_eq)(result, Builtin::u32(0xF880U));
		#line 188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_UFCS(_operator_add_mod_eq)(result, (Builtin::u32(4U) << Builtin::i32(24)));
		#line 189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		result >>= Builtin::i32(24);
		#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		result += a * Builtin::i32(2);
		#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT(((result <=> ADV_USPCS(MaxUtf8Length, $extension_Char_99_char)()) <= 0), "result<=self.MaxUtf8Length");
		#line 192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return result;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getCodepointValue($extension_Char_99_char const& $this ) -> const Builtin::u32
	{
		#line 195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u32>($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsValid($extension_Char_99_char const& $this ) -> const bool
	{
		#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY((ADV_UPCS(CodepointValue)($this.$ref()) <=> Builtin::u32(0x10FFFFU)) <= 0); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getCharUnicodeCategory($extension_Char_99_char const& $this ) -> const UnicodeCategory
	{
		#line 202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if (ADV_UPCS(IsLatin1)($this.$ref())) {
			#line 203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			return __Char$Protected::GetLatin1UnicodeCategory(Builtin::Cast<true, Builtin::u32>($this));
		}
		#line 205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsValid)($this.$ref())), "this.IsValid");
		#line 206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return ADV_USFCS((CharUnicodeInfo), GetUnicodeCategory)(Builtin::Cast<true, Builtin::u32>($this));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getBidiCategory($extension_Char_99_char const& $this ) -> const StrongBidiCategory
	{
		#line 211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((CharUnicodeInfo), GetStrongBidiCategory)(Builtin::Cast<true, Builtin::u32>($this))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getNumericValue($extension_Char_99_char const& $this ) -> const Builtin::Nullable<Builtin::f64>
	{
		#line 217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if (ADV_UPCS(IsAscii)($this.$ref())) {
			#line 218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_sub_mod)(ADV_UPCS(CodepointValue)($this.$ref()), Builtin::u8('0')))> baseNum = ADV_UFCS(_operator_sub_mod)(ADV_UPCS(CodepointValue)($this.$ref()), Builtin::u8('0')); 
			#line 219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			if ((baseNum <=> Builtin::i32(9)) <= 0) {
				#line 220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
				return baseNum;
			}
			#line 222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			return nullptr;
		}
		#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		const Builtin::Auto<decltype(ADV_USFCS((CharUnicodeInfo), GetNumericValue)(Builtin::Cast<true, Builtin::u32>($this)))> num = ADV_USFCS((CharUnicodeInfo), GetNumericValue)(Builtin::Cast<true, Builtin::u32>($this)); 
		#line 225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if (num != ADV_USPCS(MinusOne, Builtin::f64)()) {
			#line 226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			return num;
		}
		#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return nullptr;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiControl($extension_Char_99_char const& $this ) -> const bool
	{
		#line 232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(Builtin::char32(U'\u001F'))>, true>(Builtin::char32(U'\0'), Builtin::char32(U'\u001F')), $this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsControl($extension_Char_99_char const& $this ) -> const bool
	{
		#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(((ADV_UFCS(_operator_and_not)((Builtin::u32{$this} + Builtin::i32(1)), Builtin::u32(0x80U))) <=> Builtin::u32(0x20U)) <= 0); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiDigit($extension_Char_99_char const& $this ) -> const bool
	{
		#line 236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAscii)($this.$ref()) && ADV_UPCS(IsAsciiDigit)(Builtin::u8{$this}.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getIsDigit($extension_Char_99_char const& $this ) -> const bool
	{
		#line 240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if (ADV_UPCS(IsAscii)($this.$ref())) {
			#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			return ADV_UPCS(IsAsciiDigit)(Builtin::u8{$this}.$ref());
		}
		#line 243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return ADV_USFCS((CharUnicodeInfo), GetUnicodeCategory)(Builtin::Cast<true, Builtin::u32>($this)) == ADV_USPCS(DecimalDigitNumber, UnicodeCategory)();
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsBinDigit($extension_Char_99_char const& $this ) -> const bool
	{
		#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAscii)($this.$ref()) && ADV_UPCS(IsBinDigit)(Builtin::u8{$this}.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsOctDigit($extension_Char_99_char const& $this ) -> const bool
	{
		#line 248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAscii)($this.$ref()) && ADV_UPCS(IsOctDigit)(Builtin::u8{$this}.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsHexDigit($extension_Char_99_char const& $this ) -> const bool
	{
		#line 250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAscii)($this.$ref()) && ADV_UPCS(IsHexDigit)(Builtin::u8{$this}.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsHexDigitUpper($extension_Char_99_char const& $this ) -> const bool
	{
		#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAscii)($this.$ref()) && ADV_UPCS(IsHexDigitUpper)(Builtin::u8{$this}.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsHexDigitLower($extension_Char_99_char const& $this ) -> const bool
	{
		#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAscii)($this.$ref()) && ADV_UPCS(IsHexDigitLower)(Builtin::u8{$this}.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiLetter($extension_Char_99_char const& $this ) -> const bool
	{
		#line 253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAscii)($this.$ref()) && ADV_UPCS(IsAsciiLetter)(Builtin::u8{$this}.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getIsLetter($extension_Char_99_char const& $this ) -> const bool
	{
		#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if (ADV_UPCS(IsAscii)($this.$ref())) {
			#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			return ADV_UPCS(IsAsciiLetter)(Builtin::u8{$this}.$ref());
		}
		#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(ADV_UPCS(Value)(ADV_USPCS(OtherLetter, UnicodeCategory)().$ref()))>, true>(ADV_UPCS(Value)(ADV_USPCS(UppercaseLetter, UnicodeCategory)().$ref()), ADV_UPCS(Value)(ADV_USPCS(OtherLetter, UnicodeCategory)().$ref())), ADV_UPCS(Value)(ADV_USFCS((CharUnicodeInfo), GetUnicodeCategory)(Builtin::Cast<true, Builtin::u32>($this)).$ref()));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiLetterUpper($extension_Char_99_char const& $this ) -> const bool
	{
		#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAscii)($this.$ref()) && ADV_UPCS(IsAsciiLetterUpper)(Builtin::u8{$this}.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getIsLetterUpper($extension_Char_99_char const& $this ) -> const bool
	{
		#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if (ADV_UPCS(IsAscii)($this.$ref())) {
			#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			return ADV_UPCS(IsAsciiLetterUpper)(Builtin::u8{$this}.$ref());
		}
		#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return ADV_USFCS((CharUnicodeInfo), GetUnicodeCategory)(Builtin::Cast<true, Builtin::u32>($this)) == ADV_USPCS(UppercaseLetter, UnicodeCategory)();
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiLetterLower($extension_Char_99_char const& $this ) -> const bool
	{
		#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAscii)($this.$ref()) && ADV_UPCS(IsAsciiLetterLower)(Builtin::u8{$this}.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getIsLetterLower($extension_Char_99_char const& $this ) -> const bool
	{
		#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if (ADV_UPCS(IsAscii)($this.$ref())) {
			#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			return ADV_UPCS(IsAsciiLetterLower)(Builtin::u8{$this}.$ref());
		}
		#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return ADV_USFCS((CharUnicodeInfo), GetUnicodeCategory)(Builtin::Cast<true, Builtin::u32>($this)) == ADV_USPCS(LowercaseLetter, UnicodeCategory)();
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getIsLetterTitle($extension_Char_99_char const& $this ) -> const bool
	{
		#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((CharUnicodeInfo), GetUnicodeCategory)(Builtin::Cast<true, Builtin::u32>($this)) == ADV_USPCS(TitlecaseLetter, UnicodeCategory)()); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiLetterOrDigit($extension_Char_99_char const& $this ) -> const bool
	{
		#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAscii)($this.$ref()) && ADV_UPCS(IsAsciiLetterOrDigit)(Builtin::u8{$this}.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getIsLetterOrDigit($extension_Char_99_char const& $this ) -> const bool
	{
		#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if (ADV_UPCS(IsAscii)($this.$ref())) {
			#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			return ADV_UPCS(IsAsciiLetterOrDigit)(Builtin::u8{$this}.$ref());
		}
		#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		const Builtin::Auto<decltype(ADV_USFCS((CharUnicodeInfo), GetUnicodeCategory)(Builtin::Cast<true, Builtin::u32>($this)))> category = ADV_USFCS((CharUnicodeInfo), GetUnicodeCategory)(Builtin::Cast<true, Builtin::u32>($this)); 
		#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(ADV_UPCS(Value)(ADV_USPCS(OtherLetter, UnicodeCategory)().$ref()))>, true>(ADV_UPCS(Value)(ADV_USPCS(UppercaseLetter, UnicodeCategory)().$ref()), ADV_UPCS(Value)(ADV_USPCS(OtherLetter, UnicodeCategory)().$ref())), ADV_UPCS(Value)(category.$ref())) || category == ADV_USPCS(DecimalDigitNumber, UnicodeCategory)();
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsIdentifierChar($extension_Char_99_char const& $this ) -> const bool
	{
		#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAsciiLetterOrDigit)($this.$ref()) || $this == Builtin::char32(U'_')); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiPunctuation($extension_Char_99_char const& $this ) -> const bool
	{
		#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAscii)($this.$ref()) && ADV_UPCS(IsAsciiPunctuation)(Builtin::u8{$this}.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getIsPunctuation($extension_Char_99_char const& $this ) -> const bool
	{
		#line 298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(ADV_UPCS(Value)(ADV_USPCS(OtherPunctuation, UnicodeCategory)().$ref()))>, true>(ADV_UPCS(Value)(ADV_USPCS(ConnectorPunctuation, UnicodeCategory)().$ref()), ADV_UPCS(Value)(ADV_USPCS(OtherPunctuation, UnicodeCategory)().$ref())), ADV_UPCS(Value)(ADV_USFCS((CharUnicodeInfo), GetUnicodeCategory)(Builtin::Cast<true, Builtin::u32>($this)).$ref()))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiSeparator($extension_Char_99_char const& $this ) -> const bool
	{
		#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAscii)($this.$ref()) && ADV_UPCS(IsAsciiSeparator)(Builtin::u8{$this}.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getIsSeparator($extension_Char_99_char const& $this ) -> const bool
	{
		#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(ADV_UPCS(Value)(ADV_USPCS(ParagraphSeparator, UnicodeCategory)().$ref()))>, true>(ADV_UPCS(Value)(ADV_USPCS(SpaceSeparator, UnicodeCategory)().$ref()), ADV_UPCS(Value)(ADV_USPCS(ParagraphSeparator, UnicodeCategory)().$ref())), ADV_UPCS(Value)(ADV_USFCS((CharUnicodeInfo), GetUnicodeCategory)(Builtin::Cast<true, Builtin::u32>($this)).$ref()))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiSymbol($extension_Char_99_char const& $this ) -> const bool
	{
		#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAscii)($this.$ref()) && ADV_UPCS(IsAsciiSymbol)(Builtin::u8{$this}.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getIsSymbol($extension_Char_99_char const& $this ) -> const bool
	{
		#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(ADV_UPCS(Value)(ADV_USPCS(OtherSymbol, UnicodeCategory)().$ref()))>, true>(ADV_UPCS(Value)(ADV_USPCS(MathSymbol, UnicodeCategory)().$ref()), ADV_UPCS(Value)(ADV_USPCS(OtherSymbol, UnicodeCategory)().$ref())), ADV_UPCS(Value)(ADV_USFCS((CharUnicodeInfo), GetUnicodeCategory)(Builtin::Cast<true, Builtin::u32>($this)).$ref()))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiWhiteSpace($extension_Char_99_char const& $this ) -> const bool
	{
		#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAscii)($this.$ref()) && ADV_UPCS(IsAsciiWhiteSpace)(Builtin::u8{$this}.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getIsWhiteSpace($extension_Char_99_char const& $this ) -> const bool
	{
		#line 309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if (ADV_UPCS(IsAscii)($this.$ref())) {
			#line 310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			return ADV_UPCS(IsAsciiWhiteSpace)(Builtin::u8{$this}.$ref());
		}
		#line 312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return ADV_UPCS(IsBmp)($this.$ref()) && ADV_USFCS((CharUnicodeInfo), GetIsWhitespace)(Builtin::Cast<true, Builtin::u32>($this));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiPrintable($extension_Char_99_char const& $this ) -> const bool
	{
		#line 314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(Builtin::char32(U'~'))>, true>(Builtin::char32(U'!'), Builtin::char32(U'~')), $this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getToLowerAscii($extension_Char_99_char const& $this ) -> const $extension_Char_99_char
	{
		#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAsciiLetterUpper)($this.$ref()) ? $extension_Char_99_char{ADV_UPCS(CodepointValue)($this.$ref()) + Builtin::u32(32U)} : $this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getToUpperAscii($extension_Char_99_char const& $this ) -> const $extension_Char_99_char
	{
		#line 316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAsciiLetterLower)($this.$ref()) ? $extension_Char_99_char{ADV_UPCS(CodepointValue)($this.$ref()) - Builtin::u32(32U)} : $this); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getToUpper($extension_Char_99_char const& $this ) -> const $extension_Char_99_char
	{
		#line 320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if (ADV_UPCS(IsAscii)($this.$ref())) {
			#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			return ADV_UPCS(ToUpperAscii)($this.$ref());
		}
		#line 326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return Builtin::BitCast<$extension_Char_99_char>(ADV_USFCS((CharUnicodeInfo), ToUpperNeutral)(Builtin::Cast<true, Builtin::u32>($this)));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getToUpperInvariant($extension_Char_99_char const& $this ) -> const $extension_Char_99_char
	{
		#line 331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if (ADV_UPCS(IsAscii)($this.$ref())) {
			#line 332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			return ADV_UPCS(ToUpperAscii)($this.$ref());
		}
		#line 334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return Builtin::BitCast<$extension_Char_99_char>(ADV_USFCS((CharUnicodeInfo), ToUpperNeutral)(Builtin::Cast<true, Builtin::u32>($this)));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getToLower($extension_Char_99_char const& $this ) -> const $extension_Char_99_char
	{
		#line 339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if (ADV_UPCS(IsAscii)($this.$ref())) {
			#line 340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			return ADV_UPCS(ToLowerAscii)($this.$ref());
		}
		#line 346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return Builtin::BitCast<$extension_Char_99_char>(ADV_USFCS((CharUnicodeInfo), ToLowerNeutral)(Builtin::Cast<true, Builtin::u32>($this)));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getToLowerInvariant($extension_Char_99_char const& $this ) -> const $extension_Char_99_char
	{
		#line 351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if (ADV_UPCS(IsAscii)($this.$ref())) {
			#line 352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			return ADV_UPCS(ToLowerAscii)($this.$ref());
		}
		#line 354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return Builtin::BitCast<$extension_Char_99_char>(ADV_USFCS((CharUnicodeInfo), ToLowerNeutral)(Builtin::Cast<true, Builtin::u32>($this)));
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	
} namespace $extensions { using namespace System;
#line 366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto $static_getMinValue<$extension_Char_365_char>::get() -> const $extension_Char_365_char
	{
		#line 366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(Builtin::char32(U'\0')); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto $static_getMaxValue<$extension_Char_365_char>::get() -> const $extension_Char_365_char
	{
		#line 367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(Builtin::char32(U'\U0010FFFF')); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	
} namespace $extensions { using namespace System;
#line 371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto RangeStepForward($extension_Char_370_char const& $this LIFETIMEBOUND, Builtin::usize steps)  -> const typename $extension_Char_370_char
	{
		#line 373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		constexpr Builtin::Auto<decltype(Builtin::u32(0xD800U))> LowSurrogateBound = Builtin::u32(0xD800U);
		#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::u32>($this))> start = Builtin::Cast<true, Builtin::u32>($this); 
		#line 375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		Builtin::Auto<decltype(start + steps)> result = start + steps; 
		#line 376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if ((start <=> LowSurrogateBound) < 0 && (result <=> LowSurrogateBound) >= 0) {
			#line 377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			result += Builtin::u32(0x800U);
		}
		#line 380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return $extension_Char_370_char{result};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto RangeStepBackward($extension_Char_370_char const& $this LIFETIMEBOUND, Builtin::usize steps)  -> const typename $extension_Char_370_char
	{
		#line 384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		constexpr Builtin::Auto<decltype(Builtin::u32(0xE000U))> HighSurrogateBound = Builtin::u32(0xE000U);
		#line 385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::u32>($this))> start = Builtin::Cast<true, Builtin::u32>($this); 
		#line 386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		Builtin::Auto<decltype(start - steps)> result = start - steps; 
		#line 387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if ((start <=> HighSurrogateBound) < 0 && (result <=> HighSurrogateBound) >= 0) {
			#line 388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			result -= Builtin::u32(0x800U);
		}
		#line 391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return $extension_Char_370_char{result};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto $static_getAscii<$extension_Char_370_char>::get() -> const Range<Builtin::char32>
	{
		#line 393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(System::Range<Builtin::Auto<decltype(Builtin::char32(U'\u0080'))>, false>(Builtin::char32(U'\0'), Builtin::char32(U'\u0080'))); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	
} namespace $extensions { using namespace System;
#line 413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToBoolean($extension_Char_412_char const& $this LIFETIMEBOUND) noexcept -> const bool
	{
		#line 413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY($this != Builtin::char32(U'\0')); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToInt8($extension_Char_412_char const& $this LIFETIMEBOUND)  -> const Builtin::i8
	{
		#line 415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if ((ADV_UPCS(CodepointValue)($this.$ref()) <=> Builtin::i32(0x7F)) > 0) {
			#line 416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return Builtin::Cast<true, Builtin::i8>(ADV_UPCS(CodepointValue)($this.$ref()));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToUInt8($extension_Char_412_char const& $this LIFETIMEBOUND)  -> const Builtin::u8
	{
		#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if ((ADV_UPCS(CodepointValue)($this.$ref()) <=> Builtin::i32(0xFF)) > 0) {
			#line 422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return Builtin::Cast<true, Builtin::u8>(ADV_UPCS(CodepointValue)($this.$ref()));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToInt16($extension_Char_412_char const& $this LIFETIMEBOUND)  -> const Builtin::i16
	{
		#line 427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if ((ADV_UPCS(CodepointValue)($this.$ref()) <=> Builtin::i32(0x7FFF)) > 0) {
			#line 428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return Builtin::Cast<true, Builtin::i16>(ADV_UPCS(CodepointValue)($this.$ref()));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToUInt16($extension_Char_412_char const& $this LIFETIMEBOUND)  -> const Builtin::u16
	{
		#line 433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if ((ADV_UPCS(CodepointValue)($this.$ref()) <=> Builtin::i32(0xFFFF)) > 0) {
			#line 434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return Builtin::Cast<true, Builtin::u16>(ADV_UPCS(CodepointValue)($this.$ref()));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToInt32($extension_Char_412_char const& $this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if ((ADV_UPCS(CodepointValue)($this.$ref()) <=> Builtin::i32(0x7FFFFFFF)) > 0) {
			#line 440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return Builtin::Cast<true, Builtin::i32>(ADV_UPCS(CodepointValue)($this.$ref()));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToUInt32($extension_Char_412_char const& $this LIFETIMEBOUND) noexcept -> const Builtin::u32
	{
		#line 444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(CodepointValue)($this.$ref())); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToInt64($extension_Char_412_char const& $this LIFETIMEBOUND) noexcept -> const Builtin::i64
	{
		#line 445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(CodepointValue)($this.$ref())); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToUInt64($extension_Char_412_char const& $this LIFETIMEBOUND) noexcept -> const Builtin::u64
	{
		#line 446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(CodepointValue)($this.$ref())); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToInt128($extension_Char_412_char const& $this LIFETIMEBOUND) noexcept -> const Builtin::i128
	{
		#line 447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(CodepointValue)($this.$ref())); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToUInt128($extension_Char_412_char const& $this LIFETIMEBOUND) noexcept -> const Builtin::u128
	{
		#line 448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(CodepointValue)($this.$ref())); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToIsize($extension_Char_412_char const& $this LIFETIMEBOUND)  -> const Builtin::isize
	{
		#line 451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if constexpr (Builtin::usize(sizeof(Builtin::isize)) == Builtin::i32(32)) {
			#line 452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			return ADV_UFCS(ToInt32)($this.$ref());
		} else {
			#line 453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			{
				#line 454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
				return ADV_UPCS(CodepointValue)($this.$ref());
			}
		}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToUsize($extension_Char_412_char const& $this LIFETIMEBOUND) noexcept -> const Builtin::usize
	{
		#line 457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(CodepointValue)($this.$ref())); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToFloat32($extension_Char_412_char const& $this LIFETIMEBOUND) noexcept -> const Builtin::f32
	{
		#line 458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(CodepointValue)($this.$ref())); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToFloat64($extension_Char_412_char const& $this LIFETIMEBOUND) noexcept -> const Builtin::f64
	{
		#line 459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(CodepointValue)($this.$ref())); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToByte($extension_Char_412_char const& $this LIFETIMEBOUND)  -> const Builtin::u8
	{
		#line 461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if ((ADV_UPCS(CodepointValue)($this.$ref()) <=> Builtin::i32(0xFF)) > 0) {
			#line 462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return Builtin::Cast<true, Builtin::u8>(ADV_UPCS(CodepointValue)($this.$ref()));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToChar($extension_Char_412_char const& $this LIFETIMEBOUND) noexcept -> const Builtin::char32
	{
		#line 466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	
} namespace $extensions { using namespace System;
#line 535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsHighSurrogate($extension_Char_534_u16 const& $this ) -> const bool
	{
		#line 535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_in)(__Char$Protected::HighSurrogateRange, $this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsLowSurrogate($extension_Char_534_u16 const& $this ) -> const bool
	{
		#line 536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_in)(__Char$Protected::LowSurrogateRange, $this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsSurrogate($extension_Char_534_u16 const& $this ) -> const bool
	{
		#line 537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsHighSurrogate)($this.$ref()) || ADV_UPCS(IsLowSurrogate)($this.$ref())); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	

}