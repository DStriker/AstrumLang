#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "GraphemeClusterBreakType.h"
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
#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
	struct CharUnicodeInfo : public Builtin::StaticClass {
		public: using $self = CharUnicodeInfo;
		private: CharUnicodeInfo() = default;
		#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		public: inline static auto GetUnicodeCategory(Builtin::u32 codepoint)  -> const UnicodeCategory;
		#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		public: inline static auto GetNumericValue(Builtin::u32 codepoint)  -> const Builtin::f64;
		#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		public: inline static auto GetIsWhitespace(Builtin::u32 codepoint)  -> const bool;
		#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		public: inline static auto ToLowerNeutral(Builtin::u32 codepoint)  -> const Builtin::u32;
		#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		public: inline static auto ToUpperNeutral(Builtin::u32 codepoint)  -> const Builtin::u32;
		#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		public: inline static auto GetStrongBidiCategory(Builtin::u32 codepoint)  -> const StrongBidiCategory;
		#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		public: inline static auto GetGraphemeClusterBreakType(Builtin::u32 codepoint)  -> const GraphemeClusterBreakType;
		#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		private: inline static auto GetCategoryCasingTableOffset(Builtin::u32 codepoint)  -> const Builtin::usize;
		#line 86 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		private: inline static auto GetNumericGraphemeTableOffset(Builtin::u32 codepoint)  -> const Builtin::usize;
		#line 99 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		private: ASTRUMSTD_API static const Builtin::InlineArray<2176, Builtin::u8> CategoryCasingLevel1Index;
		#line 239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		private: ASTRUMSTD_API static const Builtin::InlineArray<6912, Builtin::u8> CategoryCasingLevel2Index;
		#line 675 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		private: ASTRUMSTD_API static const Builtin::InlineArray<12528, Builtin::u8> CategoryCasingLevel3Index;
		#line 1462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		private: ASTRUMSTD_API static const Builtin::InlineArray<241, Builtin::u8> CategoriesValues;
		#line 1482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		private: ASTRUMSTD_API static const Builtin::InlineArray<482, Builtin::u8> UppercaseValues;
		#line 1517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		private: ASTRUMSTD_API static const Builtin::InlineArray<482, Builtin::u8> LowercaseValues;
		#line 1552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		private: ASTRUMSTD_API static const Builtin::InlineArray<2176, Builtin::u8> NumericGraphemeLevel1Index;
		#line 1692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		private: ASTRUMSTD_API static const Builtin::InlineArray<5248, Builtin::u8> NumericGraphemeLevel2Index;
		#line 2024 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		private: ASTRUMSTD_API static const Builtin::InlineArray<6400, Builtin::u8> NumericGraphemeLevel3Index;
		#line 2428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		private: ASTRUMSTD_API static const Builtin::InlineArray<177, Builtin::u8> DigitValues;
		#line 2444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		private: ASTRUMSTD_API static const Builtin::InlineArray<1416, Builtin::u8> NumericValues;
		#line 2537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
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

#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
	inline auto CharUnicodeInfo::GetUnicodeCategory(Builtin::u32 codepoint)  -> const UnicodeCategory
	{
		#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		const Builtin::Auto<decltype(GetCategoryCasingTableOffset(codepoint))> offset = GetCategoryCasingTableOffset(codepoint); 
		#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		return ADV_USFCS((UnicodeCategory), FromValue)(ADV_UFCS(_operator_subscript)(CategoriesValues.$ref(), Builtin::UncheckedTag{}, offset) & Builtin::u32(0x1FU));
	}
#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
	inline auto CharUnicodeInfo::GetNumericValue(Builtin::u32 codepoint)  -> const Builtin::f64
	{
		#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		const Builtin::Auto<decltype(GetNumericGraphemeTableOffset(codepoint))> offset = GetNumericGraphemeTableOffset(codepoint); 
		#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		Builtin::DeferredInit<Builtin::u64> num; 
		#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Globalization::__Unsafe;	using namespace __CharUnicodeInfo$Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard20{};
			#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
			num.construct((*(UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(NumericValues.$ref(), Builtin::UncheckedTag{}, offset * Builtin::i32(8)))))))));
		}
		#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		return ADV_USFCS((Builtin::f64), FromBits)(ADV_UPCS(LittleEndian)(num.value().$ref()));
	}
