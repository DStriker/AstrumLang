#include "Float128.h"
#include "Float128_Exp.h"
#include "Float128_Log.h"
#include "Float128_Pow.h"
#include "Float128_Trig.h"

namespace System {
//###############################################################################
//# Global type aliases
//###############################################################################
//###############################################################################
//# Type definitions
//###############################################################################
//###############################################################################
//# Free function declarations
//###############################################################################
#line 2063 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto RoundPackBits(bool sign, Builtin::i32 exp, Builtin::u128 sig, Builtin::u64 extra) noexcept -> const Builtin::u128;
#line 2118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto NormalizeRoundPackBits(bool sign, Builtin::i32 exp, Builtin::u128 sig) noexcept -> const Builtin::u128;
//###############################################################################
//# Global compile-time constants
//###############################################################################
//###############################################################################
//# Global variable declarations
//###############################################################################
#line 375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
namespace __Float128$Protected { extern const decltype(Builtin::u128(1ULL) << __Float128$Protected::BiasedExponentShift) HiddenBit = Builtin::u128(1ULL) << __Float128$Protected::BiasedExponentShift; }

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	




























#line 2063 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto RoundPackBits(bool sign, Builtin::i32 exp, Builtin::u128 sig, Builtin::u64 extra) noexcept -> const Builtin::u128
	{
		#line 2065 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype((extra <=> Builtin::u64(0x8000000000000000ULL)) >= 0)> doIncrement = (extra <=> Builtin::u64(0x8000000000000000ULL)) >= 0; 
		#line 2067 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((ADV_UFCS(NarrowToUInt32)(exp.$ref()) <=> Builtin::u32(0x7FFDU)) >= 0) {
			#line 2068 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if ((exp <=> Builtin::i32(0)) < 0) {
				#line 2069 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				const Builtin::Auto<decltype(((exp <=> Builtin::i32(-1)) < 0) | !doIncrement | (sig <=> Builtin::ParseUInt128("0x0001FFFFFFFFFFFFFFFFFFFFFFFFFFFF")) < 0)> isTiny = ((exp <=> Builtin::i32(-1)) < 0) | !doIncrement | (sig <=> Builtin::ParseUInt128("0x0001FFFFFFFFFFFFFFFFFFFFFFFFFFFF")) < 0; 
				#line 2070 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				const Builtin::Auto<decltype(-exp)> dist = -exp; 
				#line 2071 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				const Builtin::Auto<decltype(ADV_UFCS(NarrowToUInt32)(exp.$ref()))> negDist = ADV_UFCS(NarrowToUInt32)(exp.$ref()); 
				#line 2073 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				Builtin::Auto<decltype(extra)> tmp = extra; 
				#line 2074 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if ((dist <=> Builtin::i32(64)) < 0) {
					#line 2075 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					sig = Builtin::u128{ADV_UFCS(High64)(sig.$ref()) >> dist, ADV_UFCS(High64)(sig.$ref()) << (negDist & Builtin::i32(63)) | ADV_UFCS(Low64)(sig.$ref()) >> dist};
					#line 2076 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					extra = ADV_UFCS(Low64)(sig.$ref()) << (negDist & Builtin::i32(63));
				} else {
					#line 2077 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					{
						#line 2078 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						Builtin::u64 high{}, low{}; 
						#line 2079 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						if (dist == Builtin::i32(64)) {
							#line 2080 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							low = ADV_UFCS(High64)(sig.$ref());
							#line 2081 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							extra = ADV_UFCS(Low64)(sig.$ref());
						} else {
							#line 2082 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							{
								#line 2083 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
								tmp |= ADV_UFCS(Low64)(sig.$ref());
								#line 2084 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
								if ((dist <=> Builtin::i32(128)) < 0) {
									#line 2085 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
									low = ADV_UFCS(High64)(sig.$ref()) >> (dist & Builtin::i32(63));
									#line 2086 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
									extra = ADV_UFCS(High64)(sig.$ref()) << (negDist & Builtin::i32(63));
								} else {
									#line 2087 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
									{
										#line 2088 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
										low = Builtin::u32(0U);
										#line 2089 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
										extra = dist == Builtin::i32(128) ? ADV_UFCS(High64)(sig.$ref()) : Builtin::u64{ADV_UFCS(High64)(sig.$ref()) != Builtin::i32(0)};
									}
								}
							}
						}
						#line 2093 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						sig = Builtin::u128{high, low};
					}
				}
				#line 2096 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				extra |= Builtin::u64{tmp != Builtin::i32(0)};
				#line 2097 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				exp = Builtin::i32(0);
				#line 2098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				doIncrement = (extra <=> Builtin::u64(0x8000000000000000ULL)) >= 0;
			} else {
				#line 2099 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if ((exp <=> Builtin::i32(0x7FFD)) > 0 || (exp == Builtin::i32(0x7FFD) && sig == Builtin::ParseUInt128("0x0001FFFFFFFFFFFFFFFFFFFFFFFFFFFF") && doIncrement)) {
					#line 2100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					const Builtin::Auto<decltype((Builtin::u64{sign} << Builtin::i32(63)) | (Builtin::u64(0x7FFFULL) << Builtin::i32(48)))> high = (Builtin::u64{sign} << Builtin::i32(63)) | (Builtin::u64(0x7FFFULL) << Builtin::i32(48)); 
					#line 2101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					const Builtin::Auto<decltype(Builtin::u32(0U))> low = Builtin::u32(0U); 
					#line 2102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					return Builtin::u128{high, low};
				}
			}
		}
		#line 2106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (doIncrement) {
			#line 2107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_add_mod)(sig, Builtin::i32(1)))> sig128 = ADV_UFCS(_operator_add_mod)(sig, Builtin::i32(1)); 
			#line 2108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			sig = sig128 & Builtin::u128{ADV_USPCS(MaxValue, Builtin::u64)(), ADV_UFCS(Low64)(sig128.$ref()) & (ADV_UFCS(_operator_not)(Builtin::u64{(extra & Builtin::u64(0x7FFFFFFFFFFFFFFFULL)) == Builtin::i32(0)}))};
		} else {
			#line 2109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			{
				#line 2110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if (sig == Builtin::i32(0)) {
					#line 2111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					exp = Builtin::i32(0);
				}
			}
		}
		#line 2115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return __Float128$Protected::PackBits(sign, ADV_UFCS(NarrowToUInt16)(exp.$ref()), sig);
	}

#line 2118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto NormalizeRoundPackBits(bool sign, Builtin::i32 exp, Builtin::u128 sig) noexcept -> const Builtin::u128
	{
		#line 2120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(Builtin::i32{ADV_UPCS(LeadingZeroCount)(sig.$ref()) - Builtin::i32(15)})> shift = Builtin::i32{ADV_UPCS(LeadingZeroCount)(sig.$ref()) - Builtin::i32(15)}; 
		#line 2121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::u64 extra{}; 
		#line 2122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		exp -= shift;
		#line 2123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((shift <=> Builtin::i32(0)) >= 0) {
			#line 2124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if (shift != Builtin::i32(0)) {
				#line 2125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				sig <<= shift;
			}
			#line 2128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if ((ADV_UFCS(NarrowToUInt32)(exp.$ref()) <=> Builtin::i32(0x7FFD)) < 0) {
				#line 2129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				return __Float128$Protected::PackBits(sign, sig != Builtin::i32(0) ? ADV_UFCS(NarrowToUInt16)(exp.$ref()) : Builtin::u16(0U), sig);
			}
		} else {
			#line 2131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			{
				#line 2132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				const Builtin::Auto<decltype(shift)> negShift = shift; 
				#line 2133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				shift = -shift;
				#line 2134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				const Builtin::Auto<decltype(ADV_UFCS(High64)(sig.$ref()) >> shift)> high = ADV_UFCS(High64)(sig.$ref()) >> shift; 
				#line 2135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				const Builtin::Auto<decltype(ADV_UFCS(High64)(sig.$ref()) << (negShift & Builtin::i32(63)) | ADV_UFCS(Low64)(sig.$ref()) >> shift)> low = ADV_UFCS(High64)(sig.$ref()) << (negShift & Builtin::i32(63)) | ADV_UFCS(Low64)(sig.$ref()) >> shift; 
				#line 2136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				extra = ADV_UFCS(Low64)(sig.$ref()) << (negShift & Builtin::i32(63));
				#line 2137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				sig = Builtin::u128{high, low};
			}
		}
		#line 2140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return RoundPackBits(sign, exp, sig, extra);
	}

