#include "Delegates.h"

namespace System {
//###############################################################################
//# Global type aliases
//###############################################################################
//###############################################################################
//# Global compile-time constants
//###############################################################################






#ifdef ADV_UNITTEST
	#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Delegates.ast"
	static bool $Test_538141ea548cc5c2 = [](){
		#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Delegates.ast"
		Comparator<Builtin::i32> f = DefaultComparator; 
		#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Delegates.ast"
		EqualityComparer<Builtin::i32> e = DefaultEqualityComparer; 
		#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Delegates.ast"
		ADV_ASSERT((f(Builtin::i32(1), Builtin::i32(2)) == Builtin::i32(-1)), "f(1,2)==-1");
		#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Delegates.ast"
		ADV_ASSERT((e(Builtin::i32(1), Builtin::i32(1))), "e(1,1)");
		return true;
	}();
	#endif	

}