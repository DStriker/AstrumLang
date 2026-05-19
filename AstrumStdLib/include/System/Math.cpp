#include "Math.h"

namespace System {
//###############################################################################
//# Type definitions
//###############################################################################

	
	#ifdef ADV_UNITTEST
	#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	static bool __Test_f1b1d0c85a5ef097 = [](){
		#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_ASSERT((ADV_USPCS(MaxValue, Builtin::i32)() == Builtin::i32(2147483647)), u"i32.MaxValue==2147483647");
		#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_ASSERT((ADV_UFCS(IsMultipleOf)(Builtin::i32(120).__ref(), Builtin::i16(12))), u"120.IsMultipleOf(12i16)");
		#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_ASSERT((ADV_UFCS(Max)(Builtin::i32(120).__ref(), Builtin::i32(115)) == Builtin::i32(120)), u"120.Max(115)==120");
		return true;
	}();
	#endif	

}