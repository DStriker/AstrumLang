#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "Int8.h"
#include "UInt8.h"
#include "Int16.h"
#include "UInt16.h"
#include "Int32.h"
#include "UInt32.h"
#include "Int64.h"
#include "UInt64.h"
#include "Int128.h"
#include "UInt128.h"

namespace System {
namespace __Unsafe {} namespace __Math_Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
class Math;
//###############################################################################
//# Type definitions
//###############################################################################
#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	struct Math : public Builtin::StaticClass {
		public: using __self = Math;
		#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		private: using IsqrtData = std::tuple<Builtin::u8, Builtin::u8>;
		private: Math() = default;
		#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		private: template<__ImplementsInterface_IFixedWidthInteger T> inline constexpr static auto _isqrtFirstStage(T num)  -> const std::tuple<Builtin::u8, Builtin::u8>;
		#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		private: template<__ImplementsInterface_IFixedWidthInteger T, __ImplementsInterface_IFixedWidthInteger U> inline constexpr static auto _isqrtMiddleStage(T num, auto root, auto rem)  -> const std::tuple<U, U>;
		#line 70 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		private: template<__ImplementsInterface_IFixedWidthInteger T> inline constexpr static auto _isqrtLastStage(T num, auto root, auto rem)  -> const T;
		#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: inline constexpr static auto Isqrt8(Builtin::u8 num) noexcept -> const Builtin::u8;
		#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: inline constexpr static auto Isqrt16(Builtin::u16 num)  -> const Builtin::u16;
		#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: inline constexpr static auto Isqrt32(Builtin::u32 num)  -> const Builtin::u32;
		#line 125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: inline constexpr static auto Isqrt64(Builtin::u64 num)  -> const Builtin::u64;
		#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: inline constexpr static auto Isqrt128(Builtin::u128 num)  -> const Builtin::u128;
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		private: static constexpr Builtin::InlineArray<Builtin::i32(256), IsqrtData> _isqrtLookupTable = [] () 
		{
			#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
			Builtin::InlineArray<Builtin::i32(256), IsqrtData> result{}; 
			#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
			Builtin::usize n = Builtin::u32(0U); 
			#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
			Builtin::usize rootN = Builtin::u32(0U); 
			#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
			while ((n <=> Builtin::i32(256)) < 0) 
			{
				#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
				ADV_UFCS(_operator_subscript)(result.__ref(), n) = std::make_tuple(Builtin::Cast<true, Builtin::u8>(rootN), Builtin::Cast<true, Builtin::u8>((n - ADV_UFCS(_operator_xor_xor)(rootN, Builtin::u32(2U)))));
				#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
				n++;
				#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
				if (n == ADV_UFCS(_operator_xor_xor)((rootN + Builtin::i32(1)), Builtin::u32(2U))) {
					#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
					rootN++;
				}
			}
			#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
			return result;
		}();
		#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		private: static constexpr auto EVEN_MAKING_BITMASK = ADV_UFCS_NONLOCAL(_operator_not)(Builtin::u32(1U));
		
	};
	
	//###############################################################################
//# Function definitions
//###############################################################################

#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<__ImplementsInterface_IFixedWidthInteger T> inline constexpr auto Math::_isqrtFirstStage(T num)  -> const std::tuple<Builtin::u8, Builtin::u8>
	{
		#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_ASSERT((num != Builtin::i32(0)), u"num!=0");
		#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		constexpr auto SHIFT = ADV_USPCS(BitWidth, T)() - Builtin::i32(8);
		#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		num >>= Builtin::Cast<true, Builtin::i32>(SHIFT);
		#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		return ADV_UFCS(_operator_subscript)(_isqrtLookupTable.__ref(), Builtin::Cast<true, Builtin::usize>(num));
	}
#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<__ImplementsInterface_IFixedWidthInteger T, __ImplementsInterface_IFixedWidthInteger U> inline constexpr auto Math::_isqrtMiddleStage(T num, auto root, auto rem)  -> const std::tuple<U, U>
	{
		#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_ASSERT((root != Builtin::i32(0)), u"root!=0");
		#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		constexpr auto SHIFT = ADV_USPCS(BitWidth, T)() - ADV_USPCS(BitWidth, U)();
		#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		constexpr auto HALF_BITS = ADV_USPCS(BitWidth, U)() >> Builtin::i32(1);
		#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		constexpr auto QUARTER_BITS = ADV_USPCS(BitWidth, U)() >> Builtin::i32(2);
		#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		constexpr auto LOWER_HALF_BITS = U{(Builtin::u64(1ULL) << HALF_BITS) - Builtin::i32(1)};
		#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		constexpr auto LOWER_QUARTER_BITS = U{(Builtin::u64(1ULL) << QUARTER_BITS) - Builtin::i32(1)};
		#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const auto n = U{num >> (Builtin::Cast<true, Builtin::i32>(SHIFT))}; 
		#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const auto low = n & LOWER_HALF_BITS; 
		#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const auto numerator = (U{rem} << QUARTER_BITS) | (low >> QUARTER_BITS); 
		#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const auto denominator = U{root} << Builtin::i32(1); 
		#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const auto& [q, u] = ADV_UFCS(_operator_div_mod)(numerator, denominator);
		#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		U r{}; 
		#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		auto s = U{root << QUARTER_BITS} + q; 
		#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const auto& [sub, overflow] = ADV_UFCS(_operator_sub_mod_qst)(((u << QUARTER_BITS) | (low & LOWER_QUARTER_BITS)), (q * q));
		#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		r = sub;
		#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		if (overflow) {
			#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
			ADV_UFCS(_operator_add_mod_eq)(r, (s * Builtin::i32(2) - Builtin::i32(1)));
			#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
			s--;
		}
		#line 68 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		return std::make_tuple(s, r);
	}
