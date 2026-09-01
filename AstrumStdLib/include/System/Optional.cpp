#include "Optional.h"

namespace System {
//###############################################################################
//# Type definitions
//###############################################################################

	
	
	
	#ifdef ADV_UNITTEST
	#line 239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	static bool $Test_02c03ee797ff6781 = [](){
		#line 240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		Builtin::Nullable<Builtin::i32> i1 = Builtin::i32(5); 
		#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		using I32 = Builtin::Nullable<Builtin::i32>;
		#line 242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		Builtin::Nullable<I32> oi1 = Builtin::i32(123); 
		#line 243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		ADV_ASSERT((ADV_UFCS(IsValid)(oi1.$ref())), "oi1.IsValid()");
		#line 244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		ADV_ASSERT((ADV_UFCS(IsValid)((*(oi1)).$ref())), "oi1!.IsValid()");
		#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		ADV_ASSERT(((*(ADV_UFCS(Flatten)(oi1.$ref()))) == Builtin::i32(123)), "oi1.Flatten()!==123");
		#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		Builtin::Nullable<Builtin::ObjectRef> obj = oi1; 
		#line 247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		using OObject = Builtin::Nullable<Builtin::ObjectRef>;
		#line 248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		Builtin::Nullable<OObject> ooi1 = Builtin::i32(12345); 
		#line 249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		ADV_ASSERT((ADV_UFCS(IsValid)(ooi1.$ref())), "ooi1.IsValid()");
		#line 250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		ADV_ASSERT((ADV_UFCS(IsValid)((*(ooi1)).$ref())), "ooi1!.IsValid()");
		return true;
	}();
	#endif	

}