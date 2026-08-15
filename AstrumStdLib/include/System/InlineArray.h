#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "Span.h"

namespace System {
namespace __Unsafe {} namespace __InlineArray$Protected__Unsafe {}
//###############################################################################
//# Global type aliases
//###############################################################################
#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
template<class T, size_t S> using InlineArray = Builtin::InlineArray<S, T>;
//###############################################################################
//# Type definitions
//###############################################################################
	} namespace $extensions { using namespace System;
#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> using $extension_InlineArray_7_T_brack_S_brack_ = Builtin::InlineArray<S, T>;
	#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> inline constexpr T& getAt($extension_InlineArray_7_T_brack_S_brack_<T, S> & $this , Index index);
	#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> inline constexpr T& _operator_subscript($extension_InlineArray_7_T_brack_S_brack_<T, S> & $this , Index index) { return getAt($this, index); }
	#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> inline constexpr T& getAt($extension_InlineArray_7_T_brack_S_brack_<T, S> & $this , Builtin::UncheckedTag, Index index);
	#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> [[clang::annotate("UserAttr: Unchecked")]] inline constexpr T& _operator_subscript($extension_InlineArray_7_T_brack_S_brack_<T, S> & $this , Builtin::UncheckedTag, Index index) { return getAt($this, Builtin::UncheckedTag{}, index); }
	#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> inline constexpr const T& getAt($extension_InlineArray_7_T_brack_S_brack_<T, S> const& $this LIFETIMEBOUND, Index index);
	#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> inline constexpr const T& _operator_subscript($extension_InlineArray_7_T_brack_S_brack_<T, S> const& $this LIFETIMEBOUND, Index index) { return getAt($this, index); }
	#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> inline constexpr const T& getAt($extension_InlineArray_7_T_brack_S_brack_<T, S> const& $this LIFETIMEBOUND, Builtin::UncheckedTag, Index index);
	#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> [[clang::annotate("UserAttr: Unchecked")]] inline constexpr const T& _operator_subscript($extension_InlineArray_7_T_brack_S_brack_<T, S> const& $this LIFETIMEBOUND, Builtin::UncheckedTag, Index index) { return getAt($this, Builtin::UncheckedTag{}, index); }
	#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> inline constexpr System::MutableSpan<T> getAt($extension_InlineArray_7_T_brack_S_brack_<T, S> & $this , IndexRange range);
	#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> inline constexpr System::MutableSpan<T> _operator_subscript($extension_InlineArray_7_T_brack_S_brack_<T, S> & $this , IndexRange range) { return getAt($this, range); }
	#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> inline constexpr System::MutableSpan<T> getAt($extension_InlineArray_7_T_brack_S_brack_<T, S> & $this , Builtin::UncheckedTag, IndexRange range);
	#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> [[clang::annotate("UserAttr: Unchecked")]] inline constexpr System::MutableSpan<T> _operator_subscript($extension_InlineArray_7_T_brack_S_brack_<T, S> & $this , Builtin::UncheckedTag, IndexRange range) { return getAt($this, Builtin::UncheckedTag{}, range); }
	#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> inline constexpr const System::Span<T> getAt($extension_InlineArray_7_T_brack_S_brack_<T, S> const& $this LIFETIMEBOUND, IndexRange range);
	#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> inline constexpr const System::Span<T> _operator_subscript($extension_InlineArray_7_T_brack_S_brack_<T, S> const& $this LIFETIMEBOUND, IndexRange range) { return getAt($this, range); }
	#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> inline constexpr const System::Span<T> getAt($extension_InlineArray_7_T_brack_S_brack_<T, S> const& $this LIFETIMEBOUND, Builtin::UncheckedTag, IndexRange range);
	#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> [[clang::annotate("UserAttr: Unchecked")]] inline constexpr const System::Span<T> _operator_subscript($extension_InlineArray_7_T_brack_S_brack_<T, S> const& $this LIFETIMEBOUND, Builtin::UncheckedTag, IndexRange range) { return getAt($this, Builtin::UncheckedTag{}, range); }
	#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> inline constexpr auto AsMutableSpan($extension_InlineArray_7_T_brack_S_brack_<T, S> & $this )  -> System::MutableSpan<T>;
	#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> inline constexpr auto getLength($extension_InlineArray_7_T_brack_S_brack_<T, S> const& $this ) -> const Builtin::usize;
	#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> inline constexpr auto getAsSpan($extension_InlineArray_7_T_brack_S_brack_<T, S> const& $this ) -> const System::Span<T>;
	} namespace System{
using $extensions::getAt; using $extensions::_operator_subscript;
using $extensions::getAt; using $extensions::_operator_subscript;
using $extensions::getAt; using $extensions::_operator_subscript;
using $extensions::getAt; using $extensions::_operator_subscript;
using $extensions::getAt; using $extensions::_operator_subscript;
using $extensions::getAt; using $extensions::_operator_subscript;
using $extensions::getAt; using $extensions::_operator_subscript;
using $extensions::getAt; using $extensions::_operator_subscript;
using $extensions::AsMutableSpan;
using $extensions::getLength;
using $extensions::getAsSpan;

	} namespace $extensions {
template<class __TT> struct $static_Offset;
template<class __TT> struct $static_getOffset;
template<class __TT> struct $static_IndexOutOfRangeException;
template<class __TT> struct $static_getIndexOutOfRangeException;
template<class __TT> struct $static_GetDataReference;
template<class __TT> struct $static_getGetDataReference;
template<class __TT> struct $static_Add;
template<class __TT> struct $static_getAdd;
template<class __TT> struct $static_UnsafeCreate;
template<class __TT> struct $static_getUnsafeCreate;
template<class __TT> struct $static_Start;
template<class __TT> struct $static_getStart;
template<class __TT> struct $static_Length;
template<class __TT> struct $static_getLength;
} namespace System {
//###############################################################################
//# Function definitions
//###############################################################################

} namespace $extensions { using namespace System;
#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> inline constexpr T& getAt($extension_InlineArray_7_T_brack_S_brack_<T, S> & $this , Index index)
	{
		#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(index.$ref(), S)))> realIndex = Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(index.$ref(), S)); 
		#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		if ((realIndex <=> S) >= 0) {
			#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		return ADV_USFCS((Unsafe), Add)(Builtin::MutableRef(ADV_UFCS(GetDataReference)($this.$ref())), realIndex);
	}
	} namespace $extensions { using namespace System;
#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> inline constexpr T& getAt($extension_InlineArray_7_T_brack_S_brack_<T, S> & $this , Builtin::UncheckedTag, Index index)
	{
		#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		return ADV_USFCS((Unsafe), Add)(Builtin::MutableRef(ADV_UFCS(GetDataReference)($this.$ref())), Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(index.$ref(), S)));
	}
	} namespace $extensions { using namespace System;
#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> inline constexpr const T& getAt($extension_InlineArray_7_T_brack_S_brack_<T, S> const& $this LIFETIMEBOUND, Index index)
	{
		#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(index.$ref(), S)))> realIndex = Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(index.$ref(), S)); 
		#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		if ((realIndex <=> S) >= 0) {
			#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		return ADV_USFCS((Unsafe), Add)(ADV_UFCS(GetDataReference)($this.$ref()), realIndex);
	}
	} namespace $extensions { using namespace System;
#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> inline constexpr const T& getAt($extension_InlineArray_7_T_brack_S_brack_<T, S> const& $this LIFETIMEBOUND, Builtin::UncheckedTag, Index index)
	{
		#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		return ADV_USFCS((Unsafe), Add)(ADV_UFCS(GetDataReference)($this.$ref()), Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(index.$ref(), S)));
	}
	} namespace $extensions { using namespace System;
#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> inline constexpr System::MutableSpan<T> getAt($extension_InlineArray_7_T_brack_S_brack_<T, S> & $this , IndexRange range)
	{
		#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), S)))> start = Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), S)); 
		#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		const Builtin::Auto<decltype(ADV_UFCS(Length)(range.$ref(), S))> len = ADV_UFCS(Length)(range.$ref(), S); 
		#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		if (((start + len) <=> S) > 0) {
			#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		return ADV_USFCS((MutableSpan<T>), UnsafeCreate)(ADV_USFCS((Unsafe), Add)(Builtin::MutableRef(ADV_UFCS(GetDataReference)($this.$ref())), start), len);
	}
	} namespace $extensions { using namespace System;
#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> inline constexpr System::MutableSpan<T> getAt($extension_InlineArray_7_T_brack_S_brack_<T, S> & $this , Builtin::UncheckedTag, IndexRange range)
	{
		#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		return ADV_USFCS((MutableSpan<T>), UnsafeCreate)(ADV_USFCS((Unsafe), Add)(Builtin::MutableRef(ADV_UFCS(GetDataReference)($this.$ref())), Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), S))), ADV_UFCS(Length)(range.$ref(), S));
	}
	} namespace $extensions { using namespace System;
#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> inline constexpr const System::Span<T> getAt($extension_InlineArray_7_T_brack_S_brack_<T, S> const& $this LIFETIMEBOUND, IndexRange range)
	{
		#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), S)))> start = Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), S)); 
		#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		const Builtin::Auto<decltype(ADV_UFCS(Length)(range.$ref(), S))> len = ADV_UFCS(Length)(range.$ref(), S); 
		#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		if (((start + len) <=> S) > 0) {
			#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		return ADV_USFCS((Span<T>), UnsafeCreate)(ADV_USFCS((Unsafe), Add)(ADV_UFCS(GetDataReference)($this.$ref()), start), len);
	}
	} namespace $extensions { using namespace System;
#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> inline constexpr const System::Span<T> getAt($extension_InlineArray_7_T_brack_S_brack_<T, S> const& $this LIFETIMEBOUND, Builtin::UncheckedTag, IndexRange range)
	{
		#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		return ADV_USFCS((Span<T>), UnsafeCreate)(ADV_USFCS((Unsafe), Add)(ADV_UFCS(GetDataReference)($this.$ref()), Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), S))), ADV_UFCS(Length)(range.$ref(), S));
	}
	} namespace $extensions { using namespace System;
#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> inline constexpr auto AsMutableSpan($extension_InlineArray_7_T_brack_S_brack_<T, S> & $this )  -> System::MutableSpan<T>
	{
		#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> inline constexpr auto getLength($extension_InlineArray_7_T_brack_S_brack_<T, S> const& $this ) -> const Builtin::usize
	{
		#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		ADV_EXPRESSION_BODY(S); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> inline constexpr auto getAsSpan($extension_InlineArray_7_T_brack_S_brack_<T, S> const& $this ) -> const System::Span<T>
	{
		#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	

}