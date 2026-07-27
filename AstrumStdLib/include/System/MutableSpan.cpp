#include "MutableSpan.h"

namespace System {
//###############################################################################
//# Type definitions
//###############################################################################

	
	
	
	
#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	static_assert(Builtin::usize(sizeof(System::MutableSpan<Builtin::i32>)) == Builtin::usize(sizeof(Builtin::usize)) * Builtin::i32(2), "MutableSpan should be 2 pointers wide");
#line 144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	static_assert(Builtin::TypeIs<System::MutableSpan<Builtin::i32>, ISelfEquatable>(), "i32[&mut] should be ISelfEquatable");
#line 145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	static_assert(Builtin::TypeIs<System::MutableSpan<Builtin::i32>, IEquatable<System::MutableSpan<Builtin::i32>>>(), "i32[&mut] should be IEquatable<i32[&mut]>");
#ifdef ADV_UNITTEST
	#line 147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
	static bool __Test_5fc01431c8f620ed = [](){
		#line 148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		auto arr = Builtin::ToInlineArray<Builtin::i32>({Builtin::i32(Builtin::i32(1)), Builtin::i32(Builtin::i32(2)), Builtin::i32(Builtin::i32(3)), Builtin::i32(Builtin::i32(4)), Builtin::i32(Builtin::i32(5))}); 
		#line 149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		const System::MutableSpan<Builtin::i32> sp = ADV_USFCS((MutableSpan<Builtin::i32>), UnsafeCreate)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(arr.__ref(), Builtin::i32(1))), Builtin::u32(3U)); 
		#line 150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		ADV_ASSERT((ADV_UPCS(Length)(sp.__ref()) == Builtin::i32(3)), "sp.Length==3");
		#line 151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		ADV_ASSERT((!ADV_UPCS(IsEmpty)(sp.__ref())), "notsp.IsEmpty");
		#line 152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		ADV_UFCS(_operator_subscript)(sp.__ref(), Builtin::i32(0)) = Builtin::i32(20);
		#line 153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(sp.__ref(), Builtin::i32(0)) == Builtin::i32(20)), "sp[0]==20");
		#line 154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(sp.__ref(), Builtin::i32(1)) == Builtin::i32(3)), "sp[1]==3");
		#line 155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(sp.__ref(), Builtin::i32(2)) == Builtin::i32(4)), "sp[2]==4");
		#line 156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(sp.__ref(), Builtin::UncheckedTag{}, Builtin::i32(3)) == Builtin::i32(5)), "sp[@Unchecked3]==5");
		#line 157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(sp.__ref(), ADV_UFCS(_operator_xor)(Builtin::u32(1U))) == Builtin::i32(4)), "sp[^1u]==4");
		#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(sp.__ref(), ADV_UFCS(_operator_xor)(Builtin::u32(2U))) == Builtin::i32(3)), "sp[^2u]==3");
		#line 159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		System::MutableSpan<Builtin::i32> sp2 = ADV_USFCS((MutableSpan<Builtin::i32>), UnsafeCreate)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(arr.__ref(), Builtin::i32(1))), Builtin::u32(3U)); 
		#line 160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		ADV_ASSERT((sp == sp2), "sp==sp2");
		#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		ADV_ASSERT((ADV_UPCS(Length)(ADV_UFCS(_operator_subscript)(sp.__ref(), System::IndexRange(System::Index::Start, ADV_UFCS(_operator_xor)(Builtin::u32(1U)), false)).__ref()) == Builtin::i32(2)), "sp[..^1u].Length==2");
		#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\MutableSpan.ast"
		ADV_ASSERT((ADV_UPCS(Length)(ADV_UFCS(_operator_subscript)(sp.__ref(), System::IndexRange(System::Index::Start, ADV_UFCS(_operator_xor)(Builtin::u32(1U)), true)).__ref()) == Builtin::i32(3)), "sp[..=^1u].Length==3");
		return true;
	}();
	#endif	

}