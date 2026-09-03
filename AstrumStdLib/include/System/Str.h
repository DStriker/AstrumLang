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
#include "System/Globalization/TextElementIterator.h"
using namespace System::Globalization;

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
#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
using Str = Builtin::Str;
#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
using ByteSpan = System::Span<Builtin::u8>;
//###############################################################################
//# Type definitions
//###############################################################################
	} namespace $extensions { using namespace System;
#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	using $extension_Str_12_byte_brack__and__brack_ = System::Span<Builtin::u8>;
	#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsAscii($extension_Str_12_byte_brack__and__brack_ const& $this ) -> const bool;
	} namespace System{
using $extensions::getIsAscii;

		} namespace $extensions { using namespace System;
#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	using $extension_Str_28_char = Builtin::char32;
	#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto ToUtf8($extension_Str_28_char const& $this LIFETIMEBOUND, System::MutableSpan<Builtin::u8> dst)  -> const Builtin::Str;
	} namespace System{
using $extensions::ToUtf8;

		} namespace $extensions { using namespace System;
#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	using $extension_Str_34_str = Builtin::Str;
	#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr const $extension_Str_34_str getAt($extension_Str_34_str const& $this LIFETIMEBOUND, IndexRange range);
	#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr const $extension_Str_34_str _operator_subscript($extension_Str_34_str const& $this LIFETIMEBOUND, IndexRange range) { return getAt($this, range); }
	#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr const $extension_Str_34_str getAt($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::UncheckedTag, IndexRange range);
	#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	[[clang::annotate("UserAttr: Unchecked")]] inline constexpr const $extension_Str_34_str _operator_subscript($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::UncheckedTag, IndexRange range) { return getAt($this, Builtin::UncheckedTag{}, range); }
	#line 68 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto IsUtf8CodePointBoundary($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::usize index)  -> const bool;
	#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto FloorIndexToUtf8CodePointBoundary($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::usize index)  -> const Builtin::usize;
	#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto CeilIndexToUtf8CodePointBoundary($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::usize index)  -> const Builtin::usize;
	#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto Substring($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::usize start)  -> const typename $extension_Str_34_str;
	#line 153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto Substring($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::usize start, Builtin::usize length)  -> const typename $extension_Str_34_str;
	#line 165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto Equals($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::Str other)  -> const bool;
	#line 208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto EqualsAsciiIgnoreCase($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::Str other)  -> const bool;
	#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto CompareAsciiIgnoreCase($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::Str other)  -> const Builtin::i32;
	#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	template<class __TT> struct $static_TryFromUtf8; template<> struct $static_TryFromUtf8<$extension_Str_34_str> { static inline constexpr auto get(System::Span<Builtin::u8> bytes)  -> const Builtin::Nullable<$extension_Str_34_str>; };
	#line 250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	template<class __TT> struct $static_FromUtf8; template<> struct $static_FromUtf8<$extension_Str_34_str> { static inline constexpr auto get(System::Span<Builtin::u8> bytes)  -> const typename $extension_Str_34_str; };
	#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	template<class __TT> struct $static_FromUtf8Unchecked; template<> struct $static_FromUtf8Unchecked<$extension_Str_34_str> { static inline constexpr auto get(System::Span<Builtin::u8> bytes) noexcept -> const typename $extension_Str_34_str; };
	#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto Contains($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::u8 val)  -> const bool;
	#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto _operator_in($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::u8 val)  -> const bool;
	#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto Contains($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::char32 val)  -> const bool;
	#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto _operator_in($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::char32 val)  -> const bool;
	#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto Contains($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::Str val)  -> const bool;
	#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto _operator_in($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::Str val)  -> const bool;
	#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto ContainsAny($extension_Str_34_str const& $this LIFETIMEBOUND, System::Span<Builtin::u8> bytes)  -> const bool;
	#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto ContainsAny($extension_Str_34_str const& $this LIFETIMEBOUND, System::Span<Builtin::char32> chars)  -> const bool;
	#line 298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto ContainsAny($extension_Str_34_str const& $this LIFETIMEBOUND, Predicate<Builtin::char32> filter)  -> const bool;
	#line 309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto IndexOf($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::u8 val)  -> const Builtin::Nullable<Builtin::usize>;
	#line 317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto IndexOf($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::char32 val)  -> const Builtin::Nullable<Builtin::usize>;
	#line 326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto IndexOf($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::Str val)  -> const Builtin::Nullable<Builtin::usize>;
	#line 329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto IndexOfAny($extension_Str_34_str const& $this LIFETIMEBOUND, System::Span<Builtin::u8> val)  -> const Builtin::Nullable<Builtin::usize>;
	#line 337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto IndexOfAny($extension_Str_34_str const& $this LIFETIMEBOUND, System::Span<Builtin::char32> val)  -> const Builtin::Nullable<Builtin::usize>;
	#line 347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto IndexOfAny($extension_Str_34_str const& $this LIFETIMEBOUND, Predicate<Builtin::char32> filter)  -> const Builtin::Nullable<Builtin::usize>;
	#line 357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto LastIndexOf($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::u8 val)  -> const Builtin::Nullable<Builtin::usize>;
	#line 365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto LastIndexOf($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::char32 val)  -> const Builtin::Nullable<Builtin::usize>;
	#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto LastIndexOf($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::Str val)  -> const Builtin::Nullable<Builtin::usize>;
	#line 377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto LastIndexOfAny($extension_Str_34_str const& $this LIFETIMEBOUND, System::Span<Builtin::u8> val)  -> const Builtin::Nullable<Builtin::usize>;
	#line 385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto LastIndexOfAny($extension_Str_34_str const& $this LIFETIMEBOUND, System::Span<Builtin::char32> val)  -> const Builtin::Nullable<Builtin::usize>;
	#line 395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto LastIndexOfAny($extension_Str_34_str const& $this LIFETIMEBOUND, Predicate<Builtin::char32> filter)  -> const Builtin::Nullable<Builtin::usize>;
	#line 405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SubstringBefore($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::Str val)  -> const Builtin::Str;
	#line 413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SubstringBeforeLast($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::Str val)  -> const Builtin::Str;
	#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SubstringAfter($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::Str val)  -> const Builtin::Nullable<Builtin::Str>;
	#line 429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SubstringAfterLast($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::Str val)  -> const Builtin::Nullable<Builtin::Str>;
	#line 437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SubstringBetween($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::Str tag)  -> const Builtin::Nullable<Builtin::Str>;
	#line 445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SubstringBetweenLast($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::Str tag)  -> const Builtin::Nullable<Builtin::Str>;
	#line 455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SubstringBetween($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::Str open, Builtin::Str close)  -> const Builtin::Nullable<Builtin::Str>;
	#line 460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SubstringBetweenLast($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::Str open, Builtin::Str close)  -> const Builtin::Nullable<Builtin::Str>;
	#line 465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SubstringsBetween($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::Str open, Builtin::Str close)  -> const SubstringIterator;
	#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SubstringsBetweenReversed($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::Str open, Builtin::Str close)  -> const ReverseSubstringIterator;
	#line 470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto Count($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::u8 val)  -> const Builtin::usize;
	#line 477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto Count($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::Str val)  -> const Builtin::usize;
	#line 624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto Split($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::u8 val, StringSplitOptions options = StringSplitOptions::None)  -> const StringSpliterator;
	#line 627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto Split($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::u8 val, Builtin::usize maxCount, StringSplitOptions options = StringSplitOptions::None)  -> const StringSpliterator;
	#line 630 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto Split($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::Str val, StringSplitOptions options = StringSplitOptions::None)  -> const StringSpliterator;
	#line 633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto Split($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::Str val, Builtin::usize maxCount, StringSplitOptions options = StringSplitOptions::None)  -> const StringSpliterator;
	#line 636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SplitAny($extension_Str_34_str const& $this LIFETIMEBOUND, System::Span<Builtin::u8> vals, StringSplitOptions options = StringSplitOptions::None)  -> const StringSpliterator;
	#line 639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SplitAny($extension_Str_34_str const& $this LIFETIMEBOUND, System::Span<Builtin::u8> vals, Builtin::usize maxCount, StringSplitOptions options = StringSplitOptions::None)  -> const StringSpliterator;
	#line 642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SplitAny($extension_Str_34_str const& $this LIFETIMEBOUND, Predicate<Builtin::char32> filter, StringSplitOptions options = StringSplitOptions::None)  -> const StringSpliterator;
	#line 645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SplitAny($extension_Str_34_str const& $this LIFETIMEBOUND, Predicate<Builtin::char32> filter, Builtin::usize maxCount, StringSplitOptions options = StringSplitOptions::None)  -> const StringSpliterator;
	#line 649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SplitReversed($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::u8 val, StringSplitOptions options = StringSplitOptions::None)  -> const StringReverseSpliterator;
	#line 652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SplitReversed($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::u8 val, Builtin::usize maxCount, StringSplitOptions options = StringSplitOptions::None)  -> const StringReverseSpliterator;
	#line 655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SplitReversed($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::Str val, StringSplitOptions options = StringSplitOptions::None)  -> const StringReverseSpliterator;
	#line 658 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SplitReversed($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::Str val, Builtin::usize maxCount, StringSplitOptions options = StringSplitOptions::None)  -> const StringReverseSpliterator;
	#line 661 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SplitAnyReversed($extension_Str_34_str const& $this LIFETIMEBOUND, System::Span<Builtin::u8> vals, StringSplitOptions options = StringSplitOptions::None)  -> const StringReverseSpliterator;
	#line 664 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SplitAnyReversed($extension_Str_34_str const& $this LIFETIMEBOUND, System::Span<Builtin::u8> vals, Builtin::usize maxCount, StringSplitOptions options = StringSplitOptions::None)  -> const StringReverseSpliterator;
	#line 667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SplitAnyReversed($extension_Str_34_str const& $this LIFETIMEBOUND, Predicate<Builtin::char32> filter, StringSplitOptions options = StringSplitOptions::None)  -> const StringReverseSpliterator;
	#line 670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SplitAnyReversed($extension_Str_34_str const& $this LIFETIMEBOUND, Predicate<Builtin::char32> filter, Builtin::usize maxCount, StringSplitOptions options = StringSplitOptions::None)  -> const StringReverseSpliterator;
	#line 683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto Lines($extension_Str_34_str const& $this LIFETIMEBOUND, StringSplitOptions options)  -> const StringSpliterator;
	#line 686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto LinesReversed($extension_Str_34_str const& $this LIFETIMEBOUND, StringSplitOptions options)  -> const StringReverseSpliterator;
	#line 689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto StartsWith($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::u8 val)  -> const bool;
	#line 696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto StartsWith($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::char32 val)  -> const bool;
	#line 698 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto StartsWith($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::Str val)  -> const bool;
	#line 700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto StartsWith($extension_Str_34_str const& $this LIFETIMEBOUND, Predicate<Builtin::char32> filter)  -> const bool;
	#line 709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto EndsWith($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::u8 val)  -> const bool;
	#line 716 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto EndsWith($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::char32 val)  -> const bool;
	#line 724 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto EndsWith($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::Str val)  -> const bool;
	#line 726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto EndsWith($extension_Str_34_str const& $this LIFETIMEBOUND, Predicate<Builtin::char32> filter)  -> const bool;
	#line 783 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto TrimStart($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::u8 val)  -> const typename $extension_Str_34_str;
	#line 790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto TrimEnd($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::u8 val)  -> const typename $extension_Str_34_str;
	#line 797 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto Trim($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::u8 val)  -> const typename $extension_Str_34_str;
	#line 799 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto TrimStart($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::char32 val)  -> const typename $extension_Str_34_str;
	#line 808 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto TrimEnd($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::char32 val)  -> const typename $extension_Str_34_str;
	#line 819 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto Trim($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::char32 val)  -> const typename $extension_Str_34_str;
	#line 821 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto TrimStart($extension_Str_34_str const& $this LIFETIMEBOUND, System::Span<Builtin::char32> val)  -> const typename $extension_Str_34_str;
	#line 830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto TrimEnd($extension_Str_34_str const& $this LIFETIMEBOUND, System::Span<Builtin::char32> val)  -> const typename $extension_Str_34_str;
	#line 841 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto Trim($extension_Str_34_str const& $this LIFETIMEBOUND, System::Span<Builtin::char32> val)  -> const typename $extension_Str_34_str;
	#line 843 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto TrimStart($extension_Str_34_str const& $this LIFETIMEBOUND, Predicate<Builtin::char32> filter)  -> const typename $extension_Str_34_str;
	#line 852 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto TrimEnd($extension_Str_34_str const& $this LIFETIMEBOUND, Predicate<Builtin::char32> filter)  -> const typename $extension_Str_34_str;
	#line 863 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto Trim($extension_Str_34_str const& $this LIFETIMEBOUND, Predicate<Builtin::char32> filter)  -> const typename $extension_Str_34_str;
	#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getByteLength($extension_Str_34_str const& $this ) -> const Builtin::usize;
	#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsEmpty($extension_Str_34_str const& $this ) -> const bool;
	#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getBytes($extension_Str_34_str const& $this ) -> const System::Span<Builtin::u8>;
	#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getChars($extension_Str_34_str const& $this ) -> const CharIterator;
	#line 118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getCharsWithOffsets($extension_Str_34_str const& $this ) -> const CharIndicesIterator;
	#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getCharCount($extension_Str_34_str const& $this ) -> const Builtin::usize;
	#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto getTextElements($extension_Str_34_str const& $this ) -> const TextElementIterator;
	#line 131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto getTextElementsWithOffsets($extension_Str_34_str const& $this ) -> const TextElementIndicesIterator;
	#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto getTextElementCount($extension_Str_34_str const& $this ) -> const Builtin::usize;
	#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsAscii($extension_Str_34_str const& $this ) -> const bool;
	#line 480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsAsciiWhiteSpace($extension_Str_34_str const& $this ) -> const bool;
	#line 489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsWhiteSpace($extension_Str_34_str const& $this ) -> const bool;
	#line 498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsAsciiUpper($extension_Str_34_str const& $this ) -> const bool;
	#line 507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsUpper($extension_Str_34_str const& $this ) -> const bool;
	#line 516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsAsciiLower($extension_Str_34_str const& $this ) -> const bool;
	#line 525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsLower($extension_Str_34_str const& $this ) -> const bool;
	#line 534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsAsciiAlphabetic($extension_Str_34_str const& $this ) -> const bool;
	#line 543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsAlphabetic($extension_Str_34_str const& $this ) -> const bool;
	#line 552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsAsciiAlphanumeric($extension_Str_34_str const& $this ) -> const bool;
	#line 561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsAlphanumeric($extension_Str_34_str const& $this ) -> const bool;
	#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsNumeric($extension_Str_34_str const& $this ) -> const bool;
	#line 579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsDecimal($extension_Str_34_str const& $this ) -> const bool;
	#line 588 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsHexadecimal($extension_Str_34_str const& $this ) -> const bool;
	#line 597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsValidIdentifier($extension_Str_34_str const& $this ) -> const bool;
	#line 613 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsAsciiPrintable($extension_Str_34_str const& $this ) -> const bool;
	#line 673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto getSplitWhitespace($extension_Str_34_str const& $this ) -> const StringSpliterator;
	#line 676 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto getSplitWhitespaceReversed($extension_Str_34_str const& $this ) -> const StringReverseSpliterator;
	#line 679 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto getLines($extension_Str_34_str const& $this ) -> const StringSpliterator;
	#line 681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto getLinesReversed($extension_Str_34_str const& $this ) -> const StringReverseSpliterator;
	#line 735 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getTrimAsciiStart($extension_Str_34_str const& $this ) -> const $extension_Str_34_str;
	#line 747 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getTrimAsciiEnd($extension_Str_34_str const& $this ) -> const $extension_Str_34_str;
	#line 759 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getTrimAscii($extension_Str_34_str const& $this ) -> const $extension_Str_34_str;
	#line 761 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto getTrimStart($extension_Str_34_str const& $this ) -> const $extension_Str_34_str;
	#line 770 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto getTrimEnd($extension_Str_34_str const& $this ) -> const $extension_Str_34_str;
	#line 781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto getTrim($extension_Str_34_str const& $this ) -> const $extension_Str_34_str;
	#line 865 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getHashCode($extension_Str_34_str const& $this ) -> const Builtin::u64;
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
using $extensions::getTextElements;
using $extensions::getTextElementsWithOffsets;
using $extensions::getTextElementCount;
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
using $extensions::getHashCode;

	#line 868 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	struct [[clang::annotate("ref_struct")]] SubstringIterator final : public Builtin::RefStruct {
		public: using $self = SubstringIterator;
		public: using $class = $self;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		#line 869 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		public: using ElementType = Builtin::Str;
		public: SubstringIterator() = default;
		#line 876 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		public: inline SubstringIterator(Builtin::Str data, Builtin::Str open, Builtin::Str close) noexcept;
		#line 882 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		public: inline auto MoveNext()  -> const bool;
		#line 895 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		public: inline auto GetCurrent() const  -> const Builtin::Str;
		#line 897 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		public: inline auto Iterate() const  -> const $self;
		#line 871 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		private: Builtin::Str _data;
		#line 872 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		private: Builtin::Str _open;
		#line 873 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		private: Builtin::Str _close;
		#line 874 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		private: Builtin::Str _current;
		
	};
	
	#line 868 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(SubstringIterator, IAbstractSequence, IAbstractSequence, SubstringIterator);
	#line 868 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(SubstringIterator, ISequence, ISequence<Builtin::Str>, SubstringIterator);
	#line 868 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(SubstringIterator, IAbstractIterator, IAbstractIterator, SubstringIterator);
	#line 868 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(SubstringIterator, IIterator, IIterator<Builtin::Str>, SubstringIterator);
	
	#line 900 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	struct [[clang::annotate("ref_struct")]] ReverseSubstringIterator final : public Builtin::RefStruct {
		public: using $self = ReverseSubstringIterator;
		public: using $class = $self;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		#line 901 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		public: using ElementType = Builtin::Str;
		public: ReverseSubstringIterator() = default;
		#line 908 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		public: inline ReverseSubstringIterator(Builtin::Str data, Builtin::Str open, Builtin::Str close) noexcept;
		#line 914 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		public: inline auto MoveNext()  -> const bool;
		#line 927 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		public: inline auto GetCurrent() const  -> const Builtin::Str;
		#line 929 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		public: inline auto Iterate() const  -> const $self;
		#line 903 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		private: Builtin::Str _data;
		#line 904 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		private: Builtin::Str _open;
		#line 905 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		private: Builtin::Str _close;
		#line 906 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		private: Builtin::Str _current;
		
	};
	
	#line 900 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(ReverseSubstringIterator, IAbstractSequence, IAbstractSequence, ReverseSubstringIterator);
	#line 900 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(ReverseSubstringIterator, ISequence, ISequence<Builtin::Str>, ReverseSubstringIterator);
	#line 900 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(ReverseSubstringIterator, IAbstractIterator, IAbstractIterator, ReverseSubstringIterator);
	#line 900 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(ReverseSubstringIterator, IIterator, IIterator<Builtin::Str>, ReverseSubstringIterator);
	
	//###############################################################################
