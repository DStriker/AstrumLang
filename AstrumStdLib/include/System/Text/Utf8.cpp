#include "System/Runtime/Intrinsics/Simd.h"
using namespace System::Runtime::Intrinsics;
#include "Utf8.h"

namespace System::Text {
class Utf8ValidatorSimd;
//###############################################################################
//# Type definitions
//###############################################################################
#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
	struct Utf8ValidatorSimd : public Builtin::StaticClass {
		public: using $self = Utf8ValidatorSimd;
		private: Utf8ValidatorSimd() = default;
		#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		private: template<int32_t N, class Arch> static auto ExtractPrev(const SimdVector<Builtin::u8, Arch>& current, const SimdVector<Builtin::u8, Arch>& prev)  -> const SimdVector<Builtin::u8, Arch>;
		#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		private: template<class Arch> static auto LookupCase(const SimdVector<Builtin::u8, Arch>& current, const SimdVector<Builtin::u8, Arch>& table)  -> const SimdVector<Builtin::u8, Arch>;
		#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		private: template<class Arch> static auto Repeat16(Builtin::u8 val0, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3, Builtin::u8 val4, Builtin::u8 val5, Builtin::u8 val6, Builtin::u8 val7, Builtin::u8 val8, Builtin::u8 val9, Builtin::u8 val10, Builtin::u8 val11, Builtin::u8 val12, Builtin::u8 val13, Builtin::u8 val14, Builtin::u8 val15)  -> const SimdVector<Builtin::u8, Arch>;
		#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		private: template<class Arch> static auto CheckSpecialCases(const SimdVector<Builtin::u8, Arch>& current, const SimdVector<Builtin::u8, Arch>& prev)  -> const SimdVector<Builtin::u8, Arch>;
		#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		private: template<class Arch> static auto CheckMultibyteLength(const SimdVector<Builtin::u8, Arch>& current, const SimdVector<Builtin::u8, Arch>& prev, const SimdVector<Builtin::u8, Arch>& specCases)  -> const SimdVector<Builtin::u8, Arch>;
		#line 196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		public: template<class Arch> static auto Invoke(System::Span<Builtin::u8> bytes)  -> const bool;
		#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		private: static constexpr Builtin::InlineArray<Builtin::u32(64U), Builtin::u8> IncompleteLookup = Builtin::InitializerList({Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(255)), Builtin::u8(Builtin::i32(239)), Builtin::u8(Builtin::i32(223)), Builtin::u8(Builtin::i32(191))});
		
	};
	
	
	
	
	
	#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
	auto Utf8::IsValidSimd(System::Span<Builtin::u8> bytes)  -> const bool
	{
		#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(bytes.$ref()))> length = ADV_UPCS(Length)(bytes.$ref()); 
		#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		if ((length <=> Builtin::u32(32U)) < 0) {
			#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
			return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<Utf8ValidatorSimd, Neon64, Neon, Sse42, Sse2>)(bytes);
		} else {
			#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
			if ((length <=> Builtin::u32(64U)) < 0) {
				#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
				return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<Utf8ValidatorSimd, Neon64, Neon, Avx2, Sse42, Sse2>)(bytes);
			} else {
				#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
				{
					#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<Utf8ValidatorSimd, Neon64, Neon, Avx512BW, Avx2, Sse42, Sse2>)(bytes);
				}
			}
		}
		return {};
	}
