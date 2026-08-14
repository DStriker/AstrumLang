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
		#line 1842 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		template<class T, size_t $tparam$Length> struct alignas(size_t((Builtin::i32(64)))) BufferedVector final : public Builtin::Struct {
			
			private: static constexpr Builtin::usize Length = $tparam$Length;
			public: using __self = BufferedVector<T, Length>;
			public: using __class = __Class_BufferedVector<T, Length>;
			public: FORCE_INLINE constexpr decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) __ref() const noexcept { return *this; }
			public: BufferedVector() = default;
			public: BufferedVector(Builtin::InlineArray<Length, T> _buffer) : buffer{_buffer} {}
			#line 1843 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: Builtin::InlineArray<Length, T> buffer; ADV_CHECK_REF_STRUCT("T[Length]", Builtin::InlineArray<Length, T>);
			template <size_t I, class T, size_t Length> friend auto& get(BufferedVector<T, Length>&);
			template <size_t I, class T, size_t Length> friend const auto& get(const BufferedVector<T, Length>&);
			
		};
		
		protected: 
		#line 1875 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		template<> struct FloatConstants<Builtin::f32> : public Builtin::StaticClass {
			public: using __self = FloatConstants<Builtin::f32>;
			private: FloatConstants() = default;
			#line 1876 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto PiO2 = ADV_USFCS_NONLOCAL((Builtin::f32), FromBits)(Builtin::u32(0x3fc90fdbU));
			#line 1877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto PiO2_1 = ADV_USFCS_NONLOCAL((Builtin::f32), FromBits)(Builtin::u32(0x3fc90f80U));
			#line 1878 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto PiO2_1t = ADV_USFCS_NONLOCAL((Builtin::f32), FromBits)(Builtin::u32(0x37354443U));
			#line 1879 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto PiO2_2 = ADV_USFCS_NONLOCAL((Builtin::f32), FromBits)(Builtin::u32(0x37354400U));
			#line 1880 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto PiO2_2t = ADV_USFCS_NONLOCAL((Builtin::f32), FromBits)(Builtin::u32(0x2e85a308U));
			#line 1881 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto PiO2_3 = ADV_USFCS_NONLOCAL((Builtin::f32), FromBits)(Builtin::u32(0x2e85a300U));
			#line 1882 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto PiO2_3t = ADV_USFCS_NONLOCAL((Builtin::f32), FromBits)(Builtin::u32(0x248d3132U));
			#line 1883 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto PiO2_Lo = ADV_USFCS_NONLOCAL((Builtin::f32), FromBits)(Builtin::u32(0xb33bbd2eU));
			#line 1884 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto PiO4_Lo = ADV_USFCS_NONLOCAL((Builtin::f32), FromBits)(Builtin::u32(0xb2bbbd2eU));
			#line 1885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto TwoOPi = ADV_USFCS_NONLOCAL((Builtin::f32), FromBits)(Builtin::u32(0x3f22f983U));
			#line 1886 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto TwentyPi = ADV_USFCS_NONLOCAL((Builtin::f32), FromBits)(Builtin::u32(0x427b53d1U));
			#line 1887 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto PiO4 = ADV_USFCS_NONLOCAL((Builtin::f32), FromBits)(Builtin::u32(0x3f490fdbU));
			#line 1888 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto MediumPi = ADV_USFCS_NONLOCAL((Builtin::f32), FromBits)(Builtin::u32(0x43490fdbU));
			#line 1889 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto SignMask = ADV_USFCS_NONLOCAL((Builtin::f32), FromBits)(Builtin::u32(0x80000000U));
			#line 1890 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto SqrtEps = ADV_USFCS_NONLOCAL((Builtin::f32), FromBits)(Builtin::u32(0x39b504f3U));
			#line 1891 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto Tan3PiO8 = ADV_USFCS_NONLOCAL((Builtin::f32), FromBits)(Builtin::u32(0x401a827aU));
			#line 1892 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto TanPiO8 = ADV_USFCS_NONLOCAL((Builtin::f32), FromBits)(Builtin::u32(0x3ed413cdU));
			#line 1893 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto MaxLog = Builtin::f32(88.3762626647949f);
			#line 1894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto MinLog = Builtin::f32(-88.3762626647949f);
			#line 1895 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto MaxLog2 = Builtin::f32(127.0f);
			#line 1896 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto MinLog2 = Builtin::f32(-127.0f);
			#line 1897 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto MaxLog10 = Builtin::f32(38.23080825805664f);
			#line 1898 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto MinLog10 = Builtin::f32(-37.89999771118164f);
			#line 1899 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto Log2 = Builtin::f32(0.6931471805599453094172321214581765680755001343602553f);
			#line 1900 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto Log2Hi = ADV_USFCS_NONLOCAL((Builtin::f32), FromBits)(Builtin::u32(0x3f318000U));
			#line 1901 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto Log2Lo = ADV_USFCS_NONLOCAL((Builtin::f32), FromBits)(Builtin::u32(0xb95e8083U));
			#line 1902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto Lg2Hi = ADV_USFCS_NONLOCAL((Builtin::f32), FromBits)(Builtin::u32(0x3e9a0000U));
			#line 1903 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto Lg2Lo = ADV_USFCS_NONLOCAL((Builtin::f32), FromBits)(Builtin::u32(0x39826a14U));
			#line 1904 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto InvLog2 = Builtin::f32(1.442695040888963407359924681001892137426645954152986f);
			#line 1905 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto InvLog2Hi = ADV_USFCS_NONLOCAL((Builtin::f32), FromBits)(Builtin::u32(0x3fb8b000U));
			#line 1906 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto InvLog2Lo = ADV_USFCS_NONLOCAL((Builtin::f32), FromBits)(Builtin::u32(0xb9389ad4U));
			#line 1907 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto InvLg2 = Builtin::f32(3.32192809488736234787031942949f);
			#line 1908 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto Log10_2Hi = Builtin::f32(3.0102920532e-1f);
			#line 1909 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto Log10_2Lo = Builtin::f32(7.9034151668e-7f);
			#line 1910 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto InvLn10Hi = Builtin::f32(4.3432617188e-1f);
			#line 1911 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto InvLn10Lo = Builtin::f32(-3.1689971365e-5f);
			#line 1912 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto OneOTwoEps = ADV_USFCS_NONLOCAL((Builtin::f32), FromBits)(Builtin::u32(0x4a800000U));
			#line 1913 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto OneOSqrtEps = ADV_USFCS_NONLOCAL((Builtin::f32), FromBits)(Builtin::u32(0x453504f3U));
			#line 1914 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto Mask1Frexp = Builtin::i32(0x7f800000);
			#line 1915 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto Mask2Frexp = Builtin::i32(0x3f000000);
			#line 1916 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto MaxExponent = Builtin::i32(127);
			#line 1917 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto MaxExponentM1 = Builtin::i32(126);
			#line 1918 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto MantissaBits = Builtin::i32(23);
			#line 1919 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto TwoToNmb = Builtin::f32(8388608.0f);
			#line 1920 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto TwoToNmbO3 = Builtin::u32(0x3ba14518U);
			
		};
		
		protected: 
		#line 1922 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		template<> struct FloatConstants<Builtin::f64> : public Builtin::StaticClass {
			public: using __self = FloatConstants<Builtin::f64>;
			private: FloatConstants() = default;
			#line 1923 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto PiO2 = ADV_USFCS_NONLOCAL((Builtin::f64), FromBits)(Builtin::u64(0x3ff921fb54442d18ULL));
			#line 1924 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto PiO2_1 = ADV_USFCS_NONLOCAL((Builtin::f64), FromBits)(Builtin::u64(0x3ff921fb54400000ULL));
			#line 1925 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto PiO2_1t = ADV_USFCS_NONLOCAL((Builtin::f64), FromBits)(Builtin::u64(0x3dd0b4611a626331ULL));
			#line 1926 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto PiO2_2 = ADV_USFCS_NONLOCAL((Builtin::f64), FromBits)(Builtin::u64(0x3dd0b4611a600000ULL));
			#line 1927 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto PiO2_2t = ADV_USFCS_NONLOCAL((Builtin::f64), FromBits)(Builtin::u64(0x3ba3198a2e037073ULL));
			#line 1928 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto PiO2_3 = ADV_USFCS_NONLOCAL((Builtin::f64), FromBits)(Builtin::u64(0x3ba3198a2e000000ULL));
			#line 1929 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto PiO2_3t = ADV_USFCS_NONLOCAL((Builtin::f64), FromBits)(Builtin::u64(0x397b839a252049c1ULL));
			#line 1930 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto PiO2_Lo = ADV_USFCS_NONLOCAL((Builtin::f64), FromBits)(Builtin::u64(0x3c91a62633145c07ULL));
			#line 1931 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto PiO4_Lo = ADV_USFCS_NONLOCAL((Builtin::f64), FromBits)(Builtin::u64(0x3c81a62633145c07ULL));
			#line 1932 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto TwoOPi = ADV_USFCS_NONLOCAL((Builtin::f64), FromBits)(Builtin::u64(0x3fe45f306dc9c883ULL));
			#line 1933 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto TwentyPi = ADV_USFCS_NONLOCAL((Builtin::f64), FromBits)(Builtin::u64(0x404f6a7a2955385eULL));
			#line 1934 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto PiO4 = ADV_USFCS_NONLOCAL((Builtin::f64), FromBits)(Builtin::u64(0x3fe921fb54442d18ULL));
			#line 1935 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto MediumPi = ADV_USFCS_NONLOCAL((Builtin::f64), FromBits)(Builtin::u64(0x412921fb54442d18ULL));
			#line 1936 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto SignMask = ADV_USFCS_NONLOCAL((Builtin::f64), FromBits)(Builtin::u64(0x8000000000000000ULL));
			#line 1937 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto SqrtEps = ADV_USFCS_NONLOCAL((Builtin::f64), FromBits)(Builtin::u64(0x3e50000000000000ULL));
			#line 1938 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto Tan3PiO8 = ADV_USFCS_NONLOCAL((Builtin::f64), FromBits)(Builtin::u64(0x4003504f333f9de6ULL));
			#line 1939 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto TanPiO8 = ADV_USFCS_NONLOCAL((Builtin::f64), FromBits)(Builtin::u64(0x3fda827999fcef31ULL));
			#line 1940 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto MaxLog = Builtin::f64(709.78271289338400);
			#line 1941 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto MinLog = Builtin::f64(-708.3964185322641);
			#line 1942 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto MaxLog2 = Builtin::f64(1023.0);
			#line 1943 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto MinLog2 = Builtin::f64(-1023.0);
			#line 1944 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto MaxLog10 = Builtin::f64(308.2547155599167);
			#line 1945 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto MinLog10 = Builtin::f64(-308.2547155599167);
			#line 1946 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto Log2 = Builtin::f64(0.6931471805599453094172321214581765680755001343602553);
			#line 1947 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto Log2Hi = ADV_USFCS_NONLOCAL((Builtin::f64), FromBits)(Builtin::u64(0x3fe62e42fee00000ULL));
			#line 1948 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto Log2Lo = ADV_USFCS_NONLOCAL((Builtin::f64), FromBits)(Builtin::u64(0x3dea39ef35793c76ULL));
			#line 1949 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto Lg2Hi = ADV_USFCS_NONLOCAL((Builtin::f64), FromBits)(Builtin::u64(0x3fd3440000000000ULL));
			#line 1950 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto Lg2Lo = ADV_USFCS_NONLOCAL((Builtin::f64), FromBits)(Builtin::u64(0x3ed3509f79fef312ULL));
			#line 1951 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto InvLog2 = Builtin::f64(1.442695040888963407359924681001892137426645954152986);
			#line 1952 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto InvLog2Hi = ADV_USFCS_NONLOCAL((Builtin::f64), FromBits)(Builtin::u64(0x3ff7154765200000ULL));
			#line 1953 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto InvLog2Lo = ADV_USFCS_NONLOCAL((Builtin::f64), FromBits)(Builtin::u64(0x3de705fc2eefa200ULL));
			#line 1954 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto InvLg2 = Builtin::f64(3.32192809488736234787031942949);
			#line 1955 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto Log10_2Hi = Builtin::f64(3.01029995663611771306e-1);
			#line 1956 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto Log10_2Lo = Builtin::f64(3.69423907715893078616e-13);
			#line 1957 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto InvLn10Hi = Builtin::f64(4.34294481878168880939e-1);
			#line 1958 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto InvLn10Lo = Builtin::f64(2.50829467116452752298e-11);
			#line 1959 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto OneOTwoEps = ADV_USFCS_NONLOCAL((Builtin::f64), FromBits)(Builtin::u64(0x4320000000000000ULL));
			#line 1960 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto OneOSqrtEps = ADV_USFCS_NONLOCAL((Builtin::f64), FromBits)(Builtin::u64(0x4190000000000000ULL));
			#line 1961 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto Mask1Frexp = Builtin::i64(0x7ff0000000000000LL);
			#line 1962 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto Mask2Frexp = Builtin::i64(0x3fe0000000000000LL);
			#line 1963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto MaxExponent = Builtin::i32(1023);
			#line 1964 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto MaxExponentM1 = Builtin::i32(1022);
			#line 1965 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto MantissaBits = Builtin::i32(52);
			#line 1966 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto TwoToNmb = Builtin::f64(4503599627370496.0);
			#line 1967 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			public: static constexpr auto TwoToNmbO3 = Builtin::u64(0x3ed428a2f98d7286ULL);
			
		};
		
		protected: 
		
		#line 1842 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
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
		
		#line 1839 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: template<class T> using FloatInt = std::conditional_t<Builtin::TypeIs<T, Builtin::f32>(), Builtin::i32, Builtin::i64>;
		private: CommonInstructions() = default;
		#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> [[clang::annotate("unsafe")]] static auto LoadAligned(Builtin::Unsafe::__RawPtr<const T> src)  -> const SimdVector<T, Arch>;
		#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> [[clang::annotate("unsafe")]] static auto Load(Builtin::Unsafe::__RawPtr<const T> src)  -> const SimdVector<T, Arch>;
		#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> [[clang::annotate("unsafe")]] static auto LoadMask(Builtin::Unsafe::__RawPtr<const bool> src)  -> const SimdMask<T, Arch>;
		#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> [[clang::annotate("unsafe")]] static auto StoreAligned(const SimdVector<T, Arch>& src, Builtin::Unsafe::__RawPtr<T> dst)  -> void;
		#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> [[clang::annotate("unsafe")]] static auto Store(const SimdVector<T, Arch>& src, Builtin::Unsafe::__RawPtr<T> dst)  -> void;
		#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> [[clang::annotate("unsafe")]] static auto Store(const SimdMask<T, Arch>& src, Builtin::Unsafe::__RawPtr<bool> dst)  -> void;
		#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Broadcast(T val)  -> const SimdVector<T, Arch>;
		#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class Arch, class T, class... Args> static auto CreateFrom(T val0, Args... vals)  -> const SimdVector<T, Arch>;
		#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch, class... Ts> static auto CreateMaskFrom(Ts... values)  -> const SimdMask<T, Arch>;
		#line 70 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto MaskFromScalar(Builtin::u64 mask)  -> const SimdMask<T, Arch>;
		#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto MaskToScalar(const SimdMask<T, Arch>& mask)  -> const Builtin::u64;
		#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Abs(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto BitOfSign(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto FromMask(const SimdMask<T, Arch>& mask)  -> const SimdVector<T, Arch>;
		#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto GetElement(const SimdVector<T, Arch>& vec, Builtin::usize index)  -> const T;
		#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto GetMaskElement(const SimdMask<T, Arch>& vec, Builtin::usize index)  -> const bool;
		#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Equal(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdMask<T, Arch>;
		#line 155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Equal(const SimdMask<T, Arch>& left, const SimdMask<T, Arch>& right)  -> const SimdMask<T, Arch>;
		#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto NotEqual(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdMask<T, Arch>;
		#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto NotEqual(const SimdMask<T, Arch>& left, const SimdMask<T, Arch>& right)  -> const SimdMask<T, Arch>;
		#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Less(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdMask<T, Arch>;
		#line 203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto LessOrEqual(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdMask<T, Arch>;
		#line 215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Greater(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdMask<T, Arch>;
		#line 227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto GreaterOrEqual(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdMask<T, Arch>;
		#line 239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto First(const SimdVector<T, Arch>& vec)  -> const T;
		#line 243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Select(const SimdMask<T, Arch>& condition, const SimdVector<T, Arch>& trueVec, const SimdVector<T, Arch>& falseVec)  -> const SimdVector<T, Arch>;
		#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<int32_t I0, int32_t I1, class Arch, class T> static auto Swizzle(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<int32_t I0, int32_t I1, int32_t I2, int32_t I3, class Arch, class T> static auto Swizzle(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<int32_t I0, int32_t I1, int32_t I2, int32_t I3, int32_t I4, int32_t I5, int32_t I6, int32_t I7, class Arch, class T> static auto Swizzle(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto WrappingAdd(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>;
		#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto WrappingSubtract(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>;
		#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto WrappingMultiply(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>;
		#line 323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto WrappingDivide(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>;
		#line 346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto WrappingMod(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>;
		#line 368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto WrappingNegate(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto BitwiseNot(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto BitwiseNot(const SimdMask<T, Arch>& vec)  -> const SimdMask<T, Arch>;
		#line 405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto BitwiseAnd(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>;
		#line 416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto BitwiseAnd(const SimdMask<T, Arch>& left, const SimdMask<T, Arch>& right)  -> const SimdVector<T, Arch>;
		#line 427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto BitwiseAndNot(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>;
		#line 438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto BitwiseAndNot(const SimdMask<T, Arch>& left, const SimdMask<T, Arch>& right)  -> const SimdVector<T, Arch>;
		#line 449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto BitwiseOr(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>;
		#line 460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto BitwiseOr(const SimdMask<T, Arch>& left, const SimdMask<T, Arch>& right)  -> const SimdVector<T, Arch>;
		#line 471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto BitwiseXor(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>;
		#line 482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto BitwiseXor(const SimdMask<T, Arch>& left, const SimdMask<T, Arch>& right)  -> const SimdVector<T, Arch>;
		#line 494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto LeftShift(const SimdVector<T, Arch>& vec, Builtin::i32 shift)  -> const SimdVector<T, Arch>;
		#line 507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto LeftShift(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>;
		#line 523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto RightShift(const SimdVector<T, Arch>& vec, Builtin::i32 shift)  -> const SimdVector<T, Arch>;
		#line 536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto RightShift(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>;
		#line 552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto UnsignedRightShift(const SimdVector<T, Arch>& vec, Builtin::i32 shift)  -> const SimdVector<T, Arch>;
		#line 565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto UnsignedRightShift(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>;
		#line 581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto All(const SimdMask<T, Arch>& vec)  -> const bool;
		#line 585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Any(const SimdMask<T, Arch>& vec)  -> const bool;
		#line 589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Max(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>;
		#line 604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Min(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>;
		#line 620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Average(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>;
		#line 633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto AverageReverse(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>;
		#line 643 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T2, class T1, class Arch> static auto BitwiseCast(const SimdVector<T1, Arch>& vec)  -> const SimdVector<T2, Arch>;
		#line 651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto OverflowingAdd(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const std::tuple<SimdVector<T, Arch>, SimdMask<T, Arch>>;
		#line 665 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto StrictAdd(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>;
		#line 673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Add(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>;
		#line 681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto OverflowingSubtract(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const std::tuple<SimdVector<T, Arch>, SimdMask<T, Arch>>;
		#line 695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto StrictSubtract(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>;
		#line 703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Subtract(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>;
		#line 711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto OverflowingMultiply(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const std::tuple<SimdVector<T, Arch>, SimdMask<T, Arch>>;
		#line 721 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto StrictMultiply(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>;
		#line 729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Multiply(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>;
		#line 737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto OverflowingDivide(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const std::tuple<SimdVector<T, Arch>, SimdMask<T, Arch>>;
		#line 750 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto StrictDivide(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>;
		#line 758 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Divide(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>;
		#line 766 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto OverflowingMod(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const std::tuple<SimdVector<T, Arch>, SimdMask<T, Arch>>;
		#line 779 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto StrictMod(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>;
		#line 787 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Mod(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>;
		#line 799 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto OverflowingNegate(const SimdVector<T, Arch>& vec)  -> const std::tuple<SimdVector<T, Arch>, SimdMask<T, Arch>>;
		#line 808 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto StrictNegate(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Negate(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 824 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> inline static auto FusedMultiplyAdd(const SimdVector<T, Arch>& x, const SimdVector<T, Arch>& y, const SimdVector<T, Arch>& z)  -> const SimdVector<T, Arch>;
		#line 827 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> inline static auto FusedMultiplySub(const SimdVector<T, Arch>& x, const SimdVector<T, Arch>& y, const SimdVector<T, Arch>& z)  -> const SimdVector<T, Arch>;
		#line 830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> inline static auto FusedNegatedMultiplyAdd(const SimdVector<T, Arch>& x, const SimdVector<T, Arch>& y, const SimdVector<T, Arch>& z)  -> const SimdVector<T, Arch>;
		#line 833 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> inline static auto FusedNegatedMultiplySub(const SimdVector<T, Arch>& x, const SimdVector<T, Arch>& y, const SimdVector<T, Arch>& z)  -> const SimdVector<T, Arch>;
		#line 836 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T2, class T1, class Arch> static auto Convert(const SimdVector<T1, Arch>& vec)  -> const SimdVector<T2, Arch>;
		#line 851 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Clamp(const SimdVector<T, Arch>& vec, const SimdVector<T, Arch>& min, const SimdVector<T, Arch>& max)  -> const SimdVector<T, Arch>;
		#line 861 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Lerp(const SimdVector<T, Arch>& min, const SimdVector<T, Arch>& max, const SimdVector<T, Arch>& amount)  -> const SimdVector<T, Arch>;
		#line 871 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Truncate(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 884 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Ceil(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 890 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Floor(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 896 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Round(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 910 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto RoundTiesEven(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 928 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto NearbyInt(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 939 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Sin(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 956 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Cos(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 973 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto SinCos(const SimdVector<T, Arch>& vec)  -> const std::tuple<SimdVector<T, Arch>, SimdVector<T, Arch>>;
		#line 993 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Tan(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 1006 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Asin(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 1038 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Acos(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 1053 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Atan(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 1062 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto SignNotZero(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 1073 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Atan2(const SimdVector<T, Arch>& x, const SimdVector<T, Arch>& y)  -> const SimdVector<T, Arch>;
		#line 1082 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Sinh(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 1111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Cosh(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 1122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Tanh(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 1149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Asinh(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 1177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Acosh(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 1187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Atanh(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 1199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto IsNaN(const SimdVector<T, Arch>& x)  -> const SimdMask<T, Arch>;
		#line 1203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto IsInfinity(const SimdVector<T, Arch>& x)  -> const SimdMask<T, Arch>;
		#line 1210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto IsFinite(const SimdVector<T, Arch>& x)  -> const SimdMask<T, Arch>;
		#line 1217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto IsInteger(const SimdVector<T, Arch>& x)  -> const SimdMask<T, Arch>;
		#line 1224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto IsEvenInteger(const SimdVector<T, Arch>& x)  -> const SimdMask<T, Arch>;
		#line 1232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto IsOddInteger(const SimdVector<T, Arch>& x)  -> const SimdMask<T, Arch>;
		#line 1239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Reciprocal(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 1243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto ReciprocalSqrt(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 1247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Sqrt(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 1261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Pow(const SimdVector<T, Arch>& x, const SimdVector<T, Arch>& y)  -> const SimdVector<T, Arch>;
		#line 1274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto IPow(const SimdVector<T, Arch>& x, Builtin::i32 exp)  -> const SimdVector<T, Arch>;
		#line 1300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto WrappingIPow(const SimdVector<T, Arch>& x, Builtin::i32 exp)  -> const SimdVector<T, Arch>;
		#line 1319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto StrictIPow(const SimdVector<T, Arch>& x, Builtin::i32 exp)  -> const SimdVector<T, Arch>;
		#line 1338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Hypot(const SimdVector<T, Arch>& x, const SimdVector<T, Arch>& y)  -> const SimdVector<T, Arch>;
		#line 1343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Frexp(const SimdVector<T, Arch>& vec)  -> const std::tuple<SimdVector<T, Arch>, SimdVector<FloatInt<T>, Arch>>;
		#line 1374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Ldexp(const SimdVector<T, Arch>& x, SimdVector<FloatInt<T>, Arch> exp)  -> const SimdVector<T, Arch>;
		#line 1386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Cbrt(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 1453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Ln(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 1517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Ln1P(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 1524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Log2(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 1594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Log10(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 1670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Exp(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 1698 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto ExpM1(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 1738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Exp2(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 1763 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Exp10(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>;
		#line 1790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Sum(const SimdVector<T, Arch>& vec)  -> const T;
		#line 1802 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto Product(const SimdVector<T, Arch>& vec)  -> const T;
		#line 1814 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto MinElement(const SimdVector<T, Arch>& vec)  -> const T;
		#line 1826 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		public: template<class T, class Arch> static auto MaxElement(const SimdVector<T, Arch>& vec)  -> const T;
		#line 1846 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: template<class V, uint64_t c> static auto Coef() noexcept -> const V;
		#line 1857 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: inline constexpr static auto ShuffleInternal(Builtin::i32 w, Builtin::i32 x, Builtin::i32 y, Builtin::i32 z)  -> const Builtin::i32;
		#line 1858 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: inline constexpr static auto ShuffleInternal(Builtin::i32 x, Builtin::i32 y)  -> const Builtin::i32;
		#line 1859 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: inline constexpr static auto ModShuffle(Builtin::i32 w, Builtin::i32 x, Builtin::i32 y, Builtin::i32 z)  -> const Builtin::i32;
		#line 1860 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: inline constexpr static auto ModShuffle(Builtin::i32 x, Builtin::i32 y)  -> const Builtin::i32;
		#line 1862 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: template<class V> inline static auto Horner(const V& __var_1862_34) noexcept -> const V;
		#line 1863 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: template<class V, uint64_t C0> inline static auto Horner(const V& __var_1863_43) noexcept -> const V;
		#line 1864 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: template<class V, uint64_t C0, uint64_t C1, uint64_t... Tail> inline static auto Horner(const V& vec) noexcept -> const V;
		#line 1868 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: template<class V> inline static auto Horner1(const V& __var_1868_35) noexcept -> const V;
		#line 1869 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: template<class V, uint64_t C0> inline static auto Horner1(const V& vec) noexcept -> const V;
		#line 1870 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: template<class V, uint64_t C0, uint64_t C1, uint64_t... Tail> inline static auto Horner1(const V& vec) noexcept -> const V;
		#line 1970 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: template<class Arch> static auto Quadrant(const SimdVector<Builtin::i32, Arch>& vec)  -> const SimdVector<Builtin::i32, Arch>;
		#line 1974 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: template<class Arch> static auto Quadrant(const SimdVector<Builtin::f32, Arch>& vec)  -> const SimdVector<Builtin::f32, Arch>;
		#line 1978 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: template<class Arch> static auto Quadrant(const SimdVector<Builtin::f64, Arch>& vec)  -> const SimdVector<Builtin::f64, Arch>;
		#line 1983 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: template<class V> static auto TrigReduce(const V& x, Builtin::MutableRef<V> __xref__) noexcept -> const V;
		#line 2041 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: template<class Arch> static auto SinEval(const SimdVector<Builtin::f32, Arch>& z, const SimdVector<Builtin::f32, Arch>& x)  -> const SimdVector<Builtin::f32, Arch>;
		#line 2046 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: template<class Arch> static auto SinEval(const SimdVector<Builtin::f64, Arch>& z, const SimdVector<Builtin::f64, Arch>& x)  -> const SimdVector<Builtin::f64, Arch>;
		#line 2052 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: template<class Arch> static auto CosEval(const SimdVector<Builtin::f32, Arch>& z)  -> const SimdVector<Builtin::f32, Arch>;
		#line 2058 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: template<class Arch> static auto CosEval(const SimdVector<Builtin::f64, Arch>& z)  -> const SimdVector<Builtin::f64, Arch>;
		#line 2065 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: template<class Arch> static auto TanEval(const SimdVector<Builtin::f32, Arch>& z, const SimdMask<Builtin::f32, Arch>& test1)  -> const SimdVector<Builtin::f32, Arch>;
		#line 2073 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: template<class Arch> static auto TanEval(const SimdVector<Builtin::f64, Arch>& z, const SimdMask<Builtin::f64, Arch>& test1)  -> const SimdVector<Builtin::f64, Arch>;
		#line 2082 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: template<class T, class Arch> static auto AtanEval(const SimdVector<T, Arch>& x, const SimdVector<T, Arch>& recx)  -> const SimdVector<T, Arch>;
		#line 2114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: template<size_t I, int32_t V0, int32_t... Vs> inline constexpr static auto GetAt() noexcept -> const Builtin::i32;
		#line 2122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: template<size_t I, size_t N, int32_t... Vs> inline constexpr static auto IsDupLoInternal() noexcept -> const bool;
		#line 2132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: template<int32_t... Vs> inline constexpr static auto IsDupLo() noexcept -> const bool;
		#line 2135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: template<size_t I, size_t N, int32_t... Vs> inline constexpr static auto IsDupHiInternal() noexcept -> const bool;
		#line 2146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: template<int32_t... Vs> inline constexpr static auto IsDupHi() noexcept -> const bool;
		#line 2149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: template<size_t I> inline constexpr static auto IdentityInternal() noexcept -> const bool;
		#line 2150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: template<size_t I, int32_t V0, int32_t... Vs> inline constexpr static auto IdentityInternal() noexcept -> const bool;
		#line 2153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: template<int32_t... Vs> inline constexpr static auto IsIdentity() noexcept -> const bool;
		#line 2156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: template<size_t I, int32_t V0, int32_t... Vs> inline constexpr static auto GetNth() noexcept -> const Builtin::i32;
		#line 2163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: template<size_t I, size_t N, size_t H, int32_t... Vs> inline constexpr static auto IsCrossLaneInternal() noexcept -> const bool;
		#line 2173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: template<int32_t... Vs> inline constexpr static auto IsCrossLane() noexcept -> const bool;
		#line 2180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		protected: ASTRUMSTD_API static auto Morton(Builtin::u16 x, Builtin::u16 y) noexcept -> const Builtin::u32;
		
	};
	
	//###############################################################################
//# Function definitions
//###############################################################################

#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::LoadAligned(Builtin::Unsafe::__RawPtr<const T> src)  -> const SimdVector<T, Arch>
	{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;
		Builtin::CheckForUnsafeContext(); Builtin::UnsafeContextGuard __unsafe_context_guard10{};
		#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		SimdVector<T, Arch> vec{}; 
		#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		std::memcpy((__RawPtr(std::addressof(vec))), src, Builtin::usize(sizeof (vec)));
		#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return vec;
	}
#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Load(Builtin::Unsafe::__RawPtr<const T> src)  -> const SimdVector<T, Arch>
	{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;
		Builtin::CheckForUnsafeContext(); Builtin::UnsafeContextGuard __unsafe_context_guard16{};
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		SimdVector<T, Arch> vec{}; 
		#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		std::memcpy((__RawPtr(std::addressof(vec))), src, Builtin::usize(sizeof (vec)));
		#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return vec;
	}
#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::LoadMask(Builtin::Unsafe::__RawPtr<const bool> src)  -> const SimdMask<T, Arch>
	{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;
		Builtin::CheckForUnsafeContext(); Builtin::UnsafeContextGuard __unsafe_context_guard22{};
		#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TMask = SimdMask<T, Arch>;
		#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		constexpr Builtin::Auto<decltype(Builtin::i32{TMask::Length})> size = Builtin::i32{TMask::Length};
		#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> buf{}; 
		#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{ auto __for_init_26 = System::Range<Builtin::Auto<decltype(size)>, false>({}, size); auto __for_iter_26 = ADV_UFCS(Iterate)(__for_init_26.__ref()); while(__for_iter_26.__ref().MoveNext()) {
		auto&& i = __for_iter_26.__ref().GetCurrent(); {
			#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(_operator_subscript)(buf.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) = ADV_UFCS(_operator_subscript)(src.__ref(), i) ? ADV_USPCS(AllBitsSet, T)() : ADV_USPCS(Zero, T)();
		}}}
		#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return (*(UnsafePointerCast<TMask>((__RawPtr(std::addressof(buf))))));
	}
#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::StoreAligned(const SimdVector<T, Arch>& src, Builtin::Unsafe::__RawPtr<T> dst)  -> void
	{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;
		Builtin::CheckForUnsafeContext(); Builtin::UnsafeContextGuard __unsafe_context_guard32{};
		#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		std::memcpy(dst, (__RawPtr(std::addressof(src))), Builtin::usize(sizeof (src)));
	}
