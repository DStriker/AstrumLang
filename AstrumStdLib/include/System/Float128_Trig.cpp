#include "Float128.h"
#include "Float128_Trig.h"

namespace System {
//###############################################################################
//# Free function declarations
//###############################################################################
#line 498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	inline constexpr auto BiasedExponent(Builtin::f128 value) noexcept -> const Builtin::u16;
#line 499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	inline constexpr auto Exponent(Builtin::f128 value) noexcept -> const Builtin::i16;
#line 500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	inline constexpr auto Significand(Builtin::f128 value) noexcept -> const Builtin::u128;
#line 501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	inline constexpr auto TrailingSignificand(Builtin::f128 value) noexcept -> const Builtin::u128;
#line 503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	inline constexpr auto ExtractBiasedExponentFromBits(Builtin::u128 bits) noexcept -> const Builtin::u16;
#line 504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	inline constexpr auto ExtractTrailingSignificandFromBits(Builtin::u128 bits) noexcept -> const Builtin::u128;
#line 529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	inline constexpr auto R(Builtin::f128 z) noexcept -> const Builtin::f128;
#line 538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	inline constexpr auto Even(Builtin::f128 x) noexcept -> const Builtin::f128;
#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	inline constexpr auto Odd(Builtin::f128 x) noexcept -> const Builtin::f128;
#line 582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	inline constexpr auto Poly(Builtin::f128 z) noexcept -> const Builtin::f128;
#line 791 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	auto RemPIO2(Builtin::f128 x, Builtin::MutableRef<std::remove_cvref_t<Builtin::f128>> y0, Builtin::MutableRef<std::remove_cvref_t<Builtin::f128>> y1)  -> const Builtin::i32;
#line 1089 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	inline constexpr auto SinInternal(Builtin::f128 x, Builtin::f128 y, Builtin::i32 iy) noexcept -> const Builtin::f128;
#line 1099 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	inline constexpr auto CosInternal(Builtin::f128 x, Builtin::f128 y) noexcept -> const Builtin::f128;
#line 1109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	inline constexpr auto TanInternal(Builtin::f128 x, Builtin::f128 y, Builtin::i32 iy) noexcept -> const Builtin::f128;
#line 1191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	auto FastFloor(Builtin::f128 x) noexcept -> const std::tuple<Builtin::f128, Builtin::f128>;
#line 1208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	inline constexpr auto Sum2(Builtin::MutableRef<std::remove_cvref_t<Builtin::f128>> a, Builtin::MutableRef<std::remove_cvref_t<Builtin::f128>> b) noexcept -> void;
#line 1215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	auto SinPiInternal(Builtin::f128 x) noexcept -> const Builtin::f128;
#line 1230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	auto CosPiInternal(Builtin::f128 x) noexcept -> const Builtin::f128;
#line 1245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	auto TanPiInternal(Builtin::f128 x) noexcept -> const Builtin::f128;
//###############################################################################
//# Global compile-time constants
//###############################################################################
#line 473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto SignMask = Builtin::ParseUInt128("0x80000000000000000000000000000000");
#line 474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto SignShift = Builtin::i32(127);
#line 475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr Builtin::u8 ShiftedSignMask = Builtin::u8{SignMask >> SignShift};
#line 477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto BiasedExponentMask = Builtin::ParseUInt128("0x7FFF0000000000000000000000000000");
#line 478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto BiasedExponentShift = Builtin::i32(112);
#line 479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr Builtin::u16 ShiftedBiasedExponentMask = Builtin::u16{BiasedExponentMask >> BiasedExponentShift};
#line 481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto TrailingSignificandMask = Builtin::ParseUInt128("0x0000FFFFFFFFFFFFFFFFFFFFFFFFFFFF");
#line 483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto MinSign = Builtin::u8(0U);
#line 484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto MaxSign = Builtin::u8(1U);
#line 485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto MinBiasedExponent = ADV_USPCS(MinValue, Builtin::u16)();
#line 486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto MaxBiasedExponent = Builtin::u16(0x7FFFU);
#line 487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto ExpBias = Builtin::u16(16383U);
#line 488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto MinExponent = Builtin::i16(-16382);
#line 489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto MaxExponent = +Builtin::i16(16383);
#line 490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto MinTrailingSignificand = ADV_USPCS(MinValue, Builtin::u128)();
#line 491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto MaxTrailingSignificand = Builtin::ParseUInt128("0x0000FFFFFFFFFFFFFFFFFFFFFFFFFFFF");
#line 493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto TrailingSignificandLength = Builtin::i32(112);
#line 494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto SignificandLength = TrailingSignificandLength + Builtin::i32(1);
#line 496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto RoundingEpsilon = Builtin::BitCast<Builtin::f128>(Builtin::ParseUInt128("0x406F0000000000000000000000000000"));
#line 509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto pS0 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFC5555555555555555555555555ACB"));
#line 510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto pS1 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFFE7733C8659C3C29EA3614B02F2E41"));
#line 511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto pS2 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFF57979B5B674E91B50237574C7D1E"));
#line 512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto pS3 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFFF532828853E027A76AE0DEC75A3DC"));
#line 513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto pS4 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFE85BCD120445D1E686012F127DCD9"));
#line 514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto pS5 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFFD065052B7026F590C744B69789B90"));
#line 515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto pS6 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFA89CDFE969597D61A8F51A8DD0C37"));
#line 516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto pS7 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFF72203159A1D9D99441478415C791C"));
#line 517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto pS8 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FF22F2583B7EC318DDA1ADAB6392121"));
#line 518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto pS9 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE8C42C02E34D40972F241C19F8A186"));
#line 519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto qS1 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xC0013633A31901F9EC3C755C50EDE994"));
#line 520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto qS2 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x40023EEB09AC020A044312ECE6E7A13E"));
#line 521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto qS3 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xC0026A2B54F9B8269216B7123B221EAB"));
#line 522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto qS4 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x4001EF5CE06F68D3B151408108B03471"));
#line 523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto qS5 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xC000A11DBB7DE9989DDC9D890C3A63C4"));
#line 524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto qS6 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFEA7D9602476DB884972B3523611EE"));
#line 525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto qS7 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFFBE6795462B32CA61534B142EE9992"));
#line 526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto qS8 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FF810D39D463279774982415549DFE3"));
#line 527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto qS9 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFF2A230064AF87487AA66DCCC58B501"));
#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto C1 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFA5555555555555555555555555548"));
#line 571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto C2 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFF56C16C16C16C16C16C16C16BF5C98"));
#line 572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto C3 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FEFA01A01A01A01A01A019FFFC4B13D"));
#line 573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto C4 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE927E4FB7789F5C72EEF94869CAC2A"));
#line 574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto C5 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FE21EED8EFF8D897B51B5F62EA9599A"));
#line 575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto C6 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFDA93974A8C07C9C2A38FC44BBC8DF5"));
#line 576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto C7 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FD2AE7F3E733B48DDA73725A8CB76C2"));
#line 577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto C8 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFCA6827863B100EC1D205BD63444584"));
#line 578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto C9 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FC1E542B8A108C071EB27E768BA79E3"));
#line 579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto C10 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFB90CE20CD868A204B8FF44E6BF56E0"));
#line 580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto C11 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FAFEF8127D765B090B7B2A69D9B4DA3"));
#line 591 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto S1 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFFC5555555555555555555555555555"));
#line 592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto S2 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FF8111111111111111111111111107F"));
#line 593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto S3 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFF2A01A01A01A01A01A01A019F8F785"));
#line 594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto S4 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FEC71DE3A556C7338FAAC1C557167FE"));
#line 595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto S5 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFE5AE64567F544E38FE73426974AE93"));
#line 596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto S6 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FDE6124613A86D097C5C00CFA3D6509"));
#line 597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto S7 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFD6AE7F3E733B81DC97972ADED68D8D"));
#line 598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto S8 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FCE952C77030A969D8AB423F5C47870"));
#line 599 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto S9 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFC62F49B46796FE3000000000000000"));
#line 600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto S10 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FBD71B8EE2094BAE000000000000000"));
#line 601 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto S11 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFB476190E2627FCD000000000000000"));
#line 602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto S12 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FAB3D19FFD7AD8BF000000000000000"));
#line 604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto AtanHi = Builtin::ToInlineArray<Builtin::f128>({ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFDDAC670561BB4F68ADFC88BD97875")), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFE921FB54442D18469898CC51701B8")), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFEF730BD281F69B200F10F5E197794")), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFF921FB54442D18469898CC51701B8"))});
#line 611 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto AtanLo = Builtin::ToInlineArray<Builtin::f128>({ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3F89A06DC282B0E4C39BE01C59E2DCDD")), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3F8BCD129024E088A67CC74020BBEA64")), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBF8BEBE566C99ADA9F231BCCAE27916C")), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3F8CCD129024E088A67CC74020BBEA64"))});
#line 618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto AT = Builtin::ToInlineArray<Builtin::f128>({ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFD5555555555555555555555555551")), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFFC999999999999999999999999149E")), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFC2492492492492492492490794362")), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFFBC71C71C71C71C71C71C1C2AFE323")), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFB745D1745D1745D174185B65D7596")), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFFB3B13B13B13B13B118C1975E2A610")), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFB1111111111111057D0A538CAD4F9")), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFFAE1E1E1E1E1E1889E87FC4C058330")), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFAAF286BCA1AE28E037B9171F0F80C")), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFFA861861861632788A5CC72D12DD95")), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFA642C8590766CAC8236DD04294B9B")), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFFA47AE1475D4D458F3E5A99BC9E94B")), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFA2F684B8258F7459A07EDD01DF529")), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFFA1A7B9140F09651610294D6980DCE")), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFA0841D983C8EFF2467423A0A86E23")), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFF9F0781F2D564379FDACD9A9394763")), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FF9D3FEEE0C8B8DBEED38882F4E9337")), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFF9BA14C1DA11FB7C8BAE68A03D216F")), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FF9A078FBEBF61BE4A8F661AE4EEFE2")), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFF9812953610BD44D6FFEC7D9A23D57")), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FF94F98EB1394EEE119CF2D75D7C25B")), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFF8FA3B3B6B7AE1B137A0499210FD65")), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FF81B46E01727FC7DCF338D5EAA9BA0")), ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBFF652D94B4071FF85CE62C980D9F92C"))});
#line 646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto IPIO2 = Builtin::ToInlineArray<Builtin::i32>({Builtin::i32(0xA2F983), Builtin::i32(0x6E4E44), Builtin::i32(0x1529FC), Builtin::i32(0x2757D1), Builtin::i32(0xF534DD), Builtin::i32(0xC0DB62), Builtin::i32(0x95993C), Builtin::i32(0x439041), Builtin::i32(0xFE5163), Builtin::i32(0xABDEBB), Builtin::i32(0xC561B7), Builtin::i32(0x246E3A), Builtin::i32(0x424DD2), Builtin::i32(0xE00649), Builtin::i32(0x2EEA09), Builtin::i32(0xD1921C), Builtin::i32(0xFE1DEB), Builtin::i32(0x1CB129), Builtin::i32(0xA73EE8), Builtin::i32(0x8235F5), Builtin::i32(0x2EBB44), Builtin::i32(0x84E99C), Builtin::i32(0x7026B4), Builtin::i32(0x5F7E41), Builtin::i32(0x3991D6), Builtin::i32(0x398353), Builtin::i32(0x39F49C), Builtin::i32(0x845F8B), Builtin::i32(0xBDF928), Builtin::i32(0x3B1FF8), Builtin::i32(0x97FFDE), Builtin::i32(0x05980F), Builtin::i32(0xEF2F11), Builtin::i32(0x8B5A0A), Builtin::i32(0x6D1F6D), Builtin::i32(0x367ECF), Builtin::i32(0x27CB09), Builtin::i32(0xB74F46), Builtin::i32(0x3F669E), Builtin::i32(0x5FEA2D), Builtin::i32(0x7527BA), Builtin::i32(0xC7EBE5), Builtin::i32(0xF17B3D), Builtin::i32(0x0739F7), Builtin::i32(0x8A5292), Builtin::i32(0xEA6BFB), Builtin::i32(0x5FB11F), Builtin::i32(0x8D5D08), Builtin::i32(0x560330), Builtin::i32(0x46FC7B), Builtin::i32(0x6BABF0), Builtin::i32(0xCFBC20), Builtin::i32(0x9AF436), Builtin::i32(0x1DA9E3), Builtin::i32(0x91615E), Builtin::i32(0xE61B08), Builtin::i32(0x659985), Builtin::i32(0x5F14A0), Builtin::i32(0x68408D), Builtin::i32(0xFFD880), Builtin::i32(0x4D7327), Builtin::i32(0x310606), Builtin::i32(0x1556CA), Builtin::i32(0x73A8C9), Builtin::i32(0x60E27B), Builtin::i32(0xC08C6B), Builtin::i32(0x47C419), Builtin::i32(0xC367CD), Builtin::i32(0xDCE809), Builtin::i32(0x2A8359), Builtin::i32(0xC4768B), Builtin::i32(0x961CA6), Builtin::i32(0xDDAF44), Builtin::i32(0xD15719), Builtin::i32(0x053EA5), Builtin::i32(0xFF0705), Builtin::i32(0x3F7E33), Builtin::i32(0xE832C2), Builtin::i32(0xDE4F98), Builtin::i32(0x327DBB), Builtin::i32(0xC33D26), Builtin::i32(0xEF6B1E), Builtin::i32(0x5EF89F), Builtin::i32(0x3A1F35), Builtin::i32(0xCAF27F), Builtin::i32(0x1D87F1), Builtin::i32(0x21907C), Builtin::i32(0x7C246A), Builtin::i32(0xFA6ED5), Builtin::i32(0x772D30), Builtin::i32(0x433B15), Builtin::i32(0xC614B5), Builtin::i32(0x9D19C3), Builtin::i32(0xC2C4AD), Builtin::i32(0x414D2C), Builtin::i32(0x5D000C), Builtin::i32(0x467D86), Builtin::i32(0x2D71E3), Builtin::i32(0x9AC69B), Builtin::i32(0x006233), Builtin::i32(0x7CD2B4), Builtin::i32(0x97A7B4), Builtin::i32(0xD55537), Builtin::i32(0xF63ED7), Builtin::i32(0x1810A3), Builtin::i32(0xFC764D), Builtin::i32(0x2A9D64), Builtin::i32(0xABD770), Builtin::i32(0xF87C63), Builtin::i32(0x57B07A), Builtin::i32(0xE71517), Builtin::i32(0x5649C0), Builtin::i32(0xD9D63B), Builtin::i32(0x3884A7), Builtin::i32(0xCB2324), Builtin::i32(0x778AD6), Builtin::i32(0x23545A), Builtin::i32(0xB91F00), Builtin::i32(0x1B0AF1), Builtin::i32(0xDFCE19), Builtin::i32(0xFF319F), Builtin::i32(0x6A1E66), Builtin::i32(0x615799), Builtin::i32(0x47FBAC), Builtin::i32(0xD87F7E), Builtin::i32(0xB76522), Builtin::i32(0x89E832), Builtin::i32(0x60BFE6), Builtin::i32(0xCDC4EF), Builtin::i32(0x09366C), Builtin::i32(0xD43F5D), Builtin::i32(0xD7DE16), Builtin::i32(0xDE3B58), Builtin::i32(0x929BDE), Builtin::i32(0x2822D2), Builtin::i32(0xE88628), Builtin::i32(0x4D58E2), Builtin::i32(0x32CAC6), Builtin::i32(0x16E308), Builtin::i32(0xCB7DE0), Builtin::i32(0x50C017), Builtin::i32(0xA71DF3), Builtin::i32(0x5BE018), Builtin::i32(0x34132E), Builtin::i32(0x621283), Builtin::i32(0x014883), Builtin::i32(0x5B8EF5), Builtin::i32(0x7FB0AD), Builtin::i32(0xF2E91E), Builtin::i32(0x434A48), Builtin::i32(0xD36710), Builtin::i32(0xD8DDAA), Builtin::i32(0x425FAE), Builtin::i32(0xCE616A), Builtin::i32(0xA4280A), Builtin::i32(0xB499D3), Builtin::i32(0xF2A606), Builtin::i32(0x7F775C), Builtin::i32(0x83C2A3), Builtin::i32(0x883C61), Builtin::i32(0x78738A), Builtin::i32(0x5A8CAF), Builtin::i32(0xBDD76F), Builtin::i32(0x63A62D), Builtin::i32(0xCBBFF4), Builtin::i32(0xEF818D), Builtin::i32(0x67C126), Builtin::i32(0x45CA55), Builtin::i32(0x36D9CA), Builtin::i32(0xD2A828), Builtin::i32(0x8D61C2), Builtin::i32(0x77C912), Builtin::i32(0x142604), Builtin::i32(0x9B4612), Builtin::i32(0xC459C4), Builtin::i32(0x44C5C8), Builtin::i32(0x91B24D), Builtin::i32(0xF31700), Builtin::i32(0xAD43D4), Builtin::i32(0xE54929), Builtin::i32(0x10D5FD), Builtin::i32(0xFCBE00), Builtin::i32(0xCC941E), Builtin::i32(0xEECE70), Builtin::i32(0xF53E13), Builtin::i32(0x80F1EC), Builtin::i32(0xC3E7B3), Builtin::i32(0x28F8C7), Builtin::i32(0x940593), Builtin::i32(0x3E71C1), Builtin::i32(0xB3092E), Builtin::i32(0xF3450B), Builtin::i32(0x9C1288), Builtin::i32(0x7B20AB), Builtin::i32(0x9FB52E), Builtin::i32(0xC29247), Builtin::i32(0x2F327B), Builtin::i32(0x6D550C), Builtin::i32(0x90A772), Builtin::i32(0x1FE76B), Builtin::i32(0x96CB31), Builtin::i32(0x4A1679), Builtin::i32(0xE27941), Builtin::i32(0x89DFF4), Builtin::i32(0x9794E8), Builtin::i32(0x84E6E2), Builtin::i32(0x973199), Builtin::i32(0x6BED88), Builtin::i32(0x365F5F), Builtin::i32(0x0EFDBB), Builtin::i32(0xB49A48), Builtin::i32(0x6CA467), Builtin::i32(0x427271), Builtin::i32(0x325D8D), Builtin::i32(0xB8159F), Builtin::i32(0x09E5BC), Builtin::i32(0x25318D), Builtin::i32(0x3974F7), Builtin::i32(0x1C0530), Builtin::i32(0x010C0D), Builtin::i32(0x68084B), Builtin::i32(0x58EE2C), Builtin::i32(0x90AA47), Builtin::i32(0x02E774), Builtin::i32(0x24D6BD), Builtin::i32(0xA67DF7), Builtin::i32(0x72486E), Builtin::i32(0xEF169F), Builtin::i32(0xA6948E), Builtin::i32(0xF691B4), Builtin::i32(0x5153D1), Builtin::i32(0xF20ACF), Builtin::i32(0x339820), Builtin::i32(0x7E4BF5), Builtin::i32(0x6863B2), Builtin::i32(0x5F3EDD), Builtin::i32(0x035D40), Builtin::i32(0x7F8985), Builtin::i32(0x295255), Builtin::i32(0xC06437), Builtin::i32(0x10D86D), Builtin::i32(0x324832), Builtin::i32(0x754C5B), Builtin::i32(0xD4714E), Builtin::i32(0x6E5445), Builtin::i32(0xC1090B), Builtin::i32(0x69F52A), Builtin::i32(0xD56614), Builtin::i32(0x9D0727), Builtin::i32(0x50045D), Builtin::i32(0xDB3BB4), Builtin::i32(0xC576EA), Builtin::i32(0x17F987), Builtin::i32(0x7D6B49), Builtin::i32(0xBA271D), Builtin::i32(0x296996), Builtin::i32(0xACCCC6), Builtin::i32(0x5414AD), Builtin::i32(0x6AE290), Builtin::i32(0x89D988), Builtin::i32(0x50722C), Builtin::i32(0xBEA404), Builtin::i32(0x940777), Builtin::i32(0x7030F3), Builtin::i32(0x27FC00), Builtin::i32(0xA871EA), Builtin::i32(0x49C266), Builtin::i32(0x3DE064), Builtin::i32(0x83DD97), Builtin::i32(0x973FA3), Builtin::i32(0xFD9443), Builtin::i32(0x8C860D), Builtin::i32(0xDE4131), Builtin::i32(0x9D3992), Builtin::i32(0x8C70DD), Builtin::i32(0xE7B717), Builtin::i32(0x3BDF08), Builtin::i32(0x2B3715), Builtin::i32(0xA0805C), Builtin::i32(0x93805A), Builtin::i32(0x921110), Builtin::i32(0xD8E80F), Builtin::i32(0xAF806C), Builtin::i32(0x4BFFDB), Builtin::i32(0x0F9038), Builtin::i32(0x761859), Builtin::i32(0x15A562), Builtin::i32(0xBBCB61), Builtin::i32(0xB989C7), Builtin::i32(0xBD4010), Builtin::i32(0x04F2D2), Builtin::i32(0x277549), Builtin::i32(0xF6B6EB), Builtin::i32(0xBB22DB), Builtin::i32(0xAA140A), Builtin::i32(0x2F2689), Builtin::i32(0x768364), Builtin::i32(0x333B09), Builtin::i32(0x1A940E), Builtin::i32(0xAA3A51), Builtin::i32(0xC2A31D), Builtin::i32(0xAEEDAF), Builtin::i32(0x12265C), Builtin::i32(0x4DC26D), Builtin::i32(0x9C7A2D), Builtin::i32(0x9756C0), Builtin::i32(0x833F03), Builtin::i32(0xF6F009), Builtin::i32(0x8C402B), Builtin::i32(0x99316D), Builtin::i32(0x07B439), Builtin::i32(0x15200C), Builtin::i32(0x5BC3D8), Builtin::i32(0xC492F5), Builtin::i32(0x4BADC6), Builtin::i32(0xA5CA4E), Builtin::i32(0xCD37A7), Builtin::i32(0x36A9E6), Builtin::i32(0x9492AB), Builtin::i32(0x6842DD), Builtin::i32(0xDE6319), Builtin::i32(0xEF8C76), Builtin::i32(0x528B68), Builtin::i32(0x37DBFC), Builtin::i32(0xABA1AE), Builtin::i32(0x3115DF), Builtin::i32(0xA1AE00), Builtin::i32(0xDAFB0C), Builtin::i32(0x664D64), Builtin::i32(0xB705ED), Builtin::i32(0x306529), Builtin::i32(0xBF5657), Builtin::i32(0x3AFF47), Builtin::i32(0xB9F96A), Builtin::i32(0xF3BE75), Builtin::i32(0xDF9328), Builtin::i32(0x3080AB), Builtin::i32(0xF68C66), Builtin::i32(0x15CB04), Builtin::i32(0x0622FA), Builtin::i32(0x1DE4D9), Builtin::i32(0xA4B33D), Builtin::i32(0x8F1B57), Builtin::i32(0x09CD36), Builtin::i32(0xE9424E), Builtin::i32(0xA4BE13), Builtin::i32(0xB52333), Builtin::i32(0x1AAAF0), Builtin::i32(0xA8654F), Builtin::i32(0xA5C1D2), Builtin::i32(0x0F3F0B), Builtin::i32(0xCD785B), Builtin::i32(0x76F923), Builtin::i32(0x048B7B), Builtin::i32(0x721789), Builtin::i32(0x53A6C6), Builtin::i32(0xE26E6F), Builtin::i32(0x00EBEF), Builtin::i32(0x584A9B), Builtin::i32(0xB7DAC4), Builtin::i32(0xBA66AA), Builtin::i32(0xCFCF76), Builtin::i32(0x1D02D1), Builtin::i32(0x2DF1B1), Builtin::i32(0xC1998C), Builtin::i32(0x77ADC3), Builtin::i32(0xDA4886), Builtin::i32(0xA05DF7), Builtin::i32(0xF480C6), Builtin::i32(0x2FF0AC), Builtin::i32(0x9AECDD), Builtin::i32(0xBC5C3F), Builtin::i32(0x6DDED0), Builtin::i32(0x1FC790), Builtin::i32(0xB6DB2A), Builtin::i32(0x3A25A3), Builtin::i32(0x9AAF00), Builtin::i32(0x9353AD), Builtin::i32(0x0457B6), Builtin::i32(0xB42D29), Builtin::i32(0x7E804B), Builtin::i32(0xA707DA), Builtin::i32(0x0EAA76), Builtin::i32(0xA1597B), Builtin::i32(0x2A1216), Builtin::i32(0x2DB7DC), Builtin::i32(0xFDE5FA), Builtin::i32(0xFEDB89), Builtin::i32(0xFDBE89), Builtin::i32(0x6C76E4), Builtin::i32(0xFCA906), Builtin::i32(0x70803E), Builtin::i32(0x156E85), Builtin::i32(0xFF87FD), Builtin::i32(0x073E28), Builtin::i32(0x336761), Builtin::i32(0x86182A), Builtin::i32(0xEABD4D), Builtin::i32(0xAFE7B3), Builtin::i32(0x6E6D8F), Builtin::i32(0x396795), Builtin::i32(0x5BBF31), Builtin::i32(0x48D784), Builtin::i32(0x16DF30), Builtin::i32(0x432DC7), Builtin::i32(0x356125), Builtin::i32(0xCE70C9), Builtin::i32(0xB8CB30), Builtin::i32(0xFD6CBF), Builtin::i32(0xA200A4), Builtin::i32(0xE46C05), Builtin::i32(0xA0DD5A), Builtin::i32(0x476F21), Builtin::i32(0xD21262), Builtin::i32(0x845CB9), Builtin::i32(0x496170), Builtin::i32(0xE0566B), Builtin::i32(0x015299), Builtin::i32(0x375550), Builtin::i32(0xB7D51E), Builtin::i32(0xC4F133), Builtin::i32(0x5F6E13), Builtin::i32(0xE4305D), Builtin::i32(0xA92E85), Builtin::i32(0xC3B21D), Builtin::i32(0x3632A1), Builtin::i32(0xA4B708), Builtin::i32(0xD4B1EA), Builtin::i32(0x21F716), Builtin::i32(0xE4698F), Builtin::i32(0x77FF27), Builtin::i32(0x80030C), Builtin::i32(0x2D408D), Builtin::i32(0xA0CD4F), Builtin::i32(0x99A520), Builtin::i32(0xD3A2B3), Builtin::i32(0x0A5D2F), Builtin::i32(0x42F9B4), Builtin::i32(0xCBDA11), Builtin::i32(0xD0BE7D), Builtin::i32(0xC1DB9B), Builtin::i32(0xBD17AB), Builtin::i32(0x81A2CA), Builtin::i32(0x5C6A08), Builtin::i32(0x17552E), Builtin::i32(0x550027), Builtin::i32(0xF0147F), Builtin::i32(0x8607E1), Builtin::i32(0x640B14), Builtin::i32(0x8D4196), Builtin::i32(0xDEBE87), Builtin::i32(0x2AFDDA), Builtin::i32(0xB6256B), Builtin::i32(0x34897B), Builtin::i32(0xFEF305), Builtin::i32(0x9EBFB9), Builtin::i32(0x4F6A68), Builtin::i32(0xA82A4A), Builtin::i32(0x5AC44F), Builtin::i32(0xBCF82D), Builtin::i32(0x985AD7), Builtin::i32(0x95C7F4), Builtin::i32(0x8D4D0D), Builtin::i32(0xA63A20), Builtin::i32(0x5F57A4), Builtin::i32(0xB13F14), Builtin::i32(0x953880), Builtin::i32(0x0120CC), Builtin::i32(0x86DD71), Builtin::i32(0xB6DEC9), Builtin::i32(0xF560BF), Builtin::i32(0x11654D), Builtin::i32(0x6B0701), Builtin::i32(0xACB08C), Builtin::i32(0xD0C0B2), Builtin::i32(0x485551), Builtin::i32(0x0EFB1E), Builtin::i32(0xC37295), Builtin::i32(0x3B06A3), Builtin::i32(0x3540C0), Builtin::i32(0x7BDC06), Builtin::i32(0xCC45E0), Builtin::i32(0xFA294E), Builtin::i32(0xC8CAD6), Builtin::i32(0x41F3E8), Builtin::i32(0xDE647C), Builtin::i32(0xD8649B), Builtin::i32(0x31BED9), Builtin::i32(0xC397A4), Builtin::i32(0xD45877), Builtin::i32(0xC5E369), Builtin::i32(0x13DAF0), Builtin::i32(0x3C3ABA), Builtin::i32(0x461846), Builtin::i32(0x5F7555), Builtin::i32(0xF5BDD2), Builtin::i32(0xC6926E), Builtin::i32(0x5D2EAC), Builtin::i32(0xED440E), Builtin::i32(0x423E1C), Builtin::i32(0x87C461), Builtin::i32(0xE9FD29), Builtin::i32(0xF3D6E7), Builtin::i32(0xCA7C22), Builtin::i32(0x35916F), Builtin::i32(0xC5E008), Builtin::i32(0x8DD7FF), Builtin::i32(0xE26A6E), Builtin::i32(0xC6FDB0), Builtin::i32(0xC10893), Builtin::i32(0x745D7C), Builtin::i32(0xB2AD6B), Builtin::i32(0x9D6ECD), Builtin::i32(0x7B723E), Builtin::i32(0x6A11C6), Builtin::i32(0xA9CFF7), Builtin::i32(0xDF7329), Builtin::i32(0xBAC9B5), Builtin::i32(0x5100B7), Builtin::i32(0x0DB2E2), Builtin::i32(0x24BA74), Builtin::i32(0x607DE5), Builtin::i32(0x8AD874), Builtin::i32(0x2C150D), Builtin::i32(0x0C1881), Builtin::i32(0x94667E), Builtin::i32(0x162901), Builtin::i32(0x767A9F), Builtin::i32(0xBEFDFD), Builtin::i32(0xEF4556), Builtin::i32(0x367ED9), Builtin::i32(0x13D9EC), Builtin::i32(0xB9BA8B), Builtin::i32(0xFC97C4), Builtin::i32(0x27A831), Builtin::i32(0xC36EF1), Builtin::i32(0x36C594), Builtin::i32(0x56A8D8), Builtin::i32(0xB5A8B4), Builtin::i32(0x0ECCCF), Builtin::i32(0x2D8912), Builtin::i32(0x34576F), Builtin::i32(0x89562C), Builtin::i32(0xE3CE99), Builtin::i32(0xB920D6), Builtin::i32(0xAA5E6B), Builtin::i32(0x9C2A3E), Builtin::i32(0xCC5F11), Builtin::i32(0x4A0BFD), Builtin::i32(0xFBF4E1), Builtin::i32(0x6D3B8E), Builtin::i32(0x2C86E2), Builtin::i32(0x84D4E9), Builtin::i32(0xA9B4FC), Builtin::i32(0xD1EEEF), Builtin::i32(0xC9352E), Builtin::i32(0x61392F), Builtin::i32(0x442138), Builtin::i32(0xC8D91B), Builtin::i32(0x0AFC81), Builtin::i32(0x6A4AFB), Builtin::i32(0xD81C2F), Builtin::i32(0x84B453), Builtin::i32(0x8C994E), Builtin::i32(0xCC2254), Builtin::i32(0xDC552A), Builtin::i32(0xD6C6C0), Builtin::i32(0x96190B), Builtin::i32(0xB8701A), Builtin::i32(0x649569), Builtin::i32(0x605A26), Builtin::i32(0xEE523F), Builtin::i32(0x0F117F), Builtin::i32(0x11B5F4), Builtin::i32(0xF5CBFC), Builtin::i32(0x2DBC34), Builtin::i32(0xEEBC34), Builtin::i32(0xCC5DE8), Builtin::i32(0x605EDD), Builtin::i32(0x9B8E67), Builtin::i32(0xEF3392), Builtin::i32(0xB817C9), Builtin::i32(0x9B5861), Builtin::i32(0xBC57E1), Builtin::i32(0xC68351), Builtin::i32(0x103ED8), Builtin::i32(0x4871DD), Builtin::i32(0xDD1C2D), Builtin::i32(0xA118AF), Builtin::i32(0x462C21), Builtin::i32(0xD7F359), Builtin::i32(0x987AD9), Builtin::i32(0xC0549E), Builtin::i32(0xFA864F), Builtin::i32(0xFC0656), Builtin::i32(0xAE79E5), Builtin::i32(0x362289), Builtin::i32(0x22AD38), Builtin::i32(0xDC9367), Builtin::i32(0xAAE855), Builtin::i32(0x382682), Builtin::i32(0x9BE7CA), Builtin::i32(0xA40D51), Builtin::i32(0xB13399), Builtin::i32(0x0ED7A9), Builtin::i32(0x480569), Builtin::i32(0xF0B265), Builtin::i32(0xA7887F), Builtin::i32(0x974C88), Builtin::i32(0x36D1F9), Builtin::i32(0xB39221), Builtin::i32(0x4A827B), Builtin::i32(0x21CF98), Builtin::i32(0xDC9F40), Builtin::i32(0x5547DC), Builtin::i32(0x3A74E1), Builtin::i32(0x42EB67), Builtin::i32(0xDF9DFE), Builtin::i32(0x5FD45E), Builtin::i32(0xA4677B), Builtin::i32(0x7AACBA), Builtin::i32(0xA2F655), Builtin::i32(0x23882B), Builtin::i32(0x55BA41), Builtin::i32(0x086E59), Builtin::i32(0x862A21), Builtin::i32(0x834739), Builtin::i32(0xE6E389), Builtin::i32(0xD49EE5), Builtin::i32(0x40FB49), Builtin::i32(0xE956FF), Builtin::i32(0xCA0F1C), Builtin::i32(0x8A59C5), Builtin::i32(0x2BFA94), Builtin::i32(0xC5C1D3), Builtin::i32(0xCFC50F), Builtin::i32(0xAE5ADB), Builtin::i32(0x86C547), Builtin::i32(0x624385), Builtin::i32(0x3B8621), Builtin::i32(0x94792C), Builtin::i32(0x876110), Builtin::i32(0x7B4C2A), Builtin::i32(0x1A2C80), Builtin::i32(0x12BF43), Builtin::i32(0x902688), Builtin::i32(0x893C78), Builtin::i32(0xE4C4A8), Builtin::i32(0x7BDBE5), Builtin::i32(0xC23AC4), Builtin::i32(0xEAF426), Builtin::i32(0x8A67F7), Builtin::i32(0xBF920D), Builtin::i32(0x2BA365), Builtin::i32(0xB1933D), Builtin::i32(0x0B7CBD), Builtin::i32(0xDC51A4), Builtin::i32(0x63DD27), Builtin::i32(0xDDE169), Builtin::i32(0x19949A), Builtin::i32(0x9529A8), Builtin::i32(0x28CE68), Builtin::i32(0xB4ED09), Builtin::i32(0x209F44), Builtin::i32(0xCA984E), Builtin::i32(0x638270), Builtin::i32(0x237C7E), Builtin::i32(0x32B90F), Builtin::i32(0x8EF5A7), Builtin::i32(0xE75614), Builtin::i32(0x08F121), Builtin::i32(0x2A9DB5), Builtin::i32(0x4D7E6F), Builtin::i32(0x5119A5), Builtin::i32(0xABF9B5), Builtin::i32(0xD6DF82), Builtin::i32(0x61DD96), Builtin::i32(0x023616), Builtin::i32(0x9F3AC4), Builtin::i32(0xA1A283), Builtin::i32(0x6DED72), Builtin::i32(0x7A8D39), Builtin::i32(0xA9B882), Builtin::i32(0x5C326B), Builtin::i32(0x5B2746), Builtin::i32(0xED3400), Builtin::i32(0x7700D2), Builtin::i32(0x55F4FC), Builtin::i32(0x4D5901), Builtin::i32(0x8071E0)});
#line 765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto PIO2 = Builtin::ToInlineArray<Builtin::f64>({Builtin::f64(1.57079625129699707031e+00), Builtin::f64(7.54978941586159635335e-08), Builtin::f64(5.39030252995776476554e-15), Builtin::f64(3.28200341580791294123e-22), Builtin::f64(1.27065575308067607349e-29), Builtin::f64(1.22933308981111328932e-36), Builtin::f64(2.73370053816464559624e-44), Builtin::f64(2.16741683877804819444e-51)});
#line 777 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto Quarter = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFD0000000000000000000000000000"));
#line 778 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto HalfOne = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFE0000000000000000000000000000"));
#line 779 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto ThreeFourth = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFE8000000000000000000000000000"));
#line 780 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto Two = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x40000000000000000000000000000000"));
#line 782 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto Pio4 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFE921FB54442D18469898CC51701B8"));
#line 783 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto PIO4LO = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3F8CCD1290C7B25907DD492F6840C751"));
#line 785 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto INVPIO2 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFE45F306DC9C882A53F84EAFA3EA6A"));
#line 786 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto PIO2_HI = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFF921FB54442D18469898CC51701B8"));
#line 787 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto PIO2_LO = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3F8CCD129024E088A67CC74020BBEA64"));
#line 788 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto PI_2 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFF921FB54442D18469898CC51701B8"));
#line 789 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
inline constexpr auto PI_4 = ADV_USFCS_NONLOCAL((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFE921FB54442D18469898CC51701B8"));
#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	auto SinImpl(Builtin::f128 x)  -> const Builtin::f128
	{
		#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto exp = BiasedExponent(x); 
		#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		if (exp == MaxBiasedExponent) {
			#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			return ADV_USPCS(NaN, Builtin::f128)();
		}
		#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		if ((ADV_UPCS(Abs)(x.__ref()) <=> PI_4) < 0) {
			#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			if ((exp <=> Builtin::i32(0x3fff) - (ADV_UFCS(_operator_bsl)(Builtin::i32(113), Builtin::i32(2)))) < 0) {
				#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				return x;
			}
			#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			return SinInternal(x, Builtin::i32(0), Builtin::i32(0));
		}
		#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		Builtin::f128 high{}, low{}; 
		#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto n = RemPIO2(x, Builtin::MutableRef<std::remove_cvref_t<decltype(high)>>(high), Builtin::MutableRef<std::remove_cvref_t<decltype(low)>>(low)) & Builtin::i32(3); 
		#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		return [&]() 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
		{
			#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			auto __tmp__valid_25 = Builtin::Cast<false, std::decay_t<decltype(n)>::__self>(n);
			#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			if(__tmp__valid_25.IsValid() && Builtin::Is(*__tmp__valid_25, Builtin::i32(0))) {
				#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				const auto& n = *__tmp__valid_25;
				return SinInternal(high, low, Builtin::i32(1));
			}
			else {
				#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				if(__tmp__valid_25.IsValid() && Builtin::Is(*__tmp__valid_25, Builtin::i32(1))) {
					#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					const auto& n = *__tmp__valid_25;
					return CosInternal(high, low);
				}
				else {
					#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					if(__tmp__valid_25.IsValid() && Builtin::Is(*__tmp__valid_25, Builtin::i32(2))) {
						#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
						const auto& n = *__tmp__valid_25;
						return -SinInternal(high, low, Builtin::i32(1));
					}
					else {
						return -CosInternal(high, low);
						
					}
				}
			}
		}
