#include "Math.h"
#include "UInt128.h"

namespace System {
//###############################################################################
//# Global type aliases
//###############################################################################
//###############################################################################
//# Type definitions
//###############################################################################

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	















static_assert(Builtin::usize(sizeof(Builtin::u128)) == Builtin::i32(16), "u128 should be 16 bytes");
static_assert(ADV_USPCS(MinValue, Builtin::u128)() == Builtin::i32(0), "u128.Min should be 0");
static_assert(ADV_USPCS(MaxValue, Builtin::u128)() == Builtin::ParseUInt128("0xFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"), "u128.Max should be 0xFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFu");
static_assert(!ADV_USPCS(IsSigned, Builtin::u128)(), "u128 must be unsigned");
static_assert(ADV_USPCS(MaxDigitCount, Builtin::u128)() == Builtin::i32(39), "u128 max digit count must be 39");
static_assert(ADV_UFCS_NONLOCAL(_operator_xor_xor)(Builtin::u128(2ULL), Builtin::u32(127U)) == Builtin::ParseUInt128("170141183460469231731687303715884105728"), "2u128 ^^ 127u == 170141183460469231731687303715884105728_u128");
static_assert(Builtin::TypeIs<Builtin::u128, IComparable<Builtin::u128>>(), "u128 should implement IComparable<u128>");
static_assert(Builtin::TypeIs<Builtin::u128, IEquatable<Builtin::u128>>(), "u128 should implement IEquatable<u128>");
static_assert(Builtin::TypeIs<Builtin::u128, ISelfComparable>(), "u128 should implement ISelfComparable");
static_assert(Builtin::TypeIs<Builtin::u128, ISelfEquatable>(), "u128 should implement ISelfEquatable");
static_assert(Builtin::TypeIs<Builtin::u128, IAdditionOperators<Builtin::u128, Builtin::u128>>(), "u128 should implement IAdditionOperators<u128, u128>");
static_assert(Builtin::TypeIs<Builtin::u128, ISubtractionOperators<Builtin::u128, Builtin::u128>>(), "u128 should implement ISubtractionOperators<u128, u128>");
static_assert(Builtin::TypeIs<Builtin::u128, IMultiplyOperators<Builtin::u128, Builtin::u128>>(), "u128 should implement IMultiplyOperators<u128, u128>");
static_assert(Builtin::TypeIs<Builtin::u128, IDivisionOperators<Builtin::u128, Builtin::f64>>(), "u128 should implement IDivisionOperators<u128, f64>");
static_assert(Builtin::TypeIs<Builtin::u128, IIntDivOperators<Builtin::u128, Builtin::u128>>(), "u128 should implement IIntDivOperators<u128, u128>");
static_assert(Builtin::TypeIs<Builtin::u128, IModulusOperators<Builtin::u128, Builtin::u128>>(), "u128 should implement IModulusOperators<u128, u128>");
static_assert(Builtin::TypeIs<Builtin::u128, IBitwiseOperators<Builtin::u128, Builtin::u128>>(), "u128 should implement IBitwiseOperators<u128, u128>");
static_assert(Builtin::TypeIs<Builtin::u128, IShiftOperators<Builtin::i32, Builtin::u128>>(), "u128 should implement IShiftOperators<i32, u128>");
static_assert(Builtin::TypeIs<Builtin::u128, IUnaryPlusOperators<Builtin::u128>>(), "u128 should implement IUnaryPlusOperators<u128>");
static_assert(Builtin::TypeIs<Builtin::u128, IUnaryNegationOperators<Builtin::u128>>(), "u128 should implement IUnaryNegationOperators<u128>");
static_assert(Builtin::TypeIs<Builtin::u128, IIncrementOperators<Builtin::u128>>(), "u128 should implement IIncrementOperators<u128>");
static_assert(Builtin::TypeIs<Builtin::u128, IDecrementOperators<Builtin::u128>>(), "u128 should implement IDecrementOperators<u128>");
static_assert(ADV_UFCS_NONLOCAL(_operator_add_mod)(ADV_USPCS(MaxValue, Builtin::u128)(), Builtin::u128(1ULL)) == ADV_USPCS(MinValue, Builtin::u128)(), "u128.MaxValue +% 1u128 == u128.MinValue");
static_assert(ADV_UFCS_NONLOCAL(_operator_add_or)(ADV_USPCS(MaxValue, Builtin::u128)(), Builtin::u128(1ULL)) == ADV_USPCS(MaxValue, Builtin::u128)(), "u128.MaxValue +| 1u128 == u128.MaxValue");
#ifdef ADV_UNITTEST
	#line 1294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	static bool __Test_89d751813d6ab908 = [](){
		#line 1296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::u128 a = Builtin::u32(5U); 
		#line 1299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a + Builtin::i8(10) == Builtin::i32(15)), u"a+10i8==15");
		#line 1300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a + Builtin::u8(10U) == Builtin::i32(15)), u"a+10u8==15");
		#line 1301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a + Builtin::i16(10) == Builtin::i32(15)), u"a+10i16==15");
		#line 1302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a + Builtin::u128(10ULL) == Builtin::i32(15)), u"a+10u128==15");
		#line 1303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a + Builtin::i32(10) == Builtin::i32(15)), u"a+10i32==15");
		#line 1304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a + Builtin::u128(10ULL) == Builtin::i32(15)), u"a+10u128==15");
		#line 1305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a + Builtin::i64(10LL) == Builtin::i32(15)), u"a+10i64==15");
		#line 1306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a + Builtin::u128(10ULL) == Builtin::i32(15)), u"a+10u128==15");
		#line 1307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a + Builtin::i128(10LL) == Builtin::i32(15)), u"a+10i128==15");
		#line 1308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a + Builtin::u128(10ULL) == Builtin::i32(15)), u"a+10u128==15");
		#line 1311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a - Builtin::i32(2) == Builtin::i32(3)), u"a-2==3");
		#line 1312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a * Builtin::i32(2) == Builtin::i32(10)), u"a*2==10");
		#line 1313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, Builtin::i32(2)) == Builtin::i32(2)), u"a\\2==2");
		#line 1314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a % Builtin::i32(2) == Builtin::i32(1)), u"a%2==1");
		#line 1315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT(((a & Builtin::i32(1)) == Builtin::i32(1)), u"(a&1)==1");
		#line 1316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT(((a | Builtin::i32(1)) == Builtin::i32(5)), u"(a|1)==5");
		#line 1317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT(((a ^ Builtin::i32(1)) == Builtin::i32(4)), u"(a^1)==4");
		#line 1318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a << Builtin::i32(1) == Builtin::i32(10)), u"a<<1==10");
		#line 1319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a >> Builtin::i32(1) == Builtin::i32(2)), u"a>>1==2");
		#line 1320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a = Builtin::u32(0b11111011U);
		#line 1321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_UFCS(_operator_gt_gt_gt_eq)(a, Builtin::i32(2));
		#line 1322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a == Builtin::i32(0b00111110)), u"a==0b0011_1110");
		#line 1323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_gt)(a, Builtin::i32(2)) == Builtin::i32(0b00001111)), u"a>>>2==0b0000_1111");
		#line 1324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_gt)(a, Builtin::i32(7)) == Builtin::i32(0)), u"a>>>7==0");
		#line 1327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a = Builtin::u32(5U);
		#line 1328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a == Builtin::i32(5)), u"a==5");
		#line 1329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a != Builtin::i32(6)), u"a!=6");
		#line 1330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT(((a <=> Builtin::i32(6)) < 0), u"a<6");
		#line 1331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT(((a <=> Builtin::i32(5)) <= 0), u"a<=5");
		#line 1332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT(((a <=> Builtin::i32(4)) > 0), u"a>4");
		#line 1333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT(((a <=> Builtin::i32(5)) >= 0), u"a>=5");
		#line 1336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a = Builtin::u128(5ULL);
		#line 1337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a++;
		#line 1338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a--;
		#line 1339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a += Builtin::i32(5);
		#line 1340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a -= Builtin::i32(5);
		#line 1341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a *= Builtin::i32(2);
		#line 1342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_UFCS(_operator_bsl_eq)(a, Builtin::i32(2));
		#line 1343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a %= Builtin::i32(1);
		#line 1344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a &= Builtin::i32(1);
		#line 1345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a |= Builtin::i32(1);
		#line 1346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a ^= Builtin::i32(1);
		#line 1347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::InlineArray<Builtin::i32(5), Builtin::u128> arr{}; 
		#line 1348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		print(++ADV_UFCS(_operator_subscript)(arr.__ref(), Builtin::i32(3)));
		#line 1349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		print(+ADV_UFCS(_operator_subscript)(arr.__ref(), Builtin::i32(3)));
		#line 1350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		print(-ADV_UFCS(_operator_subscript)(arr.__ref(), Builtin::i32(3)));
		#line 1351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a <<= Builtin::i32(1);
		#line 1352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a >>= Builtin::i32(1);
		#line 1353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a == Builtin::i32(0)), u"a==0");
		#line 1354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a = Builtin::u128(10ULL);
		#line 1355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_not)(a) == Builtin::ParseUInt128("0xFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF5")), u"~a==0xFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF5u128");
		#line 1358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::u128 b = Builtin::u128(5ULL); 
		#line 1359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::Nullable<Builtin::u128> c = nullptr; 
		#line 1360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::Nullable<Builtin::u128> d = Builtin::u128(5ULL); 
		#line 1361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a != b), u"a!=b");
		#line 1362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((b != c), u"b!=c");
		#line 1363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((!Builtin::IdentityEquals(b, c)), u"b!==c");
		#line 1364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT(((b <=> c) > 0), u"b>c");
		#line 1365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((c != b), u"c!=b");
		#line 1366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((c == nullptr), u"c==null");
		#line 1367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((d != nullptr), u"d!=null");
		#line 1368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT(((c <=> d) < 0), u"c<d");
		#line 1369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((b == d), u"b==d");
		#line 1370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((Builtin::IdentityEquals(b, d)), u"b===d");
		#line 1373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::Nullable<Builtin::ObjectRef> o = c; 
		#line 1374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		o = d;
		#line 1375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_ne_eq_mul)(b, o)), u"b!=*o");
		#line 1376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		IComparable<Builtin::u128> icomp = a; 
		#line 1377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT(((icomp <=> b) > 0), u"icomp>b");
		#line 1380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a = Builtin::u128(200ULL);
		#line 1384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a = Builtin::u128(35000ULL);
		#line 1385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(ToUInt32)(a.__ref()) == Builtin::i32(35000)), u"a.ToUInt32()==35000");
		#line 1386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(NarrowToInt16)(a.__ref()) == Builtin::i32(-30536)), u"a.NarrowToInt16()==-30536");
		#line 1389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a = Builtin::u128(10ULL);
		#line 1390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		b = Builtin::u128(6ULL);
		#line 1391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(Abs)(b.__ref()) == Builtin::i32(6)), u"b.Abs==6");
		#line 1392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(IsFinite)(b.__ref())), u"b.IsFinite");
		#line 1393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(IsInteger)(b.__ref())), u"b.IsInteger");
		#line 1394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((!ADV_UPCS(IsNegative)(b.__ref())), u"!b.IsNegative");
		#line 1395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(IsPositive)(a.__ref())), u"a.IsPositive");
		#line 1396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(IsCanonical)(b.__ref())), u"b.IsCanonical");
		#line 1397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((!ADV_UPCS(IsComplexNumber)(b.__ref())), u"!b.IsComplexNumber");
		#line 1398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(IsRealNumber)(b.__ref())), u"b.IsRealNumber");
		#line 1399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((!ADV_UPCS(IsImaginaryNumber)(b.__ref())), u"!b.IsImaginaryNumber");
		#line 1400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(IsEvenInteger)(b.__ref())), u"b.IsEvenInteger");
		#line 1401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((!ADV_UPCS(IsOddInteger)(b.__ref())), u"!b.IsOddInteger");
		#line 1402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((!ADV_UPCS(IsInfinity)(b.__ref())), u"!b.IsInfinity");
		#line 1403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((!ADV_UPCS(IsPositiveInfinity)(b.__ref())), u"!b.IsPositiveInfinity");
		#line 1404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((!ADV_UPCS(IsNegativeInfinity)(b.__ref())), u"!b.IsNegativeInfinity");
		#line 1405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((!ADV_UPCS(IsNaN)(b.__ref())), u"!b.IsNaN");
		#line 1406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(IsNormal)(b.__ref())), u"b.IsNormal");
		#line 1407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((!ADV_UPCS(IsSubnormal)(b.__ref())), u"!b.IsSubnormal");
		#line 1408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((!ADV_UPCS(IsZero)(b.__ref())), u"!b.IsZero");
		#line 1411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(Sign)(a.__ref()) == +Builtin::i32(1)), u"a.Sign==+1");
		#line 1412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(CopySign)(a.__ref(), b) == a), u"a.CopySign(b)==a");
		#line 1413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(Max)(a.__ref(), b) == a), u"a.Max(b)==a");
		#line 1414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(Min)(a.__ref(), b) == b), u"a.Min(b)==b");
		#line 1415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(MaxNumber)(a.__ref(), b) == a), u"a.MaxNumber(b)==a");
		#line 1416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(MinNumber)(a.__ref(), b) == b), u"a.MinNumber(b)==b");
		#line 1417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(Clamp)(b.__ref(), Builtin::u128(1ULL), Builtin::u128(5ULL)) == Builtin::i32(5)), u"b.Clamp(1u128,5u128)==5");
		#line 1420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(IsPow2)(Builtin::ParseUInt128("170141183460469231731687303715884105728").__ref())), u"170141183460469231731687303715884105728u128.IsPow2");
		#line 1421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((!ADV_UPCS(IsPow2)(Builtin::ParseUInt128("170141183460469231731687303715884105726").__ref())), u"!170141183460469231731687303715884105726u128.IsPow2");
		#line 1422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::u128(2ULL).__ref()) == Builtin::i32(1)), u"2u128.Log2==1");
		#line 1423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::u128(16ULL).__ref()) == Builtin::i32(4)), u"16u128.Log2==4");
		#line 1424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::u128(64ULL).__ref()) == Builtin::i32(6)), u"64u128.Log2==6");
		#line 1425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::ParseUInt128("180141183460469231731687303715884105728").__ref()) == Builtin::i32(127)), u"180141183460469231731687303715884105728u128.Log2==127");
		#line 1426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::u128(2ULL).__ref()) == Builtin::i32(1)), u"2u128.Log2Ceiling==1");
		#line 1427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::u128(16ULL).__ref()) == Builtin::i32(4)), u"16u128.Log2Ceiling==4");
		#line 1428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::u128(65ULL).__ref()) == Builtin::i32(7)), u"65u128.Log2Ceiling==7");
		#line 1429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::ParseUInt128("180141183460469231731687303715884105728").__ref()) == Builtin::i32(128)), u"180141183460469231731687303715884105728u128.Log2Ceiling==128");
		#line 1430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(CheckedLog2)(Builtin::u128(0ULL).__ref()) == nullptr), u"0u128.CheckedLog2==null");
		#line 1431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(Builtin::u128(5ULL).__ref()) == Builtin::i32(0)), u"5u128.Log10==0");
		#line 1432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(a.__ref()) == Builtin::i32(1)), u"a.Log10==1");
		#line 1433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(ADV_USPCS(MaxValue, Builtin::u128)().__ref()) == Builtin::i32(38)), u"u128.MaxValue.Log10==38");
		#line 1434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(Log)(Builtin::u128(150ULL).__ref(), Builtin::u128(5ULL)) == Builtin::i32(3)), u"150u128.Log(5u128)==3");
		#line 1435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(Midpoint)(a.__ref(), Builtin::u128(30ULL)) == Builtin::i32(20)), u"a.Midpoint(30u128)==20");
		#line 1436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(Midpoint)(Builtin::ParseUInt128("100000000000000000000000000000000000000").__ref(), Builtin::ParseUInt128("300000000000000000000000000000000000000")) == Builtin::ParseUInt128("200000000000000000000000000000000000000")), u"100000000000000000000000000000000000000u128.Midpoint(300000000000000000000000000000000000000u128)==200000000000000000000000000000000000000u128");
		#line 1437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)(a.__ref(), Builtin::u128(10ULL)) == Builtin::i32(10)), u"a.NextMultipleOf(10u128)==10");
		#line 1438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)(Builtin::u128(11ULL).__ref(), Builtin::u128(10ULL)) == Builtin::i32(20)), u"11u128.NextMultipleOf(10u128)==20");
		#line 1439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)(Builtin::ParseUInt128("200000000000000000000000000000000000000").__ref(), Builtin::u128(85035530000000ULL)) == Builtin::ParseUInt128("200000000000000000000000022569640000000")), u"200000000000000000000000000000000000000u128.NextMultipleOf(85035530000000u128)==200000000000000000000000022569640000000u128");
		#line 1440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(ByteCount)(a.__ref()) == Builtin::i32(16)), u"a.ByteCount==16");
		#line 1441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(ByteSwapped)(Builtin::ParseUInt128("0xabcdef12abcdef12abcdef12abcdef12").__ref()) == Builtin::ParseUInt128("0x12efcdab12efcdab12efcdab12efcdab")), u"0xabcdef12abcdef12abcdef12abcdef12_u128.ByteSwapped==0x12efcdab12efcdab12efcdab12efcdab_u128");
		#line 1442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_not)(Builtin::u128(0b1010ULL), Builtin::i32(3)) == Builtin::i32(0b01010000)), u"0b1010_u128<<~3==0b0101_0000");
		#line 1443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_not)(Builtin::u128(0b1010ULL), Builtin::i32(5)) == Builtin::i32(0b101000000)), u"0b1010_u128<<~5==0b1_0100_0000");
		#line 1444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_not)(Builtin::u128(0b1010ULL), Builtin::i32(3)) == Builtin::ParseUInt128("0x40000000000000000000000000000001")), u"0b1010_u128>>~3==0x40000000000000000000000000000001_u128");
		#line 1445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_not)(Builtin::u128(0b1010ULL), Builtin::i32(5)) == Builtin::ParseUInt128("0x50000000000000000000000000000000")), u"0b1010_u128>>~5==0x50000000000000000000000000000000_u128");
		#line 1447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a = Builtin::ParseUInt128("200000000000000000000000000000000000000");
		#line 1448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(MinimalBitWidth)(a.__ref()) == Builtin::i32(128)), u"a.MinimalBitWidth==128");
		#line 1449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(LeadingZeroCount)(a.__ref()) == Builtin::i32(0)), u"a.LeadingZeroCount==0");
		#line 1450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(TrailingZeroCount)(a.__ref()) == Builtin::i32(39)), u"a.TrailingZeroCount==39");
		#line 1451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(LeadingOneCount)(a.__ref()) == Builtin::i32(1)), u"a.LeadingOneCount==1");
		#line 1452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(TrailingOneCount)(a.__ref()) == Builtin::i32(0)), u"a.TrailingOneCount==0");
		#line 1453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(PopCount)(a.__ref()) == Builtin::i32(38)), u"a.PopCount==38");
		#line 1454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(ZeroCount)(a.__ref()) == Builtin::i32(90)), u"a.ZeroCount==90");
		#line 1455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(ReverseBits)(a.__ref()) == Builtin::ParseUInt128("350781075088058240024014441")), u"a.ReverseBits==350781075088058240024014441u128");
		#line 1456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a = Builtin::ParseUInt128("160141183460469231731687303715884105728");
		#line 1457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(NextPow2)(a.__ref()) == Builtin::ParseUInt128("170141183460469231731687303715884105728")), u"a.NextPow2==170141183460469231731687303715884105728u128");
		#line 1458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(PrevPow2)(a.__ref()) == Builtin::ParseUInt128("85070591730234615865843651857942052864")), u"a.PrevPow2==85070591730234615865843651857942052864u128");
		#line 1459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(PrevPow2)(Builtin::u128(1ULL).__ref()) == Builtin::i32(0)), u"1u128.PrevPow2==0");
		#line 1460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(PrevPow2)(Builtin::u128(2ULL).__ref()) == Builtin::i32(2)), u"2u128.PrevPow2==2");
		#line 1461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(NextPow2)(Builtin::u128(2ULL).__ref()) == Builtin::i32(2)), u"2u128.NextPow2==2");
		#line 1462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(NextPow2)(Builtin::u128(3ULL).__ref()) == Builtin::i32(4)), u"3u128.NextPow2==4");
		#line 1463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(PrevPow2)(Builtin::u128(3ULL).__ref()) == Builtin::i32(2)), u"3u128.PrevPow2==2");
		#line 1464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(CheckedNextPow2)(Builtin::ParseUInt128("200000000000000000000000000000000000000").__ref()) == nullptr), u"200000000000000000000000000000000000000u128.CheckedNextPow2==null");
		#line 1466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(IsMultipleOf)(Builtin::ParseUInt128("200000000000000000000000000000000000000").__ref(), Builtin::u128(5ULL))), u"200000000000000000000000000000000000000u128.IsMultipleOf(5u128)");
		#line 1467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((!ADV_UFCS(IsMultipleOf)(Builtin::ParseUInt128("200000000000000000000000000000000000000").__ref(), Builtin::u128(7ULL))), u"!200000000000000000000000000000000000000u128.IsMultipleOf(7u128)");
		#line 1469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(MultiplyBy10)(Builtin::u128(10ULL).__ref()) == Builtin::i32(100)), u"10u128.MultiplyBy10==100");
		#line 1470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(MultiplyBy16)(Builtin::u128(10ULL).__ref()) == Builtin::i32(160)), u"10u128.MultiplyBy16==160");
		#line 1473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_qst)(a, Builtin::u128(100ULL)) == Builtin::ParseUInt128("160141183460469231731687303715884105828")), u"a+?100u128==160141183460469231731687303715884105828u128");
		#line 1474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_qst)(a, ADV_USPCS(MaxValue, Builtin::u128)()) == nullptr), u"a+?u128.MaxValue==null");
		#line 1475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_UFCS(_operator_add_qst_eq)(a, Builtin::u128(5ULL));
		#line 1476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a == Builtin::ParseUInt128("160141183460469231731687303715884105733")), u"a==160141183460469231731687303715884105733u128");
		#line 1477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_UFCS(_operator_add_qst_eq)(a, ADV_USPCS(MaxValue, Builtin::u128)());
		#line 1478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a == Builtin::ParseUInt128("160141183460469231731687303715884105733")), u"a==160141183460469231731687303715884105733u128");
		#line 1479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_ne)(a, Builtin::u128(100ULL)) == Builtin::ParseUInt128("160141183460469231731687303715884105833")), u"a+!100u128==160141183460469231731687303715884105833u128");
		#line 1480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_mod)(a, Builtin::u128(100ULL)) == Builtin::ParseUInt128("160141183460469231731687303715884105833")), u"a+%100u128==160141183460469231731687303715884105833u128");
		#line 1481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_mod)(a, Builtin::ParseUInt128("180141183460469231731687303715884105723")) == ADV_USPCS(MinValue, Builtin::u128)()), u"a+%180141183460469231731687303715884105723u128==u128.MinValue");
		#line 1482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_UFCS(_operator_add_mod_eq)(a, ADV_USPCS(MaxValue, Builtin::u128)());
		#line 1483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a == Builtin::ParseUInt128("160141183460469231731687303715884105732")), u"a==160141183460469231731687303715884105732u128");
		#line 1484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_or)(a, Builtin::ParseUInt128("200141183460469231731687303715884105723")) == ADV_USPCS(MaxValue, Builtin::u128)()), u"a+|200141183460469231731687303715884105723u128==u128.MaxValue");
		#line 1485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_UFCS(_operator_add_or_eq)(a, ADV_USPCS(MaxValue, Builtin::u128)());
		#line 1486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a = Builtin::ParseUInt128("160141183460469231731687303715884105728");
		#line 1487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_or)(a, Builtin::ParseUInt128("200141183460469231731687303715884105723")) == ADV_USPCS(MaxValue, Builtin::u128)()), u"a+|200141183460469231731687303715884105723u128==u128.MaxValue");
		#line 1488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		{
			#line 1489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_add_mod_qst)(a, ADV_USPCS(MaxValue, Builtin::u128)());
			#line 1490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			ADV_ASSERT((result == Builtin::ParseUInt128("160141183460469231731687303715884105727") && overflowed), u"result==160141183460469231731687303715884105727u128&&overflowed");
		}
		#line 1493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a = ADV_USPCS(MaxValue, Builtin::u128)() - Builtin::i32(1);
		#line 1494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_add_qst_postfix)(a) == ADV_USPCS(MaxValue, Builtin::u128)() - Builtin::i32(1)), u"a++?==u128.MaxValue-1");
		#line 1495 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::u128)()), u"a==u128.MaxValue");
		#line 1496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_UFCS(_operator_add_add_mod_postfix)(a);
		#line 1497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::u128)()), u"a==u128.MinValue");
		#line 1498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a = ADV_USPCS(MaxValue, Builtin::u128)();
		#line 1499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_UFCS(_operator_add_add_or_postfix)(a);
		#line 1500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::u128)()), u"a==u128.MaxValue");
		#line 1502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		{
			#line 1503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.__ref(), Builtin::u128(0ULL), Builtin::Boolean(false));
			#line 1504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			ADV_ASSERT((result == ADV_USPCS(MaxValue, Builtin::u128)() && !overflowed), u"result==u128.MaxValue&&!overflowed");
		}
		#line 1506 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		{
			#line 1507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.__ref(), Builtin::u128(0ULL), Builtin::Boolean(true));
			#line 1508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			ADV_ASSERT((result == ADV_USPCS(MinValue, Builtin::u128)() && overflowed), u"result==u128.MinValue&&overflowed");
		}
		#line 1510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		{
			#line 1511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.__ref(), Builtin::u128(10ULL), Builtin::Boolean(true));
			#line 1512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			ADV_ASSERT((result == Builtin::i32(10) && overflowed), u"result==10&&overflowed");
		}
		#line 1515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_qst)(a, Builtin::ParseUInt128("200000000000000000000000000000000000000")) == Builtin::ParseUInt128("140282366920938463463374607431768211455")), u"a-?200000000000000000000000000000000000000u128==140282366920938463463374607431768211455u128");
		#line 1516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_qst)(Builtin::u128(10ULL), ADV_USPCS(MaxValue, Builtin::u128)()) == nullptr), u"10u128-?u128.MaxValue==null");
		#line 1517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_UFCS(_operator_sub_qst_eq)(a, Builtin::ParseUInt128("200000000000000000000000000000000000000"));
		#line 1518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a == Builtin::ParseUInt128("140282366920938463463374607431768211455")), u"a==140282366920938463463374607431768211455u128");
		#line 1519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_UFCS(_operator_sub_qst_eq)(a, ADV_USPCS(MaxValue, Builtin::u128)());
		#line 1520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a == Builtin::ParseUInt128("140282366920938463463374607431768211455")), u"a==140282366920938463463374607431768211455u128");
		#line 1521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_ne)(a, Builtin::u128(1ULL)) == Builtin::ParseUInt128("140282366920938463463374607431768211454")), u"a-!1u128==140282366920938463463374607431768211454u128");
		#line 1522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_mod)(a, Builtin::ParseUInt128("200000000000000000000000000000000000000")) == Builtin::ParseUInt128("280564733841876926926749214863536422911")), u"a-%200000000000000000000000000000000000000u128==280564733841876926926749214863536422911u128");
		#line 1523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_UFCS(_operator_sub_mod_eq)(a, ADV_USPCS(MaxValue, Builtin::u128)());
		#line 1524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a == Builtin::ParseUInt128("140282366920938463463374607431768211456")), u"a==140282366920938463463374607431768211456u128");
		#line 1525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_or)(a, Builtin::ParseUInt128("300000000000000000000000000000000000000")) == ADV_USPCS(MinValue, Builtin::u128)()), u"a-|300000000000000000000000000000000000000u128==u128.MinValue");
		#line 1526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_UFCS(_operator_sub_or_eq)(a, ADV_USPCS(MaxValue, Builtin::u128)());
		#line 1527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::u128)()), u"a==u128.MinValue");
		#line 1528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		{
			#line 1529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_sub_mod_qst)(a, Builtin::u128(2ULL));
			#line 1530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			ADV_ASSERT((result == Builtin::ParseUInt128("340282366920938463463374607431768211454") && overflowed), u"result==340282366920938463463374607431768211454u128&&overflowed");
		}
		#line 1533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a = ADV_USPCS(MinValue, Builtin::u128)() + Builtin::i32(1);
		#line 1534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_sub_qst_postfix)(a) == ADV_USPCS(MinValue, Builtin::u128)() + Builtin::i32(1)), u"a--?==u128.MinValue+1");
		#line 1535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::u128)()), u"a==u128.MinValue");
		#line 1536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_UFCS(_operator_sub_sub_mod_postfix)(a);
		#line 1537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::u128)()), u"a==u128.MaxValue");
		#line 1538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a = ADV_USPCS(MinValue, Builtin::u128)();
		#line 1539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_UFCS(_operator_sub_sub_or_postfix)(a);
		#line 1540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::u128)()), u"a==u128.MinValue");
		#line 1542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		{
			#line 1543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.__ref(), Builtin::u128(0ULL), Builtin::Boolean(false));
			#line 1544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			ADV_ASSERT((result == ADV_USPCS(MinValue, Builtin::u128)() && !overflowed), u"result==u128.MinValue&&!overflowed");
		}
		#line 1546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		{
			#line 1547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.__ref(), Builtin::u128(0ULL), Builtin::Boolean(true));
			#line 1548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			ADV_ASSERT((result == ADV_USPCS(MaxValue, Builtin::u128)() && overflowed), u"result==u128.MaxValue&&overflowed");
		}
		#line 1550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		{
			#line 1551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.__ref(), Builtin::u128(10ULL), Builtin::Boolean(true));
			#line 1552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			ADV_ASSERT((result == Builtin::ParseUInt128("340282366920938463463374607431768211445") && overflowed), u"result==340282366920938463463374607431768211445u128&&overflowed");
		}
		#line 1555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_qst)(a, Builtin::u128(1ULL)) == ADV_USPCS(MinValue, Builtin::u128)()), u"a*?1u128==u128.MinValue");
		#line 1556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a = Builtin::ParseUInt128("150000000000000000000");
		#line 1557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_qst)(a, Builtin::ParseUInt128("20000000000000000000")) == nullptr), u"a*?20000000000000000000u128==null");
		#line 1558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_UFCS(_operator_mul_qst_eq)(a, Builtin::ParseUInt128("20000000000000000000"));
		#line 1559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a == Builtin::ParseUInt128("150000000000000000000")), u"a==150000000000000000000u");
		#line 1560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_ne)(a, Builtin::u128(3000000ULL)) == Builtin::ParseUInt128("450000000000000000000000000")), u"a*!3000000u128==450000000000000000000000000u");
		#line 1561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_mod)(a, Builtin::u128(3000000ULL)) == Builtin::ParseUInt128("450000000000000000000000000")), u"a*%3000000u128==450000000000000000000000000u");
		#line 1562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_mod)(a, Builtin::ParseUInt128("20000000000000000000")) == Builtin::ParseUInt128("277741064632492292293003140545854308352")), u"a*%20000000000000000000u128==277741064632492292293003140545854308352u");
		#line 1563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_UFCS(_operator_mul_mod_eq)(a, Builtin::ParseUInt128("20000000000000000000"));
		#line 1564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a == Builtin::ParseUInt128("277741064632492292293003140545854308352")), u"a==277741064632492292293003140545854308352u");
		#line 1565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_or)(a, Builtin::u128(5000ULL)) == ADV_USPCS(MaxValue, Builtin::u128)()), u"a*|5000u128==u128.MaxValue");
		#line 1566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_UFCS(_operator_mul_or_eq)(a, Builtin::u128(5000ULL));
		#line 1567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::u128)()), u"a==u128.MaxValue");
		#line 1568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_or)(a, Builtin::u128(2ULL)) == ADV_USPCS(MaxValue, Builtin::u128)()), u"a*|2u128==u128.MaxValue");
		#line 1569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		{
			#line 1570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_mul_mod_qst)(a, Builtin::u128(2ULL));
			#line 1571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			ADV_ASSERT((result == Builtin::ParseUInt128("340282366920938463463374607431768211454") && overflowed), u"result==340282366920938463463374607431768211454u&&overflowed");
		}
		#line 1573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a = Builtin::ParseUInt128("150000000000000000000");
		#line 1574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		{
			#line 1575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			const auto& [low, high] = ADV_UFCS(_operator_mul_gt)(a, Builtin::ParseUInt128("200000000000000000000"));
			#line 1576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			ADV_ASSERT((low == Builtin::ParseUInt128("0x297dd54a15ee3f032de0230000000000") && high == Builtin::u32(0x58U)), u"low==0x297dd54a15ee3f032de0230000000000_u128&&high==0x58u");
		}
		#line 1578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a = ADV_USPCS(MaxValue, Builtin::u128)();
		#line 1579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		{
			#line 1580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			const auto& [low, high] = ADV_UFCS(CarryingMul)(a.__ref(), Builtin::u128(2ULL), Builtin::u128(12ULL));
			#line 1581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			ADV_ASSERT((low == Builtin::i32(10) && high == Builtin::i32(2)), u"low==10&&high==2");
		}
		#line 1584 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a = Builtin::ParseUInt128("100000000000000000000");
		#line 1585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, Builtin::u128(6000000000ULL)) == Builtin::i64(16666666666LL)), u"a\\6000000000u128==16666666666");
		#line 1586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a /= Builtin::u128(6000000000ULL);
		#line 1587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a == Builtin::i64(16666666667LL)), u"a==16666666667");
		#line 1588 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a = Builtin::ParseUInt128("100000000000000000000");
		#line 1589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		{
			#line 1590 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)(a, Builtin::u128(6000000000ULL));
			#line 1591 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			ADV_ASSERT((div == Builtin::i64(16666666666LL) && rem == Builtin::i64(4000000000LL)), u"div==16666666666&&rem==4000000000");
		}
		#line 1593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_qst)(a, Builtin::u128(6000000000ULL)) == Builtin::u64(16666666666ULL)), u"a\\?6000000000u128==16666666666u");
		#line 1594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_qst)(a, Builtin::u128(0ULL)) == nullptr), u"a\\?0u128==null");
		#line 1596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_ne)(a, Builtin::u128(6000000000ULL)) == Builtin::u64(16666666666ULL)), u"a\\!6000000000u128==16666666666u");
		#line 1597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_UFCS(_operator_bsl_mod_eq)(a, Builtin::u128(6000000000ULL));
		#line 1598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a == Builtin::i64(16666666666LL)), u"a==16666666666");
		#line 1599 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a = Builtin::u32(10U);
		#line 1600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_UFCS(_operator_bsl_or_eq)(a, Builtin::u128(5ULL));
		#line 1601 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a == Builtin::i32(2)), u"a==2");
		#line 1602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a = Builtin::u32(10U);
		#line 1604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_bsl)(a, Builtin::u128(5ULL)) == Builtin::u128(2ULL)), u"a\\\\5u128==2u128");
		#line 1605 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_bsl)(a, Builtin::u128(6ULL)) == nullptr), u"a\\\\6u128==null");
		#line 1606 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_bsl_qst)(a, Builtin::u128(0ULL)) == nullptr), u"a\\\\?0u128==null");
		#line 1608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_not)(a, Builtin::u128(6ULL)) == Builtin::i32(2)), u"a/~6u128==2");
		#line 1609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_lt)(a, Builtin::u128(6ULL)) == Builtin::i32(1)), u"a/<6u128==1");
		#line 1610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_gt)(a, Builtin::u128(6ULL)) == Builtin::i32(2)), u"a/>6u128==2");
		#line 1612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_qst)(a, Builtin::u128(5ULL)) == Builtin::u32(0U)), u"a%?5u128==0u");
		#line 1613 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_qst)(a, Builtin::u128(0ULL)) == nullptr), u"a%?0u128==null");
		#line 1615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_ne)(a, Builtin::u128(6ULL)) == Builtin::i32(4)), u"a%!6u128==4");
		#line 1616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_UFCS(_operator_mod_mod_eq)(a, Builtin::i32(6));
		#line 1617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a == Builtin::i32(4)), u"a==4");
		#line 1618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a = Builtin::u32(10U);
		#line 1620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_bsl)(ADV_USPCS(MaxValue, Builtin::u128)(), Builtin::u32(4U)) == Builtin::ParseUInt128("0x0FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF")), u"u128.MaxValue>>\\4u==0x0FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF_u128");
		#line 1621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_bsl)(ADV_USPCS(MaxValue, Builtin::u128)(), Builtin::u32(132U)) == Builtin::i32(0)), u"u128.MaxValue>>\\132u==0");
		#line 1622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_bsl)(ADV_USPCS(MinValue, Builtin::u128)(), Builtin::u32(132U)) == Builtin::i32(0)), u"u128.MinValue>>\\132u==0");
		#line 1623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_bsl)(ADV_USPCS(MaxValue, Builtin::u128)(), Builtin::u32(132U)) == Builtin::i32(0)), u"u128.MaxValue<<\\132u==0");
		#line 1624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_qst)(ADV_USPCS(MaxValue, Builtin::u128)(), Builtin::i32(4)) == Builtin::ParseUInt128("0x0FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF")), u"u128.MaxValue>>?4==0x0FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF_u128");
		#line 1625 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_qst)(ADV_USPCS(MaxValue, Builtin::u128)(), Builtin::i32(132)) == nullptr), u"u128.MaxValue>>?132==null");
		#line 1626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_qst)(ADV_USPCS(MaxValue, Builtin::u128)(), Builtin::i32(132)) == nullptr), u"u128.MaxValue<<?132==null");
		#line 1627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_ne)(ADV_USPCS(MaxValue, Builtin::u128)(), Builtin::i32(4)) == Builtin::ParseUInt128("0x0FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF")), u"u128.MaxValue>>!4==0x0FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF_u128");
		#line 1628 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_mod)(ADV_USPCS(MaxValue, Builtin::u128)(), Builtin::i32(132)) == Builtin::ParseUInt128("0x0FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF")), u"u128.MaxValue>>%132==0x0FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF_u128");
		#line 1629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a = ADV_USPCS(MaxValue, Builtin::u128)();
		#line 1630 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_UFCS(_operator_gt_gt_mod_eq)(a, Builtin::i32(132));
		#line 1631 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_mod)(a, Builtin::i32(132)) == Builtin::ParseUInt128("0xFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0")), u"a<<%132==0xFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0_u128");
		#line 1632 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		{
			#line 1633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_gt_gt_mod_qst)(ADV_USPCS(MaxValue, Builtin::u128)(), Builtin::i32(132));
			#line 1634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			ADV_ASSERT((result == Builtin::ParseUInt128("0x0FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF") && overflowed), u"result==0x0FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF_u128&&overflowed");
		}
		#line 1638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a = Builtin::u64(1515151500000000ULL);
		#line 1639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor)(a, Builtin::u32(2U)) == Builtin::ParseUInt128("2295684067952250000000000000000")), u"a^^2u==2295684067952250000000000000000u");
		#line 1640 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_UFCS(_operator_xor_xor_eq)(a, Builtin::u32(2U));
		#line 1641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a == Builtin::ParseUInt128("2295684067952250000000000000000")), u"a==2295684067952250000000000000000u");
		#line 1642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor)(Builtin::u128(61500000000ULL), Builtin::u32(3U)) == Builtin::ParseUInt128("232608375000000000000000000000000")), u"61500000000_u128^^3u==232608375000000000000000000000000u");
		#line 1643 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_qst)(Builtin::u128(61500000000ULL), Builtin::u32(3U)) == Builtin::ParseUInt128("232608375000000000000000000000000")), u"61500000000_u128^^?3u==232608375000000000000000000000000u");
		#line 1644 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_qst)(Builtin::u128(61500000000ULL), Builtin::u32(4U)) == nullptr), u"61500000000_u128^^?4u==null");
		#line 1645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a = Builtin::u128(61500000000ULL);
		#line 1646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_UFCS(_operator_xor_xor_qst_eq)(a, Builtin::u32(3U));
		#line 1647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a == Builtin::ParseUInt128("232608375000000000000000000000000")), u"a==232608375000000000000000000000000u");
		#line 1648 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_ne)(Builtin::u128(61500000000ULL), Builtin::u32(3U)) == Builtin::ParseUInt128("232608375000000000000000000000000")), u"61500000000_u128^^!3u==232608375000000000000000000000000u");
		#line 1649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_mod)(Builtin::u128(61500000000ULL), Builtin::u32(4U)) == Builtin::ParseUInt128("284639510667934463194878175896158601216")), u"61500000000_u128^^%4u==284639510667934463194878175896158601216u");
		#line 1650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a = Builtin::i32(300);
		#line 1651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_UFCS(_operator_xor_xor_mod_eq)(a, Builtin::u32(2U));
		#line 1652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a == Builtin::i32(90000)), u"a==90000");
		#line 1653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_or)(Builtin::u128(61500000000ULL), Builtin::u32(3U)) == Builtin::ParseUInt128("232608375000000000000000000000000")), u"61500000000_u128^^|3u==232608375000000000000000000000000u");
		#line 1654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_or)(Builtin::u128(61500000000ULL), Builtin::u32(4U)) == ADV_USPCS(MaxValue, Builtin::u128)()), u"61500000000_u128^^|4u==u128.MaxValue");
		#line 1655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		{
			#line 1656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_xor_xor_mod_qst)(Builtin::u128(61500000000ULL), Builtin::u32(4U));
			#line 1657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			ADV_ASSERT((result == Builtin::ParseUInt128("284639510667934463194878175896158601216") && overflowed), u"result==284639510667934463194878175896158601216u&&overflowed");
		}
		return true;
	}();
	#endif	
} namespace __extensions { using namespace System;
#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	auto _operator_eq_eq_mul(__extension_UInt128_21_u128 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool
	{
		#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		{
			#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			auto __tmp0 = Builtin::Cast<false, __extension_UInt128_1258_u128>(obj);
			#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			if ((__tmp0.IsValid())) {
				#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				const auto& obj = *__tmp0;
				
				#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				return __this == obj;
			}
		}
		#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return Builtin::Boolean(false);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	auto _operator_lt_eq_gt_mul(__extension_UInt128_90_u128 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32
	{
		#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		{
			#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			auto __tmp0 = Builtin::Cast<false, __extension_UInt128_1258_u128>(obj);
			#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			if ((__tmp0.IsValid())) {
				#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				const auto& obj = *__tmp0;
				
				#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				return __this <=> obj;
			}
		}
		#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		{
			#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			if ((!Builtin::Is(obj, nullptr))) {
				#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				auto __tmp0 = *obj; const auto& obj = __tmp0;
				
				#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				Builtin::Throw(Builtin::InvalidOperationException{});
			}
		}
		#line 100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return Builtin::i32(1);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	auto Parse(__extension_UInt128_296_u128 const& __this LIFETIMEBOUND, Builtin::Str input)  -> const typename __extension_UInt128_296_u128
	{
		#line 328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return Builtin::u128(0ULL);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	auto TryParse(__extension_UInt128_296_u128 const& __this LIFETIMEBOUND, Builtin::Str input) noexcept -> const Builtin::Nullable<__extension_UInt128_1258_u128>
	{
		#line 333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return Builtin::u128(0ULL);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	auto Log(__extension_UInt128_378_u128 const& __this LIFETIMEBOUND, __extension_UInt128_1258_u128 base)  -> const typename __extension_UInt128_378_u128
	{
		#line 491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (const auto result = ADV_UFCS(CheckedLog)(__this.__ref(), base)) {
			{
				#line 491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 492 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				return result;
			}
		}
		#line 494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 796 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> auto _operator_bsl_mod_qst(__extension_UInt128_512_u128 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_UInt128_1258_u128, bool>
	{
		#line 797 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\%? implemented only for integer types");
		#line 798 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		__extension_UInt128_1258_u128 result{}; 
		#line 799 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		auto overflowed = !Builtin::SafeDivide(__this, rhs, result); 
		#line 800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	auto getCheckedIsqrt(__extension_UInt128_1109_u128 const& __this ) -> const Builtin::Nullable<__extension_UInt128_1258_u128>
	{
		#line 1125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		constexpr auto MAX_RESULT = ADV_USFCS((Math), Isqrt128)(ADV_USPCS(MaxValue, __extension_UInt128_1258_u128)());
		#line 1126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		const auto result = ADV_USFCS((Math), Isqrt128)(__this); 
		#line 1127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ASSUME((result <=> MAX_RESULT) <= 0);
		#line 1128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return result;
	}
	} namespace System{

}