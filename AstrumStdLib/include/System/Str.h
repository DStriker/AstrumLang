#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "Char.h"
#include "Span.h"

namespace System {
namespace __Unsafe {} namespace __Str_Protected__Unsafe {}
//###############################################################################
//# Type definitions
//###############################################################################
	} namespace __extensions { using namespace System;
#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	using __extension_Str_6_str = Builtin::Str;
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr const __extension_Str_6_str getAt(__extension_Str_6_str const& __this LIFETIMEBOUND, IndexRange range);
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr const __extension_Str_6_str _operator_subscript(__extension_Str_6_str const& __this LIFETIMEBOUND, IndexRange range) { return getAt(__this, range); }
	#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr const __extension_Str_6_str getAt(__extension_Str_6_str const& __this LIFETIMEBOUND, Builtin::UncheckedTag, IndexRange range);
	#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	[[clang::annotate("UserAttr: Unchecked")]] inline constexpr const __extension_Str_6_str _operator_subscript(__extension_Str_6_str const& __this LIFETIMEBOUND, Builtin::UncheckedTag, IndexRange range) { return getAt(__this, Builtin::UncheckedTag{}, range); }
	#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getByteLength(__extension_Str_6_str const& __this ) -> const Builtin::usize;
	#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getBytes(__extension_Str_6_str const& __this ) -> const System::Span<Builtin::u8>;
	} namespace System{
using __extensions::getAt; using __extensions::_operator_subscript;
using __extensions::getAt; using __extensions::_operator_subscript;
using __extensions::getByteLength;
using __extensions::getBytes;

	//###############################################################################
//# Global compile-time constants
//###############################################################################
inline constexpr Builtin::Str __strconst_0x23413470150_0 = "Begin ";
inline constexpr Builtin::Str __strconst_0x23413470150_1 = " Middle ";
inline constexpr Builtin::Str __strconst_0x23413470150_2 = " End";
//###############################################################################
//# Function definitions
//###############################################################################

} namespace __extensions { using namespace System;
#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr const __extension_Str_6_str getAt(__extension_Str_6_str const& __this LIFETIMEBOUND, IndexRange range)
	{
		#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const Builtin::Auto<decltype(ADV_UPCS(ByteLength)(__this.__ref()))> strLen = ADV_UPCS(ByteLength)(__this.__ref()); 
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.__ref()).__ref(), strLen)))> start = Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.__ref()).__ref(), strLen)); 
		#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const Builtin::Auto<decltype(ADV_UFCS(Length)(range.__ref(), strLen))> len = ADV_UFCS(Length)(range.__ref(), strLen); 
		#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (((start + len) <=> strLen) > 0) {
			#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (!ADV_UPCS(IsUtf8CodePointBoundary)(ADV_UFCS(_operator_subscript)(ADV_UPCS(Bytes)(__this.__ref()).__ref(), Builtin::UncheckedTag{}, start).__ref()) || !ADV_UPCS(IsUtf8CodePointBoundary)(ADV_UFCS(_operator_subscript)(ADV_UPCS(Bytes)(__this.__ref()).__ref(), Builtin::UncheckedTag{}, start + len - Builtin::i32(1)).__ref())) {
			#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_USFCS((Builtin::Str), UnsafeCreate)(ADV_UFCS(_operator_subscript)(ADV_UPCS(Bytes)(__this.__ref()).__ref(), Builtin::UncheckedTag{}, start), len);
	}
	} namespace __extensions { using namespace System;
#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr const __extension_Str_6_str getAt(__extension_Str_6_str const& __this LIFETIMEBOUND, Builtin::UncheckedTag, IndexRange range)
	{
		#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_USFCS((Builtin::Str), UnsafeCreate)(ADV_USFCS((Unsafe), Add)(ADV_UFCS(GetDataReference)(__this.__ref()), Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.__ref()).__ref(), ADV_UPCS(ByteLength)(__this.__ref())))), ADV_UFCS(Length)(range.__ref(), ADV_UPCS(ByteLength)(__this.__ref())));
	}
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
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	

}