ADV_WARNING_POP
		();
	}

#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	auto CosImpl(Builtin::f128 x)  -> const Builtin::f128
	{
		#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto exp = BiasedExponent(x); 
		#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		if (exp == MaxBiasedExponent) {
			#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			return ADV_USPCS(NaN, Builtin::f128)();
		}
		#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		if ((ADV_UPCS(Abs)(x.__ref()) <=> PI_4) < 0) {
			#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			if ((exp <=> Builtin::i32(0x3fff) - (ADV_UFCS(_operator_bsl)(Builtin::i32(113), Builtin::i32(2)))) < 0) {
				#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				return x + Builtin::i32(1);
			}
			#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			return CosInternal(x, Builtin::i32(0));
		}
		#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		Builtin::f128 high{}, low{}; 
		#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto n = RemPIO2(x, Builtin::MutableRef<std::remove_cvref_t<decltype(high)>>(high), Builtin::MutableRef<std::remove_cvref_t<decltype(low)>>(low)) & Builtin::i32(3); 
		#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		return [&]() 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
		{
			#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			auto __tmp__valid_53 = Builtin::Cast<false, std::decay_t<decltype(n)>::__self>(n);
			#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			if(__tmp__valid_53.IsValid() && Builtin::Is(*__tmp__valid_53, Builtin::i32(0))) {
				#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				const auto& n = *__tmp__valid_53;
				return CosInternal(high, low);
			}
			else {
				#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				if(__tmp__valid_53.IsValid() && Builtin::Is(*__tmp__valid_53, Builtin::i32(1))) {
					#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					const auto& n = *__tmp__valid_53;
					return -SinInternal(high, low, Builtin::i32(1));
				}
				else {
					#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					if(__tmp__valid_53.IsValid() && Builtin::Is(*__tmp__valid_53, Builtin::i32(2))) {
						#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
						const auto& n = *__tmp__valid_53;
						return -CosInternal(high, low);
					}
					else {
						return SinInternal(high, low, Builtin::i32(1));
						
					}
				}
			}
		}
