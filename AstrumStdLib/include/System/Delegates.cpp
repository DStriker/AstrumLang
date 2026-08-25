#include "Delegates.h"

namespace System {
//###############################################################################
//# Global type aliases
//###############################################################################
//###############################################################################
//# Global compile-time constants
//###############################################################################














#ifdef ADV_UNITTEST
	#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Delegates.ast"
	static bool $Test_538149ea548cd35a = [](){
		#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Delegates.ast"
		Comparator<Builtin::i32> f = DefaultComparator; 
		#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Delegates.ast"
		EqualityComparer<Builtin::i32> e = DefaultEqualityComparer; 
		#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Delegates.ast"
		ADV_ASSERT((f(Builtin::i32(1), Builtin::i32(2)) == Builtin::i32(-1)), "f(1,2)==-1");
		#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Delegates.ast"
		ADV_ASSERT((e(Builtin::i32(1), Builtin::i32(1))), "e(1,1)");
		return true;
	}();
	#endif	

}