#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
	inline auto CharUnicodeInfo::GetIsWhitespace(Builtin::u32 codepoint)  -> const bool
	{
		#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		const Builtin::Auto<decltype(GetCategoryCasingTableOffset(codepoint))> offset = GetCategoryCasingTableOffset(codepoint); 
		#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		return ADV_UPCS(IsNegative)(ADV_UFCS(NarrowToInt8)(ADV_UFCS(_operator_subscript)(CategoriesValues.$ref(), Builtin::UncheckedTag{}, offset).$ref()).$ref());
	}
#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
	inline auto CharUnicodeInfo::ToLowerNeutral(Builtin::u32 codepoint)  -> const Builtin::u32
	{
		#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		const Builtin::Auto<decltype(GetCategoryCasingTableOffset(codepoint))> offset = GetCategoryCasingTableOffset(codepoint); 
		#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		Builtin::DeferredInit<Builtin::u32> delta; 
		#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Globalization::__Unsafe;	using namespace __CharUnicodeInfo$Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard36{};
			#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
			const Builtin::Auto<decltype(UnsafePointerCast<Builtin::u16>((__RawPtr(std::addressof(LowercaseValues)))))> rsStart = UnsafePointerCast<Builtin::u16>((__RawPtr(std::addressof(LowercaseValues)))); 
			#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(rsStart.$ref(), offset))> rsDelta = ADV_UFCS(_operator_subscript)(rsStart.$ref(), offset); 
			#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
			delta.construct(ADV_UPCS(LittleEndian)(rsDelta.$ref()));
		}
		#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		return (codepoint & Builtin::u32(0xFFFF0000U)) | ADV_UFCS(NarrowToUInt16)((codepoint + delta.value()).$ref());
	}
#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
	inline auto CharUnicodeInfo::ToUpperNeutral(Builtin::u32 codepoint)  -> const Builtin::u32
	{
		#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		const Builtin::Auto<decltype(GetCategoryCasingTableOffset(codepoint))> offset = GetCategoryCasingTableOffset(codepoint); 
		#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		Builtin::DeferredInit<Builtin::u32> delta; 
		#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Globalization::__Unsafe;	using namespace __CharUnicodeInfo$Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard48{};
			#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
			const Builtin::Auto<decltype(UnsafePointerCast<Builtin::u16>((__RawPtr(std::addressof(UppercaseValues)))))> rsStart = UnsafePointerCast<Builtin::u16>((__RawPtr(std::addressof(UppercaseValues)))); 
			#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(rsStart.$ref(), offset))> rsDelta = ADV_UFCS(_operator_subscript)(rsStart.$ref(), offset); 
			#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
			delta.construct(ADV_UPCS(LittleEndian)(rsDelta.$ref()));
		}
		#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		return (codepoint & Builtin::u32(0xFFFF0000U)) | ADV_UFCS(NarrowToUInt16)((codepoint + delta.value()).$ref());
	}
#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
	inline auto CharUnicodeInfo::GetStrongBidiCategory(Builtin::u32 codepoint)  -> const StrongBidiCategory
	{
		#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		const Builtin::Auto<decltype(GetCategoryCasingTableOffset(codepoint))> offset = GetCategoryCasingTableOffset(codepoint); 
		#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		const Builtin::Auto<decltype(ADV_USFCS((StrongBidiCategory), FromValue)(ADV_UFCS(_operator_subscript)(CategoriesValues.$ref(), Builtin::UncheckedTag{}, offset) & Builtin::u8(0b01100000U)))> category = ADV_USFCS((StrongBidiCategory), FromValue)(ADV_UFCS(_operator_subscript)(CategoriesValues.$ref(), Builtin::UncheckedTag{}, offset) & Builtin::u8(0b01100000U)); 
		#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		ADV_ASSERT((category == ADV_USPCS(Other, StrongBidiCategory)() || category == ADV_USPCS(StrongLeftToRight, StrongBidiCategory)() || category == ADV_USPCS(StrongRightToLeft, StrongBidiCategory)()), "category==StrongBidiCategory.Otherorcategory==StrongBidiCategory.StrongLeftToRightorcategory==StrongBidiCategory.StrongRightToLeft");
		#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		return category;
	}
