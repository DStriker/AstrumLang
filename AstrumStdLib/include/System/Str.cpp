#include "Str.h"

namespace System {
//###############################################################################
//# Type definitions
//###############################################################################
//###############################################################################
//# Global compile-time constants
//###############################################################################
inline constexpr Builtin::Str __strconst_0x22a15b89cd0_0 = "Begin ";
inline constexpr Builtin::Str __strconst_0x22a15b89cd0_1 = " Middle ";
inline constexpr Builtin::Str __strconst_0x22a15b89cd0_2 = " End";
#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
inline constexpr Builtin::Str cs = Builtin::Str{"Hello, моя Лерка ❤😆"};
#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
inline constexpr auto test1 = Builtin::Str{"PART 1"};
#line 136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
inline constexpr auto test2 = Builtin::Str{"PART 2"};
#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
inline constexpr auto __global_buffer_0000022A16461600 = Builtin::CompileTimeStringConcat<__strconst_0x22a16461600_0, test1, __strconst_0x22a16461600_1, test2, __strconst_0x22a16461600_2>(); inline constexpr auto test3 = Builtin::Str(__global_buffer_0000022A16461600.data(), __global_buffer_0000022A16461600.size() - 1);
#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
inline constexpr Builtin::InlineArray<3, Builtin::Str, true> arr = Builtin::ToInlineArrayStr({Builtin::Str(Builtin::Str{"Hello"}), Builtin::Str(Builtin::Str{"world"}), Builtin::Str(Builtin::Str{"!"})});

	
	
#line 128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	static_assert(Builtin::usize(sizeof(Builtin::Str)) == Builtin::usize(sizeof(Builtin::usize)) * Builtin::i32(2), "str should be 2 pointers wide");
#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	static_assert(Builtin::TypeIs<Builtin::Str, ISelfEquatable>(), "str should be ISelfEquatable");
#line 130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	static_assert(Builtin::TypeIs<Builtin::Str, IEquatable<Builtin::Str>>(), "str should be IEquatable<str>");
#line 131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	static_assert(Builtin::TypeIs<Builtin::Str, ISelfComparable>(), "str should be ISelfComparable");
#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	static_assert(Builtin::TypeIs<Builtin::Str, IComparable<Builtin::Str>>(), "str should be IComparable<str>");




#line 138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	static_assert(test3 == Builtin::Str{"Begin PART 1 Middle PART 2 End"}, "str concatenation failed");

#line 140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	static_assert(ADV_UFCS_NONLOCAL(_operator_subscript)(arr.__ref(), Builtin::i32(0)) == Builtin::Str{"Hello"}, "str array indexing failed");
#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	static_assert(ADV_UPCS_NONLOCAL(Length)(arr.__ref()) == Builtin::i32(3), "str array length failed");
#ifdef ADV_UNITTEST
	#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
	static bool __Test_a1094d5666ec23f6 = [](){
		#line 144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		Builtin::Str s = Builtin::Str{"Hello, world!"}; 
		#line 145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((s == Builtin::Str{"Hello, world!"}), "s==\"Hello, world!\"");
		#line 146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT(((s <=> Builtin::Str{"Help"}) < 0), "s<\"Help\"");
		#line 147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(ByteLength)(s.__ref()) == Builtin::i32(13)), "s.ByteLength==13");
		#line 148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(ByteLength)(cs.__ref()) == Builtin::i32(32)), "cs.ByteLength==32");
		#line 149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(CharCount)(cs.__ref()) == Builtin::i32(19)), "cs.CharCount==19");
		#line 150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(ByteLength)(Builtin::Str{"My dog is wolf!"}.__ref()) == Builtin::i32(15)), "\"My dog is wolf!\".ByteLength==15");
		#line 151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		constexpr auto __local_buffer_0000022A15B89CD0 = Builtin::CompileTimeStringConcat<__strconst_0x22a15b89cd0_0, test1, __strconst_0x22a15b89cd0_1, test2, __strconst_0x22a15b89cd0_2>(); constexpr auto s3 = Builtin::Str(__local_buffer_0000022A15B89CD0.data(), __local_buffer_0000022A15B89CD0.size() - 1);
		#line 152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UPCS(ByteLength)(s3.__ref()) == Builtin::i32(30)), "s3.ByteLength==30");
		#line 153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(s.__ref(), System::IndexRange(Builtin::u32(1U), ADV_UFCS(_operator_xor)(Builtin::u32(1U)), false)) == Builtin::Str{"ello, world"}), "s[1u..^1u]==\"ello, world\"");
		#line 154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(Substring)(Builtin::Str{"Help"}.__ref(), Builtin::u32(2U)) == Builtin::Str{"lp"}), "\"Help\".Substring(2u)==\"lp\"");
		#line 155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((ADV_UFCS(Substring)(s.__ref(), Builtin::u32(1U), Builtin::u32(11U)) == Builtin::Str{"ello, world"}), "s.Substring(1u,11u)==\"ello, world\"");
		#line 157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		const auto switched = [&]() 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
		{
			#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			auto __tmp__valid_157 = Builtin::Cast<false, std::decay_t<decltype(s)>::__self>(s);
			#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
			if(__tmp__valid_157.IsValid() && Builtin::Is(*__tmp__valid_157, Builtin::Str{"Help"})) {
				#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				const auto& s = *__tmp__valid_157;
				return Builtin::Str{"help"};
			}
			else {
				#line 159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
				if(__tmp__valid_157.IsValid() && Builtin::Is(*__tmp__valid_157, Builtin::Str{"Hello, world!"})) {
					#line 159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
					const auto& s = *__tmp__valid_157;
					return Builtin::Str{"hello"};
				}
				else {
					return Builtin::Str{"unknown"};
					
				}
			}
		}
ADV_WARNING_POP
		(); 
		#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Str.ast"
		ADV_ASSERT((switched == Builtin::Str{"hello"}), "switched==\"hello\"");
		return true;
	}();
	#endif	

}