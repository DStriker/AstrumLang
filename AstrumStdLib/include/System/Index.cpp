#include "Index.h"

namespace System {
//###############################################################################
//# Type definitions
//###############################################################################
#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
Index::$Property_Start<> Index::Start;
#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
Index::$Property_End<> Index::End;

	
	
	
	
	
	
	
	
	
	
	
	




#line 117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	static_assert(Builtin::usize(sizeof (Index)) == Builtin::usize(sizeof(Builtin::isize)), "Index should be same size as isize");
#line 118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	static_assert(ADV_UPCS_NONLOCAL(Value)(ADV_USPCS(Start, Index)().$ref()) == Builtin::u32(0U), "Index.Start.Value should be equal to 0u");
#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	static_assert(ADV_USPCS(End, Index)() == ADV_USFCS_NONLOCAL((Index), FromEnd)(Builtin::u32(0U)), "Index.End should be equal to Index.FromEnd(0u)");
#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	static_assert(ADV_USPCS(End, Index)() == ADV_UFCS_NONLOCAL(_operator_xor)(Builtin::u32(0U)), "Index.End should be equal to ^0u");
#ifdef ADV_UNITTEST
	#line 122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	static bool $Test_966aaa0d13140bcb = [](){
		#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		Index i = Builtin::u32(5U); 
		#line 124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		ADV_ASSERT((i == Builtin::u32(5U)), "i==5u");
		#line 125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		ADV_ASSERT((i == ADV_USFCS((Index), FromStart)(Builtin::u32(5U))), "i==Index.FromStart(5u)");
		#line 126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		ADV_ASSERT((i != ADV_USPCS(Start, Index)()), "i!=Index.Start");
		#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		ADV_ASSERT((ADV_UPCS(Value)(i.$ref()) == Builtin::u32(5U)), "i.Value==5u");
		#line 128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		ADV_ASSERT((ADV_UPCS(IsFromEnd)(i.$ref()) == Builtin::Boolean(false)), "i.IsFromEnd==false");
		#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(i) == Builtin::u32(5U)), "#i==5u");
		#line 131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		i = ADV_UFCS(_operator_xor)(Builtin::u32(5U));
		#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		ADV_ASSERT((i == ADV_UFCS(_operator_xor)(Builtin::u32(5U))), "i==^5u");
		#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		ADV_ASSERT((i == ADV_USFCS((Index), FromEnd)(Builtin::u32(5U))), "i==Index.FromEnd(5u)");
		#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		ADV_ASSERT((i != ADV_USPCS(End, Index)()), "i!=Index.End");
		#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		ADV_ASSERT((ADV_UPCS(Value)(i.$ref()) == Builtin::u32(5U)), "i.Value==5u");
		#line 136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		ADV_ASSERT((ADV_UPCS(IsFromEnd)(i.$ref()) == Builtin::Boolean(true)), "i.IsFromEnd==true");
		#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(i) == ADV_UFCS(_operator_not)(Builtin::usize(5U))), "#i==~5uz");
		#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		ADV_ASSERT((ADV_USPCS(End, Index)() == ADV_UFCS(_operator_xor)(Builtin::u32(0U))), "Index.End==^0u");
		return true;
	}();
	#endif	
} namespace $extensions { using namespace System;
#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
	auto _operator_eq_eq_mul($extension_Index_77_Index const& $this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool
	{
		#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		{
			#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
			auto __tmp0 = Builtin::Cast<false, $extension_Index_77_Index>(obj);
			#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
			if ((__tmp0.IsValid())) {
				#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
				const auto& obj = *__tmp0;
				
				#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
				return $this == obj;
			}
		}
		#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Index.ast"
		return Builtin::Boolean(false);
	}
	
} namespace System{

}