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
	template<class T, size_t S> inline constexpr auto Get($extension_InlineArray_7_T_brack_S_brack_<T, S> const& $this LIFETIMEBOUND, Builtin::usize index)  -> const Builtin::Nullable<T>;
	template<class T, size_t S> inline constexpr auto Get($proxy<$extension_InlineArray_7_T_brack_S_brack_<T, S>> const& $this LIFETIMEBOUND, Builtin::usize index)  -> const Builtin::Nullable<T> { return Get($this.val, index); } template<class T, size_t S> inline constexpr auto Get($proxy<$extension_InlineArray_7_T_brack_S_brack_<T, S>&> const& $this LIFETIMEBOUND, Builtin::usize index)  -> const Builtin::Nullable<T> { return Get($this.val, index); } 
	#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> inline constexpr const T& getAt($extension_InlineArray_7_T_brack_S_brack_<T, S> const& $this LIFETIMEBOUND, Index index);
	#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> inline constexpr const T& _operator_subscript($extension_InlineArray_7_T_brack_S_brack_<T, S> const& $this LIFETIMEBOUND, Index index) { return getAt($this, index); }
	#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> inline constexpr const T& getAt($extension_InlineArray_7_T_brack_S_brack_<T, S> const& $this LIFETIMEBOUND, Builtin::UncheckedTag, Index index);
	#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> [[clang::annotate("UserAttr: Unchecked")]] inline constexpr const T& _operator_subscript($extension_InlineArray_7_T_brack_S_brack_<T, S> const& $this LIFETIMEBOUND, Builtin::UncheckedTag, Index index) { return getAt($this, Builtin::UncheckedTag{}, index); }
	#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> inline constexpr System::MutableSpan<T> getAt($extension_InlineArray_7_T_brack_S_brack_<T, S> & $this , IndexRange range);
	#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> inline constexpr System::MutableSpan<T> _operator_subscript($extension_InlineArray_7_T_brack_S_brack_<T, S> & $this , IndexRange range) { return getAt($this, range); }
	#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> inline constexpr System::MutableSpan<T> getAt($extension_InlineArray_7_T_brack_S_brack_<T, S> & $this , Builtin::UncheckedTag, IndexRange range);
	#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> [[clang::annotate("UserAttr: Unchecked")]] inline constexpr System::MutableSpan<T> _operator_subscript($extension_InlineArray_7_T_brack_S_brack_<T, S> & $this , Builtin::UncheckedTag, IndexRange range) { return getAt($this, Builtin::UncheckedTag{}, range); }
	#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> inline constexpr const System::Span<T> getAt($extension_InlineArray_7_T_brack_S_brack_<T, S> const& $this LIFETIMEBOUND, IndexRange range);
	#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> inline constexpr const System::Span<T> _operator_subscript($extension_InlineArray_7_T_brack_S_brack_<T, S> const& $this LIFETIMEBOUND, IndexRange range) { return getAt($this, range); }
	#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> inline constexpr const System::Span<T> getAt($extension_InlineArray_7_T_brack_S_brack_<T, S> const& $this LIFETIMEBOUND, Builtin::UncheckedTag, IndexRange range);
	#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> [[clang::annotate("UserAttr: Unchecked")]] inline constexpr const System::Span<T> _operator_subscript($extension_InlineArray_7_T_brack_S_brack_<T, S> const& $this LIFETIMEBOUND, Builtin::UncheckedTag, IndexRange range) { return getAt($this, Builtin::UncheckedTag{}, range); }
	#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> inline constexpr auto AsSpan($extension_InlineArray_7_T_brack_S_brack_<T, S> const& $this LIFETIMEBOUND)  -> const Span<T>;
	template<class T, size_t S> inline constexpr auto AsSpan($proxy<$extension_InlineArray_7_T_brack_S_brack_<T, S>> const& $this LIFETIMEBOUND)  -> const Span<T> { return AsSpan($this.val); } template<class T, size_t S> inline constexpr auto AsSpan($proxy<$extension_InlineArray_7_T_brack_S_brack_<T, S>&> const& $this LIFETIMEBOUND)  -> const Span<T> { return AsSpan($this.val); } 
	#line 70 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> inline constexpr auto AsMutableSpan($extension_InlineArray_7_T_brack_S_brack_<T, S> & $this )  -> MutableSpan<T>;
	template<class T, size_t S> inline constexpr auto AsMutableSpan($proxy<$extension_InlineArray_7_T_brack_S_brack_<T, S>> & $this )  -> MutableSpan<T> { return AsMutableSpan($this.val); } template<class T, size_t S> inline constexpr auto AsMutableSpan($proxy<$extension_InlineArray_7_T_brack_S_brack_<T, S>&> & $this )  -> MutableSpan<T> { return AsMutableSpan($this.val); } 
	#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> inline auto Clear($extension_InlineArray_7_T_brack_S_brack_<T, S> & $this )  -> decltype(auto);
	template<class T, size_t S> inline auto Clear($proxy<$extension_InlineArray_7_T_brack_S_brack_<T, S>> & $this )  -> decltype(auto) { return Clear($this.val); } template<class T, size_t S> inline auto Clear($proxy<$extension_InlineArray_7_T_brack_S_brack_<T, S>&> & $this )  -> decltype(auto) { return Clear($this.val); } 
	#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> inline auto Fill($extension_InlineArray_7_T_brack_S_brack_<T, S> & $this , T&& val)  -> decltype(auto);
	template<class T, size_t S> inline auto Fill($proxy<$extension_InlineArray_7_T_brack_S_brack_<T, S>> & $this , T&& val)  -> decltype(auto) { return Fill($this.val, val); } template<class T, size_t S> inline auto Fill($proxy<$extension_InlineArray_7_T_brack_S_brack_<T, S>&> & $this , T&& val)  -> decltype(auto) { return Fill($this.val, val); } 
	#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> inline auto Replace($extension_InlineArray_7_T_brack_S_brack_<T, S> & $this , T&& oldValue, T&& newValue)  -> decltype(auto);
	template<class T, size_t S> inline auto Replace($proxy<$extension_InlineArray_7_T_brack_S_brack_<T, S>> & $this , T&& oldValue, T&& newValue)  -> decltype(auto) { return Replace($this.val, oldValue, newValue); } template<class T, size_t S> inline auto Replace($proxy<$extension_InlineArray_7_T_brack_S_brack_<T, S>&> & $this , T&& oldValue, T&& newValue)  -> decltype(auto) { return Replace($this.val, oldValue, newValue); } 
	#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> inline auto Replace($extension_InlineArray_7_T_brack_S_brack_<T, S> & $this , T&& oldValue, T&& newValue, EqualityComparer<T> equals)  -> decltype(auto);
	template<class T, size_t S> inline auto Replace($proxy<$extension_InlineArray_7_T_brack_S_brack_<T, S>> & $this , T&& oldValue, T&& newValue, EqualityComparer<T> equals)  -> decltype(auto) { return Replace($this.val, oldValue, newValue, equals); } template<class T, size_t S> inline auto Replace($proxy<$extension_InlineArray_7_T_brack_S_brack_<T, S>&> & $this , T&& oldValue, T&& newValue, EqualityComparer<T> equals)  -> decltype(auto) { return Replace($this.val, oldValue, newValue, equals); } 
	#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> inline auto Reverse($extension_InlineArray_7_T_brack_S_brack_<T, S> & $this )  -> decltype(auto);
	template<class T, size_t S> inline auto Reverse($proxy<$extension_InlineArray_7_T_brack_S_brack_<T, S>> & $this )  -> decltype(auto) { return Reverse($this.val); } template<class T, size_t S> inline auto Reverse($proxy<$extension_InlineArray_7_T_brack_S_brack_<T, S>&> & $this )  -> decltype(auto) { return Reverse($this.val); } 
	#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> inline constexpr auto getLength($extension_InlineArray_7_T_brack_S_brack_<T, S> const& $this ) -> const Builtin::usize;
	} namespace System{
using $extensions::getAt; using $extensions::_operator_subscript;
using $extensions::getAt; using $extensions::_operator_subscript;
using $extensions::Get;
using $extensions::getAt; using $extensions::_operator_subscript;
using $extensions::getAt; using $extensions::_operator_subscript;
using $extensions::getAt; using $extensions::_operator_subscript;
using $extensions::getAt; using $extensions::_operator_subscript;
using $extensions::getAt; using $extensions::_operator_subscript;
using $extensions::getAt; using $extensions::_operator_subscript;
using $extensions::AsSpan;
using $extensions::AsMutableSpan;
using $extensions::Clear;
using $extensions::Fill;
using $extensions::Replace;
using $extensions::Replace;
using $extensions::Reverse;
using $extensions::getLength;

	} namespace $extensions {
template<class __TT> struct $static_Clear;
template<class __TT> struct $static_getClear;
template<class __TT> struct $static_Offset;
template<class __TT> struct $static_getOffset;
template<class __TT> struct $static_IndexOutOfRangeException;
template<class __TT> struct $static_getIndexOutOfRangeException;
template<class __TT> struct $static_GetDataReference;
template<class __TT> struct $static_getGetDataReference;
template<class __TT> struct $static_Add;
template<class __TT> struct $static_getAdd;
template<class __TT> struct $static_Start;
template<class __TT> struct $static_getStart;
template<class __TT> struct $static_UnsafeCreate;
template<class __TT> struct $static_getUnsafeCreate;
template<class __TT> struct $static_Length;
template<class __TT> struct $static_getLength;
template<class __TT> struct $static_AsMutableSpan;
template<class __TT> struct $static_getAsMutableSpan;
template<class __TT> struct $static_Fill;
template<class __TT> struct $static_getFill;
template<class __TT> struct $static_Replace;
template<class __TT> struct $static_getReplace;
template<class __TT> struct $static_Reverse;
template<class __TT> struct $static_getReverse;
template<class __TT> struct $static_AsSpan;
template<class __TT> struct $static_getAsSpan;
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
	template<class T, size_t S> inline constexpr auto Get($extension_InlineArray_7_T_brack_S_brack_<T, S> const& $this LIFETIMEBOUND, Builtin::usize index)  -> const Builtin::Nullable<T>
	{
		#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		if ((index <=> S) >= 0) {
			#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
			return nullptr;
		}
		#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		return ADV_USFCS((Unsafe), Add)(Builtin::MutableRef(ADV_UFCS(GetDataReference)($this.$ref())), index);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> inline constexpr const T& getAt($extension_InlineArray_7_T_brack_S_brack_<T, S> const& $this LIFETIMEBOUND, Index index)
	{
		#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(index.$ref(), S)))> realIndex = Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(index.$ref(), S)); 
		#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		if ((realIndex <=> S) >= 0) {
			#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		return ADV_USFCS((Unsafe), Add)(ADV_UFCS(GetDataReference)($this.$ref()), realIndex);
	}
	} namespace $extensions { using namespace System;
#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> inline constexpr const T& getAt($extension_InlineArray_7_T_brack_S_brack_<T, S> const& $this LIFETIMEBOUND, Builtin::UncheckedTag, Index index)
	{
		#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		return ADV_USFCS((Unsafe), Add)(ADV_UFCS(GetDataReference)($this.$ref()), Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(index.$ref(), S)));
	}
	} namespace $extensions { using namespace System;
#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> inline constexpr System::MutableSpan<T> getAt($extension_InlineArray_7_T_brack_S_brack_<T, S> & $this , IndexRange range)
	{
		#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), S)))> start = Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), S)); 
		#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		const Builtin::Auto<decltype(ADV_UFCS(Length)(range.$ref(), S))> len = ADV_UFCS(Length)(range.$ref(), S); 
		#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		if (((start + len) <=> S) > 0) {
			#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		return ADV_USFCS((MutableSpan<T>), UnsafeCreate)(ADV_USFCS((Unsafe), Add)(Builtin::MutableRef(ADV_UFCS(GetDataReference)($this.$ref())), start), len);
	}
	} namespace $extensions { using namespace System;
#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> inline constexpr System::MutableSpan<T> getAt($extension_InlineArray_7_T_brack_S_brack_<T, S> & $this , Builtin::UncheckedTag, IndexRange range)
	{
		#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		return ADV_USFCS((MutableSpan<T>), UnsafeCreate)(ADV_USFCS((Unsafe), Add)(Builtin::MutableRef(ADV_UFCS(GetDataReference)($this.$ref())), Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), S))), ADV_UFCS(Length)(range.$ref(), S));
	}
	} namespace $extensions { using namespace System;
#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> inline constexpr const System::Span<T> getAt($extension_InlineArray_7_T_brack_S_brack_<T, S> const& $this LIFETIMEBOUND, IndexRange range)
	{
		#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), S)))> start = Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), S)); 
		#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		const Builtin::Auto<decltype(ADV_UFCS(Length)(range.$ref(), S))> len = ADV_UFCS(Length)(range.$ref(), S); 
		#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		if (((start + len) <=> S) > 0) {
			#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		return ADV_USFCS((Span<T>), UnsafeCreate)(ADV_USFCS((Unsafe), Add)(ADV_UFCS(GetDataReference)($this.$ref()), start), len);
	}
	} namespace $extensions { using namespace System;
#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> inline constexpr const System::Span<T> getAt($extension_InlineArray_7_T_brack_S_brack_<T, S> const& $this LIFETIMEBOUND, Builtin::UncheckedTag, IndexRange range)
	{
		#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		return ADV_USFCS((Span<T>), UnsafeCreate)(ADV_USFCS((Unsafe), Add)(ADV_UFCS(GetDataReference)($this.$ref()), Builtin::Cast<true, Builtin::usize>(ADV_UFCS(Offset)(ADV_UPCS(Start)(range.$ref()).$ref(), S))), ADV_UFCS(Length)(range.$ref(), S));
	}
	} namespace $extensions { using namespace System;
#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> inline constexpr auto AsSpan($extension_InlineArray_7_T_brack_S_brack_<T, S> const& $this LIFETIMEBOUND)  -> const Span<T>
	{
		#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		ADV_EXPRESSION_BODY($this); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 70 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> inline constexpr auto AsMutableSpan($extension_InlineArray_7_T_brack_S_brack_<T, S> & $this )  -> MutableSpan<T>
	{
		#line 70 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		ADV_EXPRESSION_BODY(MutableSpan<T>{Builtin::MutableRef($this)}); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> inline auto Clear($extension_InlineArray_7_T_brack_S_brack_<T, S> & $this )  -> decltype(auto)
	{
		#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(AsMutableSpan)($this.$ref()).$ref().Clear()); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> inline auto Fill($extension_InlineArray_7_T_brack_S_brack_<T, S> & $this , T&& val)  -> decltype(auto)
	{
		#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Fill)(ADV_UFCS(AsMutableSpan)($this.$ref()).$ref(), std::forward<decltype(val)>(val))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> inline auto Replace($extension_InlineArray_7_T_brack_S_brack_<T, S> & $this , T&& oldValue, T&& newValue)  -> decltype(auto)
	{
		#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Replace)(ADV_UFCS(AsMutableSpan)($this.$ref()).$ref(), std::forward<decltype(oldValue)>(oldValue), std::forward<decltype(newValue)>(newValue))); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> inline auto Replace($extension_InlineArray_7_T_brack_S_brack_<T, S> & $this , T&& oldValue, T&& newValue, EqualityComparer<T> equals)  -> decltype(auto)
	{
		#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Replace)(ADV_UFCS(AsMutableSpan)($this.$ref()).$ref(), std::forward<decltype(oldValue)>(oldValue), std::forward<decltype(newValue)>(newValue), equals)); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> inline auto Reverse($extension_InlineArray_7_T_brack_S_brack_<T, S> & $this )  -> decltype(auto)
	{
		#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Reverse)(ADV_UFCS(AsMutableSpan)($this.$ref()).$ref())); 
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	template<class T, size_t S> inline constexpr auto getLength($extension_InlineArray_7_T_brack_S_brack_<T, S> const & $this ) -> const Builtin::usize
	{
		#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		ADV_EXPRESSION_BODY(S); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	

}