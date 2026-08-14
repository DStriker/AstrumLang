#include "System/Span.h"
using namespace System;
#include "Simd.h"

namespace System::Runtime::Intrinsics {
class SumTest;
//###############################################################################
//# Type definitions
//###############################################################################
#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
	struct SumTest : public Builtin::StaticClass {
		public: using __self = SumTest;
		private: SumTest() = default;
		#line 84 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
		public: template<class Arch> static auto Invoke(System::Span<Builtin::i32> ints)  -> const Builtin::i32;
		
	};
	
	
	
	
	
	#line 84 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
	template<class Arch> auto SumTest::Invoke(System::Span<Builtin::i32> ints)  -> const Builtin::i32
	{
		#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
		using TVector = SimdVector<Builtin::i32, Arch>;
		#line 86 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
		constexpr Builtin::Auto<decltype(TVector::Length)> vecSize = TVector::Length;
		#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Length)(ints.__ref()))> count = ADV_UPCS(Length)(ints.__ref()); 
		#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_bsl)(count, vecSize) * vecSize)> vecLimit = ADV_UFCS(_operator_bsl)(count, vecSize) * vecSize; 
		#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
		TVector accumulator{}; 
		#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
		for (Builtin::Auto<decltype(Builtin::u32(0U))> i = Builtin::u32(0U); i != vecLimit; i += vecSize) 
		{
			#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
			accumulator += TVector::LoadUnsafe(ADV_UFCS(_operator_subscript)(ints.__ref(), Builtin::UncheckedTag{}, i));
		}
		#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
		using FVector = SimdVector<Builtin::f32, Arch>;
		#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
		Builtin::Auto<decltype(FVector::Create(Builtin::f32(0.75f)))> fv = FVector::Create(Builtin::f32(0.75f)); 
		#line 95 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
		Builtin::Auto<decltype(ADV_UPCS(Sin)(fv.__ref()))> sin = ADV_UPCS(Sin)(fv.__ref()); 
		#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
		Builtin::Auto<decltype(ADV_UPCS(Sum)(accumulator.__ref()))> sum = ADV_UPCS(Sum)(accumulator.__ref()); 
		#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
		{ auto __for_init_97 = System::Range<Builtin::Auto<decltype(count)>, false>(vecLimit, count); auto __for_iter_97 = ADV_UFCS(Iterate)(__for_init_97.__ref()); while(__for_iter_97.__ref().MoveNext()) {
		auto&& i = __for_iter_97.__ref().GetCurrent(); {
			#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
			sum += ADV_UFCS(_operator_subscript)(ints.__ref(), Builtin::UncheckedTag{}, i);
		}}}
		#line 100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
		print(Arch::Name);
		#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
		return sum;
	}

#ifdef ADV_UNITTEST
	#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
	static bool __Test_e9d988779427d456 = [](){
		#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
		const auto arr = Builtin::ToInlineArray<Builtin::i32>({Builtin::i32(Builtin::i32(1)), Builtin::i32(Builtin::i32(2)), Builtin::i32(Builtin::i32(3)), Builtin::i32(Builtin::i32(4)), Builtin::i32(Builtin::i32(5)), Builtin::i32(Builtin::i32(6)), Builtin::i32(Builtin::i32(7)), Builtin::i32(Builtin::i32(8)), Builtin::i32(Builtin::i32(9)), Builtin::i32(Builtin::i32(10)), Builtin::i32(Builtin::i32(11)), Builtin::i32(Builtin::i32(12)), Builtin::i32(Builtin::i32(13)), Builtin::i32(Builtin::i32(14)), Builtin::i32(Builtin::i32(15)), Builtin::i32(Builtin::i32(16)), Builtin::i32(Builtin::i32(17)), Builtin::i32(Builtin::i32(18)), Builtin::i32(Builtin::i32(19)), Builtin::i32(Builtin::i32(20)), Builtin::i32(Builtin::i32(1)), Builtin::i32(Builtin::i32(2)), Builtin::i32(Builtin::i32(3)), Builtin::i32(Builtin::i32(4)), Builtin::i32(Builtin::i32(5)), Builtin::i32(Builtin::i32(6)), Builtin::i32(Builtin::i32(7)), Builtin::i32(Builtin::i32(8)), Builtin::i32(Builtin::i32(9)), Builtin::i32(Builtin::i32(10)), Builtin::i32(Builtin::i32(11)), Builtin::i32(Builtin::i32(12)), Builtin::i32(Builtin::i32(13)), Builtin::i32(Builtin::i32(14)), Builtin::i32(Builtin::i32(15)), Builtin::i32(Builtin::i32(16)), Builtin::i32(Builtin::i32(17)), Builtin::i32(Builtin::i32(18)), Builtin::i32(Builtin::i32(19)), Builtin::i32(Builtin::i32(20))}); 
		#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
		const auto sum = ADV_USFCS_TEMPLATE((Simd), RuntimeDispatch<SumTest, Neon64, Neon, Avx512F, Avx2, Sse42, Sse2>)(arr); 
		#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
		ADV_ASSERT((sum == Builtin::i32(420)), "sum==420");
		return true;
	}();
	#endif	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\Simd.ast"
	

}