#line 70 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<__ImplementsInterface_IFixedWidthInteger T> inline constexpr auto Math::_isqrtLastStage(T num, auto root, auto rem)  -> const T
	{
		#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_ASSERT((root != Builtin::i32(0)), u"root!=0");
		#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		constexpr auto HALF_BITS = ADV_USPCS(BitWidth, T)() >> Builtin::i32(1);
		#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		constexpr auto QUARTER_BITS = ADV_USPCS(BitWidth, T)() >> Builtin::i32(2);
		#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		constexpr auto LOWER_HALF_BITS = T{(Builtin::u128(1ULL) << HALF_BITS) - Builtin::i32(1)};
		#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const auto low = num & LOWER_HALF_BITS; 
		#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const auto numerator = (T{rem} << QUARTER_BITS) | (low >> QUARTER_BITS); 
		#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const auto denominator = T{root} << Builtin::i32(1); 
		#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const auto q = ADV_UFCS(_operator_bsl)(numerator, denominator); 
		#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		auto result = T{root << QUARTER_BITS} + q; 
		#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const auto& [squared, overflow] = ADV_UFCS(_operator_mul_mod_qst)(result, result);
		#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		if (overflow || (squared <=> num) > 0) {
			#line 84 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
			--result;
		}
		#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		return result;
	}
#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	inline constexpr auto Math::Isqrt8(Builtin::u8 num) noexcept -> const Builtin::u8
	{
		#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(std::get<0>(ADV_UFCS(_operator_subscript)(_isqrtLookupTable.__ref(), Builtin::Cast<true, Builtin::usize>(num)))); 
	}
#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	inline constexpr auto Math::Isqrt16(Builtin::u16 num)  -> const Builtin::u16
	{
		#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		if ((num <=> ADV_USPCS(MaxValue, Builtin::u8)()) <= 0) {
			#line 95 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
			return Isqrt8(Builtin::Cast<true, Builtin::u8>(num));
		}
		#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const auto normShift = ADV_UPCS(LeadingZeroCount)(num.__ref()) & EVEN_MAKING_BITMASK; 
		#line 99 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		num <<= normShift;
		#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const auto& [s, r] = _isqrtFirstStage(num);
		#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const auto result = _isqrtLastStage(num, s, r); 
		#line 104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const auto denormShift = normShift >> Builtin::i32(1); 
		#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		return result >> denormShift;
	}
#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	inline constexpr auto Math::Isqrt32(Builtin::u32 num)  -> const Builtin::u32
	{
		#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		if ((num <=> ADV_USPCS(MaxValue, Builtin::u16)()) <= 0) {
			#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
			return Isqrt16(Builtin::Cast<true, Builtin::u16>(num));
		}
		#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const auto normShift = ADV_UPCS(LeadingZeroCount)(num.__ref()) & EVEN_MAKING_BITMASK; 
		#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		num <<= normShift;
		#line 117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const auto& [s1, r1] = _isqrtFirstStage(num);
		#line 118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const auto& [s2, r2] = _isqrtMiddleStage<Builtin::u32, Builtin::u16>(num, s1, r1);
		#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const auto result = _isqrtLastStage(num, s2, r2); 
		#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const auto denormShift = normShift >> Builtin::i32(1); 
		#line 122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		return result >> denormShift;
	}
#line 125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	inline constexpr auto Math::Isqrt64(Builtin::u64 num)  -> const Builtin::u64
	{
		#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		if ((num <=> ADV_USPCS(MaxValue, Builtin::u32)()) <= 0) {
			#line 128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
			return Isqrt32(Builtin::Cast<true, Builtin::u32>(num));
		}
		#line 131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const auto normShift = ADV_UPCS(LeadingZeroCount)(num.__ref()) & EVEN_MAKING_BITMASK; 
		#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		num <<= normShift;
		#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const auto& [s1, r1] = _isqrtFirstStage(num);
		#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const auto& [s2, r2] = _isqrtMiddleStage<Builtin::u64, Builtin::u16>(num, s1, r1);
		#line 136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const auto& [s3, r3] = _isqrtMiddleStage<Builtin::u64, Builtin::u32>(num, s2, r2);
		#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const auto result = _isqrtLastStage(num, s3, r3); 
		#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const auto denormShift = normShift >> Builtin::i32(1); 
		#line 140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		return result >> denormShift;
	}
#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	inline constexpr auto Math::Isqrt128(Builtin::u128 num)  -> const Builtin::u128
	{
		#line 145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		if ((num <=> ADV_USPCS(MaxValue, Builtin::u64)()) <= 0) {
			#line 146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
			return Isqrt64(Builtin::Cast<true, Builtin::u64>(num));
		}
		#line 149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const auto normShift = ADV_UPCS(LeadingZeroCount)(num.__ref()) & EVEN_MAKING_BITMASK; 
		#line 150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		num <<= Builtin::Cast<true, Builtin::i32>(normShift);
		#line 152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const auto& [s1, r1] = _isqrtFirstStage(num);
		#line 153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const auto& [s2, r2] = _isqrtMiddleStage<Builtin::u128, Builtin::u16>(num, s1, r1);
		#line 154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const auto& [s3, r3] = _isqrtMiddleStage<Builtin::u128, Builtin::u32>(num, s2, r2);
		#line 155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const auto& [s4, r4] = _isqrtMiddleStage<Builtin::u128, Builtin::u64>(num, s3, r3);
		#line 156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const auto result = _isqrtLastStage(num, s4, r4); 
		#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const auto denormShift = normShift >> Builtin::i32(1); 
		#line 159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		return result >> (Builtin::Cast<true, Builtin::i32>(denormShift));
	}
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	

}