#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "CharIterator.h"
#include "StringSpliterator.h"
#include "StringComparison.h"
#include "System/Text/Utf8.h"
using namespace System::Text;

namespace System {
namespace __Unsafe {} namespace __Str$Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
class SubstringIterator;
class ReverseSubstringIterator;
//###############################################################################
//# Global type aliases
//###############################################################################
#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
using Str = Builtin::Str;
#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
using ByteSpan = System::Span<Builtin::u8>;
//###############################################################################
//# Type definitions
//###############################################################################
	} namespace $extensions { using namespace System;
#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	using $extension_Str_11_byte_brack__and__brack_ = System::Span<Builtin::u8>;
	#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsAscii($extension_Str_11_byte_brack__and__brack_ const& $this ) -> const bool;
	} namespace System{
using $extensions::getIsAscii;

		} namespace $extensions { using namespace System;
#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	using $extension_Str_27_char = Builtin::char32;
	#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto ToUtf8($extension_Str_27_char const& $this LIFETIMEBOUND, System::MutableSpan<Builtin::u8> dst)  -> const Builtin::Str;
	} namespace System{
using $extensions::ToUtf8;

		} namespace $extensions { using namespace System;
#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	using $extension_Str_33_str = Builtin::Str;
	#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr const $extension_Str_33_str getAt($extension_Str_33_str const& $this LIFETIMEBOUND, IndexRange range);
	#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr const $extension_Str_33_str _operator_subscript($extension_Str_33_str const& $this LIFETIMEBOUND, IndexRange range) { return getAt($this, range); }
	#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr const $extension_Str_33_str getAt($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::UncheckedTag, IndexRange range);
	#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	[[clang::annotate("UserAttr: Unchecked")]] inline constexpr const $extension_Str_33_str _operator_subscript($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::UncheckedTag, IndexRange range) { return getAt($this, Builtin::UncheckedTag{}, range); }
	#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto IsUtf8CodePointBoundary($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::usize index)  -> const bool;
	#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto FloorIndexToUtf8CodePointBoundary($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::usize index)  -> const Builtin::usize;
	#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto CeilIndexToUtf8CodePointBoundary($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::usize index)  -> const Builtin::usize;
	#line 130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto Substring($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::usize start)  -> const typename $extension_Str_33_str;
	#line 140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto Substring($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::usize start, Builtin::usize length)  -> const typename $extension_Str_33_str;
	#line 152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto Equals($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::Str other)  -> const bool;
	#line 195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto EqualsAsciiIgnoreCase($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::Str other)  -> const bool;
	#line 211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto CompareAsciiIgnoreCase($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::Str other)  -> const Builtin::i32;
	#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	template<class __TT> struct $static_TryFromUtf8; template<> struct $static_TryFromUtf8<$extension_Str_33_str> { static inline constexpr auto get(System::Span<Builtin::u8> bytes)  -> const Builtin::Nullable<$extension_Str_33_str>; };
	#line 237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	template<class __TT> struct $static_FromUtf8; template<> struct $static_FromUtf8<$extension_Str_33_str> { static inline constexpr auto get(System::Span<Builtin::u8> bytes)  -> const typename $extension_Str_33_str; };
	#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	template<class __TT> struct $static_FromUtf8Unchecked; template<> struct $static_FromUtf8Unchecked<$extension_Str_33_str> { static inline constexpr auto get(System::Span<Builtin::u8> bytes) noexcept -> const typename $extension_Str_33_str; };
	#line 253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto Contains($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::u8 val)  -> const bool;
	#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto _operator_in($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::u8 val)  -> const bool;
	#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto Contains($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::char32 val)  -> const bool;
	#line 262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto _operator_in($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::char32 val)  -> const bool;
	#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto Contains($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::Str val)  -> const bool;
	#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto _operator_in($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::Str val)  -> const bool;
	#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto ContainsAny($extension_Str_33_str const& $this LIFETIMEBOUND, System::Span<Builtin::u8> bytes)  -> const bool;
	#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto ContainsAny($extension_Str_33_str const& $this LIFETIMEBOUND, System::Span<Builtin::char32> chars)  -> const bool;
	#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto ContainsAny($extension_Str_33_str const& $this LIFETIMEBOUND, Predicate<Builtin::char32> filter)  -> const bool;
	#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto IndexOf($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::u8 val)  -> const Builtin::Nullable<Builtin::usize>;
	#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto IndexOf($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::char32 val)  -> const Builtin::Nullable<Builtin::usize>;
	#line 313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto IndexOf($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::Str val)  -> const Builtin::Nullable<Builtin::usize>;
	#line 316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto IndexOfAny($extension_Str_33_str const& $this LIFETIMEBOUND, System::Span<Builtin::u8> val)  -> const Builtin::Nullable<Builtin::usize>;
	#line 324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto IndexOfAny($extension_Str_33_str const& $this LIFETIMEBOUND, System::Span<Builtin::char32> val)  -> const Builtin::Nullable<Builtin::usize>;
	#line 334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto IndexOfAny($extension_Str_33_str const& $this LIFETIMEBOUND, Predicate<Builtin::char32> filter)  -> const Builtin::Nullable<Builtin::usize>;
	#line 344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto LastIndexOf($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::u8 val)  -> const Builtin::Nullable<Builtin::usize>;
	#line 352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto LastIndexOf($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::char32 val)  -> const Builtin::Nullable<Builtin::usize>;
	#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto LastIndexOf($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::Str val)  -> const Builtin::Nullable<Builtin::usize>;
	#line 364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto LastIndexOfAny($extension_Str_33_str const& $this LIFETIMEBOUND, System::Span<Builtin::u8> val)  -> const Builtin::Nullable<Builtin::usize>;
	#line 372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto LastIndexOfAny($extension_Str_33_str const& $this LIFETIMEBOUND, System::Span<Builtin::char32> val)  -> const Builtin::Nullable<Builtin::usize>;
	#line 382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto LastIndexOfAny($extension_Str_33_str const& $this LIFETIMEBOUND, Predicate<Builtin::char32> filter)  -> const Builtin::Nullable<Builtin::usize>;
	#line 392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SubstringBefore($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::Str val)  -> const Builtin::Str;
	#line 400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SubstringBeforeLast($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::Str val)  -> const Builtin::Str;
	#line 408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SubstringAfter($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::Str val)  -> const Builtin::Nullable<Builtin::Str>;
	#line 416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SubstringAfterLast($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::Str val)  -> const Builtin::Nullable<Builtin::Str>;
	#line 424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SubstringBetween($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::Str tag)  -> const Builtin::Nullable<Builtin::Str>;
	#line 432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SubstringBetweenLast($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::Str tag)  -> const Builtin::Nullable<Builtin::Str>;
	#line 442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SubstringBetween($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::Str open, Builtin::Str close)  -> const Builtin::Nullable<Builtin::Str>;
	#line 447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SubstringBetweenLast($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::Str open, Builtin::Str close)  -> const Builtin::Nullable<Builtin::Str>;
	#line 452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SubstringsBetween($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::Str open, Builtin::Str close)  -> const SubstringIterator;
	#line 454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SubstringsBetweenReversed($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::Str open, Builtin::Str close)  -> const ReverseSubstringIterator;
	#line 457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto Count($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::u8 val)  -> const Builtin::usize;
	#line 464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto Count($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::Str val)  -> const Builtin::usize;
	#line 611 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto Split($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::u8 val, StringSplitOptions options = StringSplitOptions::None)  -> const StringSpliterator;
	#line 614 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto Split($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::u8 val, Builtin::usize maxCount, StringSplitOptions options = StringSplitOptions::None)  -> const StringSpliterator;
	#line 617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto Split($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::Str val, StringSplitOptions options = StringSplitOptions::None)  -> const StringSpliterator;
	#line 620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto Split($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::Str val, Builtin::usize maxCount, StringSplitOptions options = StringSplitOptions::None)  -> const StringSpliterator;
	#line 623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SplitAny($extension_Str_33_str const& $this LIFETIMEBOUND, System::Span<Builtin::u8> vals, StringSplitOptions options = StringSplitOptions::None)  -> const StringSpliterator;
	#line 626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SplitAny($extension_Str_33_str const& $this LIFETIMEBOUND, System::Span<Builtin::u8> vals, Builtin::usize maxCount, StringSplitOptions options = StringSplitOptions::None)  -> const StringSpliterator;
	#line 629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SplitAny($extension_Str_33_str const& $this LIFETIMEBOUND, Predicate<Builtin::char32> filter, StringSplitOptions options = StringSplitOptions::None)  -> const StringSpliterator;
	#line 632 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SplitAny($extension_Str_33_str const& $this LIFETIMEBOUND, Predicate<Builtin::char32> filter, Builtin::usize maxCount, StringSplitOptions options = StringSplitOptions::None)  -> const StringSpliterator;
	#line 636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SplitReversed($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::u8 val, StringSplitOptions options = StringSplitOptions::None)  -> const StringReverseSpliterator;
	#line 639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SplitReversed($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::u8 val, Builtin::usize maxCount, StringSplitOptions options = StringSplitOptions::None)  -> const StringReverseSpliterator;
	#line 642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SplitReversed($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::Str val, StringSplitOptions options = StringSplitOptions::None)  -> const StringReverseSpliterator;
	#line 645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SplitReversed($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::Str val, Builtin::usize maxCount, StringSplitOptions options = StringSplitOptions::None)  -> const StringReverseSpliterator;
	#line 648 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SplitAnyReversed($extension_Str_33_str const& $this LIFETIMEBOUND, System::Span<Builtin::u8> vals, StringSplitOptions options = StringSplitOptions::None)  -> const StringReverseSpliterator;
	#line 651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SplitAnyReversed($extension_Str_33_str const& $this LIFETIMEBOUND, System::Span<Builtin::u8> vals, Builtin::usize maxCount, StringSplitOptions options = StringSplitOptions::None)  -> const StringReverseSpliterator;
	#line 654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SplitAnyReversed($extension_Str_33_str const& $this LIFETIMEBOUND, Predicate<Builtin::char32> filter, StringSplitOptions options = StringSplitOptions::None)  -> const StringReverseSpliterator;
	#line 657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SplitAnyReversed($extension_Str_33_str const& $this LIFETIMEBOUND, Predicate<Builtin::char32> filter, Builtin::usize maxCount, StringSplitOptions options = StringSplitOptions::None)  -> const StringReverseSpliterator;
	#line 670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto Lines($extension_Str_33_str const& $this LIFETIMEBOUND, StringSplitOptions options)  -> const StringSpliterator;
	#line 673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto LinesReversed($extension_Str_33_str const& $this LIFETIMEBOUND, StringSplitOptions options)  -> const StringReverseSpliterator;
	#line 676 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto StartsWith($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::u8 val)  -> const bool;
	#line 683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto StartsWith($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::char32 val)  -> const bool;
	#line 685 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto StartsWith($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::Str val)  -> const bool;
	#line 687 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto StartsWith($extension_Str_33_str const& $this LIFETIMEBOUND, Predicate<Builtin::char32> filter)  -> const bool;
	#line 696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto EndsWith($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::u8 val)  -> const bool;
	#line 703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto EndsWith($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::char32 val)  -> const bool;
	#line 711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto EndsWith($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::Str val)  -> const bool;
	#line 713 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto EndsWith($extension_Str_33_str const& $this LIFETIMEBOUND, Predicate<Builtin::char32> filter)  -> const bool;
	#line 770 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto TrimStart($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::u8 val)  -> const typename $extension_Str_33_str;
	#line 777 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto TrimEnd($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::u8 val)  -> const typename $extension_Str_33_str;
	#line 784 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto Trim($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::u8 val)  -> const typename $extension_Str_33_str;
	#line 786 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto TrimStart($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::char32 val)  -> const typename $extension_Str_33_str;
	#line 795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto TrimEnd($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::char32 val)  -> const typename $extension_Str_33_str;
	#line 806 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto Trim($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::char32 val)  -> const typename $extension_Str_33_str;
	#line 808 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto TrimStart($extension_Str_33_str const& $this LIFETIMEBOUND, System::Span<Builtin::char32> val)  -> const typename $extension_Str_33_str;
	#line 817 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto TrimEnd($extension_Str_33_str const& $this LIFETIMEBOUND, System::Span<Builtin::char32> val)  -> const typename $extension_Str_33_str;
	#line 828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto Trim($extension_Str_33_str const& $this LIFETIMEBOUND, System::Span<Builtin::char32> val)  -> const typename $extension_Str_33_str;
	#line 830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto TrimStart($extension_Str_33_str const& $this LIFETIMEBOUND, Predicate<Builtin::char32> filter)  -> const typename $extension_Str_33_str;
	#line 839 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto TrimEnd($extension_Str_33_str const& $this LIFETIMEBOUND, Predicate<Builtin::char32> filter)  -> const typename $extension_Str_33_str;
	#line 850 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto Trim($extension_Str_33_str const& $this LIFETIMEBOUND, Predicate<Builtin::char32> filter)  -> const typename $extension_Str_33_str;
	#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getByteLength($extension_Str_33_str const& $this ) -> const Builtin::usize;
	#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsEmpty($extension_Str_33_str const& $this ) -> const bool;
	#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getBytes($extension_Str_33_str const& $this ) -> const System::Span<Builtin::u8>;
	#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getChars($extension_Str_33_str const& $this ) -> const CharIterator;
	#line 117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getCharsWithOffsets($extension_Str_33_str const& $this ) -> const CharIndicesIterator;
	#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getCharCount($extension_Str_33_str const& $this ) -> const Builtin::usize;
	#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsAscii($extension_Str_33_str const& $this ) -> const bool;
	#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsAsciiWhiteSpace($extension_Str_33_str const& $this ) -> const bool;
	#line 476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsWhiteSpace($extension_Str_33_str const& $this ) -> const bool;
	#line 485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsAsciiUpper($extension_Str_33_str const& $this ) -> const bool;
	#line 494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsUpper($extension_Str_33_str const& $this ) -> const bool;
	#line 503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsAsciiLower($extension_Str_33_str const& $this ) -> const bool;
	#line 512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsLower($extension_Str_33_str const& $this ) -> const bool;
	#line 521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsAsciiAlphabetic($extension_Str_33_str const& $this ) -> const bool;
	#line 530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsAlphabetic($extension_Str_33_str const& $this ) -> const bool;
	#line 539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsAsciiAlphanumeric($extension_Str_33_str const& $this ) -> const bool;
	#line 548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsAlphanumeric($extension_Str_33_str const& $this ) -> const bool;
	#line 557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsNumeric($extension_Str_33_str const& $this ) -> const bool;
	#line 566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsDecimal($extension_Str_33_str const& $this ) -> const bool;
	#line 575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsHexadecimal($extension_Str_33_str const& $this ) -> const bool;
	#line 584 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsValidIdentifier($extension_Str_33_str const& $this ) -> const bool;
	#line 600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsAsciiPrintable($extension_Str_33_str const& $this ) -> const bool;
	#line 660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto getSplitWhitespace($extension_Str_33_str const& $this ) -> const StringSpliterator;
	#line 663 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto getSplitWhitespaceReversed($extension_Str_33_str const& $this ) -> const StringReverseSpliterator;
	#line 666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto getLines($extension_Str_33_str const& $this ) -> const StringSpliterator;
	#line 668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto getLinesReversed($extension_Str_33_str const& $this ) -> const StringReverseSpliterator;
	#line 722 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getTrimAsciiStart($extension_Str_33_str const& $this ) -> const $extension_Str_33_str;
	#line 734 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getTrimAsciiEnd($extension_Str_33_str const& $this ) -> const $extension_Str_33_str;
	#line 746 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getTrimAscii($extension_Str_33_str const& $this ) -> const $extension_Str_33_str;
	#line 748 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto getTrimStart($extension_Str_33_str const& $this ) -> const $extension_Str_33_str;
	#line 757 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto getTrimEnd($extension_Str_33_str const& $this ) -> const $extension_Str_33_str;
	#line 768 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto getTrim($extension_Str_33_str const& $this ) -> const $extension_Str_33_str;
	} namespace System{
using $extensions::getAt; using $extensions::_operator_subscript;
using $extensions::getAt; using $extensions::_operator_subscript;
using $extensions::IsUtf8CodePointBoundary;
using $extensions::FloorIndexToUtf8CodePointBoundary;
using $extensions::CeilIndexToUtf8CodePointBoundary;
using $extensions::Substring;
using $extensions::Substring;
using $extensions::Equals;
using $extensions::EqualsAsciiIgnoreCase;
using $extensions::CompareAsciiIgnoreCase;
using $extensions::$static_TryFromUtf8;
using $extensions::$static_FromUtf8;
using $extensions::$static_FromUtf8Unchecked;
using $extensions::Contains;
using $extensions::_operator_in;
using $extensions::Contains;
using $extensions::_operator_in;
using $extensions::Contains;
using $extensions::_operator_in;
using $extensions::ContainsAny;
using $extensions::ContainsAny;
using $extensions::ContainsAny;
using $extensions::IndexOf;
using $extensions::IndexOf;
using $extensions::IndexOf;
using $extensions::IndexOfAny;
using $extensions::IndexOfAny;
using $extensions::IndexOfAny;
using $extensions::LastIndexOf;
using $extensions::LastIndexOf;
using $extensions::LastIndexOf;
using $extensions::LastIndexOfAny;
using $extensions::LastIndexOfAny;
using $extensions::LastIndexOfAny;
using $extensions::SubstringBefore;
using $extensions::SubstringBeforeLast;
using $extensions::SubstringAfter;
using $extensions::SubstringAfterLast;
using $extensions::SubstringBetween;
using $extensions::SubstringBetweenLast;
using $extensions::SubstringBetween;
using $extensions::SubstringBetweenLast;
using $extensions::SubstringsBetween;
using $extensions::SubstringsBetweenReversed;
using $extensions::Count;
using $extensions::Count;
using $extensions::Split;
using $extensions::Split;
using $extensions::Split;
using $extensions::Split;
using $extensions::SplitAny;
using $extensions::SplitAny;
using $extensions::SplitAny;
using $extensions::SplitAny;
using $extensions::SplitReversed;
using $extensions::SplitReversed;
using $extensions::SplitReversed;
using $extensions::SplitReversed;
using $extensions::SplitAnyReversed;
using $extensions::SplitAnyReversed;
using $extensions::SplitAnyReversed;
using $extensions::SplitAnyReversed;
using $extensions::Lines;
using $extensions::LinesReversed;
using $extensions::StartsWith;
using $extensions::StartsWith;
using $extensions::StartsWith;
using $extensions::StartsWith;
using $extensions::EndsWith;
using $extensions::EndsWith;
using $extensions::EndsWith;
using $extensions::EndsWith;
using $extensions::TrimStart;
using $extensions::TrimEnd;
using $extensions::Trim;
using $extensions::TrimStart;
using $extensions::TrimEnd;
using $extensions::Trim;
using $extensions::TrimStart;
using $extensions::TrimEnd;
using $extensions::Trim;
using $extensions::TrimStart;
using $extensions::TrimEnd;
using $extensions::Trim;
using $extensions::getByteLength;
using $extensions::getIsEmpty;
using $extensions::getBytes;
using $extensions::getChars;
using $extensions::getCharsWithOffsets;
using $extensions::getCharCount;
using $extensions::getIsAscii;
using $extensions::getIsAsciiWhiteSpace;
using $extensions::getIsWhiteSpace;
using $extensions::getIsAsciiUpper;
using $extensions::getIsUpper;
using $extensions::getIsAsciiLower;
using $extensions::getIsLower;
using $extensions::getIsAsciiAlphabetic;
using $extensions::getIsAlphabetic;
using $extensions::getIsAsciiAlphanumeric;
using $extensions::getIsAlphanumeric;
using $extensions::getIsNumeric;
using $extensions::getIsDecimal;
using $extensions::getIsHexadecimal;
using $extensions::getIsValidIdentifier;
using $extensions::getIsAsciiPrintable;
using $extensions::getSplitWhitespace;
using $extensions::getSplitWhitespaceReversed;
using $extensions::getLines;
using $extensions::getLinesReversed;
using $extensions::getTrimAsciiStart;
using $extensions::getTrimAsciiEnd;
using $extensions::getTrimAscii;
using $extensions::getTrimStart;
using $extensions::getTrimEnd;
using $extensions::getTrim;

	#line 853 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	struct [[clang::annotate("ref_struct")]] SubstringIterator final : public Builtin::RefStruct {
		public: using $self = SubstringIterator;
		public: using $class = $self;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		#line 854 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		public: using ElementType = Builtin::Str;
		public: SubstringIterator() = default;
		#line 861 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		public: inline SubstringIterator(Builtin::Str data, Builtin::Str open, Builtin::Str close) noexcept;
		#line 867 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		public: inline auto MoveNext()  -> const bool;
		#line 880 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		public: inline auto GetCurrent() const  -> const Builtin::Str;
		#line 882 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		public: inline auto Iterate() const  -> const $self;
		#line 856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		private: Builtin::Str _data;
		#line 857 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		private: Builtin::Str _open;
		#line 858 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		private: Builtin::Str _close;
		#line 859 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		private: Builtin::Str _current;
		
	};
	
	#line 853 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(SubstringIterator, IAbstractSequence, IAbstractSequence, SubstringIterator);
	#line 853 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(SubstringIterator, ISequence, ISequence<Builtin::Str>, SubstringIterator);
	#line 853 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(SubstringIterator, IAbstractIterator, IAbstractIterator, SubstringIterator);
	#line 853 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(SubstringIterator, IIterator, IIterator<Builtin::Str>, SubstringIterator);
	
	#line 885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	struct [[clang::annotate("ref_struct")]] ReverseSubstringIterator final : public Builtin::RefStruct {
		public: using $self = ReverseSubstringIterator;
		public: using $class = $self;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		#line 886 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		public: using ElementType = Builtin::Str;
		public: ReverseSubstringIterator() = default;
		#line 893 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		public: inline ReverseSubstringIterator(Builtin::Str data, Builtin::Str open, Builtin::Str close) noexcept;
		#line 899 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		public: inline auto MoveNext()  -> const bool;
		#line 912 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		public: inline auto GetCurrent() const  -> const Builtin::Str;
		#line 914 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		public: inline auto Iterate() const  -> const $self;
		#line 888 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		private: Builtin::Str _data;
		#line 889 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		private: Builtin::Str _open;
		#line 890 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		private: Builtin::Str _close;
		#line 891 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		private: Builtin::Str _current;
		
	};
	
	#line 885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(ReverseSubstringIterator, IAbstractSequence, IAbstractSequence, ReverseSubstringIterator);
	#line 885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(ReverseSubstringIterator, ISequence, ISequence<Builtin::Str>, ReverseSubstringIterator);
	#line 885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(ReverseSubstringIterator, IAbstractIterator, IAbstractIterator, ReverseSubstringIterator);
	#line 885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(ReverseSubstringIterator, IIterator, IIterator<Builtin::Str>, ReverseSubstringIterator);
	
	//###############################################################################
