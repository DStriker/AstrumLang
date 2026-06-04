#include "Float128.h"
#include "Float128_Log.h"

namespace System {
//###############################################################################
//# Global type aliases
//###############################################################################
#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
using TConstant = __ntuples::NamedTuple_772be8e41bda60e3;
#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
using UConstant = __ntuples::NamedTuple_e60e36e81c207e3e;
#line 164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
using LD = __ntuples::NamedTuple_1f9d30cf2170c14d;
//###############################################################################
//# Type definitions
//###############################################################################
//###############################################################################
//# Free function declarations
//###############################################################################
#line 151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
	inline constexpr auto BiasedExponent(Builtin::f128 value) noexcept -> const Builtin::u16;
#line 152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
	inline constexpr auto Exponent(Builtin::f128 value) noexcept -> const Builtin::i16;
#line 153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
	inline constexpr auto Significand(Builtin::f128 value) noexcept -> const Builtin::u128;
#line 154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
	inline constexpr auto TrailingSignificand(Builtin::f128 value) noexcept -> const Builtin::u128;
#line 156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
	inline constexpr auto ExtractBiasedExponentFromBits(Builtin::u128 bits) noexcept -> const Builtin::u16;
#line 157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
	inline constexpr auto ExtractTrailingSignificandFromBits(Builtin::u128 bits) noexcept -> const Builtin::u128;
#line 433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
	inline constexpr auto LogConstantG(Builtin::i32 index)  -> const Builtin::f32;
#line 434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
	inline constexpr auto LogConstantFHi(Builtin::i32 index)  -> const Builtin::f32;
#line 435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
	inline constexpr auto LogConstantFLo(Builtin::i32 index)  -> const Builtin::f128;
#line 436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
	inline constexpr auto LogConstantE(Builtin::i32 index)  -> const Builtin::f32;
#line 437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
	inline constexpr auto LogConstantH(Builtin::i32 index)  -> const Builtin::f32;
#line 453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
	inline constexpr auto Sum2(Builtin::MutableRef<std::remove_cvref_t<Builtin::f128>> a, Builtin::MutableRef<std::remove_cvref_t<Builtin::f128>> b) noexcept -> void;
#line 460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
	inline constexpr auto Sum3(Builtin::MutableRef<std::remove_cvref_t<Builtin::f128>> a, Builtin::MutableRef<std::remove_cvref_t<Builtin::f128>> b, Builtin::f64 c) noexcept -> void;
#line 468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
	inline constexpr auto PackBits(bool sign, Builtin::u16 exponent, Builtin::u128 mantissa)  -> const Builtin::u128;
#line 472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
	auto LogInternal(Builtin::f128 x)  -> const LD;
//###############################################################################
//# Global compile-time constants
//###############################################################################
#line 126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
inline constexpr auto SignMask = Builtin::ParseUInt128("0x80000000000000000000000000000000");
#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
inline constexpr auto SignShift = Builtin::i32(127);
#line 128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
inline constexpr Builtin::u8 ShiftedSignMask = Builtin::u8{SignMask >> SignShift};
#line 130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
inline constexpr auto BiasedExponentMask = Builtin::ParseUInt128("0x7FFF0000000000000000000000000000");
#line 131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
inline constexpr auto BiasedExponentShift = Builtin::i32(112);
#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
inline constexpr Builtin::u16 ShiftedBiasedExponentMask = Builtin::u16{BiasedExponentMask >> BiasedExponentShift};
#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
inline constexpr auto TrailingSignificandMask = Builtin::ParseUInt128("0x0000FFFFFFFFFFFFFFFFFFFFFFFFFFFF");
#line 136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
inline constexpr auto MinSign = Builtin::u8(0U);
#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
inline constexpr auto MaxSign = Builtin::u8(1U);
#line 138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
inline constexpr auto MinBiasedExponent = ADV_USPCS(MinValue, Builtin::u16)();
#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
inline constexpr auto MaxBiasedExponent = Builtin::u16(0x7FFFU);
#line 140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
inline constexpr auto ExpBias = Builtin::u16(16383U);
#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
inline constexpr auto MinExponent = Builtin::i16(-16382);
#line 142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
inline constexpr auto MaxExponent = +Builtin::i16(16383);
#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
inline constexpr auto MinTrailingSignificand = ADV_USPCS(MinValue, Builtin::u128)();
#line 144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
inline constexpr auto MaxTrailingSignificand = Builtin::ParseUInt128("0x0000FFFFFFFFFFFFFFFFFFFFFFFFFFFF");
#line 146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
inline constexpr auto TrailingSignificandLength = Builtin::u16((unsigned short)112);
#line 147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
inline constexpr auto SignificandLength = TrailingSignificandLength + Builtin::u16((unsigned short)1);
#line 149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
inline constexpr auto RoundingEpsilon = Builtin::BitCast<Builtin::f128>(Builtin::ParseUInt128("0x406F0000000000000000000000000000"));
#line 166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
inline constexpr auto LN2HI = Builtin::f32(0.693147182464599609375f);
#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
inline constexpr auto LN2LO = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE205C610CA86C3898CFF81A12A17E2"));
#line 169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
inline constexpr auto T = Builtin::ToInlineArray<TConstant>({{ Builtin::f32(1.0f), Builtin::f32(0.0f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::u128(0x00000000000000000000000000000000ULL)) }, { Builtin::f32(0.9921875f), Builtin::f32(0.007843178f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFDF4EE431DAE6674AFA0C4BFE16E8FD")) }, { Builtin::f32(0.984375f), Builtin::f32(0.015748357f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFDFDB29EE2D83717BE918E1119642AB")) }, { Builtin::f32(0.9765625f), Builtin::f32(0.023716526f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE0191957D173697CF302CC9476F561")) }, { Builtin::f32(0.96875f), Builtin::f32(0.031748697f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE13CE8888E02E78EBA9B1113BC1C18")) }, { Builtin::f32(0.9609375f), Builtin::f32(0.03984591f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE17A4382CE6EB7BFA509BEC8DA5F22")) }, { Builtin::f32(0.9550781f), Builtin::f32(0.045962136f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE072A21161A107674986DCDCA6709C")) }, { Builtin::f32(0.94921875f), Builtin::f32(0.052116003f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE1E09DE07CB958897A3EA46E84ABB3")) }, { Builtin::f32(0.94140625f), Builtin::f32(0.06038051f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FD8AE1EEC1B036C484993C549C4BF40")) }, { Builtin::f32(0.93359375f), Builtin::f32(0.068713896f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE2D7355325D560D9E9AB3D6EBAB580")) }, { Builtin::f32(0.9277344f), Builtin::f32(0.07500982f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE1F9F02D256D5037108F4EC21E48CD")) }, { Builtin::f32(0.921875f), Builtin::f32(0.08134564f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE06FC0A9D12C17A70F7A684C596B12")) }, { Builtin::f32(0.9140625f), Builtin::f32(0.08985633f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE25D581C1E8DA99DED322FB08B8462")) }, { Builtin::f32(0.90625f), Builtin::f32(0.09844007f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE0535B3BA8F150AE09996D7BB4653E")) }, { Builtin::f32(0.90234375f), Builtin::f32(0.102759734f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FDE63786F5251AEFE0DED34C8318F52")) }, { Builtin::f32(0.89453125f), Builtin::f32(0.11145544f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FDFBC4B2368E32D56699C1799A244D4")) }, { Builtin::f32(0.8886719f), Builtin::f32(0.1180272f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE2C6090F684E6766ABCECCAB1D7174")) }, { Builtin::f32(0.8828125f), Builtin::f32(0.12464245f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE1890AA69AC9F4215F93936B709EFB")) }, { Builtin::f32(0.8769531f), Builtin::f32(0.13130173f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE3B9985194B6AFFD511B534B72A28E")) }, { Builtin::f32(0.87109375f), Builtin::f32(0.13800567f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE0DC08D61C6EF1D9B2EF7E68680598")) }, { Builtin::f32(0.8652344f), Builtin::f32(0.14475486f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE1F72A2DAC729B3F46662238A9425A")) }, { Builtin::f32(0.859375f), Builtin::f32(0.1515499f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE3FD4DFD3A0AFB9691AED4D5E3DF94")) }, { Builtin::f32(0.8535156f), Builtin::f32(0.15839143f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE11B26121629C46C186384993E1C93")) }, { Builtin::f32(0.84765625f), Builtin::f32(0.16528009f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE2286D633E8E5697DC6A402A56FCE1")) }, { Builtin::f32(0.8417969f), Builtin::f32(0.17221653f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FDF6128EBA9367707EBFA540E45350C")) }, { Builtin::f32(0.8359375f), Builtin::f32(0.17920142f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE36EAD577390D31EF0F4C9D43F79B2")) }, { Builtin::f32(0.83203125f), Builtin::f32(0.18388528f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE251131CCF7C7B75E7D900B521C48D")) }, { Builtin::f32(0.8261719f), Builtin::f32(0.19095245f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE315E2CD714BD06508AEB00D2AE3E9")) }, { Builtin::f32(0.8203125f), Builtin::f32(0.19806992f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE1847F406EBD3AF80485C2F409633C")) }, { Builtin::f32(0.81640625f), Builtin::f32(0.20284319f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE2C2259904D686581799FBCE0B5F19")) }, { Builtin::f32(0.8105469f), Builtin::f32(0.2100461f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE3ECE57A8D5AE54F550444ECF8B995")) }, { Builtin::f32(0.8046875f), Builtin::f32(0.21730128f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE2F109D4BC4595412B5D2517AAAC13")) }, { Builtin::f32(0.80078125f), Builtin::f32(0.22216746f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE2BC03DC271A74D3A85B5B43C0E727")) }, { Builtin::f32(0.7949219f), Builtin::f32(0.22951144f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFDEBF2BADC0DF841A71B79DD5645B46")) }, { Builtin::f32(0.7890625f), Builtin::f32(0.23690975f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFDC8EFEDEDD89FBE0BCFBE6D6DB9F66")) }, { Builtin::f32(0.78515625f), Builtin::f32(0.24187253f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE2373FF977BAA6911C7BAFCB4D84FB")) }, { Builtin::f32(0.78125f), Builtin::f32(0.24686007f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE396766F2FB328337CC050C6D83B22")) }, { Builtin::f32(0.7753906f), Builtin::f32(0.25438833f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE49BD076F7C434E5FCF1A212E2A91E")) }, { Builtin::f32(0.7714844f), Builtin::f32(0.25943887f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE4A327257AF0F465E5ECAB5F2A6F81")) }, { Builtin::f32(0.765625f), Builtin::f32(0.26706278f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE213F23DEF19C5A0FE396F40F1DDA9")) }, { Builtin::f32(0.76171875f), Builtin::f32(0.27217788f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE4759F6E6B37DE945A049A962E66C6")) }, { Builtin::f32(0.7578125f), Builtin::f32(0.27731928f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE2AD35CA6ED5147BDB6DDCAF59C425")) }, { Builtin::f32(0.75390625f), Builtin::f32(0.28248724f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE4A1D71A87DEBA46BAE9827221DC98")) }, { Builtin::f32(0.7480469f), Builtin::f32(0.29028964f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE339E5210C2B730E28ABA001A9B5E0")) }, { Builtin::f32(0.7441406f), Builtin::f32(0.29552525f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE28F6EBCFF3ED72E23E13431ADC4A5")) }, { Builtin::f32(0.7402344f), Builtin::f32(0.30078843f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE4AA268BE39AAB7148E8D80CAA10B7")) }, { Builtin::f32(0.7363281f), Builtin::f32(0.30607945f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE44C8815839C5663663D15FAED7771")) }, { Builtin::f32(0.73046875f), Builtin::f32(0.31406882f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE2EAF46390DBB2438273918DB7DF5C")) }, { Builtin::f32(0.7265625f), Builtin::f32(0.31943077f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE238E20D831F698298ADDDD7F32686")) }, { Builtin::f32(0.72265625f), Builtin::f32(0.32482162f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE1E8D3C41123615B147A5D47BC208F")) }, { Builtin::f32(0.71875f), Builtin::f32(0.33024168f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE3CE28F5F3840B263ACB4351104631")) }, { Builtin::f32(0.71484375f), Builtin::f32(0.3356913f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE486E5C0A42423457E22D8C650B355")) }, { Builtin::f32(0.7109375f), Builtin::f32(0.34117076f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE04D41A0B2A08A465DC513B13F567D")) }, { Builtin::f32(0.70703125f), Builtin::f32(0.3466804f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE46755892770633947FFE651E7352F")) }, { Builtin::f32(0.703125f), Builtin::f32(0.3522206f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE16395EBE59B15228BFE8798D10FF0")) }, { Builtin::f32(0.69921875f), Builtin::f32(0.35779163f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE3ABC65C8595F088B61A335F5B688C")) }, { Builtin::f32(0.6953125f), Builtin::f32(0.3633939f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE4273089D3DAD88E7D353E9967D548")) }, { Builtin::f32(0.69140625f), Builtin::f32(0.3690277f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE40F9F67B1F4BBF45DE06ECEBFAF6D")) }, { Builtin::f32(0.6875f), Builtin::f32(0.37469345f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE309FAB904864092B34EDDA19A831E")) }, { Builtin::f32(0.68359375f), Builtin::f32(0.38039148f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE4124680AA43333221D8A9B475A6BA")) }, { Builtin::f32(0.6816406f), Builtin::f32(0.3832527f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE3F360CC4710FBFE24B633F4E8D84D")) }, { Builtin::f32(0.6777344f), Builtin::f32(0.38899985f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE332D91F21D89C89C45003FC5D7807")) }, { Builtin::f32(0.6738281f), Builtin::f32(0.39478022f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE46BF9B4D1F8DA8002F2449E174504")) }, { Builtin::f32(0.6699219f), Builtin::f32(0.40059417f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE29DEB5CE6A6A8717D5626E16ACC7D")) }, { Builtin::f32(0.6660156f), Builtin::f32(0.40644214f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE4A29FB48F7D3CA87DABF351AA41F4")) }, { Builtin::f32(0.6640625f), Builtin::f32(0.409379f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE2127D3C6457F9D79F51DCC73014C9")) }, { Builtin::f32(0.66015625f), Builtin::f32(0.41527873f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE2BA930E486A0AC42D1BF9199188E7")) }, { Builtin::f32(0.65625f), Builtin::f32(0.42121348f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE4B6E645F31549DD1160BCC45C7E2C")) }, { Builtin::f32(0.65234375f), Builtin::f32(0.42718363f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE3118A425494B610665377F15625B6")) }, { Builtin::f32(0.6503906f), Builtin::f32(0.43018213f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE3966F24D29D3A2D1B2176010478BE")) }, { Builtin::f32(0.6464844f), Builtin::f32(0.43620625f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE1D8E52EB2248F0C95DD83626D7333")) }, { Builtin::f32(0.6425781f), Builtin::f32(0.44226688f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE3EE370F96E6B67CCB006A5B9890EA")) }, { Builtin::f32(0.640625f), Builtin::f32(0.445311f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE3D155324911F56DB28DA4D629D00A")) }, { Builtin::f32(0.63671875f), Builtin::f32(0.45142725f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE3FE6E2F2F867D8F4D60C713346641")) }, { Builtin::f32(0.6328125f), Builtin::f32(0.4575811f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE3B7BE9ADD7F4D3B3D406B6CBF3CE5")) }, { Builtin::f32(0.6308594f), Builtin::f32(0.4606723f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE4B3CFB3F7511DD73692609040CCC2")) }, { Builtin::f32(0.6269531f), Builtin::f32(0.4668835f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE4220DE1F7301901B8AD85C25AFD09")) }, { Builtin::f32(0.625f), Builtin::f32(0.47000363f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE376364C9AC81CC8A4DFB804DE6867")) }, { Builtin::f32(0.62109375f), Builtin::f32(0.47627324f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE2EED6B9AAFAC8D42F78D3E65D3727")) }, { Builtin::f32(0.6191406f), Builtin::f32(0.47942284f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE4D593218675AF269647B783D88999")) }, { Builtin::f32(0.6152344f), Builtin::f32(0.485752f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFDF3E8EB7DA053E063714615F7CC91D")) }, { Builtin::f32(0.61328125f), Builtin::f32(0.48893163f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE4C063259BCADE02951686D5373AEC")) }, { Builtin::f32(0.609375f), Builtin::f32(0.49532142f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE4EF491085FA3C1649349630531502")) }, { Builtin::f32(0.6074219f), Builtin::f32(0.4985317f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE4D607A7C2B8C5320619FB9433D841")) }, { Builtin::f32(0.6035156f), Builtin::f32(0.50498337f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE52AD3817004F3F0BDFF99F932B273")) }, { Builtin::f32(0.6015625f), Builtin::f32(0.50822484f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE289FC53117F9E54E78103A2BC1767")) }, { Builtin::f32(0.59765625f), Builtin::f32(0.5147395f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE44CF15A048907B7D7F47DDB45C5A3")) }, { Builtin::f32(0.5957031f), Builtin::f32(0.5180128f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE5CBB1D35FB82873B04A9AF1DD692C")) }, { Builtin::f32(0.5917969f), Builtin::f32(0.5245918f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE5128639B814F9B9770D8CB6573540")) }, { Builtin::f32(0.58984375f), Builtin::f32(0.5278976f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE484733853300F002E836DFD47BD41")) }, { Builtin::f32(0.5878906f), Builtin::f32(0.53121436f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE309D23AEF77DD5CD7CC94306FB3FF")) }, { Builtin::f32(0.5839844f), Builtin::f32(0.5378811f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE5A81EF367A59DE2B41EEEBD550702")) }, { Builtin::f32(0.58203125f), Builtin::f32(0.54123116f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE521AD3DBB2F45275C917A30DF4AC9")) }, { Builtin::f32(0.5800781f), Builtin::f32(0.5445925f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE4CFB981628AF71A89DF4E6DF2E93B")) }, { Builtin::f32(0.5761719f), Builtin::f32(0.5513493f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE4D21730EA76CFDEC367828734CAE5")) }, { Builtin::f32(0.57421875f), Builtin::f32(0.55474484f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE535CC00E566F76B87333891E0DEC4")) }, { Builtin::f32(0.5722656f), Builtin::f32(0.558152f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE30FCB5DF257A263E3BF446C6E3F69")) }, { Builtin::f32(0.5683594f), Builtin::f32(0.56500137f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE46E171B15433D723A4C7380A448D8")) }, { Builtin::f32(0.56640625f), Builtin::f32(0.5684437f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE4D050DA07F3236F330972DA2A7A87")) }, { Builtin::f32(0.5644531f), Builtin::f32(0.5718979f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE4BE03669A5268D21148C6002BECD3")) }, { Builtin::f32(0.5605469f), Builtin::f32(0.5788424f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE40B28E0E26C336AF90E00533323BA")) }, { Builtin::f32(0.55859375f), Builtin::f32(0.5823328f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE5A1D820DA57CF2F105A89060046AA")) }, { Builtin::f32(0.5566406f), Builtin::f32(0.58583546f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE49EF8F13AE3CF162409D8EA99D4C0")) }, { Builtin::f32(0.5546875f), Builtin::f32(0.5893504f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE509E417A6E507B9DC10DAC743AD7A")) }, { Builtin::f32(0.55078125f), Builtin::f32(0.59641755f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE40D01A2C5B0E97C4990B23D9AC1F5")) }, { Builtin::f32(0.5488281f), Builtin::f32(0.59997f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE5D6A50D4B61EA74540BDD2AA99A42")) }, { Builtin::f32(0.546875f), Builtin::f32(0.603535f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE5B3B190B83F9527E6ABA8F2D783C1")) }, { Builtin::f32(0.5449219f), Builtin::f32(0.6071128f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE53A69FAD7E7ABE7BA81C664C107E0")) }, { Builtin::f32(0.54296875f), Builtin::f32(0.6107035f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE51CD12316F576AAD348AE79867223")) }, { Builtin::f32(0.5410156f), Builtin::f32(0.6143071f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE4C95C444B807A246726B304CCAE56")) }, { Builtin::f32(0.5371094f), Builtin::f32(0.62155354f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE4B9C224EA698C2F9B47466D6123FE")) }, { Builtin::f32(0.53515625f), Builtin::f32(0.6251965f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE225CA93186CF0F38B4619A2483399")) }, { Builtin::f32(0.5332031f), Builtin::f32(0.62885284f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE4EE38A7BC228B3597043BE78EAF49")) }, { Builtin::f32(0.53125f), Builtin::f32(0.6325226f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE5A0DB876613D204147DC69A07A649")) }, { Builtin::f32(0.5292969f), Builtin::f32(0.6362058f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE493224E8516C008D3602A7B41C6E8")) }, { Builtin::f32(0.52734375f), Builtin::f32(0.63990265f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE4FA28B4D2541ACA7D5844606B2421")) }, { Builtin::f32(0.5253906f), Builtin::f32(0.6436132f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE5C1B5760FB4571ACBCFB03F16DAF4")) }, { Builtin::f32(0.5214844f), Builtin::f32(0.65107596f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE3FED5D0F65949C0A345AD743AE1AE")) }, { Builtin::f32(0.51953125f), Builtin::f32(0.6548283f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE3AD270C9D749362382A7688479E24")) }, { Builtin::f32(0.5175781f), Builtin::f32(0.6585948f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE499FF15CE532661EA9643A3A2D378")) }, { Builtin::f32(0.515625f), Builtin::f32(0.6623755f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE4A19E15CCC45D257530A682B80490")) }, { Builtin::f32(0.5136719f), Builtin::f32(0.6661706f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE321A14EC532B35BA3E1F868FD0B5E")) }, { Builtin::f32(0.51171875f), Builtin::f32(0.6699801f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE4AEE319980BFF3303DD481779DF69")) }, { Builtin::f32(0.5097656f), Builtin::f32(0.6738042f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE38FFD9E3900345A85D2D86161742E")) }, { Builtin::f32(0.5078125f), Builtin::f32(0.677643f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE3E4DB102CE29F79B026B64B42CAA1")) }, { Builtin::f32(0.5058594f), Builtin::f32(0.68149656f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE27C35C55A04A82AB19F77652D977A")) }, { Builtin::f32(0.50390625f), Builtin::f32(0.685365f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE5448324047019B48D7B98C1CF7234")) }, { Builtin::f32(0.5019531f), Builtin::f32(0.68924856f), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE5750EE3915A197E9C7359DD94152F")) }, { Builtin::f32(0.5f), LN2HI, LN2LO }});
#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
inline constexpr auto U = Builtin::ToInlineArray<UConstant>({{ Builtin::f32(1.0f), Builtin::f32(0.0f) }, { Builtin::f32(1.0078125f), Builtin::f32(-6.1035156e-05f) }, { Builtin::f32(1.015625f), Builtin::f32(-0.00024414062f) }, { Builtin::f32(1.0234375f), Builtin::f32(-0.0005493164f) }, { Builtin::f32(1.03125f), Builtin::f32(-0.0009765625f) }, { Builtin::f32(1.0390625f), Builtin::f32(-0.0015258789f) }, { Builtin::f32(1.046875f), Builtin::f32(-0.00015258789f) }, { Builtin::f32(1.0546875f), Builtin::f32(0.0011291504f) }, { Builtin::f32(1.0625f), Builtin::f32(0.00024414062f) }, { Builtin::f32(1.0703125f), Builtin::f32(-0.00076293945f) }, { Builtin::f32(1.078125f), Builtin::f32(0.00021362305f) }, { Builtin::f32(1.0859375f), Builtin::f32(0.0010986328f) }, { Builtin::f32(1.09375f), Builtin::f32(-0.00024414062f) }, { Builtin::f32(1.1015625f), Builtin::f32(-0.0017089844f) }, { Builtin::f32(1.109375f), Builtin::f32(0.0010375977f) }, { Builtin::f32(1.1171875f), Builtin::f32(-0.00064086914f) }, { Builtin::f32(1.125f), Builtin::f32(-0.00024414062f) }, { Builtin::f32(1.1328125f), Builtin::f32(6.1035156e-05f) }, { Builtin::f32(1.140625f), Builtin::f32(0.0002746582f) }, { Builtin::f32(1.1484375f), Builtin::f32(0.00039672852f) }, { Builtin::f32(1.15625f), Builtin::f32(0.0004272461f) }, { Builtin::f32(1.1640625f), Builtin::f32(0.00036621094f) }, { Builtin::f32(1.171875f), Builtin::f32(0.00021362305f) }, { Builtin::f32(1.1796875f), Builtin::f32(-3.0517578e-05f) }, { Builtin::f32(1.1875f), Builtin::f32(-0.00036621094f) }, { Builtin::f32(1.1953125f), Builtin::f32(-0.00079345703f) }, { Builtin::f32(1.203125f), Builtin::f32(0.0010375977f) }, { Builtin::f32(1.2109375f), Builtin::f32(0.00044250488f) }, { Builtin::f32(1.21875f), Builtin::f32(-0.00024414062f) }, { Builtin::f32(1.2265625f), Builtin::f32(0.001373291f) }, { Builtin::f32(1.234375f), Builtin::f32(0.0005187988f) }, { Builtin::f32(1.2421875f), Builtin::f32(-0.0004272461f) }, { Builtin::f32(1.25f), Builtin::f32(0.0009765625f) }, { Builtin::f32(1.2578125f), Builtin::f32(-0.0001373291f) }, { Builtin::f32(1.265625f), Builtin::f32(-0.0013427734f) }, { Builtin::f32(1.2734375f), Builtin::f32(-0.00015258789f) }, { Builtin::f32(1.28125f), Builtin::f32(0.0009765625f) }, { Builtin::f32(1.2890625f), Builtin::f32(-0.00047302246f) }, { Builtin::f32(1.296875f), Builtin::f32(0.0005187988f) }, { Builtin::f32(1.3046875f), Builtin::f32(-0.0010986328f) }, { Builtin::f32(1.3125f), Builtin::f32(-0.00024414062f) }, { Builtin::f32(1.3203125f), Builtin::f32(0.0005493164f) }, { Builtin::f32(1.328125f), Builtin::f32(0.0012817383f) }, { Builtin::f32(1.3359375f), Builtin::f32(-0.00065612793f) }, { Builtin::f32(1.34375f), Builtin::f32(-6.1035156e-5f) }, { Builtin::f32(1.3515625f), Builtin::f32(0.00047302246f) }, { Builtin::f32(1.359375f), Builtin::f32(0.0009460449f) }, { Builtin::f32(1.3671875f), Builtin::f32(-0.0013122559f) }, { Builtin::f32(1.375f), Builtin::f32(-0.0009765625f) }, { Builtin::f32(1.3828125f), Builtin::f32(-0.0007019043f) }, { Builtin::f32(1.390625f), Builtin::f32(-0.00048828125f) }, { Builtin::f32(1.3984375f), Builtin::f32(-0.00033569336f) }, { Builtin::f32(1.40625f), Builtin::f32(-0.00024414062f) }, { Builtin::f32(1.4140625f), Builtin::f32(-0.00021362305f) }, { Builtin::f32(1.421875f), Builtin::f32(-0.00024414062f) }, { Builtin::f32(1.4296875f), Builtin::f32(-0.00033569336f) }, { Builtin::f32(1.4375f), Builtin::f32(-0.00048828125f) }, { Builtin::f32(1.4453125f), Builtin::f32(-0.0007019043f) }, { Builtin::f32(1.453125f), Builtin::f32(-0.0009765625f) }, { Builtin::f32(1.4609375f), Builtin::f32(-0.0013122559f) }, { Builtin::f32(1.46875f), Builtin::f32(0.001159668f) }, { Builtin::f32(1.4765625f), Builtin::f32(0.0007171631f) }, { Builtin::f32(1.484375f), Builtin::f32(0.00021362305f) }, { Builtin::f32(1.4921875f), Builtin::f32(-0.00035095215f) }, { Builtin::f32(1.5f), Builtin::f32(-0.0009765625f) }, { Builtin::f32(1.5078125f), Builtin::f32(0.0012817383f) }, { Builtin::f32(1.515625f), Builtin::f32(0.0005493164f) }, { Builtin::f32(1.5234375f), Builtin::f32(-0.00024414062f) }, { Builtin::f32(1.53125f), Builtin::f32(-0.0010986328f) }, { Builtin::f32(1.5390625f), Builtin::f32(0.0009918213f) }, { Builtin::f32(1.546875f), Builtin::f32(3.0517578e-5f) }, { Builtin::f32(1.5546875f), Builtin::f32(-0.0009918213f) }, { Builtin::f32(1.5625f), Builtin::f32(0.0009765625f) }, { Builtin::f32(1.5703125f), Builtin::f32(-0.00015258789f) }, { Builtin::f32(1.578125f), Builtin::f32(-0.0013427734f) }, { Builtin::f32(1.5859375f), Builtin::f32(0.00050354004f) }, { Builtin::f32(1.59375f), Builtin::f32(-0.00079345703f) }, { Builtin::f32(1.6015625f), Builtin::f32(0.0009765625f) }, { Builtin::f32(1.609375f), Builtin::f32(-0.0004272461f) }, { Builtin::f32(1.6171875f), Builtin::f32(0.0012664795f) }, { Builtin::f32(1.625f), Builtin::f32(-0.00024414062f) }, { Builtin::f32(1.6328125f), Builtin::f32(0.001373291f) }, { Builtin::f32(1.640625f), Builtin::f32(-0.00024414062f) }, { Builtin::f32(1.6484375f), Builtin::f32(0.0012969971f) }, { Builtin::f32(1.65625f), Builtin::f32(-0.0004272461f) }, { Builtin::f32(1.6640625f), Builtin::f32(0.0010375977f) }, { Builtin::f32(1.671875f), Builtin::f32(-0.00079345703f) }, { Builtin::f32(1.6796875f), Builtin::f32(0.0005950928f) }, { Builtin::f32(1.6875f), Builtin::f32(-0.0013427734f) }, { Builtin::f32(1.6953125f), Builtin::f32(-3.0517578e-5f) }, { Builtin::f32(1.703125f), Builtin::f32(0.0012512207f) }, { Builtin::f32(1.7109375f), Builtin::f32(-0.0008392334f) }, { Builtin::f32(1.71875f), Builtin::f32(0.00036621094f) }, { Builtin::f32(1.7265625f), Builtin::f32(0.0015411377f) }, { Builtin::f32(1.734375f), Builtin::f32(-0.0007019043f) }, { Builtin::f32(1.7421875f), Builtin::f32(0.00039672852f) }, { Builtin::f32(1.75f), Builtin::f32(0.0014648438f) }, { Builtin::f32(1.7578125f), Builtin::f32(-0.00093078613f) }, { Builtin::f32(1.765625f), Builtin::f32(6.1035156e-5f) }, { Builtin::f32(1.7734375f), Builtin::f32(0.0010223389f) }, { Builtin::f32(1.78125f), Builtin::f32(-0.0015258789f) }, { Builtin::f32(1.7890625f), Builtin::f32(-0.00064086914f) }, { Builtin::f32(1.796875f), Builtin::f32(0.00021362305f) }, { Builtin::f32(1.8046875f), Builtin::f32(0.0010375977f) }, { Builtin::f32(1.8125f), Builtin::f32(-0.0017089844f) }, { Builtin::f32(1.8203125f), Builtin::f32(-0.0009613037f) }, { Builtin::f32(1.828125f), Builtin::f32(-0.00024414062f) }, { Builtin::f32(1.8359375f), Builtin::f32(0.00044250488f) }, { Builtin::f32(1.84375f), Builtin::f32(0.0010986328f) }, { Builtin::f32(1.8515625f), Builtin::f32(0.0017242432f) }, { Builtin::f32(1.859375f), Builtin::f32(-0.0013122559f) }, { Builtin::f32(1.8671875f), Builtin::f32(-0.00076293945f) }, { Builtin::f32(1.875f), Builtin::f32(-0.00024414062f) }, { Builtin::f32(1.8828125f), Builtin::f32(0.00024414062f) }, { Builtin::f32(1.890625f), Builtin::f32(0.0007019043f) }, { Builtin::f32(1.8984375f), Builtin::f32(0.0011291504f) }, { Builtin::f32(1.90625f), Builtin::f32(0.0015258789f) }, { Builtin::f32(1.9140625f), Builtin::f32(-0.0018463135f) }, { Builtin::f32(1.921875f), Builtin::f32(-0.0015258789f) }, { Builtin::f32(1.9296875f), Builtin::f32(-0.0012359619f) }, { Builtin::f32(1.9375f), Builtin::f32(-0.0009765625f) }, { Builtin::f32(1.9453125f), Builtin::f32(-0.00074768066f) }, { Builtin::f32(1.953125f), Builtin::f32(-0.0005493164f) }, { Builtin::f32(1.9609375f), Builtin::f32(-0.00038146973f) }, { Builtin::f32(1.96875f), Builtin::f32(-0.00024414062f) }, { Builtin::f32(1.9765625f), Builtin::f32(-0.0001373291f) }, { Builtin::f32(1.984375f), Builtin::f32(-6.1035156e-5f) }, { Builtin::f32(1.9921875f), Builtin::f32(-1.5258789e-5f) }, { Builtin::f32(2.0f), Builtin::f32(0.0f) }});
#line 439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
inline constexpr Builtin::f128 P2 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFFE0000000000000000000000000000"));
#line 440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
inline constexpr Builtin::f128 P3 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFD5555555555555555555555554D42"));
#line 441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
inline constexpr Builtin::f128 P4 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFFCFFFFFFFFFFFFFFFFFFFFFFDAB14E"));
#line 442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
inline constexpr Builtin::f128 P5 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFC9999999999999999999A6D3567F4"));
#line 443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
inline constexpr Builtin::f128 P6 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFFC5555555555555555567267A58E13"));
#line 444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
inline constexpr Builtin::f128 P7 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFC249249249249248ED79A0AE434DE"));
#line 445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
inline constexpr Builtin::f128 P8 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFFBFFFFFFFFFFFFFA13E91765E46140"));
#line 446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
inline constexpr Builtin::f128 P9 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFBC71C71C71C7ED54D6D66A8B2C988"));
#line 447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
inline constexpr Builtin::f128 P10 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFFB99999999A0A91EA557FEE717E405"));
#line 448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
inline constexpr Builtin::f128 P11 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFB745D17396211107D548911E43450"));
#line 449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
inline constexpr Builtin::f128 P12 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFFB555551722C7A2FC3D1C070025776"));
#line 450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
inline constexpr Builtin::f128 P13 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFB3B1985204A4AE07C9C4B3F70D6F0"));
#line 451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
inline constexpr Builtin::f128 P14 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFFB2562276CDC5CFF7389B189F8903B"));
#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
	auto Log2Impl(Builtin::f128 x)  -> const Builtin::f128
	{
		#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		constexpr Builtin::f128 InvLn2Hi = Builtin::f64(1.4426950402557850e0);
		#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		constexpr auto InvLn2LoPHi = ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFF71547652B82FE24D68D57C9BF07B"));
		#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		constexpr auto InvLn2Lo = ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE05C17F0BBBE87FED0691D3E88EB57"));
		#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		auto r = LogInternal(x); 
		#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		if (ADV_UPCS(LowSet)(r.__ref()) == Builtin::i32(0)) {
			#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
			return ADV_UPCS(High)(r.__ref());
		}
		#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		const auto w = ADV_UPCS(High)(r.__ref()) + ADV_UPCS(Low)(r.__ref()); 
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		ADV_UPCS(Low)(r.__ref()) = ADV_UPCS(High)(r.__ref()) - w + ADV_UPCS(Low)(r.__ref());
		#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		ADV_UPCS(High)(r.__ref()) = w;
		#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		const Builtin::f128 high = Builtin::Cast<true, Builtin::f32>(ADV_UPCS(High)(r.__ref())); 
		#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		const Builtin::f128 low = ADV_UPCS(Low)(r.__ref()) + (ADV_UPCS(High)(r.__ref()) - high); 
		#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		return InvLn2Hi * high + (InvLn2LoPHi * low + InvLn2Lo * high);
	}

