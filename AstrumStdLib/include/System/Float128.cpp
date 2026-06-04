#include "Float128_Exp.h"
#include "Float128_Log.h"
#include "Float128_Pow.h"
#include "Float128_Trig.h"
#include "Float128.h"

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
namespace __Float128_Protected { extern const decltype(Builtin::u128(1ULL) << __Float128_Protected::BiasedExponentShift) HiddenBit = Builtin::u128(1ULL) << __Float128_Protected::BiasedExponentShift; }

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	




























#line 2063 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto RoundPackBits(bool sign, Builtin::i32 exp, Builtin::u128 sig, Builtin::u64 extra) noexcept -> const Builtin::u128
	{
		#line 2065 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto doIncrement = (extra <=> Builtin::u64(0x8000000000000000ULL)) >= 0; 
		#line 2067 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((ADV_UFCS(NarrowToUInt32)(exp.__ref()) <=> Builtin::u32(0x7FFDU)) >= 0) {
			#line 2068 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if ((exp <=> Builtin::i32(0)) < 0) {
				#line 2069 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				const auto isTiny = ((exp <=> Builtin::i32(-1)) < 0) | !doIncrement | (sig <=> Builtin::ParseUInt128("0x0001FFFFFFFFFFFFFFFFFFFFFFFFFFFF")) < 0; 
				#line 2070 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				const auto dist = -exp; 
				#line 2071 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				const auto negDist = ADV_UFCS(NarrowToUInt32)(exp.__ref()); 
				#line 2073 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				auto tmp = extra; 
				#line 2074 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if ((dist <=> Builtin::i32(64)) < 0) {
					#line 2075 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					sig = Builtin::u128{ADV_UFCS(High64)(sig.__ref()) >> dist, ADV_UFCS(High64)(sig.__ref()) << (negDist & Builtin::i32(63)) | ADV_UFCS(Low64)(sig.__ref()) >> dist};
					#line 2076 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					extra = ADV_UFCS(Low64)(sig.__ref()) << (negDist & Builtin::i32(63));
				} else {
					#line 2077 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					{
						#line 2078 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						Builtin::u64 high{}, low{}; 
						#line 2079 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						if (dist == Builtin::i32(64)) {
							#line 2080 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							low = ADV_UFCS(High64)(sig.__ref());
							#line 2081 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							extra = ADV_UFCS(Low64)(sig.__ref());
						} else {
							#line 2082 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							{
								#line 2083 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
								tmp |= ADV_UFCS(Low64)(sig.__ref());
								#line 2084 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
								if ((dist <=> Builtin::i32(128)) < 0) {
									#line 2085 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
									low = ADV_UFCS(High64)(sig.__ref()) >> (dist & Builtin::i32(63));
									#line 2086 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
									extra = ADV_UFCS(High64)(sig.__ref()) << (negDist & Builtin::i32(63));
								} else {
									#line 2087 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
									{
										#line 2088 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
										low = Builtin::u32(0U);
										#line 2089 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
										extra = dist == Builtin::i32(128) ? ADV_UFCS(High64)(sig.__ref()) : Builtin::u64{ADV_UFCS(High64)(sig.__ref()) != Builtin::i32(0)};
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
					const auto high = (Builtin::u64{sign} << Builtin::i32(63)) | (Builtin::u64(0x7FFFULL) << Builtin::i32(48)); 
					#line 2101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					const auto low = Builtin::u32(0U); 
					#line 2102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					return Builtin::u128{high, low};
				}
			}
		}
		#line 2106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (doIncrement) {
			#line 2107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			const auto sig128 = ADV_UFCS(_operator_add_mod)(sig, Builtin::i32(1)); 
			#line 2108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			sig = sig128 & Builtin::u128{ADV_USPCS(MaxValue, Builtin::u64)(), ADV_UFCS(Low64)(sig128.__ref()) & (ADV_UFCS(_operator_not)(Builtin::u64{(extra & Builtin::u64(0x7FFFFFFFFFFFFFFFULL)) == Builtin::i32(0)}))};
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
		return __Float128_Protected::PackBits(sign, ADV_UFCS(NarrowToUInt16)(exp.__ref()), sig);
	}

#line 2118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	inline auto NormalizeRoundPackBits(bool sign, Builtin::i32 exp, Builtin::u128 sig) noexcept -> const Builtin::u128
	{
		#line 2120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto shift = Builtin::i32{ADV_UPCS(LeadingZeroCount)(sig.__ref()) - Builtin::i32(15)}; 
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
			if ((ADV_UFCS(NarrowToUInt32)(exp.__ref()) <=> Builtin::i32(0x7FFD)) < 0) {
				#line 2129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				return __Float128_Protected::PackBits(sign, sig != Builtin::i32(0) ? ADV_UFCS(NarrowToUInt16)(exp.__ref()) : Builtin::u16(0U), sig);
			}
		} else {
			#line 2131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			{
				#line 2132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				const auto negShift = shift; 
				#line 2133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				shift = -shift;
				#line 2134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				const auto high = ADV_UFCS(High64)(sig.__ref()) >> shift; 
				#line 2135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				const auto low = ADV_UFCS(High64)(sig.__ref()) << (negShift & Builtin::i32(63)) | ADV_UFCS(Low64)(sig.__ref()) >> shift; 
				#line 2136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				extra = ADV_UFCS(Low64)(sig.__ref()) << (negShift & Builtin::i32(63));
				#line 2137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				sig = Builtin::u128{high, low};
			}
		}
		#line 2140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return RoundPackBits(sign, exp, sig, extra);
	}