//# Global compile-time constants
//###############################################################################
inline constexpr Builtin::Str $strconst_0x1d1412edc30_0 = "Begin ";
inline constexpr Builtin::Str $strconst_0x1d1412edc30_1 = " Middle ";
inline constexpr Builtin::Str $strconst_0x1d1412edc30_2 = " End";
} namespace $extensions {
template<class __TT> struct $static_Start;
template<class __TT> struct $static_getStart;
template<class __TT> struct $static_UnsafeCreate;
template<class __TT> struct $static_getUnsafeCreate;
template<class __TT> struct $static_ByteLength;
template<class __TT> struct $static_getByteLength;
template<class __TT> struct $static_ContainsAnyExcept;
template<class __TT> struct $static_getContainsAnyExcept;
template<class __TT> struct $static_GetByteLength;
template<class __TT> struct $static_getGetByteLength;
template<class __TT> struct $static_Length;
template<class __TT> struct $static_getLength;
template<class __TT> struct $static_Bytes;
template<class __TT> struct $static_getBytes;
template<class __TT> struct $static_GetDataReference;
template<class __TT> struct $static_getGetDataReference;
template<class __TT> struct $static_Offset;
template<class __TT> struct $static_getOffset;
template<class __TT> struct $static_Chars;
template<class __TT> struct $static_getChars;
template<class __TT> struct $static_IndexOfAny;
template<class __TT> struct $static_getIndexOfAny;
template<class __TT> struct $static_TrimAsciiStart;
template<class __TT> struct $static_getTrimAsciiStart;
template<class __TT> struct $static_IsAsciiLetter;
template<class __TT> struct $static_getIsAsciiLetter;
template<class __TT> struct $static_IsAscii;
template<class __TT> struct $static_getIsAscii;
template<class __TT> struct $static_IsAsciiWhiteSpace;
template<class __TT> struct $static_getIsAsciiWhiteSpace;
template<class __TT> struct $static_IsWhiteSpace;
template<class __TT> struct $static_getIsWhiteSpace;
template<class __TT> struct $static_IsLetterUpper;
template<class __TT> struct $static_getIsLetterUpper;
template<class __TT> struct $static_IsEmpty;
template<class __TT> struct $static_getIsEmpty;
template<class __TT> struct $static_IsLetter;
template<class __TT> struct $static_getIsLetter;
template<class __TT> struct $static_TryFromUtf8;
template<class __TT> struct $static_getTryFromUtf8;
template<class __TT> struct $static_IsIdentifierStartChar;
template<class __TT> struct $static_getIsIdentifierStartChar;
template<class __TT> struct $static_IsLetterLower;
template<class __TT> struct $static_getIsLetterLower;
template<class __TT> struct $static_IndexOf;
template<class __TT> struct $static_getIndexOf;
template<class __TT> struct $static_IsAsciiLetterOrDigit;
template<class __TT> struct $static_getIsAsciiLetterOrDigit;
template<class __TT> struct $static_IsLetterOrDigit;
template<class __TT> struct $static_getIsLetterOrDigit;
template<class __TT> struct $static_IsAsciiDigit;
template<class __TT> struct $static_getIsAsciiDigit;
template<class __TT> struct $static_IsHexDigit;
template<class __TT> struct $static_getIsHexDigit;
template<class __TT> struct $static_IsIdentifierChar;
template<class __TT> struct $static_getIsIdentifierChar;
template<class __TT> struct $static_EndsWith;
template<class __TT> struct $static_getEndsWith;
template<class __TT> struct $static_IsAsciiPrintable;
template<class __TT> struct $static_getIsAsciiPrintable;
template<class __TT> struct $static_Lines;
template<class __TT> struct $static_getLines;
template<class __TT> struct $static_LinesReversed;
template<class __TT> struct $static_getLinesReversed;
template<class __TT> struct $static_IsValid;
template<class __TT> struct $static_getIsValid;
template<class __TT> struct $static_TrimAsciiEnd;
template<class __TT> struct $static_getTrimAsciiEnd;
template<class __TT> struct $static_SubstringAfterLast;
template<class __TT> struct $static_getSubstringAfterLast;
template<class __TT> struct $static_CharsWithOffsets;
template<class __TT> struct $static_getCharsWithOffsets;
template<class __TT> struct $static_SubstringBefore;
template<class __TT> struct $static_getSubstringBefore;
template<class __TT> struct $static_SubstringsBetween;
template<class __TT> struct $static_getSubstringsBetween;
template<class __TT> struct $static_SubstringBeforeLast;
template<class __TT> struct $static_getSubstringBeforeLast;
template<class __TT> struct $static_Reversed;
template<class __TT> struct $static_getReversed;
template<class __TT> struct $static_TrimEnd;
template<class __TT> struct $static_getTrimEnd;
template<class __TT> struct $static_TrimStart;
template<class __TT> struct $static_getTrimStart;
template<class __TT> struct $static_ContainsAny;
template<class __TT> struct $static_getContainsAny;
template<class __TT> struct $static_FromUtf8Unchecked;
template<class __TT> struct $static_getFromUtf8Unchecked;
template<class __TT> struct $static_Contains;
template<class __TT> struct $static_getContains;
template<class __TT> struct $static_WriteChar;
template<class __TT> struct $static_getWriteChar;
template<class __TT> struct $static_IndexOutOfRangeException;
template<class __TT> struct $static_getIndexOutOfRangeException;
template<class __TT> struct $static_IsUtf8CodePointBoundary;
template<class __TT> struct $static_getIsUtf8CodePointBoundary;
template<class __TT> struct $static_InvalidArgumentException;
template<class __TT> struct $static_getInvalidArgumentException;
template<class __TT> struct $static_SubstringBetweenLast;
template<class __TT> struct $static_getSubstringBetweenLast;
template<class __TT> struct $static_Substring;
template<class __TT> struct $static_getSubstring;
template<class __TT> struct $static_LastIndexOfAny;
template<class __TT> struct $static_getLastIndexOfAny;
template<class __TT> struct $static_Add;
template<class __TT> struct $static_getAdd;
template<class __TT> struct $static_ToLower;
template<class __TT> struct $static_getToLower;
template<class __TT> struct $static_Split;
template<class __TT> struct $static_getSplit;
template<class __TT> struct $static_ToUtf8;
template<class __TT> struct $static_getToUtf8;
template<class __TT> struct $static_SubstringAfter;
template<class __TT> struct $static_getSubstringAfter;
template<class __TT> struct $static_LastIndexOf;
template<class __TT> struct $static_getLastIndexOf;
template<class __TT> struct $static_Count;
template<class __TT> struct $static_getCount;
template<class __TT> struct $static_CharCount;
template<class __TT> struct $static_getCharCount;
template<class __TT> struct $static_IsDecimal;
template<class __TT> struct $static_getIsDecimal;
template<class __TT> struct $static_StartsWith;
template<class __TT> struct $static_getStartsWith;
template<class __TT> struct $static__current;
template<class __TT> struct $static_get_current;
template<class __TT> struct $static_SubstringBetween;
template<class __TT> struct $static_getSubstringBetween;
template<class __TT> struct $static_SubstringsBetweenReversed;
template<class __TT> struct $static_getSubstringsBetweenReversed;
template<class __TT> struct $static_SplitReversed;
template<class __TT> struct $static_getSplitReversed;
template<class __TT> struct $static_SplitAny;
template<class __TT> struct $static_getSplitAny;
template<class __TT> struct $static_SplitAnyReversed;
template<class __TT> struct $static_getSplitAnyReversed;
template<class __TT> struct $static_IsPunctuation;
template<class __TT> struct $static_getIsPunctuation;
template<class __TT> struct $static_IsSymbol;
template<class __TT> struct $static_getIsSymbol;
template<class __TT> struct $static_SplitWhitespace;
template<class __TT> struct $static_getSplitWhitespace;
template<class __TT> struct $static_IsNumeric;
template<class __TT> struct $static_getIsNumeric;
template<class __TT> struct $static_SplitWhitespaceReversed;
template<class __TT> struct $static_getSplitWhitespaceReversed;
template<class __TT> struct $static_Trim;
template<class __TT> struct $static_getTrim;
template<class __TT> struct $static_TrimAscii;
template<class __TT> struct $static_getTrimAscii;
template<class __TT> struct $static_IsAlphabetic;
template<class __TT> struct $static_getIsAlphabetic;
template<class __TT> struct $static_IsAlphanumeric;
template<class __TT> struct $static_getIsAlphanumeric;
template<class __TT> struct $static_IsHexadecimal;
template<class __TT> struct $static_getIsHexadecimal;
template<class __TT> struct $static_IsValidIdentifier;
template<class __TT> struct $static_getIsValidIdentifier;
template<class __TT> struct $static_FloorIndexToUtf8CodePointBoundary;
template<class __TT> struct $static_getFloorIndexToUtf8CodePointBoundary;
template<class __TT> struct $static_CeilIndexToUtf8CodePointBoundary;
template<class __TT> struct $static_getCeilIndexToUtf8CodePointBoundary;
} namespace System {
//###############################################################################
//# Function definitions
//###############################################################################

#line 861 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline SubstringIterator::SubstringIterator(Builtin::Str data, Builtin::Str open, Builtin::Str close) noexcept : 
	#line 862 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	_data{data}, 
	#line 863 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	_open{open}, 
	#line 864 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	_close{close}
	{
	}
#line 867 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SubstringIterator::MoveNext()  -> const bool
	{
		#line 868 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (const auto index = ADV_UFCS(IndexOf)(_data.$ref(), _open)) {
			{
				#line 868 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				auto __tmp0 = *index; const auto& index = __tmp0;
				
				#line 869 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				_data = ADV_UFCS(_operator_subscript)(_data.$ref(), Builtin::UncheckedTag{}, System::IndexRange((index + ADV_UPCS(ByteLength)(_open.$ref())), System::Index::End, false));
				#line 870 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				if (const auto index2 = ADV_UFCS(IndexOf)(_data.$ref(), _close)) {
					{
						#line 870 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
						auto __tmp0 = *index2; const auto& index2 = __tmp0;
						
						#line 871 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
						_current = ADV_UFCS(_operator_subscript)(_data.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(index2)>, false>({}, index2));
						#line 872 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
						_data = ADV_UFCS(_operator_subscript)(_data.$ref(), Builtin::UncheckedTag{}, System::IndexRange((index2 + ADV_UPCS(ByteLength)(_close.$ref())), System::Index::End, false));
						#line 873 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
						return Builtin::Boolean(true);
					}
				}
			}
		}
		#line 877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return Builtin::Boolean(false);
	}
