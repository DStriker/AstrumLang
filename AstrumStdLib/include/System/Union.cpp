#include "Union.h"

namespace System {
//###############################################################################
//# Type definitions
//###############################################################################

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	








#ifdef ADV_UNITTEST
	#line 84 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
	static bool $Test_650d9979c836f282 = [](){
		#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		System::Union2<Builtin::i32, Builtin::StaticStr> u = Builtin::i32(12); 
		#line 86 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		ADV_ASSERT((u == Builtin::i32(12)), "u==12");
		#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		System::Union3<Builtin::i32, Builtin::f32, Builtin::StaticStr> u2{}; 
		#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		u2 = Builtin::i32(12);
		#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		ADV_ASSERT((u2 == Builtin::i32(12)), "u2==12");
		#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		u2 = Builtin::f32(12.0f);
		#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		ADV_ASSERT((u2 == Builtin::f32(12.0f)), "u2==12.0f");
		#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		u2 = Builtin::StaticStr{"hello"};
		#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		ADV_ASSERT((u2 != Builtin::i32(12)), "u2!=12");
		#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Union.ast"
		ADV_ASSERT((u2 == Builtin::StaticStr{Builtin::StaticStr{"hello"}}), "u2==Builtin.StaticStr(\"hello\")");
		return true;
	}();
	#endif	

}