ADV_WARNING_POP
		();
	}

#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	auto SinCosImpl(Builtin::f128 x)  -> const std::tuple<Builtin::f128, Builtin::f128>
	{
		#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto exp = BiasedExponent(x); 
		#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		if (exp == MaxBiasedExponent) {
			#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			return std::make_tuple(ADV_USPCS(NaN, Builtin::f128)(), ADV_USPCS(NaN, Builtin::f128)());
		}
		#line 70 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		if ((ADV_UPCS(Abs)(x.__ref()) <=> PI_4) < 0) {
			#line 71 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			if ((exp <=> Builtin::i32(0x3fff) - (ADV_UFCS(_operator_bsl)(Builtin::i32(113), Builtin::i32(2)))) < 0) {
				#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				return std::make_tuple(x, x + Builtin::i32(1));
			}
			#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			return std::make_tuple(SinInternal(x, Builtin::i32(0), Builtin::i32(0)), CosInternal(x, Builtin::i32(0)));
		}
		#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		Builtin::f128 high{}, low{}; 
		#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto n = RemPIO2(x, Builtin::MutableRef<std::remove_cvref_t<decltype(high)>>(high), Builtin::MutableRef<std::remove_cvref_t<decltype(low)>>(low)) & Builtin::i32(3); 
		#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto sin = SinInternal(high, low, Builtin::i32(1)); 
		#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto cos = CosInternal(high, low); 
		#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		return [&]() 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
		{
			#line 84 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			auto __tmp__valid_83 = Builtin::Cast<false, std::decay_t<decltype(n)>::__self>(n);
			#line 84 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			if(__tmp__valid_83.IsValid() && Builtin::Is(*__tmp__valid_83, Builtin::i32(0))) {
				#line 84 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				const auto& n = *__tmp__valid_83;
				return std::make_tuple(sin, cos);
			}
			else {
				#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				if(__tmp__valid_83.IsValid() && Builtin::Is(*__tmp__valid_83, Builtin::i32(1))) {
					#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					const auto& n = *__tmp__valid_83;
					return std::make_tuple(cos, -sin);
				}
				else {
					#line 86 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					if(__tmp__valid_83.IsValid() && Builtin::Is(*__tmp__valid_83, Builtin::i32(2))) {
						#line 86 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
						const auto& n = *__tmp__valid_83;
						return std::make_tuple(-sin, -cos);
					}
					else {
						return std::make_tuple(-cos, sin);
						
					}
				}
			}
		}
