#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "SimdVector.h"
#include "System/Float32.h"
using namespace System;
#include "System/Float64.h"
using namespace System;
#include "System/Range.h"
using namespace System;

namespace System::Runtime::Intrinsics {
namespace __Unsafe {} namespace __CommonInstructions_Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
class CommonInstructions;
} namespace __extensions {
template<class __TT> struct __static_FromBits;
template<class __TT> struct __static_getFromBits;
} namespace System::Runtime::Intrinsics {
//###############################################################################
//# Type definitions
//###############################################################################
#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	struct CommonInstructions : public SimdInstructionSet {
		public: using __self = CommonInstructions;
		private: using ___super = SimdInstructionSet;
		#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		ADV_CHECK_STATIC_CLASS("SimdInstructionSet", SimdInstructionSet);
		protected: template<class F> class FloatConstants;
		protected: 
		template<class T, size_t Length> class __Class_BufferedVector;
		#line 1358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		template<class T, size_t Length> struct alignas(size_t((Builtin::i32(64)))) BufferedVector final : public Builtin::Struct {
			public: using __self = BufferedVector<T, Length>;
			public: using __class = __Class_BufferedVector<T, Length>;
			public: FORCE_INLINE constexpr decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) __ref() const noexcept { return *this; }
			public: BufferedVector() = default;
			public: BufferedVector(Builtin::InlineArray<Length, T> _buffer) : buffer{_buffer} {}
			#line 1359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: Builtin::InlineArray<Length, T> buffer; ADV_CHECK_REF_STRUCT("T[Length]", Builtin::InlineArray<Length, T>);
			template <size_t I, class T, size_t Length> friend auto& get(BufferedVector<T, Length>&);
			template <size_t I, class T, size_t Length> friend const auto& get(const BufferedVector<T, Length>&);
			
		};
		
		protected: 
		#line 1391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		template<> struct FloatConstants<Builtin::f32> : public Builtin::StaticClass {
			public: using __self = FloatConstants<Builtin::f32>;
			private: FloatConstants() = default;
			#line 1392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto PiO2 = ADV_USFCS_NONLOCAL((Builtin::f32), FromBits)(Builtin::u32(0x3fc90fdbU));
			#line 1393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto PiO2_1 = ADV_USFCS_NONLOCAL((Builtin::f32), FromBits)(Builtin::u32(0x3fc90f80U));
			#line 1394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto PiO2_1t = ADV_USFCS_NONLOCAL((Builtin::f32), FromBits)(Builtin::u32(0x37354443U));
			#line 1395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto PiO2_2 = ADV_USFCS_NONLOCAL((Builtin::f32), FromBits)(Builtin::u32(0x37354400U));
			#line 1396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto PiO2_2t = ADV_USFCS_NONLOCAL((Builtin::f32), FromBits)(Builtin::u32(0x2e85a308U));
			#line 1397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto PiO2_3 = ADV_USFCS_NONLOCAL((Builtin::f32), FromBits)(Builtin::u32(0x2e85a300U));
			#line 1398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto PiO2_3t = ADV_USFCS_NONLOCAL((Builtin::f32), FromBits)(Builtin::u32(0x248d3132U));
			#line 1399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto PiO2_Lo = ADV_USFCS_NONLOCAL((Builtin::f32), FromBits)(Builtin::u32(0xb33bbd2eU));
			#line 1400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto PiO4_Lo = ADV_USFCS_NONLOCAL((Builtin::f32), FromBits)(Builtin::u32(0xb2bbbd2eU));
			#line 1401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto TwoOPi = ADV_USFCS_NONLOCAL((Builtin::f32), FromBits)(Builtin::u32(0x3f22f983U));
			#line 1402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto TwentyPi = ADV_USFCS_NONLOCAL((Builtin::f32), FromBits)(Builtin::u32(0x427b53d1U));
			#line 1403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto PiO4 = ADV_USFCS_NONLOCAL((Builtin::f32), FromBits)(Builtin::u32(0x3f490fdbU));
			#line 1404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto MediumPi = ADV_USFCS_NONLOCAL((Builtin::f32), FromBits)(Builtin::u32(0x43490fdbU));
			#line 1405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto SignMask = ADV_USFCS_NONLOCAL((Builtin::f32), FromBits)(Builtin::u32(0x80000000U));
			#line 1406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto SqrtEps = ADV_USFCS_NONLOCAL((Builtin::f32), FromBits)(Builtin::u32(0x39b504f3U));
			#line 1407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto Tan3PiO8 = ADV_USFCS_NONLOCAL((Builtin::f32), FromBits)(Builtin::u32(0x401a827aU));
			#line 1408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto TanPiO8 = ADV_USFCS_NONLOCAL((Builtin::f32), FromBits)(Builtin::u32(0x3ed413cdU));
			#line 1409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto MaxLog = Builtin::f32(88.3762626647949f);
			#line 1410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto MinLog = Builtin::f32(-88.3762626647949f);
			#line 1411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto MaxLog2 = Builtin::f32(127.0f);
			#line 1412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto MinLog2 = Builtin::f32(-127.0f);
			#line 1413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto MaxLog10 = Builtin::f32(38.23080825805664f);
			#line 1414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto MinLog10 = Builtin::f32(-37.89999771118164f);
			#line 1415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto Log2 = Builtin::f32(0.6931471805599453094172321214581765680755001343602553f);
			#line 1416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto Log2Hi = ADV_USFCS_NONLOCAL((Builtin::f32), FromBits)(Builtin::u32(0x3f318000U));
			#line 1417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto Log2Lo = ADV_USFCS_NONLOCAL((Builtin::f32), FromBits)(Builtin::u32(0xb95e8083U));
			#line 1418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto Lg2Hi = ADV_USFCS_NONLOCAL((Builtin::f32), FromBits)(Builtin::u32(0x3e9a0000U));
			#line 1419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto Lg2Lo = ADV_USFCS_NONLOCAL((Builtin::f32), FromBits)(Builtin::u32(0x39826a14U));
			#line 1420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto InvLog2 = Builtin::f32(1.442695040888963407359924681001892137426645954152986f);
			#line 1421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto InvLog2Hi = ADV_USFCS_NONLOCAL((Builtin::f32), FromBits)(Builtin::u32(0x3fb8b000U));
			#line 1422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto InvLog2Lo = ADV_USFCS_NONLOCAL((Builtin::f32), FromBits)(Builtin::u32(0xb9389ad4U));
			#line 1423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto InvLg2 = Builtin::f32(3.32192809488736234787031942949f);
			#line 1424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto Log10_2Hi = Builtin::f32(3.0102920532e-1f);
			#line 1425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto Log10_2Lo = Builtin::f32(7.9034151668e-7f);
			#line 1426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto InvLn10Hi = Builtin::f32(4.3432617188e-1f);
			#line 1427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto InvLn10Lo = Builtin::f32(-3.1689971365e-5f);
			#line 1428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto OneOTwoEps = ADV_USFCS_NONLOCAL((Builtin::f32), FromBits)(Builtin::u32(0x4a800000U));
			#line 1429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto OneOSqrtEps = ADV_USFCS_NONLOCAL((Builtin::f32), FromBits)(Builtin::u32(0x453504f3U));
			#line 1430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto Mask1Frexp = Builtin::i32(0x7f800000);
			#line 1431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto Mask2Frexp = Builtin::i32(0x3f000000);
			#line 1432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto MaxExponent = Builtin::i32(127);
			#line 1433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto MaxExponentM1 = Builtin::i32(126);
			#line 1434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto MantissaBits = Builtin::i32(23);
			#line 1435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto TwoToNmb = Builtin::f32(8388608.0f);
			#line 1436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto TwoToNmbO3 = Builtin::u32(0x3ba14518U);
			
		};
		
		protected: 
		#line 1438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		template<> struct FloatConstants<Builtin::f64> : public Builtin::StaticClass {
			public: using __self = FloatConstants<Builtin::f64>;
			private: FloatConstants() = default;
			#line 1439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto PiO2 = ADV_USFCS_NONLOCAL((Builtin::f64), FromBits)(Builtin::u64(0x3ff921fb54442d18ULL));
			#line 1440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto PiO2_1 = ADV_USFCS_NONLOCAL((Builtin::f64), FromBits)(Builtin::u64(0x3ff921fb54400000ULL));
			#line 1441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto PiO2_1t = ADV_USFCS_NONLOCAL((Builtin::f64), FromBits)(Builtin::u64(0x3dd0b4611a626331ULL));
			#line 1442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto PiO2_2 = ADV_USFCS_NONLOCAL((Builtin::f64), FromBits)(Builtin::u64(0x3dd0b4611a600000ULL));
			#line 1443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto PiO2_2t = ADV_USFCS_NONLOCAL((Builtin::f64), FromBits)(Builtin::u64(0x3ba3198a2e037073ULL));
			#line 1444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto PiO2_3 = ADV_USFCS_NONLOCAL((Builtin::f64), FromBits)(Builtin::u64(0x3ba3198a2e000000ULL));
			#line 1445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto PiO2_3t = ADV_USFCS_NONLOCAL((Builtin::f64), FromBits)(Builtin::u64(0x397b839a252049c1ULL));
			#line 1446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto PiO2_Lo = ADV_USFCS_NONLOCAL((Builtin::f64), FromBits)(Builtin::u64(0x3c91a62633145c07ULL));
			#line 1447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto PiO4_Lo = ADV_USFCS_NONLOCAL((Builtin::f64), FromBits)(Builtin::u64(0x3c81a62633145c07ULL));
			#line 1448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto TwoOPi = ADV_USFCS_NONLOCAL((Builtin::f64), FromBits)(Builtin::u64(0x3fe45f306dc9c883ULL));
			#line 1449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto TwentyPi = ADV_USFCS_NONLOCAL((Builtin::f64), FromBits)(Builtin::u64(0x404f6a7a2955385eULL));
			#line 1450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto PiO4 = ADV_USFCS_NONLOCAL((Builtin::f64), FromBits)(Builtin::u64(0x3fe921fb54442d18ULL));
			#line 1451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto MediumPi = ADV_USFCS_NONLOCAL((Builtin::f64), FromBits)(Builtin::u64(0x412921fb54442d18ULL));
			#line 1452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto SignMask = ADV_USFCS_NONLOCAL((Builtin::f64), FromBits)(Builtin::u64(0x8000000000000000ULL));
			#line 1453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto SqrtEps = ADV_USFCS_NONLOCAL((Builtin::f64), FromBits)(Builtin::u64(0x3e50000000000000ULL));
			#line 1454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto Tan3PiO8 = ADV_USFCS_NONLOCAL((Builtin::f64), FromBits)(Builtin::u64(0x4003504f333f9de6ULL));
			#line 1455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto TanPiO8 = ADV_USFCS_NONLOCAL((Builtin::f64), FromBits)(Builtin::u64(0x3fda827999fcef31ULL));
			#line 1456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto MaxLog = Builtin::f64(709.78271289338400);
			#line 1457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto MinLog = Builtin::f64(-708.3964185322641);
			#line 1458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto MaxLog2 = Builtin::f64(1023.0);
			#line 1459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto MinLog2 = Builtin::f64(-1023.0);
			#line 1460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto MaxLog10 = Builtin::f64(308.2547155599167);
			#line 1461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto MinLog10 = Builtin::f64(-308.2547155599167);
			#line 1462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto Log2 = Builtin::f64(0.6931471805599453094172321214581765680755001343602553);
			#line 1463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto Log2Hi = ADV_USFCS_NONLOCAL((Builtin::f64), FromBits)(Builtin::u64(0x3fe62e42fee00000ULL));
			#line 1464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto Log2Lo = ADV_USFCS_NONLOCAL((Builtin::f64), FromBits)(Builtin::u64(0x3dea39ef35793c76ULL));
			#line 1465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto Lg2Hi = ADV_USFCS_NONLOCAL((Builtin::f64), FromBits)(Builtin::u64(0x3fd3440000000000ULL));
			#line 1466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto Lg2Lo = ADV_USFCS_NONLOCAL((Builtin::f64), FromBits)(Builtin::u64(0x3ed3509f79fef312ULL));
			#line 1467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto InvLog2 = Builtin::f64(1.442695040888963407359924681001892137426645954152986);
			#line 1468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto InvLog2Hi = ADV_USFCS_NONLOCAL((Builtin::f64), FromBits)(Builtin::u64(0x3ff7154765200000ULL));
			#line 1469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto InvLog2Lo = ADV_USFCS_NONLOCAL((Builtin::f64), FromBits)(Builtin::u64(0x3de705fc2eefa200ULL));
			#line 1470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto InvLg2 = Builtin::f64(3.32192809488736234787031942949);
			#line 1471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto Log10_2Hi = Builtin::f64(3.01029995663611771306e-1);
			#line 1472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto Log10_2Lo = Builtin::f64(3.69423907715893078616e-13);
			#line 1473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto InvLn10Hi = Builtin::f64(4.34294481878168880939e-1);
			#line 1474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto InvLn10Lo = Builtin::f64(2.50829467116452752298e-11);
			#line 1475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto OneOTwoEps = ADV_USFCS_NONLOCAL((Builtin::f64), FromBits)(Builtin::u64(0x4320000000000000ULL));
			#line 1476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto OneOSqrtEps = ADV_USFCS_NONLOCAL((Builtin::f64), FromBits)(Builtin::u64(0x4190000000000000ULL));
			#line 1477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto Mask1Frexp = Builtin::i64(0x7ff0000000000000LL);
			#line 1478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto Mask2Frexp = Builtin::i64(0x3fe0000000000000LL);
			#line 1479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto MaxExponent = Builtin::i32(1023);
			#line 1480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto MaxExponentM1 = Builtin::i32(1022);
			#line 1481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto MantissaBits = Builtin::i32(52);
			#line 1482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto TwoToNmb = Builtin::f64(4503599627370496.0);
			#line 1483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto TwoToNmbO3 = Builtin::u64(0x3ed428a2f98d7286ULL);
			
		};
		
		protected: 
		
		#line 1358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		template<class T, size_t Length> class __Class_BufferedVector final : public Builtin::ValueType
		{
			#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: using __underlying = BufferedVector<T, Length>; using __self = __underlying;
			__self __value;
			__Class_BufferedVector(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
			operator __underlying() const noexcept { return __value; }
			
		};
		
		protected: 
		
		protected: 
		
		#line 1355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: template<class T> using FloatInt = std::conditional_t<Builtin::TypeIs<T, Builtin::f32>(), Builtin::i32, Builtin::i64>;
		private: CommonInstructions() = default;
		#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Abs(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto BitOfSign(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto FromMask(const SimdMask<T, Arch>& mask)  -> const SimdVector<T, Arch>;
		#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto GetElement(const SimdVector<T, Arch>& vec, Builtin::usize index)  -> const T;
		#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto GetMaskElement(const SimdMask<T, Arch>& vec, Builtin::usize index)  -> const bool;
		#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto WrappingMultiply(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>;
		#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto WrappingDivide(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>;
		#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto WrappingMod(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>;
		#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto LeftShift(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>;
		#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto RightShift(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>;
		#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto UnsignedRightShift(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>;
		#line 159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Average(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>;
		#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto AverageReverse(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>;
		#line 182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T2, class T1, class Arch> static auto BitwiseCast(const SimdVector<T1, Arch>& vec)  -> const SimdVector<T2, Arch>;
		#line 188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto OverflowingAdd(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const std::tuple<SimdVector<T, Arch>, SimdMask<T, Arch>>;
		#line 202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto StrictAdd(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>;
		#line 210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Add(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>;
		#line 218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto OverflowingSubtract(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const std::tuple<SimdVector<T, Arch>, SimdMask<T, Arch>>;
		#line 232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto StrictSubtract(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>;
		#line 240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Subtract(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>;
		#line 248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto OverflowingMultiply(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const std::tuple<SimdVector<T, Arch>, SimdMask<T, Arch>>;
		#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto StrictMultiply(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>;
		#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Multiply(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>;
		#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto OverflowingDivide(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const std::tuple<SimdVector<T, Arch>, SimdMask<T, Arch>>;
		#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto StrictDivide(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>;
		#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Divide(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>;
		#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto OverflowingMod(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const std::tuple<SimdVector<T, Arch>, SimdMask<T, Arch>>;
		#line 316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto StrictMod(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>;
		#line 324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Mod(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>;
		#line 336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto OverflowingNegate(const SimdVector<T, Arch>& vec)  -> const std::tuple<SimdVector<T, Arch>, SimdMask<T, Arch>>;
		#line 345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto StrictNegate(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Negate(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> inline static auto FusedMultiplyAdd(const SimdVector<T, Arch>& x, const SimdVector<T, Arch>& y, const SimdVector<T, Arch>& z)  -> const SimdVector<T, Arch>;
		#line 364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> inline static auto FusedMultiplySub(const SimdVector<T, Arch>& x, const SimdVector<T, Arch>& y, const SimdVector<T, Arch>& z)  -> const SimdVector<T, Arch>;
		#line 367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> inline static auto FusedNegatedMultiplyAdd(const SimdVector<T, Arch>& x, const SimdVector<T, Arch>& y, const SimdVector<T, Arch>& z)  -> const SimdVector<T, Arch>;
		#line 370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> inline static auto FusedNegatedMultiplySub(const SimdVector<T, Arch>& x, const SimdVector<T, Arch>& y, const SimdVector<T, Arch>& z)  -> const SimdVector<T, Arch>;
		#line 373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T2, class T1, class Arch> static auto Convert(const SimdVector<T1, Arch>& vec)  -> const SimdVector<T2, Arch>;
		#line 388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Clamp(const SimdVector<T, Arch>& vec, const SimdVector<T, Arch>& min, const SimdVector<T, Arch>& max)  -> const SimdVector<T, Arch>;
		#line 398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Lerp(const SimdVector<T, Arch>& min, const SimdVector<T, Arch>& max, const SimdVector<T, Arch>& amount)  -> const SimdVector<T, Arch>;
		#line 408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Truncate(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Ceil(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Floor(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Round(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto RoundTiesEven(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto NearbyInt(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Sin(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Cos(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto SinCos(const SimdVector<T, Arch>& vec)  -> const std::tuple<SimdVector<T, Arch>, SimdVector<T, Arch>>;
		#line 530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Tan(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Asin(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Acos(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 590 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Atan(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 599 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto SignNotZero(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Atan2(const SimdVector<T, Arch>& x, const SimdVector<T, Arch>& y)  -> const SimdVector<T, Arch>;
		#line 619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Sinh(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 648 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Cosh(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 659 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Tanh(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Asinh(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 714 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Acosh(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 724 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Atanh(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto IsNaN(const SimdVector<T, Arch>& x)  -> const SimdMask<T, Arch>;
		#line 740 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto IsInfinity(const SimdVector<T, Arch>& x)  -> const SimdMask<T, Arch>;
		#line 747 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto IsFinite(const SimdVector<T, Arch>& x)  -> const SimdMask<T, Arch>;
		#line 754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto IsInteger(const SimdVector<T, Arch>& x)  -> const SimdMask<T, Arch>;
		#line 761 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto IsEvenInteger(const SimdVector<T, Arch>& x)  -> const SimdMask<T, Arch>;
		#line 769 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto IsOddInteger(const SimdVector<T, Arch>& x)  -> const SimdMask<T, Arch>;
		#line 777 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Pow(const SimdVector<T, Arch>& x, const SimdVector<T, Arch>& y)  -> const SimdVector<T, Arch>;
		#line 790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto IPow(const SimdVector<T, Arch>& x, Builtin::i32 exp)  -> const SimdVector<T, Arch>;
		#line 816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto WrappingIPow(const SimdVector<T, Arch>& x, Builtin::i32 exp)  -> const SimdVector<T, Arch>;
		#line 835 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto StrictIPow(const SimdVector<T, Arch>& x, Builtin::i32 exp)  -> const SimdVector<T, Arch>;
		#line 854 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Hypot(const SimdVector<T, Arch>& x, const SimdVector<T, Arch>& y)  -> const SimdVector<T, Arch>;
		#line 859 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Frexp(const SimdVector<T, Arch>& vec)  -> const std::tuple<SimdVector<T, Arch>, SimdVector<FloatInt<T>, Arch>>;
		#line 890 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Ldexp(const SimdVector<T, Arch>& x, SimdVector<FloatInt<T>, Arch> exp)  -> const SimdVector<T, Arch>;
		#line 902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Cbrt(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 969 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Ln(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 1033 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Ln1P(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 1040 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Log2(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 1110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Log10(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 1186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Exp(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 1214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto ExpM1(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 1254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Exp2(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 1279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Exp10(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 1306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Sum(const SimdVector<T, Arch>& vec)  -> const T;
		#line 1318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Product(const SimdVector<T, Arch>& vec)  -> const T;
		#line 1330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto MinElement(const SimdVector<T, Arch>& vec)  -> const T;
		#line 1342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto MaxElement(const SimdVector<T, Arch>& vec)  -> const T;
		#line 1362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: template<class V, uint64_t c> static auto Coef() noexcept -> const V;
		#line 1373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: inline constexpr static auto ShuffleInternal(Builtin::i32 w, Builtin::i32 x, Builtin::i32 y, Builtin::i32 z)  -> const Builtin::i32;
		#line 1374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: inline constexpr static auto ShuffleInternal(Builtin::i32 x, Builtin::i32 y)  -> const Builtin::i32;
		#line 1375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: inline constexpr static auto ModShuffle(Builtin::i32 w, Builtin::i32 x, Builtin::i32 y, Builtin::i32 z)  -> const Builtin::i32;
		#line 1376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: inline constexpr static auto ModShuffle(Builtin::i32 x, Builtin::i32 y)  -> const Builtin::i32;
		#line 1378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: template<class V> inline static auto Horner(const V& __var_1378_34) noexcept -> const V;
		#line 1379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: template<class V, uint64_t C0> inline static auto Horner(const V& __var_1379_43) noexcept -> const V;
		#line 1380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: template<class V, uint64_t C0, uint64_t C1, uint64_t... Tail> inline static auto Horner(const V& vec) noexcept -> const V;
		#line 1384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: template<class V> inline static auto Horner1(const V& __var_1384_35) noexcept -> const V;
		#line 1385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: template<class V, uint64_t C0> inline static auto Horner1(const V& vec) noexcept -> const V;
		#line 1386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: template<class V, uint64_t C0, uint64_t C1, uint64_t... Tail> inline static auto Horner1(const V& vec) noexcept -> const V;
		#line 1486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: template<class Arch> static auto Quadrant(const SimdVector<Builtin::i32, Arch>& vec)  -> const SimdVector<Builtin::i32, Arch>;
		#line 1490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: template<class Arch> static auto Quadrant(const SimdVector<Builtin::f32, Arch>& vec)  -> const SimdVector<Builtin::f32, Arch>;
		#line 1494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: template<class Arch> static auto Quadrant(const SimdVector<Builtin::f64, Arch>& vec)  -> const SimdVector<Builtin::f64, Arch>;
		#line 1499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: template<class V> static auto TrigReduce(const V& x, Builtin::MutableRef<V> __xref__) noexcept -> const V;
		#line 1557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: template<class Arch> static auto SinEval(const SimdVector<Builtin::f32, Arch>& z, const SimdVector<Builtin::f32, Arch>& x)  -> const SimdVector<Builtin::f32, Arch>;
		#line 1562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: template<class Arch> static auto SinEval(const SimdVector<Builtin::f64, Arch>& z, const SimdVector<Builtin::f64, Arch>& x)  -> const SimdVector<Builtin::f64, Arch>;
		#line 1568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: template<class Arch> static auto CosEval(const SimdVector<Builtin::f32, Arch>& z)  -> const SimdVector<Builtin::f32, Arch>;
		#line 1574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: template<class Arch> static auto CosEval(const SimdVector<Builtin::f64, Arch>& z)  -> const SimdVector<Builtin::f64, Arch>;
		#line 1581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: template<class Arch> static auto TanEval(const SimdVector<Builtin::f32, Arch>& z, const SimdMask<Builtin::f32, Arch>& test1)  -> const SimdVector<Builtin::f32, Arch>;
		#line 1589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: template<class Arch> static auto TanEval(const SimdVector<Builtin::f64, Arch>& z, const SimdMask<Builtin::f64, Arch>& test1)  -> const SimdVector<Builtin::f64, Arch>;
		#line 1598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: template<class T, class Arch> static auto AtanEval(const SimdVector<T, Arch>& x, const SimdVector<T, Arch>& recx)  -> const SimdVector<T, Arch>;
		
	};
	
	//###############################################################################
//# Function definitions
//###############################################################################

#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Abs(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, IUnsignedNumber>()) {
			#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return vec;
		} else {
			#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{
				#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(BitOfSign(vec))> sign = BitOfSign(vec); 
				#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(vec ^ sign)> inv = vec ^ sign; 
				#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return inv - sign;
			}
		}
		return {};
	}
#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::BitOfSign(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using Vec = SimdVector<T, Arch>;
		#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, IUnsignedNumber>()) {
			#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return ADV_USPCS(Zero, Vec)();
		} else {
			#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if constexpr (Builtin::TypeIs<T, IBinaryInteger>()) {
				#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return vec >> (Builtin::i32(8) * Builtin::usize(sizeof (T)) - Builtin::i32(1));
			} else {
				#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				if constexpr (std::is_same_v<T, Builtin::f32>) {
					#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					return vec & ADV_USFCS((Builtin::f32), FromBits)(Builtin::u32(0x80000000U));
				} else {
					#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					if constexpr (std::is_same_v<T, Builtin::f64>) {
						#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
						return vec & ADV_USFCS((Builtin::f64), FromBits)(Builtin::u64(0x8000000000000000ULL));
					} else {
						#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
						{
							#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
							static_assert(Builtin::Boolean(false), "Unsupported type");
							#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
							return vec;
						}
					}
				}
			}
		}
		return {};
	}
