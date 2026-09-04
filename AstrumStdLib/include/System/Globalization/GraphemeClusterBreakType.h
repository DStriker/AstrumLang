#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"

namespace System::Globalization {
namespace __Unsafe {} namespace __GraphemeClusterBreakType$Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
class GraphemeClusterBreakType;
class $Class_GraphemeClusterBreakType;
//###############################################################################
//# Type definitions
//###############################################################################
class $Class_GraphemeClusterBreakType;
	#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\GraphemeClusterBreakType.ast"
	struct GraphemeClusterBreakType final : public Builtin::Enum {
		public: using $self = GraphemeClusterBreakType;
		public: using $class = $Class_GraphemeClusterBreakType;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\GraphemeClusterBreakType.ast"
		private: Builtin::u8 __value;
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\GraphemeClusterBreakType.ast"
		public: constexpr auto getValue() const noexcept { return __value; } ADV_PROPERTY_GETTER(public, Value, getValue, Builtin::u8)
		public: constexpr GraphemeClusterBreakType() noexcept = default;
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\GraphemeClusterBreakType.ast"
		private: static constexpr Builtin::StaticStr __names[] = {"Other", "CR", "LF", "Control", "Extend", "ZWJ", "RegionalIndicator", "Prepend", "SpacingMark", "L", "V", "T", "LV", "LVT", "ExtendedPictograph"};
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\GraphemeClusterBreakType.ast"
		public: static constexpr int __variants = 15;
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\GraphemeClusterBreakType.ast"
		public: static constexpr std::span<const Builtin::StaticStr> GetNames() noexcept { return __names; }
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\GraphemeClusterBreakType.ast"
		private: static const GraphemeClusterBreakType __values[];
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\GraphemeClusterBreakType.ast"
		public: static constexpr std::span<const GraphemeClusterBreakType> GetValues() noexcept;
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\GraphemeClusterBreakType.ast"
		public: constexpr operator bool() const noexcept { return static_cast<bool>(__value); } 
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\GraphemeClusterBreakType.ast"
		public: constexpr bool operator ==(const $self& that) const noexcept { return __value == that.__value; } 
		public: constexpr auto operator <=>(const $self& that) const noexcept { return __value <=> that.__value; } 
		#line 4 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\GraphemeClusterBreakType.ast"
		public: static ASTRUMSTD_HIDDEN const GraphemeClusterBreakType Other;
		#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\GraphemeClusterBreakType.ast"
		public: static ASTRUMSTD_HIDDEN const GraphemeClusterBreakType CR;
		#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\GraphemeClusterBreakType.ast"
		public: static ASTRUMSTD_HIDDEN const GraphemeClusterBreakType LF;
		#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\GraphemeClusterBreakType.ast"
		public: static ASTRUMSTD_HIDDEN const GraphemeClusterBreakType Control;
		#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\GraphemeClusterBreakType.ast"
		public: static ASTRUMSTD_HIDDEN const GraphemeClusterBreakType Extend;
		#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\GraphemeClusterBreakType.ast"
		public: static ASTRUMSTD_HIDDEN const GraphemeClusterBreakType ZWJ;
		#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\GraphemeClusterBreakType.ast"
		public: static ASTRUMSTD_HIDDEN const GraphemeClusterBreakType RegionalIndicator;
		#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\GraphemeClusterBreakType.ast"
		public: static ASTRUMSTD_HIDDEN const GraphemeClusterBreakType Prepend;
		#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\GraphemeClusterBreakType.ast"
		public: static ASTRUMSTD_HIDDEN const GraphemeClusterBreakType SpacingMark;
		#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\GraphemeClusterBreakType.ast"
		public: static ASTRUMSTD_HIDDEN const GraphemeClusterBreakType L;
		#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\GraphemeClusterBreakType.ast"
		public: static ASTRUMSTD_HIDDEN const GraphemeClusterBreakType V;
		#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\GraphemeClusterBreakType.ast"
		public: static ASTRUMSTD_HIDDEN const GraphemeClusterBreakType T;
		#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\GraphemeClusterBreakType.ast"
		public: static ASTRUMSTD_HIDDEN const GraphemeClusterBreakType LV;
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\GraphemeClusterBreakType.ast"
		public: static ASTRUMSTD_HIDDEN const GraphemeClusterBreakType LVT;
		#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\GraphemeClusterBreakType.ast"
		public: static ASTRUMSTD_HIDDEN const GraphemeClusterBreakType ExtendedPictograph;
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\GraphemeClusterBreakType.ast"
		public: constexpr operator Builtin::u8() const noexcept { return __value; }
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\GraphemeClusterBreakType.ast"
		private: constexpr GraphemeClusterBreakType(Builtin::u8 value) : __value(value) {}
		public: static constexpr $self FromValue(Builtin::u8 rawValue) { return $self(rawValue); }
		
	};
	
	#line 4 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\GraphemeClusterBreakType.ast"
	inline constexpr GraphemeClusterBreakType GraphemeClusterBreakType::Other = Builtin::u8();
	
	#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\GraphemeClusterBreakType.ast"
	inline constexpr GraphemeClusterBreakType GraphemeClusterBreakType::CR = Builtin::u8(Builtin::i64(Other.__value) + 1);
	
