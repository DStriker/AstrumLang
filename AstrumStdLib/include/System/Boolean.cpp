#include "Boolean.h"

namespace System {
//###############################################################################
//# Global type aliases
//###############################################################################
//###############################################################################
//# Type definitions
//###############################################################################

	
	
	
	
	
	



static_assert(Builtin::usize(sizeof (Boolean)) == Builtin::i32(1), "bool should be 1 byte");
static_assert(Builtin::TypeIs<Boolean, IComparable<Boolean>>(), "bool should implement IComparable<bool>");
static_assert(Builtin::TypeIs<Boolean, IEquatable<Boolean>>(), "bool should implement IEquatable<bool>");
static_assert(Builtin::TypeIs<Boolean, ISelfComparable>(), "bool should implement ISelfComparable");
static_assert(Builtin::TypeIs<Boolean, ISelfEquatable>(), "bool should implement ISelfEquatable");
#ifdef ADV_UNITTEST
	#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
	static bool __Test_8ad5e102028f9d27 = [](){
		#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(Builtin::Boolean(true).__ref()) == Builtin::i32(1)), u"true.HashCode==1");
		#line 84 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(Builtin::Boolean(false).__ref()) == Builtin::i32(0)), u"false.HashCode==0");
		#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
		Builtin::Nullable<Builtin::ObjectRef> o = Builtin::Boolean(true); 
		return true;
	}();
	#endif	
} namespace __extensions { using namespace System;
#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
	auto _operator_eq_eq_mul(__extension_Boolean_10_Boolean const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool
	{
		#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
		{
			#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
			auto __tmp0 = Builtin::Cast<false, __extension_Boolean_53_Boolean>(obj);
			#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
			if ((__tmp0.IsValid())) {
				#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
				const auto& obj = *__tmp0;
				
				#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
				return __this == obj;
			}
		}
		#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
		return Builtin::Boolean(false);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
	auto _operator_lt_eq_gt_mul(__extension_Boolean_38_Boolean const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32
	{
		#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
		{
			#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
			auto __tmp0 = Builtin::Cast<false, __extension_Boolean_53_Boolean>(obj);
			#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
			if ((__tmp0.IsValid())) {
				#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
				const auto& obj = *__tmp0;
				
				#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
				if (__this == obj) {
					#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
					return Builtin::i32(0);
				}
				#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
				if (obj) {
					#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
					return Builtin::i32(-1);
				}
			}
		}
		#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
		{
			#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
			if ((!Builtin::Is(obj, nullptr))) {
				#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
				auto __tmp0 = *obj; const auto& obj = __tmp0;
				
				#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
				Builtin::Throw(Builtin::InvalidOperationException{});
			}
		}
		#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Boolean.ast"
		return Builtin::i32(1);
	}
	
} namespace System{

}