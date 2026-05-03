#include "Int8.h"

namespace System {
//###############################################################################
//# Global type aliases
//###############################################################################
//###############################################################################
//# Type definitions
//###############################################################################

	
	
	
	
	
	
	
	





static_assert(Builtin::usize(sizeof(Builtin::i8)) == Builtin::i32(1), "i8 should be 1 byte");
static_assert(ADV_USPCS(Min, Builtin::i8)() == Builtin::i32(-0x80), "i8.Min should be -0x80");
static_assert(ADV_USPCS(Max, Builtin::i8)() == Builtin::i32(0x7F), "i8.Max should be 0x7F");
static_assert(Builtin::TypeIs<Builtin::i8, IComparable<Builtin::i8>>(), "i8 should implement IComparable<i8>");
#ifdef ADV_UNITTEST
	#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	static bool __Test_298d83b2a01bf150 = [](){
		#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::i8 a = Builtin::i8(5); 
		#line 68 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a + Builtin::i8(10) == Builtin::i8((signed char)15)), u"a+10i8==15");
		#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a + Builtin::u8(10U) == Builtin::i8((signed char)15)), u"a+10u8==15");
		#line 70 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a + Builtin::i16(10) == Builtin::i8((signed char)15)), u"a+10i16==15");
		#line 71 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a + Builtin::u16(10U) == Builtin::i8((signed char)15)), u"a+10u16==15");
		#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a + Builtin::i32(10) == Builtin::i8((signed char)15)), u"a+10i32==15");
		#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a + Builtin::u32(10U) == Builtin::i8((signed char)15)), u"a+10u32==15");
		#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a + Builtin::i64(10LL) == Builtin::i8((signed char)15)), u"a+10i64==15");
		#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a + Builtin::u64(10ULL) == Builtin::i8((signed char)15)), u"a+10u64==15");
		#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a + Builtin::i128(10LL) == Builtin::i8((signed char)15)), u"a+10i128==15");
		#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a + Builtin::u128(10ULL) == Builtin::i8((signed char)15)), u"a+10u128==15");
		#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a - Builtin::i8((signed char)12) == Builtin::i8((signed char)-7)), u"a-12==-7");
		#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a * Builtin::i8((signed char)2) == Builtin::i8((signed char)10)), u"a*2==10");
		#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a / Builtin::i8((signed char)2) == Builtin::i8((signed char)2)), u"a/2==2");
		#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a % Builtin::i8((signed char)2) == Builtin::i8((signed char)1)), u"a%2==1");
		#line 84 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT(((a & Builtin::i8((signed char)1)) == Builtin::i8((signed char)1)), u"(a&1)==1");
		#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT(((a | Builtin::i8((signed char)1)) == Builtin::i8((signed char)5)), u"(a|1)==5");
		#line 86 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT(((a ^ Builtin::i8((signed char)1)) == Builtin::i8((signed char)4)), u"(a^1)==4");
		#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a << Builtin::i8((signed char)1) == Builtin::i8((signed char)10)), u"a<<1==10");
		#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a >> Builtin::i8((signed char)1) == Builtin::i8((signed char)2)), u"a>>1==2");
		#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == Builtin::i8((signed char)5)), u"a==5");
		#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a != Builtin::i8((signed char)6)), u"a!=6");
		#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT(((a <=> Builtin::i8((signed char)6)) < 0), u"a<6");
		#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT(((a <=> Builtin::i8((signed char)5)) <= 0), u"a<=5");
		#line 95 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT(((a <=> Builtin::i8((signed char)4)) > 0), u"a>4");
		#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT(((a <=> Builtin::i8((signed char)5)) >= 0), u"a>=5");
		#line 99 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a = Builtin::i8(5);
		#line 100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a++;
		#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a--;
		#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a += Builtin::i8((signed char)5);
		#line 103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a -= Builtin::i8((signed char)5);
		#line 104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a *= Builtin::i8((signed char)2);
		#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a /= Builtin::i8((signed char)2);
		#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a %= Builtin::i8((signed char)1);
		#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a &= Builtin::i8((signed char)1);
		#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a |= Builtin::i8((signed char)1);
		#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a ^= Builtin::i8((signed char)1);
		#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a <<= Builtin::i8((signed char)1);
		#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a >>= Builtin::i8((signed char)1);
		#line 112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == Builtin::i8((signed char)0)), u"a==0");
		#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a = Builtin::i8(10);
		#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::i8 b = Builtin::i8(5); 
		#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::Nullable<Builtin::i8> c = nullptr; 
		#line 117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::Nullable<Builtin::i8> d = Builtin::i8(5); 
		#line 118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a != b), u"a!=b");
		#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((b != c), u"b!=c");
		#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT(((b <=> c) > 0), u"b>c");
		#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((c != b), u"c!=b");
		#line 122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((c == nullptr), u"c==null");
		#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((d != nullptr), u"d!=null");
		#line 124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT(((c <=> d) < 0), u"c<d");
		#line 125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((b == d), u"b==d");
		#line 126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::Nullable<Builtin::ObjectRef> o = c; 
		#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		o = d;
		#line 128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_ne_eq_qst)(b, o)), u"b!=?o");
		#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		IComparable<Builtin::i8> icomp = a; 
		#line 130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT(((icomp <=> b) > 0), u"icomp>b");
		return true;
	}();
	#endif	
} namespace __extensions { using namespace System;
#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	auto _operator_eq_eq_qst(__extension_Int8_22_i8 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool
	{
		#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		{
			#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			auto __tmp0 = Builtin::Cast<false, __extension_Int8_45_i8>(obj);
			#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			if ((__tmp0.IsValid())) {
				#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				const auto& obj = *__tmp0;
				
				#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				return __this == obj;
			}
		}
		#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return false;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	auto _operator_lt_eq_gt_qst(__extension_Int8_45_i8 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32
	{
		#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		{
			#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			auto __tmp0 = Builtin::Cast<false, __extension_Int8_45_i8>(obj);
			#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			if ((__tmp0.IsValid())) {
				#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				const auto& obj = *__tmp0;
				
				#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				return __this <=> obj;
			}
		}
		#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		{
			#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			if ((!Builtin::Is(obj, nullptr))) {
				#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				auto __tmp0 = *obj; const auto& obj = __tmp0;
				
				#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				Builtin::Throw(Builtin::InvalidOperationException{});
			}
		}
		#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::i8((signed char)1);
	}
	
} namespace System{

}