#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::FromMask(const SimdMask<T, Arch>& mask)  -> const SimdVector<T, Arch>
	{
		#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return TVector{Builtin::Cast<true, typename TVector::TNative>(ADV_UFCS(ToNative)(mask.__ref()))} & TVector::Create(T{Builtin::i32(1)});
	}
#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::GetElement(const SimdVector<T, Arch>& vec, Builtin::usize index)  -> const T
	{
		#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard42{};
			#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			BufferedVector<T, SimdVector<T,Arch>::Length> buf{}; 
			#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(StoreAligned)(vec.__ref(), (__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(buf.__ref().buffer.__ref(), Builtin::i32(0))))));
			#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return ADV_UFCS(_operator_subscript)(buf.__ref().buffer.__ref(), Builtin::Cast<true, Builtin::i32>(index));
		}
		return {};
	}
#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::GetMaskElement(const SimdMask<T, Arch>& vec, Builtin::usize index)  -> const bool
	{
		#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard50{};
			#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			BufferedVector<bool, SimdMask<T,Arch>::Length> buf{}; 
			#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(StoreAligned)(vec.__ref(), (__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(buf.__ref().buffer.__ref(), Builtin::i32(0))))));
			#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return ADV_UFCS(_operator_subscript)(buf.__ref().buffer.__ref(), Builtin::Cast<true, Builtin::i32>(index));
		}
		return {};
	}
#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::WrappingMultiply(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>
	{
		#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		constexpr Builtin::Auto<decltype(Builtin::i32{SimdVector<T,Arch>::Length})> size = Builtin::i32{SimdVector<T,Arch>::Length};
		#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufLeft{}; 
		#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufRight{}; 
		#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufResult{}; 
		#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard63{};
			#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(StoreAligned)(left.__ref(), (__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufLeft.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
			#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(StoreAligned)(right.__ref(), (__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufRight.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
			#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{ auto __for_init_66 = System::Range<Builtin::Auto<decltype(size)>, false>({}, size); auto __for_iter_66 = ADV_UFCS(Iterate)(__for_init_66.__ref()); while(__for_iter_66.__ref().MoveNext()) {
			auto&& i = __for_iter_66.__ref().GetCurrent(); {
				#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_subscript)(bufResult.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) = ADV_UFCS(_operator_mul_mod)(ADV_UFCS(_operator_subscript)(bufLeft.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i), ADV_UFCS(_operator_subscript)(bufRight.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i));
			}}}
			#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return TVector::LoadAligned((__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufResult.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
		}
		return {};
	}
#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::WrappingDivide(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>
	{
		#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if (ADV_UFCS(Any)(right.__ref(), ADV_USPCS(Zero, T)())) {
			#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Throw(Builtin::DivisionByZeroException{});
		}
		#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		constexpr Builtin::Auto<decltype(Builtin::i32{SimdVector<T,Arch>::Length})> size = Builtin::i32{SimdVector<T,Arch>::Length};
		#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufLeft{}; 
		#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufRight{}; 
		#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufResult{}; 
		#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard82{};
			#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(StoreAligned)(left.__ref(), (__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufLeft.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
			#line 84 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(StoreAligned)(right.__ref(), (__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufRight.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
			#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{ auto __for_init_85 = System::Range<Builtin::Auto<decltype(size)>, false>({}, size); auto __for_iter_85 = ADV_UFCS(Iterate)(__for_init_85.__ref()); while(__for_iter_85.__ref().MoveNext()) {
			auto&& i = __for_iter_85.__ref().GetCurrent(); {
				#line 86 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_subscript)(bufResult.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) = ADV_UFCS(_operator_bsl_mod)(ADV_UFCS(_operator_subscript)(bufLeft.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i), ADV_UFCS(_operator_subscript)(bufRight.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i));
			}}}
			#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return TVector::LoadAligned((__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufResult.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
		}
		return {};
	}
#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::WrappingMod(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>
	{
		#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if (ADV_UFCS(Any)(right.__ref(), ADV_USPCS(Zero, T)())) {
			#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Throw(Builtin::DivisionByZeroException{});
		}
		#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		constexpr Builtin::Auto<decltype(Builtin::i32{SimdVector<T,Arch>::Length})> size = Builtin::i32{SimdVector<T,Arch>::Length};
		#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufLeft{}; 
		#line 99 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufRight{}; 
		#line 100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufResult{}; 
		#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard101{};
			#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(StoreAligned)(left.__ref(), (__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufLeft.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
			#line 103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(StoreAligned)(right.__ref(), (__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufRight.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
			#line 104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{ auto __for_init_104 = System::Range<Builtin::Auto<decltype(size)>, false>({}, size); auto __for_iter_104 = ADV_UFCS(Iterate)(__for_init_104.__ref()); while(__for_iter_104.__ref().MoveNext()) {
			auto&& i = __for_iter_104.__ref().GetCurrent(); {
				#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_subscript)(bufResult.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) = ADV_UFCS(_operator_mod_mod)(ADV_UFCS(_operator_subscript)(bufLeft.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i), ADV_UFCS(_operator_subscript)(bufRight.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i));
			}}}
			#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return TVector::LoadAligned((__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufResult.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
		}
		return {};
	}
#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::LeftShift(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>
	{
		#line 112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		constexpr Builtin::Auto<decltype(Builtin::i32{SimdVector<T,Arch>::Length})> size = Builtin::i32{SimdVector<T,Arch>::Length};
		#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufLeft{}; 
		#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufRight{}; 
		#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufResult{}; 
		#line 117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard117{};
			#line 118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(StoreAligned)(left.__ref(), (__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufLeft.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
			#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(StoreAligned)(right.__ref(), (__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufRight.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
			#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{ auto __for_init_120 = System::Range<Builtin::Auto<decltype(size)>, false>({}, size); auto __for_iter_120 = ADV_UFCS(Iterate)(__for_init_120.__ref()); while(__for_iter_120.__ref().MoveNext()) {
			auto&& i = __for_iter_120.__ref().GetCurrent(); {
				#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_subscript)(bufResult.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) = ADV_UFCS(_operator_subscript)(bufLeft.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) << Builtin::i32{ADV_UFCS(_operator_subscript)(bufRight.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i)};
			}}}
			#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return TVector::LoadAligned((__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufResult.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
		}
		return {};
	}
#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::RightShift(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>
	{
		#line 128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		constexpr Builtin::Auto<decltype(Builtin::i32{SimdVector<T,Arch>::Length})> size = Builtin::i32{SimdVector<T,Arch>::Length};
		#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufLeft{}; 
		#line 131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufRight{}; 
		#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufResult{}; 
		#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard133{};
			#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(StoreAligned)(left.__ref(), (__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufLeft.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
			#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(StoreAligned)(right.__ref(), (__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufRight.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
			#line 136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{ auto __for_init_136 = System::Range<Builtin::Auto<decltype(size)>, false>({}, size); auto __for_iter_136 = ADV_UFCS(Iterate)(__for_init_136.__ref()); while(__for_iter_136.__ref().MoveNext()) {
			auto&& i = __for_iter_136.__ref().GetCurrent(); {
				#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_subscript)(bufResult.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) = ADV_UFCS(_operator_subscript)(bufLeft.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) >> Builtin::i32{ADV_UFCS(_operator_subscript)(bufRight.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i)};
			}}}
			#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return TVector::LoadAligned((__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufResult.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
		}
		return {};
	}
#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::UnsignedRightShift(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>
	{
		#line 144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		constexpr Builtin::Auto<decltype(Builtin::i32{SimdVector<T,Arch>::Length})> size = Builtin::i32{SimdVector<T,Arch>::Length};
		#line 145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufLeft{}; 
		#line 147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufRight{}; 
		#line 148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufResult{}; 
		#line 149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard149{};
			#line 150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(StoreAligned)(left.__ref(), (__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufLeft.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
			#line 151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(StoreAligned)(right.__ref(), (__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufRight.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
			#line 152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{ auto __for_init_152 = System::Range<Builtin::Auto<decltype(size)>, false>({}, size); auto __for_iter_152 = ADV_UFCS(Iterate)(__for_init_152.__ref()); while(__for_iter_152.__ref().MoveNext()) {
			auto&& i = __for_iter_152.__ref().GetCurrent(); {
				#line 153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_subscript)(bufResult.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) = ADV_UFCS(_operator_gt_gt_gt)(ADV_UFCS(_operator_subscript)(bufLeft.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i), Builtin::i32{ADV_UFCS(_operator_subscript)(bufRight.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i)});
			}}}
			#line 155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return TVector::LoadAligned((__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufResult.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
		}
		return {};
	}
#line 159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Average(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>
	{
		#line 160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, IUnsignedNumber>()) {
			#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return (left & right) + ((left ^ right) >> Builtin::i32(1));
		} else {
			#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if constexpr (Builtin::TypeIs<T, IBinaryInteger>()) {
				#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype((left & right) + ((left ^ right) >> Builtin::i32(1)))> t = (left & right) + ((left ^ right) >> Builtin::i32(1)); 
				#line 164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(BitwiseCast<typename T::Unsigned>(t))> tu = BitwiseCast<typename T::Unsigned>(t); 
				#line 165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(t + (BitwiseCast<T>(tu >> (Builtin::i32(8) * Builtin::usize(sizeof (T)) - Builtin::i32(1))) & (left ^ right)))> avg = t + (BitwiseCast<T>(tu >> (Builtin::i32(8) * Builtin::usize(sizeof (T)) - Builtin::i32(1))) & (left ^ right)); 
				#line 166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return avg;
			} else {
				#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				{
					#line 168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					return (left + right) / Builtin::i32(2);
				}
			}
		}
		return {};
	}
#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::AverageReverse(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>
	{
		#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, IBinaryInteger>()) {
			#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			constexpr Builtin::Auto<decltype(Builtin::i32(8) * Builtin::usize(sizeof (T)) - Builtin::i32(1))> shift = Builtin::i32(8) * Builtin::usize(sizeof (T)) - Builtin::i32(1);
			#line 175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(Builtin::TypeIs<T, IUnsignedNumber>() ? (((left ^ right) << shift) >> shift) : ((left ^ right) & Builtin::i32(0x1)))> adj = Builtin::TypeIs<T, IUnsignedNumber>() ? (((left ^ right) << shift) >> shift) : ((left ^ right) & Builtin::i32(0x1)); 
			#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return Average(left, right) + adj;
		} else {
			#line 177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{
				#line 178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return Average(left, right);
			}
		}
		return {};
	}
#line 182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T2, class T1, class Arch> auto CommonInstructions::BitwiseCast(const SimdVector<T1, Arch>& vec)  -> const SimdVector<T2, Arch>
	{
		#line 183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		static_assert(Builtin::TypeIs<T1, IBinaryInteger>() && Builtin::TypeIs<T2, IBinaryInteger>() && Builtin::usize(sizeof (T1)) == Builtin::usize(sizeof (T2)), "Common BitwiseCast is only supported for integral vectors of the same size");
		#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return ADV_UFCS(ToNative)(vec.__ref());
	}
#line 188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::OverflowingAdd(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const std::tuple<SimdVector<T, Arch>, SimdMask<T, Arch>>
	{
		#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, IBinaryInteger>()) {
			#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_add_mod)(left, right))> sum = ADV_UFCS(_operator_add_mod)(left, right); 
			#line 192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if constexpr (Builtin::TypeIs<T, IUnsignedNumber>()) {
				#line 193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return std::make_tuple(sum, (ADV_UFCS(_operator_lt_xor)(sum, left)) | (ADV_UFCS(_operator_lt_xor)(sum, right)));
			} else {
				#line 194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				{
					#line 195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					return std::make_tuple(sum, ADV_UFCS(_operator_lt_xor)(((sum ^ left) & (sum ^ right)), T{Builtin::i32(0)}));
				}
			}
		} else {
			#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{
				#line 198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return std::make_tuple(ADV_UFCS(_operator_add_mod)(left, right), SimdMask<T,Arch>::False);
			}
		}
		return {};
	}
#line 202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::StrictAdd(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>
	{
		#line 203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const auto& [sum, overflow] = OverflowingAdd(left, right);
		#line 204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if (ADV_UPCS(Any)(overflow.__ref())) {
			#line 205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return sum;
	}
#line 210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Add(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>
	{
		#line 211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		#if _DEBUG
		#line 212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return StrictAdd(left, right);
		#else
		#line 214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return ADV_UFCS(_operator_add_mod)(left, right);
		#endif
		return {};
	}
#line 218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::OverflowingSubtract(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const std::tuple<SimdVector<T, Arch>, SimdMask<T, Arch>>
	{
		#line 220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, IBinaryInteger>()) {
			#line 221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_sub_mod)(left, right))> diff = ADV_UFCS(_operator_sub_mod)(left, right); 
			#line 222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if constexpr (Builtin::TypeIs<T, IUnsignedNumber>()) {
				#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return std::make_tuple(diff, (ADV_UFCS(_operator_gt_xor)(diff, left)) | (ADV_UFCS(_operator_gt_xor)(diff, right)));
			} else {
				#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				{
					#line 225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					return std::make_tuple(diff, ADV_UFCS(_operator_lt_xor)(((left ^ right) & (diff ^ left)), T{Builtin::i32(0)}));
				}
			}
		} else {
			#line 227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{
				#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return std::make_tuple(ADV_UFCS(_operator_sub_mod)(left, right), SimdMask<T,Arch>::False);
			}
		}
		return {};
	}
#line 232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::StrictSubtract(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>
	{
		#line 233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const auto& [diff, overflow] = OverflowingSubtract(left, right);
		#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if (ADV_UPCS(Any)(overflow.__ref())) {
			#line 235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return diff;
	}
#line 240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Subtract(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>
	{
		#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		#if _DEBUG
		#line 242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return StrictSubtract(left, right);
		#else
		#line 244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return ADV_UFCS(_operator_sub_mod)(left, right);
		#endif
		return {};
	}
#line 248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::OverflowingMultiply(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const std::tuple<SimdVector<T, Arch>, SimdMask<T, Arch>>
	{
		#line 250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, IBinaryInteger>()) {
			#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(left, right))> prod = ADV_UFCS(_operator_mul_mod)(left, right); 
			#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return std::make_tuple(prod, ADV_UFCS(_operator_ne_eq_xor)((prod / right), left));
		} else {
			#line 253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{
				#line 254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return std::make_tuple(ADV_UFCS(_operator_mul_mod)(left, right), SimdMask<T,Arch>::False);
			}
		}
		return {};
	}
#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::StrictMultiply(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>
	{
		#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const auto& [prod, overflow] = OverflowingMultiply(left, right);
		#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if (ADV_UPCS(Any)(overflow.__ref())) {
			#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return prod;
	}
#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Multiply(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>
	{
		#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		#if _DEBUG
		#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return StrictMultiply(left, right);
		#else
		#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return ADV_UFCS(_operator_mul_mod)(left, right);
		#endif
		return {};
	}
#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::OverflowingDivide(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const std::tuple<SimdVector<T, Arch>, SimdMask<T, Arch>>
	{
		#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if (ADV_UFCS(Any)(right.__ref(), ADV_USPCS(Zero, T)())) {
			#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Throw(Builtin::DivisionByZeroException{});
		}
		#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, IBinaryInteger>() && !Builtin::TypeIs<T, IUnsignedNumber>()) {
			#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_bsl_mod)(left, right))> div = ADV_UFCS(_operator_bsl_mod)(left, right); 
			#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return std::make_tuple(div, (ADV_UFCS(_operator_eq_eq_xor)(left, ADV_USPCS(MinValue, T)())) & (ADV_UFCS(_operator_eq_eq_xor)(right, ADV_USPCS(MinusOne, T)())));
		} else {
			#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{
				#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return std::make_tuple(ADV_UFCS(_operator_bsl_mod)(left, right), SimdMask<T,Arch>::False);
			}
		}
		return {};
	}
#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::StrictDivide(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>
	{
		#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const auto& [div, overflow] = OverflowingDivide(left, right);
		#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if (ADV_UPCS(Any)(overflow.__ref())) {
			#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return div;
	}
#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Divide(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>
	{
		#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		#if _DEBUG
		#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return StrictDivide(left, right);
		#else
		#line 299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return ADV_UFCS(_operator_bsl_mod)(left, right);
		#endif
		return {};
	}
#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::OverflowingMod(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const std::tuple<SimdVector<T, Arch>, SimdMask<T, Arch>>
	{
		#line 305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if (ADV_UFCS(Any)(right.__ref(), ADV_USPCS(Zero, T)())) {
			#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Throw(Builtin::DivisionByZeroException{});
		}
		#line 308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, IBinaryInteger>() && !Builtin::TypeIs<T, IUnsignedNumber>()) {
			#line 309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_mod_mod)(left, right))> div = ADV_UFCS(_operator_mod_mod)(left, right); 
			#line 310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return std::make_tuple(div, (ADV_UFCS(_operator_eq_eq_xor)(left, ADV_USPCS(MinValue, T)())) & (ADV_UFCS(_operator_eq_eq_xor)(right, ADV_USPCS(MinusOne, T)())));
		} else {
			#line 311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{
				#line 312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return std::make_tuple(ADV_UFCS(_operator_mod_mod)(left, right), SimdMask<T,Arch>::False);
			}
		}
		return {};
	}
#line 316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::StrictMod(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>
	{
		#line 317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const auto& [mod, overflow] = OverflowingMod(left, right);
		#line 318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if (ADV_UPCS(Any)(overflow.__ref())) {
			#line 319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return mod;
	}
#line 324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Mod(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>
	{
		#line 325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, IFloatingPoint>()) {
			#line 326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return ADV_UFCS(FusedNegatedMultiplyAdd)(ADV_UPCS(Truncate)((left / right).__ref()).__ref(), right, left);
		} else {
			#line 327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{
				#line 328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				#if _DEBUG
				#line 329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return StrictMod(left, right);
				#else
				#line 331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return ADV_UFCS(_operator_mod_mod)(left, right);
				#endif
			}
		}
		return {};
	}
#line 336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::OverflowingNegate(const SimdVector<T, Arch>& vec)  -> const std::tuple<SimdVector<T, Arch>, SimdMask<T, Arch>>
	{
		#line 338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, IBinaryInteger>() && !Builtin::TypeIs<T, IUnsignedNumber>()) {
			#line 339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return std::make_tuple(ADV_UFCS(_operator_sub_mod)(vec), (ADV_UFCS(_operator_eq_eq_xor)(vec, ADV_USPCS(MinValue, T)())));
		} else {
			#line 340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{
				#line 341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return std::make_tuple(ADV_UFCS(_operator_sub_mod)(vec), SimdMask<T,Arch>::False);
			}
		}
		#line 342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		;
		return {};
	}
#line 345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::StrictNegate(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const auto& [neg, overflow] = OverflowingNegate(vec);
		#line 347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if (ADV_UPCS(Any)(overflow.__ref())) {
			#line 348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return neg;
	}
#line 353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Negate(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		#if _DEBUG
		#line 355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return StrictNegate(vec);
		#else
		#line 357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return ADV_UFCS(_operator_sub_mod)(vec);
		#endif
		return {};
	}
#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> inline auto CommonInstructions::FusedMultiplyAdd(const SimdVector<T, Arch>& x, const SimdVector<T, Arch>& y, const SimdVector<T, Arch>& z)  -> const SimdVector<T, Arch>
	{
		#line 362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		ADV_EXPRESSION_BODY(x * y + z); 
	}
#line 364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> inline auto CommonInstructions::FusedMultiplySub(const SimdVector<T, Arch>& x, const SimdVector<T, Arch>& y, const SimdVector<T, Arch>& z)  -> const SimdVector<T, Arch>
	{
		#line 365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		ADV_EXPRESSION_BODY(x * y - z); 
	}
#line 367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> inline auto CommonInstructions::FusedNegatedMultiplyAdd(const SimdVector<T, Arch>& x, const SimdVector<T, Arch>& y, const SimdVector<T, Arch>& z)  -> const SimdVector<T, Arch>
	{
		#line 368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		ADV_EXPRESSION_BODY(-x * y + z); 
	}
#line 370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> inline auto CommonInstructions::FusedNegatedMultiplySub(const SimdVector<T, Arch>& x, const SimdVector<T, Arch>& y, const SimdVector<T, Arch>& z)  -> const SimdVector<T, Arch>
	{
		#line 371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		ADV_EXPRESSION_BODY(-x * y - z); 
	}
#line 373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T2, class T1, class Arch> auto CommonInstructions::Convert(const SimdVector<T1, Arch>& vec)  -> const SimdVector<T2, Arch>
	{
		#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		constexpr Builtin::Auto<decltype(Builtin::i32{SimdVector<T1,Arch>::Length})> size = Builtin::i32{SimdVector<T1,Arch>::Length};
		#line 375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T2, Arch>;
		#line 376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		static_assert(size == SimdVector<T2,Arch>::Length, "Cannot convert vectors of different lengths");
		#line 377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T1, size> bufIn{}; 
		#line 378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T2, size> bufOut{}; 
		#line 379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard379{};
			#line 380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(StoreAligned)(vec.__ref(), (__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufIn.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
			#line 381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{ auto __for_init_381 = System::Range<Builtin::Auto<decltype(size)>, false>({}, size); auto __for_iter_381 = ADV_UFCS(Iterate)(__for_init_381.__ref()); while(__for_iter_381.__ref().MoveNext()) {
			auto&& i = __for_iter_381.__ref().GetCurrent(); {
				#line 382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_subscript)(bufOut.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) = Builtin::Cast<true, T2>(ADV_UFCS(_operator_subscript)(bufIn.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i));
			}}}
			#line 384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return TVector::LoadAligned((__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufOut.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
		}
		return {};
	}
#line 388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Clamp(const SimdVector<T, Arch>& vec, const SimdVector<T, Arch>& min, const SimdVector<T, Arch>& max)  -> const SimdVector<T, Arch>
	{
		#line 390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if (ADV_UFCS(LessThanAny)(max.__ref(), min)) {
			#line 392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(TVector::ConditionalSelect(ADV_UFCS(_operator_lt_xor)(vec, min), min, vec))> x = TVector::ConditionalSelect(ADV_UFCS(_operator_lt_xor)(vec, min), min, vec); 
		#line 395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return TVector::ConditionalSelect(ADV_UFCS(_operator_gt_xor)(x, max), max, x);
	}
#line 398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Lerp(const SimdVector<T, Arch>& min, const SimdVector<T, Arch>& max, const SimdVector<T, Arch>& amount)  -> const SimdVector<T, Arch>
	{
		#line 400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		static_assert(Builtin::TypeIs<T, IFloatingPoint>(), "Lerp only works on floating point types");
		#line 401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if (ADV_UFCS(LessThanAny)(max.__ref(), min)) {
			#line 403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_mul_mod)(min, (ADV_UFCS(_operator_sub_mod)(TVector::One, amount))), (ADV_UFCS(_operator_mul_mod)(max, amount)));
	}
#line 408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Truncate(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, Builtin::f32>()) {
			#line 411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return TVector::ConditionalSelect(ADV_UFCS(_operator_lt_xor)(vec.__ref().Abs, Builtin::f32(16777216.0f)), ADV_UFCS_TEMPLATE(ConvertTo<Builtin::f32>)(ADV_UFCS_TEMPLATE(ConvertTo<Builtin::i32>)(vec.__ref()).__ref()), vec);
		} else {
			#line 413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if constexpr (Builtin::TypeIs<T, Builtin::f64>()) {
				#line 414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return TVector::ConditionalSelect(ADV_UFCS(_operator_lt_xor)(vec.__ref().Abs, Builtin::f64(9007199254740992.0)), ADV_UFCS_TEMPLATE(ConvertTo<Builtin::f64>)(ADV_UFCS_TEMPLATE(ConvertTo<Builtin::i64>)(vec.__ref()).__ref()), vec);
			} else {
				#line 416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				{
					#line 417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					return vec;
				}
			}
		}
		return {};
	}
#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Ceil(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Truncate)(vec.__ref()))> truncated = ADV_UPCS(Truncate)(vec.__ref()); 
		#line 424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return TVector::ConditionalSelect(ADV_UFCS(_operator_lt_xor)(truncated, vec), truncated + T{Builtin::i32(1)}, truncated);
	}
#line 427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Floor(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Truncate)(vec.__ref()))> truncated = ADV_UPCS(Truncate)(vec.__ref()); 
		#line 430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return TVector::ConditionalSelect(ADV_UFCS(_operator_gt_xor)(truncated, vec), truncated - T{Builtin::i32(1)}, truncated);
	}
