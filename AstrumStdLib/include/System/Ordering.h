#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif

namespace System {
namespace __Unsafe {} namespace __Ordering_Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
class Ordering;
class __Class_Ordering;
//###############################################################################
//# Type definitions
//###############################################################################
class __Class_Ordering;
	#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Ordering.ast"
	struct Ordering final : public Builtin::Enum {
		public: using __self = Ordering;
		public: using __class = __Class_Ordering;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Ordering.ast"
		private: Builtin::i32 __value;
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Ordering.ast"
		public: constexpr auto getValue() const noexcept { return __value; } ADV_PROPERTY_GETTER(public, Value, getValue, Builtin::i32)
		#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Ordering.ast"
		public: static const Ordering Less;
		#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Ordering.ast"
		public: static const Ordering Equal;
		#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Ordering.ast"
		public: static const Ordering Greater;
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Ordering.ast"
		private: static constexpr Builtin::Str __names[] = {u"Less", u"Equal", u"Greater"};
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Ordering.ast"
		public: static constexpr int __variants = 3;
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Ordering.ast"
		public: static constexpr std::span<const Builtin::Str> GetNames() noexcept { return __names; }
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Ordering.ast"
		private: static const Ordering __values[];
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Ordering.ast"
		public: static constexpr std::span<const Ordering> GetValues() noexcept;
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Ordering.ast"
		public: constexpr operator bool() const noexcept { return static_cast<bool>(__value); } 
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Ordering.ast"
		public: constexpr bool operator ==(const __self& that) const noexcept { return __value == that.__value; } 
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Ordering.ast"
		public: constexpr operator Builtin::i32() const noexcept { return __value; }
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Ordering.ast"
		private: constexpr Ordering(Builtin::i32 value) : __value(value) {}
		
	};
	
	#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Ordering.ast"
	inline constexpr Ordering Ordering::Less = Builtin::i32(Builtin::i32(-1));
	
	#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Ordering.ast"
	inline constexpr Ordering Ordering::Equal = Builtin::i32(Builtin::i32(0));
	
	#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Ordering.ast"
	inline constexpr Ordering Ordering::Greater = Builtin::i32(Builtin::i32(1));
	inline constexpr Ordering Ordering::__values[] = {Less, Equal, Greater};
	inline constexpr std::span<const Ordering> Ordering::GetValues() noexcept { return __values; }
	#define ADV_USING_ENUM_Ordering \
	constexpr auto Less = Ordering::Less;\
	constexpr auto Equal = Ordering::Equal;\
	constexpr auto Greater = Ordering::Greater;\
	
	
	
	#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Ordering.ast"
	class __Class_Ordering final : public Builtin::ValueType
	{
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Ordering.ast"
		public: using __underlying = Ordering; using __self = __underlying;
		__self __value;
		__Class_Ordering(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
		operator __underlying() const noexcept { return __value; }
		
	};
	#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Ordering.ast"
	ADV_CHECK_FOR_CONCRETE(Ordering);
	
//###############################################################################
//# Function definitions
//###############################################################################

#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Ordering.ast"
	

}