static_assert(Builtin::usize(sizeof(Builtin::f128)) == Builtin::i32(16), "f128 should be 16 bytes");
static_assert(ADV_USPCS(Pi, Builtin::f128)() == Builtin::ParseFloat128("3.14159265358979323846264338327950288419716939937510582097494"), "f128.Pi should be 3.14159265358979323846264338327950288419716939937510582097494");
static_assert(Builtin::TypeIs<Builtin::f128, IComparable<Builtin::f128>>(), "f128 should implement IComparable<f128>");
static_assert(Builtin::TypeIs<Builtin::f128, IEquatable<Builtin::f128>>(), "f128 should implement IEquatable<f128>");
static_assert(Builtin::TypeIs<Builtin::f128, ISelfComparable>(), "f128 should implement ISelfComparable");
static_assert(Builtin::TypeIs<Builtin::f128, ISelfEquatable>(), "f128 should implement ISelfEquatable");
static_assert(Builtin::TypeIs<Builtin::f128, IAdditionOperators<Builtin::f128, Builtin::f128>>(), "f128 should implement IAdditionOperators<f128, f128>");
static_assert(Builtin::TypeIs<Builtin::f128, ISubtractionOperators<Builtin::f128, Builtin::f128>>(), "f128 should implement ISubtractionOperators<f128, f128>");
static_assert(Builtin::TypeIs<Builtin::f128, IMultiplyOperators<Builtin::f128, Builtin::f128>>(), "f128 should implement IMultiplyOperators<f128, f128>");
static_assert(Builtin::TypeIs<Builtin::f128, IDivisionOperators<Builtin::f128, Builtin::f128>>(), "f128 should implement IDivisionOperators<f128, f128>");
static_assert(Builtin::TypeIs<Builtin::f128, IModulusOperators<Builtin::f128, Builtin::f128>>(), "f128 should implement IModulusOperators<f128, f128>");
static_assert(Builtin::TypeIs<Builtin::f128, IUnaryPlusOperators<Builtin::f128>>(), "f128 should implement IUnaryPlusOperators<f128>");
static_assert(Builtin::TypeIs<Builtin::f128, IUnaryNegationOperators<Builtin::f128>>(), "f128 should implement IUnaryNegationOperators<f128>");
static_assert(Builtin::TypeIs<Builtin::f128, IIncrementOperators<Builtin::f128>>(), "f128 should implement IIncrementOperators<f128>");
static_assert(Builtin::TypeIs<Builtin::f128, IDecrementOperators<Builtin::f128>>(), "f128 should implement IDecrementOperators<f128>");
#ifdef ADV_UNITTEST
	#line 2159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	static bool __Test_f35ecd3810e7db1c = [](){
		#line 2160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::f128 f = Builtin::ParseFloat128("1234.1234"); 
		#line 2161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((f == Builtin::ParseFloat128("1234.1234")), u"f==1234.1234_f128");
		#line 2162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto pi = Builtin::ParseFloat128("3.14159265358979323846264338327950288419716939937510582097494"); 
		#line 2164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((pi == Builtin::ParseFloat128("3.1415926535897932384626433832795028")), u"pi==3.1415926535897932384626433832795028_f128");
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
		ADV_ASSERT(((f <=> Builtin::ParseFloat128("1234.1")) > 0), u"f>1234.1_f128");
		#line 2173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT(((f <=> Builtin::ParseFloat128("1234.5")) < 0), u"f<1234.5_f128");
		#line 2175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((f + Builtin::i32(1) == Builtin::ParseFloat128("1235.1234")), u"f+1==1235.1234_f128");
		#line 2176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((f - Builtin::i32(1) == Builtin::ParseFloat128("1233.1234")), u"f-1==1233.1234_f128");
		#line 2177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((f * Builtin::i32(2) == Builtin::ParseFloat128("2468.2468")), u"f*2==2468.2468_f128");
		#line 2178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto gg = Builtin::ParseFloat128("617.0617"); 
		#line 2179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((f / Builtin::i32(2) == Builtin::ParseFloat128("617.0617")), u"f/2==617.0617_f128");
		#line 2180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((f % Builtin::i32(2) == Builtin::ParseFloat128("0.123400000000000000000000000000080128")), u"f%2==0.123400000000000000000000000000080128_f128");
		#line 2182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		f += Builtin::i32(1);
		#line 2183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((f == Builtin::ParseFloat128("1235.1234")), u"f==1235.1234_f128");
		#line 2184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		f -= Builtin::i32(1);
		#line 2185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((f == Builtin::ParseFloat128("1234.1234")), u"f==1234.1234_f128");
		#line 2186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		f *= Builtin::i32(2);
		#line 2187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((f == Builtin::ParseFloat128("2468.2468")), u"f==2468.2468_f128");
		#line 2188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		f /= Builtin::i32(2);
		#line 2189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((f == Builtin::ParseFloat128("1234.1234")), u"f==1234.1234_f128");
		#line 2190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		f %= Builtin::i32(2);
		#line 2191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((f == Builtin::ParseFloat128("0.123400000000000000000000000000080128")), u"f==0.123400000000000000000000000000080128_f128");
		#line 2193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		f = Builtin::ParseFloat128("1234.1234");
		#line 2194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((f++ == Builtin::ParseFloat128("1234.1234")), u"f++==1234.1234_f128");
		#line 2195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((++f == Builtin::ParseFloat128("1236.1234")), u"++f==1236.1234_f128");
		#line 2196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((f-- == Builtin::ParseFloat128("1236.1234")), u"f--==1236.1234_f128");
		#line 2197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((--f == Builtin::ParseFloat128("1234.1234")), u"--f==1234.1234_f128");
		#line 2199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((+f == Builtin::ParseFloat128("1234.1234")), u"+f==1234.1234_f128");
		#line 2200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((-f == Builtin::ParseFloat128("-1234.1234")), u"-f==-1234.1234_f128");
		#line 2202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Nullable<Builtin::f128> n = nullptr; 
		#line 2203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((n == nullptr), u"n==null");
		#line 2204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((f != n), u"f!=n");
		#line 2205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		n = Builtin::f64(3.1234);
		#line 2206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((n != nullptr), u"n!=null");
		#line 2207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((f != n), u"f!=n");
		#line 2210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::Nullable<Builtin::ObjectRef> o = f; 
		#line 2212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		IComparable<Builtin::f128> icomp = f; 
		#line 2213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT(((icomp <=> (*(n))) > 0), u"icomp>n!");
		#line 2215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(f.__ref()) == Builtin::u64(7090797280142963579ULL)), u"f.HashCode==7090797280142963579u");
		#line 2216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(f) == Builtin::u64(7090797280142963579ULL)), u"#f==7090797280142963579u");
		#line 2218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(ToBoolean)(f.__ref())), u"f.ToBoolean()");
		#line 2219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((!ADV_UFCS(ToBoolean)(Builtin::ParseFloat128("0.0").__ref())), u"!0.0_f128.ToBoolean()");
		#line 2220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(ToInt16)(f.__ref()) == Builtin::i32(1234)), u"f.ToInt16()==1234");
		#line 2221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(ToInt32)(f.__ref()) == Builtin::i32(1234)), u"f.ToInt32()==1234");
		#line 2222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(ToInt64)(f.__ref()) == Builtin::i32(1234)), u"f.ToInt64()==1234");
		#line 2223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(ToInt128)(f.__ref()) == Builtin::i32(1234)), u"f.ToInt128()==1234");
		#line 2224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(ToUsize)(f.__ref()) == Builtin::i32(1234)), u"f.ToUsize()==1234");
		#line 2226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		{
			#line 2227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)(f, Builtin::i32(2));
			#line 2228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			ADV_ASSERT((div == Builtin::ParseFloat128("617.0617") && rem == Builtin::ParseFloat128("0.123400000000000000000000000000080128")), u"div==617.0617f128&&rem==0.123400000000000000000000000000080128_f128");
		}
		#line 2231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor)(f, Builtin::i32(2)) == Builtin::ParseFloat128("1523060.566427560000000000000000000131")), u"f^^2==1523060.566427560000000000000000000131f128");
		#line 2232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor)(f, (Builtin::i32(-2))) == Builtin::ParseFloat128("0.0000006565727076406203619883993228068647")), u"f^^(-2)==0.0000006565727076406203619883993228068647f128");
		#line 2233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_mul)(f, Builtin::i32(2)) == Builtin::ParseFloat128("1523060.566427560000000000000000000131")), u"f**2==1523060.566427560000000000000000000131f128");
		#line 2234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_mul)(f, (Builtin::i32(-2))) == Builtin::ParseFloat128("0.0000006565727076406203619883993228068647")), u"f**(-2)==0.0000006565727076406203619883993228068647f128");
		#line 2235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_mul)(f, Builtin::ParseFloat128("12.34")) == Builtin::ParseInt128("140399306710578886040026538316234981376")), u"f**12.34f128==140399306710578886040026538316234981376");
		#line 2237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(Abs)(f.__ref()) == f), u"f.Abs==f");
		#line 2238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(Abs)(Builtin::ParseFloat128("-1234.1234").__ref()) == Builtin::ParseFloat128("1234.1234")), u"-1234.1234f128.Abs==1234.1234f128");
		#line 2239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(IsCanonical)(f.__ref())), u"f.IsCanonical");
		#line 2240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((!ADV_UPCS(IsComplexNumber)(f.__ref())), u"!f.IsComplexNumber");
		#line 2241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((!ADV_UPCS(IsImaginaryNumber)(f.__ref())), u"!f.IsImaginaryNumber");
		#line 2242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(IsRealNumber)(f.__ref())), u"f.IsRealNumber");
		#line 2243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(IsFinite)(f.__ref())), u"f.IsFinite");
		#line 2244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((!ADV_UPCS(IsInfinity)(f.__ref())), u"!f.IsInfinity");
		#line 2245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((!ADV_UPCS(IsNaN)(f.__ref())), u"!f.IsNaN");
		#line 2246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((!ADV_UPCS(IsNegative)(f.__ref())), u"!f.IsNegative");
		#line 2247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(IsNegative)(Builtin::ParseFloat128("-1234.1234").__ref())), u"-1234.1234f128.IsNegative");
		#line 2248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((!ADV_UPCS(IsNegativeInfinity)(f.__ref())), u"!f.IsNegativeInfinity");
		#line 2249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(IsPositive)(f.__ref())), u"f.IsPositive");
		#line 2250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((!ADV_UPCS(IsPositiveInfinity)(f.__ref())), u"!f.IsPositiveInfinity");
		#line 2251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((!ADV_UPCS(IsSubnormal)(f.__ref())), u"!f.IsSubnormal");
		#line 2252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((!ADV_UPCS(IsZero)(f.__ref())), u"!f.IsZero");
		#line 2253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(IsZero)(Builtin::ParseFloat128("0.0").__ref())), u"0.0f128.IsZero");
		#line 2254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((!ADV_UPCS(IsInteger)(f.__ref())), u"!f.IsInteger");
		#line 2255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((!ADV_UPCS(IsEvenInteger)(f.__ref())), u"!f.IsEvenInteger");
		#line 2256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((!ADV_UPCS(IsOddInteger)(f.__ref())), u"!f.IsOddInteger");
		#line 2257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(IsInteger)(Builtin::ParseFloat128("1.0").__ref())), u"1.0f128.IsInteger");
		#line 2258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(IsOddInteger)(Builtin::ParseFloat128("1.0").__ref())), u"1.0f128.IsOddInteger");
		#line 2259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(IsEvenInteger)(Builtin::ParseFloat128("2.0").__ref())), u"2.0f128.IsEvenInteger");
		#line 2260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(MaxMagnitude)(f.__ref(), Builtin::ParseFloat128("-1235.0")) == Builtin::ParseFloat128("-1235.0")), u"f.MaxMagnitude(-1235.0f128)==-1235.0f128");
		#line 2261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(MinMagnitude)(f.__ref(), Builtin::ParseFloat128("-1235.0")) == Builtin::ParseFloat128("1234.1234")), u"f.MinMagnitude(-1235.0f128)==1234.1234f128");
		#line 2263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(NarrowToInt32)(f.__ref()) == Builtin::i32(1234)), u"f.NarrowToInt32()==1234");
		#line 2264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(NarrowToInt8)(f.__ref()) == Builtin::i32(-46)), u"f.NarrowToInt8()==-46");
		#line 2266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(Sign)(f.__ref()) == Builtin::i32(1)), u"f.Sign==1");
		#line 2267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(Sign)(Builtin::ParseFloat128("-1234.1234").__ref()) == Builtin::i32(-1)), u"-1234.1234f128.Sign==-1");
		#line 2268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(Sign)(Builtin::ParseFloat128("0.0").__ref()) == Builtin::i32(0)), u"0.0f128.Sign==0");
		#line 2270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(CopySign)(f.__ref(), Builtin::ParseFloat128("-1.0")) == Builtin::ParseFloat128("-1234.1234")), u"f.CopySign(-1.0f128)==-1234.1234f128");
		#line 2271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(Max)(f.__ref(), Builtin::i32(123)) == f), u"f.Max(123)==f");
		#line 2272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(Min)(f.__ref(), Builtin::i32(123)) == Builtin::ParseFloat128("123.0")), u"f.Min(123)==123.0f128");
		#line 2273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(Clamp)(f.__ref(), Builtin::i32(1), Builtin::i32(1000)) == Builtin::ParseFloat128("1000.0")), u"f.Clamp(1,1000)==1000.0f128");
		#line 2275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((!ADV_UPCS(IsPow2)(f.__ref())), u"!f.IsPow2");
		#line 2276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(IsPow2)(Builtin::ParseFloat128("4096.0").__ref())), u"4096.0f128.IsPow2");
		#line 2277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::ParseFloat128("4096.0").__ref()) == Builtin::ParseFloat128("11.999999999999999999999994462093366496")), u"4096.0f128.Log2==11.999999999999999999999994462093366496f128");
		#line 2278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(IsNegativeInfinity)(ADV_UPCS(Log2)(ADV_USPCS(Zero, Builtin::f128)().__ref()).__ref())), u"f128.Zero.Log2.IsNegativeInfinity");
		#line 2279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(IsNaN)(ADV_UPCS(Log2)(Builtin::ParseFloat128("-123.0").__ref()).__ref())), u"-123.0f128.Log2.IsNaN");
		#line 2280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(Builtin::ParseFloat128("10000.0").__ref()) == Builtin::ParseFloat128("3.999999999999999999999998406425401")), u"10000.0f128.Log10==3.999999999999999999999998406425401f128");
		#line 2281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(IsNegativeInfinity)(ADV_UPCS(Log10)(ADV_USPCS(Zero, Builtin::f128)().__ref()).__ref())), u"f128.Zero.Log10.IsNegativeInfinity");
		#line 2282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(IsNaN)(ADV_UPCS(Log10)(Builtin::ParseFloat128("-123.0").__ref()).__ref())), u"-123.0f128.Log10.IsNaN");
		#line 2283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(Midpoint)(Builtin::ParseFloat128("1000.0").__ref(), Builtin::ParseFloat128("1500.0")) == Builtin::ParseFloat128("1250.0")), u"1000.0f128.Midpoint(1500.0f128)==1250.0f128");
		#line 2284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(IsMultipleOf)(Builtin::ParseFloat128("10000.0").__ref(), Builtin::i32(10))), u"10000.0f128.IsMultipleOf(10)");
		#line 2285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((!ADV_UFCS(IsMultipleOf)(Builtin::ParseFloat128("10000.0").__ref(), Builtin::ParseFloat128("7.5"))), u"!10000.0f128.IsMultipleOf(7.5f128)");
		#line 2286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(IsMultipleOf)(Builtin::ParseFloat128("22.5").__ref(), Builtin::ParseFloat128("7.5"))), u"22.5f128.IsMultipleOf(7.5f128)");
		#line 2288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(Ceil)(Builtin::ParseFloat128("2.5").__ref()) == Builtin::ParseFloat128("3.0")), u"2.5f128.Ceil==3.0f128");
		#line 2289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(Floor)(Builtin::ParseFloat128("2.5").__ref()) == Builtin::ParseFloat128("2.0")), u"2.5f128.Floor==2.0f128");
		#line 2290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(Truncate)(Builtin::ParseFloat128("2.5").__ref()) == Builtin::ParseFloat128("2.0")), u"2.5f128.Truncate==2.0f128");
		#line 2291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(Round)(Builtin::ParseFloat128("2.5").__ref()) == Builtin::ParseFloat128("3.0")), u"2.5f128.Round==3.0f128");
		#line 2292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(RoundToInt32)(Builtin::ParseFloat128("2.5").__ref()) == Builtin::i32(3)), u"2.5f128.RoundToInt32()==3");
		#line 2293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(RoundTiesEven)(Builtin::ParseFloat128("2.5").__ref()) == Builtin::ParseFloat128("2.0")), u"2.5f128.RoundTiesEven==2.0f128");
		#line 2294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(RoundTiesEvenToInt32)(Builtin::ParseFloat128("2.5").__ref()) == Builtin::i32(2)), u"2.5f128.RoundTiesEvenToInt32()==2");
		#line 2295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(RoundTiesEven)(Builtin::ParseFloat128("3.5").__ref()) == Builtin::ParseFloat128("4.0")), u"3.5f128.RoundTiesEven==4.0f128");
		#line 2296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(Round)(Builtin::ParseFloat128("2.665").__ref(), Builtin::u32(2U)) == Builtin::ParseFloat128("2.67")), u"2.665f128.Round(2u)==2.67f128");
		#line 2297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(Round)(Builtin::ParseFloat128("2.665").__ref(), Builtin::u32(2U), ADV_USPCS(ToEven, MidpointRounding)()) == Builtin::ParseFloat128("2.66")), u"2.665f128.Round(2u,MidpointRounding.ToEven)==2.66f128");
		#line 2298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(Ceil)((Builtin::ParseFloat128("-2.5")).__ref()) == Builtin::ParseFloat128("-2.0")), u"(-2.5f128).Ceil==-2.0f128");
		#line 2299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(Floor)((Builtin::ParseFloat128("-2.5")).__ref()) == Builtin::ParseFloat128("-3.0")), u"(-2.5f128).Floor==-3.0f128");
		#line 2300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(Truncate)((Builtin::ParseFloat128("-2.5")).__ref()) == Builtin::ParseFloat128("-2.0")), u"(-2.5f128).Truncate==-2.0f128");
		#line 2301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(Round)((Builtin::ParseFloat128("-2.5")).__ref()) == Builtin::ParseFloat128("-3.0")), u"(-2.5f128).Round==-3.0f128");
		#line 2302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(RoundToInt32)((Builtin::ParseFloat128("-2.5")).__ref()) == Builtin::i32(-3)), u"(-2.5f128).RoundToInt32()==-3");
		#line 2303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(RoundTiesEven)((Builtin::ParseFloat128("-2.5")).__ref()) == Builtin::ParseFloat128("-2.0")), u"(-2.5f128).RoundTiesEven==-2.0f128");
		#line 2304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(RoundTiesEvenToInt32)((Builtin::ParseFloat128("-2.5")).__ref()) == Builtin::i32(-2)), u"(-2.5f128).RoundTiesEvenToInt32()==-2");
		#line 2305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(RoundTiesEven)((Builtin::ParseFloat128("-3.5")).__ref()) == Builtin::ParseFloat128("-4.0")), u"(-3.5f128).RoundTiesEven==-4.0f128");
		#line 2306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(Round)((Builtin::ParseFloat128("-2.665")).__ref(), Builtin::u32(2U)) == Builtin::ParseFloat128("-2.67")), u"(-2.665f128).Round(2u)==-2.67f128");
		#line 2307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(Round)((Builtin::ParseFloat128("-2.665")).__ref(), Builtin::u32(2U), ADV_USPCS(ToEven, MidpointRounding)()) == Builtin::ParseFloat128("-2.66")), u"(-2.665f128).Round(2u,MidpointRounding.ToEven)==-2.66f128");
		#line 2309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		f = Builtin::ParseFloat128("12.34");
		#line 2311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(Ln)(ADV_USPCS(E, Builtin::f128)().__ref()) == Builtin::ParseFloat128("0.9999999999999999999999998332914073")), u"f128.E.Ln==0.9999999999999999999999998332914073f128");
		#line 2312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UPCS(LnP1)(Builtin::ParseFloat128("12345678.12345678").__ref()) == Builtin::ParseFloat128("16.32881669127397153008094551958084708")), u"12345678.12345678f128.LnP1==16.32881669127397153008094551958084708f128");
		#line 2313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(Log)(f.__ref(), Builtin::f64(1.25)) == Builtin::ParseFloat128("11.26111869994794695640976458195142")), u"f.Log(1.25)==11.26111869994794695640976458195142f128");
		#line 2317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		f = Builtin::ParseFloat128("0.34");
		#line 2318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(FusedMultiplyAdd)(Builtin::ParseFloat128("10.25").__ref(), Builtin::f64(1.25), Builtin::f64(1.25)) == Builtin::ParseFloat128("14.0625")), u"10.25f128.FusedMultiplyAdd(1.25,1.25)==14.0625f128");
		#line 2319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(FusedMultiplyAdd)(f.__ref(), Builtin::ParseFloat128("5.0"), Builtin::ParseFloat128("2.12")) == Builtin::ParseFloat128("3.82")), u"f.FusedMultiplyAdd(5.0f128,2.12f128)==3.82f128");
		#line 2320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_ASSERT((ADV_UFCS(Round)(ADV_UFCS(Lerp)(Builtin::ParseFloat128("1.0").__ref(), Builtin::ParseFloat128("2.0"), Builtin::ParseFloat128("0.75")).__ref(), Builtin::u32(20U)) == Builtin::f64(1.75)), u"1.0f128.Lerp(2.0f128,0.75f128).Round(20u)==1.75");
		return true;
	}();
	#endif	
} namespace __extensions { using namespace System;
#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto _operator_eq_eq_mul(__extension_Float128_19_f128 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool
	{
		#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		{
			#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			auto __tmp0 = Builtin::Cast<false, __extension_Float128_2039_f128>(obj);
			#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if ((__tmp0.IsValid())) {
				#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				const auto& obj = *__tmp0;
				
				#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if (__this == obj) {
					#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					return Builtin::Boolean(true);
				}
			}
		}
		#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return Builtin::Boolean(false);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto _operator_lt_eq_gt_mul(__extension_Float128_62_f128 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32
	{
		#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		{
			#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			auto __tmp0 = Builtin::Cast<false, __extension_Float128_2039_f128>(obj);
			#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if ((__tmp0.IsValid())) {
				#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				const auto& obj = *__tmp0;
				
				#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				return __this <=> obj;
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
} namespace __extensions { using namespace System;
#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto Parse(__extension_Float128_161_f128 const& __this LIFETIMEBOUND, Builtin::Str input)  -> const typename __extension_Float128_161_f128
	{
		#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return Builtin::i32(0);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto TryParse(__extension_Float128_161_f128 const& __this LIFETIMEBOUND, Builtin::Str input) noexcept -> const Builtin::Nullable<__extension_Float128_2039_f128>
	{
		#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return Builtin::f32(0.0f);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getLog2(__extension_Float128_404_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return Log2Impl(__this);
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getLog10(__extension_Float128_404_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return Log10Impl(__this);
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 780 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto _operator_mul_mul(__extension_Float128_779_f128 const& __this LIFETIMEBOUND, __extension_Float128_2039_f128 exp)  -> const typename __extension_Float128_779_f128
	{
		#line 782 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return PowImpl(__this, exp);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 789 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getExp(__extension_Float128_787_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 791 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return ExpImpl(__this);
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 794 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getExp2(__extension_Float128_787_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 796 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return Exp2Impl(__this);
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 799 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getExp10(__extension_Float128_787_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 801 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return Exp10Impl(__this);
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 804 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getExpM1(__extension_Float128_787_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 806 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return ExpM1Impl(__this);
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getLn(__extension_Float128_814_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 818 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return LnImpl(__this);
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 821 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getLnP1(__extension_Float128_814_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return LnP1Impl(__this);
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1055 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto Root(__extension_Float128_831_f128 const& __this LIFETIMEBOUND, Builtin::i32 n)  -> const typename __extension_Float128_831_f128
	{
		#line 1057 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto PositiveN = [] (__extension_Float128_2039_f128 x, Builtin::i32 n) 
		{
			#line 1059 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			__extension_Float128_2039_f128 result{}; 
			#line 1060 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if (ADV_UPCS(IsFinite)(x.__ref())) {
				#line 1061 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if (x != Builtin::i32(0)) {
					#line 1062 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					if ((x <=> Builtin::i32(0)) > 0 || ADV_UPCS(IsOddInteger)(n.__ref())) {
						#line 1063 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						result = ADV_UFCS(_operator_mul_mul)(ADV_UPCS(Abs)(x.__ref()), (ADV_USPCS(One, __extension_Float128_2039_f128)() / n));
						#line 1064 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						result = ADV_UFCS(CopySign)(result.__ref(), x);
					} else {
						#line 1065 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						{
							#line 1066 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							result = ADV_USPCS(NaN, Builtin::f128)();
						}
					}
				} else {
					#line 1068 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					if (ADV_UPCS(IsEvenInteger)(n.__ref())) {
						#line 1069 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						result = Builtin::i32(0);
					} else {
						#line 1070 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						{
							#line 1071 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							result = ADV_UFCS(CopySign)(Builtin::ParseFloat128("0.0").__ref(), x);
						}
					}
				}
			} else {
				#line 1073 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if (ADV_UPCS(IsNaN)(x.__ref())) {
					#line 1074 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					result = ADV_USPCS(NaN, Builtin::f128)();
				} else {
					#line 1075 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					if ((x <=> Builtin::i32(0)) > 0) {
						#line 1076 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						ADV_ASSERT((ADV_UPCS(IsPositiveInfinity)(x.__ref())), u"x.IsPositiveInfinity");
						#line 1077 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						result = ADV_USPCS(PositiveInfinity, Builtin::f128)();
					} else {
						#line 1078 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						{
							#line 1079 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							ADV_ASSERT((ADV_UPCS(IsNegativeInfinity)(x.__ref())), u"x.IsNegativeInfinity");
							#line 1080 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							result = ADV_UPCS(IsOddInteger)(n.__ref()) ? ADV_USPCS(NegativeInfinity, Builtin::f128)() : ADV_USPCS(NaN, Builtin::f128)();
						}
					}
				}
			}
			#line 1083 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return result;
		}; 
		#line 1086 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto NegativeN = [] (__extension_Float128_2039_f128 x, Builtin::i32 n) 
		{
			#line 1088 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			__extension_Float128_2039_f128 result{}; 
			#line 1089 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if (ADV_UPCS(IsFinite)(x.__ref())) {
				#line 1090 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if (x != Builtin::i32(0)) {
					#line 1091 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					if ((x <=> Builtin::i32(0)) > 0 || ADV_UPCS(IsOddInteger)(n.__ref())) {
						#line 1092 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						result = ADV_UFCS(_operator_mul_mul)(ADV_UPCS(Abs)(x.__ref()), (ADV_USPCS(One, __extension_Float128_2039_f128)() / n));
						#line 1093 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						result = ADV_UFCS(CopySign)(result.__ref(), x);
					} else {
						#line 1094 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						{
							#line 1095 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							result = ADV_USPCS(NaN, Builtin::f128)();
						}
					}
				} else {
					#line 1097 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					if (ADV_UPCS(IsEvenInteger)(n.__ref())) {
						#line 1098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						result = ADV_USPCS(PositiveInfinity, Builtin::f128)();
					} else {
						#line 1099 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						{
							#line 1100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							result = ADV_UFCS(CopySign)(ADV_USPCS(PositiveInfinity, Builtin::f128)().__ref(), x);
						}
					}
				}
			} else {
				#line 1102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if (ADV_UPCS(IsNaN)(x.__ref())) {
					#line 1103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					result = ADV_USPCS(NaN, Builtin::f128)();
				} else {
					#line 1104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					if ((x <=> Builtin::i32(0)) > 0) {
						#line 1105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						ADV_ASSERT((ADV_UPCS(IsPositiveInfinity)(x.__ref())), u"x.IsPositiveInfinity");
						#line 1106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						result = Builtin::i32(0);
					} else {
						#line 1107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						{
							#line 1108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							ADV_ASSERT((ADV_UPCS(IsNegativeInfinity)(x.__ref())), u"x.IsNegativeInfinity");
							#line 1109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							result = ADV_UPCS(IsOddInteger)(n.__ref()) ? ADV_USPCS(NegativeZero, Builtin::f128)() : ADV_USPCS(NaN, Builtin::f128)();
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
			auto __tmp__valid_1115 = Builtin::Cast<false, std::decay_t<decltype(n)>::__self>(n);
			#line 1116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if(__tmp__valid_1115.IsValid() && Builtin::IsGreater(*__tmp__valid_1115, Builtin::i32(0))) {
				#line 1116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				const auto& n = *__tmp__valid_1115;
				return [&]() 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
				{
					#line 1118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					auto __tmp__valid_1116 = Builtin::Cast<false, std::decay_t<decltype(n)>::__self>(n);
					#line 1118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					if(__tmp__valid_1116.IsValid() && Builtin::Is(*__tmp__valid_1116, Builtin::i32(2))) {
						#line 1118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						const auto& n = *__tmp__valid_1116;
						return __this != Builtin::i32(0) ? ADV_UPCS(Sqrt)(__this.__ref()) : Builtin::i32(0);
					}
					else {
						#line 1119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						if(__tmp__valid_1116.IsValid() && Builtin::Is(*__tmp__valid_1116, Builtin::i32(3))) {
							#line 1119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							const auto& n = *__tmp__valid_1116;
							return ADV_UPCS(Cbrt)(__this.__ref());
						}
						else {
							return PositiveN(__this, n);
							
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
					return NegativeN(__this, n);
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
} namespace __extensions { using namespace System;
#line 1128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto Hypot(__extension_Float128_831_f128 const& __this LIFETIMEBOUND, __extension_Float128_2039_f128 y)  -> const typename __extension_Float128_831_f128
	{
		#line 1130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto sq = [] (Builtin::f128 x) 
		{
			#line 1131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			const auto xc = x * ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x40380000000000000080000000000000")); 
			#line 1132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			const auto xh = x - xc + xc; 
			#line 1133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			const auto xl = x - xh; 
			#line 1134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return std::make_tuple(xh * xh - x * x + xh * xl * Builtin::i32(2) + xl * xl, x * x);
		}; 
		#line 1137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto x = __this; 
		#line 1138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto ex = __Float128_Protected::BiasedExponent(x); 
		#line 1139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto ey = __Float128_Protected::BiasedExponent(y); 
		#line 1140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((ex <=> ey) < 0) {
			#line 1141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			auto tmp = ex; 
			#line 1142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			ex = ey;
			#line 1143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			ey = tmp;
			#line 1144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			auto tmp2 = x; 
			#line 1145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			x = ADV_UPCS(Abs)(y.__ref());
			#line 1146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			y = ADV_UPCS(Abs)(tmp2.__ref());
		} else {
			#line 1147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			{
				#line 1148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				x = ADV_UPCS(Abs)(x.__ref());
				#line 1149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				y = ADV_UPCS(Abs)(y.__ref());
			}
		}
		#line 1152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (ex == Builtin::i32(0x7FFF) && ADV_UPCS(IsInfinity)(y.__ref())) {
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
		constexpr auto huge = ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x670F0000000000000000000000000000"));
		#line 1163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		constexpr auto tiny = ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x18EF0000000000000000000000000000"));
		#line 1164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto z = ADV_USPCS(One, __extension_Float128_2039_f128)(); 
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
		return z * ADV_UPCS(Sqrt)((ly + lx + hy + hx).__ref());
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 833 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getSqrt(__extension_Float128_831_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 837 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const auto bits = ADV_UPCS(Bits)(__this.__ref()); 
		#line 838 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const auto sign = ADV_UPCS(IsNegative)(__this.__ref()); 
		#line 839 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::i32 exp = __Float128_Protected::ExtractBiasedExponentFromBits(bits); 
		#line 840 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto sig = __Float128_Protected::ExtractTrailingSignificandFromBits(bits); 
		#line 844 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (exp == Builtin::i32(0x7FFF)) {
			#line 846 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if (sig != Builtin::i32(0)) {
				#line 847 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				return ADV_USPCS(NaN, __extension_Float128_2039_f128)();
			}
			#line 851 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if (!sign) {
				#line 852 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				return __this;
			}
			#line 856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return ADV_USPCS(NaN, __extension_Float128_2039_f128)();
		}
		#line 860 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (sign) {
			#line 862 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if ((ADV_UFCS(NarrowToUInt128)(exp.__ref()) | sig) == Builtin::i32(0)) {
				#line 863 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				return __this;
			}
			#line 867 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return ADV_USPCS(NaN, __extension_Float128_2039_f128)();
		}
		#line 871 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (exp == Builtin::i32(0)) {
			#line 873 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if (sig == Builtin::i32(0)) {
				#line 874 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				return __this;
			}
			#line 878 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			const auto shift = Builtin::i32{ADV_UPCS(LeadingZeroCount)(sig.__ref())} - Builtin::i32(15); 
			#line 879 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			exp = Builtin::i32(1) - shift;
			#line 880 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			sig <<= shift;
		}
		#line 883 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const auto resultExp = ((exp - Builtin::i32(0x3FFF)) >> Builtin::i32(1)) + Builtin::i32(0x3FFE); 
		#line 884 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		exp &= Builtin::i32(1);
		#line 885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		sig |= __Float128_Protected::HiddenBit;
		#line 886 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const auto sig32 = ADV_UFCS(NarrowToUInt32)((sig >> Builtin::i32(81)).__ref()); 
		#line 887 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const auto recip = [] (Builtin::u32 oddExp, Builtin::u32 a) 
		{
			#line 888 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			constexpr auto Approx1k0s = Builtin::ToInlineArray<Builtin::u16>({Builtin::u16(0xB4C9U), Builtin::u16(0xFFABU), Builtin::u16(0xAA7DU), Builtin::u16(0xF11CU), Builtin::u16(0xA1C5U), Builtin::u16(0xE4C7U), Builtin::u16(0x9A43U), Builtin::u16(0xDA29U), Builtin::u16(0x93B5U), Builtin::u16(0xD0E5U), Builtin::u16(0x8DEDU), Builtin::u16(0xC8B7U), Builtin::u16(0x88C6U), Builtin::u16(0xC16DU), Builtin::u16(0x8424U), Builtin::u16(0xBAE1U)});
			#line 893 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			constexpr auto Approx1k1s = Builtin::ToInlineArray<Builtin::u16>({Builtin::u16(0xA5A5U), Builtin::u16(0xEA42U), Builtin::u16(0x8C21U), Builtin::u16(0xC62DU), Builtin::u16(0x788FU), Builtin::u16(0xAA7FU), Builtin::u16(0x6928U), Builtin::u16(0x94B6U), Builtin::u16(0x5CC7U), Builtin::u16(0x8335U), Builtin::u16(0x52A6U), Builtin::u16(0x74E2U), Builtin::u16(0x4A3EU), Builtin::u16(0x68FEU), Builtin::u16(0x432BU), Builtin::u16(0x5EFDU)});
			#line 899 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			const auto index = ADV_UFCS(NarrowToInt32)((((a >> Builtin::i32(27)) & Builtin::u32(0xEU)) + oddExp).__ref()); 
			#line 900 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			const auto epsilon = ADV_UFCS(NarrowToUInt16)((a >> Builtin::i32(12)).__ref()); 
			#line 901 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			const auto r0 = Builtin::u16{ADV_UFCS(_operator_sub_mod)(Builtin::u32{ADV_UFCS(_operator_subscript)(Approx1k0s.__ref(), index)}, ((ADV_UFCS(_operator_mul_mod)(Builtin::u32{ADV_UFCS(_operator_subscript)(Approx1k1s.__ref(), index)}, epsilon)) >> Builtin::i32(20)))}; 
			#line 902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			auto esqrtr0 = Builtin::u32{r0} * r0; 
			#line 903 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if (oddExp == Builtin::i32(0)) {
				#line 904 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				esqrtr0 <<= Builtin::i32(1);
			}
			#line 907 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			const auto sigma0 = ADV_UFCS(_operator_not)(ADV_UFCS(NarrowToUInt32)(((ADV_UFCS(_operator_mul_mod)(Builtin::u64{esqrtr0}, a)) >> Builtin::i32(23)).__ref())); 
			#line 908 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			auto r = ADV_UFCS(NarrowToUInt32)((ADV_UFCS(_operator_add_mod)((Builtin::u32{r0} << Builtin::i32(16)), ((ADV_UFCS(_operator_mul_mod)(Builtin::u64{r0}, sigma0)) >> Builtin::i32(25)))).__ref()); 
			#line 909 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			const auto sqrSigma0 = ADV_UFCS(NarrowToUInt32)(((ADV_UFCS(_operator_mul_mod)(Builtin::u64{sigma0}, sigma0)) >> Builtin::i32(32)).__ref()); 
			#line 910 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			ADV_UFCS(_operator_add_mod_eq)(r, ADV_UFCS(NarrowToUInt32)(((ADV_UFCS(_operator_mul_mod)(Builtin::u64{ADV_UFCS(_operator_sub_mod)(ADV_UFCS(_operator_add_mod)((r >> Builtin::i32(1)), (r >> Builtin::i32(3))), (Builtin::u32{r0} << Builtin::i32(14)))}, sqrSigma0)) >> Builtin::i32(48)).__ref()));
			#line 911 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if ((r & Builtin::u32(0x80000000U)) == Builtin::i32(0)) {
				#line 912 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				r = Builtin::u32(0x80000000U);
			}
			#line 915 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return r;
		}(ADV_UFCS(NarrowToUInt32)(exp.__ref()), sig32); 
		#line 918 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto resultSig32 = Builtin::u32{(ADV_UFCS(_operator_mul_mod)(Builtin::u64{sig32}, recip)) >> Builtin::i32(32)}; 
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
		Builtin::InlineArray<Builtin::i32(3), Builtin::u32> qs = {Builtin::u32(0U), Builtin::u32(0U), resultSig32}; 
		#line 927 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_UFCS(_operator_sub_mod_eq)(rem, Builtin::u128{Builtin::u64{resultSig32} * resultSig32, Builtin::u32(0U)});
		#line 929 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto q = Builtin::u32{(ADV_UFCS(_operator_mul_mod)(Builtin::u64{ADV_UFCS(NarrowToUInt32)((rem >> Builtin::i32(66)).__ref())}, recip)) >> Builtin::i32(32)}; 
		#line 930 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const auto x64 = Builtin::u64{resultSig32} << Builtin::i32(32); 
		#line 931 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto resultSig64 = ADV_UFCS(_operator_add_mod)(x64, (Builtin::u64{q} << Builtin::i32(3))); 
		#line 932 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto y = rem << Builtin::i32(29); 
		#line 934 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::u128 term{}; 
		#line 935 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto a = ADV_UFCS(_operator_add_mod)(x64, resultSig64); 
		#line 936 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		for (;;) 
		{
			#line 937 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			const auto mid = ADV_UFCS(_operator_mul_mod)(Builtin::u64{ADV_UFCS(NarrowToUInt32)(a.__ref())}, q); 
			#line 938 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			term = Builtin::u128{ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_mul_mod)(Builtin::u64{ADV_UFCS(NarrowToUInt32)((a >> Builtin::i32(32)).__ref())}, q), (mid >> Builtin::i32(32))), mid << Builtin::i32(32)};
			#line 939 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			rem = ADV_UFCS(_operator_sub_mod)(y, term);
			#line 940 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if ((ADV_UFCS(High64)(rem.__ref()) & Builtin::u64(0x8000000000000000ULL)) == Builtin::u32(0U)) {
				#line 941 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				break;
			}
			#line 943 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			ADV_UFCS(_operator_sub_sub_mod)(q);
			#line 944 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			ADV_UFCS(_operator_sub_mod_eq)(resultSig64, (Builtin::i32(1) << Builtin::i32(3)));
		}
		#line 946 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_UFCS(_operator_subscript)(qs.__ref(), Builtin::i32(1)) = q;
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
			if ((ADV_UFCS(High64)(rem.__ref()) & Builtin::u64(0x8000000000000000ULL)) == Builtin::u32(0U)) {
				#line 957 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				break;
			}
			#line 959 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			ADV_UFCS(_operator_sub_sub_mod)(q);
		}
		#line 961 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		ADV_UFCS(_operator_subscript)(qs.__ref(), Builtin::i32(0)) = q;
		#line 962 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		q = Builtin::u32{ADV_UFCS(_operator_add_mod)(((ADV_UFCS(_operator_mul_mod)(Builtin::u64{rem >> Builtin::i32(66)}, recip)) >> Builtin::i32(32)), Builtin::i32(2))};
		#line 963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto resultSigExtra = Builtin::u64{q} << Builtin::i32(59); 
		#line 964 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		term = Builtin::u128{ADV_UFCS(_operator_subscript)(qs.__ref(), Builtin::i32(1))} << Builtin::i32(53);
		#line 965 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto resultSig = ADV_UFCS(_operator_add_mod)(Builtin::u128{Builtin::u64{ADV_UFCS(_operator_subscript)(qs.__ref(), Builtin::i32(2))} << Builtin::i32(18), (Builtin::u64{ADV_UFCS(_operator_subscript)(qs.__ref(), Builtin::i32(0))} << Builtin::i32(24)) + (q >> Builtin::i32(5))}, term); 
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
			a = ADV_UFCS(Low64)(term.__ref());
			#line 974 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			auto mid = ADV_UFCS(_operator_mul_mod)(Builtin::u64{ADV_UFCS(NarrowToUInt32)(a.__ref())}, q); 
			#line 975 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			y = Builtin::u128{ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_mul_mod)(Builtin::u64{ADV_UFCS(NarrowToUInt32)((a >> Builtin::i32(32)).__ref())}, q), (mid >> Builtin::i32(32))), mid << Builtin::i32(32)};
			#line 976 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			a = ADV_UFCS(High64)(term.__ref());
			#line 977 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			mid = ADV_UFCS(_operator_mul_mod)(Builtin::u64{ADV_UFCS(NarrowToUInt32)(a.__ref())}, q);
			#line 978 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			term = Builtin::u128{ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_mul_mod)(Builtin::u64{ADV_UFCS(NarrowToUInt32)((a >> Builtin::i32(32)).__ref())}, q), (mid >> Builtin::i32(32))), mid << Builtin::i32(32)};
			#line 979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			ADV_UFCS(_operator_add_mod_eq)(term, ADV_UFCS(High64)(y.__ref()));
			#line 980 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			rem <<= Builtin::i32(20);
			#line 981 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			ADV_UFCS(_operator_sub_mod_eq)(term, rem);
			#line 983 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if ((ADV_UFCS(High64)(term.__ref()) & Builtin::u64(0x8000000000000000ULL)) != Builtin::u32(0U)) {
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
} namespace __extensions { using namespace System;
#line 994 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getCbrt(__extension_Float128_831_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 996 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		constexpr auto B1 = Builtin::u32(709958130U);
		#line 997 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto e = ADV_UFCS(NarrowToInt32)(__Float128_Protected::BiasedExponent(__this).__ref()); 
		#line 998 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const Builtin::i32 sign = ADV_UPCS(IsNegative)(__this.__ref()) ? Builtin::i32(1) << Builtin::i32(15) : Builtin::i32(0); 
		#line 999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto u = __this; 
		#line 1004 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (e == Builtin::i32(0x7FFF)) {
			#line 1005 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return __this;
		}
		#line 1007 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (e == Builtin::i32(0)) {
			#line 1009 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			u *= ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x40770000000000000000000000000000"));
			#line 1010 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			e = ADV_UFCS(NarrowToInt32)(__Float128_Protected::BiasedExponent(u).__ref());
			#line 1013 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if (e == Builtin::i32(0)) {
				#line 1014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				return __this;
			}
			#line 1016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			e -= Builtin::i32(120);
		}
		#line 1019 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		e -= Builtin::i32(0x3FFF);
		#line 1020 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto x = ADV_USFCS((Builtin::f128), FromBits)(__Float128_Protected::PackBits(Builtin::Boolean(false), Builtin::u16(0x3FFFU), __Float128_Protected::TrailingSignificand(u))); 
		#line 1022 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		{
			#line 1023 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			auto __tmp__valid_1022 = Builtin::Cast<false, std::decay_t<decltype(e % Builtin::i32(3))>::__self>(e % Builtin::i32(3));
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
		const auto v = ADV_USFCS((Builtin::f128), FromBits)(Builtin::u128{Builtin::u64{sign | (Builtin::i32(0x3FFF) + ADV_UFCS(_operator_bsl)(e, Builtin::i32(3)))} << Builtin::i32(48), Builtin::u32(0U)}); 
		#line 1034 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const auto ft = ADV_USFCS((Builtin::f32), FromBits)(ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_bsl)((ADV_UPCS(Bits)(ADV_UFCS(ToFloat32)(x.__ref()).__ref()) & Builtin::u32(0x7FFFFFFFU)), Builtin::i32(3)), B1)); 
		#line 1035 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const auto dx = ADV_UFCS(ToFloat64)(x.__ref()); 
		#line 1037 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::f64 dt = ft; 
		#line 1038 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto dr = dt * dt * dt; 
		#line 1039 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		dt = dt * (dx + dx + dr) / (dx + dr + dr);
		#line 1040 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		dr = dt * dt * dt;
		#line 1041 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		dt = dt * (dx + dx + dr) / (dx + dr + dr);
		#line 1043 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto t = Builtin::f128{dt} + ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FD20000000000000000000000000000")) + ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x403B0000000000000000000000000000")) - ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x403B0000000000000000000000000000")); 
		#line 1047 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const auto s = t * t; 
		#line 1048 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto r = x / s; 
		#line 1049 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const auto w = t + t; 
		#line 1050 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		r = (r - t) / (w + r);
		#line 1051 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		t = t + t * r;
		#line 1052 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return t * v;
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getSin(__extension_Float128_1182_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 1185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return SinImpl(__this);
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getCos(__extension_Float128_1182_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 1189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return CosImpl(__this);
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getTan(__extension_Float128_1182_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 1193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return TanImpl(__this);
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getAsin(__extension_Float128_1182_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 1203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return AsinImpl(__this);
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getAcos(__extension_Float128_1182_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 1207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return AcosImpl(__this);
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getAtan(__extension_Float128_1182_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 1211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return AtanImpl(__this);
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getAcot(__extension_Float128_1182_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 1215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return AtanImpl(ADV_UPCS(ReciprocalEstimate)(__this.__ref()));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getAsec(__extension_Float128_1182_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 1219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return AcosImpl(ADV_UPCS(ReciprocalEstimate)(__this.__ref()));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getAcsc(__extension_Float128_1182_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 1223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return AsinImpl(ADV_UPCS(ReciprocalEstimate)(__this.__ref()));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getSinCos(__extension_Float128_1182_f128 const& __this ) -> const std::tuple<__extension_Float128_2039_f128, __extension_Float128_2039_f128>
	{
		#line 1227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return SinCosImpl(__this);
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getSinPi(__extension_Float128_1182_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 1231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return SinPiImpl(__this);
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getCosPi(__extension_Float128_1182_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 1235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return CosPiImpl(__this);
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getSinCosPi(__extension_Float128_1182_f128 const& __this ) -> const std::tuple<__extension_Float128_2039_f128, __extension_Float128_2039_f128>
	{
		#line 1240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return std::make_tuple(SinPiImpl(__this), CosPiImpl(__this));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getTanPi(__extension_Float128_1182_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 1244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return TanPiImpl(__this);
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getAcosh(__extension_Float128_1271_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 1275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const auto exp = __Float128_Protected::BiasedExponent(__this); 
		#line 1277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((exp <=> Builtin::i32(0x3FFF)) < 0 || (exp & Builtin::i32(0x8000)) != Builtin::i32(0)) {
			#line 1278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return ADV_USPCS(NaN, __extension_Float128_2039_f128)();
		} else {
			#line 1280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if ((exp <=> Builtin::i32(0x401D)) >= 0) {
				#line 1281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if ((exp <=> __Float128_Protected::MaxBiasedExponent) >= 0) {
					#line 1282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					return __this;
				} else {
					#line 1283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					{
						#line 1284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						return ADV_UPCS(Ln)(__this.__ref()) + ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFE62E42FEFA39EF357ADEBB905E4BD"));
					}
				}
			} else {
				#line 1286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if (__this == ADV_USPCS(One, __extension_Float128_2039_f128)()) {
					#line 1287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					return Builtin::i32(0);
				} else {
					#line 1290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					if ((exp <=> Builtin::i32(0x4000)) > 0) {
						#line 1291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						return ADV_UPCS(Ln)((Builtin::f128{Builtin::i32(2)} * __this - ADV_USPCS(One, __extension_Float128_2039_f128)() / (__this + ADV_UPCS(Sqrt)((__this * __this - ADV_USPCS(One, __extension_Float128_2039_f128)()).__ref()))).__ref());
					} else {
						#line 1293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						{
							#line 1294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							const auto t = __this - ADV_USPCS(One, __extension_Float128_2039_f128)(); 
							#line 1295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							return ADV_UPCS(LnP1)((t + ADV_UPCS(Sqrt)((Builtin::f128{Builtin::i32(2)} * t + t * t).__ref())).__ref());
						}
					}
				}
			}
		}
		return {};
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getAsinh(__extension_Float128_1271_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 1307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const auto exp = __Float128_Protected::BiasedExponent(__this); 
		#line 1308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const auto sign = ADV_UPCS(IsNegative)(__this.__ref()); 
		#line 1309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto x = ADV_UPCS(Abs)(__this.__ref()); 
		#line 1312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((exp <=> Builtin::i32(0x401F)) >= 0) {
			#line 1313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			x = ADV_UPCS(Ln)(x.__ref()) + ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFE62E42FEFA39EF35793C7673007E6"));
		} else {
			#line 1315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if ((exp <=> Builtin::i32(0x4000)) >= 0) {
				#line 1316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				x = ADV_UPCS(Ln)((Builtin::f128{Builtin::i32(2)} * x + ADV_USPCS(One, __extension_Float128_2039_f128)() / (ADV_UPCS(Sqrt)((x * x + ADV_USPCS(One, __extension_Float128_2039_f128)()).__ref())) + x).__ref());
			} else {
				#line 1318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if ((exp <=> Builtin::i32(0x3FDF)) >= 0) {
					#line 1319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					x = ADV_UPCS(LnP1)((x + x * x / (ADV_UPCS(Sqrt)((x * x + ADV_USPCS(One, __extension_Float128_2039_f128)()).__ref()) + ADV_USPCS(One, __extension_Float128_2039_f128)())).__ref());
				}
			}
		}
		#line 1322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return sign ? -x : x;
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getAtanh(__extension_Float128_1271_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 1327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const auto exp = __Float128_Protected::BiasedExponent(__this); 
		#line 1328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const auto sign = ADV_UPCS(IsNegative)(__this.__ref()); 
		#line 1329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto x = ADV_UPCS(Abs)(__this.__ref()); 
		#line 1331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((exp <=> Builtin::i32(0x3FF) - Builtin::i32(1)) < 0) {
			#line 1332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if ((exp <=> Builtin::i32(0x3FF) - ADV_UFCS(_operator_bsl)(Builtin::i32(113), Builtin::i32(2))) >= 0) {
				#line 1333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				x = Builtin::f128{Builtin::f64(0.5)} * ADV_UPCS(LnP1)((Builtin::f128{Builtin::i32(2)} * x + Builtin::f128{Builtin::i32(2)} * x * x / (ADV_USPCS(One, __extension_Float128_2039_f128)() - x)).__ref());
			}
		} else {
			#line 1335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			{
				#line 1336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				x = Builtin::f128{Builtin::f64(0.5)} * ADV_UPCS(LnP1)((Builtin::f128{Builtin::i32(2)} * (x / (ADV_USPCS(One, __extension_Float128_2039_f128)() - x))).__ref());
			}
		}
		#line 1339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return sign ? -x : x;
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getCosh(__extension_Float128_1271_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 1344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const auto exp = __Float128_Protected::BiasedExponent(__this); 
		#line 1345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const auto x = ADV_UPCS(Abs)(__this.__ref()); 
		#line 1346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::f128 t{}; 
		#line 1348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((exp <=> Builtin::i32(0x3FFF) - Builtin::i32(1)) < 0 || (x <=> ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFE62E42FEFA39EF35793C7673007E6"))) < 0) {
			#line 1349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if ((exp <=> Builtin::i32(0x3FFF) - Builtin::i32(32)) < 0) {
				#line 1350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				return ADV_USPCS(One, __extension_Float128_2039_f128)();
			}
			#line 1353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			t = ADV_UPCS(ExpM1)(x.__ref());
			#line 1354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return ADV_USPCS(One, __extension_Float128_2039_f128)() + t * t / (Builtin::f128{Builtin::i32(2)} * (ADV_USPCS(One, __extension_Float128_2039_f128)() + t));
		}
		#line 1357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((exp <=> Builtin::i32(0x3FFF) + Builtin::i32(13)) < 0 || (x <=> ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x400C62E42FEFA39EF35793C7673007E6"))) < 0) {
			#line 1358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			t = ADV_UPCS(Exp)(x.__ref());
			#line 1359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return Builtin::f128{Builtin::f64(0.5)} * (t + ADV_UPCS(ReciprocalEstimate)(t.__ref()));
		}
		#line 1362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		t = ADV_UPCS(Exp)((Builtin::f128{Builtin::f64(0.5)} * x).__ref());
		#line 1363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return Builtin::f128{Builtin::f64(0.5)} * t * t;
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getSinh(__extension_Float128_1271_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 1374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const auto exp = __Float128_Protected::BiasedExponent(__this); 
		#line 1375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto h = Builtin::f128{Builtin::f64(0.5)}; 
		#line 1376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::f128 t{}; 
		#line 1378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (ADV_UPCS(IsNegative)(__this.__ref())) {
			#line 1379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			h = -h;
		}
		#line 1382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const auto ax = ADV_UPCS(Abs)(__this.__ref()); 
		#line 1384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((ax <=> ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x400C62E42FEFA39EF35793C7673007E6"))) < 0) {
			#line 1385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			t = ADV_UPCS(ExpM1)(ax.__ref());
			#line 1386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if ((exp <=> Builtin::i32(0x3FFF)) < 0) {
				#line 1387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if ((exp <=> Builtin::i32(0x3FFF) - Builtin::i32(32)) < 0) {
					#line 1388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					return __this;
				}
				#line 1390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				return h * (Builtin::f128{Builtin::i32(2)} * t - t * t / (ADV_USPCS(One, __extension_Float128_2039_f128)() + t));
			}
			#line 1392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return h * (t + t / (t + ADV_USPCS(One, __extension_Float128_2039_f128)()));
		}
		#line 1395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		t = ADV_UPCS(Exp)((Builtin::f128{Builtin::f64(0.5)} * ax).__ref());
		#line 1396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return h * t * t;
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto getTanh(__extension_Float128_1271_f128 const& __this ) -> const __extension_Float128_2039_f128
	{
		#line 1401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const auto exp = __Float128_Protected::BiasedExponent(__this); 
		#line 1402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const auto sign = ADV_UPCS(IsNegative)(__this.__ref()); 
		#line 1403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const auto x = ADV_UPCS(Abs)(__this.__ref()); 
		#line 1404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::f128 t{}; 
		#line 1406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((x <=> ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFE193EA7AAD030A976A4198D55053B"))) > 0) {
			#line 1407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if ((exp <=> Builtin::i32(0x3FFF) + Builtin::i32(5)) >= 0) {
				#line 1408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				t = ADV_USPCS(One, __extension_Float128_2039_f128)();
			} else {
				#line 1409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				{
					#line 1410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					t = ADV_UPCS(ExpM1)((x * Builtin::i32(2)).__ref());
					#line 1411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					t = ADV_USPCS(One, __extension_Float128_2039_f128)() - Builtin::f128{Builtin::i32(2)} / (t + Builtin::f128{Builtin::i32(2)});
				}
			}
		} else {
			#line 1413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if ((x <=> ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFD058AEFA811451A7276BC2F82043B"))) > 0) {
				#line 1414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				t = ADV_UPCS(ExpM1)((x * Builtin::i32(2)).__ref());
				#line 1415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				t = t / (t + Builtin::i32(2));
			} else {
				#line 1416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				{
					#line 1417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					t = ADV_UPCS(ExpM1)((-x * Builtin::i32(2)).__ref());
					#line 1418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					t = -t / (t + Builtin::i32(2));
				}
			}
		}
		#line 1421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return sign ? -t : t;
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 1433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto Atan2(__extension_Float128_1425_f128 const& __this LIFETIMEBOUND, __extension_Float128_2039_f128 y)  -> const typename __extension_Float128_1425_f128
	{
		#line 1435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return Atan2Impl(__this, y);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto FusedMultiplyAdd(__extension_Float128_1425_f128 const& __this LIFETIMEBOUND, __extension_Float128_2039_f128 rhs, __extension_Float128_2039_f128 addend)  -> const typename __extension_Float128_1425_f128
	{
		#line 1543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const auto bitsA = ADV_UPCS(Bits)(__this.__ref()); 
		#line 1544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const auto signA = (bitsA & __Float128_Protected::SignMask) != Builtin::i32(0); 
		#line 1545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto expA = __Float128_Protected::ExtractBiasedExponentFromBits(bitsA); 
		#line 1546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto sigA = __Float128_Protected::ExtractTrailingSignificandFromBits(bitsA); 
		#line 1548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const auto bitsB = ADV_UPCS(Bits)(rhs.__ref()); 
		#line 1549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const auto signB = (bitsB & __Float128_Protected::SignMask) != Builtin::i32(0); 
		#line 1550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto expB = __Float128_Protected::ExtractBiasedExponentFromBits(bitsB); 
		#line 1551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto sigB = __Float128_Protected::ExtractTrailingSignificandFromBits(bitsB); 
		#line 1553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const auto bitsC = ADV_UPCS(Bits)(addend.__ref()); 
		#line 1554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const auto signC = (bitsC & __Float128_Protected::SignMask) != Builtin::i32(0); 
		#line 1555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto expC = __Float128_Protected::ExtractBiasedExponentFromBits(bitsC); 
		#line 1556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto sigC = __Float128_Protected::ExtractTrailingSignificandFromBits(bitsC); 
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
				return ADV_USPCS(NaN, __extension_Float128_2039_f128)();
			}
			#line 1572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if ((expB | sigB) != Builtin::i32(0)) {
				#line 1574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if (expC != Builtin::u32(0x7FFFU)) {
					#line 1575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					return signResult ? ADV_USPCS(NegativeInfinity, __extension_Float128_2039_f128)() : ADV_USPCS(PositiveInfinity, __extension_Float128_2039_f128)();
				}
				#line 1578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if (sigC != Builtin::i32(0)) {
					#line 1579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					return ADV_USPCS(NaN, __extension_Float128_2039_f128)();
				}
				#line 1582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if (signResult == signC) {
					#line 1583 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					return signResult ? ADV_USPCS(NegativeInfinity, __extension_Float128_2039_f128)() : ADV_USPCS(PositiveInfinity, __extension_Float128_2039_f128)();
				}
			}
			#line 1587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return ADV_USPCS(NaN, __extension_Float128_2039_f128)();
		}
		#line 1591 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (expB == Builtin::u32(0x7FFFU)) {
			#line 1593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if (sigB != Builtin::i32(0)) {
				#line 1594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				return ADV_USPCS(NaN, __extension_Float128_2039_f128)();
			}
			#line 1598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if ((expA | sigA) != Builtin::i32(0)) {
				#line 1600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if (expC != Builtin::u32(0x7FFFU)) {
					#line 1601 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					return signResult ? ADV_USPCS(NegativeInfinity, __extension_Float128_2039_f128)() : ADV_USPCS(PositiveInfinity, __extension_Float128_2039_f128)();
				}
				#line 1604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if (sigC != Builtin::i32(0)) {
					#line 1605 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					return ADV_USPCS(NaN, __extension_Float128_2039_f128)();
				}
				#line 1608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if (signResult == signC) {
					#line 1609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					return signResult ? ADV_USPCS(NegativeInfinity, __extension_Float128_2039_f128)() : ADV_USPCS(PositiveInfinity, __extension_Float128_2039_f128)();
				}
			}
			#line 1613 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return ADV_USPCS(NaN, __extension_Float128_2039_f128)();
		}
		#line 1617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (expC == Builtin::u32(0x7FFFU)) {
			#line 1619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if (sigC != Builtin::i32(0)) {
				#line 1620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				return ADV_USPCS(NaN, __extension_Float128_2039_f128)();
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
			const auto shift = Builtin::i32{ADV_UPCS(LeadingZeroCount)(sigA.__ref())} - Builtin::i32(15); 
			#line 1636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			expA = ADV_UFCS(NarrowToUInt16)((Builtin::i32(1) - shift).__ref());
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
			const auto shift = Builtin::i32{ADV_UPCS(LeadingZeroCount)(sigB.__ref())} - Builtin::i32(15); 
			#line 1649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			expB = ADV_UFCS(NarrowToUInt16)((Builtin::i32(1) - shift).__ref());
			#line 1650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			sigB <<= shift;
		}
		#line 1654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		expResult = ADV_UFCS(_operator_sub_mod)(ADV_UFCS(NarrowToInt16)((ADV_UFCS(_operator_add_mod)(expA, expB)).__ref()), Builtin::i32(0x3FFE));
		#line 1655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		sigA |= __Float128_Protected::HiddenBit;
		#line 1656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		sigB |= __Float128_Protected::HiddenBit;
		#line 1657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		sigA <<= Builtin::i32(8);
		#line 1658 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		sigB <<= Builtin::i32(15);
		#line 1661 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const auto& [mulLow, mulHigh] = ADV_UFCS(_operator_mul_gt)(sigA, sigB);
		#line 1662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto sigResult = mulHigh; 
		#line 1663 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto shiftDist = Builtin::i32(0); 
		#line 1666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((ADV_UFCS(High64)(sigResult.__ref()) & Builtin::i64(0x0100000000000000LL)) == Builtin::i32(0)) {
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
				const auto sigExtra = (ADV_UFCS(Low64)(sigResult.__ref()) << (Builtin::i32(64) - shiftDist)) | (mulLow != Builtin::i32(0) ? Builtin::u64(1ULL) : Builtin::u64(0ULL)); 
				#line 1677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				sigResult >>= shiftDist;
				#line 1678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				return ADV_USFCS((Builtin::f128), FromBits)(RoundPackBits(signResult, expResult - Builtin::i32(1), sigResult, sigExtra));
			}
			#line 1682 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			const auto shift = Builtin::i32{ADV_UPCS(LeadingZeroCount)(sigC.__ref())} - Builtin::i32(15); 
			#line 1683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			expC = ADV_UFCS(NarrowToUInt16)((Builtin::i32(1) - shift).__ref());
			#line 1684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			sigC <<= shift;
		}
		#line 1686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		sigC = (sigC | __Float128_Protected::HiddenBit) << Builtin::i32(8);
		#line 1688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const auto expDiff = Builtin::i32{expResult} - expC; 
		#line 1689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto high256 = mulHigh; 
		#line 1690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto low256 = mulLow; 
		#line 1691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::u128 cHigh{}, cLow{}; 
		#line 1692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((expDiff <=> Builtin::i32(0)) < 0) {
			#line 1693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			expResult = ADV_UFCS(NarrowToInt16)(expC.__ref());
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
					const auto x128 = (low256 >> Builtin::i32(1)) | (sigResult << Builtin::i32(127)); 
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
					const auto& [r, o] = ADV_UFCS(CarryingAdd)(low256.__ref(), low256, Builtin::Boolean(false));
					#line 1709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					const auto& [r1, __var_1709_24] = ADV_UFCS(CarryingAdd)(high256.__ref(), high256, o);
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
							auto tmpCLow = cLow; 
							#line 1720 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							auto tmpCHigh = cHigh; 
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
							const auto shift = (-expDiff) & Builtin::i32(255); 
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
					const auto& [r, o] = ADV_UFCS(CarryingAdd)(low256.__ref(), cLow, Builtin::Boolean(false));
					#line 1756 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					const auto& [r1, __var_1756_24] = ADV_UFCS(CarryingAdd)(high256.__ref(), cHigh, o);
					#line 1757 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					high256 = r1;
					#line 1758 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					low256 = r;
					#line 1759 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					sigResult = high256;
				}
			}
			#line 1762 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if ((ADV_UFCS(High64)(sigResult.__ref()) & Builtin::u64(0x0200000000000000ULL)) != Builtin::i32(0)) {
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
						resultExtra = ADV_UFCS(High64)(low256.__ref()) | ADV_UFCS(Low64)(high256.__ref());
						#line 1772 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						if (resultExtra != Builtin::i32(0)) {
							#line 1773 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							ADV_UFCS(_operator_sub_sub_mod)(sigResult);
						}
						#line 1775 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						if ((ADV_UFCS(High64)(sigResult.__ref()) & Builtin::i64(0x0100000000000000LL)) == Builtin::i32(0)) {
							#line 1776 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							--expResult;
							#line 1777 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							shiftDist = Builtin::i32(7);
						}
						#line 1780 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						resultExtra = (ADV_UFCS(Low64)(sigResult.__ref()) << (Builtin::i32(64) - shiftDist)) | (resultExtra != Builtin::i32(0) ? Builtin::u64(1ULL) : Builtin::u64(0ULL));
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
							const auto& [r, o] = ADV_UFCS(BorrowingSub)(cLow.__ref(), low256, Builtin::Boolean(false));
							#line 1787 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							const auto& [r1, __var_1787_28] = ADV_UFCS(BorrowingSub)(cHigh.__ref(), high256, o);
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
						if ((ADV_UFCS(High64)(sigResult.__ref()) & Builtin::ParseInt128("0x8000000000000000")) != Builtin::i32(0)) {
							#line 1799 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							signResult = !signResult;
							#line 1800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							high256 ^= __Float128_Protected::SignMask;
						}
					} else {
						#line 1802 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						{
							#line 1803 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							const auto& [r, o] = ADV_UFCS(BorrowingSub)(low256.__ref(), cLow, Builtin::Boolean(false));
							#line 1804 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							const auto& [r1, __var_1804_24] = ADV_UFCS(BorrowingSub)(high256.__ref(), cHigh, o);
							#line 1805 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							high256 = r1;
							#line 1806 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							low256 = r;
							#line 1808 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							if ((expDiff <=> Builtin::i32(1)) > 0) {
								#line 1809 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
								sigResult = high256;
								#line 1810 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
								if ((ADV_UFCS(High64)(sigResult.__ref()) & Builtin::u64(0x0100000000000000ULL)) == Builtin::i32(0)) {
									#line 1811 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
									--expResult;
									#line 1812 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
									shiftDist = Builtin::i32(7);
								}
								#line 1814 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
								resultExtra = (ADV_UFCS(Low64)(sigResult.__ref()) << (Builtin::i32(64) - shiftDist)) | (low256 != Builtin::i32(0) ? Builtin::u64(1ULL) : Builtin::u64(0ULL));
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
				resultExtra = ADV_UFCS(High64)(low256.__ref());
				#line 1822 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				const auto low0 = ADV_UFCS(Low64)(low256.__ref()); 
				#line 1823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if (ADV_UFCS(High64)(sigResult.__ref()) != Builtin::i32(0)) {
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
						sigResult = Builtin::u128{ADV_UFCS(Low64)(sigResult.__ref()), resultExtra};
						#line 1830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						resultExtra = low0;
						#line 1831 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						if (ADV_UFCS(High64)(sigResult.__ref()) == Builtin::i32(0)) {
							#line 1832 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							expResult -= Builtin::i32(64);
							#line 1833 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
							sigResult = Builtin::u128{low0, Builtin::u32(0U)};
						}
					}
				}
				#line 1837 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				shiftDist = Builtin::Cast<true, Builtin::i32>(ADV_UPCS(LeadingZeroCount)(ADV_UFCS(High64)(sigResult.__ref()).__ref()));
				#line 1838 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				expResult += Builtin::i32(7) - shiftDist;
				#line 1839 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				shiftDist = Builtin::i32(15) - shiftDist;
				#line 1840 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if ((shiftDist <=> Builtin::i32(0)) > 0) {
					#line 1841 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					resultExtra = (ADV_UFCS(Low64)(sigResult.__ref()) << (Builtin::i32(64) - shiftDist)) | (low256 != Builtin::i32(0) ? Builtin::u64(1ULL) : Builtin::u64(0ULL));
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
					const auto shifted = Builtin::u128{resultExtra} << shiftDist; 
					#line 1849 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					const auto x64 = ADV_UFCS(High64)(shifted.__ref()); 
					#line 1850 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					resultExtra = ADV_UFCS(Low64)(shifted.__ref());
					#line 1851 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					sigResult |= x64;
				}
				#line 1853 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				return ADV_USFCS((Builtin::f128), FromBits)(RoundPackBits(signResult, expResult - Builtin::i32(1), sigResult, resultExtra));
			}
		}
		#line 1856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		resultExtra = (ADV_UFCS(Low64)(sigResult.__ref()) << (Builtin::i32(64) - shiftDist)) | (low256 != Builtin::i32(0) ? Builtin::u64(1ULL) : Builtin::u64(0ULL));
		#line 1857 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		sigResult >>= shiftDist;
		#line 1858 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return ADV_USFCS((Builtin::f128), FromBits)(RoundPackBits(signResult, expResult - Builtin::i32(1), sigResult, resultExtra));
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1861 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto Ieee754Remainder(__extension_Float128_1425_f128 const& __this LIFETIMEBOUND, __extension_Float128_2039_f128 rhs)  -> const typename __extension_Float128_1425_f128
	{
		#line 1864 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const auto bitsA = ADV_UPCS(Bits)(__this.__ref()); 
		#line 1865 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const auto signA = (bitsA & __Float128_Protected::SignMask) != Builtin::i32(0); 
		#line 1866 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto expA = ADV_UFCS(NarrowToInt16)(__Float128_Protected::ExtractBiasedExponentFromBits(bitsA).__ref()); 
		#line 1867 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto sigA = __Float128_Protected::ExtractTrailingSignificandFromBits(bitsA); 
		#line 1869 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const auto bitsB = ADV_UPCS(Bits)(rhs.__ref()); 
		#line 1870 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto expB = ADV_UFCS(NarrowToInt16)(__Float128_Protected::ExtractBiasedExponentFromBits(bitsB).__ref()); 
		#line 1871 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto sigB = __Float128_Protected::ExtractTrailingSignificandFromBits(bitsB); 
		#line 1877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (expA == Builtin::i32(0x7FFF)) {
			#line 1878 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return ADV_USPCS(NaN, __extension_Float128_2039_f128)();
		}
		#line 1881 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (expB == Builtin::i32(0x7FFF)) {
			#line 1883 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if (sigB != Builtin::i32(0)) {
				#line 1884 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				return ADV_USPCS(NaN, __extension_Float128_2039_f128)();
			}
			#line 1888 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			return __this;
		}
		#line 1892 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if (expB == Builtin::i32(0)) {
			#line 1894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if (sigB == Builtin::i32(0)) {
				#line 1895 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				return ADV_USPCS(NaN, __extension_Float128_2039_f128)();
			}
			#line 1899 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			const auto shift = Builtin::i32{ADV_UPCS(LeadingZeroCount)(sigA.__ref())} - Builtin::i32(15); 
			#line 1900 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			expA = Builtin::i16(1) - shift;
			#line 1901 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			sigA <<= shift;
		}
		#line 1905 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		sigA |= __Float128_Protected::HiddenBit;
		#line 1906 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		sigB |= __Float128_Protected::HiddenBit;
		#line 1907 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto rem = sigA; 
		#line 1908 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::u128 altRem{}; 
		#line 1909 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto expDiff = Builtin::i32{expA} - expB; 
		#line 1910 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		Builtin::u32 q{}; 
		#line 1911 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto selectRem = Builtin::Boolean(false); 
		#line 1912 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((expDiff <=> Builtin::i32(1)) < 0) {
			#line 1914 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if ((expDiff <=> Builtin::i32(-1)) < 0) {
				#line 1915 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				return __this;
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
				const auto recip = Builtin::ReciprocalApproximate(ADV_UFCS(NarrowToUInt32)((sigB >> Builtin::i32(81)).__ref())); 
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
					q64 = ADV_UFCS(_operator_mul_mod)(ADV_UFCS(Low64)((rem >> Builtin::i32(83)).__ref()), recip);
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
					if ((rem & __Float128_Protected::SignMask) != Builtin::i32(0)) {
						#line 1946 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						ADV_UFCS(_operator_add_mod_eq)(rem, sigB);
					}
					#line 1949 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					expDiff -= Builtin::i32(29);
				}
				#line 1951 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				ADV_ASSERT(((expDiff <=> Builtin::i32(-29)) >= 0), u"expDiff>=-29");
				#line 1953 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				q = Builtin::u32{q64 >> Builtin::i32(32)} >> (ADV_UFCS(_operator_not)(expDiff) & Builtin::i32(31));
				#line 1954 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				rem <<= expDiff + Builtin::i32(30);
				#line 1955 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				term = ADV_UFCS(_operator_mul_mod)(sigB, q);
				#line 1956 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				ADV_UFCS(_operator_sub_mod_eq)(rem, term);
				#line 1957 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if ((rem & __Float128_Protected::SignMask) != Builtin::i32(0)) {
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
			} while ((rem & __Float128_Protected::SignMask) == Builtin::i32(0));
		}
		#line 1971 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const auto meanRem = ADV_UFCS(_operator_add_mod)(rem, altRem); 
		#line 1972 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		const auto q1 = q & Builtin::u32(1U); 
		#line 1973 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((meanRem & __Float128_Protected::SignMask) != Builtin::i32(0) || (meanRem == Builtin::i32(0) && q1 != Builtin::i32(0))) {
			#line 1974 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			rem = altRem;
		}
		#line 1976 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto signRem = signA; 
		#line 1977 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((rem & __Float128_Protected::SignMask) != Builtin::i32(0)) {
			#line 1978 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			signRem = !signRem;
			#line 1979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			rem = ADV_UFCS(_operator_not)(rem) + Builtin::u32(1U);
		}
		#line 1982 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return ADV_USFCS((Builtin::f128), FromBits)(NormalizeRoundPackBits(signRem, expB - Builtin::i32(1), rem));
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1988 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
	auto ScaleB(__extension_Float128_1425_f128 const& __this LIFETIMEBOUND, Builtin::i32 n)  -> const typename __extension_Float128_1425_f128
	{
		#line 1990 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		auto x = __this; 
		#line 1992 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		if ((n <=> __Float128_Protected::MaxExponent) > 0) {
			#line 1993 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			constexpr auto maxExp = ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x7FFE0000000000000000000000000000"));
			#line 1995 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			x *= maxExp;
			#line 1996 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			n -= __Float128_Protected::MaxExponent;
			#line 1997 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if ((n <=> __Float128_Protected::MaxExponent) > 0) {
				#line 1998 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				x *= maxExp;
				#line 1999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				n -= __Float128_Protected::MaxExponent;
				#line 2000 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if ((n <=> __Float128_Protected::MaxExponent) > 0) {
					#line 2001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					n = __Float128_Protected::MaxExponent;
				}
			}
		} else {
			#line 2004 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
			if ((n <=> __Float128_Protected::MinExponent) < 0) {
				#line 2005 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				constexpr auto minExp = ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x00010000000000000000000000000000"));
				#line 2006 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				constexpr auto b113 = ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x40700000000000000000000000000000"));
				#line 2007 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				constexpr auto scaleb = minExp * b113;
				#line 2009 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				x *= scaleb;
				#line 2010 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				n += -__Float128_Protected::MinExponent - Builtin::i32(113);
				#line 2011 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if ((n <=> __Float128_Protected::MinExponent) < 0) {
					#line 2012 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					x *= scaleb;
					#line 2013 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					n += -__Float128_Protected::MinExponent - Builtin::i32(113);
					#line 2014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					if ((n <=> __Float128_Protected::MinExponent) < 0) {
						#line 2015 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
						n = __Float128_Protected::MinExponent;
					}
				}
				#line 2019 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				const auto result = __this * ADV_USFCS((Builtin::f128), FromBits)(Builtin::u128{Builtin::u64{Builtin::i32(0x3FFF) + n} << Builtin::i32(48), Builtin::u32(0U)}); 
				#line 2020 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				if (ADV_UPCS(IsInfinity)(result.__ref())) {
					#line 2021 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
					return ADV_USPCS(Zero, __extension_Float128_2039_f128)();
				}
				#line 2023 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
				return result;
			}
		}
		#line 2026 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128.ast"
		return __this * ADV_USFCS((Builtin::f128), FromBits)(Builtin::u128{Builtin::u64{Builtin::i32(0x3FFF) + n} << Builtin::i32(48), Builtin::u32(0U)});
	}
	
} namespace System{

}