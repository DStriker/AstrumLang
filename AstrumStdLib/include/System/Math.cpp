#include "Math.h"

namespace System {
//###############################################################################
//# Type definitions
//###############################################################################

	
	#ifdef ADV_UNITTEST
	#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	static bool $Test_f1b1d0c85a5ef097 = [](){
		#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_ASSERT((ADV_USPCS(MaxValue, Builtin::i32)() == Builtin::i32(2147483647)), "i32.MaxValue==2147483647");
		#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_ASSERT((ADV_UFCS(IsMultipleOf)(Builtin::i32(120).$ref(), Builtin::i16(12))), "120.IsMultipleOf(12i16)");
		#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_ASSERT((ADV_UFCS(Max)(Builtin::i32(120).$ref(), Builtin::i32(115)) == Builtin::i32(120)), "120.Max(115)==120");
		#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		auto f = ADV_USFCS((Math), Isqrt8)(Builtin::u8(250U)); 
		#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_ASSERT((f == Builtin::i32(15)), "f==15");
		#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		auto f1 = ADV_USFCS((Math), Isqrt16)(Builtin::u16(50000U)); 
		#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_ASSERT((f1 == Builtin::i32(223)), "f1==223");
		#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		auto f2 = ADV_USFCS((Math), Isqrt32)(Builtin::u32(3000000000U)); 
		#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_ASSERT((f2 == Builtin::i32(54772)), "f2==54772");
		#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		auto f3 = ADV_USFCS((Math), Isqrt64)(Builtin::u64(10000000000000000000ULL)); 
		#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_ASSERT((f3 == Builtin::i64(3162277660LL)), "f3==3_162_277_660");
		#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		auto f4 = ADV_USFCS((Math), Isqrt128)(Builtin::ParseUInt128("100000000000000000000000000000000000")); 
		#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_ASSERT((f4 == Builtin::i64(316227766016837933LL)), "f4==316227766016837933");
		return true;
	}();
	#endif	

}