#line 880 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SubstringIterator::GetCurrent() const  -> const Builtin::Str
	{
		#line 880 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(_current)((*this).$ref())); 
	}
#line 882 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SubstringIterator::Iterate() const  -> const $self
	{
		#line 882 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY((*this)); 
	}
#line 893 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline ReverseSubstringIterator::ReverseSubstringIterator(Builtin::Str data, Builtin::Str open, Builtin::Str close) noexcept : 
	#line 894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	_data{data}, 
	#line 895 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	_open{open}, 
	#line 896 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	_close{close}
	{
	}
#line 899 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto ReverseSubstringIterator::MoveNext()  -> const bool
	{
		#line 900 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (const auto index = ADV_UFCS(LastIndexOf)(_data.$ref(), _open)) {
			{
				#line 900 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				auto __tmp0 = *index; const auto& index = __tmp0;
				
				#line 901 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(_data.$ref(), Builtin::UncheckedTag{}, System::IndexRange((index + ADV_UPCS(ByteLength)(_open.$ref())), System::Index::End, false)))> tmp = ADV_UFCS(_operator_subscript)(_data.$ref(), Builtin::UncheckedTag{}, System::IndexRange((index + ADV_UPCS(ByteLength)(_open.$ref())), System::Index::End, false)); 
				#line 902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				if (const auto index2 = ADV_UFCS(IndexOf)(tmp.$ref(), _close)) {
					{
						#line 902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
						auto __tmp0 = *index2; const auto& index2 = __tmp0;
						
						#line 903 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
						_current = ADV_UFCS(_operator_subscript)(tmp.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(index2)>, false>({}, index2));
						#line 904 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
						_data = ADV_UFCS(_operator_subscript)(_data.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(index)>, false>({}, index));
						#line 905 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
						return Builtin::Boolean(true);
					}
				}
			}
		}
		#line 909 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return Builtin::Boolean(false);
	}