//# Global compile-time constants
//###############################################################################
inline constexpr Builtin::Str $strconst_0x20c21614c80_0 = "Begin ";
inline constexpr Builtin::Str $strconst_0x20c21614c80_1 = " Middle ";
inline constexpr Builtin::Str $strconst_0x20c21614c80_2 = " End";
} namespace $extensions {
template<class __TT> struct $static_Start;
template<class __TT> struct $static_getStart;
template<class __TT> struct $static_UnsafeCreate;
template<class __TT> struct $static_getUnsafeCreate;
template<class __TT> struct $static_TextElements;
template<class __TT> struct $static_getTextElements;
template<class __TT> struct $static_ByteLength;
template<class __TT> struct $static_getByteLength;
template<class __TT> struct $static_ContainsAnyExcept;
template<class __TT> struct $static_getContainsAnyExcept;
template<class __TT> struct $static_GetByteLength;
template<class __TT> struct $static_getGetByteLength;
template<class __TT> struct $static_Length;
template<class __TT> struct $static_getLength;
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
template<class __TT> struct $static_Bytes;
template<class __TT> struct $static_getBytes;
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
template<class __TT> struct $static_TextElementCount;
template<class __TT> struct $static_getTextElementCount;
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
template<class __TT> struct $static_SubstringBeforeLast;
template<class __TT> struct $static_getSubstringBeforeLast;
template<class __TT> struct $static_SubstringsBetween;
template<class __TT> struct $static_getSubstringsBetween;
template<class __TT> struct $static_SubstringBefore;
template<class __TT> struct $static_getSubstringBefore;
template<class __TT> struct $static_Reversed;
template<class __TT> struct $static_getReversed;
template<class __TT> struct $static_TrimEnd;
template<class __TT> struct $static_getTrimEnd;
template<class __TT> struct $static_TrimStart;
template<class __TT> struct $static_getTrimStart;
template<class __TT> struct $static_GetHashCode;
template<class __TT> struct $static_getGetHashCode;
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
template<class __TT> struct $static_Split;
template<class __TT> struct $static_getSplit;
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

#line 876 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline SubstringIterator::SubstringIterator(Builtin::Str data, Builtin::Str open, Builtin::Str close) noexcept : 
	#line 877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	_data{data}, 
	#line 878 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	_open{open}, 
	#line 879 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	_close{close}
	{
	}
#line 882 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SubstringIterator::MoveNext()  -> const bool
	{
		#line 883 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (const auto index = ADV_UFCS(IndexOf)(_data.$ref(), _open)) {
			{
				#line 883 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				auto __tmp0 = *index; const auto& index = __tmp0;
				
				#line 884 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				_data = ADV_UFCS(_operator_subscript)(_data.$ref(), Builtin::UncheckedTag{}, System::IndexRange((index + ADV_UPCS(ByteLength)(_open.$ref())), System::Index::End, false));
				#line 885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				if (const auto index2 = ADV_UFCS(IndexOf)(_data.$ref(), _close)) {
					{
						#line 885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
						auto __tmp0 = *index2; const auto& index2 = __tmp0;
						
						#line 886 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
						_current = ADV_UFCS(_operator_subscript)(_data.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(index2)>, false>({}, index2));
						#line 887 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
						_data = ADV_UFCS(_operator_subscript)(_data.$ref(), Builtin::UncheckedTag{}, System::IndexRange((index2 + ADV_UPCS(ByteLength)(_close.$ref())), System::Index::End, false));
						#line 888 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
						return Builtin::Boolean(true);
					}
				}
			}
		}
		#line 892 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return Builtin::Boolean(false);
	}
