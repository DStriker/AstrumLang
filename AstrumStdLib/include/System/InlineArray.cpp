#include "InlineArray.h"

namespace System {
//###############################################################################
//# Global type aliases
//###############################################################################
//###############################################################################
//# Type definitions
//###############################################################################

	
	


#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	static_assert(Builtin::usize(sizeof(Builtin::InlineArray<Builtin::i32(5), Builtin::i32>)) == Builtin::i32(20), "Fixed array should be sizeof(T) * S bytes");
#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	static_assert(Builtin::TypeIs<Builtin::InlineArray<Builtin::i32(5), Builtin::i32>, ISelfEquatable>(), "Fixed array should implement ISelfEquatable");
#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	static_assert(Builtin::TypeIs<Builtin::InlineArray<Builtin::i32(5), Builtin::i32>, IAbstractSequence>(), "Fixed array should implement IAbstractSequence");
#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	static_assert(Builtin::TypeIs<Builtin::InlineArray<Builtin::i32(5), Builtin::i32>, ISequence<Builtin::i32>>(), "Fixed array should implement ISequence<T>");
#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	static_assert(Builtin::TypeIs<typename InlineArray<i32,5>::template Iterator<Builtin::Boolean(true)>, IAbstractIterator>(), "Fixed array iterator should implement IAbstractIterator");
#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	static_assert(Builtin::TypeIs<typename InlineArray<i32,5>::template Iterator<Builtin::Boolean(true)>, IIterator<Builtin::i32>>(), "Fixed array iterator should implement IIterator<T>");
#line 95 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	static_assert(Builtin::TypeIs<typename InlineArray<i32,5>::template Iterator<Builtin::Boolean(false)>, IAbstractIterator>(), "Fixed array iterator should implement IAbstractIterator");
#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	static_assert(Builtin::TypeIs<typename InlineArray<i32,5>::template Iterator<Builtin::Boolean(false)>, IIterator<Builtin::i32>>(), "Fixed array iterator should implement IIterator<T>");
#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	static_assert(Builtin::TypeIs<typename InlineArray<i32,5>::template Iterator<Builtin::Boolean(false)>, IAbstractRefIterator>(), "Fixed array iterator should implement IAbstractRefIterator");
#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	static_assert(Builtin::TypeIs<typename InlineArray<i32,5>::template Iterator<Builtin::Boolean(false)>, IRefIterator<Builtin::i32>>(), "Fixed array iterator should implement IRefIterator<T>");
#ifdef ADV_UNITTEST
	#line 100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
	static bool $Test_02e41e24b701f471 = [](){
		#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		auto arr = Builtin::ToInlineArray<Builtin::i32>({Builtin::i32(Builtin::i32(1)), Builtin::i32(Builtin::i32(2)), Builtin::i32(Builtin::i32(3)), Builtin::i32(Builtin::i32(4)), Builtin::i32(Builtin::i32(5))}); 
		#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		ADV_ASSERT((ADV_UPCS(Length)(arr.$ref()) == Builtin::i32(5)), "arr.Length==5");
		#line 103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		auto sp = ADV_UFCS(_operator_subscript)(arr.$ref(), System::IndexRange(System::Index::Start, ADV_UFCS(_operator_xor)(Builtin::u32(1U)), false)); 
		#line 104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		ADV_ASSERT((ADV_UPCS(Length)(sp.$ref()) == Builtin::i32(4)), "sp.Length==4");
		#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(sp.$ref(), Builtin::i32(0)) == Builtin::i32(1)), "sp[0]==1");
		#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(sp.$ref(), Builtin::i32(1)) == Builtin::i32(2)), "sp[1]==2");
		#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(sp.$ref(), Builtin::i32(2)) == Builtin::i32(3)), "sp[2]==3");
		#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(sp.$ref(), Builtin::i32(3)) == Builtin::i32(4)), "sp[3]==4");
		#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		sp = Builtin::MutableRef(arr);
		#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		ADV_ASSERT((ADV_UPCS(Length)(sp.$ref()) == Builtin::i32(5)), "sp.Length==5");
		#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		ADV_UFCS(_operator_subscript)(arr.$ref(), ADV_UFCS(_operator_xor)(Builtin::u32(1U))) = Builtin::i32(6);
		#line 112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arr.$ref(), ADV_UFCS(_operator_xor)(Builtin::u32(1U))) == Builtin::i32(6)), "arr[^1u]==6");
		#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(4)) == Builtin::i32(6)), "arr[4]==6");
		#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		const auto arr2 = Builtin::ToInlineArray<Builtin::i32>({Builtin::i32(Builtin::i32(1)), Builtin::i32(Builtin::i32(2)), Builtin::i32(Builtin::i32(3)), Builtin::i32(Builtin::i32(4)), Builtin::i32(Builtin::i32(6))}); 
		#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		ADV_ASSERT((arr == arr2), "arr==arr2");
		#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		System::Span<Builtin::i32> sp2 = ADV_UFCS(AsSpan)(arr2.$ref()); 
		#line 117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		ADV_ASSERT((ADV_UPCS(Length)(sp2.$ref()) == Builtin::i32(5)), "sp2.Length==5");
		#line 118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\InlineArray.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(sp2.$ref(), Builtin::i32(4)) == Builtin::i32(6)), "sp2[4]==6");
		return true;
	}();
	#endif	

}