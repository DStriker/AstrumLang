#include "System/Runtime/Intrinsics/Simd.h"
using namespace System::Runtime::Intrinsics;
#include "Span.h"

namespace System {
template<class T> class SpanContains;
class SpanMismatch;
//###############################################################################
//# Type definitions
//###############################################################################
#line 605 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> struct SpanContains : public Builtin::StaticClass {
		public: using $self = SpanContains<T>;
		private: SpanContains() = default;
		#line 606 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<T> data, T val)  -> const bool;
		
	};
	
	#line 629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	struct SpanMismatch : public Builtin::StaticClass {
		public: using $self = SpanMismatch;
		private: SpanMismatch() = default;
		#line 630 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		public: template<class Arch> static auto Invoke(System::Span<Builtin::u8> left, System::Span<Builtin::u8> right, Builtin::usize length)  -> const Builtin::usize;
		
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

#line 504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	auto SpanHelpers::ContainsByte(System::Span<Builtin::u8> data, Builtin::u8 val)  -> const bool
	{
		#line 505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
		#line 506 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((length <=> Builtin::u32(16U)) < 0) {
			#line 507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return ContainsGeneralCase(data, val);
		} else {
			#line 508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(32U)) < 0) {
				#line 509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u8>, Neon, Sse2>)(data, val);
			} else {
				#line 510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(64U)) < 0) {
					#line 511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u8>, Neon, Avx2, Sse2>)(data, val);
				} else {
					#line 512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{
						#line 513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u8>, Neon, Avx512BW, Avx2, Sse2>)(data, val);
					}
				}
			}
		}
		return {};
	}
#line 517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	auto SpanHelpers::ContainsWord(System::Span<Builtin::u16> data, Builtin::u16 val)  -> const bool
	{
		#line 518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
		#line 519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((length <=> Builtin::u32(8U)) < 0) {
			#line 520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return ContainsGeneralCase(data, val);
		} else {
			#line 521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(16U)) < 0) {
				#line 522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u16>, Neon, Sse2>)(data, val);
			} else {
				#line 523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(32U)) < 0) {
					#line 524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u16>, Neon, Avx2, Sse2>)(data, val);
				} else {
					#line 525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{
						#line 526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u16>, Neon, Avx512BW, Avx2, Sse2>)(data, val);
					}
				}
			}
		}
		return {};
	}
#line 530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	auto SpanHelpers::ContainsDword(System::Span<Builtin::u32> data, Builtin::u32 val)  -> const bool
	{
		#line 531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
		#line 532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((length <=> Builtin::u32(4U)) < 0) {
			#line 533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return ContainsGeneralCase(data, val);
		} else {
			#line 534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(8U)) < 0) {
				#line 535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u32>, Neon, Avx512VL128, Sse2>)(data, val);
			} else {
				#line 536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(16U)) < 0) {
					#line 537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u32>, Neon, Avx512VL256, Avx2, Sse2>)(data, val);
				} else {
					#line 538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{
						#line 539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u32>, Neon, Avx512F, Avx2, Sse2>)(data, val);
					}
				}
			}
		}
		return {};
	}
#line 543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	auto SpanHelpers::ContainsQword(System::Span<Builtin::u64> data, Builtin::u64 val)  -> const bool
	{
		#line 544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> length = ADV_UPCS(Length)(data.$ref()); 
		#line 545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((length <=> Builtin::u32(2U)) < 0) {
			#line 546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return ContainsGeneralCase(data, val);
		} else {
			#line 547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(4U)) < 0) {
				#line 548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u64>, Neon, Avx512VL128, Sse42, Sse2>)(data, val);
			} else {
				#line 549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(8U)) < 0) {
					#line 550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u64>, Neon, Avx512VL256, Avx2, Sse42, Sse2>)(data, val);
				} else {
					#line 551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{
						#line 552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanContains<Builtin::u64>, Neon, Avx512F, Avx2, Sse42, Sse2>)(data, val);
					}
				}
			}
		}
		return {};
	}
