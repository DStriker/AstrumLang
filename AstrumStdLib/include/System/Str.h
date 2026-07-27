#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "CharIterator.h"
#include "StringComparison.h"

namespace System {
namespace __Unsafe {} namespace __Str_Protected__Unsafe {}
//###############################################################################
//# Type definitions
//###############################################################################
	} namespace __extensions { using namespace System;
#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	using __extension_Str_6_str = Builtin::Str;
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr const __extension_Str_6_str getAt(__extension_Str_6_str const& __this LIFETIMEBOUND, IndexRange range);
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr const __extension_Str_6_str _operator_subscript(__extension_Str_6_str const& __this LIFETIMEBOUND, IndexRange range) { return getAt(__this, range); }
	#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr const __extension_Str_6_str getAt(__extension_Str_6_str const& __this LIFETIMEBOUND, Builtin::UncheckedTag, IndexRange range);
	#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	[[clang::annotate("UserAttr: Unchecked")]] inline constexpr const __extension_Str_6_str _operator_subscript(__extension_Str_6_str const& __this LIFETIMEBOUND, Builtin::UncheckedTag, IndexRange range) { return getAt(__this, Builtin::UncheckedTag{}, range); }
	#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto Substring(__extension_Str_6_str const& __this LIFETIMEBOUND, Builtin::usize start)  -> const typename __extension_Str_6_str;
	#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto Substring(__extension_Str_6_str const& __this LIFETIMEBOUND, Builtin::usize start, Builtin::usize length)  -> const typename __extension_Str_6_str;
	#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getByteLength(__extension_Str_6_str const& __this ) -> const Builtin::usize;
	#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getBytes(__extension_Str_6_str const& __this ) -> const System::Span<Builtin::u8>;
	#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getChars(__extension_Str_6_str const& __this ) -> const CharIterator;
	#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getCharCount(__extension_Str_6_str const& __this ) -> const Builtin::usize;
	} namespace System{
using __extensions::getAt; using __extensions::_operator_subscript;
using __extensions::getAt; using __extensions::_operator_subscript;
using __extensions::Substring;
using __extensions::Substring;
using __extensions::getByteLength;
using __extensions::getBytes;
using __extensions::getChars;
using __extensions::getCharCount;

	//###############################################################################
//# Global compile-time constants
//###############################################################################
inline constexpr Builtin::Str __strconst_0x22a16461600_0 = "Begin ";
inline constexpr Builtin::Str __strconst_0x22a16461600_1 = " Middle ";
inline constexpr Builtin::Str __strconst_0x22a16461600_2 = " End";
//###############################################################################
//# Function definitions
//###############################################################################

} namespace __extensions { using namespace System;
#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr const __extension_Str_6_str getAt(__extension_Str_6_str const& __this LIFETIMEBOUND, IndexRange range)
	{
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const Builtin::Auto<decltype(ADV_UPCS(ByteLength)(__this.__ref()))> strLen = ADV_UPCS(ByteLength)(__this.__ref()); 
		#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.__ref()).__ref(), strLen)))> start = Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.__ref()).__ref(), strLen)); 
		#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const Builtin::Auto<decltype(ADV_UFCS(Length)(range.__ref(), strLen))> len = ADV_UFCS(Length)(range.__ref(), strLen); 
		#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (((start + len) <=> strLen) > 0) {
			#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (!ADV_UPCS(IsUtf8CodePointBoundary)(ADV_UFCS(_operator_subscript)(ADV_UPCS(Bytes)(__this.__ref()).__ref(), Builtin::UncheckedTag{}, start).__ref()) || !ADV_UPCS(IsUtf8CodePointBoundary)(ADV_UFCS(_operator_subscript)(ADV_UPCS(Bytes)(__this.__ref()).__ref(), Builtin::UncheckedTag{}, start + len).__ref())) {
			#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_USFCS((Builtin::Str), UnsafeCreate)(ADV_UFCS(_operator_subscript)(ADV_UPCS(Bytes)(__this.__ref()).__ref(), Builtin::UncheckedTag{}, start), len);
	}
	} namespace __extensions { using namespace System;
#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr const __extension_Str_6_str getAt(__extension_Str_6_str const& __this LIFETIMEBOUND, Builtin::UncheckedTag, IndexRange range)
	{
		#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_USFCS((Builtin::Str), UnsafeCreate)(ADV_USFCS((Unsafe), Add)(ADV_UFCS(GetDataReference)(__this.__ref()), Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.__ref()).__ref(), ADV_UPCS(ByteLength)(__this.__ref())))), ADV_UFCS(Length)(range.__ref(), ADV_UPCS(ByteLength)(__this.__ref())));
	}
	} namespace __extensions { using namespace System;
#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto Substring(__extension_Str_6_str const& __this LIFETIMEBOUND, Builtin::usize start)  -> const typename __extension_Str_6_str
	{
		#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if ((start <=> ADV_UPCS(ByteLength)(__this.__ref())) >= 0) {
			#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (!ADV_UPCS(IsUtf8CodePointBoundary)(ADV_UFCS(_operator_subscript)(ADV_UPCS(Bytes)(__this.__ref()).__ref(), Builtin::UncheckedTag{}, start).__ref())) {
			#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_USFCS((Builtin::Str), UnsafeCreate)(ADV_UFCS(_operator_subscript)(ADV_UPCS(Bytes)(__this.__ref()).__ref(), Builtin::UncheckedTag{}, start), ADV_UPCS(ByteLength)(__this.__ref()) - start);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto Substring(__extension_Str_6_str const& __this LIFETIMEBOUND, Builtin::usize start, Builtin::usize length)  -> const typename __extension_Str_6_str
	{
		#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const Builtin::Auto<decltype(start + length)> end = start + length; 
		#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if ((end <=> ADV_UPCS(ByteLength)(__this.__ref())) > 0) {
			#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (!ADV_UPCS(IsUtf8CodePointBoundary)(ADV_UFCS(_operator_subscript)(ADV_UPCS(Bytes)(__this.__ref()).__ref(), Builtin::UncheckedTag{}, start).__ref()) || !ADV_UPCS(IsUtf8CodePointBoundary)(ADV_UFCS(_operator_subscript)(ADV_UPCS(Bytes)(__this.__ref()).__ref(), Builtin::UncheckedTag{}, end).__ref())) {
			#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_USFCS((Builtin::Str), UnsafeCreate)(ADV_UFCS(_operator_subscript)(ADV_UPCS(Bytes)(__this.__ref()).__ref(), Builtin::UncheckedTag{}, start), length);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getByteLength(__extension_Str_6_str const& __this ) -> const Builtin::usize
	{
		#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GetByteLength)(__this.__ref())); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getBytes(__extension_Str_6_str const& __this ) -> const System::Span<Builtin::u8>
	{
		#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Span<Builtin::u8>), UnsafeCreate)(ADV_UFCS(GetDataReference)(__this.__ref()), ADV_UFCS(GetByteLength)(__this.__ref()))); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getChars(__extension_Str_6_str const& __this ) -> const CharIterator
	{
		#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(CharIterator{__this}); 
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getCharCount(__extension_Str_6_str const& __this ) -> const Builtin::usize
	{
		#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		Builtin::usize count{}; 
		#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto __for_init_41 = ADV_UPCS(Chars)(__this.__ref()); auto __for_iter_41 = ADV_UFCS(Iterate)(__for_init_41.__ref()); while(__for_iter_41.__ref().MoveNext()) {
		auto&& c = __for_iter_41.__ref().GetCurrent(); {
			#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			++count;
		}}}
		#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return count;
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	

}