#line 433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Round(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Abs)(vec.__ref()))> abs = ADV_UPCS(Abs)(vec.__ref()); 
		#line 436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Ceil)(abs.__ref()))> ceil = ADV_UPCS(Ceil)(abs.__ref()); 
		#line 437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(TVector::ConditionalSelect(ADV_UFCS(_operator_gt_xor)(ceil - T{Builtin::f64(0.5)}, abs), ceil - T{Builtin::i32(1)}, ceil))> rounded = TVector::ConditionalSelect(ADV_UFCS(_operator_gt_xor)(ceil - T{Builtin::f64(0.5)}, abs), ceil - T{Builtin::i32(1)}, ceil); 
		#line 438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, Builtin::f32>()) {
			#line 439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return TVector::ConditionalSelect(ADV_UFCS(_operator_gt_xor)(abs, Builtin::f32(16777216.0f)), vec, ADV_UFCS(CopySign)(rounded.__ref(), vec));
		} else {
			#line 440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if constexpr (Builtin::TypeIs<T, Builtin::f64>()) {
				#line 441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return TVector::ConditionalSelect(ADV_UFCS(_operator_gt_xor)(abs, Builtin::f64(9007199254740992.0)), vec, ADV_UFCS(CopySign)(rounded.__ref(), vec));
			} else {
				#line 442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				{
					#line 443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					return vec;
				}
			}
		}
		return {};
	}
#line 447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::RoundTiesEven(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, IFloatingPoint>()) {
			#line 449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			using TVector = SimdVector<T, Arch>;
			#line 450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			constexpr Builtin::Auto<decltype(Builtin::i32{SimdVector<T,Arch>::Length})> size = Builtin::i32{SimdVector<T,Arch>::Length};
			#line 451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			BufferedVector<T, size> bufIn{}; 
			#line 452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			BufferedVector<T, size> bufOut{}; 
			#line 453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard453{};
				#line 454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(StoreAligned)(vec.__ref(), (__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufIn.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
				#line 455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				{ auto __for_init_455 = System::Range<Builtin::Auto<decltype(size)>, false>({}, size); auto __for_iter_455 = ADV_UFCS(Iterate)(__for_init_455.__ref()); while(__for_iter_455.__ref().MoveNext()) {
				auto&& i = __for_iter_455.__ref().GetCurrent(); {
					#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					ADV_UFCS(_operator_subscript)(bufOut.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) = ADV_UPCS(RoundTiesEven)(ADV_UFCS(_operator_subscript)(bufIn.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i).__ref());
				}}}
				#line 458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return TVector::LoadAligned((__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufOut.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
			}
		} else {
			#line 460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{
				#line 461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return vec;
			}
		}
		return {};
	}
#line 465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::NearbyInt(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TValue = typename TVector::TValue;
		#line 468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(BitOfSign(vec))> sign = BitOfSign(vec); 
		#line 469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(vec ^ sign)> v = vec ^ sign; 
		#line 470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(TVector::Create(FloatConstants<TValue>::TwoToNmb))> t2n = TVector::Create(FloatConstants<TValue>::TwoToNmb); 
		#line 471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_add_mod)(v, t2n))> d0 = ADV_UFCS(_operator_add_mod)(v, t2n); 
		#line 472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_sub_mod)(d0, t2n))> d = ADV_UFCS(_operator_sub_mod)(d0, t2n); 
		#line 473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return sign ^ TVector::ConditionalSelect(ADV_UFCS(_operator_lt_xor)(v, t2n), d, v);
	}
#line 476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Sin(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		static_assert(Builtin::TypeIs<T, IFloatingPoint>(), "Sin only works on floating point types");
		#line 478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Abs)(vec.__ref()))> x = ADV_UPCS(Abs)(vec.__ref()); 
		#line 480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		Builtin::Auto<decltype(TVector::Create(ADV_USPCS(NaN, T)()))> xr = TVector::Create(ADV_USPCS(NaN, T)()); 
		#line 481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(TrigReduce(x, Builtin::MutableRef(xr)))> n = TrigReduce(x, Builtin::MutableRef(xr)); 
		#line 482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(TVector::ConditionalSelect(ADV_UFCS(_operator_gt_eq_xor)(n, T{Builtin::i32(2)}), TVector::One, TVector::Zero))> tmp = TVector::ConditionalSelect(ADV_UFCS(_operator_gt_eq_xor)(n, T{Builtin::i32(2)}), TVector::One, TVector::Zero); 
		#line 483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(FusedMultiplyAdd)(TVector::Create(T{Builtin::i32(-2)}).__ref(), tmp, n))> swapBit = ADV_UFCS(FusedMultiplyAdd)(TVector::Create(T{Builtin::i32(-2)}).__ref(), tmp, n); 
		#line 484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(BitOfSign(vec) ^ TVector::ConditionalSelect(ADV_UFCS(_operator_ne_eq_xor)(tmp, TVector::Zero), TVector::Create(FloatConstants<T>::SignMask), TVector::Zero))> signBit = BitOfSign(vec) ^ TVector::ConditionalSelect(ADV_UFCS(_operator_ne_eq_xor)(tmp, TVector::Zero), TVector::Create(FloatConstants<T>::SignMask), TVector::Zero); 
		#line 486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(xr, xr))> z = ADV_UFCS(_operator_mul_mod)(xr, xr); 
		#line 487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(SinEval(z, xr))> se = SinEval(z, xr); 
		#line 488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(CosEval(z))> ce = CosEval(z); 
		#line 489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(TVector::ConditionalSelect(ADV_UFCS(_operator_eq_eq_xor)(swapBit, TVector::Zero), se, ce))> z1 = TVector::ConditionalSelect(ADV_UFCS(_operator_eq_eq_xor)(swapBit, TVector::Zero), se, ce); 
		#line 490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return z1 ^ signBit;
	}
#line 493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Cos(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		static_assert(Builtin::TypeIs<T, IFloatingPoint>(), "Cos only works on floating point types");
		#line 495 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Abs)(vec.__ref()))> x = ADV_UPCS(Abs)(vec.__ref()); 
		#line 497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		Builtin::Auto<decltype(TVector::Create(ADV_USPCS(NaN, T)()))> xr = TVector::Create(ADV_USPCS(NaN, T)()); 
		#line 498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(TrigReduce(x, Builtin::MutableRef(xr)))> n = TrigReduce(x, Builtin::MutableRef(xr)); 
		#line 499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(TVector::ConditionalSelect(ADV_UFCS(_operator_gt_eq_xor)(n, T{Builtin::i32(2)}), TVector::One, TVector::Zero))> tmp = TVector::ConditionalSelect(ADV_UFCS(_operator_gt_eq_xor)(n, T{Builtin::i32(2)}), TVector::One, TVector::Zero); 
		#line 500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(FusedMultiplyAdd)(TVector::Create(T{Builtin::i32(-2)}).__ref(), tmp, n))> swapBit = ADV_UFCS(FusedMultiplyAdd)(TVector::Create(T{Builtin::i32(-2)}).__ref(), tmp, n); 
		#line 501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(TVector::ConditionalSelect(ADV_UFCS(_operator_ne_eq_xor)((swapBit ^ tmp), TVector::Zero), TVector::Create(FloatConstants<T>::SignMask), TVector::Zero))> signBit = TVector::ConditionalSelect(ADV_UFCS(_operator_ne_eq_xor)((swapBit ^ tmp), TVector::Zero), TVector::Create(FloatConstants<T>::SignMask), TVector::Zero); 
		#line 503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(xr, xr))> z = ADV_UFCS(_operator_mul_mod)(xr, xr); 
		#line 504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(SinEval(z, xr))> se = SinEval(z, xr); 
		#line 505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(CosEval(z))> ce = CosEval(z); 
		#line 506 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(TVector::ConditionalSelect(ADV_UFCS(_operator_ne_eq_xor)(swapBit, TVector::Zero), se, ce))> z1 = TVector::ConditionalSelect(ADV_UFCS(_operator_ne_eq_xor)(swapBit, TVector::Zero), se, ce); 
		#line 507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return z1 ^ signBit;
	}
#line 510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::SinCos(const SimdVector<T, Arch>& vec)  -> const std::tuple<SimdVector<T, Arch>, SimdVector<T, Arch>>
	{
		#line 511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		static_assert(Builtin::TypeIs<T, IFloatingPoint>(), "SinCos only works on floating point types");
		#line 512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Abs)(vec.__ref()))> x = ADV_UPCS(Abs)(vec.__ref()); 
		#line 514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		Builtin::Auto<decltype(TVector::Create(ADV_USPCS(NaN, T)()))> xr = TVector::Create(ADV_USPCS(NaN, T)()); 
		#line 515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(TrigReduce(x, Builtin::MutableRef(xr)))> n = TrigReduce(x, Builtin::MutableRef(xr)); 
		#line 516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(TVector::ConditionalSelect(ADV_UFCS(_operator_gt_eq_xor)(n, T{Builtin::i32(2)}), TVector::One, TVector::Zero))> tmp = TVector::ConditionalSelect(ADV_UFCS(_operator_gt_eq_xor)(n, T{Builtin::i32(2)}), TVector::One, TVector::Zero); 
		#line 517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(FusedMultiplyAdd)(TVector::Create(T{Builtin::i32(-2)}).__ref(), tmp, n))> swapBit = ADV_UFCS(FusedMultiplyAdd)(TVector::Create(T{Builtin::i32(-2)}).__ref(), tmp, n); 
		#line 518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(BitOfSign(vec) ^ TVector::ConditionalSelect(ADV_UFCS(_operator_ne_eq_xor)(tmp, TVector::Zero), TVector::Create(FloatConstants<T>::SignMask), TVector::Zero))> signBitSin = BitOfSign(vec) ^ TVector::ConditionalSelect(ADV_UFCS(_operator_ne_eq_xor)(tmp, TVector::Zero), TVector::Create(FloatConstants<T>::SignMask), TVector::Zero); 
		#line 520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(TVector::ConditionalSelect(ADV_UFCS(_operator_ne_eq_xor)((swapBit ^ tmp), TVector::Zero), TVector::Create(FloatConstants<T>::SignMask), TVector::Zero))> signBitCos = TVector::ConditionalSelect(ADV_UFCS(_operator_ne_eq_xor)((swapBit ^ tmp), TVector::Zero), TVector::Create(FloatConstants<T>::SignMask), TVector::Zero); 
		#line 522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(xr, xr))> z = ADV_UFCS(_operator_mul_mod)(xr, xr); 
		#line 523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(SinEval(z, xr))> se = SinEval(z, xr); 
		#line 524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(CosEval(z))> ce = CosEval(z); 
		#line 525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(TVector::ConditionalSelect(ADV_UFCS(_operator_eq_eq_xor)(swapBit, TVector::Zero), se, ce))> z1Sin = TVector::ConditionalSelect(ADV_UFCS(_operator_eq_eq_xor)(swapBit, TVector::Zero), se, ce); 
		#line 526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(TVector::ConditionalSelect(ADV_UFCS(_operator_ne_eq_xor)(swapBit, TVector::Zero), se, ce))> z1Cos = TVector::ConditionalSelect(ADV_UFCS(_operator_ne_eq_xor)(swapBit, TVector::Zero), se, ce); 
		#line 527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return std::make_tuple(z1Sin ^ signBitSin, z1Cos ^ signBitCos);
	}
#line 530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Tan(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		static_assert(Builtin::TypeIs<T, IFloatingPoint>(), "Tan only works on floating point types");
		#line 532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Abs)(vec.__ref()))> x = ADV_UPCS(Abs)(vec.__ref()); 
		#line 534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		Builtin::Auto<decltype(TVector::Create(ADV_USPCS(NaN, T)()))> xr = TVector::Create(ADV_USPCS(NaN, T)()); 
		#line 535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(TrigReduce(x, Builtin::MutableRef(xr)))> n = TrigReduce(x, Builtin::MutableRef(xr)); 
		#line 536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(TVector::ConditionalSelect(ADV_UFCS(_operator_gt_eq_xor)(n, T{Builtin::i32(2)}), TVector::One, TVector::Zero))> tmp = TVector::ConditionalSelect(ADV_UFCS(_operator_gt_eq_xor)(n, T{Builtin::i32(2)}), TVector::One, TVector::Zero); 
		#line 537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(FusedMultiplyAdd)(TVector::Create(T{Builtin::i32(-2)}).__ref(), tmp, n))> swapBit = ADV_UFCS(FusedMultiplyAdd)(TVector::Create(T{Builtin::i32(-2)}).__ref(), tmp, n); 
		#line 538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_eq_eq_xor)(swapBit, TVector::Zero))> test1 = ADV_UFCS(_operator_eq_eq_xor)(swapBit, TVector::Zero); 
		#line 539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(TanEval(xr, test1))> y = TanEval(xr, test1); 
		#line 540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return y ^ BitOfSign(vec);
	}
#line 543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Asin(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		static_assert(Builtin::TypeIs<T, IFloatingPoint>(), "Asin only works on floating point types");
		#line 545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		Builtin::Auto<decltype(ADV_UPCS(Abs)(vec.__ref()))> x = ADV_UPCS(Abs)(vec.__ref()); 
		#line 547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, Builtin::f32>()) {
			#line 548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(BitOfSign(vec))> sign = BitOfSign(vec); 
			#line 549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_gt_xor)(x, T{Builtin::f64(0.5)}))> largerHalf = ADV_UFCS(_operator_gt_xor)(x, T{Builtin::f64(0.5)}); 
			#line 550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(TVector::ConditionalSelect(largerHalf, ADV_UFCS(_operator_mul_mod)(TVector::Create(T{Builtin::f64(0.5)}), (ADV_UFCS(_operator_sub_mod)(TVector::One, x))), ADV_UFCS(_operator_mul_mod)(x, x)))> z = TVector::ConditionalSelect(largerHalf, ADV_UFCS(_operator_mul_mod)(TVector::Create(T{Builtin::f64(0.5)}), (ADV_UFCS(_operator_sub_mod)(TVector::One, x))), ADV_UFCS(_operator_mul_mod)(x, x)); 
			#line 551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			x = TVector::ConditionalSelect(largerHalf, ADV_UPCS(Sqrt)(z.__ref()), x);
			#line 552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(Horner<TVector, Builtin::u32(0x3e2aaae4U), Builtin::u32(0x3d9980f6U), Builtin::u32(0x3d3a3ec7U), Builtin::u32(0x3cc617e3U), Builtin::u32(0x3d2cb352U)>(z))> z1 = Horner<TVector, Builtin::u32(0x3e2aaae4U), Builtin::u32(0x3d9980f6U), Builtin::u32(0x3d3a3ec7U), Builtin::u32(0x3cc617e3U), Builtin::u32(0x3d2cb352U)>(z); 
			#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			z1 = ADV_UFCS(FusedMultiplyAdd)(z1.__ref(), z * x, x);
			#line 554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			z = TVector::ConditionalSelect(largerHalf, ADV_UFCS(_operator_sub_mod)(TVector::Create(FloatConstants<T>::PiO2), (ADV_UFCS(_operator_add_mod)(z1, z1))), z1);
			#line 555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return z ^ sign;
		} else {
			#line 556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{
				#line 557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_lt_xor)(x, FloatConstants<f64>::SqrtEps))> smallCond = ADV_UFCS(_operator_lt_xor)(x, FloatConstants<f64>::SqrtEps); 
				#line 558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(TVector::Create(ADV_USFCS((Builtin::f64), FromBits)(Builtin::u64(0x3fe4000000000000ULL))))> ct1 = TVector::Create(ADV_USFCS((Builtin::f64), FromBits)(Builtin::u64(0x3fe4000000000000ULL))); 
				#line 559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_sub_mod)(TVector::One, x))> zz1 = ADV_UFCS(_operator_sub_mod)(TVector::One, x); 
				#line 560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(zz1, Horner<TVector, Builtin::u64(0x403c896240f3081dULL), Builtin::u64(0xc03991aaac01ab68ULL), Builtin::u64(0x401bdff5baf33e6aULL), Builtin::u64(0xbfe2079259f9290fULL), Builtin::u64(0x3f684fc3988e9f08ULL)>(zz1)) / Horner1<TVector, Builtin::u64(0x40756709b0b644beULL), Builtin::u64(0xc077fe08959063eeULL), Builtin::u64(0x40626219af6a7f42ULL), Builtin::u64(0xc035f2a2b6bf5d8cULL)>(zz1))> vp = ADV_UFCS(_operator_mul_mod)(zz1, Horner<TVector, Builtin::u64(0x403c896240f3081dULL), Builtin::u64(0xc03991aaac01ab68ULL), Builtin::u64(0x401bdff5baf33e6aULL), Builtin::u64(0xbfe2079259f9290fULL), Builtin::u64(0x3f684fc3988e9f08ULL)>(zz1)) / Horner1<TVector, Builtin::u64(0x40756709b0b644beULL), Builtin::u64(0xc077fe08959063eeULL), Builtin::u64(0x40626219af6a7f42ULL), Builtin::u64(0xc035f2a2b6bf5d8cULL)>(zz1); 
				#line 563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				zz1 = ADV_UPCS(Sqrt)((ADV_UFCS(_operator_add_mod)(zz1, zz1)).__ref());
				#line 564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_sub_mod)(FloatConstants<f64>::PiO4, zz1))> z = ADV_UFCS(_operator_sub_mod)(FloatConstants<f64>::PiO4, zz1); 
				#line 565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				zz1 = ADV_UFCS(FusedMultiplySub)(zz1.__ref(), vp, FloatConstants<f64>::PiO2_Lo);
				#line 566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				z = ADV_UFCS(_operator_sub_mod)(z, zz1);
				#line 567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				zz1 = ADV_UFCS(_operator_add_mod)(z, FloatConstants<f64>::PiO4);
				#line 568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				Builtin::Auto<decltype(ADV_UFCS(FusedMultiplyAdd)(x.__ref(), z, x))> zz2 = ADV_UFCS(FusedMultiplyAdd)(x.__ref(), z, x); 
				#line 569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return TVector::ConditionalSelect(ADV_UFCS(_operator_gt_xor)(x, TVector::One), TVector::Create(ADV_USPCS(NaN, Builtin::f64)()), TVector::ConditionalSelect(smallCond, x, TVector::ConditionalSelect(ADV_UFCS(_operator_gt_xor)(x, ct1), zz1, zz2)) ^ BitOfSign(vec));
			}
		}
		return {};
	}
#line 575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Acos(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		static_assert(Builtin::TypeIs<T, IFloatingPoint>(), "Acos only works on floating point types");
		#line 577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		Builtin::Auto<decltype(ADV_UPCS(Abs)(vec.__ref()))> vx = ADV_UPCS(Abs)(vec.__ref()); 
		#line 579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		Builtin::Auto<decltype(vx)> x = vx; 
		#line 580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_gt_xor)(x, T{Builtin::f64(0.5)}))> largerHalf = ADV_UFCS(_operator_gt_xor)(x, T{Builtin::f64(0.5)}); 
		#line 581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		x = TVector::ConditionalSelect(largerHalf, ADV_UPCS(Sqrt)((ADV_UFCS(FusedMultiplyAdd)(TVector::Create(T{Builtin::f64(-0.5)}).__ref(), x, TVector::Create(T{Builtin::f64(0.5)}))).__ref()), vec);
		#line 583 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		x = ADV_UPCS(Asin)(x.__ref());
		#line 584 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		x = TVector::ConditionalSelect(largerHalf, ADV_UFCS(_operator_add_mod)(x, x), x);
		#line 585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		x = TVector::ConditionalSelect(ADV_UFCS(_operator_lt_xor)(vec, TVector::Create(T{Builtin::f64(-0.5)})), ADV_UFCS(_operator_sub_mod)(TVector::Create(ADV_USPCS(Pi, T)()), x), x);
		#line 586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return TVector::ConditionalSelect(largerHalf, x, ADV_UFCS(_operator_sub_mod)(TVector::Create(FloatConstants<T>::PiO2), x));
	}
#line 590 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Atan(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 591 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		static_assert(Builtin::TypeIs<T, IFloatingPoint>(), "Atan only works on floating point types");
		#line 592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		Builtin::Auto<decltype(ADV_UPCS(Abs)(vec.__ref()))> x = ADV_UPCS(Abs)(vec.__ref()); 
		#line 594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Reciprocal)(x.__ref()))> xr = ADV_UPCS(Reciprocal)(x.__ref()); 
		#line 595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		x = AtanEval(x, xr);
		#line 596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return x ^ BitOfSign(vec);
	}
#line 599 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::SignNotZero(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 601 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, Builtin::f32>()) {
			#line 602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return TVector::One | (vec & FloatConstants<f32>::SignMask);
		} else {
			#line 603 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if constexpr (Builtin::TypeIs<T, Builtin::f64>()) {
				#line 604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return TVector::One | (vec & FloatConstants<f64>::SignMask);
			} else {
				#line 605 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				{
					#line 606 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					return TVector::One | (vec >> (Builtin::i32(8) * Builtin::usize(sizeof (T)) - Builtin::i32(1)));
				}
			}
		}
		return {};
	}
#line 610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Atan2(const SimdVector<T, Arch>& x, const SimdVector<T, Arch>& y)  -> const SimdVector<T, Arch>
	{
		#line 611 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		static_assert(Builtin::TypeIs<T, IFloatingPoint>(), "Atan2 only works on floating point types");
		#line 612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 613 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Abs)((x / y).__ref()))> q = ADV_UPCS(Abs)((x / y).__ref()); 
		#line 614 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Reciprocal)(q.__ref()))> qp = ADV_UPCS(Reciprocal)(q.__ref()); 
		#line 615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(AtanEval(q, qp))> z = AtanEval(q, qp); 
		#line 616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return TVector::ConditionalSelect(ADV_UFCS(_operator_gt_xor)(y, TVector::Zero), z, ADV_UFCS(_operator_sub_mod)(TVector::Create(ADV_USPCS(Pi, T)()), z)) * SignNotZero(x);
	}
#line 619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Sinh(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		static_assert(Builtin::TypeIs<T, IFloatingPoint>(), "Sinh only works on floating point types");
		#line 621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(TVector::Create(T{Builtin::f64(0.5)}))> half = TVector::Create(T{Builtin::f64(0.5)}); 
		#line 623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Abs)(vec.__ref()))> x = ADV_UPCS(Abs)(vec.__ref()); 
		#line 624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_lt_xor)(x, TVector::One))> lt1 = ADV_UFCS(_operator_lt_xor)(x, TVector::One); 
		#line 625 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(BitOfSign(vec))> bts = BitOfSign(vec); 
		#line 626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		Builtin::Auto<decltype(TVector::Zero)> z = TVector::Zero; 
		#line 627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if (ADV_UPCS(Any)(lt1.__ref())) {
			#line 628 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(x, x))> sqr = ADV_UFCS(_operator_mul_mod)(x, x); 
			#line 629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if constexpr (Builtin::TypeIs<T, Builtin::f32>()) {
				#line 630 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				z = ADV_UFCS(_operator_mul_mod)(x, Horner<TVector, Builtin::u32(0x3f800000U), Builtin::u32(0x3e2aaaccU), Builtin::u32(0x3c087bbeU), Builtin::u32(0x39559e2fU)>(sqr));
			} else {
				#line 631 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				if constexpr (Builtin::TypeIs<T, Builtin::f64>()) {
					#line 632 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					z = ADV_UFCS(FusedMultiplyAdd)(x.__ref(), ADV_UFCS(_operator_mul_mod)((Horner<TVector, Builtin::u64(0xc115782bdbf6ab05ULL), Builtin::u64(0xc0c694b8c71d6182ULL), Builtin::u64(0xc064773a398ff4feULL), Builtin::u64(0xbfe9435fe8bb3cd6ULL)>(sqr) / Horner1<TVector, Builtin::u64(0xc1401a20e4f90044ULL), Builtin::u64(0x40e1a7ba7ed72245ULL), Builtin::u64(0xc0715b6096e96484ULL)>(sqr)), sqr), x);
				}
			}
			#line 636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if (ADV_UPCS(All)(lt1.__ref())) {
				#line 637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return z ^ bts;
			}
		}
		#line 640 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_gt_xor)(x, (FloatConstants<T>::MaxLog - FloatConstants<T>::Log2)))> test1 = ADV_UFCS(_operator_gt_xor)(x, (FloatConstants<T>::MaxLog - FloatConstants<T>::Log2)); 
		#line 641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(TVector::ConditionalSelect(test1, half, TVector::One))> fac = TVector::ConditionalSelect(test1, half, TVector::One); 
		#line 642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Exp)((ADV_UFCS(_operator_mul_mod)(x, fac)).__ref()))> tmp = ADV_UPCS(Exp)((ADV_UFCS(_operator_mul_mod)(x, fac)).__ref()); 
		#line 643 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(half, tmp))> tmp1 = ADV_UFCS(_operator_mul_mod)(half, tmp); 
		#line 644 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(TVector::ConditionalSelect(test1, ADV_UFCS(_operator_mul_mod)(tmp1, tmp), ADV_UFCS(_operator_sub_mod)(tmp1, half / tmp)))> r = TVector::ConditionalSelect(test1, ADV_UFCS(_operator_mul_mod)(tmp1, tmp), ADV_UFCS(_operator_sub_mod)(tmp1, half / tmp)); 
		#line 645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return TVector::ConditionalSelect(lt1, z, r) ^ bts;
	}
#line 648 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Cosh(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		static_assert(Builtin::TypeIs<T, IFloatingPoint>(), "Cosh only works on floating point types");
		#line 650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Abs)(vec.__ref()))> x = ADV_UPCS(Abs)(vec.__ref()); 
		#line 652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_gt_xor)(x, (FloatConstants<T>::MaxLog - FloatConstants<T>::Log2)))> test1 = ADV_UFCS(_operator_gt_xor)(x, (FloatConstants<T>::MaxLog - FloatConstants<T>::Log2)); 
		#line 653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(TVector::ConditionalSelect(test1, TVector::Create(T{Builtin::f64(0.5)}), TVector::One))> fac = TVector::ConditionalSelect(test1, TVector::Create(T{Builtin::f64(0.5)}), TVector::One); 
		#line 654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Exp)((ADV_UFCS(_operator_mul_mod)(x, fac)).__ref()))> tmp = ADV_UPCS(Exp)((ADV_UFCS(_operator_mul_mod)(x, fac)).__ref()); 
		#line 655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(TVector::Create(T{Builtin::f64(0.5)}), tmp))> tmp1 = ADV_UFCS(_operator_mul_mod)(TVector::Create(T{Builtin::f64(0.5)}), tmp); 
		#line 656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return TVector::ConditionalSelect(test1, ADV_UFCS(_operator_mul_mod)(tmp1, tmp), ADV_UFCS(Midpoint)(tmp.__ref(), ADV_UPCS(Reciprocal)(tmp.__ref())));
	}
