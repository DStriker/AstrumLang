#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "CharIterator.h"
#include "StringComparison.h"

namespace System {
namespace __Unsafe {} namespace __Str$Protected__Unsafe {}
} namespace $extensions {
template<class __TT> struct $static_Length;
template<class __TT> struct $static_getLength;
template<class __TT> struct $static_GetByteLength;
template<class __TT> struct $static_getGetByteLength;
template<class __TT> struct $static_UnsafeCreate;
template<class __TT> struct $static_getUnsafeCreate;
template<class __TT> struct $static_GetDataReference;
template<class __TT> struct $static_getGetDataReference;
template<class __TT> struct $static_Chars;
template<class __TT> struct $static_getChars;
} namespace System {
//###############################################################################
//# Type definitions
//###############################################################################
	} namespace $extensions { using namespace System;
#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	using $extension_Str_6_str = Builtin::Str;
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr const $extension_Str_6_str getAt($extension_Str_6_str const& $this LIFETIMEBOUND, IndexRange range);
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr const $extension_Str_6_str _operator_subscript($extension_Str_6_str const& $this LIFETIMEBOUND, IndexRange range) { return getAt($this, range); }
	#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr const $extension_Str_6_str getAt($extension_Str_6_str const& $this LIFETIMEBOUND, Builtin::UncheckedTag, IndexRange range);
	#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	[[clang::annotate("UserAttr: Unchecked")]] inline constexpr const $extension_Str_6_str _operator_subscript($extension_Str_6_str const& $this LIFETIMEBOUND, Builtin::UncheckedTag, IndexRange range) { return getAt($this, Builtin::UncheckedTag{}, range); }
	#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto Substring($extension_Str_6_str const& $this LIFETIMEBOUND, Builtin::usize start)  -> const typename $extension_Str_6_str;
	#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto Substring($extension_Str_6_str const& $this LIFETIMEBOUND, Builtin::usize start, Builtin::usize length)  -> const typename $extension_Str_6_str;
	#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getByteLength($extension_Str_6_str const& $this ) -> const Builtin::usize;
	#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getBytes($extension_Str_6_str const& $this ) -> const System::Span<Builtin::u8>;
	#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getChars($extension_Str_6_str const& $this ) -> const CharIterator;
	#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getCharCount($extension_Str_6_str const& $this ) -> const Builtin::usize;
	} namespace System{
using $extensions::getAt; using $extensions::_operator_subscript;
using $extensions::getAt; using $extensions::_operator_subscript;
using $extensions::Substring;
using $extensions::Substring;
using $extensions::getByteLength;
using $extensions::getBytes;
using $extensions::getChars;
using $extensions::getCharCount;

	//###############################################################################
//# Global compile-time constants
//###############################################################################
inline constexpr Builtin::Str $strconst_0x14f17989600_0 = "Begin ";
inline constexpr Builtin::Str $strconst_0x14f17989600_1 = " Middle ";
inline constexpr Builtin::Str $strconst_0x14f17989600_2 = " End";
//###############################################################################
//# Function definitions
//###############################################################################

} namespace $extensions { using namespace System;
#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr const $extension_Str_6_str getAt($extension_Str_6_str const& $this LIFETIMEBOUND, IndexRange range)
	{
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const Builtin::Auto<decltype(ADV_UPCS(ByteLength)($this.$ref()))> strLen = ADV_UPCS(ByteLength)($this.$ref()); 
		#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), strLen)))> start = Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), strLen)); 
		#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const Builtin::Auto<decltype(ADV_UFCS(Length)(range.$ref(), strLen))> len = ADV_UFCS(Length)(range.$ref(), strLen); 
		#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (((start + len) <=> strLen) > 0) {
			#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (!ADV_UPCS(IsUtf8CodePointBoundary)(ADV_UFCS(_operator_subscript)(ADV_UPCS(Bytes)($this.$ref()).$ref(), Builtin::UncheckedTag{}, start).$ref()) || !ADV_UPCS(IsUtf8CodePointBoundary)(ADV_UFCS(_operator_subscript)(ADV_UPCS(Bytes)($this.$ref()).$ref(), Builtin::UncheckedTag{}, start + len).$ref())) {
			#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_USFCS((Builtin::Str), UnsafeCreate)(ADV_UFCS(_operator_subscript)(ADV_UPCS(Bytes)($this.$ref()).$ref(), Builtin::UncheckedTag{}, start), len);
	}
	} namespace $extensions { using namespace System;
#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr const $extension_Str_6_str getAt($extension_Str_6_str const& $this LIFETIMEBOUND, Builtin::UncheckedTag, IndexRange range)
	{
		#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_USFCS((Builtin::Str), UnsafeCreate)(ADV_USFCS((Unsafe), Add)(ADV_UFCS(GetDataReference)($this.$ref()), Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), ADV_UPCS(ByteLength)($this.$ref())))), ADV_UFCS(Length)(range.$ref(), ADV_UPCS(ByteLength)($this.$ref())));
	}
	} namespace $extensions { using namespace System;
#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto Substring($extension_Str_6_str const& $this LIFETIMEBOUND, Builtin::usize start)  -> const typename $extension_Str_6_str
	{
		#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if ((start <=> ADV_UPCS(ByteLength)($this.$ref())) >= 0) {
			#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (!ADV_UPCS(IsUtf8CodePointBoundary)(ADV_UFCS(_operator_subscript)(ADV_UPCS(Bytes)($this.$ref()).$ref(), Builtin::UncheckedTag{}, start).$ref())) {
			#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_USFCS((Builtin::Str), UnsafeCreate)(ADV_UFCS(_operator_subscript)(ADV_UPCS(Bytes)($this.$ref()).$ref(), Builtin::UncheckedTag{}, start), ADV_UPCS(ByteLength)($this.$ref()) - start);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto Substring($extension_Str_6_str const& $this LIFETIMEBOUND, Builtin::usize start, Builtin::usize length)  -> const typename $extension_Str_6_str
	{
		#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const Builtin::Auto<decltype(start + length)> end = start + length; 
		#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if ((end <=> ADV_UPCS(ByteLength)($this.$ref())) > 0) {
			#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		if (!ADV_UPCS(IsUtf8CodePointBoundary)(ADV_UFCS(_operator_subscript)(ADV_UPCS(Bytes)($this.$ref()).$ref(), Builtin::UncheckedTag{}, start).$ref()) || !ADV_UPCS(IsUtf8CodePointBoundary)(ADV_UFCS(_operator_subscript)(ADV_UPCS(Bytes)($this.$ref()).$ref(), Builtin::UncheckedTag{}, end).$ref())) {
			#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return ADV_USFCS((Builtin::Str), UnsafeCreate)(ADV_UFCS(_operator_subscript)(ADV_UPCS(Bytes)($this.$ref()).$ref(), Builtin::UncheckedTag{}, start), length);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getByteLength($extension_Str_6_str const& $this ) -> const Builtin::usize
	{
		#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GetByteLength)($this.$ref())); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getBytes($extension_Str_6_str const& $this ) -> const System::Span<Builtin::u8>
	{
		#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Span<Builtin::u8>), UnsafeCreate)(ADV_UFCS(GetDataReference)($this.$ref()), ADV_UFCS(GetByteLength)($this.$ref()))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getChars($extension_Str_6_str const& $this ) -> const CharIterator
	{
		#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_EXPRESSION_BODY(CharIterator{$this}); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	inline constexpr auto getCharCount($extension_Str_6_str const& $this ) -> const Builtin::usize
	{
		#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		Builtin::usize count{}; 
		#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{ auto $for_init_41 = ADV_UPCS(Chars)($this.$ref()); auto $for_iter_41 = ADV_UFCS(Iterate)($for_init_41.$ref()); while($for_iter_41.$ref().MoveNext()) {
		auto&& c = $for_iter_41.$ref().GetCurrent(); {
			#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			++count;
		}}}
		#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return count;
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	

}