#include "Math.h"
#include "UInt8.h"

namespace System {
//###############################################################################
//# Global type aliases
//###############################################################################
//###############################################################################
//# Type definitions
//###############################################################################

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
















static_assert(Builtin::usize(sizeof(Builtin::u8)) == Builtin::i32(1), "u8 should be 1 byte");
static_assert(ADV_USPCS(MinValue, Builtin::u8)() == Builtin::i32(0), "u8.Min should be 0");
static_assert(ADV_USPCS(MaxValue, Builtin::u8)() == Builtin::i32(0xFF), "u8.Max should be 0xFF");
static_assert(ADV_UFCS_NONLOCAL(_operator_gt_gt_not)(ADV_USPCS(One, Builtin::u8)(), Builtin::i32(3)) == Builtin::i32(0b00100000), "u8.One >>% 3 == 0b0010_0000");
static_assert(!ADV_USPCS(IsSigned, Builtin::u8)(), "u8 must be unsigned");
static_assert(ADV_USPCS(MaxDigitCount, Builtin::u8)() == Builtin::i32(3), "u8 max digit count must be 3");
static_assert(ADV_UFCS_NONLOCAL(_operator_xor_xor)(Builtin::u8(2U), Builtin::u32(7U)) == Builtin::i32(128), "2u8 ^^ 7u == 128u8");
static_assert(Builtin::TypeIs<Builtin::u8, IComparable<Builtin::u8>>(), "u8 should implement IComparable<u8>");
static_assert(Builtin::TypeIs<Builtin::u8, IEquatable<Builtin::u8>>(), "u8 should implement IEquatable<u8>");
static_assert(Builtin::TypeIs<Builtin::u8, ISelfComparable>(), "u8 should implement ISelfComparable");
static_assert(Builtin::TypeIs<Builtin::u8, ISelfEquatable>(), "u8 should implement ISelfEquatable");
static_assert(Builtin::TypeIs<Builtin::u8, IAdditionOperators<Builtin::u8, Builtin::u8>>(), "u8 should implement IAdditionOperators<u8, u8>");
static_assert(Builtin::TypeIs<Builtin::u8, ISubtractionOperators<Builtin::u8, Builtin::u8>>(), "u8 should implement ISubtractionOperators<u8, u8>");
static_assert(Builtin::TypeIs<Builtin::u8, IMultiplyOperators<Builtin::u8, Builtin::u8>>(), "u8 should implement IMultiplyOperators<u8, u8>");
static_assert(Builtin::TypeIs<Builtin::u8, IDivisionOperators<Builtin::u8, Builtin::f64>>(), "u8 should implement IDivisionOperators<u8, f64>");
static_assert(Builtin::TypeIs<Builtin::u8, IIntDivOperators<Builtin::u8, Builtin::u8>>(), "u8 should implement IIntDivOperators<u8, u8>");
static_assert(Builtin::TypeIs<Builtin::u8, IModulusOperators<Builtin::u8, Builtin::u8>>(), "u8 should implement IModulusOperators<u8, u8>");
static_assert(Builtin::TypeIs<Builtin::u8, IBitwiseOperators<Builtin::u8, Builtin::u8>>(), "u8 should implement IBitwiseOperators<u8, u8>");
static_assert(Builtin::TypeIs<Builtin::u8, IShiftOperators<Builtin::u8, Builtin::u8>>(), "u8 should implement IShiftOperators<u8, u8>");
static_assert(Builtin::TypeIs<Builtin::u8, IUnaryPlusOperators<Builtin::u8>>(), "u8 should implement IUnaryPlusOperators<u8>");
static_assert(Builtin::TypeIs<Builtin::u8, IUnaryNegationOperators<Builtin::u8>>(), "u8 should implement IUnaryNegationOperators<u8>");
static_assert(Builtin::TypeIs<Builtin::u8, IIncrementOperators<Builtin::u8>>(), "u8 should implement IIncrementOperators<u8>");
static_assert(Builtin::TypeIs<Builtin::u8, IDecrementOperators<Builtin::u8>>(), "u8 should implement IDecrementOperators<u8>");
static_assert(ADV_UFCS_NONLOCAL(_operator_add_mod)(ADV_USPCS(MaxValue, Builtin::u8)(), Builtin::u8(1U)) == ADV_USPCS(MinValue, Builtin::u8)(), "u8.MaxValue +% 1u8 == u8.MinValue");
static_assert(ADV_UFCS_NONLOCAL(_operator_add_or)(ADV_USPCS(MaxValue, Builtin::u8)(), Builtin::u8(1U)) == ADV_USPCS(MaxValue, Builtin::u8)(), "u8.MaxValue +| 1u8 == u8.MaxValue");
#ifdef ADV_UNITTEST
	#line 1151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	static bool __Test_b25a7348bd8a44fb = [](){
		#line 1153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::u8 a = Builtin::u8(5U); 
		#line 1156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a + Builtin::u8(10U) == Builtin::u8((unsigned char)15)), u"a+10u8==15");
		#line 1157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a + Builtin::u8(10U) == Builtin::u8((unsigned char)15)), u"a+10u8==15");
		#line 1158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a + Builtin::i16(10) == Builtin::u8((unsigned char)15)), u"a+10i16==15");
		#line 1159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a + Builtin::u16(10U) == Builtin::u8((unsigned char)15)), u"a+10u16==15");
		#line 1160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a + Builtin::i32(10) == Builtin::u8((unsigned char)15)), u"a+10i32==15");
		#line 1161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a + Builtin::u32(10U) == Builtin::u8((unsigned char)15)), u"a+10u32==15");
		#line 1162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a + Builtin::i64(10LL) == Builtin::u8((unsigned char)15)), u"a+10i64==15");
		#line 1163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a + Builtin::u64(10ULL) == Builtin::u8((unsigned char)15)), u"a+10u64==15");
		#line 1164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a + Builtin::i128(10LL) == Builtin::u8((unsigned char)15)), u"a+10i128==15");
		#line 1165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a + Builtin::u128(10ULL) == Builtin::u8((unsigned char)15)), u"a+10u128==15");
		#line 1168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a - Builtin::u8((unsigned char)2) == Builtin::u8((unsigned char)3)), u"a-2==3");
		#line 1169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a * Builtin::u8((unsigned char)2) == Builtin::u8((unsigned char)10)), u"a*2==10");
		#line 1170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, Builtin::u8((unsigned char)2)) == Builtin::u8((unsigned char)2)), u"a\\2==2");
		#line 1171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a % Builtin::u8((unsigned char)2) == Builtin::u8((unsigned char)1)), u"a%2==1");
		#line 1172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT(((a & Builtin::u8((unsigned char)1)) == Builtin::u8((unsigned char)1)), u"(a&1)==1");
		#line 1173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT(((a | Builtin::u8((unsigned char)1)) == Builtin::u8((unsigned char)5)), u"(a|1)==5");
		#line 1174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT(((a ^ Builtin::u8((unsigned char)1)) == Builtin::u8((unsigned char)4)), u"(a^1)==4");
		#line 1175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a << Builtin::u8((unsigned char)1) == Builtin::u8((unsigned char)10)), u"a<<1==10");
		#line 1176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a >> Builtin::u8((unsigned char)1) == Builtin::u8((unsigned char)2)), u"a>>1==2");
		#line 1177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a = Builtin::u8((unsigned char)0b11111011);
		#line 1178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_UFCS(_operator_gt_gt_gt_eq)(a, Builtin::u8((unsigned char)2));
		#line 1179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a == Builtin::u8((unsigned char)0b00111110)), u"a==0b0011_1110");
		#line 1180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_gt)(a, Builtin::u8((unsigned char)2)) == Builtin::u8((unsigned char)0b00001111)), u"a>>>2==0b0000_1111");
		#line 1181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_gt)(a, Builtin::u8((unsigned char)7)) == Builtin::u8((unsigned char)0)), u"a>>>7==0");
		#line 1184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a = Builtin::u8((unsigned char)5);
		#line 1185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a == Builtin::u8((unsigned char)5)), u"a==5");
		#line 1186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a != Builtin::u8((unsigned char)6)), u"a!=6");
		#line 1187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT(((a <=> Builtin::u8((unsigned char)6)) < 0), u"a<6");
		#line 1188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT(((a <=> Builtin::u8((unsigned char)5)) <= 0), u"a<=5");
		#line 1189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT(((a <=> Builtin::u8((unsigned char)4)) > 0), u"a>4");
		#line 1190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT(((a <=> Builtin::u8((unsigned char)5)) >= 0), u"a>=5");
		#line 1193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a = Builtin::u8(5U);
		#line 1194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a++;
		#line 1195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a--;
		#line 1196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a += Builtin::u8((unsigned char)5);
		#line 1197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a -= Builtin::u8((unsigned char)5);
		#line 1198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a *= Builtin::u8((unsigned char)2);
		#line 1199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_UFCS(_operator_bsl_eq)(a, Builtin::u8((unsigned char)2));
		#line 1200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a %= Builtin::u8((unsigned char)1);
		#line 1201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a &= Builtin::u8((unsigned char)1);
		#line 1202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a |= Builtin::u8((unsigned char)1);
		#line 1203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a ^= Builtin::u8((unsigned char)1);
		#line 1204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a <<= Builtin::u8((unsigned char)1);
		#line 1205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a >>= Builtin::u8((unsigned char)1);
		#line 1206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a == Builtin::u8((unsigned char)0)), u"a==0");
		#line 1207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a = Builtin::u8(10U);
		#line 1208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_not)(a) == Builtin::u8((unsigned char)0b11110101)), u"~a==0b1111_0101");
		#line 1211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::u8 b = Builtin::u8(5U); 
		#line 1212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::Nullable<Builtin::u8> c = nullptr; 
		#line 1213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::Nullable<Builtin::u8> d = Builtin::u8(5U); 
		#line 1214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a != b), u"a!=b");
		#line 1215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((b != c), u"b!=c");
		#line 1216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((!Builtin::IdentityEquals(b, c)), u"b!==c");
		#line 1217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT(((b <=> c) > 0), u"b>c");
		#line 1218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((c != b), u"c!=b");
		#line 1219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((c == nullptr), u"c==null");
		#line 1220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((d != nullptr), u"d!=null");
		#line 1221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT(((c <=> d) < 0), u"c<d");
		#line 1222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((b == d), u"b==d");
		#line 1223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((Builtin::IdentityEquals(b, d)), u"b===d");
		#line 1226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::Nullable<Builtin::ObjectRef> o = c; 
		#line 1227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		o = d;
		#line 1228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_ne_eq_mul)(b, o)), u"b!=*o");
		#line 1229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		IComparable<Builtin::u8> icomp = a; 
		#line 1230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT(((icomp <=> b) > 0), u"icomp>b");
		#line 1233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a = Builtin::u8(200U);
		#line 1234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(a.__ref()) == Builtin::u8((unsigned char)200)), u"a.HashCode==200");
		#line 1235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(a) == Builtin::u8((unsigned char)200)), u"#a==200");
		#line 1237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a = Builtin::u8(250U);
		#line 1238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(ToUInt32)(a.__ref()) == Builtin::u8((unsigned char)250)), u"a.ToUInt32()==250");
		#line 1239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(NarrowToInt8)(a.__ref()) == Builtin::i32(-6)), u"a.NarrowToInt8()==-6");
		#line 1242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a = Builtin::u8(10U);
		#line 1243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		b = Builtin::u8(6U);
		#line 1244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(Abs)(b.__ref()) == Builtin::u8((unsigned char)6)), u"b.Abs==6");
		#line 1245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(IsFinite)(b.__ref())), u"b.IsFinite");
		#line 1246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(IsInteger)(b.__ref())), u"b.IsInteger");
		#line 1247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((!ADV_UPCS(IsNegative)(b.__ref())), u"!b.IsNegative");
		#line 1248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(IsPositive)(a.__ref())), u"a.IsPositive");
		#line 1249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(IsCanonical)(b.__ref())), u"b.IsCanonical");
		#line 1250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((!ADV_UPCS(IsComplexNumber)(b.__ref())), u"!b.IsComplexNumber");
		#line 1251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(IsRealNumber)(b.__ref())), u"b.IsRealNumber");
		#line 1252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((!ADV_UPCS(IsImaginaryNumber)(b.__ref())), u"!b.IsImaginaryNumber");
		#line 1253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(IsEvenInteger)(b.__ref())), u"b.IsEvenInteger");
		#line 1254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((!ADV_UPCS(IsOddInteger)(b.__ref())), u"!b.IsOddInteger");
		#line 1255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((!ADV_UPCS(IsInfinity)(b.__ref())), u"!b.IsInfinity");
		#line 1256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((!ADV_UPCS(IsPositiveInfinity)(b.__ref())), u"!b.IsPositiveInfinity");
		#line 1257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((!ADV_UPCS(IsNegativeInfinity)(b.__ref())), u"!b.IsNegativeInfinity");
		#line 1258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((!ADV_UPCS(IsNaN)(b.__ref())), u"!b.IsNaN");
		#line 1259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(IsNormal)(b.__ref())), u"b.IsNormal");
		#line 1260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((!ADV_UPCS(IsSubnormal)(b.__ref())), u"!b.IsSubnormal");
		#line 1261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((!ADV_UPCS(IsZero)(b.__ref())), u"!b.IsZero");
		#line 1264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(Sign)(a.__ref()) == +Builtin::u8((unsigned char)1)), u"a.Sign==+1");
		#line 1265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(CopySign)(a.__ref(), b) == a), u"a.CopySign(b)==a");
		#line 1266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(Max)(a.__ref(), b) == a), u"a.Max(b)==a");
		#line 1267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(Min)(a.__ref(), b) == b), u"a.Min(b)==b");
		#line 1268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(MaxNumber)(a.__ref(), b) == a), u"a.MaxNumber(b)==a");
		#line 1269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(MinNumber)(a.__ref(), b) == b), u"a.MinNumber(b)==b");
		#line 1270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(Clamp)(b.__ref(), Builtin::u8(1U), Builtin::u8(5U)) == Builtin::u8((unsigned char)5)), u"b.Clamp(1u8,5u8)==5");
		#line 1273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(IsPow2)(Builtin::u8(32U).__ref())), u"32u8.IsPow2");
		#line 1274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((!ADV_UPCS(IsPow2)(Builtin::u8(127U).__ref())), u"!127u8.IsPow2");
		#line 1275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::u8(2U).__ref()) == Builtin::u8((unsigned char)1)), u"2u8.Log2==1");
		#line 1276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::u8(16U).__ref()) == Builtin::u8((unsigned char)4)), u"16u8.Log2==4");
		#line 1277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::u8(64U).__ref()) == Builtin::u8((unsigned char)6)), u"64u8.Log2==6");
		#line 1278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::u8(250U).__ref()) == Builtin::u8((unsigned char)7)), u"250u8.Log2==7");
		#line 1279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::u8(2U).__ref()) == Builtin::u8((unsigned char)1)), u"2u8.Log2Ceiling==1");
		#line 1280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::u8(16U).__ref()) == Builtin::u8((unsigned char)4)), u"16u8.Log2Ceiling==4");
		#line 1281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::u8(65U).__ref()) == Builtin::u8((unsigned char)7)), u"65u8.Log2Ceiling==7");
		#line 1282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::u8(250U).__ref()) == Builtin::u8((unsigned char)8)), u"250u8.Log2Ceiling==8");
		#line 1283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(CheckedLog2)(Builtin::u8(0U).__ref()) == nullptr), u"0u8.CheckedLog2==null");
		#line 1284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(Builtin::u8(5U).__ref()) == Builtin::u8((unsigned char)0)), u"5u8.Log10==0");
		#line 1285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(a.__ref()) == Builtin::u8((unsigned char)1)), u"a.Log10==1");
		#line 1286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(ADV_USPCS(MaxValue, Builtin::u8)().__ref()) == Builtin::u8((unsigned char)2)), u"u8.MaxValue.Log10==2");
		#line 1287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(Log)(Builtin::u8(5U).__ref(), Builtin::u8(5U)) == Builtin::u8((unsigned char)1)), u"5u8.Log(5u8)==1");
		#line 1288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(Midpoint)(a.__ref(), Builtin::u8(30U)) == Builtin::u8((unsigned char)20)), u"a.Midpoint(30u8)==20");
		#line 1289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(Midpoint)(Builtin::u8(100U).__ref(), ADV_USPCS(MaxValue, Builtin::u8)()) == Builtin::u8((unsigned char)177)), u"100u8.Midpoint(u8.MaxValue)==177");
		#line 1290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)(a.__ref(), Builtin::u8(10U)) == Builtin::u8((unsigned char)10)), u"a.NextMultipleOf(10u8)==10");
		#line 1291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)(Builtin::u8(11U).__ref(), Builtin::u8(10U)) == Builtin::u8((unsigned char)20)), u"11u8.NextMultipleOf(10u8)==20");
		#line 1292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)(Builtin::u8(60U).__ref(), Builtin::u8(8U)) == Builtin::u8((unsigned char)64)), u"60u8.NextMultipleOf(8u8)==64");
		#line 1293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(ByteCount)(a.__ref()) == Builtin::u8((unsigned char)1)), u"a.ByteCount==1");
		#line 1294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(ByteSwapped)(a.__ref()) == a), u"a.ByteSwapped==a");
		#line 1295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_not)(Builtin::u8(0b1010U), Builtin::u8((unsigned char)3)) == Builtin::u8((unsigned char)0b01010000)), u"0b1010_u8<<~3==0b0101_0000");
		#line 1296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_not)(Builtin::u8(0b1010U), Builtin::u8((unsigned char)5)) == Builtin::u8((unsigned char)0b01000001)), u"0b1010_u8<<~5==0b0100_0001");
		#line 1297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_not)(Builtin::u8(0b1010U), Builtin::u8((unsigned char)3)) == Builtin::u8((unsigned char)0b01000001)), u"0b1010_u8>>~3==0b0100_0001");
		#line 1298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_not)(Builtin::u8(0b1010U), Builtin::u8((unsigned char)5)) == Builtin::u8((unsigned char)0b01010000)), u"0b1010_u8>>~5==0b0101_0000");
		#line 1299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(MinimalBitWidth)(Builtin::u8(7U).__ref()) == Builtin::u8((unsigned char)3)), u"7u8.MinimalBitWidth==3");
		#line 1301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(MinimalBitWidth)(a.__ref()) == Builtin::u8((unsigned char)4)), u"a.MinimalBitWidth==4");
		#line 1302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(LeadingZeroCount)(a.__ref()) == Builtin::u8((unsigned char)4)), u"a.LeadingZeroCount==4");
		#line 1303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(TrailingZeroCount)(a.__ref()) == Builtin::u8((unsigned char)1)), u"a.TrailingZeroCount==1");
		#line 1304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(LeadingOneCount)(a.__ref()) == Builtin::u8((unsigned char)0)), u"a.LeadingOneCount==0");
		#line 1305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(TrailingOneCount)(a.__ref()) == Builtin::u8((unsigned char)0)), u"a.TrailingOneCount==0");
		#line 1306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(PopCount)(a.__ref()) == Builtin::u8((unsigned char)2)), u"a.PopCount==2");
		#line 1307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(ZeroCount)(a.__ref()) == Builtin::u8((unsigned char)6)), u"a.ZeroCount==6");
		#line 1308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(ReverseBits)(a.__ref()) == Builtin::u8((unsigned char)0b01010000)), u"a.ReverseBits==0b0101_0000");
		#line 1309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(NextPow2)(a.__ref()) == Builtin::u8((unsigned char)16)), u"a.NextPow2==16");
		#line 1310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(PrevPow2)(a.__ref()) == Builtin::u8((unsigned char)8)), u"a.PrevPow2==8");
		#line 1311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(PrevPow2)(Builtin::u8(1U).__ref()) == Builtin::u8((unsigned char)0)), u"1u8.PrevPow2==0");
		#line 1312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(PrevPow2)(Builtin::u8(2U).__ref()) == Builtin::u8((unsigned char)2)), u"2u8.PrevPow2==2");
		#line 1313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(NextPow2)(Builtin::u8(2U).__ref()) == Builtin::u8((unsigned char)2)), u"2u8.NextPow2==2");
		#line 1314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(NextPow2)(Builtin::u8(3U).__ref()) == Builtin::u8((unsigned char)4)), u"3u8.NextPow2==4");
		#line 1315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(PrevPow2)(Builtin::u8(3U).__ref()) == Builtin::u8((unsigned char)2)), u"3u8.PrevPow2==2");
		#line 1316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(NextPow2)(Builtin::u8(127U).__ref()) == Builtin::u8((unsigned char)128)), u"127u8.NextPow2==128");
		#line 1317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(CheckedNextPow2)(Builtin::u8(129U).__ref()) == nullptr), u"129u8.CheckedNextPow2==null");
		#line 1319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(IsMultipleOf)(a.__ref(), Builtin::u8((unsigned char)5))), u"a.IsMultipleOf(5)");
		#line 1320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((!ADV_UFCS(IsMultipleOf)(a.__ref(), Builtin::u8((unsigned char)6))), u"!a.IsMultipleOf(6)");
		#line 1322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(MultiplyBy10)(a.__ref()) == Builtin::u8((unsigned char)100)), u"a.MultiplyBy10==100");
		#line 1323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(MultiplyBy16)(a.__ref()) == Builtin::u8((unsigned char)160)), u"a.MultiplyBy16==160");
		#line 1326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_qst)(a, Builtin::u8(100U)) == Builtin::u8((unsigned char)110)), u"a+?100u8==110");
		#line 1327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_qst)(a, ADV_USPCS(MaxValue, Builtin::u8)()) == nullptr), u"a+?u8.MaxValue==null");
		#line 1328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_UFCS(_operator_add_qst_eq)(a, Builtin::u8(5U));
		#line 1329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a == Builtin::u8((unsigned char)15)), u"a==15");
		#line 1330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_UFCS(_operator_add_qst_eq)(a, Builtin::u8(250U));
		#line 1331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a == Builtin::u8((unsigned char)15)), u"a==15");
		#line 1332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_ne)(a, Builtin::u8(100U)) == Builtin::u8((unsigned char)115)), u"a+!100u8==115");
		#line 1333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_mod)(a, Builtin::u8(100U)) == Builtin::u8((unsigned char)115)), u"a+%100u8==115");
		#line 1334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_mod)(a, Builtin::u8(241U)) == ADV_USPCS(MinValue, Builtin::u8)()), u"a+%241u8==u8.MinValue");
		#line 1335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_UFCS(_operator_add_mod_eq)(a, ADV_USPCS(MaxValue, Builtin::u8)());
		#line 1336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a == Builtin::u8((unsigned char)14)), u"a==14");
		#line 1337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_or)(a, Builtin::u8(250U)) == ADV_USPCS(MaxValue, Builtin::u8)()), u"a+|250u8==u8.MaxValue");
		#line 1338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_UFCS(_operator_add_or_eq)(a, ADV_USPCS(MaxValue, Builtin::u8)());
		#line 1339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a = Builtin::u8(13U);
		#line 1340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_or)(a, Builtin::u8(250U)) == ADV_USPCS(MaxValue, Builtin::u8)()), u"a+|250u8==u8.MaxValue");
		#line 1341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		{
			#line 1342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_add_mod_qst)(a, Builtin::u8(250U));
			#line 1343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			ADV_ASSERT((result == Builtin::u8((unsigned char)7) && overflowed), u"result==7&&overflowed");
		}
		#line 1346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a = ADV_USPCS(MaxValue, Builtin::u8)() - Builtin::u8((unsigned char)1);
		#line 1347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_add_qst_postfix)(a) == ADV_USPCS(MaxValue, Builtin::u8)() - Builtin::u8((unsigned char)1)), u"a++?==u8.MaxValue-1");
		#line 1348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::u8)()), u"a==u8.MaxValue");
		#line 1349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_UFCS(_operator_add_add_mod_postfix)(a);
		#line 1350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::u8)()), u"a==u8.MinValue");
		#line 1351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a = ADV_USPCS(MaxValue, Builtin::u8)();
		#line 1352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_UFCS(_operator_add_add_or_postfix)(a);
		#line 1353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::u8)()), u"a==u8.MaxValue");
		#line 1355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		{
			#line 1356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.__ref(), Builtin::u8(0U), false);
			#line 1357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			ADV_ASSERT((result == ADV_USPCS(MaxValue, Builtin::u8)() && !overflowed), u"result==u8.MaxValue&&!overflowed");
		}
		#line 1359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		{
			#line 1360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.__ref(), Builtin::u8(0U), true);
			#line 1361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			ADV_ASSERT((result == ADV_USPCS(MinValue, Builtin::u8)() && overflowed), u"result==u8.MinValue&&overflowed");
		}
		#line 1363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		{
			#line 1364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.__ref(), Builtin::u8(10U), true);
			#line 1365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			ADV_ASSERT((result == Builtin::u8((unsigned char)10) && overflowed), u"result==10&&overflowed");
		}
		#line 1368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_qst)(a, Builtin::u8(100U)) == Builtin::u8((unsigned char)155)), u"a-?100u8==155");
		#line 1369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_qst)(Builtin::u8(10U), ADV_USPCS(MaxValue, Builtin::u8)()) == nullptr), u"10u8-?u8.MaxValue==null");
		#line 1370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_UFCS(_operator_sub_qst_eq)(a, Builtin::u8(133U));
		#line 1371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a == Builtin::u8((unsigned char)122)), u"a==122");
		#line 1372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_UFCS(_operator_sub_qst_eq)(a, Builtin::u8(120U));
		#line 1373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a == Builtin::u8((unsigned char)2)), u"a==2");
		#line 1374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_ne)(a, Builtin::u8(1U)) == Builtin::u8((unsigned char)1)), u"a-!1u8==1");
		#line 1375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_mod)(a, Builtin::u8(255U)) == Builtin::u8((unsigned char)3)), u"a-%255u8==3");
		#line 1376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_UFCS(_operator_sub_mod_eq)(a, ADV_USPCS(MaxValue, Builtin::u8)());
		#line 1377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a == Builtin::u8((unsigned char)3)), u"a==3");
		#line 1378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_or)(a, Builtin::u8((unsigned char)4)) == ADV_USPCS(MinValue, Builtin::u8)()), u"a-|4==u8.MinValue");
		#line 1379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_UFCS(_operator_sub_or_eq)(a, ADV_USPCS(MaxValue, Builtin::u8)());
		#line 1380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::u8)()), u"a==u8.MinValue");
		#line 1381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		{
			#line 1382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_sub_mod_qst)(a, Builtin::u8(2U));
			#line 1383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			ADV_ASSERT((result == Builtin::u8((unsigned char)254) && overflowed), u"result==254&&overflowed");
		}
		#line 1386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a = ADV_USPCS(MinValue, Builtin::u8)() + Builtin::u8((unsigned char)1);
		#line 1387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_sub_qst_postfix)(a) == ADV_USPCS(MinValue, Builtin::u8)() + Builtin::u8((unsigned char)1)), u"a--?==u8.MinValue+1");
		#line 1388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::u8)()), u"a==u8.MinValue");
		#line 1389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_UFCS(_operator_sub_sub_mod_postfix)(a);
		#line 1390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::u8)()), u"a==u8.MaxValue");
		#line 1391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a = ADV_USPCS(MinValue, Builtin::u8)();
		#line 1392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_UFCS(_operator_sub_sub_or_postfix)(a);
		#line 1393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::u8)()), u"a==u8.MinValue");
		#line 1395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		{
			#line 1396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.__ref(), Builtin::u8(0U), false);
			#line 1397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			ADV_ASSERT((result == ADV_USPCS(MinValue, Builtin::u8)() && !overflowed), u"result==u8.MinValue&&!overflowed");
		}
		#line 1399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		{
			#line 1400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.__ref(), Builtin::u8(0U), true);
			#line 1401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			ADV_ASSERT((result == ADV_USPCS(MaxValue, Builtin::u8)() && overflowed), u"result==u8.MaxValue&&overflowed");
		}
		#line 1403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		{
			#line 1404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.__ref(), Builtin::u8(10U), true);
			#line 1405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			ADV_ASSERT((result == Builtin::u8((unsigned char)245) && overflowed), u"result==245&&overflowed");
		}
		#line 1408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_qst)(a, Builtin::u8(1U)) == ADV_USPCS(MinValue, Builtin::u8)()), u"a*?1u8==u8.MinValue");
		#line 1409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a = Builtin::u8((unsigned char)15);
		#line 1410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_qst)(a, Builtin::u8(20U)) == nullptr), u"a*?20u8==null");
		#line 1411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_UFCS(_operator_mul_qst_eq)(a, Builtin::u8(5U));
		#line 1412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a == Builtin::u8((unsigned char)75)), u"a==75");
		#line 1413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a = Builtin::u8((unsigned char)15);
		#line 1414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a == Builtin::u8((unsigned char)15)), u"a==15");
		#line 1415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_ne)(a, Builtin::u8(3U)) == Builtin::u8((unsigned char)45)), u"a*!3u8==45");
		#line 1416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_mod)(a, Builtin::u8(6U)) == Builtin::u8((unsigned char)90)), u"a*%6u8==90");
		#line 1417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_mod)(a, Builtin::u8(20U)) == Builtin::u8((unsigned char)44)), u"a*%20u8==44");
		#line 1418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_UFCS(_operator_mul_mod_eq)(a, Builtin::u8(6U));
		#line 1419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a == Builtin::u8((unsigned char)90)), u"a==90");
		#line 1420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_or)(a, Builtin::u8(10U)) == ADV_USPCS(MaxValue, Builtin::u8)()), u"a*|10u8==u8.MaxValue");
		#line 1421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_UFCS(_operator_mul_or_eq)(a, Builtin::u8(3U));
		#line 1422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::u8)()), u"a==u8.MaxValue");
		#line 1423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_or)(a, Builtin::u8(2U)) == ADV_USPCS(MaxValue, Builtin::u8)()), u"a*|2u8==u8.MaxValue");
		#line 1424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		{
			#line 1425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_mul_mod_qst)(a, Builtin::u8(2U));
			#line 1426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			ADV_ASSERT((result == Builtin::u8((unsigned char)254) && overflowed), u"result==254&&overflowed");
		}
		#line 1428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a = Builtin::u8((unsigned char)5);
		#line 1429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		{
			#line 1430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			const auto& [low, high] = ADV_UFCS(_operator_mul_gt)(a, (Builtin::u8(120U)));
			#line 1431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			ADV_ASSERT((low == Builtin::u8((unsigned char)88) && high == Builtin::u8((unsigned char)2)), u"low==88&&high==2");
		}
		#line 1433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a = ADV_USPCS(MaxValue, Builtin::u8)();
		#line 1434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		{
			#line 1435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			const auto& [low, high] = ADV_UFCS(CarryingMul)(a.__ref(), Builtin::u8(2U), Builtin::u8(12U));
			#line 1436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			ADV_ASSERT((low == Builtin::u8((unsigned char)10) && high == Builtin::u8((unsigned char)2)), u"low==10&&high==2");
		}
		#line 1439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a = Builtin::u8((unsigned char)10);
		#line 1440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, Builtin::u8((unsigned char)6)) == Builtin::u8((unsigned char)1)), u"a\\6==1");
		#line 1441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a /= Builtin::u8((unsigned char)6);
		#line 1442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a == Builtin::u8((unsigned char)2)), u"a==2");
		#line 1443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a = Builtin::u8((unsigned char)10);
		#line 1444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		{
			#line 1445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)(a, Builtin::u8((unsigned char)6));
			#line 1446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			ADV_ASSERT((div == Builtin::u8((unsigned char)1) && rem == Builtin::u8((unsigned char)4)), u"div==1&&rem==4");
		}
		#line 1448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_qst)(a, Builtin::u8((unsigned char)5)) == Builtin::u8((unsigned char)2)), u"a\\?5==2");
		#line 1449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_qst)(a, Builtin::u8((unsigned char)0)) == nullptr), u"a\\?0==null");
		#line 1451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_ne)(a, Builtin::u8((unsigned char)5)) == Builtin::u8((unsigned char)2)), u"a\\!5==2");
		#line 1452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_UFCS(_operator_bsl_mod_eq)(a, Builtin::u8((unsigned char)5));
		#line 1453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a == Builtin::u8((unsigned char)2)), u"a==2");
		#line 1454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a = Builtin::u8((unsigned char)10);
		#line 1455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_UFCS(_operator_bsl_or_eq)(a, Builtin::u8((unsigned char)5));
		#line 1456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a == Builtin::u8((unsigned char)2)), u"a==2");
		#line 1457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a = Builtin::u8((unsigned char)10);
		#line 1459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_bsl)(a, Builtin::u8((unsigned char)5)) == Builtin::u8((unsigned char)2)), u"a\\\\5==2");
		#line 1460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_bsl)(a, Builtin::u8((unsigned char)6)) == nullptr), u"a\\\\6==null");
		#line 1461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_bsl_qst)(a, Builtin::u8((unsigned char)0)) == nullptr), u"a\\\\?0==null");
		#line 1463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_not)(a, Builtin::u8((unsigned char)6)) == Builtin::u8((unsigned char)2)), u"a/~6==2");
		#line 1464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_lt)(a, Builtin::u8((unsigned char)6)) == Builtin::u8((unsigned char)1)), u"a/<6==1");
		#line 1465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_gt)(a, Builtin::u8((unsigned char)6)) == Builtin::u8((unsigned char)2)), u"a/>6==2");
		#line 1467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_qst)(a, Builtin::u8((unsigned char)5)) == Builtin::u8((unsigned char)0)), u"a%?5==0");
		#line 1468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_qst)(a, Builtin::u8((unsigned char)0)) == nullptr), u"a%?0==null");
		#line 1470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_ne)(a, Builtin::u8((unsigned char)6)) == Builtin::u8((unsigned char)4)), u"a%!6==4");
		#line 1471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_UFCS(_operator_mod_mod_eq)(a, Builtin::u8((unsigned char)6));
		#line 1472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a == Builtin::u8((unsigned char)4)), u"a==4");
		#line 1473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a = Builtin::u8((unsigned char)10);
		#line 1475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_bsl)(ADV_USPCS(MaxValue, Builtin::u8)(), Builtin::u32(4U)) == Builtin::u8((unsigned char)0b00001111)), u"u8.MaxValue>>\\4u==0b0000_1111");
		#line 1476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_bsl)(ADV_USPCS(MaxValue, Builtin::u8)(), Builtin::u32(10U)) == Builtin::u8((unsigned char)0)), u"u8.MaxValue>>\\10u==0");
		#line 1477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_bsl)(ADV_USPCS(MinValue, Builtin::u8)(), Builtin::u32(10U)) == Builtin::u8((unsigned char)0)), u"u8.MinValue>>\\10u==0");
		#line 1478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_bsl)(ADV_USPCS(MaxValue, Builtin::u8)(), Builtin::u32(10U)) == Builtin::u8((unsigned char)0)), u"u8.MaxValue<<\\10u==0");
		#line 1479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_qst)(ADV_USPCS(MaxValue, Builtin::u8)(), Builtin::u8((unsigned char)4)) == Builtin::u8((unsigned char)0b00001111)), u"u8.MaxValue>>?4==0b0000_1111");
		#line 1480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_qst)(ADV_USPCS(MaxValue, Builtin::u8)(), Builtin::u8((unsigned char)10)) == nullptr), u"u8.MaxValue>>?10==null");
		#line 1481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_qst)(ADV_USPCS(MaxValue, Builtin::u8)(), Builtin::u8((unsigned char)10)) == nullptr), u"u8.MaxValue<<?10==null");
		#line 1482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_ne)(ADV_USPCS(MaxValue, Builtin::u8)(), Builtin::u8((unsigned char)4)) == Builtin::u8((unsigned char)0b00001111)), u"u8.MaxValue>>!4==0b0000_1111");
		#line 1483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_mod)(ADV_USPCS(MaxValue, Builtin::u8)(), Builtin::u8((unsigned char)12)) == Builtin::u8((unsigned char)0b00001111)), u"u8.MaxValue>>%12==0b0000_1111");
		#line 1484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a = ADV_USPCS(MaxValue, Builtin::u8)();
		#line 1485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_UFCS(_operator_gt_gt_mod_eq)(a, Builtin::u8((unsigned char)12));
		#line 1486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_mod)(a, Builtin::u8((unsigned char)12)) == Builtin::u8((unsigned char)0b11110000)), u"a<<%12==0b1111_0000");
		#line 1487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		{
			#line 1488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_gt_gt_mod_qst)(ADV_USPCS(MaxValue, Builtin::u8)(), Builtin::u8((unsigned char)12));
			#line 1489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			ADV_ASSERT((result == Builtin::u8((unsigned char)0b00001111) && overflowed), u"result==0b0000_1111&&overflowed");
		}
		#line 1493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a = Builtin::u8(7U);
		#line 1494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor)(a, Builtin::u32(2U)) == Builtin::u8((unsigned char)49)), u"a^^2u==49");
		#line 1495 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_UFCS(_operator_xor_xor_eq)(a, Builtin::u32(2U));
		#line 1496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a == Builtin::u8((unsigned char)49)), u"a==49");
		#line 1497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor)(Builtin::u8(3U), Builtin::u32(4U)) == Builtin::u8((unsigned char)81)), u"3u8^^4u==81");
		#line 1498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_qst)(Builtin::u8(3U), Builtin::u32(4U)) == Builtin::u8((unsigned char)81)), u"3u8^^?4u==81");
		#line 1499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_qst)(Builtin::u8(3U), Builtin::u32(6U)) == nullptr), u"3u8^^?6u==null");
		#line 1500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_UFCS(_operator_xor_xor_qst_eq)(a, Builtin::u32(2U));
		#line 1501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a == Builtin::u8((unsigned char)49)), u"a==49");
		#line 1502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_ne)(Builtin::u8(3U), Builtin::u32(4U)) == Builtin::u8((unsigned char)81)), u"3u8^^!4u==81");
		#line 1503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_mod)(Builtin::u8(3U), Builtin::u32(6U)) == Builtin::u8((unsigned char)217)), u"3u8^^%6u==217");
		#line 1504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_UFCS(_operator_xor_xor_mod_eq)(a, Builtin::u32(2U));
		#line 1505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a == Builtin::u8((unsigned char)97)), u"a==97");
		#line 1506 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_or)(Builtin::u8(3U), Builtin::u32(4U)) == Builtin::u8((unsigned char)81)), u"3u8^^|4u==81");
		#line 1507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_or)(Builtin::u8(3U), Builtin::u32(6U)) == ADV_USPCS(MaxValue, Builtin::u8)()), u"3u8^^|6u==u8.MaxValue");
		#line 1508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		{
			#line 1509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_xor_xor_mod_qst)(Builtin::u8(3U), Builtin::u32(6U));
			#line 1510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			ADV_ASSERT((result == Builtin::u8((unsigned char)217) && overflowed), u"result==217&&overflowed");
		}
		return true;
	}();
	#endif	
} namespace __extensions { using namespace System;
#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	auto _operator_eq_eq_mul(__extension_UInt8_20_u8 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool
	{
		#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		{
			#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			auto __tmp0 = Builtin::Cast<false, __extension_UInt8_1114_u8>(obj);
			#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			if ((__tmp0.IsValid())) {
				#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				const auto& obj = *__tmp0;
				
				#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				return __this == obj;
			}
		}
		#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return false;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	auto _operator_lt_eq_gt_mul(__extension_UInt8_73_u8 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32
	{
		#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		{
			#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			auto __tmp0 = Builtin::Cast<false, __extension_UInt8_1114_u8>(obj);
			#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			if ((__tmp0.IsValid())) {
				#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				const auto& obj = *__tmp0;
				
				#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				return __this <=> obj;
			}
		}
		#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		{
			#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			if ((!Builtin::Is(obj, nullptr))) {
				#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				auto __tmp0 = *obj; const auto& obj = __tmp0;
				
				#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				Builtin::Throw(Builtin::InvalidOperationException{});
			}
		}
		#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return Builtin::u8((unsigned char)1);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	auto Parse(__extension_UInt8_214_u8 const& __this LIFETIMEBOUND, Builtin::Str input)  -> const typename __extension_UInt8_214_u8
	{
		#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return Builtin::u8(0U);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	auto TryParse(__extension_UInt8_214_u8 const& __this LIFETIMEBOUND, Builtin::Str input) noexcept -> const Builtin::Nullable<__extension_UInt8_1114_u8>
	{
		#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return Builtin::u8(0U);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	auto Log(__extension_UInt8_285_u8 const& __this LIFETIMEBOUND, __extension_UInt8_1114_u8 base)  -> const typename __extension_UInt8_285_u8
	{
		#line 372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (const auto result = ADV_UFCS(CheckedLog)(__this.__ref(), base)) {
			{
				#line 372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				return result;
			}
		}
		#line 375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> auto _operator_add_mod_qst(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<__extension_UInt8_1114_u8, bool>
	{
		#line 450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +%? implemented only for integer types");
		#line 451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		__extension_UInt8_1114_u8 result{}; 
		#line 452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		auto overflowed = !Builtin::SafeAdd(__this, rhs, result); 
		#line 453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> auto _operator_sub_mod_qst(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<__extension_UInt8_1114_u8, bool>
	{
		#line 542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -%? implemented only for integer types");
		#line 543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		__extension_UInt8_1114_u8 result{}; 
		#line 544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		auto overflowed = !Builtin::SafeSubtract(__this, rhs, result); 
		#line 545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> auto _operator_mul_mod_qst(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<__extension_UInt8_1114_u8, bool>
	{
		#line 616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *%? implemented only for integer types");
		#line 617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		__extension_UInt8_1114_u8 result{}; 
		#line 618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		auto overflowed = !Builtin::SafeMultiply(__this, rhs, result); 
		#line 619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> auto _operator_bsl_mod_qst(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_UInt8_1114_u8, bool>
	{
		#line 678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\%? implemented only for integer types");
		#line 679 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		__extension_UInt8_1114_u8 result{}; 
		#line 680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		auto overflowed = !Builtin::SafeDivide(__this, rhs, result); 
		#line 681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	template<class T> auto _operator_mod_mod_qst(__extension_UInt8_393_u8 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_UInt8_1114_u8, bool>
	{
		#line 739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %%? implemented only for integer types");
		#line 740 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		__extension_UInt8_1114_u8 result{}; 
		#line 741 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		auto overflowed = !Builtin::SafeModulus(__this, rhs, result); 
		#line 742 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	auto getCheckedIsqrt(__extension_UInt8_990_u8 const& __this ) -> const Builtin::Nullable<__extension_UInt8_1114_u8>
	{
		#line 1000 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		constexpr auto MAX_RESULT = ADV_USFCS((Math), Isqrt8)(ADV_USPCS(MaxValue, __extension_UInt8_1114_u8)());
		#line 1001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		const auto result = ADV_USFCS((Math), Isqrt8)(__this); 
		#line 1002 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ASSUME((result <=> MAX_RESULT) <= 0);
		#line 1003 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return result;
	}
	} namespace System{

}