#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
	auto Log10Impl(Builtin::f128 x)  -> const Builtin::f128
	{
		#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		constexpr Builtin::f128 InvLn10Hi = Builtin::f64(4.3429448176175356e-1);
		#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		constexpr auto InvLn10LoPHi = ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFDBCB7B1526E50E36BE631DFF2801F"));
		#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		constexpr auto InvLn10Lo = ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FDE37287195355BAAAFAD33DC323EE3"));
		#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		auto r = LogInternal(x); 
		#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		if (ADV_UPCS(LowSet)(r.__ref()) == Builtin::i32(0)) {
			#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
			return ADV_UPCS(High)(r.__ref());
		}
		#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		const auto w = ADV_UPCS(High)(r.__ref()) + ADV_UPCS(Low)(r.__ref()); 
		#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		ADV_UPCS(Low)(r.__ref()) = ADV_UPCS(High)(r.__ref()) - w + ADV_UPCS(Low)(r.__ref());
		#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		ADV_UPCS(High)(r.__ref()) = w;
		#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		const Builtin::f128 high = Builtin::Cast<true, Builtin::f32>(ADV_UPCS(High)(r.__ref())); 
		#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		const Builtin::f128 low = ADV_UPCS(Low)(r.__ref()) + (ADV_UPCS(High)(r.__ref()) - high); 
		#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		return InvLn10Hi * high + (InvLn10LoPHi * low + InvLn10Lo * high);
	}

