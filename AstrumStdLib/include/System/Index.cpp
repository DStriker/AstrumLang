#include "Index.h"

namespace System {
//###############################################################################
//# Type definitions
//###############################################################################
#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
Index::__Property_Start<> Index::Start;
#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
Index::__Property_End<> Index::End;

	
	
	
	
	
	
	
	
	
	
	
	




static_assert(Builtin::usize(sizeof (Index)) == Builtin::usize(sizeof(Builtin::isize)), "Index should be same size as isize");
static_assert(ADV_UPCS_NONLOCAL(Value)(ADV_USPCS(Start, Index)().__ref()) == Builtin::u32(0U), "Index.Start.Value should be equal to 0u");
static_assert(ADV_USPCS(End, Index)() == ADV_USFCS_NONLOCAL((Index), FromEnd)(Builtin::u32(0U)), "Index.End should be equal to Index.FromEnd(0u)");
static_assert(ADV_USPCS(End, Index)() == ADV_UFCS_NONLOCAL(_operator_xor)(Builtin::u32(0U)), "Index.End should be equal to ^0u");
#ifdef ADV_UNITTEST
	#line 122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	static bool __Test_966aaa0d13140bcb = [](){
		#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		Index i = Builtin::u32(5U); 
		#line 124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		ADV_ASSERT((i == Builtin::u32(5U)), u"i==5u");
		#line 125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		ADV_ASSERT((i == ADV_USFCS((Index), FromStart)(Builtin::u32(5U))), u"i==Index.FromStart(5u)");
		#line 126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		ADV_ASSERT((i != ADV_USPCS(Start, Index)()), u"i!=Index.Start");
		#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		ADV_ASSERT((ADV_UPCS(Value)(i.__ref()) == Builtin::u32(5U)), u"i.Value==5u");
		#line 128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		ADV_ASSERT((ADV_UPCS(IsFromEnd)(i.__ref()) == Builtin::Boolean(false)), u"i.IsFromEnd==false");
		#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(i) == Builtin::u32(5U)), u"#i==5u");
		#line 131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		i = ADV_UFCS(_operator_xor)(Builtin::u32(5U));
		#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		ADV_ASSERT((i == ADV_UFCS(_operator_xor)(Builtin::u32(5U))), u"i==^5u");
		#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		ADV_ASSERT((i == ADV_USFCS((Index), FromEnd)(Builtin::u32(5U))), u"i==Index.FromEnd(5u)");
		#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		ADV_ASSERT((i != ADV_USPCS(End, Index)()), u"i!=Index.End");
		#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		ADV_ASSERT((ADV_UPCS(Value)(i.__ref()) == Builtin::u32(5U)), u"i.Value==5u");
		#line 136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		ADV_ASSERT((ADV_UPCS(IsFromEnd)(i.__ref()) == Builtin::Boolean(true)), u"i.IsFromEnd==true");
		#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(i) == ADV_UFCS(_operator_not)(Builtin::usize(5U))), u"#i==~5uz");
		#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		ADV_ASSERT((ADV_USPCS(End, Index)() == ADV_UFCS(_operator_xor)(Builtin::u32(0U))), u"Index.End==^0u");
		return true;
	}();
	#endif	
} namespace __extensions { using namespace System;
#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	auto _operator_eq_eq_mul(__extension_Index_77_Index const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool
	{
		#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		{
			#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
			auto __tmp0 = Builtin::Cast<false, __extension_Index_77_Index>(obj);
			#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
			if ((__tmp0.IsValid())) {
				#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
				const auto& obj = *__tmp0;
				
				#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
				return __this == obj;
			}
		}
		#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		return Builtin::Boolean(false);
	}
	
} namespace System{

}