#line 556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	auto SpanHelpers::Mismatch(System::Span<Builtin::u8> left, System::Span<Builtin::u8> right, Builtin::usize length)  -> const Builtin::usize
	{
		#line 558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::usize index{}; 
		#line 560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if ((length <=> Builtin::u32(16U)) < 0) {
			#line 561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			index = length % Builtin::u32(4U);
			#line 562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (index) {
				#line 563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(left.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0)) != ADV_UFCS(_operator_subscript)(right.$ref(), Builtin::UncheckedTag{}, Builtin::i32(0))) {
					#line 564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return Builtin::u32(0U);
				}
				#line 567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((index <=> Builtin::u32(1U)) > 0) {
					#line 568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if (ADV_UFCS(_operator_subscript)(left.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1)) != ADV_UFCS(_operator_subscript)(right.$ref(), Builtin::UncheckedTag{}, Builtin::i32(1))) {
						#line 569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return Builtin::u32(1U);
					}
					#line 572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					if ((index <=> Builtin::u32(2U)) > 0 && ADV_UFCS(_operator_subscript)(left.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2)) != ADV_UFCS(_operator_subscript)(right.$ref(), Builtin::UncheckedTag{}, Builtin::i32(2))) {
						#line 573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return Builtin::u32(2U);
					}
				}
			}
			#line 578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			while ((index <=> length - Builtin::u32(4U)) <= 0) 
			{
				#line 579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(left.$ref(), Builtin::UncheckedTag{}, index) != ADV_UFCS(_operator_subscript)(right.$ref(), Builtin::UncheckedTag{}, index)) {
					#line 580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index;
				}
				#line 582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(left.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U)) != ADV_UFCS(_operator_subscript)(right.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(1U))) {
					#line 583 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(1U);
				}
				#line 585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(left.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U)) != ADV_UFCS(_operator_subscript)(right.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(2U))) {
					#line 586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(2U);
				}
				#line 588 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if (ADV_UFCS(_operator_subscript)(left.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U)) != ADV_UFCS(_operator_subscript)(right.$ref(), Builtin::UncheckedTag{}, index + Builtin::u32(3U))) {
					#line 589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + Builtin::u32(3U);
				}
				#line 592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				index += Builtin::u32(4U);
			}
			#line 594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			return length;
		} else {
			#line 595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if ((length <=> Builtin::u32(32U)) < 0) {
				#line 596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanMismatch, Neon, Sse2>)(left, right, length);
			} else {
				#line 597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				if ((length <=> Builtin::u32(64U)) < 0) {
					#line 598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanMismatch, Neon, Avx2, Sse2>)(left, right, length);
				} else {
					#line 599 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					{
						#line 600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
						return ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SpanMismatch, Neon, Avx512BW, Avx2, Sse2>)(left, right, length);
					}
				}
			}
		}
		return {};
	}
#line 606 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class T> template<class Arch> auto SpanContains<T>::Invoke(System::Span<T> data, T val)  -> const bool
	{
		#line 607 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<T, Arch>;
		#line 608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(data.$ref()))> count = ADV_UPCS(Length)(data.$ref()); 
		#line 610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(count - vecSize)> vecLast = count - vecSize; 
		#line 611 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(TVector::Create(val))> values = TVector::Create(val); 
		#line 612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TVector current{}; 
		#line 613 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		for (Builtin::Auto<decltype(Builtin::u32(0U))> i = Builtin::u32(0U); (i <=> vecLast) <= 0; i += vecSize) 
		{
			#line 614 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, i));
			#line 615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (ADV_UFCS(EqualsAny)(current.$ref(), values)) {
				#line 616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return Builtin::Boolean(true);
			}
		}
		#line 619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (!ADV_UFCS(IsMultipleOf)(count.$ref(), vecSize)) {
			#line 620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			current = TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(data.$ref(), Builtin::UncheckedTag{}, vecLast));
			#line 621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (ADV_UFCS(EqualsAny)(current.$ref(), values)) {
				#line 622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return Builtin::Boolean(true);
			}
		}
		#line 625 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return Builtin::Boolean(false);
	}

#line 630 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	template<class Arch> auto SpanMismatch::Invoke(System::Span<Builtin::u8> left, System::Span<Builtin::u8> right, Builtin::usize length)  -> const Builtin::usize
	{
		#line 631 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TVector = SimdVector<Builtin::u8, Arch>;
		#line 632 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		using TMask = SimdMask<Builtin::u8, Arch>;
		#line 633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const Builtin::Auto<decltype(length - vecSize)> vecLast = length - vecSize; 
		#line 635 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		Builtin::usize index{}; 
		#line 636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		TMask maskVec{}; 
		#line 637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		while ((index <=> vecLast) < 0) 
		{
			#line 638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			maskVec = ADV_UFCS(_operator_ne_eq_xor)(TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(left.$ref(), Builtin::UncheckedTag{}, index)), TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(right.$ref(), Builtin::UncheckedTag{}, index)));
			#line 639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if (const auto i = ADV_UPCS(FirstSet)(maskVec.$ref())) {
				{
					#line 639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					auto __tmp0 = *i; const auto& i = __tmp0;
					
					#line 640 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
					return index + i;
				}
			}
			#line 642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			index += vecSize;
		}
		#line 644 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		index = vecLast;
		#line 645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		maskVec = ADV_UFCS(_operator_ne_eq_xor)(TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(left.$ref(), Builtin::UncheckedTag{}, index)), TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(right.$ref(), Builtin::UncheckedTag{}, index)));
		#line 646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		if (const auto i = ADV_UPCS(FirstSet)(maskVec.$ref())) {
			{
				#line 646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				auto __tmp0 = *i; const auto& i = __tmp0;
				
				#line 647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				return index + i;
			}
		}
		#line 649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		return length;
	}

