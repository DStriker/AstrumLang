#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "UnicodeCategory.h"
#include "StrongBidiCategory.h"
#include "System/Float64.h"
using namespace System;

namespace System::Globalization {
namespace __Unsafe {} namespace __CharUnicodeInfo_Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
class CharUnicodeInfo;
//###############################################################################
//# Type definitions
//###############################################################################
#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
	struct CharUnicodeInfo : public Builtin::StaticClass {
		public: using __self = CharUnicodeInfo;
		private: CharUnicodeInfo() = default;
		#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		public: inline static auto GetUnicodeCategory(Builtin::u32 codepoint)  -> const UnicodeCategory;
		#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		public: inline static auto GetNumericValue(Builtin::u32 codepoint)  -> const Builtin::f64;
		#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		public: inline static auto GetIsWhitespace(Builtin::u32 codepoint)  -> const bool;
		#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		public: inline static auto ToLowerNeutral(Builtin::u32 codepoint)  -> const Builtin::u32;
		#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		public: inline static auto ToUpperNeutral(Builtin::u32 codepoint)  -> const Builtin::u32;
		#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		public: inline static auto GetStrongBidiCategory(Builtin::u32 codepoint)  -> const StrongBidiCategory;
		#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		private: inline static auto GetCategoryCasingTableOffset(Builtin::u32 codepoint)  -> const Builtin::usize;
		#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		private: inline static auto GetNumericGraphemeTableOffset(Builtin::u32 codepoint)  -> const Builtin::usize;
		#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		private: ASTRUMSTD_API static const Builtin::InlineArray<2176, Builtin::u8> CategoryCasingLevel1Index;
		#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		private: ASTRUMSTD_API static const Builtin::InlineArray<6912, Builtin::u8> CategoryCasingLevel2Index;
		#line 666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		private: ASTRUMSTD_API static const Builtin::InlineArray<12528, Builtin::u8> CategoryCasingLevel3Index;
		#line 1453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		private: ASTRUMSTD_API static const Builtin::InlineArray<241, Builtin::u8> CategoriesValues;
		#line 1473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		private: ASTRUMSTD_API static const Builtin::InlineArray<482, Builtin::u8> UppercaseValues;
		#line 1508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		private: ASTRUMSTD_API static const Builtin::InlineArray<482, Builtin::u8> LowercaseValues;
		#line 1543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		private: ASTRUMSTD_API static const Builtin::InlineArray<2176, Builtin::u8> NumericGraphemeLevel1Index;
		#line 1683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		private: ASTRUMSTD_API static const Builtin::InlineArray<5248, Builtin::u8> NumericGraphemeLevel2Index;
		#line 2015 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		private: ASTRUMSTD_API static const Builtin::InlineArray<6400, Builtin::u8> NumericGraphemeLevel3Index;
		#line 2419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		private: ASTRUMSTD_API static const Builtin::InlineArray<177, Builtin::u8> DigitValues;
		#line 2435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		private: ASTRUMSTD_API static const Builtin::InlineArray<1416, Builtin::u8> NumericValues;
		#line 2528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		private: ASTRUMSTD_API static const Builtin::InlineArray<177, Builtin::u8> GraphemeSegmentationValues;
		
	};
	
	//###############################################################################
//# Function definitions
//###############################################################################

#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
	inline auto CharUnicodeInfo::GetUnicodeCategory(Builtin::u32 codepoint)  -> const UnicodeCategory
	{
		#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		const Builtin::Auto<decltype(GetCategoryCasingTableOffset(codepoint))> offset = GetCategoryCasingTableOffset(codepoint); 
		#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		return ADV_USFCS((UnicodeCategory), FromValue)(ADV_UFCS(_operator_subscript)(CategoriesValues.__ref(), Builtin::UncheckedTag{}, offset) & Builtin::u32(0x1FU));
	}
#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
	inline auto CharUnicodeInfo::GetNumericValue(Builtin::u32 codepoint)  -> const Builtin::f64
	{
		#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		const Builtin::Auto<decltype(GetNumericGraphemeTableOffset(codepoint))> offset = GetNumericGraphemeTableOffset(codepoint); 
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		Builtin::DeferredInit<Builtin::u64> num; 
		#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __CharUnicodeInfo_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard18{};
			#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
			num.construct((*(UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(NumericValues.__ref(), Builtin::UncheckedTag{}, offset * Builtin::i32(8)))))))));
		}
		#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		return ADV_USFCS((Builtin::f64), FromBits)(ADV_UPCS(LittleEndian)(num.value().__ref()));
	}
