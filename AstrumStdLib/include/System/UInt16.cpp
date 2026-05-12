#include "Math.h"
#include "UInt16.h"

namespace System {
//###############################################################################
//# Global type aliases
//###############################################################################
//###############################################################################
//# Type definitions
//###############################################################################

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
















static_assert(Builtin::usize(sizeof(Builtin::u16)) == Builtin::i32(2), "u16 should be 2 bytes");
static_assert(ADV_USPCS(MinValue, Builtin::u16)() == Builtin::i32(0), "u16.Min should be 0");
static_assert(ADV_USPCS(MaxValue, Builtin::u16)() == Builtin::i32(0xFFFF), "u16.Max should be 0xFFFF");
static_assert(ADV_UFCS_NONLOCAL(_operator_gt_gt_not)(ADV_USPCS(One, Builtin::u16)(), Builtin::i32(3)) == Builtin::i32(0b0010000000000000), "u16.One >>% 3 == 0b0010_0000_0000_0000");
static_assert(!ADV_USPCS(IsSigned, Builtin::u16)(), "u16 must be unsigned");
static_assert(ADV_USPCS(MaxDigitCount, Builtin::u16)() == Builtin::i32(5), "u16 max digit count must be 5");
static_assert(ADV_UFCS_NONLOCAL(_operator_xor_xor)(Builtin::u16(2U), Builtin::u32(15U)) == Builtin::i32(32768), "2u16 ^^ 15u == 32768");
static_assert(Builtin::TypeIs<Builtin::u16, IComparable<Builtin::u16>>(), "u16 should implement IComparable<u16>");
static_assert(Builtin::TypeIs<Builtin::u16, IEquatable<Builtin::u16>>(), "u16 should implement IEquatable<u16>");
static_assert(Builtin::TypeIs<Builtin::u16, ISelfComparable>(), "u16 should implement ISelfComparable");
static_assert(Builtin::TypeIs<Builtin::u16, ISelfEquatable>(), "u16 should implement ISelfEquatable");
static_assert(Builtin::TypeIs<Builtin::u16, IAdditionOperators<Builtin::u16, Builtin::u16>>(), "u16 should implement IAdditionOperators<u16, u16>");
static_assert(Builtin::TypeIs<Builtin::u16, ISubtractionOperators<Builtin::u16, Builtin::u16>>(), "u16 should implement ISubtractionOperators<u16, u16>");
static_assert(Builtin::TypeIs<Builtin::u16, IMultiplyOperators<Builtin::u16, Builtin::u16>>(), "u16 should implement IMultiplyOperators<u16, u16>");
static_assert(Builtin::TypeIs<Builtin::u16, IDivisionOperators<Builtin::u16, Builtin::f64>>(), "u16 should implement IDivisionOperators<u16, f64>");
static_assert(Builtin::TypeIs<Builtin::u16, IIntDivOperators<Builtin::u16, Builtin::u16>>(), "u16 should implement IIntDivOperators<u16, u16>");
static_assert(Builtin::TypeIs<Builtin::u16, IModulusOperators<Builtin::u16, Builtin::u16>>(), "u16 should implement IModulusOperators<u16, u16>");
static_assert(Builtin::TypeIs<Builtin::u16, IBitwiseOperators<Builtin::u16, Builtin::u16>>(), "u16 should implement IBitwiseOperators<u16, u16>");
static_assert(Builtin::TypeIs<Builtin::u16, IShiftOperators<Builtin::u16, Builtin::u16>>(), "u16 should implement IShiftOperators<u16, u16>");
static_assert(Builtin::TypeIs<Builtin::u16, IUnaryPlusOperators<Builtin::u16>>(), "u16 should implement IUnaryPlusOperators<u16>");
static_assert(Builtin::TypeIs<Builtin::u16, IUnaryNegationOperators<Builtin::u16>>(), "u16 should implement IUnaryNegationOperators<u16>");
static_assert(Builtin::TypeIs<Builtin::u16, IIncrementOperators<Builtin::u16>>(), "u16 should implement IIncrementOperators<u16>");
static_assert(Builtin::TypeIs<Builtin::u16, IDecrementOperators<Builtin::u16>>(), "u16 should implement IDecrementOperators<u16>");
static_assert(ADV_UFCS_NONLOCAL(_operator_add_mod)(ADV_USPCS(MaxValue, Builtin::u16)(), Builtin::u16(1U)) == ADV_USPCS(MinValue, Builtin::u16)(), "u16.MaxValue +% 1u16 == u16.MinValue");
static_assert(ADV_UFCS_NONLOCAL(_operator_add_or)(ADV_USPCS(MaxValue, Builtin::u16)(), Builtin::u16(1U)) == ADV_USPCS(MaxValue, Builtin::u16)(), "u16.MaxValue +| 1u16 == u16.MaxValue");
#ifdef ADV_UNITTEST
	#line 1180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	static bool __Test_4be63a99e5b3ef70 = [](){
		#line 1182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		Builtin::u16 a = Builtin::u16(5U); 
		#line 1185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a + Builtin::i8(10) == Builtin::u16((unsigned short)15)), u"a+10i8==15");
		#line 1186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a + Builtin::u8(10U) == Builtin::u16((unsigned short)15)), u"a+10u8==15");
		#line 1187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a + Builtin::i16(10) == Builtin::u16((unsigned short)15)), u"a+10i16==15");
		#line 1188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a + Builtin::u16(10U) == Builtin::u16((unsigned short)15)), u"a+10u16==15");
		#line 1189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a + Builtin::i32(10) == Builtin::u16((unsigned short)15)), u"a+10i32==15");
		#line 1190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a + Builtin::u32(10U) == Builtin::u16((unsigned short)15)), u"a+10u32==15");
		#line 1191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a + Builtin::i64(10LL) == Builtin::u16((unsigned short)15)), u"a+10i64==15");
		#line 1192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a + Builtin::u64(10ULL) == Builtin::u16((unsigned short)15)), u"a+10u64==15");
		#line 1193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a + Builtin::i128(10LL) == Builtin::u16((unsigned short)15)), u"a+10i128==15");
		#line 1194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a + Builtin::u128(10ULL) == Builtin::u16((unsigned short)15)), u"a+10u128==15");
		#line 1197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a - Builtin::u16((unsigned short)2) == Builtin::u16((unsigned short)3)), u"a-2==3");
		#line 1198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a * Builtin::u16((unsigned short)2) == Builtin::u16((unsigned short)10)), u"a*2==10");
		#line 1199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, Builtin::u16((unsigned short)2)) == Builtin::u16((unsigned short)2)), u"a\\2==2");
		#line 1200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a % Builtin::u16((unsigned short)2) == Builtin::u16((unsigned short)1)), u"a%2==1");
		#line 1201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT(((a & Builtin::u16((unsigned short)1)) == Builtin::u16((unsigned short)1)), u"(a&1)==1");
		#line 1202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT(((a | Builtin::u16((unsigned short)1)) == Builtin::u16((unsigned short)5)), u"(a|1)==5");
		#line 1203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT(((a ^ Builtin::u16((unsigned short)1)) == Builtin::u16((unsigned short)4)), u"(a^1)==4");
		#line 1204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a << Builtin::u16((unsigned short)1) == Builtin::u16((unsigned short)10)), u"a<<1==10");
		#line 1205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a >> Builtin::u16((unsigned short)1) == Builtin::u16((unsigned short)2)), u"a>>1==2");
		#line 1206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a = Builtin::u16((unsigned short)0b11111011);
		#line 1207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_UFCS(_operator_gt_gt_gt_eq)(a, Builtin::u16((unsigned short)2));
		#line 1208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a == Builtin::u16((unsigned short)0b00111110)), u"a==0b0011_1110");
		#line 1209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_gt)(a, Builtin::u16((unsigned short)2)) == Builtin::u16((unsigned short)0b00001111)), u"a>>>2==0b0000_1111");
		#line 1210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_gt)(a, Builtin::u16((unsigned short)7)) == Builtin::u16((unsigned short)0)), u"a>>>7==0");
		#line 1213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a = Builtin::u16((unsigned short)5);
		#line 1214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a == Builtin::u16((unsigned short)5)), u"a==5");
		#line 1215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a != Builtin::u16((unsigned short)6)), u"a!=6");
		#line 1216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT(((a <=> Builtin::u16((unsigned short)6)) < 0), u"a<6");
		#line 1217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT(((a <=> Builtin::u16((unsigned short)5)) <= 0), u"a<=5");
		#line 1218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT(((a <=> Builtin::u16((unsigned short)4)) > 0), u"a>4");
		#line 1219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT(((a <=> Builtin::u16((unsigned short)5)) >= 0), u"a>=5");
		#line 1222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a = Builtin::u16(5U);
		#line 1223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a++;
		#line 1224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a--;
		#line 1225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a += Builtin::u16((unsigned short)5);
		#line 1226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a -= Builtin::u16((unsigned short)5);
		#line 1227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a *= Builtin::u16((unsigned short)2);
		#line 1228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_UFCS(_operator_bsl_eq)(a, Builtin::u16((unsigned short)2));
		#line 1229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a %= Builtin::u16((unsigned short)1);
		#line 1230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a &= Builtin::u16((unsigned short)1);
		#line 1231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a |= Builtin::u16((unsigned short)1);
		#line 1232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a ^= Builtin::u16((unsigned short)1);
		#line 1233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a <<= Builtin::u16((unsigned short)1);
		#line 1234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a >>= Builtin::u16((unsigned short)1);
		#line 1235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a == Builtin::u16((unsigned short)0)), u"a==0");
		#line 1236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a = Builtin::u16(10U);
		#line 1237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_not)(a) == Builtin::u16((unsigned short)0b1111111111110101)), u"~a==0b1111_1111_1111_0101");
		#line 1240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		Builtin::u16 b = Builtin::u16(5U); 
		#line 1241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		Builtin::Nullable<Builtin::u16> c = nullptr; 
		#line 1242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		Builtin::Nullable<Builtin::u16> d = Builtin::u16(5U); 
		#line 1243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a != b), u"a!=b");
		#line 1244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((b != c), u"b!=c");
		#line 1245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((!Builtin::IdentityEquals(b, c)), u"b!==c");
		#line 1246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT(((b <=> c) > 0), u"b>c");
		#line 1247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((c != b), u"c!=b");
		#line 1248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((c == nullptr), u"c==null");
		#line 1249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((d != nullptr), u"d!=null");
		#line 1250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT(((c <=> d) < 0), u"c<d");
		#line 1251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((b == d), u"b==d");
		#line 1252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((Builtin::IdentityEquals(b, d)), u"b===d");
		#line 1255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		Builtin::Nullable<Builtin::ObjectRef> o = c; 
		#line 1256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		o = d;
		#line 1257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_ne_eq_mul)(b, o)), u"b!=*o");
		#line 1258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		IComparable<Builtin::u16> icomp = a; 
		#line 1259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT(((icomp <=> b) > 0), u"icomp>b");
		#line 1262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a = Builtin::u16(200U);
		#line 1263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(a.__ref()) == Builtin::u16((unsigned short)200)), u"a.HashCode==200");
		#line 1264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(a) == Builtin::u16((unsigned short)200)), u"#a==200");
		#line 1266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a = Builtin::u16(35000U);
		#line 1267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(ToUInt32)(a.__ref()) == Builtin::u16((unsigned short)35000)), u"a.ToUInt32()==35000");
		#line 1268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(NarrowToInt16)(a.__ref()) == Builtin::i32(-30536)), u"a.NarrowToInt16()==-30536");
		#line 1271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a = Builtin::u16(10U);
		#line 1272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		b = Builtin::u16(6U);
		#line 1273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(Abs)(b.__ref()) == Builtin::u16((unsigned short)6)), u"b.Abs==6");
		#line 1274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(IsFinite)(b.__ref())), u"b.IsFinite");
		#line 1275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(IsInteger)(b.__ref())), u"b.IsInteger");
		#line 1276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((!ADV_UPCS(IsNegative)(b.__ref())), u"!b.IsNegative");
		#line 1277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(IsPositive)(a.__ref())), u"a.IsPositive");
		#line 1278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(IsCanonical)(b.__ref())), u"b.IsCanonical");
		#line 1279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((!ADV_UPCS(IsComplexNumber)(b.__ref())), u"!b.IsComplexNumber");
		#line 1280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(IsRealNumber)(b.__ref())), u"b.IsRealNumber");
		#line 1281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((!ADV_UPCS(IsImaginaryNumber)(b.__ref())), u"!b.IsImaginaryNumber");
		#line 1282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(IsEvenInteger)(b.__ref())), u"b.IsEvenInteger");
		#line 1283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((!ADV_UPCS(IsOddInteger)(b.__ref())), u"!b.IsOddInteger");
		#line 1284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((!ADV_UPCS(IsInfinity)(b.__ref())), u"!b.IsInfinity");
		#line 1285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((!ADV_UPCS(IsPositiveInfinity)(b.__ref())), u"!b.IsPositiveInfinity");
		#line 1286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((!ADV_UPCS(IsNegativeInfinity)(b.__ref())), u"!b.IsNegativeInfinity");
		#line 1287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((!ADV_UPCS(IsNaN)(b.__ref())), u"!b.IsNaN");
		#line 1288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(IsNormal)(b.__ref())), u"b.IsNormal");
		#line 1289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((!ADV_UPCS(IsSubnormal)(b.__ref())), u"!b.IsSubnormal");
		#line 1290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((!ADV_UPCS(IsZero)(b.__ref())), u"!b.IsZero");
		#line 1293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(Sign)(a.__ref()) == +Builtin::u16((unsigned short)1)), u"a.Sign==+1");
		#line 1294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(CopySign)(a.__ref(), b) == a), u"a.CopySign(b)==a");
		#line 1295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(Max)(a.__ref(), b) == a), u"a.Max(b)==a");
		#line 1296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(Min)(a.__ref(), b) == b), u"a.Min(b)==b");
		#line 1297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(MaxNumber)(a.__ref(), b) == a), u"a.MaxNumber(b)==a");
		#line 1298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(MinNumber)(a.__ref(), b) == b), u"a.MinNumber(b)==b");
		#line 1299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(Clamp)(b.__ref(), Builtin::u16(1U), Builtin::u16(5U)) == Builtin::u16((unsigned short)5)), u"b.Clamp(1u16,5u16)==5");
		#line 1302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(IsPow2)(Builtin::u16(32768U).__ref())), u"32768u16.IsPow2");
		#line 1303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((!ADV_UPCS(IsPow2)(Builtin::u16(32000U).__ref())), u"!32000u16.IsPow2");
		#line 1304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::u16(2U).__ref()) == Builtin::u16((unsigned short)1)), u"2u16.Log2==1");
		#line 1305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::u16(16U).__ref()) == Builtin::u16((unsigned short)4)), u"16u16.Log2==4");
		#line 1306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::u16(64U).__ref()) == Builtin::u16((unsigned short)6)), u"64u16.Log2==6");
		#line 1307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::u16(35000U).__ref()) == Builtin::u16((unsigned short)15)), u"35000u16.Log2==15");
		#line 1308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::u16(2U).__ref()) == Builtin::u16((unsigned short)1)), u"2u16.Log2Ceiling==1");
		#line 1309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::u16(16U).__ref()) == Builtin::u16((unsigned short)4)), u"16u16.Log2Ceiling==4");
		#line 1310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::u16(65U).__ref()) == Builtin::u16((unsigned short)7)), u"65u16.Log2Ceiling==7");
		#line 1311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::u16(35000U).__ref()) == Builtin::u16((unsigned short)16)), u"35000u16.Log2Ceiling==16");
		#line 1312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(CheckedLog2)(Builtin::u16(0U).__ref()) == nullptr), u"0u16.CheckedLog2==null");
		#line 1313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(Builtin::u16(5U).__ref()) == Builtin::u16((unsigned short)0)), u"5u16.Log10==0");
		#line 1314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(a.__ref()) == Builtin::u16((unsigned short)1)), u"a.Log10==1");
		#line 1315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(ADV_USPCS(MaxValue, Builtin::u16)().__ref()) == Builtin::u16((unsigned short)4)), u"u16.MaxValue.Log10==4");
		#line 1316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(Log)(Builtin::u16(150U).__ref(), Builtin::u16(5U)) == Builtin::u16((unsigned short)3)), u"150u16.Log(5u16)==3");
		#line 1317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(Midpoint)(a.__ref(), Builtin::u16(30U)) == Builtin::u16((unsigned short)20)), u"a.Midpoint(30u16)==20");
		#line 1318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(Midpoint)(Builtin::u16(10000U).__ref(), ADV_USPCS(MaxValue, Builtin::u16)()) == Builtin::u16((unsigned short)37767)), u"10000u16.Midpoint(u16.MaxValue)==37767");
		#line 1319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)(a.__ref(), Builtin::u16(10U)) == Builtin::u16((unsigned short)10)), u"a.NextMultipleOf(10u16)==10");
		#line 1320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)(Builtin::u16(11U).__ref(), Builtin::u16(10U)) == Builtin::u16((unsigned short)20)), u"11u16.NextMultipleOf(10u16)==20");
		#line 1321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)(Builtin::u16(35000U).__ref(), Builtin::u16(80U)) == Builtin::u16((unsigned short)35040)), u"35000u16.NextMultipleOf(80u16)==35040");
		#line 1322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(ByteCount)(a.__ref()) == Builtin::u16((unsigned short)2)), u"a.ByteCount==2");
		#line 1323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(ByteSwapped)(Builtin::u16(0xabcdU).__ref()) == Builtin::u16((unsigned short)0xcdab)), u"0xabcd_u16.ByteSwapped==0xcdab");
		#line 1324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_not)(Builtin::u16(0b1010U), Builtin::u16((unsigned short)3)) == Builtin::u16((unsigned short)0b01010000)), u"0b1010_u16<<~3==0b0101_0000");
		#line 1325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_not)(Builtin::u16(0b1010U), Builtin::u16((unsigned short)5)) == Builtin::u16((unsigned short)0b101000000)), u"0b1010_u16<<~5==0b1_0100_0000");
		#line 1326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_not)(Builtin::u16(0b1010U), Builtin::u16((unsigned short)3)) == Builtin::u16((unsigned short)0b0100000000000001)), u"0b1010_u16>>~3==0b0100_0000_0000_0001");
		#line 1327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_not)(Builtin::u16(0b1010U), Builtin::u16((unsigned short)5)) == Builtin::u16((unsigned short)0b0101000000000000)), u"0b1010_u16>>~5==0b0101_0000_0000_0000");
		#line 1329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a = Builtin::u16(30000U);
		#line 1330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(MinimalBitWidth)(a.__ref()) == Builtin::u16((unsigned short)15)), u"a.MinimalBitWidth==15");
		#line 1331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(LeadingZeroCount)(a.__ref()) == Builtin::u16((unsigned short)1)), u"a.LeadingZeroCount==1");
		#line 1332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(TrailingZeroCount)(a.__ref()) == Builtin::u16((unsigned short)4)), u"a.TrailingZeroCount==4");
		#line 1333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(LeadingOneCount)(a.__ref()) == Builtin::u16((unsigned short)0)), u"a.LeadingOneCount==0");
		#line 1334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(TrailingOneCount)(a.__ref()) == Builtin::u16((unsigned short)0)), u"a.TrailingOneCount==0");
		#line 1335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(PopCount)(a.__ref()) == Builtin::u16((unsigned short)7)), u"a.PopCount==7");
		#line 1336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(ZeroCount)(a.__ref()) == Builtin::u16((unsigned short)9)), u"a.ZeroCount==9");
		#line 1337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(ReverseBits)(a.__ref()) == Builtin::u16((unsigned short)0b0000110010101110)), u"a.ReverseBits==0b0000_1100_1010_1110");
		#line 1338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(NextPow2)(a.__ref()) == Builtin::u16((unsigned short)32768)), u"a.NextPow2==32768");
		#line 1339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(PrevPow2)(a.__ref()) == Builtin::u16((unsigned short)16384)), u"a.PrevPow2==16384");
		#line 1340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(PrevPow2)(Builtin::u16(1U).__ref()) == Builtin::u16((unsigned short)0)), u"1u16.PrevPow2==0");
		#line 1341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(PrevPow2)(Builtin::u16(2U).__ref()) == Builtin::u16((unsigned short)2)), u"2u16.PrevPow2==2");
		#line 1342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(NextPow2)(Builtin::u16(2U).__ref()) == Builtin::u16((unsigned short)2)), u"2u16.NextPow2==2");
		#line 1343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(NextPow2)(Builtin::u16(3U).__ref()) == Builtin::u16((unsigned short)4)), u"3u16.NextPow2==4");
		#line 1344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(PrevPow2)(Builtin::u16(3U).__ref()) == Builtin::u16((unsigned short)2)), u"3u16.PrevPow2==2");
		#line 1345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(NextPow2)(Builtin::u16(32767U).__ref()) == Builtin::u16((unsigned short)32768)), u"32767u16.NextPow2==32768");
		#line 1346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(CheckedNextPow2)(Builtin::u16(32769U).__ref()) == nullptr), u"32769u16.CheckedNextPow2==null");
		#line 1348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(IsMultipleOf)(a.__ref(), Builtin::u16((unsigned short)5))), u"a.IsMultipleOf(5)");
		#line 1349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((!ADV_UFCS(IsMultipleOf)(a.__ref(), Builtin::u16((unsigned short)7))), u"!a.IsMultipleOf(7)");
		#line 1351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(MultiplyBy10)(Builtin::u16(10U).__ref()) == Builtin::u16((unsigned short)100)), u"10u16.MultiplyBy10==100");
		#line 1352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(MultiplyBy16)(Builtin::u16(10U).__ref()) == Builtin::u16((unsigned short)160)), u"10u16.MultiplyBy16==160");
		#line 1355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_qst)(a, Builtin::u16(100U)) == Builtin::u16((unsigned short)30100)), u"a+?100u16==30100");
		#line 1356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_qst)(a, ADV_USPCS(MaxValue, Builtin::u16)()) == nullptr), u"a+?u16.MaxValue==null");
		#line 1357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_UFCS(_operator_add_qst_eq)(a, Builtin::u16(5U));
		#line 1358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a == Builtin::u16((unsigned short)30005)), u"a==30005");
		#line 1359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_UFCS(_operator_add_qst_eq)(a, Builtin::u16(55000U));
		#line 1360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a == Builtin::u16((unsigned short)30005)), u"a==30005");
		#line 1361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_ne)(a, Builtin::u16(100U)) == Builtin::u16((unsigned short)30105)), u"a+!100u16==30105");
		#line 1362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_mod)(a, Builtin::u16(100U)) == Builtin::u16((unsigned short)30105)), u"a+%100u16==30105");
		#line 1363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_mod)(a, Builtin::u16(35531U)) == ADV_USPCS(MinValue, Builtin::u16)()), u"a+%35531u16==u16.MinValue");
		#line 1364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_UFCS(_operator_add_mod_eq)(a, ADV_USPCS(MaxValue, Builtin::u16)());
		#line 1365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a == Builtin::u16((unsigned short)30004)), u"a==30004");
		#line 1366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_or)(a, Builtin::u16(50000U)) == ADV_USPCS(MaxValue, Builtin::u16)()), u"a+|50000u16==u16.MaxValue");
		#line 1367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_UFCS(_operator_add_or_eq)(a, ADV_USPCS(MaxValue, Builtin::u16)());
		#line 1368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a = Builtin::u16(30005U);
		#line 1369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_or)(a, Builtin::u16(60000U)) == ADV_USPCS(MaxValue, Builtin::u16)()), u"a+|60000u16==u16.MaxValue");
		#line 1370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		{
			#line 1371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_add_mod_qst)(a, ADV_USPCS(MaxValue, Builtin::u16)());
			#line 1372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			ADV_ASSERT((result == Builtin::u16((unsigned short)30004) && overflowed), u"result==30004&&overflowed");
		}
		#line 1375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a = ADV_USPCS(MaxValue, Builtin::u16)() - Builtin::u16((unsigned short)1);
		#line 1376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_add_qst_postfix)(a) == ADV_USPCS(MaxValue, Builtin::u16)() - Builtin::u16((unsigned short)1)), u"a++?==u16.MaxValue-1");
		#line 1377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::u16)()), u"a==u16.MaxValue");
		#line 1378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_UFCS(_operator_add_add_mod_postfix)(a);
		#line 1379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::u16)()), u"a==u16.MinValue");
		#line 1380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a = ADV_USPCS(MaxValue, Builtin::u16)();
		#line 1381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_UFCS(_operator_add_add_or_postfix)(a);
		#line 1382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::u16)()), u"a==u16.MaxValue");
		#line 1384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		{
			#line 1385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.__ref(), Builtin::u16(0U), false);
			#line 1386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			ADV_ASSERT((result == ADV_USPCS(MaxValue, Builtin::u16)() && !overflowed), u"result==u16.MaxValue&&!overflowed");
		}
		#line 1388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		{
			#line 1389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.__ref(), Builtin::u16(0U), true);
			#line 1390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			ADV_ASSERT((result == ADV_USPCS(MinValue, Builtin::u16)() && overflowed), u"result==u16.MinValue&&overflowed");
		}
		#line 1392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		{
			#line 1393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.__ref(), Builtin::u16(10U), true);
			#line 1394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			ADV_ASSERT((result == Builtin::u16((unsigned short)10) && overflowed), u"result==10&&overflowed");
		}
		#line 1397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_qst)(a, Builtin::u16(10000U)) == Builtin::u16((unsigned short)55535)), u"a-?10000u16==55535");
		#line 1398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_qst)(Builtin::u16(10U), ADV_USPCS(MaxValue, Builtin::u16)()) == nullptr), u"10u16-?u16.MaxValue==null");
		#line 1399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_UFCS(_operator_sub_qst_eq)(a, Builtin::u16(13300U));
		#line 1400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a == Builtin::u16((unsigned short)52235)), u"a==52235");
		#line 1401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_UFCS(_operator_sub_qst_eq)(a, Builtin::u16(55000U));
		#line 1402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a == Builtin::u16((unsigned short)52235)), u"a==52235");
		#line 1403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_ne)(a, Builtin::u16(1U)) == Builtin::u16((unsigned short)52234)), u"a-!1u16==52234");
		#line 1404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_mod)(a, Builtin::u16(60000U)) == Builtin::u16((unsigned short)57771)), u"a-%60000u16==57771");
		#line 1405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_UFCS(_operator_sub_mod_eq)(a, ADV_USPCS(MaxValue, Builtin::u16)());
		#line 1406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a == Builtin::u16((unsigned short)52236)), u"a==52236");
		#line 1407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_or)(a, Builtin::u16((unsigned short)60000)) == ADV_USPCS(MinValue, Builtin::u16)()), u"a-|60000==u16.MinValue");
		#line 1408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_UFCS(_operator_sub_or_eq)(a, ADV_USPCS(MaxValue, Builtin::u16)());
		#line 1409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::u16)()), u"a==u16.MinValue");
		#line 1410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		{
			#line 1411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_sub_mod_qst)(a, Builtin::u16(2U));
			#line 1412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			ADV_ASSERT((result == Builtin::u16((unsigned short)65534) && overflowed), u"result==65534&&overflowed");
		}
		#line 1415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a = ADV_USPCS(MinValue, Builtin::u16)() + Builtin::u16((unsigned short)1);
		#line 1416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_sub_qst_postfix)(a) == ADV_USPCS(MinValue, Builtin::u16)() + Builtin::u16((unsigned short)1)), u"a--?==u16.MinValue+1");
		#line 1417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::u16)()), u"a==u16.MinValue");
		#line 1418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_UFCS(_operator_sub_sub_mod_postfix)(a);
		#line 1419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::u16)()), u"a==u16.MaxValue");
		#line 1420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a = ADV_USPCS(MinValue, Builtin::u16)();
		#line 1421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_UFCS(_operator_sub_sub_or_postfix)(a);
		#line 1422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::u16)()), u"a==u16.MinValue");
		#line 1424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		{
			#line 1425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.__ref(), Builtin::u16(0U), false);
			#line 1426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			ADV_ASSERT((result == ADV_USPCS(MinValue, Builtin::u16)() && !overflowed), u"result==u16.MinValue&&!overflowed");
		}
		#line 1428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		{
			#line 1429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.__ref(), Builtin::u16(0U), true);
			#line 1430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			ADV_ASSERT((result == ADV_USPCS(MaxValue, Builtin::u16)() && overflowed), u"result==u16.MaxValue&&overflowed");
		}
		#line 1432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		{
			#line 1433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.__ref(), Builtin::u16(10U), true);
			#line 1434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			ADV_ASSERT((result == Builtin::u16((unsigned short)65525) && overflowed), u"result==65525&&overflowed");
		}
		#line 1437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_qst)(a, Builtin::u16(1U)) == ADV_USPCS(MinValue, Builtin::u16)()), u"a*?1u16==u16.MinValue");
		#line 1438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a = Builtin::u16((unsigned short)1500);
		#line 1439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_qst)(a, Builtin::u16(200U)) == nullptr), u"a*?200u16==null");
		#line 1440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_UFCS(_operator_mul_qst_eq)(a, Builtin::u16(50U));
		#line 1441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a == Builtin::u16((unsigned short)1500)), u"a==1500");
		#line 1442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a = Builtin::u16((unsigned short)15);
		#line 1443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a == Builtin::u16((unsigned short)15)), u"a==15");
		#line 1444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_ne)(a, Builtin::u16(3U)) == Builtin::u16((unsigned short)45)), u"a*!3u16==45");
		#line 1445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_mod)(a, Builtin::u16(6U)) == Builtin::u16((unsigned short)90)), u"a*%6u16==90");
		#line 1446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_mod)(a, Builtin::u16(5000U)) == Builtin::u16((unsigned short)9464)), u"a*%5000u16==9464");
		#line 1447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_UFCS(_operator_mul_mod_eq)(a, Builtin::u16(5000U));
		#line 1448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a == Builtin::u16((unsigned short)9464)), u"a==9464");
		#line 1449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_or)(a, Builtin::u16(5000U)) == ADV_USPCS(MaxValue, Builtin::u16)()), u"a*|5000u16==u16.MaxValue");
		#line 1450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_UFCS(_operator_mul_or_eq)(a, Builtin::u16(5000U));
		#line 1451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::u16)()), u"a==u16.MaxValue");
		#line 1452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_or)(a, Builtin::u16(2U)) == ADV_USPCS(MaxValue, Builtin::u16)()), u"a*|2u16==u16.MaxValue");
		#line 1453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		{
			#line 1454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_mul_mod_qst)(a, Builtin::u16(2U));
			#line 1455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			ADV_ASSERT((result == Builtin::u16((unsigned short)65534) && overflowed), u"result==65534&&overflowed");
		}
		#line 1457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a = Builtin::u16(500U);
		#line 1458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		{
			#line 1459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			const auto& [low, high] = ADV_UFCS(_operator_mul_gt)(a, (Builtin::u16(150U)));
			#line 1460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			ADV_ASSERT((low == Builtin::u16((unsigned short)9464) && high == Builtin::u16((unsigned short)1)), u"low==9464&&high==1");
		}
		#line 1462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a = ADV_USPCS(MaxValue, Builtin::u16)();
		#line 1463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		{
			#line 1464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			const auto& [low, high] = ADV_UFCS(CarryingMul)(a.__ref(), Builtin::u16(2U), Builtin::u16(12U));
			#line 1465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			ADV_ASSERT((low == Builtin::u16((unsigned short)10) && high == Builtin::u16((unsigned short)2)), u"low==10&&high==2");
		}
		#line 1468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a = Builtin::u16((unsigned short)10000);
		#line 1469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, Builtin::u16((unsigned short)6000)) == Builtin::u16((unsigned short)1)), u"a\\6000==1");
		#line 1470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a /= Builtin::u16((unsigned short)6000);
		#line 1471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a == Builtin::u16((unsigned short)2)), u"a==2");
		#line 1472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a = Builtin::u16((unsigned short)10000);
		#line 1473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		{
			#line 1474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)(a, Builtin::u16((unsigned short)6000));
			#line 1475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			ADV_ASSERT((div == Builtin::u16((unsigned short)1) && rem == Builtin::u16((unsigned short)4000)), u"div==1&&rem==4000");
		}
		#line 1477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_qst)(a, Builtin::u16((unsigned short)5000)) == Builtin::u16((unsigned short)2)), u"a\\?5000==2");
		#line 1478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_qst)(a, Builtin::u16((unsigned short)0)) == nullptr), u"a\\?0==null");
		#line 1480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_ne)(a, Builtin::u16((unsigned short)5000)) == Builtin::u16((unsigned short)2)), u"a\\!5000==2");
		#line 1481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_UFCS(_operator_bsl_mod_eq)(a, Builtin::u16((unsigned short)5000));
		#line 1482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a == Builtin::u16((unsigned short)2)), u"a==2");
		#line 1483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a = Builtin::u16((unsigned short)10);
		#line 1484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_UFCS(_operator_bsl_or_eq)(a, Builtin::u16((unsigned short)5));
		#line 1485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a == Builtin::u16((unsigned short)2)), u"a==2");
		#line 1486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a = Builtin::u16((unsigned short)10);
		#line 1488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_bsl)(a, Builtin::u16((unsigned short)5)) == Builtin::u16((unsigned short)2)), u"a\\\\5==2");
		#line 1489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_bsl)(a, Builtin::u16((unsigned short)6)) == nullptr), u"a\\\\6==null");
		#line 1490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_bsl_qst)(a, Builtin::u16((unsigned short)0)) == nullptr), u"a\\\\?0==null");
		#line 1492 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_not)(a, Builtin::u16((unsigned short)6)) == Builtin::u16((unsigned short)2)), u"a/~6==2");
		#line 1493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_lt)(a, Builtin::u16((unsigned short)6)) == Builtin::u16((unsigned short)1)), u"a/<6==1");
		#line 1494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_gt)(a, Builtin::u16((unsigned short)6)) == Builtin::u16((unsigned short)2)), u"a/>6==2");
		#line 1496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_qst)(a, Builtin::u16((unsigned short)5)) == Builtin::u16((unsigned short)0)), u"a%?5==0");
		#line 1497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_qst)(a, Builtin::u16((unsigned short)0)) == nullptr), u"a%?0==null");
		#line 1499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_ne)(a, Builtin::u16((unsigned short)6)) == Builtin::u16((unsigned short)4)), u"a%!6==4");
		#line 1500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_UFCS(_operator_mod_mod_eq)(a, Builtin::u16((unsigned short)6));
		#line 1501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a == Builtin::u16((unsigned short)4)), u"a==4");
		#line 1502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a = Builtin::u16((unsigned short)10);
		#line 1504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_bsl)(ADV_USPCS(MaxValue, Builtin::u16)(), Builtin::u32(4U)) == Builtin::u16((unsigned short)0b0000111111111111)), u"u16.MaxValue>>\\4u==0b0000_1111_1111_1111");
		#line 1505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_bsl)(ADV_USPCS(MaxValue, Builtin::u16)(), Builtin::u32(20U)) == Builtin::u16((unsigned short)0)), u"u16.MaxValue>>\\20u==0");
		#line 1506 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_bsl)(ADV_USPCS(MinValue, Builtin::u16)(), Builtin::u32(20U)) == Builtin::u16((unsigned short)0)), u"u16.MinValue>>\\20u==0");
		#line 1507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_bsl)(ADV_USPCS(MaxValue, Builtin::u16)(), Builtin::u32(20U)) == Builtin::u16((unsigned short)0)), u"u16.MaxValue<<\\20u==0");
		#line 1508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_qst)(ADV_USPCS(MaxValue, Builtin::u16)(), Builtin::u16((unsigned short)4)) == Builtin::u16((unsigned short)0b0000111111111111)), u"u16.MaxValue>>?4==0b0000_1111_1111_1111");
		#line 1509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_qst)(ADV_USPCS(MaxValue, Builtin::u16)(), Builtin::u16((unsigned short)20)) == nullptr), u"u16.MaxValue>>?20==null");
		#line 1510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_qst)(ADV_USPCS(MaxValue, Builtin::u16)(), Builtin::u16((unsigned short)20)) == nullptr), u"u16.MaxValue<<?20==null");
		#line 1511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_ne)(ADV_USPCS(MaxValue, Builtin::u16)(), Builtin::u16((unsigned short)4)) == Builtin::u16((unsigned short)0b0000111111111111)), u"u16.MaxValue>>!4==0b0000_1111_1111_1111");
		#line 1512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_mod)(ADV_USPCS(MaxValue, Builtin::u16)(), Builtin::u16((unsigned short)20)) == Builtin::u16((unsigned short)0b0000111111111111)), u"u16.MaxValue>>%20==0b0000_1111_1111_1111");
		#line 1513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a = ADV_USPCS(MaxValue, Builtin::u16)();
		#line 1514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_UFCS(_operator_gt_gt_mod_eq)(a, Builtin::u16((unsigned short)20));
		#line 1515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_mod)(a, Builtin::u16((unsigned short)20)) == Builtin::u16((unsigned short)0b1111111111110000)), u"a<<%20==0b1111_1111_1111_0000");
		#line 1516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		{
			#line 1517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_gt_gt_mod_qst)(ADV_USPCS(MaxValue, Builtin::u16)(), Builtin::u16((unsigned short)20));
			#line 1518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			ADV_ASSERT((result == Builtin::u16((unsigned short)0b0000111111111111) && overflowed), u"result==0b0000_1111_1111_1111&&overflowed");
		}
		#line 1522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a = Builtin::u16(7U);
		#line 1523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor)(a, Builtin::u32(5U)) == Builtin::u16((unsigned short)16807)), u"a^^5u==16807");
		#line 1524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_UFCS(_operator_xor_xor_eq)(a, Builtin::u32(5U));
		#line 1525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a == Builtin::u16((unsigned short)16807)), u"a==16807");
		#line 1526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor)(Builtin::u16(30U), Builtin::u32(3U)) == Builtin::u16((unsigned short)27000)), u"30u16^^3u==27000");
		#line 1527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_qst)(Builtin::u16(30U), Builtin::u32(3U)) == Builtin::u16((unsigned short)27000)), u"30u16^^?3u==27000");
		#line 1528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_qst)(Builtin::u16(30U), Builtin::u32(4U)) == nullptr), u"30u16^^?4u==null");
		#line 1529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_UFCS(_operator_xor_xor_qst_eq)(a, Builtin::u32(5U));
		#line 1530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a == Builtin::u16((unsigned short)16807)), u"a==16807");
		#line 1531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_ne)(Builtin::u16(30U), Builtin::u32(3U)) == Builtin::u16((unsigned short)27000)), u"30u16^^!3u==27000");
		#line 1532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_mod)(Builtin::u16(30U), Builtin::u32(4U)) == Builtin::u16((unsigned short)23568)), u"30u16^^%4u==23568");
		#line 1533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_UFCS(_operator_xor_xor_mod_eq)(a, Builtin::u32(4U));
		#line 1534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a == Builtin::u16((unsigned short)5857)), u"a==5857");
		#line 1535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_or)(Builtin::u16(30U), Builtin::u32(3U)) == Builtin::u16((unsigned short)27000)), u"30u16^^|3u==27000");
		#line 1536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_or)(Builtin::u16(30U), Builtin::u32(4U)) == ADV_USPCS(MaxValue, Builtin::u16)()), u"30u16^^|4u==u16.MaxValue");
		#line 1537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		{
			#line 1538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_xor_xor_mod_qst)(Builtin::u16(30U), Builtin::u32(4U));
			#line 1539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			ADV_ASSERT((result == Builtin::u16((unsigned short)23568) && overflowed), u"result==23568&&overflowed");
		}
		return true;
	}();
	#endif	
} namespace __extensions { using namespace System;
#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	auto _operator_eq_eq_mul(__extension_UInt16_20_u16 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool
	{
		#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		{
			#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			auto __tmp0 = Builtin::Cast<false, __extension_UInt16_1143_u16>(obj);
			#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			if ((__tmp0.IsValid())) {
				#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				const auto& obj = *__tmp0;
				
				#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				return __this == obj;
			}
		}
		#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return false;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	auto _operator_lt_eq_gt_mul(__extension_UInt16_73_u16 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32
	{
		#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		{
			#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			auto __tmp0 = Builtin::Cast<false, __extension_UInt16_1143_u16>(obj);
			#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			if ((__tmp0.IsValid())) {
				#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				const auto& obj = *__tmp0;
				
				#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				return __this <=> obj;
			}
		}
		#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		{
			#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			if ((!Builtin::Is(obj, nullptr))) {
				#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				auto __tmp0 = *obj; const auto& obj = __tmp0;
				
				#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				Builtin::Throw(Builtin::InvalidOperationException{});
			}
		}
		#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return Builtin::u16((unsigned short)1);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	auto Parse(__extension_UInt16_229_u16 const& __this LIFETIMEBOUND, Builtin::Str input)  -> const typename __extension_UInt16_229_u16
	{
		#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return Builtin::u16(0U);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	auto TryParse(__extension_UInt16_229_u16 const& __this LIFETIMEBOUND, Builtin::Str input) noexcept -> const Builtin::Nullable<__extension_UInt16_1143_u16>
	{
		#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return Builtin::u16(0U);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	auto Log(__extension_UInt16_300_u16 const& __this LIFETIMEBOUND, __extension_UInt16_1143_u16 base)  -> const typename __extension_UInt16_300_u16
	{
		#line 389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		if (const auto result = ADV_UFCS(CheckedLog)(__this.__ref(), base)) {
			{
				#line 389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				return result;
			}
		}
		#line 392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> auto _operator_add_mod_qst(__extension_UInt16_410_u16 const& __this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<__extension_UInt16_1143_u16, bool>
	{
		#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +%? implemented only for integer types");
		#line 468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		__extension_UInt16_1143_u16 result{}; 
		#line 469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		auto overflowed = !Builtin::SafeAdd(__this, rhs, result); 
		#line 470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> auto _operator_sub_mod_qst(__extension_UInt16_410_u16 const& __this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<__extension_UInt16_1143_u16, bool>
	{
		#line 559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -%? implemented only for integer types");
		#line 560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		__extension_UInt16_1143_u16 result{}; 
		#line 561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		auto overflowed = !Builtin::SafeSubtract(__this, rhs, result); 
		#line 562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 632 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> auto _operator_mul_mod_qst(__extension_UInt16_410_u16 const& __this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<__extension_UInt16_1143_u16, bool>
	{
		#line 633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *%? implemented only for integer types");
		#line 634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		__extension_UInt16_1143_u16 result{}; 
		#line 635 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		auto overflowed = !Builtin::SafeMultiply(__this, rhs, result); 
		#line 636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 694 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> auto _operator_bsl_mod_qst(__extension_UInt16_410_u16 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_UInt16_1143_u16, bool>
	{
		#line 695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\%? implemented only for integer types");
		#line 696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		__extension_UInt16_1143_u16 result{}; 
		#line 697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		auto overflowed = !Builtin::SafeDivide(__this, rhs, result); 
		#line 698 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 755 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	template<class T> auto _operator_mod_mod_qst(__extension_UInt16_410_u16 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_UInt16_1143_u16, bool>
	{
		#line 756 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %%? implemented only for integer types");
		#line 757 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		__extension_UInt16_1143_u16 result{}; 
		#line 758 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		auto overflowed = !Builtin::SafeModulus(__this, rhs, result); 
		#line 759 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	auto getCheckedIsqrt(__extension_UInt16_1007_u16 const& __this ) -> const Builtin::Nullable<__extension_UInt16_1143_u16>
	{
		#line 1020 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return Builtin::u16(0U);
	}
	} namespace System{

}