ADV_WARNING_POP
		();
	}

#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	auto TanImpl(Builtin::f128 x)  -> const Builtin::f128
	{
		#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		auto ix = ADV_UFCS(High64)(ADV_UPCS(Bits)(x.__ref()).__ref()) & Builtin::u64(0x7fffffffffffffffULL); 
		#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		if ((ix <=> Builtin::u64(0x3ffe921fb54442d1ULL)) <= 0) {
			#line 95 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			return TanInternal(x, Builtin::i32(0), Builtin::i32(1));
		} else {
			#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			if ((ix <=> Builtin::u64(0x7fff000000000000ULL)) >= 0) {
				#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				return ADV_USPCS(NaN, Builtin::f128)();
			} else {
				#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				{
					#line 99 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					Builtin::f128 high{}, low{}; 
					#line 100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					const auto n = RemPIO2(x, Builtin::MutableRef<std::remove_cvref_t<decltype(high)>>(high), Builtin::MutableRef<std::remove_cvref_t<decltype(low)>>(low)); 
					#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					return TanInternal(high, low, Builtin::i32(1) - ((n & Builtin::i32(1)) << Builtin::i32(1)));
				}
			}
		}
		return {};
	}

#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	auto AsinImpl(Builtin::f128 x)  -> const Builtin::f128
	{
		#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto exp = BiasedExponent(x); 
		#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto sign = ADV_UPCS(IsNegative)(x.__ref()); 
		#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		if ((exp <=> Builtin::u32(0x3FFFU)) >= 0) {
			#line 112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			if (x == ADV_USPCS(One, Builtin::f128)() || x == ADV_USPCS(MinusOne, Builtin::f128)()) {
				#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				return x * PIO2_HI + ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3F870000000000000000000000000000"));
			}
			#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			return ADV_USPCS(NaN, Builtin::f128)();
		}
		#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		if ((exp <=> Builtin::i32(0x3FFF) - Builtin::i32(1)) < 0) {
			#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			if ((exp <=> Builtin::i32(0x3FFF) - (ADV_UFCS(_operator_bsl)(Builtin::i32(114), Builtin::i32(2)))) < 0) {
				#line 122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				return x;
			}
			#line 125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			return x + x * R(x * x);
		}
		#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto z = (ADV_USPCS(One, Builtin::f128)() - ADV_UPCS(Abs)(x.__ref())) * Builtin::f128{Builtin::f64(0.5)}; 
		#line 130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto s = ADV_UPCS(Sqrt)(z.__ref()); 
		#line 131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto r = R(z); 
		#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		if ((((ADV_UFCS(High64)(ADV_UPCS(Bits)(x.__ref()).__ref()) >> Builtin::i32(32)) & Builtin::u32(0xFFFFU)) <=> Builtin::i32(0xEE00)) >= 0) {
			#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			x = PIO2_HI - (Builtin::f128{Builtin::i32(2)} * (s + s * r) - PIO2_LO);
		} else {
			#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			{
				#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				const auto f = ADV_USFCS((Builtin::f128), FromBits)(Builtin::u128{ADV_UFCS(High64)(ADV_UPCS(Bits)(s.__ref()).__ref()), Builtin::u32(0U)}); 
				#line 136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				const auto c = (z - f * f) / (s + f); 
				#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				x = Builtin::f128{Builtin::f64(0.5)} * PIO2_HI - (Builtin::f128{Builtin::i32(2)} * s * r - (PIO2_LO - c * Builtin::i32(2)) - (Builtin::f128{Builtin::f64(0.5)} * PIO2_HI - f * Builtin::i32(2)));
			}
		}
		#line 140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		return sign ? -x : x;
	}

#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	auto AcosImpl(Builtin::f128 x)  -> const Builtin::f128
	{
		#line 145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		if (x == Builtin::i32(0)) {
			#line 146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			return PI_2;
		}
		#line 149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		if ((x <=> ADV_USPCS(One, Builtin::f128)()) >= 0) {
			#line 150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			if (x == ADV_USPCS(One, Builtin::f128)()) {
				#line 151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				return Builtin::i32(0);
			}
			#line 153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			return ADV_USPCS(NaN, Builtin::f128)();
		}
		#line 156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		if ((x <=> ADV_USPCS(MinusOne, Builtin::f128)()) <= 0) {
			#line 157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			if (x == ADV_USPCS(MinusOne, Builtin::f128)()) {
				#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				return ADV_USPCS(Pi, Builtin::f128)();
			}
			#line 160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			return ADV_USPCS(NaN, Builtin::f128)();
		}
		#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto y = ADV_UPCS(Atan)((ADV_UPCS(Sqrt)((ADV_USPCS(One, Builtin::f128)() - (x * x)).__ref()) / x).__ref()); 
		#line 164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		return (x <=> Builtin::i32(0)) > 0 ? y : y + ADV_USPCS(Pi, Builtin::f128)();
	}

#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	auto AtanImpl(Builtin::f128 x)  -> const Builtin::f128
	{
		#line 169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto exp = BiasedExponent(x); 
		#line 170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto sign = ADV_UPCS(IsNegative)(x.__ref()); 
		#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		if ((exp <=> Builtin::i32(0x3FFF) + Builtin::i32(114)) >= 0) {
			#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			if (ADV_UPCS(IsNaN)(x.__ref())) {
				#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				return x;
			}
			#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			return sign ? -(ADV_UFCS(_operator_subscript)(AtanHi.__ref(), Builtin::i32(3))) : ADV_UFCS(_operator_subscript)(AtanHi.__ref(), Builtin::i32(3));
		}
		#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto expman = (Builtin::u32{exp} << Builtin::i32(8)) | ADV_UFCS(NarrowToUInt8)((ADV_UFCS(High64)(ADV_UPCS(Bits)(x.__ref()).__ref()) >> Builtin::i32(40)).__ref()); 
		#line 180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		Builtin::i32 id{}; 
		#line 182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		if ((expman <=> ((Builtin::i32(0x3FFF) - Builtin::i32(2)) << Builtin::i32(8)) + Builtin::i32(0xC0)) < 0) {
			#line 183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			if ((exp <=> Builtin::i32(0x3FFF) - (ADV_UFCS(_operator_bsl)(Builtin::i32(114), Builtin::i32(2)))) < 0) {
				#line 184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				if (ADV_UPCS(IsSubnormal)(x.__ref())) {
					#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					x = ADV_USPCS(NegativeInfinity, Builtin::f128)();
				}
				#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				return x;
			}
			#line 189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			id = Builtin::i32(-1);
		} else {
			#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			{
				#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				x = ADV_UPCS(Abs)(x.__ref());
				#line 192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				if ((expman <=> (Builtin::i32(0x3fff) << Builtin::i32(8)) + Builtin::i32(0x30)) < 0) {
					#line 194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					if ((expman <=> ((Builtin::i32(0x3fff) - Builtin::i32(1)) << Builtin::i32(8)) + Builtin::i32(0x60)) < 0) {
						#line 195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
						id = Builtin::i32(0);
						#line 196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
						x = (Builtin::f128{Builtin::i32(2)} * x - ADV_USPCS(One, Builtin::f128)()) / (Builtin::f128{Builtin::i32(2)} + x);
					} else {
						#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
						{
							#line 198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
							id = Builtin::i32(1);
							#line 199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
							x = (x - ADV_USPCS(One, Builtin::f128)()) / (x + ADV_USPCS(One, Builtin::f128)());
						}
					}
				} else {
					#line 201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					{
						#line 202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
						if ((expman <=> ((Builtin::i32(0x3fff) + Builtin::i32(1)) << Builtin::i32(8)) + Builtin::i32(0x38)) < 0) {
							#line 203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
							id = Builtin::i32(2);
							#line 204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
							constexpr auto oneHalf = ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFF8000000000000000000000000000"));
							#line 205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
							x = (x - oneHalf) / (ADV_USPCS(One, Builtin::f128)() + oneHalf * x);
						} else {
							#line 206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
							{
								#line 207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
								id = Builtin::i32(3);
								#line 208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
								x = ADV_USPCS(MinusOne, Builtin::f128)() / x;
							}
						}
					}
				}
			}
		}
		#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		auto z = x * x; 
		#line 214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto w = z * z; 
		#line 215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto s1 = z * Even(w); 
		#line 216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto s2 = w * Odd(w); 
		#line 217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		if ((id <=> Builtin::i32(0)) < 0) {
			#line 218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			return x - x * (s1 + s2);
		}
		#line 220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		z = ADV_UFCS(_operator_subscript)(AtanHi.__ref(), id) - ((x * (s1 + s2) - ADV_UFCS(_operator_subscript)(AtanLo.__ref(), id)) - x);
		#line 221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		return sign ? -z : z;
	}

#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	auto Atan2Impl(Builtin::f128 y, Builtin::f128 x)  -> const Builtin::f128
	{
		#line 226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		if (ADV_UPCS(IsNaN)(x.__ref()) || ADV_UPCS(IsNaN)(y.__ref())) {
			#line 227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			return ADV_USPCS(NaN, Builtin::f128)();
		}
		#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const Builtin::i32 ex = BiasedExponent(x); 
		#line 231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const Builtin::i32 ey = BiasedExponent(y); 
		#line 232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto m = Builtin::i32{Builtin::i32(2) * (ADV_UFCS(High64)(ADV_UPCS(Bits)(x.__ref()).__ref()) >> Builtin::i32(63)) | (ADV_UFCS(High64)(ADV_UPCS(Bits)(y.__ref()).__ref()) >> Builtin::i32(63))}; 
		#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		if (y == Builtin::i32(0)) {
			#line 235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			return [&]() 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
			{
				#line 236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				auto __tmp__valid_235 = Builtin::Cast<false, std::decay_t<decltype(m)>::__self>(m);
				#line 236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				if(__tmp__valid_235.IsValid() && Builtin::Is(*__tmp__valid_235, Builtin::i32(0)) || Builtin::Is(*__tmp__valid_235, Builtin::i32(1))) {
					#line 236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					const auto& m = *__tmp__valid_235;
					return y;
				}
				else {
					#line 237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					if(__tmp__valid_235.IsValid() && Builtin::Is(*__tmp__valid_235, Builtin::i32(2))) {
						#line 237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
						const auto& m = *__tmp__valid_235;
						return Builtin::f128{Builtin::i32(2)} * PIO2_HI;
					}
					else {
						#line 238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
						if(__tmp__valid_235.IsValid() && Builtin::Is(*__tmp__valid_235, Builtin::i32(3))) {
							#line 238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
							const auto& m = *__tmp__valid_235;
							return Builtin::f128{Builtin::i32(-2)} * PIO2_HI;
						}
						 else { using __switchType = decltype(m); static_assert((!std::derived_from<__switchType, Builtin::Enum> && !std::derived_from<__switchType, Builtin::EnumClassRef> && !std::derived_from<__switchType, Builtin::Union>) || Builtin::GetVariantsCount<__switchType>() <= 0, "Switch does not handle all possible variants, add a default branch"); }
					}
				}
			}