#line 912 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto ReverseSubstringIterator::GetCurrent() const  -> const Builtin::Str
	{
		#line 912 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(_current)((*this).$ref())); 
	}
#line 914 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto ReverseSubstringIterator::Iterate() const  -> const $self
	{
		#line 914 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY((*this)); 
	}
} namespace $extensions { using namespace System;
#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsAscii($extension_Str_11_byte_brack__and__brack_ const & $this ) -> const bool
	{
		#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (std::is_constant_evaluated()) {
			#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			{ auto $for_init_15 = $this; auto $for_iter_15 = ADV_UFCS(Iterate)($for_init_15.$ref()); while($for_iter_15.$ref().MoveNext()) {
			auto&& b = $for_iter_15.$ref().GetCurrent(); {
				#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				if (!ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(Builtin::u8(127U))>, true>({}, Builtin::u8(127U)), b)) {
					#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
					return Builtin::Boolean(false);
				}
			}}}
			#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			return Builtin::Boolean(true);
		} else {
			#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			{
				#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return !ADV_UFCS(ContainsAnyExcept)($this.$ref(), System::Range<Builtin::Auto<decltype(Builtin::u8(127U))>, true>({}, Builtin::u8(127U)));
			}
		}
		return {};
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	
} namespace $extensions { using namespace System;
#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto ToUtf8($extension_Str_27_char const& $this LIFETIMEBOUND, System::MutableSpan<Builtin::u8> dst)  -> const Builtin::Str
	{
		#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_USFCS((Builtin::Str), FromUtf8Unchecked)(ADV_USFCS((Utf8), WriteChar)($this, dst));
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	
} namespace $extensions { using namespace System;
#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr const $extension_Str_33_str getAt($extension_Str_33_str const& $this LIFETIMEBOUND, IndexRange range)
	{
		#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const Builtin::Auto<decltype(ADV_UPCS(ByteLength)($this.$ref()))> strLen = ADV_UPCS(ByteLength)($this.$ref()); 
		#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), strLen)))> start = Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), strLen)); 
		#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const Builtin::Auto<decltype(ADV_UFCS(Length)(range.$ref(), strLen))> len = ADV_UFCS(Length)(range.$ref(), strLen); 
		#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (((start + len) <=> strLen) > 0) {
			#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (!ADV_UPCS(IsUtf8CodePointBoundary)(ADV_UFCS(_operator_subscript)(ADV_UPCS(Bytes)($this.$ref()).$ref(), Builtin::UncheckedTag{}, start).$ref()) || !ADV_UPCS(IsUtf8CodePointBoundary)(ADV_UFCS(_operator_subscript)(ADV_UPCS(Bytes)($this.$ref()).$ref(), Builtin::UncheckedTag{}, start + len).$ref())) {
			#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_USFCS((Builtin::Str), UnsafeCreate)(ADV_UFCS(_operator_subscript)(ADV_UPCS(Bytes)($this.$ref()).$ref(), Builtin::UncheckedTag{}, start), len);
	}
	} namespace $extensions { using namespace System;
#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr const $extension_Str_33_str getAt($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::UncheckedTag, IndexRange range)
	{
		#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_USFCS((Builtin::Str), UnsafeCreate)(ADV_USFCS((Unsafe), Add)(ADV_UFCS(GetDataReference)($this.$ref()), Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), ADV_UPCS(ByteLength)($this.$ref())))), ADV_UFCS(Length)(range.$ref(), ADV_UPCS(ByteLength)($this.$ref())));
	}
	} namespace $extensions { using namespace System;
#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto IsUtf8CodePointBoundary($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::usize index)  -> const bool
	{
		#line 68 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const Builtin::Auto<decltype(ADV_UPCS(ByteLength)($this.$ref()))> length = ADV_UPCS(ByteLength)($this.$ref()); 
		#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return index == length || (index <=> length) < 0 && ADV_UPCS(IsUtf8CodePointBoundary)(ADV_UFCS(_operator_subscript)(ADV_UPCS(Bytes)($this.$ref()).$ref(), Builtin::UncheckedTag{}, index).$ref());
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto FloorIndexToUtf8CodePointBoundary($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::usize index)  -> const Builtin::usize
	{
		#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Bytes)($this.$ref()))> bytes = ADV_UPCS(Bytes)($this.$ref()); 
		#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const Builtin::Auto<decltype(ADV_UPCS(ByteLength)($this.$ref()))> length = ADV_UPCS(ByteLength)($this.$ref()); 
		#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if ((index <=> length) >= 0) {
			#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			return length;
		}
		#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (ADV_UPCS(IsUtf8CodePointBoundary)(ADV_UFCS(_operator_subscript)(bytes.$ref(), Builtin::UncheckedTag{}, index).$ref())) {
			#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			return index;
		}
		#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT(((index <=> Builtin::u32(1U)) >= 0), "index>=1u");
		#line 84 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (ADV_UPCS(IsUtf8CodePointBoundary)(ADV_UFCS(_operator_subscript)(bytes.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(1U)).$ref())) {
			#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			return index - Builtin::u32(1U);
		}
		#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT(((index <=> Builtin::u32(2U)) >= 0), "index>=2u");
		#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (ADV_UPCS(IsUtf8CodePointBoundary)(ADV_UFCS(_operator_subscript)(bytes.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(2U)).$ref())) {
			#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			return index - Builtin::u32(2U);
		}
		#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT(((index <=> Builtin::u32(3U)) >= 0), "index>=3u");
		#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(IsUtf8CodePointBoundary)(ADV_UFCS(_operator_subscript)(bytes.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(3U)).$ref())), "bytes[@Uncheckedindex-3u].IsUtf8CodePointBoundary");
		#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return index - Builtin::u32(3U);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto CeilIndexToUtf8CodePointBoundary($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::usize index)  -> const Builtin::usize
	{
		#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Bytes)($this.$ref()))> bytes = ADV_UPCS(Bytes)($this.$ref()); 
		#line 99 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const Builtin::Auto<decltype(ADV_UPCS(ByteLength)($this.$ref()))> length = ADV_UPCS(ByteLength)($this.$ref()); 
		#line 100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if ((index <=> length) >= 0) {
			#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			return length;
		}
		#line 103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		Builtin::Auto<decltype(index)> i = index; 
		#line 104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		while (!ADV_UPCS(IsUtf8CodePointBoundary)(ADV_UFCS(_operator_subscript)(bytes.$ref(), Builtin::UncheckedTag{}, i).$ref())) 
		{
			#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			++i;
			#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if ((i <=> length) >= 0) {
				#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				break;
			}
		}
		#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT(((i <=> index + Builtin::u32(3U)) <= 0), "i<=index+3u");
		#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return i;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto Substring($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::usize start)  -> const typename $extension_Str_33_str
	{
		#line 131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if ((start <=> ADV_UPCS(ByteLength)($this.$ref())) >= 0) {
			#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (!ADV_UPCS(IsUtf8CodePointBoundary)(ADV_UFCS(_operator_subscript)(ADV_UPCS(Bytes)($this.$ref()).$ref(), Builtin::UncheckedTag{}, start).$ref())) {
			#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_USFCS((Builtin::Str), UnsafeCreate)(ADV_UFCS(_operator_subscript)(ADV_UPCS(Bytes)($this.$ref()).$ref(), Builtin::UncheckedTag{}, start), ADV_UPCS(ByteLength)($this.$ref()) - start);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto Substring($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::usize start, Builtin::usize length)  -> const typename $extension_Str_33_str
	{
		#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const Builtin::Auto<decltype(start + length)> end = start + length; 
		#line 142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if ((end <=> ADV_UPCS(ByteLength)($this.$ref())) > 0) {
			#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (!ADV_UPCS(IsUtf8CodePointBoundary)(ADV_UFCS(_operator_subscript)(ADV_UPCS(Bytes)($this.$ref()).$ref(), Builtin::UncheckedTag{}, start).$ref()) || !ADV_UPCS(IsUtf8CodePointBoundary)(ADV_UFCS(_operator_subscript)(ADV_UPCS(Bytes)($this.$ref()).$ref(), Builtin::UncheckedTag{}, end).$ref())) {
			#line 147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_USFCS((Builtin::Str), UnsafeCreate)(ADV_UFCS(_operator_subscript)(ADV_UPCS(Bytes)($this.$ref()).$ref(), Builtin::UncheckedTag{}, start), length);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto Equals($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::Str other)  -> const bool
	{
		#line 152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY($this == other); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto EqualsAsciiIgnoreCase($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::Str other)  -> const bool
	{
		#line 196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (ADV_UPCS(ByteLength)($this.$ref()) != ADV_UPCS(ByteLength)(other.$ref())) {
			#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			return Builtin::Boolean(false);
		}
		#line 199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const Builtin::Auto<decltype(ADV_UPCS(ByteLength)($this.$ref()))> length = ADV_UPCS(ByteLength)($this.$ref()); 
		#line 200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Bytes)($this.$ref()))> thisBytes = ADV_UPCS(Bytes)($this.$ref()); 
		#line 201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Bytes)(other.$ref()))> otherBytes = ADV_UPCS(Bytes)(other.$ref()); 
		#line 202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_202 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_202 = ADV_UFCS(Iterate)($for_init_202.$ref()); while($for_iter_202.$ref().MoveNext()) {
		auto&& i = $for_iter_202.$ref().GetCurrent(); {
			#line 203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (ADV_UPCS(ToLower)(ADV_UFCS(_operator_subscript)(thisBytes.$ref(), Builtin::UncheckedTag{}, i).$ref()) != ADV_UPCS(ToLower)(ADV_UFCS(_operator_subscript)(otherBytes.$ref(), Builtin::UncheckedTag{}, i).$ref())) {
				#line 204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return Builtin::Boolean(false);
			}
		}}}
		#line 207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return Builtin::Boolean(true);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto CompareAsciiIgnoreCase($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::Str other)  -> const Builtin::i32
	{
		#line 212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (ADV_UPCS(ByteLength)($this.$ref()) != ADV_UPCS(ByteLength)(other.$ref())) {
			#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			return ADV_UPCS(ByteLength)($this.$ref()) <=> ADV_UPCS(ByteLength)(other.$ref());
		}
		#line 215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const Builtin::Auto<decltype(ADV_UPCS(ByteLength)($this.$ref()))> length = ADV_UPCS(ByteLength)($this.$ref()); 
		#line 216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Bytes)($this.$ref()))> thisBytes = ADV_UPCS(Bytes)($this.$ref()); 
		#line 217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Bytes)(other.$ref()))> otherBytes = ADV_UPCS(Bytes)(other.$ref()); 
		#line 218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_218 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_218 = ADV_UFCS(Iterate)($for_init_218.$ref()); while($for_iter_218.$ref().MoveNext()) {
		auto&& i = $for_iter_218.$ref().GetCurrent(); {
			#line 219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (ADV_UPCS(ToLower)(ADV_UFCS(_operator_subscript)(thisBytes.$ref(), Builtin::UncheckedTag{}, i).$ref()) != ADV_UPCS(ToLower)(ADV_UFCS(_operator_subscript)(otherBytes.$ref(), Builtin::UncheckedTag{}, i).$ref())) {
				#line 220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return ADV_UPCS(ToLower)(ADV_UFCS(_operator_subscript)(thisBytes.$ref(), Builtin::UncheckedTag{}, i).$ref()) <=> ADV_UPCS(ToLower)(ADV_UFCS(_operator_subscript)(otherBytes.$ref(), Builtin::UncheckedTag{}, i).$ref());
			}
		}}}
		#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return Builtin::i32(0);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto $static_TryFromUtf8<$extension_Str_33_str>::get(System::Span<Builtin::u8> bytes)  -> const Builtin::Nullable<$extension_Str_33_str>
	{
		#line 229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (ADV_USFCS((Utf8), IsValid)(bytes)) [[likely]] {
			#line 231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			return ADV_USFCS((Builtin::Str), FromUtf8Unchecked)(bytes);
		}
		#line 233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto $static_FromUtf8<$extension_Str_33_str>::get(System::Span<Builtin::u8> bytes)  -> const typename $extension_Str_33_str
	{
		#line 238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (const auto s = ADV_USFCS((Builtin::Str), TryFromUtf8)(bytes)) {
			{
				#line 238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				auto __tmp0 = *s; const auto& s = __tmp0;
				
				#line 239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return s;
			}
		}
		#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		Builtin::Throw(Builtin::InvalidArgumentException{});
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto $static_FromUtf8Unchecked<$extension_Str_33_str>::get(System::Span<Builtin::u8> bytes) noexcept -> const typename $extension_Str_33_str
	{
		#line 247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_USFCS_TEMPLATE((Unsafe), As<$extension_Str_33_str>)(bytes);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto Contains($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::u8 val)  -> const bool
	{
		#line 254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (!ADV_UPCS(IsAscii)(val.$ref())) {
			#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_UFCS(Contains)(ADV_UPCS(Bytes)($this.$ref()).$ref(), val);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto _operator_in($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::u8 val)  -> const bool
	{
		#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Contains)(ADV_UPCS(Bytes)($this.$ref()).$ref(), val)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto Contains($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::char32 val)  -> const bool
	{
		#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(IndexOf)($this.$ref(), val) != nullptr); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto _operator_in($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::char32 val)  -> const bool
	{
		#line 262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Contains)($this.$ref(), val)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto Contains($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::Str val)  -> const bool
	{
		#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Contains)(ADV_UPCS(Bytes)($this.$ref()).$ref(), ADV_UPCS(Bytes)(val.$ref()))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto _operator_in($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::Str val)  -> const bool
	{
		#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Contains)($this.$ref(), val)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto ContainsAny($extension_Str_33_str const& $this LIFETIMEBOUND, System::Span<Builtin::u8> bytes)  -> const bool
	{
		#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (!ADV_UPCS(IsAscii)(bytes.$ref())) {
			#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_UFCS(ContainsAny)(ADV_UPCS(Bytes)($this.$ref()).$ref(), bytes);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto ContainsAny($extension_Str_33_str const& $this LIFETIMEBOUND, System::Span<Builtin::char32> chars)  -> const bool
	{
		#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_276 = ADV_UPCS(Chars)($this.$ref()); auto $for_iter_276 = ADV_UFCS(Iterate)($for_init_276.$ref()); while($for_iter_276.$ref().MoveNext()) {
		auto&& c = $for_iter_276.$ref().GetCurrent(); {
			#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (ADV_UFCS(_operator_in)(chars, c)) {
				#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return Builtin::Boolean(true);
			}
		}}}
		#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return Builtin::Boolean(false);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto ContainsAny($extension_Str_33_str const& $this LIFETIMEBOUND, Predicate<Builtin::char32> filter)  -> const bool
	{
		#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_286 = ADV_UPCS(Chars)($this.$ref()); auto $for_iter_286 = ADV_UFCS(Iterate)($for_init_286.$ref()); while($for_iter_286.$ref().MoveNext()) {
		auto&& c = $for_iter_286.$ref().GetCurrent(); {
			#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (filter(c)) {
				#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return Builtin::Boolean(true);
			}
		}}}
		#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return Builtin::Boolean(false);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto IndexOf($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::u8 val)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (!ADV_UPCS(IsAscii)(val.$ref())) {
			#line 298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_UFCS(IndexOf)(ADV_UPCS(Bytes)($this.$ref()).$ref(), val);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto IndexOf($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::char32 val)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (ADV_UPCS(IsAscii)(val.$ref())) {
			#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			return ADV_UFCS(IndexOf)(ADV_UPCS(Bytes)($this.$ref()).$ref(), Builtin::Cast<true, Builtin::u8>(val));
		}
		#line 308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		Builtin::InlineArray<Builtin::u32(4U), Builtin::u8> buf{}; 
		#line 309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_UFCS(IndexOf)($this.$ref(), ADV_UFCS(ToUtf8)(val.$ref(), Builtin::MutableRef(buf)));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto IndexOf($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::Str val)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(IndexOf)(ADV_UPCS(Bytes)($this.$ref()).$ref(), ADV_UPCS(Bytes)(val.$ref()))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto IndexOfAny($extension_Str_33_str const& $this LIFETIMEBOUND, System::Span<Builtin::u8> val)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (!ADV_UPCS(IsAscii)(val.$ref())) {
			#line 318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_UFCS(IndexOfAny)(ADV_UPCS(Bytes)($this.$ref()).$ref(), val);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto IndexOfAny($extension_Str_33_str const& $this LIFETIMEBOUND, System::Span<Builtin::char32> val)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_325 = ADV_UPCS(CharsWithOffsets)($this.$ref()); auto $for_iter_325 = ADV_UFCS(Iterate)($for_init_325.$ref()); while($for_iter_325.$ref().MoveNext()) {
		auto&& [offset, c] = $for_iter_325.$ref().GetCurrent(); {
			#line 326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (ADV_UFCS(_operator_in)(val, c)) {
				#line 327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return offset;
			}
		}}}
		#line 330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto IndexOfAny($extension_Str_33_str const& $this LIFETIMEBOUND, Predicate<Builtin::char32> filter)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_335 = ADV_UPCS(CharsWithOffsets)($this.$ref()); auto $for_iter_335 = ADV_UFCS(Iterate)($for_init_335.$ref()); while($for_iter_335.$ref().MoveNext()) {
		auto&& [offset, c] = $for_iter_335.$ref().GetCurrent(); {
			#line 336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (filter(c)) {
				#line 337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return offset;
			}
		}}}
		#line 340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto LastIndexOf($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::u8 val)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (!ADV_UPCS(IsAscii)(val.$ref())) {
			#line 346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_UFCS(LastIndexOf)(ADV_UPCS(Bytes)($this.$ref()).$ref(), val);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto LastIndexOf($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::char32 val)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (ADV_UPCS(IsAscii)(val.$ref())) {
			#line 354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			return ADV_UFCS(LastIndexOf)(ADV_UPCS(Bytes)($this.$ref()).$ref(), Builtin::Cast<true, Builtin::u8>(val));
		}
		#line 356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		Builtin::InlineArray<Builtin::u32(4U), Builtin::u8> buf{}; 
		#line 357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_UFCS(LastIndexOf)($this.$ref(), ADV_UFCS(ToUtf8)(val.$ref(), Builtin::MutableRef(buf)));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto LastIndexOf($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::Str val)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(LastIndexOf)(ADV_UPCS(Bytes)($this.$ref()).$ref(), ADV_UPCS(Bytes)(val.$ref()))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto LastIndexOfAny($extension_Str_33_str const& $this LIFETIMEBOUND, System::Span<Builtin::u8> val)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (!ADV_UPCS(IsAscii)(val.$ref())) {
			#line 366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_UFCS(LastIndexOfAny)(ADV_UPCS(Bytes)($this.$ref()).$ref(), val);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto LastIndexOfAny($extension_Str_33_str const& $this LIFETIMEBOUND, System::Span<Builtin::char32> val)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_373 = ADV_UPCS(Reversed)(ADV_UPCS(CharsWithOffsets)($this.$ref()).$ref()); auto $for_iter_373 = ADV_UFCS(Iterate)($for_init_373.$ref()); while($for_iter_373.$ref().MoveNext()) {
		auto&& [offset, c] = $for_iter_373.$ref().GetCurrent(); {
			#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (ADV_UFCS(_operator_in)(val, c)) {
				#line 375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return offset;
			}
		}}}
		#line 378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto LastIndexOfAny($extension_Str_33_str const& $this LIFETIMEBOUND, Predicate<Builtin::char32> filter)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_383 = ADV_UPCS(CharsWithOffsets)($this.$ref()); auto $for_iter_383 = ADV_UFCS(Iterate)($for_init_383.$ref()); while($for_iter_383.$ref().MoveNext()) {
		auto&& [offset, c] = $for_iter_383.$ref().GetCurrent(); {
			#line 384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (filter(c)) {
				#line 385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return offset;
			}
		}}}
		#line 388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SubstringBefore($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::Str val)  -> const Builtin::Str
	{
		#line 393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (const auto index = ADV_UFCS(IndexOf)($this.$ref(), val)) {
			{
				#line 393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				auto __tmp0 = *index; const auto& index = __tmp0;
				
				#line 394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return ADV_UFCS(_operator_subscript)($this.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(index)>, false>({}, index));
			}
		}
		#line 396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SubstringBeforeLast($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::Str val)  -> const Builtin::Str
	{
		#line 401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (const auto index = ADV_UFCS(LastIndexOf)($this.$ref(), val)) {
			{
				#line 401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				auto __tmp0 = *index; const auto& index = __tmp0;
				
				#line 402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return ADV_UFCS(_operator_subscript)($this.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(index)>, false>({}, index));
			}
		}
		#line 404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SubstringAfter($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::Str val)  -> const Builtin::Nullable<Builtin::Str>
	{
		#line 409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (const auto index = ADV_UFCS(IndexOf)($this.$ref(), val)) {
			{
				#line 409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				auto __tmp0 = *index; const auto& index = __tmp0;
				
				#line 410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return ADV_UFCS(_operator_subscript)($this.$ref(), Builtin::UncheckedTag{}, System::IndexRange((index + ADV_UPCS(ByteLength)(val.$ref())), System::Index::End, false));
			}
		}
		#line 412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SubstringAfterLast($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::Str val)  -> const Builtin::Nullable<Builtin::Str>
	{
		#line 417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (const auto index = ADV_UFCS(LastIndexOf)($this.$ref(), val)) {
			{
				#line 417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				auto __tmp0 = *index; const auto& index = __tmp0;
				
				#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return ADV_UFCS(_operator_subscript)($this.$ref(), Builtin::UncheckedTag{}, System::IndexRange((index + ADV_UPCS(ByteLength)(val.$ref())), System::Index::End, false));
			}
		}
		#line 420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SubstringBetween($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::Str tag)  -> const Builtin::Nullable<Builtin::Str>
	{
		#line 425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (const auto after = ADV_UFCS(SubstringAfter)($this.$ref(), tag)) {
			{
				#line 425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				auto __tmp0 = *after; const auto& after = __tmp0;
				
				#line 426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return ADV_UFCS(SubstringBefore)(after.$ref(), tag);
			}
		}
		#line 428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SubstringBetweenLast($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::Str tag)  -> const Builtin::Nullable<Builtin::Str>
	{
		#line 433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (const auto indexClose = ADV_UFCS(LastIndexOf)($this.$ref(), tag)) {
			{
				#line 433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				auto __tmp0 = *indexClose; const auto& indexClose = __tmp0;
				
				#line 434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				if (const auto indexOpen = ADV_UFCS(LastIndexOf)(ADV_UFCS(_operator_subscript)($this.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(indexClose)>, false>({}, indexClose)).$ref(), tag)) {
					{
						#line 434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
						auto __tmp0 = *indexOpen; const auto& indexOpen = __tmp0;
						
						#line 435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
						return ADV_UFCS(_operator_subscript)($this.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(indexClose)>, false>((indexOpen + ADV_UPCS(ByteLength)(tag.$ref())), indexClose));
					}
				}
			}
		}
		#line 438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SubstringBetween($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::Str open, Builtin::Str close)  -> const Builtin::Nullable<Builtin::Str>
	{
		#line 443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_UFCS(SubstringAfter)($this.$ref(), open).AndThen([&](const auto& value) FORCE_INLINE_LAMBDA_CLANG FORCE_INLINE_LAMBDA { ADV_EXPRESSION_BODY(ADV_UFCS(SubstringBefore)(value.$ref(), close)); });
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SubstringBetweenLast($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::Str open, Builtin::Str close)  -> const Builtin::Nullable<Builtin::Str>
	{
		#line 448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_UFCS(SubstringAfterLast)($this.$ref(), open).AndThen([&](const auto& value) FORCE_INLINE_LAMBDA_CLANG FORCE_INLINE_LAMBDA { ADV_EXPRESSION_BODY(ADV_UFCS(SubstringBefore)(value.$ref(), close)); });
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SubstringsBetween($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::Str open, Builtin::Str close)  -> const SubstringIterator
	{
		#line 452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(SubstringIterator{$this, open, close}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SubstringsBetweenReversed($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::Str open, Builtin::Str close)  -> const ReverseSubstringIterator
	{
		#line 454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ReverseSubstringIterator{$this, open, close}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto Count($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::u8 val)  -> const Builtin::usize
	{
		#line 458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (!ADV_UPCS(IsAscii)(val.$ref())) {
			#line 459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_UFCS(Count)(ADV_UPCS(Bytes)($this.$ref()).$ref(), val);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto Count($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::Str val)  -> const Builtin::usize
	{
		#line 464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Count)(ADV_UPCS(Bytes)($this.$ref()).$ref(), ADV_UPCS(Bytes)(val.$ref()))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 611 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto Split($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::u8 val, StringSplitOptions options)  -> const StringSpliterator
	{
		#line 612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(StringSpliterator{$this, val, options}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 614 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto Split($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::u8 val, Builtin::usize maxCount, StringSplitOptions options)  -> const StringSpliterator
	{
		#line 615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(StringSpliterator{$this, val, maxCount, options}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto Split($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::Str val, StringSplitOptions options)  -> const StringSpliterator
	{
		#line 618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(StringSpliterator{$this, ADV_UPCS(Bytes)(val.$ref()), Builtin::Boolean(true), options}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto Split($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::Str val, Builtin::usize maxCount, StringSplitOptions options)  -> const StringSpliterator
	{
		#line 621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(StringSpliterator{$this, ADV_UPCS(Bytes)(val.$ref()), Builtin::Boolean(true), maxCount, options}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SplitAny($extension_Str_33_str const& $this LIFETIMEBOUND, System::Span<Builtin::u8> vals, StringSplitOptions options)  -> const StringSpliterator
	{
		#line 624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(StringSpliterator{$this, vals, options}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SplitAny($extension_Str_33_str const& $this LIFETIMEBOUND, System::Span<Builtin::u8> vals, Builtin::usize maxCount, StringSplitOptions options)  -> const StringSpliterator
	{
		#line 627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(StringSpliterator{$this, vals, maxCount, options}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SplitAny($extension_Str_33_str const& $this LIFETIMEBOUND, Predicate<Builtin::char32> filter, StringSplitOptions options)  -> const StringSpliterator
	{
		#line 630 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(StringSpliterator{$this, filter, options}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 632 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SplitAny($extension_Str_33_str const& $this LIFETIMEBOUND, Predicate<Builtin::char32> filter, Builtin::usize maxCount, StringSplitOptions options)  -> const StringSpliterator
	{
		#line 633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(StringSpliterator{$this, filter, maxCount, options}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SplitReversed($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::u8 val, StringSplitOptions options)  -> const StringReverseSpliterator
	{
		#line 637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(StringReverseSpliterator{$this, val, options}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SplitReversed($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::u8 val, Builtin::usize maxCount, StringSplitOptions options)  -> const StringReverseSpliterator
	{
		#line 640 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(StringReverseSpliterator{$this, val, maxCount, options}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SplitReversed($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::Str val, StringSplitOptions options)  -> const StringReverseSpliterator
	{
		#line 643 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(StringReverseSpliterator{$this, ADV_UPCS(Bytes)(val.$ref()), Builtin::Boolean(true), options}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SplitReversed($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::Str val, Builtin::usize maxCount, StringSplitOptions options)  -> const StringReverseSpliterator
	{
		#line 646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(StringReverseSpliterator{$this, ADV_UPCS(Bytes)(val.$ref()), Builtin::Boolean(true), maxCount, options}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 648 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SplitAnyReversed($extension_Str_33_str const& $this LIFETIMEBOUND, System::Span<Builtin::u8> vals, StringSplitOptions options)  -> const StringReverseSpliterator
	{
		#line 649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(StringReverseSpliterator{$this, vals, options}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SplitAnyReversed($extension_Str_33_str const& $this LIFETIMEBOUND, System::Span<Builtin::u8> vals, Builtin::usize maxCount, StringSplitOptions options)  -> const StringReverseSpliterator
	{
		#line 652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(StringReverseSpliterator{$this, vals, maxCount, options}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SplitAnyReversed($extension_Str_33_str const& $this LIFETIMEBOUND, Predicate<Builtin::char32> filter, StringSplitOptions options)  -> const StringReverseSpliterator
	{
		#line 655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(StringReverseSpliterator{$this, filter, options}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SplitAnyReversed($extension_Str_33_str const& $this LIFETIMEBOUND, Predicate<Builtin::char32> filter, Builtin::usize maxCount, StringSplitOptions options)  -> const StringReverseSpliterator
	{
		#line 658 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(StringReverseSpliterator{$this, filter, maxCount, options}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto Lines($extension_Str_33_str const& $this LIFETIMEBOUND, StringSplitOptions options)  -> const StringSpliterator
	{
		#line 671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(StringSpliterator{$this, ADV_UPCS(Bytes)(Builtin::Str{"\r\n"}.$ref()), options | StringSplitOptions::ProcessLineEndingAsSingleChar}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto LinesReversed($extension_Str_33_str const& $this LIFETIMEBOUND, StringSplitOptions options)  -> const StringReverseSpliterator
	{
		#line 674 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(StringReverseSpliterator{$this, ADV_UPCS(Bytes)(Builtin::Str{"\r\n"}.$ref()), options | StringSplitOptions::ProcessLineEndingAsSingleChar}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 676 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto StartsWith($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::u8 val)  -> const bool
	{
		#line 677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (!ADV_UPCS(IsAscii)(val.$ref())) {
			#line 678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_UFCS(StartsWith)(ADV_UPCS(Bytes)($this.$ref()).$ref(), val);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto StartsWith($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::char32 val)  -> const bool
	{
		#line 683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(IndexOf)($this.$ref(), val) == Builtin::u32(0U)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 685 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto StartsWith($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::Str val)  -> const bool
	{
		#line 685 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(StartsWith)(ADV_UPCS(Bytes)($this.$ref()).$ref(), ADV_UPCS(Bytes)(val.$ref()))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 687 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto StartsWith($extension_Str_33_str const& $this LIFETIMEBOUND, Predicate<Builtin::char32> filter)  -> const bool
	{
		#line 688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_688 = ADV_UPCS(Chars)($this.$ref()); auto $for_iter_688 = ADV_UFCS(Iterate)($for_init_688.$ref()); while($for_iter_688.$ref().MoveNext()) {
		auto&& c = $for_iter_688.$ref().GetCurrent(); {
			#line 689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (filter(c)) {
				#line 690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return Builtin::Boolean(true);
			}
			#line 692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			return Builtin::Boolean(false);
		}}}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto EndsWith($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::u8 val)  -> const bool
	{
		#line 697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (!ADV_UPCS(IsAscii)(val.$ref())) {
			#line 698 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_UFCS(EndsWith)(ADV_UPCS(Bytes)($this.$ref()).$ref(), val);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto EndsWith($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::char32 val)  -> const bool
	{
		#line 704 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (ADV_UPCS(IsAscii)(val.$ref())) {
			#line 705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			return ADV_UFCS(EndsWith)(ADV_UPCS(Bytes)($this.$ref()).$ref(), Builtin::Cast<true, Builtin::u8>(val));
		}
		#line 707 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		Builtin::InlineArray<Builtin::u32(4U), Builtin::u8> buf{}; 
		#line 708 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_UFCS(EndsWith)($this.$ref(), ADV_UFCS(ToUtf8)(val.$ref(), Builtin::MutableRef(buf)));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto EndsWith($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::Str val)  -> const bool
	{
		#line 711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(EndsWith)(ADV_UPCS(Bytes)($this.$ref()).$ref(), ADV_UPCS(Bytes)(val.$ref()))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 713 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto EndsWith($extension_Str_33_str const& $this LIFETIMEBOUND, Predicate<Builtin::char32> filter)  -> const bool
	{
		#line 714 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_714 = ADV_UPCS(Reversed)(ADV_UPCS(Chars)($this.$ref()).$ref()); auto $for_iter_714 = ADV_UFCS(Iterate)($for_init_714.$ref()); while($for_iter_714.$ref().MoveNext()) {
		auto&& c = $for_iter_714.$ref().GetCurrent(); {
			#line 715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (filter(c)) {
				#line 716 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return Builtin::Boolean(true);
			}
			#line 718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			return Builtin::Boolean(false);
		}}}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 770 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto TrimStart($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::u8 val)  -> const typename $extension_Str_33_str
	{
		#line 771 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (!ADV_UPCS(IsAscii)(val.$ref())) {
			#line 772 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 774 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_USFCS((Builtin::Str), FromUtf8Unchecked)(ADV_UFCS(TrimStart)(ADV_UPCS(Bytes)($this.$ref()).$ref(), val));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 777 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto TrimEnd($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::u8 val)  -> const typename $extension_Str_33_str
	{
		#line 778 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (!ADV_UPCS(IsAscii)(val.$ref())) {
			#line 779 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_USFCS((Builtin::Str), FromUtf8Unchecked)(ADV_UFCS(TrimEnd)(ADV_UPCS(Bytes)($this.$ref()).$ref(), val));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 784 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto Trim($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::u8 val)  -> const typename $extension_Str_33_str
	{
		#line 784 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(TrimEnd)(ADV_UFCS(TrimStart)($this.$ref(), val).$ref(), val)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 786 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto TrimStart($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::char32 val)  -> const typename $extension_Str_33_str
	{
		#line 787 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_787 = ADV_UPCS(CharsWithOffsets)($this.$ref()); auto $for_iter_787 = ADV_UFCS(Iterate)($for_init_787.$ref()); while($for_iter_787.$ref().MoveNext()) {
		auto&& [offset, c] = $for_iter_787.$ref().GetCurrent(); {
			#line 788 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (c != val) {
				#line 789 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return ADV_UFCS(_operator_subscript)($this.$ref(), Builtin::UncheckedTag{}, System::IndexRange(offset, System::Index::End, false));
			}
		}}}
		#line 792 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return {  };
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto TrimEnd($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::char32 val)  -> const typename $extension_Str_33_str
	{
		#line 796 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		Builtin::Auto<decltype(ADV_UPCS(ByteLength)($this.$ref()))> prevOffset = ADV_UPCS(ByteLength)($this.$ref()); 
		#line 797 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_797 = ADV_UPCS(Reversed)(ADV_UPCS(CharsWithOffsets)($this.$ref()).$ref()); auto $for_iter_797 = ADV_UFCS(Iterate)($for_init_797.$ref()); while($for_iter_797.$ref().MoveNext()) {
		auto&& [offset, c] = $for_iter_797.$ref().GetCurrent(); {
			#line 798 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (c != val) {
				#line 799 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return ADV_UFCS(_operator_subscript)($this.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(prevOffset)>, false>({}, prevOffset));
			}
			#line 801 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			prevOffset = offset;
		}}}
		#line 803 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return {  };
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 806 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto Trim($extension_Str_33_str const& $this LIFETIMEBOUND, Builtin::char32 val)  -> const typename $extension_Str_33_str
	{
		#line 806 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(TrimEnd)(ADV_UFCS(TrimStart)($this.$ref(), val).$ref(), val)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 808 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto TrimStart($extension_Str_33_str const& $this LIFETIMEBOUND, System::Span<Builtin::char32> val)  -> const typename $extension_Str_33_str
	{
		#line 809 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_809 = ADV_UPCS(CharsWithOffsets)($this.$ref()); auto $for_iter_809 = ADV_UFCS(Iterate)($for_init_809.$ref()); while($for_iter_809.$ref().MoveNext()) {
		auto&& [offset, c] = $for_iter_809.$ref().GetCurrent(); {
			#line 810 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (!ADV_UFCS(_operator_in)(val, c)) {
				#line 811 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return ADV_UFCS(_operator_subscript)($this.$ref(), Builtin::UncheckedTag{}, System::IndexRange(offset, System::Index::End, false));
			}
		}}}
		#line 814 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return {  };
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 817 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto TrimEnd($extension_Str_33_str const& $this LIFETIMEBOUND, System::Span<Builtin::char32> val)  -> const typename $extension_Str_33_str
	{
		#line 818 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		Builtin::Auto<decltype(ADV_UPCS(ByteLength)($this.$ref()))> prevOffset = ADV_UPCS(ByteLength)($this.$ref()); 
		#line 819 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_819 = ADV_UPCS(Reversed)(ADV_UPCS(CharsWithOffsets)($this.$ref()).$ref()); auto $for_iter_819 = ADV_UFCS(Iterate)($for_init_819.$ref()); while($for_iter_819.$ref().MoveNext()) {
		auto&& [offset, c] = $for_iter_819.$ref().GetCurrent(); {
			#line 820 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (!ADV_UFCS(_operator_in)(val, c)) {
				#line 821 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return ADV_UFCS(_operator_subscript)($this.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(prevOffset)>, false>({}, prevOffset));
			}
			#line 823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			prevOffset = offset;
		}}}
		#line 825 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return {  };
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto Trim($extension_Str_33_str const& $this LIFETIMEBOUND, System::Span<Builtin::char32> val)  -> const typename $extension_Str_33_str
	{
		#line 828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(TrimEnd)(ADV_UFCS(TrimStart)($this.$ref(), val).$ref(), val)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto TrimStart($extension_Str_33_str const& $this LIFETIMEBOUND, Predicate<Builtin::char32> filter)  -> const typename $extension_Str_33_str
	{
		#line 831 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_831 = ADV_UPCS(CharsWithOffsets)($this.$ref()); auto $for_iter_831 = ADV_UFCS(Iterate)($for_init_831.$ref()); while($for_iter_831.$ref().MoveNext()) {
		auto&& [offset, c] = $for_iter_831.$ref().GetCurrent(); {
			#line 832 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (!filter(c)) {
				#line 833 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return ADV_UFCS(_operator_subscript)($this.$ref(), Builtin::UncheckedTag{}, System::IndexRange(offset, System::Index::End, false));
			}
		}}}
		#line 836 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return {  };
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 839 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto TrimEnd($extension_Str_33_str const& $this LIFETIMEBOUND, Predicate<Builtin::char32> filter)  -> const typename $extension_Str_33_str
	{
		#line 840 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		Builtin::Auto<decltype(ADV_UPCS(ByteLength)($this.$ref()))> prevOffset = ADV_UPCS(ByteLength)($this.$ref()); 
		#line 841 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_841 = ADV_UPCS(Reversed)(ADV_UPCS(CharsWithOffsets)($this.$ref()).$ref()); auto $for_iter_841 = ADV_UFCS(Iterate)($for_init_841.$ref()); while($for_iter_841.$ref().MoveNext()) {
		auto&& [offset, c] = $for_iter_841.$ref().GetCurrent(); {
			#line 842 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (!filter(c)) {
				#line 843 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return ADV_UFCS(_operator_subscript)($this.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(prevOffset)>, false>({}, prevOffset));
			}
			#line 845 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			prevOffset = offset;
		}}}
		#line 847 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return {  };
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 850 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto Trim($extension_Str_33_str const& $this LIFETIMEBOUND, Predicate<Builtin::char32> filter)  -> const typename $extension_Str_33_str
	{
		#line 850 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(TrimEnd)(ADV_UFCS(TrimStart)($this.$ref(), filter).$ref(), filter)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getByteLength($extension_Str_33_str const & $this ) -> const Builtin::usize
	{
		#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GetByteLength)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsEmpty($extension_Str_33_str const & $this ) -> const bool
	{
		#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(ByteLength)($this.$ref()) == Builtin::i32(0)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getBytes($extension_Str_33_str const & $this ) -> const System::Span<Builtin::u8>
	{
		#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Span<Builtin::u8>), UnsafeCreate)(ADV_UFCS(GetDataReference)($this.$ref()), ADV_UFCS(GetByteLength)($this.$ref()))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getChars($extension_Str_33_str const & $this ) -> const CharIterator
	{
		#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(CharIterator{$this}); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getCharsWithOffsets($extension_Str_33_str const & $this ) -> const CharIndicesIterator
	{
		#line 117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(CharIndicesIterator{$this}); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getCharCount($extension_Str_33_str const & $this ) -> const Builtin::usize
	{
		#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		Builtin::usize count{}; 
		#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_121 = ADV_UPCS(Chars)($this.$ref()); auto $for_iter_121 = ADV_UFCS(Iterate)($for_init_121.$ref()); while($for_iter_121.$ref().MoveNext()) {
		auto&& c = $for_iter_121.$ref().GetCurrent(); {
			#line 122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			++count;
		}}}
		#line 125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return count;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsAscii($extension_Str_33_str const & $this ) -> const bool
	{
		#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAscii)(ADV_UPCS(Bytes)($this.$ref()).$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsAsciiWhiteSpace($extension_Str_33_str const & $this ) -> const bool
	{
		#line 468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_468 = ADV_UPCS(Bytes)($this.$ref()); auto $for_iter_468 = ADV_UFCS(Iterate)($for_init_468.$ref()); while($for_iter_468.$ref().MoveNext()) {
		auto&& b = $for_iter_468.$ref().GetCurrent(); {
			#line 469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (!ADV_UPCS(IsAsciiWhiteSpace)(b.$ref())) {
				#line 470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return Builtin::Boolean(false);
			}
		}}}
		#line 473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return Builtin::Boolean(true);
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsWhiteSpace($extension_Str_33_str const & $this ) -> const bool
	{
		#line 477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_477 = ADV_UPCS(Chars)($this.$ref()); auto $for_iter_477 = ADV_UFCS(Iterate)($for_init_477.$ref()); while($for_iter_477.$ref().MoveNext()) {
		auto&& c = $for_iter_477.$ref().GetCurrent(); {
			#line 478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (!ADV_UPCS(IsWhiteSpace)(c.$ref())) {
				#line 479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return Builtin::Boolean(false);
			}
		}}}
		#line 482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return Builtin::Boolean(true);
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsAsciiUpper($extension_Str_33_str const & $this ) -> const bool
	{
		#line 486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_486 = ADV_UPCS(Bytes)($this.$ref()); auto $for_iter_486 = ADV_UFCS(Iterate)($for_init_486.$ref()); while($for_iter_486.$ref().MoveNext()) {
		auto&& b = $for_iter_486.$ref().GetCurrent(); {
			#line 487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (!ADV_UPCS(IsAscii)(b.$ref()) || (ADV_UPCS(IsAsciiLetter)(b.$ref()) && !ADV_UPCS(IsLetterUpper)(b.$ref()))) {
				#line 488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return Builtin::Boolean(false);
			}
		}}}
		#line 491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return !ADV_UPCS(IsEmpty)($this.$ref());
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsUpper($extension_Str_33_str const & $this ) -> const bool
	{
		#line 495 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_495 = ADV_UPCS(Chars)($this.$ref()); auto $for_iter_495 = ADV_UFCS(Iterate)($for_init_495.$ref()); while($for_iter_495.$ref().MoveNext()) {
		auto&& c = $for_iter_495.$ref().GetCurrent(); {
			#line 496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (ADV_UPCS(IsLetter)(c.$ref()) && !ADV_UPCS(IsLetterUpper)(c.$ref())) {
				#line 497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return Builtin::Boolean(false);
			}
		}}}
		#line 500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return !ADV_UPCS(IsEmpty)($this.$ref());
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsAsciiLower($extension_Str_33_str const & $this ) -> const bool
	{
		#line 504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_504 = ADV_UPCS(Bytes)($this.$ref()); auto $for_iter_504 = ADV_UFCS(Iterate)($for_init_504.$ref()); while($for_iter_504.$ref().MoveNext()) {
		auto&& b = $for_iter_504.$ref().GetCurrent(); {
			#line 505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (!ADV_UPCS(IsAscii)(b.$ref()) || (ADV_UPCS(IsAsciiLetter)(b.$ref()) && !ADV_UPCS(IsLetterLower)(b.$ref()))) {
				#line 506 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return Builtin::Boolean(false);
			}
		}}}
		#line 509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return !ADV_UPCS(IsEmpty)($this.$ref());
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsLower($extension_Str_33_str const & $this ) -> const bool
	{
		#line 513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_513 = ADV_UPCS(Chars)($this.$ref()); auto $for_iter_513 = ADV_UFCS(Iterate)($for_init_513.$ref()); while($for_iter_513.$ref().MoveNext()) {
		auto&& c = $for_iter_513.$ref().GetCurrent(); {
			#line 514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (ADV_UPCS(IsLetter)(c.$ref()) && !ADV_UPCS(IsLetterLower)(c.$ref())) {
				#line 515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return Builtin::Boolean(false);
			}
		}}}
		#line 518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return !ADV_UPCS(IsEmpty)($this.$ref());
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsAsciiAlphabetic($extension_Str_33_str const & $this ) -> const bool
	{
		#line 522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_522 = ADV_UPCS(Bytes)($this.$ref()); auto $for_iter_522 = ADV_UFCS(Iterate)($for_init_522.$ref()); while($for_iter_522.$ref().MoveNext()) {
		auto&& b = $for_iter_522.$ref().GetCurrent(); {
			#line 523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (!ADV_UPCS(IsAsciiLetter)(b.$ref())) {
				#line 524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return Builtin::Boolean(false);
			}
		}}}
		#line 527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return !ADV_UPCS(IsEmpty)($this.$ref());
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsAlphabetic($extension_Str_33_str const & $this ) -> const bool
	{
		#line 531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_531 = ADV_UPCS(Chars)($this.$ref()); auto $for_iter_531 = ADV_UFCS(Iterate)($for_init_531.$ref()); while($for_iter_531.$ref().MoveNext()) {
		auto&& c = $for_iter_531.$ref().GetCurrent(); {
			#line 532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (!ADV_UPCS(IsLetter)(c.$ref())) {
				#line 533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return Builtin::Boolean(false);
			}
		}}}
		#line 536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return !ADV_UPCS(IsEmpty)($this.$ref());
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsAsciiAlphanumeric($extension_Str_33_str const & $this ) -> const bool
	{
		#line 540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_540 = ADV_UPCS(Bytes)($this.$ref()); auto $for_iter_540 = ADV_UFCS(Iterate)($for_init_540.$ref()); while($for_iter_540.$ref().MoveNext()) {
		auto&& b = $for_iter_540.$ref().GetCurrent(); {
			#line 541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (!ADV_UPCS(IsAsciiLetterOrDigit)(b.$ref())) {
				#line 542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return Builtin::Boolean(false);
			}
		}}}
		#line 545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return !ADV_UPCS(IsEmpty)($this.$ref());
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsAlphanumeric($extension_Str_33_str const & $this ) -> const bool
	{
		#line 549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_549 = ADV_UPCS(Chars)($this.$ref()); auto $for_iter_549 = ADV_UFCS(Iterate)($for_init_549.$ref()); while($for_iter_549.$ref().MoveNext()) {
		auto&& c = $for_iter_549.$ref().GetCurrent(); {
			#line 550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (!ADV_UPCS(IsLetterOrDigit)(c.$ref())) {
				#line 551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return Builtin::Boolean(false);
			}
		}}}
		#line 554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return !ADV_UPCS(IsEmpty)($this.$ref());
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsNumeric($extension_Str_33_str const & $this ) -> const bool
	{
		#line 558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_558 = ADV_UPCS(Bytes)($this.$ref()); auto $for_iter_558 = ADV_UFCS(Iterate)($for_init_558.$ref()); while($for_iter_558.$ref().MoveNext()) {
		auto&& b = $for_iter_558.$ref().GetCurrent(); {
			#line 559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (!ADV_UPCS(IsAsciiDigit)(b.$ref())) {
				#line 560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return Builtin::Boolean(false);
			}
		}}}
		#line 563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return !ADV_UPCS(IsEmpty)($this.$ref());
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsDecimal($extension_Str_33_str const & $this ) -> const bool
	{
		#line 567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_567 = ADV_UPCS(Bytes)($this.$ref()); auto $for_iter_567 = ADV_UFCS(Iterate)($for_init_567.$ref()); while($for_iter_567.$ref().MoveNext()) {
		auto&& b = $for_iter_567.$ref().GetCurrent(); {
			#line 568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (!ADV_UPCS(IsAsciiDigit)(b.$ref()) && b != Builtin::u8('.') && b != Builtin::u8(',')) {
				#line 569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return Builtin::Boolean(false);
			}
		}}}
		#line 572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return !ADV_UPCS(IsEmpty)($this.$ref());
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsHexadecimal($extension_Str_33_str const & $this ) -> const bool
	{
		#line 576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_576 = ADV_UPCS(Bytes)($this.$ref()); auto $for_iter_576 = ADV_UFCS(Iterate)($for_init_576.$ref()); while($for_iter_576.$ref().MoveNext()) {
		auto&& c = $for_iter_576.$ref().GetCurrent(); {
			#line 577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (!ADV_UPCS(IsHexDigit)(c.$ref())) {
				#line 578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return Builtin::Boolean(false);
			}
		}}}
		#line 581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return !ADV_UPCS(IsEmpty)($this.$ref());
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 584 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsValidIdentifier($extension_Str_33_str const & $this ) -> const bool
	{
		#line 585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (ADV_UPCS(ByteLength)($this.$ref()) == Builtin::u32(0U)) {
			#line 586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			return Builtin::Boolean(false);
		}
		#line 588 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Bytes)($this.$ref()))> bytes = ADV_UPCS(Bytes)($this.$ref()); 
		#line 589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (!ADV_UPCS(IsIdentifierStartChar)(ADV_UFCS(_operator_subscript)(bytes.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)).$ref())) {
			#line 590 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			return Builtin::Boolean(false);
		}
		#line 592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_592 = bytes; auto $for_iter_592 = ADV_UFCS(Iterate)($for_init_592.$ref()); while($for_iter_592.$ref().MoveNext()) {
		auto&& b = $for_iter_592.$ref().GetCurrent(); {
			#line 593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (!ADV_UPCS(IsIdentifierChar)(b.$ref())) {
				#line 594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return Builtin::Boolean(false);
			}
		}}}
		#line 597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return Builtin::Boolean(true);
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsAsciiPrintable($extension_Str_33_str const & $this ) -> const bool
	{
		#line 601 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_601 = ADV_UPCS(Bytes)($this.$ref()); auto $for_iter_601 = ADV_UFCS(Iterate)($for_init_601.$ref()); while($for_iter_601.$ref().MoveNext()) {
		auto&& b = $for_iter_601.$ref().GetCurrent(); {
			#line 602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (!ADV_UPCS(IsAsciiPrintable)(b.$ref())) {
				#line 603 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return Builtin::Boolean(false);
			}
		}}}
		#line 606 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return !ADV_UPCS(IsEmpty)($this.$ref());
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto getSplitWhitespace($extension_Str_33_str const & $this ) -> const StringSpliterator
	{
		#line 661 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(StringSpliterator{$this, ADV_UPCS(Bytes)(Builtin::Str{""}.$ref()), StringSplitOptions::SkipEmptyEntries}); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 663 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto getSplitWhitespaceReversed($extension_Str_33_str const & $this ) -> const StringReverseSpliterator
	{
		#line 664 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(StringReverseSpliterator{$this, ADV_UPCS(Bytes)(Builtin::Str{""}.$ref()), StringSplitOptions::SkipEmptyEntries}); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto getLines($extension_Str_33_str const & $this ) -> const StringSpliterator
	{
		#line 666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Lines)($this.$ref(), StringSplitOptions::None)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto getLinesReversed($extension_Str_33_str const & $this ) -> const StringReverseSpliterator
	{
		#line 668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(LinesReversed)($this.$ref(), StringSplitOptions::None)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 722 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getTrimAsciiStart($extension_Str_33_str const & $this ) -> const $extension_Str_33_str
	{
		#line 723 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Bytes)($this.$ref()))> bytes = ADV_UPCS(Bytes)($this.$ref()); 
		#line 724 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(bytes.$ref()))> length = ADV_UPCS(Length)(bytes.$ref()); 
		#line 725 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		Builtin::usize start{}; 
		#line 726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		for (; (start <=> length) < 0; start++) 
		{
			#line 727 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (!ADV_UPCS(IsAsciiWhiteSpace)(ADV_UFCS(_operator_subscript)(bytes.$ref(), Builtin::UncheckedTag{}, start).$ref())) {
				#line 728 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				break;
			}
		}
		#line 731 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return (start <=> length) < 0 ? ADV_UFCS(_operator_subscript)($this.$ref(), Builtin::UncheckedTag{}, System::IndexRange(start, System::Index::End, false)) : $extension_Str_33_str{};
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 734 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getTrimAsciiEnd($extension_Str_33_str const & $this ) -> const $extension_Str_33_str
	{
		#line 735 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Bytes)($this.$ref()))> bytes = ADV_UPCS(Bytes)($this.$ref()); 
		#line 736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(bytes.$ref()))> length = ADV_UPCS(Length)(bytes.$ref()); 
		#line 737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		Builtin::Auto<decltype(length - Builtin::u32(1U))> end = length - Builtin::u32(1U); 
		#line 738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		for (; (end <=> length) < 0; ADV_UFCS(_operator_sub_sub_mod_postfix)(end)) 
		{
			#line 739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (!ADV_UPCS(IsAsciiWhiteSpace)(ADV_UFCS(_operator_subscript)(bytes.$ref(), Builtin::UncheckedTag{}, end).$ref())) {
				#line 740 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				break;
			}
		}
		#line 743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return (end <=> length) < 0 ? ADV_UFCS(_operator_subscript)($this.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(end)>, true>({}, end)) : $extension_Str_33_str{};
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 746 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getTrimAscii($extension_Str_33_str const & $this ) -> const $extension_Str_33_str
	{
		#line 746 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(TrimAsciiEnd)(ADV_UPCS(TrimAsciiStart)($this.$ref()).$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 748 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto getTrimStart($extension_Str_33_str const & $this ) -> const $extension_Str_33_str
	{
		#line 749 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_749 = ADV_UPCS(CharsWithOffsets)($this.$ref()); auto $for_iter_749 = ADV_UFCS(Iterate)($for_init_749.$ref()); while($for_iter_749.$ref().MoveNext()) {
		auto&& [offset, c] = $for_iter_749.$ref().GetCurrent(); {
			#line 750 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (!ADV_UPCS(IsWhiteSpace)(c.$ref())) {
				#line 751 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return ADV_UFCS(_operator_subscript)($this.$ref(), Builtin::UncheckedTag{}, System::IndexRange(offset, System::Index::End, false));
			}
		}}}
		#line 754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return {  };
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 757 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto getTrimEnd($extension_Str_33_str const & $this ) -> const $extension_Str_33_str
	{
		#line 758 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		Builtin::Auto<decltype(ADV_UPCS(ByteLength)($this.$ref()))> prevOffset = ADV_UPCS(ByteLength)($this.$ref()); 
		#line 759 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_759 = ADV_UPCS(Reversed)(ADV_UPCS(CharsWithOffsets)($this.$ref()).$ref()); auto $for_iter_759 = ADV_UFCS(Iterate)($for_init_759.$ref()); while($for_iter_759.$ref().MoveNext()) {
		auto&& [offset, c] = $for_iter_759.$ref().GetCurrent(); {
			#line 760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (!ADV_UPCS(IsWhiteSpace)(c.$ref())) {
				#line 761 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return ADV_UFCS(_operator_subscript)($this.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(prevOffset)>, false>({}, prevOffset));
			}
			#line 763 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			prevOffset = offset;
		}}}
		#line 765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return {  };
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 768 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto getTrim($extension_Str_33_str const & $this ) -> const $extension_Str_33_str
	{
		#line 768 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(TrimEnd)(ADV_UPCS(TrimStart)($this.$ref()).$ref())); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	

}