#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
	auto LnImpl(Builtin::f128 x)  -> const Builtin::f128
	{
		#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		const auto r = LogInternal(x); 
		#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		return ADV_UPCS(LowSet)(r.__ref()) == Builtin::i32(0) ? ADV_UPCS(High)(r.__ref()) : ADV_UPCS(High)(r.__ref()) + ADV_UPCS(Low)(r.__ref());
	}

#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
	auto LnP1Impl(Builtin::f128 x)  -> const Builtin::f128
	{
		#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		auto hx = ADV_UFCS(NarrowToInt16)((BiasedExponent(x) | (ADV_UPCS(IsNegative)(x.__ref()) ? Builtin::u16(1U) << Builtin::i32(15) : Builtin::u16(0U))).__ref()); 
		#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		Builtin::f128 fHi{}, fLo{}; 
		#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		if ((hx <=> Builtin::i32(0x3FFF)) < 0) {
			#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
			const auto ax = hx & Builtin::i32(0x7FFF); 
			#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
			if ((ax <=> Builtin::i32(0x3FFF)) >= 0) {
				#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
				if (ax == Builtin::i32(0x3FFF) && TrailingSignificand(x) == Builtin::i32(0)) {
					#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
					return ADV_USPCS(NegativeInfinity, Builtin::f128)();
				}
				#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
				return ADV_USPCS(NaN, Builtin::f128)();
			}
			#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
			if ((ax <=> Builtin::i32(0x3F8D)) <= 0 && ADV_UFCS(ToInt64)(x.__ref()) == Builtin::i32(0)) {
				#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
				return x;
			}
			#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
			fHi = Builtin::i32(1);
			#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
			fLo = x;
		} else {
			#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
			if ((hx <=> Builtin::i32(0x7FFF)) >= 0) {
				#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
				return x;
			} else {
				#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
				if ((hx <=> Builtin::i32(0x40E1)) < 0) {
					#line 84 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
					fHi = x;
					#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
					fLo = Builtin::i32(1);
				} else {
					#line 86 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
					{
						#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
						fHi = x;
						#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
						fLo = Builtin::i32(0);
					}
				}
			}
		}
		#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		x = fHi + fLo;
		#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		fLo = fHi - x + fLo;
		#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		hx = ADV_UFCS(NarrowToInt16)(BiasedExponent(x).__ref());
		#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		const auto lx = ADV_UFCS(High64)(TrailingSignificand(x).__ref()); 
		#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		const auto k = Builtin::i32(-16383) + (hx | (ADV_UPCS(IsNegative)(x.__ref()) ? Builtin::u16(1U) << Builtin::i32(15) : Builtin::u16(0U))); 
		#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		const Builtin::f64 dk = k; 
		#line 100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		x = ADV_USFCS((Builtin::f128), FromBits)(PackBits(Builtin::Boolean(false), Builtin::u16(0x3fffU), TrailingSignificand(x)));
		#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		const auto twopmk = ADV_USFCS((Builtin::f128), FromBits)(Builtin::u128{Builtin::u64{Builtin::i32(0x7ffe) - hx} << Builtin::i32(48), Builtin::u32(0U)}); 
		#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		fLo *= twopmk;
		#line 104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		const auto l2i = Builtin::i32(49) - Builtin::i32(7); 
		#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		const auto i = ADV_UFCS(NarrowToInt32)(((ADV_UFCS(_operator_add_mod)(lx, (Builtin::u64(1ULL) << (l2i - Builtin::i32(2))))) >> (l2i - Builtin::i32(1))).__ref()); 
		#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		auto dHi = (x - LogConstantH(i)) * LogConstantG(i) + LogConstantE(i); 
		#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		auto dLo = Builtin::Cast<true, Builtin::f64>((fLo * LogConstantG(i))); 
		#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		const auto d = dHi + dLo; 
		#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		const auto dd = Builtin::Cast<true, Builtin::f64>(d); 
		#line 112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		dLo = Builtin::Cast<true, Builtin::f64>((dHi - d + dLo));
		#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		dHi = d;
		#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		Builtin::f128 resultLo = d * d * d * (P3 + d * (P4 + d * (P5 + d * (P6 + d * (P7 + d * (P8 + dd * (P9 + dd * (P10 + dd * (P11 + dd * (P12 + dd * (P13 + dd * P14))))))))))) + (LogConstantFLo(i) + dk * LN2LO + dLo) + d * d * P2; 
		#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		Builtin::f128 resultHi = dHi; 
		#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		Sum3(Builtin::MutableRef<std::remove_cvref_t<decltype(resultHi)>>(resultHi), Builtin::MutableRef<std::remove_cvref_t<decltype(resultLo)>>(resultLo), LogConstantFHi(i) + dk * LN2HI);
		#line 122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		return resultHi + resultLo;
	}




















