#include "Float128.h"
#include "InlineArray.h"
#include "Float128_Pow.h"

namespace System {
union QuadShape;
//###############################################################################
//# Global type aliases
//###############################################################################
#if (ADV_VERSION_BIG_ENDIAN )
#line 353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
using QuadShape64 = __ntuples::NamedTuple_659f7778a6155ee5;
#endif 
#if (ADV_VERSION_BIG_ENDIAN )
#line 354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
using QuadShape32 = __ntuples::NamedTuple_2dcf424a354959c5;
#endif 
#if (!(ADV_VERSION_BIG_ENDIAN ))
#line 356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
using QuadShape64 = __ntuples::NamedTuple_a488367d9020e593;
#endif 
#if (!(ADV_VERSION_BIG_ENDIAN ))
#line 357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
using QuadShape32 = __ntuples::NamedTuple_da175a0d257547d1;
#endif 
//###############################################################################
//# Type definitions
//###############################################################################
class __Class_QuadShape;
	#line 360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
	union QuadShape {
		public: using __self = QuadShape;
		public: using __class = __Class_QuadShape;
		public: FORCE_INLINE constexpr decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) __ref() const noexcept { return *this; }
		#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		public: Builtin::f128 Value; ADV_CHECK_REF_STRUCT("f128", Builtin::f128);
		#line 362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		public: QuadShape64 Shape64; ADV_CHECK_REF_STRUCT("QuadShape64", QuadShape64);
		#line 363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		public: QuadShape32 Shape32; ADV_CHECK_REF_STRUCT("QuadShape32", QuadShape32);
		
	};
	
	
	#line 360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
	class __Class_QuadShape final : public Builtin::ValueType
	{
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		public: using __underlying = QuadShape; using __self = __underlying;
		__self __value;
		__Class_QuadShape(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
		operator __underlying() const noexcept { return __value; }
		
	};
	#line 360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
	ADV_CHECK_FOR_CONCRETE(QuadShape);
	
//###############################################################################
//# Free function declarations
//###############################################################################
#line 341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
	inline constexpr auto BiasedExponent(Builtin::f128 value) noexcept -> const Builtin::u16;
#line 342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
	inline constexpr auto Exponent(Builtin::f128 value) noexcept -> const Builtin::i16;
#line 343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
	inline constexpr auto Significand(Builtin::f128 value) noexcept -> const Builtin::u128;
#line 344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
	inline constexpr auto TrailingSignificand(Builtin::f128 value) noexcept -> const Builtin::u128;
#line 346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
	inline constexpr auto ExtractBiasedExponentFromBits(Builtin::u128 bits) noexcept -> const Builtin::u16;
#line 347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
	inline constexpr auto ExtractTrailingSignificandFromBits(Builtin::u128 bits) noexcept -> const Builtin::u128;
//###############################################################################
//# Global compile-time constants
//###############################################################################
#line 316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
inline constexpr auto SignMask = Builtin::ParseUInt128("0x80000000000000000000000000000000");
#line 317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
inline constexpr auto SignShift = Builtin::i32(127);
#line 318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
inline constexpr Builtin::u8 ShiftedSignMask = Builtin::u8{SignMask >> SignShift};
#line 320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
inline constexpr auto BiasedExponentMask = Builtin::ParseUInt128("0x7FFF0000000000000000000000000000");
#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
inline constexpr auto BiasedExponentShift = Builtin::i32(112);
#line 322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
inline constexpr Builtin::u16 ShiftedBiasedExponentMask = Builtin::u16{BiasedExponentMask >> BiasedExponentShift};
#line 324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
inline constexpr auto TrailingSignificandMask = Builtin::ParseUInt128("0x0000FFFFFFFFFFFFFFFFFFFFFFFFFFFF");
#line 326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
inline constexpr auto MinSign = Builtin::u8(0U);
#line 327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
inline constexpr auto MaxSign = Builtin::u8(1U);
#line 328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
inline constexpr auto MinBiasedExponent = ADV_USPCS(MinValue, Builtin::u16)();
#line 329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
inline constexpr auto MaxBiasedExponent = Builtin::u16(0x7FFFU);
#line 330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
inline constexpr auto ExpBias = Builtin::u16(16383U);
#line 331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
inline constexpr auto MinExponent = Builtin::i16(-16382);
#line 332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
inline constexpr auto MaxExponent = +Builtin::i16(16383);
#line 333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
inline constexpr auto MinTrailingSignificand = ADV_USPCS(MinValue, Builtin::u128)();
#line 334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
inline constexpr auto MaxTrailingSignificand = Builtin::ParseUInt128("0x0000FFFFFFFFFFFFFFFFFFFFFFFFFFFF");
#line 336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
inline constexpr auto TrailingSignificandLength = Builtin::i32(112);
#line 337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
inline constexpr auto SignificandLength = TrailingSignificandLength + Builtin::i32(1);
#line 339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
inline constexpr auto RoundingEpsilon = Builtin::BitCast<Builtin::f128>(Builtin::ParseUInt128("0x406F0000000000000000000000000000"));
#line 367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
inline constexpr auto PowBP = Builtin::ToInlineArray<Builtin::f128>({Builtin::f128(ADV_USPCS(One, Builtin::f128)()), Builtin::f128(ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFF8000000000000000000000000000")))});
#line 368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
inline constexpr auto PowDPH = Builtin::ToInlineArray<Builtin::f128>({Builtin::f128(ADV_USPCS(Zero, Builtin::f128)()), Builtin::f128(ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFE2B803473F7AD0000000000000000")))});
#line 369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
inline constexpr auto PowDPL = Builtin::ToInlineArray<Builtin::f128>({Builtin::f128(ADV_USPCS(Zero, Builtin::f128)()), Builtin::f128(ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FC9E7E802C48281A2EB74493CF9A8E9")))});
#line 370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
inline constexpr auto PowLN = Builtin::ToInlineArray<Builtin::f128>({Builtin::f128(ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xC003EC778283108DD351763D521CF8D2"))), Builtin::f128(ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x4005048B0968DA68634C653D93442FEA"))), Builtin::f128(ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xC0047280DD26AB32BBA22AE6244744E8"))), Builtin::f128(ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x40029053A0234C251CD1C99C785B5FD7"))), Builtin::f128(ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFFEFC3F1F7D5799D1FB891638353084")))});
#line 377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
inline constexpr auto PowLD = Builtin::ToInlineArray<Builtin::f128>({Builtin::f128(ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xC0049A63976D3876301937DDC470295E"))), Builtin::f128(ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x400622672C064F53B6C42A88A7888557"))), Builtin::f128(ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xC00630CF04057312CE1C70B9C6620DC8"))), Builtin::f128(ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x400521714A56547D4169123FBEA8F6A3"))), Builtin::f128(ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xC002DE24C65FC66A960194F8F1D9F146")))});
#line 384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
inline constexpr auto PowPN = Builtin::ToInlineArray<Builtin::f128>({Builtin::f128(ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x401BE4A36C931089E86DACEC7D0C4054"))), Builtin::f128(ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x40161DABFE9988E2E3E618A438A15AF6"))), Builtin::f128(ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x400E49320690B3D2BAA8F4FDB2683287"))), Builtin::f128(ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x4004A0149D04634B152F86660A120EFC"))), Builtin::f128(ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FF829CEC291D9449CC010B8DCC794E7")))});
#line 391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
inline constexpr auto PowPD = Builtin::ToInlineArray<Builtin::f128>({Builtin::f128(ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x401E6B7A916E4C676E5241B15DC93056"))), Builtin::f128(ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x4019981BF72DFA1487E53E0CF6161D0C"))), Builtin::f128(ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x40129348B8B27A6A2C4303B12D43967F"))), Builtin::f128(ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x4009D4255D86476D8725A341C32C275E")))});
//###############################################################################
//# Global variable declarations
//###############################################################################
#line 398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
static const Builtin::f128 PowLG2 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFE62E42FEFA39EF35793C7673007E6"));
#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
static const Builtin::f128 PowLG2H = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFE62E42FEFA39EF000000000000000"));
#line 400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
static const Builtin::f128 PowLG2L = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FC7ABC9E3B39803F2F6AF40F3432673"));
#line 401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
static const Builtin::f128 PowOVT = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FC971547652B82FE459FDE3A492DA6D"));
#line 402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
static const Builtin::f128 PowCP = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFEEC709DC3A03FD749FC15522BC2F9"));
#line 403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
static const Builtin::f128 PowCPH = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFEEC709DC3A03FD000000000000000"));
#line 404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
static const Builtin::f128 PowCPL = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FC8D27F05548AF0BE29B09CE4FC7094"));

	
	#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
	auto PowImpl(Builtin::f128 x, Builtin::f128 exp)  -> const Builtin::f128
	{
		#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		constexpr Builtin::Auto<decltype(ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x40700000000000000000000000000000")))> Two113 = ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x40700000000000000000000000000000"));
		#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		constexpr Builtin::Auto<decltype(ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x66ECB8E499A888235EA66F6497E3640C")))> Huge = ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x66ECB8E499A888235EA66F6497E3640C"));
		#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		constexpr Builtin::Auto<decltype(ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x191129499E4033AF742AE235CC081BCC")))> Tiny = ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x191129499E4033AF742AE235CC081BCC"));
		#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		QuadShape o{}, p{}, q{}; 
		#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		ADV_UPCS(Value)(p.__ref()) = x;
		#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		const Builtin::Auto<decltype(ADV_UFCS(NarrowToInt32)(ADV_UPCS(HighHi)(ADV_UPCS(Shape32)(p.__ref()).__ref()).__ref()))> hx = ADV_UFCS(NarrowToInt32)(ADV_UPCS(HighHi)(ADV_UPCS(Shape32)(p.__ref()).__ref()).__ref()); 
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		Builtin::Auto<decltype(ADV_UFCS(NarrowToUInt32)((hx & Builtin::i32(0x7fffffff)).__ref()))> ix = ADV_UFCS(NarrowToUInt32)((hx & Builtin::i32(0x7fffffff)).__ref()); 
		#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		ADV_UPCS(Value)(q.__ref()) = exp;
		#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		const Builtin::Auto<decltype(ADV_UFCS(NarrowToInt32)(ADV_UPCS(HighHi)(ADV_UPCS(Shape32)(q.__ref()).__ref()).__ref()))> hy = ADV_UFCS(NarrowToInt32)(ADV_UPCS(HighHi)(ADV_UPCS(Shape32)(q.__ref()).__ref()).__ref()); 
		#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		Builtin::Auto<decltype(ADV_UFCS(NarrowToUInt32)((hy & Builtin::i32(0x7fffffff)).__ref()))> iy = ADV_UFCS(NarrowToUInt32)((hy & Builtin::i32(0x7fffffff)).__ref()); 
		#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		if ((iy | ADV_UPCS(HighLo)(ADV_UPCS(Shape32)(q.__ref()).__ref()) | ADV_UPCS(LowHi)(ADV_UPCS(Shape32)(q.__ref()).__ref()) | ADV_UPCS(LowLo)(ADV_UPCS(Shape32)(q.__ref()).__ref())) == Builtin::i32(0)) {
			#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
			return ADV_USPCS(One, Builtin::f128)();
		}
		#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		if (x == ADV_USPCS(One, Builtin::f128)()) {
			#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
			return x; ADV_CHECK_REF_STRUCT_PARAM_RETURN(x, "f128", Builtin::f128);
		}
		#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		if (x == ADV_USPCS(MinusOne, Builtin::f128)() && iy == Builtin::u32(0x7fff0000U) && (ADV_UPCS(HighLo)(ADV_UPCS(Shape32)(q.__ref()).__ref()) | ADV_UPCS(LowHi)(ADV_UPCS(Shape32)(q.__ref()).__ref()) | ADV_UPCS(LowLo)(ADV_UPCS(Shape32)(q.__ref()).__ref())) == Builtin::i32(0)) {
			#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
			return ADV_USPCS(One, Builtin::f128)();
		}
		#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		if ((ix <=> Builtin::i32(0x7fff0000)) > 0 || (ix == Builtin::i32(0x7fff0000) && (ADV_UPCS(HighLo)(ADV_UPCS(Shape32)(p.__ref()).__ref()) | ADV_UPCS(LowHi)(ADV_UPCS(Shape32)(p.__ref()).__ref()) | ADV_UPCS(LowLo)(ADV_UPCS(Shape32)(p.__ref()).__ref())) != Builtin::i32(0)) || (iy <=> Builtin::i32(0x7fff0000)) > 0 || (iy == Builtin::i32(0x7fff0000) && (ADV_UPCS(HighLo)(ADV_UPCS(Shape32)(q.__ref()).__ref()) | ADV_UPCS(LowHi)(ADV_UPCS(Shape32)(q.__ref()).__ref()) | ADV_UPCS(LowLo)(ADV_UPCS(Shape32)(q.__ref()).__ref())) != Builtin::i32(0))) {
			#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
			return ADV_USPCS(NaN, Builtin::f128)();
		}
		#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		Builtin::Auto<decltype(Builtin::i32(0))> yOdd = Builtin::i32(0); 
		#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		Builtin::f128 z{}; 
		#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		if ((hx <=> Builtin::i32(0)) < 0) {
			#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
			if ((iy <=> Builtin::u32(0x40700000U)) >= 0) {
				#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
				yOdd = Builtin::i32(2);
			} else {
				#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
				if ((iy <=> Builtin::u32(0x3fff0000U)) >= 0) {
					#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
					if (ADV_UPCS(IsInteger)(exp.__ref())) {
						#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
						z = ADV_USPCS(HalfOne, Builtin::f128)() * exp;
						#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
						if (ADV_UPCS(IsInteger)(z.__ref())) {
							#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
							yOdd = Builtin::i32(2);
						} else {
							#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
							{
								#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
								yOdd = Builtin::i32(1);
							}
						}
					}
				}
			}
		}
		#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		if ((ADV_UPCS(HighLo)(ADV_UPCS(Shape32)(q.__ref()).__ref()) | ADV_UPCS(LowHi)(ADV_UPCS(Shape32)(q.__ref()).__ref()) | ADV_UPCS(LowLo)(ADV_UPCS(Shape32)(q.__ref()).__ref())) == Builtin::i32(0)) {
			#line 71 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
			if (iy == Builtin::u32(0x7fff0000U)) {
				#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
				if (((ix - Builtin::u32(0x3FFF0000U)) | ADV_UPCS(HighLo)(ADV_UPCS(Shape32)(p.__ref()).__ref()) | ADV_UPCS(LowHi)(ADV_UPCS(Shape32)(p.__ref()).__ref()) | ADV_UPCS(LowLo)(ADV_UPCS(Shape32)(p.__ref()).__ref())) == Builtin::i32(0)) {
					#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
					return ADV_USPCS(NaN, Builtin::f128)();
				} else {
					#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
					if ((ix <=> Builtin::u32(0x3fff0000U)) >= 0) {
						#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
						return (hy <=> Builtin::i32(0)) >= 0 ? exp : ADV_USPCS(Zero, Builtin::f128)();
					} else {
						#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
						{
							#line 84 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
							return (hy <=> Builtin::i32(0)) < 0 ? -exp : ADV_USPCS(Zero, Builtin::f128)();
						}
					}
				}
			}
			#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
			if (iy == Builtin::i32(0x3fff0000)) {
				#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
				if ((hy <=> Builtin::i32(0)) < 0) {
					#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
					return ADV_UPCS(ReciprocalEstimate)(x.__ref()); ADV_CHECK_REF_STRUCT_PARAM_RETURN(x, "f128", Builtin::f128);
				} else {
					#line 95 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
					{
						#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
						return x; ADV_CHECK_REF_STRUCT_PARAM_RETURN(x, "f128", Builtin::f128);
					}
				}
			}
			#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
			if (hy == Builtin::i32(0x40000000)) {
				#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
				return x * x;
			}
			#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
			if (hy == Builtin::i32(0x3ffe0000)) {
				#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
				if ((hx <=> Builtin::i32(0)) >= 0) {
					#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
					return ADV_UPCS(Sqrt)(x.__ref()); ADV_CHECK_REF_STRUCT_PARAM_RETURN(x, "f128", Builtin::f128);
				}
			}
		}
		#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		Builtin::Auto<decltype(ADV_UPCS(Abs)(x.__ref()))> ax = ADV_UPCS(Abs)(x.__ref()); 
		#line 117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		if ((ADV_UPCS(HighLo)(ADV_UPCS(Shape32)(p.__ref()).__ref()) | ADV_UPCS(LowHi)(ADV_UPCS(Shape32)(p.__ref()).__ref()) | ADV_UPCS(LowLo)(ADV_UPCS(Shape32)(p.__ref()).__ref())) == Builtin::i32(0)) {
			#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
			if (ix == Builtin::i32(0x7fff0000) || ix == Builtin::i32(0) || ix == Builtin::i32(0x3fff0000)) {
				#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
				z = ax;
				#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
				if ((hy <=> Builtin::i32(0)) < 0) {
					#line 122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
					z = ADV_UPCS(ReciprocalEstimate)(z.__ref());
				}
				#line 124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
				if ((hx <=> Builtin::i32(0)) < 0) {
					#line 125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
					if (((ix - Builtin::i32(0x3fff0000)) | Builtin::u32{yOdd}) == Builtin::i32(0)) {
						#line 126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
						z = ADV_USPCS(NaN, Builtin::f128)();
					} else {
						#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
						if (yOdd == Builtin::i32(1)) {
							#line 128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
							z = -z;
						}
					}
				}
				#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
				return z; ADV_CHECK_REF_STRUCT_LOCAL_RETURN("f128", Builtin::f128);
			}
		}
		#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		if ((((ADV_UFCS(_operator_gt_gt_gt)(hx, Builtin::i32(31))) - Builtin::i32(1)) | Builtin::u32{yOdd}) == Builtin::i32(0)) {
			#line 138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
			return ADV_USPCS(NaN, Builtin::f128)();
		}
		#line 144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		if ((iy <=> Builtin::u32(0x401d654bU)) > 0) {
			#line 145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
			if ((iy <=> Builtin::u32(0x407d654bU)) > 0) {
				#line 146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
				if ((ix <=> Builtin::u32(0x3ffeffffU)) <= 0) {
					#line 147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
					return (hy <=> Builtin::i32(0)) < 0 ? Huge * Huge : Tiny * Tiny;
				}
				#line 149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
				if ((ix <=> Builtin::u32(0x3fff0000U)) >= 0) {
					#line 150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
					return (hy <=> Builtin::i32(0)) > 0 ? Huge * Huge : Tiny * Tiny;
				}
			}
			#line 154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
			if ((ix <=> Builtin::u32(0x3ffeffffU)) < 0) {
				#line 155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
				return (hy <=> Builtin::i32(0)) < 0 ? Huge * Huge : Tiny * Tiny;
			}
			#line 157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
			if ((ix <=> Builtin::u32(0x3fff0000U)) > 0) {
				#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
				return (hy <=> Builtin::i32(0)) > 0 ? Huge * Huge : Tiny * Tiny;
			}
		}
		#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		Builtin::Auto<decltype(Builtin::i32(0))> n = Builtin::i32(0); 
		#line 164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		if ((ix <=> Builtin::u32(0x00010000U)) < 0) {
			#line 165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
			ax *= Two113;
			#line 166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
			n -= Builtin::i32(113);
			#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
			ADV_UPCS(Value)(o.__ref()) = ax;
			#line 168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
			ix = ADV_UPCS(HighHi)(ADV_UPCS(Shape32)(o.__ref()).__ref());
		}
		#line 171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		n += ADV_UFCS(NarrowToInt32)((ix >> Builtin::i32(16)).__ref()) - Builtin::i32(0x3FFF);
		#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		Builtin::Auto<decltype(ADV_UFCS(NarrowToInt32)((ix & Builtin::u32(0x0000ffffU)).__ref()))> j = ADV_UFCS(NarrowToInt32)((ix & Builtin::u32(0x0000ffffU)).__ref()); 
		#line 175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		ix = ADV_UFCS(NarrowToUInt32)((j | Builtin::i32(0x3fff0000)).__ref());
		#line 177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		Builtin::i32 k{}; 
		#line 178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		if ((j <=> Builtin::i32(0x3988)) <= 0) {
			#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
			k = Builtin::i32(0);
		} else {
			#line 180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
			if ((j <=> Builtin::i32(0xbb67)) < 0) {
				#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
				k = Builtin::i32(1);
			} else {
				#line 182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
				{
					#line 183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
					k = Builtin::i32(0);
					#line 184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
					n++;
					#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
					ix -= Builtin::i32(0x00010000);
				}
			}
		}
		#line 188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		ADV_UPCS(Value)(o.__ref()) = ax;
		#line 189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		ADV_UPCS(HighHi)(ADV_UPCS(Shape32)(o.__ref()).__ref()) = ix;
		#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		ax = ADV_UPCS(Value)(o.__ref());
		#line 192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		Builtin::Auto<decltype(ax - ADV_UFCS(_operator_subscript)(PowBP.__ref(), k))> u = ax - ADV_UFCS(_operator_subscript)(PowBP.__ref(), k); 
		#line 193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		Builtin::Auto<decltype(ADV_USPCS(One, Builtin::f128)() / (ax + ADV_UFCS(_operator_subscript)(PowBP.__ref(), k)))> v = ADV_USPCS(One, Builtin::f128)() / (ax + ADV_UFCS(_operator_subscript)(PowBP.__ref(), k)); 
		#line 194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		Builtin::Auto<decltype(u * v)> s = u * v; 
		#line 195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		Builtin::Auto<decltype(s)> sh = s; 
		#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		ADV_UPCS(Value)(o.__ref()) = sh;
		#line 198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		ADV_UPCS(LowLo)(ADV_UPCS(Shape32)(o.__ref()).__ref()) = Builtin::u32(0U);
		#line 199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		ADV_UPCS(LowHi)(ADV_UPCS(Shape32)(o.__ref()).__ref()) &= Builtin::u32(0xf8000000U);
		#line 200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		sh = ADV_UPCS(Value)(o.__ref());
		#line 202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		Builtin::Auto<decltype(ax + ADV_UFCS(_operator_subscript)(PowBP.__ref(), k))> th = ax + ADV_UFCS(_operator_subscript)(PowBP.__ref(), k); 
		#line 203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		ADV_UPCS(Value)(o.__ref()) = th;
		#line 204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		ADV_UPCS(LowLo)(ADV_UPCS(Shape32)(o.__ref()).__ref()) = Builtin::u32(0U);
		#line 205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		ADV_UPCS(LowHi)(ADV_UPCS(Shape32)(o.__ref()).__ref()) &= Builtin::u32(0xf8000000U);
		#line 206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		th = ADV_UPCS(Value)(o.__ref());
		#line 207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		Builtin::Auto<decltype(ax - (th - ADV_UFCS(_operator_subscript)(PowBP.__ref(), k)))> tl = ax - (th - ADV_UFCS(_operator_subscript)(PowBP.__ref(), k)); 
		#line 208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		Builtin::Auto<decltype(v * ((u - sh * th) - sh * tl))> sl = v * ((u - sh * th) - sh * tl); 
		#line 211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		Builtin::Auto<decltype(s * s)> s2 = s * s; 
		#line 212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		u = ADV_UFCS(_operator_subscript)(PowLN.__ref(), Builtin::i32(0)) + s2 * (ADV_UFCS(_operator_subscript)(PowLN.__ref(), Builtin::i32(1)) + s2 * (ADV_UFCS(_operator_subscript)(PowLN.__ref(), Builtin::i32(2)) + s2 * (ADV_UFCS(_operator_subscript)(PowLN.__ref(), Builtin::i32(3)) + s2 * ADV_UFCS(_operator_subscript)(PowLN.__ref(), Builtin::i32(4)))));
		#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		v = ADV_UFCS(_operator_subscript)(PowLD.__ref(), Builtin::i32(0)) + s2 * (ADV_UFCS(_operator_subscript)(PowLD.__ref(), Builtin::i32(1)) + s2 * (ADV_UFCS(_operator_subscript)(PowLD.__ref(), Builtin::i32(2)) + s2 * (ADV_UFCS(_operator_subscript)(PowLD.__ref(), Builtin::i32(3)) + s2 * (ADV_UFCS(_operator_subscript)(PowLD.__ref(), Builtin::i32(4)) + s2))));
		#line 214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		Builtin::Auto<decltype(s2 * s2 * u / v)> r = s2 * s2 * u / v; 
		#line 215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		r += sl * (sh + s);
		#line 216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		s2 = sh * sh;
		#line 217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		th = ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x40008000000000000000000000000000")) + s2 + r;
		#line 218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		ADV_UPCS(Value)(o.__ref()) = th;
		#line 219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		ADV_UPCS(LowLo)(ADV_UPCS(Shape32)(o.__ref()).__ref()) = Builtin::u32(0U);
		#line 220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		ADV_UPCS(LowHi)(ADV_UPCS(Shape32)(o.__ref()).__ref()) &= Builtin::u32(0xf8000000U);
		#line 221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		th = ADV_UPCS(Value)(o.__ref());
		#line 222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		tl = r - ((th - ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x40008000000000000000000000000000"))) - s2);
		#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		u = sh * th;
		#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		v = sl * th + tl * s;
		#line 225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		Builtin::Auto<decltype(u + v)> ph = u + v; 
		#line 226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		ADV_UPCS(Value)(o.__ref()) = ph;
		#line 227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		ADV_UPCS(LowLo)(ADV_UPCS(Shape32)(o.__ref()).__ref()) = Builtin::u32(0U);
		#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		ADV_UPCS(LowHi)(ADV_UPCS(Shape32)(o.__ref()).__ref()) &= Builtin::u32(0xf8000000U);
		#line 229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		ph = ADV_UPCS(Value)(o.__ref());
		#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		Builtin::Auto<decltype(v - (ph - u))> pl = v - (ph - u); 
		#line 231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		Builtin::Auto<decltype(PowCPH * ph)> zh = PowCPH * ph; 
		#line 232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		Builtin::Auto<decltype(PowCPL * ph + pl * PowCP + ADV_UFCS(_operator_subscript)(PowDPL.__ref(), k))> zl = PowCPL * ph + pl * PowCP + ADV_UFCS(_operator_subscript)(PowDPL.__ref(), k); 
		#line 233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		Builtin::f128 t = n; 
		#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		Builtin::Auto<decltype((((zh + zl) + ADV_UFCS(_operator_subscript)(PowDPH.__ref(), k)) + t))> t1 = (((zh + zl) + ADV_UFCS(_operator_subscript)(PowDPH.__ref(), k)) + t); 
		#line 235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		ADV_UPCS(Value)(o.__ref()) = t1;
		#line 236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		ADV_UPCS(LowLo)(ADV_UPCS(Shape32)(o.__ref()).__ref()) = Builtin::u32(0U);
		#line 237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		ADV_UPCS(LowHi)(ADV_UPCS(Shape32)(o.__ref()).__ref()) &= Builtin::u32(0xf8000000U);
		#line 238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		t1 = ADV_UPCS(Value)(o.__ref());
		#line 239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		Builtin::Auto<decltype(zl - (((t1 - t) - ADV_UFCS(_operator_subscript)(PowDPH.__ref(), k)) - zh))> t2 = zl - (((t1 - t) - ADV_UFCS(_operator_subscript)(PowDPH.__ref(), k)) - zh); 
		#line 242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		s = ADV_USPCS(One, Builtin::f128)();
		#line 243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		if ((((ADV_UFCS(_operator_gt_gt_gt)(hx, Builtin::i32(31))) - Builtin::i32(1)) | ADV_UFCS(NarrowToUInt32)((yOdd - Builtin::i32(1)).__ref())) == Builtin::i32(0)) {
			#line 244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
			s = ADV_USPCS(MinusOne, Builtin::f128)();
		}
		#line 248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		Builtin::Auto<decltype(exp)> yy1 = exp; 
		#line 249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		ADV_UPCS(Value)(o.__ref()) = yy1;
		#line 250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		ADV_UPCS(LowLo)(ADV_UPCS(Shape32)(o.__ref()).__ref()) = Builtin::u32(0U);
		#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		ADV_UPCS(LowHi)(ADV_UPCS(Shape32)(o.__ref()).__ref()) &= Builtin::u32(0xf8000000U);
		#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		yy1 = ADV_UPCS(Value)(o.__ref());
		#line 253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		pl = (exp - yy1) * t1 + exp * t2;
		#line 254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		ph = yy1 * t1;
		#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		z = pl + ph;
		#line 256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		ADV_UPCS(Value)(o.__ref()) = z;
		#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		j = ADV_UFCS(NarrowToInt32)(ADV_UPCS(HighHi)(ADV_UPCS(Shape32)(o.__ref()).__ref()).__ref());
		#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		if ((j <=> Builtin::i32(0x400d0000)) >= 0) {
			#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
			if ((ADV_UFCS(NarrowToUInt32)((ADV_UFCS(_operator_sub_mod)(j, Builtin::i32(0x400d0000))).__ref()) | ADV_UPCS(HighLo)(ADV_UPCS(Shape32)(o.__ref()).__ref()) | ADV_UPCS(LowHi)(ADV_UPCS(Shape32)(o.__ref()).__ref()) | ADV_UPCS(LowLo)(ADV_UPCS(Shape32)(o.__ref()).__ref())) != Builtin::i32(0)) {
				#line 262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
				return s * Huge * Huge;
			} else {
				#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
				if ((pl + PowOVT <=> z - ph) > 0) {
					#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
					return s * Huge * Huge;
				}
			}
		} else {
			#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
			if (((j & Builtin::i32(0x7fffffff)) <=> Builtin::i32(0x400d01b9)) >= 0) {
				#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
				if ((ADV_UFCS(NarrowToUInt32)((ADV_UFCS(_operator_sub_mod)(j, Builtin::i64(0xc00d01bcLL))).__ref()) | ADV_UPCS(HighLo)(ADV_UPCS(Shape32)(o.__ref()).__ref()) | ADV_UPCS(LowHi)(ADV_UPCS(Shape32)(o.__ref()).__ref()) | ADV_UPCS(LowLo)(ADV_UPCS(Shape32)(o.__ref()).__ref())) != Builtin::i32(0)) {
					#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
					return s * Tiny * Tiny;
				} else {
					#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
					if ((pl <=> z - ph) <= 0) {
						#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
						return s * Tiny * Tiny;
					}
				}
			}
		}
		#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		Builtin::Auto<decltype(j & Builtin::i32(0x7fffffff))> i = j & Builtin::i32(0x7fffffff); 
		#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		k = (i >> Builtin::i32(16)) - Builtin::i32(0x3fff);
		#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		n = Builtin::i32(0);
		#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		if ((i <=> Builtin::i32(0x3ffe0000)) > 0) {
			#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
			n = ADV_UFCS(FloorToInt32)((z + ADV_USPCS(HalfOne, Builtin::f128)()).__ref());
			#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
			t = n;
			#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
			ph -= t;
		}
		#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		t = pl + ph;
		#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		ADV_UPCS(Value)(o.__ref()) = t;
		#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		ADV_UPCS(LowLo)(ADV_UPCS(Shape32)(o.__ref()).__ref()) = Builtin::u32(0U);
		#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		ADV_UPCS(LowHi)(ADV_UPCS(Shape32)(o.__ref()).__ref()) &= Builtin::u32(0xf8000000U);
		#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		t = ADV_UPCS(Value)(o.__ref());
		#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		u = t * PowLG2H;
		#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		v = (pl - (t - ph)) * PowLG2 + t * PowLG2L;
		#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		z = u + v;
		#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		Builtin::Auto<decltype(v - (z - u))> w = v - (z - u); 
		#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		t = z * z;
		#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		u = ADV_UFCS(_operator_subscript)(PowPN.__ref(), Builtin::i32(0)) + t * (ADV_UFCS(_operator_subscript)(PowPN.__ref(), Builtin::i32(1)) + t * (ADV_UFCS(_operator_subscript)(PowPN.__ref(), Builtin::i32(2)) + t * (ADV_UFCS(_operator_subscript)(PowPN.__ref(), Builtin::i32(3)) + t * ADV_UFCS(_operator_subscript)(PowPN.__ref(), Builtin::i32(4)))));
		#line 298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		v = ADV_UFCS(_operator_subscript)(PowPD.__ref(), Builtin::i32(0)) + t * (ADV_UFCS(_operator_subscript)(PowPD.__ref(), Builtin::i32(1)) + t * (ADV_UFCS(_operator_subscript)(PowPD.__ref(), Builtin::i32(2)) + t * (ADV_UFCS(_operator_subscript)(PowPD.__ref(), Builtin::i32(3)) + t)));
		#line 299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		t1 = z - t * u / v;
		#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		r = (z * t1) / (t1 - Builtin::f128{Builtin::i32(2)}) - (w + z * w);
		#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		z = ADV_USPCS(One, Builtin::f128)() - (r - z);
		#line 302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		ADV_UPCS(Value)(o.__ref()) = z;
		#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		j = ADV_UFCS(NarrowToInt32)(ADV_UPCS(HighHi)(ADV_UPCS(Shape32)(o.__ref()).__ref()).__ref());
		#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		j += (n << Builtin::i32(16));
		#line 305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		if (((j >> Builtin::i32(16)) <=> Builtin::i32(0)) <= 0) {
			#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
			z = ADV_UFCS(ScaleB)(z.__ref(), n);
		} else {
			#line 307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
			{
				#line 308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
				ADV_UPCS(HighHi)(ADV_UPCS(Shape32)(o.__ref()).__ref()) = ADV_UFCS(NarrowToUInt32)(j.__ref());
				#line 309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
				z = ADV_UPCS(Value)(o.__ref());
			}
		}
		#line 312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		return s * z;
	}




