#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
	template<int32_t $tparam$N, class Arch> auto Utf8ValidatorSimd::ExtractPrev(const SimdVector<Builtin::u8, Arch>& current, const SimdVector<Builtin::u8, Arch>& prev)  -> const SimdVector<Builtin::u8, Arch>
	{
		constexpr Builtin::i32 N = $tparam$N;
		#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		using TVector = SimdVector<Builtin::u8, Arch>;
		#line 70 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		using IVector = SimdVector<Builtin::i32, Arch>;
		#line 71 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		#if ADV_VERSION_ARM
		#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		return Neon::template ExtractVector<Builtin::i32(16) - N>(prev, current);
		#endif
		#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		#if ADV_VERSION_X86
		#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		if constexpr (std::is_same_v<Arch, Avx512BW>) {
			#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
			const Builtin::Auto<decltype(IVector::Create(Builtin::i32(28), Builtin::i32(29), Builtin::i32(30), Builtin::i32(31), Builtin::i32(0), Builtin::i32(1), Builtin::i32(2), Builtin::i32(3), Builtin::i32(4), Builtin::i32(5), Builtin::i32(6), Builtin::i32(7), Builtin::i32(8), Builtin::i32(9), Builtin::i32(10), Builtin::i32(11)))> mask = IVector::Create(Builtin::i32(28), Builtin::i32(29), Builtin::i32(30), Builtin::i32(31), Builtin::i32(0), Builtin::i32(1), Builtin::i32(2), Builtin::i32(3), Builtin::i32(4), Builtin::i32(5), Builtin::i32(6), Builtin::i32(7), Builtin::i32(8), Builtin::i32(9), Builtin::i32(10), Builtin::i32(11)); 
			#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
			const Builtin::Auto<decltype(IVector{current.$ref().ToNative()})> icurrent = IVector{current.$ref().ToNative()}; 
			#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
			const Builtin::Auto<decltype(IVector{prev.$ref().ToNative()})> iprev = IVector{prev.$ref().ToNative()}; 
			#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
			const TVector rotated = Avx512F::PermuteVarX2(icurrent, mask, iprev).$ref().ToNative(); 
			#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
			return Avx512BW::template AlignRight<Builtin::i32(16) - N>(current, rotated);
		} else {
			#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
			if constexpr (std::is_same_v<Arch, Avx2>) {
				#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
				return Avx2::template AlignRight<Builtin::i32(16) - N>(current, Avx2::template Permute2x128<Builtin::i32(0x21)>(prev, current));
			} else {
				#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
				if constexpr (std::is_same_v<Arch, Sse42>) {
					#line 84 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
					return Sse42::template AlignRight<Builtin::i32(16) - N>(current, prev);
				} else {
					#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
					if constexpr (std::is_same_v<Arch, Sse2>) {
						#line 86 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
						return Sse2::template AlignRight<Builtin::i32(16) - N>(current, prev);
					}
				}
			}
		}
		#endif
		return {};
	}
#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
	template<class Arch> auto Utf8ValidatorSimd::LookupCase(const SimdVector<Builtin::u8, Arch>& current, const SimdVector<Builtin::u8, Arch>& table)  -> const SimdVector<Builtin::u8, Arch>
	{
		#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		#if ADV_VERSION_ARM
		#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		return Neon::TableLookup(table, current);
		#endif
		#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		#if ADV_VERSION_X86
		#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		if constexpr (std::is_same_v<Arch, Avx512BW>) {
			#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
			return Avx512BW::Shuffle(table, current);
		} else {
			#line 99 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
			if constexpr (std::is_same_v<Arch, Avx2>) {
				#line 100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
				return Avx2::Shuffle(table, current);
			} else {
				#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
				if constexpr (std::is_same_v<Arch, Sse42>) {
					#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
					return Sse42::Shuffle(table, current);
				} else {
					#line 103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
					if constexpr (std::is_same_v<Arch, Sse2>) {
						#line 104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
						return Sse2::Shuffle(table, current);
					}
				}
			}
		}
		#endif
		return {};
	}