#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
	inline auto CharUnicodeInfo::GetIsWhitespace(Builtin::u32 codepoint)  -> const bool
	{
		#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		const Builtin::Auto<decltype(GetCategoryCasingTableOffset(codepoint))> offset = GetCategoryCasingTableOffset(codepoint); 
		#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		return ADV_UPCS(IsNegative)(ADV_UFCS(NarrowToInt8)(ADV_UFCS(_operator_subscript)(CategoriesValues.__ref(), Builtin::UncheckedTag{}, offset).__ref()).__ref());
	}
#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
	inline auto CharUnicodeInfo::ToLowerNeutral(Builtin::u32 codepoint)  -> const Builtin::u32
	{
		#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		const Builtin::Auto<decltype(GetCategoryCasingTableOffset(codepoint))> offset = GetCategoryCasingTableOffset(codepoint); 
		#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		Builtin::DeferredInit<Builtin::u32> delta; 
		#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __CharUnicodeInfo_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard34{};
			#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
			const Builtin::Auto<decltype(UnsafePointerCast<Builtin::u16>((__RawPtr(std::addressof(LowercaseValues)))))> rsStart = UnsafePointerCast<Builtin::u16>((__RawPtr(std::addressof(LowercaseValues)))); 
			#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(rsStart.__ref(), offset))> rsDelta = ADV_UFCS(_operator_subscript)(rsStart.__ref(), offset); 
			#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
			delta.construct(ADV_UPCS(LittleEndian)(rsDelta.__ref()));
		}
		#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		return (codepoint & Builtin::u32(0xFFFF0000U)) | ADV_UFCS(NarrowToUInt16)((codepoint + delta.value()).__ref());
	}
#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
	inline auto CharUnicodeInfo::ToUpperNeutral(Builtin::u32 codepoint)  -> const Builtin::u32
	{
		#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		const Builtin::Auto<decltype(GetCategoryCasingTableOffset(codepoint))> offset = GetCategoryCasingTableOffset(codepoint); 
		#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		Builtin::DeferredInit<Builtin::u32> delta; 
		#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __CharUnicodeInfo_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard46{};
			#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
			const Builtin::Auto<decltype(UnsafePointerCast<Builtin::u16>((__RawPtr(std::addressof(UppercaseValues)))))> rsStart = UnsafePointerCast<Builtin::u16>((__RawPtr(std::addressof(UppercaseValues)))); 
			#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(rsStart.__ref(), offset))> rsDelta = ADV_UFCS(_operator_subscript)(rsStart.__ref(), offset); 
			#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
			delta.construct(ADV_UPCS(LittleEndian)(rsDelta.__ref()));
		}
		#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		return (codepoint & Builtin::u32(0xFFFF0000U)) | ADV_UFCS(NarrowToUInt16)((codepoint + delta.value()).__ref());
	}
#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
	inline auto CharUnicodeInfo::GetStrongBidiCategory(Builtin::u32 codepoint)  -> const StrongBidiCategory
	{
		#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		const Builtin::Auto<decltype(GetCategoryCasingTableOffset(codepoint))> offset = GetCategoryCasingTableOffset(codepoint); 
		#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		const Builtin::Auto<decltype(ADV_USFCS((StrongBidiCategory), FromValue)(ADV_UFCS(_operator_subscript)(CategoriesValues.__ref(), Builtin::UncheckedTag{}, offset) & Builtin::u8(0b01100000U)))> category = ADV_USFCS((StrongBidiCategory), FromValue)(ADV_UFCS(_operator_subscript)(CategoriesValues.__ref(), Builtin::UncheckedTag{}, offset) & Builtin::u8(0b01100000U)); 
		#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		ADV_ASSERT((category == ADV_USPCS(Other, StrongBidiCategory)() || category == ADV_USPCS(StrongLeftToRight, StrongBidiCategory)() || category == ADV_USPCS(StrongRightToLeft, StrongBidiCategory)()), "category==StrongBidiCategory.Otherorcategory==StrongBidiCategory.StrongLeftToRightorcategory==StrongBidiCategory.StrongRightToLeft");
		#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		return category;
	}
