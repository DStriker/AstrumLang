#include "Math.h"
#include "UInt32.h"

namespace System {
//###############################################################################
//# Global type aliases
//###############################################################################
//###############################################################################
//# Type definitions
//###############################################################################

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	















static_assert(Builtin::usize(sizeof(Builtin::u32)) == Builtin::i32(4), "u32 should be 4 bytes");
static_assert(ADV_USPCS(MinValue, Builtin::u32)() == Builtin::i32(0), "u32.Min should be 0");
static_assert(ADV_USPCS(MaxValue, Builtin::u32)() == Builtin::i64(0xFFFFFFFFLL), "u32.Max should be 0xFFFFFFFF");
static_assert(!ADV_USPCS(IsSigned, Builtin::u32)(), "u32 must be unsigned");
static_assert(ADV_USPCS(MaxDigitCount, Builtin::u32)() == Builtin::i32(10), "u32 max digit count must be 10");
static_assert(ADV_UFCS_NONLOCAL(_operator_xor_xor)(Builtin::u32(2U), Builtin::u32(31U)) == Builtin::i64(2147483648LL), "2u32 ^^ 31u == 2147483648");
static_assert(Builtin::TypeIs<Builtin::u32, IComparable<Builtin::u32>>(), "u32 should implement IComparable<u32>");
static_assert(Builtin::TypeIs<Builtin::u32, IEquatable<Builtin::u32>>(), "u32 should implement IEquatable<u32>");
static_assert(Builtin::TypeIs<Builtin::u32, ISelfComparable>(), "u32 should implement ISelfComparable");
static_assert(Builtin::TypeIs<Builtin::u32, ISelfEquatable>(), "u32 should implement ISelfEquatable");
static_assert(Builtin::TypeIs<Builtin::u32, IAdditionOperators<Builtin::u32, Builtin::u32>>(), "u32 should implement IAdditionOperators<u32, u32>");
static_assert(Builtin::TypeIs<Builtin::u32, ISubtractionOperators<Builtin::u32, Builtin::u32>>(), "u32 should implement ISubtractionOperators<u32, u32>");
static_assert(Builtin::TypeIs<Builtin::u32, IMultiplyOperators<Builtin::u32, Builtin::u32>>(), "u32 should implement IMultiplyOperators<u32, u32>");
static_assert(Builtin::TypeIs<Builtin::u32, IDivisionOperators<Builtin::u32, Builtin::f64>>(), "u32 should implement IDivisionOperators<u32, f64>");
static_assert(Builtin::TypeIs<Builtin::u32, IIntDivOperators<Builtin::u32, Builtin::u32>>(), "u32 should implement IIntDivOperators<u32, u32>");
static_assert(Builtin::TypeIs<Builtin::u32, IModulusOperators<Builtin::u32, Builtin::u32>>(), "u32 should implement IModulusOperators<u32, u32>");
static_assert(Builtin::TypeIs<Builtin::u32, IBitwiseOperators<Builtin::u32, Builtin::u32>>(), "u32 should implement IBitwiseOperators<u32, u32>");
static_assert(Builtin::TypeIs<Builtin::u32, IShiftOperators<Builtin::i32, Builtin::u32>>(), "u32 should implement IShiftOperators<i32, u32>");
static_assert(Builtin::TypeIs<Builtin::u32, IUnaryPlusOperators<Builtin::u32>>(), "u32 should implement IUnaryPlusOperators<u32>");
static_assert(Builtin::TypeIs<Builtin::u32, IUnaryNegationOperators<Builtin::u32>>(), "u32 should implement IUnaryNegationOperators<u32>");
static_assert(Builtin::TypeIs<Builtin::u32, IIncrementOperators<Builtin::u32>>(), "u32 should implement IIncrementOperators<u32>");
static_assert(Builtin::TypeIs<Builtin::u32, IDecrementOperators<Builtin::u32>>(), "u32 should implement IDecrementOperators<u32>");
static_assert(ADV_UFCS_NONLOCAL(_operator_add_mod)(ADV_USPCS(MaxValue, Builtin::u32)(), Builtin::u32(1U)) == ADV_USPCS(MinValue, Builtin::u32)(), "u32.MaxValue +% 1u32 == u32.MinValue");
static_assert(ADV_UFCS_NONLOCAL(_operator_add_or)(ADV_USPCS(MaxValue, Builtin::u32)(), Builtin::u32(1U)) == ADV_USPCS(MaxValue, Builtin::u32)(), "u32.MaxValue +| 1u32 == u32.MaxValue");
#ifdef ADV_UNITTEST
	#line 1200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	static bool __Test_5df78499f025a48a = [](){
		#line 1202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::u32 a = Builtin::u32(5U); 
		#line 1205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a + Builtin::i8(10) == Builtin::i32(15)), u"a+10i8==15");
		#line 1206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a + Builtin::u8(10U) == Builtin::i32(15)), u"a+10u8==15");
		#line 1207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a + Builtin::i16(10) == Builtin::i32(15)), u"a+10i16==15");
		#line 1208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a + Builtin::u32(10U) == Builtin::i32(15)), u"a+10u32==15");
		#line 1209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a + Builtin::i32(10) == Builtin::i32(15)), u"a+10i32==15");
		#line 1210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a + Builtin::u32(10U) == Builtin::i32(15)), u"a+10u32==15");
		#line 1211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a + Builtin::i64(10LL) == Builtin::i32(15)), u"a+10i64==15");
		#line 1212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a + Builtin::u64(10ULL) == Builtin::i32(15)), u"a+10u64==15");
		#line 1213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a + Builtin::i128(10LL) == Builtin::i32(15)), u"a+10i128==15");
		#line 1214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a + Builtin::u128(10ULL) == Builtin::i32(15)), u"a+10u128==15");
		#line 1217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a - Builtin::i32(2) == Builtin::i32(3)), u"a-2==3");
		#line 1218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a * Builtin::i32(2) == Builtin::i32(10)), u"a*2==10");
		#line 1219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, Builtin::i32(2)) == Builtin::i32(2)), u"a\\2==2");
		#line 1220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a % Builtin::i32(2) == Builtin::i32(1)), u"a%2==1");
		#line 1221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT(((a & Builtin::i32(1)) == Builtin::i32(1)), u"(a&1)==1");
		#line 1222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT(((a | Builtin::i32(1)) == Builtin::i32(5)), u"(a|1)==5");
		#line 1223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT(((a ^ Builtin::i32(1)) == Builtin::i32(4)), u"(a^1)==4");
		#line 1224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a << Builtin::i32(1) == Builtin::i32(10)), u"a<<1==10");
		#line 1225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a >> Builtin::i32(1) == Builtin::i32(2)), u"a>>1==2");
		#line 1226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a = Builtin::u32(0b11111011U);
		#line 1227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_UFCS(_operator_gt_gt_gt_eq)(a, Builtin::i32(2));
		#line 1228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a == Builtin::i32(0b00111110)), u"a==0b0011_1110");
		#line 1229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_gt)(a, Builtin::i32(2)) == Builtin::i32(0b00001111)), u"a>>>2==0b0000_1111");
		#line 1230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_gt)(a, Builtin::i32(7)) == Builtin::i32(0)), u"a>>>7==0");
		#line 1233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a = Builtin::u32(5U);
		#line 1234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a == Builtin::i32(5)), u"a==5");
		#line 1235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a != Builtin::i32(6)), u"a!=6");
		#line 1236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT(((a <=> Builtin::i32(6)) < 0), u"a<6");
		#line 1237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT(((a <=> Builtin::i32(5)) <= 0), u"a<=5");
		#line 1238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT(((a <=> Builtin::i32(4)) > 0), u"a>4");
		#line 1239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT(((a <=> Builtin::i32(5)) >= 0), u"a>=5");
		#line 1242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a = Builtin::u32(5U);
		#line 1243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a++;
		#line 1244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a--;
		#line 1245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a += Builtin::i32(5);
		#line 1246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a -= Builtin::i32(5);
		#line 1247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a *= Builtin::i32(2);
		#line 1248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_UFCS(_operator_bsl_eq)(a, Builtin::i32(2));
		#line 1249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a %= Builtin::i32(1);
		#line 1250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a &= Builtin::i32(1);
		#line 1251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a |= Builtin::i32(1);
		#line 1252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a ^= Builtin::i32(1);
		#line 1253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a <<= Builtin::i32(1);
		#line 1254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a >>= Builtin::i32(1);
		#line 1255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a == Builtin::i32(0)), u"a==0");
		#line 1256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a = Builtin::u32(10U);
		#line 1257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_not)(a) == Builtin::i64(0b11111111111111111111111111110101LL)), u"~a==0b1111_1111_1111_1111_1111_1111_1111_0101");
		#line 1260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::u32 b = Builtin::u32(5U); 
		#line 1261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::Nullable<Builtin::u32> c = nullptr; 
		#line 1262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::Nullable<Builtin::u32> d = Builtin::u32(5U); 
		#line 1263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a != b), u"a!=b");
		#line 1264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((b != c), u"b!=c");
		#line 1265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((!Builtin::IdentityEquals(b, c)), u"b!==c");
		#line 1266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT(((b <=> c) > 0), u"b>c");
		#line 1267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((c != b), u"c!=b");
		#line 1268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((c == nullptr), u"c==null");
		#line 1269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((d != nullptr), u"d!=null");
		#line 1270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT(((c <=> d) < 0), u"c<d");
		#line 1271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((b == d), u"b==d");
		#line 1272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((Builtin::IdentityEquals(b, d)), u"b===d");
		#line 1275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::Nullable<Builtin::ObjectRef> o = c; 
		#line 1276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		o = d;
		#line 1277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_ne_eq_mul)(b, o)), u"b!=*o");
		#line 1278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		IComparable<Builtin::u32> icomp = a; 
		#line 1279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT(((icomp <=> b) > 0), u"icomp>b");
		#line 1282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a = Builtin::u32(200U);
		#line 1283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(a.__ref()) == Builtin::i32(200)), u"a.HashCode==200");
		#line 1284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(a) == Builtin::i32(200)), u"#a==200");
		#line 1286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a = Builtin::u32(35000U);
		#line 1287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(ToUInt64)(a.__ref()) == Builtin::i32(35000)), u"a.ToUInt64()==35000");
		#line 1288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(NarrowToInt16)(a.__ref()) == Builtin::i32(-30536)), u"a.NarrowToInt16()==-30536");
		#line 1291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a = Builtin::u32(10U);
		#line 1292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		b = Builtin::u32(6U);
		#line 1293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(Abs)(b.__ref()) == Builtin::i32(6)), u"b.Abs==6");
		#line 1294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(IsFinite)(b.__ref())), u"b.IsFinite");
		#line 1295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(IsInteger)(b.__ref())), u"b.IsInteger");
		#line 1296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((!ADV_UPCS(IsNegative)(b.__ref())), u"!b.IsNegative");
		#line 1297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(IsPositive)(a.__ref())), u"a.IsPositive");
		#line 1298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(IsCanonical)(b.__ref())), u"b.IsCanonical");
		#line 1299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((!ADV_UPCS(IsComplexNumber)(b.__ref())), u"!b.IsComplexNumber");
		#line 1300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(IsRealNumber)(b.__ref())), u"b.IsRealNumber");
		#line 1301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((!ADV_UPCS(IsImaginaryNumber)(b.__ref())), u"!b.IsImaginaryNumber");
		#line 1302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(IsEvenInteger)(b.__ref())), u"b.IsEvenInteger");
		#line 1303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((!ADV_UPCS(IsOddInteger)(b.__ref())), u"!b.IsOddInteger");
		#line 1304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((!ADV_UPCS(IsInfinity)(b.__ref())), u"!b.IsInfinity");
		#line 1305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((!ADV_UPCS(IsPositiveInfinity)(b.__ref())), u"!b.IsPositiveInfinity");
		#line 1306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((!ADV_UPCS(IsNegativeInfinity)(b.__ref())), u"!b.IsNegativeInfinity");
		#line 1307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((!ADV_UPCS(IsNaN)(b.__ref())), u"!b.IsNaN");
		#line 1308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(IsNormal)(b.__ref())), u"b.IsNormal");
		#line 1309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((!ADV_UPCS(IsSubnormal)(b.__ref())), u"!b.IsSubnormal");
		#line 1310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((!ADV_UPCS(IsZero)(b.__ref())), u"!b.IsZero");
		#line 1313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(Sign)(a.__ref()) == +Builtin::i32(1)), u"a.Sign==+1");
		#line 1314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(CopySign)(a.__ref(), b) == a), u"a.CopySign(b)==a");
		#line 1315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(Max)(a.__ref(), b) == a), u"a.Max(b)==a");
		#line 1316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(Min)(a.__ref(), b) == b), u"a.Min(b)==b");
		#line 1317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(MaxNumber)(a.__ref(), b) == a), u"a.MaxNumber(b)==a");
		#line 1318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(MinNumber)(a.__ref(), b) == b), u"a.MinNumber(b)==b");
		#line 1319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(Clamp)(b.__ref(), Builtin::u32(1U), Builtin::u32(5U)) == Builtin::i32(5)), u"b.Clamp(1u32,5u32)==5");
		#line 1322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(IsPow2)(Builtin::u32(2147483648U).__ref())), u"2147483648u32.IsPow2");
		#line 1323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((!ADV_UPCS(IsPow2)(Builtin::u32(2147483647U).__ref())), u"!2147483647u32.IsPow2");
		#line 1324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::u32(2U).__ref()) == Builtin::i32(1)), u"2u32.Log2==1");
		#line 1325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::u32(16U).__ref()) == Builtin::i32(4)), u"16u32.Log2==4");
		#line 1326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::u32(64U).__ref()) == Builtin::i32(6)), u"64u32.Log2==6");
		#line 1327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::u32(3000000000U).__ref()) == Builtin::i32(31)), u"3_000_000_000u32.Log2==31");
		#line 1328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::u32(2U).__ref()) == Builtin::i32(1)), u"2u32.Log2Ceiling==1");
		#line 1329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::u32(16U).__ref()) == Builtin::i32(4)), u"16u32.Log2Ceiling==4");
		#line 1330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::u32(65U).__ref()) == Builtin::i32(7)), u"65u32.Log2Ceiling==7");
		#line 1331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::u32(3000000000U).__ref()) == Builtin::i32(32)), u"3_000_000_000u32.Log2Ceiling==32");
		#line 1332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(CheckedLog2)(Builtin::u32(0U).__ref()) == nullptr), u"0u32.CheckedLog2==null");
		#line 1333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(Builtin::u32(5U).__ref()) == Builtin::i32(0)), u"5u32.Log10==0");
		#line 1334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(a.__ref()) == Builtin::i32(1)), u"a.Log10==1");
		#line 1335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(ADV_USPCS(MaxValue, Builtin::u32)().__ref()) == Builtin::i32(9)), u"u32.MaxValue.Log10==9");
		#line 1336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(Log)(Builtin::u32(150U).__ref(), Builtin::u32(5U)) == Builtin::i32(3)), u"150u32.Log(5u32)==3");
		#line 1337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(Midpoint)(a.__ref(), Builtin::u32(30U)) == Builtin::i32(20)), u"a.Midpoint(30u32)==20");
		#line 1338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(Midpoint)(Builtin::u32(1000000000U).__ref(), Builtin::u32(4000000000U)) == Builtin::i64(2500000000LL)), u"1000000000u32.Midpoint(4000000000u32)==2500000000");
		#line 1339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)(a.__ref(), Builtin::u32(10U)) == Builtin::i32(10)), u"a.NextMultipleOf(10u32)==10");
		#line 1340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)(Builtin::u32(11U).__ref(), Builtin::u32(10U)) == Builtin::i32(20)), u"11u32.NextMultipleOf(10u32)==20");
		#line 1341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)(Builtin::u32(3500000000U).__ref(), Builtin::u32(8500U)) == Builtin::i64(3500002500LL)), u"3500000000u32.NextMultipleOf(8500u32)==3500002500");
		#line 1342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(ByteCount)(a.__ref()) == Builtin::i32(4)), u"a.ByteCount==4");
		#line 1343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(ByteSwapped)(Builtin::u32(0xabcdef12U).__ref()) == Builtin::i32(0x12efcdab)), u"0xabcdef12_u32.ByteSwapped==0x12efcdab");
		#line 1344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_not)(Builtin::u32(0b1010U), Builtin::i32(3)) == Builtin::i32(0b01010000)), u"0b1010_u32<<~3==0b0101_0000");
		#line 1345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_not)(Builtin::u32(0b1010U), Builtin::i32(5)) == Builtin::i32(0b101000000)), u"0b1010_u32<<~5==0b1_0100_0000");
		#line 1346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_not)(Builtin::u32(0b1010U), Builtin::i32(3)) == Builtin::i32(0b01000000000000000000000000000001)), u"0b1010_u32>>~3==0b0100_0000_0000_0000_0000_0000_0000_0001");
		#line 1347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_not)(Builtin::u32(0b1010U), Builtin::i32(5)) == Builtin::i32(0b01010000000000000000000000000000)), u"0b1010_u32>>~5==0b0101_0000_0000_0000_0000_0000_0000_0000");
		#line 1349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a = Builtin::u32(3000000000U);
		#line 1350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(MinimalBitWidth)(a.__ref()) == Builtin::i32(32)), u"a.MinimalBitWidth==32");
		#line 1351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(LeadingZeroCount)(a.__ref()) == Builtin::i32(0)), u"a.LeadingZeroCount==0");
		#line 1352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(TrailingZeroCount)(a.__ref()) == Builtin::i32(9)), u"a.TrailingZeroCount==9");
		#line 1353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(LeadingOneCount)(a.__ref()) == Builtin::i32(1)), u"a.LeadingOneCount==1");
		#line 1354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(TrailingOneCount)(a.__ref()) == Builtin::i32(0)), u"a.TrailingOneCount==0");
		#line 1355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(PopCount)(a.__ref()) == Builtin::i32(12)), u"a.PopCount==12");
		#line 1356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(ZeroCount)(a.__ref()) == Builtin::i32(20)), u"a.ZeroCount==20");
		#line 1357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(ReverseBits)(a.__ref()) == Builtin::i32(0b00000000011110100000101101001101)), u"a.ReverseBits==0b0000_0000_0111_1010_0000_1011_0100_1101");
		#line 1358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a = Builtin::u32(2000000000U);
		#line 1359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(NextPow2)(a.__ref()) == Builtin::i64(2147483648LL)), u"a.NextPow2==2147483648");
		#line 1360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(PrevPow2)(a.__ref()) == Builtin::i32(1073741824)), u"a.PrevPow2==1073741824");
		#line 1361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(PrevPow2)(Builtin::u32(1U).__ref()) == Builtin::i32(0)), u"1u32.PrevPow2==0");
		#line 1362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(PrevPow2)(Builtin::u32(2U).__ref()) == Builtin::i32(2)), u"2u32.PrevPow2==2");
		#line 1363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(NextPow2)(Builtin::u32(2U).__ref()) == Builtin::i32(2)), u"2u32.NextPow2==2");
		#line 1364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(NextPow2)(Builtin::u32(3U).__ref()) == Builtin::i32(4)), u"3u32.NextPow2==4");
		#line 1365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(PrevPow2)(Builtin::u32(3U).__ref()) == Builtin::i32(2)), u"3u32.PrevPow2==2");
		#line 1366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(CheckedNextPow2)(Builtin::u32(3000000000U).__ref()) == nullptr), u"3000000000u32.CheckedNextPow2==null");
		#line 1368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(IsMultipleOf)(a.__ref(), Builtin::u32(5U))), u"a.IsMultipleOf(5u)");
		#line 1369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((!ADV_UFCS(IsMultipleOf)(a.__ref(), Builtin::u32(7U))), u"!a.IsMultipleOf(7u)");
		#line 1371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(MultiplyBy10)(Builtin::u32(10U).__ref()) == Builtin::i32(100)), u"10u32.MultiplyBy10==100");
		#line 1372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(MultiplyBy16)(Builtin::u32(10U).__ref()) == Builtin::i32(160)), u"10u32.MultiplyBy16==160");
		#line 1375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_qst)(a, Builtin::u32(100U)) == Builtin::u32(2000000100U)), u"a+?100u32==2000000100u");
		#line 1376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_qst)(a, ADV_USPCS(MaxValue, Builtin::u32)()) == nullptr), u"a+?u32.MaxValue==null");
		#line 1377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_UFCS(_operator_add_qst_eq)(a, Builtin::u32(5U));
		#line 1378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a == Builtin::i32(2000000005)), u"a==2000000005");
		#line 1379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_UFCS(_operator_add_qst_eq)(a, Builtin::u32(3000000000U));
		#line 1380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a == Builtin::i32(2000000005)), u"a==2000000005");
		#line 1381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_ne)(a, Builtin::u32(100U)) == Builtin::i32(2000000105)), u"a+!100u32==2000000105");
		#line 1382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_mod)(a, Builtin::u32(100U)) == Builtin::i32(2000000105)), u"a+%100u32==2000000105");
		#line 1383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_mod)(a, Builtin::u32(2294967291U)) == ADV_USPCS(MinValue, Builtin::u32)()), u"a+%2294967291u32==u32.MinValue");
		#line 1384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_UFCS(_operator_add_mod_eq)(a, ADV_USPCS(MaxValue, Builtin::u32)());
		#line 1385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a == Builtin::i32(2000000004)), u"a==2000000004");
		#line 1386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_or)(a, Builtin::u32(3000000000U)) == ADV_USPCS(MaxValue, Builtin::u32)()), u"a+|3000000000u32==u32.MaxValue");
		#line 1387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_UFCS(_operator_add_or_eq)(a, ADV_USPCS(MaxValue, Builtin::u32)());
		#line 1388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a = Builtin::u32(3000000000U);
		#line 1389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_or)(a, Builtin::u32(2000000000U)) == ADV_USPCS(MaxValue, Builtin::u32)()), u"a+|2000000000u32==u32.MaxValue");
		#line 1390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		{
			#line 1391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_add_mod_qst)(a, ADV_USPCS(MaxValue, Builtin::u32)());
			#line 1392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			ADV_ASSERT((result == Builtin::i64(2999999999LL) && overflowed), u"result==2999999999&&overflowed");
		}
		#line 1395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a = ADV_USPCS(MaxValue, Builtin::u32)() - Builtin::i32(1);
		#line 1396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_add_qst_postfix)(a) == ADV_USPCS(MaxValue, Builtin::u32)() - Builtin::i32(1)), u"a++?==u32.MaxValue-1");
		#line 1397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::u32)()), u"a==u32.MaxValue");
		#line 1398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_UFCS(_operator_add_add_mod_postfix)(a);
		#line 1399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::u32)()), u"a==u32.MinValue");
		#line 1400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a = ADV_USPCS(MaxValue, Builtin::u32)();
		#line 1401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_UFCS(_operator_add_add_or_postfix)(a);
		#line 1402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::u32)()), u"a==u32.MaxValue");
		#line 1404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		{
			#line 1405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.__ref(), Builtin::u32(0U), Builtin::Boolean(false));
			#line 1406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			ADV_ASSERT((result == ADV_USPCS(MaxValue, Builtin::u32)() && !overflowed), u"result==u32.MaxValue&&!overflowed");
		}
		#line 1408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		{
			#line 1409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.__ref(), Builtin::u32(0U), Builtin::Boolean(true));
			#line 1410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			ADV_ASSERT((result == ADV_USPCS(MinValue, Builtin::u32)() && overflowed), u"result==u32.MinValue&&overflowed");
		}
		#line 1412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		{
			#line 1413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.__ref(), Builtin::u32(10U), Builtin::Boolean(true));
			#line 1414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			ADV_ASSERT((result == Builtin::i32(10) && overflowed), u"result==10&&overflowed");
		}
		#line 1417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_qst)(a, Builtin::u32(1000000000U)) == Builtin::u32(3294967295U)), u"a-?1000000000u32==3294967295u");
		#line 1418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_qst)(Builtin::u32(10U), ADV_USPCS(MaxValue, Builtin::u32)()) == nullptr), u"10u32-?u32.MaxValue==null");
		#line 1419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_UFCS(_operator_sub_qst_eq)(a, Builtin::u32(1000000000U));
		#line 1420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a == Builtin::u32(3294967295U)), u"a==3294967295u");
		#line 1421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_UFCS(_operator_sub_qst_eq)(a, ADV_USPCS(MaxValue, Builtin::u32)());
		#line 1422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a == Builtin::u32(3294967295U)), u"a==3294967295u");
		#line 1423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_ne)(a, Builtin::u32(1U)) == Builtin::u32(3294967294U)), u"a-!1u32==3294967294u");
		#line 1424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_mod)(a, Builtin::u32(4000000000U)) == Builtin::i64(3589934591LL)), u"a-%4000000000u32==3589934591");
		#line 1425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_UFCS(_operator_sub_mod_eq)(a, ADV_USPCS(MaxValue, Builtin::u32)());
		#line 1426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a == Builtin::u32(3294967296U)), u"a==3294967296u");
		#line 1427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_or)(a, Builtin::u32(4000000000U)) == ADV_USPCS(MinValue, Builtin::u32)()), u"a-|4000000000u==u32.MinValue");
		#line 1428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_UFCS(_operator_sub_or_eq)(a, ADV_USPCS(MaxValue, Builtin::u32)());
		#line 1429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::u32)()), u"a==u32.MinValue");
		#line 1430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		{
			#line 1431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_sub_mod_qst)(a, Builtin::u32(2U));
			#line 1432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			ADV_ASSERT((result == Builtin::i64(4294967294LL) && overflowed), u"result==4294967294&&overflowed");
		}
		#line 1435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a = ADV_USPCS(MinValue, Builtin::u32)() + Builtin::i32(1);
		#line 1436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_sub_qst_postfix)(a) == ADV_USPCS(MinValue, Builtin::u32)() + Builtin::i32(1)), u"a--?==u32.MinValue+1");
		#line 1437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::u32)()), u"a==u32.MinValue");
		#line 1438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_UFCS(_operator_sub_sub_mod_postfix)(a);
		#line 1439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::u32)()), u"a==u32.MaxValue");
		#line 1440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a = ADV_USPCS(MinValue, Builtin::u32)();
		#line 1441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_UFCS(_operator_sub_sub_or_postfix)(a);
		#line 1442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::u32)()), u"a==u32.MinValue");
		#line 1444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		{
			#line 1445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.__ref(), Builtin::u32(0U), Builtin::Boolean(false));
			#line 1446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			ADV_ASSERT((result == ADV_USPCS(MinValue, Builtin::u32)() && !overflowed), u"result==u32.MinValue&&!overflowed");
		}
		#line 1448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		{
			#line 1449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.__ref(), Builtin::u32(0U), Builtin::Boolean(true));
			#line 1450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			ADV_ASSERT((result == ADV_USPCS(MaxValue, Builtin::u32)() && overflowed), u"result==u32.MaxValue&&overflowed");
		}
		#line 1452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		{
			#line 1453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.__ref(), Builtin::u32(10U), Builtin::Boolean(true));
			#line 1454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			ADV_ASSERT((result == Builtin::i64(4294967285LL) && overflowed), u"result==4294967285&&overflowed");
		}
		#line 1457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_qst)(a, Builtin::u32(1U)) == ADV_USPCS(MinValue, Builtin::u32)()), u"a*?1u32==u32.MinValue");
		#line 1458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a = Builtin::u32(1500000U);
		#line 1459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_qst)(a, Builtin::u32(20000U)) == nullptr), u"a*?20000u32==null");
		#line 1460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_UFCS(_operator_mul_qst_eq)(a, Builtin::u32(20000U));
		#line 1461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a == Builtin::i32(1500000)), u"a==1500000");
		#line 1462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_ne)(a, Builtin::u32(300U)) == Builtin::i32(450000000)), u"a*!300u32==450_000_000");
		#line 1463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_mod)(a, Builtin::u32(300U)) == Builtin::i32(450000000)), u"a*%300u32==450_000_000");
		#line 1464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_mod)(a, Builtin::u32(3000U)) == Builtin::i32(205032704)), u"a*%3000u32==205032704");
		#line 1465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_UFCS(_operator_mul_mod_eq)(a, Builtin::u32(3000U));
		#line 1466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a == Builtin::i32(205032704)), u"a==205032704");
		#line 1467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_or)(a, Builtin::u32(5000U)) == ADV_USPCS(MaxValue, Builtin::u32)()), u"a*|5000u32==u32.MaxValue");
		#line 1468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_UFCS(_operator_mul_or_eq)(a, Builtin::u32(5000U));
		#line 1469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::u32)()), u"a==u32.MaxValue");
		#line 1470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_or)(a, Builtin::u32(2U)) == ADV_USPCS(MaxValue, Builtin::u32)()), u"a*|2u32==u32.MaxValue");
		#line 1471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		{
			#line 1472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_mul_mod_qst)(a, Builtin::u32(2U));
			#line 1473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			ADV_ASSERT((result == Builtin::i64(4294967294LL) && overflowed), u"result==4294967294&&overflowed");
		}
		#line 1475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a = Builtin::u32(5000000U);
		#line 1476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		{
			#line 1477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			const auto& [low, high] = ADV_UFCS(_operator_mul_gt)(a, (Builtin::u32(1500U)));
			#line 1478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			ADV_ASSERT((low == Builtin::i64(3205032704LL) && high == Builtin::i32(1)), u"low==3205032704&&high==1");
		}
		#line 1480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a = ADV_USPCS(MaxValue, Builtin::u32)();
		#line 1481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		{
			#line 1482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			const auto& [low, high] = ADV_UFCS(CarryingMul)(a.__ref(), Builtin::u32(2U), Builtin::u32(12U));
			#line 1483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			ADV_ASSERT((low == Builtin::i32(10) && high == Builtin::i32(2)), u"low==10&&high==2");
		}
		#line 1486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a = Builtin::u32(100000000U);
		#line 1487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, Builtin::i32(6000)) == Builtin::i32(16666)), u"a\\6000==16666");
		#line 1488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a /= Builtin::i32(6000);
		#line 1489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a == Builtin::i32(16667)), u"a==16667");
		#line 1490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a = Builtin::u32(100000000U);
		#line 1491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		{
			#line 1492 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)(a, Builtin::u32(6000U));
			#line 1493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			ADV_ASSERT((div == Builtin::i32(16666) && rem == Builtin::i32(4000)), u"div==16666&&rem==4000");
		}
		#line 1495 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_qst)(a, Builtin::u32(6000U)) == Builtin::u32(16666U)), u"a\\?6000u==16666u");
		#line 1496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_qst)(a, Builtin::u32(0U)) == nullptr), u"a\\?0u==null");
		#line 1498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_ne)(a, Builtin::u32(6000U)) == Builtin::i32(16666)), u"a\\!6000u==16666");
		#line 1499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_UFCS(_operator_bsl_mod_eq)(a, Builtin::u32(6000U));
		#line 1500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a == Builtin::i32(16666)), u"a==16666");
		#line 1501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a = Builtin::u32(10U);
		#line 1502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_UFCS(_operator_bsl_or_eq)(a, Builtin::u32(5U));
		#line 1503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a == Builtin::i32(2)), u"a==2");
		#line 1504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a = Builtin::u32(10U);
		#line 1506 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_bsl)(a, Builtin::u32(5U)) == Builtin::u32(2U)), u"a\\\\5u==2u");
		#line 1507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_bsl)(a, Builtin::u32(6U)) == nullptr), u"a\\\\6u==null");
		#line 1508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_bsl_qst)(a, Builtin::u32(0U)) == nullptr), u"a\\\\?0u==null");
		#line 1510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_not)(a, Builtin::u32(6U)) == Builtin::i32(2)), u"a/~6u==2");
		#line 1511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_lt)(a, Builtin::u32(6U)) == Builtin::i32(1)), u"a/<6u==1");
		#line 1512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_gt)(a, Builtin::u32(6U)) == Builtin::i32(2)), u"a/>6u==2");
		#line 1514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_qst)(a, Builtin::u32(5U)) == Builtin::u32(0U)), u"a%?5u==0u");
		#line 1515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_qst)(a, Builtin::u32(0U)) == nullptr), u"a%?0u==null");
		#line 1517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_ne)(a, Builtin::u32(6U)) == Builtin::i32(4)), u"a%!6u==4");
		#line 1518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_UFCS(_operator_mod_mod_eq)(a, Builtin::i32(6));
		#line 1519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a == Builtin::i32(4)), u"a==4");
		#line 1520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a = Builtin::u32(10U);
		#line 1522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_bsl)(ADV_USPCS(MaxValue, Builtin::u32)(), Builtin::u32(4U)) == Builtin::i32(0b00001111111111111111111111111111)), u"u32.MaxValue>>\\4u==0b0000_1111_1111_1111_1111_1111_1111_1111");
		#line 1523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_bsl)(ADV_USPCS(MaxValue, Builtin::u32)(), Builtin::u32(36U)) == Builtin::i32(0)), u"u32.MaxValue>>\\36u==0");
		#line 1524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_bsl)(ADV_USPCS(MinValue, Builtin::u32)(), Builtin::u32(36U)) == Builtin::i32(0)), u"u32.MinValue>>\\36u==0");
		#line 1525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_bsl)(ADV_USPCS(MaxValue, Builtin::u32)(), Builtin::u32(36U)) == Builtin::i32(0)), u"u32.MaxValue<<\\36u==0");
		#line 1526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_qst)(ADV_USPCS(MaxValue, Builtin::u32)(), Builtin::i32(4)) == Builtin::u32(0b00001111111111111111111111111111U)), u"u32.MaxValue>>?4==0b0000_1111_1111_1111_1111_1111_1111_1111u");
		#line 1527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_qst)(ADV_USPCS(MaxValue, Builtin::u32)(), Builtin::i32(36)) == nullptr), u"u32.MaxValue>>?36==null");
		#line 1528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_qst)(ADV_USPCS(MaxValue, Builtin::u32)(), Builtin::i32(36)) == nullptr), u"u32.MaxValue<<?36==null");
		#line 1529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_ne)(ADV_USPCS(MaxValue, Builtin::u32)(), Builtin::i32(4)) == Builtin::i32(0b00001111111111111111111111111111)), u"u32.MaxValue>>!4==0b0000_1111_1111_1111_1111_1111_1111_1111");
		#line 1530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_mod)(ADV_USPCS(MaxValue, Builtin::u32)(), Builtin::i32(36)) == Builtin::i32(0b00001111111111111111111111111111)), u"u32.MaxValue>>%36==0b0000_1111_1111_1111_1111_1111_1111_1111");
		#line 1531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a = ADV_USPCS(MaxValue, Builtin::u32)();
		#line 1532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_UFCS(_operator_gt_gt_mod_eq)(a, Builtin::i32(36));
		#line 1533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_mod)(a, Builtin::i32(36)) == Builtin::i64(0b11111111111111111111111111110000LL)), u"a<<%36==0b1111_1111_1111_1111_1111_1111_1111_0000");
		#line 1534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		{
			#line 1535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_gt_gt_mod_qst)(ADV_USPCS(MaxValue, Builtin::u32)(), Builtin::i32(36));
			#line 1536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			ADV_ASSERT((result == Builtin::i32(0b00001111111111111111111111111111) && overflowed), u"result==0b0000_1111_1111_1111_1111_1111_1111_1111&&overflowed");
		}
		#line 1540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a = Builtin::u32(1500U);
		#line 1541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor)(a, Builtin::u32(3U)) == Builtin::i64(3375000000LL)), u"a^^3u==3375000000");
		#line 1542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_UFCS(_operator_xor_xor_eq)(a, Builtin::u32(3U));
		#line 1543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a == Builtin::i64(3375000000LL)), u"a==3375000000");
		#line 1544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor)(Builtin::u32(1500U), Builtin::u32(3U)) == Builtin::i64(3375000000LL)), u"1500u32^^3u==3375000000");
		#line 1545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_qst)(Builtin::u32(1500U), Builtin::u32(3U)) == Builtin::u32(3375000000U)), u"1500u32^^?3u==3375000000u");
		#line 1546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_qst)(Builtin::u32(1500U), Builtin::u32(4U)) == nullptr), u"1500u32^^?4u==null");
		#line 1547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_UFCS(_operator_xor_xor_qst_eq)(a, Builtin::u32(4U));
		#line 1548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a == Builtin::i64(3375000000LL)), u"a==3375000000");
		#line 1549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a = Builtin::u32(1500U);
		#line 1550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_ne)(Builtin::u32(1500U), Builtin::u32(3U)) == Builtin::i64(3375000000LL)), u"1500u32^^!3u==3375000000");
		#line 1551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_mod)(Builtin::u32(1500U), Builtin::u32(4U)) == Builtin::i64(3028525312LL)), u"1500u32^^%4u==3028525312");
		#line 1552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_UFCS(_operator_xor_xor_mod_eq)(a, Builtin::u32(4U));
		#line 1553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a == Builtin::i64(3028525312LL)), u"a==3028525312");
		#line 1554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_or)(Builtin::u32(1500U), Builtin::u32(3U)) == Builtin::i64(3375000000LL)), u"1500u32^^|3u==3375000000");
		#line 1555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_or)(Builtin::u32(1500U), Builtin::u32(4U)) == ADV_USPCS(MaxValue, Builtin::u32)()), u"1500u32^^|4u==u32.MaxValue");
		#line 1556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		{
			#line 1557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_xor_xor_mod_qst)(Builtin::u32(1500U), Builtin::u32(4U));
			#line 1558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			ADV_ASSERT((result == Builtin::i64(3028525312LL) && overflowed), u"result==3028525312&&overflowed");
		}
		return true;
	}();
	#endif	
} namespace __extensions { using namespace System;
#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	auto _operator_eq_eq_mul(__extension_UInt32_19_u32 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool
	{
		#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		{
			#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			auto __tmp0 = Builtin::Cast<false, __extension_UInt32_1164_u32>(obj);
			#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			if ((__tmp0.IsValid())) {
				#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				const auto& obj = *__tmp0;
				
				#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				return __this == obj;
			}
		}
		#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return Builtin::Boolean(false);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	auto _operator_lt_eq_gt_mul(__extension_UInt32_72_u32 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32
	{
		#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		{
			#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			auto __tmp0 = Builtin::Cast<false, __extension_UInt32_1164_u32>(obj);
			#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			if ((__tmp0.IsValid())) {
				#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				const auto& obj = *__tmp0;
				
				#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				return __this <=> obj;
			}
		}
		#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		{
			#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			if ((!Builtin::Is(obj, nullptr))) {
				#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				auto __tmp0 = *obj; const auto& obj = __tmp0;
				
				#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				Builtin::Throw(Builtin::InvalidOperationException{});
			}
		}
		#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return Builtin::i32(1);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	auto Parse(__extension_UInt32_245_u32 const& __this LIFETIMEBOUND, Builtin::Str input)  -> const typename __extension_UInt32_245_u32
	{
		#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return Builtin::u32(0U);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	auto TryParse(__extension_UInt32_245_u32 const& __this LIFETIMEBOUND, Builtin::Str input) noexcept -> const Builtin::Nullable<__extension_UInt32_1164_u32>
	{
		#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return Builtin::u32(0U);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	auto Log(__extension_UInt32_316_u32 const& __this LIFETIMEBOUND, __extension_UInt32_1164_u32 base)  -> const typename __extension_UInt32_316_u32
	{
		#line 410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (const auto result = ADV_UFCS(CheckedLog)(__this.__ref(), base)) {
			{
				#line 410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				return result;
			}
		}
		#line 413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1037 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	auto getCheckedIsqrt(__extension_UInt32_1028_u32 const& __this ) -> const Builtin::Nullable<__extension_UInt32_1164_u32>
	{
		#line 1038 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		constexpr auto MAX_RESULT = ADV_USFCS((Math), Isqrt32)(ADV_USPCS(MaxValue, __extension_UInt32_1164_u32)());
		#line 1039 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		const auto result = ADV_USFCS((Math), Isqrt32)(__this); 
		#line 1040 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ASSUME((result <=> MAX_RESULT) <= 0);
		#line 1041 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return result;
	}
	} namespace System{

}