#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "UnicodeCategory.h"
#include "StrongBidiCategory.h"
#include "System/Float64.h"
using namespace System;
#include "System/InlineArray.h"
using namespace System;

namespace System::Globalization {
namespace __Unsafe {} namespace __CharUnicodeInfo$Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
class CharUnicodeInfo;
//###############################################################################
//# Type definitions
//###############################################################################
#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
	struct CharUnicodeInfo : public Builtin::StaticClass {
		public: using $self = CharUnicodeInfo;
		private: CharUnicodeInfo() = default;
		#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		public: inline static auto GetUnicodeCategory(Builtin::u32 codepoint)  -> const UnicodeCategory;
		#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		public: inline static auto GetNumericValue(Builtin::u32 codepoint)  -> const Builtin::f64;
		#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		public: inline static auto GetIsWhitespace(Builtin::u32 codepoint)  -> const bool;
		#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		public: inline static auto ToLowerNeutral(Builtin::u32 codepoint)  -> const Builtin::u32;
		#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		public: inline static auto ToUpperNeutral(Builtin::u32 codepoint)  -> const Builtin::u32;
		#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		public: inline static auto GetStrongBidiCategory(Builtin::u32 codepoint)  -> const StrongBidiCategory;
		#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		private: inline static auto GetCategoryCasingTableOffset(Builtin::u32 codepoint)  -> const Builtin::usize;
		#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		private: inline static auto GetNumericGraphemeTableOffset(Builtin::u32 codepoint)  -> const Builtin::usize;
		#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		private: ASTRUMSTD_API static const Builtin::InlineArray<2176, Builtin::u8> CategoryCasingLevel1Index;
		#line 231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		private: ASTRUMSTD_API static const Builtin::InlineArray<6912, Builtin::u8> CategoryCasingLevel2Index;
		#line 667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		private: ASTRUMSTD_API static const Builtin::InlineArray<12528, Builtin::u8> CategoryCasingLevel3Index;
		#line 1454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		private: ASTRUMSTD_API static const Builtin::InlineArray<241, Builtin::u8> CategoriesValues;
		#line 1474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		private: ASTRUMSTD_API static const Builtin::InlineArray<482, Builtin::u8> UppercaseValues;
		#line 1509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		private: ASTRUMSTD_API static const Builtin::InlineArray<482, Builtin::u8> LowercaseValues;
		#line 1544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		private: ASTRUMSTD_API static const Builtin::InlineArray<2176, Builtin::u8> NumericGraphemeLevel1Index;
		#line 1684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		private: ASTRUMSTD_API static const Builtin::InlineArray<5248, Builtin::u8> NumericGraphemeLevel2Index;
		#line 2016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		private: ASTRUMSTD_API static const Builtin::InlineArray<6400, Builtin::u8> NumericGraphemeLevel3Index;
		#line 2420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		private: ASTRUMSTD_API static const Builtin::InlineArray<177, Builtin::u8> DigitValues;
		#line 2436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		private: ASTRUMSTD_API static const Builtin::InlineArray<1416, Builtin::u8> NumericValues;
		#line 2529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		private: ASTRUMSTD_API static const Builtin::InlineArray<177, Builtin::u8> GraphemeSegmentationValues;
		
	};
	
	} namespace $extensions {
template<class __TT> struct $static_IsNegative;
template<class __TT> struct $static_getIsNegative;
template<class __TT> struct $static_FromValue;
template<class __TT> struct $static_getFromValue;
template<class __TT> struct $static_FromBits;
template<class __TT> struct $static_getFromBits;
template<class __TT> struct $static_LittleEndian;
template<class __TT> struct $static_getLittleEndian;
template<class __TT> struct $static_StrongLeftToRight;
template<class __TT> struct $static_getStrongLeftToRight;
template<class __TT> struct $static_NarrowToInt8;
template<class __TT> struct $static_getNarrowToInt8;
template<class __TT> struct $static_NarrowToUInt16;
template<class __TT> struct $static_getNarrowToUInt16;
template<class __TT> struct $static_Other;
template<class __TT> struct $static_getOther;
template<class __TT> struct $static_StrongRightToLeft;
template<class __TT> struct $static_getStrongRightToLeft;
template<class __TT> struct $static_ByteSwapped;
template<class __TT> struct $static_getByteSwapped;
} namespace System::Globalization {
//###############################################################################
//# Function definitions
//###############################################################################

#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
	inline auto CharUnicodeInfo::GetUnicodeCategory(Builtin::u32 codepoint)  -> const UnicodeCategory
	{
		#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		const Builtin::Auto<decltype(GetCategoryCasingTableOffset(codepoint))> offset = GetCategoryCasingTableOffset(codepoint); 
		#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		return ADV_USFCS((UnicodeCategory), FromValue)(ADV_UFCS(_operator_subscript)(CategoriesValues.$ref(), Builtin::UncheckedTag{}, offset) & Builtin::u32(0x1FU));
	}
#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
	inline auto CharUnicodeInfo::GetNumericValue(Builtin::u32 codepoint)  -> const Builtin::f64
	{
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		const Builtin::Auto<decltype(GetNumericGraphemeTableOffset(codepoint))> offset = GetNumericGraphemeTableOffset(codepoint); 
		#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		Builtin::DeferredInit<Builtin::u64> num; 
		#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Globalization::__Unsafe;	using namespace __CharUnicodeInfo$Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard19{};
			#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
			num.construct((*(UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(NumericValues.$ref(), Builtin::UncheckedTag{}, offset * Builtin::i32(8)))))))));
		}
		#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		return ADV_USFCS((Builtin::f64), FromBits)(ADV_UPCS(LittleEndian)(num.value().$ref()));
	}