	#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\GraphemeClusterBreakType.ast"
	inline constexpr GraphemeClusterBreakType GraphemeClusterBreakType::LF = Builtin::u8(Builtin::i64(CR.__value) + 1);
	
	#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\GraphemeClusterBreakType.ast"
	inline constexpr GraphemeClusterBreakType GraphemeClusterBreakType::Control = Builtin::u8(Builtin::i64(LF.__value) + 1);
	
	#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\GraphemeClusterBreakType.ast"
	inline constexpr GraphemeClusterBreakType GraphemeClusterBreakType::Extend = Builtin::u8(Builtin::i64(Control.__value) + 1);
	
	#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\GraphemeClusterBreakType.ast"
	inline constexpr GraphemeClusterBreakType GraphemeClusterBreakType::ZWJ = Builtin::u8(Builtin::i64(Extend.__value) + 1);
	
	#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\GraphemeClusterBreakType.ast"
	inline constexpr GraphemeClusterBreakType GraphemeClusterBreakType::RegionalIndicator = Builtin::u8(Builtin::i64(ZWJ.__value) + 1);
	
	#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\GraphemeClusterBreakType.ast"
	inline constexpr GraphemeClusterBreakType GraphemeClusterBreakType::Prepend = Builtin::u8(Builtin::i64(RegionalIndicator.__value) + 1);
	
	#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\GraphemeClusterBreakType.ast"
	inline constexpr GraphemeClusterBreakType GraphemeClusterBreakType::SpacingMark = Builtin::u8(Builtin::i64(Prepend.__value) + 1);
	
	#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\GraphemeClusterBreakType.ast"
	inline constexpr GraphemeClusterBreakType GraphemeClusterBreakType::L = Builtin::u8(Builtin::i64(SpacingMark.__value) + 1);
	
	#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\GraphemeClusterBreakType.ast"
	inline constexpr GraphemeClusterBreakType GraphemeClusterBreakType::V = Builtin::u8(Builtin::i64(L.__value) + 1);
	
	#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\GraphemeClusterBreakType.ast"
	inline constexpr GraphemeClusterBreakType GraphemeClusterBreakType::T = Builtin::u8(Builtin::i64(V.__value) + 1);
	
	#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\GraphemeClusterBreakType.ast"
	inline constexpr GraphemeClusterBreakType GraphemeClusterBreakType::LV = Builtin::u8(Builtin::i64(T.__value) + 1);
	
	#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\GraphemeClusterBreakType.ast"
	inline constexpr GraphemeClusterBreakType GraphemeClusterBreakType::LVT = Builtin::u8(Builtin::i64(LV.__value) + 1);
	
	#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\GraphemeClusterBreakType.ast"
	inline constexpr GraphemeClusterBreakType GraphemeClusterBreakType::ExtendedPictograph = Builtin::u8(Builtin::i64(LVT.__value) + 1);
	inline constexpr GraphemeClusterBreakType GraphemeClusterBreakType::__values[] = {Other, CR, LF, Control, Extend, ZWJ, RegionalIndicator, Prepend, SpacingMark, L, V, T, LV, LVT, ExtendedPictograph};
	inline constexpr std::span<const GraphemeClusterBreakType> GraphemeClusterBreakType::GetValues() noexcept { return __values; }
	#define ADV_USING_ENUM_GraphemeClusterBreakType \
	constexpr auto Other = GraphemeClusterBreakType::Other;\
	constexpr auto CR = GraphemeClusterBreakType::CR;\
	constexpr auto LF = GraphemeClusterBreakType::LF;\
	constexpr auto Control = GraphemeClusterBreakType::Control;\
	constexpr auto Extend = GraphemeClusterBreakType::Extend;\
	constexpr auto ZWJ = GraphemeClusterBreakType::ZWJ;\
	constexpr auto RegionalIndicator = GraphemeClusterBreakType::RegionalIndicator;\
	constexpr auto Prepend = GraphemeClusterBreakType::Prepend;\
	constexpr auto SpacingMark = GraphemeClusterBreakType::SpacingMark;\
	constexpr auto L = GraphemeClusterBreakType::L;\
	constexpr auto V = GraphemeClusterBreakType::V;\
	constexpr auto T = GraphemeClusterBreakType::T;\
	constexpr auto LV = GraphemeClusterBreakType::LV;\
	constexpr auto LVT = GraphemeClusterBreakType::LVT;\
	constexpr auto ExtendedPictograph = GraphemeClusterBreakType::ExtendedPictograph;\
	
	
	
	#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\GraphemeClusterBreakType.ast"
	class $Class_GraphemeClusterBreakType final : public Builtin::ValueType
	{
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\GraphemeClusterBreakType.ast"
		public: using $underlying = GraphemeClusterBreakType; using $self = $underlying;
		$self __value;
		$Class_GraphemeClusterBreakType(const $underlying& value) noexcept(std::is_nothrow_copy_constructible_v<$underlying>) : __value{value} {}
		operator $underlying() const noexcept { return __value; }
		
	};
	#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\GraphemeClusterBreakType.ast"
	ADV_CHECK_FOR_CONCRETE(GraphemeClusterBreakType);
	
} namespace $extensions {
} namespace System::Globalization {
//###############################################################################
//# Function definitions
//###############################################################################

#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\GraphemeClusterBreakType.ast"
	

}