#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
	inline auto CharUnicodeInfo::GetGraphemeClusterBreakType(Builtin::u32 codepoint)  -> const GraphemeClusterBreakType
	{
		#line 68 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		const Builtin::Auto<decltype(GetNumericGraphemeTableOffset(codepoint))> offset = GetNumericGraphemeTableOffset(codepoint); 
		#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(GraphemeSegmentationValues.$ref(), Builtin::UncheckedTag{}, offset))> breakType = ADV_UFCS(_operator_subscript)(GraphemeSegmentationValues.$ref(), Builtin::UncheckedTag{}, offset); 
		#line 70 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		return ADV_USFCS((GraphemeClusterBreakType), FromValue)(breakType);
	}
#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
	inline auto CharUnicodeInfo::GetCategoryCasingTableOffset(Builtin::u32 codepoint)  -> const Builtin::usize
	{
		#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		Builtin::usize index = ADV_UFCS(_operator_subscript)(CategoryCasingLevel1Index.$ref(), Builtin::UncheckedTag{}, codepoint >> Builtin::i32(9)); 
		#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		index = (index << Builtin::i32(6)) + ((codepoint >> Builtin::i32(3)) & Builtin::u32(0b00111110U));
		#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		Builtin::Auto<decltype(Builtin::u16{ADV_UFCS(_operator_subscript)(CategoryCasingLevel2Index.$ref(), Builtin::UncheckedTag{}, index)} | (Builtin::u16{ADV_UFCS(_operator_subscript)(CategoryCasingLevel2Index.$ref(), Builtin::UncheckedTag{}, ++index)} << Builtin::i32(8)))> lvl2 = Builtin::u16{ADV_UFCS(_operator_subscript)(CategoryCasingLevel2Index.$ref(), Builtin::UncheckedTag{}, index)} | (Builtin::u16{ADV_UFCS(_operator_subscript)(CategoryCasingLevel2Index.$ref(), Builtin::UncheckedTag{}, ++index)} << Builtin::i32(8)); 
		#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		#if ADV_VERSION_BIG_ENDIAN
		#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		lvl2 = ADV_UPCS(ByteSwapped)(lvl2.$ref());
		#endif
		#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		index = lvl2;
		#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		return ADV_UFCS(_operator_subscript)(CategoryCasingLevel3Index.$ref(), Builtin::UncheckedTag{}, (index << Builtin::i32(4)) + (codepoint & Builtin::u32(0xFU)));
	}
#line 86 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
	inline auto CharUnicodeInfo::GetNumericGraphemeTableOffset(Builtin::u32 codepoint)  -> const Builtin::usize
	{
		#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		Builtin::usize index = ADV_UFCS(_operator_subscript)(NumericGraphemeLevel1Index.$ref(), Builtin::UncheckedTag{}, codepoint >> Builtin::i32(9)); 
		#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		index = (index << Builtin::i32(6)) + ((codepoint >> Builtin::i32(3)) & Builtin::u32(0b00111110U));
		#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		Builtin::Auto<decltype(Builtin::u16{ADV_UFCS(_operator_subscript)(NumericGraphemeLevel2Index.$ref(), Builtin::UncheckedTag{}, index)} | (Builtin::u16{ADV_UFCS(_operator_subscript)(NumericGraphemeLevel2Index.$ref(), Builtin::UncheckedTag{}, ++index)} << Builtin::i32(8)))> lvl2 = Builtin::u16{ADV_UFCS(_operator_subscript)(NumericGraphemeLevel2Index.$ref(), Builtin::UncheckedTag{}, index)} | (Builtin::u16{ADV_UFCS(_operator_subscript)(NumericGraphemeLevel2Index.$ref(), Builtin::UncheckedTag{}, ++index)} << Builtin::i32(8)); 
		#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		#if ADV_VERSION_BIG_ENDIAN
		#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		lvl2 = ADV_UPCS(ByteSwapped)(lvl2.$ref());
		#endif
		#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		index = lvl2;
		#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
		return ADV_UFCS(_operator_subscript)(NumericGraphemeLevel3Index.$ref(), Builtin::UncheckedTag{}, (index << Builtin::i32(4)) + (codepoint & Builtin::u32(0xFU)));
	}
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Globalization\\CharUnicodeInfo.ast"
	

}