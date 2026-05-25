#include "Float16.h"

namespace System {
//###############################################################################
//# Global type aliases
//###############################################################################
//###############################################################################
//# Type definitions
//###############################################################################
//###############################################################################
//# Free function declarations
//###############################################################################
//###############################################################################
//# Global compile-time constants
//###############################################################################

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	







































static_assert(Builtin::usize(sizeof(Builtin::f16)) == Builtin::u8((unsigned char)2), "f16 should be 2 bytes");
static_assert(ADV_USPCS(Pi, Builtin::f16)() == Builtin::f16(3.14f), "f16.Pi should be 3.14");
static_assert(Builtin::TypeIs<Builtin::f16, IComparable<Builtin::f16>>(), "f16 should implement IComparable<f16>");
static_assert(Builtin::TypeIs<Builtin::f16, IEquatable<Builtin::f16>>(), "f16 should implement IEquatable<f16>");
static_assert(Builtin::TypeIs<Builtin::f16, ISelfComparable>(), "f16 should implement ISelfComparable");
static_assert(Builtin::TypeIs<Builtin::f16, ISelfEquatable>(), "f16 should implement ISelfEquatable");
static_assert(Builtin::TypeIs<Builtin::f16, IAdditionOperators<Builtin::f16, Builtin::f16>>(), "f16 should implement IAdditionOperators<f16, f16>");
static_assert(Builtin::TypeIs<Builtin::f16, ISubtractionOperators<Builtin::f16, Builtin::f16>>(), "f16 should implement ISubtractionOperators<f16, f16>");
static_assert(Builtin::TypeIs<Builtin::f16, IMultiplyOperators<Builtin::f16, Builtin::f16>>(), "f16 should implement IMultiplyOperators<f16, f16>");
static_assert(Builtin::TypeIs<Builtin::f16, IDivisionOperators<Builtin::f16, Builtin::f16>>(), "f16 should implement IDivisionOperators<f16, f64>");
static_assert(Builtin::TypeIs<Builtin::f16, IModulusOperators<Builtin::f16, Builtin::f16>>(), "f16 should implement IModulusOperators<f16, f16>");
static_assert(Builtin::TypeIs<Builtin::f16, IUnaryPlusOperators<Builtin::f16>>(), "f16 should implement IUnaryPlusOperators<f16>");
static_assert(Builtin::TypeIs<Builtin::f16, IUnaryNegationOperators<Builtin::f16>>(), "f16 should implement IUnaryNegationOperators<f16>");
static_assert(Builtin::TypeIs<Builtin::f16, IIncrementOperators<Builtin::f16>>(), "f16 should implement IIncrementOperators<f16>");
static_assert(Builtin::TypeIs<Builtin::f16, IDecrementOperators<Builtin::f16>>(), "f16 should implement IDecrementOperators<f16>");
#ifdef ADV_UNITTEST
	#line 913 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	static bool __Test_c10bcddfc2ca6174 = [](){
		#line 914 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		Builtin::f16 f = Builtin::f16(12.125f); 
		#line 916 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_USPCS(Pi, Builtin::f16)() == Builtin::f16(3.14f)), u"f16.Pi==3.14f16");
		#line 917 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((f != ADV_USPCS(Pi, Builtin::f16)()), u"f!=f16.Pi");
		#line 918 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT(((f <=> Builtin::f16(11.1f)) > 0), u"f>11.1f16");
		#line 919 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT(((f <=> Builtin::f16(134.5f)) < 0), u"f<134.5f16");
		#line 921 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((f + Builtin::f16(1.0f) == Builtin::f16(13.125f)), u"f+1.0f16==13.125f16");
		#line 922 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((f - Builtin::f16(1.0f) == Builtin::f16(11.125f)), u"f-1.0f16==11.125f16");
		#line 923 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((f * Builtin::f16(2.0f) == Builtin::f16(24.25f)), u"f*2.0f16==24.25f16");
		#line 924 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((f / Builtin::f16(2.0f) == Builtin::f16(6.0625f)), u"f/2.0f16==6.0625f16");
		#line 925 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((f % Builtin::f16(2.0f) == Builtin::f16(0.125f)), u"f%2.0f16==0.125f16");
		#line 927 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		f += Builtin::f16(1.0f);
		#line 928 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((f == Builtin::f16(13.125f)), u"f==13.125f16");
		#line 929 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		f -= Builtin::f16(1.0f);
		#line 930 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((f == Builtin::f16(12.125f)), u"f==12.125f16");
		#line 931 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		f *= Builtin::f16(2.0f);
		#line 932 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((f == Builtin::f16(24.25f)), u"f==24.25f16");
		#line 933 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		f /= Builtin::f16(2.0f);
		#line 934 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((f == Builtin::f16(12.125f)), u"f==12.125f16");
		#line 935 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		f %= Builtin::f16(2.0f);
		#line 936 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((f == Builtin::f16(0.125f)), u"f==0.125f16");
		#line 938 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		f = Builtin::f16(12.34f);
		#line 939 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((f++ == Builtin::f16(12.34f)), u"f++==12.34f16");
		#line 940 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((++f == Builtin::f16(14.34f)), u"++f==14.34f16");
		#line 941 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((f-- == Builtin::f16(14.34f)), u"f--==14.34f16");
		#line 942 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((--f == Builtin::f16(12.34f)), u"--f==12.34f16");
		#line 944 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((+f == Builtin::f16(12.34f)), u"+f==12.34f16");
		#line 945 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((-f == Builtin::f16(-12.34f)), u"-f==-12.34f16");
		#line 947 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		Builtin::Nullable<Builtin::f16> n = nullptr; 
		#line 948 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((n == nullptr), u"n==null");
		#line 949 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((f != n), u"f!=n");
		#line 950 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		n = Builtin::f16(3.12f);
		#line 951 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((n != nullptr), u"n!=null");
		#line 952 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((f != n), u"f!=n");
		#line 955 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		Builtin::Nullable<Builtin::ObjectRef> o = f; 
		#line 957 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		IComparable<Builtin::f16> icomp = f; 
		#line 958 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT(((icomp <=> (*(n))) > 0), u"icomp>n!");
		#line 960 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(f.__ref()) == ADV_UPCS(Bits)(f.__ref())), u"f.HashCode==f.Bits");
		#line 961 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(f) == ADV_UPCS(Bits)(f.__ref())), u"#f==f.Bits");
		#line 963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UFCS(ToBoolean)(f.__ref())), u"f.ToBoolean()");
		#line 964 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((!ADV_UFCS(ToBoolean)(Builtin::f16(0.0f).__ref())), u"!0.0f16.ToBoolean()");
		#line 965 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UFCS(ToInt16)(f.__ref()) == Builtin::i32(12)), u"f.ToInt16()==12");
		#line 966 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UFCS(ToInt32)(f.__ref()) == Builtin::i32(12)), u"f.ToInt32()==12");
		#line 967 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UFCS(ToInt64)(f.__ref()) == Builtin::i32(12)), u"f.ToInt64()==12");
		#line 968 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UFCS(ToInt128)(f.__ref()) == Builtin::i32(12)), u"f.ToInt128()==12");
		#line 969 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UFCS(ToUsize)(f.__ref()) == Builtin::i32(12)), u"f.ToUsize()==12");
		#line 971 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		{
			#line 972 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)(f, Builtin::f16(2.0f));
			#line 973 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			ADV_ASSERT((div == Builtin::f16(6.171875f) && rem == Builtin::f16(0.34375f)), u"div==6.171875f16&&rem==0.34375f16");
		}
		#line 976 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor)(f, Builtin::i32(2)) == Builtin::f16(152.375f)), u"f^^2==152.375f16");
		#line 977 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor)(f, (Builtin::i32(-2))) == Builtin::f16(0.006561279296875f)), u"f^^(-2)==0.006561279296875f16");
		#line 978 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_mul)(f, Builtin::f16(2.0f)) == Builtin::f16(152.375f)), u"f**2.0f16==152.375f16");
		#line 979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_mul)(f, (Builtin::f16(-2.0f))) == Builtin::f16(0.006561279296875f)), u"f**(-2.0f16)==0.006561279296875f16");
		#line 980 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_mul)(f, Builtin::f16(1.234f)) == Builtin::f16(22.25f)), u"f**1.234f16==22.25f16");
		#line 982 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(Abs)(f.__ref()) == f), u"f.Abs==f");
		#line 983 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(Abs)(Builtin::f16(-12.34f).__ref()) == Builtin::f16(12.34f)), u"-12.34f16.Abs==12.34f16");
		#line 984 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(IsCanonical)(f.__ref())), u"f.IsCanonical");
		#line 985 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((!ADV_UPCS(IsComplexNumber)(f.__ref())), u"!f.IsComplexNumber");
		#line 986 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((!ADV_UPCS(IsImaginaryNumber)(f.__ref())), u"!f.IsImaginaryNumber");
		#line 987 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(IsRealNumber)(f.__ref())), u"f.IsRealNumber");
		#line 988 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(IsFinite)(f.__ref())), u"f.IsFinite");
		#line 989 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((!ADV_UPCS(IsInfinity)(f.__ref())), u"!f.IsInfinity");
		#line 990 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((!ADV_UPCS(IsNaN)(f.__ref())), u"!f.IsNaN");
		#line 991 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((!ADV_UPCS(IsNegative)(f.__ref())), u"!f.IsNegative");
		#line 992 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(IsNegative)(Builtin::f16(-12.34f).__ref())), u"-12.34f16.IsNegative");
		#line 993 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((!ADV_UPCS(IsNegativeInfinity)(f.__ref())), u"!f.IsNegativeInfinity");
		#line 994 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(IsPositive)(f.__ref())), u"f.IsPositive");
		#line 995 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((!ADV_UPCS(IsPositiveInfinity)(f.__ref())), u"!f.IsPositiveInfinity");
		#line 996 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((!ADV_UPCS(IsSubnormal)(f.__ref())), u"!f.IsSubnormal");
		#line 997 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((!ADV_UPCS(IsZero)(f.__ref())), u"!f.IsZero");
		#line 998 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(IsZero)(Builtin::f16(0.0f).__ref())), u"0.0f16.IsZero");
		#line 999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((!ADV_UPCS(IsInteger)(f.__ref())), u"!f.IsInteger");
		#line 1000 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((!ADV_UPCS(IsEvenInteger)(f.__ref())), u"!f.IsEvenInteger");
		#line 1001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((!ADV_UPCS(IsOddInteger)(f.__ref())), u"!f.IsOddInteger");
		#line 1002 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(IsInteger)(Builtin::f16(1.0f).__ref())), u"1.0f16.IsInteger");
		#line 1003 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(IsOddInteger)(Builtin::f16(1.0f).__ref())), u"1.0f16.IsOddInteger");
		#line 1004 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(IsEvenInteger)(Builtin::f16(2.0f).__ref())), u"2.0f16.IsEvenInteger");
		#line 1005 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UFCS(MaxMagnitude)(f.__ref(), Builtin::f16(-1235.0f)) == Builtin::f16(-1235.0f)), u"f.MaxMagnitude(-1235.0f16)==-1235.0f16");
		#line 1006 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UFCS(MinMagnitude)(f.__ref(), Builtin::f16(-1235.0f)) == Builtin::f16(12.34f)), u"f.MinMagnitude(-1235.0f16)==12.34f16");
		#line 1008 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UFCS(NarrowToInt32)(f.__ref()) == Builtin::i32(12)), u"f.NarrowToInt32()==12");
		#line 1009 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UFCS(NarrowToInt8)(f.__ref()) == Builtin::i32(12)), u"f.NarrowToInt8()==12");
		#line 1011 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(Sign)(f.__ref()) == Builtin::i32(1)), u"f.Sign==1");
		#line 1012 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(Sign)(Builtin::f16(-12.34f).__ref()) == Builtin::i32(-1)), u"-12.34f16.Sign==-1");
		#line 1013 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(Sign)(Builtin::f16(0.0f).__ref()) == Builtin::i32(0)), u"0.0f16.Sign==0");
		#line 1015 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UFCS(CopySign)(f.__ref(), Builtin::f16(-1.0f)) == Builtin::f16(-12.34f)), u"f.CopySign(-1.0f16)==-12.34f16");
		#line 1016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UFCS(Max)(f.__ref(), Builtin::i32(123)) == Builtin::f16(123.0f)), u"f.Max(123)==123.0f16");
		#line 1017 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UFCS(Min)(f.__ref(), Builtin::i32(123)) == Builtin::f16(12.34f)), u"f.Min(123)==12.34f16");
		#line 1018 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UFCS(Clamp)(f.__ref(), Builtin::i32(1), Builtin::i32(1000)) == Builtin::f16(12.34f)), u"f.Clamp(1,1000)==12.34f16");
		#line 1020 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((!ADV_UPCS(IsPow2)(f.__ref())), u"!f.IsPow2");
		#line 1021 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(IsPow2)(Builtin::f16(4096.0f).__ref())), u"4096.0f16.IsPow2");
		#line 1022 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::f16(4096.0f).__ref()) == Builtin::f16(12.0f)), u"4096.0f16.Log2==12.0f16");
		#line 1023 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(IsNegativeInfinity)(ADV_UPCS(Log2)(ADV_USPCS(Zero, Builtin::f16)().__ref()).__ref())), u"f16.Zero.Log2.IsNegativeInfinity");
		#line 1024 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(IsNaN)(ADV_UPCS(Log2)(Builtin::f16(-123.0f).__ref()).__ref())), u"-123.0f16.Log2.IsNaN");
		#line 1025 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(Builtin::f16(10000.0f).__ref()) == Builtin::f16(4.0f)), u"10000.0f16.Log10==4.0f16");
		#line 1026 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(IsNegativeInfinity)(ADV_UPCS(Log10)(ADV_USPCS(Zero, Builtin::f16)().__ref()).__ref())), u"f16.Zero.Log10.IsNegativeInfinity");
		#line 1027 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(IsNaN)(ADV_UPCS(Log10)(Builtin::f16(-123.0f).__ref()).__ref())), u"-123.0f16.Log10.IsNaN");
		#line 1028 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UFCS(Midpoint)(f.__ref(), Builtin::f16(24.15f)) == Builtin::f16(18.245f)), u"f.Midpoint(24.15f16)==18.245f16");
		#line 1029 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UFCS(IsMultipleOf)(Builtin::f16(10000.0f).__ref(), Builtin::i32(10))), u"10000.0f16.IsMultipleOf(10)");
		#line 1030 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((!ADV_UFCS(IsMultipleOf)(Builtin::f16(10000.0f).__ref(), Builtin::f16(7.5f))), u"!10000.0f16.IsMultipleOf(7.5f16)");
		#line 1031 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UFCS(IsMultipleOf)(Builtin::f16(22.5f).__ref(), Builtin::f16(7.5f))), u"22.5f16.IsMultipleOf(7.5f16)");
		#line 1033 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(Ceil)(Builtin::f16(2.5f).__ref()) == Builtin::f16(3.0f)), u"2.5f16.Ceil==3.0f16");
		#line 1034 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(Floor)(Builtin::f16(2.5f).__ref()) == Builtin::f16(2.0f)), u"2.5f16.Floor==2.0f16");
		#line 1035 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(Truncate)(Builtin::f16(2.5f).__ref()) == Builtin::f16(2.0f)), u"2.5f16.Truncate==2.0f16");
		#line 1036 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(Round)(Builtin::f16(2.5f).__ref()) == Builtin::f16(3.0f)), u"2.5f16.Round==3.0f16");
		#line 1037 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UFCS(RoundToInt32)(Builtin::f16(2.5f).__ref()) == Builtin::i32(3)), u"2.5f16.RoundToInt32()==3");
		#line 1038 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(RoundTiesEven)(Builtin::f16(2.5f).__ref()) == Builtin::f16(2.0f)), u"2.5f16.RoundTiesEven==2.0f16");
		#line 1039 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UFCS(RoundTiesEvenToInt32)(Builtin::f16(2.5f).__ref()) == Builtin::i32(2)), u"2.5f16.RoundTiesEvenToInt32()==2");
		#line 1040 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(RoundTiesEven)(Builtin::f16(3.5f).__ref()) == Builtin::f16(4.0f)), u"3.5f16.RoundTiesEven==4.0f16");
		#line 1041 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UFCS(Round)(Builtin::f16(2.5f).__ref(), Builtin::u32(0U)) == Builtin::f16(3.0f)), u"2.5f16.Round(0u)==3.0f16");
		#line 1042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UFCS(Round)(Builtin::f16(2.5f).__ref(), ADV_USPCS(ToEven, MidpointRounding)()) == Builtin::f16(2.0f)), u"2.5f16.Round(MidpointRounding.ToEven)==2.0f16");
		#line 1043 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(Ceil)((Builtin::f16(-2.5f)).__ref()) == Builtin::f16(-2.0f)), u"(-2.5f16).Ceil==-2.0f16");
		#line 1044 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(Floor)((Builtin::f16(-2.5f)).__ref()) == Builtin::f16(-3.0f)), u"(-2.5f16).Floor==-3.0f16");
		#line 1045 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(Truncate)((Builtin::f16(-2.5f)).__ref()) == Builtin::f16(-2.0f)), u"(-2.5f16).Truncate==-2.0f16");
		#line 1046 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(Round)((Builtin::f16(-2.5f)).__ref()) == Builtin::f16(-3.0f)), u"(-2.5f16).Round==-3.0f16");
		#line 1047 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UFCS(RoundToInt32)((Builtin::f16(-2.5f)).__ref()) == Builtin::i32(-3)), u"(-2.5f16).RoundToInt32()==-3");
		#line 1048 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(RoundTiesEven)((Builtin::f16(-2.5f)).__ref()) == Builtin::f16(-2.0f)), u"(-2.5f16).RoundTiesEven==-2.0f16");
		#line 1049 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UFCS(RoundTiesEvenToInt32)((Builtin::f16(-2.5f)).__ref()) == Builtin::i32(-2)), u"(-2.5f16).RoundTiesEvenToInt32()==-2");
		#line 1050 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(RoundTiesEven)((Builtin::f16(-3.5f)).__ref()) == Builtin::f16(-4.0f)), u"(-3.5f16).RoundTiesEven==-4.0f16");
		#line 1051 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UFCS(Round)((Builtin::f16(-2.5f)).__ref(), Builtin::u32(0U)) == Builtin::f16(-3.0f)), u"(-2.5f16).Round(0u)==-3.0f16");
		#line 1052 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UFCS(Round)((Builtin::f16(-2.5f)).__ref(), ADV_USPCS(ToEven, MidpointRounding)()) == Builtin::f16(-2.0f)), u"(-2.5f16).Round(MidpointRounding.ToEven)==-2.0f16");
		#line 1054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		f = Builtin::f16(12.34f);
		#line 1055 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(Exp)(f.__ref()) == Builtin::f16(228661.98f)), u"f.Exp==228661.98f16");
		#line 1056 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(ExpM1)(f.__ref()) == Builtin::f16(228660.98f)), u"f.ExpM1==228660.98f16");
		#line 1057 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(Exp2)(f.__ref()) == Builtin::f16(5200.0f)), u"f.Exp2==5200.0f16");
		#line 1058 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(Exp2M1)(f.__ref()) == Builtin::f16(5200.0f)), u"f.Exp2M1==5200.0f16");
		#line 1059 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(IsPositiveInfinity)(ADV_UPCS(Exp10)(f.__ref()).__ref())), u"f.Exp10.IsPositiveInfinity");
		#line 1060 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(IsPositiveInfinity)(ADV_UPCS(Exp10M1)(f.__ref()).__ref())), u"f.Exp10M1.IsPositiveInfinity");
		#line 1061 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(Ln)(f.__ref()) == Builtin::f16(2.513671875f)), u"f.Ln==2.513671875f16");
		#line 1062 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(LnP1)(f.__ref()) == Builtin::f16(2.591796875f)), u"f.LnP1==2.591796875f16");
		#line 1063 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UFCS(Log)(f.__ref(), Builtin::f16(1.25f)) == Builtin::f16(11.265625f)), u"f.Log(1.25f16)==11.265625f16");
		#line 1065 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(Sqrt)(f.__ref()) == Builtin::f16(3.5128336f)), u"f.Sqrt==3.5128336f16");
		#line 1066 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(Cbrt)(f.__ref()) == Builtin::f16(2.310849666595458984375f)), u"f.Cbrt==2.310849666595458984375f16");
		#line 1067 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UFCS(Root)(Builtin::f16(1234.0f).__ref(), Builtin::i32(5)) == Builtin::f16(4.15234375f)), u"1234.0f16.Root(5)==4.15234375f16");
		#line 1068 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UFCS(Root)(f.__ref(), Builtin::i32(-5)) == Builtin::f16(0.60498046875f)), u"f.Root(-5)==0.60498046875f16");
		#line 1069 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UFCS(Hypot)(f.__ref(), Builtin::f16(9.12f)) == Builtin::f16(15.34375f)), u"f.Hypot(9.12f16)==15.34375f16");
		#line 1071 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(Sin)(f.__ref()) == Builtin::f16(-0.2208251953125f)), u"f.Sin==-0.2208251953125f16");
		#line 1072 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(Cos)(f.__ref()) == Builtin::f16(0.97509765625f)), u"f.Cos==0.97509765625f16");
		#line 1073 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(Tan)(f.__ref()) == Builtin::f16(-0.226318359375f)), u"f.Tan==-0.226318359375f16");
		#line 1074 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		f = Builtin::f16(0.34f);
		#line 1075 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(Asin)(f.__ref()) == Builtin::f16(0.346923828125f)), u"f.Asin==0.346923828125f16");
		#line 1076 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(Acos)(f.__ref()) == Builtin::f16(1.2236328125f)), u"f.Acos==1.2236328125f16");
		#line 1077 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(Atan)(f.__ref()) == Builtin::f16(0.327880859375f)), u"f.Atan==0.327880859375f16");
		#line 1078 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		f = Builtin::f16(12.34f);
		#line 1079 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UFCS(ToRadians)(f.__ref()) == Builtin::f16(0.2154541015625f)), u"f.ToRadians()==0.2154541015625f16");
		#line 1080 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UFCS(ToDegrees)(Builtin::f16(0.34f).__ref()) == Builtin::f16(19.5f)), u"0.34f16.ToDegrees()==19.5f16");
		#line 1081 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(SinPi)(Builtin::f16(1.0f).__ref()) == Builtin::f16(0.0f)), u"1.0f16.SinPi==0.0f16");
		#line 1082 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(SinPi)(Builtin::f16(0.5f).__ref()) == Builtin::f16(1.0f)), u"0.5f16.SinPi==1.0f16");
		#line 1083 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(CosPi)(Builtin::f16(1.0f).__ref()) == Builtin::f16(-1.0f)), u"1.0f16.CosPi==-1.0f16");
		#line 1084 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(CosPi)(Builtin::f16(0.5f).__ref()) == Builtin::f16(0.0f)), u"0.5f16.CosPi==0.0f16");
		#line 1085 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(TanPi)(Builtin::f16(1.0f).__ref()) == Builtin::f16(-0.0f)), u"1.0f16.TanPi==-0.0f16");
		#line 1086 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(TanPi)(Builtin::f16(0.0f).__ref()) == Builtin::f16(0.0f)), u"0.0f16.TanPi==0.0f16");
		#line 1088 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(IsPositiveInfinity)(ADV_UPCS(Sinh)(f.__ref()).__ref())), u"f.Sinh.IsPositiveInfinity");
		#line 1089 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(IsPositiveInfinity)(ADV_UPCS(Cosh)(f.__ref()).__ref())), u"f.Cosh.IsPositiveInfinity");
		#line 1090 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(Tanh)(f.__ref()) == Builtin::f16(1.0f)), u"f.Tanh==1.0f16");
		#line 1091 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(Asinh)(f.__ref()) == Builtin::f16(3.20703125f)), u"f.Asinh==3.20703125f16");
		#line 1092 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(Acosh)(f.__ref()) == Builtin::f16(3.205078125f)), u"f.Acosh==3.205078125f16");
		#line 1093 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(IsNaN)(ADV_UPCS(Atanh)(f.__ref()).__ref())), u"f.Atanh.IsNaN");
		#line 1094 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		f = Builtin::f16(0.34f);
		#line 1095 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(Sinh)(f.__ref()) == Builtin::f16(0.3466796875f)), u"f.Sinh==0.3466796875f16");
		#line 1096 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(Cosh)(f.__ref()) == Builtin::f16(1.05859375f)), u"f.Cosh==1.05859375f16");
		#line 1097 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(Tanh)(f.__ref()) == Builtin::f16(0.32763671875f)), u"f.Tanh==0.32763671875f16");
		#line 1098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(Asinh)(f.__ref()) == Builtin::f16(0.333740234375f)), u"f.Asinh==0.333740234375f16");
		#line 1099 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(IsNaN)(ADV_UPCS(Acosh)(f.__ref()).__ref())), u"f.Acosh.IsNaN");
		#line 1100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(Atanh)(f.__ref()) == Builtin::f16(0.354248046875f)), u"f.Atanh==0.354248046875f16");
		#line 1102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(ReciprocalEstimate)(f.__ref()) == Builtin::f16(2.939453125f)), u"f.ReciprocalEstimate==2.939453125f16");
		#line 1103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UFCS(FusedMultiplyAdd)(f.__ref(), Builtin::f16(5.0f), Builtin::f16(2.12f)) == Builtin::f16(3.8203125f)), u"f.FusedMultiplyAdd(5.0f16,2.12f16)==3.8203125f16");
		#line 1104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UFCS(Lerp)(Builtin::f16(1.0f).__ref(), Builtin::f16(2.0f), Builtin::f16(0.75f)) == Builtin::f16(1.75f)), u"1.0f16.Lerp(2.0f16,0.75f16)==1.75f16");
		#line 1106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(Gamma)(f.__ref()) == Builtin::f16(2.623046875f)), u"f.Gamma==2.623046875f16");
		#line 1107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(Erf)(f.__ref()) == Builtin::f16(0.369384765625f)), u"f.Erf==0.369384765625f16");
		#line 1108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		ADV_ASSERT((ADV_UPCS(Erfc)(f.__ref()) == Builtin::f16(0.63037109375f)), u"f.Erfc==0.63037109375f16");
		return true;
	}();
	#endif	
} namespace __extensions { using namespace System;
#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	auto _operator_eq_eq_mul(__extension_Float16_13_f16 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool
	{
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		{
			#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			auto __tmp0 = Builtin::Cast<false, __extension_Float16_873_f16>(obj);
			#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			if ((__tmp0.IsValid())) {
				#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
				const auto& obj = *__tmp0;
				
				#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
				if (__this == obj) {
					#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
					return Builtin::Boolean(true);
				}
			}
		}
		#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		return Builtin::Boolean(false);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	auto _operator_lt_eq_gt_mul(__extension_Float16_55_f16 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32
	{
		#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		{
			#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			auto __tmp0 = Builtin::Cast<false, __extension_Float16_873_f16>(obj);
			#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			if ((__tmp0.IsValid())) {
				#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
				const auto& obj = *__tmp0;
				
				#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
				return __this <=> obj;
			}
		}
		#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		{
			#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
			if ((!Builtin::Is(obj, nullptr))) {
				#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
				auto __tmp0 = *obj; const auto& obj = __tmp0;
				
				#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
				Builtin::Throw(Builtin::InvalidOperationException{});
			}
		}
		#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		return Builtin::i32(1);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	auto Parse(__extension_Float16_155_f16 const& __this LIFETIMEBOUND, Builtin::Str input)  -> const typename __extension_Float16_155_f16
	{
		#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		return Builtin::i16(0);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	auto TryParse(__extension_Float16_155_f16 const& __this LIFETIMEBOUND, Builtin::Str input) noexcept -> const Builtin::Nullable<__extension_Float16_873_f16>
	{
		#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		return Builtin::f16(0.0f);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 644 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	auto Root(__extension_Float16_638_f16 const& __this LIFETIMEBOUND, Builtin::i32 n)  -> const typename __extension_Float16_638_f16
	{
		#line 646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		return Builtin::Cast<true, Builtin::f16>(ADV_UFCS(Root)((Builtin::Cast<true, Builtin::f32>(__this)).__ref(), n));
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	auto Hypot(__extension_Float16_638_f16 const& __this LIFETIMEBOUND, __extension_Float16_873_f16 y)  -> const typename __extension_Float16_638_f16
	{
		#line 652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		return Builtin::Cast<true, Builtin::f16>(ADV_UFCS(Hypot)((Builtin::Cast<true, Builtin::f32>(__this)).__ref(), y));
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	auto getSinPi(__extension_Float16_656_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		return Builtin::Cast<true, Builtin::f16>(ADV_UPCS(SinPi)((Builtin::Cast<true, Builtin::f32>(__this)).__ref()));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	auto getCosPi(__extension_Float16_656_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		return Builtin::Cast<true, Builtin::f16>(ADV_UPCS(CosPi)((Builtin::Cast<true, Builtin::f32>(__this)).__ref()));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 694 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	auto getSinCosPi(__extension_Float16_656_f16 const& __this ) -> const std::tuple<__extension_Float16_873_f16, __extension_Float16_873_f16>
	{
		#line 696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		const auto& [sin, cos] = ADV_UPCS(SinCosPi)((Builtin::Cast<true, Builtin::f32>(__this)).__ref());
		#line 697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		return std::make_tuple(Builtin::Cast<true, Builtin::f16>(sin), Builtin::Cast<true, Builtin::f16>(cos));
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
	auto getTanPi(__extension_Float16_656_f16 const& __this ) -> const __extension_Float16_873_f16
	{
		#line 702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float16.ast"
		return Builtin::Cast<true, Builtin::f16>(ADV_UPCS(TanPi)((Builtin::Cast<true, Builtin::f32>(__this)).__ref()));
	}
	} namespace System{

}