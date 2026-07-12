#include "Str.h"

namespace System {
//###############################################################################
//# Type definitions
//###############################################################################
//###############################################################################
//# Free function declarations
//###############################################################################

	
	
	
	

#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	auto r(Builtin::MutableRef<std::remove_cvref_t<Builtin::i32>> __a__, Builtin::i32 b)  -> Builtin::i32&
	{
		Builtin::i32& a = __a__;
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		Builtin::Auto<decltype(Builtin::i32(5))> c = Builtin::i32(5); 
		#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		b = c; ADV_CHECK_REF_STRUCT_ASSIGNMENT(b);
		#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return Builtin::MutableRef<std::remove_cvref_t<decltype(a)>>(a); ADV_CHECK_REF_STRUCT_PARAM_RETURN(a, "&i32", Builtin::Ref<Builtin::i32>);
	}

#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	auto f()  -> const Builtin::i32
	{
		#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		Builtin::Auto<decltype(Builtin::i32(5))> i = Builtin::i32(5); 
		#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		Builtin::Auto<decltype(Builtin::i32(10))> k = Builtin::i32(10); 
		#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		Builtin::MutableRef<Builtin::i32> ri = Builtin::MutableRef<std::remove_cvref_t<decltype(i)>>(i); 
		#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		Builtin::Ref<Builtin::i32> rj = i; 
		#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		{
			#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			Builtin::Auto<decltype(Builtin::i32(6))> j = Builtin::i32(6); 
			#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			k = Builtin::i32(5);
			#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			k = j; ADV_CHECK_REF_STRUCT_ASSIGNMENT(k);
			#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			rj = Builtin::MutableRef<std::remove_cvref_t<decltype(k)>>(k);
			#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			ri = Builtin::i32(5);
			#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			print(rj);
		}
		#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		return Builtin::i32(6);
	}

#ifdef ADV_UNITTEST
	#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	static bool __Test_a1094d5666ec23f6 = [](){
		#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		auto i = Builtin::i32(5); 
		return true;
	}();
	#endif	

}