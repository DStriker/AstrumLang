#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"

namespace System::Globalization {
namespace __Unsafe {} namespace __StrongBidiCategory$Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
class StrongBidiCategory;
class $Class_StrongBidiCategory;
//###############################################################################
//# Type definitions
//###############################################################################
class $Class_StrongBidiCategory;
	#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\StrongBidiCategory.ast"
	struct StrongBidiCategory final : public Builtin::Enum {
		public: using $self = StrongBidiCategory;
		public: using $class = $Class_StrongBidiCategory;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\StrongBidiCategory.ast"
		private: Builtin::u8 __value;
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\StrongBidiCategory.ast"
		public: constexpr auto getValue() const noexcept { return __value; } ADV_PROPERTY_GETTER(public, Value, getValue, Builtin::u8)
		public: constexpr StrongBidiCategory() noexcept = default;
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\StrongBidiCategory.ast"
		private: static constexpr Builtin::StaticStr __names[] = {"Other", "StrongLeftToRight", "StrongRightToLeft"};
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\StrongBidiCategory.ast"
		public: static constexpr int __variants = 3;
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\StrongBidiCategory.ast"
		public: static constexpr std::span<const Builtin::StaticStr> GetNames() noexcept { return __names; }
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\StrongBidiCategory.ast"
		private: static const StrongBidiCategory __values[];
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\StrongBidiCategory.ast"
		public: static constexpr std::span<const StrongBidiCategory> GetValues() noexcept;
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\StrongBidiCategory.ast"
		public: constexpr operator bool() const noexcept { return static_cast<bool>(__value); } 
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\StrongBidiCategory.ast"
		public: constexpr bool operator ==(const $self& that) const noexcept { return __value == that.__value; } 
		public: constexpr auto operator <=>(const $self& that) const noexcept { return __value <=> that.__value; } 
		#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\StrongBidiCategory.ast"
		public: static ASTRUMSTD_HIDDEN const StrongBidiCategory Other;
		#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\StrongBidiCategory.ast"
		public: static ASTRUMSTD_HIDDEN const StrongBidiCategory StrongLeftToRight;
		#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\StrongBidiCategory.ast"
		public: static ASTRUMSTD_HIDDEN const StrongBidiCategory StrongRightToLeft;
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\StrongBidiCategory.ast"
		public: constexpr operator Builtin::u8() const noexcept { return __value; }
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\StrongBidiCategory.ast"
		private: constexpr StrongBidiCategory(Builtin::u8 value) : __value(value) {}
		public: static constexpr $self FromValue(Builtin::u8 rawValue) { return $self(rawValue); }
		
	};
	
	#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\StrongBidiCategory.ast"
	inline constexpr StrongBidiCategory StrongBidiCategory::Other = Builtin::u8(Builtin::i32(0));
	
	#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\StrongBidiCategory.ast"
	inline constexpr StrongBidiCategory StrongBidiCategory::StrongLeftToRight = Builtin::u8(Builtin::i32(0x20));
	
	#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\StrongBidiCategory.ast"
	inline constexpr StrongBidiCategory StrongBidiCategory::StrongRightToLeft = Builtin::u8(Builtin::i32(0x40));
	inline constexpr StrongBidiCategory StrongBidiCategory::__values[] = {Other, StrongLeftToRight, StrongRightToLeft};
	inline constexpr std::span<const StrongBidiCategory> StrongBidiCategory::GetValues() noexcept { return __values; }
	#define ADV_USING_ENUM_StrongBidiCategory \
	constexpr auto Other = StrongBidiCategory::Other;\
	constexpr auto StrongLeftToRight = StrongBidiCategory::StrongLeftToRight;\
	constexpr auto StrongRightToLeft = StrongBidiCategory::StrongRightToLeft;\
	
	
	
	#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\StrongBidiCategory.ast"
	class $Class_StrongBidiCategory final : public Builtin::ValueType
	{
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\StrongBidiCategory.ast"
		public: using $underlying = StrongBidiCategory; using $self = $underlying;
		$self __value;
		$Class_StrongBidiCategory(const $underlying& value) noexcept(std::is_nothrow_copy_constructible_v<$underlying>) : __value{value} {}
		operator $underlying() const noexcept { return __value; }
		
	};
	#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\StrongBidiCategory.ast"
	ADV_CHECK_FOR_CONCRETE(StrongBidiCategory);
	
} namespace $extensions {
} namespace System::Globalization {
//###############################################################################
//# Function definitions
//###############################################################################

#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\StrongBidiCategory.ast"
	

}