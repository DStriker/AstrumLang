#include "Result.h"
#include "UInt64.h"

namespace System {
//###############################################################################
//# Type definitions
//###############################################################################

	
	
	
	
#ifdef ADV_UNITTEST
	#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
	static bool $Test_692eeedfe6774ef2 = [](){
		#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		using TResult = Result<Builtin::usize, Builtin::usize>;
		#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		TResult r = Builtin::usize(12345U); 
		#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		ADV_ASSERT((r == Builtin::usize(12345U)), "r==12345uz");
		#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		ADV_ASSERT((ADV_UPCS(Value)(r.$ref()) == Builtin::i32(12345)), "r.Value==12345");
		#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		ADV_ASSERT((ADV_UPCS(HasValue)(r.$ref())), "r.HasValue");
		#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		if (const auto res = r) {
			{
				#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
				auto __tmp0 = *res; const auto& res = __tmp0;
				
				#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
				ADV_ASSERT((res == Builtin::i32(12345)), "res==12345");
			}
		}
		#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		ADV_ASSERT((r.AndThen([&](const auto& value) FORCE_INLINE_LAMBDA_CLANG FORCE_INLINE_LAMBDA { ADV_EXPRESSION_BODY(ADV_UPCS(NextPow2)(value.$ref())); }) == Builtin::u32(16384U)), "r?.NextPow2==16384u");
		#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		r = TResult::Err(Builtin::u32(456U));
		#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		ADV_ASSERT((ADV_UPCS(Error)(r.$ref()) == Builtin::u32(456U)), "r.Error==456u");
		#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		ADV_ASSERT((!ADV_UPCS(HasValue)(r.$ref())), "notr.HasValue");
		#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		ADV_ASSERT((r.AndThen([&](const auto& value) FORCE_INLINE_LAMBDA_CLANG FORCE_INLINE_LAMBDA { ADV_EXPRESSION_BODY(ADV_UPCS(NextPow2)(value.$ref())); }) == nullptr), "r?.NextPow2==null");
		#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		Builtin::usize u = r.ValueOr([&]() FORCE_INLINE_LAMBDA_CLANG FORCE_INLINE_LAMBDA { return Builtin::usize(346U); }); 
		#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		ADV_ASSERT((u == Builtin::u32(346U)), "u==346u");
		return true;
	}();
	#endif	

}