#line 659 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Tanh(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		static_assert(Builtin::TypeIs<T, IFloatingPoint>(), "Tanh only works on floating point types");
		#line 661 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(TVector::One)> one = TVector::One; 
		#line 663 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Abs)(vec.__ref()))> x = ADV_UPCS(Abs)(vec.__ref()); 
		#line 664 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_lt_xor)(x, (TVector::Create(Builtin::i32(5)) / TVector::Create(Builtin::i32(8)))))> test1 = ADV_UFCS(_operator_lt_xor)(x, (TVector::Create(Builtin::i32(5)) / TVector::Create(Builtin::i32(8)))); 
		#line 665 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(BitOfSign(vec))> bts = BitOfSign(vec); 
		#line 666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		Builtin::Auto<decltype(one)> z = one; 
		#line 667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if (ADV_UPCS(Any)(test1.__ref())) {
			#line 668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(x, x))> sqr = ADV_UFCS(_operator_mul_mod)(x, x); 
			#line 669 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if constexpr (Builtin::TypeIs<T, Builtin::f32>()) {
				#line 670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				z = ADV_UFCS(FusedMultiplyAdd)((ADV_UFCS(_operator_mul_mod)(Horner<TVector, Builtin::u32(0xbeaaaa99U), Builtin::u32(0x3e088393U), Builtin::u32(0xbd5c1e2dU), Builtin::u32(0x3ca9134eU), Builtin::u32(0xbbbaf0eaU)>(sqr), sqr)).__ref(), x, x);
			} else {
				#line 672 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				if constexpr (Builtin::TypeIs<T, Builtin::f64>()) {
					#line 673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					z = ADV_UFCS(FusedMultiplyAdd)((ADV_UFCS(_operator_mul_mod)(sqr, Horner<TVector, Builtin::u64(0xc0993ac030580563ULL), Builtin::u64(0xc058d26a0e26682dULL), Builtin::u64(0xbfeedc5baafd6f4bULL)>(sqr)) / Horner1<TVector, Builtin::u64(0x40b2ec102442040cULL), Builtin::u64(0x40a176fa0e5535faULL), Builtin::u64(0x405c33f28a581B86ULL)>(sqr)).__ref(), x, x);
				}
			}
			#line 678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if (ADV_UPCS(All)(test1.__ref())) {
				#line 679 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return z ^ bts;
			}
		}
		#line 682 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(FusedMultiplyAdd)(TVector::Create(Builtin::i32(-2)).__ref(), ADV_UPCS(Reciprocal)((ADV_UFCS(_operator_add_mod)(ADV_UPCS(Exp)((ADV_UFCS(_operator_add_mod)(x, x)).__ref()), one)).__ref()), one))> r = ADV_UFCS(FusedMultiplyAdd)(TVector::Create(Builtin::i32(-2)).__ref(), ADV_UPCS(Reciprocal)((ADV_UFCS(_operator_add_mod)(ADV_UPCS(Exp)((ADV_UFCS(_operator_add_mod)(x, x)).__ref()), one)).__ref()), one); 
		#line 683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return TVector::ConditionalSelect(test1, z, r) ^ bts;
	}
#line 686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Asinh(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 687 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		static_assert(Builtin::TypeIs<T, IFloatingPoint>(), "Asinh only works on floating point types");
		#line 688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Abs)(vec.__ref()))> x = ADV_UPCS(Abs)(vec.__ref()); 
		#line 690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, Builtin::f32>()) {
			#line 691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_lt_xor)(x, T{Builtin::f64(0.5)}))> lhalf = ADV_UFCS(_operator_lt_xor)(x, T{Builtin::f64(0.5)}); 
			#line 692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(x, x))> xx = ADV_UFCS(_operator_mul_mod)(x, x); 
			#line 693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(BitOfSign(vec))> bts = BitOfSign(vec); 
			#line 694 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(TVector::Zero)> z = TVector::Zero; 
			#line 695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if (ADV_UPCS(Any)(lhalf.__ref())) {
				#line 696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				z = ADV_UFCS(_operator_mul_mod)(x, Horner<TVector, Builtin::u32(0x3f800000U), Builtin::u32(0xbe2aa9adU), Builtin::u32(0x3d9949b1U), Builtin::u32(0xbd2ee581U), Builtin::u32(0x3ca4d6e6U)>(xx));
				#line 697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				if (ADV_UPCS(All)(lhalf.__ref())) {
					#line 698 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					return z ^ bts;
				}
			}
			#line 701 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(TVector::ConditionalSelect(ADV_UFCS(_operator_gt_xor)(x, FloatConstants<f32>::OneOSqrtEps), x, ADV_UFCS(Midpoint)(x.__ref(), ADV_UFCS(Hypot)(TVector::One.__ref(), x))))> tmp = TVector::ConditionalSelect(ADV_UFCS(_operator_gt_xor)(x, FloatConstants<f32>::OneOSqrtEps), x, ADV_UFCS(Midpoint)(x.__ref(), ADV_UFCS(Hypot)(TVector::One.__ref(), x))); 
			#line 702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return TVector::ConditionalSelect(ADV_UPCS(IsNaN)(vec.__ref()), TVector::Create(ADV_USPCS(NaN, Builtin::f32)()), TVector::ConditionalSelect(lhalf, z, ADV_UFCS(_operator_add_mod)(ADV_UPCS(Ln)(tmp.__ref()), FloatConstants<f32>::Log2)) ^ bts);
		} else {
			#line 704 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{
				#line 705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_gt_xor)(x, FloatConstants<f64>::OneOSqrtEps))> test1 = ADV_UFCS(_operator_gt_xor)(x, FloatConstants<f64>::OneOSqrtEps); 
				#line 706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				Builtin::Auto<decltype(TVector::ConditionalSelect(test1, ADV_UFCS(_operator_sub_mod)(x, TVector::One), ADV_UFCS(_operator_add_mod)(x, ADV_UFCS(_operator_mul_mod)(x, x) / (ADV_UFCS(_operator_add_mod)(TVector::One, ADV_UFCS(Hypot)(TVector::One.__ref(), x))))))> z = TVector::ConditionalSelect(test1, ADV_UFCS(_operator_sub_mod)(x, TVector::One), ADV_UFCS(_operator_add_mod)(x, ADV_UFCS(_operator_mul_mod)(x, x) / (ADV_UFCS(_operator_add_mod)(TVector::One, ADV_UFCS(Hypot)(TVector::One.__ref(), x))))); 
				#line 707 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				z = TVector::ConditionalSelect(ADV_UPCS(IsInfinity)(x.__ref()), x, z);
				#line 708 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UPCS(LnP1)(z.__ref()))> l1p = ADV_UPCS(LnP1)(z.__ref()); 
				#line 709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				z = TVector::ConditionalSelect(test1, ADV_UFCS(_operator_add_mod)(l1p, FloatConstants<f64>::Log2), l1p);
				#line 710 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return BitOfSign(vec) ^ z;
			}
		}
		return {};
	}
#line 714 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Acosh(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		static_assert(Builtin::TypeIs<T, IFloatingPoint>(), "Acosh only works on floating point types");
		#line 716 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 717 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_sub_mod)(vec, TVector::One))> x = ADV_UFCS(_operator_sub_mod)(vec, TVector::One); 
		#line 718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_gt_xor)(x, FloatConstants<T>::OneOTwoEps))> test1 = ADV_UFCS(_operator_gt_xor)(x, FloatConstants<T>::OneOTwoEps); 
		#line 719 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(TVector::ConditionalSelect(test1, vec, ADV_UFCS(_operator_add_mod)(x, ADV_UPCS(Sqrt)((ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_add_mod)(x, x), ADV_UFCS(_operator_mul_mod)(x, x))).__ref()))))> z = TVector::ConditionalSelect(test1, vec, ADV_UFCS(_operator_add_mod)(x, ADV_UPCS(Sqrt)((ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_add_mod)(x, x), ADV_UFCS(_operator_mul_mod)(x, x))).__ref()))); 
		#line 720 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UPCS(LnP1)(z.__ref()))> l1p = ADV_UPCS(LnP1)(z.__ref()); 
		#line 721 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return TVector::ConditionalSelect(test1, ADV_UFCS(_operator_add_mod)(l1p, FloatConstants<T>::Log2), l1p);
	}
#line 724 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Atanh(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 725 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		static_assert(Builtin::TypeIs<T, IFloatingPoint>(), "Atanh only works on floating point types");
		#line 726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 727 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Abs)(vec.__ref()))> x = ADV_UPCS(Abs)(vec.__ref()); 
		#line 728 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_add_mod)(x, x))> t = ADV_UFCS(_operator_add_mod)(x, x); 
		#line 729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_sub_mod)(TVector::One, x))> z = ADV_UFCS(_operator_sub_mod)(TVector::One, x); 
		#line 730 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_lt_xor)(x, T{Builtin::f64(0.5)}))> test1 = ADV_UFCS(_operator_lt_xor)(x, T{Builtin::f64(0.5)}); 
		#line 731 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(TVector::ConditionalSelect(test1, x, t) / z)> tmp = TVector::ConditionalSelect(test1, x, t) / z; 
		#line 732 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return BitOfSign(vec) ^ (ADV_UFCS(_operator_mul_mod)(TVector::Create(T{Builtin::f64(0.5)}), ADV_UPCS(LnP1)((TVector::ConditionalSelect(test1, ADV_UFCS(FusedMultiplyAdd)(t.__ref(), tmp, t), tmp)).__ref())));
	}
#line 736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::IsNaN(const SimdVector<T, Arch>& x)  -> const SimdMask<T, Arch>
	{
		#line 737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return ADV_UFCS(_operator_ne_eq_xor)(x, x);
	}
#line 740 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::IsInfinity(const SimdVector<T, Arch>& x)  -> const SimdMask<T, Arch>
	{
		#line 741 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, IFloatingPoint>()) {
			#line 742 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return (ADV_UFCS(_operator_eq_eq_xor)(x, ADV_USPCS(PositiveInfinity, T)())) | (ADV_UFCS(_operator_eq_eq_xor)(x, ADV_USPCS(NegativeInfinity, T)()));
		}
		#line 744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return SimdMask<T,Arch>::False;
	}
#line 747 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::IsFinite(const SimdVector<T, Arch>& x)  -> const SimdMask<T, Arch>
	{
		#line 748 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, IFloatingPoint>()) {
			#line 749 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return ADV_UFCS(_operator_eq_eq_xor)((ADV_UFCS(_operator_sub_mod)(x, x)), ADV_USPCS(Zero, T)());
		}
		#line 751 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return SimdMask<T,Arch>::True;
	}
#line 754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::IsInteger(const SimdVector<T, Arch>& x)  -> const SimdMask<T, Arch>
	{
		#line 755 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, IFloatingPoint>()) {
			#line 756 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return ADV_UFCS(_operator_eq_eq_xor)(x, ADV_UPCS(Truncate)(x.__ref()));
		}
		#line 758 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return SimdMask<T,Arch>::True;
	}
#line 761 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::IsEvenInteger(const SimdVector<T, Arch>& x)  -> const SimdMask<T, Arch>
	{
		#line 762 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, IFloatingPoint>()) {
			#line 763 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return ADV_UPCS(IsInteger)(x.__ref()) & (ADV_UFCS(_operator_eq_eq_xor)(ADV_UFCS_TEMPLATE(ConvertTo<T>)((ADV_UPCS(Abs)((ADV_UFCS_TEMPLATE(ConvertTo<Builtin::i64>)(x.__ref()) % Builtin::i32(2)).__ref())).__ref()), ADV_USPCS(Zero, T)()));
		} else {
			#line 764 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{
				#line 765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return ADV_UFCS(_operator_eq_eq_xor)((x & ADV_USPCS(One, T)()), T{Builtin::i32(0)});
			}
		}
		return {};
	}
#line 769 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::IsOddInteger(const SimdVector<T, Arch>& x)  -> const SimdMask<T, Arch>
	{
		#line 770 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, IFloatingPoint>()) {
			#line 771 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return ADV_UPCS(IsInteger)(x.__ref()) & (ADV_UFCS(_operator_ne_eq_xor)(ADV_UFCS_TEMPLATE(ConvertTo<T>)((ADV_UPCS(Abs)((ADV_UFCS_TEMPLATE(ConvertTo<FloatInt<T>>)(x.__ref()) % Builtin::i32(2)).__ref())).__ref()), ADV_USPCS(Zero, T)()));
		} else {
			#line 772 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{
				#line 773 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return ADV_UFCS(_operator_ne_eq_xor)((x & ADV_USPCS(One, T)()), T{Builtin::i32(0)});
			}
		}
		return {};
	}
#line 777 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Pow(const SimdVector<T, Arch>& x, const SimdVector<T, Arch>& y)  -> const SimdVector<T, Arch>
	{
		#line 778 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 779 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(TVector::Zero)> zero = TVector::Zero; 
		#line 780 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_lt_xor)(x, zero))> neg = ADV_UFCS(_operator_lt_xor)(x, zero); 
		#line 781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype((ADV_UFCS(_operator_eq_eq_xor)(x, zero)) & (ADV_UFCS(_operator_gt_eq_xor)(y, zero)))> isZeroPosPow = (ADV_UFCS(_operator_eq_eq_xor)(x, zero)) & (ADV_UFCS(_operator_gt_eq_xor)(y, zero)); 
		#line 782 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(TVector::ConditionalSelect(isZeroPosPow, TVector::One, ADV_UPCS(Abs)(x.__ref())))> adj = TVector::ConditionalSelect(isZeroPosPow, TVector::One, ADV_UPCS(Abs)(x.__ref())); 
		#line 783 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		Builtin::Auto<decltype(ADV_UPCS(Exp)((ADV_UFCS(_operator_mul_mod)(y, ADV_UPCS(Ln)(adj.__ref()))).__ref()))> z = ADV_UPCS(Exp)((ADV_UFCS(_operator_mul_mod)(y, ADV_UPCS(Ln)(adj.__ref()))).__ref()); 
		#line 784 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		z = TVector::ConditionalSelect(isZeroPosPow, zero, z);
		#line 785 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		z = TVector::ConditionalSelect(ADV_UPCS(IsOddInteger)(y.__ref()) & neg, -z, z);
		#line 786 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(neg & (ADV_UFCS(_operator_eq_eq_xor)((ADV_UPCS(IsInteger)(y.__ref()) | ADV_UPCS(IsInfinity)(y.__ref())), SimdMask<T,Arch>::False)))> invalid = neg & (ADV_UFCS(_operator_eq_eq_xor)((ADV_UPCS(IsInteger)(y.__ref()) | ADV_UPCS(IsInfinity)(y.__ref())), SimdMask<T,Arch>::False)); 
		#line 787 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return TVector::ConditionalSelect(invalid, TVector::Create(ADV_USPCS(NaN, T)()), z);
	}
#line 790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::IPow(const SimdVector<T, Arch>& x, Builtin::i32 exp)  -> const SimdVector<T, Arch>
	{
		#line 791 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 792 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		Builtin::Auto<decltype(x)> a = x; 
		#line 793 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		Builtin::Auto<decltype(exp)> b = exp; 
		#line 794 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype((b <=> Builtin::i32(0)) < 0)> recip = (b <=> Builtin::i32(0)) < 0; 
		#line 795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		b = ADV_UPCS(Abs)(b.__ref());
		#line 796 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		Builtin::Auto<decltype(TVector::One)> result = TVector::One; 
		#line 797 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		for (;;) 
		{
			#line 798 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if (b & Builtin::i32(1)) {
				#line 799 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				result *= a;
			}
			#line 801 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(_operator_bsl_eq)(b, Builtin::i32(2));
			#line 802 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if (b == Builtin::i32(0)) {
				#line 803 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				break;
			}
			#line 805 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			a *= a;
		}
		#line 807 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, IFloatingPoint>()) {
			#line 808 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return recip ? ADV_UPCS(Reciprocal)(result.__ref()) : result;
		} else {
			#line 809 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{
				#line 810 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				if (recip) {
					#line 811 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					Builtin::Throw(Builtin::InvalidArgumentException{});
				}
				#line 812 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return result;
			}
		}
		return {};
	}
#line 816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::WrappingIPow(const SimdVector<T, Arch>& x, Builtin::i32 exp)  -> const SimdVector<T, Arch>
	{
		#line 817 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 818 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		Builtin::Auto<decltype(x)> a = x; 
		#line 819 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		Builtin::Auto<decltype(exp)> b = exp; 
		#line 820 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype((b <=> Builtin::i32(0)) < 0)> recip = (b <=> Builtin::i32(0)) < 0; 
		#line 821 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		Builtin::Auto<decltype(TVector::One)> result = TVector::One; 
		#line 822 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		for (;;) 
		{
			#line 823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if (b & Builtin::i32(1)) {
				#line 824 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_mul_mod_eq)(result, a);
			}
			#line 826 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(_operator_bsl_eq)(b, Builtin::i32(2));
			#line 827 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if (b == Builtin::i32(0)) {
				#line 828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				break;
			}
			#line 830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(_operator_mul_mod_eq)(a, a);
		}
		#line 832 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return recip ? ADV_UPCS(Reciprocal)(result.__ref()) : result;
	}
#line 835 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::StrictIPow(const SimdVector<T, Arch>& x, Builtin::i32 exp)  -> const SimdVector<T, Arch>
	{
		#line 836 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 837 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		Builtin::Auto<decltype(x)> a = x; 
		#line 838 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		Builtin::Auto<decltype(exp)> b = exp; 
		#line 839 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype((b <=> Builtin::i32(0)) < 0)> recip = (b <=> Builtin::i32(0)) < 0; 
		#line 840 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		Builtin::Auto<decltype(TVector::One)> result = TVector::One; 
		#line 841 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		for (;;) 
		{
			#line 842 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if (b & Builtin::i32(1)) {
				#line 843 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_mul_mod_eq)(result, a);
			}
			#line 845 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(_operator_bsl_eq)(b, Builtin::i32(2));
			#line 846 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if (b == Builtin::i32(0)) {
				#line 847 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				break;
			}
			#line 849 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(_operator_mul_mod_eq)(a, a);
		}
		#line 851 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return recip ? ADV_UPCS(Reciprocal)(result.__ref()) : result;
	}
#line 854 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Hypot(const SimdVector<T, Arch>& x, const SimdVector<T, Arch>& y)  -> const SimdVector<T, Arch>
	{
		#line 855 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		static_assert(Builtin::TypeIs<T, IFloatingPoint>(), "Hypot is only defined for floating point types");
		#line 856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return ADV_UPCS(Sqrt)(ADV_UFCS(FusedMultiplyAdd)(x.__ref(), x, ADV_UFCS(_operator_mul_mod)(y, y)).__ref());
	}
#line 859 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Frexp(const SimdVector<T, Arch>& vec)  -> const std::tuple<SimdVector<T, Arch>, SimdVector<typename CommonInstructions::FloatInt<T>, Arch>>
	{
		#line 860 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 861 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TNative = typename SimdMask<FloatInt<T>,Arch>::TNative;
		#line 862 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using IVector = SimdVector<FloatInt<T>, Arch>;
		#line 863 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, Builtin::f32>()) {
			#line 864 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(IVector::Create(FloatConstants<T>::Mask1Frexp))> m1f = IVector::Create(FloatConstants<T>::Mask1Frexp); 
			#line 865 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(m1f & ADV_UPCS(AsInt32)(vec.__ref()))> r1 = m1f & ADV_UPCS(AsInt32)(vec.__ref()); 
			#line 866 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(vec & ADV_UPCS(AsFloat32)((ADV_UFCS(_operator_not)(m1f)).__ref()))> x = vec & ADV_UPCS(AsFloat32)((ADV_UFCS(_operator_not)(m1f)).__ref()); 
			#line 867 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(ADV_UFCS(_operator_sub_mod)((r1 >> FloatConstants<T>::MantissaBits), FloatConstants<T>::MaxExponentM1))> exp = ADV_UFCS(_operator_sub_mod)((r1 >> FloatConstants<T>::MantissaBits), FloatConstants<T>::MaxExponentM1); 
			#line 868 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			exp = IVector::ConditionalSelect(Builtin::BitCast<TNative>(ADV_UFCS(ToNative)((ADV_UFCS(_operator_ne_eq_xor)(vec, TVector::Zero)).__ref())), exp, IVector::Zero);
			#line 870 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(TVector::ConditionalSelect(ADV_UFCS(_operator_ne_eq_xor)(vec, TVector::Zero), x | Builtin::BitCast<Builtin::f32>(FloatConstants<T>::Mask2Frexp), TVector::Zero))> mant = TVector::ConditionalSelect(ADV_UFCS(_operator_ne_eq_xor)(vec, TVector::Zero), x | Builtin::BitCast<Builtin::f32>(FloatConstants<T>::Mask2Frexp), TVector::Zero); 
			#line 872 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return std::make_tuple(mant, exp);
		} else {
			#line 873 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if constexpr (Builtin::TypeIs<T, Builtin::f64>()) {
				#line 874 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				using IVector = SimdVector<Builtin::i64, Arch>;
				#line 875 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(IVector::Create(FloatConstants<T>::Mask1Frexp))> m1f = IVector::Create(FloatConstants<T>::Mask1Frexp); 
				#line 876 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(m1f & ADV_UPCS(AsInt64)(vec.__ref()))> r1 = m1f & ADV_UPCS(AsInt64)(vec.__ref()); 
				#line 877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(vec & ADV_UPCS(AsFloat64)((ADV_UFCS(_operator_not)(m1f)).__ref()))> x = vec & ADV_UPCS(AsFloat64)((ADV_UFCS(_operator_not)(m1f)).__ref()); 
				#line 878 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_sub_mod)((r1 >> FloatConstants<T>::MantissaBits), FloatConstants<T>::MaxExponentM1))> exp = ADV_UFCS(_operator_sub_mod)((r1 >> FloatConstants<T>::MantissaBits), FloatConstants<T>::MaxExponentM1); 
				#line 879 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				exp = IVector::ConditionalSelect(Builtin::BitCast<TNative>(ADV_UFCS(ToNative)((ADV_UFCS(_operator_ne_eq_xor)(vec, TVector::Zero)).__ref())), exp, IVector::Zero);
				#line 881 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(TVector::ConditionalSelect(ADV_UFCS(_operator_ne_eq_xor)(vec, TVector::Zero), x | Builtin::BitCast<Builtin::f64>(FloatConstants<T>::Mask2Frexp), TVector::Zero))> mant = TVector::ConditionalSelect(ADV_UFCS(_operator_ne_eq_xor)(vec, TVector::Zero), x | Builtin::BitCast<Builtin::f64>(FloatConstants<T>::Mask2Frexp), TVector::Zero); 
				#line 883 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return std::make_tuple(mant, exp);
			} else {
				#line 884 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				{
					#line 885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					static_assert(Builtin::Boolean(false), "Unsupported type for Frexp");
					#line 886 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					return std::make_tuple(TVector{}, IVector{});
				}
			}
		}
		return {};
	}
#line 890 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Ldexp(const SimdVector<T, Arch>& x, SimdVector<typename CommonInstructions::FloatInt<T>, Arch> exp)  -> const SimdVector<T, Arch>
	{
		#line 891 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 892 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using IVector = SimdVector<FloatInt<T>, Arch>;
		#line 893 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		Builtin::Auto<decltype(ADV_UFCS(_operator_add_mod)(exp, FloatConstants<T>::MaxExponent))> ik = ADV_UFCS(_operator_add_mod)(exp, FloatConstants<T>::MaxExponent); 
		#line 894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		ik <<= FloatConstants<T>::MantissaBits;
		#line 895 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, Builtin::f32>()) {
			#line 896 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return ADV_UFCS(_operator_mul_mod)(x, ADV_UPCS(AsFloat32)(ik.__ref()));
		} else {
			#line 897 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if constexpr (Builtin::TypeIs<T, Builtin::f64>()) {
				#line 898 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return ADV_UFCS(_operator_mul_mod)(x, ADV_UPCS(AsFloat64)(ik.__ref()));
			}
		}
		return {};
	}