ADV_WARNING_POP
			();
		}
		#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		if (x == Builtin::i32(0)) {
			#line 242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			return ((m & Builtin::i32(1)) != Builtin::i32(0)) ? -PIO2_HI : PIO2_HI;
		}
		#line 244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		if (ex == MaxBiasedExponent) {
			#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			if (ey == MaxBiasedExponent) {
				#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				constexpr auto oneHalf = ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFF8000000000000000000000000000"));
				#line 248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				return [&]() 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
				{
					#line 249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					auto __tmp__valid_248 = Builtin::Cast<false, std::decay_t<decltype(m)>::__self>(m);
					#line 249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					if(__tmp__valid_248.IsValid() && Builtin::Is(*__tmp__valid_248, Builtin::i32(0))) {
						#line 249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
						const auto& m = *__tmp__valid_248;
						return PIO2_HI / Builtin::i32(2);
					}
					else {
						#line 250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
						if(__tmp__valid_248.IsValid() && Builtin::Is(*__tmp__valid_248, Builtin::i32(1))) {
							#line 250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
							const auto& m = *__tmp__valid_248;
							return -PIO2_HI / Builtin::i32(2);
						}
						else {
							#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
							if(__tmp__valid_248.IsValid() && Builtin::Is(*__tmp__valid_248, Builtin::i32(2))) {
								#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
								const auto& m = *__tmp__valid_248;
								return oneHalf * PIO2_HI;
							}
							else {
								#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
								if(__tmp__valid_248.IsValid() && Builtin::Is(*__tmp__valid_248, Builtin::i32(3))) {
									#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
									const auto& m = *__tmp__valid_248;
									return -oneHalf * PIO2_HI;
								}
								 else { using __switchType = decltype(m); static_assert((!std::derived_from<__switchType, Builtin::Enum> && !std::derived_from<__switchType, Builtin::EnumClassRef> && !std::derived_from<__switchType, Builtin::Union>) || Builtin::GetVariantsCount<__switchType>() <= 0, "Switch does not handle all possible variants, add a default branch"); }
							}
						}
					}
				}
ADV_WARNING_POP
				();
			} else {
				#line 254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				{
					#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					return [&]() 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
					{
						#line 256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
						auto __tmp__valid_255 = Builtin::Cast<false, std::decay_t<decltype(m)>::__self>(m);
						#line 256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
						if(__tmp__valid_255.IsValid() && Builtin::Is(*__tmp__valid_255, Builtin::i32(0))) {
							#line 256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
							const auto& m = *__tmp__valid_255;
							return Builtin::ParseFloat128("0.0");
						}
						else {
							#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
							if(__tmp__valid_255.IsValid() && Builtin::Is(*__tmp__valid_255, Builtin::i32(1))) {
								#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
								const auto& m = *__tmp__valid_255;
								return ADV_USPCS(NegativeZero, Builtin::f128)();
							}
							else {
								#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
								if(__tmp__valid_255.IsValid() && Builtin::Is(*__tmp__valid_255, Builtin::i32(2))) {
									#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
									const auto& m = *__tmp__valid_255;
									return Builtin::f128{Builtin::i32(2)} * PIO2_HI;
								}
								else {
									#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
									if(__tmp__valid_255.IsValid() && Builtin::Is(*__tmp__valid_255, Builtin::i32(3))) {
										#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
										const auto& m = *__tmp__valid_255;
										return Builtin::f128{Builtin::i32(-2)} * PIO2_HI;
									}
									 else { using __switchType = decltype(m); static_assert((!std::derived_from<__switchType, Builtin::Enum> && !std::derived_from<__switchType, Builtin::EnumClassRef> && !std::derived_from<__switchType, Builtin::Union>) || Builtin::GetVariantsCount<__switchType>() <= 0, "Switch does not handle all possible variants, add a default branch"); }
								}
							}
						}
					}
ADV_WARNING_POP
					();
				}
			}
		}
		#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		if ((ex + Builtin::i32(120) <=> ey) < 0 || ey == MaxBiasedExponent) {
			#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			return ((m & Builtin::i32(1)) != Builtin::i32(0)) ? -PIO2_HI : PIO2_HI;
		}
		#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		Builtin::f128 z{}; 
		#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		if (((m & Builtin::i32(2)) != Builtin::i32(0)) && (ey + Builtin::i32(120) <=> ex) < 0) {
			#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			z = Builtin::i32(0);
		} else {
			#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			{
				#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				z = ADV_UPCS(Atan)((ADV_UPCS(Abs)((y / x).__ref())).__ref());
			}
		}
		#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		return [&]() 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
		{
			#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			auto __tmp__valid_275 = Builtin::Cast<false, std::decay_t<decltype(m)>::__self>(m);
			#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			if(__tmp__valid_275.IsValid() && Builtin::Is(*__tmp__valid_275, Builtin::i32(0))) {
				#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				const auto& m = *__tmp__valid_275;
				return z;
			}
			else {
				#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				if(__tmp__valid_275.IsValid() && Builtin::Is(*__tmp__valid_275, Builtin::i32(1))) {
					#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					const auto& m = *__tmp__valid_275;
					return -z;
				}
				else {
					#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					if(__tmp__valid_275.IsValid() && Builtin::Is(*__tmp__valid_275, Builtin::i32(2))) {
						#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
						const auto& m = *__tmp__valid_275;
						return Builtin::f128{Builtin::i32(2)} * PIO2_HI - (z - Builtin::f128{Builtin::i32(2)} * PIO2_LO);
					}
					else {
						return (z - Builtin::f128{Builtin::i32(2)} * PIO2_LO) - Builtin::f128{Builtin::i32(2)} * PIO2_HI;
						
					}
				}
			}
		}
ADV_WARNING_POP
		();
	}

#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	auto SinPiImpl(Builtin::f128 x)  -> const Builtin::f128
	{
		#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		constexpr auto PiHi = ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x4000921FB54442D18400000000000000"));
		#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		constexpr auto PiLo = ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FC6A62633145C06E0E6894812704453"));
		#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto ax = ADV_UPCS(Abs)(x.__ref()); 
		#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		Builtin::f128 hi{}, lo{}, s{}; 
		#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		if ((ax <=> ADV_USPCS(One, Builtin::f128)()) < 0) {
			#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			if ((ax <=> Quarter) < 0) {
				#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				if ((ax <=> ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FC30000000000000000000000000000"))) < 0) {
					#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					if (x == Builtin::i32(0)) {
						#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
						return x;
					}
					#line 298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					hi = ADV_UFCS(ToFloat64)(x.__ref());
					#line 299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					hi *= ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x40700000000000000000000000000000"));
					#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					lo = x * ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x40700000000000000000000000000000")) - hi;
					#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					s = (PiLo + PiHi) * lo + PiLo * lo + PiHi * hi;
					#line 302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					return s * ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3F8E0000000000000000000000000000"));
				}
				#line 305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				s = SinPiInternal(ax);
				#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				return (x <=> Builtin::i32(0)) < 0 ? -s : s;
			}
			#line 309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			if ((ax <=> HalfOne) < 0) {
				#line 310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				s = CosPiInternal(HalfOne - ax);
			} else {
				#line 311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				if ((ax <=> ThreeFourth) < 0) {
					#line 312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					s = CosPiInternal(ax - HalfOne);
				} else {
					#line 313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					{
						#line 314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
						s = SinPiInternal(ADV_USPCS(One, Builtin::f128)() - ax);
					}
				}
			}
			#line 317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			return (x <=> Builtin::i32(0)) < 0 ? -s : s;
		}
		#line 320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		if ((ax <=> ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x406F0000000000000000000000000000"))) < 0) {
			#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			const auto& [ai, ar] = FastFloor(ax);
			#line 323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			if (ar == Builtin::i32(0)) {
				#line 324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				s = Builtin::i32(0);
			} else {
				#line 325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				{
					#line 326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					if ((ar <=> HalfOne) < 0) {
						#line 327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
						if ((ar <=> Quarter) <= 0) {
							#line 328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
							s = SinPiInternal(ar);
						} else {
							#line 329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
							{
								#line 330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
								s = CosPiInternal(HalfOne - ar);
							}
						}
					} else {
						#line 332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
						{
							#line 333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
							if ((ar <=> ThreeFourth) < 0) {
								#line 334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
								s = CosPiInternal(ar - HalfOne);
							} else {
								#line 335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
								{
									#line 336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
									s = SinPiInternal(ADV_USPCS(One, Builtin::f128)() - ar);
								}
							}
						}
					}
					#line 340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					s = ADV_UPCS(IsEvenInteger)(ai.__ref()) ? s : -s;
				}
			}
			#line 343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			return (x <=> Builtin::i32(0)) < 0 ? -s : s;
		}
		#line 346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		if (ADV_UPCS(IsNaN)(x.__ref()) || ADV_UPCS(IsInfinity)(x.__ref())) {
			#line 347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			return ADV_USPCS(NaN, Builtin::f128)();
		}
		#line 350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		return ADV_UFCS(CopySign)(ADV_USPCS(Zero, Builtin::f128)().__ref(), x);
	}

#line 353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	auto CosPiImpl(Builtin::f128 x)  -> const Builtin::f128
	{
		#line 355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto ax = ADV_UPCS(Abs)(x.__ref()); 
		#line 356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		Builtin::f128 c{}; 
		#line 358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		if ((ax <=> ADV_USPCS(One, Builtin::f128)()) <= 0) {
			#line 359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			if ((ax <=> Quarter) < 0) {
				#line 360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				if ((ax <=> ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FC30000000000000000000000000000"))) < 0) {
					#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					if (ADV_UFCS(NarrowToInt32)(x.__ref()) == Builtin::i32(0)) {
						#line 362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
						return ADV_USPCS(One, Builtin::f128)();
					}
				}
				#line 366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				return CosPiInternal(ax);
			}
			#line 369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			if ((ax <=> HalfOne) < 0) {
				#line 370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				c = SinPiInternal(HalfOne - ax);
			} else {
				#line 371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				if ((ax <=> ThreeFourth) < 0) {
					#line 372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					if (ax == HalfOne) {
						#line 373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
						return Builtin::i32(0);
					}
					#line 375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					c = -SinPiInternal(ax - HalfOne);
				} else {
					#line 376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					{
						#line 377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
						c = -CosPiInternal(ADV_USPCS(One, Builtin::f128)() - ax);
					}
				}
			}
			#line 380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			return c;
		}
		#line 383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		if ((ax <=> ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x406F0000000000000000000000000000"))) < 0) {
			#line 384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			const auto& [ai, ar] = FastFloor(ax);
			#line 386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			if ((ar <=> HalfOne) < 0) {
				#line 387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				if ((ar <=> Quarter) < 0) {
					#line 388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					c = ar == Builtin::i32(0) ? ADV_USPCS(One, Builtin::f128)() : CosPiInternal(ar);
				} else {
					#line 389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					{
						#line 390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
						c = SinPiInternal(HalfOne - ar);
					}
				}
			} else {
				#line 392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				{
					#line 393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					if ((ar <=> ThreeFourth) < 0) {
						#line 394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
						if (ar == HalfOne) {
							#line 395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
							return Builtin::i32(0);
						}
						#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
						c = -SinPiInternal(ar - HalfOne);
					} else {
						#line 398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
						{
							#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
							c = -CosPiInternal(ADV_USPCS(One, Builtin::f128)() - ar);
						}
					}
				}
			}
			#line 403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			return ADV_UPCS(IsEvenInteger)(ai.__ref()) ? c : -c;
		}
		#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		if (ADV_UPCS(IsNaN)(x.__ref()) || ADV_UPCS(IsInfinity)(x.__ref())) {
			#line 407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			return ADV_USPCS(NaN, Builtin::f128)();
		}
		#line 410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		if ((ax <=> ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x40700000000000000000000000000000"))) >= 0) {
			#line 411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			return ADV_USPCS(One, Builtin::f128)();
		}
		#line 414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		return ADV_UPCS(IsEvenInteger)(ax.__ref()) ? ADV_USPCS(One, Builtin::f128)() : ADV_USPCS(MinusOne, Builtin::f128)();
	}

#line 417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	auto TanPiImpl(Builtin::f128 x)  -> const Builtin::f128
	{
		#line 419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		constexpr auto PiHi = ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x4000921FB54442D18400000000000000"));
		#line 420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		constexpr auto PiLo = ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FC6A62633145C06E0E6894812704453"));
		#line 422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto ax = ADV_UPCS(Abs)(x.__ref()); 
		#line 423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		Builtin::f128 hi{}, lo{}, t{}; 
		#line 425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		if ((ax <=> ADV_USPCS(One, Builtin::f128)()) < 0) {
			#line 426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			if ((ax <=> HalfOne) < 0) {
				#line 427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				if ((ax <=> ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FC30000000000000000000000000000"))) < 0) {
					#line 428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					if (x == Builtin::i32(0)) {
						#line 429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
						return x;
					}
					#line 432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					hi = ADV_UFCS(ToFloat64)(x.__ref());
					#line 433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					hi *= ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x40700000000000000000000000000000"));
					#line 434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					lo = x * ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x40700000000000000000000000000000")) - hi;
					#line 435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					t = (PiLo + PiHi) * lo + PiLo * lo + PiHi * hi;
					#line 436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					return t * ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3F8E0000000000000000000000000000"));
				}
				#line 439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				t = TanPiInternal(ax);
			} else {
				#line 440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				if (ax == HalfOne) {
					#line 441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					t = ADV_USPCS(PositiveInfinity, Builtin::f128)();
				} else {
					#line 442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					{
						#line 443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
						t = -TanPiInternal(ADV_USPCS(One, Builtin::f128)() - ax);
					}
				}
			}
			#line 446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			return (x <=> Builtin::i32(0)) < 0 ? -t : t;
		}
		#line 449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		if ((ax <=> ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x406F0000000000000000000000000000"))) < 0) {
			#line 450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			const auto& [ai, ar] = FastFloor(ax);
			#line 451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			const auto odd = ADV_UPCS(IsEvenInteger)(ai.__ref()) ? ADV_USPCS(One, Builtin::f128)() : ADV_USPCS(MinusOne, Builtin::f128)(); 
			#line 453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			if ((ar <=> HalfOne) < 0) {
				#line 454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				t = ar == Builtin::i32(0) ? ADV_UFCS(CopySign)(ADV_USPCS(Zero, Builtin::f128)().__ref(), odd) : TanPiInternal(ar);
			} else {
				#line 455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				if (ar == HalfOne) {
					#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					t = odd / ADV_USPCS(Zero, Builtin::f128)();
				} else {
					#line 457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					{
						#line 458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
						t = -TanPiInternal(ADV_USPCS(One, Builtin::f128)() - ar);
					}
				}
			}
			#line 461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			return (x <=> Builtin::i32(0)) < 0 ? -t : t;
		}
		#line 464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		if (ADV_UPCS(IsNaN)(x.__ref()) || ADV_UPCS(IsInfinity)(x.__ref())) {
			#line 465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			return ADV_USPCS(NaN, Builtin::f128)();
		}
		#line 468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		t = ADV_UPCS(IsEvenInteger)(ax.__ref()) ? ADV_USPCS(Zero, Builtin::f128)() : ADV_USPCS(NegativeZero, Builtin::f128)();
		#line 469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		return ADV_UFCS(CopySign)(t.__ref(), x);
	}




