#line 2143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	static_assert(Builtin::usize(sizeof(Builtin::f128)) == Builtin::i32(16), "f128 should be 16 bytes");
#line 2144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	static_assert(ADV_USPCS(Pi, Builtin::f128)() == Builtin::ParseFloat128("3.14159265358979323846264338327950288419716939937510582097494"), "f128.Pi should be 3.14159265358979323846264338327950288419716939937510582097494");
#line 2145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	static_assert(Builtin::TypeIs<Builtin::f128, IComparable<Builtin::f128>>(), "f128 should implement IComparable<f128>");
#line 2146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	static_assert(Builtin::TypeIs<Builtin::f128, IEquatable<Builtin::f128>>(), "f128 should implement IEquatable<f128>");
#line 2147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	static_assert(Builtin::TypeIs<Builtin::f128, ISelfComparable>(), "f128 should implement ISelfComparable");
#line 2148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	static_assert(Builtin::TypeIs<Builtin::f128, ISelfEquatable>(), "f128 should implement ISelfEquatable");
#line 2149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	static_assert(Builtin::TypeIs<Builtin::f128, IAdditionOperators<Builtin::f128, Builtin::f128>>(), "f128 should implement IAdditionOperators<f128, f128>");
#line 2150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	static_assert(Builtin::TypeIs<Builtin::f128, ISubtractionOperators<Builtin::f128, Builtin::f128>>(), "f128 should implement ISubtractionOperators<f128, f128>");
#line 2151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	static_assert(Builtin::TypeIs<Builtin::f128, IMultiplyOperators<Builtin::f128, Builtin::f128>>(), "f128 should implement IMultiplyOperators<f128, f128>");
#line 2152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	static_assert(Builtin::TypeIs<Builtin::f128, IDivisionOperators<Builtin::f128, Builtin::f128>>(), "f128 should implement IDivisionOperators<f128, f128>");
#line 2153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	static_assert(Builtin::TypeIs<Builtin::f128, IModulusOperators<Builtin::f128, Builtin::f128>>(), "f128 should implement IModulusOperators<f128, f128>");
#line 2154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	static_assert(Builtin::TypeIs<Builtin::f128, IUnaryPlusOperators<Builtin::f128>>(), "f128 should implement IUnaryPlusOperators<f128>");
#line 2155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	static_assert(Builtin::TypeIs<Builtin::f128, IUnaryNegationOperators<Builtin::f128>>(), "f128 should implement IUnaryNegationOperators<f128>");
#line 2156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	static_assert(Builtin::TypeIs<Builtin::f128, IIncrementOperators<Builtin::f128>>(), "f128 should implement IIncrementOperators<f128>");
#line 2157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	static_assert(Builtin::TypeIs<Builtin::f128, IDecrementOperators<Builtin::f128>>(), "f128 should implement IDecrementOperators<f128>");
#ifdef ADV_UNITTEST
	#line 2159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	static bool $Test_f35ecd3810e7db1c = [](){
		#line 2160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::f128 f = Builtin::ParseFloat128("1234.1234"); 
		#line 2161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((f == Builtin::ParseFloat128("1234.1234")), "f==1234.1234_f128");
		#line 2162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto pi = Builtin::ParseFloat128("3.14159265358979323846264338327950288419716939937510582097494"); 
		#line 2164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((pi == Builtin::ParseFloat128("3.1415926535897932384626433832795028")), "pi==3.1415926535897932384626433832795028_f128");
		#line 2165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto mf = ADV_USPCS(MaxValue, Builtin::f128)(); 
		#line 2166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto mg = ADV_USPCS(MinValue, Builtin::f128)(); 
		#line 2167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto minf1 = ADV_USPCS(PositiveInfinity, Builtin::f128)(); 
		#line 2168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto minf2 = ADV_USPCS(NegativeInfinity, Builtin::f128)(); 
		#line 2169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto mnan = ADV_USPCS(NaN, Builtin::f128)(); 
		#line 2170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto mnz = ADV_USPCS(NegativeZero, Builtin::f128)(); 
		#line 2172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT(((f <=> Builtin::ParseFloat128("1234.1")) > 0), "f>1234.1_f128");
		#line 2173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT(((f <=> Builtin::ParseFloat128("1234.5")) < 0), "f<1234.5_f128");
		#line 2175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((f + Builtin::i32(1) == Builtin::ParseFloat128("1235.1234")), "f+1==1235.1234_f128");
		#line 2176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((f - Builtin::i32(1) == Builtin::ParseFloat128("1233.1234")), "f-1==1233.1234_f128");
		#line 2177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((f * Builtin::i32(2) == Builtin::ParseFloat128("2468.2468")), "f*2==2468.2468_f128");
		#line 2178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto gg = Builtin::ParseFloat128("617.0617"); 
		#line 2179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((f / Builtin::i32(2) == Builtin::ParseFloat128("617.0617")), "f/2==617.0617_f128");
		#line 2180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((f % Builtin::i32(2) == Builtin::ParseFloat128("0.123400000000000000000000000000080128")), "f%2==0.123400000000000000000000000000080128_f128");
		#line 2182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		f += Builtin::i32(1);
		#line 2183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((f == Builtin::ParseFloat128("1235.1234")), "f==1235.1234_f128");
		#line 2184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		f -= Builtin::i32(1);
		#line 2185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((f == Builtin::ParseFloat128("1234.1234")), "f==1234.1234_f128");
		#line 2186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		f *= Builtin::i32(2);
		#line 2187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((f == Builtin::ParseFloat128("2468.2468")), "f==2468.2468_f128");
		#line 2188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		f /= Builtin::i32(2);
		#line 2189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((f == Builtin::ParseFloat128("1234.1234")), "f==1234.1234_f128");
		#line 2190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		f %= Builtin::i32(2);
		#line 2191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((f == Builtin::ParseFloat128("0.123400000000000000000000000000080128")), "f==0.123400000000000000000000000000080128_f128");
		#line 2193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		f = Builtin::ParseFloat128("1234.1234");
		#line 2194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((f++ == Builtin::ParseFloat128("1234.1234")), "f++==1234.1234_f128");
		#line 2195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((++f == Builtin::ParseFloat128("1236.1234")), "++f==1236.1234_f128");
		#line 2196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((f-- == Builtin::ParseFloat128("1236.1234")), "f--==1236.1234_f128");
		#line 2197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((--f == Builtin::ParseFloat128("1234.1234")), "--f==1234.1234_f128");
		#line 2199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((+f == Builtin::ParseFloat128("1234.1234")), "+f==1234.1234_f128");
		#line 2200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((-f == Builtin::ParseFloat128("-1234.1234")), "-f==-1234.1234_f128");
		#line 2202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Nullable<Builtin::f128> n = nullptr; 
		#line 2203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((n == nullptr), "n==null");
		#line 2204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((f != n), "f!=n");
		#line 2205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		n = Builtin::f64(3.1234);
		#line 2206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((n != nullptr), "n!=null");
		#line 2207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((f != n), "f!=n");
		#line 2210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Nullable<Builtin::ObjectRef> o = f; 
		#line 2212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		IComparable<Builtin::f128> icomp = f; 
		#line 2213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT(((icomp <=> (*(n))) > 0), "icomp>n!");
		#line 2215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(f.$ref()) == Builtin::u64(7090797280142963579ULL)), "f.HashCode==7090797280142963579u");
		#line 2216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(f) == Builtin::u64(7090797280142963579ULL)), "#f==7090797280142963579u");
		#line 2218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(ToBoolean)(f.$ref())), "f.ToBoolean()");
		#line 2219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((!ADV_UFCS(ToBoolean)(Builtin::ParseFloat128("0.0").$ref())), "!0.0_f128.ToBoolean()");
		#line 2220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(ToInt16)(f.$ref()) == Builtin::i32(1234)), "f.ToInt16()==1234");
		#line 2221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(ToInt32)(f.$ref()) == Builtin::i32(1234)), "f.ToInt32()==1234");
		#line 2222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(ToInt64)(f.$ref()) == Builtin::i32(1234)), "f.ToInt64()==1234");
		#line 2223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(ToInt128)(f.$ref()) == Builtin::i32(1234)), "f.ToInt128()==1234");
		#line 2224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(ToUsize)(f.$ref()) == Builtin::i32(1234)), "f.ToUsize()==1234");
		#line 2226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		{
			#line 2227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)(f, Builtin::i32(2));
			#line 2228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			ADV_ASSERT((div == Builtin::ParseFloat128("617.0617") && rem == Builtin::ParseFloat128("0.123400000000000000000000000000080128")), "div==617.0617f128&&rem==0.123400000000000000000000000000080128_f128");
		}
		#line 2231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor)(f, Builtin::i32(2)) == Builtin::ParseFloat128("1523060.566427560000000000000000000131")), "f^^2==1523060.566427560000000000000000000131f128");
		#line 2232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor)(f, (Builtin::i32(-2))) == Builtin::ParseFloat128("0.0000006565727076406203619883993228068647")), "f^^(-2)==0.0000006565727076406203619883993228068647f128");
		#line 2233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_mul)(f, Builtin::i32(2)) == Builtin::ParseFloat128("1523060.566427560000000000000000000131")), "f**2==1523060.566427560000000000000000000131f128");
		#line 2234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_mul)(f, (Builtin::i32(-2))) == Builtin::ParseFloat128("0.0000006565727076406203619883993228068647")), "f**(-2)==0.0000006565727076406203619883993228068647f128");
		#line 2235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_mul)(f, Builtin::ParseFloat128("12.34")) == Builtin::ParseInt128("140399306710578886040026538316234981376")), "f**12.34f128==140399306710578886040026538316234981376");
		#line 2237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(Abs)(f.$ref()) == f), "f.Abs==f");
		#line 2238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(Abs)(Builtin::ParseFloat128("-1234.1234").$ref()) == Builtin::ParseFloat128("1234.1234")), "-1234.1234f128.Abs==1234.1234f128");
		#line 2239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(IsCanonical)(f.$ref())), "f.IsCanonical");
		#line 2240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((!ADV_UPCS(IsComplexNumber)(f.$ref())), "!f.IsComplexNumber");
		#line 2241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((!ADV_UPCS(IsImaginaryNumber)(f.$ref())), "!f.IsImaginaryNumber");
		#line 2242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(IsRealNumber)(f.$ref())), "f.IsRealNumber");
		#line 2243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(IsFinite)(f.$ref())), "f.IsFinite");
		#line 2244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((!ADV_UPCS(IsInfinity)(f.$ref())), "!f.IsInfinity");
		#line 2245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((!ADV_UPCS(IsNaN)(f.$ref())), "!f.IsNaN");
		#line 2246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((!ADV_UPCS(IsNegative)(f.$ref())), "!f.IsNegative");
		#line 2247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(IsNegative)(Builtin::ParseFloat128("-1234.1234").$ref())), "-1234.1234f128.IsNegative");
		#line 2248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((!ADV_UPCS(IsNegativeInfinity)(f.$ref())), "!f.IsNegativeInfinity");
		#line 2249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(IsPositive)(f.$ref())), "f.IsPositive");
		#line 2250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((!ADV_UPCS(IsPositiveInfinity)(f.$ref())), "!f.IsPositiveInfinity");
		#line 2251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((!ADV_UPCS(IsSubnormal)(f.$ref())), "!f.IsSubnormal");
		#line 2252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((!ADV_UPCS(IsZero)(f.$ref())), "!f.IsZero");
		#line 2253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(IsZero)(Builtin::ParseFloat128("0.0").$ref())), "0.0f128.IsZero");
		#line 2254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((!ADV_UPCS(IsInteger)(f.$ref())), "!f.IsInteger");
		#line 2255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((!ADV_UPCS(IsEvenInteger)(f.$ref())), "!f.IsEvenInteger");
		#line 2256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((!ADV_UPCS(IsOddInteger)(f.$ref())), "!f.IsOddInteger");
		#line 2257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(IsInteger)(Builtin::ParseFloat128("1.0").$ref())), "1.0f128.IsInteger");
		#line 2258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(IsOddInteger)(Builtin::ParseFloat128("1.0").$ref())), "1.0f128.IsOddInteger");
		#line 2259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(IsEvenInteger)(Builtin::ParseFloat128("2.0").$ref())), "2.0f128.IsEvenInteger");
		#line 2260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(MaxMagnitude)(f.$ref(), Builtin::ParseFloat128("-1235.0")) == Builtin::ParseFloat128("-1235.0")), "f.MaxMagnitude(-1235.0f128)==-1235.0f128");
		#line 2261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(MinMagnitude)(f.$ref(), Builtin::ParseFloat128("-1235.0")) == Builtin::ParseFloat128("1234.1234")), "f.MinMagnitude(-1235.0f128)==1234.1234f128");
		#line 2263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(NarrowToInt32)(f.$ref()) == Builtin::i32(1234)), "f.NarrowToInt32()==1234");
		#line 2264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(NarrowToInt8)(f.$ref()) == Builtin::i32(-46)), "f.NarrowToInt8()==-46");
		#line 2266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(Sign)(f.$ref()) == Builtin::i32(1)), "f.Sign==1");
		#line 2267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(Sign)(Builtin::ParseFloat128("-1234.1234").$ref()) == Builtin::i32(-1)), "-1234.1234f128.Sign==-1");
		#line 2268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(Sign)(Builtin::ParseFloat128("0.0").$ref()) == Builtin::i32(0)), "0.0f128.Sign==0");
		#line 2270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(CopySign)(f.$ref(), Builtin::ParseFloat128("-1.0")) == Builtin::ParseFloat128("-1234.1234")), "f.CopySign(-1.0f128)==-1234.1234f128");
		#line 2271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(Max)(f.$ref(), Builtin::i32(123)) == f), "f.Max(123)==f");
		#line 2272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(Min)(f.$ref(), Builtin::i32(123)) == Builtin::ParseFloat128("123.0")), "f.Min(123)==123.0f128");
		#line 2273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(Clamp)(f.$ref(), Builtin::i32(1), Builtin::i32(1000)) == Builtin::ParseFloat128("1000.0")), "f.Clamp(1,1000)==1000.0f128");
		#line 2275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((!ADV_UPCS(IsPow2)(f.$ref())), "!f.IsPow2");
		#line 2276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(IsPow2)(Builtin::ParseFloat128("4096.0").$ref())), "4096.0f128.IsPow2");
		#line 2277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::ParseFloat128("4096.0").$ref()) == Builtin::ParseFloat128("11.999999999999999999999994462093366496")), "4096.0f128.Log2==11.999999999999999999999994462093366496f128");
		#line 2278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(IsNegativeInfinity)(ADV_UPCS(Log2)(ADV_USPCS(Zero, Builtin::f128)().$ref()).$ref())), "f128.Zero.Log2.IsNegativeInfinity");
		#line 2279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(IsNaN)(ADV_UPCS(Log2)(Builtin::ParseFloat128("-123.0").$ref()).$ref())), "-123.0f128.Log2.IsNaN");
		#line 2280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(Builtin::ParseFloat128("10000.0").$ref()) == Builtin::ParseFloat128("3.999999999999999999999998406425401")), "10000.0f128.Log10==3.999999999999999999999998406425401f128");
		#line 2281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(IsNegativeInfinity)(ADV_UPCS(Log10)(ADV_USPCS(Zero, Builtin::f128)().$ref()).$ref())), "f128.Zero.Log10.IsNegativeInfinity");
		#line 2282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(IsNaN)(ADV_UPCS(Log10)(Builtin::ParseFloat128("-123.0").$ref()).$ref())), "-123.0f128.Log10.IsNaN");
		#line 2283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(Midpoint)(Builtin::ParseFloat128("1000.0").$ref(), Builtin::ParseFloat128("1500.0")) == Builtin::ParseFloat128("1250.0")), "1000.0f128.Midpoint(1500.0f128)==1250.0f128");
		#line 2284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(IsMultipleOf)(Builtin::ParseFloat128("10000.0").$ref(), Builtin::i32(10))), "10000.0f128.IsMultipleOf(10)");
		#line 2285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((!ADV_UFCS(IsMultipleOf)(Builtin::ParseFloat128("10000.0").$ref(), Builtin::ParseFloat128("7.5"))), "!10000.0f128.IsMultipleOf(7.5f128)");
		#line 2286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(IsMultipleOf)(Builtin::ParseFloat128("22.5").$ref(), Builtin::ParseFloat128("7.5"))), "22.5f128.IsMultipleOf(7.5f128)");
		#line 2288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(Ceil)(Builtin::ParseFloat128("2.5").$ref()) == Builtin::ParseFloat128("3.0")), "2.5f128.Ceil==3.0f128");
		#line 2289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(Floor)(Builtin::ParseFloat128("2.5").$ref()) == Builtin::ParseFloat128("2.0")), "2.5f128.Floor==2.0f128");
		#line 2290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(Truncate)(Builtin::ParseFloat128("2.5").$ref()) == Builtin::ParseFloat128("2.0")), "2.5f128.Truncate==2.0f128");
		#line 2291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(Round)(Builtin::ParseFloat128("2.5").$ref()) == Builtin::ParseFloat128("3.0")), "2.5f128.Round==3.0f128");
		#line 2292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(RoundToInt32)(Builtin::ParseFloat128("2.5").$ref()) == Builtin::i32(3)), "2.5f128.RoundToInt32()==3");
		#line 2293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(RoundTiesEven)(Builtin::ParseFloat128("2.5").$ref()) == Builtin::ParseFloat128("2.0")), "2.5f128.RoundTiesEven==2.0f128");
		#line 2294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(RoundTiesEvenToInt32)(Builtin::ParseFloat128("2.5").$ref()) == Builtin::i32(2)), "2.5f128.RoundTiesEvenToInt32()==2");
		#line 2295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(RoundTiesEven)(Builtin::ParseFloat128("3.5").$ref()) == Builtin::ParseFloat128("4.0")), "3.5f128.RoundTiesEven==4.0f128");
		#line 2296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(Round)(Builtin::ParseFloat128("2.665").$ref(), Builtin::u32(2U)) == Builtin::ParseFloat128("2.67")), "2.665f128.Round(2u)==2.67f128");
		#line 2297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(Round)(Builtin::ParseFloat128("2.665").$ref(), Builtin::u32(2U), ADV_USPCS(ToEven, MidpointRounding)()) == Builtin::ParseFloat128("2.66")), "2.665f128.Round(2u,MidpointRounding.ToEven)==2.66f128");
		#line 2298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(Ceil)((Builtin::ParseFloat128("-2.5")).$ref()) == Builtin::ParseFloat128("-2.0")), "(-2.5f128).Ceil==-2.0f128");
		#line 2299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(Floor)((Builtin::ParseFloat128("-2.5")).$ref()) == Builtin::ParseFloat128("-3.0")), "(-2.5f128).Floor==-3.0f128");
		#line 2300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(Truncate)((Builtin::ParseFloat128("-2.5")).$ref()) == Builtin::ParseFloat128("-2.0")), "(-2.5f128).Truncate==-2.0f128");
		#line 2301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(Round)((Builtin::ParseFloat128("-2.5")).$ref()) == Builtin::ParseFloat128("-3.0")), "(-2.5f128).Round==-3.0f128");
		#line 2302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(RoundToInt32)((Builtin::ParseFloat128("-2.5")).$ref()) == Builtin::i32(-3)), "(-2.5f128).RoundToInt32()==-3");
		#line 2303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(RoundTiesEven)((Builtin::ParseFloat128("-2.5")).$ref()) == Builtin::ParseFloat128("-2.0")), "(-2.5f128).RoundTiesEven==-2.0f128");
		#line 2304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(RoundTiesEvenToInt32)((Builtin::ParseFloat128("-2.5")).$ref()) == Builtin::i32(-2)), "(-2.5f128).RoundTiesEvenToInt32()==-2");
		#line 2305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(RoundTiesEven)((Builtin::ParseFloat128("-3.5")).$ref()) == Builtin::ParseFloat128("-4.0")), "(-3.5f128).RoundTiesEven==-4.0f128");
		#line 2306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(Round)((Builtin::ParseFloat128("-2.665")).$ref(), Builtin::u32(2U)) == Builtin::ParseFloat128("-2.67")), "(-2.665f128).Round(2u)==-2.67f128");
		#line 2307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(Round)((Builtin::ParseFloat128("-2.665")).$ref(), Builtin::u32(2U), ADV_USPCS(ToEven, MidpointRounding)()) == Builtin::ParseFloat128("-2.66")), "(-2.665f128).Round(2u,MidpointRounding.ToEven)==-2.66f128");
		#line 2309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		f = Builtin::ParseFloat128("12.34");
		#line 2311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(Ln)(ADV_USPCS(E, Builtin::f128)().$ref()) == Builtin::ParseFloat128("0.9999999999999999999999998332914073")), "f128.E.Ln==0.9999999999999999999999998332914073f128");
		#line 2312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(LnP1)(Builtin::ParseFloat128("12345678.12345678").$ref()) == Builtin::ParseFloat128("16.32881669127397153008094551958084708")), "12345678.12345678f128.LnP1==16.32881669127397153008094551958084708f128");
		#line 2313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(Log)(f.$ref(), Builtin::f64(1.25)) == Builtin::ParseFloat128("11.26111869994794695640976458195142")), "f.Log(1.25)==11.26111869994794695640976458195142f128");
		#line 2317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		f = Builtin::ParseFloat128("0.34");
		#line 2318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(FusedMultiplyAdd)(Builtin::ParseFloat128("10.25").$ref(), Builtin::f64(1.25), Builtin::f64(1.25)) == Builtin::ParseFloat128("14.0625")), "10.25f128.FusedMultiplyAdd(1.25,1.25)==14.0625f128");
		#line 2319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(FusedMultiplyAdd)(f.$ref(), Builtin::ParseFloat128("5.0"), Builtin::ParseFloat128("2.12")) == Builtin::ParseFloat128("3.82")), "f.FusedMultiplyAdd(5.0f128,2.12f128)==3.82f128");
		#line 2320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(Round)(ADV_UFCS(Lerp)(Builtin::ParseFloat128("1.0").$ref(), Builtin::ParseFloat128("2.0"), Builtin::ParseFloat128("0.75")).$ref(), Builtin::u32(20U)) == Builtin::f64(1.75)), "1.0f128.Lerp(2.0f128,0.75f128).Round(20u)==1.75");
		return true;
	}();
	#endif	
} namespace $extensions { using namespace System;
#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto _operator_eq_eq_mul($extension_Float128_19_f128 const& $this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool
	{
		#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		{
			#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			auto __tmp0 = Builtin::Cast<false, $extension_Float128_19_f128>(obj);
			#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if ((__tmp0.IsValid())) {
				#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				const auto& obj = *__tmp0;
				
				#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if ($this == obj) {
					#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					return Builtin::Boolean(true);
				}
			}
		}
		#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return Builtin::Boolean(false);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto _operator_lt_eq_gt_mul($extension_Float128_62_f128 const& $this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32
	{
		#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		{
			#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			auto __tmp0 = Builtin::Cast<false, $extension_Float128_62_f128>(obj);
			#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if ((__tmp0.IsValid())) {
				#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				const auto& obj = *__tmp0;
				
				#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				return $this <=> obj;
			}
		}
		#line 68 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		{
			#line 68 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if ((!Builtin::Is(obj, nullptr))) {
				#line 68 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				auto __tmp0 = *obj; const auto& obj = __tmp0;
				
				#line 70 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				Builtin::Throw(Builtin::InvalidOperationException{});
			}
		}
		#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return Builtin::i32(1);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto Parse($extension_Float128_161_f128 const& $this LIFETIMEBOUND, Builtin::Str input)  -> const typename $extension_Float128_161_f128
	{
		#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return Builtin::i32(0);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto TryParse($extension_Float128_161_f128 const& $this LIFETIMEBOUND, Builtin::Str input) noexcept -> const Builtin::Nullable<$extension_Float128_161_f128>
	{
		#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return Builtin::f32(0.0f);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getLog2($extension_Float128_404_f128 const & $this ) -> const $extension_Float128_404_f128
	{
		#line 437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return Log2Impl($this);
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getLog10($extension_Float128_404_f128 const & $this ) -> const $extension_Float128_404_f128
	{
		#line 444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return Log10Impl($this);
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 780 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto _operator_mul_mul($extension_Float128_779_f128 const& $this LIFETIMEBOUND, $extension_Float128_779_f128 exp)  -> const typename $extension_Float128_779_f128
	{
		#line 782 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return PowImpl($this, exp);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 789 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getExp($extension_Float128_787_f128 const & $this ) -> const $extension_Float128_787_f128
	{
		#line 791 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return ExpImpl($this);
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 794 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getExp2($extension_Float128_787_f128 const & $this ) -> const $extension_Float128_787_f128
	{
		#line 796 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return Exp2Impl($this);
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 799 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getExp10($extension_Float128_787_f128 const & $this ) -> const $extension_Float128_787_f128
	{
		#line 801 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return Exp10Impl($this);
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 804 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getExpM1($extension_Float128_787_f128 const & $this ) -> const $extension_Float128_787_f128
	{
		#line 806 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return ExpM1Impl($this);
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getLn($extension_Float128_814_f128 const & $this ) -> const $extension_Float128_814_f128
	{
		#line 818 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return LnImpl($this);
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 821 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getLnP1($extension_Float128_814_f128 const & $this ) -> const $extension_Float128_814_f128
	{
		#line 823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return LnP1Impl($this);
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1055 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto Root($extension_Float128_831_f128 const& $this LIFETIMEBOUND, Builtin::i32 n)  -> const typename $extension_Float128_831_f128
	{
		#line 1057 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto PositiveN = [&] ($extension_Float128_831_f128 x, Builtin::i32 n) 
		{
			#line 1059 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			$extension_Float128_831_f128 result{}; 
			#line 1060 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if (ADV_UPCS(IsFinite)(x.$ref())) {
				#line 1061 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if (x != Builtin::i32(0)) {
					#line 1062 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					if ((x <=> Builtin::i32(0)) > 0 || ADV_UPCS(IsOddInteger)(n.$ref())) {
						#line 1063 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						result = ADV_UFCS(_operator_mul_mul)(ADV_UPCS(Abs)(x.$ref()), (ADV_USPCS(One, $extension_Float128_831_f128)() / n));
						#line 1064 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						result = ADV_UFCS(CopySign)(result.$ref(), x);
					} else {
						#line 1065 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						{
							#line 1066 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							result = ADV_USPCS(NaN, Builtin::f128)();
						}
					}
				} else {
					#line 1068 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					if (ADV_UPCS(IsEvenInteger)(n.$ref())) {
						#line 1069 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						result = Builtin::i32(0);
					} else {
						#line 1070 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						{
							#line 1071 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							result = ADV_UFCS(CopySign)(Builtin::ParseFloat128("0.0").$ref(), x);
						}
					}
				}
			} else {
				#line 1073 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if (ADV_UPCS(IsNaN)(x.$ref())) {
					#line 1074 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					result = ADV_USPCS(NaN, Builtin::f128)();
				} else {
					#line 1075 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					if ((x <=> Builtin::i32(0)) > 0) {
						#line 1076 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						ADV_ASSERT((ADV_UPCS(IsPositiveInfinity)(x.$ref())), "x.IsPositiveInfinity");
						#line 1077 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						result = ADV_USPCS(PositiveInfinity, Builtin::f128)();
					} else {
						#line 1078 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						{
							#line 1079 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							ADV_ASSERT((ADV_UPCS(IsNegativeInfinity)(x.$ref())), "x.IsNegativeInfinity");
							#line 1080 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							result = ADV_UPCS(IsOddInteger)(n.$ref()) ? ADV_USPCS(NegativeInfinity, Builtin::f128)() : ADV_USPCS(NaN, Builtin::f128)();
						}
					}
				}
			}
			#line 1083 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return result;
		}; 
		#line 1086 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto NegativeN = [&] ($extension_Float128_831_f128 x, Builtin::i32 n) 
		{
			#line 1088 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			$extension_Float128_831_f128 result{}; 
			#line 1089 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if (ADV_UPCS(IsFinite)(x.$ref())) {
				#line 1090 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if (x != Builtin::i32(0)) {
					#line 1091 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					if ((x <=> Builtin::i32(0)) > 0 || ADV_UPCS(IsOddInteger)(n.$ref())) {
						#line 1092 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						result = ADV_UFCS(_operator_mul_mul)(ADV_UPCS(Abs)(x.$ref()), (ADV_USPCS(One, $extension_Float128_831_f128)() / n));
						#line 1093 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						result = ADV_UFCS(CopySign)(result.$ref(), x);
					} else {
						#line 1094 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						{
							#line 1095 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							result = ADV_USPCS(NaN, Builtin::f128)();
						}
					}
				} else {
					#line 1097 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					if (ADV_UPCS(IsEvenInteger)(n.$ref())) {
						#line 1098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						result = ADV_USPCS(PositiveInfinity, Builtin::f128)();
					} else {
						#line 1099 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						{
							#line 1100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							result = ADV_UFCS(CopySign)(ADV_USPCS(PositiveInfinity, Builtin::f128)().$ref(), x);
						}
					}
				}
			} else {
				#line 1102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if (ADV_UPCS(IsNaN)(x.$ref())) {
					#line 1103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					result = ADV_USPCS(NaN, Builtin::f128)();
				} else {
					#line 1104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					if ((x <=> Builtin::i32(0)) > 0) {
						#line 1105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						ADV_ASSERT((ADV_UPCS(IsPositiveInfinity)(x.$ref())), "x.IsPositiveInfinity");
						#line 1106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						result = Builtin::i32(0);
					} else {
						#line 1107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						{
							#line 1108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							ADV_ASSERT((ADV_UPCS(IsNegativeInfinity)(x.$ref())), "x.IsNegativeInfinity");
							#line 1109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							result = ADV_UPCS(IsOddInteger)(n.$ref()) ? ADV_USPCS(NegativeZero, Builtin::f128)() : ADV_USPCS(NaN, Builtin::f128)();
						}
					}
				}
			}
			#line 1112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return result;
		}; 
		#line 1115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return [&]() 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
		{
			#line 1116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			auto __tmp__valid_1115 = Builtin::Cast<false, std::decay_t<decltype(n)>::$self>(n);
			#line 1116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if(__tmp__valid_1115.IsValid() && Builtin::IsGreater(*__tmp__valid_1115, Builtin::i32(0))) {
				#line 1116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				const auto& n = *__tmp__valid_1115;
				return [&]() 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
				{
					#line 1118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					auto __tmp__valid_1116 = Builtin::Cast<false, std::decay_t<decltype(n)>::$self>(n);
					#line 1118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					if(__tmp__valid_1116.IsValid() && Builtin::Is(*__tmp__valid_1116, Builtin::i32(2))) {
						#line 1118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						const auto& n = *__tmp__valid_1116;
						return $this != Builtin::i32(0) ? ADV_UPCS(Sqrt)($this.$ref()) : Builtin::i32(0);
					}
					else {
						#line 1119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						if(__tmp__valid_1116.IsValid() && Builtin::Is(*__tmp__valid_1116, Builtin::i32(3))) {
							#line 1119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							const auto& n = *__tmp__valid_1116;
							return ADV_UPCS(Cbrt)($this.$ref());
						}
						else {
							return PositiveN($this, n);
							
						}
					}
				}
