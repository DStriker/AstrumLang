#include "Math.h"

namespace System {
//###############################################################################
//# Type definitions
//###############################################################################

	
	#ifdef ADV_UNITTEST
	#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	static bool __Test_f1b1d0c85a5ef097 = [](){
		#line 164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_ASSERT((ADV_USPCS(MaxValue, Builtin::i32)() == Builtin::i32(2147483647)), u"i32.MaxValue==2147483647");
		#line 165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_ASSERT((ADV_UFCS(IsMultipleOf)(Builtin::i32(120).__ref(), Builtin::i16(12))), u"120.IsMultipleOf(12i16)");
		#line 166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_ASSERT((ADV_UFCS(Max)(Builtin::i32(120).__ref(), Builtin::i32(115)) == Builtin::i32(120)), u"120.Max(115)==120");
		#line 168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		auto f = ADV_USFCS((Math), Isqrt8)(Builtin::u8(250U)); 
		#line 169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_ASSERT((f == Builtin::i32(15)), u"f==15");
		#line 170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		auto f1 = ADV_USFCS((Math), Isqrt16)(Builtin::u16(50000U)); 
		#line 171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_ASSERT((f1 == Builtin::i32(223)), u"f1==223");
		#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		auto f2 = ADV_USFCS((Math), Isqrt32)(Builtin::u32(3000000000U)); 
		#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_ASSERT((f2 == Builtin::i32(54772)), u"f2==54772");
		#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		auto f3 = ADV_USFCS((Math), Isqrt64)(Builtin::u64(10000000000000000000ULL)); 
		#line 175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_ASSERT((f3 == Builtin::i64(3162277660LL)), u"f3==3_162_277_660");
		#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		auto f4 = ADV_USFCS((Math), Isqrt128)(Builtin::ParseUInt128("100000000000000000000000000000000000")); 
		#line 177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_ASSERT((f4 == Builtin::i64(316227766016837933LL)), u"f4==316227766016837933");
		return true;
	}();
	#endif	

}