#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
	inline auto CharUnicodeInfo::GetIsWhitespace(Builtin::u32 codepoint)  -> const bool
	{
		#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		const Builtin::Auto<decltype(GetCategoryCasingTableOffset(codepoint))> offset = GetCategoryCasingTableOffset(codepoint); 
		#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		return ADV_UPCS(IsNegative)(ADV_UFCS(NarrowToInt8)(ADV_UFCS(_operator_subscript)(CategoriesValues.$ref(), Builtin::UncheckedTag{}, offset).$ref()).$ref());
	}
#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
	inline auto CharUnicodeInfo::ToLowerNeutral(Builtin::u32 codepoint)  -> const Builtin::u32
	{
		#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		const Builtin::Auto<decltype(GetCategoryCasingTableOffset(codepoint))> offset = GetCategoryCasingTableOffset(codepoint); 
		#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		Builtin::DeferredInit<Builtin::u32> delta; 
		#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Globalization::__Unsafe;	using namespace __CharUnicodeInfo$Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard35{};
			#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
			const Builtin::Auto<decltype(UnsafePointerCast<Builtin::u16>((__RawPtr(std::addressof(LowercaseValues)))))> rsStart = UnsafePointerCast<Builtin::u16>((__RawPtr(std::addressof(LowercaseValues)))); 
			#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(rsStart.$ref(), offset))> rsDelta = ADV_UFCS(_operator_subscript)(rsStart.$ref(), offset); 
			#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
			delta.construct(ADV_UPCS(LittleEndian)(rsDelta.$ref()));
		}
		#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		return (codepoint & Builtin::u32(0xFFFF0000U)) | ADV_UFCS(NarrowToUInt16)((codepoint + delta.value()).$ref());
	}
#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
	inline auto CharUnicodeInfo::ToUpperNeutral(Builtin::u32 codepoint)  -> const Builtin::u32
	{
		#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		const Builtin::Auto<decltype(GetCategoryCasingTableOffset(codepoint))> offset = GetCategoryCasingTableOffset(codepoint); 
		#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		Builtin::DeferredInit<Builtin::u32> delta; 
		#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Globalization::__Unsafe;	using namespace __CharUnicodeInfo$Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard47{};
			#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
			const Builtin::Auto<decltype(UnsafePointerCast<Builtin::u16>((__RawPtr(std::addressof(UppercaseValues)))))> rsStart = UnsafePointerCast<Builtin::u16>((__RawPtr(std::addressof(UppercaseValues)))); 
			#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(rsStart.$ref(), offset))> rsDelta = ADV_UFCS(_operator_subscript)(rsStart.$ref(), offset); 
			#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
			delta.construct(ADV_UPCS(LittleEndian)(rsDelta.$ref()));
		}
		#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		return (codepoint & Builtin::u32(0xFFFF0000U)) | ADV_UFCS(NarrowToUInt16)((codepoint + delta.value()).$ref());
	}
