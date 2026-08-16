#include "Result.h"

namespace System {
//###############################################################################
//# Type definitions
//###############################################################################

	
	
	
	
#ifdef ADV_UNITTEST
	#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
	static bool $Test_692eeedfe6774ef2 = [](){
		#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		using TResult = Result<Builtin::usize, Builtin::usize>;
		#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		TResult r = Builtin::usize(12345U); 
		#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		ADV_ASSERT((r == Builtin::usize(12345U)), "r==12345uz");
		#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		ADV_ASSERT((ADV_UPCS(Value)(r.$ref()) == Builtin::i32(12345)), "r.Value==12345");
		#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		ADV_ASSERT((ADV_UPCS(HasValue)(r.$ref())), "r.HasValue");
		#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		r = TResult::Err(Builtin::u32(456U));
		#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		ADV_ASSERT((ADV_UPCS(Error)(r.$ref()) == Builtin::u32(456U)), "r.Error==456u");
		#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		ADV_ASSERT((!ADV_UPCS(HasValue)(r.$ref())), "notr.HasValue");
		#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		Builtin::usize u = r.ValueOr([&]() FORCE_INLINE_LAMBDA_CLANG FORCE_INLINE_LAMBDA { return Builtin::usize(346U); }); 
		#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		ADV_ASSERT((u == Builtin::u32(346U)), "u==346u");
		return true;
	}();
	#endif	

}