#line 895 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SubstringIterator::GetCurrent() const  -> const Builtin::Str
	{
		#line 895 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(_current)((*this).$ref())); 
	}
#line 897 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SubstringIterator::Iterate() const  -> const $self
	{
		#line 897 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY((*this)); 
	}
#line 908 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline ReverseSubstringIterator::ReverseSubstringIterator(Builtin::Str data, Builtin::Str open, Builtin::Str close) noexcept : 
	#line 909 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	_data{data}, 
	#line 910 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	_open{open}, 
	#line 911 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	_close{close}
	{
	}
#line 914 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto ReverseSubstringIterator::MoveNext()  -> const bool
	{
		#line 915 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (const auto index = ADV_UFCS(LastIndexOf)(_data.$ref(), _open)) {
			{
				#line 915 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				auto __tmp0 = *index; const auto& index = __tmp0;
				
				#line 916 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(_data.$ref(), Builtin::UncheckedTag{}, System::IndexRange((index + ADV_UPCS(ByteLength)(_open.$ref())), System::Index::End, false)))> tmp = ADV_UFCS(_operator_subscript)(_data.$ref(), Builtin::UncheckedTag{}, System::IndexRange((index + ADV_UPCS(ByteLength)(_open.$ref())), System::Index::End, false)); 
				#line 917 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				if (const auto index2 = ADV_UFCS(IndexOf)(tmp.$ref(), _close)) {
					{
						#line 917 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
						auto __tmp0 = *index2; const auto& index2 = __tmp0;
						
						#line 918 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
						_current = ADV_UFCS(_operator_subscript)(tmp.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(index2)>, false>({}, index2));
						#line 919 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
						_data = ADV_UFCS(_operator_subscript)(_data.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(index)>, false>({}, index));
						#line 920 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
						return Builtin::Boolean(true);
					}
				}
			}
		}
		#line 924 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return Builtin::Boolean(false);
	}
#line 927 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto ReverseSubstringIterator::GetCurrent() const  -> const Builtin::Str
	{
		#line 927 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(_current)((*this).$ref())); 
	}