#line 341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
	inline constexpr auto BiasedExponent(Builtin::f128 value) noexcept -> const Builtin::u16
	{
		#line 341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		ADV_EXPRESSION_BODY(ExtractBiasedExponentFromBits(ADV_UPCS(Bits)(value.__ref()))); 
	}

#line 342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
	inline constexpr auto Exponent(Builtin::f128 value) noexcept -> const Builtin::i16
	{
		#line 342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		ADV_EXPRESSION_BODY(Builtin::i16{BiasedExponent(value) - ExpBias}); 
	}

#line 343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
	inline constexpr auto Significand(Builtin::f128 value) noexcept -> const Builtin::u128
	{
		#line 343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		ADV_EXPRESSION_BODY(TrailingSignificand(value) | (BiasedExponent(value) != Builtin::i32(0) ? (Builtin::u128(1ULL) << BiasedExponentShift) : Builtin::u128(0ULL))); 
	}

#line 344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
	inline constexpr auto TrailingSignificand(Builtin::f128 value) noexcept -> const Builtin::u128
	{
		#line 344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		ADV_EXPRESSION_BODY(ExtractTrailingSignificandFromBits(ADV_UPCS(Bits)(value.__ref()))); 
	}

#line 346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
	inline constexpr auto ExtractBiasedExponentFromBits(Builtin::u128 bits) noexcept -> const Builtin::u16
	{
		#line 346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		ADV_EXPRESSION_BODY(Builtin::u16{(bits >> BiasedExponentShift) & ShiftedBiasedExponentMask}); 
	}

#line 347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
	inline constexpr auto ExtractTrailingSignificandFromBits(Builtin::u128 bits) noexcept -> const Builtin::u128
	{
		#line 347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
		ADV_EXPRESSION_BODY(bits & TrailingSignificandMask); 
	}




#line 365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
	static_assert(Builtin::usize(sizeof (QuadShape)) == Builtin::usize(sizeof(Builtin::f128)), "QuadShape should be same as f128");







#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Pow.ast"
	

}