#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Store(const SimdVector<T, Arch>& src, Builtin::Unsafe::__RawPtr<T> dst)  -> void
	{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;
		Builtin::CheckForUnsafeContext(); Builtin::UnsafeContextGuard __unsafe_context_guard36{};
		#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		std::memcpy(dst, (__RawPtr(std::addressof(src))), Builtin::usize(sizeof (src)));
	}
#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Store(const SimdMask<T, Arch>& src, Builtin::Unsafe::__RawPtr<bool> dst)  -> void
	{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;
		Builtin::CheckForUnsafeContext(); Builtin::UnsafeContextGuard __unsafe_context_guard40{};
		#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TMask = SimdMask<T, Arch>;
		#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		constexpr Builtin::Auto<decltype(TMask::Length)> size = TMask::Length;
		#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufSrc{}; 
		#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		std::memcpy((__RawPtr(std::addressof(bufSrc))), (__RawPtr(std::addressof(src))), Builtin::usize(sizeof (src)));
		#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{ auto __for_init_45 = System::Range<Builtin::Auto<decltype(size)>, false>({}, size); auto __for_iter_45 = ADV_UFCS(Iterate)(__for_init_45.__ref()); while(__for_iter_45.__ref().MoveNext()) {
		auto&& i = __for_iter_45.__ref().GetCurrent(); {
			#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(_operator_subscript)(dst.__ref(), i) = ADV_UFCS(_operator_subscript)(bufSrc.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) != T{Builtin::i32(0)};
		}}}
	}
#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Broadcast(T val)  -> const SimdVector<T, Arch>
	{
		#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> size = TVector::Length;
		#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard53{};
			#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			BufferedVector<T, size> buf{}; 
			#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{ auto __for_init_55 = System::Range<Builtin::Auto<decltype(size)>, false>({}, size); auto __for_iter_55 = ADV_UFCS(Iterate)(__for_init_55.__ref()); while(__for_iter_55.__ref().MoveNext()) {
			auto&& i = __for_iter_55.__ref().GetCurrent(); {
				#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_subscript)(buf.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) = val;
			}}}
			#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return LoadAligned<T, Arch>((__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(buf.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
		}
		return {};
	}
#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class Arch, class T, class... Args> auto CommonInstructions::CreateFrom(T val0, Args... vals)  -> const SimdVector<T, Arch>
	{
		#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return {  };
	}
#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch, class... Ts> auto CommonInstructions::CreateMaskFrom(Ts... values)  -> const SimdMask<T, Arch>
	{
		#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return {  };
	}
#line 70 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::MaskFromScalar(Builtin::u64 mask)  -> const SimdMask<T, Arch>
	{
		#line 71 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TMask = SimdMask<T, Arch>;
		#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		constexpr Builtin::Auto<decltype(Builtin::i32{TMask::Length})> size = Builtin::i32{TMask::Length};
		#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard73{};
			#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			BufferedVector<bool, size> buf{}; 
			#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{ auto __for_init_75 = System::Range<Builtin::Auto<decltype(size)>, false>({}, size); auto __for_iter_75 = ADV_UFCS(Iterate)(__for_init_75.__ref()); while(__for_iter_75.__ref().MoveNext()) {
			auto&& i = __for_iter_75.__ref().GetCurrent(); {
				#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_subscript)(buf.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) = (mask & (Builtin::u32(1U) << i));
			}}}
			#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return LoadMask<T, Arch>((__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(buf.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
		}
		return {};
	}
#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::MaskToScalar(const SimdMask<T, Arch>& mask)  -> const Builtin::u64
	{
		#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TMask = SimdMask<T, Arch>;
		#line 84 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		constexpr Builtin::Auto<decltype(Builtin::i32{TMask::Length})> size = Builtin::i32{TMask::Length};
		#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard85{};
			#line 86 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			BufferedVector<T, size> buf{}; 
			#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			std::memcpy((__RawPtr(std::addressof(buf))), (__RawPtr(std::addressof(mask))), Builtin::usize(sizeof (mask)));
			#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::u64 scalar{}; 
			#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{ auto __for_init_89 = System::Range<Builtin::Auto<decltype(size)>, false>({}, size); auto __for_iter_89 = ADV_UFCS(Iterate)(__for_init_89.__ref()); while(__for_iter_89.__ref().MoveNext()) {
			auto&& i = __for_iter_89.__ref().GetCurrent(); {
				#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				scalar |= (ADV_UFCS(_operator_subscript)(buf.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) != T{Builtin::i32(0)}) ? (Builtin::u64(1ULL) << i) : Builtin::u64(0ULL);
			}}}
			#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return scalar;
		}
		return {};
	}
#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Abs(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, IUnsignedNumber>()) {
			#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return vec;
		} else {
			#line 99 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{
				#line 100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(BitOfSign(vec))> sign = BitOfSign(vec); 
				#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(vec ^ sign)> inv = vec ^ sign; 
				#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return inv - sign;
			}
		}
		return {};
	}
#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::BitOfSign(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using Vec = SimdVector<T, Arch>;
		#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, IUnsignedNumber>()) {
			#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return ADV_USPCS(Zero, Vec)();
		} else {
			#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if constexpr (Builtin::TypeIs<T, IBinaryInteger>()) {
				#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return vec >> (Builtin::i32(8) * Builtin::usize(sizeof (T)) - Builtin::i32(1));
			} else {
				#line 112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				if constexpr (std::is_same_v<T, Builtin::f32>) {
					#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					return vec & ADV_USFCS((Builtin::f32), FromBits)(Builtin::u32(0x80000000U));
				} else {
					#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					if constexpr (std::is_same_v<T, Builtin::f64>) {
						#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
						return vec & ADV_USFCS((Builtin::f64), FromBits)(Builtin::u64(0x8000000000000000ULL));
					} else {
						#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
						{
							#line 117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
							static_assert(Builtin::Boolean(false), "Unsupported type");
							#line 118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
							return vec;
						}
					}
				}
			}
		}
		return {};
	}
#line 122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::FromMask(const SimdMask<T, Arch>& mask)  -> const SimdVector<T, Arch>
	{
		#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return TVector{Builtin::Cast<true, typename TVector::TNative>(ADV_UFCS(ToNative)(mask.__ref()))} & TVector::Create(T{Builtin::i32(1)});
	}
#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::GetElement(const SimdVector<T, Arch>& vec, Builtin::usize index)  -> const T
	{
		#line 128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard128{};
			#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			BufferedVector<T, SimdVector<T, Arch>::Length> buf{}; 
			#line 130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(StoreAligned)(vec.__ref(), (__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(buf.__ref().buffer.__ref(), Builtin::i32(0))))));
			#line 131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return ADV_UFCS(_operator_subscript)(buf.__ref().buffer.__ref(), Builtin::Cast<true, Builtin::i32>(index));
		}
		return {};
	}
#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::GetMaskElement(const SimdMask<T, Arch>& vec, Builtin::usize index)  -> const bool
	{
		#line 136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard136{};
			#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			BufferedVector<bool, SimdMask<T, Arch>::Length> buf{}; 
			#line 138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			vec.__ref().Store((__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(buf.__ref().buffer.__ref(), Builtin::i32(0))))));
			#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return ADV_UFCS(_operator_subscript)(buf.__ref().buffer.__ref(), Builtin::Cast<true, Builtin::i32>(index));
		}
		return {};
	}
#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Equal(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdMask<T, Arch>
	{
		#line 144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TMask = SimdMask<T, Arch>;
		#line 145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		constexpr Builtin::Auto<decltype(Builtin::i32{TMask::Length})> size = Builtin::i32{TMask::Length};
		#line 146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard146{};
			#line 147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			BufferedVector<bool, size> buf{}; 
			#line 148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{ auto __for_init_148 = System::Range<Builtin::Auto<decltype(size)>, false>({}, size); auto __for_iter_148 = ADV_UFCS(Iterate)(__for_init_148.__ref()); while(__for_iter_148.__ref().MoveNext()) {
			auto&& i = __for_iter_148.__ref().GetCurrent(); {
				#line 149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_subscript)(buf.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) = ADV_UFCS(_operator_subscript)(left.__ref(), Builtin::Cast<true, Builtin::usize>(i)) == ADV_UFCS(_operator_subscript)(right.__ref(), Builtin::Cast<true, Builtin::usize>(i));
			}}}
			#line 151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return LoadMask<T, Arch>((__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(buf.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
		}
		return {};
	}
#line 155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Equal(const SimdMask<T, Arch>& left, const SimdMask<T, Arch>& right)  -> const SimdMask<T, Arch>
	{
		#line 156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TMask = SimdMask<T, Arch>;
		#line 157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		constexpr Builtin::Auto<decltype(Builtin::i32{TMask::Length})> size = Builtin::i32{TMask::Length};
		#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard158{};
			#line 159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			BufferedVector<bool, size> buf{}; 
			#line 160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{ auto __for_init_160 = System::Range<Builtin::Auto<decltype(size)>, false>({}, size); auto __for_iter_160 = ADV_UFCS(Iterate)(__for_init_160.__ref()); while(__for_iter_160.__ref().MoveNext()) {
			auto&& i = __for_iter_160.__ref().GetCurrent(); {
				#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_subscript)(buf.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) = ADV_UFCS(_operator_subscript)(left.__ref(), Builtin::Cast<true, Builtin::usize>(i)) == ADV_UFCS(_operator_subscript)(right.__ref(), Builtin::Cast<true, Builtin::usize>(i));
			}}}
			#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return LoadMask<T, Arch>((__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(buf.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
		}
		return {};
	}
#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::NotEqual(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdMask<T, Arch>
	{
		#line 168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TMask = SimdMask<T, Arch>;
		#line 169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		constexpr Builtin::Auto<decltype(Builtin::i32{TMask::Length})> size = Builtin::i32{TMask::Length};
		#line 170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard170{};
			#line 171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			BufferedVector<bool, size> buf{}; 
			#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{ auto __for_init_172 = System::Range<Builtin::Auto<decltype(size)>, false>({}, size); auto __for_iter_172 = ADV_UFCS(Iterate)(__for_init_172.__ref()); while(__for_iter_172.__ref().MoveNext()) {
			auto&& i = __for_iter_172.__ref().GetCurrent(); {
				#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_subscript)(buf.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) = ADV_UFCS(_operator_subscript)(left.__ref(), Builtin::Cast<true, Builtin::usize>(i)) != ADV_UFCS(_operator_subscript)(right.__ref(), Builtin::Cast<true, Builtin::usize>(i));
			}}}
			#line 175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return LoadMask<T, Arch>((__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(buf.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
		}
		return {};
	}
#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::NotEqual(const SimdMask<T, Arch>& left, const SimdMask<T, Arch>& right)  -> const SimdMask<T, Arch>
	{
		#line 180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TMask = SimdMask<T, Arch>;
		#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		constexpr Builtin::Auto<decltype(Builtin::i32{TMask::Length})> size = Builtin::i32{TMask::Length};
		#line 182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard182{};
			#line 183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			BufferedVector<bool, size> buf{}; 
			#line 184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{ auto __for_init_184 = System::Range<Builtin::Auto<decltype(size)>, false>({}, size); auto __for_iter_184 = ADV_UFCS(Iterate)(__for_init_184.__ref()); while(__for_iter_184.__ref().MoveNext()) {
			auto&& i = __for_iter_184.__ref().GetCurrent(); {
				#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_subscript)(buf.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) = ADV_UFCS(_operator_subscript)(left.__ref(), Builtin::Cast<true, Builtin::usize>(i)) != ADV_UFCS(_operator_subscript)(right.__ref(), Builtin::Cast<true, Builtin::usize>(i));
			}}}
			#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return LoadMask<T, Arch>((__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(buf.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
		}
		return {};
	}
#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Less(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdMask<T, Arch>
	{
		#line 192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TMask = SimdMask<T, Arch>;
		#line 193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		constexpr Builtin::Auto<decltype(Builtin::i32{TMask::Length})> size = Builtin::i32{TMask::Length};
		#line 194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard194{};
			#line 195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			BufferedVector<bool, size> buf{}; 
			#line 196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{ auto __for_init_196 = System::Range<Builtin::Auto<decltype(size)>, false>({}, size); auto __for_iter_196 = ADV_UFCS(Iterate)(__for_init_196.__ref()); while(__for_iter_196.__ref().MoveNext()) {
			auto&& i = __for_iter_196.__ref().GetCurrent(); {
				#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_subscript)(buf.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) = (ADV_UFCS(_operator_subscript)(left.__ref(), Builtin::Cast<true, Builtin::usize>(i)) <=> ADV_UFCS(_operator_subscript)(right.__ref(), Builtin::Cast<true, Builtin::usize>(i))) < 0;
			}}}
			#line 199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return LoadMask<T, Arch>((__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(buf.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
		}
		return {};
	}
#line 203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::LessOrEqual(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdMask<T, Arch>
	{
		#line 204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TMask = SimdMask<T, Arch>;
		#line 205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		constexpr Builtin::Auto<decltype(Builtin::i32{TMask::Length})> size = Builtin::i32{TMask::Length};
		#line 206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard206{};
			#line 207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			BufferedVector<bool, size> buf{}; 
			#line 208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{ auto __for_init_208 = System::Range<Builtin::Auto<decltype(size)>, false>({}, size); auto __for_iter_208 = ADV_UFCS(Iterate)(__for_init_208.__ref()); while(__for_iter_208.__ref().MoveNext()) {
			auto&& i = __for_iter_208.__ref().GetCurrent(); {
				#line 209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_subscript)(buf.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) = (ADV_UFCS(_operator_subscript)(left.__ref(), Builtin::Cast<true, Builtin::usize>(i)) <=> ADV_UFCS(_operator_subscript)(right.__ref(), Builtin::Cast<true, Builtin::usize>(i))) <= 0;
			}}}
			#line 211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return LoadMask<T, Arch>((__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(buf.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
		}
		return {};
	}
#line 215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Greater(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdMask<T, Arch>
	{
		#line 216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TMask = SimdMask<T, Arch>;
		#line 217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		constexpr Builtin::Auto<decltype(Builtin::i32{TMask::Length})> size = Builtin::i32{TMask::Length};
		#line 218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard218{};
			#line 219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			BufferedVector<bool, size> buf{}; 
			#line 220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{ auto __for_init_220 = System::Range<Builtin::Auto<decltype(size)>, false>({}, size); auto __for_iter_220 = ADV_UFCS(Iterate)(__for_init_220.__ref()); while(__for_iter_220.__ref().MoveNext()) {
			auto&& i = __for_iter_220.__ref().GetCurrent(); {
				#line 221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_subscript)(buf.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) = (ADV_UFCS(_operator_subscript)(left.__ref(), Builtin::Cast<true, Builtin::usize>(i)) <=> ADV_UFCS(_operator_subscript)(right.__ref(), Builtin::Cast<true, Builtin::usize>(i))) > 0;
			}}}
			#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return LoadMask<T, Arch>((__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(buf.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
		}
		return {};
	}
#line 227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::GreaterOrEqual(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdMask<T, Arch>
	{
		#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TMask = SimdMask<T, Arch>;
		#line 229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		constexpr Builtin::Auto<decltype(Builtin::i32{TMask::Length})> size = Builtin::i32{TMask::Length};
		#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard230{};
			#line 231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			BufferedVector<bool, size> buf{}; 
			#line 232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{ auto __for_init_232 = System::Range<Builtin::Auto<decltype(size)>, false>({}, size); auto __for_iter_232 = ADV_UFCS(Iterate)(__for_init_232.__ref()); while(__for_iter_232.__ref().MoveNext()) {
			auto&& i = __for_iter_232.__ref().GetCurrent(); {
				#line 233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_subscript)(buf.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) = (ADV_UFCS(_operator_subscript)(left.__ref(), Builtin::Cast<true, Builtin::usize>(i)) <=> ADV_UFCS(_operator_subscript)(right.__ref(), Builtin::Cast<true, Builtin::usize>(i))) >= 0;
			}}}
			#line 235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return LoadMask<T, Arch>((__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(buf.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
		}
		return {};
	}
#line 239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::First(const SimdVector<T, Arch>& vec)  -> const T
	{
		#line 240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return ADV_UFCS(_operator_subscript)(vec.__ref(), Builtin::u32(0U));
	}
#line 243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Select(const SimdMask<T, Arch>& condition, const SimdVector<T, Arch>& trueVec, const SimdVector<T, Arch>& falseVec)  -> const SimdVector<T, Arch>
	{
		#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		constexpr Builtin::Auto<decltype(Builtin::i32{TVector::Length})> size = Builtin::i32{TVector::Length};
		#line 247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard247{};
			#line 248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			BufferedVector<T, size> bufTrue{}; 
			#line 249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			BufferedVector<T, size> bufFalse{}; 
			#line 250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			BufferedVector<T, size> bufResult{}; 
			#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(StoreAligned)(trueVec.__ref(), (__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufTrue.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
			#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(StoreAligned)(falseVec.__ref(), (__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufFalse.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
			#line 253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{ auto __for_init_253 = System::Range<Builtin::Auto<decltype(size)>, false>({}, size); auto __for_iter_253 = ADV_UFCS(Iterate)(__for_init_253.__ref()); while(__for_iter_253.__ref().MoveNext()) {
			auto&& i = __for_iter_253.__ref().GetCurrent(); {
				#line 254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_subscript)(bufResult.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) = (ADV_UFCS(_operator_subscript)(condition.__ref(), Builtin::Cast<true, Builtin::usize>(i)) != T{Builtin::i32(0)}) ? ADV_UFCS(_operator_subscript)(bufTrue.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) : ADV_UFCS(_operator_subscript)(bufFalse.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i);
			}}}
			#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return LoadAligned<T, Arch>((__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufResult.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
		}
		return {};
	}
#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<int32_t $tparam$I0, int32_t $tparam$I1, class Arch, class T> auto CommonInstructions::Swizzle(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		constexpr Builtin::i32 I0 = $tparam$I0;
		constexpr Builtin::i32 I1 = $tparam$I1;
		#line 262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return {  };
	}
#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<int32_t $tparam$I0, int32_t $tparam$I1, int32_t $tparam$I2, int32_t $tparam$I3, class Arch, class T> auto CommonInstructions::Swizzle(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		constexpr Builtin::i32 I0 = $tparam$I0;
		constexpr Builtin::i32 I1 = $tparam$I1;
		constexpr Builtin::i32 I2 = $tparam$I2;
		constexpr Builtin::i32 I3 = $tparam$I3;
		#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return {  };
	}
#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<int32_t $tparam$I0, int32_t $tparam$I1, int32_t $tparam$I2, int32_t $tparam$I3, int32_t $tparam$I4, int32_t $tparam$I5, int32_t $tparam$I6, int32_t $tparam$I7, class Arch, class T> auto CommonInstructions::Swizzle(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		constexpr Builtin::i32 I0 = $tparam$I0;
		constexpr Builtin::i32 I1 = $tparam$I1;
		constexpr Builtin::i32 I2 = $tparam$I2;
		constexpr Builtin::i32 I3 = $tparam$I3;
		constexpr Builtin::i32 I4 = $tparam$I4;
		constexpr Builtin::i32 I5 = $tparam$I5;
		constexpr Builtin::i32 I6 = $tparam$I6;
		constexpr Builtin::i32 I7 = $tparam$I7;
		#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return {  };
	}
#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::WrappingAdd(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>
	{
		#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		constexpr Builtin::Auto<decltype(Builtin::i32{SimdVector<T, Arch>::Length})> size = Builtin::i32{SimdVector<T, Arch>::Length};
		#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufLeft{}; 
		#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufRight{}; 
		#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufResult{}; 
		#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard277{};
			#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(StoreAligned)(left.__ref(), (__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufLeft.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
			#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(StoreAligned)(right.__ref(), (__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufRight.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
			#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{ auto __for_init_280 = System::Range<Builtin::Auto<decltype(size)>, false>({}, size); auto __for_iter_280 = ADV_UFCS(Iterate)(__for_init_280.__ref()); while(__for_iter_280.__ref().MoveNext()) {
			auto&& i = __for_iter_280.__ref().GetCurrent(); {
				#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_subscript)(bufResult.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) = ADV_UFCS(_operator_subscript)(bufLeft.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) + ADV_UFCS(_operator_subscript)(bufRight.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i);
			}}}
			#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return TVector::LoadAligned((__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufResult.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
		}
		return {};
	}
#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::WrappingSubtract(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>
	{
		#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		constexpr Builtin::Auto<decltype(Builtin::i32{SimdVector<T, Arch>::Length})> size = Builtin::i32{SimdVector<T, Arch>::Length};
		#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufLeft{}; 
		#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufRight{}; 
		#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufResult{}; 
		#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard293{};
			#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(StoreAligned)(left.__ref(), (__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufLeft.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
			#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(StoreAligned)(right.__ref(), (__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufRight.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
			#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{ auto __for_init_296 = System::Range<Builtin::Auto<decltype(size)>, false>({}, size); auto __for_iter_296 = ADV_UFCS(Iterate)(__for_init_296.__ref()); while(__for_iter_296.__ref().MoveNext()) {
			auto&& i = __for_iter_296.__ref().GetCurrent(); {
				#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_subscript)(bufResult.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) = ADV_UFCS(_operator_subscript)(bufLeft.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) - ADV_UFCS(_operator_subscript)(bufRight.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i);
			}}}
			#line 299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return TVector::LoadAligned((__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufResult.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
		}
		return {};
	}
#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::WrappingMultiply(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>
	{
		#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		constexpr Builtin::Auto<decltype(Builtin::i32{SimdVector<T, Arch>::Length})> size = Builtin::i32{SimdVector<T, Arch>::Length};
		#line 305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufLeft{}; 
		#line 307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufRight{}; 
		#line 308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufResult{}; 
		#line 309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard309{};
			#line 310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(StoreAligned)(left.__ref(), (__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufLeft.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
			#line 311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(StoreAligned)(right.__ref(), (__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufRight.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
			#line 312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{ auto __for_init_312 = System::Range<Builtin::Auto<decltype(size)>, false>({}, size); auto __for_iter_312 = ADV_UFCS(Iterate)(__for_init_312.__ref()); while(__for_iter_312.__ref().MoveNext()) {
			auto&& i = __for_iter_312.__ref().GetCurrent(); {
				#line 313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				if constexpr (Builtin::IsAnyOf<T, Builtin::f32, Builtin::f64>) {
					#line 314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					ADV_UFCS(_operator_subscript)(bufResult.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) = ADV_UFCS(_operator_subscript)(bufLeft.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) * ADV_UFCS(_operator_subscript)(bufRight.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i);
				} else {
					#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					{
						#line 316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
						ADV_UFCS(_operator_subscript)(bufResult.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) = ADV_UFCS(_operator_mul_mod)(ADV_UFCS(_operator_subscript)(bufLeft.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i), ADV_UFCS(_operator_subscript)(bufRight.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i));
					}
				}
			}}}
			#line 319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return TVector::LoadAligned((__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufResult.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
		}
		return {};
	}
#line 323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::WrappingDivide(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>
	{
		#line 324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if (ADV_UFCS(Any)(right.__ref(), ADV_USPCS(Zero, T)())) {
			#line 325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Throw(Builtin::DivisionByZeroException{});
		}
		#line 327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		constexpr Builtin::Auto<decltype(Builtin::i32{SimdVector<T, Arch>::Length})> size = Builtin::i32{SimdVector<T, Arch>::Length};
		#line 328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufLeft{}; 
		#line 330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufRight{}; 
		#line 331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufResult{}; 
		#line 332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard332{};
			#line 333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(StoreAligned)(left.__ref(), (__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufLeft.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
			#line 334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(StoreAligned)(right.__ref(), (__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufRight.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
			#line 335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{ auto __for_init_335 = System::Range<Builtin::Auto<decltype(size)>, false>({}, size); auto __for_iter_335 = ADV_UFCS(Iterate)(__for_init_335.__ref()); while(__for_iter_335.__ref().MoveNext()) {
			auto&& i = __for_iter_335.__ref().GetCurrent(); {
				#line 336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				if constexpr (Builtin::IsAnyOf<T, Builtin::f32, Builtin::f64>) {
					#line 337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					ADV_UFCS(_operator_subscript)(bufResult.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) = ADV_UFCS(_operator_subscript)(bufLeft.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) / ADV_UFCS(_operator_subscript)(bufRight.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i);
				} else {
					#line 338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					{
						#line 339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
						ADV_UFCS(_operator_subscript)(bufResult.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) = ADV_UFCS(_operator_bsl_mod)(ADV_UFCS(_operator_subscript)(bufLeft.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i), ADV_UFCS(_operator_subscript)(bufRight.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i));
					}
				}
			}}}
			#line 342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return TVector::LoadAligned((__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufResult.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
		}
		return {};
	}
#line 346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::WrappingMod(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>
	{
		#line 347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if (ADV_UFCS(Any)(right.__ref(), ADV_USPCS(Zero, T)())) {
			#line 348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Throw(Builtin::DivisionByZeroException{});
		}
		#line 350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		constexpr Builtin::Auto<decltype(Builtin::i32{SimdVector<T, Arch>::Length})> size = Builtin::i32{SimdVector<T, Arch>::Length};
		#line 351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufLeft{}; 
		#line 353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufRight{}; 
		#line 354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufResult{}; 
		#line 355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard355{};
			#line 356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(StoreAligned)(left.__ref(), (__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufLeft.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
			#line 357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(StoreAligned)(right.__ref(), (__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufRight.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
			#line 358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{ auto __for_init_358 = System::Range<Builtin::Auto<decltype(size)>, false>({}, size); auto __for_iter_358 = ADV_UFCS(Iterate)(__for_init_358.__ref()); while(__for_iter_358.__ref().MoveNext()) {
			auto&& i = __for_iter_358.__ref().GetCurrent(); {
				#line 359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				if constexpr (Builtin::IsAnyOf<T, Builtin::f32, Builtin::f64>) {
					#line 360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					ADV_UFCS(_operator_subscript)(bufResult.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) = ADV_UFCS(_operator_subscript)(bufLeft.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) % ADV_UFCS(_operator_subscript)(bufRight.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i);
				} else {
					#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					{
						#line 362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
						ADV_UFCS(_operator_subscript)(bufResult.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) = ADV_UFCS(_operator_mod_mod)(ADV_UFCS(_operator_subscript)(bufLeft.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i), ADV_UFCS(_operator_subscript)(bufRight.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i));
					}
				}
			}}}
			#line 365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return TVector::LoadAligned((__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufResult.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
		}
		return {};
	}
#line 368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::WrappingNegate(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		constexpr Builtin::Auto<decltype(Builtin::i32{SimdVector<T, Arch>::Length})> size = Builtin::i32{SimdVector<T, Arch>::Length};
		#line 370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufLeft{}; 
		#line 372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufResult{}; 
		#line 373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard373{};
			#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(StoreAligned)(vec.__ref(), (__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufLeft.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
			#line 375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{ auto __for_init_375 = System::Range<Builtin::Auto<decltype(size)>, false>({}, size); auto __for_iter_375 = ADV_UFCS(Iterate)(__for_init_375.__ref()); while(__for_iter_375.__ref().MoveNext()) {
			auto&& i = __for_iter_375.__ref().GetCurrent(); {
				#line 376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				if constexpr (Builtin::IsAnyOf<T, Builtin::f32, Builtin::f64>) {
					#line 377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					ADV_UFCS(_operator_subscript)(bufResult.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) = -ADV_UFCS(_operator_subscript)(bufLeft.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i);
				} else {
					#line 378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					{
						#line 379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
						ADV_UFCS(_operator_subscript)(bufResult.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) = ADV_UFCS(_operator_sub_mod)(ADV_UFCS(_operator_subscript)(bufLeft.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i));
					}
				}
			}}}
			#line 382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return TVector::LoadAligned((__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufResult.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
		}
		return {};
	}
#line 385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::BitwiseNot(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard386{};
			#line 387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			SimdVector<T, Arch> res{}; 
			#line 388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(vec)))))> ptr1 = UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(vec)))); 
			#line 389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(res)))))> ptr2 = UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(res)))); 
			#line 390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(_operator_subscript)(ptr2.__ref(), Builtin::i32(0)) = ADV_UFCS(_operator_not)(ADV_UFCS(_operator_subscript)(ptr1.__ref(), Builtin::i32(0)));
			#line 391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(_operator_subscript)(ptr2.__ref(), Builtin::i32(1)) = ADV_UFCS(_operator_not)(ADV_UFCS(_operator_subscript)(ptr1.__ref(), Builtin::i32(1)));
			#line 392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return res;
		}
		return {};
	}
#line 395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::BitwiseNot(const SimdMask<T, Arch>& vec)  -> const SimdMask<T, Arch>
	{
		#line 396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard396{};
			#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			SimdVector<T, Arch> res{}; 
			#line 398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(vec)))))> ptr1 = UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(vec)))); 
			#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(res)))))> ptr2 = UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(res)))); 
			#line 400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(_operator_subscript)(ptr2.__ref(), Builtin::i32(0)) = ADV_UFCS(_operator_not)(ADV_UFCS(_operator_subscript)(ptr1.__ref(), Builtin::i32(0)));
			#line 401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(_operator_subscript)(ptr2.__ref(), Builtin::i32(1)) = ADV_UFCS(_operator_not)(ADV_UFCS(_operator_subscript)(ptr1.__ref(), Builtin::i32(1)));
			#line 402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return res;
		}
		return {};
	}
#line 405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::BitwiseAnd(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>
	{
		#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard406{};
			#line 407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			SimdVector<T, Arch> res{}; 
			#line 408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(left)))))> ptr1 = UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(left)))); 
			#line 409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(right)))))> ptr2 = UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(right)))); 
			#line 410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(res)))))> ptr3 = UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(res)))); 
			#line 411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(_operator_subscript)(ptr3.__ref(), Builtin::i32(0)) = ADV_UFCS(_operator_subscript)(ptr1.__ref(), Builtin::i32(0)) & ADV_UFCS(_operator_subscript)(ptr2.__ref(), Builtin::i32(0));
			#line 412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(_operator_subscript)(ptr3.__ref(), Builtin::i32(1)) = ADV_UFCS(_operator_subscript)(ptr1.__ref(), Builtin::i32(1)) & ADV_UFCS(_operator_subscript)(ptr2.__ref(), Builtin::i32(1));
			#line 413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return res;
		}
		return {};
	}
#line 416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::BitwiseAnd(const SimdMask<T, Arch>& left, const SimdMask<T, Arch>& right)  -> const SimdVector<T, Arch>
	{
		#line 417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard417{};
			#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			SimdVector<T, Arch> res{}; 
			#line 419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(left)))))> ptr1 = UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(left)))); 
			#line 420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(right)))))> ptr2 = UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(right)))); 
			#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(res)))))> ptr3 = UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(res)))); 
			#line 422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(_operator_subscript)(ptr3.__ref(), Builtin::i32(0)) = ADV_UFCS(_operator_subscript)(ptr1.__ref(), Builtin::i32(0)) & ADV_UFCS(_operator_subscript)(ptr2.__ref(), Builtin::i32(0));
			#line 423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(_operator_subscript)(ptr3.__ref(), Builtin::i32(1)) = ADV_UFCS(_operator_subscript)(ptr1.__ref(), Builtin::i32(1)) & ADV_UFCS(_operator_subscript)(ptr2.__ref(), Builtin::i32(1));
			#line 424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return res;
		}
		return {};
	}
#line 427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::BitwiseAndNot(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>
	{
		#line 428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard428{};
			#line 429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			SimdVector<T, Arch> res{}; 
			#line 430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(left)))))> ptr1 = UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(left)))); 
			#line 431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(right)))))> ptr2 = UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(right)))); 
			#line 432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(res)))))> ptr3 = UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(res)))); 
			#line 433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(_operator_subscript)(ptr3.__ref(), Builtin::i32(0)) = ADV_UFCS(_operator_subscript)(ptr1.__ref(), Builtin::i32(0)) & (ADV_UFCS(_operator_not)(ADV_UFCS(_operator_subscript)(ptr2.__ref(), Builtin::i32(0))));
			#line 434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(_operator_subscript)(ptr3.__ref(), Builtin::i32(1)) = ADV_UFCS(_operator_subscript)(ptr1.__ref(), Builtin::i32(1)) & (ADV_UFCS(_operator_not)(ADV_UFCS(_operator_subscript)(ptr2.__ref(), Builtin::i32(1))));
			#line 435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return res;
		}
		return {};
	}
