#include "Math.h"
#include "UInt64.h"

namespace System {
//###############################################################################
//# Global type aliases
//###############################################################################
//###############################################################################
//# Type definitions
//###############################################################################

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
















static_assert(Builtin::usize(sizeof(Builtin::u64)) == Builtin::i32(8), "u64 should be 8 bytes");
static_assert(ADV_USPCS(MinValue, Builtin::u64)() == Builtin::i32(0), "u64.Min should be 0");
static_assert(ADV_USPCS(MaxValue, Builtin::u64)() == Builtin::u64(0xFFFFFFFFFFFFFFFFULL), "u64.Max should be 0xFFFFFFFFFFFFFFFF");
static_assert(!ADV_USPCS(IsSigned, Builtin::u64)(), "u64 must be unsigned");
static_assert(ADV_USPCS(MaxDigitCount, Builtin::u64)() == Builtin::i32(20), "u64 max digit count must be 20");
static_assert(ADV_UFCS_NONLOCAL(_operator_xor_xor)(Builtin::u64(2ULL), Builtin::u32(63U)) == Builtin::u64(9223372036854775808ULL), "2u64 ^^ 63u == 9223372036854775808");
static_assert(Builtin::TypeIs<Builtin::u64, IComparable<Builtin::u64>>(), "u64 should implement IComparable<u64>");
static_assert(Builtin::TypeIs<Builtin::u64, IEquatable<Builtin::u64>>(), "u64 should implement IEquatable<u64>");
static_assert(Builtin::TypeIs<Builtin::u64, ISelfComparable>(), "u64 should implement ISelfComparable");
static_assert(Builtin::TypeIs<Builtin::u64, ISelfEquatable>(), "u64 should implement ISelfEquatable");
static_assert(Builtin::TypeIs<Builtin::u64, IAdditionOperators<Builtin::u64, Builtin::u64>>(), "u64 should implement IAdditionOperators<u64, u64>");
static_assert(Builtin::TypeIs<Builtin::u64, ISubtractionOperators<Builtin::u64, Builtin::u64>>(), "u64 should implement ISubtractionOperators<u64, u64>");
static_assert(Builtin::TypeIs<Builtin::u64, IMultiplyOperators<Builtin::u64, Builtin::u64>>(), "u64 should implement IMultiplyOperators<u64, u64>");
static_assert(Builtin::TypeIs<Builtin::u64, IDivisionOperators<Builtin::u64, Builtin::f64>>(), "u64 should implement IDivisionOperators<u64, f64>");
static_assert(Builtin::TypeIs<Builtin::u64, IIntDivOperators<Builtin::u64, Builtin::u64>>(), "u64 should implement IIntDivOperators<u64, u64>");
static_assert(Builtin::TypeIs<Builtin::u64, IModulusOperators<Builtin::u64, Builtin::u64>>(), "u64 should implement IModulusOperators<u64, u64>");
static_assert(Builtin::TypeIs<Builtin::u64, IBitwiseOperators<Builtin::u64, Builtin::u64>>(), "u64 should implement IBitwiseOperators<u64, u64>");
static_assert(Builtin::TypeIs<Builtin::u64, IShiftOperators<Builtin::i32, Builtin::u64>>(), "u64 should implement IShiftOperators<i32, u64>");
static_assert(Builtin::TypeIs<Builtin::u64, IUnaryPlusOperators<Builtin::u64>>(), "u64 should implement IUnaryPlusOperators<u64>");
static_assert(Builtin::TypeIs<Builtin::u64, IUnaryNegationOperators<Builtin::u64>>(), "u64 should implement IUnaryNegationOperators<u64>");
static_assert(Builtin::TypeIs<Builtin::u64, IIncrementOperators<Builtin::u64>>(), "u64 should implement IIncrementOperators<u64>");
static_assert(Builtin::TypeIs<Builtin::u64, IDecrementOperators<Builtin::u64>>(), "u64 should implement IDecrementOperators<u64>");
static_assert(ADV_UFCS_NONLOCAL(_operator_add_mod)(ADV_USPCS(MaxValue, Builtin::u64)(), Builtin::u64(1ULL)) == ADV_USPCS(MinValue, Builtin::u64)(), "u64.MaxValue +% 1u64 == u64.MinValue");
static_assert(ADV_UFCS_NONLOCAL(_operator_add_or)(ADV_USPCS(MaxValue, Builtin::u64)(), Builtin::u64(1ULL)) == ADV_USPCS(MaxValue, Builtin::u64)(), "u64.MaxValue +| 1u64 == u64.MaxValue");
#ifdef ADV_UNITTEST
	#line 1229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	static bool __Test_89405b9a08a83d83 = [](){
		#line 1231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::u64 a = Builtin::u32(5U); 
		#line 1234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((a + Builtin::i8(10) == Builtin::i32(15)), u"a+10i8==15");
		#line 1235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((a + Builtin::u8(10U) == Builtin::i32(15)), u"a+10u8==15");
		#line 1236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((a + Builtin::i16(10) == Builtin::i32(15)), u"a+10i16==15");
		#line 1237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((a + Builtin::u64(10ULL) == Builtin::i32(15)), u"a+10u64==15");
		#line 1238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((a + Builtin::i32(10) == Builtin::i32(15)), u"a+10i32==15");
		#line 1239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((a + Builtin::u64(10ULL) == Builtin::i32(15)), u"a+10u64==15");
		#line 1240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((a + Builtin::i64(10LL) == Builtin::i32(15)), u"a+10i64==15");
		#line 1241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((a + Builtin::u64(10ULL) == Builtin::i32(15)), u"a+10u64==15");
		#line 1242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((a + Builtin::i128(10LL) == Builtin::i32(15)), u"a+10i128==15");
		#line 1243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((a + Builtin::u128(10ULL) == Builtin::i32(15)), u"a+10u128==15");
		#line 1246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((a - Builtin::i32(2) == Builtin::i32(3)), u"a-2==3");
		#line 1247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((a * Builtin::i32(2) == Builtin::i32(10)), u"a*2==10");
		#line 1248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, Builtin::i32(2)) == Builtin::i32(2)), u"a\\2==2");
		#line 1249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((a % Builtin::i32(2) == Builtin::i32(1)), u"a%2==1");
		#line 1250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT(((a & Builtin::i32(1)) == Builtin::i32(1)), u"(a&1)==1");
		#line 1251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT(((a | Builtin::i32(1)) == Builtin::i32(5)), u"(a|1)==5");
		#line 1252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT(((a ^ Builtin::i32(1)) == Builtin::i32(4)), u"(a^1)==4");
		#line 1253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((a << Builtin::i32(1) == Builtin::i32(10)), u"a<<1==10");
		#line 1254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((a >> Builtin::i32(1) == Builtin::i32(2)), u"a>>1==2");
		#line 1255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		a = Builtin::u32(0b11111011U);
		#line 1256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_UFCS(_operator_gt_gt_gt_eq)(a, Builtin::i32(2));
		#line 1257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((a == Builtin::i32(0b00111110)), u"a==0b0011_1110");
		#line 1258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_gt)(a, Builtin::i32(2)) == Builtin::i32(0b00001111)), u"a>>>2==0b0000_1111");
		#line 1259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_gt)(a, Builtin::i32(7)) == Builtin::i32(0)), u"a>>>7==0");
		#line 1262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		a = Builtin::u32(5U);
		#line 1263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((a == Builtin::i32(5)), u"a==5");
		#line 1264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((a != Builtin::i32(6)), u"a!=6");
		#line 1265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT(((a <=> Builtin::i32(6)) < 0), u"a<6");
		#line 1266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT(((a <=> Builtin::i32(5)) <= 0), u"a<=5");
		#line 1267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT(((a <=> Builtin::i32(4)) > 0), u"a>4");
		#line 1268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT(((a <=> Builtin::i32(5)) >= 0), u"a>=5");
		#line 1271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		a = Builtin::u64(5ULL);
		#line 1272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		a++;
		#line 1273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		a--;
		#line 1274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		a += Builtin::i32(5);
		#line 1275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		a -= Builtin::i32(5);
		#line 1276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		a *= Builtin::i32(2);
		#line 1277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_UFCS(_operator_bsl_eq)(a, Builtin::i32(2));
		#line 1278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		a %= Builtin::i32(1);
		#line 1279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		a &= Builtin::i32(1);
		#line 1280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		a |= Builtin::i32(1);
		#line 1281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		a ^= Builtin::i32(1);
		#line 1282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		a <<= Builtin::i32(1);
		#line 1283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		a >>= Builtin::i32(1);
		#line 1284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((a == Builtin::i32(0)), u"a==0");
		#line 1285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		a = Builtin::u64(10ULL);
		#line 1286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_not)(a) == Builtin::u64(0b1111111111111111111111111111111111111111111111111111111111110101ULL)), u"~a==0b1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_0101u64");
		#line 1289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::u64 b = Builtin::u64(5ULL); 
		#line 1290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::Nullable<Builtin::u64> c = nullptr; 
		#line 1291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::Nullable<Builtin::u64> d = Builtin::u64(5ULL); 
		#line 1292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((a != b), u"a!=b");
		#line 1293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((b != c), u"b!=c");
		#line 1294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((!Builtin::IdentityEquals(b, c)), u"b!==c");
		#line 1295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT(((b <=> c) > 0), u"b>c");
		#line 1296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((c != b), u"c!=b");
		#line 1297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((c == nullptr), u"c==null");
		#line 1298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((d != nullptr), u"d!=null");
		#line 1299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT(((c <=> d) < 0), u"c<d");
		#line 1300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((b == d), u"b==d");
		#line 1301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((Builtin::IdentityEquals(b, d)), u"b===d");
		#line 1304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::Nullable<Builtin::ObjectRef> o = c; 
		#line 1305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		o = d;
		#line 1306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_ne_eq_mul)(b, o)), u"b!=*o");
		#line 1307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		IComparable<Builtin::u64> icomp = a; 
		#line 1308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT(((icomp <=> b) > 0), u"icomp>b");
		#line 1311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		a = Builtin::u64(200ULL);
		#line 1312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(a.__ref()) == Builtin::i32(200)), u"a.HashCode==200");
		#line 1313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(a) == Builtin::i32(200)), u"#a==200");
		#line 1315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		a = Builtin::u64(35000ULL);
		#line 1316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(ToUInt32)(a.__ref()) == Builtin::i32(35000)), u"a.ToUInt32()==35000");
		#line 1317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(NarrowToInt16)(a.__ref()) == Builtin::i32(-30536)), u"a.NarrowToInt16()==-30536");
		#line 1320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		a = Builtin::u64(10ULL);
		#line 1321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		b = Builtin::u64(6ULL);
		#line 1322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UPCS(Abs)(b.__ref()) == Builtin::i32(6)), u"b.Abs==6");
		#line 1323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UPCS(IsFinite)(b.__ref())), u"b.IsFinite");
		#line 1324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UPCS(IsInteger)(b.__ref())), u"b.IsInteger");
		#line 1325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((!ADV_UPCS(IsNegative)(b.__ref())), u"!b.IsNegative");
		#line 1326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UPCS(IsPositive)(a.__ref())), u"a.IsPositive");
		#line 1327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UPCS(IsCanonical)(b.__ref())), u"b.IsCanonical");
		#line 1328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((!ADV_UPCS(IsComplexNumber)(b.__ref())), u"!b.IsComplexNumber");
		#line 1329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UPCS(IsRealNumber)(b.__ref())), u"b.IsRealNumber");
		#line 1330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((!ADV_UPCS(IsImaginaryNumber)(b.__ref())), u"!b.IsImaginaryNumber");
		#line 1331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UPCS(IsEvenInteger)(b.__ref())), u"b.IsEvenInteger");
		#line 1332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((!ADV_UPCS(IsOddInteger)(b.__ref())), u"!b.IsOddInteger");
		#line 1333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((!ADV_UPCS(IsInfinity)(b.__ref())), u"!b.IsInfinity");
		#line 1334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((!ADV_UPCS(IsPositiveInfinity)(b.__ref())), u"!b.IsPositiveInfinity");
		#line 1335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((!ADV_UPCS(IsNegativeInfinity)(b.__ref())), u"!b.IsNegativeInfinity");
		#line 1336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((!ADV_UPCS(IsNaN)(b.__ref())), u"!b.IsNaN");
		#line 1337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UPCS(IsNormal)(b.__ref())), u"b.IsNormal");
		#line 1338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((!ADV_UPCS(IsSubnormal)(b.__ref())), u"!b.IsSubnormal");
		#line 1339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((!ADV_UPCS(IsZero)(b.__ref())), u"!b.IsZero");
		#line 1342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UPCS(Sign)(a.__ref()) == +Builtin::i32(1)), u"a.Sign==+1");
		#line 1343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(CopySign)(a.__ref(), b) == a), u"a.CopySign(b)==a");
		#line 1344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(Max)(a.__ref(), b) == a), u"a.Max(b)==a");
		#line 1345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(Min)(a.__ref(), b) == b), u"a.Min(b)==b");
		#line 1346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(MaxNumber)(a.__ref(), b) == a), u"a.MaxNumber(b)==a");
		#line 1347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(MinNumber)(a.__ref(), b) == b), u"a.MinNumber(b)==b");
		#line 1348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(Clamp)(b.__ref(), Builtin::u64(1ULL), Builtin::u64(5ULL)) == Builtin::i32(5)), u"b.Clamp(1u64,5u64)==5");
		#line 1351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UPCS(IsPow2)(Builtin::u64(9223372036854775808ULL).__ref())), u"9223372036854775808u64.IsPow2");
		#line 1352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((!ADV_UPCS(IsPow2)(Builtin::u64(9223372036854775806ULL).__ref())), u"!9223372036854775806u64.IsPow2");
		#line 1353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::u64(2ULL).__ref()) == Builtin::i32(1)), u"2u64.Log2==1");
		#line 1354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::u64(16ULL).__ref()) == Builtin::i32(4)), u"16u64.Log2==4");
		#line 1355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::u64(64ULL).__ref()) == Builtin::i32(6)), u"64u64.Log2==6");
		#line 1356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::u64(10000000000000000000ULL).__ref()) == Builtin::i32(63)), u"10_000_000_000_000_000_000u64.Log2==63");
		#line 1357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::u64(2ULL).__ref()) == Builtin::i32(1)), u"2u64.Log2Ceiling==1");
		#line 1358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::u64(16ULL).__ref()) == Builtin::i32(4)), u"16u64.Log2Ceiling==4");
		#line 1359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::u64(65ULL).__ref()) == Builtin::i32(7)), u"65u64.Log2Ceiling==7");
		#line 1360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::u64(10000000000000000000ULL).__ref()) == Builtin::i32(64)), u"10_000_000_000_000_000_000u64.Log2Ceiling==64");
		#line 1361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UPCS(CheckedLog2)(Builtin::u64(0ULL).__ref()) == nullptr), u"0u64.CheckedLog2==null");
		#line 1362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(Builtin::u64(5ULL).__ref()) == Builtin::i32(0)), u"5u64.Log10==0");
		#line 1363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(a.__ref()) == Builtin::i32(1)), u"a.Log10==1");
		#line 1364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(ADV_USPCS(MaxValue, Builtin::u64)().__ref()) == Builtin::i32(19)), u"u64.MaxValue.Log10==19");
		#line 1365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(Log)(Builtin::u64(150ULL).__ref(), Builtin::u64(5ULL)) == Builtin::i32(3)), u"150u64.Log(5u64)==3");
		#line 1366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(Midpoint)(a.__ref(), Builtin::u64(30ULL)) == Builtin::i32(20)), u"a.Midpoint(30u64)==20");
		#line 1367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(Midpoint)(Builtin::u64(10000000000000000000ULL).__ref(), Builtin::u64(16000000000000000000ULL)) == Builtin::u64(13000000000000000000ULL)), u"10_000_000_000_000_000_000u64.Midpoint(16_000_000_000_000_000_000u64)==13_000_000_000_000_000_000u64");
		#line 1368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)(a.__ref(), Builtin::u64(10ULL)) == Builtin::i32(10)), u"a.NextMultipleOf(10u64)==10");
		#line 1369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)(Builtin::u64(11ULL).__ref(), Builtin::u64(10ULL)) == Builtin::i32(20)), u"11u64.NextMultipleOf(10u64)==20");
		#line 1370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)(Builtin::u64(10000000000000000000ULL).__ref(), Builtin::u64(8500000ULL)) == Builtin::u64(10000000000006000000ULL)), u"10_000_000_000_000_000_000u64.NextMultipleOf(8500000u64)==10_000_000_000_006_000_000u64");
		#line 1371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UPCS(ByteCount)(a.__ref()) == Builtin::i32(8)), u"a.ByteCount==8");
		#line 1372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UPCS(ByteSwapped)(Builtin::u64(0xabcdef12abcdef12ULL).__ref()) == Builtin::i64(0x12efcdab12efcdabLL)), u"0xabcdef12abcdef12_u64.ByteSwapped==0x12efcdab12efcdab");
		#line 1373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_not)(Builtin::u64(0b1010ULL), Builtin::i32(3)) == Builtin::i32(0b01010000)), u"0b1010_u64<<~3==0b0101_0000");
		#line 1374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_not)(Builtin::u64(0b1010ULL), Builtin::i32(5)) == Builtin::i32(0b101000000)), u"0b1010_u64<<~5==0b1_0100_0000");
		#line 1375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_not)(Builtin::u64(0b1010ULL), Builtin::i32(3)) == Builtin::u64(0b0100000000000000000000000000000000000000000000000000000000000001ULL)), u"0b1010_u64>>~3==0b0100_0000_0000_0000_0000_0000_0000_0000_0000_0000_0000_0000_0000_0000_0000_0001u");
		#line 1376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_not)(Builtin::u64(0b1010ULL), Builtin::i32(5)) == Builtin::u64(0b0101000000000000000000000000000000000000000000000000000000000000ULL)), u"0b1010_u64>>~5==0b0101_0000_0000_0000_0000_0000_0000_0000_0000_0000_0000_0000_0000_0000_0000_0000u");
		#line 1378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		a = Builtin::u64(10000000000000000000ULL);
		#line 1379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UPCS(MinimalBitWidth)(a.__ref()) == Builtin::i32(64)), u"a.MinimalBitWidth==64");
		#line 1380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UPCS(LeadingZeroCount)(a.__ref()) == Builtin::i32(0)), u"a.LeadingZeroCount==0");
		#line 1381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UPCS(TrailingZeroCount)(a.__ref()) == Builtin::i32(19)), u"a.TrailingZeroCount==19");
		#line 1382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UPCS(LeadingOneCount)(a.__ref()) == Builtin::i32(1)), u"a.LeadingOneCount==1");
		#line 1383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UPCS(TrailingOneCount)(a.__ref()) == Builtin::i32(0)), u"a.TrailingOneCount==0");
		#line 1384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UPCS(PopCount)(a.__ref()) == Builtin::i32(19)), u"a.PopCount==19");
		#line 1385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UPCS(ZeroCount)(a.__ref()) == Builtin::i32(45)), u"a.ZeroCount==45");
		#line 1386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UPCS(ReverseBits)(a.__ref()) == Builtin::u64(0b0000000000000000000101111001000100100000110001001110001101010001ULL)), u"a.ReverseBits==0b00000000_00000000_00010111_10010001_00100000_11000100_11100011_01010001u");
		#line 1387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		a = Builtin::u64(9000000000000000000ULL);
		#line 1388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UPCS(NextPow2)(a.__ref()) == Builtin::u64(9223372036854775808ULL)), u"a.NextPow2==9223372036854775808u");
		#line 1389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UPCS(PrevPow2)(a.__ref()) == Builtin::i64(4611686018427387904LL)), u"a.PrevPow2==4611686018427387904");
		#line 1390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UPCS(PrevPow2)(Builtin::u64(1ULL).__ref()) == Builtin::i32(0)), u"1u64.PrevPow2==0");
		#line 1391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UPCS(PrevPow2)(Builtin::u64(2ULL).__ref()) == Builtin::i32(2)), u"2u64.PrevPow2==2");
		#line 1392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UPCS(NextPow2)(Builtin::u64(2ULL).__ref()) == Builtin::i32(2)), u"2u64.NextPow2==2");
		#line 1393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UPCS(NextPow2)(Builtin::u64(3ULL).__ref()) == Builtin::i32(4)), u"3u64.NextPow2==4");
		#line 1394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UPCS(PrevPow2)(Builtin::u64(3ULL).__ref()) == Builtin::i32(2)), u"3u64.PrevPow2==2");
		#line 1395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UPCS(CheckedNextPow2)(Builtin::u64(10000000000000000000ULL).__ref()) == nullptr), u"10_000_000_000_000_000_000u64.CheckedNextPow2==null");
		#line 1397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(IsMultipleOf)(a.__ref(), Builtin::u64(5ULL))), u"a.IsMultipleOf(5u64)");
		#line 1398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((!ADV_UFCS(IsMultipleOf)(a.__ref(), Builtin::u64(7ULL))), u"!a.IsMultipleOf(7u64)");
		#line 1400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UPCS(MultiplyBy10)(Builtin::u64(10ULL).__ref()) == Builtin::i32(100)), u"10u64.MultiplyBy10==100");
		#line 1401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UPCS(MultiplyBy16)(Builtin::u64(10ULL).__ref()) == Builtin::i32(160)), u"10u64.MultiplyBy16==160");
		#line 1404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_qst)(a, Builtin::u64(100ULL)) == Builtin::u64(9000000000000000100ULL)), u"a+?100u64==9_000_000_000_000_000_100u64");
		#line 1405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_qst)(a, ADV_USPCS(MaxValue, Builtin::u64)()) == nullptr), u"a+?u64.MaxValue==null");
		#line 1406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_UFCS(_operator_add_qst_eq)(a, Builtin::u64(5ULL));
		#line 1407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((a == Builtin::u64(9000000000000000005ULL)), u"a==9_000_000_000_000_000_005u64");
		#line 1408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_UFCS(_operator_add_qst_eq)(a, ADV_USPCS(MaxValue, Builtin::u64)());
		#line 1409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((a == Builtin::u64(9000000000000000005ULL)), u"a==9_000_000_000_000_000_005u64");
		#line 1410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_ne)(a, Builtin::u64(100ULL)) == Builtin::u64(9000000000000000105ULL)), u"a+!100u64==9_000_000_000_000_000_105u64");
		#line 1411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_mod)(a, Builtin::u64(100ULL)) == Builtin::u64(9000000000000000105ULL)), u"a+%100u64==9_000_000_000_000_000_105u64");
		#line 1412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_mod)(a, Builtin::u64(9446744073709551611ULL)) == ADV_USPCS(MinValue, Builtin::u64)()), u"a+%9446744073709551611u64==u64.MinValue");
		#line 1413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_UFCS(_operator_add_mod_eq)(a, ADV_USPCS(MaxValue, Builtin::u64)());
		#line 1414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((a == Builtin::u64(9000000000000000004ULL)), u"a==9_000_000_000_000_000_004u64");
		#line 1415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_or)(a, Builtin::u64(10000000000000000000ULL)) == ADV_USPCS(MaxValue, Builtin::u64)()), u"a+|10_000_000_000_000_000_000u64==u64.MaxValue");
		#line 1416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_UFCS(_operator_add_or_eq)(a, ADV_USPCS(MaxValue, Builtin::u64)());
		#line 1417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		a = Builtin::u64(10000000000000000000ULL);
		#line 1418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_or)(a, Builtin::u64(10000000000000000000ULL)) == ADV_USPCS(MaxValue, Builtin::u64)()), u"a+|10_000_000_000_000_000_000u64==u64.MaxValue");
		#line 1419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		{
			#line 1420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_add_mod_qst)(a, ADV_USPCS(MaxValue, Builtin::u64)());
			#line 1421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			ADV_ASSERT((result == Builtin::u64(9999999999999999999ULL) && overflowed), u"result==9_999_999_999_999_999_999u64&&overflowed");
		}
		#line 1424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		a = ADV_USPCS(MaxValue, Builtin::u64)() - Builtin::i32(1);
		#line 1425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_add_qst_postfix)(a) == ADV_USPCS(MaxValue, Builtin::u64)() - Builtin::i32(1)), u"a++?==u64.MaxValue-1");
		#line 1426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::u64)()), u"a==u64.MaxValue");
		#line 1427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_UFCS(_operator_add_add_mod_postfix)(a);
		#line 1428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::u64)()), u"a==u64.MinValue");
		#line 1429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		a = ADV_USPCS(MaxValue, Builtin::u64)();
		#line 1430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_UFCS(_operator_add_add_or_postfix)(a);
		#line 1431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::u64)()), u"a==u64.MaxValue");
		#line 1433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		{
			#line 1434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.__ref(), Builtin::u64(0ULL), Builtin::Boolean(false));
			#line 1435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			ADV_ASSERT((result == ADV_USPCS(MaxValue, Builtin::u64)() && !overflowed), u"result==u64.MaxValue&&!overflowed");
		}
		#line 1437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		{
			#line 1438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.__ref(), Builtin::u64(0ULL), Builtin::Boolean(true));
			#line 1439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			ADV_ASSERT((result == ADV_USPCS(MinValue, Builtin::u64)() && overflowed), u"result==u64.MinValue&&overflowed");
		}
		#line 1441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		{
			#line 1442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.__ref(), Builtin::u64(10ULL), Builtin::Boolean(true));
			#line 1443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			ADV_ASSERT((result == Builtin::i32(10) && overflowed), u"result==10&&overflowed");
		}
		#line 1446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_qst)(a, Builtin::u64(1000000000000000000ULL)) == Builtin::u64(17446744073709551615ULL)), u"a-?1_000_000_000_000_000_000u64==17446744073709551615u64");
		#line 1447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_qst)(Builtin::u64(10ULL), ADV_USPCS(MaxValue, Builtin::u64)()) == nullptr), u"10u64-?u64.MaxValue==null");
		#line 1448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_UFCS(_operator_sub_qst_eq)(a, Builtin::u64(1000000000000000000ULL));
		#line 1449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((a == Builtin::u64(17446744073709551615ULL)), u"a==17446744073709551615u");
		#line 1450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_UFCS(_operator_sub_qst_eq)(a, ADV_USPCS(MaxValue, Builtin::u64)());
		#line 1451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((a == Builtin::u64(17446744073709551615ULL)), u"a==17446744073709551615u");
		#line 1452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_ne)(a, Builtin::u64(1ULL)) == Builtin::u64(17446744073709551614ULL)), u"a-!1u64==17446744073709551614u");
		#line 1453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_mod)(a, Builtin::u64(10000000000000000000ULL)) == Builtin::u64(7446744073709551615ULL)), u"a-%10_000_000_000_000_000_000u64==7446744073709551615u");
		#line 1454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_UFCS(_operator_sub_mod_eq)(a, ADV_USPCS(MaxValue, Builtin::u64)());
		#line 1455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((a == Builtin::u64(17446744073709551616ULL)), u"a==17446744073709551616u");
		#line 1456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_or)(a, Builtin::u64(18000000000000000000ULL)) == ADV_USPCS(MinValue, Builtin::u64)()), u"a-|18_000_000_000_000_000_000u64==u64.MinValue");
		#line 1457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_UFCS(_operator_sub_or_eq)(a, ADV_USPCS(MaxValue, Builtin::u64)());
		#line 1458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::u64)()), u"a==u64.MinValue");
		#line 1459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		{
			#line 1460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_sub_mod_qst)(a, Builtin::u64(2ULL));
			#line 1461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			ADV_ASSERT((result == Builtin::u64(18446744073709551614ULL) && overflowed), u"result==18446744073709551614u&&overflowed");
		}
		#line 1464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		a = ADV_USPCS(MinValue, Builtin::u64)() + Builtin::i32(1);
		#line 1465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_sub_qst_postfix)(a) == ADV_USPCS(MinValue, Builtin::u64)() + Builtin::i32(1)), u"a--?==u64.MinValue+1");
		#line 1466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::u64)()), u"a==u64.MinValue");
		#line 1467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_UFCS(_operator_sub_sub_mod_postfix)(a);
		#line 1468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::u64)()), u"a==u64.MaxValue");
		#line 1469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		a = ADV_USPCS(MinValue, Builtin::u64)();
		#line 1470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_UFCS(_operator_sub_sub_or_postfix)(a);
		#line 1471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::u64)()), u"a==u64.MinValue");
		#line 1473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		{
			#line 1474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.__ref(), Builtin::u64(0ULL), Builtin::Boolean(false));
			#line 1475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			ADV_ASSERT((result == ADV_USPCS(MinValue, Builtin::u64)() && !overflowed), u"result==u64.MinValue&&!overflowed");
		}
		#line 1477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		{
			#line 1478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.__ref(), Builtin::u64(0ULL), Builtin::Boolean(true));
			#line 1479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			ADV_ASSERT((result == ADV_USPCS(MaxValue, Builtin::u64)() && overflowed), u"result==u64.MaxValue&&overflowed");
		}
		#line 1481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		{
			#line 1482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.__ref(), Builtin::u64(10ULL), Builtin::Boolean(true));
			#line 1483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			ADV_ASSERT((result == Builtin::u64(18446744073709551605ULL) && overflowed), u"result==18446744073709551605u&&overflowed");
		}
		#line 1486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_qst)(a, Builtin::u64(1ULL)) == ADV_USPCS(MinValue, Builtin::u64)()), u"a*?1u64==u64.MinValue");
		#line 1487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		a = Builtin::u64(150000000000ULL);
		#line 1488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_qst)(a, Builtin::u64(200000000ULL)) == nullptr), u"a*?200000000u64==null");
		#line 1489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_UFCS(_operator_mul_qst_eq)(a, Builtin::u64(200000000ULL));
		#line 1490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((a == Builtin::u64(150000000000ULL)), u"a==150000000000u");
		#line 1491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_ne)(a, Builtin::u64(3000ULL)) == Builtin::u64(450000000000000ULL)), u"a*!3000u64==450000000000000u");
		#line 1492 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_mod)(a, Builtin::u64(3000ULL)) == Builtin::u64(450000000000000ULL)), u"a*%3000u64==450000000000000u");
		#line 1493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_mod)(a, Builtin::u64(300000000ULL)) == Builtin::u64(8106511852580896768ULL)), u"a*%300000000u64==8106511852580896768u");
		#line 1494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_UFCS(_operator_mul_mod_eq)(a, Builtin::u64(300000000ULL));
		#line 1495 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((a == Builtin::u64(8106511852580896768ULL)), u"a==8106511852580896768u");
		#line 1496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_or)(a, Builtin::u64(5000ULL)) == ADV_USPCS(MaxValue, Builtin::u64)()), u"a*|5000u64==u64.MaxValue");
		#line 1497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_UFCS(_operator_mul_or_eq)(a, Builtin::u64(5000ULL));
		#line 1498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::u64)()), u"a==u64.MaxValue");
		#line 1499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_or)(a, Builtin::u64(2ULL)) == ADV_USPCS(MaxValue, Builtin::u64)()), u"a*|2u64==u64.MaxValue");
		#line 1500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		{
			#line 1501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_mul_mod_qst)(a, Builtin::u64(2ULL));
			#line 1502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			ADV_ASSERT((result == Builtin::u64(18446744073709551614ULL) && overflowed), u"result==18446744073709551614u&&overflowed");
		}
		#line 1504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		a = Builtin::u64(500000000000ULL);
		#line 1505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		{
			#line 1506 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			const auto& [low, high] = ADV_UFCS(_operator_mul_gt)(a, Builtin::u64(50000000ULL));
			#line 1507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			ADV_ASSERT((low == Builtin::u64(6553255926290448384ULL) && high == Builtin::i32(1)), u"low==6553255926290448384u&&high==1");
		}
		#line 1509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		a = ADV_USPCS(MaxValue, Builtin::u64)();
		#line 1510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		{
			#line 1511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			const auto& [low, high] = ADV_UFCS(CarryingMul)(a.__ref(), Builtin::u64(2ULL), Builtin::u64(12ULL));
			#line 1512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			ADV_ASSERT((low == Builtin::i32(10) && high == Builtin::i32(2)), u"low==10&&high==2");
		}
		#line 1515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		a = Builtin::u64(100000000000ULL);
		#line 1516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, Builtin::u64(600000ULL)) == Builtin::i32(166666)), u"a\\600000u64==166666");
		#line 1517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		a /= Builtin::u64(600000ULL);
		#line 1518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((a == Builtin::i32(166667)), u"a==166667");
		#line 1519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		a = Builtin::u64(100000000000ULL);
		#line 1520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		{
			#line 1521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)(a, Builtin::u64(600000ULL));
			#line 1522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			ADV_ASSERT((div == Builtin::i32(166666) && rem == Builtin::i32(400000)), u"div==166666&&rem==400000");
		}
		#line 1524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_qst)(a, Builtin::u64(600000ULL)) == Builtin::u64(166666ULL)), u"a\\?600000u64==166666u64");
		#line 1525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_qst)(a, Builtin::u64(0ULL)) == nullptr), u"a\\?0u64==null");
		#line 1527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_ne)(a, Builtin::u64(600000ULL)) == Builtin::i32(166666)), u"a\\!600000u64==166666");
		#line 1528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_UFCS(_operator_bsl_mod_eq)(a, Builtin::u64(600000ULL));
		#line 1529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((a == Builtin::i32(166666)), u"a==166666");
		#line 1530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		a = Builtin::u32(10U);
		#line 1531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_UFCS(_operator_bsl_or_eq)(a, Builtin::u64(5ULL));
		#line 1532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((a == Builtin::i32(2)), u"a==2");
		#line 1533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		a = Builtin::u32(10U);
		#line 1535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_bsl)(a, Builtin::u64(5ULL)) == Builtin::u64(2ULL)), u"a\\\\5u64==2u64");
		#line 1536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_bsl)(a, Builtin::u64(6ULL)) == nullptr), u"a\\\\6u64==null");
		#line 1537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_bsl_qst)(a, Builtin::u64(0ULL)) == nullptr), u"a\\\\?0u64==null");
		#line 1539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_not)(a, Builtin::u64(6ULL)) == Builtin::i32(2)), u"a/~6u64==2");
		#line 1540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_lt)(a, Builtin::u64(6ULL)) == Builtin::i32(1)), u"a/<6u64==1");
		#line 1541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_gt)(a, Builtin::u64(6ULL)) == Builtin::i32(2)), u"a/>6u64==2");
		#line 1543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_qst)(a, Builtin::u64(5ULL)) == Builtin::u32(0U)), u"a%?5u64==0u");
		#line 1544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_qst)(a, Builtin::u64(0ULL)) == nullptr), u"a%?0u64==null");
		#line 1546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_ne)(a, Builtin::u64(6ULL)) == Builtin::i32(4)), u"a%!6u64==4");
		#line 1547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_UFCS(_operator_mod_mod_eq)(a, Builtin::i32(6));
		#line 1548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((a == Builtin::i32(4)), u"a==4");
		#line 1549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		a = Builtin::u32(10U);
		#line 1551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_bsl)(ADV_USPCS(MaxValue, Builtin::u64)(), Builtin::u32(4U)) == Builtin::i64(0b0000111111111111111111111111111111111111111111111111111111111111LL)), u"u64.MaxValue>>\\4u==0b0000_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111");
		#line 1552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_bsl)(ADV_USPCS(MaxValue, Builtin::u64)(), Builtin::u32(68U)) == Builtin::i32(0)), u"u64.MaxValue>>\\68u==0");
		#line 1553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_bsl)(ADV_USPCS(MinValue, Builtin::u64)(), Builtin::u32(68U)) == Builtin::i32(0)), u"u64.MinValue>>\\68u==0");
		#line 1554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_bsl)(ADV_USPCS(MaxValue, Builtin::u64)(), Builtin::u32(68U)) == Builtin::i32(0)), u"u64.MaxValue<<\\68u==0");
		#line 1555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_qst)(ADV_USPCS(MaxValue, Builtin::u64)(), Builtin::i32(4)) == Builtin::u64(0b0000111111111111111111111111111111111111111111111111111111111111ULL)), u"u64.MaxValue>>?4==0b0000_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111u");
		#line 1556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_qst)(ADV_USPCS(MaxValue, Builtin::u64)(), Builtin::i32(68)) == nullptr), u"u64.MaxValue>>?68==null");
		#line 1557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_qst)(ADV_USPCS(MaxValue, Builtin::u64)(), Builtin::i32(68)) == nullptr), u"u64.MaxValue<<?68==null");
		#line 1558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_ne)(ADV_USPCS(MaxValue, Builtin::u64)(), Builtin::i32(4)) == Builtin::i64(0b0000111111111111111111111111111111111111111111111111111111111111LL)), u"u64.MaxValue>>!4==0b0000_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111");
		#line 1559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_mod)(ADV_USPCS(MaxValue, Builtin::u64)(), Builtin::i32(68)) == Builtin::i64(0b0000111111111111111111111111111111111111111111111111111111111111LL)), u"u64.MaxValue>>%68==0b0000_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111");
		#line 1560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		a = ADV_USPCS(MaxValue, Builtin::u64)();
		#line 1561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_UFCS(_operator_gt_gt_mod_eq)(a, Builtin::i32(68));
		#line 1562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_mod)(a, Builtin::i32(68)) == Builtin::ParseInt128("0b1111111111111111111111111111111111111111111111111111111111110000")), u"a<<%68==0b1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_0000");
		#line 1563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		{
			#line 1564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_gt_gt_mod_qst)(ADV_USPCS(MaxValue, Builtin::u64)(), Builtin::i32(68));
			#line 1565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			ADV_ASSERT((result == Builtin::i64(0b0000111111111111111111111111111111111111111111111111111111111111LL) && overflowed), u"result==0b0000_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111&&overflowed");
		}
		#line 1569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		a = Builtin::u64(1500000ULL);
		#line 1570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor)(a, Builtin::u32(3U)) == Builtin::u64(3375000000000000000ULL)), u"a^^3u==3375000000000000000u");
		#line 1571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_UFCS(_operator_xor_xor_eq)(a, Builtin::u32(3U));
		#line 1572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((a == Builtin::u64(3375000000000000000ULL)), u"a==3375000000000000000u");
		#line 1573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor)(Builtin::u64(1500000ULL), Builtin::u32(3U)) == Builtin::u64(3375000000000000000ULL)), u"1500000u64^^3u==3375000000000000000u");
		#line 1574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_qst)(Builtin::u64(1500000ULL), Builtin::u32(3U)) == Builtin::u64(3375000000000000000ULL)), u"1500000u64^^?3u==3375000000000000000u");
		#line 1575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_qst)(Builtin::u64(1500000ULL), Builtin::u32(4U)) == nullptr), u"1500000u64^^?4u==null");
		#line 1576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_UFCS(_operator_xor_xor_qst_eq)(a, Builtin::u32(4U));
		#line 1577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((a == Builtin::u64(3375000000000000000ULL)), u"a==3375000000000000000u");
		#line 1578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		a = Builtin::u64(1500000ULL);
		#line 1579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_ne)(Builtin::u64(1500000ULL), Builtin::u32(3U)) == Builtin::u64(3375000000000000000ULL)), u"1500000u64^^!3u==3375000000000000000u");
		#line 1580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_mod)(Builtin::u64(1500000ULL), Builtin::u32(4U)) == Builtin::u64(12449899298073608192ULL)), u"1500000u64^^%4u==12449899298073608192u");
		#line 1581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_UFCS(_operator_xor_xor_mod_eq)(a, Builtin::u32(4U));
		#line 1582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((a == Builtin::u64(12449899298073608192ULL)), u"a==12449899298073608192u");
		#line 1583 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_or)(Builtin::u64(1500000ULL), Builtin::u32(3U)) == Builtin::u64(3375000000000000000ULL)), u"1500000u64^^|3u==3375000000000000000u");
		#line 1584 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_or)(Builtin::u64(1500000ULL), Builtin::u32(4U)) == ADV_USPCS(MaxValue, Builtin::u64)()), u"1500000u64^^|4u==u64.MaxValue");
		#line 1585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		{
			#line 1586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_xor_xor_mod_qst)(Builtin::u64(1500000ULL), Builtin::u32(4U));
			#line 1587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			ADV_ASSERT((result == Builtin::ParseInt128("12449899298073608192") && overflowed), u"result==12449899298073608192&&overflowed");
		}
		return true;
	}();
	#endif	
} namespace __extensions { using namespace System;
#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	auto _operator_eq_eq_mul(__extension_UInt64_20_u64 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool
	{
		#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		{
			#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			auto __tmp0 = Builtin::Cast<false, __extension_UInt64_1193_u64>(obj);
			#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			if ((__tmp0.IsValid())) {
				#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				const auto& obj = *__tmp0;
				
				#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				return __this == obj;
			}
		}
		#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return Builtin::Boolean(false);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	auto _operator_lt_eq_gt_mul(__extension_UInt64_73_u64 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32
	{
		#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		{
			#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			auto __tmp0 = Builtin::Cast<false, __extension_UInt64_1193_u64>(obj);
			#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			if ((__tmp0.IsValid())) {
				#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				const auto& obj = *__tmp0;
				
				#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				return __this <=> obj;
			}
		}
		#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		{
			#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
			if ((!Builtin::Is(obj, nullptr))) {
				#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				auto __tmp0 = *obj; const auto& obj = __tmp0;
				
				#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				Builtin::Throw(Builtin::InvalidOperationException{});
			}
		}
		#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return Builtin::i32(1);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	auto Parse(__extension_UInt64_269_u64 const& __this LIFETIMEBOUND, Builtin::Str input)  -> const typename __extension_UInt64_269_u64
	{
		#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return Builtin::u64(0ULL);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	auto TryParse(__extension_UInt64_269_u64 const& __this LIFETIMEBOUND, Builtin::Str input) noexcept -> const Builtin::Nullable<__extension_UInt64_1193_u64>
	{
		#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return Builtin::u64(0ULL);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	auto Log(__extension_UInt64_340_u64 const& __this LIFETIMEBOUND, __extension_UInt64_1193_u64 base)  -> const typename __extension_UInt64_340_u64
	{
		#line 439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		if (const auto result = ADV_UFCS(CheckedLog)(__this.__ref(), base)) {
			{
				#line 439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
				return result;
			}
		}
		#line 442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1066 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
	auto getCheckedIsqrt(__extension_UInt64_1057_u64 const& __this ) -> const Builtin::Nullable<__extension_UInt64_1193_u64>
	{
		#line 1067 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		constexpr auto MAX_RESULT = ADV_USFCS((Math), Isqrt64)(ADV_USPCS(MaxValue, __extension_UInt64_1193_u64)());
		#line 1068 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		const auto result = ADV_USFCS((Math), Isqrt64)(__this); 
		#line 1069 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		ASSUME((result <=> MAX_RESULT) <= 0);
		#line 1070 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt64.ast"
		return result;
	}
	} namespace System{

}