#line 902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Cbrt(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 903 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 904 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TNative = typename SimdMask<T,Arch>::TNative;
		#line 905 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using IVector = SimdVector<FloatInt<T>, Arch>;
		#line 906 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		Builtin::Auto<decltype(ADV_UPCS(Abs)(vec.__ref()))> z = ADV_UPCS(Abs)(vec.__ref()); 
		#line 907 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_lt_xor)(z, ADV_USPCS(MinPositiveValue, T)()))> denormal = ADV_UFCS(_operator_lt_xor)(z, ADV_USPCS(MinPositiveValue, T)()); 
		#line 908 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		z = TVector::ConditionalSelect(denormal, ADV_UFCS(_operator_mul_mod)(z, FloatConstants<T>::TwoToNmb), z);
		#line 909 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(TVector::ConditionalSelect(denormal, TVector::Create(ADV_USFCS((T), FromBits)(FloatConstants<T>::TwoToNmbO3)), TVector::One))> f = TVector::ConditionalSelect(denormal, TVector::Create(ADV_USFCS((T), FromBits)(FloatConstants<T>::TwoToNmbO3)), TVector::One); 
		#line 910 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, Builtin::f32>()) {
			#line 911 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			constexpr Builtin::Auto<decltype(ADV_USFCS((Builtin::f32), FromBits)(Builtin::u32(0x3fa14518U)))> CBRT2 = ADV_USFCS((Builtin::f32), FromBits)(Builtin::u32(0x3fa14518U));
			#line 912 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			constexpr Builtin::Auto<decltype(ADV_USFCS((Builtin::f32), FromBits)(Builtin::u32(0x3fcb2ff5U)))> CBRT4 = ADV_USFCS((Builtin::f32), FromBits)(Builtin::u32(0x3fcb2ff5U));
			#line 913 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			constexpr Builtin::Auto<decltype(ADV_USFCS((Builtin::f32), FromBits)(Builtin::u32(0x3f4b2ff5U)))> CBRT2I = ADV_USFCS((Builtin::f32), FromBits)(Builtin::u32(0x3f4b2ff5U));
			#line 914 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			constexpr Builtin::Auto<decltype(ADV_USFCS((Builtin::f32), FromBits)(Builtin::u32(0x3f214518U)))> CBRT4I = ADV_USFCS((Builtin::f32), FromBits)(Builtin::u32(0x3f214518U));
			#line 915 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const auto& [m, ex] = Frexp(z);
			#line 916 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(Horner<TVector, Builtin::u32(0x3ece0609U), Builtin::u32(0x3f91eb77U), Builtin::u32(0xbf745265U), Builtin::u32(0x3f0bf0feU), Builtin::u32(0xbe09e49aU)>(m))> x = Horner<TVector, Builtin::u32(0x3ece0609U), Builtin::u32(0x3f91eb77U), Builtin::u32(0xbf745265U), Builtin::u32(0x3f0bf0feU), Builtin::u32(0xbe09e49aU)>(m); 
			#line 917 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(ex)> e = ex; 
			#line 918 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UPCS(IsPositive)(e.__ref()))> flag = ADV_UPCS(IsPositive)(e.__ref()); 
			#line 919 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(ADV_UPCS(Abs)(e.__ref()))> e1 = ADV_UPCS(Abs)(e.__ref()); 
			#line 920 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(e1)> rem = e1; 
			#line 921 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			e1 /= Builtin::i32(3);
			#line 922 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(_operator_sub_mod_eq)(rem, ADV_UFCS(_operator_mul_mod)(e1, Builtin::i32(3)));
			#line 923 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			e = ADV_UFCS(_operator_mul_mod)(e1, ADV_UPCS(Sign)(e.__ref()));
			#line 924 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(TVector::ConditionalSelect(Builtin::BitCast<TNative>(ADV_UFCS(ToNative)(flag.__ref())), TVector::Create(CBRT2), TVector::Create(CBRT2I)))> cbrt2 = TVector::ConditionalSelect(Builtin::BitCast<TNative>(ADV_UFCS(ToNative)(flag.__ref())), TVector::Create(CBRT2), TVector::Create(CBRT2I)); 
			#line 926 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(TVector::ConditionalSelect(Builtin::BitCast<TNative>(ADV_UFCS(ToNative)(flag.__ref())), TVector::Create(CBRT4), TVector::Create(CBRT4I)))> cbrt4 = TVector::ConditionalSelect(Builtin::BitCast<TNative>(ADV_UFCS(ToNative)(flag.__ref())), TVector::Create(CBRT4), TVector::Create(CBRT4I)); 
			#line 928 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(TVector::ConditionalSelect(Builtin::BitCast<TNative>(ADV_UFCS(ToNative)((ADV_UFCS(_operator_eq_eq_xor)(rem, Builtin::i32(1))).__ref())), cbrt2, TVector::One))> fact = TVector::ConditionalSelect(Builtin::BitCast<TNative>(ADV_UFCS(ToNative)((ADV_UFCS(_operator_eq_eq_xor)(rem, Builtin::i32(1))).__ref())), cbrt2, TVector::One); 
			#line 930 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			fact = TVector::ConditionalSelect(Builtin::BitCast<TNative>(ADV_UFCS(ToNative)((ADV_UFCS(_operator_eq_eq_xor)(rem, Builtin::i32(2))).__ref())), cbrt4, fact);
			#line 932 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			x = Ldexp(ADV_UFCS(_operator_mul_mod)(x, fact), e);
			#line 933 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(_operator_sub_mod_eq)(x, ADV_UFCS(_operator_mul_mod)((ADV_UFCS(_operator_sub_mod)(x, z / (ADV_UFCS(_operator_mul_mod)(x, x)))), (Builtin::f32(1.0f) / Builtin::f32(3.0f))));
			#line 934 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			x = ADV_UFCS(_operator_mul_mod)((x | BitOfSign(vec)), f);
			#line 935 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return TVector::ConditionalSelect(ADV_UPCS(IsZero)(vec.__ref()) | ADV_UPCS(IsInfinity)(vec.__ref()), vec, x);
		} else {
			#line 936 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if constexpr (Builtin::TypeIs<T, Builtin::f64>()) {
				#line 937 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				constexpr Builtin::Auto<decltype(ADV_USFCS((Builtin::f64), FromBits)(Builtin::u64(0x3ff428a2f98d728bULL)))> CBRT2 = ADV_USFCS((Builtin::f64), FromBits)(Builtin::u64(0x3ff428a2f98d728bULL));
				#line 938 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				constexpr Builtin::Auto<decltype(ADV_USFCS((Builtin::f64), FromBits)(Builtin::u64(0x3ff965fea53d6e3dULL)))> CBRT4 = ADV_USFCS((Builtin::f64), FromBits)(Builtin::u64(0x3ff965fea53d6e3dULL));
				#line 939 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				constexpr Builtin::Auto<decltype(ADV_USFCS((Builtin::f64), FromBits)(Builtin::u64(0x3fe965fea53d6e3dULL)))> CBRT2I = ADV_USFCS((Builtin::f64), FromBits)(Builtin::u64(0x3fe965fea53d6e3dULL));
				#line 940 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				constexpr Builtin::Auto<decltype(ADV_USFCS((Builtin::f64), FromBits)(Builtin::u64(0x3fe428a2f98d728bULL)))> CBRT4I = ADV_USFCS((Builtin::f64), FromBits)(Builtin::u64(0x3fe428a2f98d728bULL));
				#line 941 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const auto& [m, ex] = Frexp(z);
				#line 942 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				Builtin::Auto<decltype(Horner<TVector, Builtin::u64(0x3fd9c0c12122a4feULL), Builtin::u64(0x3ff23d6ee505873aULL), Builtin::u64(0xbfee8a4ca3ba37b8ULL), Builtin::u64(0x3fe17e1fc7e59d58ULL), Builtin::u64(0xbfc13c93386fdff6ULL)>(m))> x = Horner<TVector, Builtin::u64(0x3fd9c0c12122a4feULL), Builtin::u64(0x3ff23d6ee505873aULL), Builtin::u64(0xbfee8a4ca3ba37b8ULL), Builtin::u64(0x3fe17e1fc7e59d58ULL), Builtin::u64(0xbfc13c93386fdff6ULL)>(m); 
				#line 944 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				Builtin::Auto<decltype(ex)> e = ex; 
				#line 945 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UPCS(IsPositive)(e.__ref()))> flag = ADV_UPCS(IsPositive)(e.__ref()); 
				#line 946 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				Builtin::Auto<decltype(ADV_UPCS(Abs)(e.__ref()))> e1 = ADV_UPCS(Abs)(e.__ref()); 
				#line 947 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				Builtin::Auto<decltype(e1)> rem = e1; 
				#line 948 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				e1 /= Builtin::i32(3);
				#line 949 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_sub_mod_eq)(rem, ADV_UFCS(_operator_mul_mod)(e1, Builtin::i32(3)));
				#line 950 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				e = ADV_UFCS(_operator_mul_mod)(e1, ADV_UPCS(Sign)(e.__ref()));
				#line 951 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(TVector::ConditionalSelect(Builtin::BitCast<TNative>(ADV_UFCS(ToNative)(flag.__ref())), TVector::Create(CBRT2), TVector::Create(CBRT2I)))> cbrt2 = TVector::ConditionalSelect(Builtin::BitCast<TNative>(ADV_UFCS(ToNative)(flag.__ref())), TVector::Create(CBRT2), TVector::Create(CBRT2I)); 
				#line 953 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(TVector::ConditionalSelect(Builtin::BitCast<TNative>(ADV_UFCS(ToNative)(flag.__ref())), TVector::Create(CBRT4), TVector::Create(CBRT4I)))> cbrt4 = TVector::ConditionalSelect(Builtin::BitCast<TNative>(ADV_UFCS(ToNative)(flag.__ref())), TVector::Create(CBRT4), TVector::Create(CBRT4I)); 
				#line 955 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				Builtin::Auto<decltype(TVector::ConditionalSelect(Builtin::BitCast<TNative>(ADV_UFCS(ToNative)((ADV_UFCS(_operator_eq_eq_xor)(rem, Builtin::i32(1))).__ref())), cbrt2, TVector::One))> fact = TVector::ConditionalSelect(Builtin::BitCast<TNative>(ADV_UFCS(ToNative)((ADV_UFCS(_operator_eq_eq_xor)(rem, Builtin::i32(1))).__ref())), cbrt2, TVector::One); 
				#line 957 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				fact = TVector::ConditionalSelect(Builtin::BitCast<TNative>(ADV_UFCS(ToNative)((ADV_UFCS(_operator_eq_eq_xor)(rem, Builtin::i32(2))).__ref())), cbrt4, fact);
				#line 959 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				x = Ldexp(ADV_UFCS(_operator_mul_mod)(x, fact), e);
				#line 960 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_sub_mod_eq)(x, ADV_UFCS(_operator_mul_mod)((ADV_UFCS(_operator_sub_mod)(x, z / (ADV_UFCS(_operator_mul_mod)(x, x)))), (Builtin::f32(1.0f) / Builtin::f32(3.0f))));
				#line 961 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_sub_mod_eq)(x, ADV_UFCS(_operator_mul_mod)((ADV_UFCS(_operator_sub_mod)(x, z / (ADV_UFCS(_operator_mul_mod)(x, x)))), (Builtin::f32(1.0f) / Builtin::f32(3.0f))));
				#line 962 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				x = ADV_UFCS(_operator_mul_mod)((x | BitOfSign(vec)), f);
				#line 963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return TVector::ConditionalSelect(ADV_UPCS(IsZero)(vec.__ref()) | ADV_UPCS(IsInfinity)(vec.__ref()), vec, x);
			} else {
				#line 964 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				{
					#line 965 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					static_assert(Builtin::Boolean(false), "Unsupported type for Cbrt");
				}
			}
		}
		return {};
	}
#line 969 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Ln(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 970 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 971 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TNative = typename SimdMask<FloatInt<T>,Arch>::TNative;
		#line 972 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using IVector = SimdVector<FloatInt<T>, Arch>;
		#line 973 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		Builtin::Auto<decltype(vec)> x = vec; 
		#line 974 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		IVector k{}; 
		#line 975 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_not)(ADV_UPCS(IsZero)(vec.__ref())))> notZero = ADV_UFCS(_operator_not)(ADV_UPCS(IsZero)(vec.__ref())); 
		#line 976 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, Builtin::f32>()) {
			#line 977 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype((ADV_UFCS(_operator_lt_xor)(vec, ADV_USPCS(MinPositiveValue, T)())) & notZero)> test1 = (ADV_UFCS(_operator_lt_xor)(vec, ADV_USPCS(MinPositiveValue, T)())) & notZero; 
			#line 978 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if (ADV_UPCS(Any)(test1.__ref())) {
				#line 979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				k = IVector::ConditionalSelect(Builtin::BitCast<TNative>(ADV_UFCS(ToNative)(test1.__ref())), ADV_UFCS(_operator_sub_mod)(k, Builtin::i32(23)), k);
				#line 981 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				x = TVector::ConditionalSelect(test1, ADV_UFCS(_operator_mul_mod)(x, Builtin::u32(8388608U)), x);
			}
			#line 983 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(ADV_UPCS(AsInt32)(x.__ref()))> ix = ADV_UPCS(AsInt32)(x.__ref()); 
			#line 984 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(_operator_add_mod_eq)(ix, ADV_UFCS(_operator_sub_mod)(Builtin::i32(0x3f800000), Builtin::i32(0x3f3504f3)));
			#line 985 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(_operator_add_mod_eq)(k, ADV_UFCS(_operator_sub_mod)((ix >> Builtin::i32(23)), Builtin::i32(0x7f)));
			#line 986 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ix = ADV_UFCS(_operator_add_mod)((ix & Builtin::i32(0x007fffff)), Builtin::i32(0x3f3504f3));
			#line 987 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			x = ADV_UPCS(AsFloat32)(ix.__ref());
			#line 988 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_sub_sub_mod)(x))> f = ADV_UFCS(_operator_sub_sub_mod)(x); 
			#line 989 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(f / (ADV_UFCS(_operator_add_mod)(f, Builtin::i32(2))))> s = f / (ADV_UFCS(_operator_add_mod)(f, Builtin::i32(2))); 
			#line 990 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(s, s))> z = ADV_UFCS(_operator_mul_mod)(s, s); 
			#line 991 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(z, z))> w = ADV_UFCS(_operator_mul_mod)(z, z); 
			#line 992 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(w, Horner<TVector, Builtin::u32(0x3eccce13U), Builtin::u32(0x3e789e26U)>(w)))> t1 = ADV_UFCS(_operator_mul_mod)(w, Horner<TVector, Builtin::u32(0x3eccce13U), Builtin::u32(0x3e789e26U)>(w)); 
			#line 993 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(z, Horner<TVector, Builtin::u32(0x3f2aaaaaU), Builtin::u32(0x3e91e9eeU)>(w)))> t2 = ADV_UFCS(_operator_mul_mod)(z, Horner<TVector, Builtin::u32(0x3f2aaaaaU), Builtin::u32(0x3e91e9eeU)>(w)); 
			#line 994 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_add_mod)(t2, t1))> r1 = ADV_UFCS(_operator_add_mod)(t2, t1); 
			#line 995 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(ADV_UFCS(_operator_mul_mod)(f, T{Builtin::f64(0.5)}), f))> hfsq = ADV_UFCS(_operator_mul_mod)(ADV_UFCS(_operator_mul_mod)(f, T{Builtin::f64(0.5)}), f); 
			#line 996 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS_TEMPLATE(ConvertTo<Builtin::f32>)(k.__ref()))> dk = ADV_UFCS_TEMPLATE(ConvertTo<Builtin::f32>)(k.__ref()); 
			#line 997 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(FusedMultiplyAdd)(dk.__ref(), FloatConstants<T>::Log2Hi, ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_sub_mod)(ADV_UFCS(FusedMultiplyAdd)(s.__ref(), ADV_UFCS(_operator_add_mod)(hfsq, r1), ADV_UFCS(_operator_mul_mod)(dk, FloatConstants<T>::Log2Lo)), hfsq), f)))> r = ADV_UFCS(FusedMultiplyAdd)(dk.__ref(), FloatConstants<T>::Log2Hi, ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_sub_mod)(ADV_UFCS(FusedMultiplyAdd)(s.__ref(), ADV_UFCS(_operator_add_mod)(hfsq, r1), ADV_UFCS(_operator_mul_mod)(dk, FloatConstants<T>::Log2Lo)), hfsq), f)); 
			#line 999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(TVector::ConditionalSelect(notZero, TVector::ConditionalSelect(ADV_UPCS(IsPositiveInfinity)(vec.__ref()), TVector::Create(ADV_USPCS(PositiveInfinity, Builtin::f32)()), r), TVector::Create(ADV_USPCS(NegativeInfinity, Builtin::f32)())))> zz = TVector::ConditionalSelect(notZero, TVector::ConditionalSelect(ADV_UPCS(IsPositiveInfinity)(vec.__ref()), TVector::Create(ADV_USPCS(PositiveInfinity, Builtin::f32)()), r), TVector::Create(ADV_USPCS(NegativeInfinity, Builtin::f32)())); 
			#line 1001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return TVector::ConditionalSelect(ADV_UFCS(_operator_not)((ADV_UPCS(IsPositive)(vec.__ref()))), TVector::Create(ADV_USPCS(NaN, Builtin::f32)()), zz);
		} else {
			#line 1002 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if constexpr (Builtin::TypeIs<T, Builtin::f64>()) {
				#line 1003 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				Builtin::Auto<decltype(ADV_UPCS(AsInt64)(x.__ref()) >> Builtin::i32(32))> hx = ADV_UPCS(AsInt64)(x.__ref()) >> Builtin::i32(32); 
				#line 1004 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype((ADV_UFCS(_operator_lt_xor)(vec, ADV_USPCS(MinPositiveValue, T)())) & notZero)> test1 = (ADV_UFCS(_operator_lt_xor)(vec, ADV_USPCS(MinPositiveValue, T)())) & notZero; 
				#line 1005 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				if (ADV_UPCS(Any)(test1.__ref())) {
					#line 1006 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					k = IVector::ConditionalSelect(Builtin::BitCast<TNative>(ADV_UFCS(ToNative)(test1.__ref())), ADV_UFCS(_operator_sub_mod)(k, Builtin::i32(54)), k);
					#line 1008 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					x = TVector::ConditionalSelect(test1, ADV_UFCS(_operator_mul_mod)(x, Builtin::u64(18014398509481984ULL)), x);
				}
				#line 1010 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_add_mod_eq)(hx, ADV_UFCS(_operator_sub_mod)(Builtin::i32(0x3ff00000), Builtin::i32(0x3fe6a09e)));
				#line 1011 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_add_mod_eq)(k, ADV_UFCS(_operator_sub_mod)((hx >> Builtin::i32(20)), Builtin::i32(0x3ff)));
				#line 1012 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS_TEMPLATE(ConvertTo<Builtin::f64>)(k.__ref()))> dk = ADV_UFCS_TEMPLATE(ConvertTo<Builtin::f64>)(k.__ref()); 
				#line 1013 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				hx = ADV_UFCS(_operator_add_mod)((hx & Builtin::i32(0x000fffff)), Builtin::i32(0x3fe6a09e));
				#line 1014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				x = ADV_UPCS(AsFloat64)((hx << Builtin::i32(32) | (IVector::Create(Builtin::i64(0xffffffffLL)) & ADV_UPCS(AsInt64)(x.__ref()))).__ref());
				#line 1015 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_sub_sub_mod)(x))> f = ADV_UFCS(_operator_sub_sub_mod)(x); 
				#line 1016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(f / (ADV_UFCS(_operator_add_mod)(f, Builtin::i32(2))))> s = f / (ADV_UFCS(_operator_add_mod)(f, Builtin::i32(2))); 
				#line 1017 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(s, s))> z = ADV_UFCS(_operator_mul_mod)(s, s); 
				#line 1018 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(z, z))> w = ADV_UFCS(_operator_mul_mod)(z, z); 
				#line 1019 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(w, Horner<TVector, Builtin::u64(0x3fd999999997fa04ULL), Builtin::u64(0x3fcc71c51d8e78afULL), Builtin::u64(0x3fc39a09d078c69fULL)>(w)))> t1 = ADV_UFCS(_operator_mul_mod)(w, Horner<TVector, Builtin::u64(0x3fd999999997fa04ULL), Builtin::u64(0x3fcc71c51d8e78afULL), Builtin::u64(0x3fc39a09d078c69fULL)>(w)); 
				#line 1020 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(z, Horner<TVector, Builtin::u64(0x3fe5555555555593ULL), Builtin::u64(0x3fd2492494229359ULL), Builtin::u64(0x3fc7466496cb03deULL), Builtin::u64(0x3fc2f112df3e5244ULL)>(w)))> t2 = ADV_UFCS(_operator_mul_mod)(z, Horner<TVector, Builtin::u64(0x3fe5555555555593ULL), Builtin::u64(0x3fd2492494229359ULL), Builtin::u64(0x3fc7466496cb03deULL), Builtin::u64(0x3fc2f112df3e5244ULL)>(w)); 
				#line 1021 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_add_mod)(t2, t1))> r1 = ADV_UFCS(_operator_add_mod)(t2, t1); 
				#line 1022 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(ADV_UFCS(_operator_mul_mod)(f, T{Builtin::f64(0.5)}), f))> hfsq = ADV_UFCS(_operator_mul_mod)(ADV_UFCS(_operator_mul_mod)(f, T{Builtin::f64(0.5)}), f); 
				#line 1023 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(FusedMultiplyAdd)(dk.__ref(), FloatConstants<T>::Log2Hi, ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_sub_mod)(ADV_UFCS(FusedMultiplyAdd)(s.__ref(), ADV_UFCS(_operator_add_mod)(hfsq, r1), ADV_UFCS(_operator_mul_mod)(dk, FloatConstants<T>::Log2Lo)), hfsq), f)))> r = ADV_UFCS(FusedMultiplyAdd)(dk.__ref(), FloatConstants<T>::Log2Hi, ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_sub_mod)(ADV_UFCS(FusedMultiplyAdd)(s.__ref(), ADV_UFCS(_operator_add_mod)(hfsq, r1), ADV_UFCS(_operator_mul_mod)(dk, FloatConstants<T>::Log2Lo)), hfsq), f)); 
				#line 1025 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(TVector::ConditionalSelect(notZero, TVector::ConditionalSelect(ADV_UPCS(IsPositiveInfinity)(vec.__ref()), TVector::Create(ADV_USPCS(PositiveInfinity, Builtin::f64)()), r), TVector::Create(ADV_USPCS(NegativeInfinity, Builtin::f64)())))> zz = TVector::ConditionalSelect(notZero, TVector::ConditionalSelect(ADV_UPCS(IsPositiveInfinity)(vec.__ref()), TVector::Create(ADV_USPCS(PositiveInfinity, Builtin::f64)()), r), TVector::Create(ADV_USPCS(NegativeInfinity, Builtin::f64)())); 
				#line 1027 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return TVector::ConditionalSelect(ADV_UFCS(_operator_not)((ADV_UPCS(IsPositive)(vec.__ref()))), TVector::Create(ADV_USPCS(NaN, Builtin::f64)()), zz);
			} else {
				#line 1028 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				{
					#line 1029 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					static_assert(Builtin::Boolean(false), "Unsupported type for Ln");
				}
			}
		}
		return {};
	}
#line 1033 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Ln1P(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 1034 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 1035 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using IVector = SimdVector<FloatInt<T>, Arch>;
		#line 1036 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(vec + TVector::One)> uf = vec + TVector::One; 
		#line 1037 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return Ln(uf);
	}