#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
	template<class Arch> auto Utf8ValidatorSimd::Repeat16(Builtin::u8 val0, Builtin::u8 val1, Builtin::u8 val2, Builtin::u8 val3, Builtin::u8 val4, Builtin::u8 val5, Builtin::u8 val6, Builtin::u8 val7, Builtin::u8 val8, Builtin::u8 val9, Builtin::u8 val10, Builtin::u8 val11, Builtin::u8 val12, Builtin::u8 val13, Builtin::u8 val14, Builtin::u8 val15)  -> const SimdVector<Builtin::u8, Arch>
	{
		#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		using TVector = SimdVector<Builtin::u8, Arch>;
		#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		if constexpr (std::is_same_v<Arch, Avx512BW>) {
			#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
			return TVector::Create(val0, val1, val2, val3, val4, val5, val6, val7, val8, val9, val10, val11, val12, val13, val14, val15, val0, val1, val2, val3, val4, val5, val6, val7, val8, val9, val10, val11, val12, val13, val14, val15, val0, val1, val2, val3, val4, val5, val6, val7, val8, val9, val10, val11, val12, val13, val14, val15, val0, val1, val2, val3, val4, val5, val6, val7, val8, val9, val10, val11, val12, val13, val14, val15);
		} else {
			#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
			if constexpr (std::is_same_v<Arch, Avx2>) {
				#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
				return TVector::Create(val0, val1, val2, val3, val4, val5, val6, val7, val8, val9, val10, val11, val12, val13, val14, val15, val0, val1, val2, val3, val4, val5, val6, val7, val8, val9, val10, val11, val12, val13, val14, val15);
			} else {
				#line 122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
				{
					#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
					return TVector::Create(val0, val1, val2, val3, val4, val5, val6, val7, val8, val9, val10, val11, val12, val13, val14, val15);
				}
			}
		}
		return {};
	}