#line 498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	inline constexpr auto BiasedExponent(Builtin::f128 value) noexcept -> const Builtin::u16
	{
		#line 498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		ADV_EXPRESSION_BODY(ExtractBiasedExponentFromBits(ADV_UPCS(Bits)(value.__ref()))); 
	}

#line 499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	inline constexpr auto Exponent(Builtin::f128 value) noexcept -> const Builtin::i16
	{
		#line 499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		ADV_EXPRESSION_BODY(Builtin::i16{BiasedExponent(value) - ExpBias}); 
	}

#line 500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	inline constexpr auto Significand(Builtin::f128 value) noexcept -> const Builtin::u128
	{
		#line 500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		ADV_EXPRESSION_BODY(TrailingSignificand(value) | (BiasedExponent(value) != Builtin::i32(0) ? (Builtin::u128(1ULL) << BiasedExponentShift) : Builtin::u128(0ULL))); 
	}

#line 501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	inline constexpr auto TrailingSignificand(Builtin::f128 value) noexcept -> const Builtin::u128
	{
		#line 501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		ADV_EXPRESSION_BODY(ExtractTrailingSignificandFromBits(ADV_UPCS(Bits)(value.__ref()))); 
	}

#line 503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	inline constexpr auto ExtractBiasedExponentFromBits(Builtin::u128 bits) noexcept -> const Builtin::u16
	{
		#line 503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		ADV_EXPRESSION_BODY(Builtin::u16{(bits >> BiasedExponentShift) & ShiftedBiasedExponentMask}); 
	}

#line 504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	inline constexpr auto ExtractTrailingSignificandFromBits(Builtin::u128 bits) noexcept -> const Builtin::u128
	{
		#line 504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		ADV_EXPRESSION_BODY(bits & TrailingSignificandMask); 
	}





















#line 529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	inline constexpr auto R(Builtin::f128 z) noexcept -> const Builtin::f128
	{
		#line 531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto p = z * (pS0 + z * (pS1 + z * (pS2 + z * (pS3 + z * (pS4 + z * (pS5 + z * (pS6 + z * (pS7 + z * (pS8 + z * pS9))))))))); 
		#line 532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto q = ADV_USPCS(One, Builtin::f128)() + z * (qS1 + z * (qS2 + z * (qS3 + z * (qS4 + z * (qS5 + z * (qS6 + z * (qS7 + z * (qS8 + z * qS9)))))))); 
		#line 533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		return p / q;
	}

#line 538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	inline constexpr auto Even(Builtin::f128 x) noexcept -> const Builtin::f128
	{
		#line 540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto x0 = (ADV_UFCS(_operator_subscript)(AT.__ref(), Builtin::i32(20)) + x * ADV_UFCS(_operator_subscript)(AT.__ref(), Builtin::i32(22))); 
		#line 541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto x1 = (ADV_UFCS(_operator_subscript)(AT.__ref(), Builtin::i32(18)) + x * x0); 
		#line 542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto x2 = (ADV_UFCS(_operator_subscript)(AT.__ref(), Builtin::i32(16)) + x * x1); 
		#line 543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto x3 = (ADV_UFCS(_operator_subscript)(AT.__ref(), Builtin::i32(14)) + x * x2); 
		#line 544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto x4 = (ADV_UFCS(_operator_subscript)(AT.__ref(), Builtin::i32(12)) + x * x3); 
		#line 545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto x5 = (ADV_UFCS(_operator_subscript)(AT.__ref(), Builtin::i32(10)) + x * x4); 
		#line 546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto x6 = (ADV_UFCS(_operator_subscript)(AT.__ref(), Builtin::i32(8)) + x * x5); 
		#line 547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto x7 = (ADV_UFCS(_operator_subscript)(AT.__ref(), Builtin::i32(6)) + x * x6); 
		#line 548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto x8 = (ADV_UFCS(_operator_subscript)(AT.__ref(), Builtin::i32(4)) + x * x7); 
		#line 549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto x9 = (ADV_UFCS(_operator_subscript)(AT.__ref(), Builtin::i32(2)) + x * x8); 
		#line 550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		return (ADV_UFCS(_operator_subscript)(AT.__ref(), Builtin::i32(0)) + x * x9);
	}

#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	inline constexpr auto Odd(Builtin::f128 x) noexcept -> const Builtin::f128
	{
		#line 555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto x0 = (ADV_UFCS(_operator_subscript)(AT.__ref(), Builtin::i32(21)) + x * ADV_UFCS(_operator_subscript)(AT.__ref(), Builtin::i32(23))); 
		#line 556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto x1 = (ADV_UFCS(_operator_subscript)(AT.__ref(), Builtin::i32(19)) + x * x0); 
		#line 557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto x2 = (ADV_UFCS(_operator_subscript)(AT.__ref(), Builtin::i32(17)) + x * x1); 
		#line 558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto x3 = (ADV_UFCS(_operator_subscript)(AT.__ref(), Builtin::i32(15)) + x * x2); 
		#line 559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto x4 = (ADV_UFCS(_operator_subscript)(AT.__ref(), Builtin::i32(13)) + x * x3); 
		#line 560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto x5 = (ADV_UFCS(_operator_subscript)(AT.__ref(), Builtin::i32(11)) + x * x4); 
		#line 561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto x6 = (ADV_UFCS(_operator_subscript)(AT.__ref(), Builtin::i32(9)) + x * x5); 
		#line 562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto x7 = (ADV_UFCS(_operator_subscript)(AT.__ref(), Builtin::i32(7)) + x * x6); 
		#line 563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto x8 = (ADV_UFCS(_operator_subscript)(AT.__ref(), Builtin::i32(5)) + x * x7); 
		#line 564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto x9 = (ADV_UFCS(_operator_subscript)(AT.__ref(), Builtin::i32(3)) + x * x8); 
		#line 565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		return (ADV_UFCS(_operator_subscript)(AT.__ref(), Builtin::i32(1)) + x * x9);
	}












#line 582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	inline constexpr auto Poly(Builtin::f128 z) noexcept -> const Builtin::f128
	{
		#line 584 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto r = (z * (C1 + z * (C2 + z * (C3 + z * (C4 + z * (C5 + z * (C6 + z * (C7 + z * (C8 + z * (C9 + z * (C10 + z * C11))))))))))); 
		#line 586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		return r;
	}





























