#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "CharIterator.h"
#include "StringComparison.h"
#include "System/Text/Utf8.h"
using namespace System::Text;

namespace System {
namespace __Unsafe {} namespace __Str$Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
namespace $ntuples { class NamedTuple_60a0551c0508260a; } 
//###############################################################################
//# Global type aliases
//###############################################################################
#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
using Utf8ValidationError = $ntuples::NamedTuple_60a0551c0508260a;
//###############################################################################
//# Type definitions
//###############################################################################
	} namespace $extensions { using namespace System;
#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	using $extension_Str_9_byte_brack__and__brack_ = System::Span<Builtin::u8>;
	#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsAscii($extension_Str_9_byte_brack__and__brack_ const& $this ) -> const bool;
	} namespace System{
using $extensions::getIsAscii;

		} namespace $extensions { using namespace System;
#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	using $extension_Str_25_str = Builtin::Str;
	#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr const $extension_Str_25_str getAt($extension_Str_25_str const& $this LIFETIMEBOUND, IndexRange range);
	#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr const $extension_Str_25_str _operator_subscript($extension_Str_25_str const& $this LIFETIMEBOUND, IndexRange range) { return getAt($this, range); }
	#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr const $extension_Str_25_str getAt($extension_Str_25_str const& $this LIFETIMEBOUND, Builtin::UncheckedTag, IndexRange range);
	#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	[[clang::annotate("UserAttr: Unchecked")]] inline constexpr const $extension_Str_25_str _operator_subscript($extension_Str_25_str const& $this LIFETIMEBOUND, Builtin::UncheckedTag, IndexRange range) { return getAt($this, Builtin::UncheckedTag{}, range); }
	#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto Substring($extension_Str_25_str const& $this LIFETIMEBOUND, Builtin::usize start)  -> const typename $extension_Str_25_str;
	#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto Substring($extension_Str_25_str const& $this LIFETIMEBOUND, Builtin::usize start, Builtin::usize length)  -> const typename $extension_Str_25_str;
	#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto Equals($extension_Str_25_str const& $this LIFETIMEBOUND, Builtin::Str other)  -> const bool;
	#line 136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	template<class __TT> struct $static_TryFromUtf8; template<> struct $static_TryFromUtf8<$extension_Str_25_str> { static inline constexpr auto get(System::Span<Builtin::u8> bytes)  -> const Builtin::Nullable<$extension_Str_25_str>; };
	#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	template<class __TT> struct $static_FromUtf8; template<> struct $static_FromUtf8<$extension_Str_25_str> { static inline constexpr auto get(System::Span<Builtin::u8> bytes)  -> const typename $extension_Str_25_str; };
	#line 150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	template<class __TT> struct $static_FromUtf8Unchecked; template<> struct $static_FromUtf8Unchecked<$extension_Str_25_str> { static inline constexpr auto get(System::Span<Builtin::u8> bytes) noexcept -> const typename $extension_Str_25_str; };
	#line 157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto Contains($extension_Str_25_str const& $this LIFETIMEBOUND, Builtin::u8 val)  -> const bool;
	#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto _operator_in($extension_Str_25_str const& $this LIFETIMEBOUND, Builtin::u8 val)  -> const bool;
	#line 160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto Contains($extension_Str_25_str const& $this LIFETIMEBOUND, Builtin::char32 val)  -> const bool;
	#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto _operator_in($extension_Str_25_str const& $this LIFETIMEBOUND, Builtin::char32 val)  -> const bool;
	#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getByteLength($extension_Str_25_str const& $this ) -> const Builtin::usize;
	#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getBytes($extension_Str_25_str const& $this ) -> const System::Span<Builtin::u8>;
	#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getChars($extension_Str_25_str const& $this ) -> const CharIterator;
	#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getCharCount($extension_Str_25_str const& $this ) -> const Builtin::usize;
	#line 155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsAscii($extension_Str_25_str const& $this ) -> const bool;
	} namespace System{
using $extensions::getAt; using $extensions::_operator_subscript;
using $extensions::getAt; using $extensions::_operator_subscript;
using $extensions::Substring;
using $extensions::Substring;
using $extensions::Equals;
using $extensions::$static_TryFromUtf8;
using $extensions::$static_FromUtf8;
using $extensions::$static_FromUtf8Unchecked;
using $extensions::Contains;
using $extensions::_operator_in;
using $extensions::Contains;
using $extensions::_operator_in;
using $extensions::getByteLength;
using $extensions::getBytes;
using $extensions::getChars;
using $extensions::getCharCount;
using $extensions::getIsAscii;

	namespace $ntuples {
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		struct NamedTuple_60a0551c0508260a final : public Builtin::Struct { 
			using $self = NamedTuple_60a0551c0508260a;
			using $class = Builtin::$Class_Basic<NamedTuple_60a0551c0508260a>;
			Builtin::usize index;
			Builtin::usize length;
			NamedTuple_60a0551c0508260a() = default;
			NamedTuple_60a0551c0508260a(Builtin::In<Builtin::usize> _index, Builtin::In<Builtin::usize> _length) : index{_index}, length{_length} {}
			FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; }
			FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
			template <size_t I> friend auto& get($ntuples::NamedTuple_60a0551c0508260a&);
			template <size_t I> friend const auto& get(const $ntuples::NamedTuple_60a0551c0508260a&);
			
		};
		template <> inline auto& get<0>($ntuples::NamedTuple_60a0551c0508260a& t) { return t.index; }
		template <> inline const auto& get<0>(const $ntuples::NamedTuple_60a0551c0508260a& t) { return t.index; }
		template <> inline auto& get<1>($ntuples::NamedTuple_60a0551c0508260a& t) { return t.length; }
		template <> inline const auto& get<1>(const $ntuples::NamedTuple_60a0551c0508260a& t) { return t.length; }
		
	}

}
namespace std {
	template <> struct tuple_size<System::$ntuples::NamedTuple_60a0551c0508260a> : integral_constant<size_t, 2> {};
	template <> struct tuple_element<0, System::$ntuples::NamedTuple_60a0551c0508260a> { using type = decltype(std::declval<System::$ntuples::NamedTuple_60a0551c0508260a>().index); };
	template <> struct tuple_element<1, System::$ntuples::NamedTuple_60a0551c0508260a> { using type = decltype(std::declval<System::$ntuples::NamedTuple_60a0551c0508260a>().length); };
	
}

