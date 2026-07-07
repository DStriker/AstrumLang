#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"

namespace System::Globalization {
namespace __Unsafe {} namespace __StrongBidiCategory_Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
class StrongBidiCategory;
class __Class_StrongBidiCategory;
//###############################################################################
//# Type definitions
//###############################################################################
class __Class_StrongBidiCategory;
	#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\StrongBidiCategory.ast"
	struct StrongBidiCategory final : public Builtin::Enum {
		public: using __self = StrongBidiCategory;
		public: using __class = __Class_StrongBidiCategory;
		public: FORCE_INLINE constexpr decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) __ref() const noexcept { return *this; }
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\StrongBidiCategory.ast"
		private: Builtin::u8 __value;
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\StrongBidiCategory.ast"
		public: constexpr auto getValue() const noexcept { return __value; } ADV_PROPERTY_GETTER(public, Value, getValue, Builtin::u8)
		public: constexpr StrongBidiCategory() noexcept = default;
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\StrongBidiCategory.ast"
		private: static constexpr Builtin::Str __names[] = {"Other", "StrongLeftToRight", "StrongRightToLeft"};
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\StrongBidiCategory.ast"
		public: static constexpr int __variants = 3;
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\StrongBidiCategory.ast"
		public: static constexpr std::span<const Builtin::Str> GetNames() noexcept { return __names; }
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\StrongBidiCategory.ast"
		private: static const StrongBidiCategory __values[];
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\StrongBidiCategory.ast"
		public: static constexpr std::span<const StrongBidiCategory> GetValues() noexcept;
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\StrongBidiCategory.ast"
		public: constexpr operator bool() const noexcept { return static_cast<bool>(__value); } 
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\StrongBidiCategory.ast"
		public: constexpr bool operator ==(const __self& that) const noexcept { return __value == that.__value; } 
		public: constexpr auto operator <=>(const __self& that) const noexcept { return __value <=> that.__value; } 
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
		public: static constexpr __self FromValue(Builtin::u8 rawValue) { return __self(rawValue); }
		
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
	class __Class_StrongBidiCategory final : public Builtin::ValueType
	{
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\StrongBidiCategory.ast"
		public: using __underlying = StrongBidiCategory; using __self = __underlying;
		__self __value;
		__Class_StrongBidiCategory(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
		operator __underlying() const noexcept { return __value; }
		
	};
	#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\StrongBidiCategory.ast"
	ADV_CHECK_FOR_CONCRETE(StrongBidiCategory);
	
//###############################################################################
//# Function definitions
//###############################################################################

#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\StrongBidiCategory.ast"
	

}