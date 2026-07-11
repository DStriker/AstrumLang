#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "IEquatable.h"

namespace System {
namespace __Unsafe {} namespace __Str_Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
class Str2;
template<class T> class TestRef;
//###############################################################################
//# Type definitions
//###############################################################################
class Str2;
	#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	struct [[clang::annotate("ref_struct")]] Str2 final : public Builtin::RefStruct {
		public: using __self = Str2;
		public: using __class = __self;
		public: FORCE_INLINE constexpr decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) __ref() const noexcept { return *this; }
		public: Str2() = default;
		public: bool operator==(const __self&) const = default;
		public: bool operator!=(const __self&) const = default;
		#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		private: Builtin::Ref<Builtin::u8> _data;
		#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		private: Builtin::usize _length;
		
	};
	
	#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(Str2, IEquatable, IEquatable<Str2>, Str2);
	
	template<class T> class TestRef;
	#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	template<class T> struct [[clang::annotate("ref_struct")]] TestRef final : public Builtin::RefStruct {
		public: using __self = TestRef<T>;
		public: using __class = __self;
		public: FORCE_INLINE constexpr decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) __ref() const noexcept { return *this; }
		public: TestRef() = default;
		#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		private: T _data;
		
	};
	
	
	//###############################################################################
//# Free function declarations
//###############################################################################
#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	ASTRUMSTD_HIDDEN auto r(Builtin::MutableRef<std::remove_cvref_t<Builtin::i32>> __a__, Builtin::i32 b)  -> Builtin::i32&;
#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	ASTRUMSTD_HIDDEN auto f()  -> const Builtin::i32;
//###############################################################################
//# Function definitions
//###############################################################################

#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	

}