namespace System {//###############################################################################
//# Global compile-time constants
//###############################################################################
inline constexpr Builtin::Str $strconst_0x274dcf51510_0 = "Begin ";
inline constexpr Builtin::Str $strconst_0x274dcf51510_1 = " Middle ";
inline constexpr Builtin::Str $strconst_0x274dcf51510_2 = " End";
} namespace $extensions {
template<class __TT> struct $static_Start;
template<class __TT> struct $static_getStart;
template<class __TT> struct $static_UnsafeCreate;
template<class __TT> struct $static_getUnsafeCreate;
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
template<class __TT> struct $static_IsAscii;
template<class __TT> struct $static_getIsAscii;
template<class __TT> struct $static_ByteLength;
template<class __TT> struct $static_getByteLength;
template<class __TT> struct $static_IndexOutOfRangeException;
template<class __TT> struct $static_getIndexOutOfRangeException;
template<class __TT> struct $static_IsUtf8CodePointBoundary;
template<class __TT> struct $static_getIsUtf8CodePointBoundary;
template<class __TT> struct $static_Substring;
template<class __TT> struct $static_getSubstring;
template<class __TT> struct $static_InvalidArgumentException;
template<class __TT> struct $static_getInvalidArgumentException;
template<class __TT> struct $static_Add;
template<class __TT> struct $static_getAdd;
template<class __TT> struct $static_TryFromUtf8;
template<class __TT> struct $static_getTryFromUtf8;
template<class __TT> struct $static_Contains;
template<class __TT> struct $static_getContains;
template<class __TT> struct $static_CharCount;
template<class __TT> struct $static_getCharCount;
} namespace System {
//###############################################################################
//# Function definitions
//###############################################################################

} namespace $extensions { using namespace System;
#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsAscii($extension_Str_9_byte_brack__and__brack_ const & $this ) -> const bool
	{
		#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (std::is_constant_evaluated()) {
			#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			{ auto $for_init_13 = $this; auto $for_iter_13 = ADV_UFCS(Iterate)($for_init_13.$ref()); while($for_iter_13.$ref().MoveNext()) {
			auto&& b = $for_iter_13.$ref().GetCurrent(); {
				#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				if (!ADV_UFCS(_operator_in)(System::Range<Builtin::Auto<decltype(Builtin::u8(127U))>, true>({}, Builtin::u8(127U)), b)) {
					#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
					return Builtin::Boolean(false);
				}
			}}}
			#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			return Builtin::Boolean(true);
		} else {
			#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			{
				#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return !ADV_UFCS(ContainsAnyExcept)($this.$ref(), System::Range<Builtin::Auto<decltype(Builtin::u8(127U))>, true>({}, Builtin::u8(127U)));
			}
		}
		return {};
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	
} namespace $extensions { using namespace System;
#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr const $extension_Str_25_str getAt($extension_Str_25_str const& $this LIFETIMEBOUND, IndexRange range)
	{
		#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const Builtin::Auto<decltype(ADV_UPCS(ByteLength)($this.$ref()))> strLen = ADV_UPCS(ByteLength)($this.$ref()); 
		#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), strLen)))> start = Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), strLen)); 
		#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const Builtin::Auto<decltype(ADV_UFCS(Length)(range.$ref(), strLen))> len = ADV_UFCS(Length)(range.$ref(), strLen); 
		#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (((start + len) <=> strLen) > 0) {
			#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (!ADV_UPCS(IsUtf8CodePointBoundary)(ADV_UFCS(_operator_subscript)(ADV_UPCS(Bytes)($this.$ref()).$ref(), Builtin::UncheckedTag{}, start).$ref()) || !ADV_UPCS(IsUtf8CodePointBoundary)(ADV_UFCS(_operator_subscript)(ADV_UPCS(Bytes)($this.$ref()).$ref(), Builtin::UncheckedTag{}, start + len).$ref())) {
			#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_USFCS((Builtin::Str), UnsafeCreate)(ADV_UFCS(_operator_subscript)(ADV_UPCS(Bytes)($this.$ref()).$ref(), Builtin::UncheckedTag{}, start), len);
	}
	} namespace $extensions { using namespace System;
#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr const $extension_Str_25_str getAt($extension_Str_25_str const& $this LIFETIMEBOUND, Builtin::UncheckedTag, IndexRange range)
	{
		#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_USFCS((Builtin::Str), UnsafeCreate)(ADV_USFCS((Unsafe), Add)(ADV_UFCS(GetDataReference)($this.$ref()), Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), ADV_UPCS(ByteLength)($this.$ref())))), ADV_UFCS(Length)(range.$ref(), ADV_UPCS(ByteLength)($this.$ref())));
	}
	} namespace $extensions { using namespace System;
#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto Substring($extension_Str_25_str const& $this LIFETIMEBOUND, Builtin::usize start)  -> const typename $extension_Str_25_str
	{
		#line 70 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if ((start <=> ADV_UPCS(ByteLength)($this.$ref())) >= 0) {
			#line 71 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (!ADV_UPCS(IsUtf8CodePointBoundary)(ADV_UFCS(_operator_subscript)(ADV_UPCS(Bytes)($this.$ref()).$ref(), Builtin::UncheckedTag{}, start).$ref())) {
			#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_USFCS((Builtin::Str), UnsafeCreate)(ADV_UFCS(_operator_subscript)(ADV_UPCS(Bytes)($this.$ref()).$ref(), Builtin::UncheckedTag{}, start), ADV_UPCS(ByteLength)($this.$ref()) - start);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto Substring($extension_Str_25_str const& $this LIFETIMEBOUND, Builtin::usize start, Builtin::usize length)  -> const typename $extension_Str_25_str
	{
		#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const Builtin::Auto<decltype(start + length)> end = start + length; 
		#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if ((end <=> ADV_UPCS(ByteLength)($this.$ref())) > 0) {
			#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 84 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (!ADV_UPCS(IsUtf8CodePointBoundary)(ADV_UFCS(_operator_subscript)(ADV_UPCS(Bytes)($this.$ref()).$ref(), Builtin::UncheckedTag{}, start).$ref()) || !ADV_UPCS(IsUtf8CodePointBoundary)(ADV_UFCS(_operator_subscript)(ADV_UPCS(Bytes)($this.$ref()).$ref(), Builtin::UncheckedTag{}, end).$ref())) {
			#line 86 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_USFCS((Builtin::Str), UnsafeCreate)(ADV_UFCS(_operator_subscript)(ADV_UPCS(Bytes)($this.$ref()).$ref(), Builtin::UncheckedTag{}, start), length);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto Equals($extension_Str_25_str const& $this LIFETIMEBOUND, Builtin::Str other)  -> const bool
	{
		#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY($this == other); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto $static_TryFromUtf8<$extension_Str_25_str>::get(System::Span<Builtin::u8> bytes)  -> const Builtin::Nullable<$extension_Str_25_str>
	{
		#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return nullptr;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto $static_FromUtf8<$extension_Str_25_str>::get(System::Span<Builtin::u8> bytes)  -> const typename $extension_Str_25_str
	{
		#line 142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (const auto s = ADV_USFCS((Builtin::Str), TryFromUtf8)(bytes)) {
			{
				#line 142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				auto __tmp0 = *s; const auto& s = __tmp0;
				
				#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				return s;
			}
		}
		#line 145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		Builtin::Throw(Builtin::InvalidArgumentException{});
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto $static_FromUtf8Unchecked<$extension_Str_25_str>::get(System::Span<Builtin::u8> bytes) noexcept -> const typename $extension_Str_25_str
	{
		#line 151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_USFCS_TEMPLATE((Unsafe), As<$extension_Str_25_str>)(bytes);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto Contains($extension_Str_25_str const& $this LIFETIMEBOUND, Builtin::u8 val)  -> const bool
	{
		#line 157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Contains)(ADV_UPCS(Bytes)($this.$ref()).$ref(), val)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto _operator_in($extension_Str_25_str const& $this LIFETIMEBOUND, Builtin::u8 val)  -> const bool
	{
		#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Contains)(ADV_UPCS(Bytes)($this.$ref()).$ref(), val)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto Contains($extension_Str_25_str const& $this LIFETIMEBOUND, Builtin::char32 val)  -> const bool
	{
		#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (ADV_UPCS(IsAscii)(val.$ref())) {
			#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			return ADV_UFCS(Contains)(ADV_UPCS(Bytes)($this.$ref()).$ref(), Builtin::Cast<true, Builtin::u8>(val));
		}
		#line 164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		Builtin::InlineArray<Builtin::u32(4U), Builtin::u8> buf{}; 
		#line 165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return Builtin::Boolean(false);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto _operator_in($extension_Str_25_str const& $this LIFETIMEBOUND, Builtin::char32 val)  -> const bool
	{
		#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Contains)($this.$ref(), val)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getByteLength($extension_Str_25_str const & $this ) -> const Builtin::usize
	{
		#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GetByteLength)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getBytes($extension_Str_25_str const & $this ) -> const System::Span<Builtin::u8>
	{
		#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Span<Builtin::u8>), UnsafeCreate)(ADV_UFCS(GetDataReference)($this.$ref()), ADV_UFCS(GetByteLength)($this.$ref()))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getChars($extension_Str_25_str const & $this ) -> const CharIterator
	{
		#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(CharIterator{$this}); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getCharCount($extension_Str_25_str const & $this ) -> const Builtin::usize
	{
		#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		Builtin::usize count{}; 
		#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_60 = ADV_UPCS(Chars)($this.$ref()); auto $for_iter_60 = ADV_UFCS(Iterate)($for_init_60.$ref()); while($for_iter_60.$ref().MoveNext()) {
		auto&& c = $for_iter_60.$ref().GetCurrent(); {
			#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			++count;
		}}}
		#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return count;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getIsAscii($extension_Str_25_str const & $this ) -> const bool
	{
		#line 155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsAscii)(ADV_UPCS(Bytes)($this.$ref()).$ref())); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	

}