#line 438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::BitwiseAndNot(const SimdMask<T, Arch>& left, const SimdMask<T, Arch>& right)  -> const SimdVector<T, Arch>
	{
		#line 439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard439{};
			#line 440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			SimdVector<T, Arch> res{}; 
			#line 441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(left)))))> ptr1 = UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(left)))); 
			#line 442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(right)))))> ptr2 = UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(right)))); 
			#line 443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(res)))))> ptr3 = UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(res)))); 
			#line 444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(_operator_subscript)(ptr3.__ref(), Builtin::i32(0)) = ADV_UFCS(_operator_subscript)(ptr1.__ref(), Builtin::i32(0)) & (ADV_UFCS(_operator_not)(ADV_UFCS(_operator_subscript)(ptr2.__ref(), Builtin::i32(0))));
			#line 445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(_operator_subscript)(ptr3.__ref(), Builtin::i32(1)) = ADV_UFCS(_operator_subscript)(ptr1.__ref(), Builtin::i32(1)) & (ADV_UFCS(_operator_not)(ADV_UFCS(_operator_subscript)(ptr2.__ref(), Builtin::i32(1))));
			#line 446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return res;
		}
		return {};
	}
#line 449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::BitwiseOr(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>
	{
		#line 450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard450{};
			#line 451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			SimdVector<T, Arch> res{}; 
			#line 452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(left)))))> ptr1 = UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(left)))); 
			#line 453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(right)))))> ptr2 = UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(right)))); 
			#line 454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(res)))))> ptr3 = UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(res)))); 
			#line 455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(_operator_subscript)(ptr3.__ref(), Builtin::i32(0)) = ADV_UFCS(_operator_subscript)(ptr1.__ref(), Builtin::i32(0)) | ADV_UFCS(_operator_subscript)(ptr2.__ref(), Builtin::i32(0));
			#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(_operator_subscript)(ptr3.__ref(), Builtin::i32(1)) = ADV_UFCS(_operator_subscript)(ptr1.__ref(), Builtin::i32(1)) | ADV_UFCS(_operator_subscript)(ptr2.__ref(), Builtin::i32(1));
			#line 457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return res;
		}
		return {};
	}
#line 460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::BitwiseOr(const SimdMask<T, Arch>& left, const SimdMask<T, Arch>& right)  -> const SimdVector<T, Arch>
	{
		#line 461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard461{};
			#line 462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			SimdVector<T, Arch> res{}; 
			#line 463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(left)))))> ptr1 = UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(left)))); 
			#line 464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(right)))))> ptr2 = UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(right)))); 
			#line 465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(res)))))> ptr3 = UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(res)))); 
			#line 466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(_operator_subscript)(ptr3.__ref(), Builtin::i32(0)) = ADV_UFCS(_operator_subscript)(ptr1.__ref(), Builtin::i32(0)) | ADV_UFCS(_operator_subscript)(ptr2.__ref(), Builtin::i32(0));
			#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(_operator_subscript)(ptr3.__ref(), Builtin::i32(1)) = ADV_UFCS(_operator_subscript)(ptr1.__ref(), Builtin::i32(1)) | ADV_UFCS(_operator_subscript)(ptr2.__ref(), Builtin::i32(1));
			#line 468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return res;
		}
		return {};
	}
#line 471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::BitwiseXor(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>
	{
		#line 472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard472{};
			#line 473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			SimdVector<T, Arch> res{}; 
			#line 474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(left)))))> ptr1 = UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(left)))); 
			#line 475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(right)))))> ptr2 = UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(right)))); 
			#line 476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(res)))))> ptr3 = UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(res)))); 
			#line 477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(_operator_subscript)(ptr3.__ref(), Builtin::i32(0)) = ADV_UFCS(_operator_subscript)(ptr1.__ref(), Builtin::i32(0)) ^ ADV_UFCS(_operator_subscript)(ptr2.__ref(), Builtin::i32(0));
			#line 478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(_operator_subscript)(ptr3.__ref(), Builtin::i32(1)) = ADV_UFCS(_operator_subscript)(ptr1.__ref(), Builtin::i32(1)) ^ ADV_UFCS(_operator_subscript)(ptr2.__ref(), Builtin::i32(1));
			#line 479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return res;
		}
		return {};
	}
#line 482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::BitwiseXor(const SimdMask<T, Arch>& left, const SimdMask<T, Arch>& right)  -> const SimdVector<T, Arch>
	{
		#line 483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard483{};
			#line 484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			SimdVector<T, Arch> res{}; 
			#line 485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(left)))))> ptr1 = UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(left)))); 
			#line 486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(right)))))> ptr2 = UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(right)))); 
			#line 487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(res)))))> ptr3 = UnsafePointerCast<Builtin::u64>((__RawPtr(std::addressof(res)))); 
			#line 488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(_operator_subscript)(ptr3.__ref(), Builtin::i32(0)) = ADV_UFCS(_operator_subscript)(ptr1.__ref(), Builtin::i32(0)) ^ ADV_UFCS(_operator_subscript)(ptr2.__ref(), Builtin::i32(0));
			#line 489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(_operator_subscript)(ptr3.__ref(), Builtin::i32(1)) = ADV_UFCS(_operator_subscript)(ptr1.__ref(), Builtin::i32(1)) ^ ADV_UFCS(_operator_subscript)(ptr2.__ref(), Builtin::i32(1));
			#line 490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return res;
		}
		return {};
	}
#line 494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::LeftShift(const SimdVector<T, Arch>& vec, Builtin::i32 shift)  -> const SimdVector<T, Arch>
	{
		#line 495 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		constexpr Builtin::Auto<decltype(Builtin::i32{SimdVector<T, Arch>::Length})> size = Builtin::i32{SimdVector<T, Arch>::Length};
		#line 496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufLeft{}; 
		#line 498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufResult{}; 
		#line 499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard499{};
			#line 500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(StoreAligned)(vec.__ref(), (__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufLeft.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
			#line 501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{ auto __for_init_501 = System::Range<Builtin::Auto<decltype(size)>, false>({}, size); auto __for_iter_501 = ADV_UFCS(Iterate)(__for_init_501.__ref()); while(__for_iter_501.__ref().MoveNext()) {
			auto&& i = __for_iter_501.__ref().GetCurrent(); {
				#line 502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_subscript)(bufResult.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) = ADV_UFCS(_operator_subscript)(bufLeft.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) << shift;
			}}}
			#line 504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return TVector::LoadAligned((__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufResult.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
		}
		return {};
	}
#line 507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::LeftShift(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>
	{
		#line 508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		constexpr Builtin::Auto<decltype(Builtin::i32{SimdVector<T, Arch>::Length})> size = Builtin::i32{SimdVector<T, Arch>::Length};
		#line 509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufLeft{}; 
		#line 511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufRight{}; 
		#line 512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufResult{}; 
		#line 513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard513{};
			#line 514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(StoreAligned)(left.__ref(), (__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufLeft.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
			#line 515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(StoreAligned)(right.__ref(), (__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufRight.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
			#line 516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{ auto __for_init_516 = System::Range<Builtin::Auto<decltype(size)>, false>({}, size); auto __for_iter_516 = ADV_UFCS(Iterate)(__for_init_516.__ref()); while(__for_iter_516.__ref().MoveNext()) {
			auto&& i = __for_iter_516.__ref().GetCurrent(); {
				#line 517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_subscript)(bufResult.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) = ADV_UFCS(_operator_subscript)(bufLeft.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) << Builtin::i32{ADV_UFCS(_operator_subscript)(bufRight.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i)};
			}}}
			#line 519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return TVector::LoadAligned((__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufResult.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
		}
		return {};
	}
#line 523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::RightShift(const SimdVector<T, Arch>& vec, Builtin::i32 shift)  -> const SimdVector<T, Arch>
	{
		#line 524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		constexpr Builtin::Auto<decltype(Builtin::i32{SimdVector<T, Arch>::Length})> size = Builtin::i32{SimdVector<T, Arch>::Length};
		#line 525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufLeft{}; 
		#line 527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufResult{}; 
		#line 528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard528{};
			#line 529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(StoreAligned)(vec.__ref(), (__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufLeft.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
			#line 530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{ auto __for_init_530 = System::Range<Builtin::Auto<decltype(size)>, false>({}, size); auto __for_iter_530 = ADV_UFCS(Iterate)(__for_init_530.__ref()); while(__for_iter_530.__ref().MoveNext()) {
			auto&& i = __for_iter_530.__ref().GetCurrent(); {
				#line 531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_subscript)(bufResult.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) = ADV_UFCS(_operator_subscript)(bufLeft.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) >> shift;
			}}}
			#line 533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return TVector::LoadAligned((__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufResult.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
		}
		return {};
	}
#line 536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::RightShift(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>
	{
		#line 537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		constexpr Builtin::Auto<decltype(Builtin::i32{SimdVector<T, Arch>::Length})> size = Builtin::i32{SimdVector<T, Arch>::Length};
		#line 538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufLeft{}; 
		#line 540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufRight{}; 
		#line 541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufResult{}; 
		#line 542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard542{};
			#line 543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(StoreAligned)(left.__ref(), (__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufLeft.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
			#line 544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(StoreAligned)(right.__ref(), (__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufRight.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
			#line 545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{ auto __for_init_545 = System::Range<Builtin::Auto<decltype(size)>, false>({}, size); auto __for_iter_545 = ADV_UFCS(Iterate)(__for_init_545.__ref()); while(__for_iter_545.__ref().MoveNext()) {
			auto&& i = __for_iter_545.__ref().GetCurrent(); {
				#line 546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_subscript)(bufResult.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) = ADV_UFCS(_operator_subscript)(bufLeft.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) >> Builtin::i32{ADV_UFCS(_operator_subscript)(bufRight.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i)};
			}}}
			#line 548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return TVector::LoadAligned((__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufResult.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
		}
		return {};
	}
#line 552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::UnsignedRightShift(const SimdVector<T, Arch>& vec, Builtin::i32 shift)  -> const SimdVector<T, Arch>
	{
		#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		constexpr Builtin::Auto<decltype(Builtin::i32{SimdVector<T, Arch>::Length})> size = Builtin::i32{SimdVector<T, Arch>::Length};
		#line 554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufLeft{}; 
		#line 556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufResult{}; 
		#line 557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard557{};
			#line 558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(StoreAligned)(vec.__ref(), (__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufLeft.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
			#line 559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{ auto __for_init_559 = System::Range<Builtin::Auto<decltype(size)>, false>({}, size); auto __for_iter_559 = ADV_UFCS(Iterate)(__for_init_559.__ref()); while(__for_iter_559.__ref().MoveNext()) {
			auto&& i = __for_iter_559.__ref().GetCurrent(); {
				#line 560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_subscript)(bufResult.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) = ADV_UFCS(_operator_gt_gt_gt)(ADV_UFCS(_operator_subscript)(bufLeft.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i), shift);
			}}}
			#line 562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return TVector::LoadAligned((__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufResult.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
		}
		return {};
	}
#line 565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::UnsignedRightShift(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>
	{
		#line 566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		constexpr Builtin::Auto<decltype(Builtin::i32{SimdVector<T, Arch>::Length})> size = Builtin::i32{SimdVector<T, Arch>::Length};
		#line 567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufLeft{}; 
		#line 569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufRight{}; 
		#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufResult{}; 
		#line 571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard571{};
			#line 572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(StoreAligned)(left.__ref(), (__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufLeft.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
			#line 573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(StoreAligned)(right.__ref(), (__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufRight.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
			#line 574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{ auto __for_init_574 = System::Range<Builtin::Auto<decltype(size)>, false>({}, size); auto __for_iter_574 = ADV_UFCS(Iterate)(__for_init_574.__ref()); while(__for_iter_574.__ref().MoveNext()) {
			auto&& i = __for_iter_574.__ref().GetCurrent(); {
				#line 575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_subscript)(bufResult.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) = ADV_UFCS(_operator_gt_gt_gt)(ADV_UFCS(_operator_subscript)(bufLeft.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i), Builtin::i32{ADV_UFCS(_operator_subscript)(bufRight.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i)});
			}}}
			#line 577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return TVector::LoadAligned((__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufResult.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
		}
		return {};
	}
#line 581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::All(const SimdMask<T, Arch>& vec)  -> const bool
	{
		#line 582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return MaskToScalar(vec) == ADV_USPCS(AllBitsSet, Builtin::u64)();
	}
#line 585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Any(const SimdMask<T, Arch>& vec)  -> const bool
	{
		#line 586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return MaskToScalar(vec) != Builtin::i32(0);
	}
#line 589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Max(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>
	{
		#line 590 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		constexpr Builtin::Auto<decltype(Builtin::i32{SimdVector<T, Arch>::Length})> size = Builtin::i32{SimdVector<T, Arch>::Length};
		#line 591 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufLeft{}; 
		#line 593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufRight{}; 
		#line 594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufResult{}; 
		#line 595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard595{};
			#line 596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(StoreAligned)(left.__ref(), (__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufLeft.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
			#line 597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(StoreAligned)(right.__ref(), (__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufRight.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
			#line 598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{ auto __for_init_598 = System::Range<Builtin::Auto<decltype(size)>, false>({}, size); auto __for_iter_598 = ADV_UFCS(Iterate)(__for_init_598.__ref()); while(__for_iter_598.__ref().MoveNext()) {
			auto&& i = __for_iter_598.__ref().GetCurrent(); {
				#line 599 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_subscript)(bufResult.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) = ADV_UFCS(Max)(ADV_UFCS(_operator_subscript)(bufLeft.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i).__ref(), ADV_UFCS(_operator_subscript)(bufRight.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i));
			}}}
			#line 601 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return TVector::LoadAligned((__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufResult.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
		}
		return {};
	}
#line 604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Min(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>
	{
		#line 605 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		constexpr Builtin::Auto<decltype(Builtin::i32{SimdVector<T, Arch>::Length})> size = Builtin::i32{SimdVector<T, Arch>::Length};
		#line 606 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 607 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufLeft{}; 
		#line 608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufRight{}; 
		#line 609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufResult{}; 
		#line 610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard610{};
			#line 611 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(StoreAligned)(left.__ref(), (__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufLeft.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
			#line 612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(StoreAligned)(right.__ref(), (__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufRight.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
			#line 613 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{ auto __for_init_613 = System::Range<Builtin::Auto<decltype(size)>, false>({}, size); auto __for_iter_613 = ADV_UFCS(Iterate)(__for_init_613.__ref()); while(__for_iter_613.__ref().MoveNext()) {
			auto&& i = __for_iter_613.__ref().GetCurrent(); {
				#line 614 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_subscript)(bufResult.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) = ADV_UFCS(Min)(ADV_UFCS(_operator_subscript)(bufLeft.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i).__ref(), ADV_UFCS(_operator_subscript)(bufRight.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i));
			}}}
			#line 616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return TVector::LoadAligned((__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufResult.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
		}
		return {};
	}
#line 620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Average(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>
	{
		#line 621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, IUnsignedNumber>()) {
			#line 622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return (left & right) + ((left ^ right) >> Builtin::i32(1));
		} else {
			#line 623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if constexpr (Builtin::TypeIs<T, IBinaryInteger>()) {
				#line 624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype((left & right) + ((left ^ right) >> Builtin::i32(1)))> t = (left & right) + ((left ^ right) >> Builtin::i32(1)); 
				#line 625 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(BitwiseCast<typename T::Unsigned>(t))> tu = BitwiseCast<typename T::Unsigned>(t); 
				#line 626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(t + (BitwiseCast<T>(tu >> (Builtin::i32(8) * Builtin::usize(sizeof (T)) - Builtin::i32(1))) & (left ^ right)))> avg = t + (BitwiseCast<T>(tu >> (Builtin::i32(8) * Builtin::usize(sizeof (T)) - Builtin::i32(1))) & (left ^ right)); 
				#line 627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return avg;
			} else {
				#line 628 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				{
					#line 629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					return (left + right) / Builtin::i32(2);
				}
			}
		}
		return {};
	}
#line 633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::AverageReverse(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>
	{
		#line 634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, IBinaryInteger>()) {
			#line 635 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			constexpr Builtin::Auto<decltype(Builtin::i32(8) * Builtin::usize(sizeof (T)) - Builtin::i32(1))> shift = Builtin::i32(8) * Builtin::usize(sizeof (T)) - Builtin::i32(1);
			#line 636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(Builtin::TypeIs<T, IUnsignedNumber>() ? (((left ^ right) << shift) >> shift) : ((left ^ right) & Builtin::i32(0x1)))> adj = Builtin::TypeIs<T, IUnsignedNumber>() ? (((left ^ right) << shift) >> shift) : ((left ^ right) & Builtin::i32(0x1)); 
			#line 637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return Average(left, right) + adj;
		} else {
			#line 638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{
				#line 639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return Average(left, right);
			}
		}
		return {};
	}
#line 643 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T2, class T1, class Arch> auto CommonInstructions::BitwiseCast(const SimdVector<T1, Arch>& vec)  -> const SimdVector<T2, Arch>
	{
		#line 644 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard644{};
			#line 645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			SimdVector<T2, Arch> dst{}; 
			#line 646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			std::memcpy((__RawPtr(std::addressof(dst))), (__RawPtr(std::addressof(vec))), Builtin::usize(sizeof (dst)));
			#line 647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return dst;
		}
		return {};
	}
#line 651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::OverflowingAdd(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const std::tuple<SimdVector<T, Arch>, SimdMask<T, Arch>>
	{
		#line 653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, IBinaryInteger>()) {
			#line 654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_add_mod)(left, right))> sum = ADV_UFCS(_operator_add_mod)(left, right); 
			#line 655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if constexpr (Builtin::TypeIs<T, IUnsignedNumber>()) {
				#line 656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return std::make_tuple(sum, (ADV_UFCS(_operator_lt_xor)(sum, left)) | (ADV_UFCS(_operator_lt_xor)(sum, right)));
			} else {
				#line 657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				{
					#line 658 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					return std::make_tuple(sum, ADV_UFCS(_operator_lt_xor)(((sum ^ left) & (sum ^ right)), T{Builtin::i32(0)}));
				}
			}
		} else {
			#line 660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{
				#line 661 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return std::make_tuple(ADV_UFCS(_operator_add_mod)(left, right), SimdMask<T, Arch>::False);
			}
		}
		return {};
	}
#line 665 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::StrictAdd(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>
	{
		#line 666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const auto& [sum, overflow] = OverflowingAdd(left, right);
		#line 667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if (ADV_UPCS(Any)(overflow.__ref())) {
			#line 668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return sum;
	}
#line 673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Add(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>
	{
		#line 674 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		#if _DEBUG
		#line 675 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return StrictAdd(left, right);
		#else
		#line 677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return ADV_UFCS(_operator_add_mod)(left, right);
		#endif
		return {};
	}
#line 681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::OverflowingSubtract(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const std::tuple<SimdVector<T, Arch>, SimdMask<T, Arch>>
	{
		#line 683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, IBinaryInteger>()) {
			#line 684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_sub_mod)(left, right))> diff = ADV_UFCS(_operator_sub_mod)(left, right); 
			#line 685 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if constexpr (Builtin::TypeIs<T, IUnsignedNumber>()) {
				#line 686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return std::make_tuple(diff, (ADV_UFCS(_operator_gt_xor)(diff, left)) | (ADV_UFCS(_operator_gt_xor)(diff, right)));
			} else {
				#line 687 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				{
					#line 688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					return std::make_tuple(diff, ADV_UFCS(_operator_lt_xor)(((left ^ right) & (diff ^ left)), T{Builtin::i32(0)}));
				}
			}
		} else {
			#line 690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{
				#line 691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return std::make_tuple(ADV_UFCS(_operator_sub_mod)(left, right), SimdMask<T, Arch>::False);
			}
		}
		return {};
	}
#line 695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::StrictSubtract(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>
	{
		#line 696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const auto& [diff, overflow] = OverflowingSubtract(left, right);
		#line 697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if (ADV_UPCS(Any)(overflow.__ref())) {
			#line 698 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return diff;
	}
#line 703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Subtract(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>
	{
		#line 704 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		#if _DEBUG
		#line 705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return StrictSubtract(left, right);
		#else
		#line 707 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return ADV_UFCS(_operator_sub_mod)(left, right);
		#endif
		return {};
	}
#line 711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::OverflowingMultiply(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const std::tuple<SimdVector<T, Arch>, SimdMask<T, Arch>>
	{
		#line 713 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, IBinaryInteger>()) {
			#line 714 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(left, right))> prod = ADV_UFCS(_operator_mul_mod)(left, right); 
			#line 715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return std::make_tuple(prod, ADV_UFCS(_operator_ne_eq_xor)((prod / right), left));
		} else {
			#line 716 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{
				#line 717 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return std::make_tuple(ADV_UFCS(_operator_mul_mod)(left, right), SimdMask<T, Arch>::False);
			}
		}
		return {};
	}
#line 721 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::StrictMultiply(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>
	{
		#line 722 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const auto& [prod, overflow] = OverflowingMultiply(left, right);
		#line 723 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if (ADV_UPCS(Any)(overflow.__ref())) {
			#line 724 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return prod;
	}
#line 729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Multiply(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>
	{
		#line 730 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		#if _DEBUG
		#line 731 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return StrictMultiply(left, right);
		#else
		#line 733 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return ADV_UFCS(_operator_mul_mod)(left, right);
		#endif
		return {};
	}
#line 737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::OverflowingDivide(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const std::tuple<SimdVector<T, Arch>, SimdMask<T, Arch>>
	{
		#line 739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if (ADV_UFCS(Any)(right.__ref(), ADV_USPCS(Zero, T)())) {
			#line 740 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Throw(Builtin::DivisionByZeroException{});
		}
		#line 742 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, IBinaryInteger>() && !Builtin::TypeIs<T, IUnsignedNumber>()) {
			#line 743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_bsl_mod)(left, right))> div = ADV_UFCS(_operator_bsl_mod)(left, right); 
			#line 744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return std::make_tuple(div, (ADV_UFCS(_operator_eq_eq_xor)(left, ADV_USPCS(MinValue, T)())) & (ADV_UFCS(_operator_eq_eq_xor)(right, ADV_USPCS(MinusOne, T)())));
		} else {
			#line 745 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{
				#line 746 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return std::make_tuple(ADV_UFCS(_operator_bsl_mod)(left, right), SimdMask<T, Arch>::False);
			}
		}
		return {};
	}
#line 750 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::StrictDivide(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>
	{
		#line 751 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const auto& [div, overflow] = OverflowingDivide(left, right);
		#line 752 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if (ADV_UPCS(Any)(overflow.__ref())) {
			#line 753 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 755 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return div;
	}
#line 758 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Divide(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>
	{
		#line 759 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		#if _DEBUG
		#line 760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return StrictDivide(left, right);
		#else
		#line 762 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return ADV_UFCS(_operator_bsl_mod)(left, right);
		#endif
		return {};
	}
#line 766 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::OverflowingMod(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const std::tuple<SimdVector<T, Arch>, SimdMask<T, Arch>>
	{
		#line 768 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if (ADV_UFCS(Any)(right.__ref(), ADV_USPCS(Zero, T)())) {
			#line 769 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Throw(Builtin::DivisionByZeroException{});
		}
		#line 771 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, IBinaryInteger>() && !Builtin::TypeIs<T, IUnsignedNumber>()) {
			#line 772 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_mod_mod)(left, right))> div = ADV_UFCS(_operator_mod_mod)(left, right); 
			#line 773 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return std::make_tuple(div, (ADV_UFCS(_operator_eq_eq_xor)(left, ADV_USPCS(MinValue, T)())) & (ADV_UFCS(_operator_eq_eq_xor)(right, ADV_USPCS(MinusOne, T)())));
		} else {
			#line 774 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{
				#line 775 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return std::make_tuple(ADV_UFCS(_operator_mod_mod)(left, right), SimdMask<T, Arch>::False);
			}
		}
		return {};
	}
#line 779 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::StrictMod(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>
	{
		#line 780 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const auto& [mod, overflow] = OverflowingMod(left, right);
		#line 781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if (ADV_UPCS(Any)(overflow.__ref())) {
			#line 782 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 784 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return mod;
	}
#line 787 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Mod(const SimdVector<T, Arch>& left, const SimdVector<T, Arch>& right)  -> const SimdVector<T, Arch>
	{
		#line 788 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, IFloatingPoint>()) {
			#line 789 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return ADV_UFCS(FusedNegatedMultiplyAdd)(ADV_UPCS(Truncate)((left / right).__ref()).__ref(), right, left);
		} else {
			#line 790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{
				#line 791 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				#if _DEBUG
				#line 792 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return StrictMod(left, right);
				#else
				#line 794 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return ADV_UFCS(_operator_mod_mod)(left, right);
				#endif
			}
		}
		return {};
	}
#line 799 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::OverflowingNegate(const SimdVector<T, Arch>& vec)  -> const std::tuple<SimdVector<T, Arch>, SimdMask<T, Arch>>
	{
		#line 801 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, IBinaryInteger>() && !Builtin::TypeIs<T, IUnsignedNumber>()) {
			#line 802 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return std::make_tuple(ADV_UFCS(_operator_sub_mod)(vec), (ADV_UFCS(_operator_eq_eq_xor)(vec, ADV_USPCS(MinValue, T)())));
		} else {
			#line 803 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{
				#line 804 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return std::make_tuple(ADV_UFCS(_operator_sub_mod)(vec), SimdMask<T, Arch>::False);
			}
		}
		#line 805 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		;
		return {};
	}
#line 808 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::StrictNegate(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 809 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const auto& [neg, overflow] = OverflowingNegate(vec);
		#line 810 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if (ADV_UPCS(Any)(overflow.__ref())) {
			#line 811 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Throw(Builtin::IntegerOverflowException{});
		}
		#line 813 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return neg;
	}
#line 816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Negate(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 817 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		#if _DEBUG
		#line 818 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return StrictNegate(vec);
		#else
		#line 820 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return ADV_UFCS(_operator_sub_mod)(vec);
		#endif
		return {};
	}
#line 824 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> inline auto CommonInstructions::FusedMultiplyAdd(const SimdVector<T, Arch>& x, const SimdVector<T, Arch>& y, const SimdVector<T, Arch>& z)  -> const SimdVector<T, Arch>
	{
		#line 825 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		ADV_EXPRESSION_BODY(x * y + z); 
	}
#line 827 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> inline auto CommonInstructions::FusedMultiplySub(const SimdVector<T, Arch>& x, const SimdVector<T, Arch>& y, const SimdVector<T, Arch>& z)  -> const SimdVector<T, Arch>
	{
		#line 828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		ADV_EXPRESSION_BODY(x * y - z); 
	}
#line 830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> inline auto CommonInstructions::FusedNegatedMultiplyAdd(const SimdVector<T, Arch>& x, const SimdVector<T, Arch>& y, const SimdVector<T, Arch>& z)  -> const SimdVector<T, Arch>
	{
		#line 831 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		ADV_EXPRESSION_BODY(-x * y + z); 
	}
#line 833 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> inline auto CommonInstructions::FusedNegatedMultiplySub(const SimdVector<T, Arch>& x, const SimdVector<T, Arch>& y, const SimdVector<T, Arch>& z)  -> const SimdVector<T, Arch>
	{
		#line 834 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		ADV_EXPRESSION_BODY(-x * y - z); 
	}
#line 836 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T2, class T1, class Arch> auto CommonInstructions::Convert(const SimdVector<T1, Arch>& vec)  -> const SimdVector<T2, Arch>
	{
		#line 837 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		constexpr Builtin::Auto<decltype(Builtin::i32{SimdVector<T1, Arch>::Length})> size = Builtin::i32{SimdVector<T1, Arch>::Length};
		#line 838 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T2, Arch>;
		#line 839 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		static_assert(size == SimdVector<T2, Arch>::Length, "Cannot convert vectors of different lengths");
		#line 840 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T1, size> bufIn{}; 
		#line 841 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T2, size> bufOut{}; 
		#line 842 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard842{};
			#line 843 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(StoreAligned)(vec.__ref(), (__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufIn.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
			#line 844 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{ auto __for_init_844 = System::Range<Builtin::Auto<decltype(size)>, false>({}, size); auto __for_iter_844 = ADV_UFCS(Iterate)(__for_init_844.__ref()); while(__for_iter_844.__ref().MoveNext()) {
			auto&& i = __for_iter_844.__ref().GetCurrent(); {
				#line 845 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_subscript)(bufOut.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) = Builtin::Cast<true, T2>(ADV_UFCS(_operator_subscript)(bufIn.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i));
			}}}
			#line 847 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return TVector::LoadAligned((__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufOut.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
		}
		return {};
	}
#line 851 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Clamp(const SimdVector<T, Arch>& vec, const SimdVector<T, Arch>& min, const SimdVector<T, Arch>& max)  -> const SimdVector<T, Arch>
	{
		#line 853 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 854 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if (ADV_UFCS(LessThanAny)(max.__ref(), min)) {
			#line 855 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 857 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(TVector::ConditionalSelect(ADV_UFCS(_operator_lt_xor)(vec, min), min, vec))> x = TVector::ConditionalSelect(ADV_UFCS(_operator_lt_xor)(vec, min), min, vec); 
		#line 858 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return TVector::ConditionalSelect(ADV_UFCS(_operator_gt_xor)(x, max), max, x);
	}
#line 861 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Lerp(const SimdVector<T, Arch>& min, const SimdVector<T, Arch>& max, const SimdVector<T, Arch>& amount)  -> const SimdVector<T, Arch>
	{
		#line 863 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		static_assert(Builtin::TypeIs<T, IFloatingPoint>(), "Lerp only works on floating point types");
		#line 864 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 865 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if (ADV_UFCS(LessThanAny)(max.__ref(), min)) {
			#line 866 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 868 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_mul_mod)(min, (ADV_UFCS(_operator_sub_mod)(TVector::One, amount))), (ADV_UFCS(_operator_mul_mod)(max, amount)));
	}
#line 871 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Truncate(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 872 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 873 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, Builtin::f32>()) {
			#line 874 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return TVector::ConditionalSelect(ADV_UFCS(_operator_lt_xor)(vec.__ref().Abs, Builtin::f32(16777216.0f)), ADV_UFCS_TEMPLATE(ConvertTo<Builtin::f32>)(ADV_UFCS_TEMPLATE(ConvertTo<Builtin::i32>)(vec.__ref()).__ref()), vec);
		} else {
			#line 876 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if constexpr (Builtin::TypeIs<T, Builtin::f64>()) {
				#line 877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return TVector::ConditionalSelect(ADV_UFCS(_operator_lt_xor)(vec.__ref().Abs, Builtin::f64(9007199254740992.0)), ADV_UFCS_TEMPLATE(ConvertTo<Builtin::f64>)(ADV_UFCS_TEMPLATE(ConvertTo<Builtin::i64>)(vec.__ref()).__ref()), vec);
			} else {
				#line 879 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				{
					#line 880 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					return vec;
				}
			}
		}
		return {};
	}
#line 884 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Ceil(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 886 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Truncate)(vec.__ref()))> truncated = ADV_UPCS(Truncate)(vec.__ref()); 
		#line 887 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return TVector::ConditionalSelect(ADV_UFCS(_operator_lt_xor)(truncated, vec), truncated + T{Builtin::i32(1)}, truncated);
	}
#line 890 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Floor(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 891 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 892 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Truncate)(vec.__ref()))> truncated = ADV_UPCS(Truncate)(vec.__ref()); 
		#line 893 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return TVector::ConditionalSelect(ADV_UFCS(_operator_gt_xor)(truncated, vec), truncated - T{Builtin::i32(1)}, truncated);
	}
#line 896 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Round(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 897 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 898 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Abs)(vec.__ref()))> abs = ADV_UPCS(Abs)(vec.__ref()); 
		#line 899 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Ceil)(abs.__ref()))> ceil = ADV_UPCS(Ceil)(abs.__ref()); 
		#line 900 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(TVector::ConditionalSelect(ADV_UFCS(_operator_gt_xor)(ceil - T{Builtin::f64(0.5)}, abs), ceil - T{Builtin::i32(1)}, ceil))> rounded = TVector::ConditionalSelect(ADV_UFCS(_operator_gt_xor)(ceil - T{Builtin::f64(0.5)}, abs), ceil - T{Builtin::i32(1)}, ceil); 
		#line 901 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, Builtin::f32>()) {
			#line 902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return TVector::ConditionalSelect(ADV_UFCS(_operator_gt_xor)(abs, Builtin::f32(16777216.0f)), vec, ADV_UFCS(CopySign)(rounded.__ref(), vec));
		} else {
			#line 903 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if constexpr (Builtin::TypeIs<T, Builtin::f64>()) {
				#line 904 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return TVector::ConditionalSelect(ADV_UFCS(_operator_gt_xor)(abs, Builtin::f64(9007199254740992.0)), vec, ADV_UFCS(CopySign)(rounded.__ref(), vec));
			} else {
				#line 905 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				{
					#line 906 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					return vec;
				}
			}
		}
		return {};
	}