#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
	template<class Arch> auto Utf8ValidatorSimd::CheckSpecialCases(const SimdVector<Builtin::u8, Arch>& current, const SimdVector<Builtin::u8, Arch>& prev)  -> const SimdVector<Builtin::u8, Arch>
	{
		#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		using TVector = SimdVector<Builtin::u8, Arch>;
		#line 130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		constexpr Builtin::Auto<decltype(Builtin::u8(1U))> TooShort = Builtin::u8(1U);
		#line 131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		constexpr Builtin::Auto<decltype(Builtin::u8(1U) << Builtin::i32(1))> TooLong = Builtin::u8(1U) << Builtin::i32(1);
		#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		constexpr Builtin::Auto<decltype(Builtin::u8(1U) << Builtin::i32(2))> Overlong3 = Builtin::u8(1U) << Builtin::i32(2);
		#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		constexpr Builtin::Auto<decltype(Builtin::u8(1U) << Builtin::i32(3))> TooLarge = Builtin::u8(1U) << Builtin::i32(3);
		#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		constexpr Builtin::Auto<decltype(Builtin::u8(1U) << Builtin::i32(4))> Surrogate = Builtin::u8(1U) << Builtin::i32(4);
		#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		constexpr Builtin::Auto<decltype(Builtin::u8(1U) << Builtin::i32(5))> Overlong2 = Builtin::u8(1U) << Builtin::i32(5);
		#line 136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		constexpr Builtin::Auto<decltype(Builtin::u8(1U) << Builtin::i32(6))> Overlong4 = Builtin::u8(1U) << Builtin::i32(6);
		#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		constexpr Builtin::Auto<decltype(Builtin::u8(1U) << Builtin::i32(6))> TooLarge1000 = Builtin::u8(1U) << Builtin::i32(6);
		#line 138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		constexpr Builtin::Auto<decltype(Builtin::u8(1U) << Builtin::i32(7))> TwoConts = Builtin::u8(1U) << Builtin::i32(7);
		#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		constexpr Builtin::Auto<decltype(Builtin::u8(0b10000011U))> Carry = Builtin::u8(0b10000011U);
		#line 140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		const Builtin::Auto<decltype(LookupCase(prev >> Builtin::i32(4), Repeat16<Arch>(TooLong, TooLong, TooLong, TooLong, TooLong, TooLong, TooLong, TooLong, TwoConts, TwoConts, TwoConts, TwoConts, TooShort | Overlong2, TooShort, TooShort | Overlong3 | Surrogate, TooShort | TooLarge | TooLarge1000 | Overlong4)))> byte1high = LookupCase(prev >> Builtin::i32(4), Repeat16<Arch>(TooLong, TooLong, TooLong, TooLong, TooLong, TooLong, TooLong, TooLong, TwoConts, TwoConts, TwoConts, TwoConts, TooShort | Overlong2, TooShort, TooShort | Overlong3 | Surrogate, TooShort | TooLarge | TooLarge1000 | Overlong4)); 
		#line 148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		const Builtin::Auto<decltype(LookupCase(prev & Builtin::u8(0xFU), Repeat16<Arch>(Carry | Overlong3 | Overlong2 | Overlong4, Carry | Overlong2, Carry, Carry, Carry | TooLarge, Carry | TooLarge | TooLarge1000, Carry | TooLarge | TooLarge1000, Carry | TooLarge | TooLarge1000, Carry | TooLarge | TooLarge1000, Carry | TooLarge | TooLarge1000, Carry | TooLarge | TooLarge1000, Carry | TooLarge | TooLarge1000, Carry | TooLarge | TooLarge1000, Carry | TooLarge | TooLarge1000 | Surrogate, Carry | TooLarge | TooLarge1000, Carry | TooLarge | TooLarge1000)))> byte1low = LookupCase(prev & Builtin::u8(0xFU), Repeat16<Arch>(Carry | Overlong3 | Overlong2 | Overlong4, Carry | Overlong2, Carry, Carry, Carry | TooLarge, Carry | TooLarge | TooLarge1000, Carry | TooLarge | TooLarge1000, Carry | TooLarge | TooLarge1000, Carry | TooLarge | TooLarge1000, Carry | TooLarge | TooLarge1000, Carry | TooLarge | TooLarge1000, Carry | TooLarge | TooLarge1000, Carry | TooLarge | TooLarge1000, Carry | TooLarge | TooLarge1000 | Surrogate, Carry | TooLarge | TooLarge1000, Carry | TooLarge | TooLarge1000)); 
		#line 164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		const Builtin::Auto<decltype(LookupCase(current >> Builtin::i32(4), Repeat16<Arch>(TooShort, TooShort, TooShort, TooShort, TooShort, TooShort, TooShort, TooShort, TooLong | Overlong2 | TwoConts | Overlong3 | TooLarge1000 | Overlong4, TooLong | Overlong2 | TwoConts | Overlong3 | TooLarge, TooLong | Overlong2 | TwoConts | Surrogate | TooLarge, TooLong | Overlong2 | TwoConts | Surrogate | TooLarge, TooShort, TooShort, TooShort, TooShort)))> byte2High = LookupCase(current >> Builtin::i32(4), Repeat16<Arch>(TooShort, TooShort, TooShort, TooShort, TooShort, TooShort, TooShort, TooShort, TooLong | Overlong2 | TwoConts | Overlong3 | TooLarge1000 | Overlong4, TooLong | Overlong2 | TwoConts | Overlong3 | TooLarge, TooLong | Overlong2 | TwoConts | Surrogate | TooLarge, TooLong | Overlong2 | TwoConts | Surrogate | TooLarge, TooShort, TooShort, TooShort, TooShort)); 
		#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		return (byte1high & byte1low & byte2High);
	}
