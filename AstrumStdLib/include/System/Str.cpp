#include "Str.h"

namespace System {
//###############################################################################
//# Type definitions
//###############################################################################
//###############################################################################
//# Global compile-time constants
//###############################################################################
inline constexpr Builtin::Str __strconst_0x1d192ccb1a0_0 = "Begin ";
inline constexpr Builtin::Str __strconst_0x1d192ccb1a0_1 = " Middle ";
inline constexpr Builtin::Str __strconst_0x1d192ccb1a0_2 = " End";
#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
inline constexpr auto test1 = Builtin::Str{"PART 1"};
#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
inline constexpr auto test2 = Builtin::Str{"PART 2"};
#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
inline constexpr auto __global_buffer_000001D194BBB530 = Builtin::CompileTimeStringConcat<__strconst_0x1d194bbb530_0, test1, __strconst_0x1d194bbb530_1, test2, __strconst_0x1d194bbb530_2>(); inline constexpr auto test3 = Builtin::Str(__global_buffer_000001D194BBB530.data(), __global_buffer_000001D194BBB530.size() - 1);

	
	
#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	static_assert(Builtin::usize(sizeof(Builtin::Str)) == Builtin::usize(sizeof(Builtin::usize)) * Builtin::i32(2), "str should be 2 pointers wide");
#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	static_assert(Builtin::TypeIs<Builtin::Str, ISelfEquatable>(), "str should be ISelfEquatable");
#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	static_assert(Builtin::TypeIs<Builtin::Str, IEquatable<Builtin::Str>>(), "str should be IEquatable<str>");
#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	static_assert(Builtin::TypeIs<Builtin::Str, ISelfComparable>(), "str should be ISelfComparable");
#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	static_assert(Builtin::TypeIs<Builtin::Str, IComparable<Builtin::Str>>(), "str should be IComparable<str>");



#line 40 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	static_assert(test3 == Builtin::Str{"Begin PART 1 Middle PART 2 End"}, "str concatenation failed");
#ifdef ADV_UNITTEST
	#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	static bool __Test_a1094d5666ec23f6 = [](){
		#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		Builtin::Str s = Builtin::Str{"Hello, world!"}; 
		#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		constexpr Builtin::Str cs = Builtin::Str{"Hello, моя Лерка ❤😆"};
		#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((s == Builtin::Str{"Hello, world!"}), "s==\"Hello, world!\"");
		#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT(((s <=> Builtin::Str{"Help"}) < 0), "s<\"Help\"");
		#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(ByteLength)(s.__ref()) == Builtin::i32(13)), "s.ByteLength==13");
		#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(ByteLength)(cs.__ref()) == Builtin::i32(32)), "cs.ByteLength==32");
		#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(ByteLength)(Builtin::Str{"My dog is wolf!"}.__ref()) == Builtin::i32(15)), "\"My dog is wolf!\".ByteLength==15");
		#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		constexpr auto __local_buffer_000001D192CCB1A0 = Builtin::CompileTimeStringConcat<__strconst_0x1d192ccb1a0_0, test1, __strconst_0x1d192ccb1a0_1, test2, __strconst_0x1d192ccb1a0_2>(); constexpr auto s3 = Builtin::Str(__local_buffer_000001D192CCB1A0.data(), __local_buffer_000001D192CCB1A0.size() - 1);
		#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(ByteLength)(s3.__ref()) == Builtin::i32(30)), "s3.ByteLength==30");
		return true;
	}();
	#endif	

}