#line 910 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::RoundTiesEven(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 911 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, IFloatingPoint>()) {
			#line 912 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			using TVector = SimdVector<T, Arch>;
			#line 913 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			constexpr Builtin::Auto<decltype(Builtin::i32{SimdVector<T, Arch>::Length})> size = Builtin::i32{SimdVector<T, Arch>::Length};
			#line 914 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			BufferedVector<T, size> bufIn{}; 
			#line 915 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			BufferedVector<T, size> bufOut{}; 
			#line 916 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard916{};
				#line 917 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(StoreAligned)(vec.__ref(), (__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufIn.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
				#line 918 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				{ auto __for_init_918 = System::Range<Builtin::Auto<decltype(size)>, false>({}, size); auto __for_iter_918 = ADV_UFCS(Iterate)(__for_init_918.__ref()); while(__for_iter_918.__ref().MoveNext()) {
				auto&& i = __for_iter_918.__ref().GetCurrent(); {
					#line 919 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					ADV_UFCS(_operator_subscript)(bufOut.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) = ADV_UPCS(RoundTiesEven)(ADV_UFCS(_operator_subscript)(bufIn.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i).__ref());
				}}}
				#line 921 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return TVector::LoadAligned((__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufOut.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
			}
		} else {
			#line 923 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{
				#line 924 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return vec;
			}
		}
		return {};
	}
#line 928 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::NearbyInt(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 929 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 930 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TValue = typename TVector::TValue;
		#line 931 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(BitOfSign(vec))> sign = BitOfSign(vec); 
		#line 932 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(vec ^ sign)> v = vec ^ sign; 
		#line 933 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(TVector::Create(FloatConstants<TValue>::TwoToNmb))> t2n = TVector::Create(FloatConstants<TValue>::TwoToNmb); 
		#line 934 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_add_mod)(v, t2n))> d0 = ADV_UFCS(_operator_add_mod)(v, t2n); 
		#line 935 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_sub_mod)(d0, t2n))> d = ADV_UFCS(_operator_sub_mod)(d0, t2n); 
		#line 936 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return sign ^ TVector::ConditionalSelect(ADV_UFCS(_operator_lt_xor)(v, t2n), d, v);
	}
#line 939 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Sin(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 940 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		static_assert(Builtin::TypeIs<T, IFloatingPoint>(), "Sin only works on floating point types");
		#line 941 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 942 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Abs)(vec.__ref()))> x = ADV_UPCS(Abs)(vec.__ref()); 
		#line 943 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		Builtin::Auto<decltype(TVector::Create(ADV_USPCS(NaN, T)()))> xr = TVector::Create(ADV_USPCS(NaN, T)()); 
		#line 944 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(TrigReduce(x, Builtin::MutableRef(xr)))> n = TrigReduce(x, Builtin::MutableRef(xr)); 
		#line 945 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(TVector::ConditionalSelect(ADV_UFCS(_operator_gt_eq_xor)(n, T{Builtin::i32(2)}), TVector::One, TVector::Zero))> tmp = TVector::ConditionalSelect(ADV_UFCS(_operator_gt_eq_xor)(n, T{Builtin::i32(2)}), TVector::One, TVector::Zero); 
		#line 946 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(FusedMultiplyAdd)(TVector::Create(T{Builtin::i32(-2)}).__ref(), tmp, n))> swapBit = ADV_UFCS(FusedMultiplyAdd)(TVector::Create(T{Builtin::i32(-2)}).__ref(), tmp, n); 
		#line 947 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(BitOfSign(vec) ^ TVector::ConditionalSelect(ADV_UFCS(_operator_ne_eq_xor)(tmp, TVector::Zero), TVector::Create(FloatConstants<T>::SignMask), TVector::Zero))> signBit = BitOfSign(vec) ^ TVector::ConditionalSelect(ADV_UFCS(_operator_ne_eq_xor)(tmp, TVector::Zero), TVector::Create(FloatConstants<T>::SignMask), TVector::Zero); 
		#line 949 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(xr, xr))> z = ADV_UFCS(_operator_mul_mod)(xr, xr); 
		#line 950 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(SinEval(z, xr))> se = SinEval(z, xr); 
		#line 951 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(CosEval(z))> ce = CosEval(z); 
		#line 952 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(TVector::ConditionalSelect(ADV_UFCS(_operator_eq_eq_xor)(swapBit, TVector::Zero), se, ce))> z1 = TVector::ConditionalSelect(ADV_UFCS(_operator_eq_eq_xor)(swapBit, TVector::Zero), se, ce); 
		#line 953 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return z1 ^ signBit;
	}
#line 956 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Cos(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 957 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		static_assert(Builtin::TypeIs<T, IFloatingPoint>(), "Cos only works on floating point types");
		#line 958 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 959 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Abs)(vec.__ref()))> x = ADV_UPCS(Abs)(vec.__ref()); 
		#line 960 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		Builtin::Auto<decltype(TVector::Create(ADV_USPCS(NaN, T)()))> xr = TVector::Create(ADV_USPCS(NaN, T)()); 
		#line 961 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(TrigReduce(x, Builtin::MutableRef(xr)))> n = TrigReduce(x, Builtin::MutableRef(xr)); 
		#line 962 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(TVector::ConditionalSelect(ADV_UFCS(_operator_gt_eq_xor)(n, T{Builtin::i32(2)}), TVector::One, TVector::Zero))> tmp = TVector::ConditionalSelect(ADV_UFCS(_operator_gt_eq_xor)(n, T{Builtin::i32(2)}), TVector::One, TVector::Zero); 
		#line 963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(FusedMultiplyAdd)(TVector::Create(T{Builtin::i32(-2)}).__ref(), tmp, n))> swapBit = ADV_UFCS(FusedMultiplyAdd)(TVector::Create(T{Builtin::i32(-2)}).__ref(), tmp, n); 
		#line 964 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(TVector::ConditionalSelect(ADV_UFCS(_operator_ne_eq_xor)((swapBit ^ tmp), TVector::Zero), TVector::Create(FloatConstants<T>::SignMask), TVector::Zero))> signBit = TVector::ConditionalSelect(ADV_UFCS(_operator_ne_eq_xor)((swapBit ^ tmp), TVector::Zero), TVector::Create(FloatConstants<T>::SignMask), TVector::Zero); 
		#line 966 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(xr, xr))> z = ADV_UFCS(_operator_mul_mod)(xr, xr); 
		#line 967 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(SinEval(z, xr))> se = SinEval(z, xr); 
		#line 968 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(CosEval(z))> ce = CosEval(z); 
		#line 969 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(TVector::ConditionalSelect(ADV_UFCS(_operator_ne_eq_xor)(swapBit, TVector::Zero), se, ce))> z1 = TVector::ConditionalSelect(ADV_UFCS(_operator_ne_eq_xor)(swapBit, TVector::Zero), se, ce); 
		#line 970 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return z1 ^ signBit;
	}
#line 973 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::SinCos(const SimdVector<T, Arch>& vec)  -> const std::tuple<SimdVector<T, Arch>, SimdVector<T, Arch>>
	{
		#line 974 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		static_assert(Builtin::TypeIs<T, IFloatingPoint>(), "SinCos only works on floating point types");
		#line 975 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 976 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Abs)(vec.__ref()))> x = ADV_UPCS(Abs)(vec.__ref()); 
		#line 977 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		Builtin::Auto<decltype(TVector::Create(ADV_USPCS(NaN, T)()))> xr = TVector::Create(ADV_USPCS(NaN, T)()); 
		#line 978 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(TrigReduce(x, Builtin::MutableRef(xr)))> n = TrigReduce(x, Builtin::MutableRef(xr)); 
		#line 979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(TVector::ConditionalSelect(ADV_UFCS(_operator_gt_eq_xor)(n, T{Builtin::i32(2)}), TVector::One, TVector::Zero))> tmp = TVector::ConditionalSelect(ADV_UFCS(_operator_gt_eq_xor)(n, T{Builtin::i32(2)}), TVector::One, TVector::Zero); 
		#line 980 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(FusedMultiplyAdd)(TVector::Create(T{Builtin::i32(-2)}).__ref(), tmp, n))> swapBit = ADV_UFCS(FusedMultiplyAdd)(TVector::Create(T{Builtin::i32(-2)}).__ref(), tmp, n); 
		#line 981 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(BitOfSign(vec) ^ TVector::ConditionalSelect(ADV_UFCS(_operator_ne_eq_xor)(tmp, TVector::Zero), TVector::Create(FloatConstants<T>::SignMask), TVector::Zero))> signBitSin = BitOfSign(vec) ^ TVector::ConditionalSelect(ADV_UFCS(_operator_ne_eq_xor)(tmp, TVector::Zero), TVector::Create(FloatConstants<T>::SignMask), TVector::Zero); 
		#line 983 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(TVector::ConditionalSelect(ADV_UFCS(_operator_ne_eq_xor)((swapBit ^ tmp), TVector::Zero), TVector::Create(FloatConstants<T>::SignMask), TVector::Zero))> signBitCos = TVector::ConditionalSelect(ADV_UFCS(_operator_ne_eq_xor)((swapBit ^ tmp), TVector::Zero), TVector::Create(FloatConstants<T>::SignMask), TVector::Zero); 
		#line 985 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(xr, xr))> z = ADV_UFCS(_operator_mul_mod)(xr, xr); 
		#line 986 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(SinEval(z, xr))> se = SinEval(z, xr); 
		#line 987 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(CosEval(z))> ce = CosEval(z); 
		#line 988 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(TVector::ConditionalSelect(ADV_UFCS(_operator_eq_eq_xor)(swapBit, TVector::Zero), se, ce))> z1Sin = TVector::ConditionalSelect(ADV_UFCS(_operator_eq_eq_xor)(swapBit, TVector::Zero), se, ce); 
		#line 989 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(TVector::ConditionalSelect(ADV_UFCS(_operator_ne_eq_xor)(swapBit, TVector::Zero), se, ce))> z1Cos = TVector::ConditionalSelect(ADV_UFCS(_operator_ne_eq_xor)(swapBit, TVector::Zero), se, ce); 
		#line 990 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return std::make_tuple(z1Sin ^ signBitSin, z1Cos ^ signBitCos);
	}
#line 993 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Tan(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 994 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		static_assert(Builtin::TypeIs<T, IFloatingPoint>(), "Tan only works on floating point types");
		#line 995 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 996 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Abs)(vec.__ref()))> x = ADV_UPCS(Abs)(vec.__ref()); 
		#line 997 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		Builtin::Auto<decltype(TVector::Create(ADV_USPCS(NaN, T)()))> xr = TVector::Create(ADV_USPCS(NaN, T)()); 
		#line 998 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(TrigReduce(x, Builtin::MutableRef(xr)))> n = TrigReduce(x, Builtin::MutableRef(xr)); 
		#line 999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(TVector::ConditionalSelect(ADV_UFCS(_operator_gt_eq_xor)(n, T{Builtin::i32(2)}), TVector::One, TVector::Zero))> tmp = TVector::ConditionalSelect(ADV_UFCS(_operator_gt_eq_xor)(n, T{Builtin::i32(2)}), TVector::One, TVector::Zero); 
		#line 1000 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(FusedMultiplyAdd)(TVector::Create(T{Builtin::i32(-2)}).__ref(), tmp, n))> swapBit = ADV_UFCS(FusedMultiplyAdd)(TVector::Create(T{Builtin::i32(-2)}).__ref(), tmp, n); 
		#line 1001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_eq_eq_xor)(swapBit, TVector::Zero))> test1 = ADV_UFCS(_operator_eq_eq_xor)(swapBit, TVector::Zero); 
		#line 1002 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(TanEval(xr, test1))> y = TanEval(xr, test1); 
		#line 1003 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return y ^ BitOfSign(vec);
	}
#line 1006 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Asin(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 1007 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		static_assert(Builtin::TypeIs<T, IFloatingPoint>(), "Asin only works on floating point types");
		#line 1008 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 1009 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		Builtin::Auto<decltype(ADV_UPCS(Abs)(vec.__ref()))> x = ADV_UPCS(Abs)(vec.__ref()); 
		#line 1010 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, Builtin::f32>()) {
			#line 1011 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(BitOfSign(vec))> sign = BitOfSign(vec); 
			#line 1012 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_gt_xor)(x, T{Builtin::f64(0.5)}))> largerHalf = ADV_UFCS(_operator_gt_xor)(x, T{Builtin::f64(0.5)}); 
			#line 1013 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(TVector::ConditionalSelect(largerHalf, ADV_UFCS(_operator_mul_mod)(TVector::Create(T{Builtin::f64(0.5)}), (ADV_UFCS(_operator_sub_mod)(TVector::One, x))), ADV_UFCS(_operator_mul_mod)(x, x)))> z = TVector::ConditionalSelect(largerHalf, ADV_UFCS(_operator_mul_mod)(TVector::Create(T{Builtin::f64(0.5)}), (ADV_UFCS(_operator_sub_mod)(TVector::One, x))), ADV_UFCS(_operator_mul_mod)(x, x)); 
			#line 1014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			x = TVector::ConditionalSelect(largerHalf, ADV_UPCS(Sqrt)(z.__ref()), x);
			#line 1015 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(Horner<TVector, Builtin::u32(0x3e2aaae4U), Builtin::u32(0x3d9980f6U), Builtin::u32(0x3d3a3ec7U), Builtin::u32(0x3cc617e3U), Builtin::u32(0x3d2cb352U)>(z))> z1 = Horner<TVector, Builtin::u32(0x3e2aaae4U), Builtin::u32(0x3d9980f6U), Builtin::u32(0x3d3a3ec7U), Builtin::u32(0x3cc617e3U), Builtin::u32(0x3d2cb352U)>(z); 
			#line 1016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			z1 = ADV_UFCS(FusedMultiplyAdd)(z1.__ref(), z * x, x);
			#line 1017 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			z = TVector::ConditionalSelect(largerHalf, ADV_UFCS(_operator_sub_mod)(TVector::Create(FloatConstants<T>::PiO2), (ADV_UFCS(_operator_add_mod)(z1, z1))), z1);
			#line 1018 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return z ^ sign;
		} else {
			#line 1019 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{
				#line 1020 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_lt_xor)(x, FloatConstants<Builtin::f64>::SqrtEps))> smallCond = ADV_UFCS(_operator_lt_xor)(x, FloatConstants<Builtin::f64>::SqrtEps); 
				#line 1021 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(TVector::Create(ADV_USFCS((Builtin::f64), FromBits)(Builtin::u64(0x3fe4000000000000ULL))))> ct1 = TVector::Create(ADV_USFCS((Builtin::f64), FromBits)(Builtin::u64(0x3fe4000000000000ULL))); 
				#line 1022 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_sub_mod)(TVector::One, x))> zz1 = ADV_UFCS(_operator_sub_mod)(TVector::One, x); 
				#line 1023 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(zz1, Horner<TVector, Builtin::u64(0x403c896240f3081dULL), Builtin::u64(0xc03991aaac01ab68ULL), Builtin::u64(0x401bdff5baf33e6aULL), Builtin::u64(0xbfe2079259f9290fULL), Builtin::u64(0x3f684fc3988e9f08ULL)>(zz1)) / Horner1<TVector, Builtin::u64(0x40756709b0b644beULL), Builtin::u64(0xc077fe08959063eeULL), Builtin::u64(0x40626219af6a7f42ULL), Builtin::u64(0xc035f2a2b6bf5d8cULL)>(zz1))> vp = ADV_UFCS(_operator_mul_mod)(zz1, Horner<TVector, Builtin::u64(0x403c896240f3081dULL), Builtin::u64(0xc03991aaac01ab68ULL), Builtin::u64(0x401bdff5baf33e6aULL), Builtin::u64(0xbfe2079259f9290fULL), Builtin::u64(0x3f684fc3988e9f08ULL)>(zz1)) / Horner1<TVector, Builtin::u64(0x40756709b0b644beULL), Builtin::u64(0xc077fe08959063eeULL), Builtin::u64(0x40626219af6a7f42ULL), Builtin::u64(0xc035f2a2b6bf5d8cULL)>(zz1); 
				#line 1026 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				zz1 = ADV_UPCS(Sqrt)((ADV_UFCS(_operator_add_mod)(zz1, zz1)).__ref());
				#line 1027 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_sub_mod)(FloatConstants<Builtin::f64>::PiO4, zz1))> z = ADV_UFCS(_operator_sub_mod)(FloatConstants<Builtin::f64>::PiO4, zz1); 
				#line 1028 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				zz1 = ADV_UFCS(FusedMultiplySub)(zz1.__ref(), vp, FloatConstants<Builtin::f64>::PiO2_Lo);
				#line 1029 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				z = ADV_UFCS(_operator_sub_mod)(z, zz1);
				#line 1030 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				zz1 = ADV_UFCS(_operator_add_mod)(z, FloatConstants<Builtin::f64>::PiO4);
				#line 1031 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				Builtin::Auto<decltype(ADV_UFCS(FusedMultiplyAdd)(x.__ref(), z, x))> zz2 = ADV_UFCS(FusedMultiplyAdd)(x.__ref(), z, x); 
				#line 1032 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return TVector::ConditionalSelect(ADV_UFCS(_operator_gt_xor)(x, TVector::One), TVector::Create(ADV_USPCS(NaN, Builtin::f64)()), TVector::ConditionalSelect(smallCond, x, TVector::ConditionalSelect(ADV_UFCS(_operator_gt_xor)(x, ct1), zz1, zz2)) ^ BitOfSign(vec));
			}
		}
		return {};
	}
#line 1038 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Acos(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 1039 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		static_assert(Builtin::TypeIs<T, IFloatingPoint>(), "Acos only works on floating point types");
		#line 1040 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 1041 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		Builtin::Auto<decltype(ADV_UPCS(Abs)(vec.__ref()))> vx = ADV_UPCS(Abs)(vec.__ref()); 
		#line 1042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		Builtin::Auto<decltype(vx)> x = vx; 
		#line 1043 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_gt_xor)(x, T{Builtin::f64(0.5)}))> largerHalf = ADV_UFCS(_operator_gt_xor)(x, T{Builtin::f64(0.5)}); 
		#line 1044 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		x = TVector::ConditionalSelect(largerHalf, ADV_UPCS(Sqrt)((ADV_UFCS(FusedMultiplyAdd)(TVector::Create(T{Builtin::f64(-0.5)}).__ref(), x, TVector::Create(T{Builtin::f64(0.5)}))).__ref()), vec);
		#line 1046 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		x = ADV_UPCS(Asin)(x.__ref());
		#line 1047 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		x = TVector::ConditionalSelect(largerHalf, ADV_UFCS(_operator_add_mod)(x, x), x);
		#line 1048 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		x = TVector::ConditionalSelect(ADV_UFCS(_operator_lt_xor)(vec, TVector::Create(T{Builtin::f64(-0.5)})), ADV_UFCS(_operator_sub_mod)(TVector::Create(ADV_USPCS(Pi, T)()), x), x);
		#line 1049 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return TVector::ConditionalSelect(largerHalf, x, ADV_UFCS(_operator_sub_mod)(TVector::Create(FloatConstants<T>::PiO2), x));
	}
#line 1053 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Atan(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 1054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		static_assert(Builtin::TypeIs<T, IFloatingPoint>(), "Atan only works on floating point types");
		#line 1055 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 1056 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		Builtin::Auto<decltype(ADV_UPCS(Abs)(vec.__ref()))> x = ADV_UPCS(Abs)(vec.__ref()); 
		#line 1057 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Reciprocal)(x.__ref()))> xr = ADV_UPCS(Reciprocal)(x.__ref()); 
		#line 1058 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		x = AtanEval(x, xr);
		#line 1059 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return x ^ BitOfSign(vec);
	}
#line 1062 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::SignNotZero(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 1063 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 1064 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, Builtin::f32>()) {
			#line 1065 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return TVector::One | (vec & FloatConstants<Builtin::f32>::SignMask);
		} else {
			#line 1066 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if constexpr (Builtin::TypeIs<T, Builtin::f64>()) {
				#line 1067 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return TVector::One | (vec & FloatConstants<Builtin::f64>::SignMask);
			} else {
				#line 1068 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				{
					#line 1069 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					return TVector::One | (vec >> (Builtin::i32(8) * Builtin::usize(sizeof (T)) - Builtin::i32(1)));
				}
			}
		}
		return {};
	}
#line 1073 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Atan2(const SimdVector<T, Arch>& x, const SimdVector<T, Arch>& y)  -> const SimdVector<T, Arch>
	{
		#line 1074 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		static_assert(Builtin::TypeIs<T, IFloatingPoint>(), "Atan2 only works on floating point types");
		#line 1075 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 1076 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Abs)((x / y).__ref()))> q = ADV_UPCS(Abs)((x / y).__ref()); 
		#line 1077 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Reciprocal)(q.__ref()))> qp = ADV_UPCS(Reciprocal)(q.__ref()); 
		#line 1078 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(AtanEval(q, qp))> z = AtanEval(q, qp); 
		#line 1079 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return TVector::ConditionalSelect(ADV_UFCS(_operator_gt_xor)(y, TVector::Zero), z, ADV_UFCS(_operator_sub_mod)(TVector::Create(ADV_USPCS(Pi, T)()), z)) * SignNotZero(x);
	}
#line 1082 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Sinh(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 1083 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		static_assert(Builtin::TypeIs<T, IFloatingPoint>(), "Sinh only works on floating point types");
		#line 1084 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 1085 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(TVector::Create(T{Builtin::f64(0.5)}))> half = TVector::Create(T{Builtin::f64(0.5)}); 
		#line 1086 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Abs)(vec.__ref()))> x = ADV_UPCS(Abs)(vec.__ref()); 
		#line 1087 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_lt_xor)(x, TVector::One))> lt1 = ADV_UFCS(_operator_lt_xor)(x, TVector::One); 
		#line 1088 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(BitOfSign(vec))> bts = BitOfSign(vec); 
		#line 1089 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		Builtin::Auto<decltype(TVector::Zero)> z = TVector::Zero; 
		#line 1090 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if (ADV_UPCS(Any)(lt1.__ref())) {
			#line 1091 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(x, x))> sqr = ADV_UFCS(_operator_mul_mod)(x, x); 
			#line 1092 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if constexpr (Builtin::TypeIs<T, Builtin::f32>()) {
				#line 1093 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				z = ADV_UFCS(_operator_mul_mod)(x, Horner<TVector, Builtin::u32(0x3f800000U), Builtin::u32(0x3e2aaaccU), Builtin::u32(0x3c087bbeU), Builtin::u32(0x39559e2fU)>(sqr));
			} else {
				#line 1094 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				if constexpr (Builtin::TypeIs<T, Builtin::f64>()) {
					#line 1095 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					z = ADV_UFCS(FusedMultiplyAdd)(x.__ref(), ADV_UFCS(_operator_mul_mod)((Horner<TVector, Builtin::u64(0xc115782bdbf6ab05ULL), Builtin::u64(0xc0c694b8c71d6182ULL), Builtin::u64(0xc064773a398ff4feULL), Builtin::u64(0xbfe9435fe8bb3cd6ULL)>(sqr) / Horner1<TVector, Builtin::u64(0xc1401a20e4f90044ULL), Builtin::u64(0x40e1a7ba7ed72245ULL), Builtin::u64(0xc0715b6096e96484ULL)>(sqr)), sqr), x);
				}
			}
			#line 1099 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if (ADV_UPCS(All)(lt1.__ref())) {
				#line 1100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return z ^ bts;
			}
		}
		#line 1103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_gt_xor)(x, (FloatConstants<T>::MaxLog - FloatConstants<T>::Log2)))> test1 = ADV_UFCS(_operator_gt_xor)(x, (FloatConstants<T>::MaxLog - FloatConstants<T>::Log2)); 
		#line 1104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(TVector::ConditionalSelect(test1, half, TVector::One))> fac = TVector::ConditionalSelect(test1, half, TVector::One); 
		#line 1105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Exp)((ADV_UFCS(_operator_mul_mod)(x, fac)).__ref()))> tmp = ADV_UPCS(Exp)((ADV_UFCS(_operator_mul_mod)(x, fac)).__ref()); 
		#line 1106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(half, tmp))> tmp1 = ADV_UFCS(_operator_mul_mod)(half, tmp); 
		#line 1107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(TVector::ConditionalSelect(test1, ADV_UFCS(_operator_mul_mod)(tmp1, tmp), ADV_UFCS(_operator_sub_mod)(tmp1, half / tmp)))> r = TVector::ConditionalSelect(test1, ADV_UFCS(_operator_mul_mod)(tmp1, tmp), ADV_UFCS(_operator_sub_mod)(tmp1, half / tmp)); 
		#line 1108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return TVector::ConditionalSelect(lt1, z, r) ^ bts;
	}
#line 1111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Cosh(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 1112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		static_assert(Builtin::TypeIs<T, IFloatingPoint>(), "Cosh only works on floating point types");
		#line 1113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 1114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Abs)(vec.__ref()))> x = ADV_UPCS(Abs)(vec.__ref()); 
		#line 1115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_gt_xor)(x, (FloatConstants<T>::MaxLog - FloatConstants<T>::Log2)))> test1 = ADV_UFCS(_operator_gt_xor)(x, (FloatConstants<T>::MaxLog - FloatConstants<T>::Log2)); 
		#line 1116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(TVector::ConditionalSelect(test1, TVector::Create(T{Builtin::f64(0.5)}), TVector::One))> fac = TVector::ConditionalSelect(test1, TVector::Create(T{Builtin::f64(0.5)}), TVector::One); 
		#line 1117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Exp)((ADV_UFCS(_operator_mul_mod)(x, fac)).__ref()))> tmp = ADV_UPCS(Exp)((ADV_UFCS(_operator_mul_mod)(x, fac)).__ref()); 
		#line 1118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(TVector::Create(T{Builtin::f64(0.5)}), tmp))> tmp1 = ADV_UFCS(_operator_mul_mod)(TVector::Create(T{Builtin::f64(0.5)}), tmp); 
		#line 1119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return TVector::ConditionalSelect(test1, ADV_UFCS(_operator_mul_mod)(tmp1, tmp), ADV_UFCS(Midpoint)(tmp.__ref(), ADV_UPCS(Reciprocal)(tmp.__ref())));
	}
#line 1122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Tanh(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 1123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		static_assert(Builtin::TypeIs<T, IFloatingPoint>(), "Tanh only works on floating point types");
		#line 1124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 1125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(TVector::One)> one = TVector::One; 
		#line 1126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Abs)(vec.__ref()))> x = ADV_UPCS(Abs)(vec.__ref()); 
		#line 1127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_lt_xor)(x, (TVector::Create(Builtin::i32(5)) / TVector::Create(Builtin::i32(8)))))> test1 = ADV_UFCS(_operator_lt_xor)(x, (TVector::Create(Builtin::i32(5)) / TVector::Create(Builtin::i32(8)))); 
		#line 1128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(BitOfSign(vec))> bts = BitOfSign(vec); 
		#line 1129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		Builtin::Auto<decltype(one)> z = one; 
		#line 1130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if (ADV_UPCS(Any)(test1.__ref())) {
			#line 1131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(x, x))> sqr = ADV_UFCS(_operator_mul_mod)(x, x); 
			#line 1132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if constexpr (Builtin::TypeIs<T, Builtin::f32>()) {
				#line 1133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				z = ADV_UFCS(FusedMultiplyAdd)((ADV_UFCS(_operator_mul_mod)(Horner<TVector, Builtin::u32(0xbeaaaa99U), Builtin::u32(0x3e088393U), Builtin::u32(0xbd5c1e2dU), Builtin::u32(0x3ca9134eU), Builtin::u32(0xbbbaf0eaU)>(sqr), sqr)).__ref(), x, x);
			} else {
				#line 1135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				if constexpr (Builtin::TypeIs<T, Builtin::f64>()) {
					#line 1136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					z = ADV_UFCS(FusedMultiplyAdd)((ADV_UFCS(_operator_mul_mod)(sqr, Horner<TVector, Builtin::u64(0xc0993ac030580563ULL), Builtin::u64(0xc058d26a0e26682dULL), Builtin::u64(0xbfeedc5baafd6f4bULL)>(sqr)) / Horner1<TVector, Builtin::u64(0x40b2ec102442040cULL), Builtin::u64(0x40a176fa0e5535faULL), Builtin::u64(0x405c33f28a581B86ULL)>(sqr)).__ref(), x, x);
				}
			}
			#line 1141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if (ADV_UPCS(All)(test1.__ref())) {
				#line 1142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return z ^ bts;
			}
		}
		#line 1145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(FusedMultiplyAdd)(TVector::Create(Builtin::i32(-2)).__ref(), ADV_UPCS(Reciprocal)((ADV_UFCS(_operator_add_mod)(ADV_UPCS(Exp)((ADV_UFCS(_operator_add_mod)(x, x)).__ref()), one)).__ref()), one))> r = ADV_UFCS(FusedMultiplyAdd)(TVector::Create(Builtin::i32(-2)).__ref(), ADV_UPCS(Reciprocal)((ADV_UFCS(_operator_add_mod)(ADV_UPCS(Exp)((ADV_UFCS(_operator_add_mod)(x, x)).__ref()), one)).__ref()), one); 
		#line 1146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return TVector::ConditionalSelect(test1, z, r) ^ bts;
	}
#line 1149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Asinh(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 1150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		static_assert(Builtin::TypeIs<T, IFloatingPoint>(), "Asinh only works on floating point types");
		#line 1151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 1152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Abs)(vec.__ref()))> x = ADV_UPCS(Abs)(vec.__ref()); 
		#line 1153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, Builtin::f32>()) {
			#line 1154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_lt_xor)(x, T{Builtin::f64(0.5)}))> lhalf = ADV_UFCS(_operator_lt_xor)(x, T{Builtin::f64(0.5)}); 
			#line 1155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(x, x))> xx = ADV_UFCS(_operator_mul_mod)(x, x); 
			#line 1156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(BitOfSign(vec))> bts = BitOfSign(vec); 
			#line 1157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(TVector::Zero)> z = TVector::Zero; 
			#line 1158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if (ADV_UPCS(Any)(lhalf.__ref())) {
				#line 1159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				z = ADV_UFCS(_operator_mul_mod)(x, Horner<TVector, Builtin::u32(0x3f800000U), Builtin::u32(0xbe2aa9adU), Builtin::u32(0x3d9949b1U), Builtin::u32(0xbd2ee581U), Builtin::u32(0x3ca4d6e6U)>(xx));
				#line 1160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				if (ADV_UPCS(All)(lhalf.__ref())) {
					#line 1161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					return z ^ bts;
				}
			}
			#line 1164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(TVector::ConditionalSelect(ADV_UFCS(_operator_gt_xor)(x, FloatConstants<Builtin::f32>::OneOSqrtEps), x, ADV_UFCS(Midpoint)(x.__ref(), ADV_UFCS(Hypot)(TVector::One.__ref(), x))))> tmp = TVector::ConditionalSelect(ADV_UFCS(_operator_gt_xor)(x, FloatConstants<Builtin::f32>::OneOSqrtEps), x, ADV_UFCS(Midpoint)(x.__ref(), ADV_UFCS(Hypot)(TVector::One.__ref(), x))); 
			#line 1165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return TVector::ConditionalSelect(ADV_UPCS(IsNaN)(vec.__ref()), TVector::Create(ADV_USPCS(NaN, Builtin::f32)()), TVector::ConditionalSelect(lhalf, z, ADV_UFCS(_operator_add_mod)(ADV_UPCS(Ln)(tmp.__ref()), FloatConstants<Builtin::f32>::Log2)) ^ bts);
		} else {
			#line 1167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{
				#line 1168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_gt_xor)(x, FloatConstants<Builtin::f64>::OneOSqrtEps))> test1 = ADV_UFCS(_operator_gt_xor)(x, FloatConstants<Builtin::f64>::OneOSqrtEps); 
				#line 1169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				Builtin::Auto<decltype(TVector::ConditionalSelect(test1, ADV_UFCS(_operator_sub_mod)(x, TVector::One), ADV_UFCS(_operator_add_mod)(x, ADV_UFCS(_operator_mul_mod)(x, x) / (ADV_UFCS(_operator_add_mod)(TVector::One, ADV_UFCS(Hypot)(TVector::One.__ref(), x))))))> z = TVector::ConditionalSelect(test1, ADV_UFCS(_operator_sub_mod)(x, TVector::One), ADV_UFCS(_operator_add_mod)(x, ADV_UFCS(_operator_mul_mod)(x, x) / (ADV_UFCS(_operator_add_mod)(TVector::One, ADV_UFCS(Hypot)(TVector::One.__ref(), x))))); 
				#line 1170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				z = TVector::ConditionalSelect(ADV_UPCS(IsInfinity)(x.__ref()), x, z);
				#line 1171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UPCS(LnP1)(z.__ref()))> l1p = ADV_UPCS(LnP1)(z.__ref()); 
				#line 1172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				z = TVector::ConditionalSelect(test1, ADV_UFCS(_operator_add_mod)(l1p, FloatConstants<Builtin::f64>::Log2), l1p);
				#line 1173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return BitOfSign(vec) ^ z;
			}
		}
		return {};
	}
