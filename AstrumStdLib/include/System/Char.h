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
namespace __Unsafe {} namespace __Char_Protected__Unsafe {}
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
	} namespace __extensions { using namespace System;
#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	using __extension_Char_15_byte = Builtin::u8;
	#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	template<class __TT> struct __static_FromDigit; template<> struct __static_FromDigit<__extension_Char_15_byte> { static inline constexpr auto get(Builtin::u32 num, Builtin::u32 radix)  -> const Builtin::Nullable<__extension_Char_15_byte>; };
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAscii(__extension_Char_15_byte const& __this ) -> const bool;
	#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiDigit(__extension_Char_15_byte const& __this ) -> const bool;
	#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsDigit(__extension_Char_15_byte const& __this ) -> const bool;
	#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsBinDigit(__extension_Char_15_byte const& __this ) -> const bool;
	#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsOctDigit(__extension_Char_15_byte const& __this ) -> const bool;
	#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsHexDigit(__extension_Char_15_byte const& __this ) -> const bool;
	#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsHexDigitUpper(__extension_Char_15_byte const& __this ) -> const bool;
	#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsHexDigitLower(__extension_Char_15_byte const& __this ) -> const bool;
	#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiLetter(__extension_Char_15_byte const& __this ) -> const bool;
	#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsLetter(__extension_Char_15_byte const& __this ) -> const bool;
	#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiLetterUpper(__extension_Char_15_byte const& __this ) -> const bool;
	#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsLetterUpper(__extension_Char_15_byte const& __this ) -> const bool;
	#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiLetterLower(__extension_Char_15_byte const& __this ) -> const bool;
	#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsLetterLower(__extension_Char_15_byte const& __this ) -> const bool;
	#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiLetterOrDigit(__extension_Char_15_byte const& __this ) -> const bool;
	#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsLetterOrDigit(__extension_Char_15_byte const& __this ) -> const bool;
	#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsIdentifierChar(__extension_Char_15_byte const& __this ) -> const bool;
	#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiControl(__extension_Char_15_byte const& __this ) -> const bool;
	#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsControl(__extension_Char_15_byte const& __this ) -> const bool;
	#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiPunctuation(__extension_Char_15_byte const& __this ) -> const bool;
	#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsPunctuation(__extension_Char_15_byte const& __this ) -> const bool;
	#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiSeparator(__extension_Char_15_byte const& __this ) -> const bool;
	#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsSeparator(__extension_Char_15_byte const& __this ) -> const bool;
	#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiSymbol(__extension_Char_15_byte const& __this ) -> const bool;
	#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsSymbol(__extension_Char_15_byte const& __this ) -> const bool;
	#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiWhiteSpace(__extension_Char_15_byte const& __this ) -> const bool;
	#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsWhiteSpace(__extension_Char_15_byte const& __this ) -> const bool;
	#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiPrintable(__extension_Char_15_byte const& __this ) -> const bool;
	#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getToLower(__extension_Char_15_byte const& __this ) -> const __extension_Char_15_byte;
	#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getToUpper(__extension_Char_15_byte const& __this ) -> const __extension_Char_15_byte;
	#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getToAsciiChar(__extension_Char_15_byte const& __this ) -> const Builtin::Nullable<AsciiChar>;
	#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	template<class __TT> struct __static_getAscii; template<> struct __static_getAscii<__extension_Char_15_byte> { static inline constexpr auto get() -> const ByteClosedRange; };
	#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	template<class __TT> struct __static_getDigits; template<> struct __static_getDigits<__extension_Char_15_byte> { static inline constexpr auto get() -> const ByteClosedRange; };
	#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	template<class __TT> struct __static_getUppercaseLetters; template<> struct __static_getUppercaseLetters<__extension_Char_15_byte> { static inline constexpr auto get() -> const ByteClosedRange; };
	#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	template<class __TT> struct __static_getLowercaseLetters; template<> struct __static_getLowercaseLetters<__extension_Char_15_byte> { static inline constexpr auto get() -> const ByteClosedRange; };
	} namespace System{
using __extensions::__static_FromDigit;
using __extensions::getIsAscii;
using __extensions::getIsAsciiDigit;
using __extensions::getIsDigit;
using __extensions::getIsBinDigit;
using __extensions::getIsOctDigit;
using __extensions::getIsHexDigit;
using __extensions::getIsHexDigitUpper;
using __extensions::getIsHexDigitLower;
using __extensions::getIsAsciiLetter;
using __extensions::getIsLetter;
using __extensions::getIsAsciiLetterUpper;
using __extensions::getIsLetterUpper;
using __extensions::getIsAsciiLetterLower;
using __extensions::getIsLetterLower;
using __extensions::getIsAsciiLetterOrDigit;
using __extensions::getIsLetterOrDigit;
using __extensions::getIsIdentifierChar;
using __extensions::getIsAsciiControl;
using __extensions::getIsControl;
using __extensions::getIsAsciiPunctuation;
using __extensions::getIsPunctuation;
using __extensions::getIsAsciiSeparator;
using __extensions::getIsSeparator;
using __extensions::getIsAsciiSymbol;
using __extensions::getIsSymbol;
using __extensions::getIsAsciiWhiteSpace;
using __extensions::getIsWhiteSpace;
using __extensions::getIsAsciiPrintable;
using __extensions::getToLower;
using __extensions::getToUpper;
using __extensions::getToAsciiChar;
using __extensions::__static_getAscii;
using __extensions::__static_getDigits;
using __extensions::__static_getUppercaseLetters;
using __extensions::__static_getLowercaseLetters;

		} namespace __extensions { using namespace System;
#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	using __extension_Char_93_char = Builtin::char32;
	#line 95 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	ASTRUMSTD_API auto _operator_eq_eq_mul(__extension_Char_93_char const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool;
	#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	template<class __TT> struct __static_FromScalar; template<> struct __static_FromScalar<__extension_Char_93_char> { static inline constexpr auto get(Builtin::u32 scalar)  -> const Builtin::Nullable<__extension_Char_93_char>; };
	#line 117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	template<class __TT> struct __static_FromDigit; template<> struct __static_FromDigit<__extension_Char_93_char> { static inline constexpr auto get(Builtin::u32 num, Builtin::u32 radix)  -> const Builtin::Nullable<__extension_Char_93_char>; };
	#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	template<class __TT> struct __static_FromUtf16Surrogate; template<> struct __static_FromUtf16Surrogate<__extension_Char_93_char> { static inline constexpr auto get(Builtin::u16 highSurrogate, Builtin::u16 lowSurrogate)  -> const typename __extension_Char_93_char; };
	#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	template<class __TT> struct __static_getReplacementChar; template<> struct __static_getReplacementChar<__extension_Char_93_char> { static inline constexpr auto get() -> const __extension_Char_93_char; };
	#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	template<class __TT> struct __static_getUnicodeVersion; template<> struct __static_getUnicodeVersion<__extension_Char_93_char> { static inline constexpr auto get() -> const std::tuple<Builtin::u8, Builtin::u8, Builtin::u8>; };
	#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	template<class __TT> struct __static_getMaxUtf8Length; template<> struct __static_getMaxUtf8Length<__extension_Char_93_char> { static inline constexpr auto get() -> const Builtin::usize; };
	#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	template<class __TT> struct __static_getMaxUtf16Length; template<> struct __static_getMaxUtf16Length<__extension_Char_93_char> { static inline constexpr auto get() -> const Builtin::usize; };
	#line 148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getAsAscii(__extension_Char_93_char const& __this ) -> const Builtin::Nullable<AsciiChar>;
	#line 156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getHashCode(__extension_Char_93_char const& __this ) -> const Builtin::u64;
	#line 159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAscii(__extension_Char_93_char const& __this ) -> const bool;
	#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsLatin1(__extension_Char_93_char const& __this ) -> const bool;
	#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsBmp(__extension_Char_93_char const& __this ) -> const bool;
	#line 164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getPlane(__extension_Char_93_char const& __this ) -> const Builtin::u32;
	#line 166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getUtf16Length(__extension_Char_93_char const& __this ) -> const Builtin::u32;
	#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getUtf8Length(__extension_Char_93_char const& __this ) -> const Builtin::u32;
	#line 189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getCodepointValue(__extension_Char_93_char const& __this ) -> const Builtin::u32;
	#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsValid(__extension_Char_93_char const& __this ) -> const bool;
	#line 194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getCharUnicodeCategory(__extension_Char_93_char const& __this ) -> const UnicodeCategory;
	#line 205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getBidiCategory(__extension_Char_93_char const& __this ) -> const StrongBidiCategory;
	#line 209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getNumericValue(__extension_Char_93_char const& __this ) -> const Builtin::Nullable<Builtin::f64>;
	#line 226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiControl(__extension_Char_93_char const& __this ) -> const bool;
	#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsControl(__extension_Char_93_char const& __this ) -> const bool;
	#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiDigit(__extension_Char_93_char const& __this ) -> const bool;
	#line 232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getIsDigit(__extension_Char_93_char const& __this ) -> const bool;
	#line 240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsBinDigit(__extension_Char_93_char const& __this ) -> const bool;
	#line 242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsOctDigit(__extension_Char_93_char const& __this ) -> const bool;
	#line 244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsHexDigit(__extension_Char_93_char const& __this ) -> const bool;
	#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsHexDigitUpper(__extension_Char_93_char const& __this ) -> const bool;
	#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsHexDigitLower(__extension_Char_93_char const& __this ) -> const bool;
	#line 247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiLetter(__extension_Char_93_char const& __this ) -> const bool;
	#line 249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getIsLetter(__extension_Char_93_char const& __this ) -> const bool;
	#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiLetterUpper(__extension_Char_93_char const& __this ) -> const bool;
	#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getIsLetterUpper(__extension_Char_93_char const& __this ) -> const bool;
	#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiLetterLower(__extension_Char_93_char const& __this ) -> const bool;
	#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getIsLetterLower(__extension_Char_93_char const& __this ) -> const bool;
	#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getIsLetterTitle(__extension_Char_93_char const& __this ) -> const bool;
	#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiLetterOrDigit(__extension_Char_93_char const& __this ) -> const bool;
	#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getIsLetterOrDigit(__extension_Char_93_char const& __this ) -> const bool;
	#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsIdentifierChar(__extension_Char_93_char const& __this ) -> const bool;
	#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiPunctuation(__extension_Char_93_char const& __this ) -> const bool;
	#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getIsPunctuation(__extension_Char_93_char const& __this ) -> const bool;
	#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiSeparator(__extension_Char_93_char const& __this ) -> const bool;
	#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getIsSeparator(__extension_Char_93_char const& __this ) -> const bool;
	#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiSymbol(__extension_Char_93_char const& __this ) -> const bool;
	#line 298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getIsSymbol(__extension_Char_93_char const& __this ) -> const bool;
	#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiWhiteSpace(__extension_Char_93_char const& __this ) -> const bool;
	#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getIsWhiteSpace(__extension_Char_93_char const& __this ) -> const bool;
	#line 308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiPrintable(__extension_Char_93_char const& __this ) -> const bool;
	#line 309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getToLowerAscii(__extension_Char_93_char const& __this ) -> const __extension_Char_93_char;
	#line 310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getToUpperAscii(__extension_Char_93_char const& __this ) -> const __extension_Char_93_char;
	#line 312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getToUpper(__extension_Char_93_char const& __this ) -> const __extension_Char_93_char;
	#line 323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getToUpperInvariant(__extension_Char_93_char const& __this ) -> const __extension_Char_93_char;
	#line 331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getToLower(__extension_Char_93_char const& __this ) -> const __extension_Char_93_char;
	#line 343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getToLowerInvariant(__extension_Char_93_char const& __this ) -> const __extension_Char_93_char;
	} namespace System{
using __extensions::_operator_eq_eq_mul;
using __extensions::__static_FromScalar;
using __extensions::__static_FromDigit;
using __extensions::__static_FromUtf16Surrogate;
using __extensions::__static_getReplacementChar;
using __extensions::__static_getUnicodeVersion;
using __extensions::__static_getMaxUtf8Length;
using __extensions::__static_getMaxUtf16Length;
using __extensions::getAsAscii;
using __extensions::getHashCode;
using __extensions::getIsAscii;
using __extensions::getIsLatin1;
using __extensions::getIsBmp;
using __extensions::getPlane;
using __extensions::getUtf16Length;
using __extensions::getUtf8Length;
using __extensions::getCodepointValue;
using __extensions::getIsValid;
using __extensions::getCharUnicodeCategory;
using __extensions::getBidiCategory;
using __extensions::getNumericValue;
using __extensions::getIsAsciiControl;
using __extensions::getIsControl;
using __extensions::getIsAsciiDigit;
using __extensions::getIsDigit;
using __extensions::getIsBinDigit;
using __extensions::getIsOctDigit;
using __extensions::getIsHexDigit;
using __extensions::getIsHexDigitUpper;
using __extensions::getIsHexDigitLower;
using __extensions::getIsAsciiLetter;
using __extensions::getIsLetter;
using __extensions::getIsAsciiLetterUpper;
using __extensions::getIsLetterUpper;
using __extensions::getIsAsciiLetterLower;
using __extensions::getIsLetterLower;
using __extensions::getIsLetterTitle;
using __extensions::getIsAsciiLetterOrDigit;
using __extensions::getIsLetterOrDigit;
using __extensions::getIsIdentifierChar;
using __extensions::getIsAsciiPunctuation;
using __extensions::getIsPunctuation;
using __extensions::getIsAsciiSeparator;
using __extensions::getIsSeparator;
using __extensions::getIsAsciiSymbol;
using __extensions::getIsSymbol;
using __extensions::getIsAsciiWhiteSpace;
using __extensions::getIsWhiteSpace;
using __extensions::getIsAsciiPrintable;
using __extensions::getToLowerAscii;
using __extensions::getToUpperAscii;
using __extensions::getToUpper;
using __extensions::getToUpperInvariant;
using __extensions::getToLower;
using __extensions::getToLowerInvariant;

		} namespace __extensions { using namespace System;
#line 359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	using __extension_Char_359_char = Builtin::char32;
	#line 359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	ADV_CHECK_INTERFACE(IMinMaxValue, IMinMaxValue);
	#line 360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	template<class __TT> struct __static_getMinValue; template<> struct __static_getMinValue<__extension_Char_359_char> { static inline constexpr auto get() -> const __extension_Char_359_char; };
	#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	template<class __TT> struct __static_getMaxValue; template<> struct __static_getMaxValue<__extension_Char_359_char> { static inline constexpr auto get() -> const __extension_Char_359_char; };
	#line 359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(__extension_Char_359_char, IMinMaxValue, IMinMaxValue, __extension_Char_359_char);
	} namespace System{
using __extensions::__static_getMinValue;
using __extensions::__static_getMaxValue;

		} namespace __extensions { using namespace System;
#line 364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	using __extension_Char_364_char = Builtin::char32;
	#line 364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	ADV_CHECK_INTERFACE(IRangeCustomIterator, IRangeCustomIterator);
	#line 365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto RangeStepForward(__extension_Char_364_char const& __this LIFETIMEBOUND, Builtin::usize steps)  -> const typename __extension_Char_364_char;
	#line 376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto RangeStepBackward(__extension_Char_364_char const& __this LIFETIMEBOUND, Builtin::usize steps)  -> const typename __extension_Char_364_char;
	#line 387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	template<class __TT> struct __static_getAscii; template<> struct __static_getAscii<__extension_Char_364_char> { static inline constexpr auto get() -> const Range<Builtin::char32>; };
	#line 364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(__extension_Char_364_char, IRangeCustomIterator, IRangeCustomIterator, __extension_Char_364_char);
	} namespace System{
using __extensions::RangeStepForward;
using __extensions::RangeStepBackward;
using __extensions::__static_getAscii;

		} namespace __extensions { using namespace System;
#line 391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	using __extension_Char_391_char = Builtin::char32;
	#line 391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	ADV_CHECK_INTERFACE(IAbstractComparable, IAbstractComparable);
	#line 392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	ASTRUMSTD_API auto _operator_lt_eq_gt_mul(__extension_Char_391_char const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32;
	#line 391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(__extension_Char_391_char, IAbstractComparable, IAbstractComparable, __extension_Char_391_char);
	} namespace System{
using __extensions::_operator_lt_eq_gt_mul;

		} namespace __extensions { using namespace System;
#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	using __extension_Char_406_char = Builtin::char32;
	#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	ADV_CHECK_INTERFACE(IConvertible, IConvertible);
	#line 407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToBoolean(__extension_Char_406_char const& __this LIFETIMEBOUND) noexcept -> const bool;
	#line 408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToInt8(__extension_Char_406_char const& __this LIFETIMEBOUND)  -> const Builtin::i8;
	#line 414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToUInt8(__extension_Char_406_char const& __this LIFETIMEBOUND)  -> const Builtin::u8;
	#line 420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToInt16(__extension_Char_406_char const& __this LIFETIMEBOUND)  -> const Builtin::i16;
	#line 426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToUInt16(__extension_Char_406_char const& __this LIFETIMEBOUND)  -> const Builtin::u16;
	#line 432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToInt32(__extension_Char_406_char const& __this LIFETIMEBOUND)  -> const Builtin::i32;
	#line 438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToUInt32(__extension_Char_406_char const& __this LIFETIMEBOUND) noexcept -> const Builtin::u32;
	#line 439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToInt64(__extension_Char_406_char const& __this LIFETIMEBOUND) noexcept -> const Builtin::i64;
	#line 440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToUInt64(__extension_Char_406_char const& __this LIFETIMEBOUND) noexcept -> const Builtin::u64;
	#line 441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToInt128(__extension_Char_406_char const& __this LIFETIMEBOUND) noexcept -> const Builtin::i128;
	#line 442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToUInt128(__extension_Char_406_char const& __this LIFETIMEBOUND) noexcept -> const Builtin::u128;
	#line 443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToIsize(__extension_Char_406_char const& __this LIFETIMEBOUND)  -> const Builtin::isize;
	#line 451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToUsize(__extension_Char_406_char const& __this LIFETIMEBOUND) noexcept -> const Builtin::usize;
	#line 452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToFloat32(__extension_Char_406_char const& __this LIFETIMEBOUND) noexcept -> const Builtin::f32;
	#line 453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToFloat64(__extension_Char_406_char const& __this LIFETIMEBOUND) noexcept -> const Builtin::f64;
	#line 454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToByte(__extension_Char_406_char const& __this LIFETIMEBOUND)  -> const Builtin::u8;
	#line 460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToChar(__extension_Char_406_char const& __this LIFETIMEBOUND) noexcept -> const Builtin::char32;
	#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(__extension_Char_406_char, IConvertible, IConvertible, __extension_Char_406_char);
	} namespace System{
using __extensions::ToBoolean;
using __extensions::ToInt8;
using __extensions::ToUInt8;
using __extensions::ToInt16;
using __extensions::ToUInt16;
using __extensions::ToInt32;
using __extensions::ToUInt32;
using __extensions::ToInt64;
using __extensions::ToUInt64;
using __extensions::ToInt128;
using __extensions::ToUInt128;
using __extensions::ToIsize;
using __extensions::ToUsize;
using __extensions::ToFloat32;
using __extensions::ToFloat64;
using __extensions::ToByte;
using __extensions::ToChar;

		} namespace __extensions { using namespace System;
#line 528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	using __extension_Char_528_u16 = Builtin::u16;
	#line 529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsHighSurrogate(__extension_Char_528_u16 const& __this ) -> const bool;
	#line 530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsLowSurrogate(__extension_Char_528_u16 const& __this ) -> const bool;
	#line 531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsSurrogate(__extension_Char_528_u16 const& __this ) -> const bool;
	} namespace System{
using __extensions::getIsHighSurrogate;
using __extensions::getIsLowSurrogate;
using __extensions::getIsSurrogate;

	//###############################################################################
//# Free function declarations
//###############################################################################
#line 485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	namespace __Char_Protected { inline constexpr auto HexDigitFromByte(Builtin::u32 c) noexcept -> const Builtin::i32; }
#line 513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	namespace __Char_Protected { inline constexpr auto GetLatin1UnicodeCategory(Builtin::u32 c)  -> const UnicodeCategory; }
#line 519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	namespace __Char_Protected { inline constexpr auto IsWhiteSpaceLatin1(Builtin::u32 c)  -> const bool; }
//###############################################################################
//# Global compile-time constants
//###############################################################################
#line 465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
namespace __Char_Protected { inline constexpr auto CharToHex = Builtin::ToInlineArray<Builtin::u8>({Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0x0)), Builtin::u8(Builtin::i32(0x1)), Builtin::u8(Builtin::i32(0x2)), Builtin::u8(Builtin::i32(0x3)), Builtin::u8(Builtin::i32(0x4)), Builtin::u8(Builtin::i32(0x5)), Builtin::u8(Builtin::i32(0x6)), Builtin::u8(Builtin::i32(0x7)), Builtin::u8(Builtin::i32(0x8)), Builtin::u8(Builtin::i32(0x9)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xA)), Builtin::u8(Builtin::i32(0xB)), Builtin::u8(Builtin::i32(0xC)), Builtin::u8(Builtin::i32(0xD)), Builtin::u8(Builtin::i32(0xE)), Builtin::u8(Builtin::i32(0xF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xa)), Builtin::u8(Builtin::i32(0xb)), Builtin::u8(Builtin::i32(0xc)), Builtin::u8(Builtin::i32(0xd)), Builtin::u8(Builtin::i32(0xe)), Builtin::u8(Builtin::i32(0xf)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF)), Builtin::u8(Builtin::i32(0xFF))}); }
#line 488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
namespace __Char_Protected { inline constexpr auto Latin1CharInfo = Builtin::ToInlineArray<Builtin::u8>({Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x8E)), Builtin::u8(Builtin::i32(0x8E)), Builtin::u8(Builtin::i32(0x8E)), Builtin::u8(Builtin::i32(0x8E)), Builtin::u8(Builtin::i32(0x8E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x8B)), Builtin::u8(Builtin::i32(0x18)), Builtin::u8(Builtin::i32(0x18)), Builtin::u8(Builtin::i32(0x18)), Builtin::u8(Builtin::i32(0x1A)), Builtin::u8(Builtin::i32(0x18)), Builtin::u8(Builtin::i32(0x18)), Builtin::u8(Builtin::i32(0x18)), Builtin::u8(Builtin::i32(0x14)), Builtin::u8(Builtin::i32(0x15)), Builtin::u8(Builtin::i32(0x18)), Builtin::u8(Builtin::i32(0x19)), Builtin::u8(Builtin::i32(0x18)), Builtin::u8(Builtin::i32(0x13)), Builtin::u8(Builtin::i32(0x18)), Builtin::u8(Builtin::i32(0x18)), Builtin::u8(Builtin::i32(0x08)), Builtin::u8(Builtin::i32(0x08)), Builtin::u8(Builtin::i32(0x08)), Builtin::u8(Builtin::i32(0x08)), Builtin::u8(Builtin::i32(0x08)), Builtin::u8(Builtin::i32(0x08)), Builtin::u8(Builtin::i32(0x08)), Builtin::u8(Builtin::i32(0x08)), Builtin::u8(Builtin::i32(0x08)), Builtin::u8(Builtin::i32(0x08)), Builtin::u8(Builtin::i32(0x18)), Builtin::u8(Builtin::i32(0x18)), Builtin::u8(Builtin::i32(0x19)), Builtin::u8(Builtin::i32(0x19)), Builtin::u8(Builtin::i32(0x19)), Builtin::u8(Builtin::i32(0x18)), Builtin::u8(Builtin::i32(0x18)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x14)), Builtin::u8(Builtin::i32(0x18)), Builtin::u8(Builtin::i32(0x15)), Builtin::u8(Builtin::i32(0x1B)), Builtin::u8(Builtin::i32(0x12)), Builtin::u8(Builtin::i32(0x1B)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x14)), Builtin::u8(Builtin::i32(0x19)), Builtin::u8(Builtin::i32(0x15)), Builtin::u8(Builtin::i32(0x19)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x8E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x0E)), Builtin::u8(Builtin::i32(0x8B)), Builtin::u8(Builtin::i32(0x18)), Builtin::u8(Builtin::i32(0x1A)), Builtin::u8(Builtin::i32(0x1A)), Builtin::u8(Builtin::i32(0x1A)), Builtin::u8(Builtin::i32(0x1A)), Builtin::u8(Builtin::i32(0x1C)), Builtin::u8(Builtin::i32(0x18)), Builtin::u8(Builtin::i32(0x1B)), Builtin::u8(Builtin::i32(0x1C)), Builtin::u8(Builtin::i32(0x04)), Builtin::u8(Builtin::i32(0x16)), Builtin::u8(Builtin::i32(0x19)), Builtin::u8(Builtin::i32(0x0F)), Builtin::u8(Builtin::i32(0x1C)), Builtin::u8(Builtin::i32(0x1B)), Builtin::u8(Builtin::i32(0x1C)), Builtin::u8(Builtin::i32(0x19)), Builtin::u8(Builtin::i32(0x0A)), Builtin::u8(Builtin::i32(0x0A)), Builtin::u8(Builtin::i32(0x1B)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x18)), Builtin::u8(Builtin::i32(0x18)), Builtin::u8(Builtin::i32(0x1B)), Builtin::u8(Builtin::i32(0x0A)), Builtin::u8(Builtin::i32(0x04)), Builtin::u8(Builtin::i32(0x17)), Builtin::u8(Builtin::i32(0x0A)), Builtin::u8(Builtin::i32(0x0A)), Builtin::u8(Builtin::i32(0x0A)), Builtin::u8(Builtin::i32(0x18)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x19)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x40)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x19)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21)), Builtin::u8(Builtin::i32(0x21))}); }
#line 525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
namespace __Char_Protected { inline constexpr UIntRange32 HighSurrogateRange = System::Range<Builtin::Auto<decltype(Builtin::u32(0xdc00U))>, false>(Builtin::u32(0xd800U), Builtin::u32(0xdc00U)); }
#line 526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
namespace __Char_Protected { inline constexpr UIntRange32 LowSurrogateRange = System::Range<Builtin::Auto<decltype(Builtin::u32(0xe000U))>, false>(Builtin::u32(0xdc00U), Builtin::u32(0xe000U)); }
//###############################################################################
//# Function definitions
//###############################################################################