#line 929 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto ReverseSubstringIterator::Iterate() const  -> const $self
	{
		#line 929 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY((*this)); 
	}
} namespace $extensions { using namespace System;
#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsAscii($extension_Str_12_byte_brack__and__brack_ const & $this ) -> const bool
	{
		#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (std::is_constant_evaluated()) {
			#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			{ auto $for_init_16 = $this; auto $for_iter_16 = ADV_UFCS(Iterate)($for_init_16.$ref()); while($for_iter_16.$ref().MoveNext()) {
			auto&& b = $for_iter_16.$ref().GetCurrent(); {
				#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				if (!ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(Builtin::u8(127U))>, true>({}, Builtin::u8(127U)), b)) {
					#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
					return Builtin::Boolean(false);
				}
			}}}
			#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			return Builtin::Boolean(true);
		} else {
			#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			{
				#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return !ADV_UFCS(ContainsAnyExcept)($this.$ref(), System::Range<Builtin::Auto<decltype(Builtin::u8(127U))>, true>({}, Builtin::u8(127U)));
			}
		}
		return {};
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	
} namespace $extensions { using namespace System;
#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto ToUtf8($extension_Str_28_char const& $this LIFETIMEBOUND, System::MutableSpan<Builtin::u8> dst)  -> const Builtin::Str
	{
		#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_USFCS((Builtin::Str), FromUtf8Unchecked)(ADV_USFCS((Utf8), WriteChar)($this, dst));
	}
	
} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	
} namespace $extensions { using namespace System;
#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr const $extension_Str_34_str getAt($extension_Str_34_str const& $this LIFETIMEBOUND, IndexRange range)
	{
		#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const Builtin::Auto<decltype(ADV_UPCS(ByteLength)($this.$ref()))> strLen = ADV_UPCS(ByteLength)($this.$ref()); 
		#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), strLen)))> start = Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), strLen)); 
		#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const Builtin::Auto<decltype(ADV_UFCS(Length)(range.$ref(), strLen))> len = ADV_UFCS(Length)(range.$ref(), strLen); 
		#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (((start + len) <=> strLen) > 0) {
			#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (!ADV_UPCS(IsUtf8CodePointBoundary)(ADV_UFCS(_operator_subscript)(ADV_UPCS(Bytes)($this.$ref()).$ref(), Builtin::UncheckedTag{}, start).$ref()) || !ADV_UPCS(IsUtf8CodePointBoundary)(ADV_UFCS(_operator_subscript)(ADV_UPCS(Bytes)($this.$ref()).$ref(), Builtin::UncheckedTag{}, start + len).$ref())) {
			#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_USFCS((Builtin::Str), UnsafeCreate)(ADV_UFCS(_operator_subscript)(ADV_UPCS(Bytes)($this.$ref()).$ref(), Builtin::UncheckedTag{}, start), len);
	}
	} namespace $extensions { using namespace System;
#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr const $extension_Str_34_str getAt($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::UncheckedTag, IndexRange range)
	{
		#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_USFCS((Builtin::Str), UnsafeCreate)(ADV_USFCS((Unsafe), Add)(ADV_UFCS(GetDataReference)($this.$ref()), Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), ADV_UPCS(ByteLength)($this.$ref())))), ADV_UFCS(Length)(range.$ref(), ADV_UPCS(ByteLength)($this.$ref())));
	}
	} namespace $extensions { using namespace System;
#line 68 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto IsUtf8CodePointBoundary($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::usize index)  -> const bool
	{
		#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const Builtin::Auto<decltype(ADV_UPCS(ByteLength)($this.$ref()))> length = ADV_UPCS(ByteLength)($this.$ref()); 
		#line 70 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return index == length || (index <=> length) < 0 && ADV_UPCS(IsUtf8CodePointBoundary)(ADV_UFCS(_operator_subscript)(ADV_UPCS(Bytes)($this.$ref()).$ref(), Builtin::UncheckedTag{}, index).$ref());
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto FloorIndexToUtf8CodePointBoundary($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::usize index)  -> const Builtin::usize
	{
		#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Bytes)($this.$ref()))> bytes = ADV_UPCS(Bytes)($this.$ref()); 
		#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const Builtin::Auto<decltype(ADV_UPCS(ByteLength)($this.$ref()))> length = ADV_UPCS(ByteLength)($this.$ref()); 
		#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if ((index <=> length) >= 0) {
			#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			return length;
		}
		#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (ADV_UPCS(IsUtf8CodePointBoundary)(ADV_UFCS(_operator_subscript)(bytes.$ref(), Builtin::UncheckedTag{}, index).$ref())) {
			#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			return index;
		}
		#line 84 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT(((index <=> Builtin::u32(1U)) >= 0), "index>=1u");
		#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (ADV_UPCS(IsUtf8CodePointBoundary)(ADV_UFCS(_operator_subscript)(bytes.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(1U)).$ref())) {
			#line 86 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			return index - Builtin::u32(1U);
		}
		#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT(((index <=> Builtin::u32(2U)) >= 0), "index>=2u");
		#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (ADV_UPCS(IsUtf8CodePointBoundary)(ADV_UFCS(_operator_subscript)(bytes.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(2U)).$ref())) {
			#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			return index - Builtin::u32(2U);
		}
		#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT(((index <=> Builtin::u32(3U)) >= 0), "index>=3u");
		#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(IsUtf8CodePointBoundary)(ADV_UFCS(_operator_subscript)(bytes.$ref(), Builtin::UncheckedTag{}, index - Builtin::u32(3U)).$ref())), "bytes[@Uncheckedindex-3u].IsUtf8CodePointBoundary");
		#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return index - Builtin::u32(3U);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto CeilIndexToUtf8CodePointBoundary($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::usize index)  -> const Builtin::usize
	{
		#line 99 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Bytes)($this.$ref()))> bytes = ADV_UPCS(Bytes)($this.$ref()); 
		#line 100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const Builtin::Auto<decltype(ADV_UPCS(ByteLength)($this.$ref()))> length = ADV_UPCS(ByteLength)($this.$ref()); 
		#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if ((index <=> length) >= 0) {
			#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			return length;
		}
		#line 104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		Builtin::Auto<decltype(index)> i = index; 
		#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		while (!ADV_UPCS(IsUtf8CodePointBoundary)(ADV_UFCS(_operator_subscript)(bytes.$ref(), Builtin::UncheckedTag{}, i).$ref())) 
		{
			#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			++i;
			#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if ((i <=> length) >= 0) {
				#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				break;
			}
		}
		#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT(((i <=> index + Builtin::u32(3U)) <= 0), "i<=index+3u");
		#line 112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return i;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto Substring($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::usize start)  -> const typename $extension_Str_34_str
	{
		#line 144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if ((start <=> ADV_UPCS(ByteLength)($this.$ref())) >= 0) {
			#line 145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (!ADV_UPCS(IsUtf8CodePointBoundary)(ADV_UFCS(_operator_subscript)(ADV_UPCS(Bytes)($this.$ref()).$ref(), Builtin::UncheckedTag{}, start).$ref())) {
			#line 148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_USFCS((Builtin::Str), UnsafeCreate)(ADV_UFCS(_operator_subscript)(ADV_UPCS(Bytes)($this.$ref()).$ref(), Builtin::UncheckedTag{}, start), ADV_UPCS(ByteLength)($this.$ref()) - start);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto Substring($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::usize start, Builtin::usize length)  -> const typename $extension_Str_34_str
	{
		#line 154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const Builtin::Auto<decltype(start + length)> end = start + length; 
		#line 155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if ((end <=> ADV_UPCS(ByteLength)($this.$ref())) > 0) {
			#line 156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (!ADV_UPCS(IsUtf8CodePointBoundary)(ADV_UFCS(_operator_subscript)(ADV_UPCS(Bytes)($this.$ref()).$ref(), Builtin::UncheckedTag{}, start).$ref()) || !ADV_UPCS(IsUtf8CodePointBoundary)(ADV_UFCS(_operator_subscript)(ADV_UPCS(Bytes)($this.$ref()).$ref(), Builtin::UncheckedTag{}, end).$ref())) {
			#line 160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_USFCS((Builtin::Str), UnsafeCreate)(ADV_UFCS(_operator_subscript)(ADV_UPCS(Bytes)($this.$ref()).$ref(), Builtin::UncheckedTag{}, start), length);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto Equals($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::Str other)  -> const bool
	{
		#line 165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY($this == other); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto EqualsAsciiIgnoreCase($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::Str other)  -> const bool
	{
		#line 209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (ADV_UPCS(ByteLength)($this.$ref()) != ADV_UPCS(ByteLength)(other.$ref())) {
			#line 210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			return Builtin::Boolean(false);
		}
		#line 212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const Builtin::Auto<decltype(ADV_UPCS(ByteLength)($this.$ref()))> length = ADV_UPCS(ByteLength)($this.$ref()); 
		#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Bytes)($this.$ref()))> thisBytes = ADV_UPCS(Bytes)($this.$ref()); 
		#line 214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Bytes)(other.$ref()))> otherBytes = ADV_UPCS(Bytes)(other.$ref()); 
		#line 215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_215 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_215 = ADV_UFCS(Iterate)($for_init_215.$ref()); while($for_iter_215.$ref().MoveNext()) {
		auto&& i = $for_iter_215.$ref().GetCurrent(); {
			#line 216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (ADV_UPCS(ToLower)(ADV_UFCS(_operator_subscript)(thisBytes.$ref(), Builtin::UncheckedTag{}, i).$ref()) != ADV_UPCS(ToLower)(ADV_UFCS(_operator_subscript)(otherBytes.$ref(), Builtin::UncheckedTag{}, i).$ref())) {
				#line 217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return Builtin::Boolean(false);
			}
		}}}
		#line 220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return Builtin::Boolean(true);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto CompareAsciiIgnoreCase($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::Str other)  -> const Builtin::i32
	{
		#line 225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (ADV_UPCS(ByteLength)($this.$ref()) != ADV_UPCS(ByteLength)(other.$ref())) {
			#line 226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			return ADV_UPCS(ByteLength)($this.$ref()) <=> ADV_UPCS(ByteLength)(other.$ref());
		}
		#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const Builtin::Auto<decltype(ADV_UPCS(ByteLength)($this.$ref()))> length = ADV_UPCS(ByteLength)($this.$ref()); 
		#line 229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Bytes)($this.$ref()))> thisBytes = ADV_UPCS(Bytes)($this.$ref()); 
		#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Bytes)(other.$ref()))> otherBytes = ADV_UPCS(Bytes)(other.$ref()); 
		#line 231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_231 = System::Range<Builtin::Auto<decltype(length)>, false>({}, length); auto $for_iter_231 = ADV_UFCS(Iterate)($for_init_231.$ref()); while($for_iter_231.$ref().MoveNext()) {
		auto&& i = $for_iter_231.$ref().GetCurrent(); {
			#line 232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (ADV_UPCS(ToLower)(ADV_UFCS(_operator_subscript)(thisBytes.$ref(), Builtin::UncheckedTag{}, i).$ref()) != ADV_UPCS(ToLower)(ADV_UFCS(_operator_subscript)(otherBytes.$ref(), Builtin::UncheckedTag{}, i).$ref())) {
				#line 233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return ADV_UPCS(ToLower)(ADV_UFCS(_operator_subscript)(thisBytes.$ref(), Builtin::UncheckedTag{}, i).$ref()) <=> ADV_UPCS(ToLower)(ADV_UFCS(_operator_subscript)(otherBytes.$ref(), Builtin::UncheckedTag{}, i).$ref());
			}
		}}}
		#line 236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return Builtin::i32(0);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto $static_TryFromUtf8<$extension_Str_34_str>::get(System::Span<Builtin::u8> bytes)  -> const Builtin::Nullable<$extension_Str_34_str>
	{
		#line 242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (ADV_USFCS((Utf8), IsValid)(bytes)) [[likely]] {
			#line 244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			return ADV_USFCS((Builtin::Str), FromUtf8Unchecked)(bytes);
		}
		#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto $static_FromUtf8<$extension_Str_34_str>::get(System::Span<Builtin::u8> bytes)  -> const typename $extension_Str_34_str
	{
		#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (const auto s = ADV_USFCS((Builtin::Str), TryFromUtf8)(bytes)) {
			{
				#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				auto __tmp0 = *s; const auto& s = __tmp0;
				
				#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return s;
			}
		}
		#line 254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		Builtin::Throw(Builtin::InvalidArgumentException{});
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto $static_FromUtf8Unchecked<$extension_Str_34_str>::get(System::Span<Builtin::u8> bytes) noexcept -> const typename $extension_Str_34_str
	{
		#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_USFCS_TEMPLATE((Unsafe), As<$extension_Str_34_str>)(bytes);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto Contains($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::u8 val)  -> const bool
	{
		#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (!ADV_UPCS(IsAscii)(val.$ref())) {
			#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_UFCS(Contains)(ADV_UPCS(Bytes)($this.$ref()).$ref(), val);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto _operator_in($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::u8 val)  -> const bool
	{
		#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Contains)(ADV_UPCS(Bytes)($this.$ref()).$ref(), val)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto Contains($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::char32 val)  -> const bool
	{
		#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(IndexOf)($this.$ref(), val) != nullptr); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto _operator_in($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::char32 val)  -> const bool
	{
		#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Contains)($this.$ref(), val)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto Contains($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::Str val)  -> const bool
	{
		#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Contains)(ADV_UPCS(Bytes)($this.$ref()).$ref(), ADV_UPCS(Bytes)(val.$ref()))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto _operator_in($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::Str val)  -> const bool
	{
		#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Contains)($this.$ref(), val)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto ContainsAny($extension_Str_34_str const& $this LIFETIMEBOUND, System::Span<Builtin::u8> bytes)  -> const bool
	{
		#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (!ADV_UPCS(IsAscii)(bytes.$ref())) {
			#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_UFCS(ContainsAny)(ADV_UPCS(Bytes)($this.$ref()).$ref(), bytes);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto ContainsAny($extension_Str_34_str const& $this LIFETIMEBOUND, System::Span<Builtin::char32> chars)  -> const bool
	{
		#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_289 = ADV_UPCS(Chars)($this.$ref()); auto $for_iter_289 = ADV_UFCS(Iterate)($for_init_289.$ref()); while($for_iter_289.$ref().MoveNext()) {
		auto&& c = $for_iter_289.$ref().GetCurrent(); {
			#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (ADV_UFCS(_operator_in)(chars, c)) {
				#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return Builtin::Boolean(true);
			}
		}}}
		#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return Builtin::Boolean(false);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto ContainsAny($extension_Str_34_str const& $this LIFETIMEBOUND, Predicate<Builtin::char32> filter)  -> const bool
	{
		#line 299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_299 = ADV_UPCS(Chars)($this.$ref()); auto $for_iter_299 = ADV_UFCS(Iterate)($for_init_299.$ref()); while($for_iter_299.$ref().MoveNext()) {
		auto&& c = $for_iter_299.$ref().GetCurrent(); {
			#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (filter(c)) {
				#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return Builtin::Boolean(true);
			}
		}}}
		#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return Builtin::Boolean(false);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto IndexOf($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::u8 val)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (!ADV_UPCS(IsAscii)(val.$ref())) {
			#line 311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_UFCS(IndexOf)(ADV_UPCS(Bytes)($this.$ref()).$ref(), val);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto IndexOf($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::char32 val)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (ADV_UPCS(IsAscii)(val.$ref())) {
			#line 319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			return ADV_UFCS(IndexOf)(ADV_UPCS(Bytes)($this.$ref()).$ref(), Builtin::Cast<true, Builtin::u8>(val));
		}
		#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		Builtin::InlineArray<Builtin::u32(4U), Builtin::u8> buf{}; 
		#line 322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_UFCS(IndexOf)($this.$ref(), ADV_UFCS(ToUtf8)(val.$ref(), Builtin::MutableRef(buf)));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto IndexOf($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::Str val)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(IndexOf)(ADV_UPCS(Bytes)($this.$ref()).$ref(), ADV_UPCS(Bytes)(val.$ref()))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto IndexOfAny($extension_Str_34_str const& $this LIFETIMEBOUND, System::Span<Builtin::u8> val)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (!ADV_UPCS(IsAscii)(val.$ref())) {
			#line 331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_UFCS(IndexOfAny)(ADV_UPCS(Bytes)($this.$ref()).$ref(), val);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto IndexOfAny($extension_Str_34_str const& $this LIFETIMEBOUND, System::Span<Builtin::char32> val)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_338 = ADV_UPCS(CharsWithOffsets)($this.$ref()); auto $for_iter_338 = ADV_UFCS(Iterate)($for_init_338.$ref()); while($for_iter_338.$ref().MoveNext()) {
		auto&& [offset, c] = $for_iter_338.$ref().GetCurrent(); {
			#line 339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (ADV_UFCS(_operator_in)(val, c)) {
				#line 340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return offset;
			}
		}}}
		#line 343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto IndexOfAny($extension_Str_34_str const& $this LIFETIMEBOUND, Predicate<Builtin::char32> filter)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_348 = ADV_UPCS(CharsWithOffsets)($this.$ref()); auto $for_iter_348 = ADV_UFCS(Iterate)($for_init_348.$ref()); while($for_iter_348.$ref().MoveNext()) {
		auto&& [offset, c] = $for_iter_348.$ref().GetCurrent(); {
			#line 349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (filter(c)) {
				#line 350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return offset;
			}
		}}}
		#line 353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto LastIndexOf($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::u8 val)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (!ADV_UPCS(IsAscii)(val.$ref())) {
			#line 359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_UFCS(LastIndexOf)(ADV_UPCS(Bytes)($this.$ref()).$ref(), val);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto LastIndexOf($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::char32 val)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (ADV_UPCS(IsAscii)(val.$ref())) {
			#line 367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			return ADV_UFCS(LastIndexOf)(ADV_UPCS(Bytes)($this.$ref()).$ref(), Builtin::Cast<true, Builtin::u8>(val));
		}
		#line 369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		Builtin::InlineArray<Builtin::u32(4U), Builtin::u8> buf{}; 
		#line 370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_UFCS(LastIndexOf)($this.$ref(), ADV_UFCS(ToUtf8)(val.$ref(), Builtin::MutableRef(buf)));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto LastIndexOf($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::Str val)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(LastIndexOf)(ADV_UPCS(Bytes)($this.$ref()).$ref(), ADV_UPCS(Bytes)(val.$ref()))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto LastIndexOfAny($extension_Str_34_str const& $this LIFETIMEBOUND, System::Span<Builtin::u8> val)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (!ADV_UPCS(IsAscii)(val.$ref())) {
			#line 379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_UFCS(LastIndexOfAny)(ADV_UPCS(Bytes)($this.$ref()).$ref(), val);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto LastIndexOfAny($extension_Str_34_str const& $this LIFETIMEBOUND, System::Span<Builtin::char32> val)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_386 = ADV_UPCS(Reversed)(ADV_UPCS(CharsWithOffsets)($this.$ref()).$ref()); auto $for_iter_386 = ADV_UFCS(Iterate)($for_init_386.$ref()); while($for_iter_386.$ref().MoveNext()) {
		auto&& [offset, c] = $for_iter_386.$ref().GetCurrent(); {
			#line 387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (ADV_UFCS(_operator_in)(val, c)) {
				#line 388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return offset;
			}
		}}}
		#line 391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto LastIndexOfAny($extension_Str_34_str const& $this LIFETIMEBOUND, Predicate<Builtin::char32> filter)  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_396 = ADV_UPCS(CharsWithOffsets)($this.$ref()); auto $for_iter_396 = ADV_UFCS(Iterate)($for_init_396.$ref()); while($for_iter_396.$ref().MoveNext()) {
		auto&& [offset, c] = $for_iter_396.$ref().GetCurrent(); {
			#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (filter(c)) {
				#line 398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return offset;
			}
		}}}
		#line 401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SubstringBefore($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::Str val)  -> const Builtin::Str
	{
		#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (const auto index = ADV_UFCS(IndexOf)($this.$ref(), val)) {
			{
				#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				auto __tmp0 = *index; const auto& index = __tmp0;
				
				#line 407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return ADV_UFCS(_operator_subscript)($this.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(index)>, false>({}, index));
			}
		}
		#line 409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SubstringBeforeLast($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::Str val)  -> const Builtin::Str
	{
		#line 414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (const auto index = ADV_UFCS(LastIndexOf)($this.$ref(), val)) {
			{
				#line 414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				auto __tmp0 = *index; const auto& index = __tmp0;
				
				#line 415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return ADV_UFCS(_operator_subscript)($this.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(index)>, false>({}, index));
			}
		}
		#line 417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SubstringAfter($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::Str val)  -> const Builtin::Nullable<Builtin::Str>
	{
		#line 422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (const auto index = ADV_UFCS(IndexOf)($this.$ref(), val)) {
			{
				#line 422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				auto __tmp0 = *index; const auto& index = __tmp0;
				
				#line 423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return ADV_UFCS(_operator_subscript)($this.$ref(), Builtin::UncheckedTag{}, System::IndexRange((index + ADV_UPCS(ByteLength)(val.$ref())), System::Index::End, false));
			}
		}
		#line 425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SubstringAfterLast($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::Str val)  -> const Builtin::Nullable<Builtin::Str>
	{
		#line 430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (const auto index = ADV_UFCS(LastIndexOf)($this.$ref(), val)) {
			{
				#line 430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				auto __tmp0 = *index; const auto& index = __tmp0;
				
				#line 431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return ADV_UFCS(_operator_subscript)($this.$ref(), Builtin::UncheckedTag{}, System::IndexRange((index + ADV_UPCS(ByteLength)(val.$ref())), System::Index::End, false));
			}
		}
		#line 433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SubstringBetween($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::Str tag)  -> const Builtin::Nullable<Builtin::Str>
	{
		#line 438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (const auto after = ADV_UFCS(SubstringAfter)($this.$ref(), tag)) {
			{
				#line 438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				auto __tmp0 = *after; const auto& after = __tmp0;
				
				#line 439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return ADV_UFCS(SubstringBefore)(after.$ref(), tag);
			}
		}
		#line 441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SubstringBetweenLast($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::Str tag)  -> const Builtin::Nullable<Builtin::Str>
	{
		#line 446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (const auto indexClose = ADV_UFCS(LastIndexOf)($this.$ref(), tag)) {
			{
				#line 446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				auto __tmp0 = *indexClose; const auto& indexClose = __tmp0;
				
				#line 447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				if (const auto indexOpen = ADV_UFCS(LastIndexOf)(ADV_UFCS(_operator_subscript)($this.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(indexClose)>, false>({}, indexClose)).$ref(), tag)) {
					{
						#line 447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
						auto __tmp0 = *indexOpen; const auto& indexOpen = __tmp0;
						
						#line 448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
						return ADV_UFCS(_operator_subscript)($this.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(indexClose)>, false>((indexOpen + ADV_UPCS(ByteLength)(tag.$ref())), indexClose));
					}
				}
			}
		}
		#line 451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SubstringBetween($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::Str open, Builtin::Str close)  -> const Builtin::Nullable<Builtin::Str>
	{
		#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_UFCS(SubstringAfter)($this.$ref(), open).AndThen([&](const auto& value) FORCE_INLINE_LAMBDA_CLANG FORCE_INLINE_LAMBDA { ADV_EXPRESSION_BODY(ADV_UFCS(SubstringBefore)(value.$ref(), close)); });
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SubstringBetweenLast($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::Str open, Builtin::Str close)  -> const Builtin::Nullable<Builtin::Str>
	{
		#line 461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_UFCS(SubstringAfterLast)($this.$ref(), open).AndThen([&](const auto& value) FORCE_INLINE_LAMBDA_CLANG FORCE_INLINE_LAMBDA { ADV_EXPRESSION_BODY(ADV_UFCS(SubstringBefore)(value.$ref(), close)); });
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SubstringsBetween($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::Str open, Builtin::Str close)  -> const SubstringIterator
	{
		#line 465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(SubstringIterator{$this, open, close}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SubstringsBetweenReversed($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::Str open, Builtin::Str close)  -> const ReverseSubstringIterator
	{
		#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ReverseSubstringIterator{$this, open, close}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto Count($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::u8 val)  -> const Builtin::usize
	{
		#line 471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (!ADV_UPCS(IsAscii)(val.$ref())) {
			#line 472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_UFCS(Count)(ADV_UPCS(Bytes)($this.$ref()).$ref(), val);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto Count($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::Str val)  -> const Builtin::usize
	{
		#line 477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Count)(ADV_UPCS(Bytes)($this.$ref()).$ref(), ADV_UPCS(Bytes)(val.$ref()))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto Split($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::u8 val, StringSplitOptions options)  -> const StringSpliterator
	{
		#line 625 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(StringSpliterator{$this, val, options}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto Split($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::u8 val, Builtin::usize maxCount, StringSplitOptions options)  -> const StringSpliterator
	{
		#line 628 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(StringSpliterator{$this, val, maxCount, options}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 630 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto Split($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::Str val, StringSplitOptions options)  -> const StringSpliterator
	{
		#line 631 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(StringSpliterator{$this, ADV_UPCS(Bytes)(val.$ref()), Builtin::Boolean(true), options}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto Split($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::Str val, Builtin::usize maxCount, StringSplitOptions options)  -> const StringSpliterator
	{
		#line 634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(StringSpliterator{$this, ADV_UPCS(Bytes)(val.$ref()), Builtin::Boolean(true), maxCount, options}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SplitAny($extension_Str_34_str const& $this LIFETIMEBOUND, System::Span<Builtin::u8> vals, StringSplitOptions options)  -> const StringSpliterator
	{
		#line 637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(StringSpliterator{$this, vals, options}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SplitAny($extension_Str_34_str const& $this LIFETIMEBOUND, System::Span<Builtin::u8> vals, Builtin::usize maxCount, StringSplitOptions options)  -> const StringSpliterator
	{
		#line 640 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(StringSpliterator{$this, vals, maxCount, options}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SplitAny($extension_Str_34_str const& $this LIFETIMEBOUND, Predicate<Builtin::char32> filter, StringSplitOptions options)  -> const StringSpliterator
	{
		#line 643 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(StringSpliterator{$this, filter, options}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SplitAny($extension_Str_34_str const& $this LIFETIMEBOUND, Predicate<Builtin::char32> filter, Builtin::usize maxCount, StringSplitOptions options)  -> const StringSpliterator
	{
		#line 646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(StringSpliterator{$this, filter, maxCount, options}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SplitReversed($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::u8 val, StringSplitOptions options)  -> const StringReverseSpliterator
	{
		#line 650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(StringReverseSpliterator{$this, val, options}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SplitReversed($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::u8 val, Builtin::usize maxCount, StringSplitOptions options)  -> const StringReverseSpliterator
	{
		#line 653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(StringReverseSpliterator{$this, val, maxCount, options}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SplitReversed($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::Str val, StringSplitOptions options)  -> const StringReverseSpliterator
	{
		#line 656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(StringReverseSpliterator{$this, ADV_UPCS(Bytes)(val.$ref()), Builtin::Boolean(true), options}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 658 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SplitReversed($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::Str val, Builtin::usize maxCount, StringSplitOptions options)  -> const StringReverseSpliterator
	{
		#line 659 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(StringReverseSpliterator{$this, ADV_UPCS(Bytes)(val.$ref()), Builtin::Boolean(true), maxCount, options}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 661 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SplitAnyReversed($extension_Str_34_str const& $this LIFETIMEBOUND, System::Span<Builtin::u8> vals, StringSplitOptions options)  -> const StringReverseSpliterator
	{
		#line 662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(StringReverseSpliterator{$this, vals, options}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 664 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SplitAnyReversed($extension_Str_34_str const& $this LIFETIMEBOUND, System::Span<Builtin::u8> vals, Builtin::usize maxCount, StringSplitOptions options)  -> const StringReverseSpliterator
	{
		#line 665 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(StringReverseSpliterator{$this, vals, maxCount, options}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SplitAnyReversed($extension_Str_34_str const& $this LIFETIMEBOUND, Predicate<Builtin::char32> filter, StringSplitOptions options)  -> const StringReverseSpliterator
	{
		#line 668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(StringReverseSpliterator{$this, filter, options}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto SplitAnyReversed($extension_Str_34_str const& $this LIFETIMEBOUND, Predicate<Builtin::char32> filter, Builtin::usize maxCount, StringSplitOptions options)  -> const StringReverseSpliterator
	{
		#line 671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(StringReverseSpliterator{$this, filter, maxCount, options}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto Lines($extension_Str_34_str const& $this LIFETIMEBOUND, StringSplitOptions options)  -> const StringSpliterator
	{
		#line 684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(StringSpliterator{$this, ADV_UPCS(Bytes)(Builtin::Str{"\r\n"}.$ref()), options | StringSplitOptions::ProcessLineEndingAsSingleChar}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto LinesReversed($extension_Str_34_str const& $this LIFETIMEBOUND, StringSplitOptions options)  -> const StringReverseSpliterator
	{
		#line 687 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(StringReverseSpliterator{$this, ADV_UPCS(Bytes)(Builtin::Str{"\r\n"}.$ref()), options | StringSplitOptions::ProcessLineEndingAsSingleChar}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto StartsWith($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::u8 val)  -> const bool
	{
		#line 690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (!ADV_UPCS(IsAscii)(val.$ref())) {
			#line 691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_UFCS(StartsWith)(ADV_UPCS(Bytes)($this.$ref()).$ref(), val);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto StartsWith($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::char32 val)  -> const bool
	{
		#line 696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(IndexOf)($this.$ref(), val) == Builtin::u32(0U)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 698 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto StartsWith($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::Str val)  -> const bool
	{
		#line 698 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(StartsWith)(ADV_UPCS(Bytes)($this.$ref()).$ref(), ADV_UPCS(Bytes)(val.$ref()))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto StartsWith($extension_Str_34_str const& $this LIFETIMEBOUND, Predicate<Builtin::char32> filter)  -> const bool
	{
		#line 701 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_701 = ADV_UPCS(Chars)($this.$ref()); auto $for_iter_701 = ADV_UFCS(Iterate)($for_init_701.$ref()); while($for_iter_701.$ref().MoveNext()) {
		auto&& c = $for_iter_701.$ref().GetCurrent(); {
			#line 702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (filter(c)) {
				#line 703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return Builtin::Boolean(true);
			}
			#line 705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			return Builtin::Boolean(false);
		}}}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto EndsWith($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::u8 val)  -> const bool
	{
		#line 710 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (!ADV_UPCS(IsAscii)(val.$ref())) {
			#line 711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 713 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_UFCS(EndsWith)(ADV_UPCS(Bytes)($this.$ref()).$ref(), val);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 716 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto EndsWith($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::char32 val)  -> const bool
	{
		#line 717 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (ADV_UPCS(IsAscii)(val.$ref())) {
			#line 718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			return ADV_UFCS(EndsWith)(ADV_UPCS(Bytes)($this.$ref()).$ref(), Builtin::Cast<true, Builtin::u8>(val));
		}
		#line 720 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		Builtin::InlineArray<Builtin::u32(4U), Builtin::u8> buf{}; 
		#line 721 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_UFCS(EndsWith)($this.$ref(), ADV_UFCS(ToUtf8)(val.$ref(), Builtin::MutableRef(buf)));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 724 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto EndsWith($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::Str val)  -> const bool
	{
		#line 724 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(EndsWith)(ADV_UPCS(Bytes)($this.$ref()).$ref(), ADV_UPCS(Bytes)(val.$ref()))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto EndsWith($extension_Str_34_str const& $this LIFETIMEBOUND, Predicate<Builtin::char32> filter)  -> const bool
	{
		#line 727 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_727 = ADV_UPCS(Reversed)(ADV_UPCS(Chars)($this.$ref()).$ref()); auto $for_iter_727 = ADV_UFCS(Iterate)($for_init_727.$ref()); while($for_iter_727.$ref().MoveNext()) {
		auto&& c = $for_iter_727.$ref().GetCurrent(); {
			#line 728 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (filter(c)) {
				#line 729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return Builtin::Boolean(true);
			}
			#line 731 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			return Builtin::Boolean(false);
		}}}
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 783 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto TrimStart($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::u8 val)  -> const typename $extension_Str_34_str
	{
		#line 784 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (!ADV_UPCS(IsAscii)(val.$ref())) {
			#line 785 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 787 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_USFCS((Builtin::Str), FromUtf8Unchecked)(ADV_UFCS(TrimStart)(ADV_UPCS(Bytes)($this.$ref()).$ref(), val));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto TrimEnd($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::u8 val)  -> const typename $extension_Str_34_str
	{
		#line 791 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (!ADV_UPCS(IsAscii)(val.$ref())) {
			#line 792 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 794 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_USFCS((Builtin::Str), FromUtf8Unchecked)(ADV_UFCS(TrimEnd)(ADV_UPCS(Bytes)($this.$ref()).$ref(), val));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 797 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto Trim($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::u8 val)  -> const typename $extension_Str_34_str
	{
		#line 797 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(TrimEnd)(ADV_UFCS(TrimStart)($this.$ref(), val).$ref(), val)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 799 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto TrimStart($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::char32 val)  -> const typename $extension_Str_34_str
	{
		#line 800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_800 = ADV_UPCS(CharsWithOffsets)($this.$ref()); auto $for_iter_800 = ADV_UFCS(Iterate)($for_init_800.$ref()); while($for_iter_800.$ref().MoveNext()) {
		auto&& [offset, c] = $for_iter_800.$ref().GetCurrent(); {
			#line 801 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (c != val) {
				#line 802 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return ADV_UFCS(_operator_subscript)($this.$ref(), Builtin::UncheckedTag{}, System::IndexRange(offset, System::Index::End, false));
			}
		}}}
		#line 805 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return {  };
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 808 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto TrimEnd($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::char32 val)  -> const typename $extension_Str_34_str
	{
		#line 809 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		Builtin::Auto<decltype(ADV_UPCS(ByteLength)($this.$ref()))> prevOffset = ADV_UPCS(ByteLength)($this.$ref()); 
		#line 810 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_810 = ADV_UPCS(Reversed)(ADV_UPCS(CharsWithOffsets)($this.$ref()).$ref()); auto $for_iter_810 = ADV_UFCS(Iterate)($for_init_810.$ref()); while($for_iter_810.$ref().MoveNext()) {
		auto&& [offset, c] = $for_iter_810.$ref().GetCurrent(); {
			#line 811 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (c != val) {
				#line 812 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return ADV_UFCS(_operator_subscript)($this.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(prevOffset)>, false>({}, prevOffset));
			}
			#line 814 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			prevOffset = offset;
		}}}
		#line 816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return {  };
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 819 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto Trim($extension_Str_34_str const& $this LIFETIMEBOUND, Builtin::char32 val)  -> const typename $extension_Str_34_str
	{
		#line 819 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(TrimEnd)(ADV_UFCS(TrimStart)($this.$ref(), val).$ref(), val)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 821 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto TrimStart($extension_Str_34_str const& $this LIFETIMEBOUND, System::Span<Builtin::char32> val)  -> const typename $extension_Str_34_str
	{
		#line 822 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_822 = ADV_UPCS(CharsWithOffsets)($this.$ref()); auto $for_iter_822 = ADV_UFCS(Iterate)($for_init_822.$ref()); while($for_iter_822.$ref().MoveNext()) {
		auto&& [offset, c] = $for_iter_822.$ref().GetCurrent(); {
			#line 823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (!ADV_UFCS(_operator_in)(val, c)) {
				#line 824 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return ADV_UFCS(_operator_subscript)($this.$ref(), Builtin::UncheckedTag{}, System::IndexRange(offset, System::Index::End, false));
			}
		}}}
		#line 827 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return {  };
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto TrimEnd($extension_Str_34_str const& $this LIFETIMEBOUND, System::Span<Builtin::char32> val)  -> const typename $extension_Str_34_str
	{
		#line 831 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		Builtin::Auto<decltype(ADV_UPCS(ByteLength)($this.$ref()))> prevOffset = ADV_UPCS(ByteLength)($this.$ref()); 
		#line 832 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_832 = ADV_UPCS(Reversed)(ADV_UPCS(CharsWithOffsets)($this.$ref()).$ref()); auto $for_iter_832 = ADV_UFCS(Iterate)($for_init_832.$ref()); while($for_iter_832.$ref().MoveNext()) {
		auto&& [offset, c] = $for_iter_832.$ref().GetCurrent(); {
			#line 833 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (!ADV_UFCS(_operator_in)(val, c)) {
				#line 834 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return ADV_UFCS(_operator_subscript)($this.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(prevOffset)>, false>({}, prevOffset));
			}
			#line 836 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			prevOffset = offset;
		}}}
		#line 838 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return {  };
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 841 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto Trim($extension_Str_34_str const& $this LIFETIMEBOUND, System::Span<Builtin::char32> val)  -> const typename $extension_Str_34_str
	{
		#line 841 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(TrimEnd)(ADV_UFCS(TrimStart)($this.$ref(), val).$ref(), val)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 843 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto TrimStart($extension_Str_34_str const& $this LIFETIMEBOUND, Predicate<Builtin::char32> filter)  -> const typename $extension_Str_34_str
	{
		#line 844 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_844 = ADV_UPCS(CharsWithOffsets)($this.$ref()); auto $for_iter_844 = ADV_UFCS(Iterate)($for_init_844.$ref()); while($for_iter_844.$ref().MoveNext()) {
		auto&& [offset, c] = $for_iter_844.$ref().GetCurrent(); {
			#line 845 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (!filter(c)) {
				#line 846 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return ADV_UFCS(_operator_subscript)($this.$ref(), Builtin::UncheckedTag{}, System::IndexRange(offset, System::Index::End, false));
			}
		}}}
		#line 849 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return {  };
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 852 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto TrimEnd($extension_Str_34_str const& $this LIFETIMEBOUND, Predicate<Builtin::char32> filter)  -> const typename $extension_Str_34_str
	{
		#line 853 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		Builtin::Auto<decltype(ADV_UPCS(ByteLength)($this.$ref()))> prevOffset = ADV_UPCS(ByteLength)($this.$ref()); 
		#line 854 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_854 = ADV_UPCS(Reversed)(ADV_UPCS(CharsWithOffsets)($this.$ref()).$ref()); auto $for_iter_854 = ADV_UFCS(Iterate)($for_init_854.$ref()); while($for_iter_854.$ref().MoveNext()) {
		auto&& [offset, c] = $for_iter_854.$ref().GetCurrent(); {
			#line 855 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (!filter(c)) {
				#line 856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return ADV_UFCS(_operator_subscript)($this.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(prevOffset)>, false>({}, prevOffset));
			}
			#line 858 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			prevOffset = offset;
		}}}
		#line 860 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return {  };
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 863 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto Trim($extension_Str_34_str const& $this LIFETIMEBOUND, Predicate<Builtin::char32> filter)  -> const typename $extension_Str_34_str
	{
		#line 863 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(TrimEnd)(ADV_UFCS(TrimStart)($this.$ref(), filter).$ref(), filter)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getByteLength($extension_Str_34_str const & $this ) -> const Builtin::usize
	{
		#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GetByteLength)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsEmpty($extension_Str_34_str const & $this ) -> const bool
	{
		#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(ByteLength)($this.$ref()) == Builtin::i32(0)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getBytes($extension_Str_34_str const & $this ) -> const System::Span<Builtin::u8>
	{
		#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Span<Builtin::u8>), UnsafeCreate)(ADV_UFCS(GetDataReference)($this.$ref()), ADV_UFCS(GetByteLength)($this.$ref()))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getChars($extension_Str_34_str const & $this ) -> const CharIterator
	{
		#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(CharIterator{$this}); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getCharsWithOffsets($extension_Str_34_str const & $this ) -> const CharIndicesIterator
	{
		#line 118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(CharIndicesIterator{$this}); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getCharCount($extension_Str_34_str const & $this ) -> const Builtin::usize
	{
		#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		Builtin::usize count{}; 
		#line 122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_122 = ADV_UPCS(Chars)($this.$ref()); auto $for_iter_122 = ADV_UFCS(Iterate)($for_init_122.$ref()); while($for_iter_122.$ref().MoveNext()) {
		auto&& c = $for_iter_122.$ref().GetCurrent(); {
			#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			++count;
		}}}
		#line 126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return count;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto getTextElements($extension_Str_34_str const & $this ) -> const TextElementIterator
	{
		#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(TextElementIterator{$this}); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto getTextElementsWithOffsets($extension_Str_34_str const & $this ) -> const TextElementIndicesIterator
	{
		#line 131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(TextElementIndicesIterator{$this}); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto getTextElementCount($extension_Str_34_str const & $this ) -> const Builtin::usize
	{
		#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		Builtin::usize count{}; 
		#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_135 = ADV_UPCS(TextElements)($this.$ref()); auto $for_iter_135 = ADV_UFCS(Iterate)($for_init_135.$ref()); while($for_iter_135.$ref().MoveNext()) {
		auto&& c = $for_iter_135.$ref().GetCurrent(); {
			#line 136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			++count;
		}}}
		#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return count;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsAscii($extension_Str_34_str const & $this ) -> const bool
	{
		#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAscii)(ADV_UPCS(Bytes)($this.$ref()).$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsAsciiWhiteSpace($extension_Str_34_str const & $this ) -> const bool
	{
		#line 481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_481 = ADV_UPCS(Bytes)($this.$ref()); auto $for_iter_481 = ADV_UFCS(Iterate)($for_init_481.$ref()); while($for_iter_481.$ref().MoveNext()) {
		auto&& b = $for_iter_481.$ref().GetCurrent(); {
			#line 482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (!ADV_UPCS(IsAsciiWhiteSpace)(b.$ref())) {
				#line 483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return Builtin::Boolean(false);
			}
		}}}
		#line 486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return Builtin::Boolean(true);
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsWhiteSpace($extension_Str_34_str const & $this ) -> const bool
	{
		#line 490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_490 = ADV_UPCS(Chars)($this.$ref()); auto $for_iter_490 = ADV_UFCS(Iterate)($for_init_490.$ref()); while($for_iter_490.$ref().MoveNext()) {
		auto&& c = $for_iter_490.$ref().GetCurrent(); {
			#line 491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (!ADV_UPCS(IsWhiteSpace)(c.$ref())) {
				#line 492 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return Builtin::Boolean(false);
			}
		}}}
		#line 495 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return Builtin::Boolean(true);
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsAsciiUpper($extension_Str_34_str const & $this ) -> const bool
	{
		#line 499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_499 = ADV_UPCS(Bytes)($this.$ref()); auto $for_iter_499 = ADV_UFCS(Iterate)($for_init_499.$ref()); while($for_iter_499.$ref().MoveNext()) {
		auto&& b = $for_iter_499.$ref().GetCurrent(); {
			#line 500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (!ADV_UPCS(IsAscii)(b.$ref()) || (ADV_UPCS(IsAsciiLetter)(b.$ref()) && !ADV_UPCS(IsLetterUpper)(b.$ref()))) {
				#line 501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return Builtin::Boolean(false);
			}
		}}}
		#line 504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return !ADV_UPCS(IsEmpty)($this.$ref());
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsUpper($extension_Str_34_str const & $this ) -> const bool
	{
		#line 508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_508 = ADV_UPCS(Chars)($this.$ref()); auto $for_iter_508 = ADV_UFCS(Iterate)($for_init_508.$ref()); while($for_iter_508.$ref().MoveNext()) {
		auto&& c = $for_iter_508.$ref().GetCurrent(); {
			#line 509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (ADV_UPCS(IsLetter)(c.$ref()) && !ADV_UPCS(IsLetterUpper)(c.$ref())) {
				#line 510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return Builtin::Boolean(false);
			}
		}}}
		#line 513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return !ADV_UPCS(IsEmpty)($this.$ref());
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsAsciiLower($extension_Str_34_str const & $this ) -> const bool
	{
		#line 517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_517 = ADV_UPCS(Bytes)($this.$ref()); auto $for_iter_517 = ADV_UFCS(Iterate)($for_init_517.$ref()); while($for_iter_517.$ref().MoveNext()) {
		auto&& b = $for_iter_517.$ref().GetCurrent(); {
			#line 518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (!ADV_UPCS(IsAscii)(b.$ref()) || (ADV_UPCS(IsAsciiLetter)(b.$ref()) && !ADV_UPCS(IsLetterLower)(b.$ref()))) {
				#line 519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return Builtin::Boolean(false);
			}
		}}}
		#line 522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return !ADV_UPCS(IsEmpty)($this.$ref());
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsLower($extension_Str_34_str const & $this ) -> const bool
	{
		#line 526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_526 = ADV_UPCS(Chars)($this.$ref()); auto $for_iter_526 = ADV_UFCS(Iterate)($for_init_526.$ref()); while($for_iter_526.$ref().MoveNext()) {
		auto&& c = $for_iter_526.$ref().GetCurrent(); {
			#line 527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (ADV_UPCS(IsLetter)(c.$ref()) && !ADV_UPCS(IsLetterLower)(c.$ref())) {
				#line 528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return Builtin::Boolean(false);
			}
		}}}
		#line 531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return !ADV_UPCS(IsEmpty)($this.$ref());
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsAsciiAlphabetic($extension_Str_34_str const & $this ) -> const bool
	{
		#line 535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_535 = ADV_UPCS(Bytes)($this.$ref()); auto $for_iter_535 = ADV_UFCS(Iterate)($for_init_535.$ref()); while($for_iter_535.$ref().MoveNext()) {
		auto&& b = $for_iter_535.$ref().GetCurrent(); {
			#line 536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (!ADV_UPCS(IsAsciiLetter)(b.$ref())) {
				#line 537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return Builtin::Boolean(false);
			}
		}}}
		#line 540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return !ADV_UPCS(IsEmpty)($this.$ref());
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsAlphabetic($extension_Str_34_str const & $this ) -> const bool
	{
		#line 544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_544 = ADV_UPCS(Chars)($this.$ref()); auto $for_iter_544 = ADV_UFCS(Iterate)($for_init_544.$ref()); while($for_iter_544.$ref().MoveNext()) {
		auto&& c = $for_iter_544.$ref().GetCurrent(); {
			#line 545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (!ADV_UPCS(IsLetter)(c.$ref())) {
				#line 546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return Builtin::Boolean(false);
			}
		}}}
		#line 549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return !ADV_UPCS(IsEmpty)($this.$ref());
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsAsciiAlphanumeric($extension_Str_34_str const & $this ) -> const bool
	{
		#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_553 = ADV_UPCS(Bytes)($this.$ref()); auto $for_iter_553 = ADV_UFCS(Iterate)($for_init_553.$ref()); while($for_iter_553.$ref().MoveNext()) {
		auto&& b = $for_iter_553.$ref().GetCurrent(); {
			#line 554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (!ADV_UPCS(IsAsciiLetterOrDigit)(b.$ref())) {
				#line 555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return Builtin::Boolean(false);
			}
		}}}
		#line 558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return !ADV_UPCS(IsEmpty)($this.$ref());
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsAlphanumeric($extension_Str_34_str const & $this ) -> const bool
	{
		#line 562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_562 = ADV_UPCS(Chars)($this.$ref()); auto $for_iter_562 = ADV_UFCS(Iterate)($for_init_562.$ref()); while($for_iter_562.$ref().MoveNext()) {
		auto&& c = $for_iter_562.$ref().GetCurrent(); {
			#line 563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (!ADV_UPCS(IsLetterOrDigit)(c.$ref())) {
				#line 564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return Builtin::Boolean(false);
			}
		}}}
		#line 567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return !ADV_UPCS(IsEmpty)($this.$ref());
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsNumeric($extension_Str_34_str const & $this ) -> const bool
	{
		#line 571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_571 = ADV_UPCS(Bytes)($this.$ref()); auto $for_iter_571 = ADV_UFCS(Iterate)($for_init_571.$ref()); while($for_iter_571.$ref().MoveNext()) {
		auto&& b = $for_iter_571.$ref().GetCurrent(); {
			#line 572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (!ADV_UPCS(IsAsciiDigit)(b.$ref())) {
				#line 573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return Builtin::Boolean(false);
			}
		}}}
		#line 576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return !ADV_UPCS(IsEmpty)($this.$ref());
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsDecimal($extension_Str_34_str const & $this ) -> const bool
	{
		#line 580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_580 = ADV_UPCS(Bytes)($this.$ref()); auto $for_iter_580 = ADV_UFCS(Iterate)($for_init_580.$ref()); while($for_iter_580.$ref().MoveNext()) {
		auto&& b = $for_iter_580.$ref().GetCurrent(); {
			#line 581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (!ADV_UPCS(IsAsciiDigit)(b.$ref()) && b != Builtin::u8('.') && b != Builtin::u8(',')) {
				#line 582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return Builtin::Boolean(false);
			}
		}}}
		#line 585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return !ADV_UPCS(IsEmpty)($this.$ref());
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 588 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsHexadecimal($extension_Str_34_str const & $this ) -> const bool
	{
		#line 589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_589 = ADV_UPCS(Bytes)($this.$ref()); auto $for_iter_589 = ADV_UFCS(Iterate)($for_init_589.$ref()); while($for_iter_589.$ref().MoveNext()) {
		auto&& c = $for_iter_589.$ref().GetCurrent(); {
			#line 590 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (!ADV_UPCS(IsHexDigit)(c.$ref())) {
				#line 591 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return Builtin::Boolean(false);
			}
		}}}
		#line 594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return !ADV_UPCS(IsEmpty)($this.$ref());
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsValidIdentifier($extension_Str_34_str const & $this ) -> const bool
	{
		#line 598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (ADV_UPCS(ByteLength)($this.$ref()) == Builtin::u32(0U)) {
			#line 599 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			return Builtin::Boolean(false);
		}
		#line 601 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Bytes)($this.$ref()))> bytes = ADV_UPCS(Bytes)($this.$ref()); 
		#line 602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (!ADV_UPCS(IsIdentifierStartChar)(ADV_UFCS(_operator_subscript)(bytes.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)).$ref())) {
			#line 603 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			return Builtin::Boolean(false);
		}
		#line 605 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_605 = bytes; auto $for_iter_605 = ADV_UFCS(Iterate)($for_init_605.$ref()); while($for_iter_605.$ref().MoveNext()) {
		auto&& b = $for_iter_605.$ref().GetCurrent(); {
			#line 606 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (!ADV_UPCS(IsIdentifierChar)(b.$ref())) {
				#line 607 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return Builtin::Boolean(false);
			}
		}}}
		#line 610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return Builtin::Boolean(true);
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 613 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsAsciiPrintable($extension_Str_34_str const & $this ) -> const bool
	{
		#line 614 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_614 = ADV_UPCS(Bytes)($this.$ref()); auto $for_iter_614 = ADV_UFCS(Iterate)($for_init_614.$ref()); while($for_iter_614.$ref().MoveNext()) {
		auto&& b = $for_iter_614.$ref().GetCurrent(); {
			#line 615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (!ADV_UPCS(IsAsciiPrintable)(b.$ref())) {
				#line 616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return Builtin::Boolean(false);
			}
		}}}
		#line 619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return !ADV_UPCS(IsEmpty)($this.$ref());
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto getSplitWhitespace($extension_Str_34_str const & $this ) -> const StringSpliterator
	{
		#line 674 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(StringSpliterator{$this, ADV_UPCS(Bytes)(Builtin::Str{""}.$ref()), StringSplitOptions::SkipEmptyEntries}); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 676 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto getSplitWhitespaceReversed($extension_Str_34_str const & $this ) -> const StringReverseSpliterator
	{
		#line 677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(StringReverseSpliterator{$this, ADV_UPCS(Bytes)(Builtin::Str{""}.$ref()), StringSplitOptions::SkipEmptyEntries}); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 679 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto getLines($extension_Str_34_str const & $this ) -> const StringSpliterator
	{
		#line 679 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Lines)($this.$ref(), StringSplitOptions::None)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto getLinesReversed($extension_Str_34_str const & $this ) -> const StringReverseSpliterator
	{
		#line 681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(LinesReversed)($this.$ref(), StringSplitOptions::None)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 735 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getTrimAsciiStart($extension_Str_34_str const & $this ) -> const $extension_Str_34_str
	{
		#line 736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Bytes)($this.$ref()))> bytes = ADV_UPCS(Bytes)($this.$ref()); 
		#line 737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(bytes.$ref()))> length = ADV_UPCS(Length)(bytes.$ref()); 
		#line 738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		Builtin::usize start{}; 
		#line 739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		for (; (start <=> length) < 0; start++) 
		{
			#line 740 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (!ADV_UPCS(IsAsciiWhiteSpace)(ADV_UFCS(_operator_subscript)(bytes.$ref(), Builtin::UncheckedTag{}, start).$ref())) {
				#line 741 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				break;
			}
		}
		#line 744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return (start <=> length) < 0 ? ADV_UFCS(_operator_subscript)($this.$ref(), Builtin::UncheckedTag{}, System::IndexRange(start, System::Index::End, false)) : $extension_Str_34_str{};
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 747 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getTrimAsciiEnd($extension_Str_34_str const & $this ) -> const $extension_Str_34_str
	{
		#line 748 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Bytes)($this.$ref()))> bytes = ADV_UPCS(Bytes)($this.$ref()); 
		#line 749 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(bytes.$ref()))> length = ADV_UPCS(Length)(bytes.$ref()); 
		#line 750 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		Builtin::Auto<decltype(length - Builtin::u32(1U))> end = length - Builtin::u32(1U); 
		#line 751 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		for (; (end <=> length) < 0; ADV_UFCS(_operator_sub_sub_mod_postfix)(end)) 
		{
			#line 752 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (!ADV_UPCS(IsAsciiWhiteSpace)(ADV_UFCS(_operator_subscript)(bytes.$ref(), Builtin::UncheckedTag{}, end).$ref())) {
				#line 753 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				break;
			}
		}
		#line 756 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return (end <=> length) < 0 ? ADV_UFCS(_operator_subscript)($this.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(end)>, true>({}, end)) : $extension_Str_34_str{};
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 759 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getTrimAscii($extension_Str_34_str const & $this ) -> const $extension_Str_34_str
	{
		#line 759 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(TrimAsciiEnd)(ADV_UPCS(TrimAsciiStart)($this.$ref()).$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 761 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto getTrimStart($extension_Str_34_str const & $this ) -> const $extension_Str_34_str
	{
		#line 762 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_762 = ADV_UPCS(CharsWithOffsets)($this.$ref()); auto $for_iter_762 = ADV_UFCS(Iterate)($for_init_762.$ref()); while($for_iter_762.$ref().MoveNext()) {
		auto&& [offset, c] = $for_iter_762.$ref().GetCurrent(); {
			#line 763 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (!ADV_UPCS(IsWhiteSpace)(c.$ref())) {
				#line 764 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return ADV_UFCS(_operator_subscript)($this.$ref(), Builtin::UncheckedTag{}, System::IndexRange(offset, System::Index::End, false));
			}
		}}}
		#line 767 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return {  };
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 770 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto getTrimEnd($extension_Str_34_str const & $this ) -> const $extension_Str_34_str
	{
		#line 771 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		Builtin::Auto<decltype(ADV_UPCS(ByteLength)($this.$ref()))> prevOffset = ADV_UPCS(ByteLength)($this.$ref()); 
		#line 772 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_772 = ADV_UPCS(Reversed)(ADV_UPCS(CharsWithOffsets)($this.$ref()).$ref()); auto $for_iter_772 = ADV_UFCS(Iterate)($for_init_772.$ref()); while($for_iter_772.$ref().MoveNext()) {
		auto&& [offset, c] = $for_iter_772.$ref().GetCurrent(); {
			#line 773 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if (!ADV_UPCS(IsWhiteSpace)(c.$ref())) {
				#line 774 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return ADV_UFCS(_operator_subscript)($this.$ref(), Builtin::UncheckedTag{}, System::Range<Builtin::Auto<decltype(prevOffset)>, false>({}, prevOffset));
			}
			#line 776 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			prevOffset = offset;
		}}}
		#line 778 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return {  };
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline auto getTrim($extension_Str_34_str const & $this ) -> const $extension_Str_34_str
	{
		#line 781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(TrimEnd)(ADV_UPCS(TrimStart)($this.$ref()).$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 865 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getHashCode($extension_Str_34_str const & $this ) -> const Builtin::u64
	{
		#line 865 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GetHashCode)($this.$ref())); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	

}