#line 1177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Acosh(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 1178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		static_assert(Builtin::TypeIs<T, IFloatingPoint>(), "Acosh only works on floating point types");
		#line 1179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 1180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_sub_mod)(vec, TVector::One))> x = ADV_UFCS(_operator_sub_mod)(vec, TVector::One); 
		#line 1181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_gt_xor)(x, FloatConstants<T>::OneOTwoEps))> test1 = ADV_UFCS(_operator_gt_xor)(x, FloatConstants<T>::OneOTwoEps); 
		#line 1182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(TVector::ConditionalSelect(test1, vec, ADV_UFCS(_operator_add_mod)(x, ADV_UPCS(Sqrt)((ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_add_mod)(x, x), ADV_UFCS(_operator_mul_mod)(x, x))).__ref()))))> z = TVector::ConditionalSelect(test1, vec, ADV_UFCS(_operator_add_mod)(x, ADV_UPCS(Sqrt)((ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_add_mod)(x, x), ADV_UFCS(_operator_mul_mod)(x, x))).__ref()))); 
		#line 1183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UPCS(LnP1)(z.__ref()))> l1p = ADV_UPCS(LnP1)(z.__ref()); 
		#line 1184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return TVector::ConditionalSelect(test1, ADV_UFCS(_operator_add_mod)(l1p, FloatConstants<T>::Log2), l1p);
	}
#line 1187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Atanh(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 1188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		static_assert(Builtin::TypeIs<T, IFloatingPoint>(), "Atanh only works on floating point types");
		#line 1189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 1190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Abs)(vec.__ref()))> x = ADV_UPCS(Abs)(vec.__ref()); 
		#line 1191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_add_mod)(x, x))> t = ADV_UFCS(_operator_add_mod)(x, x); 
		#line 1192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_sub_mod)(TVector::One, x))> z = ADV_UFCS(_operator_sub_mod)(TVector::One, x); 
		#line 1193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_lt_xor)(x, T{Builtin::f64(0.5)}))> test1 = ADV_UFCS(_operator_lt_xor)(x, T{Builtin::f64(0.5)}); 
		#line 1194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(TVector::ConditionalSelect(test1, x, t) / z)> tmp = TVector::ConditionalSelect(test1, x, t) / z; 
		#line 1195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return BitOfSign(vec) ^ (ADV_UFCS(_operator_mul_mod)(TVector::Create(T{Builtin::f64(0.5)}), ADV_UPCS(LnP1)((TVector::ConditionalSelect(test1, ADV_UFCS(FusedMultiplyAdd)(t.__ref(), tmp, t), tmp)).__ref())));
	}
#line 1199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::IsNaN(const SimdVector<T, Arch>& x)  -> const SimdMask<T, Arch>
	{
		#line 1200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return ADV_UFCS(_operator_ne_eq_xor)(x, x);
	}
#line 1203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::IsInfinity(const SimdVector<T, Arch>& x)  -> const SimdMask<T, Arch>
	{
		#line 1204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, IFloatingPoint>()) {
			#line 1205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return (ADV_UFCS(_operator_eq_eq_xor)(x, ADV_USPCS(PositiveInfinity, T)())) | (ADV_UFCS(_operator_eq_eq_xor)(x, ADV_USPCS(NegativeInfinity, T)()));
		}
		#line 1207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return SimdMask<T, Arch>::False;
	}
#line 1210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::IsFinite(const SimdVector<T, Arch>& x)  -> const SimdMask<T, Arch>
	{
		#line 1211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, IFloatingPoint>()) {
			#line 1212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return ADV_UFCS(_operator_eq_eq_xor)((ADV_UFCS(_operator_sub_mod)(x, x)), ADV_USPCS(Zero, T)());
		}
		#line 1214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return SimdMask<T, Arch>::True;
	}
#line 1217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::IsInteger(const SimdVector<T, Arch>& x)  -> const SimdMask<T, Arch>
	{
		#line 1218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, IFloatingPoint>()) {
			#line 1219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return ADV_UFCS(_operator_eq_eq_xor)(x, ADV_UPCS(Truncate)(x.__ref()));
		}
		#line 1221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return SimdMask<T, Arch>::True;
	}
#line 1224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::IsEvenInteger(const SimdVector<T, Arch>& x)  -> const SimdMask<T, Arch>
	{
		#line 1225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, IFloatingPoint>()) {
			#line 1226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return ADV_UPCS(IsInteger)(x.__ref()) & (ADV_UFCS(_operator_eq_eq_xor)(ADV_UFCS_TEMPLATE(ConvertTo<T>)((ADV_UPCS(Abs)((ADV_UFCS_TEMPLATE(ConvertTo<Builtin::i64>)(x.__ref()) % Builtin::i32(2)).__ref())).__ref()), ADV_USPCS(Zero, T)()));
		} else {
			#line 1227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{
				#line 1228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return ADV_UFCS(_operator_eq_eq_xor)((x & ADV_USPCS(One, T)()), T{Builtin::i32(0)});
			}
		}
		return {};
	}
#line 1232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::IsOddInteger(const SimdVector<T, Arch>& x)  -> const SimdMask<T, Arch>
	{
		#line 1233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, IFloatingPoint>()) {
			#line 1234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return ADV_UPCS(IsInteger)(x.__ref()) & (ADV_UFCS(_operator_ne_eq_xor)(ADV_UFCS_TEMPLATE(ConvertTo<T>)((ADV_UPCS(Abs)((ADV_UFCS_TEMPLATE(ConvertTo<FloatInt<T>>)(x.__ref()) % Builtin::i32(2)).__ref())).__ref()), ADV_USPCS(Zero, T)()));
		} else {
			#line 1235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{
				#line 1236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return ADV_UFCS(_operator_ne_eq_xor)((x & ADV_USPCS(One, T)()), T{Builtin::i32(0)});
			}
		}
		return {};
	}
#line 1239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Reciprocal(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 1240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 1241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return TVector::One / vec;
	}
#line 1243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::ReciprocalSqrt(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 1244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 1245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return TVector::One / ADV_UPCS(Sqrt)(vec.__ref());
	}
#line 1247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Sqrt(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 1248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		constexpr Builtin::Auto<decltype(Builtin::i32{SimdVector<T, Arch>::Length})> size = Builtin::i32{SimdVector<T, Arch>::Length};
		#line 1249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 1250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufLeft{}; 
		#line 1251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		BufferedVector<T, size> bufResult{}; 
		#line 1252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard1252{};
			#line 1253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(StoreAligned)(vec.__ref(), (__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufLeft.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
			#line 1254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{ auto __for_init_1254 = System::Range<Builtin::Auto<decltype(size)>, false>({}, size); auto __for_iter_1254 = ADV_UFCS(Iterate)(__for_init_1254.__ref()); while(__for_iter_1254.__ref().MoveNext()) {
			auto&& i = __for_iter_1254.__ref().GetCurrent(); {
				#line 1255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_subscript)(bufResult.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) = ADV_UPCS(Sqrt)(ADV_UFCS(_operator_subscript)(bufLeft.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i).__ref());
			}}}
			#line 1257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return TVector::LoadAligned((__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(bufResult.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
		}
		return {};
	}
#line 1261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Pow(const SimdVector<T, Arch>& x, const SimdVector<T, Arch>& y)  -> const SimdVector<T, Arch>
	{
		#line 1262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 1263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(TVector::Zero)> zero = TVector::Zero; 
		#line 1264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_lt_xor)(x, zero))> neg = ADV_UFCS(_operator_lt_xor)(x, zero); 
		#line 1265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype((ADV_UFCS(_operator_eq_eq_xor)(x, zero)) & (ADV_UFCS(_operator_gt_eq_xor)(y, zero)))> isZeroPosPow = (ADV_UFCS(_operator_eq_eq_xor)(x, zero)) & (ADV_UFCS(_operator_gt_eq_xor)(y, zero)); 
		#line 1266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(TVector::ConditionalSelect(isZeroPosPow, TVector::One, ADV_UPCS(Abs)(x.__ref())))> adj = TVector::ConditionalSelect(isZeroPosPow, TVector::One, ADV_UPCS(Abs)(x.__ref())); 
		#line 1267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		Builtin::Auto<decltype(ADV_UPCS(Exp)((ADV_UFCS(_operator_mul_mod)(y, ADV_UPCS(Ln)(adj.__ref()))).__ref()))> z = ADV_UPCS(Exp)((ADV_UFCS(_operator_mul_mod)(y, ADV_UPCS(Ln)(adj.__ref()))).__ref()); 
		#line 1268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		z = TVector::ConditionalSelect(isZeroPosPow, zero, z);
		#line 1269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		z = TVector::ConditionalSelect(ADV_UPCS(IsOddInteger)(y.__ref()) & neg, -z, z);
		#line 1270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(neg & (ADV_UFCS(_operator_eq_eq_xor)((ADV_UPCS(IsInteger)(y.__ref()) | ADV_UPCS(IsInfinity)(y.__ref())), SimdMask<T, Arch>::False)))> invalid = neg & (ADV_UFCS(_operator_eq_eq_xor)((ADV_UPCS(IsInteger)(y.__ref()) | ADV_UPCS(IsInfinity)(y.__ref())), SimdMask<T, Arch>::False)); 
		#line 1271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return TVector::ConditionalSelect(invalid, TVector::Create(ADV_USPCS(NaN, T)()), z);
	}
#line 1274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::IPow(const SimdVector<T, Arch>& x, Builtin::i32 exp)  -> const SimdVector<T, Arch>
	{
		#line 1275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 1276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		Builtin::Auto<decltype(x)> a = x; 
		#line 1277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		Builtin::Auto<decltype(exp)> b = exp; 
		#line 1278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype((b <=> Builtin::i32(0)) < 0)> recip = (b <=> Builtin::i32(0)) < 0; 
		#line 1279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		b = ADV_UPCS(Abs)(b.__ref());
		#line 1280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		Builtin::Auto<decltype(TVector::One)> result = TVector::One; 
		#line 1281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		for (;;) 
		{
			#line 1282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if (b & Builtin::i32(1)) {
				#line 1283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				result *= a;
			}
			#line 1285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(_operator_bsl_eq)(b, Builtin::i32(2));
			#line 1286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if (b == Builtin::i32(0)) {
				#line 1287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				break;
			}
			#line 1289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			a *= a;
		}
		#line 1291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, IFloatingPoint>()) {
			#line 1292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return recip ? ADV_UPCS(Reciprocal)(result.__ref()) : result;
		} else {
			#line 1293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{
				#line 1294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				if (recip) {
					#line 1295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					Builtin::Throw(Builtin::InvalidArgumentException{});
				}
				#line 1296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return result;
			}
		}
		return {};
	}
#line 1300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::WrappingIPow(const SimdVector<T, Arch>& x, Builtin::i32 exp)  -> const SimdVector<T, Arch>
	{
		#line 1301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 1302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		Builtin::Auto<decltype(x)> a = x; 
		#line 1303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		Builtin::Auto<decltype(exp)> b = exp; 
		#line 1304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype((b <=> Builtin::i32(0)) < 0)> recip = (b <=> Builtin::i32(0)) < 0; 
		#line 1305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		Builtin::Auto<decltype(TVector::One)> result = TVector::One; 
		#line 1306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		for (;;) 
		{
			#line 1307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if (b & Builtin::i32(1)) {
				#line 1308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_mul_mod_eq)(result, a);
			}
			#line 1310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(_operator_bsl_eq)(b, Builtin::i32(2));
			#line 1311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if (b == Builtin::i32(0)) {
				#line 1312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				break;
			}
			#line 1314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(_operator_mul_mod_eq)(a, a);
		}
		#line 1316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return recip ? ADV_UPCS(Reciprocal)(result.__ref()) : result;
	}
#line 1319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::StrictIPow(const SimdVector<T, Arch>& x, Builtin::i32 exp)  -> const SimdVector<T, Arch>
	{
		#line 1320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 1321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		Builtin::Auto<decltype(x)> a = x; 
		#line 1322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		Builtin::Auto<decltype(exp)> b = exp; 
		#line 1323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype((b <=> Builtin::i32(0)) < 0)> recip = (b <=> Builtin::i32(0)) < 0; 
		#line 1324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		Builtin::Auto<decltype(TVector::One)> result = TVector::One; 
		#line 1325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		for (;;) 
		{
			#line 1326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if (b & Builtin::i32(1)) {
				#line 1327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_mul_mod_eq)(result, a);
			}
			#line 1329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(_operator_bsl_eq)(b, Builtin::i32(2));
			#line 1330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if (b == Builtin::i32(0)) {
				#line 1331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				break;
			}
			#line 1333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(_operator_mul_mod_eq)(a, a);
		}
		#line 1335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return recip ? ADV_UPCS(Reciprocal)(result.__ref()) : result;
	}
#line 1338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Hypot(const SimdVector<T, Arch>& x, const SimdVector<T, Arch>& y)  -> const SimdVector<T, Arch>
	{
		#line 1339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		static_assert(Builtin::TypeIs<T, IFloatingPoint>(), "Hypot is only defined for floating point types");
		#line 1340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return ADV_UPCS(Sqrt)(ADV_UFCS(FusedMultiplyAdd)(x.__ref(), x, ADV_UFCS(_operator_mul_mod)(y, y)).__ref());
	}
#line 1343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Frexp(const SimdVector<T, Arch>& vec)  -> const std::tuple<SimdVector<T, Arch>, SimdVector<typename CommonInstructions::FloatInt<T>, Arch>>
	{
		#line 1344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 1345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TNative = typename SimdMask<FloatInt<T>,Arch>::TNative;
		#line 1346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using IVector = SimdVector<FloatInt<T>, Arch>;
		#line 1347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, Builtin::f32>()) {
			#line 1348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(IVector::Create(FloatConstants<T>::Mask1Frexp))> m1f = IVector::Create(FloatConstants<T>::Mask1Frexp); 
			#line 1349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(m1f & ADV_UPCS(AsInt32)(vec.__ref()))> r1 = m1f & ADV_UPCS(AsInt32)(vec.__ref()); 
			#line 1350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(vec & ADV_UPCS(AsFloat32)((ADV_UFCS(_operator_not)(m1f)).__ref()))> x = vec & ADV_UPCS(AsFloat32)((ADV_UFCS(_operator_not)(m1f)).__ref()); 
			#line 1351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(ADV_UFCS(_operator_sub_mod)((r1 >> FloatConstants<T>::MantissaBits), FloatConstants<T>::MaxExponentM1))> exp = ADV_UFCS(_operator_sub_mod)((r1 >> FloatConstants<T>::MantissaBits), FloatConstants<T>::MaxExponentM1); 
			#line 1352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			exp = IVector::ConditionalSelect(Builtin::BitCast<TNative>(ADV_UFCS(ToNative)((ADV_UFCS(_operator_ne_eq_xor)(vec, TVector::Zero)).__ref())), exp, IVector::Zero);
			#line 1354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(TVector::ConditionalSelect(ADV_UFCS(_operator_ne_eq_xor)(vec, TVector::Zero), x | Builtin::BitCast<Builtin::f32>(FloatConstants<T>::Mask2Frexp), TVector::Zero))> mant = TVector::ConditionalSelect(ADV_UFCS(_operator_ne_eq_xor)(vec, TVector::Zero), x | Builtin::BitCast<Builtin::f32>(FloatConstants<T>::Mask2Frexp), TVector::Zero); 
			#line 1356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return std::make_tuple(mant, exp);
		} else {
			#line 1357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if constexpr (Builtin::TypeIs<T, Builtin::f64>()) {
				#line 1358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				using IVector = SimdVector<Builtin::i64, Arch>;
				#line 1359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(IVector::Create(FloatConstants<T>::Mask1Frexp))> m1f = IVector::Create(FloatConstants<T>::Mask1Frexp); 
				#line 1360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(m1f & ADV_UPCS(AsInt64)(vec.__ref()))> r1 = m1f & ADV_UPCS(AsInt64)(vec.__ref()); 
				#line 1361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(vec & ADV_UPCS(AsFloat64)((ADV_UFCS(_operator_not)(m1f)).__ref()))> x = vec & ADV_UPCS(AsFloat64)((ADV_UFCS(_operator_not)(m1f)).__ref()); 
				#line 1362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_sub_mod)((r1 >> FloatConstants<T>::MantissaBits), FloatConstants<T>::MaxExponentM1))> exp = ADV_UFCS(_operator_sub_mod)((r1 >> FloatConstants<T>::MantissaBits), FloatConstants<T>::MaxExponentM1); 
				#line 1363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				exp = IVector::ConditionalSelect(Builtin::BitCast<TNative>(ADV_UFCS(ToNative)((ADV_UFCS(_operator_ne_eq_xor)(vec, TVector::Zero)).__ref())), exp, IVector::Zero);
				#line 1365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(TVector::ConditionalSelect(ADV_UFCS(_operator_ne_eq_xor)(vec, TVector::Zero), x | Builtin::BitCast<Builtin::f64>(FloatConstants<T>::Mask2Frexp), TVector::Zero))> mant = TVector::ConditionalSelect(ADV_UFCS(_operator_ne_eq_xor)(vec, TVector::Zero), x | Builtin::BitCast<Builtin::f64>(FloatConstants<T>::Mask2Frexp), TVector::Zero); 
				#line 1367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return std::make_tuple(mant, exp);
			} else {
				#line 1368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				{
					#line 1369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					static_assert(Builtin::Boolean(false), "Unsupported type for Frexp");
					#line 1370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					return std::make_tuple(TVector{}, IVector{});
				}
			}
		}
		return {};
	}
#line 1374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Ldexp(const SimdVector<T, Arch>& x, SimdVector<typename CommonInstructions::FloatInt<T>, Arch> exp)  -> const SimdVector<T, Arch>
	{
		#line 1375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 1376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using IVector = SimdVector<FloatInt<T>, Arch>;
		#line 1377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		Builtin::Auto<decltype(ADV_UFCS(_operator_add_mod)(exp, FloatConstants<T>::MaxExponent))> ik = ADV_UFCS(_operator_add_mod)(exp, FloatConstants<T>::MaxExponent); 
		#line 1378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		ik <<= FloatConstants<T>::MantissaBits;
		#line 1379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, Builtin::f32>()) {
			#line 1380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return ADV_UFCS(_operator_mul_mod)(x, ADV_UPCS(AsFloat32)(ik.__ref()));
		} else {
			#line 1381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if constexpr (Builtin::TypeIs<T, Builtin::f64>()) {
				#line 1382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return ADV_UFCS(_operator_mul_mod)(x, ADV_UPCS(AsFloat64)(ik.__ref()));
			}
		}
		return {};
	}
#line 1386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Cbrt(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 1387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 1388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TNative = typename SimdMask<T,Arch>::TNative;
		#line 1389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using IVector = SimdVector<FloatInt<T>, Arch>;
		#line 1390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		Builtin::Auto<decltype(ADV_UPCS(Abs)(vec.__ref()))> z = ADV_UPCS(Abs)(vec.__ref()); 
		#line 1391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_lt_xor)(z, ADV_USPCS(MinPositiveValue, T)()))> denormal = ADV_UFCS(_operator_lt_xor)(z, ADV_USPCS(MinPositiveValue, T)()); 
		#line 1392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		z = TVector::ConditionalSelect(denormal, ADV_UFCS(_operator_mul_mod)(z, FloatConstants<T>::TwoToNmb), z);
		#line 1393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(TVector::ConditionalSelect(denormal, TVector::Create(ADV_USFCS((T), FromBits)(FloatConstants<T>::TwoToNmbO3)), TVector::One))> f = TVector::ConditionalSelect(denormal, TVector::Create(ADV_USFCS((T), FromBits)(FloatConstants<T>::TwoToNmbO3)), TVector::One); 
		#line 1394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, Builtin::f32>()) {
			#line 1395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			constexpr Builtin::Auto<decltype(ADV_USFCS((Builtin::f32), FromBits)(Builtin::u32(0x3fa14518U)))> CBRT2 = ADV_USFCS((Builtin::f32), FromBits)(Builtin::u32(0x3fa14518U));
			#line 1396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			constexpr Builtin::Auto<decltype(ADV_USFCS((Builtin::f32), FromBits)(Builtin::u32(0x3fcb2ff5U)))> CBRT4 = ADV_USFCS((Builtin::f32), FromBits)(Builtin::u32(0x3fcb2ff5U));
			#line 1397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			constexpr Builtin::Auto<decltype(ADV_USFCS((Builtin::f32), FromBits)(Builtin::u32(0x3f4b2ff5U)))> CBRT2I = ADV_USFCS((Builtin::f32), FromBits)(Builtin::u32(0x3f4b2ff5U));
			#line 1398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			constexpr Builtin::Auto<decltype(ADV_USFCS((Builtin::f32), FromBits)(Builtin::u32(0x3f214518U)))> CBRT4I = ADV_USFCS((Builtin::f32), FromBits)(Builtin::u32(0x3f214518U));
			#line 1399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const auto& [m, ex] = Frexp(z);
			#line 1400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(Horner<TVector, Builtin::u32(0x3ece0609U), Builtin::u32(0x3f91eb77U), Builtin::u32(0xbf745265U), Builtin::u32(0x3f0bf0feU), Builtin::u32(0xbe09e49aU)>(m))> x = Horner<TVector, Builtin::u32(0x3ece0609U), Builtin::u32(0x3f91eb77U), Builtin::u32(0xbf745265U), Builtin::u32(0x3f0bf0feU), Builtin::u32(0xbe09e49aU)>(m); 
			#line 1401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(ex)> e = ex; 
			#line 1402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UPCS(IsPositive)(e.__ref()))> flag = ADV_UPCS(IsPositive)(e.__ref()); 
			#line 1403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(ADV_UPCS(Abs)(e.__ref()))> e1 = ADV_UPCS(Abs)(e.__ref()); 
			#line 1404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(e1)> rem = e1; 
			#line 1405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			e1 /= Builtin::i32(3);
			#line 1406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(_operator_sub_mod_eq)(rem, ADV_UFCS(_operator_mul_mod)(e1, Builtin::i32(3)));
			#line 1407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			e = ADV_UFCS(_operator_mul_mod)(e1, ADV_UPCS(Sign)(e.__ref()));
			#line 1408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(TVector::ConditionalSelect(Builtin::BitCast<TNative>(ADV_UFCS(ToNative)(flag.__ref())), TVector::Create(CBRT2), TVector::Create(CBRT2I)))> cbrt2 = TVector::ConditionalSelect(Builtin::BitCast<TNative>(ADV_UFCS(ToNative)(flag.__ref())), TVector::Create(CBRT2), TVector::Create(CBRT2I)); 
			#line 1410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(TVector::ConditionalSelect(Builtin::BitCast<TNative>(ADV_UFCS(ToNative)(flag.__ref())), TVector::Create(CBRT4), TVector::Create(CBRT4I)))> cbrt4 = TVector::ConditionalSelect(Builtin::BitCast<TNative>(ADV_UFCS(ToNative)(flag.__ref())), TVector::Create(CBRT4), TVector::Create(CBRT4I)); 
			#line 1412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(TVector::ConditionalSelect(Builtin::BitCast<TNative>(ADV_UFCS(ToNative)((ADV_UFCS(_operator_eq_eq_xor)(rem, Builtin::i32(1))).__ref())), cbrt2, TVector::One))> fact = TVector::ConditionalSelect(Builtin::BitCast<TNative>(ADV_UFCS(ToNative)((ADV_UFCS(_operator_eq_eq_xor)(rem, Builtin::i32(1))).__ref())), cbrt2, TVector::One); 
			#line 1414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			fact = TVector::ConditionalSelect(Builtin::BitCast<TNative>(ADV_UFCS(ToNative)((ADV_UFCS(_operator_eq_eq_xor)(rem, Builtin::i32(2))).__ref())), cbrt4, fact);
			#line 1416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			x = Ldexp(ADV_UFCS(_operator_mul_mod)(x, fact), e);
			#line 1417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(_operator_sub_mod_eq)(x, ADV_UFCS(_operator_mul_mod)((ADV_UFCS(_operator_sub_mod)(x, z / (ADV_UFCS(_operator_mul_mod)(x, x)))), (Builtin::f32(1.0f) / Builtin::f32(3.0f))));
			#line 1418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			x = ADV_UFCS(_operator_mul_mod)((x | BitOfSign(vec)), f);
			#line 1419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return TVector::ConditionalSelect(ADV_UPCS(IsZero)(vec.__ref()) | ADV_UPCS(IsInfinity)(vec.__ref()), vec, x);
		} else {
			#line 1420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if constexpr (Builtin::TypeIs<T, Builtin::f64>()) {
				#line 1421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				constexpr Builtin::Auto<decltype(ADV_USFCS((Builtin::f64), FromBits)(Builtin::u64(0x3ff428a2f98d728bULL)))> CBRT2 = ADV_USFCS((Builtin::f64), FromBits)(Builtin::u64(0x3ff428a2f98d728bULL));
				#line 1422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				constexpr Builtin::Auto<decltype(ADV_USFCS((Builtin::f64), FromBits)(Builtin::u64(0x3ff965fea53d6e3dULL)))> CBRT4 = ADV_USFCS((Builtin::f64), FromBits)(Builtin::u64(0x3ff965fea53d6e3dULL));
				#line 1423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				constexpr Builtin::Auto<decltype(ADV_USFCS((Builtin::f64), FromBits)(Builtin::u64(0x3fe965fea53d6e3dULL)))> CBRT2I = ADV_USFCS((Builtin::f64), FromBits)(Builtin::u64(0x3fe965fea53d6e3dULL));
				#line 1424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				constexpr Builtin::Auto<decltype(ADV_USFCS((Builtin::f64), FromBits)(Builtin::u64(0x3fe428a2f98d728bULL)))> CBRT4I = ADV_USFCS((Builtin::f64), FromBits)(Builtin::u64(0x3fe428a2f98d728bULL));
				#line 1425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const auto& [m, ex] = Frexp(z);
				#line 1426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				Builtin::Auto<decltype(Horner<TVector, Builtin::u64(0x3fd9c0c12122a4feULL), Builtin::u64(0x3ff23d6ee505873aULL), Builtin::u64(0xbfee8a4ca3ba37b8ULL), Builtin::u64(0x3fe17e1fc7e59d58ULL), Builtin::u64(0xbfc13c93386fdff6ULL)>(m))> x = Horner<TVector, Builtin::u64(0x3fd9c0c12122a4feULL), Builtin::u64(0x3ff23d6ee505873aULL), Builtin::u64(0xbfee8a4ca3ba37b8ULL), Builtin::u64(0x3fe17e1fc7e59d58ULL), Builtin::u64(0xbfc13c93386fdff6ULL)>(m); 
				#line 1428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				Builtin::Auto<decltype(ex)> e = ex; 
				#line 1429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UPCS(IsPositive)(e.__ref()))> flag = ADV_UPCS(IsPositive)(e.__ref()); 
				#line 1430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				Builtin::Auto<decltype(ADV_UPCS(Abs)(e.__ref()))> e1 = ADV_UPCS(Abs)(e.__ref()); 
				#line 1431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				Builtin::Auto<decltype(e1)> rem = e1; 
				#line 1432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				e1 /= Builtin::i32(3);
				#line 1433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_sub_mod_eq)(rem, ADV_UFCS(_operator_mul_mod)(e1, Builtin::i32(3)));
				#line 1434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				e = ADV_UFCS(_operator_mul_mod)(e1, ADV_UPCS(Sign)(e.__ref()));
				#line 1435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(TVector::ConditionalSelect(Builtin::BitCast<TNative>(ADV_UFCS(ToNative)(flag.__ref())), TVector::Create(CBRT2), TVector::Create(CBRT2I)))> cbrt2 = TVector::ConditionalSelect(Builtin::BitCast<TNative>(ADV_UFCS(ToNative)(flag.__ref())), TVector::Create(CBRT2), TVector::Create(CBRT2I)); 
				#line 1437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(TVector::ConditionalSelect(Builtin::BitCast<TNative>(ADV_UFCS(ToNative)(flag.__ref())), TVector::Create(CBRT4), TVector::Create(CBRT4I)))> cbrt4 = TVector::ConditionalSelect(Builtin::BitCast<TNative>(ADV_UFCS(ToNative)(flag.__ref())), TVector::Create(CBRT4), TVector::Create(CBRT4I)); 
				#line 1439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				Builtin::Auto<decltype(TVector::ConditionalSelect(Builtin::BitCast<TNative>(ADV_UFCS(ToNative)((ADV_UFCS(_operator_eq_eq_xor)(rem, Builtin::i32(1))).__ref())), cbrt2, TVector::One))> fact = TVector::ConditionalSelect(Builtin::BitCast<TNative>(ADV_UFCS(ToNative)((ADV_UFCS(_operator_eq_eq_xor)(rem, Builtin::i32(1))).__ref())), cbrt2, TVector::One); 
				#line 1441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				fact = TVector::ConditionalSelect(Builtin::BitCast<TNative>(ADV_UFCS(ToNative)((ADV_UFCS(_operator_eq_eq_xor)(rem, Builtin::i32(2))).__ref())), cbrt4, fact);
				#line 1443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				x = Ldexp(ADV_UFCS(_operator_mul_mod)(x, fact), e);
				#line 1444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_sub_mod_eq)(x, ADV_UFCS(_operator_mul_mod)((ADV_UFCS(_operator_sub_mod)(x, z / (ADV_UFCS(_operator_mul_mod)(x, x)))), (Builtin::f32(1.0f) / Builtin::f32(3.0f))));
				#line 1445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_sub_mod_eq)(x, ADV_UFCS(_operator_mul_mod)((ADV_UFCS(_operator_sub_mod)(x, z / (ADV_UFCS(_operator_mul_mod)(x, x)))), (Builtin::f32(1.0f) / Builtin::f32(3.0f))));
				#line 1446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				x = ADV_UFCS(_operator_mul_mod)((x | BitOfSign(vec)), f);
				#line 1447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return TVector::ConditionalSelect(ADV_UPCS(IsZero)(vec.__ref()) | ADV_UPCS(IsInfinity)(vec.__ref()), vec, x);
			} else {
				#line 1448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				{
					#line 1449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					static_assert(Builtin::Boolean(false), "Unsupported type for Cbrt");
				}
			}
		}
		return {};
	}