#line 1040 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Log2(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 1041 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 1042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TNative = typename SimdMask<FloatInt<T>,Arch>::TNative;
		#line 1043 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using IVector = SimdVector<FloatInt<T>, Arch>;
		#line 1044 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		Builtin::Auto<decltype(vec)> x = vec; 
		#line 1045 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		IVector k{}; 
		#line 1046 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_not)(ADV_UPCS(IsZero)(vec.__ref())))> notZero = ADV_UFCS(_operator_not)(ADV_UPCS(IsZero)(vec.__ref())); 
		#line 1047 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, Builtin::f32>()) {
			#line 1048 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype((ADV_UFCS(_operator_lt_xor)(vec, ADV_USPCS(MinPositiveValue, T)())) & notZero)> test1 = (ADV_UFCS(_operator_lt_xor)(vec, ADV_USPCS(MinPositiveValue, T)())) & notZero; 
			#line 1049 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if (ADV_UPCS(Any)(test1.__ref())) {
				#line 1050 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				k = IVector::ConditionalSelect(Builtin::BitCast<TNative>(ADV_UFCS(ToNative)(test1.__ref())), ADV_UFCS(_operator_sub_mod)(k, Builtin::i32(25)), k);
				#line 1052 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				x = TVector::ConditionalSelect(test1, ADV_UFCS(_operator_mul_mod)(x, Builtin::u32(33554432U)), x);
			}
			#line 1054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(ADV_UPCS(AsInt32)(x.__ref()))> ix = ADV_UPCS(AsInt32)(x.__ref()); 
			#line 1055 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(_operator_add_mod_eq)(ix, ADV_UFCS(_operator_sub_mod)(Builtin::i32(0x3f800000), Builtin::i32(0x3f3504f3)));
			#line 1056 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(_operator_add_mod_eq)(k, ADV_UFCS(_operator_sub_mod)((ix >> Builtin::i32(23)), Builtin::i32(0x7f)));
			#line 1057 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ix = ADV_UFCS(_operator_add_mod)((ix & Builtin::i32(0x007fffff)), Builtin::i32(0x3f3504f3));
			#line 1058 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			x = ADV_UPCS(AsFloat32)(ix.__ref());
			#line 1059 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_sub_sub_mod)(x))> f = ADV_UFCS(_operator_sub_sub_mod)(x); 
			#line 1060 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(f / (ADV_UFCS(_operator_add_mod)(f, Builtin::i32(2))))> s = f / (ADV_UFCS(_operator_add_mod)(f, Builtin::i32(2))); 
			#line 1061 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(s, s))> z = ADV_UFCS(_operator_mul_mod)(s, s); 
			#line 1062 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(z, z))> w = ADV_UFCS(_operator_mul_mod)(z, z); 
			#line 1063 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(w, Horner<TVector, Builtin::u32(0x3eccce13U), Builtin::u32(0x3e789e26U)>(w)))> t1 = ADV_UFCS(_operator_mul_mod)(w, Horner<TVector, Builtin::u32(0x3eccce13U), Builtin::u32(0x3e789e26U)>(w)); 
			#line 1064 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(z, Horner<TVector, Builtin::u32(0x3f2aaaaaU), Builtin::u32(0x3e91e9eeU)>(w)))> t2 = ADV_UFCS(_operator_mul_mod)(z, Horner<TVector, Builtin::u32(0x3f2aaaaaU), Builtin::u32(0x3e91e9eeU)>(w)); 
			#line 1065 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_add_mod)(t2, t1))> r1 = ADV_UFCS(_operator_add_mod)(t2, t1); 
			#line 1066 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(ADV_UFCS(_operator_mul_mod)(f, T{Builtin::f64(0.5)}), f))> hfsq = ADV_UFCS(_operator_mul_mod)(ADV_UFCS(_operator_mul_mod)(f, T{Builtin::f64(0.5)}), f); 
			#line 1067 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS_TEMPLATE(ConvertTo<Builtin::f32>)(k.__ref()))> dk = ADV_UFCS_TEMPLATE(ConvertTo<Builtin::f32>)(k.__ref()); 
			#line 1068 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(FusedMultiplyAdd)((ADV_UFCS(_operator_add_mod)(ADV_UFCS(FusedMultiplySub)(s.__ref(), ADV_UFCS(_operator_add_mod)(hfsq, r1), hfsq), f)).__ref(), FloatConstants<T>::InvLog2, dk))> r = ADV_UFCS(FusedMultiplyAdd)((ADV_UFCS(_operator_add_mod)(ADV_UFCS(FusedMultiplySub)(s.__ref(), ADV_UFCS(_operator_add_mod)(hfsq, r1), hfsq), f)).__ref(), FloatConstants<T>::InvLog2, dk); 
			#line 1069 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(TVector::ConditionalSelect(notZero, TVector::ConditionalSelect(ADV_UPCS(IsPositiveInfinity)(vec.__ref()), TVector::Create(ADV_USPCS(PositiveInfinity, Builtin::f32)()), r), TVector::Create(ADV_USPCS(NegativeInfinity, Builtin::f32)())))> zz = TVector::ConditionalSelect(notZero, TVector::ConditionalSelect(ADV_UPCS(IsPositiveInfinity)(vec.__ref()), TVector::Create(ADV_USPCS(PositiveInfinity, Builtin::f32)()), r), TVector::Create(ADV_USPCS(NegativeInfinity, Builtin::f32)())); 
			#line 1071 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return TVector::ConditionalSelect(ADV_UFCS(_operator_not)((ADV_UPCS(IsPositive)(vec.__ref()))), TVector::Create(ADV_USPCS(NaN, Builtin::f32)()), zz);
		} else {
			#line 1072 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if constexpr (Builtin::TypeIs<T, Builtin::f64>()) {
				#line 1073 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				Builtin::Auto<decltype(ADV_UPCS(AsInt64)(x.__ref()) >> Builtin::i32(32))> hx = ADV_UPCS(AsInt64)(x.__ref()) >> Builtin::i32(32); 
				#line 1074 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype((ADV_UFCS(_operator_lt_xor)(vec, ADV_USPCS(MinPositiveValue, T)())) & notZero)> test1 = (ADV_UFCS(_operator_lt_xor)(vec, ADV_USPCS(MinPositiveValue, T)())) & notZero; 
				#line 1075 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				if (ADV_UPCS(Any)(test1.__ref())) {
					#line 1076 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					k = IVector::ConditionalSelect(Builtin::BitCast<TNative>(ADV_UFCS(ToNative)(test1.__ref())), ADV_UFCS(_operator_sub_mod)(k, Builtin::i32(54)), k);
					#line 1078 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					x = TVector::ConditionalSelect(test1, ADV_UFCS(_operator_mul_mod)(x, Builtin::u64(18014398509481984ULL)), x);
				}
				#line 1080 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_add_mod_eq)(hx, ADV_UFCS(_operator_sub_mod)(Builtin::i32(0x3ff00000), Builtin::i32(0x3fe6a09e)));
				#line 1081 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_add_mod_eq)(k, ADV_UFCS(_operator_sub_mod)((hx >> Builtin::i32(20)), Builtin::i32(0x3ff)));
				#line 1082 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS_TEMPLATE(ConvertTo<Builtin::f64>)(k.__ref()))> dk = ADV_UFCS_TEMPLATE(ConvertTo<Builtin::f64>)(k.__ref()); 
				#line 1083 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				hx = ADV_UFCS(_operator_add_mod)((hx & Builtin::i32(0x000fffff)), Builtin::i32(0x3fe6a09e));
				#line 1084 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				x = ADV_UPCS(AsFloat64)((hx << Builtin::i32(32) | (IVector::Create(Builtin::i64(0xffffffffLL)) & ADV_UPCS(AsInt64)(x.__ref()))).__ref());
				#line 1085 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_sub_sub_mod)(x))> f = ADV_UFCS(_operator_sub_sub_mod)(x); 
				#line 1086 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(f / (ADV_UFCS(_operator_add_mod)(f, Builtin::i32(2))))> s = f / (ADV_UFCS(_operator_add_mod)(f, Builtin::i32(2))); 
				#line 1087 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(s, s))> z = ADV_UFCS(_operator_mul_mod)(s, s); 
				#line 1088 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(z, z))> w = ADV_UFCS(_operator_mul_mod)(z, z); 
				#line 1089 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(w, Horner<TVector, Builtin::u64(0x3fd999999997fa04ULL), Builtin::u64(0x3fcc71c51d8e78afULL), Builtin::u64(0x3fc39a09d078c69fULL)>(w)))> t1 = ADV_UFCS(_operator_mul_mod)(w, Horner<TVector, Builtin::u64(0x3fd999999997fa04ULL), Builtin::u64(0x3fcc71c51d8e78afULL), Builtin::u64(0x3fc39a09d078c69fULL)>(w)); 
				#line 1090 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(z, Horner<TVector, Builtin::u64(0x3fe5555555555593ULL), Builtin::u64(0x3fd2492494229359ULL), Builtin::u64(0x3fc7466496cb03deULL), Builtin::u64(0x3fc2f112df3e5244ULL)>(w)))> t2 = ADV_UFCS(_operator_mul_mod)(z, Horner<TVector, Builtin::u64(0x3fe5555555555593ULL), Builtin::u64(0x3fd2492494229359ULL), Builtin::u64(0x3fc7466496cb03deULL), Builtin::u64(0x3fc2f112df3e5244ULL)>(w)); 
				#line 1091 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_add_mod)(t2, t1))> r1 = ADV_UFCS(_operator_add_mod)(t2, t1); 
				#line 1092 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(ADV_UFCS(_operator_mul_mod)(f, T{Builtin::f64(0.5)}), f))> hfsq = ADV_UFCS(_operator_mul_mod)(ADV_UFCS(_operator_mul_mod)(f, T{Builtin::f64(0.5)}), f); 
				#line 1093 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_sub_mod)(f, hfsq))> hi = ADV_UFCS(_operator_sub_mod)(f, hfsq); 
				#line 1094 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				hi = hi & ADV_UPCS(AsFloat64)((ADV_USPCS(AllBitsSet, Builtin::i64)() << Builtin::i32(32)).__ref());
				#line 1095 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(FusedMultiplyAdd)(s.__ref(), ADV_UFCS(_operator_add_mod)(hfsq, r1), ADV_UFCS(_operator_sub_mod)(ADV_UFCS(_operator_sub_mod)(f, hi), hfsq)))> lo = ADV_UFCS(FusedMultiplyAdd)(s.__ref(), ADV_UFCS(_operator_add_mod)(hfsq, r1), ADV_UFCS(_operator_sub_mod)(ADV_UFCS(_operator_sub_mod)(f, hi), hfsq)); 
				#line 1096 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(hi, FloatConstants<T>::InvLog2Hi))> valHi = ADV_UFCS(_operator_mul_mod)(hi, FloatConstants<T>::InvLog2Hi); 
				#line 1097 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				Builtin::Auto<decltype(ADV_UFCS(FusedMultiplyAdd)((ADV_UFCS(_operator_add_mod)(lo, hi)).__ref(), FloatConstants<T>::InvLog2Lo, ADV_UFCS(_operator_mul_mod)(lo, FloatConstants<T>::InvLog2Hi)))> valLo = ADV_UFCS(FusedMultiplyAdd)((ADV_UFCS(_operator_add_mod)(lo, hi)).__ref(), FloatConstants<T>::InvLog2Lo, ADV_UFCS(_operator_mul_mod)(lo, FloatConstants<T>::InvLog2Hi)); 
				#line 1098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_add_mod)(dk, valHi))> w1 = ADV_UFCS(_operator_add_mod)(dk, valHi); 
				#line 1099 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_add_mod_eq)(valLo, ADV_UFCS(_operator_add_mod)((ADV_UFCS(_operator_sub_mod)(dk, w1)), valHi));
				#line 1100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				valHi = w1;
				#line 1101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_add_mod)(valLo, valHi))> r = ADV_UFCS(_operator_add_mod)(valLo, valHi); 
				#line 1102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(TVector::ConditionalSelect(notZero, TVector::ConditionalSelect(ADV_UPCS(IsPositiveInfinity)(vec.__ref()), TVector::Create(ADV_USPCS(PositiveInfinity, Builtin::f64)()), r), TVector::Create(ADV_USPCS(NegativeInfinity, Builtin::f64)())))> zz = TVector::ConditionalSelect(notZero, TVector::ConditionalSelect(ADV_UPCS(IsPositiveInfinity)(vec.__ref()), TVector::Create(ADV_USPCS(PositiveInfinity, Builtin::f64)()), r), TVector::Create(ADV_USPCS(NegativeInfinity, Builtin::f64)())); 
				#line 1104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return TVector::ConditionalSelect(ADV_UFCS(_operator_not)((ADV_UPCS(IsPositive)(vec.__ref()))), TVector::Create(ADV_USPCS(NaN, Builtin::f64)()), zz);
			} else {
				#line 1105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				{
					#line 1106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					static_assert(Builtin::Boolean(false), "Unsupported type for Log2");
				}
			}
		}
		return {};
	}
#line 1110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Log10(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 1111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 1112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TNative = typename SimdMask<FloatInt<T>,Arch>::TNative;
		#line 1113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using IVector = SimdVector<FloatInt<T>, Arch>;
		#line 1114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		Builtin::Auto<decltype(vec)> x = vec; 
		#line 1115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		IVector k{}; 
		#line 1116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_not)(ADV_UPCS(IsZero)(vec.__ref())))> notZero = ADV_UFCS(_operator_not)(ADV_UPCS(IsZero)(vec.__ref())); 
		#line 1117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, Builtin::f32>()) {
			#line 1118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype((ADV_UFCS(_operator_lt_xor)(vec, ADV_USPCS(MinPositiveValue, T)())) & notZero)> test1 = (ADV_UFCS(_operator_lt_xor)(vec, ADV_USPCS(MinPositiveValue, T)())) & notZero; 
			#line 1119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if (ADV_UPCS(Any)(test1.__ref())) {
				#line 1120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				k = IVector::ConditionalSelect(Builtin::BitCast<TNative>(ADV_UFCS(ToNative)(test1.__ref())), ADV_UFCS(_operator_sub_mod)(k, Builtin::i32(25)), k);
				#line 1122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				x = TVector::ConditionalSelect(test1, ADV_UFCS(_operator_mul_mod)(x, Builtin::u32(33554432U)), x);
			}
			#line 1124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(ADV_UPCS(AsInt32)(x.__ref()))> ix = ADV_UPCS(AsInt32)(x.__ref()); 
			#line 1125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(_operator_add_mod_eq)(ix, ADV_UFCS(_operator_sub_mod)(Builtin::i32(0x3f800000), Builtin::i32(0x3f3504f3)));
			#line 1126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(_operator_add_mod_eq)(k, ADV_UFCS(_operator_sub_mod)((ix >> Builtin::i32(23)), Builtin::i32(0x7f)));
			#line 1127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ix = ADV_UFCS(_operator_add_mod)((ix & Builtin::i32(0x007fffff)), Builtin::i32(0x3f3504f3));
			#line 1128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			x = ADV_UPCS(AsFloat32)(ix.__ref());
			#line 1129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_sub_sub_mod)(x))> f = ADV_UFCS(_operator_sub_sub_mod)(x); 
			#line 1130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(f / (ADV_UFCS(_operator_add_mod)(f, Builtin::i32(2))))> s = f / (ADV_UFCS(_operator_add_mod)(f, Builtin::i32(2))); 
			#line 1131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(s, s))> z = ADV_UFCS(_operator_mul_mod)(s, s); 
			#line 1132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(z, z))> w = ADV_UFCS(_operator_mul_mod)(z, z); 
			#line 1133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(w, Horner<TVector, Builtin::u32(0x3eccce13U), Builtin::u32(0x3e789e26U)>(w)))> t1 = ADV_UFCS(_operator_mul_mod)(w, Horner<TVector, Builtin::u32(0x3eccce13U), Builtin::u32(0x3e789e26U)>(w)); 
			#line 1134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(z, Horner<TVector, Builtin::u32(0x3f2aaaaaU), Builtin::u32(0x3e91e9eeU)>(w)))> t2 = ADV_UFCS(_operator_mul_mod)(z, Horner<TVector, Builtin::u32(0x3f2aaaaaU), Builtin::u32(0x3e91e9eeU)>(w)); 
			#line 1135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_add_mod)(t2, t1))> r1 = ADV_UFCS(_operator_add_mod)(t2, t1); 
			#line 1136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(ADV_UFCS(_operator_mul_mod)(f, T{Builtin::f64(0.5)}), f))> hfsq = ADV_UFCS(_operator_mul_mod)(ADV_UFCS(_operator_mul_mod)(f, T{Builtin::f64(0.5)}), f); 
			#line 1137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS_TEMPLATE(ConvertTo<Builtin::f32>)(k.__ref()))> dk = ADV_UFCS_TEMPLATE(ConvertTo<Builtin::f32>)(k.__ref()); 
			#line 1138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype((ADV_UFCS(_operator_sub_mod)(f, hfsq)) & (ADV_USFCS((Builtin::f32), FromBits)(Builtin::u32(0xfffff000U))))> hi = (ADV_UFCS(_operator_sub_mod)(f, hfsq)) & (ADV_USFCS((Builtin::f32), FromBits)(Builtin::u32(0xfffff000U))); 
			#line 1139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(FusedMultiplyAdd)(s.__ref(), ADV_UFCS(_operator_add_mod)(hfsq, r1), ADV_UFCS(_operator_sub_mod)(ADV_UFCS(_operator_sub_mod)(f, hi), hfsq)))> lo = ADV_UFCS(FusedMultiplyAdd)(s.__ref(), ADV_UFCS(_operator_add_mod)(hfsq, r1), ADV_UFCS(_operator_sub_mod)(ADV_UFCS(_operator_sub_mod)(f, hi), hfsq)); 
			#line 1140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(FusedMultiplyAdd)(dk.__ref(), FloatConstants<T>::Log10_2Hi, ADV_UFCS(FusedMultiplyAdd)(hi.__ref(), FloatConstants<T>::InvLn10Hi, ADV_UFCS(FusedMultiplyAdd)(lo.__ref(), FloatConstants<T>::InvLn10Hi, ADV_UFCS(FusedMultiplyAdd)((ADV_UFCS(_operator_add_mod)(lo, hi)).__ref(), FloatConstants<T>::InvLn10Lo, ADV_UFCS(_operator_mul_mod)(dk, FloatConstants<T>::Log10_2Lo))))))> r = ADV_UFCS(FusedMultiplyAdd)(dk.__ref(), FloatConstants<T>::Log10_2Hi, ADV_UFCS(FusedMultiplyAdd)(hi.__ref(), FloatConstants<T>::InvLn10Hi, ADV_UFCS(FusedMultiplyAdd)(lo.__ref(), FloatConstants<T>::InvLn10Hi, ADV_UFCS(FusedMultiplyAdd)((ADV_UFCS(_operator_add_mod)(lo, hi)).__ref(), FloatConstants<T>::InvLn10Lo, ADV_UFCS(_operator_mul_mod)(dk, FloatConstants<T>::Log10_2Lo))))); 
			#line 1143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(TVector::ConditionalSelect(notZero, TVector::ConditionalSelect(ADV_UPCS(IsPositiveInfinity)(vec.__ref()), TVector::Create(ADV_USPCS(PositiveInfinity, Builtin::f32)()), r), TVector::Create(ADV_USPCS(NegativeInfinity, Builtin::f32)())))> zz = TVector::ConditionalSelect(notZero, TVector::ConditionalSelect(ADV_UPCS(IsPositiveInfinity)(vec.__ref()), TVector::Create(ADV_USPCS(PositiveInfinity, Builtin::f32)()), r), TVector::Create(ADV_USPCS(NegativeInfinity, Builtin::f32)())); 
			#line 1145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return TVector::ConditionalSelect(ADV_UFCS(_operator_not)((ADV_UPCS(IsPositive)(vec.__ref()))), TVector::Create(ADV_USPCS(NaN, Builtin::f32)()), zz);
		} else {
			#line 1146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if constexpr (Builtin::TypeIs<T, Builtin::f64>()) {
				#line 1147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				Builtin::Auto<decltype(ADV_UPCS(AsInt64)(x.__ref()) >> Builtin::i32(32))> hx = ADV_UPCS(AsInt64)(x.__ref()) >> Builtin::i32(32); 
				#line 1148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype((ADV_UFCS(_operator_lt_xor)(vec, ADV_USPCS(MinPositiveValue, T)())) & notZero)> test1 = (ADV_UFCS(_operator_lt_xor)(vec, ADV_USPCS(MinPositiveValue, T)())) & notZero; 
				#line 1149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				if (ADV_UPCS(Any)(test1.__ref())) {
					#line 1150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					k = IVector::ConditionalSelect(Builtin::BitCast<TNative>(ADV_UFCS(ToNative)(test1.__ref())), ADV_UFCS(_operator_sub_mod)(k, Builtin::i32(54)), k);
					#line 1152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					x = TVector::ConditionalSelect(test1, ADV_UFCS(_operator_mul_mod)(x, Builtin::u64(18014398509481984ULL)), x);
				}
				#line 1154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_add_mod_eq)(hx, ADV_UFCS(_operator_sub_mod)(Builtin::i32(0x3ff00000), Builtin::i32(0x3fe6a09e)));
				#line 1155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_add_mod_eq)(k, ADV_UFCS(_operator_sub_mod)((hx >> Builtin::i32(20)), Builtin::i32(0x3ff)));
				#line 1156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS_TEMPLATE(ConvertTo<Builtin::f64>)(k.__ref()))> dk = ADV_UFCS_TEMPLATE(ConvertTo<Builtin::f64>)(k.__ref()); 
				#line 1157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				hx = ADV_UFCS(_operator_add_mod)((hx & Builtin::i32(0x000fffff)), Builtin::i32(0x3fe6a09e));
				#line 1158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				x = ADV_UPCS(AsFloat64)((hx << Builtin::i32(32) | (IVector::Create(Builtin::i64(0xffffffffLL)) & ADV_UPCS(AsInt64)(x.__ref()))).__ref());
				#line 1159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_sub_sub_mod)(x))> f = ADV_UFCS(_operator_sub_sub_mod)(x); 
				#line 1160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(f / (ADV_UFCS(_operator_add_mod)(f, Builtin::i32(2))))> s = f / (ADV_UFCS(_operator_add_mod)(f, Builtin::i32(2))); 
				#line 1161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(s, s))> z = ADV_UFCS(_operator_mul_mod)(s, s); 
				#line 1162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(z, z))> w = ADV_UFCS(_operator_mul_mod)(z, z); 
				#line 1163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(w, Horner<TVector, Builtin::u64(0x3fd999999997fa04ULL), Builtin::u64(0x3fcc71c51d8e78afULL), Builtin::u64(0x3fc39a09d078c69fULL)>(w)))> t1 = ADV_UFCS(_operator_mul_mod)(w, Horner<TVector, Builtin::u64(0x3fd999999997fa04ULL), Builtin::u64(0x3fcc71c51d8e78afULL), Builtin::u64(0x3fc39a09d078c69fULL)>(w)); 
				#line 1164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(z, Horner<TVector, Builtin::u64(0x3fe5555555555593ULL), Builtin::u64(0x3fd2492494229359ULL), Builtin::u64(0x3fc7466496cb03deULL), Builtin::u64(0x3fc2f112df3e5244ULL)>(w)))> t2 = ADV_UFCS(_operator_mul_mod)(z, Horner<TVector, Builtin::u64(0x3fe5555555555593ULL), Builtin::u64(0x3fd2492494229359ULL), Builtin::u64(0x3fc7466496cb03deULL), Builtin::u64(0x3fc2f112df3e5244ULL)>(w)); 
				#line 1165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_add_mod)(t2, t1))> r1 = ADV_UFCS(_operator_add_mod)(t2, t1); 
				#line 1166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(ADV_UFCS(_operator_mul_mod)(f, T{Builtin::f64(0.5)}), f))> hfsq = ADV_UFCS(_operator_mul_mod)(ADV_UFCS(_operator_mul_mod)(f, T{Builtin::f64(0.5)}), f); 
				#line 1167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_sub_mod)(f, hfsq))> hi = ADV_UFCS(_operator_sub_mod)(f, hfsq); 
				#line 1168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				hi = hi & ADV_UPCS(AsFloat64)((ADV_USPCS(AllBitsSet, Builtin::i64)() << Builtin::i32(32)).__ref());
				#line 1169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_sub_mod)(ADV_UFCS(_operator_sub_mod)(f, hi), hfsq), ADV_UFCS(_operator_mul_mod)(s, (ADV_UFCS(_operator_add_mod)(hfsq, r1)))))> lo = ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_sub_mod)(ADV_UFCS(_operator_sub_mod)(f, hi), hfsq), ADV_UFCS(_operator_mul_mod)(s, (ADV_UFCS(_operator_add_mod)(hfsq, r1)))); 
				#line 1170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(hi, FloatConstants<T>::InvLn10Hi))> valHi = ADV_UFCS(_operator_mul_mod)(hi, FloatConstants<T>::InvLn10Hi); 
				#line 1171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(dk, FloatConstants<T>::Log10_2Hi))> y = ADV_UFCS(_operator_mul_mod)(dk, FloatConstants<T>::Log10_2Hi); 
				#line 1172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_mul_mod)(dk, FloatConstants<T>::Log10_Lo), ADV_UFCS(_operator_mul_mod)((ADV_UFCS(_operator_add_mod)(lo, hi)), FloatConstants<T>::InvLn10Lo)), ADV_UFCS(_operator_mul_mod)(lo, FloatConstants<T>::InvLn10Hi)))> valLo = ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_mul_mod)(dk, FloatConstants<T>::Log10_Lo), ADV_UFCS(_operator_mul_mod)((ADV_UFCS(_operator_add_mod)(lo, hi)), FloatConstants<T>::InvLn10Lo)), ADV_UFCS(_operator_mul_mod)(lo, FloatConstants<T>::InvLn10Hi)); 
				#line 1174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_add_mod)(y, valHi))> w1 = ADV_UFCS(_operator_add_mod)(y, valHi); 
				#line 1175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_add_mod_eq)(valLo, ADV_UFCS(_operator_add_mod)((ADV_UFCS(_operator_sub_mod)(y, w1)), valHi));
				#line 1176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				valHi = w1;
				#line 1177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_add_mod)(valLo, valHi))> r = ADV_UFCS(_operator_add_mod)(valLo, valHi); 
				#line 1178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(TVector::ConditionalSelect(notZero, TVector::ConditionalSelect(ADV_UPCS(IsPositiveInfinity)(vec.__ref()), TVector::Create(ADV_USPCS(PositiveInfinity, Builtin::f64)()), r), TVector::Create(ADV_USPCS(NegativeInfinity, Builtin::f64)())))> zz = TVector::ConditionalSelect(notZero, TVector::ConditionalSelect(ADV_UPCS(IsPositiveInfinity)(vec.__ref()), TVector::Create(ADV_USPCS(PositiveInfinity, Builtin::f64)()), r), TVector::Create(ADV_USPCS(NegativeInfinity, Builtin::f64)())); 
				#line 1180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return TVector::ConditionalSelect(ADV_UFCS(_operator_not)((ADV_UPCS(IsPositive)(vec.__ref()))), TVector::Create(ADV_USPCS(NaN, Builtin::f64)()), zz);
			} else {
				#line 1181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				{
					#line 1182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					static_assert(Builtin::Boolean(false), "Unsupported type for Log10");
				}
			}
		}
		return {};
	}