#line 653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	static_assert(Builtin::usize(sizeof(System::Span<Builtin::i32>)) == Builtin::usize(sizeof(Builtin::usize)) * Builtin::i32(2), "Span should be 2 pointers wide");
#line 654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	static_assert(Builtin::TypeIs<System::Span<Builtin::i32>, ISelfEquatable>(), "i32[&] should be ISelfEquatable");
#line 655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	static_assert(Builtin::TypeIs<System::Span<Builtin::i32>, IEquatable<System::Span<Builtin::i32>>>(), "i32[&] should be IEquatable<i32[&]>");
#line 657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	static_assert(Builtin::usize(sizeof(System::MutableSpan<Builtin::i32>)) == Builtin::usize(sizeof(Builtin::usize)) * Builtin::i32(2), "MutableSpan should be 2 pointers wide");
#line 658 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	static_assert(Builtin::TypeIs<System::MutableSpan<Builtin::i32>, ISelfEquatable>(), "i32[&mut] should be ISelfEquatable");
#line 659 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	static_assert(Builtin::TypeIs<System::MutableSpan<Builtin::i32>, IEquatable<System::MutableSpan<Builtin::i32>>>(), "i32[&mut] should be IEquatable<i32[&mut]>");
#ifdef ADV_UNITTEST
	#line 661 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	static bool $Test_74f4eaae11671ff9 = [](){
		#line 662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto arr = Builtin::ToInlineArray<Builtin::i32>({Builtin::i32(Builtin::i32(1)), Builtin::i32(Builtin::i32(2)), Builtin::i32(Builtin::i32(3)), Builtin::i32(Builtin::i32(4)), Builtin::i32(Builtin::i32(5))}); 
		#line 663 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		System::Span<Builtin::i32> sp = ADV_USFCS((Span<Builtin::i32>), UnsafeCreate)(ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(1)), Builtin::u32(3U)); 
		#line 664 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UPCS(Length)(sp.$ref()) == Builtin::i32(3)), "sp.Length==3");
		#line 665 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((!ADV_UPCS(IsEmpty)(sp.$ref())), "notsp.IsEmpty");
		#line 666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(sp.$ref(), Builtin::i32(0)) == Builtin::i32(2)), "sp[0]==2");
		#line 667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(sp.$ref(), Builtin::i32(1)) == Builtin::i32(3)), "sp[1]==3");
		#line 668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(sp.$ref(), Builtin::i32(2)) == Builtin::i32(4)), "sp[2]==4");
		#line 669 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(sp.$ref(), Builtin::UncheckedTag{}, Builtin::i32(3)) == Builtin::i32(5)), "sp[@Unchecked3]==5");
		#line 670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(sp.$ref(), ADV_UFCS(_operator_xor)(Builtin::u32(1U))) == Builtin::i32(4)), "sp[^1u]==4");
		#line 671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(sp.$ref(), ADV_UFCS(_operator_xor)(Builtin::u32(2U))) == Builtin::i32(3)), "sp[^2u]==3");
		#line 672 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		System::Span<Builtin::i32> sp2 = ADV_USFCS((Span<Builtin::i32>), UnsafeCreate)(ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(1)), Builtin::u32(3U)); 
		#line 673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((sp == sp2), "sp==sp2");
		#line 674 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UPCS(Length)(ADV_UFCS(_operator_subscript)(sp.$ref(), System::IndexRange(System::Index::Start, ADV_UFCS(_operator_xor)(Builtin::u32(1U)), false)).$ref()) == Builtin::i32(2)), "sp[..^1u].Length==2");
		#line 675 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UPCS(Length)(ADV_UFCS(_operator_subscript)(sp.$ref(), System::IndexRange(System::Index::Start, ADV_UFCS(_operator_xor)(Builtin::u32(1U)), true)).$ref()) == Builtin::i32(3)), "sp[..=^1u].Length==3");
		#line 676 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		System::MutableSpan<Builtin::i32> spmm = ADV_USFCS((MutableSpan<Builtin::i32>), UnsafeCreate)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(1))), Builtin::u32(3U)); 
		#line 677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		sp = spmm;
		#line 678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(sp.$ref(), Builtin::i32(0)) == Builtin::i32(2)), "sp[0]==2");
		#line 679 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(sp.$ref(), Builtin::i32(1)) == Builtin::i32(3)), "sp[1]==3");
		#line 680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(sp.$ref(), Builtin::i32(2)) == Builtin::i32(4)), "sp[2]==4");
		#line 682 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto arrwide = Builtin::ToInlineArray<Builtin::i32>({Builtin::i32(Builtin::i32(1)), Builtin::i32(Builtin::i32(2)), Builtin::i32(Builtin::i32(3)), Builtin::i32(Builtin::i32(4)), Builtin::i32(Builtin::i32(5)), Builtin::i32(Builtin::i32(6)), Builtin::i32(Builtin::i32(7)), Builtin::i32(Builtin::i32(8)), Builtin::i32(Builtin::i32(9)), Builtin::i32(Builtin::i32(10)), Builtin::i32(Builtin::i32(11)), Builtin::i32(Builtin::i32(12)), Builtin::i32(Builtin::i32(13)), Builtin::i32(Builtin::i32(14)), Builtin::i32(Builtin::i32(15)), Builtin::i32(Builtin::i32(16)), Builtin::i32(Builtin::i32(1)), Builtin::i32(Builtin::i32(2)), Builtin::i32(Builtin::i32(3)), Builtin::i32(Builtin::i32(4)), Builtin::i32(Builtin::i32(5)), Builtin::i32(Builtin::i32(6)), Builtin::i32(Builtin::i32(7)), Builtin::i32(Builtin::i32(8)), Builtin::i32(Builtin::i32(9)), Builtin::i32(Builtin::i32(10)), Builtin::i32(Builtin::i32(11)), Builtin::i32(Builtin::i32(12)), Builtin::i32(Builtin::i32(13)), Builtin::i32(Builtin::i32(14)), Builtin::i32(Builtin::i32(15))}); 
		#line 683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		sp = ADV_UFCS(_operator_subscript)(arrwide.$ref(), System::IndexRange(Builtin::u32(1U), ADV_UFCS(_operator_xor)(Builtin::u32(1U)), false));
		#line 685 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_in)(sp, Builtin::i32(3))), "3insp");
		#line 686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_in)(sp, Builtin::i32(13))), "13insp");
		#line 687 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((!ADV_UFCS(_operator_in)(sp, Builtin::i32(26))), "26notinsp");
		#line 689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		sp = ADV_UFCS(_operator_subscript)(arrwide.$ref(), System::Range<Builtin::Auto<decltype(Builtin::u32(16U))>, false>({}, Builtin::u32(16U)));
		#line 690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto result = ADV_UFCS(BinarySearch)(sp.$ref(), Builtin::i32(10)); 
		#line 691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{
			#line 692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			auto __tmp__valid_691 = Builtin::Cast<false, std::decay_t<decltype(result)>::$self>(result);
			#line 692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			auto __tmp0 = Builtin::Cast<false, Builtin::usize>(result);
			#line 692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if(__tmp0.IsValid())  {
				#line 692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto& result = *__tmp0;
				#line 692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_ASSERT((result == Builtin::i32(9)), "result==9");
			}
			else {
				#line 693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_ASSERT((Builtin::Boolean(false)), "false");
				
			}
		}

		#line 695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		result = ADV_UFCS(BinarySearch)(sp.$ref(), Builtin::i32(20));
		#line 696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		{
			#line 697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			auto __tmp__valid_696 = Builtin::Cast<false, std::decay_t<decltype(result)>::$self>(result);
			#line 697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			auto __tmp0 = Builtin::Cast<false, Builtin::usize>(result);
			#line 697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
			if(__tmp0.IsValid())  {
				#line 697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				const auto& result = *__tmp0;
				#line 697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_ASSERT((Builtin::Boolean(false)), "false");
			}
			else {
				#line 698 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
				ADV_ASSERT((ADV_UPCS(Error)(result.$ref()) == Builtin::u32(16U)), "result.Error==16u");
				
			}
		}

		#line 701 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto arrv = Builtin::ToInlineArray<Builtin::i32>({Builtin::i32(Builtin::i32(1)), Builtin::i32(Builtin::i32(2)), Builtin::i32(Builtin::i32(3)), Builtin::i32(Builtin::i32(4)), Builtin::i32(Builtin::i32(5)), Builtin::i32(Builtin::i32(8)), Builtin::i32(Builtin::i32(9))}); 
		#line 702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(Mismatch)(sp.$ref(), arrv) == Builtin::u32(5U)), "sp.Mismatch(arrv)==5u");
		#line 703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto arrv2 = Builtin::ToInlineArray<Builtin::i32>({Builtin::i32(Builtin::i32(2)), Builtin::i32(Builtin::i32(3)), Builtin::i32(Builtin::i32(4)), Builtin::i32(Builtin::i32(5))}); 
		#line 704 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(Mismatch)(sp.$ref(), arrv2) == Builtin::u32(0U)), "sp.Mismatch(arrv2)==0u");
		#line 705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		auto arrv3 = Builtin::ToInlineArray<Builtin::i32>({Builtin::i32(Builtin::i32(1)), Builtin::i32(Builtin::i32(2)), Builtin::i32(Builtin::i32(3)), Builtin::i32(Builtin::i32(4)), Builtin::i32(Builtin::i32(5)), Builtin::i32(Builtin::i32(6)), Builtin::i32(Builtin::i32(7)), Builtin::i32(Builtin::i32(8)), Builtin::i32(Builtin::i32(9)), Builtin::i32(Builtin::i32(10)), Builtin::i32(Builtin::i32(11)), Builtin::i32(Builtin::i32(12)), Builtin::i32(Builtin::i32(13)), Builtin::i32(Builtin::i32(14)), Builtin::i32(Builtin::i32(15)), Builtin::i32(Builtin::i32(16)), Builtin::i32(Builtin::i32(1)), Builtin::i32(Builtin::i32(2))}); 
		#line 706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(Mismatch)(sp.$ref(), arrv3) == Builtin::u32(16U)), "sp.Mismatch(arrv3)==16u");
		#line 707 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(Mismatch)(sp.$ref(), sp) == nullptr), "sp.Mismatch(sp)==null");
		#line 709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		const System::MutableSpan<Builtin::i32> spm = ADV_USFCS((MutableSpan<Builtin::i32>), UnsafeCreate)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(1))), Builtin::u32(3U)); 
		#line 710 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UPCS(Length)(spm.$ref()) == Builtin::i32(3)), "spm.Length==3");
		#line 711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((!ADV_UPCS(IsEmpty)(spm.$ref())), "notspm.IsEmpty");
		#line 712 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_UFCS(_operator_subscript)(spm.$ref(), Builtin::i32(0)) = Builtin::i32(20);
		#line 713 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(spm.$ref(), Builtin::i32(0)) == Builtin::i32(20)), "spm[0]==20");
		#line 714 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(spm.$ref(), Builtin::i32(1)) == Builtin::i32(3)), "spm[1]==3");
		#line 715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(spm.$ref(), Builtin::i32(2)) == Builtin::i32(4)), "spm[2]==4");
		#line 716 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(spm.$ref(), Builtin::UncheckedTag{}, Builtin::i32(3)) == Builtin::i32(5)), "spm[@Unchecked3]==5");
		#line 717 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(spm.$ref(), ADV_UFCS(_operator_xor)(Builtin::u32(1U))) == Builtin::i32(4)), "spm[^1u]==4");
		#line 718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(spm.$ref(), ADV_UFCS(_operator_xor)(Builtin::u32(2U))) == Builtin::i32(3)), "spm[^2u]==3");
		#line 719 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		System::MutableSpan<Builtin::i32> spm2 = ADV_USFCS((MutableSpan<Builtin::i32>), UnsafeCreate)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(1))), Builtin::u32(3U)); 
		#line 720 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((spm == spm2), "spm==spm2");
		#line 721 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UPCS(Length)(ADV_UFCS(_operator_subscript)(spm.$ref(), System::IndexRange(System::Index::Start, ADV_UFCS(_operator_xor)(Builtin::u32(1U)), false)).$ref()) == Builtin::i32(2)), "spm[..^1u].Length==2");
		#line 722 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UPCS(Length)(ADV_UFCS(_operator_subscript)(spm.$ref(), System::IndexRange(System::Index::Start, ADV_UFCS(_operator_xor)(Builtin::u32(1U)), true)).$ref()) == Builtin::i32(3)), "spm[..=^1u].Length==3");
		#line 724 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((ADV_UFCS(_operator_in)(spm, Builtin::i32(3))), "3inspm");
		#line 725 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
		ADV_ASSERT((!ADV_UFCS(_operator_in)(spm, Builtin::i32(6))), "6notinspm");
		return true;
	}();
	#endif	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Span.ast"
	

}