namespace __Char_Protected {
		#line 485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		inline constexpr auto HexDigitFromByte(Builtin::u32 c) noexcept -> const Builtin::i32
		{
			#line 486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			ADV_EXPRESSION_BODY((c <=> ADV_UPCS(Length)(__Char_Protected::CharToHex.__ref())) >= 0 ? Builtin::i32(0xFF) : ADV_UFCS(_operator_subscript)(__Char_Protected::CharToHex.__ref(), c)); 
		}
	}
namespace __Char_Protected {
		#line 513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		inline constexpr auto GetLatin1UnicodeCategory(Builtin::u32 c)  -> const UnicodeCategory
		{
			#line 515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			ADV_ASSERT(((c <=> Builtin::u32(0xFFU)) <= 0), "c<=0xFFu");
			#line 516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			return ADV_USFCS((UnicodeCategory), FromValue)(ADV_UFCS(_operator_subscript)(__Char_Protected::Latin1CharInfo.__ref(), c) & Builtin::u32(0x1FU));
		}
	}
namespace __Char_Protected {
		#line 519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		inline constexpr auto IsWhiteSpaceLatin1(Builtin::u32 c)  -> const bool
		{
			#line 521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			ADV_ASSERT(((c <=> Builtin::u32(0xFFU)) <= 0), "c<=0xFFu");
			#line 522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			return (ADV_UFCS(_operator_subscript)(__Char_Protected::Latin1CharInfo.__ref(), c) & Builtin::u32(0x80U)) != Builtin::i32(0);
		}
	}
} namespace __extensions { using namespace System;
#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto __static_FromDigit<__extension_Char_15_byte>::get(Builtin::u32 num, Builtin::u32 radix)  -> const Builtin::Nullable<__extension_Char_15_byte>
	{
		#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if ((radix <=> Builtin::u32(36U)) > 0) {
			#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if ((num <=> radix) < 0) {
			#line 70 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			if ((num <=> Builtin::u32(10U)) < 0) {
				#line 71 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
				return Builtin::u8('0') + num;
			} else {
				#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
				{
					#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
					return Builtin::u8('a') + num - Builtin::i32(10);
				}
			}
		}
		#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAscii(__extension_Char_15_byte const& __this ) -> const bool
	{
		#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY((__this <=> Builtin::u8(0x7FU)) <= 0); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiDigit(__extension_Char_15_byte const& __this ) -> const bool
	{
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(Builtin::u8('9'))>, true>(Builtin::u8('0'), Builtin::u8('9')), __this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsDigit(__extension_Char_15_byte const& __this ) -> const bool
	{
		#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAsciiDigit)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsBinDigit(__extension_Char_15_byte const& __this ) -> const bool
	{
		#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(Builtin::u8('2'))>, false>(Builtin::u8('0'), Builtin::u8('2')), __this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsOctDigit(__extension_Char_15_byte const& __this ) -> const bool
	{
		#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(Builtin::u8('8'))>, false>(Builtin::u8('0'), Builtin::u8('8')), __this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsHexDigit(__extension_Char_15_byte const& __this ) -> const bool
	{
		#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if constexpr (Builtin::Is64BitTarget()) {
			#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			const Builtin::Auto<decltype(Builtin::u64{__this} - Builtin::u8('0'))> i = Builtin::u64{__this} - Builtin::u8('0'); 
			#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			const Builtin::Auto<decltype(Builtin::u64(18428868213665201664ULL) << (Builtin::Cast<true, Builtin::i32>(i)))> shift = Builtin::u64(18428868213665201664ULL) << (Builtin::Cast<true, Builtin::i32>(i)); 
			#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_sub_mod)(i, Builtin::i32(64)))> mask = ADV_UFCS(_operator_sub_mod)(i, Builtin::i32(64)); 
			#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			return (ADV_UFCS(NarrowToInt64)((shift & mask).__ref()) <=> Builtin::i32(0)) < 0;
		} else {
			#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			{
				#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
				return __Char_Protected::HexDigitFromByte(__this) != Builtin::i32(0xFF);
			}
		}
		return {};
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsHexDigitUpper(__extension_Char_15_byte const& __this ) -> const bool
	{
		#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY((ADV_UFCS(NarrowToUInt32)((Builtin::i32{__this} - Builtin::u8('0')).__ref()) <=> Builtin::i32(9)) <= 0 || (ADV_UFCS(NarrowToUInt32)((Builtin::i32{__this} - Builtin::u8('A')).__ref()) <=> (Builtin::u8('F') - Builtin::u8('A'))) <= 0); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsHexDigitLower(__extension_Char_15_byte const& __this ) -> const bool
	{
		#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY((ADV_UFCS(NarrowToUInt32)((Builtin::i32{__this} - Builtin::u8('0')).__ref()) <=> Builtin::i32(9)) <= 0 || (ADV_UFCS(NarrowToUInt32)((Builtin::i32{__this} - Builtin::u8('a')).__ref()) <=> (Builtin::u8('f') - Builtin::u8('a'))) <= 0); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiLetter(__extension_Char_15_byte const& __this ) -> const bool
	{
		#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY((ADV_UFCS(NarrowToUInt32)((Builtin::i32{__this | Builtin::u8(0x20U)} - Builtin::u8('a')).__ref()) <=> Builtin::u8('z') - Builtin::u8('a')) <= 0); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsLetter(__extension_Char_15_byte const& __this ) -> const bool
	{
		#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAsciiLetter)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiLetterUpper(__extension_Char_15_byte const& __this ) -> const bool
	{
		#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(Builtin::u8('Z'))>, true>(Builtin::u8('A'), Builtin::u8('Z')), __this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsLetterUpper(__extension_Char_15_byte const& __this ) -> const bool
	{
		#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAsciiLetterUpper)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiLetterLower(__extension_Char_15_byte const& __this ) -> const bool
	{
		#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(Builtin::u8('z'))>, true>(Builtin::u8('a'), Builtin::u8('z')), __this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsLetterLower(__extension_Char_15_byte const& __this ) -> const bool
	{
		#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAsciiLetterLower)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiLetterOrDigit(__extension_Char_15_byte const& __this ) -> const bool
	{
		#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAsciiLetter)(__this.__ref()) || ADV_UPCS(IsAsciiDigit)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsLetterOrDigit(__extension_Char_15_byte const& __this ) -> const bool
	{
		#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAsciiLetterOrDigit)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsIdentifierChar(__extension_Char_15_byte const& __this ) -> const bool
	{
		#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAsciiLetterOrDigit)(__this.__ref()) || __this == Builtin::u8('_')); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiControl(__extension_Char_15_byte const& __this ) -> const bool
	{
		#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY((__this <=> Builtin::u8(0x1FU)) <= 0); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsControl(__extension_Char_15_byte const& __this ) -> const bool
	{
		#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(((ADV_UFCS(_operator_and_not)((Builtin::u32{__this} + Builtin::i32(1)), Builtin::u32(0x80U))) <=> Builtin::u32(0x20U)) <= 0); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiPunctuation(__extension_Char_15_byte const& __this ) -> const bool
	{
		#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAscii)(__this.__ref()) && ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(ADV_UPCS(Value)(ADV_USPCS(OtherPunctuation, UnicodeCategory)().__ref()))>, true>(ADV_UPCS(Value)(ADV_USPCS(ConnectorPunctuation, UnicodeCategory)().__ref()), ADV_UPCS(Value)(ADV_USPCS(OtherPunctuation, UnicodeCategory)().__ref())), ADV_UPCS(Value)(__Char_Protected::GetLatin1UnicodeCategory(__this).__ref()))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsPunctuation(__extension_Char_15_byte const& __this ) -> const bool
	{
		#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAsciiPunctuation)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiSeparator(__extension_Char_15_byte const& __this ) -> const bool
	{
		#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(__this == Builtin::u32(0x20U)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsSeparator(__extension_Char_15_byte const& __this ) -> const bool
	{
		#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAsciiSeparator)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiSymbol(__extension_Char_15_byte const& __this ) -> const bool
	{
		#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAscii)(__this.__ref()) && ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(ADV_UPCS(Value)(ADV_USPCS(OtherSymbol, UnicodeCategory)().__ref()))>, true>(ADV_UPCS(Value)(ADV_USPCS(MathSymbol, UnicodeCategory)().__ref()), ADV_UPCS(Value)(ADV_USPCS(OtherSymbol, UnicodeCategory)().__ref())), ADV_UPCS(Value)(__Char_Protected::GetLatin1UnicodeCategory(__this).__ref()))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsSymbol(__extension_Char_15_byte const& __this ) -> const bool
	{
		#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAsciiSymbol)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiWhiteSpace(__extension_Char_15_byte const& __this ) -> const bool
	{
		#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAscii)(__this.__ref()) && __Char_Protected::IsWhiteSpaceLatin1(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsWhiteSpace(__extension_Char_15_byte const& __this ) -> const bool
	{
		#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAsciiWhiteSpace)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiPrintable(__extension_Char_15_byte const& __this ) -> const bool
	{
		#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(Builtin::u8('~'))>, true>(Builtin::u8('!'), Builtin::u8('~')), __this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getToLower(__extension_Char_15_byte const& __this ) -> const __extension_Char_15_byte
	{
		#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAsciiLetterUpper)(__this.__ref()) ? (__this + Builtin::u8(32U)) : __this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getToUpper(__extension_Char_15_byte const& __this ) -> const __extension_Char_15_byte
	{
		#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAsciiLetterLower)(__this.__ref()) ? (__this - Builtin::u8(32U)) : __this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getToAsciiChar(__extension_Char_15_byte const& __this ) -> const Builtin::Nullable<AsciiChar>
	{
		#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if (ADV_UPCS(IsAscii)(__this.__ref())) {
			#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			return ADV_USFCS((AsciiChar), FromValue)(__this);
		}
		#line 84 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return nullptr;
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto __static_getAscii<__extension_Char_15_byte>::get() -> const ByteClosedRange
	{
		#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(System::Range<Builtin::Auto<decltype(Builtin::u8(0x7FU))>, true>(Builtin::u8(0U), Builtin::u8(0x7FU))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto __static_getDigits<__extension_Char_15_byte>::get() -> const ByteClosedRange
	{
		#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(System::Range<Builtin::Auto<decltype(Builtin::u8('9'))>, true>(Builtin::u8('0'), Builtin::u8('9'))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto __static_getUppercaseLetters<__extension_Char_15_byte>::get() -> const ByteClosedRange
	{
		#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(System::Range<Builtin::Auto<decltype(Builtin::u8('Z'))>, true>(Builtin::u8('A'), Builtin::u8('Z'))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto __static_getLowercaseLetters<__extension_Char_15_byte>::get() -> const ByteClosedRange
	{
		#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(System::Range<Builtin::Auto<decltype(Builtin::u8('z'))>, true>(Builtin::u8('a'), Builtin::u8('z'))); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	
} namespace __extensions { using namespace System;
#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto __static_FromScalar<__extension_Char_93_char>::get(Builtin::u32 scalar)  -> const Builtin::Nullable<__extension_Char_93_char>
	{
		#line 112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if ((((scalar ^ Builtin::i32(0xD800)) - Builtin::i32(0x800)) <=> Builtin::i32(0x110000) - Builtin::i32(0x80)) < 0) {
			#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			return __extension_Char_93_char{scalar};
		}
		#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto __static_FromDigit<__extension_Char_93_char>::get(Builtin::u32 num, Builtin::u32 radix)  -> const Builtin::Nullable<__extension_Char_93_char>
	{
		#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if ((radix <=> Builtin::u32(36U)) > 0) {
			#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if ((num <=> radix) < 0) {
			#line 124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			if ((num <=> Builtin::u32(10U)) < 0) {
				#line 125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
				return Builtin::u8('0') + num;
			} else {
				#line 126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
				{
					#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
					return Builtin::u8('a') + num - Builtin::i32(10);
				}
			}
		}
		#line 130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return nullptr;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto __static_FromUtf16Surrogate<__extension_Char_93_char>::get(Builtin::u16 highSurrogate, Builtin::u16 lowSurrogate)  -> const typename __extension_Char_93_char
	{
		#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		const Builtin::Auto<decltype(Builtin::u32{highSurrogate} - ADV_UPCS(Start)(__Char_Protected::HighSurrogateRange.__ref()))> highOffset = Builtin::u32{highSurrogate} - ADV_UPCS(Start)(__Char_Protected::HighSurrogateRange.__ref()); 
		#line 140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		const Builtin::Auto<decltype(Builtin::u32{lowSurrogate} - ADV_UPCS(Start)(__Char_Protected::LowSurrogateRange.__ref()))> lowOffset = Builtin::u32{lowSurrogate} - ADV_UPCS(Start)(__Char_Protected::LowSurrogateRange.__ref()); 
		#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if (((highOffset | lowOffset) <=> Builtin::u32(0x3FFU)) > 0) {
			#line 142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return (*(ADV_USFCS((Builtin::char32), FromScalar)((highOffset << Builtin::i32(10)) + lowOffset + (Builtin::i32(0x40) << Builtin::i32(10)))));
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto __static_getReplacementChar<__extension_Char_93_char>::get() -> const __extension_Char_93_char
	{
		#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(Builtin::char32(U'\uFFFD')); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto __static_getUnicodeVersion<__extension_Char_93_char>::get() -> const std::tuple<Builtin::u8, Builtin::u8, Builtin::u8>
	{
		#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(std::make_tuple(Builtin::u8(16U), Builtin::u8(0U), Builtin::u8(0U))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto __static_getMaxUtf8Length<__extension_Char_93_char>::get() -> const Builtin::usize
	{
		#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(4U)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto __static_getMaxUtf16Length<__extension_Char_93_char>::get() -> const Builtin::usize
	{
		#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(2U)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getAsAscii(__extension_Char_93_char const& __this ) -> const Builtin::Nullable<AsciiChar>
	{
		#line 150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if (ADV_UPCS(IsAscii)(__this.__ref())) {
			#line 151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			return ADV_USFCS((AsciiChar), FromValue)(Builtin::Cast<true, Builtin::u8>(__this));
		}
		#line 153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return nullptr;
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getHashCode(__extension_Char_93_char const& __this ) -> const Builtin::u64
	{
		#line 156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u64>(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAscii(__extension_Char_93_char const& __this ) -> const bool
	{
		#line 159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY((__this <=> Builtin::char32(U'\u007F')) <= 0); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsLatin1(__extension_Char_93_char const& __this ) -> const bool
	{
		#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY((__this <=> Builtin::char32(U'\u00FF')) <= 0); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsBmp(__extension_Char_93_char const& __this ) -> const bool
	{
		#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY((__this <=> Builtin::char32(U'\uFFFF')) <= 0); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getPlane(__extension_Char_93_char const& __this ) -> const Builtin::u32
	{
		#line 164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY((Builtin::Cast<true, Builtin::u32>(__this)) >> Builtin::i32(16)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getUtf16Length(__extension_Char_93_char const& __this ) -> const Builtin::u32
	{
		#line 168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		Builtin::Auto<decltype(Builtin::Cast<true, Builtin::u32>(__this))> result = Builtin::Cast<true, Builtin::u32>(__this); 
		#line 169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_UFCS(_operator_sub_mod_eq)(result, Builtin::u32(0x10000U));
		#line 170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_UFCS(_operator_add_mod_eq)(result, (Builtin::u32(2U) << Builtin::i32(24)));
		#line 171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		result >>= Builtin::i32(24);
		#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT(((result <=> ADV_USPCS(MaxUtf16Length, __extension_Char_93_char)()) <= 0), "result<=self.MaxUtf16Length");
		#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return result;
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getUtf8Length(__extension_Char_93_char const& __this ) -> const Builtin::u32
	{
		#line 178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		Builtin::Auto<decltype(Builtin::Cast<true, Builtin::u32>(__this))> result = Builtin::Cast<true, Builtin::u32>(__this); 
		#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		const Builtin::Auto<decltype((ADV_UFCS(_operator_sub_mod)(result, Builtin::u32(0x800U))) >> Builtin::i32(31))> a = (ADV_UFCS(_operator_sub_mod)(result, Builtin::u32(0x800U))) >> Builtin::i32(31); 
		#line 180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		result ^= Builtin::u32(0xF800U);
		#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_UFCS(_operator_sub_mod_eq)(result, Builtin::u32(0xF880U));
		#line 182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_UFCS(_operator_add_mod_eq)(result, (Builtin::u32(4U) << Builtin::i32(24)));
		#line 183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		result >>= Builtin::i32(24);
		#line 184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		result += a * Builtin::i32(2);
		#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT(((result <=> ADV_USPCS(MaxUtf8Length, __extension_Char_93_char)()) <= 0), "result<=self.MaxUtf8Length");
		#line 186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return result;
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getCodepointValue(__extension_Char_93_char const& __this ) -> const Builtin::u32
	{
		#line 189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, Builtin::u32>(__this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsValid(__extension_Char_93_char const& __this ) -> const bool
	{
		#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY((ADV_UPCS(CodepointValue)(__this.__ref()) <=> Builtin::u32(0x10FFFFU)) <= 0); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getCharUnicodeCategory(__extension_Char_93_char const& __this ) -> const UnicodeCategory
	{
		#line 196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if (ADV_UPCS(IsLatin1)(__this.__ref())) {
			#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			return __Char_Protected::GetLatin1UnicodeCategory(Builtin::Cast<true, Builtin::u32>(__this));
		}
		#line 199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_ASSERT((ADV_UPCS(IsValid)(__this.__ref())), "this.IsValid");
		#line 200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return ADV_USFCS((CharUnicodeInfo), GetUnicodeCategory)(Builtin::Cast<true, Builtin::u32>(__this));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getBidiCategory(__extension_Char_93_char const& __this ) -> const StrongBidiCategory
	{
		#line 205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((CharUnicodeInfo), GetStrongBidiCategory)(Builtin::Cast<true, Builtin::u32>(__this))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getNumericValue(__extension_Char_93_char const& __this ) -> const Builtin::Nullable<Builtin::f64>
	{
		#line 211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if (ADV_UPCS(IsAscii)(__this.__ref())) {
			#line 212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_sub_mod)(ADV_UPCS(CodepointValue)(__this.__ref()), Builtin::u8('0')))> baseNum = ADV_UFCS(_operator_sub_mod)(ADV_UPCS(CodepointValue)(__this.__ref()), Builtin::u8('0')); 
			#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			if ((baseNum <=> Builtin::i32(9)) <= 0) {
				#line 214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
				return baseNum;
			}
			#line 216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			return nullptr;
		}
		#line 218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		const Builtin::Auto<decltype(ADV_USFCS((CharUnicodeInfo), GetNumericValue)(Builtin::Cast<true, Builtin::u32>(__this)))> num = ADV_USFCS((CharUnicodeInfo), GetNumericValue)(Builtin::Cast<true, Builtin::u32>(__this)); 
		#line 219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if (num != ADV_USPCS(MinusOne, Builtin::f64)()) {
			#line 220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			return num;
		}
		#line 222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return nullptr;
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiControl(__extension_Char_93_char const& __this ) -> const bool
	{
		#line 226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(Builtin::char32(U'\u001F'))>, true>(Builtin::char32(U'\0'), Builtin::char32(U'\u001F')), __this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsControl(__extension_Char_93_char const& __this ) -> const bool
	{
		#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(((ADV_UFCS(_operator_and_not)((Builtin::u32{__this} + Builtin::i32(1)), Builtin::u32(0x80U))) <=> Builtin::u32(0x20U)) <= 0); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiDigit(__extension_Char_93_char const& __this ) -> const bool
	{
		#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAscii)(__this.__ref()) && ADV_UPCS(IsAsciiDigit)(Builtin::u8{__this}.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getIsDigit(__extension_Char_93_char const& __this ) -> const bool
	{
		#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if (ADV_UPCS(IsAscii)(__this.__ref())) {
			#line 235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			return ADV_UPCS(IsAsciiDigit)(Builtin::u8{__this}.__ref());
		}
		#line 237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return ADV_USFCS((CharUnicodeInfo), GetUnicodeCategory)(Builtin::Cast<true, Builtin::u32>(__this)) == ADV_USPCS(DecimalDigitNumber, UnicodeCategory)();
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsBinDigit(__extension_Char_93_char const& __this ) -> const bool
	{
		#line 240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAscii)(__this.__ref()) && ADV_UPCS(IsBinDigit)(Builtin::u8{__this}.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsOctDigit(__extension_Char_93_char const& __this ) -> const bool
	{
		#line 242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAscii)(__this.__ref()) && ADV_UPCS(IsOctDigit)(Builtin::u8{__this}.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsHexDigit(__extension_Char_93_char const& __this ) -> const bool
	{
		#line 244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAscii)(__this.__ref()) && ADV_UPCS(IsHexDigit)(Builtin::u8{__this}.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsHexDigitUpper(__extension_Char_93_char const& __this ) -> const bool
	{
		#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAscii)(__this.__ref()) && ADV_UPCS(IsHexDigitUpper)(Builtin::u8{__this}.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsHexDigitLower(__extension_Char_93_char const& __this ) -> const bool
	{
		#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAscii)(__this.__ref()) && ADV_UPCS(IsHexDigitLower)(Builtin::u8{__this}.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiLetter(__extension_Char_93_char const& __this ) -> const bool
	{
		#line 247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAscii)(__this.__ref()) && ADV_UPCS(IsAsciiLetter)(Builtin::u8{__this}.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getIsLetter(__extension_Char_93_char const& __this ) -> const bool
	{
		#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if (ADV_UPCS(IsAscii)(__this.__ref())) {
			#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			return ADV_UPCS(IsAsciiLetter)(Builtin::u8{__this}.__ref());
		}
		#line 254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(ADV_UPCS(Value)(ADV_USPCS(OtherLetter, UnicodeCategory)().__ref()))>, true>(ADV_UPCS(Value)(ADV_USPCS(UppercaseLetter, UnicodeCategory)().__ref()), ADV_UPCS(Value)(ADV_USPCS(OtherLetter, UnicodeCategory)().__ref())), ADV_UPCS(Value)(ADV_USFCS((CharUnicodeInfo), GetUnicodeCategory)(Builtin::Cast<true, Builtin::u32>(__this)).__ref()));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiLetterUpper(__extension_Char_93_char const& __this ) -> const bool
	{
		#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAscii)(__this.__ref()) && ADV_UPCS(IsAsciiLetterUpper)(Builtin::u8{__this}.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getIsLetterUpper(__extension_Char_93_char const& __this ) -> const bool
	{
		#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if (ADV_UPCS(IsAscii)(__this.__ref())) {
			#line 262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			return ADV_UPCS(IsAsciiLetterUpper)(Builtin::u8{__this}.__ref());
		}
		#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return ADV_USFCS((CharUnicodeInfo), GetUnicodeCategory)(Builtin::Cast<true, Builtin::u32>(__this)) == ADV_USPCS(UppercaseLetter, UnicodeCategory)();
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiLetterLower(__extension_Char_93_char const& __this ) -> const bool
	{
		#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAscii)(__this.__ref()) && ADV_UPCS(IsAsciiLetterLower)(Builtin::u8{__this}.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getIsLetterLower(__extension_Char_93_char const& __this ) -> const bool
	{
		#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if (ADV_UPCS(IsAscii)(__this.__ref())) {
			#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			return ADV_UPCS(IsAsciiLetterLower)(Builtin::u8{__this}.__ref());
		}
		#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return ADV_USFCS((CharUnicodeInfo), GetUnicodeCategory)(Builtin::Cast<true, Builtin::u32>(__this)) == ADV_USPCS(LowercaseLetter, UnicodeCategory)();
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getIsLetterTitle(__extension_Char_93_char const& __this ) -> const bool
	{
		#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((CharUnicodeInfo), GetUnicodeCategory)(Builtin::Cast<true, Builtin::u32>(__this)) == ADV_USPCS(TitlecaseLetter, UnicodeCategory)()); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiLetterOrDigit(__extension_Char_93_char const& __this ) -> const bool
	{
		#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAscii)(__this.__ref()) && ADV_UPCS(IsAsciiLetterOrDigit)(Builtin::u8{__this}.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getIsLetterOrDigit(__extension_Char_93_char const& __this ) -> const bool
	{
		#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if (ADV_UPCS(IsAscii)(__this.__ref())) {
			#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			return ADV_UPCS(IsAsciiLetterOrDigit)(Builtin::u8{__this}.__ref());
		}
		#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		const Builtin::Auto<decltype(ADV_USFCS((CharUnicodeInfo), GetUnicodeCategory)(Builtin::Cast<true, Builtin::u32>(__this)))> category = ADV_USFCS((CharUnicodeInfo), GetUnicodeCategory)(Builtin::Cast<true, Builtin::u32>(__this)); 
		#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(ADV_UPCS(Value)(ADV_USPCS(OtherLetter, UnicodeCategory)().__ref()))>, true>(ADV_UPCS(Value)(ADV_USPCS(UppercaseLetter, UnicodeCategory)().__ref()), ADV_UPCS(Value)(ADV_USPCS(OtherLetter, UnicodeCategory)().__ref())), ADV_UPCS(Value)(category.__ref())) || category == ADV_USPCS(DecimalDigitNumber, UnicodeCategory)();
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsIdentifierChar(__extension_Char_93_char const& __this ) -> const bool
	{
		#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAsciiLetterOrDigit)(__this.__ref()) || __this == Builtin::char32(U'_')); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiPunctuation(__extension_Char_93_char const& __this ) -> const bool
	{
		#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAscii)(__this.__ref()) && ADV_UPCS(IsAsciiPunctuation)(Builtin::u8{__this}.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getIsPunctuation(__extension_Char_93_char const& __this ) -> const bool
	{
		#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(ADV_UPCS(Value)(ADV_USPCS(OtherPunctuation, UnicodeCategory)().__ref()))>, true>(ADV_UPCS(Value)(ADV_USPCS(ConnectorPunctuation, UnicodeCategory)().__ref()), ADV_UPCS(Value)(ADV_USPCS(OtherPunctuation, UnicodeCategory)().__ref())), ADV_UPCS(Value)(ADV_USFCS((CharUnicodeInfo), GetUnicodeCategory)(Builtin::Cast<true, Builtin::u32>(__this)).__ref()))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiSeparator(__extension_Char_93_char const& __this ) -> const bool
	{
		#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAscii)(__this.__ref()) && ADV_UPCS(IsAsciiSeparator)(Builtin::u8{__this}.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getIsSeparator(__extension_Char_93_char const& __this ) -> const bool
	{
		#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(ADV_UPCS(Value)(ADV_USPCS(ParagraphSeparator, UnicodeCategory)().__ref()))>, true>(ADV_UPCS(Value)(ADV_USPCS(SpaceSeparator, UnicodeCategory)().__ref()), ADV_UPCS(Value)(ADV_USPCS(ParagraphSeparator, UnicodeCategory)().__ref())), ADV_UPCS(Value)(ADV_USFCS((CharUnicodeInfo), GetUnicodeCategory)(Builtin::Cast<true, Builtin::u32>(__this)).__ref()))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiSymbol(__extension_Char_93_char const& __this ) -> const bool
	{
		#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAscii)(__this.__ref()) && ADV_UPCS(IsAsciiSymbol)(Builtin::u8{__this}.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getIsSymbol(__extension_Char_93_char const& __this ) -> const bool
	{
		#line 298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(ADV_UPCS(Value)(ADV_USPCS(OtherSymbol, UnicodeCategory)().__ref()))>, true>(ADV_UPCS(Value)(ADV_USPCS(MathSymbol, UnicodeCategory)().__ref()), ADV_UPCS(Value)(ADV_USPCS(OtherSymbol, UnicodeCategory)().__ref())), ADV_UPCS(Value)(ADV_USFCS((CharUnicodeInfo), GetUnicodeCategory)(Builtin::Cast<true, Builtin::u32>(__this)).__ref()))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiWhiteSpace(__extension_Char_93_char const& __this ) -> const bool
	{
		#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAscii)(__this.__ref()) && ADV_UPCS(IsAsciiWhiteSpace)(Builtin::u8{__this}.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getIsWhiteSpace(__extension_Char_93_char const& __this ) -> const bool
	{
		#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if (ADV_UPCS(IsAscii)(__this.__ref())) {
			#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			return ADV_UPCS(IsAsciiWhiteSpace)(Builtin::u8{__this}.__ref());
		}
		#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return ADV_UPCS(IsBmp)(__this.__ref()) && ADV_USFCS((CharUnicodeInfo), GetIsWhitespace)(Builtin::Cast<true, Builtin::u32>(__this));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsAsciiPrintable(__extension_Char_93_char const& __this ) -> const bool
	{
		#line 308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(Builtin::char32(U'~'))>, true>(Builtin::char32(U'!'), Builtin::char32(U'~')), __this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getToLowerAscii(__extension_Char_93_char const& __this ) -> const __extension_Char_93_char
	{
		#line 309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAsciiLetterUpper)(__this.__ref()) ? __extension_Char_93_char{ADV_UPCS(CodepointValue)(__this.__ref()) + Builtin::u32(32U)} : __this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getToUpperAscii(__extension_Char_93_char const& __this ) -> const __extension_Char_93_char
	{
		#line 310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAsciiLetterLower)(__this.__ref()) ? __extension_Char_93_char{ADV_UPCS(CodepointValue)(__this.__ref()) - Builtin::u32(32U)} : __this); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getToUpper(__extension_Char_93_char const& __this ) -> const __extension_Char_93_char
	{
		#line 314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if (ADV_UPCS(IsAscii)(__this.__ref())) {
			#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			return ADV_UPCS(ToUpperAscii)(__this.__ref());
		}
		#line 320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return Builtin::BitCast<__extension_Char_93_char>(ADV_USFCS((CharUnicodeInfo), ToUpperNeutral)(Builtin::Cast<true, Builtin::u32>(__this)));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getToUpperInvariant(__extension_Char_93_char const& __this ) -> const __extension_Char_93_char
	{
		#line 325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if (ADV_UPCS(IsAscii)(__this.__ref())) {
			#line 326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			return ADV_UPCS(ToUpperAscii)(__this.__ref());
		}
		#line 328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return Builtin::BitCast<__extension_Char_93_char>(ADV_USFCS((CharUnicodeInfo), ToUpperNeutral)(Builtin::Cast<true, Builtin::u32>(__this)));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getToLower(__extension_Char_93_char const& __this ) -> const __extension_Char_93_char
	{
		#line 333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if (ADV_UPCS(IsAscii)(__this.__ref())) {
			#line 334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			return ADV_UPCS(ToLowerAscii)(__this.__ref());
		}
		#line 340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return Builtin::BitCast<__extension_Char_93_char>(ADV_USFCS((CharUnicodeInfo), ToLowerNeutral)(Builtin::Cast<true, Builtin::u32>(__this)));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline auto getToLowerInvariant(__extension_Char_93_char const& __this ) -> const __extension_Char_93_char
	{
		#line 345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if (ADV_UPCS(IsAscii)(__this.__ref())) {
			#line 346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			return ADV_UPCS(ToLowerAscii)(__this.__ref());
		}
		#line 348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return Builtin::BitCast<__extension_Char_93_char>(ADV_USFCS((CharUnicodeInfo), ToLowerNeutral)(Builtin::Cast<true, Builtin::u32>(__this)));
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	
} namespace __extensions { using namespace System;
#line 360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto __static_getMinValue<__extension_Char_359_char>::get() -> const __extension_Char_359_char
	{
		#line 360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(Builtin::char32(U'\0')); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto __static_getMaxValue<__extension_Char_359_char>::get() -> const __extension_Char_359_char
	{
		#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(Builtin::char32(U'\U0010FFFF')); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	
} namespace __extensions { using namespace System;
#line 365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto RangeStepForward(__extension_Char_364_char const& __this LIFETIMEBOUND, Builtin::usize steps)  -> const typename __extension_Char_364_char
	{
		#line 367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		constexpr Builtin::Auto<decltype(Builtin::u32(0xD800U))> LowSurrogateBound = Builtin::u32(0xD800U);
		#line 368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::u32>(__this))> start = Builtin::Cast<true, Builtin::u32>(__this); 
		#line 369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		Builtin::Auto<decltype(start + steps)> result = start + steps; 
		#line 370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if ((start <=> LowSurrogateBound) < 0 && (result <=> LowSurrogateBound) >= 0) {
			#line 371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			result += Builtin::u32(0x800U);
		}
		#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return __extension_Char_364_char{result};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto RangeStepBackward(__extension_Char_364_char const& __this LIFETIMEBOUND, Builtin::usize steps)  -> const typename __extension_Char_364_char
	{
		#line 378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		constexpr Builtin::Auto<decltype(Builtin::u32(0xE000U))> HighSurrogateBound = Builtin::u32(0xE000U);
		#line 379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::u32>(__this))> start = Builtin::Cast<true, Builtin::u32>(__this); 
		#line 380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		Builtin::Auto<decltype(start - steps)> result = start - steps; 
		#line 381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if ((start <=> HighSurrogateBound) < 0 && (result <=> HighSurrogateBound) >= 0) {
			#line 382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			result -= Builtin::u32(0x800U);
		}
		#line 385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return __extension_Char_364_char{result};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto __static_getAscii<__extension_Char_364_char>::get() -> const Range<Builtin::char32>
	{
		#line 387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(System::Range<Builtin::Auto<decltype(Builtin::char32(U'\u0080'))>, false>(Builtin::char32(U'\0'), Builtin::char32(U'\u0080'))); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	
} namespace __extensions { using namespace System;
#line 407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToBoolean(__extension_Char_406_char const& __this LIFETIMEBOUND) noexcept -> const bool
	{
		#line 407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(__this != Builtin::char32(U'\0')); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToInt8(__extension_Char_406_char const& __this LIFETIMEBOUND)  -> const Builtin::i8
	{
		#line 409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if ((ADV_UPCS(CodepointValue)(__this.__ref()) <=> Builtin::i32(0x7F)) > 0) {
			#line 410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return Builtin::Cast<true, Builtin::i8>(ADV_UPCS(CodepointValue)(__this.__ref()));
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToUInt8(__extension_Char_406_char const& __this LIFETIMEBOUND)  -> const Builtin::u8
	{
		#line 415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if ((ADV_UPCS(CodepointValue)(__this.__ref()) <=> Builtin::i32(0xFF)) > 0) {
			#line 416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return Builtin::Cast<true, Builtin::u8>(ADV_UPCS(CodepointValue)(__this.__ref()));
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToInt16(__extension_Char_406_char const& __this LIFETIMEBOUND)  -> const Builtin::i16
	{
		#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if ((ADV_UPCS(CodepointValue)(__this.__ref()) <=> Builtin::i32(0x7FFF)) > 0) {
			#line 422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return Builtin::Cast<true, Builtin::i16>(ADV_UPCS(CodepointValue)(__this.__ref()));
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToUInt16(__extension_Char_406_char const& __this LIFETIMEBOUND)  -> const Builtin::u16
	{
		#line 427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if ((ADV_UPCS(CodepointValue)(__this.__ref()) <=> Builtin::i32(0xFFFF)) > 0) {
			#line 428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return Builtin::Cast<true, Builtin::u16>(ADV_UPCS(CodepointValue)(__this.__ref()));
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToInt32(__extension_Char_406_char const& __this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if ((ADV_UPCS(CodepointValue)(__this.__ref()) <=> Builtin::i32(0x7FFFFFFF)) > 0) {
			#line 434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return Builtin::Cast<true, Builtin::i32>(ADV_UPCS(CodepointValue)(__this.__ref()));
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToUInt32(__extension_Char_406_char const& __this LIFETIMEBOUND) noexcept -> const Builtin::u32
	{
		#line 438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(CodepointValue)(__this.__ref())); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToInt64(__extension_Char_406_char const& __this LIFETIMEBOUND) noexcept -> const Builtin::i64
	{
		#line 439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(CodepointValue)(__this.__ref())); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToUInt64(__extension_Char_406_char const& __this LIFETIMEBOUND) noexcept -> const Builtin::u64
	{
		#line 440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(CodepointValue)(__this.__ref())); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToInt128(__extension_Char_406_char const& __this LIFETIMEBOUND) noexcept -> const Builtin::i128
	{
		#line 441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(CodepointValue)(__this.__ref())); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToUInt128(__extension_Char_406_char const& __this LIFETIMEBOUND) noexcept -> const Builtin::u128
	{
		#line 442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(CodepointValue)(__this.__ref())); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToIsize(__extension_Char_406_char const& __this LIFETIMEBOUND)  -> const Builtin::isize
	{
		#line 445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if constexpr (Builtin::usize(sizeof(Builtin::isize)) == Builtin::i32(32)) {
			#line 446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			return ADV_UFCS(ToInt32)(__this.__ref());
		} else {
			#line 447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			{
				#line 448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
				return ADV_UPCS(CodepointValue)(__this.__ref());
			}
		}
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToUsize(__extension_Char_406_char const& __this LIFETIMEBOUND) noexcept -> const Builtin::usize
	{
		#line 451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(CodepointValue)(__this.__ref())); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToFloat32(__extension_Char_406_char const& __this LIFETIMEBOUND) noexcept -> const Builtin::f32
	{
		#line 452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(CodepointValue)(__this.__ref())); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToFloat64(__extension_Char_406_char const& __this LIFETIMEBOUND) noexcept -> const Builtin::f64
	{
		#line 453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(CodepointValue)(__this.__ref())); 
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToByte(__extension_Char_406_char const& __this LIFETIMEBOUND)  -> const Builtin::u8
	{
		#line 455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		if ((ADV_UPCS(CodepointValue)(__this.__ref()) <=> Builtin::i32(0xFF)) > 0) {
			#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		return Builtin::Cast<true, Builtin::u8>(ADV_UPCS(CodepointValue)(__this.__ref()));
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto ToChar(__extension_Char_406_char const& __this LIFETIMEBOUND) noexcept -> const Builtin::char32
	{
		#line 460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(__this); 
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	
} namespace __extensions { using namespace System;
#line 529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsHighSurrogate(__extension_Char_528_u16 const& __this ) -> const bool
	{
		#line 529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_in)(__Char_Protected::HighSurrogateRange, __this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsLowSurrogate(__extension_Char_528_u16 const& __this ) -> const bool
	{
		#line 530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_in)(__Char_Protected::LowSurrogateRange, __this)); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	inline constexpr auto getIsSurrogate(__extension_Char_528_u16 const& __this ) -> const bool
	{
		#line 531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsHighSurrogate)(__this.__ref()) || ADV_UPCS(IsLowSurrogate)(__this.__ref())); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Char.ast"
	

}