#line 1186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Exp(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 1187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 1188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, Builtin::f32>()) {
			#line 1189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(NearbyInt(ADV_UFCS(_operator_mul_mod)(vec, FloatConstants<T>::InvLog2)))> k = NearbyInt(ADV_UFCS(_operator_mul_mod)(vec, FloatConstants<T>::InvLog2)); 
			#line 1190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(ADV_UFCS(FusedNegatedMultiplyAdd)(k.__ref(), FloatConstants<T>::Log2Hi, vec))> x = ADV_UFCS(FusedNegatedMultiplyAdd)(k.__ref(), FloatConstants<T>::Log2Hi, vec); 
			#line 1191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			x = ADV_UFCS(FusedNegatedMultiplyAdd)(k.__ref(), FloatConstants<T>::Log2Lo, x);
			#line 1192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(Horner<TVector, Builtin::u32(0x3f000000U), Builtin::u32(0x3e2aa9a5U), Builtin::u32(0x3d2aa957U), Builtin::u32(0x3c098d8bU), Builtin::u32(0x3ab778cfU)>(x))> y = Horner<TVector, Builtin::u32(0x3f000000U), Builtin::u32(0x3e2aa9a5U), Builtin::u32(0x3d2aa957U), Builtin::u32(0x3c098d8bU), Builtin::u32(0x3ab778cfU)>(x); 
			#line 1193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			x = ADV_UFCS(_operator_add_mod)(ADV_UFCS(FusedMultiplyAdd)(y.__ref(), ADV_UFCS(_operator_mul_mod)(x, x), x), TVector::One);
			#line 1194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			x = TVector::ConditionalSelect(ADV_UFCS(_operator_lt_eq_xor)(vec, FloatConstants<T>::MinLog), TVector::Zero, Ldexp(x, ADV_UFCS_TEMPLATE(ConvertTo<Builtin::i32>)(k.__ref())));
			#line 1195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			x = TVector::ConditionalSelect(ADV_UFCS(_operator_gt_eq_xor)(vec, FloatConstants<T>::MaxLog), TVector::Create(ADV_USPCS(PositiveInfinity, T)()), x);
			#line 1196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return x;
		} else {
			#line 1197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if constexpr (Builtin::TypeIs<T, Builtin::f64>()) {
				#line 1198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(NearbyInt(ADV_UFCS(_operator_mul_mod)(vec, FloatConstants<T>::InvLog2)))> k = NearbyInt(ADV_UFCS(_operator_mul_mod)(vec, FloatConstants<T>::InvLog2)); 
				#line 1199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(FusedNegatedMultiplyAdd)(k.__ref(), FloatConstants<T>::Log2Hi, vec))> hi = ADV_UFCS(FusedNegatedMultiplyAdd)(k.__ref(), FloatConstants<T>::Log2Hi, vec); 
				#line 1200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(k, FloatConstants<T>::Log2Lo))> lo = ADV_UFCS(_operator_mul_mod)(k, FloatConstants<T>::Log2Lo); 
				#line 1201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_sub_mod)(hi, lo))> x = ADV_UFCS(_operator_sub_mod)(hi, lo); 
				#line 1202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(x, x))> t = ADV_UFCS(_operator_mul_mod)(x, x); 
				#line 1203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				Builtin::Auto<decltype(ADV_UFCS(FusedNegatedMultiplyAdd)(t.__ref(), Horner<TVector, Builtin::u64(0x3fc555555555553eULL), Builtin::u64(0xbf66c16c16bebd93ULL), Builtin::u64(0x3f11566aaf25de2cULL), Builtin::u64(0xbebbbd41c5d26bf1ULL), Builtin::u64(0x3e66376972bea4d0ULL)>(t), x))> c = ADV_UFCS(FusedNegatedMultiplyAdd)(t.__ref(), Horner<TVector, Builtin::u64(0x3fc555555555553eULL), Builtin::u64(0xbf66c16c16bebd93ULL), Builtin::u64(0x3f11566aaf25de2cULL), Builtin::u64(0xbebbbd41c5d26bf1ULL), Builtin::u64(0x3e66376972bea4d0ULL)>(t), x); 
				#line 1205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				c = ADV_UFCS(_operator_sub_mod)(TVector::One, ((ADV_UFCS(_operator_sub_mod)((ADV_UFCS(_operator_sub_mod)(lo, (ADV_UFCS(_operator_mul_mod)(x, c)) / (ADV_UFCS(_operator_sub_mod)(TVector::Create(Builtin::i32(2)), c)))), hi))));
				#line 1206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				c = TVector::ConditionalSelect(ADV_UFCS(_operator_lt_eq_xor)(vec, FloatConstants<T>::MinLog), TVector::Zero, Ldexp(c, ADV_UFCS_TEMPLATE(ConvertTo<Builtin::i64>)(k.__ref())));
				#line 1207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				c = TVector::ConditionalSelect(ADV_UFCS(_operator_gt_eq_xor)(vec, FloatConstants<T>::MaxLog), TVector::Create(ADV_USPCS(PositiveInfinity, T)()), c);
				#line 1208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return c;
			} else {
				#line 1209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				{
					#line 1210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					static_assert(Builtin::Boolean(false), "Unsupported type for Exp");
				}
			}
		}
		return {};
	}
#line 1214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::ExpM1(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 1215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 1216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using IVector = SimdVector<FloatInt<T>, Arch>;
		#line 1217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, Builtin::f32>()) {
			#line 1218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(NearbyInt(ADV_UFCS(_operator_mul_mod)(vec, FloatConstants<T>::InvLog2)))> k = NearbyInt(ADV_UFCS(_operator_mul_mod)(vec, FloatConstants<T>::InvLog2)); 
			#line 1219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(ADV_UFCS(FusedNegatedMultiplyAdd)(k.__ref(), FloatConstants<T>::Log2Hi, vec))> x = ADV_UFCS(FusedNegatedMultiplyAdd)(k.__ref(), FloatConstants<T>::Log2Hi, vec); 
			#line 1220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			x = ADV_UFCS(FusedNegatedMultiplyAdd)(k.__ref(), FloatConstants<T>::Log2Lo, x);
			#line 1221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(x, Builtin::f32(0.5f)))> hx = ADV_UFCS(_operator_mul_mod)(x, Builtin::f32(0.5f)); 
			#line 1222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(x, hx))> hxs = ADV_UFCS(_operator_mul_mod)(x, hx); 
			#line 1223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(Horner<TVector, Builtin::u32(0x3F800000U), Builtin::u32(0xBD08887FU), Builtin::u32(0x3ACF6DB4U)>(hxs))> r = Horner<TVector, Builtin::u32(0x3F800000U), Builtin::u32(0xBD08887FU), Builtin::u32(0x3ACF6DB4U)>(hxs); 
			#line 1224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(FusedNegatedMultiplyAdd)(r.__ref(), hx, Builtin::f32(3.0f)))> t = ADV_UFCS(FusedNegatedMultiplyAdd)(r.__ref(), hx, Builtin::f32(3.0f)); 
			#line 1225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(hxs, ((ADV_UFCS(_operator_sub_mod)(r, t)) / (ADV_UFCS(_operator_sub_mod)(TVector::Create(Builtin::f32(6.0f)), ADV_UFCS(_operator_mul_mod)(x, t))))))> e = ADV_UFCS(_operator_mul_mod)(hxs, ((ADV_UFCS(_operator_sub_mod)(r, t)) / (ADV_UFCS(_operator_sub_mod)(TVector::Create(Builtin::f32(6.0f)), ADV_UFCS(_operator_mul_mod)(x, t))))); 
			#line 1226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			e = ADV_UFCS(FusedMultiplySub)(x.__ref(), e, hxs);
			#line 1227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS_TEMPLATE(ConvertTo<Builtin::i32>)(k.__ref()))> ik = ADV_UFCS_TEMPLATE(ConvertTo<Builtin::i32>)(k.__ref()); 
			#line 1228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UPCS(AsFloat32)(((ADV_UFCS(_operator_sub_mod)(IVector::Create(FloatConstants<T>::MaxExponent), ik)) << FloatConstants<T>::MantissaBits).__ref()))> two2mk = ADV_UPCS(AsFloat32)(((ADV_UFCS(_operator_sub_mod)(IVector::Create(FloatConstants<T>::MaxExponent), ik)) << FloatConstants<T>::MantissaBits).__ref()); 
			#line 1229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_sub_mod)(ADV_UFCS(_operator_sub_mod)(TVector::One, two2mk), (ADV_UFCS(_operator_sub_mod)(e, x))))> y = ADV_UFCS(_operator_sub_mod)(ADV_UFCS(_operator_sub_mod)(TVector::One, two2mk), (ADV_UFCS(_operator_sub_mod)(e, x))); 
			#line 1230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return Ldexp(y, ik);
		} else {
			#line 1231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if constexpr (Builtin::TypeIs<T, Builtin::f64>()) {
				#line 1232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(NearbyInt(ADV_UFCS(_operator_mul_mod)(vec, FloatConstants<T>::InvLog2)))> k = NearbyInt(ADV_UFCS(_operator_mul_mod)(vec, FloatConstants<T>::InvLog2)); 
				#line 1233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(FusedNegatedMultiplyAdd)(k.__ref(), FloatConstants<T>::Log2Hi, vec))> hi = ADV_UFCS(FusedNegatedMultiplyAdd)(k.__ref(), FloatConstants<T>::Log2Hi, vec); 
				#line 1234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(k, FloatConstants<T>::Log2Lo))> lo = ADV_UFCS(_operator_mul_mod)(k, FloatConstants<T>::Log2Lo); 
				#line 1235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_sub_mod)(hi, lo))> x = ADV_UFCS(_operator_sub_mod)(hi, lo); 
				#line 1236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(ADV_UFCS(_operator_mul_mod)(x, x), Builtin::f64(0.5)))> hxs = ADV_UFCS(_operator_mul_mod)(ADV_UFCS(_operator_mul_mod)(x, x), Builtin::f64(0.5)); 
				#line 1237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(Horner<TVector, Builtin::u64(0x3FF0000000000000ULL), Builtin::u64(0xBFA11111111110F4ULL), Builtin::u64(0x3F5A01A019FE5585ULL), Builtin::u64(0xBF14CE199EAADBB7ULL), Builtin::u64(0x3ED0CFCA86E65239ULL), Builtin::u64(0xBE8AFDB76E09C32DULL)>(hxs))> r = Horner<TVector, Builtin::u64(0x3FF0000000000000ULL), Builtin::u64(0xBFA11111111110F4ULL), Builtin::u64(0x3F5A01A019FE5585ULL), Builtin::u64(0xBF14CE199EAADBB7ULL), Builtin::u64(0x3ED0CFCA86E65239ULL), Builtin::u64(0xBE8AFDB76E09C32DULL)>(hxs); 
				#line 1239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_sub_mod)(TVector::Create(Builtin::f64(3.0)), ADV_UFCS(_operator_mul_mod)(ADV_UFCS(_operator_mul_mod)(r, x), Builtin::f64(0.5))))> t = ADV_UFCS(_operator_sub_mod)(TVector::Create(Builtin::f64(3.0)), ADV_UFCS(_operator_mul_mod)(ADV_UFCS(_operator_mul_mod)(r, x), Builtin::f64(0.5))); 
				#line 1240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(hxs, ((ADV_UFCS(_operator_sub_mod)(r, t)) / (ADV_UFCS(_operator_sub_mod)(TVector::Create(Builtin::f64(6.0)), ADV_UFCS(_operator_mul_mod)(x, t))))))> e = ADV_UFCS(_operator_mul_mod)(hxs, ((ADV_UFCS(_operator_sub_mod)(r, t)) / (ADV_UFCS(_operator_sub_mod)(TVector::Create(Builtin::f64(6.0)), ADV_UFCS(_operator_mul_mod)(x, t))))); 
				#line 1241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_sub_mod)((ADV_UFCS(_operator_sub_mod)(hi, x)), lo))> c = ADV_UFCS(_operator_sub_mod)((ADV_UFCS(_operator_sub_mod)(hi, x)), lo); 
				#line 1242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				e = ADV_UFCS(_operator_sub_mod)((ADV_UFCS(_operator_sub_mod)(ADV_UFCS(_operator_mul_mod)(x, (ADV_UFCS(_operator_sub_mod)(e, c))), c)), hxs);
				#line 1243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS_TEMPLATE(ConvertTo<Builtin::i64>)(k.__ref()))> ik = ADV_UFCS_TEMPLATE(ConvertTo<Builtin::i64>)(k.__ref()); 
				#line 1244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UPCS(AsFloat64)(((ADV_UFCS(_operator_sub_mod)(IVector::Create(FloatConstants<T>::MaxExponent), ik)) << FloatConstants<T>::MantissaBits).__ref()))> two2mk = ADV_UPCS(AsFloat64)(((ADV_UFCS(_operator_sub_mod)(IVector::Create(FloatConstants<T>::MaxExponent), ik)) << FloatConstants<T>::MantissaBits).__ref()); 
				#line 1245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_sub_mod)(ADV_UFCS(_operator_sub_mod)(TVector::One, two2mk), (ADV_UFCS(_operator_sub_mod)(e, x))))> ct1 = ADV_UFCS(_operator_sub_mod)(ADV_UFCS(_operator_sub_mod)(TVector::One, two2mk), (ADV_UFCS(_operator_sub_mod)(e, x))); 
				#line 1246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_sub_mod)(x, (ADV_UFCS(_operator_add_mod)(e, two2mk))), TVector::One))> ct2 = ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_sub_mod)(x, (ADV_UFCS(_operator_add_mod)(e, two2mk))), TVector::One); 
				#line 1247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(TVector::ConditionalSelect(ADV_UFCS(_operator_lt_xor)(k, Builtin::f64(20.0)), ct1, ct2))> y = TVector::ConditionalSelect(ADV_UFCS(_operator_lt_xor)(k, Builtin::f64(20.0)), ct1, ct2); 
				#line 1248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return Ldexp(y, ik);
			} else {
				#line 1249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				{
					#line 1250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					static_assert(Builtin::Boolean(false), "Unsupported type for ExpM1");
				}
			}
		}
		return {};
	}
#line 1254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Exp2(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 1255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 1256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, Builtin::f32>()) {
			#line 1257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(NearbyInt(vec))> k = NearbyInt(vec); 
			#line 1258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(ADV_UFCS(_operator_sub_mod)(vec, k))> x = ADV_UFCS(_operator_sub_mod)(vec, k); 
			#line 1259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(Horner<TVector, Builtin::u32(0x3e75fdf1U), Builtin::u32(0x3d6356ebU), Builtin::u32(0x3c1d9422U), Builtin::u32(0x3ab01218U), Builtin::u32(0x3922c8c4U)>(x))> y = Horner<TVector, Builtin::u32(0x3e75fdf1U), Builtin::u32(0x3d6356ebU), Builtin::u32(0x3c1d9422U), Builtin::u32(0x3ab01218U), Builtin::u32(0x3922c8c4U)>(x); 
			#line 1260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			x = ADV_UFCS(_operator_add_mod)(ADV_UFCS(FusedMultiplyAdd)(y.__ref(), ADV_UFCS(_operator_mul_mod)(x, x), ADV_UFCS(_operator_mul_mod)(x, FloatConstants<T>::Log2)), TVector::One);
			#line 1261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			x = TVector::ConditionalSelect(ADV_UFCS(_operator_lt_eq_xor)(vec, FloatConstants<T>::MinLog2), TVector::Zero, Ldexp(x, ADV_UFCS_TEMPLATE(ConvertTo<Builtin::i32>)(k.__ref())));
			#line 1262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			x = TVector::ConditionalSelect(ADV_UFCS(_operator_gt_eq_xor)(vec, FloatConstants<T>::MaxLog2), TVector::Create(ADV_USPCS(PositiveInfinity, T)()), x);
			#line 1263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return x;
		} else {
			#line 1264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if constexpr (Builtin::TypeIs<T, Builtin::f64>()) {
				#line 1265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(NearbyInt(vec))> k = NearbyInt(vec); 
				#line 1266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)((ADV_UFCS(_operator_sub_mod)(vec, k)), FloatConstants<T>::Log2))> x = ADV_UFCS(_operator_mul_mod)((ADV_UFCS(_operator_sub_mod)(vec, k)), FloatConstants<T>::Log2); 
				#line 1267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(x, x))> t = ADV_UFCS(_operator_mul_mod)(x, x); 
				#line 1268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				Builtin::Auto<decltype(ADV_UFCS(FusedNegatedMultiplyAdd)(t.__ref(), Horner<TVector, Builtin::u64(0x3fc555555555553eULL), Builtin::u64(0xbf66c16c16bebd93ULL), Builtin::u64(0x3f11566aaf25de2cULL), Builtin::u64(0xbebbbd41c5d26bf1ULL), Builtin::u64(0x3e66376972bea4d0ULL)>(t), x))> c = ADV_UFCS(FusedNegatedMultiplyAdd)(t.__ref(), Horner<TVector, Builtin::u64(0x3fc555555555553eULL), Builtin::u64(0xbf66c16c16bebd93ULL), Builtin::u64(0x3f11566aaf25de2cULL), Builtin::u64(0xbebbbd41c5d26bf1ULL), Builtin::u64(0x3e66376972bea4d0ULL)>(t), x); 
				#line 1270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				c = ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_add_mod)(TVector::One, x), ADV_UFCS(_operator_mul_mod)(x, c) / (ADV_UFCS(_operator_sub_mod)(TVector::Create(Builtin::i32(2)), c)));
				#line 1271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				c = TVector::ConditionalSelect(ADV_UFCS(_operator_lt_eq_xor)(vec, FloatConstants<T>::MinLog2), TVector::Zero, Ldexp(c, ADV_UFCS_TEMPLATE(ConvertTo<Builtin::i64>)(k.__ref())));
				#line 1272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				c = TVector::ConditionalSelect(ADV_UFCS(_operator_gt_eq_xor)(vec, FloatConstants<T>::MaxLog2), TVector::Create(ADV_USPCS(PositiveInfinity, T)()), c);
				#line 1273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return c;
			} else {
				#line 1274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				{
					#line 1275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					static_assert(Builtin::Boolean(false), "Unsupported type for Exp2");
				}
			}
		}
		return {};
	}
#line 1279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Exp10(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 1280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 1281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, Builtin::f32>()) {
			#line 1282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(NearbyInt(ADV_UFCS(_operator_mul_mod)(vec, FloatConstants<T>::InvLg2)))> k = NearbyInt(ADV_UFCS(_operator_mul_mod)(vec, FloatConstants<T>::InvLg2)); 
			#line 1283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(ADV_UFCS(FusedNegatedMultiplyAdd)(k.__ref(), FloatConstants<T>::Lg2Hi, vec))> x = ADV_UFCS(FusedNegatedMultiplyAdd)(k.__ref(), FloatConstants<T>::Lg2Hi, vec); 
			#line 1284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(_operator_sub_mod_eq)(x, ADV_UFCS(_operator_mul_mod)(k, FloatConstants<T>::Lg2Lo));
			#line 1285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(x, Horner<TVector, Builtin::u32(0x40135d8eU), Builtin::u32(0x4029a926U), Builtin::u32(0x400237daU), Builtin::u32(0x3f95eb4cU), Builtin::u32(0x3f0aacefU), Builtin::u32(0x3e54dff1U)>(x)))> y = ADV_UFCS(_operator_mul_mod)(x, Horner<TVector, Builtin::u32(0x40135d8eU), Builtin::u32(0x4029a926U), Builtin::u32(0x400237daU), Builtin::u32(0x3f95eb4cU), Builtin::u32(0x3f0aacefU), Builtin::u32(0x3e54dff1U)>(x)); 
			#line 1286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			x = ADV_UFCS(_operator_add_mod)(y, TVector::One);
			#line 1287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			x = TVector::ConditionalSelect(ADV_UFCS(_operator_lt_eq_xor)(vec, FloatConstants<T>::MinLog10), TVector::Zero, Ldexp(x, ADV_UFCS_TEMPLATE(ConvertTo<Builtin::i32>)(k.__ref())));
			#line 1288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			x = TVector::ConditionalSelect(ADV_UFCS(_operator_gt_eq_xor)(vec, FloatConstants<T>::MaxLog10), TVector::Create(ADV_USPCS(PositiveInfinity, T)()), x);
			#line 1289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return x;
		} else {
			#line 1290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if constexpr (Builtin::TypeIs<T, Builtin::f64>()) {
				#line 1291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(NearbyInt(ADV_UFCS(_operator_mul_mod)(vec, FloatConstants<T>::InvLg2)))> k = NearbyInt(ADV_UFCS(_operator_mul_mod)(vec, FloatConstants<T>::InvLg2)); 
				#line 1292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				Builtin::Auto<decltype(ADV_UFCS(FusedNegatedMultiplyAdd)(k.__ref(), FloatConstants<T>::Lg2Hi, vec))> x = ADV_UFCS(FusedNegatedMultiplyAdd)(k.__ref(), FloatConstants<T>::Lg2Hi, vec); 
				#line 1293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				x = ADV_UFCS(FusedNegatedMultiplyAdd)(k.__ref(), FloatConstants<T>::Lg2Lo, x);
				#line 1294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(x, x))> xx = ADV_UFCS(_operator_mul_mod)(x, x); 
				#line 1295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(x, Horner<TVector, Builtin::u64(0x40a2b4798e134a01ULL), Builtin::u64(0x40796b7a050349e4ULL), Builtin::u64(0x40277d9474c55934ULL), Builtin::u64(0x3fa4fd75f3062dd4ULL)>(xx)))> px = ADV_UFCS(_operator_mul_mod)(x, Horner<TVector, Builtin::u64(0x40a2b4798e134a01ULL), Builtin::u64(0x40796b7a050349e4ULL), Builtin::u64(0x40277d9474c55934ULL), Builtin::u64(0x3fa4fd75f3062dd4ULL)>(xx)); 
				#line 1296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(px / (ADV_UFCS(_operator_sub_mod)(Horner1<TVector, Builtin::u64(0x40a03f37650df6e2ULL), Builtin::u64(0x4093e05eefd67782ULL), Builtin::u64(0x405545fdce51ca08ULL)>(xx), px)))> x2 = px / (ADV_UFCS(_operator_sub_mod)(Horner1<TVector, Builtin::u64(0x40a03f37650df6e2ULL), Builtin::u64(0x4093e05eefd67782ULL), Builtin::u64(0x405545fdce51ca08ULL)>(xx), px)); 
				#line 1297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_add_mod)((ADV_UFCS(_operator_add_mod)(x2, x2)), TVector::One))> c = ADV_UFCS(_operator_add_mod)((ADV_UFCS(_operator_add_mod)(x2, x2)), TVector::One); 
				#line 1298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				c = TVector::ConditionalSelect(ADV_UFCS(_operator_lt_eq_xor)(vec, FloatConstants<T>::MinLog10), TVector::Zero, Ldexp(c, ADV_UFCS_TEMPLATE(ConvertTo<Builtin::i64>)(k.__ref())));
				#line 1299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				c = TVector::ConditionalSelect(ADV_UFCS(_operator_gt_eq_xor)(vec, FloatConstants<T>::MaxLog10), TVector::Create(ADV_USPCS(PositiveInfinity, T)()), c);
				#line 1300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return c;
			} else {
				#line 1301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				{
					#line 1302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					static_assert(Builtin::Boolean(false), "Unsupported type for Exp10");
				}
			}
		}
		return {};
	}
#line 1306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Sum(const SimdVector<T, Arch>& vec)  -> const T
	{
		#line 1307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard1307{};
			#line 1308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			BufferedVector<T, SimdVector<T,Arch>::Length> buf{}; 
			#line 1309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(StoreAligned)(vec.__ref(), (__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(buf.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
			#line 1310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			T acc{}; 
			#line 1311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{ auto __for_init_1311 = buf.__ref().buffer; auto __for_iter_1311 = ADV_UFCS(Iterate)(__for_init_1311.__ref()); while(__for_iter_1311.__ref().MoveNext()) {
			auto&& val = __for_iter_1311.__ref().GetCurrent(); {
				#line 1312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				acc += val;
			}}}
			#line 1314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return acc;
		}
		return {};
	}
#line 1318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Product(const SimdVector<T, Arch>& vec)  -> const T
	{
		#line 1319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard1319{};
			#line 1320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			BufferedVector<T, SimdVector<T,Arch>::Length> buf{}; 
			#line 1321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(StoreAligned)(vec.__ref(), (__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(buf.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
			#line 1322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(T{Builtin::i32(1)})> acc = T{Builtin::i32(1)}; 
			#line 1323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{ auto __for_init_1323 = buf.__ref().buffer; auto __for_iter_1323 = ADV_UFCS(Iterate)(__for_init_1323.__ref()); while(__for_iter_1323.__ref().MoveNext()) {
			auto&& val = __for_iter_1323.__ref().GetCurrent(); {
				#line 1324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				acc *= val;
			}}}
			#line 1326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return acc;
		}
		return {};
	}
#line 1330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::MinElement(const SimdVector<T, Arch>& vec)  -> const T
	{
		#line 1331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard1331{};
			#line 1332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			BufferedVector<T, SimdVector<T,Arch>::Length> buf{}; 
			#line 1333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(StoreAligned)(vec.__ref(), (__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(buf.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
			#line 1334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			T result = ADV_UFCS(_operator_subscript)(buf.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0)); 
			#line 1335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{ auto __for_init_1335 = buf.__ref().buffer; auto __for_iter_1335 = ADV_UFCS(Iterate)(__for_init_1335.__ref()); while(__for_iter_1335.__ref().MoveNext()) {
			auto&& val = __for_iter_1335.__ref().GetCurrent(); {
				#line 1336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				result = ADV_UFCS(Min)(result.__ref(), val);
			}}}
			#line 1338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return result;
		}
		return {};
	}
