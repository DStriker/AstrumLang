#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"

namespace System {
namespace __Unsafe {} namespace __Ordering$Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
class Ordering;
class $Class_Ordering;
//###############################################################################
//# Type definitions
//###############################################################################
class $Class_Ordering;
	#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Ordering.ast"
	struct Ordering final : public Builtin::Enum {
		public: using $self = Ordering;
		public: using $class = $Class_Ordering;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Ordering.ast"
		private: Builtin::i32 __value;
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Ordering.ast"
		public: constexpr auto getValue() const noexcept { return __value; } ADV_PROPERTY_GETTER(public, Value, getValue, Builtin::i32)
		public: constexpr Ordering() noexcept = default;
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Ordering.ast"
		private: static constexpr Builtin::StaticStr __names[] = {"Less", "Equal", "Greater"};
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Ordering.ast"
		public: static constexpr int __variants = 3;
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Ordering.ast"
		public: static constexpr std::span<const Builtin::StaticStr> GetNames() noexcept { return __names; }
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Ordering.ast"
		private: static const Ordering __values[];
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Ordering.ast"
		public: static constexpr std::span<const Ordering> GetValues() noexcept;
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Ordering.ast"
		public: constexpr operator bool() const noexcept { return static_cast<bool>(__value); } 
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Ordering.ast"
		public: constexpr bool operator ==(const $self& that) const noexcept { return __value == that.__value; } 
		public: constexpr auto operator <=>(const $self& that) const noexcept { return __value <=> that.__value; } 
		#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Ordering.ast"
		public: static ASTRUMSTD_HIDDEN const Ordering Less;
		#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Ordering.ast"
		public: static ASTRUMSTD_HIDDEN const Ordering Equal;
		#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Ordering.ast"
		public: static ASTRUMSTD_HIDDEN const Ordering Greater;
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Ordering.ast"
		public: constexpr operator Builtin::i32() const noexcept { return __value; }
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Ordering.ast"
		private: constexpr Ordering(Builtin::i32 value) : __value(value) {}
		public: static constexpr $self FromValue(Builtin::i32 rawValue) { return $self(rawValue); }
		
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
	class $Class_Ordering final : public Builtin::ValueType
	{
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Ordering.ast"
		public: using $underlying = Ordering; using $self = $underlying;
		$self __value;
		$Class_Ordering(const $underlying& value) noexcept(std::is_nothrow_copy_constructible_v<$underlying>) : __value{value} {}
		operator $underlying() const noexcept { return __value; }
		
	};
	#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Ordering.ast"
	ADV_CHECK_FOR_CONCRETE(Ordering);
	
} namespace $extensions {
} namespace System {
//###############################################################################
//# Function definitions
//###############################################################################

#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Ordering.ast"
	

}