ADV_WARNING_POP
				();
			}
			else {
				#line 1122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if(__tmp__valid_1115.IsValid() && Builtin::IsLess(*__tmp__valid_1115, Builtin::i32(0))) {
					#line 1122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					const auto& n = *__tmp__valid_1115;
					return NegativeN($this, n);
				}
				else {
					return ADV_USPCS(NaN, Builtin::f128)();
					
				}
			}
		}
ADV_WARNING_POP
		();
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto Hypot($extension_Float128_831_f128 const& $this LIFETIMEBOUND, $extension_Float128_831_f128 y)  -> const typename $extension_Float128_831_f128
	{
		#line 1130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto sq = [&] (Builtin::f128 x) 
		{
			#line 1131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			const auto xc = x * ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x40380000000000000080000000000000")); 
			#line 1132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			const auto xh = x - xc + xc; 
			#line 1133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			const auto xl = x - xh; 
			#line 1134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return Builtin::MakeTuple(xh * xh - x * x + xh * xl * Builtin::i32(2) + xl * xl, x * x);
		}; 
		#line 1137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype($this)> x = $this; 
		#line 1138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(__Float128$Protected::BiasedExponent(x))> ex = __Float128$Protected::BiasedExponent(x); 
		#line 1139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(__Float128$Protected::BiasedExponent(y))> ey = __Float128$Protected::BiasedExponent(y); 
		#line 1140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((ex <=> ey) < 0) {
			#line 1141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			Builtin::Auto<decltype(ex)> tmp = ex; 
			#line 1142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			ex = ey;
			#line 1143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			ey = tmp;
			#line 1144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			Builtin::Auto<decltype(x)> tmp2 = x; 
			#line 1145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			x = ADV_UPCS(Abs)(y.$ref());
			#line 1146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			y = ADV_UPCS(Abs)(tmp2.$ref());
		} else {
			#line 1147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			{
				#line 1148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				x = ADV_UPCS(Abs)(x.$ref());
				#line 1149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				y = ADV_UPCS(Abs)(y.$ref());
			}
		}
		#line 1152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (ex == Builtin::i32(0x7FFF) && ADV_UPCS(IsInfinity)(y.$ref())) {
			#line 1153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return y;
		}
		#line 1155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (ex == Builtin::i32(0x7FFF) || y == Builtin::i32(0)) {
			#line 1156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return x;
		}
		#line 1158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((ex - ey <=> Builtin::i32(113)) > 0) {
			#line 1159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return x + y;
		}
		#line 1162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		constexpr Builtin::Auto<decltype(ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x670F0000000000000000000000000000")))> huge = ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x670F0000000000000000000000000000"));
		#line 1163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		constexpr Builtin::Auto<decltype(ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x18EF0000000000000000000000000000")))> tiny = ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x18EF0000000000000000000000000000"));
		#line 1164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(ADV_USPCS(One, $extension_Float128_831_f128)())> z = ADV_USPCS(One, $extension_Float128_831_f128)(); 
		#line 1166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((ex <=> Builtin::i32(0x3FFF) + Builtin::i32(8000)) > 0) {
			#line 1167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			z = huge;
			#line 1168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			x *= tiny;
			#line 1169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			y *= tiny;
		} else {
			#line 1170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if ((ey <=> Builtin::i32(0x3FFF) - Builtin::i32(8000)) < 0) {
				#line 1171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				z = tiny;
				#line 1172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				x *= huge;
				#line 1173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				y *= huge;
			}
		}
		#line 1176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const auto& [lx, hx] = sq(x);
		#line 1177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const auto& [ly, hy] = sq(y);
		#line 1178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return z * ADV_UPCS(Sqrt)((ly + lx + hy + hx).$ref());
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 833 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getSqrt($extension_Float128_831_f128 const & $this ) -> const $extension_Float128_831_f128
	{
		#line 837 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Bits)($this.$ref()))> bits = ADV_UPCS(Bits)($this.$ref()); 
		#line 838 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const Builtin::Auto<decltype(ADV_UPCS(IsNegative)($this.$ref()))> sign = ADV_UPCS(IsNegative)($this.$ref()); 
		#line 839 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::i32 exp = __Float128$Protected::ExtractBiasedExponentFromBits(bits); 
		#line 840 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(__Float128$Protected::ExtractTrailingSignificandFromBits(bits))> sig = __Float128$Protected::ExtractTrailingSignificandFromBits(bits); 
		#line 844 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (exp == Builtin::i32(0x7FFF)) {
			#line 846 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if (sig != Builtin::i32(0)) {
				#line 847 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				return ADV_USPCS(NaN, $extension_Float128_831_f128)();
			}
			#line 851 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if (!sign) {
				#line 852 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				return $this;
			}
			#line 856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return ADV_USPCS(NaN, $extension_Float128_831_f128)();
		}
		#line 860 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (sign) {
			#line 862 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if ((ADV_UFCS(NarrowToUInt128)(exp.$ref()) | sig) == Builtin::i32(0)) {
				#line 863 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				return $this;
			}
			#line 867 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return ADV_USPCS(NaN, $extension_Float128_831_f128)();
		}
		#line 871 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (exp == Builtin::i32(0)) {
			#line 873 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if (sig == Builtin::i32(0)) {
				#line 874 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				return $this;
			}
			#line 878 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			const Builtin::Auto<decltype(Builtin::i32{ADV_UPCS(LeadingZeroCount)(sig.$ref())} - Builtin::i32(15))> shift = Builtin::i32{ADV_UPCS(LeadingZeroCount)(sig.$ref())} - Builtin::i32(15); 
			#line 879 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			exp = Builtin::i32(1) - shift;
			#line 880 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			sig <<= shift;
		}
		#line 883 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const Builtin::Auto<decltype(((exp - Builtin::i32(0x3FFF)) >> Builtin::i32(1)) + Builtin::i32(0x3FFE))> resultExp = ((exp - Builtin::i32(0x3FFF)) >> Builtin::i32(1)) + Builtin::i32(0x3FFE); 
		#line 884 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		exp &= Builtin::i32(1);
		#line 885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		sig |= __Float128$Protected::HiddenBit;
		#line 886 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const Builtin::Auto<decltype(ADV_UFCS(NarrowToUInt32)((sig >> Builtin::i32(81)).$ref()))> sig32 = ADV_UFCS(NarrowToUInt32)((sig >> Builtin::i32(81)).$ref()); 
		#line 887 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const auto recip = [&] (Builtin::u32 oddExp, Builtin::u32 a) 
		{
			#line 888 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			constexpr auto Approx1k0s = Builtin::ToInlineArray<Builtin::u16>({Builtin::u16(Builtin::u16(0xB4C9U)), Builtin::u16(Builtin::u16(0xFFABU)), Builtin::u16(Builtin::u16(0xAA7DU)), Builtin::u16(Builtin::u16(0xF11CU)), Builtin::u16(Builtin::u16(0xA1C5U)), Builtin::u16(Builtin::u16(0xE4C7U)), Builtin::u16(Builtin::u16(0x9A43U)), Builtin::u16(Builtin::u16(0xDA29U)), Builtin::u16(Builtin::u16(0x93B5U)), Builtin::u16(Builtin::u16(0xD0E5U)), Builtin::u16(Builtin::u16(0x8DEDU)), Builtin::u16(Builtin::u16(0xC8B7U)), Builtin::u16(Builtin::u16(0x88C6U)), Builtin::u16(Builtin::u16(0xC16DU)), Builtin::u16(Builtin::u16(0x8424U)), Builtin::u16(Builtin::u16(0xBAE1U))});
			#line 893 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			constexpr auto Approx1k1s = Builtin::ToInlineArray<Builtin::u16>({Builtin::u16(Builtin::u16(0xA5A5U)), Builtin::u16(Builtin::u16(0xEA42U)), Builtin::u16(Builtin::u16(0x8C21U)), Builtin::u16(Builtin::u16(0xC62DU)), Builtin::u16(Builtin::u16(0x788FU)), Builtin::u16(Builtin::u16(0xAA7FU)), Builtin::u16(Builtin::u16(0x6928U)), Builtin::u16(Builtin::u16(0x94B6U)), Builtin::u16(Builtin::u16(0x5CC7U)), Builtin::u16(Builtin::u16(0x8335U)), Builtin::u16(Builtin::u16(0x52A6U)), Builtin::u16(Builtin::u16(0x74E2U)), Builtin::u16(Builtin::u16(0x4A3EU)), Builtin::u16(Builtin::u16(0x68FEU)), Builtin::u16(Builtin::u16(0x432BU)), Builtin::u16(Builtin::u16(0x5EFDU))});
			#line 899 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			const auto index = ADV_UFCS(NarrowToInt32)((((a >> Builtin::i32(27)) & Builtin::u32(0xEU)) + oddExp).$ref()); 
			#line 900 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			const auto epsilon = ADV_UFCS(NarrowToUInt16)((a >> Builtin::i32(12)).$ref()); 
			#line 901 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			const auto r0 = Builtin::u16{ADV_UFCS(_operator_sub_mod)(Builtin::u32{ADV_UFCS(_operator_subscript)(Approx1k0s.$ref(), index)}, ((ADV_UFCS(_operator_mul_mod)(Builtin::u32{ADV_UFCS(_operator_subscript)(Approx1k1s.$ref(), index)}, epsilon)) >> Builtin::i32(20)))}; 
			#line 902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			auto esqrtr0 = Builtin::u32{r0} * r0; 
			#line 903 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if (oddExp == Builtin::i32(0)) {
				#line 904 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				esqrtr0 <<= Builtin::i32(1);
			}
			#line 907 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			const auto sigma0 = ADV_UFCS(_operator_not)(ADV_UFCS(NarrowToUInt32)(((ADV_UFCS(_operator_mul_mod)(Builtin::u64{esqrtr0}, a)) >> Builtin::i32(23)).$ref())); 
			#line 908 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			auto r = ADV_UFCS(NarrowToUInt32)((ADV_UFCS(_operator_add_mod)((Builtin::u32{r0} << Builtin::i32(16)), ((ADV_UFCS(_operator_mul_mod)(Builtin::u64{r0}, sigma0)) >> Builtin::i32(25)))).$ref()); 
			#line 909 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			const auto sqrSigma0 = ADV_UFCS(NarrowToUInt32)(((ADV_UFCS(_operator_mul_mod)(Builtin::u64{sigma0}, sigma0)) >> Builtin::i32(32)).$ref()); 
			#line 910 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			ADV_UFCS(_operator_add_mod_eq)(r, ADV_UFCS(NarrowToUInt32)(((ADV_UFCS(_operator_mul_mod)(Builtin::u64{ADV_UFCS(_operator_sub_mod)(ADV_UFCS(_operator_add_mod)((r >> Builtin::i32(1)), (r >> Builtin::i32(3))), (Builtin::u32{r0} << Builtin::i32(14)))}, sqrSigma0)) >> Builtin::i32(48)).$ref()));
			#line 911 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if ((r & Builtin::u32(0x80000000U)) == Builtin::i32(0)) {
				#line 912 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				r = Builtin::u32(0x80000000U);
			}
			#line 915 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return r;
		}(ADV_UFCS(NarrowToUInt32)(exp.$ref()), sig32); 
		#line 918 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(Builtin::u32{(ADV_UFCS(_operator_mul_mod)(Builtin::u64{sig32}, recip)) >> Builtin::i32(32)})> resultSig32 = Builtin::u32{(ADV_UFCS(_operator_mul_mod)(Builtin::u64{sig32}, recip)) >> Builtin::i32(32)}; 
		#line 919 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::u128 rem{}; 
		#line 920 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (exp != Builtin::i32(0)) {
			#line 921 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			resultSig32 >>= Builtin::i32(1);
			#line 922 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			rem = sig << Builtin::i32(12);
		} else {
			#line 923 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			{
				#line 924 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				rem = sig << Builtin::i32(13);
			}
		}
		#line 926 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::InlineArray<Builtin::i32(3), Builtin::u32> qs = Builtin::InitializerList({Builtin::u32(Builtin::u32(0U)), Builtin::u32(Builtin::u32(0U)), Builtin::u32(resultSig32)}); 
		#line 927 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_UFCS(_operator_sub_mod_eq)(rem, Builtin::u128{Builtin::u64{resultSig32} * resultSig32, Builtin::u32(0U)});
		#line 929 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(Builtin::u32{(ADV_UFCS(_operator_mul_mod)(Builtin::u64{ADV_UFCS(NarrowToUInt32)((rem >> Builtin::i32(66)).$ref())}, recip)) >> Builtin::i32(32)})> q = Builtin::u32{(ADV_UFCS(_operator_mul_mod)(Builtin::u64{ADV_UFCS(NarrowToUInt32)((rem >> Builtin::i32(66)).$ref())}, recip)) >> Builtin::i32(32)}; 
		#line 930 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const Builtin::Auto<decltype(Builtin::u64{resultSig32} << Builtin::i32(32))> x64 = Builtin::u64{resultSig32} << Builtin::i32(32); 
		#line 931 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(ADV_UFCS(_operator_add_mod)(x64, (Builtin::u64{q} << Builtin::i32(3))))> resultSig64 = ADV_UFCS(_operator_add_mod)(x64, (Builtin::u64{q} << Builtin::i32(3))); 
		#line 932 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(rem << Builtin::i32(29))> y = rem << Builtin::i32(29); 
		#line 934 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::u128 term{}; 
		#line 935 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(ADV_UFCS(_operator_add_mod)(x64, resultSig64))> a = ADV_UFCS(_operator_add_mod)(x64, resultSig64); 
		#line 936 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		for (;;) 
		{
			#line 937 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(Builtin::u64{ADV_UFCS(NarrowToUInt32)(a.$ref())}, q))> mid = ADV_UFCS(_operator_mul_mod)(Builtin::u64{ADV_UFCS(NarrowToUInt32)(a.$ref())}, q); 
			#line 938 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			term = Builtin::u128{ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_mul_mod)(Builtin::u64{ADV_UFCS(NarrowToUInt32)((a >> Builtin::i32(32)).$ref())}, q), (mid >> Builtin::i32(32))), mid << Builtin::i32(32)};
			#line 939 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			rem = ADV_UFCS(_operator_sub_mod)(y, term);
			#line 940 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if ((ADV_UFCS(High64)(rem.$ref()) & Builtin::u64(0x8000000000000000ULL)) == Builtin::u32(0U)) {
				#line 941 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				break;
			}
			#line 943 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			ADV_UFCS(_operator_sub_sub_mod)(q);
			#line 944 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			ADV_UFCS(_operator_sub_mod_eq)(resultSig64, (Builtin::i32(1) << Builtin::i32(3)));
		}
		#line 946 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_UFCS(_operator_subscript)(qs.$ref(), Builtin::i32(1)) = q;
		#line 947 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		q = Builtin::u32{(ADV_UFCS(_operator_mul_mod)(Builtin::u64{rem >> Builtin::i32(66)}, recip)) >> Builtin::i32(32)};
		#line 948 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		y = rem << Builtin::i32(29);
		#line 949 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		resultSig64 <<= Builtin::i32(1);
		#line 951 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		for (;;) 
		{
			#line 952 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			term = Builtin::u128{resultSig64} << Builtin::i32(32);
			#line 953 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			ADV_UFCS(_operator_add_mod_eq)(term, Builtin::u64{q} << Builtin::i32(6));
			#line 954 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			ADV_UFCS(_operator_mul_mod_eq)(term, q);
			#line 955 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			rem = ADV_UFCS(_operator_sub_mod)(y, term);
			#line 956 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if ((ADV_UFCS(High64)(rem.$ref()) & Builtin::u64(0x8000000000000000ULL)) == Builtin::u32(0U)) {
				#line 957 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				break;
			}
			#line 959 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			ADV_UFCS(_operator_sub_sub_mod)(q);
		}
		#line 961 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_UFCS(_operator_subscript)(qs.$ref(), Builtin::i32(0)) = q;
		#line 962 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		q = Builtin::u32{ADV_UFCS(_operator_add_mod)(((ADV_UFCS(_operator_mul_mod)(Builtin::u64{rem >> Builtin::i32(66)}, recip)) >> Builtin::i32(32)), Builtin::i32(2))};
		#line 963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(Builtin::u64{q} << Builtin::i32(59))> resultSigExtra = Builtin::u64{q} << Builtin::i32(59); 
		#line 964 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		term = Builtin::u128{ADV_UFCS(_operator_subscript)(qs.$ref(), Builtin::i32(1))} << Builtin::i32(53);
		#line 965 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(ADV_UFCS(_operator_add_mod)(Builtin::u128{Builtin::u64{ADV_UFCS(_operator_subscript)(qs.$ref(), Builtin::i32(2))} << Builtin::i32(18), (Builtin::u64{ADV_UFCS(_operator_subscript)(qs.$ref(), Builtin::i32(0))} << Builtin::i32(24)) + (q >> Builtin::i32(5))}, term))> resultSig = ADV_UFCS(_operator_add_mod)(Builtin::u128{Builtin::u64{ADV_UFCS(_operator_subscript)(qs.$ref(), Builtin::i32(2))} << Builtin::i32(18), (Builtin::u64{ADV_UFCS(_operator_subscript)(qs.$ref(), Builtin::i32(0))} << Builtin::i32(24)) + (q >> Builtin::i32(5))}, term); 
		#line 967 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (((q & Builtin::i32(0xF)) <=> Builtin::i32(2)) <= 0) {
			#line 968 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			q &= ADV_UFCS(_operator_not)(Builtin::u32(3U));
			#line 969 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			resultSigExtra = Builtin::u64{q} << Builtin::i32(59);
			#line 970 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			y = resultSig << Builtin::i32(6);
			#line 971 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			y |= resultSigExtra >> Builtin::i32(58);
			#line 972 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			term = ADV_UFCS(_operator_sub_mod)(y, q);
			#line 973 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			a = ADV_UFCS(Low64)(term.$ref());
			#line 974 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(Builtin::u64{ADV_UFCS(NarrowToUInt32)(a.$ref())}, q))> mid = ADV_UFCS(_operator_mul_mod)(Builtin::u64{ADV_UFCS(NarrowToUInt32)(a.$ref())}, q); 
			#line 975 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			y = Builtin::u128{ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_mul_mod)(Builtin::u64{ADV_UFCS(NarrowToUInt32)((a >> Builtin::i32(32)).$ref())}, q), (mid >> Builtin::i32(32))), mid << Builtin::i32(32)};
			#line 976 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			a = ADV_UFCS(High64)(term.$ref());
			#line 977 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			mid = ADV_UFCS(_operator_mul_mod)(Builtin::u64{ADV_UFCS(NarrowToUInt32)(a.$ref())}, q);
			#line 978 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			term = Builtin::u128{ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_mul_mod)(Builtin::u64{ADV_UFCS(NarrowToUInt32)((a >> Builtin::i32(32)).$ref())}, q), (mid >> Builtin::i32(32))), mid << Builtin::i32(32)};
			#line 979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			ADV_UFCS(_operator_add_mod_eq)(term, ADV_UFCS(High64)(y.$ref()));
			#line 980 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			rem <<= Builtin::i32(20);
			#line 981 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			ADV_UFCS(_operator_sub_mod_eq)(term, rem);
			#line 983 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if ((ADV_UFCS(High64)(term.$ref()) & Builtin::u64(0x8000000000000000ULL)) != Builtin::u32(0U)) {
				#line 984 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				resultSigExtra |= Builtin::u32(1U);
			} else {
				#line 985 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				{
					#line 986 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					ADV_UFCS(_operator_sub_sub_mod)(resultSig);
					#line 987 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					resultSigExtra = ADV_USPCS(MaxValue, Builtin::u64)();
				}
			}
		}
		#line 991 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return ADV_USFCS((Builtin::f128), FromBits)(RoundPackBits(Builtin::Boolean(false), resultExp, resultSig, resultSigExtra));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 994 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getCbrt($extension_Float128_831_f128 const & $this ) -> const $extension_Float128_831_f128
	{
		#line 996 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		constexpr Builtin::Auto<decltype(Builtin::u32(709958130U))> B1 = Builtin::u32(709958130U);
		#line 997 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(ADV_UFCS(NarrowToInt32)(__Float128$Protected::BiasedExponent($this).$ref()))> e = ADV_UFCS(NarrowToInt32)(__Float128$Protected::BiasedExponent($this).$ref()); 
		#line 998 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const Builtin::i32 sign = ADV_UPCS(IsNegative)($this.$ref()) ? Builtin::i32(1) << Builtin::i32(15) : Builtin::i32(0); 
		#line 999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype($this)> u = $this; 
		#line 1004 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (e == Builtin::i32(0x7FFF)) {
			#line 1005 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return $this;
		}
		#line 1007 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (e == Builtin::i32(0)) {
			#line 1009 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			u *= ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x40770000000000000000000000000000"));
			#line 1010 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			e = ADV_UFCS(NarrowToInt32)(__Float128$Protected::BiasedExponent(u).$ref());
			#line 1013 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if (e == Builtin::i32(0)) {
				#line 1014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				return $this;
			}
			#line 1016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			e -= Builtin::i32(120);
		}
		#line 1019 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		e -= Builtin::i32(0x3FFF);
		#line 1020 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(ADV_USFCS((Builtin::f128), FromBits)(__Float128$Protected::PackBits(Builtin::Boolean(false), Builtin::u16(0x3FFFU), __Float128$Protected::TrailingSignificand(u))))> x = ADV_USFCS((Builtin::f128), FromBits)(__Float128$Protected::PackBits(Builtin::Boolean(false), Builtin::u16(0x3FFFU), __Float128$Protected::TrailingSignificand(u))); 
		#line 1022 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		{
			#line 1023 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			auto __tmp__valid_1022 = Builtin::Cast<false, std::decay_t<decltype(e % Builtin::i32(3))>::$self>(e % Builtin::i32(3));
			#line 1023 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if(__tmp__valid_1022.IsValid() && Builtin::Is(*__tmp__valid_1022, Builtin::i32(1)) || Builtin::Is(*__tmp__valid_1022, Builtin::i32(-2)))  {
				#line 1023 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				{
					#line 1024 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					x *= Builtin::i32(2);
					#line 1025 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					e--;
				}
			}
			else {
				#line 1027 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if(__tmp__valid_1022.IsValid() && Builtin::Is(*__tmp__valid_1022, Builtin::i32(2)) || Builtin::Is(*__tmp__valid_1022, Builtin::i32(-1)))  {
					#line 1027 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					{
						#line 1028 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						x *= Builtin::i32(4);
						#line 1029 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						e -= Builtin::i32(2);
					}
				}
				 else { using __switchType = decltype(e % Builtin::i32(3)); static_assert((!std::derived_from<__switchType, Builtin::Enum> && !std::derived_from<__switchType, Builtin::EnumClassRef> && !std::derived_from<__switchType, Builtin::Union>) || Builtin::GetVariantsCount<__switchType>() <= 0, "Switch does not handle all possible variants, add a default branch"); }
			}
		}

		#line 1033 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const Builtin::Auto<decltype(ADV_USFCS((Builtin::f128), FromBits)(Builtin::u128{Builtin::u64{sign | (Builtin::i32(0x3FFF) + ADV_UFCS(_operator_bsl)(e, Builtin::i32(3)))} << Builtin::i32(48), Builtin::u32(0U)}))> v = ADV_USFCS((Builtin::f128), FromBits)(Builtin::u128{Builtin::u64{sign | (Builtin::i32(0x3FFF) + ADV_UFCS(_operator_bsl)(e, Builtin::i32(3)))} << Builtin::i32(48), Builtin::u32(0U)}); 
		#line 1034 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const Builtin::Auto<decltype(ADV_USFCS((Builtin::f32), FromBits)(ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_bsl)((ADV_UPCS(Bits)(ADV_UFCS(ToFloat32)(x.$ref()).$ref()) & Builtin::u32(0x7FFFFFFFU)), Builtin::i32(3)), B1)))> ft = ADV_USFCS((Builtin::f32), FromBits)(ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_bsl)((ADV_UPCS(Bits)(ADV_UFCS(ToFloat32)(x.$ref()).$ref()) & Builtin::u32(0x7FFFFFFFU)), Builtin::i32(3)), B1)); 
		#line 1035 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const Builtin::Auto<decltype(ADV_UFCS(ToFloat64)(x.$ref()))> dx = ADV_UFCS(ToFloat64)(x.$ref()); 
		#line 1037 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::f64 dt = ft; 
		#line 1038 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(dt * dt * dt)> dr = dt * dt * dt; 
		#line 1039 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		dt = dt * (dx + dx + dr) / (dx + dr + dr);
		#line 1040 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		dr = dt * dt * dt;
		#line 1041 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		dt = dt * (dx + dx + dr) / (dx + dr + dr);
		#line 1043 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(Builtin::f128{dt} + ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FD20000000000000000000000000000")) + ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x403B0000000000000000000000000000")) - ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x403B0000000000000000000000000000")))> t = Builtin::f128{dt} + ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FD20000000000000000000000000000")) + ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x403B0000000000000000000000000000")) - ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x403B0000000000000000000000000000")); 
		#line 1047 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const Builtin::Auto<decltype(t * t)> s = t * t; 
		#line 1048 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(x / s)> r = x / s; 
		#line 1049 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const Builtin::Auto<decltype(t + t)> w = t + t; 
		#line 1050 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		r = (r - t) / (w + r);
		#line 1051 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		t = t + t * r;
		#line 1052 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return t * v;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getSin($extension_Float128_1182_f128 const & $this ) -> const $extension_Float128_1182_f128
	{
		#line 1185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return SinImpl($this);
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getCos($extension_Float128_1182_f128 const & $this ) -> const $extension_Float128_1182_f128
	{
		#line 1189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return CosImpl($this);
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getTan($extension_Float128_1182_f128 const & $this ) -> const $extension_Float128_1182_f128
	{
		#line 1193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return TanImpl($this);
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getAsin($extension_Float128_1182_f128 const & $this ) -> const $extension_Float128_1182_f128
	{
		#line 1203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return AsinImpl($this);
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getAcos($extension_Float128_1182_f128 const & $this ) -> const $extension_Float128_1182_f128
	{
		#line 1207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return AcosImpl($this);
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getAtan($extension_Float128_1182_f128 const & $this ) -> const $extension_Float128_1182_f128
	{
		#line 1211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return AtanImpl($this);
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getAcot($extension_Float128_1182_f128 const & $this ) -> const $extension_Float128_1182_f128
	{
		#line 1215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return AtanImpl(ADV_UPCS(ReciprocalEstimate)($this.$ref()));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getAsec($extension_Float128_1182_f128 const & $this ) -> const $extension_Float128_1182_f128
	{
		#line 1219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return AcosImpl(ADV_UPCS(ReciprocalEstimate)($this.$ref()));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getAcsc($extension_Float128_1182_f128 const & $this ) -> const $extension_Float128_1182_f128
	{
		#line 1223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return AsinImpl(ADV_UPCS(ReciprocalEstimate)($this.$ref()));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getSinCos($extension_Float128_1182_f128 const & $this ) -> const Builtin::Tuple<$extension_Float128_1182_f128, $extension_Float128_1182_f128>
	{
		#line 1227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return SinCosImpl($this);
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getSinPi($extension_Float128_1182_f128 const & $this ) -> const $extension_Float128_1182_f128
	{
		#line 1231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return SinPiImpl($this);
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getCosPi($extension_Float128_1182_f128 const & $this ) -> const $extension_Float128_1182_f128
	{
		#line 1235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return CosPiImpl($this);
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getSinCosPi($extension_Float128_1182_f128 const & $this ) -> const Builtin::Tuple<$extension_Float128_1182_f128, $extension_Float128_1182_f128>
	{
		#line 1240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return Builtin::MakeTuple(SinPiImpl($this), CosPiImpl($this));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getTanPi($extension_Float128_1182_f128 const & $this ) -> const $extension_Float128_1182_f128
	{
		#line 1244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return TanPiImpl($this);
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getAcosh($extension_Float128_1271_f128 const & $this ) -> const $extension_Float128_1271_f128
	{
		#line 1275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const Builtin::Auto<decltype(__Float128$Protected::BiasedExponent($this))> exp = __Float128$Protected::BiasedExponent($this); 
		#line 1277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((exp <=> Builtin::i32(0x3FFF)) < 0 || (exp & Builtin::i32(0x8000)) != Builtin::i32(0)) {
			#line 1278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return ADV_USPCS(NaN, $extension_Float128_1271_f128)();
		} else {
			#line 1280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if ((exp <=> Builtin::i32(0x401D)) >= 0) {
				#line 1281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if ((exp <=> __Float128$Protected::MaxBiasedExponent) >= 0) {
					#line 1282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					return $this;
				} else {
					#line 1283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					{
						#line 1284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						return ADV_UPCS(Ln)($this.$ref()) + ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFE62E42FEFA39EF357ADEBB905E4BD"));
					}
				}
			} else {
				#line 1286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if ($this == ADV_USPCS(One, $extension_Float128_1271_f128)()) {
					#line 1287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					return Builtin::i32(0);
				} else {
					#line 1290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					if ((exp <=> Builtin::i32(0x4000)) > 0) {
						#line 1291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						return ADV_UPCS(Ln)((Builtin::f128{Builtin::i32(2)} * $this - ADV_USPCS(One, $extension_Float128_1271_f128)() / ($this + ADV_UPCS(Sqrt)(($this * $this - ADV_USPCS(One, $extension_Float128_1271_f128)()).$ref()))).$ref());
					} else {
						#line 1293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						{
							#line 1294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							const Builtin::Auto<decltype($this - ADV_USPCS(One, $extension_Float128_1271_f128)())> t = $this - ADV_USPCS(One, $extension_Float128_1271_f128)(); 
							#line 1295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							return ADV_UPCS(LnP1)((t + ADV_UPCS(Sqrt)((Builtin::f128{Builtin::i32(2)} * t + t * t).$ref())).$ref());
						}
					}
				}
			}
		}
		return {};
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getAsinh($extension_Float128_1271_f128 const & $this ) -> const $extension_Float128_1271_f128
	{
		#line 1307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const Builtin::Auto<decltype(__Float128$Protected::BiasedExponent($this))> exp = __Float128$Protected::BiasedExponent($this); 
		#line 1308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const Builtin::Auto<decltype(ADV_UPCS(IsNegative)($this.$ref()))> sign = ADV_UPCS(IsNegative)($this.$ref()); 
		#line 1309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(ADV_UPCS(Abs)($this.$ref()))> x = ADV_UPCS(Abs)($this.$ref()); 
		#line 1312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((exp <=> Builtin::i32(0x401F)) >= 0) {
			#line 1313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			x = ADV_UPCS(Ln)(x.$ref()) + ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFE62E42FEFA39EF35793C7673007E6"));
		} else {
			#line 1315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if ((exp <=> Builtin::i32(0x4000)) >= 0) {
				#line 1316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				x = ADV_UPCS(Ln)((Builtin::f128{Builtin::i32(2)} * x + ADV_USPCS(One, $extension_Float128_1271_f128)() / (ADV_UPCS(Sqrt)((x * x + ADV_USPCS(One, $extension_Float128_1271_f128)()).$ref())) + x).$ref());
			} else {
				#line 1318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if ((exp <=> Builtin::i32(0x3FDF)) >= 0) {
					#line 1319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					x = ADV_UPCS(LnP1)((x + x * x / (ADV_UPCS(Sqrt)((x * x + ADV_USPCS(One, $extension_Float128_1271_f128)()).$ref()) + ADV_USPCS(One, $extension_Float128_1271_f128)())).$ref());
				}
			}
		}
		#line 1322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return sign ? -x : x;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getAtanh($extension_Float128_1271_f128 const & $this ) -> const $extension_Float128_1271_f128
	{
		#line 1327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const Builtin::Auto<decltype(__Float128$Protected::BiasedExponent($this))> exp = __Float128$Protected::BiasedExponent($this); 
		#line 1328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const Builtin::Auto<decltype(ADV_UPCS(IsNegative)($this.$ref()))> sign = ADV_UPCS(IsNegative)($this.$ref()); 
		#line 1329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(ADV_UPCS(Abs)($this.$ref()))> x = ADV_UPCS(Abs)($this.$ref()); 
		#line 1331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((exp <=> Builtin::i32(0x3FF) - Builtin::i32(1)) < 0) {
			#line 1332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if ((exp <=> Builtin::i32(0x3FF) - ADV_UFCS(_operator_bsl)(Builtin::i32(113), Builtin::i32(2))) >= 0) {
				#line 1333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				x = Builtin::f128{Builtin::f64(0.5)} * ADV_UPCS(LnP1)((Builtin::f128{Builtin::i32(2)} * x + Builtin::f128{Builtin::i32(2)} * x * x / (ADV_USPCS(One, $extension_Float128_1271_f128)() - x)).$ref());
			}
		} else {
			#line 1335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			{
				#line 1336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				x = Builtin::f128{Builtin::f64(0.5)} * ADV_UPCS(LnP1)((Builtin::f128{Builtin::i32(2)} * (x / (ADV_USPCS(One, $extension_Float128_1271_f128)() - x))).$ref());
			}
		}
		#line 1339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return sign ? -x : x;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getCosh($extension_Float128_1271_f128 const & $this ) -> const $extension_Float128_1271_f128
	{
		#line 1344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const Builtin::Auto<decltype(__Float128$Protected::BiasedExponent($this))> exp = __Float128$Protected::BiasedExponent($this); 
		#line 1345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Abs)($this.$ref()))> x = ADV_UPCS(Abs)($this.$ref()); 
		#line 1346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::f128 t{}; 
		#line 1348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((exp <=> Builtin::i32(0x3FFF) - Builtin::i32(1)) < 0 || (x <=> ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFE62E42FEFA39EF35793C7673007E6"))) < 0) {
			#line 1349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if ((exp <=> Builtin::i32(0x3FFF) - Builtin::i32(32)) < 0) {
				#line 1350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				return ADV_USPCS(One, $extension_Float128_1271_f128)();
			}
			#line 1353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			t = ADV_UPCS(ExpM1)(x.$ref());
			#line 1354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return ADV_USPCS(One, $extension_Float128_1271_f128)() + t * t / (Builtin::f128{Builtin::i32(2)} * (ADV_USPCS(One, $extension_Float128_1271_f128)() + t));
		}
		#line 1357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((exp <=> Builtin::i32(0x3FFF) + Builtin::i32(13)) < 0 || (x <=> ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x400C62E42FEFA39EF35793C7673007E6"))) < 0) {
			#line 1358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			t = ADV_UPCS(Exp)(x.$ref());
			#line 1359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return Builtin::f128{Builtin::f64(0.5)} * (t + ADV_UPCS(ReciprocalEstimate)(t.$ref()));
		}
		#line 1362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		t = ADV_UPCS(Exp)((Builtin::f128{Builtin::f64(0.5)} * x).$ref());
		#line 1363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return Builtin::f128{Builtin::f64(0.5)} * t * t;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getSinh($extension_Float128_1271_f128 const & $this ) -> const $extension_Float128_1271_f128
	{
		#line 1374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const Builtin::Auto<decltype(__Float128$Protected::BiasedExponent($this))> exp = __Float128$Protected::BiasedExponent($this); 
		#line 1375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(Builtin::f128{Builtin::f64(0.5)})> h = Builtin::f128{Builtin::f64(0.5)}; 
		#line 1376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::f128 t{}; 
		#line 1378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (ADV_UPCS(IsNegative)($this.$ref())) {
			#line 1379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			h = -h;
		}
		#line 1382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Abs)($this.$ref()))> ax = ADV_UPCS(Abs)($this.$ref()); 
		#line 1384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((ax <=> ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x400C62E42FEFA39EF35793C7673007E6"))) < 0) {
			#line 1385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			t = ADV_UPCS(ExpM1)(ax.$ref());
			#line 1386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if ((exp <=> Builtin::i32(0x3FFF)) < 0) {
				#line 1387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if ((exp <=> Builtin::i32(0x3FFF) - Builtin::i32(32)) < 0) {
					#line 1388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					return $this;
				}
				#line 1390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				return h * (Builtin::f128{Builtin::i32(2)} * t - t * t / (ADV_USPCS(One, $extension_Float128_1271_f128)() + t));
			}
			#line 1392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return h * (t + t / (t + ADV_USPCS(One, $extension_Float128_1271_f128)()));
		}
		#line 1395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		t = ADV_UPCS(Exp)((Builtin::f128{Builtin::f64(0.5)} * ax).$ref());
		#line 1396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return h * t * t;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getTanh($extension_Float128_1271_f128 const & $this ) -> const $extension_Float128_1271_f128
	{
		#line 1401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const Builtin::Auto<decltype(__Float128$Protected::BiasedExponent($this))> exp = __Float128$Protected::BiasedExponent($this); 
		#line 1402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const Builtin::Auto<decltype(ADV_UPCS(IsNegative)($this.$ref()))> sign = ADV_UPCS(IsNegative)($this.$ref()); 
		#line 1403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Abs)($this.$ref()))> x = ADV_UPCS(Abs)($this.$ref()); 
		#line 1404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::f128 t{}; 
		#line 1406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((x <=> ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFE193EA7AAD030A976A4198D55053B"))) > 0) {
			#line 1407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if ((exp <=> Builtin::i32(0x3FFF) + Builtin::i32(5)) >= 0) {
				#line 1408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				t = ADV_USPCS(One, $extension_Float128_1271_f128)();
			} else {
				#line 1409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				{
					#line 1410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					t = ADV_UPCS(ExpM1)((x * Builtin::i32(2)).$ref());
					#line 1411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					t = ADV_USPCS(One, $extension_Float128_1271_f128)() - Builtin::f128{Builtin::i32(2)} / (t + Builtin::f128{Builtin::i32(2)});
				}
			}
		} else {
			#line 1413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if ((x <=> ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFD058AEFA811451A7276BC2F82043B"))) > 0) {
				#line 1414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				t = ADV_UPCS(ExpM1)((x * Builtin::i32(2)).$ref());
				#line 1415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				t = t / (t + Builtin::i32(2));
			} else {
				#line 1416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				{
					#line 1417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					t = ADV_UPCS(ExpM1)((-x * Builtin::i32(2)).$ref());
					#line 1418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					t = -t / (t + Builtin::i32(2));
				}
			}
		}
		#line 1421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return sign ? -t : t;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto Atan2($extension_Float128_1425_f128 const& $this LIFETIMEBOUND, $extension_Float128_1425_f128 y)  -> const typename $extension_Float128_1425_f128
	{
		#line 1435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return Atan2Impl($this, y);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto FusedMultiplyAdd($extension_Float128_1425_f128 const& $this LIFETIMEBOUND, $extension_Float128_1425_f128 rhs, $extension_Float128_1425_f128 addend)  -> const typename $extension_Float128_1425_f128
	{
		#line 1543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Bits)($this.$ref()))> bitsA = ADV_UPCS(Bits)($this.$ref()); 
		#line 1544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const Builtin::Auto<decltype((bitsA & __Float128$Protected::SignMask) != Builtin::i32(0))> signA = (bitsA & __Float128$Protected::SignMask) != Builtin::i32(0); 
		#line 1545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(__Float128$Protected::ExtractBiasedExponentFromBits(bitsA))> expA = __Float128$Protected::ExtractBiasedExponentFromBits(bitsA); 
		#line 1546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(__Float128$Protected::ExtractTrailingSignificandFromBits(bitsA))> sigA = __Float128$Protected::ExtractTrailingSignificandFromBits(bitsA); 
		#line 1548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Bits)(rhs.$ref()))> bitsB = ADV_UPCS(Bits)(rhs.$ref()); 
		#line 1549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const Builtin::Auto<decltype((bitsB & __Float128$Protected::SignMask) != Builtin::i32(0))> signB = (bitsB & __Float128$Protected::SignMask) != Builtin::i32(0); 
		#line 1550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(__Float128$Protected::ExtractBiasedExponentFromBits(bitsB))> expB = __Float128$Protected::ExtractBiasedExponentFromBits(bitsB); 
		#line 1551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(__Float128$Protected::ExtractTrailingSignificandFromBits(bitsB))> sigB = __Float128$Protected::ExtractTrailingSignificandFromBits(bitsB); 
		#line 1553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Bits)(addend.$ref()))> bitsC = ADV_UPCS(Bits)(addend.$ref()); 
		#line 1554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const Builtin::Auto<decltype((bitsC & __Float128$Protected::SignMask) != Builtin::i32(0))> signC = (bitsC & __Float128$Protected::SignMask) != Builtin::i32(0); 
		#line 1555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(__Float128$Protected::ExtractBiasedExponentFromBits(bitsC))> expC = __Float128$Protected::ExtractBiasedExponentFromBits(bitsC); 
		#line 1556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(__Float128$Protected::ExtractTrailingSignificandFromBits(bitsC))> sigC = __Float128$Protected::ExtractTrailingSignificandFromBits(bitsC); 
		#line 1559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::f128 bitsResult{}; 
		#line 1560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::i16 expResult{}; 
		#line 1561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		bool signResult = signA ^ signB; 
		#line 1565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (expA == Builtin::u32(0x7FFFU)) {
			#line 1567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if (sigA != Builtin::i32(0) || (expB == Builtin::u32(0x7FFFU) && sigB != Builtin::i32(0))) {
				#line 1568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				return ADV_USPCS(NaN, $extension_Float128_1425_f128)();
			}
			#line 1572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if ((expB | sigB) != Builtin::i32(0)) {
				#line 1574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if (expC != Builtin::u32(0x7FFFU)) {
					#line 1575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					return signResult ? ADV_USPCS(NegativeInfinity, $extension_Float128_1425_f128)() : ADV_USPCS(PositiveInfinity, $extension_Float128_1425_f128)();
				}
				#line 1578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if (sigC != Builtin::i32(0)) {
					#line 1579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					return ADV_USPCS(NaN, $extension_Float128_1425_f128)();
				}
				#line 1582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if (signResult == signC) {
					#line 1583 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					return signResult ? ADV_USPCS(NegativeInfinity, $extension_Float128_1425_f128)() : ADV_USPCS(PositiveInfinity, $extension_Float128_1425_f128)();
				}
			}
			#line 1587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return ADV_USPCS(NaN, $extension_Float128_1425_f128)();
		}
		#line 1591 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (expB == Builtin::u32(0x7FFFU)) {
			#line 1593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if (sigB != Builtin::i32(0)) {
				#line 1594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				return ADV_USPCS(NaN, $extension_Float128_1425_f128)();
			}
			#line 1598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if ((expA | sigA) != Builtin::i32(0)) {
				#line 1600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if (expC != Builtin::u32(0x7FFFU)) {
					#line 1601 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					return signResult ? ADV_USPCS(NegativeInfinity, $extension_Float128_1425_f128)() : ADV_USPCS(PositiveInfinity, $extension_Float128_1425_f128)();
				}
				#line 1604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if (sigC != Builtin::i32(0)) {
					#line 1605 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					return ADV_USPCS(NaN, $extension_Float128_1425_f128)();
				}
				#line 1608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if (signResult == signC) {
					#line 1609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					return signResult ? ADV_USPCS(NegativeInfinity, $extension_Float128_1425_f128)() : ADV_USPCS(PositiveInfinity, $extension_Float128_1425_f128)();
				}
			}
			#line 1613 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return ADV_USPCS(NaN, $extension_Float128_1425_f128)();
		}
		#line 1617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (expC == Builtin::u32(0x7FFFU)) {
			#line 1619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if (sigC != Builtin::i32(0)) {
				#line 1620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				return ADV_USPCS(NaN, $extension_Float128_1425_f128)();
			}
			#line 1624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return addend;
		}
		#line 1628 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (expA == Builtin::i32(0)) {
			#line 1630 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if (sigA == Builtin::i32(0)) {
				#line 1631 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				return addend;
			}
			#line 1635 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			const Builtin::Auto<decltype(Builtin::i32{ADV_UPCS(LeadingZeroCount)(sigA.$ref())} - Builtin::i32(15))> shift = Builtin::i32{ADV_UPCS(LeadingZeroCount)(sigA.$ref())} - Builtin::i32(15); 
			#line 1636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			expA = ADV_UFCS(NarrowToUInt16)((Builtin::i32(1) - shift).$ref());
			#line 1637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			sigA <<= shift;
		}
		#line 1641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (expB == Builtin::i32(0)) {
			#line 1643 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if (sigB == Builtin::i32(0)) {
				#line 1644 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				return addend;
			}
			#line 1648 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			const Builtin::Auto<decltype(Builtin::i32{ADV_UPCS(LeadingZeroCount)(sigB.$ref())} - Builtin::i32(15))> shift = Builtin::i32{ADV_UPCS(LeadingZeroCount)(sigB.$ref())} - Builtin::i32(15); 
			#line 1649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			expB = ADV_UFCS(NarrowToUInt16)((Builtin::i32(1) - shift).$ref());
			#line 1650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			sigB <<= shift;
		}
		#line 1654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		expResult = ADV_UFCS(_operator_sub_mod)(ADV_UFCS(NarrowToInt16)((ADV_UFCS(_operator_add_mod)(expA, expB)).$ref()), Builtin::i32(0x3FFE));
		#line 1655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		sigA |= __Float128$Protected::HiddenBit;
		#line 1656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		sigB |= __Float128$Protected::HiddenBit;
		#line 1657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		sigA <<= Builtin::i32(8);
		#line 1658 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		sigB <<= Builtin::i32(15);
		#line 1661 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const auto& [mulLow, mulHigh] = ADV_UFCS(_operator_mul_gt)(sigA, sigB);
		#line 1662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(mulHigh)> sigResult = mulHigh; 
		#line 1663 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(Builtin::i32(0))> shiftDist = Builtin::i32(0); 
		#line 1666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((ADV_UFCS(High64)(sigResult.$ref()) & Builtin::i64(0x0100000000000000LL)) == Builtin::i32(0)) {
			#line 1667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			--expResult;
			#line 1668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			shiftDist = Builtin::i32(-1);
		}
		#line 1672 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (expC == Builtin::i32(0)) {
			#line 1674 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if (sigC == Builtin::i32(0)) {
				#line 1675 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				shiftDist += Builtin::i32(8);
				#line 1676 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				const Builtin::Auto<decltype((ADV_UFCS(Low64)(sigResult.$ref()) << (Builtin::i32(64) - shiftDist)) | (mulLow != Builtin::i32(0) ? Builtin::u64(1ULL) : Builtin::u64(0ULL)))> sigExtra = (ADV_UFCS(Low64)(sigResult.$ref()) << (Builtin::i32(64) - shiftDist)) | (mulLow != Builtin::i32(0) ? Builtin::u64(1ULL) : Builtin::u64(0ULL)); 
				#line 1677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				sigResult >>= shiftDist;
				#line 1678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				return ADV_USFCS((Builtin::f128), FromBits)(RoundPackBits(signResult, expResult - Builtin::i32(1), sigResult, sigExtra));
			}
			#line 1682 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			const Builtin::Auto<decltype(Builtin::i32{ADV_UPCS(LeadingZeroCount)(sigC.$ref())} - Builtin::i32(15))> shift = Builtin::i32{ADV_UPCS(LeadingZeroCount)(sigC.$ref())} - Builtin::i32(15); 
			#line 1683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			expC = ADV_UFCS(NarrowToUInt16)((Builtin::i32(1) - shift).$ref());
			#line 1684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			sigC <<= shift;
		}
		#line 1686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		sigC = (sigC | __Float128$Protected::HiddenBit) << Builtin::i32(8);
		#line 1688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const Builtin::Auto<decltype(Builtin::i32{expResult} - expC)> expDiff = Builtin::i32{expResult} - expC; 
		#line 1689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(mulHigh)> high256 = mulHigh; 
		#line 1690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(mulLow)> low256 = mulLow; 
		#line 1691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::u128 cHigh{}, cLow{}; 
		#line 1692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((expDiff <=> Builtin::i32(0)) < 0) {
			#line 1693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			expResult = ADV_UFCS(NarrowToInt16)(expC.$ref());
			#line 1694 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if (signResult == signC || (expDiff <=> Builtin::i32(-1)) < 0) {
				#line 1695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				shiftDist -= expDiff;
				#line 1696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if (shiftDist != Builtin::i32(0)) {
					#line 1697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					sigResult = (shiftDist <=> Builtin::i32(127)) < 0 ? (sigResult >> shiftDist) | (sigResult << ((-shiftDist) & Builtin::i32(127)) != Builtin::i32(0) ? Builtin::u128(1ULL) : Builtin::u128(0ULL)) : (sigResult != Builtin::i32(0) ? Builtin::u128(1ULL) : Builtin::u128(0ULL));
				}
			} else {
				#line 1700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if (shiftDist == Builtin::i32(0)) {
					#line 1701 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					const Builtin::Auto<decltype((low256 >> Builtin::i32(1)) | (sigResult << Builtin::i32(127)))> x128 = (low256 >> Builtin::i32(1)) | (sigResult << Builtin::i32(127)); 
					#line 1702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					sigResult >>= Builtin::i32(1);
					#line 1703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					high256 = sigResult;
					#line 1704 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					low256 = x128;
				}
			}
		} else {
			#line 1706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			{
				#line 1707 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if (shiftDist != Builtin::i32(0)) {
					#line 1708 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					const auto& [r, o] = ADV_UFCS(CarryingAdd)(low256.$ref(), low256, Builtin::Boolean(false));
					#line 1709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					const auto& [r1, __var_1709_24] = ADV_UFCS(CarryingAdd)(high256.$ref(), high256, o);
					#line 1710 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					high256 = r1;
					#line 1711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					low256 = r;
				}
				#line 1713 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if (expDiff == Builtin::i32(0)) {
					#line 1714 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					sigResult = high256;
				} else {
					#line 1715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					{
						#line 1716 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						cHigh = sigC;
						#line 1717 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						cLow = Builtin::u32(0U);
						#line 1718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						if ((expDiff <=> Builtin::i32(255)) < 0) {
							#line 1719 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							Builtin::Auto<decltype(cLow)> tmpCLow = cLow; 
							#line 1720 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							Builtin::Auto<decltype(cHigh)> tmpCHigh = cHigh; 
							#line 1721 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							if ((expDiff <=> Builtin::i32(128)) >= 0) {
								#line 1722 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
								cLow = cHigh >> (expDiff % Builtin::i32(128));
								#line 1723 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
								cHigh = Builtin::u32(0U);
							} else {
								#line 1724 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
								{
									#line 1725 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
									cLow >>= expDiff;
									#line 1726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
									cLow |= (cHigh << (Builtin::i32(128) - expDiff));
									#line 1727 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
									cHigh >>= expDiff;
								}
							}
							#line 1729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							const Builtin::Auto<decltype((-expDiff) & Builtin::i32(255))> shift = (-expDiff) & Builtin::i32(255); 
							#line 1730 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							if ((shift <=> Builtin::i32(128)) > 0) {
								#line 1731 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
								tmpCHigh = tmpCLow << (shift % Builtin::i32(128));
								#line 1732 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
								tmpCLow = Builtin::u32(0U);
							} else {
								#line 1733 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
								{
									#line 1734 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
									tmpCHigh <<= shift;
									#line 1735 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
									tmpCHigh |= (tmpCLow >> (Builtin::i32(128) - shift));
									#line 1736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
									tmpCLow <<= shift;
								}
							}
							#line 1738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							cLow |= Builtin::u128{(tmpCHigh | tmpCLow) != Builtin::i32(0)};
						} else {
							#line 1739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							if ((cHigh | cLow) != Builtin::i32(0)) {
								#line 1740 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
								cHigh = Builtin::u32(0U);
								#line 1741 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
								cLow = Builtin::u32(1U);
							} else {
								#line 1742 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
								{
									#line 1743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
									cHigh = cLow = Builtin::u32(0U);
								}
							}
						}
					}
				}
			}
		}
		#line 1748 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		shiftDist = Builtin::i32(8);
		#line 1749 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::u64 resultExtra{}; 
		#line 1751 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (signResult == signC) {
			#line 1752 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if ((expDiff <=> Builtin::i32(0)) <= 0) {
				#line 1753 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				sigResult += sigC;
			} else {
				#line 1754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				{
					#line 1755 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					const auto& [r, o] = ADV_UFCS(CarryingAdd)(low256.$ref(), cLow, Builtin::Boolean(false));
					#line 1756 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					const auto& [r1, __var_1756_24] = ADV_UFCS(CarryingAdd)(high256.$ref(), cHigh, o);
					#line 1757 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					high256 = r1;
					#line 1758 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					low256 = r;
					#line 1759 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					sigResult = high256;
				}
			}
			#line 1762 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if ((ADV_UFCS(High64)(sigResult.$ref()) & Builtin::u64(0x0200000000000000ULL)) != Builtin::i32(0)) {
				#line 1763 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				++expResult;
				#line 1764 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				shiftDist = Builtin::i32(9);
			}
		} else {
			#line 1766 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			{
				#line 1767 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if ((expDiff <=> Builtin::i32(0)) < 0) {
					#line 1768 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					signResult = signC;
					#line 1769 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					if ((expDiff <=> Builtin::i32(-1)) < 0) {
						#line 1770 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						sigResult = ADV_UFCS(_operator_sub_mod)(sigC, sigResult);
						#line 1771 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						resultExtra = ADV_UFCS(High64)(low256.$ref()) | ADV_UFCS(Low64)(high256.$ref());
						#line 1772 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						if (resultExtra != Builtin::i32(0)) {
							#line 1773 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							ADV_UFCS(_operator_sub_sub_mod)(sigResult);
						}
						#line 1775 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						if ((ADV_UFCS(High64)(sigResult.$ref()) & Builtin::i64(0x0100000000000000LL)) == Builtin::i32(0)) {
							#line 1776 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							--expResult;
							#line 1777 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							shiftDist = Builtin::i32(7);
						}
						#line 1780 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						resultExtra = (ADV_UFCS(Low64)(sigResult.$ref()) << (Builtin::i32(64) - shiftDist)) | (resultExtra != Builtin::i32(0) ? Builtin::u64(1ULL) : Builtin::u64(0ULL));
						#line 1781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						sigResult >>= shiftDist;
						#line 1782 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						return ADV_USFCS((Builtin::f128), FromBits)(RoundPackBits(signResult, expResult - Builtin::i32(1), sigResult, resultExtra));
					} else {
						#line 1783 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						{
							#line 1784 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							cHigh = sigC;
							#line 1785 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							cLow = Builtin::u32(0U);
							#line 1786 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							const auto& [r, o] = ADV_UFCS(BorrowingSub)(cLow.$ref(), low256, Builtin::Boolean(false));
							#line 1787 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							const auto& [r1, __var_1787_28] = ADV_UFCS(BorrowingSub)(cHigh.$ref(), high256, o);
							#line 1788 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							high256 = r1;
							#line 1789 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							low256 = r;
						}
					}
				} else {
					#line 1791 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					if (expDiff != Builtin::i32(0)) {
						#line 1792 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						ADV_UFCS(_operator_sub_mod_eq)(sigResult, sigC);
						#line 1793 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						if (sigResult == Builtin::i32(0) && low256 == Builtin::i32(0)) {
							#line 1794 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							return Builtin::i32(0);
						}
						#line 1797 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						high256 = sigResult;
						#line 1798 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						if ((ADV_UFCS(High64)(sigResult.$ref()) & Builtin::ParseInt128("0x8000000000000000")) != Builtin::i32(0)) {
							#line 1799 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							signResult = !signResult;
							#line 1800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							high256 ^= __Float128$Protected::SignMask;
						}
					} else {
						#line 1802 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						{
							#line 1803 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							const auto& [r, o] = ADV_UFCS(BorrowingSub)(low256.$ref(), cLow, Builtin::Boolean(false));
							#line 1804 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							const auto& [r1, __var_1804_24] = ADV_UFCS(BorrowingSub)(high256.$ref(), cHigh, o);
							#line 1805 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							high256 = r1;
							#line 1806 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							low256 = r;
							#line 1808 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							if ((expDiff <=> Builtin::i32(1)) > 0) {
								#line 1809 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
								sigResult = high256;
								#line 1810 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
								if ((ADV_UFCS(High64)(sigResult.$ref()) & Builtin::u64(0x0100000000000000ULL)) == Builtin::i32(0)) {
									#line 1811 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
									--expResult;
									#line 1812 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
									shiftDist = Builtin::i32(7);
								}
								#line 1814 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
								resultExtra = (ADV_UFCS(Low64)(sigResult.$ref()) << (Builtin::i32(64) - shiftDist)) | (low256 != Builtin::i32(0) ? Builtin::u64(1ULL) : Builtin::u64(0ULL));
								#line 1815 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
								sigResult >>= shiftDist;
								#line 1816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
								return ADV_USFCS((Builtin::f128), FromBits)(RoundPackBits(signResult, expResult - Builtin::i32(1), sigResult, resultExtra));
							}
						}
					}
				}
				#line 1820 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				sigResult = high256;
				#line 1821 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				resultExtra = ADV_UFCS(High64)(low256.$ref());
				#line 1822 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				const Builtin::Auto<decltype(ADV_UFCS(Low64)(low256.$ref()))> low0 = ADV_UFCS(Low64)(low256.$ref()); 
				#line 1823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if (ADV_UFCS(High64)(sigResult.$ref()) != Builtin::i32(0)) {
					#line 1824 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					if (low0 != Builtin::i32(0)) {
						#line 1825 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						resultExtra |= Builtin::u32(1U);
					}
				} else {
					#line 1827 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					{
						#line 1828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						expResult -= Builtin::i32(64);
						#line 1829 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						sigResult = Builtin::u128{ADV_UFCS(Low64)(sigResult.$ref()), resultExtra};
						#line 1830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						resultExtra = low0;
						#line 1831 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						if (ADV_UFCS(High64)(sigResult.$ref()) == Builtin::i32(0)) {
							#line 1832 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							expResult -= Builtin::i32(64);
							#line 1833 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							sigResult = Builtin::u128{low0, Builtin::u32(0U)};
						}
					}
				}
				#line 1837 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				shiftDist = Builtin::Cast<true, Builtin::i32>(ADV_UPCS(LeadingZeroCount)(ADV_UFCS(High64)(sigResult.$ref()).$ref()));
				#line 1838 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				expResult += Builtin::i32(7) - shiftDist;
				#line 1839 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				shiftDist = Builtin::i32(15) - shiftDist;
				#line 1840 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if ((shiftDist <=> Builtin::i32(0)) > 0) {
					#line 1841 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					resultExtra = (ADV_UFCS(Low64)(sigResult.$ref()) << (Builtin::i32(64) - shiftDist)) | (low256 != Builtin::i32(0) ? Builtin::u64(1ULL) : Builtin::u64(0ULL));
					#line 1842 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					sigResult >>= shiftDist;
					#line 1843 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					return ADV_USFCS((Builtin::f128), FromBits)(RoundPackBits(signResult, expResult - Builtin::i32(1), sigResult, resultExtra));
				}
				#line 1845 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if (shiftDist != Builtin::i32(0)) {
					#line 1846 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					shiftDist = -shiftDist;
					#line 1847 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					sigResult <<= shiftDist;
					#line 1848 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					const Builtin::Auto<decltype(Builtin::u128{resultExtra} << shiftDist)> shifted = Builtin::u128{resultExtra} << shiftDist; 
					#line 1849 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					const Builtin::Auto<decltype(ADV_UFCS(High64)(shifted.$ref()))> x64 = ADV_UFCS(High64)(shifted.$ref()); 
					#line 1850 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					resultExtra = ADV_UFCS(Low64)(shifted.$ref());
					#line 1851 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					sigResult |= x64;
				}
				#line 1853 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				return ADV_USFCS((Builtin::f128), FromBits)(RoundPackBits(signResult, expResult - Builtin::i32(1), sigResult, resultExtra));
			}
		}
		#line 1856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		resultExtra = (ADV_UFCS(Low64)(sigResult.$ref()) << (Builtin::i32(64) - shiftDist)) | (low256 != Builtin::i32(0) ? Builtin::u64(1ULL) : Builtin::u64(0ULL));
		#line 1857 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		sigResult >>= shiftDist;
		#line 1858 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return ADV_USFCS((Builtin::f128), FromBits)(RoundPackBits(signResult, expResult - Builtin::i32(1), sigResult, resultExtra));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1861 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto Ieee754Remainder($extension_Float128_1425_f128 const& $this LIFETIMEBOUND, $extension_Float128_1425_f128 rhs)  -> const typename $extension_Float128_1425_f128
	{
		#line 1864 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Bits)($this.$ref()))> bitsA = ADV_UPCS(Bits)($this.$ref()); 
		#line 1865 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const Builtin::Auto<decltype((bitsA & __Float128$Protected::SignMask) != Builtin::i32(0))> signA = (bitsA & __Float128$Protected::SignMask) != Builtin::i32(0); 
		#line 1866 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(ADV_UFCS(NarrowToInt16)(__Float128$Protected::ExtractBiasedExponentFromBits(bitsA).$ref()))> expA = ADV_UFCS(NarrowToInt16)(__Float128$Protected::ExtractBiasedExponentFromBits(bitsA).$ref()); 
		#line 1867 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(__Float128$Protected::ExtractTrailingSignificandFromBits(bitsA))> sigA = __Float128$Protected::ExtractTrailingSignificandFromBits(bitsA); 
		#line 1869 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Bits)(rhs.$ref()))> bitsB = ADV_UPCS(Bits)(rhs.$ref()); 
		#line 1870 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(ADV_UFCS(NarrowToInt16)(__Float128$Protected::ExtractBiasedExponentFromBits(bitsB).$ref()))> expB = ADV_UFCS(NarrowToInt16)(__Float128$Protected::ExtractBiasedExponentFromBits(bitsB).$ref()); 
		#line 1871 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(__Float128$Protected::ExtractTrailingSignificandFromBits(bitsB))> sigB = __Float128$Protected::ExtractTrailingSignificandFromBits(bitsB); 
		#line 1877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (expA == Builtin::i32(0x7FFF)) {
			#line 1878 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return ADV_USPCS(NaN, $extension_Float128_1425_f128)();
		}
		#line 1881 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (expB == Builtin::i32(0x7FFF)) {
			#line 1883 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if (sigB != Builtin::i32(0)) {
				#line 1884 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				return ADV_USPCS(NaN, $extension_Float128_1425_f128)();
			}
			#line 1888 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return $this;
		}
		#line 1892 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (expB == Builtin::i32(0)) {
			#line 1894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if (sigB == Builtin::i32(0)) {
				#line 1895 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				return ADV_USPCS(NaN, $extension_Float128_1425_f128)();
			}
			#line 1899 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			const Builtin::Auto<decltype(Builtin::i32{ADV_UPCS(LeadingZeroCount)(sigA.$ref())} - Builtin::i32(15))> shift = Builtin::i32{ADV_UPCS(LeadingZeroCount)(sigA.$ref())} - Builtin::i32(15); 
			#line 1900 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			expA = Builtin::i16(1) - shift;
			#line 1901 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			sigA <<= shift;
		}
		#line 1905 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		sigA |= __Float128$Protected::HiddenBit;
		#line 1906 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		sigB |= __Float128$Protected::HiddenBit;
		#line 1907 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(sigA)> rem = sigA; 
		#line 1908 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::u128 altRem{}; 
		#line 1909 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(Builtin::i32{expA} - expB)> expDiff = Builtin::i32{expA} - expB; 
		#line 1910 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::u32 q{}; 
		#line 1911 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(Builtin::Boolean(false))> selectRem = Builtin::Boolean(false); 
		#line 1912 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((expDiff <=> Builtin::i32(1)) < 0) {
			#line 1914 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if ((expDiff <=> Builtin::i32(-1)) < 0) {
				#line 1915 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				return $this;
			}
			#line 1918 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if (expDiff != Builtin::i32(0)) {
				#line 1919 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				--expB;
				#line 1920 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				ADV_UFCS(_operator_add_mod_eq)(sigB, sigB);
				#line 1921 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				q = Builtin::u32(0U);
			} else {
				#line 1924 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				{
					#line 1925 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					q = Builtin::u32{(sigB <=> rem) <= 0};
					#line 1926 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					if (q != Builtin::i32(0)) {
						#line 1927 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						rem -= sigB;
					}
				}
			}
		} else {
			#line 1930 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			{
				#line 1931 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				const Builtin::Auto<decltype(Builtin::ReciprocalApproximate(ADV_UFCS(NarrowToUInt32)((sigB >> Builtin::i32(81)).$ref())))> recip = Builtin::ReciprocalApproximate(ADV_UFCS(NarrowToUInt32)((sigB >> Builtin::i32(81)).$ref())); 
				#line 1932 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				expDiff -= Builtin::i32(30);
				#line 1933 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				Builtin::u128 term{}; 
				#line 1934 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				Builtin::u64 q64{}; 
				#line 1936 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				for (;;) 
				{
					#line 1937 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					q64 = ADV_UFCS(_operator_mul_mod)(ADV_UFCS(Low64)((rem >> Builtin::i32(83)).$ref()), recip);
					#line 1938 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					if ((expDiff <=> Builtin::i32(0)) < 0) {
						#line 1939 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						break;
					}
					#line 1941 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					q = Builtin::u32{(ADV_UFCS(_operator_add_mod)(q64, Builtin::u32(0x80000000U))) >> Builtin::i32(32)};
					#line 1942 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					rem <<= Builtin::i32(29);
					#line 1943 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					term = ADV_UFCS(_operator_mul_mod)(sigB, q);
					#line 1944 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					ADV_UFCS(_operator_sub_mod_eq)(rem, term);
					#line 1945 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					if ((rem & __Float128$Protected::SignMask) != Builtin::i32(0)) {
						#line 1946 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						ADV_UFCS(_operator_add_mod_eq)(rem, sigB);
					}
					#line 1949 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					expDiff -= Builtin::i32(29);
				}
				#line 1951 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				ADV_ASSERT(((expDiff <=> Builtin::i32(-29)) >= 0), "expDiff>=-29");
				#line 1953 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				q = Builtin::u32{q64 >> Builtin::i32(32)} >> (ADV_UFCS(_operator_not)(expDiff) & Builtin::i32(31));
				#line 1954 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				rem <<= expDiff + Builtin::i32(30);
				#line 1955 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				term = ADV_UFCS(_operator_mul_mod)(sigB, q);
				#line 1956 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				ADV_UFCS(_operator_sub_mod_eq)(rem, term);
				#line 1957 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if ((rem & __Float128$Protected::SignMask) != Builtin::i32(0)) {
					#line 1958 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					altRem = ADV_UFCS(_operator_add_mod)(rem, sigB);
					#line 1959 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					selectRem = Builtin::Boolean(true);
				}
			}
		}
		#line 1963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (!selectRem) {
			#line 1964 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			do 
			#line 1964 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			{
				#line 1965 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				altRem = rem;
				#line 1966 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				++q;
				#line 1967 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				ADV_UFCS(_operator_sub_mod_eq)(rem, sigB);
			} while ((rem & __Float128$Protected::SignMask) == Builtin::i32(0));
		}
		#line 1971 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_add_mod)(rem, altRem))> meanRem = ADV_UFCS(_operator_add_mod)(rem, altRem); 
		#line 1972 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const Builtin::Auto<decltype(q & Builtin::u32(1U))> q1 = q & Builtin::u32(1U); 
		#line 1973 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((meanRem & __Float128$Protected::SignMask) != Builtin::i32(0) || (meanRem == Builtin::i32(0) && q1 != Builtin::i32(0))) {
			#line 1974 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			rem = altRem;
		}
		#line 1976 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype(signA)> signRem = signA; 
		#line 1977 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((rem & __Float128$Protected::SignMask) != Builtin::i32(0)) {
			#line 1978 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			signRem = !signRem;
			#line 1979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			rem = ADV_UFCS(_operator_not)(rem) + Builtin::u32(1U);
		}
		#line 1982 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return ADV_USFCS((Builtin::f128), FromBits)(NormalizeRoundPackBits(signRem, expB - Builtin::i32(1), rem));
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1988 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto ScaleB($extension_Float128_1425_f128 const& $this LIFETIMEBOUND, Builtin::i32 n)  -> const typename $extension_Float128_1425_f128
	{
		#line 1990 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Auto<decltype($this)> x = $this; 
		#line 1992 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((n <=> __Float128$Protected::MaxExponent) > 0) {
			#line 1993 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			constexpr Builtin::Auto<decltype(ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x7FFE0000000000000000000000000000")))> maxExp = ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x7FFE0000000000000000000000000000"));
			#line 1995 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			x *= maxExp;
			#line 1996 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			n -= __Float128$Protected::MaxExponent;
			#line 1997 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if ((n <=> __Float128$Protected::MaxExponent) > 0) {
				#line 1998 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				x *= maxExp;
				#line 1999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				n -= __Float128$Protected::MaxExponent;
				#line 2000 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if ((n <=> __Float128$Protected::MaxExponent) > 0) {
					#line 2001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					n = __Float128$Protected::MaxExponent;
				}
			}
		} else {
			#line 2004 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if ((n <=> __Float128$Protected::MinExponent) < 0) {
				#line 2005 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				constexpr Builtin::Auto<decltype(ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x00010000000000000000000000000000")))> minExp = ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x00010000000000000000000000000000"));
				#line 2006 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				constexpr Builtin::Auto<decltype(ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x40700000000000000000000000000000")))> b113 = ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x40700000000000000000000000000000"));
				#line 2007 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				constexpr Builtin::Auto<decltype(minExp * b113)> scaleb = minExp * b113;
				#line 2009 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				x *= scaleb;
				#line 2010 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				n += -__Float128$Protected::MinExponent - Builtin::i32(113);
				#line 2011 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if ((n <=> __Float128$Protected::MinExponent) < 0) {
					#line 2012 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					x *= scaleb;
					#line 2013 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					n += -__Float128$Protected::MinExponent - Builtin::i32(113);
					#line 2014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					if ((n <=> __Float128$Protected::MinExponent) < 0) {
						#line 2015 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						n = __Float128$Protected::MinExponent;
					}
				}
				#line 2019 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				const Builtin::Auto<decltype($this * ADV_USFCS((Builtin::f128), FromBits)(Builtin::u128{Builtin::u64{Builtin::i32(0x3FFF) + n} << Builtin::i32(48), Builtin::u32(0U)}))> result = $this * ADV_USFCS((Builtin::f128), FromBits)(Builtin::u128{Builtin::u64{Builtin::i32(0x3FFF) + n} << Builtin::i32(48), Builtin::u32(0U)}); 
				#line 2020 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if (ADV_UPCS(IsInfinity)(result.$ref())) {
					#line 2021 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					return ADV_USPCS(Zero, $extension_Float128_1425_f128)();
				}
				#line 2023 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				return result;
			}
		}
		#line 2026 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return $this * ADV_USFCS((Builtin::f128), FromBits)(Builtin::u128{Builtin::u64{Builtin::i32(0x3FFF) + n} << Builtin::i32(48), Builtin::u32(0U)});
	}
	
} namespace System{

}