#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
	template<class Arch> auto Utf8ValidatorSimd::CheckMultibyteLength(const SimdVector<Builtin::u8, Arch>& current, const SimdVector<Builtin::u8, Arch>& prev, const SimdVector<Builtin::u8, Arch>& specCases)  -> const SimdVector<Builtin::u8, Arch>
	{
		#line 180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		using TVector = SimdVector<Builtin::u8, Arch>;
		#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		const Builtin::Auto<decltype(ExtractPrev<Builtin::i32(2)>(current, prev))> prev2 = ExtractPrev<Builtin::i32(2)>(current, prev); 
		#line 182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		const Builtin::Auto<decltype(ExtractPrev<Builtin::i32(3)>(current, prev))> prev3 = ExtractPrev<Builtin::i32(3)>(current, prev); 
		#line 183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		if constexpr (std::is_same_v<Arch, Avx512BW>) {
			#line 184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
			const Builtin::Auto<decltype(Avx512BW::SaturatingSubtract(prev2, TVector::Create(Builtin::u8(0b11100000U))))> isThirdByte = Avx512BW::SaturatingSubtract(prev2, TVector::Create(Builtin::u8(0b11100000U))); 
			#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
			const Builtin::Auto<decltype(Avx512BW::SaturatingSubtract(prev3, TVector::Create(Builtin::u8(0b11110000U))))> isFourthByte = Avx512BW::SaturatingSubtract(prev3, TVector::Create(Builtin::u8(0b11110000U))); 
			#line 186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
			const Builtin::Auto<decltype(isThirdByte ^ isFourthByte)> mustBeContinuation = isThirdByte ^ isFourthByte; 
			#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
			return (mustBeContinuation & Builtin::u8(0x80U)) ^ specCases;
		} else {
			#line 188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
			{
				#line 189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_gt_eq_xor)(prev2, Builtin::u8(0b11100000U)))> isThirdByte = ADV_UFCS(_operator_gt_eq_xor)(prev2, Builtin::u8(0b11100000U)); 
				#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_gt_eq_xor)(prev3, Builtin::u8(0b11110000U)))> isFourthByte = ADV_UFCS(_operator_gt_eq_xor)(prev3, Builtin::u8(0b11110000U)); 
				#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
				const TVector mustBeContinuation = (isThirdByte ^ isFourthByte).$ref().ToNative(); 
				#line 192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
				return (mustBeContinuation & Builtin::u8(0x80U)) ^ specCases;
			}
		}
		return {};
	}
#line 196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
	template<class Arch> auto Utf8ValidatorSimd::Invoke(System::Span<Builtin::u8> bytes)  -> const bool
	{
		#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		using TVector = SimdVector<Builtin::u8, Arch>;
		#line 198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		using TMask = SimdMask<Builtin::u8, Arch>;
		#line 199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(bytes.$ref()))> count = ADV_UPCS(Length)(bytes.$ref()); 
		#line 201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		const Builtin::Auto<decltype((count <=> vecSize) < 0 ? Builtin::usize(0U) : count - vecSize)> vecLast = (count <=> vecSize) < 0 ? Builtin::usize(0U) : count - vecSize; 
		#line 202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		const Builtin::Auto<decltype(TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(IncompleteLookup.$ref(), Builtin::UncheckedTag{}, Builtin::i32(64) - vecSize)))> incompleteVec = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(IncompleteLookup.$ref(), Builtin::UncheckedTag{}, Builtin::i32(64) - vecSize)); 
		#line 203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		TVector current{}; 
		#line 204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		TVector prev{}; 
		#line 205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		TVector error{}; 
		#line 206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		TMask prevIncomplete{}; 
		#line 207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		Builtin::usize i{}; 
		#line 208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		for (; (i <=> vecLast) < 0; i += vecSize) 
		{
			#line 209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(bytes.$ref(), Builtin::UncheckedTag{}, i));
			#line 211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
			if (ADV_UFCS(GreaterThanAny)(current.$ref(), Builtin::u8(0x7FU))) {
				#line 212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
				const Builtin::Auto<decltype(ExtractPrev<Builtin::i32(1)>(current, prev))> prev1 = ExtractPrev<Builtin::i32(1)>(current, prev); 
				#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
				const Builtin::Auto<decltype(CheckSpecialCases(current, prev1))> specCases = CheckSpecialCases(current, prev1); 
				#line 214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
				error = CheckMultibyteLength(current, prev, specCases);
				#line 215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
				if (ADV_UFCS(GreaterThanAny)(error.$ref(), Builtin::u8(0U))) {
					#line 216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
					return Builtin::Boolean(false);
				}
				#line 218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
				prev = current;
				#line 219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
				prevIncomplete = ADV_UFCS(_operator_gt_xor)(current, incompleteVec);
			} else {
				#line 220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
				{
					#line 222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
					if (ADV_UPCS(Any)(prevIncomplete.$ref())) {
						#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
						return Builtin::Boolean(false);
					}
				}
			}
		}
		#line 227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		if ((i <=> count) < 0) {
			#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
			Builtin::InlineArray<vecSize, Builtin::u8> bufTail{}; 
			#line 229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
			ADV_USFCS((Unsafe), CopyBlockNonOverlapping)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(bufTail.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))), ADV_UFCS(_operator_subscript)(bytes.$ref(), Builtin::UncheckedTag{}, i), count - i);
			#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(bufTail.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)));
			#line 232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
			if (ADV_UFCS(GreaterThanAny)(current.$ref(), Builtin::u8(0x7FU))) {
				#line 233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
				const Builtin::Auto<decltype(ExtractPrev<Builtin::i32(1)>(current, prev))> prev1 = ExtractPrev<Builtin::i32(1)>(current, prev); 
				#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
				const Builtin::Auto<decltype(CheckSpecialCases(current, prev1))> specCases = CheckSpecialCases(current, prev1); 
				#line 235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
				error = CheckMultibyteLength(current, prev, specCases);
				#line 236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
				if (ADV_UFCS(GreaterThanAny)(error.$ref(), Builtin::u8(0U))) {
					#line 237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
					return Builtin::Boolean(false);
				}
				#line 239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
				prevIncomplete = ADV_UFCS(_operator_gt_xor)(current, incompleteVec);
			} else {
				#line 240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
				{
					#line 242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
					if (ADV_UPCS(Any)(prevIncomplete.$ref())) {
						#line 243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
						return Builtin::Boolean(false);
					}
				}
			}
		}
		#line 248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		return ADV_UPCS(None)(prevIncomplete.$ref());
	}

