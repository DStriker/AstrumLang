#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"

namespace System {
namespace __Unsafe {} namespace __MidpointRounding$Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
class MidpointRounding;
class $Class_MidpointRounding;
//###############################################################################
//# Type definitions
//###############################################################################
class $Class_MidpointRounding;
	#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MidpointRounding.ast"
	struct MidpointRounding final : public Builtin::Enum {
		public: using $self = MidpointRounding;
		public: using $class = $Class_MidpointRounding;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MidpointRounding.ast"
		private: Builtin::u8 __value;
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MidpointRounding.ast"
		public: constexpr auto getValue() const noexcept { return __value; } ADV_PROPERTY_GETTER(public, Value, getValue, Builtin::u8)
		public: constexpr MidpointRounding() noexcept = default;
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MidpointRounding.ast"
		private: static constexpr Builtin::StaticStr __names[] = {"ToEven", "AwayFromZero", "ToZero", "ToNegativeInfinity", "ToPositiveInfinity"};
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MidpointRounding.ast"
		public: static constexpr int __variants = 5;
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MidpointRounding.ast"
		public: static constexpr std::span<const Builtin::StaticStr> GetNames() noexcept { return __names; }
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MidpointRounding.ast"
		private: static const MidpointRounding __values[];
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MidpointRounding.ast"
		public: static constexpr std::span<const MidpointRounding> GetValues() noexcept;
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MidpointRounding.ast"
		public: constexpr operator bool() const noexcept { return static_cast<bool>(__value); } 
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MidpointRounding.ast"
		public: constexpr bool operator ==(const $self& that) const noexcept { return __value == that.__value; } 
		public: constexpr auto operator <=>(const $self& that) const noexcept { return __value <=> that.__value; } 
		#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MidpointRounding.ast"
		public: static ASTRUMSTD_HIDDEN const MidpointRounding ToEven;
		#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MidpointRounding.ast"
		public: static ASTRUMSTD_HIDDEN const MidpointRounding AwayFromZero;
		#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MidpointRounding.ast"
		public: static ASTRUMSTD_HIDDEN const MidpointRounding ToZero;
		#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MidpointRounding.ast"
		public: static ASTRUMSTD_HIDDEN const MidpointRounding ToNegativeInfinity;
		#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MidpointRounding.ast"
		public: static ASTRUMSTD_HIDDEN const MidpointRounding ToPositiveInfinity;
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MidpointRounding.ast"
		public: constexpr operator Builtin::u8() const noexcept { return __value; }
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MidpointRounding.ast"
		private: constexpr MidpointRounding(Builtin::u8 value) : __value(value) {}
		public: static constexpr $self FromValue(Builtin::u8 rawValue) { return $self(rawValue); }
		
	};
	
	#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MidpointRounding.ast"
	inline constexpr MidpointRounding MidpointRounding::ToEven = Builtin::u8(Builtin::i32(0));
	
	#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MidpointRounding.ast"
	inline constexpr MidpointRounding MidpointRounding::AwayFromZero = Builtin::u8(Builtin::i32(1));
	
	#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MidpointRounding.ast"
	inline constexpr MidpointRounding MidpointRounding::ToZero = Builtin::u8(Builtin::i32(2));
	
	#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MidpointRounding.ast"
	inline constexpr MidpointRounding MidpointRounding::ToNegativeInfinity = Builtin::u8(Builtin::i32(3));
	
	#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MidpointRounding.ast"
	inline constexpr MidpointRounding MidpointRounding::ToPositiveInfinity = Builtin::u8(Builtin::i32(4));
	inline constexpr MidpointRounding MidpointRounding::__values[] = {ToEven, AwayFromZero, ToZero, ToNegativeInfinity, ToPositiveInfinity};
	inline constexpr std::span<const MidpointRounding> MidpointRounding::GetValues() noexcept { return __values; }
	#define ADV_USING_ENUM_MidpointRounding \
	constexpr auto ToEven = MidpointRounding::ToEven;\
	constexpr auto AwayFromZero = MidpointRounding::AwayFromZero;\
	constexpr auto ToZero = MidpointRounding::ToZero;\
	constexpr auto ToNegativeInfinity = MidpointRounding::ToNegativeInfinity;\
	constexpr auto ToPositiveInfinity = MidpointRounding::ToPositiveInfinity;\
	
	
	
	#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MidpointRounding.ast"
	class $Class_MidpointRounding final : public Builtin::ValueType
	{
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MidpointRounding.ast"
		public: using $underlying = MidpointRounding; using $self = $underlying;
		$self __value;
		$Class_MidpointRounding(const $underlying& value) noexcept(std::is_nothrow_copy_constructible_v<$underlying>) : __value{value} {}
		operator $underlying() const noexcept { return __value; }
		
	};
	#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MidpointRounding.ast"
	ADV_CHECK_FOR_CONCRETE(MidpointRounding);
	
} namespace $extensions {
} namespace System {
//###############################################################################
//# Function definitions
//###############################################################################

#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MidpointRounding.ast"
	

}