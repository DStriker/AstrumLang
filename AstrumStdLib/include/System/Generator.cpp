#include "Range.h"
#include "Generator.h"

namespace System {
//###############################################################################
//# Global type aliases
//###############################################################################
//###############################################################################
//# Free function declarations
//###############################################################################
#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Generator.ast"
	auto TestCoro(Builtin::i32 bound)  -> const Generator<Builtin::i32>;

#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Generator.ast"
	auto TestCoro(Builtin::i32 bound)  -> const Generator<Builtin::i32>
	{
		#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Generator.ast"
		{ auto $for_init_9 = System::Range<Builtin::Auto<decltype(bound)>, false>(Builtin::i32(0), bound); auto $for_iter_9 = ADV_UFCS(Iterate)($for_init_9.$ref()); while($for_iter_9.$ref().MoveNext()) {
		auto&& i = $for_iter_9.$ref().GetCurrent(); {
			#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Generator.ast"
			co_yield i;
		}}}
	}

#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Generator.ast"
	static_assert(Builtin::TypeIs<Generator<Builtin::i32>, IAbstractSequence>(), "Generator should be ISequence");
#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Generator.ast"
	static_assert(Builtin::TypeIs<Generator<Builtin::i32>, ISequence<Builtin::i32>>(), "Generator should be ISequence");
#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Generator.ast"
	static_assert(Builtin::TypeIs<typename Generator<i32>::Iterator, IAbstractIterator>(), "Generator iterator should be IIterator");
#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Generator.ast"
	static_assert(Builtin::TypeIs<typename Generator<i32>::Iterator, IIterator<Builtin::i32>>(), "Generator iterator should be IIterator");
#ifdef ADV_UNITTEST
	#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Generator.ast"
	static bool $Test_4d2a43d33cebeea0 = [](){
		return true;
	}();
	#endif	

}