#line 791 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	auto RemPIO2(Builtin::f128 x, Builtin::MutableRef<std::remove_cvref_t<Builtin::f128>> __y0__, Builtin::MutableRef<std::remove_cvref_t<Builtin::f128>> __y1__)  -> const Builtin::i32
	{
		Builtin::f128& y0 = __y0__;
		Builtin::f128& y1 = __y1__;
		#line 795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		constexpr auto PIO2_1 = ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFF921FB54442D18469800000000000"));
		#line 796 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		constexpr auto PIO2_1T = ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FBA3198A2E03707344A4093822299F3"));
		#line 797 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		constexpr auto PIO2_2 = ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FBA3198A2E03707344A400000000000"));
		#line 798 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		constexpr auto PIO2_2T = ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3F7127044533E63A0105DF531D89CD91"));
		#line 799 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		constexpr auto PIO2_3 = ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3F7127044533E63A0105E00000000000"));
		#line 800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		constexpr auto PIO2_3T = ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0xBF2859C4EC64DDAEB5F78671CBFB2210"));
		#line 801 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		constexpr auto INIT_JK = Builtin::ToInlineArray<Builtin::i32>({Builtin::i32(3), Builtin::i32(4), Builtin::i32(4), Builtin::i32(6)});
		#line 803 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		constexpr auto ROUND1 = Builtin::i32(51);
		#line 804 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		constexpr auto ROUND2 = Builtin::i32(119);
		#line 805 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		constexpr auto NX = Builtin::i32(5);
		#line 806 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		constexpr auto NY = Builtin::i32(3);
		#line 808 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		auto u = x; 
		#line 809 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		Builtin::InlineArray<NX, Builtin::f64> tx{}; 
		#line 810 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		Builtin::InlineArray<NY, Builtin::f64> ty{}; 
		#line 811 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		Builtin::i64 n{}; 
		#line 812 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		Builtin::f128 r{}, w{}, t{}; 
		#line 814 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const Builtin::i32 ex = BiasedExponent(x); 
		#line 817 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		if ((ADV_UPCS(Abs)(x.__ref()) <=> ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x402C921F000000000000000000000000"))) < 0) {
			#line 818 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			constexpr auto INVPIO2 = ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FFE45F306DC9C882A53F84EAFA3EA6A"));
			#line 819 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			auto fn = x * INVPIO2 + RoundingEpsilon - RoundingEpsilon; 
			#line 820 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			n = (ADV_UFCS(NarrowToUInt32)(ADV_UFCS(NarrowToInt64)(fn.__ref()).__ref()) & Builtin::u32(0x7FFFFFFFU));
			#line 821 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			r = x - fn * PIO2_1;
			#line 822 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			w = fn * PIO2_1T;
			#line 824 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			const auto tmp = r - w; 
			#line 825 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			if ((tmp <=> -Pio4) < 0) {
				#line 826 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				ADV_UFCS(_operator_sub_sub_mod_postfix)(n);
				#line 827 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				fn--;
				#line 828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				r = x - fn * PIO2_1;
				#line 829 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				w = fn * PIO2_1T;
			} else {
				#line 830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				if ((tmp <=> Pio4) > 0) {
					#line 831 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					ADV_UFCS(_operator_add_add_mod_postfix)(n);
					#line 832 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					fn++;
					#line 833 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					r = x - fn * PIO2_1;
					#line 834 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					w = fn * PIO2_1T;
				}
			}
			#line 837 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			y0 = r - w;
			#line 838 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			u = y0;
			#line 839 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			Builtin::i32 ey = BiasedExponent(u); 
			#line 842 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			if ((ex - ey <=> ROUND1) > 0) {
				#line 843 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				t = r;
				#line 844 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				w = fn * PIO2_2;
				#line 845 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				r = t - w;
				#line 846 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				w = fn * PIO2_2T - ((t - r) - w);
				#line 847 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				y0 = r - w;
				#line 848 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				u = y0;
				#line 849 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				ey = BiasedExponent(u);
				#line 852 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				if ((ex - ey <=> ROUND2) > 0) {
					#line 853 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					t = r;
					#line 854 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					w = fn * PIO2_3;
					#line 855 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					r = t - w;
					#line 856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					w = fn * PIO2_3T - ((t - r) - w);
					#line 857 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					y0 = r - w;
				}
			}
			#line 861 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			y1 = (r - y0) - w;
			#line 862 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			return ADV_UFCS(NarrowToInt32)(n.__ref());
		}
		#line 865 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		if (ex == Builtin::u32(0x7FFFU)) {
			#line 866 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			y0 = y1 = x;
			#line 867 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			return Builtin::i32(0);
		}
		#line 870 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		auto z = ADV_USFCS((Builtin::f128), FromBits)(Builtin::u128{(Builtin::i32(0x3FFF) + Builtin::i32(23)) << BiasedExponentShift} + TrailingSignificand(x)); 
		#line 872 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		auto i = Builtin::i32(0); 
		#line 873 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		for (; (i <=> NX - Builtin::i32(1)) < 0; i++) 
		{
			#line 874 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			ADV_UFCS(_operator_subscript)(tx.__ref(), i) = ADV_UFCS(NarrowToInt32)(z.__ref());
			#line 875 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			z = (z - ADV_UFCS(_operator_subscript)(tx.__ref(), i)) * ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x40170000000000000000000000000000"));
		}
		#line 877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		ADV_UFCS(_operator_subscript)(tx.__ref(), i) = ADV_UFCS(ToFloat64)(z.__ref());
		#line 878 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		while (ADV_UFCS(_operator_subscript)(tx.__ref(), i) == Builtin::i32(0)) 
		{
			#line 879 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			ADV_UFCS(_operator_sub_sub_mod_postfix)(i);
		}
		#line 883 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		{
			#line 884 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			const auto e0 = ex - Builtin::i32(0x3FFF) - Builtin::i32(23); 
			#line 885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			const auto nx = i + Builtin::i32(1); 
			#line 886 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			const auto prec = NY; 
			#line 887 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			Builtin::InlineArray<Builtin::i32(20), Builtin::i32> iq{}; 
			#line 888 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			Builtin::InlineArray<Builtin::i32(20), Builtin::f64> f{}, fq{}, q{}; 
			#line 889 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			Builtin::f64 fw{}; 
			#line 891 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			const auto jk = ADV_UFCS(_operator_subscript)(INIT_JK.__ref(), prec); 
			#line 892 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			const auto jp = jk; 
			#line 894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			const auto jx = nx - Builtin::i32(1); 
			#line 895 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			auto jv = ADV_UFCS(_operator_bsl)((e0 - Builtin::i32(3)), Builtin::i32(24)); 
			#line 896 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			if ((jv <=> Builtin::i32(0)) < 0) {
				#line 896 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				jv = Builtin::i32(0);
			}
			#line 897 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			auto q0 = e0 - Builtin::i32(24) * (jv + Builtin::i32(1)); 
			#line 898 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			auto j = jv - jx; 
			#line 899 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			auto m = jx + jk; 
			#line 900 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			n = Builtin::i32(0);
			#line 902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			i = Builtin::i32(0);
			#line 903 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			for (; (i <=> m) <= 0; i++) 
			{
				#line 904 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				ADV_UFCS(_operator_subscript)(f.__ref(), i) = (j <=> Builtin::i32(0)) < 0 ? Builtin::f64(0.0) : ADV_UFCS(_operator_subscript)(IPIO2.__ref(), j);
				#line 905 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				j++;
			}
			#line 908 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			i = Builtin::i32(0);
			#line 909 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			for (; (i <=> jk) <= 0; i++) 
			{
				#line 910 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				fw = Builtin::f64(0.0);
				#line 911 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				j = Builtin::i32(0);
				#line 912 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				for (; (j <=> jx) <= 0; j++) 
				{
					#line 913 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					fw += ADV_UFCS(_operator_subscript)(tx.__ref(), j) * ADV_UFCS(_operator_subscript)(f.__ref(), jx + i - j);
				}
			}
			#line 917 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			auto jz = jk; 
			#line 919 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			Builtin::i32 ih{}; 
			#line 920 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			for (;;) 
			{
				#line 921 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				i = Builtin::i32(0);
				#line 922 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				z = ADV_UFCS(_operator_subscript)(q.__ref(), jx);
				#line 923 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				j = jz;
				#line 924 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				for (; (j <=> Builtin::i32(0)) > 0; j++) 
				{
					#line 925 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					fw = ADV_UFCS(NarrowToInt32)((Builtin::f64(5.9604644775390625e-8) * z).__ref());
					#line 926 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					ADV_UFCS(_operator_subscript)(iq.__ref(), i) = ADV_UFCS(NarrowToInt32)((z - Builtin::f64(1.6777216e7) * fw).__ref());
					#line 927 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					z = ADV_UFCS(_operator_subscript)(q.__ref(), j - Builtin::i32(1)) + fw;
					#line 928 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					i++;
				}
				#line 931 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				z = ADV_UFCS(ScaleB)(z.__ref(), q0);
				#line 932 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				z -= Builtin::f64(8.0) * ADV_UPCS(Floor)((z * Builtin::f64(0.125)).__ref());
				#line 933 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				n = ADV_UFCS(NarrowToInt32)(z.__ref());
				#line 934 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				z -= n;
				#line 935 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				ih = Builtin::i32(0);
				#line 937 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				if ((q0 <=> Builtin::i32(0)) > 0) {
					#line 938 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					i = ADV_UFCS(_operator_subscript)(iq.__ref(), jz - Builtin::i32(1)) >> (Builtin::i32(24) - q0);
					#line 939 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					ADV_UFCS(_operator_add_mod_eq)(n, i);
					#line 940 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					ADV_UFCS(_operator_sub_mod_eq)(ADV_UFCS(_operator_subscript)(iq.__ref(), jz - Builtin::i32(1)), i << (Builtin::i32(24) - q0));
					#line 941 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					ih = ADV_UFCS(_operator_subscript)(iq.__ref(), jz - Builtin::i32(1)) >> (Builtin::i32(23) - q0);
				} else {
					#line 942 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					if (q0 == Builtin::i32(0)) {
						#line 943 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
						ih = ADV_UFCS(_operator_subscript)(iq.__ref(), jz - Builtin::i32(1)) >> Builtin::i32(23);
					} else {
						#line 944 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
						if ((z <=> Builtin::f64(0.5)) >= 0) {
							#line 945 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
							ih = Builtin::i32(2);
						}
					}
				}
				#line 948 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				if ((ih <=> Builtin::i32(0)) > 0) {
					#line 949 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					ADV_UFCS(_operator_add_add_mod_postfix)(n);
					#line 950 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					auto carry = Builtin::i32(0); 
					#line 951 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					i = Builtin::i32(0);
					#line 952 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					for (; (i <=> jz) < 0; i++) 
					{
						#line 953 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
						j = ADV_UFCS(_operator_subscript)(iq.__ref(), i);
						#line 954 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
						if (carry == Builtin::i32(0)) {
							#line 955 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
							if (j != Builtin::i32(0)) {
								#line 956 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
								carry = Builtin::i32(1);
								#line 957 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
								ADV_UFCS(_operator_subscript)(iq.__ref(), i) = Builtin::i32(0x1000000) - j;
							}
						} else {
							#line 959 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
							{
								#line 960 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
								ADV_UFCS(_operator_subscript)(iq.__ref(), i) = Builtin::i32(0xffffff) - j;
							}
						}
					}
					#line 963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					if ((q0 <=> Builtin::i32(0)) > 0) {
						#line 964 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
						{
							#line 965 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
							auto __tmp__valid_964 = Builtin::Cast<false, std::decay_t<decltype(q0)>::__self>(q0);
							#line 965 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
							if(__tmp__valid_964.IsValid() && Builtin::Is(*__tmp__valid_964, Builtin::i32(1)))  {
								#line 965 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
								const auto& q0 = *__tmp__valid_964;
								#line 965 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
								ADV_UFCS(_operator_subscript)(iq.__ref(), jz - Builtin::i32(1)) &= Builtin::i32(0x7fffff);
							}
							else {
								#line 966 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
								if(__tmp__valid_964.IsValid() && Builtin::Is(*__tmp__valid_964, Builtin::i32(2)))  {
									#line 966 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
									const auto& q0 = *__tmp__valid_964;
									#line 966 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
									ADV_UFCS(_operator_subscript)(iq.__ref(), jz - Builtin::i32(1)) &= Builtin::i32(0x3fffff);
								}
								 else { using __switchType = decltype(q0); static_assert((!std::derived_from<__switchType, Builtin::Enum> && !std::derived_from<__switchType, Builtin::EnumClassRef> && !std::derived_from<__switchType, Builtin::Union>) || Builtin::GetVariantsCount<__switchType>() <= 0, "Switch does not handle all possible variants, add a default branch"); }
							}
						}

					}
					#line 969 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					if (ih == Builtin::i32(2)) {
						#line 970 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
						z = Builtin::f64(1.0) - z;
						#line 971 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
						if (carry != Builtin::i32(0)) {
							#line 972 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
							z -= ADV_UFCS(ScaleB)(Builtin::f64(1.0).__ref(), q0);
						}
					}
				}
				#line 978 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				if (z == Builtin::f64(0.0)) {
					#line 979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					j = Builtin::i32(0);
					#line 980 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					i = jz - Builtin::i32(1);
					#line 981 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					for (; (i <=> jk) >= 0; i--) 
					{
						#line 982 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
						j |= ADV_UFCS(_operator_subscript)(iq.__ref(), i);
					}
					#line 986 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					if (j == Builtin::i32(0)) {
						#line 987 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
						auto k = Builtin::i32(1); 
						#line 988 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
						while (ADV_UFCS(_operator_subscript)(iq.__ref(), jk - k) == Builtin::i32(0)) 
						{
							#line 988 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
							k++;
						}
						#line 989 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
						i = jz + Builtin::i32(1);
						#line 990 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
						for (; (i <=> jz + k) <= 0; i++) 
						{
							#line 991 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
							ADV_UFCS(_operator_subscript)(f.__ref(), jx + i) = ADV_UFCS(_operator_subscript)(IPIO2.__ref(), jv + i);
							#line 992 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
							fw = Builtin::i32(0);
							#line 993 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
							j = Builtin::i32(0);
							#line 994 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
							for (; (j <=> jx) <= 0; j++) 
							{
								#line 995 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
								fw += ADV_UFCS(_operator_subscript)(tx.__ref(), j) * ADV_UFCS(_operator_subscript)(f.__ref(), jx + i - j);
							}
							#line 997 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
							ADV_UFCS(_operator_subscript)(q.__ref(), i) = fw;
						}
						#line 999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
						jz += k;
						#line 1000 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
						continue;
					}
				}
				#line 1003 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				break;
			}
			#line 1004 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			;
			#line 1006 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			if (z == Builtin::f64(0.0)) {
				#line 1007 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				jz--;
				#line 1008 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				q0 -= Builtin::i32(24);
				#line 1009 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				while (ADV_UFCS(_operator_subscript)(iq.__ref(), jz) == Builtin::i32(0)) 
				{
					#line 1010 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					jz--;
					#line 1011 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					q0 -= Builtin::i32(24);
				}
			} else {
				#line 1013 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				{
					#line 1014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					z = ADV_UFCS(ScaleB)(z.__ref(), -q0);
					#line 1015 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					if ((z <=> Builtin::f64(1.6777216e7)) >= 0) {
						#line 1016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
						fw = ADV_UFCS(NarrowToInt32)((Builtin::f64(5.9604644775390625e-8) * z).__ref());
						#line 1017 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
						ADV_UFCS(_operator_subscript)(iq.__ref(), jz) = ADV_UFCS(NarrowToInt32)((z - Builtin::f64(1.6777216e7) * fw).__ref());
						#line 1018 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
						jz++;
						#line 1019 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
						q0 += Builtin::i32(24);
						#line 1020 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
						ADV_UFCS(_operator_subscript)(iq.__ref(), jz) = ADV_UFCS(NarrowToInt32)(fw.__ref());
					} else {
						#line 1021 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
						{
							#line 1022 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
							ADV_UFCS(_operator_subscript)(iq.__ref(), jz) = ADV_UFCS(NarrowToInt32)(z.__ref());
						}
					}
				}
			}
			#line 1026 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			fw = ADV_UFCS(ScaleB)(Builtin::f64(1.0).__ref(), q0);
			#line 1027 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			i = jz;
			#line 1028 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			for (; (i <=> Builtin::i32(0)) >= 0; i--) 
			{
				#line 1029 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				ADV_UFCS(_operator_subscript)(q.__ref(), i) = fw * ADV_UFCS(_operator_subscript)(iq.__ref(), i);
				#line 1030 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				fw *= Builtin::f64(5.9604644775390625e-8);
			}
			#line 1033 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			i = jz;
			#line 1034 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			for (; (i <=> Builtin::i32(0)) >= 0; i--) 
			{
				#line 1035 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				fw = Builtin::f64(0.0);
				#line 1036 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				for (auto k = Builtin::i32(0); (k <=> jp) <= 0 && (k <=> jz - i) <= 0; k++) 
				{
					#line 1037 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					fw += ADV_UFCS(_operator_subscript)(PIO2.__ref(), k) * ADV_UFCS(_operator_subscript)(q.__ref(), i + k);
				}
				#line 1039 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				ADV_UFCS(_operator_subscript)(fq.__ref(), jz - i) = fw;
			}
			#line 1042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			i = jz;
			#line 1043 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			for (; (i <=> Builtin::i32(0)) > 0; i--) 
			{
				#line 1044 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				fw = ADV_UFCS(_operator_subscript)(fq.__ref(), i - Builtin::i32(1)) + ADV_UFCS(_operator_subscript)(fq.__ref(), i);
				#line 1045 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				ADV_UFCS(_operator_subscript)(fq.__ref(), i) += ADV_UFCS(_operator_subscript)(fq.__ref(), i - Builtin::i32(1)) - fw;
				#line 1046 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				ADV_UFCS(_operator_subscript)(fq.__ref(), i - Builtin::i32(1)) = fw;
			}
			#line 1049 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			i = jz;
			#line 1050 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			for (; (i <=> Builtin::i32(1)) > 0; i--) 
			{
				#line 1051 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				fw = ADV_UFCS(_operator_subscript)(fq.__ref(), i - Builtin::i32(1)) + ADV_UFCS(_operator_subscript)(fq.__ref(), i);
				#line 1052 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				ADV_UFCS(_operator_subscript)(fq.__ref(), i) += ADV_UFCS(_operator_subscript)(fq.__ref(), i - Builtin::i32(1)) - fw;
				#line 1053 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				ADV_UFCS(_operator_subscript)(fq.__ref(), i - Builtin::i32(1)) = fw;
			}
			#line 1056 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			fw = Builtin::i32(0);
			#line 1057 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			i = jz;
			#line 1058 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			for (; (i <=> Builtin::i32(2)) >= 0; i--) 
			{
				#line 1059 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				fw += ADV_UFCS(_operator_subscript)(fq.__ref(), i);
			}
			#line 1062 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			if (ih == Builtin::i32(0)) {
				#line 1063 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				ADV_UFCS(_operator_subscript)(ty.__ref(), Builtin::i32(0)) = ADV_UFCS(_operator_subscript)(fq.__ref(), Builtin::i32(0));
				#line 1064 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				ADV_UFCS(_operator_subscript)(ty.__ref(), Builtin::i32(1)) = ADV_UFCS(_operator_subscript)(fq.__ref(), Builtin::i32(1));
				#line 1065 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				ADV_UFCS(_operator_subscript)(ty.__ref(), Builtin::i32(2)) = fw;
			} else {
				#line 1066 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				{
					#line 1067 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					ADV_UFCS(_operator_subscript)(ty.__ref(), Builtin::i32(0)) = -(ADV_UFCS(_operator_subscript)(fq.__ref(), Builtin::i32(0)));
					#line 1068 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					ADV_UFCS(_operator_subscript)(ty.__ref(), Builtin::i32(1)) = -(ADV_UFCS(_operator_subscript)(fq.__ref(), Builtin::i32(1)));
					#line 1069 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					ADV_UFCS(_operator_subscript)(ty.__ref(), Builtin::i32(2)) = -fw;
				}
			}
			#line 1072 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			n &= Builtin::i32(7);
		}
		#line 1075 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		t = Builtin::f128{ADV_UFCS(_operator_subscript)(ty.__ref(), Builtin::i32(2))} + ADV_UFCS(_operator_subscript)(ty.__ref(), Builtin::i32(1));
		#line 1076 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		r = t + ADV_UFCS(_operator_subscript)(ty.__ref(), Builtin::i32(0));
		#line 1077 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		w = ADV_UFCS(_operator_subscript)(ty.__ref(), Builtin::i32(0)) - (r - t);
		#line 1078 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		if (ADV_UPCS(IsNegative)(u.__ref())) {
			#line 1079 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			y0 = -r;
			#line 1080 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			y1 = -w;
			#line 1081 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			return ADV_UFCS(NarrowToInt32)(-n.__ref());
		}
		#line 1084 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		y0 = r;
		#line 1085 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		y1 = w;
		#line 1086 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		return ADV_UFCS(NarrowToInt32)(n.__ref());
	}