#line 151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
	inline constexpr auto BiasedExponent(Builtin::f128 value) noexcept -> const Builtin::u16
	{
		#line 151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		ADV_EXPRESSION_BODY(ExtractBiasedExponentFromBits(ADV_UPCS(Bits)(value.__ref()))); 
	}

#line 152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
	inline constexpr auto Exponent(Builtin::f128 value) noexcept -> const Builtin::i16
	{
		#line 152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		ADV_EXPRESSION_BODY(Builtin::i16{BiasedExponent(value) - ExpBias}); 
	}

#line 153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
	inline constexpr auto Significand(Builtin::f128 value) noexcept -> const Builtin::u128
	{
		#line 153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		ADV_EXPRESSION_BODY(TrailingSignificand(value) | (BiasedExponent(value) != Builtin::i32(0) ? (Builtin::u128(1ULL) << BiasedExponentShift) : Builtin::u128(0ULL))); 
	}

#line 154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
	inline constexpr auto TrailingSignificand(Builtin::f128 value) noexcept -> const Builtin::u128
	{
		#line 154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		ADV_EXPRESSION_BODY(ExtractTrailingSignificandFromBits(ADV_UPCS(Bits)(value.__ref()))); 
	}

#line 156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
	inline constexpr auto ExtractBiasedExponentFromBits(Builtin::u128 bits) noexcept -> const Builtin::u16
	{
		#line 156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		ADV_EXPRESSION_BODY(Builtin::u16{(bits >> BiasedExponentShift) & ShiftedBiasedExponentMask}); 
	}