#line 1453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Ln(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 1454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 1455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TNative = typename SimdMask<FloatInt<T>,Arch>::TNative;
		#line 1456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using IVector = SimdVector<FloatInt<T>, Arch>;
		#line 1457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		Builtin::Auto<decltype(vec)> x = vec; 
		#line 1458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		IVector k{}; 
		#line 1459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_not)(ADV_UPCS(IsZero)(vec.__ref())))> notZero = ADV_UFCS(_operator_not)(ADV_UPCS(IsZero)(vec.__ref())); 
		#line 1460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, Builtin::f32>()) {
			#line 1461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype((ADV_UFCS(_operator_lt_xor)(vec, ADV_USPCS(MinPositiveValue, T)())) & notZero)> test1 = (ADV_UFCS(_operator_lt_xor)(vec, ADV_USPCS(MinPositiveValue, T)())) & notZero; 
			#line 1462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if (ADV_UPCS(Any)(test1.__ref())) {
				#line 1463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				k = IVector::ConditionalSelect(Builtin::BitCast<TNative>(ADV_UFCS(ToNative)(test1.__ref())), ADV_UFCS(_operator_sub_mod)(k, Builtin::i32(23)), k);
				#line 1465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				x = TVector::ConditionalSelect(test1, ADV_UFCS(_operator_mul_mod)(x, Builtin::u32(8388608U)), x);
			}
			#line 1467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(ADV_UPCS(AsInt32)(x.__ref()))> ix = ADV_UPCS(AsInt32)(x.__ref()); 
			#line 1468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(_operator_add_mod_eq)(ix, ADV_UFCS(_operator_sub_mod)(Builtin::i32(0x3f800000), Builtin::i32(0x3f3504f3)));
			#line 1469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(_operator_add_mod_eq)(k, ADV_UFCS(_operator_sub_mod)((ix >> Builtin::i32(23)), Builtin::i32(0x7f)));
			#line 1470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ix = ADV_UFCS(_operator_add_mod)((ix & Builtin::i32(0x007fffff)), Builtin::i32(0x3f3504f3));
			#line 1471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			x = ADV_UPCS(AsFloat32)(ix.__ref());
			#line 1472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_sub_sub_mod)(x))> f = ADV_UFCS(_operator_sub_sub_mod)(x); 
			#line 1473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(f / (ADV_UFCS(_operator_add_mod)(f, Builtin::i32(2))))> s = f / (ADV_UFCS(_operator_add_mod)(f, Builtin::i32(2))); 
			#line 1474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(s, s))> z = ADV_UFCS(_operator_mul_mod)(s, s); 
			#line 1475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(z, z))> w = ADV_UFCS(_operator_mul_mod)(z, z); 
			#line 1476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(w, Horner<TVector, Builtin::u32(0x3eccce13U), Builtin::u32(0x3e789e26U)>(w)))> t1 = ADV_UFCS(_operator_mul_mod)(w, Horner<TVector, Builtin::u32(0x3eccce13U), Builtin::u32(0x3e789e26U)>(w)); 
			#line 1477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(z, Horner<TVector, Builtin::u32(0x3f2aaaaaU), Builtin::u32(0x3e91e9eeU)>(w)))> t2 = ADV_UFCS(_operator_mul_mod)(z, Horner<TVector, Builtin::u32(0x3f2aaaaaU), Builtin::u32(0x3e91e9eeU)>(w)); 
			#line 1478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_add_mod)(t2, t1))> r1 = ADV_UFCS(_operator_add_mod)(t2, t1); 
			#line 1479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(ADV_UFCS(_operator_mul_mod)(f, T{Builtin::f64(0.5)}), f))> hfsq = ADV_UFCS(_operator_mul_mod)(ADV_UFCS(_operator_mul_mod)(f, T{Builtin::f64(0.5)}), f); 
			#line 1480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS_TEMPLATE(ConvertTo<Builtin::f32>)(k.__ref()))> dk = ADV_UFCS_TEMPLATE(ConvertTo<Builtin::f32>)(k.__ref()); 
			#line 1481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(FusedMultiplyAdd)(dk.__ref(), FloatConstants<T>::Log2Hi, ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_sub_mod)(ADV_UFCS(FusedMultiplyAdd)(s.__ref(), ADV_UFCS(_operator_add_mod)(hfsq, r1), ADV_UFCS(_operator_mul_mod)(dk, FloatConstants<T>::Log2Lo)), hfsq), f)))> r = ADV_UFCS(FusedMultiplyAdd)(dk.__ref(), FloatConstants<T>::Log2Hi, ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_sub_mod)(ADV_UFCS(FusedMultiplyAdd)(s.__ref(), ADV_UFCS(_operator_add_mod)(hfsq, r1), ADV_UFCS(_operator_mul_mod)(dk, FloatConstants<T>::Log2Lo)), hfsq), f)); 
			#line 1483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(TVector::ConditionalSelect(notZero, TVector::ConditionalSelect(ADV_UPCS(IsPositiveInfinity)(vec.__ref()), TVector::Create(ADV_USPCS(PositiveInfinity, Builtin::f32)()), r), TVector::Create(ADV_USPCS(NegativeInfinity, Builtin::f32)())))> zz = TVector::ConditionalSelect(notZero, TVector::ConditionalSelect(ADV_UPCS(IsPositiveInfinity)(vec.__ref()), TVector::Create(ADV_USPCS(PositiveInfinity, Builtin::f32)()), r), TVector::Create(ADV_USPCS(NegativeInfinity, Builtin::f32)())); 
			#line 1485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return TVector::ConditionalSelect(ADV_UFCS(_operator_not)((ADV_UPCS(IsPositive)(vec.__ref()))), TVector::Create(ADV_USPCS(NaN, Builtin::f32)()), zz);
		} else {
			#line 1486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if constexpr (Builtin::TypeIs<T, Builtin::f64>()) {
				#line 1487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				Builtin::Auto<decltype(ADV_UPCS(AsInt64)(x.__ref()) >> Builtin::i32(32))> hx = ADV_UPCS(AsInt64)(x.__ref()) >> Builtin::i32(32); 
				#line 1488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype((ADV_UFCS(_operator_lt_xor)(vec, ADV_USPCS(MinPositiveValue, T)())) & notZero)> test1 = (ADV_UFCS(_operator_lt_xor)(vec, ADV_USPCS(MinPositiveValue, T)())) & notZero; 
				#line 1489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				if (ADV_UPCS(Any)(test1.__ref())) {
					#line 1490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					k = IVector::ConditionalSelect(Builtin::BitCast<TNative>(ADV_UFCS(ToNative)(test1.__ref())), ADV_UFCS(_operator_sub_mod)(k, Builtin::i32(54)), k);
					#line 1492 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					x = TVector::ConditionalSelect(test1, ADV_UFCS(_operator_mul_mod)(x, Builtin::u64(18014398509481984ULL)), x);
				}
				#line 1494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_add_mod_eq)(hx, ADV_UFCS(_operator_sub_mod)(Builtin::i32(0x3ff00000), Builtin::i32(0x3fe6a09e)));
				#line 1495 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_add_mod_eq)(k, ADV_UFCS(_operator_sub_mod)((hx >> Builtin::i32(20)), Builtin::i32(0x3ff)));
				#line 1496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS_TEMPLATE(ConvertTo<Builtin::f64>)(k.__ref()))> dk = ADV_UFCS_TEMPLATE(ConvertTo<Builtin::f64>)(k.__ref()); 
				#line 1497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				hx = ADV_UFCS(_operator_add_mod)((hx & Builtin::i32(0x000fffff)), Builtin::i32(0x3fe6a09e));
				#line 1498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				x = ADV_UPCS(AsFloat64)((hx << Builtin::i32(32) | (IVector::Create(Builtin::i64(0xffffffffLL)) & ADV_UPCS(AsInt64)(x.__ref()))).__ref());
				#line 1499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_sub_sub_mod)(x))> f = ADV_UFCS(_operator_sub_sub_mod)(x); 
				#line 1500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(f / (ADV_UFCS(_operator_add_mod)(f, Builtin::i32(2))))> s = f / (ADV_UFCS(_operator_add_mod)(f, Builtin::i32(2))); 
				#line 1501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(s, s))> z = ADV_UFCS(_operator_mul_mod)(s, s); 
				#line 1502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(z, z))> w = ADV_UFCS(_operator_mul_mod)(z, z); 
				#line 1503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(w, Horner<TVector, Builtin::u64(0x3fd999999997fa04ULL), Builtin::u64(0x3fcc71c51d8e78afULL), Builtin::u64(0x3fc39a09d078c69fULL)>(w)))> t1 = ADV_UFCS(_operator_mul_mod)(w, Horner<TVector, Builtin::u64(0x3fd999999997fa04ULL), Builtin::u64(0x3fcc71c51d8e78afULL), Builtin::u64(0x3fc39a09d078c69fULL)>(w)); 
				#line 1504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(z, Horner<TVector, Builtin::u64(0x3fe5555555555593ULL), Builtin::u64(0x3fd2492494229359ULL), Builtin::u64(0x3fc7466496cb03deULL), Builtin::u64(0x3fc2f112df3e5244ULL)>(w)))> t2 = ADV_UFCS(_operator_mul_mod)(z, Horner<TVector, Builtin::u64(0x3fe5555555555593ULL), Builtin::u64(0x3fd2492494229359ULL), Builtin::u64(0x3fc7466496cb03deULL), Builtin::u64(0x3fc2f112df3e5244ULL)>(w)); 
				#line 1505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_add_mod)(t2, t1))> r1 = ADV_UFCS(_operator_add_mod)(t2, t1); 
				#line 1506 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(ADV_UFCS(_operator_mul_mod)(f, T{Builtin::f64(0.5)}), f))> hfsq = ADV_UFCS(_operator_mul_mod)(ADV_UFCS(_operator_mul_mod)(f, T{Builtin::f64(0.5)}), f); 
				#line 1507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(FusedMultiplyAdd)(dk.__ref(), FloatConstants<T>::Log2Hi, ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_sub_mod)(ADV_UFCS(FusedMultiplyAdd)(s.__ref(), ADV_UFCS(_operator_add_mod)(hfsq, r1), ADV_UFCS(_operator_mul_mod)(dk, FloatConstants<T>::Log2Lo)), hfsq), f)))> r = ADV_UFCS(FusedMultiplyAdd)(dk.__ref(), FloatConstants<T>::Log2Hi, ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_sub_mod)(ADV_UFCS(FusedMultiplyAdd)(s.__ref(), ADV_UFCS(_operator_add_mod)(hfsq, r1), ADV_UFCS(_operator_mul_mod)(dk, FloatConstants<T>::Log2Lo)), hfsq), f)); 
				#line 1509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(TVector::ConditionalSelect(notZero, TVector::ConditionalSelect(ADV_UPCS(IsPositiveInfinity)(vec.__ref()), TVector::Create(ADV_USPCS(PositiveInfinity, Builtin::f64)()), r), TVector::Create(ADV_USPCS(NegativeInfinity, Builtin::f64)())))> zz = TVector::ConditionalSelect(notZero, TVector::ConditionalSelect(ADV_UPCS(IsPositiveInfinity)(vec.__ref()), TVector::Create(ADV_USPCS(PositiveInfinity, Builtin::f64)()), r), TVector::Create(ADV_USPCS(NegativeInfinity, Builtin::f64)())); 
				#line 1511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return TVector::ConditionalSelect(ADV_UFCS(_operator_not)((ADV_UPCS(IsPositive)(vec.__ref()))), TVector::Create(ADV_USPCS(NaN, Builtin::f64)()), zz);
			} else {
				#line 1512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				{
					#line 1513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					static_assert(Builtin::Boolean(false), "Unsupported type for Ln");
				}
			}
		}
		return {};
	}
#line 1517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Ln1P(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 1518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 1519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using IVector = SimdVector<FloatInt<T>, Arch>;
		#line 1520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(vec + TVector::One)> uf = vec + TVector::One; 
		#line 1521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return Ln(uf);
	}
#line 1524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Log2(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 1525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 1526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TNative = typename SimdMask<FloatInt<T>,Arch>::TNative;
		#line 1527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using IVector = SimdVector<FloatInt<T>, Arch>;
		#line 1528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		Builtin::Auto<decltype(vec)> x = vec; 
		#line 1529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		IVector k{}; 
		#line 1530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_not)(ADV_UPCS(IsZero)(vec.__ref())))> notZero = ADV_UFCS(_operator_not)(ADV_UPCS(IsZero)(vec.__ref())); 
		#line 1531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, Builtin::f32>()) {
			#line 1532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype((ADV_UFCS(_operator_lt_xor)(vec, ADV_USPCS(MinPositiveValue, T)())) & notZero)> test1 = (ADV_UFCS(_operator_lt_xor)(vec, ADV_USPCS(MinPositiveValue, T)())) & notZero; 
			#line 1533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if (ADV_UPCS(Any)(test1.__ref())) {
				#line 1534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				k = IVector::ConditionalSelect(Builtin::BitCast<TNative>(ADV_UFCS(ToNative)(test1.__ref())), ADV_UFCS(_operator_sub_mod)(k, Builtin::i32(25)), k);
				#line 1536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				x = TVector::ConditionalSelect(test1, ADV_UFCS(_operator_mul_mod)(x, Builtin::u32(33554432U)), x);
			}
			#line 1538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(ADV_UPCS(AsInt32)(x.__ref()))> ix = ADV_UPCS(AsInt32)(x.__ref()); 
			#line 1539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(_operator_add_mod_eq)(ix, ADV_UFCS(_operator_sub_mod)(Builtin::i32(0x3f800000), Builtin::i32(0x3f3504f3)));
			#line 1540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(_operator_add_mod_eq)(k, ADV_UFCS(_operator_sub_mod)((ix >> Builtin::i32(23)), Builtin::i32(0x7f)));
			#line 1541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ix = ADV_UFCS(_operator_add_mod)((ix & Builtin::i32(0x007fffff)), Builtin::i32(0x3f3504f3));
			#line 1542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			x = ADV_UPCS(AsFloat32)(ix.__ref());
			#line 1543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_sub_sub_mod)(x))> f = ADV_UFCS(_operator_sub_sub_mod)(x); 
			#line 1544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(f / (ADV_UFCS(_operator_add_mod)(f, Builtin::i32(2))))> s = f / (ADV_UFCS(_operator_add_mod)(f, Builtin::i32(2))); 
			#line 1545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(s, s))> z = ADV_UFCS(_operator_mul_mod)(s, s); 
			#line 1546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(z, z))> w = ADV_UFCS(_operator_mul_mod)(z, z); 
			#line 1547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(w, Horner<TVector, Builtin::u32(0x3eccce13U), Builtin::u32(0x3e789e26U)>(w)))> t1 = ADV_UFCS(_operator_mul_mod)(w, Horner<TVector, Builtin::u32(0x3eccce13U), Builtin::u32(0x3e789e26U)>(w)); 
			#line 1548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(z, Horner<TVector, Builtin::u32(0x3f2aaaaaU), Builtin::u32(0x3e91e9eeU)>(w)))> t2 = ADV_UFCS(_operator_mul_mod)(z, Horner<TVector, Builtin::u32(0x3f2aaaaaU), Builtin::u32(0x3e91e9eeU)>(w)); 
			#line 1549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_add_mod)(t2, t1))> r1 = ADV_UFCS(_operator_add_mod)(t2, t1); 
			#line 1550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(ADV_UFCS(_operator_mul_mod)(f, T{Builtin::f64(0.5)}), f))> hfsq = ADV_UFCS(_operator_mul_mod)(ADV_UFCS(_operator_mul_mod)(f, T{Builtin::f64(0.5)}), f); 
			#line 1551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS_TEMPLATE(ConvertTo<Builtin::f32>)(k.__ref()))> dk = ADV_UFCS_TEMPLATE(ConvertTo<Builtin::f32>)(k.__ref()); 
			#line 1552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(FusedMultiplyAdd)((ADV_UFCS(_operator_add_mod)(ADV_UFCS(FusedMultiplySub)(s.__ref(), ADV_UFCS(_operator_add_mod)(hfsq, r1), hfsq), f)).__ref(), FloatConstants<T>::InvLog2, dk))> r = ADV_UFCS(FusedMultiplyAdd)((ADV_UFCS(_operator_add_mod)(ADV_UFCS(FusedMultiplySub)(s.__ref(), ADV_UFCS(_operator_add_mod)(hfsq, r1), hfsq), f)).__ref(), FloatConstants<T>::InvLog2, dk); 
			#line 1553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(TVector::ConditionalSelect(notZero, TVector::ConditionalSelect(ADV_UPCS(IsPositiveInfinity)(vec.__ref()), TVector::Create(ADV_USPCS(PositiveInfinity, Builtin::f32)()), r), TVector::Create(ADV_USPCS(NegativeInfinity, Builtin::f32)())))> zz = TVector::ConditionalSelect(notZero, TVector::ConditionalSelect(ADV_UPCS(IsPositiveInfinity)(vec.__ref()), TVector::Create(ADV_USPCS(PositiveInfinity, Builtin::f32)()), r), TVector::Create(ADV_USPCS(NegativeInfinity, Builtin::f32)())); 
			#line 1555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return TVector::ConditionalSelect(ADV_UFCS(_operator_not)((ADV_UPCS(IsPositive)(vec.__ref()))), TVector::Create(ADV_USPCS(NaN, Builtin::f32)()), zz);
		} else {
			#line 1556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if constexpr (Builtin::TypeIs<T, Builtin::f64>()) {
				#line 1557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				Builtin::Auto<decltype(ADV_UPCS(AsInt64)(x.__ref()) >> Builtin::i32(32))> hx = ADV_UPCS(AsInt64)(x.__ref()) >> Builtin::i32(32); 
				#line 1558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype((ADV_UFCS(_operator_lt_xor)(vec, ADV_USPCS(MinPositiveValue, T)())) & notZero)> test1 = (ADV_UFCS(_operator_lt_xor)(vec, ADV_USPCS(MinPositiveValue, T)())) & notZero; 
				#line 1559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				if (ADV_UPCS(Any)(test1.__ref())) {
					#line 1560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					k = IVector::ConditionalSelect(Builtin::BitCast<TNative>(ADV_UFCS(ToNative)(test1.__ref())), ADV_UFCS(_operator_sub_mod)(k, Builtin::i32(54)), k);
					#line 1562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					x = TVector::ConditionalSelect(test1, ADV_UFCS(_operator_mul_mod)(x, Builtin::u64(18014398509481984ULL)), x);
				}
				#line 1564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_add_mod_eq)(hx, ADV_UFCS(_operator_sub_mod)(Builtin::i32(0x3ff00000), Builtin::i32(0x3fe6a09e)));
				#line 1565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_add_mod_eq)(k, ADV_UFCS(_operator_sub_mod)((hx >> Builtin::i32(20)), Builtin::i32(0x3ff)));
				#line 1566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS_TEMPLATE(ConvertTo<Builtin::f64>)(k.__ref()))> dk = ADV_UFCS_TEMPLATE(ConvertTo<Builtin::f64>)(k.__ref()); 
				#line 1567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				hx = ADV_UFCS(_operator_add_mod)((hx & Builtin::i32(0x000fffff)), Builtin::i32(0x3fe6a09e));
				#line 1568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				x = ADV_UPCS(AsFloat64)((hx << Builtin::i32(32) | (IVector::Create(Builtin::i64(0xffffffffLL)) & ADV_UPCS(AsInt64)(x.__ref()))).__ref());
				#line 1569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_sub_sub_mod)(x))> f = ADV_UFCS(_operator_sub_sub_mod)(x); 
				#line 1570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(f / (ADV_UFCS(_operator_add_mod)(f, Builtin::i32(2))))> s = f / (ADV_UFCS(_operator_add_mod)(f, Builtin::i32(2))); 
				#line 1571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(s, s))> z = ADV_UFCS(_operator_mul_mod)(s, s); 
				#line 1572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(z, z))> w = ADV_UFCS(_operator_mul_mod)(z, z); 
				#line 1573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(w, Horner<TVector, Builtin::u64(0x3fd999999997fa04ULL), Builtin::u64(0x3fcc71c51d8e78afULL), Builtin::u64(0x3fc39a09d078c69fULL)>(w)))> t1 = ADV_UFCS(_operator_mul_mod)(w, Horner<TVector, Builtin::u64(0x3fd999999997fa04ULL), Builtin::u64(0x3fcc71c51d8e78afULL), Builtin::u64(0x3fc39a09d078c69fULL)>(w)); 
				#line 1574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(z, Horner<TVector, Builtin::u64(0x3fe5555555555593ULL), Builtin::u64(0x3fd2492494229359ULL), Builtin::u64(0x3fc7466496cb03deULL), Builtin::u64(0x3fc2f112df3e5244ULL)>(w)))> t2 = ADV_UFCS(_operator_mul_mod)(z, Horner<TVector, Builtin::u64(0x3fe5555555555593ULL), Builtin::u64(0x3fd2492494229359ULL), Builtin::u64(0x3fc7466496cb03deULL), Builtin::u64(0x3fc2f112df3e5244ULL)>(w)); 
				#line 1575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_add_mod)(t2, t1))> r1 = ADV_UFCS(_operator_add_mod)(t2, t1); 
				#line 1576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(ADV_UFCS(_operator_mul_mod)(f, T{Builtin::f64(0.5)}), f))> hfsq = ADV_UFCS(_operator_mul_mod)(ADV_UFCS(_operator_mul_mod)(f, T{Builtin::f64(0.5)}), f); 
				#line 1577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_sub_mod)(f, hfsq))> hi = ADV_UFCS(_operator_sub_mod)(f, hfsq); 
				#line 1578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				hi = hi & ADV_UPCS(AsFloat64)((ADV_USPCS(AllBitsSet, Builtin::i64)() << Builtin::i32(32)).__ref());
				#line 1579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(FusedMultiplyAdd)(s.__ref(), ADV_UFCS(_operator_add_mod)(hfsq, r1), ADV_UFCS(_operator_sub_mod)(ADV_UFCS(_operator_sub_mod)(f, hi), hfsq)))> lo = ADV_UFCS(FusedMultiplyAdd)(s.__ref(), ADV_UFCS(_operator_add_mod)(hfsq, r1), ADV_UFCS(_operator_sub_mod)(ADV_UFCS(_operator_sub_mod)(f, hi), hfsq)); 
				#line 1580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(hi, FloatConstants<T>::InvLog2Hi))> valHi = ADV_UFCS(_operator_mul_mod)(hi, FloatConstants<T>::InvLog2Hi); 
				#line 1581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				Builtin::Auto<decltype(ADV_UFCS(FusedMultiplyAdd)((ADV_UFCS(_operator_add_mod)(lo, hi)).__ref(), FloatConstants<T>::InvLog2Lo, ADV_UFCS(_operator_mul_mod)(lo, FloatConstants<T>::InvLog2Hi)))> valLo = ADV_UFCS(FusedMultiplyAdd)((ADV_UFCS(_operator_add_mod)(lo, hi)).__ref(), FloatConstants<T>::InvLog2Lo, ADV_UFCS(_operator_mul_mod)(lo, FloatConstants<T>::InvLog2Hi)); 
				#line 1582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_add_mod)(dk, valHi))> w1 = ADV_UFCS(_operator_add_mod)(dk, valHi); 
				#line 1583 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_add_mod_eq)(valLo, ADV_UFCS(_operator_add_mod)((ADV_UFCS(_operator_sub_mod)(dk, w1)), valHi));
				#line 1584 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				valHi = w1;
				#line 1585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_add_mod)(valLo, valHi))> r = ADV_UFCS(_operator_add_mod)(valLo, valHi); 
				#line 1586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(TVector::ConditionalSelect(notZero, TVector::ConditionalSelect(ADV_UPCS(IsPositiveInfinity)(vec.__ref()), TVector::Create(ADV_USPCS(PositiveInfinity, Builtin::f64)()), r), TVector::Create(ADV_USPCS(NegativeInfinity, Builtin::f64)())))> zz = TVector::ConditionalSelect(notZero, TVector::ConditionalSelect(ADV_UPCS(IsPositiveInfinity)(vec.__ref()), TVector::Create(ADV_USPCS(PositiveInfinity, Builtin::f64)()), r), TVector::Create(ADV_USPCS(NegativeInfinity, Builtin::f64)())); 
				#line 1588 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return TVector::ConditionalSelect(ADV_UFCS(_operator_not)((ADV_UPCS(IsPositive)(vec.__ref()))), TVector::Create(ADV_USPCS(NaN, Builtin::f64)()), zz);
			} else {
				#line 1589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				{
					#line 1590 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					static_assert(Builtin::Boolean(false), "Unsupported type for Log2");
				}
			}
		}
		return {};
	}
#line 1594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Log10(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 1595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 1596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TNative = typename SimdMask<FloatInt<T>,Arch>::TNative;
		#line 1597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using IVector = SimdVector<FloatInt<T>, Arch>;
		#line 1598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		Builtin::Auto<decltype(vec)> x = vec; 
		#line 1599 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		IVector k{}; 
		#line 1600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_not)(ADV_UPCS(IsZero)(vec.__ref())))> notZero = ADV_UFCS(_operator_not)(ADV_UPCS(IsZero)(vec.__ref())); 
		#line 1601 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, Builtin::f32>()) {
			#line 1602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype((ADV_UFCS(_operator_lt_xor)(vec, ADV_USPCS(MinPositiveValue, T)())) & notZero)> test1 = (ADV_UFCS(_operator_lt_xor)(vec, ADV_USPCS(MinPositiveValue, T)())) & notZero; 
			#line 1603 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if (ADV_UPCS(Any)(test1.__ref())) {
				#line 1604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				k = IVector::ConditionalSelect(Builtin::BitCast<TNative>(ADV_UFCS(ToNative)(test1.__ref())), ADV_UFCS(_operator_sub_mod)(k, Builtin::i32(25)), k);
				#line 1606 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				x = TVector::ConditionalSelect(test1, ADV_UFCS(_operator_mul_mod)(x, Builtin::u32(33554432U)), x);
			}
			#line 1608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(ADV_UPCS(AsInt32)(x.__ref()))> ix = ADV_UPCS(AsInt32)(x.__ref()); 
			#line 1609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(_operator_add_mod_eq)(ix, ADV_UFCS(_operator_sub_mod)(Builtin::i32(0x3f800000), Builtin::i32(0x3f3504f3)));
			#line 1610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(_operator_add_mod_eq)(k, ADV_UFCS(_operator_sub_mod)((ix >> Builtin::i32(23)), Builtin::i32(0x7f)));
			#line 1611 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ix = ADV_UFCS(_operator_add_mod)((ix & Builtin::i32(0x007fffff)), Builtin::i32(0x3f3504f3));
			#line 1612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			x = ADV_UPCS(AsFloat32)(ix.__ref());
			#line 1613 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_sub_sub_mod)(x))> f = ADV_UFCS(_operator_sub_sub_mod)(x); 
			#line 1614 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(f / (ADV_UFCS(_operator_add_mod)(f, Builtin::i32(2))))> s = f / (ADV_UFCS(_operator_add_mod)(f, Builtin::i32(2))); 
			#line 1615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(s, s))> z = ADV_UFCS(_operator_mul_mod)(s, s); 
			#line 1616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(z, z))> w = ADV_UFCS(_operator_mul_mod)(z, z); 
			#line 1617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(w, Horner<TVector, Builtin::u32(0x3eccce13U), Builtin::u32(0x3e789e26U)>(w)))> t1 = ADV_UFCS(_operator_mul_mod)(w, Horner<TVector, Builtin::u32(0x3eccce13U), Builtin::u32(0x3e789e26U)>(w)); 
			#line 1618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(z, Horner<TVector, Builtin::u32(0x3f2aaaaaU), Builtin::u32(0x3e91e9eeU)>(w)))> t2 = ADV_UFCS(_operator_mul_mod)(z, Horner<TVector, Builtin::u32(0x3f2aaaaaU), Builtin::u32(0x3e91e9eeU)>(w)); 
			#line 1619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_add_mod)(t2, t1))> r1 = ADV_UFCS(_operator_add_mod)(t2, t1); 
			#line 1620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(ADV_UFCS(_operator_mul_mod)(f, T{Builtin::f64(0.5)}), f))> hfsq = ADV_UFCS(_operator_mul_mod)(ADV_UFCS(_operator_mul_mod)(f, T{Builtin::f64(0.5)}), f); 
			#line 1621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS_TEMPLATE(ConvertTo<Builtin::f32>)(k.__ref()))> dk = ADV_UFCS_TEMPLATE(ConvertTo<Builtin::f32>)(k.__ref()); 
			#line 1622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype((ADV_UFCS(_operator_sub_mod)(f, hfsq)) & (ADV_USFCS((Builtin::f32), FromBits)(Builtin::u32(0xfffff000U))))> hi = (ADV_UFCS(_operator_sub_mod)(f, hfsq)) & (ADV_USFCS((Builtin::f32), FromBits)(Builtin::u32(0xfffff000U))); 
			#line 1623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(FusedMultiplyAdd)(s.__ref(), ADV_UFCS(_operator_add_mod)(hfsq, r1), ADV_UFCS(_operator_sub_mod)(ADV_UFCS(_operator_sub_mod)(f, hi), hfsq)))> lo = ADV_UFCS(FusedMultiplyAdd)(s.__ref(), ADV_UFCS(_operator_add_mod)(hfsq, r1), ADV_UFCS(_operator_sub_mod)(ADV_UFCS(_operator_sub_mod)(f, hi), hfsq)); 
			#line 1624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(FusedMultiplyAdd)(dk.__ref(), FloatConstants<T>::Log10_2Hi, ADV_UFCS(FusedMultiplyAdd)(hi.__ref(), FloatConstants<T>::InvLn10Hi, ADV_UFCS(FusedMultiplyAdd)(lo.__ref(), FloatConstants<T>::InvLn10Hi, ADV_UFCS(FusedMultiplyAdd)((ADV_UFCS(_operator_add_mod)(lo, hi)).__ref(), FloatConstants<T>::InvLn10Lo, ADV_UFCS(_operator_mul_mod)(dk, FloatConstants<T>::Log10_2Lo))))))> r = ADV_UFCS(FusedMultiplyAdd)(dk.__ref(), FloatConstants<T>::Log10_2Hi, ADV_UFCS(FusedMultiplyAdd)(hi.__ref(), FloatConstants<T>::InvLn10Hi, ADV_UFCS(FusedMultiplyAdd)(lo.__ref(), FloatConstants<T>::InvLn10Hi, ADV_UFCS(FusedMultiplyAdd)((ADV_UFCS(_operator_add_mod)(lo, hi)).__ref(), FloatConstants<T>::InvLn10Lo, ADV_UFCS(_operator_mul_mod)(dk, FloatConstants<T>::Log10_2Lo))))); 
			#line 1627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(TVector::ConditionalSelect(notZero, TVector::ConditionalSelect(ADV_UPCS(IsPositiveInfinity)(vec.__ref()), TVector::Create(ADV_USPCS(PositiveInfinity, Builtin::f32)()), r), TVector::Create(ADV_USPCS(NegativeInfinity, Builtin::f32)())))> zz = TVector::ConditionalSelect(notZero, TVector::ConditionalSelect(ADV_UPCS(IsPositiveInfinity)(vec.__ref()), TVector::Create(ADV_USPCS(PositiveInfinity, Builtin::f32)()), r), TVector::Create(ADV_USPCS(NegativeInfinity, Builtin::f32)())); 
			#line 1629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return TVector::ConditionalSelect(ADV_UFCS(_operator_not)((ADV_UPCS(IsPositive)(vec.__ref()))), TVector::Create(ADV_USPCS(NaN, Builtin::f32)()), zz);
		} else {
			#line 1630 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if constexpr (Builtin::TypeIs<T, Builtin::f64>()) {
				#line 1631 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				Builtin::Auto<decltype(ADV_UPCS(AsInt64)(x.__ref()) >> Builtin::i32(32))> hx = ADV_UPCS(AsInt64)(x.__ref()) >> Builtin::i32(32); 
				#line 1632 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype((ADV_UFCS(_operator_lt_xor)(vec, ADV_USPCS(MinPositiveValue, T)())) & notZero)> test1 = (ADV_UFCS(_operator_lt_xor)(vec, ADV_USPCS(MinPositiveValue, T)())) & notZero; 
				#line 1633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				if (ADV_UPCS(Any)(test1.__ref())) {
					#line 1634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					k = IVector::ConditionalSelect(Builtin::BitCast<TNative>(ADV_UFCS(ToNative)(test1.__ref())), ADV_UFCS(_operator_sub_mod)(k, Builtin::i32(54)), k);
					#line 1636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					x = TVector::ConditionalSelect(test1, ADV_UFCS(_operator_mul_mod)(x, Builtin::u64(18014398509481984ULL)), x);
				}
				#line 1638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_add_mod_eq)(hx, ADV_UFCS(_operator_sub_mod)(Builtin::i32(0x3ff00000), Builtin::i32(0x3fe6a09e)));
				#line 1639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_add_mod_eq)(k, ADV_UFCS(_operator_sub_mod)((hx >> Builtin::i32(20)), Builtin::i32(0x3ff)));
				#line 1640 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS_TEMPLATE(ConvertTo<Builtin::f64>)(k.__ref()))> dk = ADV_UFCS_TEMPLATE(ConvertTo<Builtin::f64>)(k.__ref()); 
				#line 1641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				hx = ADV_UFCS(_operator_add_mod)((hx & Builtin::i32(0x000fffff)), Builtin::i32(0x3fe6a09e));
				#line 1642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				x = ADV_UPCS(AsFloat64)((hx << Builtin::i32(32) | (IVector::Create(Builtin::i64(0xffffffffLL)) & ADV_UPCS(AsInt64)(x.__ref()))).__ref());
				#line 1643 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_sub_sub_mod)(x))> f = ADV_UFCS(_operator_sub_sub_mod)(x); 
				#line 1644 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(f / (ADV_UFCS(_operator_add_mod)(f, Builtin::i32(2))))> s = f / (ADV_UFCS(_operator_add_mod)(f, Builtin::i32(2))); 
				#line 1645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(s, s))> z = ADV_UFCS(_operator_mul_mod)(s, s); 
				#line 1646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(z, z))> w = ADV_UFCS(_operator_mul_mod)(z, z); 
				#line 1647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(w, Horner<TVector, Builtin::u64(0x3fd999999997fa04ULL), Builtin::u64(0x3fcc71c51d8e78afULL), Builtin::u64(0x3fc39a09d078c69fULL)>(w)))> t1 = ADV_UFCS(_operator_mul_mod)(w, Horner<TVector, Builtin::u64(0x3fd999999997fa04ULL), Builtin::u64(0x3fcc71c51d8e78afULL), Builtin::u64(0x3fc39a09d078c69fULL)>(w)); 
				#line 1648 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(z, Horner<TVector, Builtin::u64(0x3fe5555555555593ULL), Builtin::u64(0x3fd2492494229359ULL), Builtin::u64(0x3fc7466496cb03deULL), Builtin::u64(0x3fc2f112df3e5244ULL)>(w)))> t2 = ADV_UFCS(_operator_mul_mod)(z, Horner<TVector, Builtin::u64(0x3fe5555555555593ULL), Builtin::u64(0x3fd2492494229359ULL), Builtin::u64(0x3fc7466496cb03deULL), Builtin::u64(0x3fc2f112df3e5244ULL)>(w)); 
				#line 1649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_add_mod)(t2, t1))> r1 = ADV_UFCS(_operator_add_mod)(t2, t1); 
				#line 1650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(ADV_UFCS(_operator_mul_mod)(f, T{Builtin::f64(0.5)}), f))> hfsq = ADV_UFCS(_operator_mul_mod)(ADV_UFCS(_operator_mul_mod)(f, T{Builtin::f64(0.5)}), f); 
				#line 1651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_sub_mod)(f, hfsq))> hi = ADV_UFCS(_operator_sub_mod)(f, hfsq); 
				#line 1652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				hi = hi & ADV_UPCS(AsFloat64)((ADV_USPCS(AllBitsSet, Builtin::i64)() << Builtin::i32(32)).__ref());
				#line 1653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_sub_mod)(ADV_UFCS(_operator_sub_mod)(f, hi), hfsq), ADV_UFCS(_operator_mul_mod)(s, (ADV_UFCS(_operator_add_mod)(hfsq, r1)))))> lo = ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_sub_mod)(ADV_UFCS(_operator_sub_mod)(f, hi), hfsq), ADV_UFCS(_operator_mul_mod)(s, (ADV_UFCS(_operator_add_mod)(hfsq, r1)))); 
				#line 1654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(hi, FloatConstants<T>::InvLn10Hi))> valHi = ADV_UFCS(_operator_mul_mod)(hi, FloatConstants<T>::InvLn10Hi); 
				#line 1655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(dk, FloatConstants<T>::Log10_2Hi))> y = ADV_UFCS(_operator_mul_mod)(dk, FloatConstants<T>::Log10_2Hi); 
				#line 1656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_mul_mod)(dk, FloatConstants<T>::Log10_Lo), ADV_UFCS(_operator_mul_mod)((ADV_UFCS(_operator_add_mod)(lo, hi)), FloatConstants<T>::InvLn10Lo)), ADV_UFCS(_operator_mul_mod)(lo, FloatConstants<T>::InvLn10Hi)))> valLo = ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_mul_mod)(dk, FloatConstants<T>::Log10_Lo), ADV_UFCS(_operator_mul_mod)((ADV_UFCS(_operator_add_mod)(lo, hi)), FloatConstants<T>::InvLn10Lo)), ADV_UFCS(_operator_mul_mod)(lo, FloatConstants<T>::InvLn10Hi)); 
				#line 1658 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_add_mod)(y, valHi))> w1 = ADV_UFCS(_operator_add_mod)(y, valHi); 
				#line 1659 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_add_mod_eq)(valLo, ADV_UFCS(_operator_add_mod)((ADV_UFCS(_operator_sub_mod)(y, w1)), valHi));
				#line 1660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				valHi = w1;
				#line 1661 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_add_mod)(valLo, valHi))> r = ADV_UFCS(_operator_add_mod)(valLo, valHi); 
				#line 1662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(TVector::ConditionalSelect(notZero, TVector::ConditionalSelect(ADV_UPCS(IsPositiveInfinity)(vec.__ref()), TVector::Create(ADV_USPCS(PositiveInfinity, Builtin::f64)()), r), TVector::Create(ADV_USPCS(NegativeInfinity, Builtin::f64)())))> zz = TVector::ConditionalSelect(notZero, TVector::ConditionalSelect(ADV_UPCS(IsPositiveInfinity)(vec.__ref()), TVector::Create(ADV_USPCS(PositiveInfinity, Builtin::f64)()), r), TVector::Create(ADV_USPCS(NegativeInfinity, Builtin::f64)())); 
				#line 1664 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return TVector::ConditionalSelect(ADV_UFCS(_operator_not)((ADV_UPCS(IsPositive)(vec.__ref()))), TVector::Create(ADV_USPCS(NaN, Builtin::f64)()), zz);
			} else {
				#line 1665 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				{
					#line 1666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					static_assert(Builtin::Boolean(false), "Unsupported type for Log10");
				}
			}
		}
		return {};
	}