#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
	inline auto CharUnicodeInfo::GetStrongBidiCategory(Builtin::u32 codepoint)  -> const StrongBidiCategory
	{
		#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		const Builtin::Auto<decltype(GetCategoryCasingTableOffset(codepoint))> offset = GetCategoryCasingTableOffset(codepoint); 
		#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		const Builtin::Auto<decltype(ADV_USFCS((StrongBidiCategory), FromValue)(ADV_UFCS(_operator_subscript)(CategoriesValues.$ref(), Builtin::UncheckedTag{}, offset) & Builtin::u8(0b01100000U)))> category = ADV_USFCS((StrongBidiCategory), FromValue)(ADV_UFCS(_operator_subscript)(CategoriesValues.$ref(), Builtin::UncheckedTag{}, offset) & Builtin::u8(0b01100000U)); 
		#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		ADV_ASSERT((category == ADV_USPCS(Other, StrongBidiCategory)() || category == ADV_USPCS(StrongLeftToRight, StrongBidiCategory)() || category == ADV_USPCS(StrongRightToLeft, StrongBidiCategory)()), "category==StrongBidiCategory.Otherorcategory==StrongBidiCategory.StrongLeftToRightorcategory==StrongBidiCategory.StrongRightToLeft");
		#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		return category;
	}
#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
	inline auto CharUnicodeInfo::GetCategoryCasingTableOffset(Builtin::u32 codepoint)  -> const Builtin::usize
	{
		#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		Builtin::usize index = ADV_UFCS(_operator_subscript)(CategoryCasingLevel1Index.$ref(), Builtin::UncheckedTag{}, codepoint >> Builtin::i32(9)); 
		#line 68 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		index = (index << Builtin::i32(6)) + ((codepoint >> Builtin::i32(3)) & Builtin::u32(0b00111110U));
		#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		Builtin::Auto<decltype(Builtin::u16{ADV_UFCS(_operator_subscript)(CategoryCasingLevel2Index.$ref(), Builtin::UncheckedTag{}, index)} | (Builtin::u16{ADV_UFCS(_operator_subscript)(CategoryCasingLevel2Index.$ref(), Builtin::UncheckedTag{}, ++index)} << Builtin::i32(8)))> lvl2 = Builtin::u16{ADV_UFCS(_operator_subscript)(CategoryCasingLevel2Index.$ref(), Builtin::UncheckedTag{}, index)} | (Builtin::u16{ADV_UFCS(_operator_subscript)(CategoryCasingLevel2Index.$ref(), Builtin::UncheckedTag{}, ++index)} << Builtin::i32(8)); 
		#line 70 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		#if ADV_VERSION_BIG_ENDIAN
		#line 71 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		lvl2 = ADV_UPCS(ByteSwapped)(lvl2.$ref());
		#endif
		#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		index = lvl2;
		#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		return ADV_UFCS(_operator_subscript)(CategoryCasingLevel3Index.$ref(), Builtin::UncheckedTag{}, (index << Builtin::i32(4)) + (codepoint & Builtin::u32(0xFU)));
	}
#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
	inline auto CharUnicodeInfo::GetNumericGraphemeTableOffset(Builtin::u32 codepoint)  -> const Builtin::usize
	{
		#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		Builtin::usize index = ADV_UFCS(_operator_subscript)(NumericGraphemeLevel1Index.$ref(), Builtin::UncheckedTag{}, codepoint >> Builtin::i32(9)); 
		#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		index = (index << Builtin::i32(6)) + ((codepoint >> Builtin::i32(3)) & Builtin::u32(0b00111110U));
		#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		Builtin::Auto<decltype(Builtin::u16{ADV_UFCS(_operator_subscript)(NumericGraphemeLevel2Index.$ref(), Builtin::UncheckedTag{}, index)} | (Builtin::u16{ADV_UFCS(_operator_subscript)(NumericGraphemeLevel2Index.$ref(), Builtin::UncheckedTag{}, ++index)} << Builtin::i32(8)))> lvl2 = Builtin::u16{ADV_UFCS(_operator_subscript)(NumericGraphemeLevel2Index.$ref(), Builtin::UncheckedTag{}, index)} | (Builtin::u16{ADV_UFCS(_operator_subscript)(NumericGraphemeLevel2Index.$ref(), Builtin::UncheckedTag{}, ++index)} << Builtin::i32(8)); 
		#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		#if ADV_VERSION_BIG_ENDIAN
		#line 84 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		lvl2 = ADV_UPCS(ByteSwapped)(lvl2.$ref());
		#endif
		#line 86 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		index = lvl2;
		#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		return ADV_UFCS(_operator_subscript)(NumericGraphemeLevel3Index.$ref(), Builtin::UncheckedTag{}, (index << Builtin::i32(4)) + (codepoint & Builtin::u32(0xFU)));
	}
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
	

}