#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
	inline auto CharUnicodeInfo::GetCategoryCasingTableOffset(Builtin::u32 codepoint)  -> const Builtin::usize
	{
		#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		Builtin::usize index = ADV_UFCS(_operator_subscript)(CategoryCasingLevel1Index.__ref(), Builtin::UncheckedTag{}, codepoint >> Builtin::i32(9)); 
		#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		index = (index << Builtin::i32(6)) + ((codepoint >> Builtin::i32(3)) & Builtin::u32(0b00111110U));
		#line 68 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		Builtin::Auto<decltype(Builtin::u16{ADV_UFCS(_operator_subscript)(CategoryCasingLevel2Index.__ref(), Builtin::UncheckedTag{}, index)} | (Builtin::u16{ADV_UFCS(_operator_subscript)(CategoryCasingLevel2Index.__ref(), Builtin::UncheckedTag{}, ++index)} << Builtin::i32(8)))> lvl2 = Builtin::u16{ADV_UFCS(_operator_subscript)(CategoryCasingLevel2Index.__ref(), Builtin::UncheckedTag{}, index)} | (Builtin::u16{ADV_UFCS(_operator_subscript)(CategoryCasingLevel2Index.__ref(), Builtin::UncheckedTag{}, ++index)} << Builtin::i32(8)); 
		#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		#if ADV_VERSION_BIG_ENDIAN
		#line 70 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		lvl2 = ADV_UPCS(ByteSwapped)(lvl2.__ref());
		#endif
		#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		index = lvl2;
		#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		return ADV_UFCS(_operator_subscript)(CategoryCasingLevel3Index.__ref(), Builtin::UncheckedTag{}, (index << Builtin::i32(4)) + (codepoint & Builtin::u32(0xFU)));
	}
#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
	inline auto CharUnicodeInfo::GetNumericGraphemeTableOffset(Builtin::u32 codepoint)  -> const Builtin::usize
	{
		#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		Builtin::usize index = ADV_UFCS(_operator_subscript)(NumericGraphemeLevel1Index.__ref(), Builtin::UncheckedTag{}, codepoint >> Builtin::i32(9)); 
		#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		index = (index << Builtin::i32(6)) + ((codepoint >> Builtin::i32(3)) & Builtin::u32(0b00111110U));
		#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		Builtin::Auto<decltype(Builtin::u16{ADV_UFCS(_operator_subscript)(NumericGraphemeLevel2Index.__ref(), Builtin::UncheckedTag{}, index)} | (Builtin::u16{ADV_UFCS(_operator_subscript)(NumericGraphemeLevel2Index.__ref(), Builtin::UncheckedTag{}, ++index)} << Builtin::i32(8)))> lvl2 = Builtin::u16{ADV_UFCS(_operator_subscript)(NumericGraphemeLevel2Index.__ref(), Builtin::UncheckedTag{}, index)} | (Builtin::u16{ADV_UFCS(_operator_subscript)(NumericGraphemeLevel2Index.__ref(), Builtin::UncheckedTag{}, ++index)} << Builtin::i32(8)); 
		#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		#if ADV_VERSION_BIG_ENDIAN
		#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		lvl2 = ADV_UPCS(ByteSwapped)(lvl2.__ref());
		#endif
		#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		index = lvl2;
		#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		return ADV_UFCS(_operator_subscript)(NumericGraphemeLevel3Index.__ref(), Builtin::UncheckedTag{}, (index << Builtin::i32(4)) + (codepoint & Builtin::u32(0xFU)));
	}
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
	

}