#line 1342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::MaxElement(const SimdVector<T, Arch>& vec)  -> const T
	{
		#line 1343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard1343{};
			#line 1344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			BufferedVector<T, SimdVector<T,Arch>::Length> buf{}; 
			#line 1345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(StoreAligned)(vec.__ref(), (__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(buf.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
			#line 1346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			T result = ADV_UFCS(_operator_subscript)(buf.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0)); 
			#line 1347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{ auto __for_init_1347 = buf.__ref().buffer; auto __for_iter_1347 = ADV_UFCS(Iterate)(__for_init_1347.__ref()); while(__for_iter_1347.__ref().MoveNext()) {
			auto&& val = __for_iter_1347.__ref().GetCurrent(); {
				#line 1348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				result = ADV_UFCS(Max)(result.__ref(), val);
			}}}
			#line 1350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return result;
		}
		return {};
	}
#line 1362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class V, uint64_t c> auto CommonInstructions::Coef() noexcept -> const V
	{
		#line 1363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using Value = typename V::TValue;
		#line 1364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<Value, Builtin::f32>()) {
			#line 1365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return V::Create(ADV_USFCS((Builtin::f32), FromBits)(Builtin::Cast<true, Builtin::u32>(c)));
		} else {
			#line 1366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if constexpr (Builtin::TypeIs<Value, Builtin::f64>()) {
				#line 1367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return V::Create(ADV_USFCS((Builtin::f64), FromBits)(c));
			} else {
				#line 1368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				{
					#line 1369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					static_assert(Builtin::Boolean(false), "Unsupported type for Coef");
				}
			}
		}
		return {};
	}
#line 1373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	inline constexpr auto CommonInstructions::ShuffleInternal(Builtin::i32 w, Builtin::i32 x, Builtin::i32 y, Builtin::i32 z)  -> const Builtin::i32
	{
		#line 1373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		ADV_EXPRESSION_BODY((z << Builtin::i32(6)) | (y << Builtin::i32(4)) | (x << Builtin::i32(2)) | w); 
	}
#line 1374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	inline constexpr auto CommonInstructions::ShuffleInternal(Builtin::i32 x, Builtin::i32 y)  -> const Builtin::i32
	{
		#line 1374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		ADV_EXPRESSION_BODY((y << Builtin::i32(1)) | x); 
	}
#line 1375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	inline constexpr auto CommonInstructions::ModShuffle(Builtin::i32 w, Builtin::i32 x, Builtin::i32 y, Builtin::i32 z)  -> const Builtin::i32
	{
		#line 1375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		ADV_EXPRESSION_BODY(ShuffleInternal(w % Builtin::i32(4), x % Builtin::i32(4), y % Builtin::i32(4), z % Builtin::i32(4))); 
	}
#line 1376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	inline constexpr auto CommonInstructions::ModShuffle(Builtin::i32 x, Builtin::i32 y)  -> const Builtin::i32
	{
		#line 1376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		ADV_EXPRESSION_BODY(ShuffleInternal(x % Builtin::i32(2), y % Builtin::i32(2))); 
	}
#line 1378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class V> inline auto CommonInstructions::Horner(const V& __var_1378_34) noexcept -> const V
	{
		#line 1378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(Zero, V)()); 
	}
#line 1379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class V, uint64_t C0> inline auto CommonInstructions::Horner(const V& __var_1379_43) noexcept -> const V
	{
		#line 1379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		ADV_EXPRESSION_BODY(Coef<V, C0>()); 
	}
#line 1380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class V, uint64_t C0, uint64_t C1, uint64_t... Tail> inline auto CommonInstructions::Horner(const V& vec) noexcept -> const V
	{
		#line 1381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return vec.__ref().FusedMultiplyAdd(Horner<V, C1, Tail...>(vec), Coef<V, C0>());
	}
#line 1384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class V> inline auto CommonInstructions::Horner1(const V& __var_1384_35) noexcept -> const V
	{
		#line 1384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(One, V)()); 
	}
#line 1385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class V, uint64_t C0> inline auto CommonInstructions::Horner1(const V& vec) noexcept -> const V
	{
		#line 1385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		ADV_EXPRESSION_BODY(vec + Coef<V, C0>()); 
	}
#line 1386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class V, uint64_t C0, uint64_t C1, uint64_t... Tail> inline auto CommonInstructions::Horner1(const V& vec) noexcept -> const V
	{
		#line 1387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return vec.__ref().FusedMultiplyAdd(Horner1<V, C1, Tail...>(vec), Coef<V, C0>());
	}
#line 1486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class Arch> auto CommonInstructions::Quadrant(const SimdVector<Builtin::i32, Arch>& vec)  -> const SimdVector<Builtin::i32, Arch>
	{
		#line 1487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return vec & Builtin::i32(3);
	}
#line 1490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class Arch> auto CommonInstructions::Quadrant(const SimdVector<Builtin::f32, Arch>& vec)  -> const SimdVector<Builtin::f32, Arch>
	{
		#line 1491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return ADV_UFCS_TEMPLATE(ConvertTo<Builtin::f32>)(Quadrant(ADV_UFCS_TEMPLATE(ConvertTo<Builtin::i32>)(vec.__ref())).__ref());
	}
#line 1494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class Arch> auto CommonInstructions::Quadrant(const SimdVector<Builtin::f64, Arch>& vec)  -> const SimdVector<Builtin::f64, Arch>
	{
		#line 1495 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(vec, Builtin::f64(0.25)))> a = ADV_UFCS(_operator_mul_mod)(vec, Builtin::f64(0.25)); 
		#line 1496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return ADV_UFCS(_operator_mul_mod)((ADV_UFCS(_operator_sub_mod)(a, ADV_UPCS(Floor)(a.__ref()))), Builtin::f64(4.0));
	}
#line 1499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class V> auto CommonInstructions::TrigReduce(const V& x, Builtin::MutableRef<V> __xref__) noexcept -> const V
	{
		V& xref = __xref__;
		#line 1500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using Value = typename V::TValue;
		#line 1502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if (ADV_UFCS(LessThanOrEqualAll)(x.__ref(), FloatConstants<Value>::PiO4)) {
			#line 1503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			xref = x;
			#line 1504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return V::Zero;
		} else {
			#line 1505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if (ADV_UFCS(LessThanOrEqualAll)(x.__ref(), FloatConstants<Value>::PiO2)) {
				#line 1506 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_gt_xor)(x, FloatConstants<Value>::PiO4))> test1 = ADV_UFCS(_operator_gt_xor)(x, FloatConstants<Value>::PiO4); 
				#line 1507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				xref = ADV_UFCS(_operator_sub_mod)(x, FloatConstants<Value>::PiO2_1);
				#line 1508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_sub_mod_eq)(xref, FloatConstants<Value>::PiO2_2);
				#line 1509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_sub_mod_eq)(xref, FloatConstants<Value>::PiO2_3);
				#line 1510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				xref = V::ConditionalSelect(test1, xref, x);
				#line 1511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return V::ConditionalSelect(test1, V::One, V::Zero);
			} else {
				#line 1512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				if (ADV_UFCS(LessThanOrEqualAll)(x.__ref(), FloatConstants<Value>::TwentyPi)) {
					#line 1513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					const Builtin::Auto<decltype(NearbyInt(ADV_UFCS(_operator_mul_mod)(x, FloatConstants<Value>::TwoOPi)))> xi = NearbyInt(ADV_UFCS(_operator_mul_mod)(x, FloatConstants<Value>::TwoOPi)); 
					#line 1514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					xref = ADV_UFCS(FusedNegatedMultiplyAdd)(xi.__ref(), FloatConstants<Value>::PiO2_1, x);
					#line 1515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					ADV_UFCS(_operator_sub_mod_eq)(xref, ADV_UFCS(_operator_mul_mod)(xi, FloatConstants<Value>::PiO2_2));
					#line 1516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					ADV_UFCS(_operator_sub_mod_eq)(xref, ADV_UFCS(_operator_mul_mod)(xi, FloatConstants<Value>::PiO2_3));
					#line 1517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					return Quadrant(xi);
				} else {
					#line 1518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					if (ADV_UFCS(LessThanOrEqualAll)(x.__ref(), FloatConstants<Value>::MediumPi)) {
						#line 1519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
						const Builtin::Auto<decltype(NearbyInt(ADV_UFCS(_operator_mul_mod)(x, FloatConstants<Value>::TwoOPi)))> fn = NearbyInt(ADV_UFCS(_operator_mul_mod)(x, FloatConstants<Value>::TwoOPi)); 
						#line 1520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
						Builtin::Auto<decltype(ADV_UFCS(_operator_sub_mod)(x, ADV_UFCS(_operator_mul_mod)(fn, FloatConstants<Value>::PiO2_1)))> r = ADV_UFCS(_operator_sub_mod)(x, ADV_UFCS(_operator_mul_mod)(fn, FloatConstants<Value>::PiO2_1)); 
						#line 1521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
						Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(fn, FloatConstants<Value>::PiO2_1t))> w = ADV_UFCS(_operator_mul_mod)(fn, FloatConstants<Value>::PiO2_1t); 
						#line 1522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
						Builtin::Auto<decltype(r)> t = r; 
						#line 1523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
						w = ADV_UFCS(_operator_mul_mod)(fn, FloatConstants<Value>::PiO2_2);
						#line 1524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
						r = ADV_UFCS(_operator_sub_mod)(t, w);
						#line 1525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
						w = ADV_UFCS(_operator_sub_mod)(ADV_UFCS(_operator_mul_mod)(fn, FloatConstants<Value>::PiO2_2t), ((ADV_UFCS(_operator_sub_mod)((ADV_UFCS(_operator_sub_mod)(t, r)), w))));
						#line 1526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
						t = r;
						#line 1527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
						w = ADV_UFCS(_operator_mul_mod)(fn, FloatConstants<Value>::PiO2_3);
						#line 1528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
						r = ADV_UFCS(_operator_sub_mod)(t, w);
						#line 1529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
						w = ADV_UFCS(_operator_sub_mod)(ADV_UFCS(_operator_mul_mod)(fn, FloatConstants<Value>::PiO2_3t), ((ADV_UFCS(_operator_sub_mod)((ADV_UFCS(_operator_sub_mod)(t, r)), w))));
						#line 1530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
						xref = ADV_UFCS(_operator_sub_mod)(r, w);
						#line 1531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
						return Quadrant(fn);
					} else {
						#line 1532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
						{
							#line 1533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
							constexpr Builtin::Auto<decltype(Builtin::i32{V::Length})> size = Builtin::i32{V::Length};
							#line 1534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
							BufferedVector<Value, size> tmp{}; 
							#line 1535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
							BufferedVector<Value, size> txr{}; 
							#line 1536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
							BufferedVector<Value, size> args{}; 
							#line 1537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
							{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard1537{};
								#line 1538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
								ADV_UFCS(StoreAligned)(x.__ref(), (__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(args.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
								#line 1539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
								{ auto __for_init_1539 = System::Range<Builtin::Auto<decltype(size)>, false>({}, size); auto __for_iter_1539 = ADV_UFCS(Iterate)(__for_init_1539.__ref()); while(__for_iter_1539.__ref().MoveNext()) {
								auto&& i = __for_iter_1539.__ref().GetCurrent(); {
									#line 1540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
									Builtin::f64 arg = ADV_UFCS(_operator_subscript)(args.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i); 
									#line 1541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
									if (ADV_UPCS(IsInfinity)(arg.__ref())) {
										#line 1542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
										ADV_UFCS(_operator_subscript)(tmp.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) = Value{Builtin::i32(0)};
										#line 1543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
										ADV_UFCS(_operator_subscript)(txr.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) = _BUILTIN_GET_EXTENSION_STATIC_PROPERTY(NaN, Value);
									} else {
										#line 1544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
										{
											#line 1545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
											Builtin::f64 y0{}, y1{}; 
											#line 1546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
											const Builtin::Auto<decltype(Builtin::RemPiO2(arg, UnsafePointerCast<CDouble>((__RawPtr(std::addressof(y0))))))> n = Builtin::RemPiO2(arg, UnsafePointerCast<CDouble>((__RawPtr(std::addressof(y0))))); 
											#line 1547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
											ADV_UFCS(_operator_subscript)(tmp.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) = Value{n & Builtin::i32(3)};
											#line 1548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
											ADV_UFCS(_operator_subscript)(txr.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) = Value{y0};
										}
									}
								}}}
								#line 1551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
								xref = V::LoadAligned((__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(txr.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
								#line 1552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
								return V::LoadAligned((__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(tmp.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
							}
						}
					}
				}
			}
		}
		return {};
	}
#line 1557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class Arch> auto CommonInstructions::SinEval(const SimdVector<Builtin::f32, Arch>& z, const SimdVector<Builtin::f32, Arch>& x)  -> const SimdVector<Builtin::f32, Arch>
	{
		#line 1558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(Horner<SimdVector<Builtin::f32, Arch>, Builtin::u32(0xbe2aaaa2U), Builtin::u32(0x3c08839dU), Builtin::u32(0xb94ca1f9U)>(z))> y = Horner<SimdVector<Builtin::f32, Arch>, Builtin::u32(0xbe2aaaa2U), Builtin::u32(0x3c08839dU), Builtin::u32(0xb94ca1f9U)>(z); 
		#line 1559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return ADV_UFCS(FusedMultiplyAdd)((ADV_UFCS(_operator_mul_mod)(y, z)).__ref(), x, x);
	}
#line 1562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class Arch> auto CommonInstructions::SinEval(const SimdVector<Builtin::f64, Arch>& z, const SimdVector<Builtin::f64, Arch>& x)  -> const SimdVector<Builtin::f64, Arch>
	{
		#line 1563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(Horner<SimdVector<Builtin::f64, Arch>, Builtin::u64(0xbfc5555555555548ULL), Builtin::u64(0x3f8111111110f7d0ULL), Builtin::u64(0xbf2a01a019bfdf03ULL), Builtin::u64(0x3ec71de3567d4896ULL), Builtin::u64(0xbe5ae5e5a9291691ULL), Builtin::u64(0x3de5d8fd1fcf0ec1ULL)>(z))> y = Horner<SimdVector<Builtin::f64, Arch>, Builtin::u64(0xbfc5555555555548ULL), Builtin::u64(0x3f8111111110f7d0ULL), Builtin::u64(0xbf2a01a019bfdf03ULL), Builtin::u64(0x3ec71de3567d4896ULL), Builtin::u64(0xbe5ae5e5a9291691ULL), Builtin::u64(0x3de5d8fd1fcf0ec1ULL)>(z); 
		#line 1565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return ADV_UFCS(FusedMultiplyAdd)((ADV_UFCS(_operator_mul_mod)(y, z)).__ref(), x, x);
	}
#line 1568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class Arch> auto CommonInstructions::CosEval(const SimdVector<Builtin::f32, Arch>& z)  -> const SimdVector<Builtin::f32, Arch>
	{
		#line 1569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<Builtin::f32, Arch>;
		#line 1570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(Horner<TVector, Builtin::u32(0x3d2aaaa5U), Builtin::u32(0xbab60619U), Builtin::u32(0x37ccf5ceU)>(z))> y = Horner<TVector, Builtin::u32(0x3d2aaaa5U), Builtin::u32(0xbab60619U), Builtin::u32(0x37ccf5ceU)>(z); 
		#line 1571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return ADV_UFCS(_operator_add_mod)(TVector::One, ADV_UFCS(FusedMultiplyAdd)(z.__ref(), TVector::Create(Builtin::f32(-0.5f)), ADV_UFCS(_operator_mul_mod)(ADV_UFCS(_operator_mul_mod)(y, z), z)));
	}
#line 1574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class Arch> auto CommonInstructions::CosEval(const SimdVector<Builtin::f64, Arch>& z)  -> const SimdVector<Builtin::f64, Arch>
	{
		#line 1575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<Builtin::f64, Arch>;
		#line 1576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(Horner<TVector, Builtin::u64(0x3fe0000000000000ULL), Builtin::u64(0xbfa5555555555551ULL), Builtin::u64(0x3f56c16c16c15d47ULL), Builtin::u64(0xbefa01a019ddbcd9ULL), Builtin::u64(0x3e927e4f8e06d9a5ULL), Builtin::u64(0xbe21eea7c1e514d4ULL), Builtin::u64(0x3da8ff831ad9b219ULL)>(z))> y = Horner<TVector, Builtin::u64(0x3fe0000000000000ULL), Builtin::u64(0xbfa5555555555551ULL), Builtin::u64(0x3f56c16c16c15d47ULL), Builtin::u64(0xbefa01a019ddbcd9ULL), Builtin::u64(0x3e927e4f8e06d9a5ULL), Builtin::u64(0xbe21eea7c1e514d4ULL), Builtin::u64(0x3da8ff831ad9b219ULL)>(z); 
		#line 1578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return ADV_UFCS(_operator_sub_mod)(TVector::One, ADV_UFCS(_operator_mul_mod)(y, z));
	}
#line 1581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class Arch> auto CommonInstructions::TanEval(const SimdVector<Builtin::f32, Arch>& z, const SimdMask<Builtin::f32, Arch>& test1)  -> const SimdVector<Builtin::f32, Arch>
	{
		#line 1582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<Builtin::f32, Arch>;
		#line 1583 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(z, z))> zz = ADV_UFCS(_operator_mul_mod)(z, z); 
		#line 1584 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		Builtin::Auto<decltype(Horner<SimdVector<Builtin::f32, Arch>, Builtin::u32(0x3eaaaa6fU), Builtin::u32(0x3e0896ddU), Builtin::u32(0x3d5ac5c9U), Builtin::u32(0x3cc821b5U), Builtin::u32(0x3b4c779cU), Builtin::u32(0x3c19c53bU)>(zz))> y = Horner<SimdVector<Builtin::f32, Arch>, Builtin::u32(0x3eaaaa6fU), Builtin::u32(0x3e0896ddU), Builtin::u32(0x3d5ac5c9U), Builtin::u32(0x3cc821b5U), Builtin::u32(0x3b4c779cU), Builtin::u32(0x3c19c53bU)>(zz); 
		#line 1585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		y = ADV_UFCS(FusedMultiplyAdd)(y.__ref(), ADV_UFCS(_operator_mul_mod)(zz, z), z);
		#line 1586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return TVector::ConditionalSelect(test1, y, TVector::Create(Builtin::i32(-1)) / y);
	}
#line 1589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class Arch> auto CommonInstructions::TanEval(const SimdVector<Builtin::f64, Arch>& z, const SimdMask<Builtin::f64, Arch>& test1)  -> const SimdVector<Builtin::f64, Arch>
	{
		#line 1590 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<Builtin::f64, Arch>;
		#line 1591 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(z, z))> zz = ADV_UFCS(_operator_mul_mod)(z, z); 
		#line 1592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(Horner<TVector, Builtin::u64(0xc1711fead3299176ULL), Builtin::u64(0x413199eca5fc9dddULL), Builtin::u64(0xc0c992d8d24f3f38ULL)>(zz))> num = Horner<TVector, Builtin::u64(0xc1711fead3299176ULL), Builtin::u64(0x413199eca5fc9dddULL), Builtin::u64(0xc0c992d8d24f3f38ULL)>(zz); 
		#line 1593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(Horner<TVector, Builtin::u64(0xc189afe03cbe5a31ULL), Builtin::u64(0x4177d98fc2ead8efULL), Builtin::u64(0xc13427bc582abc96ULL), Builtin::u64(0x40cab8a5eeb36572ULL)>(zz))> den = Horner<TVector, Builtin::u64(0xc189afe03cbe5a31ULL), Builtin::u64(0x4177d98fc2ead8efULL), Builtin::u64(0xc13427bc582abc96ULL), Builtin::u64(0x40cab8a5eeb36572ULL)>(zz); 
		#line 1594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(FusedMultiplyAdd)(z.__ref(), (ADV_UFCS(_operator_mul_mod)(zz, (num / den))), z))> y = ADV_UFCS(FusedMultiplyAdd)(z.__ref(), (ADV_UFCS(_operator_mul_mod)(zz, (num / den))), z); 
		#line 1595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return TVector::ConditionalSelect(test1, y, TVector::Create(Builtin::i32(-1)) / y);
	}
#line 1598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::AtanEval(const SimdVector<T, Arch>& x, const SimdVector<T, Arch>& recx)  -> const SimdVector<T, Arch>
	{
		#line 1599 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 1600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, Builtin::f32>()) {
			#line 1601 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_lt_xor)(x, FloatConstants<f32>::Tan3PiO8))> flag1 = ADV_UFCS(_operator_lt_xor)(x, FloatConstants<f32>::Tan3PiO8); 
			#line 1602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype((ADV_UFCS(_operator_gt_eq_xor)(x, ADV_USFCS((Builtin::f32), FromBits)(Builtin::u32(0x3ed413cdU)))) & flag1)> flag2 = (ADV_UFCS(_operator_gt_eq_xor)(x, ADV_USFCS((Builtin::f32), FromBits)(Builtin::u32(0x3ed413cdU)))) & flag1; 
			#line 1603 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(TVector::ConditionalSelect(flag1, TVector::Zero, TVector::Create(FloatConstants<f32>::PiO2)))> yy = TVector::ConditionalSelect(flag1, TVector::Zero, TVector::Create(FloatConstants<f32>::PiO2)); 
			#line 1604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			yy = TVector::ConditionalSelect(flag2, TVector::Create(FloatConstants<f32>::PiO4), yy);
			#line 1605 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(TVector::ConditionalSelect(flag1, x, -recx))> xx = TVector::ConditionalSelect(flag1, x, -recx); 
			#line 1606 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			xx = TVector::ConditionalSelect(flag2, (ADV_UFCS(_operator_sub_mod)(x, TVector::One)) / (ADV_UFCS(_operator_add_mod)(x, TVector::One)), xx);
			#line 1607 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(xx, xx))> z = ADV_UFCS(_operator_mul_mod)(xx, xx); 
			#line 1608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(Horner<TVector, Builtin::u32(0xbeaaaa2aU), Builtin::u32(0x3e4c925fU), Builtin::u32(0xbe0e1b85U), Builtin::u32(0x3da4f0d1U)>(z))> z1 = Horner<TVector, Builtin::u32(0xbeaaaa2aU), Builtin::u32(0x3e4c925fU), Builtin::u32(0xbe0e1b85U), Builtin::u32(0x3da4f0d1U)>(z); 
			#line 1609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			z1 = ADV_UFCS(FusedMultiplyAdd)(xx.__ref(), ADV_UFCS(_operator_mul_mod)(z1, z), xx);
			#line 1610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			z1 = TVector::ConditionalSelect(flag2, ADV_UFCS(_operator_add_mod)(z1, FloatConstants<f32>::PiO4_Lo), z1);
			#line 1611 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			z1 = TVector::ConditionalSelect(ADV_UFCS(_operator_eq_eq_xor)(flag1, SimdMask<T,Arch>::False), ADV_UFCS(_operator_add_mod)(z1, FloatConstants<f32>::PiO2_Lo), z1);
			#line 1612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return ADV_UFCS(_operator_add_mod)(yy, z1);
		} else {
			#line 1613 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{
				#line 1614 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_lt_xor)(x, FloatConstants<f64>::Tan3PiO8))> flag1 = ADV_UFCS(_operator_lt_xor)(x, FloatConstants<f64>::Tan3PiO8); 
				#line 1615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype((ADV_UFCS(_operator_gt_eq_xor)(x, FloatConstants<f64>::TanPiO8)) & flag1)> flag2 = (ADV_UFCS(_operator_gt_eq_xor)(x, FloatConstants<f64>::TanPiO8)) & flag1; 
				#line 1616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				Builtin::Auto<decltype(TVector::ConditionalSelect(flag1, TVector::Zero, TVector::Create(FloatConstants<f64>::PiO2)))> yy = TVector::ConditionalSelect(flag1, TVector::Zero, TVector::Create(FloatConstants<f64>::PiO2)); 
				#line 1617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				yy = TVector::ConditionalSelect(flag2, TVector::Create(FloatConstants<f64>::PiO4), yy);
				#line 1618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				Builtin::Auto<decltype(TVector::ConditionalSelect(flag1, x, -recx))> xx = TVector::ConditionalSelect(flag1, x, -recx); 
				#line 1619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				xx = TVector::ConditionalSelect(flag2, (ADV_UFCS(_operator_sub_mod)(x, TVector::One)) / (ADV_UFCS(_operator_add_mod)(x, TVector::One)), xx);
				#line 1620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(xx, xx))> z = ADV_UFCS(_operator_mul_mod)(xx, xx); 
				#line 1621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_mul_mod_eq)(z, Horner<TVector, Builtin::u64(0xc0503669fd28ec8eULL), Builtin::u64(0xc05eb8bf2d05ba25ULL), Builtin::u64(0xc052c08c36880273ULL), Builtin::u64(0xc03028545b6b807aULL), Builtin::u64(0xbfec007fa1f72594ULL)>(z) / Horner1<TVector, Builtin::u64(0x4068519efbbd62ecULL), Builtin::u64(0x407e563f13b049eaULL), Builtin::u64(0x407b0e18d2e2be3bULL), Builtin::u64(0x4064a0dd43b8fa25ULL), Builtin::u64(0x4038dbc45b14603cULL)>(z));
				#line 1623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				z = ADV_UFCS(FusedMultiplyAdd)(xx.__ref(), z, xx);
				#line 1624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				z = TVector::ConditionalSelect(flag2, ADV_UFCS(_operator_add_mod)(z, FloatConstants<f64>::PiO4_Lo), z);
				#line 1625 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				z = ADV_UFCS(_operator_add_mod)(z, TVector::ConditionalSelect(flag1, TVector::Zero, TVector::Create(FloatConstants<f64>::PiO2_Lo)));
				#line 1626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return ADV_UFCS(_operator_add_mod)(yy, z);
			}
		}
		return {};
	}
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	

}