#include "Tuple.h"

namespace System {
//###############################################################################
//# Global type aliases
//###############################################################################

#ifdef ADV_UNITTEST
	#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Tuple.ast"
	static bool $Test_c84237d747284489 = [](){
		#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Tuple.ast"
		Builtin::Tuple<Builtin::i32, Builtin::i32, Builtin::Str> t{}; 
		#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Tuple.ast"
		Builtin::Tuple<Builtin::i32, Builtin::i32, Builtin::StaticStr> t1 = Builtin::MakeTuple(Builtin::i32(12), Builtin::i32(34), Builtin::Str{"Hello"}); 
		#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Tuple.ast"
		auto t2 = Builtin::MakeTuple(Builtin::i32(12), Builtin::i32(34), Builtin::StaticStr{Builtin::Str{"Hello"}}); 
		#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Tuple.ast"
		t2 = Builtin::MakeTuple(Builtin::i32(13), Builtin::i32(35), Builtin::StaticStr{Builtin::Str{"Bye bye"}});
		#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Tuple.ast"
		ADV_ASSERT(((t1 <=> t2) < 0), "t1<t2");
		#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Tuple.ast"
		ADV_ASSERT(((t2 <=> t1) > 0), "t2>t1");
		#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Tuple.ast"
		ADV_ASSERT((t2 == t2), "t2==t2");
		#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Tuple.ast"
		ADV_ASSERT((t1 != t2), "t1!=t2");
		#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Tuple.ast"
		const auto& [i1, i2, s] = t2;
		#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Tuple.ast"
		const auto& [i10, i20, s1] = Builtin::MakeTuple(Builtin::i32(12), Builtin::i32(34), Builtin::StaticStr{Builtin::Str{"Hello"}});
		#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Tuple.ast"
		ADV_ASSERT((i10 == Builtin::i32(12)), "i10==12");
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Tuple.ast"
		ADV_ASSERT((i20 == Builtin::i32(34)), "i20==34");
		#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Tuple.ast"
		ADV_ASSERT((s1 == Builtin::Str{"Hello"}), "s1==\"Hello\"");
		#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Tuple.ast"
		ADV_ASSERT((get<0>(t2) == Builtin::i32(13)), "t2.0==13");
		#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Tuple.ast"
		ADV_ASSERT((get<1>(t2) == Builtin::i32(35)), "t2.1==35");
		#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Tuple.ast"
		ADV_ASSERT((get<2>(t2) == Builtin::Str{"Bye bye"}), "t2.2==\"Bye bye\"");
		#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Tuple.ast"
		const auto t3 = t1 + t2; 
		#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Tuple.ast"
		ADV_ASSERT((get<0>(t3) == Builtin::i32(12)), "t3.0==12");
		#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Tuple.ast"
		ADV_ASSERT((get<1>(t3) == Builtin::i32(34)), "t3.1==34");
		#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Tuple.ast"
		ADV_ASSERT((get<2>(t3) == Builtin::Str{"Hello"}), "t3.2==\"Hello\"");
		#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Tuple.ast"
		ADV_ASSERT((get<3>(t3) == Builtin::i32(13)), "t3.3==13");
		#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Tuple.ast"
		ADV_ASSERT((get<4>(t3) == Builtin::i32(35)), "t3.4==35");
		#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Tuple.ast"
		ADV_ASSERT((get<5>(t3) == Builtin::Str{"Bye bye"}), "t3.5==\"Bye bye\"");
		#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Tuple.ast"
		auto ia1 = Builtin::i32(38); 
		#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Tuple.ast"
		auto ia2 = Builtin::i32(39); 
		#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Tuple.ast"
		auto sa1 = Builtin::Str{"test"}; 
		#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Tuple.ast"
		Builtin::Tie(ia1, ia2, sa1) = Builtin::MakeTuple(Builtin::i32(12), Builtin::i32(34), Builtin::Str{"Hello"});
		#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Tuple.ast"
		ADV_ASSERT((ia1 == Builtin::i32(12)), "ia1==12");
		#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Tuple.ast"
		ADV_ASSERT((ia2 == Builtin::i32(34)), "ia2==34");
		#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Tuple.ast"
		ADV_ASSERT((sa1 == Builtin::Str{"Hello"}), "sa1==\"Hello\"");
		#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Tuple.ast"
		Builtin::Tie(ia1, std::ignore, sa1) = Builtin::MakeTuple(Builtin::i32(1234), Builtin::i32(3456), Builtin::Str{"Hello world"});
		#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Tuple.ast"
		ADV_ASSERT((ia1 == Builtin::i32(1234)), "ia1==1234");
		#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Tuple.ast"
		ADV_ASSERT((ia2 == Builtin::i32(34)), "ia2==34");
		#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Tuple.ast"
		ADV_ASSERT((sa1 == Builtin::Str{"Hello world"}), "sa1==\"Hello world\"");
		return true;
	}();
	#endif	

}