#line 157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
	inline constexpr auto ExtractTrailingSignificandFromBits(Builtin::u128 bits) noexcept -> const Builtin::u128
	{
		#line 157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		ADV_EXPRESSION_BODY(bits & TrailingSignificandMask); 
	}









#line 433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
	inline constexpr auto LogConstantG(Builtin::i32 index)  -> const Builtin::f32
	{
		#line 433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(g)(ADV_UFCS(_operator_subscript)(T.__ref(), index).__ref())); 
	}

#line 434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
	inline constexpr auto LogConstantFHi(Builtin::i32 index)  -> const Builtin::f32
	{
		#line 434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(fhi)(ADV_UFCS(_operator_subscript)(T.__ref(), index).__ref())); 
	}

#line 435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
	inline constexpr auto LogConstantFLo(Builtin::i32 index)  -> const Builtin::f128
	{
		#line 435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(flo)(ADV_UFCS(_operator_subscript)(T.__ref(), index).__ref())); 
	}

#line 436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
	inline constexpr auto LogConstantE(Builtin::i32 index)  -> const Builtin::f32
	{
		#line 436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(e)(ADV_UFCS(_operator_subscript)(U.__ref(), index).__ref())); 
	}

#line 437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
	inline constexpr auto LogConstantH(Builtin::i32 index)  -> const Builtin::f32
	{
		#line 437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(h)(ADV_UFCS(_operator_subscript)(U.__ref(), index).__ref())); 
	}