#line 1089 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	inline constexpr auto SinInternal(Builtin::f128 x, Builtin::f128 y, Builtin::i32 iy) noexcept -> const Builtin::f128
	{
		#line 1091 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto z = x * x; 
		#line 1092 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto v = z * x; 
		#line 1093 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto r = (S2 + z * (S3 + z * (S4 + z * (S5 + z * (S6 + z * (S7 + z * (S8 + z * (S9 + z * (S10 + z * (S11 + z * S12)))))))))); 
		#line 1095 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		return iy == Builtin::i32(0) ? x + v * (S1 + z * r) : x - ((z * (Builtin::f128{Builtin::f64(0.5)} * y - v * r) - y) - v * S1);
	}

#line 1099 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	inline constexpr auto CosInternal(Builtin::f128 x, Builtin::f128 y) noexcept -> const Builtin::f128
	{
		#line 1101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto z = x * x; 
		#line 1102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto r = (z * (C1 + z * (C2 + z * (C3 + z * (C4 + z * (C5 + z * (C6 + z * (C7 + z * (C8 + z * (C9 + z * (C10 + z * C11))))))))))); 
		#line 1103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto hz = Builtin::f128{Builtin::f64(0.5)} * z; 
		#line 1104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto w = ADV_USPCS(One, Builtin::f128)() - hz; 
		#line 1106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		return w + (((ADV_USPCS(One, Builtin::f128)() - w) - hz) + (z * r - x * y));
	}

#line 1109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	inline constexpr auto TanInternal(Builtin::f128 x, Builtin::f128 y, Builtin::i32 iy) noexcept -> const Builtin::f128
	{
		#line 1111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		constexpr auto pio4hi = Builtin::ParseFloat128("7.8539816339744830961566084581987569936977e-1");
		#line 1112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		constexpr auto pio4lo = Builtin::ParseFloat128("2.1679525325309452561992610065108379921906e-35");
		#line 1114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		constexpr auto TH = Builtin::ParseFloat128("3.333333333333333333333333333333333333333e-1");
		#line 1115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		constexpr auto T0 = Builtin::ParseFloat128("-1.813014711743583437742363284336855889393e7");
		#line 1116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		constexpr auto T1 = Builtin::ParseFloat128("1.320767960008972224312740075083259247618e6");
		#line 1117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		constexpr auto T2 = Builtin::ParseFloat128("-2.626775478255838182468651821863299023956e4");
		#line 1118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		constexpr auto T3 = Builtin::ParseFloat128("1.764573356488504935415411383687150199315e2");
		#line 1119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		constexpr auto T4 = Builtin::ParseFloat128("-3.333267763822178690794678978979803526092e-1");
		#line 1120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		constexpr auto U0 = Builtin::ParseFloat128("-1.359761033807687578306772463253710042010e8");
		#line 1121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		constexpr auto U1 = Builtin::ParseFloat128("6.494370630656893175666729313065113194784e7");
		#line 1122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		constexpr auto U2 = Builtin::ParseFloat128("-4.180787672237927475505536849168729386782e6");
		#line 1123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		constexpr auto U3 = Builtin::ParseFloat128("8.031643765106170040139966622980914621521e4");
		#line 1124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		constexpr auto U4 = Builtin::ParseFloat128("-5.323131271912475695157127875560667378597e2");
		#line 1126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		auto bits = ADV_UPCS(Bits)(x.__ref()); 
		#line 1127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto sign = (bits & SignMask) != Builtin::i32(0); 
		#line 1128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto exp = ExtractBiasedExponentFromBits(bits); 
		#line 1129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto sig = ExtractTrailingSignificandFromBits(bits); 
		#line 1132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		if ((exp <=> Builtin::u32(0x3fc6U)) < 0) {
			#line 1133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			if (ADV_UFCS(NarrowToInt32)(x.__ref()) == Builtin::i32(0)) {
				#line 1134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				if (((bits & (ADV_UFCS(_operator_not)(SignMask))) | (iy + Builtin::i32(1))) == Builtin::i32(0)) {
					#line 1135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					return ADV_UPCS(ReciprocalEstimate)(ADV_UPCS(Abs)(x.__ref()).__ref());
				} else {
					#line 1136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					if (iy == Builtin::i32(1)) {
						#line 1137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
						return x;
					} else {
						#line 1138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
						{
							#line 1139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
							return ADV_UPCS(ReciprocalEstimate)(-x.__ref());
						}
					}
				}
			}
		}
		#line 1145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		Builtin::f128 z{}, w{}; 
		#line 1146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto expman = (Builtin::u32{exp} << Builtin::i32(16)) | Builtin::u32{sig >> Builtin::i32(96)}; 
		#line 1147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		if ((expman <=> Builtin::i32(0x3ffe5942)) >= 0) {
			#line 1148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			if (sign) {
				#line 1149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				x = -x;
				#line 1150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				y = -y;
			}
			#line 1153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			z = pio4hi - x;
			#line 1154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			w = pio4lo - y;
			#line 1155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			x = z + w;
			#line 1156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			y = Builtin::i32(0);
		}
		#line 1159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		z = x * x;
		#line 1160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		auto r = T0 + z * (T1 + z * (T2 + z * (T3 + z * T4))); 
		#line 1161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		auto v = U0 + z * (U1 + z * (U2 + z * (U3 + z * (U4 + z)))); 
		#line 1162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		r /= v;
		#line 1164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		auto s = z * x; 
		#line 1165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		r = y + z * (s * r + y);
		#line 1166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		r += TH * s;
		#line 1167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		w = x + r;
		#line 1169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		if ((expman <=> Builtin::i32(0x3ffe5942)) >= 0) {
			#line 1170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			v = iy;
			#line 1171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			w = (v - Builtin::f128{Builtin::i32(2)} * (x - (w * w / (w + v) - r)));
			#line 1173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			if (sign) {
				#line 1174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				w = -w;
			}
			#line 1176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			return w;
		}
		#line 1179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		if (iy == Builtin::i32(1)) {
			#line 1180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			return w;
		}
		#line 1183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto u = ADV_USFCS((Builtin::f128), FromBits)(Builtin::u128{ADV_UFCS(High64)(ADV_UPCS(Bits)(w.__ref()).__ref()), Builtin::u32(0U)}); 
		#line 1184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		v = r - (u - x);
		#line 1185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		z = ADV_UPCS(ReciprocalEstimate)(-w.__ref());
		#line 1186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto u1 = ADV_USFCS((Builtin::f128), FromBits)(Builtin::u128{ADV_UFCS(High64)(ADV_UPCS(Bits)(z.__ref()).__ref()), Builtin::u32(0U)}); 
		#line 1187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		s = ADV_USPCS(One, Builtin::f128)() + u1 * u;
		#line 1188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		return u1 + z * (s + u1 * v);
	}

#line 1191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	auto FastFloor(Builtin::f128 x) noexcept -> const std::tuple<Builtin::f128, Builtin::f128>
	{
		#line 1193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		Builtin::f128 ai{}, ar{}; 
		#line 1194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto e = Exponent(x); 
		#line 1195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		if ((e <=> Builtin::i32(48)) < 0) {
			#line 1196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			auto man = TrailingSignificand(x); 
			#line 1197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			const auto m = ((Builtin::u64(1ULL) << Builtin::i32(49)) - Builtin::i32(1)) >> (e + Builtin::i32(1)); 
			#line 1198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			man &= (Builtin::u128{ADV_UFCS(_operator_not)(m)} << Builtin::i32(64));
			#line 1199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			ai = ADV_USFCS((Builtin::f128), FromBits)((Builtin::u128{BiasedExponent(x)} << BiasedExponentShift) + man);
		} else {
			#line 1200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			{
				#line 1201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				const auto m = ADV_USPCS(MaxValue, Builtin::u64)() >> (e - Builtin::i32(48)); 
				#line 1202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				ai = ADV_USFCS((Builtin::f128), FromBits)(Builtin::u128{ADV_UFCS(High64)(ADV_UPCS(Bits)(x.__ref()).__ref()), ADV_UFCS(Low64)(ADV_UPCS(Bits)(x.__ref()).__ref()) & (ADV_UFCS(_operator_not)(m))});
			}
		}
		#line 1204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		ar = x - ai;
		#line 1205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		return std::make_tuple(ai, ar);
	}

#line 1208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	inline constexpr auto Sum2(Builtin::MutableRef<std::remove_cvref_t<Builtin::f128>> __a__, Builtin::MutableRef<std::remove_cvref_t<Builtin::f128>> __b__) noexcept -> void
	{
		Builtin::f128& a = __a__;
		Builtin::f128& b = __b__;
		#line 1210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		const auto w = a + b; 
		#line 1211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		b = a - w + b;
		#line 1212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		a = w;
	}

#line 1215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	auto SinPiInternal(Builtin::f128 x) noexcept -> const Builtin::f128
	{
		#line 1217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		constexpr auto PiHi = ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x4000921FB54442D18400000000000000"));
		#line 1218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		constexpr auto PiLo = ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FC6A62633145C06E0E6894812704453"));
		#line 1220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		Builtin::f128 hi{}, lo{}; 
		#line 1221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		hi = ADV_UFCS(ToFloat64)(x.__ref());
		#line 1222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		lo = x - hi;
		#line 1223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		lo = lo * (PiLo + PiHi) + hi * PiLo;
		#line 1224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		hi *= PiHi;
		#line 1225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		Sum2(Builtin::MutableRef<std::remove_cvref_t<decltype(hi)>>(hi), Builtin::MutableRef<std::remove_cvref_t<decltype(lo)>>(lo));
		#line 1227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		return SinInternal(hi, lo, Builtin::i32(1));
	}

#line 1230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	auto CosPiInternal(Builtin::f128 x) noexcept -> const Builtin::f128
	{
		#line 1232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		constexpr auto PiHi = ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x4000921FB54442D18400000000000000"));
		#line 1233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		constexpr auto PiLo = ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FC6A62633145C06E0E6894812704453"));
		#line 1235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		Builtin::f128 hi{}, lo{}; 
		#line 1236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		hi = ADV_UFCS(ToFloat64)(x.__ref());
		#line 1237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		lo = x - hi;
		#line 1238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		lo = lo * (PiLo + PiHi) + hi * PiLo;
		#line 1239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		hi *= PiHi;
		#line 1240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		Sum2(Builtin::MutableRef<std::remove_cvref_t<decltype(hi)>>(hi), Builtin::MutableRef<std::remove_cvref_t<decltype(lo)>>(lo));
		#line 1242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		return CosInternal(hi, lo);
	}

#line 1245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
	auto TanPiInternal(Builtin::f128 x) noexcept -> const Builtin::f128
	{
		#line 1247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		constexpr auto PiHi = ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x4000921FB54442D18400000000000000"));
		#line 1248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		constexpr auto PiLo = ADV_USFCS((Builtin::f128), FromBits)(Builtin::ParseUInt128("0x3FC6A62633145C06E0E6894812704453"));
		#line 1250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		Builtin::f128 hi{}, lo{}, t{}; 
		#line 1251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		if ((x <=> Quarter) < 0) {
			#line 1252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			hi = ADV_UFCS(ToFloat64)(x.__ref());
			#line 1253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			lo = x - hi;
			#line 1254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			lo = lo * (PiLo + PiHi) + hi * PiLo;
			#line 1255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			hi *= PiHi;
			#line 1256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			Sum2(Builtin::MutableRef<std::remove_cvref_t<decltype(hi)>>(hi), Builtin::MutableRef<std::remove_cvref_t<decltype(lo)>>(lo));
			#line 1257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			t = TanInternal(hi, lo, Builtin::i32(1));
		} else {
			#line 1258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
			if ((x <=> Quarter) > 0) {
				#line 1259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				x = HalfOne - x;
				#line 1260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				hi = ADV_UFCS(ToFloat64)(x.__ref());
				#line 1261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				lo = x - hi;
				#line 1262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				lo = lo * (PiLo + PiHi) + hi * PiLo;
				#line 1263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				hi *= PiHi;
				#line 1264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				Sum2(Builtin::MutableRef<std::remove_cvref_t<decltype(hi)>>(hi), Builtin::MutableRef<std::remove_cvref_t<decltype(lo)>>(lo));
				#line 1265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				t = -TanInternal(hi, lo, Builtin::i32(-1));
			} else {
				#line 1266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
				{
					#line 1267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
					t = ADV_USPCS(One, Builtin::f128)();
				}
			}
		}
		#line 1270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float128_Trig.ast"
		return t;
	}


}