#line 1670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Exp(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 1671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 1672 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, Builtin::f32>()) {
			#line 1673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(NearbyInt(ADV_UFCS(_operator_mul_mod)(vec, FloatConstants<T>::InvLog2)))> k = NearbyInt(ADV_UFCS(_operator_mul_mod)(vec, FloatConstants<T>::InvLog2)); 
			#line 1674 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(ADV_UFCS(FusedNegatedMultiplyAdd)(k.__ref(), FloatConstants<T>::Log2Hi, vec))> x = ADV_UFCS(FusedNegatedMultiplyAdd)(k.__ref(), FloatConstants<T>::Log2Hi, vec); 
			#line 1675 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			x = ADV_UFCS(FusedNegatedMultiplyAdd)(k.__ref(), FloatConstants<T>::Log2Lo, x);
			#line 1676 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(Horner<TVector, Builtin::u32(0x3f000000U), Builtin::u32(0x3e2aa9a5U), Builtin::u32(0x3d2aa957U), Builtin::u32(0x3c098d8bU), Builtin::u32(0x3ab778cfU)>(x))> y = Horner<TVector, Builtin::u32(0x3f000000U), Builtin::u32(0x3e2aa9a5U), Builtin::u32(0x3d2aa957U), Builtin::u32(0x3c098d8bU), Builtin::u32(0x3ab778cfU)>(x); 
			#line 1677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			x = ADV_UFCS(_operator_add_mod)(ADV_UFCS(FusedMultiplyAdd)(y.__ref(), ADV_UFCS(_operator_mul_mod)(x, x), x), TVector::One);
			#line 1678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			x = TVector::ConditionalSelect(ADV_UFCS(_operator_lt_eq_xor)(vec, FloatConstants<T>::MinLog), TVector::Zero, Ldexp(x, ADV_UFCS_TEMPLATE(ConvertTo<Builtin::i32>)(k.__ref())));
			#line 1679 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			x = TVector::ConditionalSelect(ADV_UFCS(_operator_gt_eq_xor)(vec, FloatConstants<T>::MaxLog), TVector::Create(ADV_USPCS(PositiveInfinity, T)()), x);
			#line 1680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return x;
		} else {
			#line 1681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if constexpr (Builtin::TypeIs<T, Builtin::f64>()) {
				#line 1682 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(NearbyInt(ADV_UFCS(_operator_mul_mod)(vec, FloatConstants<T>::InvLog2)))> k = NearbyInt(ADV_UFCS(_operator_mul_mod)(vec, FloatConstants<T>::InvLog2)); 
				#line 1683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(FusedNegatedMultiplyAdd)(k.__ref(), FloatConstants<T>::Log2Hi, vec))> hi = ADV_UFCS(FusedNegatedMultiplyAdd)(k.__ref(), FloatConstants<T>::Log2Hi, vec); 
				#line 1684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(k, FloatConstants<T>::Log2Lo))> lo = ADV_UFCS(_operator_mul_mod)(k, FloatConstants<T>::Log2Lo); 
				#line 1685 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_sub_mod)(hi, lo))> x = ADV_UFCS(_operator_sub_mod)(hi, lo); 
				#line 1686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(x, x))> t = ADV_UFCS(_operator_mul_mod)(x, x); 
				#line 1687 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				Builtin::Auto<decltype(ADV_UFCS(FusedNegatedMultiplyAdd)(t.__ref(), Horner<TVector, Builtin::u64(0x3fc555555555553eULL), Builtin::u64(0xbf66c16c16bebd93ULL), Builtin::u64(0x3f11566aaf25de2cULL), Builtin::u64(0xbebbbd41c5d26bf1ULL), Builtin::u64(0x3e66376972bea4d0ULL)>(t), x))> c = ADV_UFCS(FusedNegatedMultiplyAdd)(t.__ref(), Horner<TVector, Builtin::u64(0x3fc555555555553eULL), Builtin::u64(0xbf66c16c16bebd93ULL), Builtin::u64(0x3f11566aaf25de2cULL), Builtin::u64(0xbebbbd41c5d26bf1ULL), Builtin::u64(0x3e66376972bea4d0ULL)>(t), x); 
				#line 1689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				c = ADV_UFCS(_operator_sub_mod)(TVector::One, ((ADV_UFCS(_operator_sub_mod)((ADV_UFCS(_operator_sub_mod)(lo, (ADV_UFCS(_operator_mul_mod)(x, c)) / (ADV_UFCS(_operator_sub_mod)(TVector::Create(Builtin::i32(2)), c)))), hi))));
				#line 1690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				c = TVector::ConditionalSelect(ADV_UFCS(_operator_lt_eq_xor)(vec, FloatConstants<T>::MinLog), TVector::Zero, Ldexp(c, ADV_UFCS_TEMPLATE(ConvertTo<Builtin::i64>)(k.__ref())));
				#line 1691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				c = TVector::ConditionalSelect(ADV_UFCS(_operator_gt_eq_xor)(vec, FloatConstants<T>::MaxLog), TVector::Create(ADV_USPCS(PositiveInfinity, T)()), c);
				#line 1692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return c;
			} else {
				#line 1693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				{
					#line 1694 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					static_assert(Builtin::Boolean(false), "Unsupported type for Exp");
				}
			}
		}
		return {};
	}
#line 1698 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::ExpM1(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 1699 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 1700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using IVector = SimdVector<FloatInt<T>, Arch>;
		#line 1701 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, Builtin::f32>()) {
			#line 1702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(NearbyInt(ADV_UFCS(_operator_mul_mod)(vec, FloatConstants<T>::InvLog2)))> k = NearbyInt(ADV_UFCS(_operator_mul_mod)(vec, FloatConstants<T>::InvLog2)); 
			#line 1703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(ADV_UFCS(FusedNegatedMultiplyAdd)(k.__ref(), FloatConstants<T>::Log2Hi, vec))> x = ADV_UFCS(FusedNegatedMultiplyAdd)(k.__ref(), FloatConstants<T>::Log2Hi, vec); 
			#line 1704 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			x = ADV_UFCS(FusedNegatedMultiplyAdd)(k.__ref(), FloatConstants<T>::Log2Lo, x);
			#line 1705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(x, Builtin::f32(0.5f)))> hx = ADV_UFCS(_operator_mul_mod)(x, Builtin::f32(0.5f)); 
			#line 1706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(x, hx))> hxs = ADV_UFCS(_operator_mul_mod)(x, hx); 
			#line 1707 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(Horner<TVector, Builtin::u32(0x3F800000U), Builtin::u32(0xBD08887FU), Builtin::u32(0x3ACF6DB4U)>(hxs))> r = Horner<TVector, Builtin::u32(0x3F800000U), Builtin::u32(0xBD08887FU), Builtin::u32(0x3ACF6DB4U)>(hxs); 
			#line 1708 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(FusedNegatedMultiplyAdd)(r.__ref(), hx, Builtin::f32(3.0f)))> t = ADV_UFCS(FusedNegatedMultiplyAdd)(r.__ref(), hx, Builtin::f32(3.0f)); 
			#line 1709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(hxs, ((ADV_UFCS(_operator_sub_mod)(r, t)) / (ADV_UFCS(_operator_sub_mod)(TVector::Create(Builtin::f32(6.0f)), ADV_UFCS(_operator_mul_mod)(x, t))))))> e = ADV_UFCS(_operator_mul_mod)(hxs, ((ADV_UFCS(_operator_sub_mod)(r, t)) / (ADV_UFCS(_operator_sub_mod)(TVector::Create(Builtin::f32(6.0f)), ADV_UFCS(_operator_mul_mod)(x, t))))); 
			#line 1710 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			e = ADV_UFCS(FusedMultiplySub)(x.__ref(), e, hxs);
			#line 1711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS_TEMPLATE(ConvertTo<Builtin::i32>)(k.__ref()))> ik = ADV_UFCS_TEMPLATE(ConvertTo<Builtin::i32>)(k.__ref()); 
			#line 1712 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UPCS(AsFloat32)(((ADV_UFCS(_operator_sub_mod)(IVector::Create(FloatConstants<T>::MaxExponent), ik)) << FloatConstants<T>::MantissaBits).__ref()))> two2mk = ADV_UPCS(AsFloat32)(((ADV_UFCS(_operator_sub_mod)(IVector::Create(FloatConstants<T>::MaxExponent), ik)) << FloatConstants<T>::MantissaBits).__ref()); 
			#line 1713 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_sub_mod)(ADV_UFCS(_operator_sub_mod)(TVector::One, two2mk), (ADV_UFCS(_operator_sub_mod)(e, x))))> y = ADV_UFCS(_operator_sub_mod)(ADV_UFCS(_operator_sub_mod)(TVector::One, two2mk), (ADV_UFCS(_operator_sub_mod)(e, x))); 
			#line 1714 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return Ldexp(y, ik);
		} else {
			#line 1715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if constexpr (Builtin::TypeIs<T, Builtin::f64>()) {
				#line 1716 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(NearbyInt(ADV_UFCS(_operator_mul_mod)(vec, FloatConstants<T>::InvLog2)))> k = NearbyInt(ADV_UFCS(_operator_mul_mod)(vec, FloatConstants<T>::InvLog2)); 
				#line 1717 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(FusedNegatedMultiplyAdd)(k.__ref(), FloatConstants<T>::Log2Hi, vec))> hi = ADV_UFCS(FusedNegatedMultiplyAdd)(k.__ref(), FloatConstants<T>::Log2Hi, vec); 
				#line 1718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(k, FloatConstants<T>::Log2Lo))> lo = ADV_UFCS(_operator_mul_mod)(k, FloatConstants<T>::Log2Lo); 
				#line 1719 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_sub_mod)(hi, lo))> x = ADV_UFCS(_operator_sub_mod)(hi, lo); 
				#line 1720 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(ADV_UFCS(_operator_mul_mod)(x, x), Builtin::f64(0.5)))> hxs = ADV_UFCS(_operator_mul_mod)(ADV_UFCS(_operator_mul_mod)(x, x), Builtin::f64(0.5)); 
				#line 1721 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(Horner<TVector, Builtin::u64(0x3FF0000000000000ULL), Builtin::u64(0xBFA11111111110F4ULL), Builtin::u64(0x3F5A01A019FE5585ULL), Builtin::u64(0xBF14CE199EAADBB7ULL), Builtin::u64(0x3ED0CFCA86E65239ULL), Builtin::u64(0xBE8AFDB76E09C32DULL)>(hxs))> r = Horner<TVector, Builtin::u64(0x3FF0000000000000ULL), Builtin::u64(0xBFA11111111110F4ULL), Builtin::u64(0x3F5A01A019FE5585ULL), Builtin::u64(0xBF14CE199EAADBB7ULL), Builtin::u64(0x3ED0CFCA86E65239ULL), Builtin::u64(0xBE8AFDB76E09C32DULL)>(hxs); 
				#line 1723 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_sub_mod)(TVector::Create(Builtin::f64(3.0)), ADV_UFCS(_operator_mul_mod)(ADV_UFCS(_operator_mul_mod)(r, x), Builtin::f64(0.5))))> t = ADV_UFCS(_operator_sub_mod)(TVector::Create(Builtin::f64(3.0)), ADV_UFCS(_operator_mul_mod)(ADV_UFCS(_operator_mul_mod)(r, x), Builtin::f64(0.5))); 
				#line 1724 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(hxs, ((ADV_UFCS(_operator_sub_mod)(r, t)) / (ADV_UFCS(_operator_sub_mod)(TVector::Create(Builtin::f64(6.0)), ADV_UFCS(_operator_mul_mod)(x, t))))))> e = ADV_UFCS(_operator_mul_mod)(hxs, ((ADV_UFCS(_operator_sub_mod)(r, t)) / (ADV_UFCS(_operator_sub_mod)(TVector::Create(Builtin::f64(6.0)), ADV_UFCS(_operator_mul_mod)(x, t))))); 
				#line 1725 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_sub_mod)((ADV_UFCS(_operator_sub_mod)(hi, x)), lo))> c = ADV_UFCS(_operator_sub_mod)((ADV_UFCS(_operator_sub_mod)(hi, x)), lo); 
				#line 1726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				e = ADV_UFCS(_operator_sub_mod)((ADV_UFCS(_operator_sub_mod)(ADV_UFCS(_operator_mul_mod)(x, (ADV_UFCS(_operator_sub_mod)(e, c))), c)), hxs);
				#line 1727 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS_TEMPLATE(ConvertTo<Builtin::i64>)(k.__ref()))> ik = ADV_UFCS_TEMPLATE(ConvertTo<Builtin::i64>)(k.__ref()); 
				#line 1728 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UPCS(AsFloat64)(((ADV_UFCS(_operator_sub_mod)(IVector::Create(FloatConstants<T>::MaxExponent), ik)) << FloatConstants<T>::MantissaBits).__ref()))> two2mk = ADV_UPCS(AsFloat64)(((ADV_UFCS(_operator_sub_mod)(IVector::Create(FloatConstants<T>::MaxExponent), ik)) << FloatConstants<T>::MantissaBits).__ref()); 
				#line 1729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_sub_mod)(ADV_UFCS(_operator_sub_mod)(TVector::One, two2mk), (ADV_UFCS(_operator_sub_mod)(e, x))))> ct1 = ADV_UFCS(_operator_sub_mod)(ADV_UFCS(_operator_sub_mod)(TVector::One, two2mk), (ADV_UFCS(_operator_sub_mod)(e, x))); 
				#line 1730 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_sub_mod)(x, (ADV_UFCS(_operator_add_mod)(e, two2mk))), TVector::One))> ct2 = ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_sub_mod)(x, (ADV_UFCS(_operator_add_mod)(e, two2mk))), TVector::One); 
				#line 1731 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(TVector::ConditionalSelect(ADV_UFCS(_operator_lt_xor)(k, Builtin::f64(20.0)), ct1, ct2))> y = TVector::ConditionalSelect(ADV_UFCS(_operator_lt_xor)(k, Builtin::f64(20.0)), ct1, ct2); 
				#line 1732 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return Ldexp(y, ik);
			} else {
				#line 1733 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				{
					#line 1734 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					static_assert(Builtin::Boolean(false), "Unsupported type for ExpM1");
				}
			}
		}
		return {};
	}
#line 1738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Exp2(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 1739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 1740 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, Builtin::f32>()) {
			#line 1741 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(NearbyInt(vec))> k = NearbyInt(vec); 
			#line 1742 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(ADV_UFCS(_operator_sub_mod)(vec, k))> x = ADV_UFCS(_operator_sub_mod)(vec, k); 
			#line 1743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(Horner<TVector, Builtin::u32(0x3e75fdf1U), Builtin::u32(0x3d6356ebU), Builtin::u32(0x3c1d9422U), Builtin::u32(0x3ab01218U), Builtin::u32(0x3922c8c4U)>(x))> y = Horner<TVector, Builtin::u32(0x3e75fdf1U), Builtin::u32(0x3d6356ebU), Builtin::u32(0x3c1d9422U), Builtin::u32(0x3ab01218U), Builtin::u32(0x3922c8c4U)>(x); 
			#line 1744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			x = ADV_UFCS(_operator_add_mod)(ADV_UFCS(FusedMultiplyAdd)(y.__ref(), ADV_UFCS(_operator_mul_mod)(x, x), ADV_UFCS(_operator_mul_mod)(x, FloatConstants<T>::Log2)), TVector::One);
			#line 1745 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			x = TVector::ConditionalSelect(ADV_UFCS(_operator_lt_eq_xor)(vec, FloatConstants<T>::MinLog2), TVector::Zero, Ldexp(x, ADV_UFCS_TEMPLATE(ConvertTo<Builtin::i32>)(k.__ref())));
			#line 1746 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			x = TVector::ConditionalSelect(ADV_UFCS(_operator_gt_eq_xor)(vec, FloatConstants<T>::MaxLog2), TVector::Create(ADV_USPCS(PositiveInfinity, T)()), x);
			#line 1747 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return x;
		} else {
			#line 1748 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if constexpr (Builtin::TypeIs<T, Builtin::f64>()) {
				#line 1749 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(NearbyInt(vec))> k = NearbyInt(vec); 
				#line 1750 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)((ADV_UFCS(_operator_sub_mod)(vec, k)), FloatConstants<T>::Log2))> x = ADV_UFCS(_operator_mul_mod)((ADV_UFCS(_operator_sub_mod)(vec, k)), FloatConstants<T>::Log2); 
				#line 1751 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(x, x))> t = ADV_UFCS(_operator_mul_mod)(x, x); 
				#line 1752 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				Builtin::Auto<decltype(ADV_UFCS(FusedNegatedMultiplyAdd)(t.__ref(), Horner<TVector, Builtin::u64(0x3fc555555555553eULL), Builtin::u64(0xbf66c16c16bebd93ULL), Builtin::u64(0x3f11566aaf25de2cULL), Builtin::u64(0xbebbbd41c5d26bf1ULL), Builtin::u64(0x3e66376972bea4d0ULL)>(t), x))> c = ADV_UFCS(FusedNegatedMultiplyAdd)(t.__ref(), Horner<TVector, Builtin::u64(0x3fc555555555553eULL), Builtin::u64(0xbf66c16c16bebd93ULL), Builtin::u64(0x3f11566aaf25de2cULL), Builtin::u64(0xbebbbd41c5d26bf1ULL), Builtin::u64(0x3e66376972bea4d0ULL)>(t), x); 
				#line 1754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				c = ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_add_mod)(TVector::One, x), ADV_UFCS(_operator_mul_mod)(x, c) / (ADV_UFCS(_operator_sub_mod)(TVector::Create(Builtin::i32(2)), c)));
				#line 1755 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				c = TVector::ConditionalSelect(ADV_UFCS(_operator_lt_eq_xor)(vec, FloatConstants<T>::MinLog2), TVector::Zero, Ldexp(c, ADV_UFCS_TEMPLATE(ConvertTo<Builtin::i64>)(k.__ref())));
				#line 1756 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				c = TVector::ConditionalSelect(ADV_UFCS(_operator_gt_eq_xor)(vec, FloatConstants<T>::MaxLog2), TVector::Create(ADV_USPCS(PositiveInfinity, T)()), c);
				#line 1757 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return c;
			} else {
				#line 1758 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				{
					#line 1759 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					static_assert(Builtin::Boolean(false), "Unsupported type for Exp2");
				}
			}
		}
		return {};
	}
#line 1763 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Exp10(const SimdVector<T, Arch>& vec)  -> const SimdVector<T, Arch>
	{
		#line 1764 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 1765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, Builtin::f32>()) {
			#line 1766 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(NearbyInt(ADV_UFCS(_operator_mul_mod)(vec, FloatConstants<T>::InvLg2)))> k = NearbyInt(ADV_UFCS(_operator_mul_mod)(vec, FloatConstants<T>::InvLg2)); 
			#line 1767 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(ADV_UFCS(FusedNegatedMultiplyAdd)(k.__ref(), FloatConstants<T>::Lg2Hi, vec))> x = ADV_UFCS(FusedNegatedMultiplyAdd)(k.__ref(), FloatConstants<T>::Lg2Hi, vec); 
			#line 1768 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(_operator_sub_mod_eq)(x, ADV_UFCS(_operator_mul_mod)(k, FloatConstants<T>::Lg2Lo));
			#line 1769 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(x, Horner<TVector, Builtin::u32(0x40135d8eU), Builtin::u32(0x4029a926U), Builtin::u32(0x400237daU), Builtin::u32(0x3f95eb4cU), Builtin::u32(0x3f0aacefU), Builtin::u32(0x3e54dff1U)>(x)))> y = ADV_UFCS(_operator_mul_mod)(x, Horner<TVector, Builtin::u32(0x40135d8eU), Builtin::u32(0x4029a926U), Builtin::u32(0x400237daU), Builtin::u32(0x3f95eb4cU), Builtin::u32(0x3f0aacefU), Builtin::u32(0x3e54dff1U)>(x)); 
			#line 1770 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			x = ADV_UFCS(_operator_add_mod)(y, TVector::One);
			#line 1771 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			x = TVector::ConditionalSelect(ADV_UFCS(_operator_lt_eq_xor)(vec, FloatConstants<T>::MinLog10), TVector::Zero, Ldexp(x, ADV_UFCS_TEMPLATE(ConvertTo<Builtin::i32>)(k.__ref())));
			#line 1772 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			x = TVector::ConditionalSelect(ADV_UFCS(_operator_gt_eq_xor)(vec, FloatConstants<T>::MaxLog10), TVector::Create(ADV_USPCS(PositiveInfinity, T)()), x);
			#line 1773 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return x;
		} else {
			#line 1774 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if constexpr (Builtin::TypeIs<T, Builtin::f64>()) {
				#line 1775 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(NearbyInt(ADV_UFCS(_operator_mul_mod)(vec, FloatConstants<T>::InvLg2)))> k = NearbyInt(ADV_UFCS(_operator_mul_mod)(vec, FloatConstants<T>::InvLg2)); 
				#line 1776 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				Builtin::Auto<decltype(ADV_UFCS(FusedNegatedMultiplyAdd)(k.__ref(), FloatConstants<T>::Lg2Hi, vec))> x = ADV_UFCS(FusedNegatedMultiplyAdd)(k.__ref(), FloatConstants<T>::Lg2Hi, vec); 
				#line 1777 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				x = ADV_UFCS(FusedNegatedMultiplyAdd)(k.__ref(), FloatConstants<T>::Lg2Lo, x);
				#line 1778 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(x, x))> xx = ADV_UFCS(_operator_mul_mod)(x, x); 
				#line 1779 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(x, Horner<TVector, Builtin::u64(0x40a2b4798e134a01ULL), Builtin::u64(0x40796b7a050349e4ULL), Builtin::u64(0x40277d9474c55934ULL), Builtin::u64(0x3fa4fd75f3062dd4ULL)>(xx)))> px = ADV_UFCS(_operator_mul_mod)(x, Horner<TVector, Builtin::u64(0x40a2b4798e134a01ULL), Builtin::u64(0x40796b7a050349e4ULL), Builtin::u64(0x40277d9474c55934ULL), Builtin::u64(0x3fa4fd75f3062dd4ULL)>(xx)); 
				#line 1780 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(px / (ADV_UFCS(_operator_sub_mod)(Horner1<TVector, Builtin::u64(0x40a03f37650df6e2ULL), Builtin::u64(0x4093e05eefd67782ULL), Builtin::u64(0x405545fdce51ca08ULL)>(xx), px)))> x2 = px / (ADV_UFCS(_operator_sub_mod)(Horner1<TVector, Builtin::u64(0x40a03f37650df6e2ULL), Builtin::u64(0x4093e05eefd67782ULL), Builtin::u64(0x405545fdce51ca08ULL)>(xx), px)); 
				#line 1781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_add_mod)((ADV_UFCS(_operator_add_mod)(x2, x2)), TVector::One))> c = ADV_UFCS(_operator_add_mod)((ADV_UFCS(_operator_add_mod)(x2, x2)), TVector::One); 
				#line 1782 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				c = TVector::ConditionalSelect(ADV_UFCS(_operator_lt_eq_xor)(vec, FloatConstants<T>::MinLog10), TVector::Zero, Ldexp(c, ADV_UFCS_TEMPLATE(ConvertTo<Builtin::i64>)(k.__ref())));
				#line 1783 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				c = TVector::ConditionalSelect(ADV_UFCS(_operator_gt_eq_xor)(vec, FloatConstants<T>::MaxLog10), TVector::Create(ADV_USPCS(PositiveInfinity, T)()), c);
				#line 1784 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return c;
			} else {
				#line 1785 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				{
					#line 1786 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					static_assert(Builtin::Boolean(false), "Unsupported type for Exp10");
				}
			}
		}
		return {};
	}
#line 1790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Sum(const SimdVector<T, Arch>& vec)  -> const T
	{
		#line 1791 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard1791{};
			#line 1792 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			BufferedVector<T, SimdVector<T, Arch>::Length> buf{}; 
			#line 1793 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(StoreAligned)(vec.__ref(), (__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(buf.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
			#line 1794 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			T acc{}; 
			#line 1795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{ auto __for_init_1795 = buf.__ref().buffer; auto __for_iter_1795 = ADV_UFCS(Iterate)(__for_init_1795.__ref()); while(__for_iter_1795.__ref().MoveNext()) {
			auto&& val = __for_iter_1795.__ref().GetCurrent(); {
				#line 1796 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				acc += val;
			}}}
			#line 1798 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return acc;
		}
		return {};
	}
#line 1802 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::Product(const SimdVector<T, Arch>& vec)  -> const T
	{
		#line 1803 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard1803{};
			#line 1804 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			BufferedVector<T, SimdVector<T, Arch>::Length> buf{}; 
			#line 1805 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(StoreAligned)(vec.__ref(), (__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(buf.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
			#line 1806 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(T{Builtin::i32(1)})> acc = T{Builtin::i32(1)}; 
			#line 1807 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{ auto __for_init_1807 = buf.__ref().buffer; auto __for_iter_1807 = ADV_UFCS(Iterate)(__for_init_1807.__ref()); while(__for_iter_1807.__ref().MoveNext()) {
			auto&& val = __for_iter_1807.__ref().GetCurrent(); {
				#line 1808 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				acc *= val;
			}}}
			#line 1810 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return acc;
		}
		return {};
	}
#line 1814 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::MinElement(const SimdVector<T, Arch>& vec)  -> const T
	{
		#line 1815 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard1815{};
			#line 1816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			BufferedVector<T, SimdVector<T, Arch>::Length> buf{}; 
			#line 1817 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(StoreAligned)(vec.__ref(), (__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(buf.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
			#line 1818 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			T result = ADV_UFCS(_operator_subscript)(buf.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0)); 
			#line 1819 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{ auto __for_init_1819 = buf.__ref().buffer; auto __for_iter_1819 = ADV_UFCS(Iterate)(__for_init_1819.__ref()); while(__for_iter_1819.__ref().MoveNext()) {
			auto&& val = __for_iter_1819.__ref().GetCurrent(); {
				#line 1820 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				result = ADV_UFCS(Min)(result.__ref(), val);
			}}}
			#line 1822 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return result;
		}
		return {};
	}
#line 1826 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::MaxElement(const SimdVector<T, Arch>& vec)  -> const T
	{
		#line 1827 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard1827{};
			#line 1828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			BufferedVector<T, SimdVector<T, Arch>::Length> buf{}; 
			#line 1829 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			ADV_UFCS(StoreAligned)(vec.__ref(), (__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(buf.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
			#line 1830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			T result = ADV_UFCS(_operator_subscript)(buf.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0)); 
			#line 1831 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{ auto __for_init_1831 = buf.__ref().buffer; auto __for_iter_1831 = ADV_UFCS(Iterate)(__for_init_1831.__ref()); while(__for_iter_1831.__ref().MoveNext()) {
			auto&& val = __for_iter_1831.__ref().GetCurrent(); {
				#line 1832 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				result = ADV_UFCS(Max)(result.__ref(), val);
			}}}
			#line 1834 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return result;
		}
		return {};
	}
