#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"

namespace System {
namespace __Unsafe {} namespace __FloatingPointCategory_Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
class FloatingPointCategory;
class __Class_FloatingPointCategory;
//###############################################################################
//# Type definitions
//###############################################################################
class __Class_FloatingPointCategory;
	#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\FloatingPointCategory.ast"
	struct FloatingPointCategory final : public Builtin::Enum {
		public: using __self = FloatingPointCategory;
		public: using __class = __Class_FloatingPointCategory;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\FloatingPointCategory.ast"
		private: Builtin::u8 __value;
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\FloatingPointCategory.ast"
		public: constexpr auto getValue() const noexcept { return __value; } ADV_PROPERTY_GETTER(public, Value, getValue, Builtin::u8)
		public: constexpr FloatingPointCategory() noexcept = default;
		#line 4 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\FloatingPointCategory.ast"
		public: static ASTRUMSTD_HIDDEN const FloatingPointCategory NaN;
		#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\FloatingPointCategory.ast"
		public: static ASTRUMSTD_HIDDEN const FloatingPointCategory Infinity;
		#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\FloatingPointCategory.ast"
		public: static ASTRUMSTD_HIDDEN const FloatingPointCategory Zero;
		#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\FloatingPointCategory.ast"
		public: static ASTRUMSTD_HIDDEN const FloatingPointCategory Subnormal;
		#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\FloatingPointCategory.ast"
		public: static ASTRUMSTD_HIDDEN const FloatingPointCategory Normal;
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\FloatingPointCategory.ast"
		private: static constexpr Builtin::Str __names[] = {u"NaN", u"Infinity", u"Zero", u"Subnormal", u"Normal"};
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\FloatingPointCategory.ast"
		public: static constexpr int __variants = 5;
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\FloatingPointCategory.ast"
		public: static constexpr std::span<const Builtin::Str> GetNames() noexcept { return __names; }
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\FloatingPointCategory.ast"
		private: static const FloatingPointCategory __values[];
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\FloatingPointCategory.ast"
		public: static constexpr std::span<const FloatingPointCategory> GetValues() noexcept;
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\FloatingPointCategory.ast"
		public: constexpr operator bool() const noexcept { return static_cast<bool>(__value); } 
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\FloatingPointCategory.ast"
		public: constexpr bool operator ==(const __self& that) const noexcept { return __value == that.__value; } 
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\FloatingPointCategory.ast"
		public: constexpr operator Builtin::u8() const noexcept { return __value; }
		#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\FloatingPointCategory.ast"
		private: constexpr FloatingPointCategory(Builtin::u8 value) : __value(value) {}
		
	};
	
	#line 4 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\FloatingPointCategory.ast"
	inline constexpr FloatingPointCategory FloatingPointCategory::NaN = Builtin::u8();
	
	#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\FloatingPointCategory.ast"
	inline constexpr FloatingPointCategory FloatingPointCategory::Infinity = Builtin::u8(Builtin::i64(NaN.__value) + 1);
	
	#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\FloatingPointCategory.ast"
	inline constexpr FloatingPointCategory FloatingPointCategory::Zero = Builtin::u8(Builtin::i64(Infinity.__value) + 1);
	
	#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\FloatingPointCategory.ast"
	inline constexpr FloatingPointCategory FloatingPointCategory::Subnormal = Builtin::u8(Builtin::i64(Zero.__value) + 1);
	
	#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\FloatingPointCategory.ast"
	inline constexpr FloatingPointCategory FloatingPointCategory::Normal = Builtin::u8(Builtin::i64(Subnormal.__value) + 1);
	inline constexpr FloatingPointCategory FloatingPointCategory::__values[] = {NaN, Infinity, Zero, Subnormal, Normal};
	inline constexpr std::span<const FloatingPointCategory> FloatingPointCategory::GetValues() noexcept { return __values; }
	#define ADV_USING_ENUM_FloatingPointCategory \
	constexpr auto NaN = FloatingPointCategory::NaN;\
	constexpr auto Infinity = FloatingPointCategory::Infinity;\
	constexpr auto Zero = FloatingPointCategory::Zero;\
	constexpr auto Subnormal = FloatingPointCategory::Subnormal;\
	constexpr auto Normal = FloatingPointCategory::Normal;\
	
	
	
	#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\FloatingPointCategory.ast"
	class __Class_FloatingPointCategory final : public Builtin::ValueType
	{
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\FloatingPointCategory.ast"
		public: using __underlying = FloatingPointCategory; using __self = __underlying;
		__self __value;
		__Class_FloatingPointCategory(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
		operator __underlying() const noexcept { return __value; }
		
	};
	#line 3 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\FloatingPointCategory.ast"
	ADV_CHECK_FOR_CONCRETE(FloatingPointCategory);
	
//###############################################################################
//# Function definitions
//###############################################################################

#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\FloatingPointCategory.ast"
	

}