#line 453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
	inline constexpr auto Sum2(Builtin::MutableRef<std::remove_cvref_t<Builtin::f128>> __a__, Builtin::MutableRef<std::remove_cvref_t<Builtin::f128>> __b__) noexcept -> void
	{
		Builtin::f128& a = __a__;
		Builtin::f128& b = __b__;
		#line 455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		const auto w = a + b; 
		#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		b = a - w + b;
		#line 457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		a = w;
	}

#line 460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
	inline constexpr auto Sum3(Builtin::MutableRef<std::remove_cvref_t<Builtin::f128>> __a__, Builtin::MutableRef<std::remove_cvref_t<Builtin::f128>> __b__, Builtin::f64 c) noexcept -> void
	{
		Builtin::f128& a = __a__;
		Builtin::f128& b = __b__;
		#line 462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		Builtin::f128 tmp = c; 
		#line 463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		Sum2(Builtin::MutableRef<std::remove_cvref_t<decltype(tmp)>>(tmp), Builtin::MutableRef<std::remove_cvref_t<decltype(a)>>(a));
		#line 464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		b += a;
		#line 465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		a = tmp;
	}

#line 468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
	inline constexpr auto PackBits(bool sign, Builtin::u16 exponent, Builtin::u128 mantissa)  -> const Builtin::u128
	{
		#line 469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		ADV_EXPRESSION_BODY(((sign ? Builtin::u128(1ULL) : Builtin::u128(0ULL)) << SignShift) + ((Builtin::u128{exponent} << BiasedExponentShift) & BiasedExponentMask) + mantissa); 
	}