#line 1846 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class V, uint64_t $tparam$c> auto CommonInstructions::Coef() noexcept -> const V
	{
		constexpr Builtin::u64 c = $tparam$c;
		#line 1847 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using Value = typename V::TValue;
		#line 1848 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<Value, Builtin::f32>()) {
			#line 1849 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return V::Create(ADV_USFCS((Builtin::f32), FromBits)(Builtin::Cast<true, Builtin::u32>(c)));
		} else {
			#line 1850 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if constexpr (Builtin::TypeIs<Value, Builtin::f64>()) {
				#line 1851 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return V::Create(ADV_USFCS((Builtin::f64), FromBits)(c));
			} else {
				#line 1852 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				{
					#line 1853 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					static_assert(Builtin::Boolean(false), "Unsupported type for Coef");
				}
			}
		}
		return {};
	}
#line 1857 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	inline constexpr auto CommonInstructions::ShuffleInternal(Builtin::i32 w, Builtin::i32 x, Builtin::i32 y, Builtin::i32 z)  -> const Builtin::i32
	{
		#line 1857 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		ADV_EXPRESSION_BODY((z << Builtin::i32(6)) | (y << Builtin::i32(4)) | (x << Builtin::i32(2)) | w); 
	}
#line 1858 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	inline constexpr auto CommonInstructions::ShuffleInternal(Builtin::i32 x, Builtin::i32 y)  -> const Builtin::i32
	{
		#line 1858 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		ADV_EXPRESSION_BODY((y << Builtin::i32(1)) | x); 
	}
#line 1859 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	inline constexpr auto CommonInstructions::ModShuffle(Builtin::i32 w, Builtin::i32 x, Builtin::i32 y, Builtin::i32 z)  -> const Builtin::i32
	{
		#line 1859 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		ADV_EXPRESSION_BODY(ShuffleInternal(w % Builtin::i32(4), x % Builtin::i32(4), y % Builtin::i32(4), z % Builtin::i32(4))); 
	}
#line 1860 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	inline constexpr auto CommonInstructions::ModShuffle(Builtin::i32 x, Builtin::i32 y)  -> const Builtin::i32
	{
		#line 1860 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		ADV_EXPRESSION_BODY(ShuffleInternal(x % Builtin::i32(2), y % Builtin::i32(2))); 
	}
#line 1862 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class V> inline auto CommonInstructions::Horner(const V& __var_1862_34) noexcept -> const V
	{
		#line 1862 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(Zero, V)()); 
	}
#line 1863 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class V, uint64_t $tparam$C0> inline auto CommonInstructions::Horner(const V& __var_1863_43) noexcept -> const V
	{
		constexpr Builtin::u64 C0 = $tparam$C0;
		#line 1863 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		ADV_EXPRESSION_BODY(Coef<V, C0>()); 
	}
#line 1864 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class V, uint64_t $tparam$C0, uint64_t $tparam$C1, uint64_t... Tail> inline auto CommonInstructions::Horner(const V& vec) noexcept -> const V
	{
		constexpr Builtin::u64 C0 = $tparam$C0;
		constexpr Builtin::u64 C1 = $tparam$C1;
		#line 1865 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return vec.__ref().FusedMultiplyAdd(Horner<V, C1, Tail...>(vec), Coef<V, C0>());
	}
#line 1868 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class V> inline auto CommonInstructions::Horner1(const V& __var_1868_35) noexcept -> const V
	{
		#line 1868 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		ADV_EXPRESSION_BODY(ADV_USPCS(One, V)()); 
	}
#line 1869 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class V, uint64_t $tparam$C0> inline auto CommonInstructions::Horner1(const V& vec) noexcept -> const V
	{
		constexpr Builtin::u64 C0 = $tparam$C0;
		#line 1869 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		ADV_EXPRESSION_BODY(vec + Coef<V, C0>()); 
	}
#line 1870 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class V, uint64_t $tparam$C0, uint64_t $tparam$C1, uint64_t... Tail> inline auto CommonInstructions::Horner1(const V& vec) noexcept -> const V
	{
		constexpr Builtin::u64 C0 = $tparam$C0;
		constexpr Builtin::u64 C1 = $tparam$C1;
		#line 1871 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return vec.__ref().FusedMultiplyAdd(Horner1<V, C1, Tail...>(vec), Coef<V, C0>());
	}
#line 1970 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class Arch> auto CommonInstructions::Quadrant(const SimdVector<Builtin::i32, Arch>& vec)  -> const SimdVector<Builtin::i32, Arch>
	{
		#line 1971 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return vec & Builtin::i32(3);
	}
#line 1974 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class Arch> auto CommonInstructions::Quadrant(const SimdVector<Builtin::f32, Arch>& vec)  -> const SimdVector<Builtin::f32, Arch>
	{
		#line 1975 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return ADV_UFCS_TEMPLATE(ConvertTo<Builtin::f32>)(Quadrant(ADV_UFCS_TEMPLATE(ConvertTo<Builtin::i32>)(vec.__ref())).__ref());
	}
#line 1978 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class Arch> auto CommonInstructions::Quadrant(const SimdVector<Builtin::f64, Arch>& vec)  -> const SimdVector<Builtin::f64, Arch>
	{
		#line 1979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(vec, Builtin::f64(0.25)))> a = ADV_UFCS(_operator_mul_mod)(vec, Builtin::f64(0.25)); 
		#line 1980 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return ADV_UFCS(_operator_mul_mod)((ADV_UFCS(_operator_sub_mod)(a, ADV_UPCS(Floor)(a.__ref()))), Builtin::f64(4.0));
	}
#line 1983 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class V> auto CommonInstructions::TrigReduce(const V& x, Builtin::MutableRef<V> __xref__) noexcept -> const V
	{
		V& xref = __xref__;
		#line 1984 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using Value = typename V::TValue;
		#line 1986 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if (ADV_UFCS(LessThanOrEqualAll)(x.__ref(), FloatConstants<Value>::PiO4)) {
			#line 1987 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			xref = x;
			#line 1988 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return V::Zero;
		} else {
			#line 1989 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			if (ADV_UFCS(LessThanOrEqualAll)(x.__ref(), FloatConstants<Value>::PiO2)) {
				#line 1990 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_gt_xor)(x, FloatConstants<Value>::PiO4))> test1 = ADV_UFCS(_operator_gt_xor)(x, FloatConstants<Value>::PiO4); 
				#line 1991 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				xref = ADV_UFCS(_operator_sub_mod)(x, FloatConstants<Value>::PiO2_1);
				#line 1992 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_sub_mod_eq)(xref, FloatConstants<Value>::PiO2_2);
				#line 1993 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_sub_mod_eq)(xref, FloatConstants<Value>::PiO2_3);
				#line 1994 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				xref = V::ConditionalSelect(test1, xref, x);
				#line 1995 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return V::ConditionalSelect(test1, V::One, V::Zero);
			} else {
				#line 1996 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				if (ADV_UFCS(LessThanOrEqualAll)(x.__ref(), FloatConstants<Value>::TwentyPi)) {
					#line 1997 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					const Builtin::Auto<decltype(NearbyInt(ADV_UFCS(_operator_mul_mod)(x, FloatConstants<Value>::TwoOPi)))> xi = NearbyInt(ADV_UFCS(_operator_mul_mod)(x, FloatConstants<Value>::TwoOPi)); 
					#line 1998 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					xref = ADV_UFCS(FusedNegatedMultiplyAdd)(xi.__ref(), FloatConstants<Value>::PiO2_1, x);
					#line 1999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					ADV_UFCS(_operator_sub_mod_eq)(xref, ADV_UFCS(_operator_mul_mod)(xi, FloatConstants<Value>::PiO2_2));
					#line 2000 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					ADV_UFCS(_operator_sub_mod_eq)(xref, ADV_UFCS(_operator_mul_mod)(xi, FloatConstants<Value>::PiO2_3));
					#line 2001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					return Quadrant(xi);
				} else {
					#line 2002 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
					if (ADV_UFCS(LessThanOrEqualAll)(x.__ref(), FloatConstants<Value>::MediumPi)) {
						#line 2003 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
						const Builtin::Auto<decltype(NearbyInt(ADV_UFCS(_operator_mul_mod)(x, FloatConstants<Value>::TwoOPi)))> fn = NearbyInt(ADV_UFCS(_operator_mul_mod)(x, FloatConstants<Value>::TwoOPi)); 
						#line 2004 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
						Builtin::Auto<decltype(ADV_UFCS(_operator_sub_mod)(x, ADV_UFCS(_operator_mul_mod)(fn, FloatConstants<Value>::PiO2_1)))> r = ADV_UFCS(_operator_sub_mod)(x, ADV_UFCS(_operator_mul_mod)(fn, FloatConstants<Value>::PiO2_1)); 
						#line 2005 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
						Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(fn, FloatConstants<Value>::PiO2_1t))> w = ADV_UFCS(_operator_mul_mod)(fn, FloatConstants<Value>::PiO2_1t); 
						#line 2006 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
						Builtin::Auto<decltype(r)> t = r; 
						#line 2007 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
						w = ADV_UFCS(_operator_mul_mod)(fn, FloatConstants<Value>::PiO2_2);
						#line 2008 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
						r = ADV_UFCS(_operator_sub_mod)(t, w);
						#line 2009 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
						w = ADV_UFCS(_operator_sub_mod)(ADV_UFCS(_operator_mul_mod)(fn, FloatConstants<Value>::PiO2_2t), ((ADV_UFCS(_operator_sub_mod)((ADV_UFCS(_operator_sub_mod)(t, r)), w))));
						#line 2010 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
						t = r;
						#line 2011 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
						w = ADV_UFCS(_operator_mul_mod)(fn, FloatConstants<Value>::PiO2_3);
						#line 2012 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
						r = ADV_UFCS(_operator_sub_mod)(t, w);
						#line 2013 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
						w = ADV_UFCS(_operator_sub_mod)(ADV_UFCS(_operator_mul_mod)(fn, FloatConstants<Value>::PiO2_3t), ((ADV_UFCS(_operator_sub_mod)((ADV_UFCS(_operator_sub_mod)(t, r)), w))));
						#line 2014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
						xref = ADV_UFCS(_operator_sub_mod)(r, w);
						#line 2015 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
						return Quadrant(fn);
					} else {
						#line 2016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
						{
							#line 2017 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
							constexpr Builtin::Auto<decltype(Builtin::i32{V::Length})> size = Builtin::i32{V::Length};
							#line 2018 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
							BufferedVector<Value, size> tmp{}; 
							#line 2019 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
							BufferedVector<Value, size> txr{}; 
							#line 2020 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
							BufferedVector<Value, size> args{}; 
							#line 2021 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
							{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __CommonInstructions_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard2021{};
								#line 2022 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
								ADV_UFCS(StoreAligned)(x.__ref(), (__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(args.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
								#line 2023 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
								{ auto __for_init_2023 = System::Range<Builtin::Auto<decltype(size)>, false>({}, size); auto __for_iter_2023 = ADV_UFCS(Iterate)(__for_init_2023.__ref()); while(__for_iter_2023.__ref().MoveNext()) {
								auto&& i = __for_iter_2023.__ref().GetCurrent(); {
									#line 2024 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
									Builtin::f64 arg = ADV_UFCS(_operator_subscript)(args.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i); 
									#line 2025 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
									if (ADV_UPCS(IsInfinity)(arg.__ref())) {
										#line 2026 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
										ADV_UFCS(_operator_subscript)(tmp.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) = Value{Builtin::i32(0)};
										#line 2027 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
										ADV_UFCS(_operator_subscript)(txr.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) = _BUILTIN_GET_EXTENSION_STATIC_PROPERTY(NaN, Value);
									} else {
										#line 2028 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
										{
											#line 2029 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
											Builtin::f64 y0{}, y1{}; 
											#line 2030 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
											const Builtin::Auto<decltype(Builtin::RemPiO2(arg, UnsafePointerCast<CDouble>((__RawPtr(std::addressof(y0))))))> n = Builtin::RemPiO2(arg, UnsafePointerCast<CDouble>((__RawPtr(std::addressof(y0))))); 
											#line 2031 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
											ADV_UFCS(_operator_subscript)(tmp.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) = Value{n & Builtin::i32(3)};
											#line 2032 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
											ADV_UFCS(_operator_subscript)(txr.__ref().buffer.__ref(), Builtin::UncheckedTag{}, i) = Value{y0};
										}
									}
								}}}
								#line 2035 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
								xref = V::LoadAligned((__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(txr.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
								#line 2036 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
								return V::LoadAligned((__RawPtr(std::addressof(ADV_UFCS(_operator_subscript)(tmp.__ref().buffer.__ref(), Builtin::UncheckedTag{}, Builtin::i32(0))))));
							}
						}
					}
				}
			}
		}
		return {};
	}
#line 2041 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class Arch> auto CommonInstructions::SinEval(const SimdVector<Builtin::f32, Arch>& z, const SimdVector<Builtin::f32, Arch>& x)  -> const SimdVector<Builtin::f32, Arch>
	{
		#line 2042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(Horner<SimdVector<Builtin::f32, Arch>, Builtin::u32(0xbe2aaaa2U), Builtin::u32(0x3c08839dU), Builtin::u32(0xb94ca1f9U)>(z))> y = Horner<SimdVector<Builtin::f32, Arch>, Builtin::u32(0xbe2aaaa2U), Builtin::u32(0x3c08839dU), Builtin::u32(0xb94ca1f9U)>(z); 
		#line 2043 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return ADV_UFCS(FusedMultiplyAdd)((ADV_UFCS(_operator_mul_mod)(y, z)).__ref(), x, x);
	}
#line 2046 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class Arch> auto CommonInstructions::SinEval(const SimdVector<Builtin::f64, Arch>& z, const SimdVector<Builtin::f64, Arch>& x)  -> const SimdVector<Builtin::f64, Arch>
	{
		#line 2047 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(Horner<SimdVector<Builtin::f64, Arch>, Builtin::u64(0xbfc5555555555548ULL), Builtin::u64(0x3f8111111110f7d0ULL), Builtin::u64(0xbf2a01a019bfdf03ULL), Builtin::u64(0x3ec71de3567d4896ULL), Builtin::u64(0xbe5ae5e5a9291691ULL), Builtin::u64(0x3de5d8fd1fcf0ec1ULL)>(z))> y = Horner<SimdVector<Builtin::f64, Arch>, Builtin::u64(0xbfc5555555555548ULL), Builtin::u64(0x3f8111111110f7d0ULL), Builtin::u64(0xbf2a01a019bfdf03ULL), Builtin::u64(0x3ec71de3567d4896ULL), Builtin::u64(0xbe5ae5e5a9291691ULL), Builtin::u64(0x3de5d8fd1fcf0ec1ULL)>(z); 
		#line 2049 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return ADV_UFCS(FusedMultiplyAdd)((ADV_UFCS(_operator_mul_mod)(y, z)).__ref(), x, x);
	}
#line 2052 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class Arch> auto CommonInstructions::CosEval(const SimdVector<Builtin::f32, Arch>& z)  -> const SimdVector<Builtin::f32, Arch>
	{
		#line 2053 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<Builtin::f32, Arch>;
		#line 2054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(Horner<TVector, Builtin::u32(0x3d2aaaa5U), Builtin::u32(0xbab60619U), Builtin::u32(0x37ccf5ceU)>(z))> y = Horner<TVector, Builtin::u32(0x3d2aaaa5U), Builtin::u32(0xbab60619U), Builtin::u32(0x37ccf5ceU)>(z); 
		#line 2055 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return ADV_UFCS(_operator_add_mod)(TVector::One, ADV_UFCS(FusedMultiplyAdd)(z.__ref(), TVector::Create(Builtin::f32(-0.5f)), ADV_UFCS(_operator_mul_mod)(ADV_UFCS(_operator_mul_mod)(y, z), z)));
	}
#line 2058 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class Arch> auto CommonInstructions::CosEval(const SimdVector<Builtin::f64, Arch>& z)  -> const SimdVector<Builtin::f64, Arch>
	{
		#line 2059 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<Builtin::f64, Arch>;
		#line 2060 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(Horner<TVector, Builtin::u64(0x3fe0000000000000ULL), Builtin::u64(0xbfa5555555555551ULL), Builtin::u64(0x3f56c16c16c15d47ULL), Builtin::u64(0xbefa01a019ddbcd9ULL), Builtin::u64(0x3e927e4f8e06d9a5ULL), Builtin::u64(0xbe21eea7c1e514d4ULL), Builtin::u64(0x3da8ff831ad9b219ULL)>(z))> y = Horner<TVector, Builtin::u64(0x3fe0000000000000ULL), Builtin::u64(0xbfa5555555555551ULL), Builtin::u64(0x3f56c16c16c15d47ULL), Builtin::u64(0xbefa01a019ddbcd9ULL), Builtin::u64(0x3e927e4f8e06d9a5ULL), Builtin::u64(0xbe21eea7c1e514d4ULL), Builtin::u64(0x3da8ff831ad9b219ULL)>(z); 
		#line 2062 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return ADV_UFCS(_operator_sub_mod)(TVector::One, ADV_UFCS(_operator_mul_mod)(y, z));
	}
#line 2065 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class Arch> auto CommonInstructions::TanEval(const SimdVector<Builtin::f32, Arch>& z, const SimdMask<Builtin::f32, Arch>& test1)  -> const SimdVector<Builtin::f32, Arch>
	{
		#line 2066 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<Builtin::f32, Arch>;
		#line 2067 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(z, z))> zz = ADV_UFCS(_operator_mul_mod)(z, z); 
		#line 2068 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		Builtin::Auto<decltype(Horner<SimdVector<Builtin::f32, Arch>, Builtin::u32(0x3eaaaa6fU), Builtin::u32(0x3e0896ddU), Builtin::u32(0x3d5ac5c9U), Builtin::u32(0x3cc821b5U), Builtin::u32(0x3b4c779cU), Builtin::u32(0x3c19c53bU)>(zz))> y = Horner<SimdVector<Builtin::f32, Arch>, Builtin::u32(0x3eaaaa6fU), Builtin::u32(0x3e0896ddU), Builtin::u32(0x3d5ac5c9U), Builtin::u32(0x3cc821b5U), Builtin::u32(0x3b4c779cU), Builtin::u32(0x3c19c53bU)>(zz); 
		#line 2069 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		y = ADV_UFCS(FusedMultiplyAdd)(y.__ref(), ADV_UFCS(_operator_mul_mod)(zz, z), z);
		#line 2070 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return TVector::ConditionalSelect(test1, y, TVector::Create(Builtin::i32(-1)) / y);
	}
#line 2073 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class Arch> auto CommonInstructions::TanEval(const SimdVector<Builtin::f64, Arch>& z, const SimdMask<Builtin::f64, Arch>& test1)  -> const SimdVector<Builtin::f64, Arch>
	{
		#line 2074 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<Builtin::f64, Arch>;
		#line 2075 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(z, z))> zz = ADV_UFCS(_operator_mul_mod)(z, z); 
		#line 2076 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(Horner<TVector, Builtin::u64(0xc1711fead3299176ULL), Builtin::u64(0x413199eca5fc9dddULL), Builtin::u64(0xc0c992d8d24f3f38ULL)>(zz))> num = Horner<TVector, Builtin::u64(0xc1711fead3299176ULL), Builtin::u64(0x413199eca5fc9dddULL), Builtin::u64(0xc0c992d8d24f3f38ULL)>(zz); 
		#line 2077 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(Horner<TVector, Builtin::u64(0xc189afe03cbe5a31ULL), Builtin::u64(0x4177d98fc2ead8efULL), Builtin::u64(0xc13427bc582abc96ULL), Builtin::u64(0x40cab8a5eeb36572ULL)>(zz))> den = Horner<TVector, Builtin::u64(0xc189afe03cbe5a31ULL), Builtin::u64(0x4177d98fc2ead8efULL), Builtin::u64(0xc13427bc582abc96ULL), Builtin::u64(0x40cab8a5eeb36572ULL)>(zz); 
		#line 2078 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		const Builtin::Auto<decltype(ADV_UFCS(FusedMultiplyAdd)(z.__ref(), (ADV_UFCS(_operator_mul_mod)(zz, (num / den))), z))> y = ADV_UFCS(FusedMultiplyAdd)(z.__ref(), (ADV_UFCS(_operator_mul_mod)(zz, (num / den))), z); 
		#line 2079 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return TVector::ConditionalSelect(test1, y, TVector::Create(Builtin::i32(-1)) / y);
	}
#line 2082 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<class T, class Arch> auto CommonInstructions::AtanEval(const SimdVector<T, Arch>& x, const SimdVector<T, Arch>& recx)  -> const SimdVector<T, Arch>
	{
		#line 2083 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		using TVector = SimdVector<T, Arch>;
		#line 2084 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (Builtin::TypeIs<T, Builtin::f32>()) {
			#line 2085 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_lt_xor)(x, FloatConstants<Builtin::f32>::Tan3PiO8))> flag1 = ADV_UFCS(_operator_lt_xor)(x, FloatConstants<Builtin::f32>::Tan3PiO8); 
			#line 2086 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype((ADV_UFCS(_operator_gt_eq_xor)(x, ADV_USFCS((Builtin::f32), FromBits)(Builtin::u32(0x3ed413cdU)))) & flag1)> flag2 = (ADV_UFCS(_operator_gt_eq_xor)(x, ADV_USFCS((Builtin::f32), FromBits)(Builtin::u32(0x3ed413cdU)))) & flag1; 
			#line 2087 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(TVector::ConditionalSelect(flag1, TVector::Zero, TVector::Create(FloatConstants<Builtin::f32>::PiO2)))> yy = TVector::ConditionalSelect(flag1, TVector::Zero, TVector::Create(FloatConstants<Builtin::f32>::PiO2)); 
			#line 2088 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			yy = TVector::ConditionalSelect(flag2, TVector::Create(FloatConstants<Builtin::f32>::PiO4), yy);
			#line 2089 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(TVector::ConditionalSelect(flag1, x, -recx))> xx = TVector::ConditionalSelect(flag1, x, -recx); 
			#line 2090 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			xx = TVector::ConditionalSelect(flag2, (ADV_UFCS(_operator_sub_mod)(x, TVector::One)) / (ADV_UFCS(_operator_add_mod)(x, TVector::One)), xx);
			#line 2091 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(xx, xx))> z = ADV_UFCS(_operator_mul_mod)(xx, xx); 
			#line 2092 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			Builtin::Auto<decltype(Horner<TVector, Builtin::u32(0xbeaaaa2aU), Builtin::u32(0x3e4c925fU), Builtin::u32(0xbe0e1b85U), Builtin::u32(0x3da4f0d1U)>(z))> z1 = Horner<TVector, Builtin::u32(0xbeaaaa2aU), Builtin::u32(0x3e4c925fU), Builtin::u32(0xbe0e1b85U), Builtin::u32(0x3da4f0d1U)>(z); 
			#line 2093 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			z1 = ADV_UFCS(FusedMultiplyAdd)(xx.__ref(), ADV_UFCS(_operator_mul_mod)(z1, z), xx);
			#line 2094 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			z1 = TVector::ConditionalSelect(flag2, ADV_UFCS(_operator_add_mod)(z1, FloatConstants<Builtin::f32>::PiO4_Lo), z1);
			#line 2095 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			z1 = TVector::ConditionalSelect(ADV_UFCS(_operator_eq_eq_xor)(flag1, SimdMask<T, Arch>::False), ADV_UFCS(_operator_add_mod)(z1, FloatConstants<Builtin::f32>::PiO2_Lo), z1);
			#line 2096 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return ADV_UFCS(_operator_add_mod)(yy, z1);
		} else {
			#line 2097 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{
				#line 2098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_lt_xor)(x, FloatConstants<Builtin::f64>::Tan3PiO8))> flag1 = ADV_UFCS(_operator_lt_xor)(x, FloatConstants<Builtin::f64>::Tan3PiO8); 
				#line 2099 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				const Builtin::Auto<decltype((ADV_UFCS(_operator_gt_eq_xor)(x, FloatConstants<Builtin::f64>::TanPiO8)) & flag1)> flag2 = (ADV_UFCS(_operator_gt_eq_xor)(x, FloatConstants<Builtin::f64>::TanPiO8)) & flag1; 
				#line 2100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				Builtin::Auto<decltype(TVector::ConditionalSelect(flag1, TVector::Zero, TVector::Create(FloatConstants<Builtin::f64>::PiO2)))> yy = TVector::ConditionalSelect(flag1, TVector::Zero, TVector::Create(FloatConstants<Builtin::f64>::PiO2)); 
				#line 2101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				yy = TVector::ConditionalSelect(flag2, TVector::Create(FloatConstants<Builtin::f64>::PiO4), yy);
				#line 2102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				Builtin::Auto<decltype(TVector::ConditionalSelect(flag1, x, -recx))> xx = TVector::ConditionalSelect(flag1, x, -recx); 
				#line 2103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				xx = TVector::ConditionalSelect(flag2, (ADV_UFCS(_operator_sub_mod)(x, TVector::One)) / (ADV_UFCS(_operator_add_mod)(x, TVector::One)), xx);
				#line 2104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(xx, xx))> z = ADV_UFCS(_operator_mul_mod)(xx, xx); 
				#line 2105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				ADV_UFCS(_operator_mul_mod_eq)(z, Horner<TVector, Builtin::u64(0xc0503669fd28ec8eULL), Builtin::u64(0xc05eb8bf2d05ba25ULL), Builtin::u64(0xc052c08c36880273ULL), Builtin::u64(0xc03028545b6b807aULL), Builtin::u64(0xbfec007fa1f72594ULL)>(z) / Horner1<TVector, Builtin::u64(0x4068519efbbd62ecULL), Builtin::u64(0x407e563f13b049eaULL), Builtin::u64(0x407b0e18d2e2be3bULL), Builtin::u64(0x4064a0dd43b8fa25ULL), Builtin::u64(0x4038dbc45b14603cULL)>(z));
				#line 2107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				z = ADV_UFCS(FusedMultiplyAdd)(xx.__ref(), z, xx);
				#line 2108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				z = TVector::ConditionalSelect(flag2, ADV_UFCS(_operator_add_mod)(z, FloatConstants<Builtin::f64>::PiO4_Lo), z);
				#line 2109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				z = ADV_UFCS(_operator_add_mod)(z, TVector::ConditionalSelect(flag1, TVector::Zero, TVector::Create(FloatConstants<Builtin::f64>::PiO2_Lo)));
				#line 2110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return ADV_UFCS(_operator_add_mod)(yy, z);
			}
		}
		return {};
	}
#line 2114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<size_t $tparam$I, int32_t $tparam$V0, int32_t... Vs> inline constexpr auto CommonInstructions::GetAt() noexcept -> const Builtin::i32
	{
		constexpr Builtin::usize I = $tparam$I;
		constexpr Builtin::i32 V0 = $tparam$V0;
		#line 2115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (I == Builtin::i32(0)) {
			#line 2116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return V0;
		} else {
			#line 2117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{
				#line 2118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return GetAt<Builtin::usize{I} - Builtin::u32(1U), Vs...>();
			}
		}
		return {};
	}
#line 2122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<size_t $tparam$I, size_t $tparam$N, int32_t... Vs> inline constexpr auto CommonInstructions::IsDupLoInternal() noexcept -> const bool
	{
		constexpr Builtin::usize I = $tparam$I;
		constexpr Builtin::usize N = $tparam$N;
		#line 2123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		constexpr Builtin::usize half = N >> Builtin::i32(1);
		#line 2124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (I == half) {
			#line 2125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return Builtin::Boolean(true);
		} else {
			#line 2126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{
				#line 2127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				static_assert((I <=> half) < 0, "Too large index");
				#line 2128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return (GetAt<I, Vs...>() <=> half) < 0 && GetAt<half + I, Vs...>() == GetAt<I, Vs...>() && IsDupLoInternal<Builtin::u32(1U) + I, N, Vs...>();
			}
		}
		return {};
	}
#line 2132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<int32_t... Vs> inline constexpr auto CommonInstructions::IsDupLo() noexcept -> const bool
	{
		#line 2133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return IsDupLoInternal<Builtin::i32(0), Builtin::usize(sizeof...(Vs)), Vs...>();
	}
#line 2135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<size_t $tparam$I, size_t $tparam$N, int32_t... Vs> inline constexpr auto CommonInstructions::IsDupHiInternal() noexcept -> const bool
	{
		constexpr Builtin::usize I = $tparam$I;
		constexpr Builtin::usize N = $tparam$N;
		#line 2136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		constexpr Builtin::usize half = N >> Builtin::i32(1);
		#line 2137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (I == half) {
			#line 2138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return Builtin::Boolean(true);
		} else {
			#line 2139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{
				#line 2140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				static_assert((I <=> half) < 0, "Too large index");
				#line 2141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return (GetAt<I, Vs...>() <=> half) >= 0 && (GetAt<I, Vs...>() <=> N) < 0 && GetAt<half + I, Vs...>() == GetAt<I, Vs...>() && IsDupHiInternal<Builtin::u32(1U) + I, N, Vs...>();
			}
		}
		return {};
	}
#line 2146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<int32_t... Vs> inline constexpr auto CommonInstructions::IsDupHi() noexcept -> const bool
	{
		#line 2147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return IsDupHiInternal<Builtin::i32(0), Builtin::usize(sizeof...(Vs)), Vs...>();
	}
#line 2149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<size_t $tparam$I> inline constexpr auto CommonInstructions::IdentityInternal() noexcept -> const bool
	{
		constexpr Builtin::usize I = $tparam$I;
		#line 2149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		ADV_EXPRESSION_BODY(Builtin::Boolean(true)); 
	}
#line 2150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<size_t $tparam$I, int32_t $tparam$V0, int32_t... Vs> inline constexpr auto CommonInstructions::IdentityInternal() noexcept -> const bool
	{
		constexpr Builtin::usize I = $tparam$I;
		constexpr Builtin::i32 V0 = $tparam$V0;
		#line 2151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return V0 == I && IdentityInternal<Builtin::u32(1U) + I, Vs...>();
	}
#line 2153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<int32_t... Vs> inline constexpr auto CommonInstructions::IsIdentity() noexcept -> const bool
	{
		#line 2154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return IdentityInternal<Builtin::i32(0), Vs...>();
	}
#line 2156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<size_t $tparam$I, int32_t $tparam$V0, int32_t... Vs> inline constexpr auto CommonInstructions::GetNth() noexcept -> const Builtin::i32
	{
		constexpr Builtin::usize I = $tparam$I;
		constexpr Builtin::i32 V0 = $tparam$V0;
		#line 2157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr (I == Builtin::i32(0)) {
			#line 2158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return V0;
		} else {
			#line 2159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{
				#line 2160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return GetNth<I - Builtin::u32(1U), Vs...>();
			}
		}
		return {};
	}
#line 2163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<size_t $tparam$I, size_t $tparam$N, size_t $tparam$H, int32_t... Vs> inline constexpr auto CommonInstructions::IsCrossLaneInternal() noexcept -> const bool
	{
		constexpr Builtin::usize I = $tparam$I;
		constexpr Builtin::usize N = $tparam$N;
		constexpr Builtin::usize H = $tparam$H;
		#line 2164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		if constexpr ((I <=> N) >= 0) {
			#line 2165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			return Builtin::Boolean(false);
		} else {
			#line 2166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
			{
				#line 2167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				constexpr Builtin::Auto<decltype(GetNth<I, Vs...>())> Vi = GetNth<I, Vs...>();
				#line 2168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				constexpr Builtin::Auto<decltype(((I <=> H) < 0 ? ((Vi <=> H) >= 0) : ((Vi <=> H) < 0)))> current = ((I <=> H) < 0 ? ((Vi <=> H) >= 0) : ((Vi <=> H) < 0));
				#line 2169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				constexpr Builtin::Auto<decltype(IsCrossLaneInternal<Builtin::u32(1U) + I, N, H, Vs...>())> next = IsCrossLaneInternal<Builtin::u32(1U) + I, N, H, Vs...>();
				#line 2170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
				return current || next;
			}
		}
		return {};
	}
#line 2173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	template<int32_t... Vs> inline constexpr auto CommonInstructions::IsCrossLane() noexcept -> const bool
	{
		#line 2174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		constexpr Builtin::Auto<decltype(Builtin::usize(sizeof...(Vs)))> Size = Builtin::usize(sizeof...(Vs));
		#line 2175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		constexpr Builtin::Auto<decltype(Size >> Builtin::i32(1))> Half = Size >> Builtin::i32(1);
		#line 2176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		static_assert((Size <=> Builtin::i32(1)) >= 0, "No elements");
		#line 2177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
		return IsCrossLaneInternal<Builtin::i32(0), Size, Half, Vs...>();
	}
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\CommonInstructions.ast"
	

}