#ifdef ADV_UNITTEST
	#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
	static bool $Test_8ab121f0be07a770 = [](){
		#line 253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		const Builtin::Str s = Builtin::Str{"Hello, world!"}; 
		#line 254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		const Builtin::Str cs = Builtin::Str{"Hello, мой друг ❤😆"}; 
		#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		const Builtin::Str test3 = Builtin::Str{"Begin PART 1 Middle PART 2 End"}; 
		#line 256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		ADV_ASSERT((ADV_USFCS((Utf8), IsValid)(ADV_USFCS((Span<Builtin::u8>), UnsafeCreate)(ADV_UFCS(GetDataReference)(s.$ref()), ADV_UFCS(GetByteLength)(s.$ref())))), "Utf8.IsValid(Span<byte>.UnsafeCreate(s.GetDataReference(),s.GetByteLength()))");
		#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		ADV_ASSERT((ADV_USFCS((Utf8), IsValid)(ADV_USFCS((Span<Builtin::u8>), UnsafeCreate)(ADV_UFCS(GetDataReference)(cs.$ref()), ADV_UFCS(GetByteLength)(cs.$ref())))), "Utf8.IsValid(Span<byte>.UnsafeCreate(cs.GetDataReference(),cs.GetByteLength()))");
		#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		ADV_ASSERT((ADV_USFCS((Utf8), IsValid)(ADV_USFCS((Span<Builtin::u8>), UnsafeCreate)(ADV_UFCS(GetDataReference)(test3.$ref()), ADV_UFCS(GetByteLength)(test3.$ref())))), "Utf8.IsValid(Span<byte>.UnsafeCreate(test3.GetDataReference(),test3.GetByteLength()))");
		#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		Builtin::InlineArray<Builtin::i32(8), Builtin::u8> bytes = Builtin::InitializerList({Builtin::u8(Builtin::i32(0xF4)), Builtin::u8(Builtin::i32(0x90)), Builtin::u8(Builtin::i32(0x80)), Builtin::u8(Builtin::i32(0x80)), Builtin::u8(Builtin::i32(0x20)), Builtin::u8(Builtin::i32(0x20)), Builtin::u8(Builtin::i32(0x20)), Builtin::u8(Builtin::i32(0x20))}); 
		#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		ADV_ASSERT((!ADV_USFCS((Utf8), IsValid)(bytes)), "notUtf8.IsValid(bytes)");
		#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		bytes = Builtin::InitializerList({Builtin::u8(0x20U), Builtin::u8(0x20U), Builtin::u8(0x20U), Builtin::u8(0x20U), Builtin::u8(0x20U), Builtin::u8(0x20U), Builtin::u8(0x20U), Builtin::u8(0xF4U)});
		#line 262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		ADV_ASSERT((!ADV_USFCS((Utf8), IsValid)(bytes)), "notUtf8.IsValid(bytes)");
		#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		bytes = Builtin::InitializerList({Builtin::u8(0x80U), Builtin::u8(0xBFU), Builtin::u8(0x80U), Builtin::u8(0xBFU), Builtin::u8(0x80U), Builtin::u8(0xBFU), Builtin::u8(0x80U), Builtin::u8(0xBFU)});
		#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		ADV_ASSERT((!ADV_USFCS((Utf8), IsValid)(bytes)), "notUtf8.IsValid(bytes)");
		#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		bytes = Builtin::InitializerList({Builtin::u8(0xFCU), Builtin::u8(0x80U), Builtin::u8(0x80U), Builtin::u8(0x80U), Builtin::u8(0x80U), Builtin::u8(0xAU), Builtin::u8(0x20U), Builtin::u8(0x20U)});
		#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		ADV_ASSERT((!ADV_USFCS((Utf8), IsValid)(bytes)), "notUtf8.IsValid(bytes)");
		#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		bytes = Builtin::InitializerList({Builtin::u8(0x20U), Builtin::u8(0x20U), Builtin::u8(0x20U), Builtin::u8(0x20U), Builtin::u8(0xEDU), Builtin::u8(0xA0U), Builtin::u8(0x80U), Builtin::u8(0x20U)});
		#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		ADV_ASSERT((!ADV_USFCS((Utf8), IsValid)(bytes)), "notUtf8.IsValid(bytes)");
		#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		Builtin::InlineArray<Builtin::u8(24U), Builtin::u8> bytes2 = Builtin::InitializerList({Builtin::u8(Builtin::u8(0xF4U)), Builtin::u8(Builtin::u8(0x90U)), Builtin::u8(Builtin::u8(0x80U)), Builtin::u8(Builtin::u8(0x80U)), Builtin::u8(Builtin::u8(0x20U)), Builtin::u8(Builtin::u8(0x20U)), Builtin::u8(Builtin::u8(0x20U)), Builtin::u8(Builtin::u8(0x20U)), Builtin::u8(Builtin::u8(0xF4U)), Builtin::u8(Builtin::u8(0x90U)), Builtin::u8(Builtin::u8(0x80U)), Builtin::u8(Builtin::u8(0x80U)), Builtin::u8(Builtin::u8(0x20U)), Builtin::u8(Builtin::u8(0x20U)), Builtin::u8(Builtin::u8(0x20U)), Builtin::u8(Builtin::u8(0x20U)), Builtin::u8(Builtin::u8(0xF4U)), Builtin::u8(Builtin::u8(0x90U)), Builtin::u8(Builtin::u8(0x80U)), Builtin::u8(Builtin::u8(0x80U)), Builtin::u8(Builtin::u8(0x20U)), Builtin::u8(Builtin::u8(0x20U)), Builtin::u8(Builtin::u8(0x20U)), Builtin::u8(Builtin::u8(0x20U))}); 
		#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		ADV_ASSERT((!ADV_USFCS((Utf8), IsValid)(bytes2)), "notUtf8.IsValid(bytes2)");
		#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		bytes2 = Builtin::InitializerList({Builtin::u8(0x20U), Builtin::u8(0x20U), Builtin::u8(0x20U), Builtin::u8(0x20U), Builtin::u8(0x20U), Builtin::u8(0x20U), Builtin::u8(0x20U), Builtin::u8(0x20U), Builtin::u8(0x20U), Builtin::u8(0x20U), Builtin::u8(0x20U), Builtin::u8(0x20U), Builtin::u8(0x20U), Builtin::u8(0x20U), Builtin::u8(0x20U), Builtin::u8(0x20U), Builtin::u8(0x20U), Builtin::u8(0x20U), Builtin::u8(0x20U), Builtin::u8(0x20U), Builtin::u8(0x20U), Builtin::u8(0x20U), Builtin::u8(0x20U), Builtin::u8(0xF4U)});
		#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		ADV_ASSERT((!ADV_USFCS((Utf8), IsValid)(bytes2)), "notUtf8.IsValid(bytes2)");
		#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		bytes2 = Builtin::InitializerList({Builtin::u8(0x80U), Builtin::u8(0xBFU), Builtin::u8(0x80U), Builtin::u8(0xBFU), Builtin::u8(0x80U), Builtin::u8(0xBFU), Builtin::u8(0x80U), Builtin::u8(0xBFU), Builtin::u8(0x80U), Builtin::u8(0xBFU), Builtin::u8(0x80U), Builtin::u8(0xBFU), Builtin::u8(0x80U), Builtin::u8(0xBFU), Builtin::u8(0x80U), Builtin::u8(0xBFU), Builtin::u8(0x80U), Builtin::u8(0xBFU), Builtin::u8(0x80U), Builtin::u8(0xBFU), Builtin::u8(0x80U), Builtin::u8(0xBFU), Builtin::u8(0x80U), Builtin::u8(0xBFU)});
		#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		ADV_ASSERT((!ADV_USFCS((Utf8), IsValid)(bytes2)), "notUtf8.IsValid(bytes2)");
		#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		bytes2 = Builtin::InitializerList({Builtin::u8(0xFCU), Builtin::u8(0x80U), Builtin::u8(0x80U), Builtin::u8(0x80U), Builtin::u8(0x80U), Builtin::u8(0xAU), Builtin::u8(0x20U), Builtin::u8(0x20U), Builtin::u8(0xFCU), Builtin::u8(0x80U), Builtin::u8(0x80U), Builtin::u8(0x80U), Builtin::u8(0x80U), Builtin::u8(0xAU), Builtin::u8(0x20U), Builtin::u8(0x20U), Builtin::u8(0xFCU), Builtin::u8(0x80U), Builtin::u8(0x80U), Builtin::u8(0x80U), Builtin::u8(0x80U), Builtin::u8(0xAU), Builtin::u8(0x20U), Builtin::u8(0x20U)});
		#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		ADV_ASSERT((!ADV_USFCS((Utf8), IsValid)(bytes2)), "notUtf8.IsValid(bytes2)");
		#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		bytes2 = Builtin::InitializerList({Builtin::u8(0x20U), Builtin::u8(0x20U), Builtin::u8(0x20U), Builtin::u8(0x20U), Builtin::u8(0xEDU), Builtin::u8(0xA0U), Builtin::u8(0x80U), Builtin::u8(0x20U), Builtin::u8(0x20U), Builtin::u8(0x20U), Builtin::u8(0x20U), Builtin::u8(0x20U), Builtin::u8(0xEDU), Builtin::u8(0xA0U), Builtin::u8(0x80U), Builtin::u8(0x20U), Builtin::u8(0x20U), Builtin::u8(0x20U), Builtin::u8(0x20U), Builtin::u8(0x20U), Builtin::u8(0xEDU), Builtin::u8(0xA0U), Builtin::u8(0x80U), Builtin::u8(0x20U)});
		#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
		ADV_ASSERT((!ADV_USFCS((Utf8), IsValid)(bytes2)), "notUtf8.IsValid(bytes2)");
		return true;
	}();
	#endif	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Text\\Utf8.ast"
	

}