#line 472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
	auto LogInternal(Builtin::f128 x)  -> const LD
	{
		#line 476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		LD rp{}; 
		#line 477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		Builtin::u64 lx{}; 
		#line 478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		auto hx = BiasedExponent(x); 
		#line 479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		auto k = Builtin::i32(-16383); 
		#line 481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		if (ADV_UPCS(IsNegative)(x.__ref()) || ADV_UPCS(IsZero)(x.__ref()) || ADV_UPCS(IsNaN)(x.__ref())) {
			#line 482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
			if ((Builtin::u128{hx} | TrailingSignificand(x)) == Builtin::i32(0)) {
				#line 483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
				ADV_UPCS(High)(rp.__ref()) = ADV_USPCS(NegativeInfinity, Builtin::f128)();
				#line 484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
				return rp;
			}
			#line 487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
			ADV_UPCS(High)(rp.__ref()) = ADV_USPCS(NaN, Builtin::f128)();
			#line 488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
			return rp;
		}
		#line 490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		if (ADV_UPCS(IsInfinity)(x.__ref())) {
			#line 491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
			ADV_UPCS(High)(rp.__ref()) = x;
			#line 492 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
			return rp;
		}
		#line 494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		if (ADV_UPCS(IsSubnormal)(x.__ref())) {
			#line 495 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
			x *= ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x40700000000000000000000000000000"));
			#line 496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
			k -= Builtin::i32(113);
			#line 497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
			lx = ADV_UFCS(High64)(TrailingSignificand(x).__ref());
			#line 498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
			hx = BiasedExponent(x);
		} else {
			#line 499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
			{
				#line 500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
				lx = ADV_UFCS(High64)(TrailingSignificand(x).__ref());
			}
		}
		#line 503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		k += (hx | (ADV_UPCS(IsNegative)(x.__ref()) ? Builtin::u16(1U) << Builtin::i32(15) : Builtin::u16(0U)));
		#line 504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		const Builtin::f64 dk = k; 
		#line 505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		x = ADV_USFCS((Builtin::f128), FromBits)(PackBits(Builtin::Boolean(false), Builtin::u16(0x3fffU), TrailingSignificand(x)));
		#line 507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		const auto l2i = Builtin::i32(49) - Builtin::i32(7); 
		#line 508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		const auto i = ADV_UFCS(NarrowToInt32)(((ADV_UFCS(_operator_add_mod)(lx, (Builtin::u64(1ULL) << (l2i - Builtin::i32(2))))) >> (l2i - Builtin::i32(1))).__ref()); 
		#line 509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		const auto d = (x - LogConstantH(i)) * LogConstantG(i) + LogConstantE(i); 
		#line 510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		const auto dd = Builtin::Cast<true, Builtin::f64>(d); 
		#line 512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		Builtin::f128 resultLo = d * d * d * (P3 + d * (P4 + d * (P5 + d * (P6 + d * (P7 + d * (P8 + dd * (P9 + dd * (P10 + dd * (P11 + dd * (P12 + dd * (P13 + dd * P14))))))))))) + (LogConstantFLo(i) + dk * LN2LO) + d * d * P2; 
		#line 516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		Builtin::f128 resultHi = d; 
		#line 518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		Sum3(Builtin::MutableRef<std::remove_cvref_t<decltype(resultHi)>>(resultHi), Builtin::MutableRef<std::remove_cvref_t<decltype(resultLo)>>(resultLo), LogConstantFHi(i) + dk * LN2HI);
		#line 519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		rp = { resultHi, resultLo, Builtin::i32(1) };
		#line 520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Log.ast"
		return rp;
	}


}