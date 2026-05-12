#include "Math.h"
#include "Int8.h"

namespace System {
//###############################################################################
//# Global type aliases
//###############################################################################
//###############################################################################
//# Type definitions
//###############################################################################

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
















static_assert(Builtin::usize(sizeof(Builtin::i8)) == Builtin::i32(1), "i8 should be 1 byte");
static_assert(ADV_USPCS(MinValue, Builtin::i8)() == Builtin::i32(-0x80), "i8.Min should be -0x80");
static_assert(ADV_USPCS(MaxValue, Builtin::i8)() == Builtin::i32(0x7F), "i8.Max should be 0x7F");
static_assert(ADV_UFCS_NONLOCAL(_operator_gt_gt_not)(ADV_USPCS(One, Builtin::i8)(), Builtin::i32(3)) == Builtin::i32(0b00100000), "i8.One >>% 3 == 0b0010_0000");
static_assert(ADV_USPCS(IsSigned, Builtin::i8)(), "i8 must be signed");
static_assert(ADV_USPCS(MaxDigitCount, Builtin::i8)() == Builtin::i32(3), "i8 max digit count must be 3");
static_assert(ADV_UFCS_NONLOCAL(_operator_xor_xor)(Builtin::i8(2), Builtin::u32(6U)) == Builtin::i32(64), "2i8 ^^ 6u == 64i8");
static_assert(Builtin::TypeIs<Builtin::i8, IComparable<Builtin::i8>>(), "i8 should implement IComparable<i8>");
static_assert(Builtin::TypeIs<Builtin::i8, IEquatable<Builtin::i8>>(), "i8 should implement IEquatable<i8>");
static_assert(Builtin::TypeIs<Builtin::i8, ISelfComparable>(), "i8 should implement ISelfComparable");
static_assert(Builtin::TypeIs<Builtin::i8, ISelfEquatable>(), "i8 should implement ISelfEquatable");
static_assert(Builtin::TypeIs<Builtin::i8, IAdditionOperators<Builtin::i8, Builtin::i8>>(), "i8 should implement IAdditionOperators<i8, i8>");
static_assert(Builtin::TypeIs<Builtin::i8, ISubtractionOperators<Builtin::i8, Builtin::i8>>(), "i8 should implement ISubtractionOperators<i8, i8>");
static_assert(Builtin::TypeIs<Builtin::i8, IMultiplyOperators<Builtin::i8, Builtin::i8>>(), "i8 should implement IMultiplyOperators<i8, i8>");
static_assert(Builtin::TypeIs<Builtin::i8, IDivisionOperators<Builtin::i8, Builtin::f64>>(), "i8 should implement IDivisionOperators<i8, f64>");
static_assert(Builtin::TypeIs<Builtin::i8, IIntDivOperators<Builtin::i8, Builtin::i8>>(), "i8 should implement IIntDivOperators<i8, i8>");
static_assert(Builtin::TypeIs<Builtin::i8, IModulusOperators<Builtin::i8, Builtin::i8>>(), "i8 should implement IModulusOperators<i8, i8>");
static_assert(Builtin::TypeIs<Builtin::i8, IBitwiseOperators<Builtin::i8, Builtin::i8>>(), "i8 should implement IBitwiseOperators<i8, i8>");
static_assert(Builtin::TypeIs<Builtin::i8, IShiftOperators<Builtin::i8, Builtin::i8>>(), "i8 should implement IShiftOperators<i8, i8>");
static_assert(Builtin::TypeIs<Builtin::i8, IUnaryPlusOperators<Builtin::i8>>(), "i8 should implement IUnaryPlusOperators<i8>");
static_assert(Builtin::TypeIs<Builtin::i8, IUnaryNegationOperators<Builtin::i8>>(), "i8 should implement IUnaryNegationOperators<i8>");
static_assert(Builtin::TypeIs<Builtin::i8, IIncrementOperators<Builtin::i8>>(), "i8 should implement IIncrementOperators<i8>");
static_assert(Builtin::TypeIs<Builtin::i8, IDecrementOperators<Builtin::i8>>(), "i8 should implement IDecrementOperators<i8>");
static_assert(ADV_UFCS_NONLOCAL(_operator_add_mod)(ADV_USPCS(MaxValue, Builtin::i8)(), Builtin::i8(1)) == ADV_USPCS(MinValue, Builtin::i8)(), "i8.MaxValue +% 1i8 == i8.MinValue");
static_assert(ADV_UFCS_NONLOCAL(_operator_add_or)(ADV_USPCS(MaxValue, Builtin::i8)(), Builtin::i8(1)) == ADV_USPCS(MaxValue, Builtin::i8)(), "i8.MaxValue +| 1i8 == i8.MaxValue");
#ifdef ADV_UNITTEST
	#line 1362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	static bool __Test_298d83b2a01bf150 = [](){
		#line 1364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::i8 a = Builtin::i8(5); 
		#line 1367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a + Builtin::i8(10) == Builtin::i8((signed char)15)), u"a+10i8==15");
		#line 1368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a + Builtin::u8(10U) == Builtin::i8((signed char)15)), u"a+10u8==15");
		#line 1369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a + Builtin::i16(10) == Builtin::i8((signed char)15)), u"a+10i16==15");
		#line 1370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a + Builtin::u16(10U) == Builtin::i8((signed char)15)), u"a+10u16==15");
		#line 1371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a + Builtin::i32(10) == Builtin::i8((signed char)15)), u"a+10i32==15");
		#line 1372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a + Builtin::u32(10U) == Builtin::i8((signed char)15)), u"a+10u32==15");
		#line 1373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a + Builtin::i64(10LL) == Builtin::i8((signed char)15)), u"a+10i64==15");
		#line 1374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a + Builtin::u64(10ULL) == Builtin::i8((signed char)15)), u"a+10u64==15");
		#line 1375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a + Builtin::i128(10LL) == Builtin::i8((signed char)15)), u"a+10i128==15");
		#line 1376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a + Builtin::u128(10ULL) == Builtin::i8((signed char)15)), u"a+10u128==15");
		#line 1379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a - Builtin::i8((signed char)12) == Builtin::i8((signed char)-7)), u"a-12==-7");
		#line 1380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a * Builtin::i8((signed char)2) == Builtin::i8((signed char)10)), u"a*2==10");
		#line 1381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, Builtin::i8((signed char)2)) == Builtin::i8((signed char)2)), u"a\\2==2");
		#line 1382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a % Builtin::i8((signed char)2) == Builtin::i8((signed char)1)), u"a%2==1");
		#line 1383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT(((a & Builtin::i8((signed char)1)) == Builtin::i8((signed char)1)), u"(a&1)==1");
		#line 1384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT(((a | Builtin::i8((signed char)1)) == Builtin::i8((signed char)5)), u"(a|1)==5");
		#line 1385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT(((a ^ Builtin::i8((signed char)1)) == Builtin::i8((signed char)4)), u"(a^1)==4");
		#line 1386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a << Builtin::i8((signed char)1) == Builtin::i8((signed char)10)), u"a<<1==10");
		#line 1387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a >> Builtin::i8((signed char)1) == Builtin::i8((signed char)2)), u"a>>1==2");
		#line 1388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a = Builtin::i8((signed char)-5);
		#line 1389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_UFCS(_operator_gt_gt_gt_eq)(a, Builtin::i8((signed char)2));
		#line 1390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == Builtin::i8((signed char)0b00111110)), u"a==0b0011_1110");
		#line 1391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_gt)(a, Builtin::i8((signed char)2)) == Builtin::i8((signed char)0b00001111)), u"a>>>2==0b0000_1111");
		#line 1392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_gt)(a, Builtin::i8((signed char)7)) == Builtin::i8((signed char)0)), u"a>>>7==0");
		#line 1395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a = Builtin::i8((signed char)5);
		#line 1396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == Builtin::i8((signed char)5)), u"a==5");
		#line 1397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a != Builtin::i8((signed char)6)), u"a!=6");
		#line 1398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT(((a <=> Builtin::i8((signed char)6)) < 0), u"a<6");
		#line 1399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT(((a <=> Builtin::i8((signed char)5)) <= 0), u"a<=5");
		#line 1400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT(((a <=> Builtin::i8((signed char)4)) > 0), u"a>4");
		#line 1401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT(((a <=> Builtin::i8((signed char)5)) >= 0), u"a>=5");
		#line 1404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a = Builtin::i8(5);
		#line 1405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a++;
		#line 1406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a--;
		#line 1407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a += Builtin::i8((signed char)5);
		#line 1408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a -= Builtin::i8((signed char)5);
		#line 1409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a *= Builtin::i8((signed char)2);
		#line 1410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_UFCS(_operator_bsl_eq)(a, Builtin::i8((signed char)2));
		#line 1411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a %= Builtin::i8((signed char)1);
		#line 1412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a &= Builtin::i8((signed char)1);
		#line 1413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a |= Builtin::i8((signed char)1);
		#line 1414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a ^= Builtin::i8((signed char)1);
		#line 1415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a <<= Builtin::i8((signed char)1);
		#line 1416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a >>= Builtin::i8((signed char)1);
		#line 1417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == Builtin::i8((signed char)0)), u"a==0");
		#line 1418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a = Builtin::i8(10);
		#line 1419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_not)(a) == Builtin::i8((signed char)-11)), u"~a==-11");
		#line 1422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::i8 b = Builtin::i8(5); 
		#line 1423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::Nullable<Builtin::i8> c = nullptr; 
		#line 1424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::Nullable<Builtin::i8> d = Builtin::i8(5); 
		#line 1425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a != b), u"a!=b");
		#line 1426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((b != c), u"b!=c");
		#line 1427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((!Builtin::IdentityEquals(b, c)), u"b!==c");
		#line 1428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT(((b <=> c) > 0), u"b>c");
		#line 1429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((c != b), u"c!=b");
		#line 1430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((c == nullptr), u"c==null");
		#line 1431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((d != nullptr), u"d!=null");
		#line 1432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT(((c <=> d) < 0), u"c<d");
		#line 1433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((b == d), u"b==d");
		#line 1434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((Builtin::IdentityEquals(b, d)), u"b===d");
		#line 1437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::Nullable<Builtin::ObjectRef> o = c; 
		#line 1438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		o = d;
		#line 1439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_ne_eq_mul)(b, o)), u"b!=*o");
		#line 1440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		IComparable<Builtin::i8> icomp = a; 
		#line 1441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT(((icomp <=> b) > 0), u"icomp>b");
		#line 1444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(a.__ref()) == Builtin::i32(10)), u"a.HashCode==10");
		#line 1445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(a) == Builtin::i32(10)), u"#a==10");
		#line 1446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		b = Builtin::i8(-6);
		#line 1447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(b) == Builtin::i128::Parse("18446744073709551610")), u"#b==18446744073709551610");
		#line 1449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(ToInt32)(b.__ref()) == Builtin::i8((signed char)-6)), u"b.ToInt32()==-6");
		#line 1450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(NarrowToUInt64)(b.__ref()) == Builtin::i128::Parse("18446744073709551610")), u"b.NarrowToUInt64()==18446744073709551610");
		#line 1453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(Abs)(b.__ref()) == Builtin::i8((signed char)6)), u"b.Abs==6");
		#line 1454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(CheckedAbs)(b.__ref()) == Builtin::i8((signed char)6)), u"b.CheckedAbs==6");
		#line 1455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(CheckedAbs)(ADV_USPCS(MinValue, Builtin::i8)().__ref()) == nullptr), u"i8.MinValue.CheckedAbs==null");
		#line 1456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(StrictAbs)(b.__ref()) == Builtin::i8((signed char)6)), u"b.StrictAbs==6");
		#line 1457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(WrappingAbs)(ADV_USPCS(MinValue, Builtin::i8)().__ref()) == ADV_USPCS(MinValue, Builtin::i8)()), u"i8.MinValue.WrappingAbs==i8.MinValue");
		#line 1458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(SaturatingAbs)(ADV_USPCS(MinValue, Builtin::i8)().__ref()) == ADV_USPCS(MaxValue, Builtin::i8)()), u"i8.MinValue.SaturatingAbs==i8.MaxValue");
		#line 1459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		{
			#line 1460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			const auto& [result, overflowed] = ADV_UPCS(OverflowingAbs)(ADV_USPCS(MinValue, Builtin::i8)().__ref());
			#line 1461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			ADV_ASSERT((result == ADV_USPCS(MinValue, Builtin::i8)() && overflowed), u"result==i8.MinValue&&overflowed");
		}
		#line 1463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(IsFinite)(b.__ref())), u"b.IsFinite");
		#line 1464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(IsInteger)(b.__ref())), u"b.IsInteger");
		#line 1465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(IsNegative)(b.__ref())), u"b.IsNegative");
		#line 1466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(IsPositive)(a.__ref())), u"a.IsPositive");
		#line 1467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((!ADV_UPCS(IsPositive)(b.__ref())), u"!b.IsPositive");
		#line 1468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(IsCanonical)(b.__ref())), u"b.IsCanonical");
		#line 1469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((!ADV_UPCS(IsComplexNumber)(b.__ref())), u"!b.IsComplexNumber");
		#line 1470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(IsRealNumber)(b.__ref())), u"b.IsRealNumber");
		#line 1471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((!ADV_UPCS(IsImaginaryNumber)(b.__ref())), u"!b.IsImaginaryNumber");
		#line 1472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(IsEvenInteger)(b.__ref())), u"b.IsEvenInteger");
		#line 1473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((!ADV_UPCS(IsOddInteger)(b.__ref())), u"!b.IsOddInteger");
		#line 1474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((!ADV_UPCS(IsInfinity)(b.__ref())), u"!b.IsInfinity");
		#line 1475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((!ADV_UPCS(IsPositiveInfinity)(b.__ref())), u"!b.IsPositiveInfinity");
		#line 1476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((!ADV_UPCS(IsNegativeInfinity)(b.__ref())), u"!b.IsNegativeInfinity");
		#line 1477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((!ADV_UPCS(IsNaN)(b.__ref())), u"!b.IsNaN");
		#line 1478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(IsNormal)(b.__ref())), u"b.IsNormal");
		#line 1479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((!ADV_UPCS(IsSubnormal)(b.__ref())), u"!b.IsSubnormal");
		#line 1480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((!ADV_UPCS(IsZero)(b.__ref())), u"!b.IsZero");
		#line 1483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(Sign)(a.__ref()) == +Builtin::i8((signed char)1)), u"a.Sign==+1");
		#line 1484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(Sign)(b.__ref()) == Builtin::i8((signed char)-1)), u"b.Sign==-1");
		#line 1485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(CopySign)(a.__ref(), b) == Builtin::i8((signed char)-10)), u"a.CopySign(b)==-10");
		#line 1486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(Max)(a.__ref(), b) == a), u"a.Max(b)==a");
		#line 1487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(Min)(a.__ref(), b) == b), u"a.Min(b)==b");
		#line 1488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(MaxNumber)(a.__ref(), b) == a), u"a.MaxNumber(b)==a");
		#line 1489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(MinNumber)(a.__ref(), b) == b), u"a.MinNumber(b)==b");
		#line 1490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(Clamp)(b.__ref(), Builtin::i8((signed char)-5), +Builtin::i8((signed char)5)) == Builtin::i8((signed char)-5)), u"b.Clamp(-5,+5)==-5");
		#line 1493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::i8(2).__ref()) == Builtin::i8((signed char)1)), u"2i8.Log2==1");
		#line 1494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::i8(16).__ref()) == Builtin::i8((signed char)4)), u"16i8.Log2==4");
		#line 1495 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::i8(64).__ref()) == Builtin::i8((signed char)6)), u"64i8.Log2==6");
		#line 1496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::i8(120).__ref()) == Builtin::i8((signed char)6)), u"120i8.Log2==6");
		#line 1497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::i8(2).__ref()) == Builtin::i8((signed char)1)), u"2i8.Log2Ceiling==1");
		#line 1498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::i8(16).__ref()) == Builtin::i8((signed char)4)), u"16i8.Log2Ceiling==4");
		#line 1499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::i8(65).__ref()) == Builtin::i8((signed char)7)), u"65i8.Log2Ceiling==7");
		#line 1500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::i8(120).__ref()) == Builtin::i8((signed char)7)), u"120i8.Log2Ceiling==7");
		#line 1501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(CheckedLog2)(Builtin::i8(0).__ref()) == nullptr), u"0i8.CheckedLog2==null");
		#line 1502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(Builtin::i8(5).__ref()) == Builtin::i8((signed char)0)), u"5i8.Log10==0");
		#line 1503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(a.__ref()) == Builtin::i8((signed char)1)), u"a.Log10==1");
		#line 1504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(ADV_USPCS(MaxValue, Builtin::i8)().__ref()) == Builtin::i8((signed char)2)), u"i8.MaxValue.Log10==2");
		#line 1505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(Log)(Builtin::i8(5).__ref(), Builtin::i8(5)) == Builtin::i8((signed char)1)), u"5i8.Log(5i8)==1");
		#line 1506 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(CheckedLog)(Builtin::i8(5).__ref(), Builtin::i8(-5)) == nullptr), u"5i8.CheckedLog(-5i8)==null");
		#line 1507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(Midpoint)(a.__ref(), Builtin::i8(30)) == Builtin::i8((signed char)20)), u"a.Midpoint(30i8)==20");
		#line 1508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(Midpoint)(Builtin::i8(100).__ref(), ADV_USPCS(MaxValue, Builtin::i8)()) == Builtin::i8((signed char)113)), u"100i8.Midpoint(i8.MaxValue)==113");
		#line 1509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)(a.__ref(), Builtin::i8(10)) == Builtin::i8((signed char)10)), u"a.NextMultipleOf(10i8)==10");
		#line 1510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)(Builtin::i8(11).__ref(), Builtin::i8(10)) == Builtin::i8((signed char)20)), u"11i8.NextMultipleOf(10i8)==20");
		#line 1511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)(Builtin::i8(60).__ref(), Builtin::i8(8)) == Builtin::i8((signed char)64)), u"60i8.NextMultipleOf(8i8)==64");
		#line 1512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)((Builtin::i8(-13)).__ref(), Builtin::i8(4)) == Builtin::i8((signed char)-12)), u"(-13i8).NextMultipleOf(4i8)==-12");
		#line 1513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)((Builtin::i8(-13)).__ref(), Builtin::i8(-4)) == Builtin::i8((signed char)-16)), u"(-13i8).NextMultipleOf(-4i8)==-16");
		#line 1514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(ByteCount)(a.__ref()) == Builtin::i8((signed char)1)), u"a.ByteCount==1");
		#line 1515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(ByteSwapped)(a.__ref()) == a), u"a.ByteSwapped==a");
		#line 1516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_not)(Builtin::i8(0b1010), Builtin::i8((signed char)3)) == Builtin::i8((signed char)0b01010000)), u"0b1010_i8<<~3==0b0101_0000");
		#line 1517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_not)(Builtin::i8(0b1010), Builtin::i8((signed char)5)) == Builtin::i8((signed char)0b01000001)), u"0b1010_i8<<~5==0b0100_0001");
		#line 1518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_not)(Builtin::i8(0b1010), Builtin::i8((signed char)3)) == Builtin::i8((signed char)0b01000001)), u"0b1010_i8>>~3==0b0100_0001");
		#line 1519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_not)(Builtin::i8(0b1010), Builtin::i8((signed char)5)) == Builtin::i8((signed char)0b01010000)), u"0b1010_i8>>~5==0b0101_0000");
		#line 1521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(IsMultipleOf)(a.__ref(), Builtin::i8((signed char)5))), u"a.IsMultipleOf(5)");
		#line 1522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((!ADV_UFCS(IsMultipleOf)(a.__ref(), Builtin::i8((signed char)6))), u"!a.IsMultipleOf(6)");
		#line 1524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(MultiplyBy10)(a.__ref()) == Builtin::i8((signed char)100)), u"a.MultiplyBy10==100");
		#line 1525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(MultiplyBy16)(a.__ref()) == Builtin::i32(160) + Builtin::i32(2) * ADV_USPCS(MinValue, Builtin::i8)()), u"a.MultiplyBy16==160+2i32*i8.MinValue");
		#line 1528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_qst)(a, Builtin::i8(100)) == Builtin::i8((signed char)110)), u"a+?100i8==110");
		#line 1529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_qst)(a, ADV_USPCS(MaxValue, Builtin::i8)()) == nullptr), u"a+?i8.MaxValue==null");
		#line 1530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_UFCS(_operator_add_qst_eq)(a, Builtin::i8(5));
		#line 1531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == Builtin::i8((signed char)15)), u"a==15");
		#line 1532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_UFCS(_operator_add_qst_eq)(a, Builtin::i8(120));
		#line 1533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == Builtin::i8((signed char)15)), u"a==15");
		#line 1534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_ne)(a, Builtin::i8(100)) == Builtin::i8((signed char)115)), u"a+!100i8==115");
		#line 1535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_mod)(a, Builtin::i8(100)) == Builtin::i8((signed char)115)), u"a+%100i8==115");
		#line 1536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_mod)(a, Builtin::i8(113)) == ADV_USPCS(MinValue, Builtin::i8)()), u"a+%113i8==i8.MinValue");
		#line 1537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_UFCS(_operator_add_mod_eq)(a, ADV_USPCS(MaxValue, Builtin::i8)());
		#line 1538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == Builtin::i8((signed char)-114)), u"a==-114");
		#line 1539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_or)(a, (Builtin::i8(-115))) == ADV_USPCS(MinValue, Builtin::i8)()), u"a+|(-115i8)==i8.MinValue");
		#line 1540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_UFCS(_operator_add_or_eq)(a, ADV_USPCS(MaxValue, Builtin::i8)());
		#line 1541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == Builtin::i8((signed char)13)), u"a==13");
		#line 1542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_or)(a, Builtin::i8(120)) == ADV_USPCS(MaxValue, Builtin::i8)()), u"a+|120i8==i8.MaxValue");
		#line 1543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		{
			#line 1544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_add_mod_qst)(a, Builtin::i8(120));
			#line 1545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			ADV_ASSERT((result == Builtin::i8((signed char)-123) && overflowed), u"result==-123&&overflowed");
		}
		#line 1548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a = ADV_USPCS(MaxValue, Builtin::i8)() - Builtin::i8((signed char)1);
		#line 1549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_add_qst_postfix)(a) == ADV_USPCS(MaxValue, Builtin::i8)() - Builtin::i8((signed char)1)), u"a++?==i8.MaxValue-1");
		#line 1550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::i8)()), u"a==i8.MaxValue");
		#line 1551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_UFCS(_operator_add_add_mod_postfix)(a);
		#line 1552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::i8)()), u"a==i8.MinValue");
		#line 1553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a = ADV_USPCS(MaxValue, Builtin::i8)();
		#line 1554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_UFCS(_operator_add_add_or_postfix)(a);
		#line 1555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::i8)()), u"a==i8.MaxValue");
		#line 1557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		{
			#line 1558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.__ref(), Builtin::i8(0), false);
			#line 1559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			ADV_ASSERT((result == ADV_USPCS(MaxValue, Builtin::i8)() && !overflowed), u"result==i8.MaxValue&&!overflowed");
		}
		#line 1561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		{
			#line 1562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.__ref(), Builtin::i8(-5), true);
		}
		#line 1565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		{
			#line 1566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.__ref(), Builtin::i8(0), true);
			#line 1567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			ADV_ASSERT((result == ADV_USPCS(MinValue, Builtin::i8)() && overflowed), u"result==i8.MinValue&&overflowed");
		}
		#line 1569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		{
			#line 1570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.__ref(), Builtin::i8(10), true);
			#line 1571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			ADV_ASSERT((result == Builtin::i8((signed char)-118) && overflowed), u"result==-118&&overflowed");
		}
		#line 1574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_qst)(a, Builtin::i8(100)) == Builtin::i8((signed char)27)), u"a-?100i8==27");
		#line 1575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_qst)(-a, ADV_USPCS(MaxValue, Builtin::i8)()) == nullptr), u"-a-?i8.MaxValue==null");
		#line 1576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_UFCS(_operator_sub_qst_eq)(a, Builtin::i8(5));
		#line 1577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == Builtin::i8((signed char)122)), u"a==122");
		#line 1578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_UFCS(_operator_sub_qst_eq)(a, Builtin::i8(120));
		#line 1579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == Builtin::i8((signed char)2)), u"a==2");
		#line 1580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_ne)(a, Builtin::i8(100)) == Builtin::i8((signed char)-98)), u"a-!100i8==-98");
		#line 1581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_mod)(-a, Builtin::i8(127)) == ADV_USPCS(MaxValue, Builtin::i8)()), u"-a-%127i8==i8.MaxValue");
		#line 1582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_mod)(a, Builtin::i8(113)) == Builtin::i8((signed char)-111)), u"a-%113i8==-111");
		#line 1583 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_UFCS(_operator_sub_mod_eq)(a, ADV_USPCS(MaxValue, Builtin::i8)());
		#line 1584 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == Builtin::i8((signed char)-125)), u"a==-125");
		#line 1585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_or)(a, Builtin::i8((signed char)4)) == ADV_USPCS(MinValue, Builtin::i8)()), u"a-|4==i8.MinValue");
		#line 1586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_UFCS(_operator_sub_or_eq)(a, ADV_USPCS(MaxValue, Builtin::i8)());
		#line 1587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::i8)()), u"a==i8.MinValue");
		#line 1588 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		{
			#line 1589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_sub_mod_qst)(a, Builtin::i8(2));
			#line 1590 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			ADV_ASSERT((result == Builtin::i8((signed char)126) && overflowed), u"result==126&&overflowed");
		}
		#line 1593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a = ADV_USPCS(MinValue, Builtin::i8)() + Builtin::i8((signed char)1);
		#line 1594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_sub_qst_postfix)(a) == ADV_USPCS(MinValue, Builtin::i8)() + Builtin::i8((signed char)1)), u"a--?==i8.MinValue+1");
		#line 1595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::i8)()), u"a==i8.MinValue");
		#line 1596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_UFCS(_operator_sub_sub_mod_postfix)(a);
		#line 1597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::i8)()), u"a==i8.MaxValue");
		#line 1598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a = ADV_USPCS(MinValue, Builtin::i8)();
		#line 1599 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_UFCS(_operator_sub_sub_or_postfix)(a);
		#line 1600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::i8)()), u"a==i8.MinValue");
		#line 1602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		{
			#line 1603 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.__ref(), Builtin::i8(0), false);
			#line 1604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			ADV_ASSERT((result == ADV_USPCS(MinValue, Builtin::i8)() && !overflowed), u"result==i8.MinValue&&!overflowed");
		}
		#line 1606 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		{
			#line 1607 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.__ref(), Builtin::i8(-5), true);
			#line 1608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			ADV_ASSERT((result == Builtin::i8((signed char)-124) && !overflowed), u"result==-124&&!overflowed");
		}
		#line 1610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		{
			#line 1611 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.__ref(), Builtin::i8(0), true);
			#line 1612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			ADV_ASSERT((result == ADV_USPCS(MaxValue, Builtin::i8)() && overflowed), u"result==i8.MaxValue&&overflowed");
		}
		#line 1614 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		{
			#line 1615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.__ref(), Builtin::i8(10), true);
			#line 1616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			ADV_ASSERT((result == Builtin::i8((signed char)117) && overflowed), u"result==117&&overflowed");
		}
		#line 1619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_qst)(a, Builtin::i8(1)) == ADV_USPCS(MinValue, Builtin::i8)()), u"a*?1i8==i8.MinValue");
		#line 1620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_qst)(a, Builtin::i8(2)) == nullptr), u"a*?2i8==null");
		#line 1621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_UFCS(_operator_mul_qst_eq)(a, Builtin::i8(5));
		#line 1622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::i8)()), u"a==i8.MinValue");
		#line 1623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a = Builtin::i8((signed char)15);
		#line 1624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == Builtin::i8((signed char)15)), u"a==15");
		#line 1625 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_ne)(a, Builtin::i8(3)) == Builtin::i8((signed char)45)), u"a*!3i8==45");
		#line 1626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_mod)(a, Builtin::i8(6)) == Builtin::i8((signed char)90)), u"a*%6i8==90");
		#line 1627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_mod)(a, Builtin::i8(9)) == Builtin::i8((signed char)-121)), u"a*%9i8==-121");
		#line 1628 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_UFCS(_operator_mul_mod_eq)(a, Builtin::i8(6));
		#line 1629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == Builtin::i8((signed char)90)), u"a==90");
		#line 1630 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_or)(a, (Builtin::i8(-10))) == ADV_USPCS(MinValue, Builtin::i8)()), u"a*|(-10i8)==i8.MinValue");
		#line 1631 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_UFCS(_operator_mul_or_eq)(a, Builtin::i8(2));
		#line 1632 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::i8)()), u"a==i8.MaxValue");
		#line 1633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_or)(a, Builtin::i8(2)) == ADV_USPCS(MaxValue, Builtin::i8)()), u"a*|2i8==i8.MaxValue");
		#line 1634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		{
			#line 1635 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_mul_mod_qst)(a, Builtin::i8(2));
			#line 1636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			ADV_ASSERT((result == Builtin::i8((signed char)-2) && overflowed), u"result==-2&&overflowed");
		}
		#line 1638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a = Builtin::i8((signed char)5);
		#line 1639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		{
			#line 1640 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			const auto& [low, high] = ADV_UFCS(_operator_mul_gt)(a, (Builtin::i8(120)));
			#line 1641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			ADV_ASSERT((low == Builtin::i8((signed char)88) && high == Builtin::i8((signed char)2)), u"low==88&&high==2");
		}
		#line 1643 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		{
			#line 1644 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			const auto& [low, high] = ADV_UFCS(_operator_mul_gt)(a, (Builtin::i8(-100)));
			#line 1645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			ADV_ASSERT((low == Builtin::i8((signed char)12) && high == Builtin::i8((signed char)-2)), u"low==12&&high==-2");
		}
		#line 1647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a = ADV_USPCS(MaxValue, Builtin::i8)();
		#line 1648 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		{
			#line 1649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			const auto& [low, high] = ADV_UFCS(CarryingMul)(a.__ref(), Builtin::i8(2), Builtin::i8(12));
			#line 1650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			ADV_ASSERT((low == Builtin::i8((signed char)10) && high == Builtin::i8((signed char)1)), u"low==10&&high==1");
		}
		#line 1652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		{
			#line 1653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			const auto& [low, high] = ADV_UFCS(CarryingMul)(a.__ref(), Builtin::i8(-2), Builtin::i8(-12));
			#line 1654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			ADV_ASSERT((low == Builtin::i32(246) && high == Builtin::i8((signed char)-2)), u"low==246&&high==-2");
		}
		#line 1657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a = Builtin::i8((signed char)10);
		#line 1658 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, Builtin::i8((signed char)6)) == Builtin::i8((signed char)1)), u"a\\6==1");
		#line 1659 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a /= Builtin::i8((signed char)6);
		#line 1660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == Builtin::i8((signed char)2)), u"a==2");
		#line 1661 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a = Builtin::i8((signed char)10);
		#line 1662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		{
			#line 1663 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)(a, Builtin::i8((signed char)6));
			#line 1664 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			ADV_ASSERT((div == Builtin::i8((signed char)1) && rem == Builtin::i8((signed char)4)), u"div==1&&rem==4");
		}
		#line 1666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_qst)(a, Builtin::i8((signed char)5)) == Builtin::i8((signed char)2)), u"a\\?5==2");
		#line 1667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_qst)(a, Builtin::i8((signed char)0)) == nullptr), u"a\\?0==null");
		#line 1668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_qst)(ADV_USPCS(MinValue, Builtin::i8)(), (Builtin::i8(-1))) == nullptr), u"i8.MinValue\\?(-1i8)==null");
		#line 1670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_ne)(a, Builtin::i8((signed char)5)) == Builtin::i8((signed char)2)), u"a\\!5==2");
		#line 1671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_UFCS(_operator_bsl_mod_eq)(a, Builtin::i8((signed char)5));
		#line 1672 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == Builtin::i8((signed char)2)), u"a==2");
		#line 1673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a = Builtin::i8((signed char)10);
		#line 1674 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_mod)(ADV_USPCS(MinValue, Builtin::i8)(), (Builtin::i8(-1))) == ADV_USPCS(MinValue, Builtin::i8)()), u"i8.MinValue\\%(-1i8)==i8.MinValue");
		#line 1675 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_UFCS(_operator_bsl_or_eq)(a, Builtin::i8((signed char)5));
		#line 1676 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == Builtin::i8((signed char)2)), u"a==2");
		#line 1677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a = Builtin::i8((signed char)10);
		#line 1678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_or)(ADV_USPCS(MinValue, Builtin::i8)(), (Builtin::i8(-1))) == ADV_USPCS(MaxValue, Builtin::i8)()), u"i8.MinValue\\|(-1i8)==i8.MaxValue");
		#line 1679 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		{
			#line 1680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_bsl_mod_qst)(ADV_USPCS(MinValue, Builtin::i8)(), (Builtin::i8(-1)));
			#line 1681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			ADV_ASSERT((result == ADV_USPCS(MinValue, Builtin::i8)() && overflowed), u"result==i8.MinValue&&overflowed");
		}
		#line 1684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_bsl)(a, Builtin::i8((signed char)5)) == Builtin::i8((signed char)2)), u"a\\\\5==2");
		#line 1685 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_bsl)(a, Builtin::i8((signed char)6)) == nullptr), u"a\\\\6==null");
		#line 1686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_bsl_qst)(a, Builtin::i8((signed char)0)) == nullptr), u"a\\\\?0==null");
		#line 1688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_not)(a, Builtin::i8((signed char)6)) == Builtin::i8((signed char)2)), u"a/~6==2");
		#line 1689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_lt)(a, Builtin::i8((signed char)6)) == Builtin::i8((signed char)1)), u"a/<6==1");
		#line 1690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_gt)(a, Builtin::i8((signed char)6)) == Builtin::i8((signed char)2)), u"a/>6==2");
		#line 1691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_not)(a, (Builtin::i8((signed char)-6))) == Builtin::i8((signed char)-2)), u"a/~(-6)==-2");
		#line 1692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_lt)(a, (Builtin::i8((signed char)-6))) == Builtin::i8((signed char)-2)), u"a/<(-6)==-2");
		#line 1693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_gt)(a, (Builtin::i8((signed char)-6))) == Builtin::i8((signed char)-1)), u"a/>(-6)==-1");
		#line 1695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_qst)(a, Builtin::i8((signed char)5)) == Builtin::i8((signed char)0)), u"a%?5==0");
		#line 1696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_qst)(a, Builtin::i8((signed char)0)) == nullptr), u"a%?0==null");
		#line 1697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_qst)(ADV_USPCS(MinValue, Builtin::i8)(), (Builtin::i8(-1))) == nullptr), u"i8.MinValue%?(-1i8)==null");
		#line 1699 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_ne)(a, Builtin::i8((signed char)6)) == Builtin::i8((signed char)4)), u"a%!6==4");
		#line 1700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_UFCS(_operator_mod_mod_eq)(a, Builtin::i8((signed char)6));
		#line 1701 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == Builtin::i8((signed char)4)), u"a==4");
		#line 1702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a = Builtin::i8((signed char)10);
		#line 1703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_mod)(ADV_USPCS(MinValue, Builtin::i8)(), (Builtin::i8(-1))) == Builtin::i8((signed char)0)), u"i8.MinValue%%(-1i8)==0");
		#line 1704 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		{
			#line 1705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_mod_mod_qst)(ADV_USPCS(MinValue, Builtin::i8)(), (Builtin::i8(-1)));
			#line 1706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			ADV_ASSERT((result == Builtin::i8((signed char)0) && overflowed), u"result==0&&overflowed");
		}
		#line 1709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_qst)(a) == Builtin::i8((signed char)-10)), u"-?a==-10");
		#line 1710 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_qst)(ADV_USPCS(MinValue, Builtin::i8)()) == nullptr), u"-?i8.MinValue==null");
		#line 1711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_ne)(a) == Builtin::i8((signed char)-10)), u"-!a==-10");
		#line 1712 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_mod)(a) == Builtin::i8((signed char)-10)), u"-%a==-10");
		#line 1713 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_mod)(ADV_USPCS(MinValue, Builtin::i8)()) == ADV_USPCS(MinValue, Builtin::i8)()), u"-%i8.MinValue==i8.MinValue");
		#line 1714 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_or)(a) == Builtin::i8((signed char)-10)), u"-|a==-10");
		#line 1715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_or)(ADV_USPCS(MinValue, Builtin::i8)()) == ADV_USPCS(MaxValue, Builtin::i8)()), u"-|i8.MinValue==i8.MaxValue");
		#line 1717 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_bsl)(ADV_USPCS(MaxValue, Builtin::i8)(), Builtin::u32(4U)) == Builtin::i8((signed char)0b00000111)), u"i8.MaxValue>>\\4u==0b0000_0111");
		#line 1718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_bsl)(ADV_USPCS(MaxValue, Builtin::i8)(), Builtin::u32(10U)) == Builtin::i8((signed char)0)), u"i8.MaxValue>>\\10u==0");
		#line 1719 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_bsl)(ADV_USPCS(MinValue, Builtin::i8)(), Builtin::u32(10U)) == Builtin::i8((signed char)-1)), u"i8.MinValue>>\\10u==-1");
		#line 1720 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_bsl)(ADV_USPCS(MaxValue, Builtin::i8)(), Builtin::u32(10U)) == Builtin::i8((signed char)0)), u"i8.MaxValue<<\\10u==0");
		#line 1721 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_qst)(ADV_USPCS(MaxValue, Builtin::i8)(), Builtin::i8((signed char)4)) == Builtin::i8((signed char)0b00000111)), u"i8.MaxValue>>?4==0b0000_0111");
		#line 1722 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_qst)(ADV_USPCS(MaxValue, Builtin::i8)(), Builtin::i8((signed char)10)) == nullptr), u"i8.MaxValue>>?10==null");
		#line 1723 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_qst)(ADV_USPCS(MaxValue, Builtin::i8)(), Builtin::i8((signed char)10)) == nullptr), u"i8.MaxValue<<?10==null");
		#line 1724 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_ne)(ADV_USPCS(MaxValue, Builtin::i8)(), Builtin::i8((signed char)4)) == Builtin::i8((signed char)0b00000111)), u"i8.MaxValue>>!4==0b0000_0111");
		#line 1725 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_mod)(ADV_USPCS(MaxValue, Builtin::i8)(), Builtin::i8((signed char)12)) == Builtin::i8((signed char)0b00000111)), u"i8.MaxValue>>%12==0b0000_0111");
		#line 1726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a = ADV_USPCS(MaxValue, Builtin::i8)();
		#line 1727 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_UFCS(_operator_gt_gt_mod_eq)(a, Builtin::i8((signed char)12));
		#line 1728 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_mod)(a, Builtin::i8((signed char)12)) == Builtin::i8((signed char)0b01110000)), u"a<<%12==0b0111_0000");
		#line 1729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		{
			#line 1730 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_gt_gt_mod_qst)(ADV_USPCS(MaxValue, Builtin::i8)(), Builtin::i8((signed char)12));
			#line 1731 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			ADV_ASSERT((result == Builtin::i8((signed char)0b00000111) && overflowed), u"result==0b0000_0111&&overflowed");
		}
		#line 1735 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor)(a, Builtin::u32(2U)) == Builtin::i8((signed char)49)), u"a^^2u==49");
		#line 1736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_UFCS(_operator_xor_xor_eq)(a, Builtin::u32(2U));
		#line 1737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == Builtin::i8((signed char)49)), u"a==49");
		#line 1738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor)(Builtin::i8(3), Builtin::u32(4U)) == Builtin::i8((signed char)81)), u"3i8^^4u==81");
		#line 1739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_qst)(Builtin::i8(3), Builtin::u32(4U)) == Builtin::i8((signed char)81)), u"3i8^^?4u==81");
		#line 1740 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_qst)(Builtin::i8(3), Builtin::u32(5U)) == nullptr), u"3i8^^?5u==null");
		#line 1741 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_UFCS(_operator_xor_xor_qst_eq)(a, Builtin::u32(2U));
		#line 1742 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == Builtin::i8((signed char)49)), u"a==49");
		#line 1743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_ne)(Builtin::i8(3), Builtin::u32(4U)) == Builtin::i8((signed char)81)), u"3i8^^!4u==81");
		#line 1744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_mod)(Builtin::i8(3), Builtin::u32(5U)) == Builtin::i8((signed char)-13)), u"3i8^^%5u==-13");
		#line 1745 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_UFCS(_operator_xor_xor_mod_eq)(a, Builtin::u32(2U));
		#line 1746 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == Builtin::i8((signed char)97)), u"a==97");
		#line 1747 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_or)(Builtin::i8(3), Builtin::u32(4U)) == Builtin::i8((signed char)81)), u"3i8^^|4u==81");
		#line 1748 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_or)(Builtin::i8(3), Builtin::u32(5U)) == ADV_USPCS(MaxValue, Builtin::i8)()), u"3i8^^|5u==i8.MaxValue");
		#line 1749 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		{
			#line 1750 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_xor_xor_mod_qst)(Builtin::i8(3), Builtin::u32(5U));
			#line 1751 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			ADV_ASSERT((result == Builtin::i8((signed char)-13) && overflowed), u"result==-13&&overflowed");
		}
		return true;
	}();
	#endif	
} namespace __extensions { using namespace System;
#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	auto _operator_eq_eq_mul(__extension_Int8_20_i8 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool
	{
		#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		{
			#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			auto __tmp0 = Builtin::Cast<false, __extension_Int8_1325_i8>(obj);
			#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			if ((__tmp0.IsValid())) {
				#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				const auto& obj = *__tmp0;
				
				#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				return __this == obj;
			}
		}
		#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return false;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	auto _operator_lt_eq_gt_mul(__extension_Int8_73_i8 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32
	{
		#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		{
			#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			auto __tmp0 = Builtin::Cast<false, __extension_Int8_1325_i8>(obj);
			#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			if ((__tmp0.IsValid())) {
				#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				const auto& obj = *__tmp0;
				
				#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				return __this <=> obj;
			}
		}
		#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		{
			#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			if ((!Builtin::Is(obj, nullptr))) {
				#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				auto __tmp0 = *obj; const auto& obj = __tmp0;
				
				#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				Builtin::Throw(Builtin::InvalidOperationException{});
			}
		}
		#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::i8((signed char)1);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	auto MaxMagnitude(__extension_Int8_258_i8 const& __this LIFETIMEBOUND, __extension_Int8_1325_i8 rhs) noexcept -> const typename __extension_Int8_258_i8
	{
		#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		auto absX = __this; 
		#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((absX <=> Builtin::i32(0)) < 0) {
			#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			absX = UnsafeCast<__extension_Int8_1325_i8>(-Builtin::i32{absX});
			#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			if ((absX <=> Builtin::i32(0)) < 0) {
				#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				return __this;
			}
		}
		#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		auto absY = rhs; 
		#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((absY <=> Builtin::i32(0)) < 0) {
			#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			absY = UnsafeCast<__extension_Int8_1325_i8>(-Builtin::i32{absY});
			#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			if ((absY <=> Builtin::i32(0)) < 0) {
				#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				return rhs;
			}
		}
		#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((absX <=> absY) > 0) {
			#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return __this;
		}
		#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (absX == absY) {
			#line 305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return ADV_UPCS(IsNegative)(__this.__ref()) ? rhs : __this;
		}
		#line 308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return rhs;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	auto MinMagnitude(__extension_Int8_258_i8 const& __this LIFETIMEBOUND, __extension_Int8_1325_i8 rhs) noexcept -> const typename __extension_Int8_258_i8
	{
		#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		auto absX = __this; 
		#line 316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((absX <=> Builtin::i32(0)) < 0) {
			#line 317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			absX = UnsafeCast<__extension_Int8_1325_i8>(-Builtin::i32{absX});
			#line 318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			if ((absX <=> Builtin::i32(0)) < 0) {
				#line 319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				return rhs;
			}
		}
		#line 323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		auto absY = rhs; 
		#line 324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((absY <=> Builtin::i32(0)) < 0) {
			#line 325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			absY = UnsafeCast<__extension_Int8_1325_i8>(-Builtin::i32{absY});
			#line 326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			if ((absY <=> Builtin::i32(0)) < 0) {
				#line 327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				return __this;
			}
		}
		#line 331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((absX <=> absY) < 0) {
			#line 332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return __this;
		}
		#line 335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (absX == absY) {
			#line 336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return ADV_UPCS(IsNegative)(__this.__ref()) ? __this : rhs;
		}
		#line 339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return rhs;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	auto Parse(__extension_Int8_258_i8 const& __this LIFETIMEBOUND, Builtin::Str input)  -> const typename __extension_Int8_258_i8
	{
		#line 346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::i8(0);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	auto TryParse(__extension_Int8_258_i8 const& __this LIFETIMEBOUND, Builtin::Str input) noexcept -> const Builtin::Nullable<__extension_Int8_1325_i8>
	{
		#line 351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::i8(0);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	auto CopySign(__extension_Int8_374_i8 const& __this LIFETIMEBOUND, __extension_Int8_1325_i8 sign)  -> const typename __extension_Int8_374_i8
	{
		#line 379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		auto absValue = __this; 
		#line 380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((absValue <=> Builtin::i32(0)) < 0) {
			#line 381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			absValue = UnsafeCast<__extension_Int8_1325_i8>(-Builtin::i32{absValue});
		}
		#line 384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((sign <=> Builtin::i32(0)) >= 0) {
			#line 385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			if ((absValue <=> Builtin::i32(0)) < 0) {
				#line 386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				Builtin::Throw(Builtin::IntegerOverflowException{});
			}
			#line 389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return absValue;
		}
		#line 392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return UnsafeCast<__extension_Int8_1325_i8>(-Builtin::i32{absValue});
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	auto Log(__extension_Int8_402_i8 const& __this LIFETIMEBOUND, __extension_Int8_1325_i8 base)  -> const typename __extension_Int8_402_i8
	{
		#line 489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (const auto result = ADV_UFCS(CheckedLog)(__this.__ref(), base)) {
			{
				#line 489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				return result;
			}
		}
		#line 492 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> auto _operator_add_mod_qst(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<__extension_Int8_1325_i8, bool>
	{
		#line 576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +%? implemented only for integer types");
		#line 577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		__extension_Int8_1325_i8 result{}; 
		#line 578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		auto overflowed = !Builtin::SafeAdd(__this, rhs, result); 
		#line 579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> auto _operator_sub_mod_qst(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<__extension_Int8_1325_i8, bool>
	{
		#line 668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -%? implemented only for integer types");
		#line 669 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		__extension_Int8_1325_i8 result{}; 
		#line 670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		auto overflowed = !Builtin::SafeSubtract(__this, rhs, result); 
		#line 671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 741 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> auto _operator_mul_mod_qst(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<__extension_Int8_1325_i8, bool>
	{
		#line 742 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *%? implemented only for integer types");
		#line 743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		__extension_Int8_1325_i8 result{}; 
		#line 744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		auto overflowed = !Builtin::SafeMultiply(__this, rhs, result); 
		#line 745 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 824 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> auto _operator_bsl_mod_qst(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_Int8_1325_i8, bool>
	{
		#line 825 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\%? implemented only for integer types");
		#line 826 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		__extension_Int8_1325_i8 result{}; 
		#line 827 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		auto overflowed = !Builtin::SafeDivide(__this, rhs, result); 
		#line 828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 899 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	template<class T> auto _operator_mod_mod_qst(__extension_Int8_519_i8 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_Int8_1325_i8, bool>
	{
		#line 900 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %%? implemented only for integer types");
		#line 901 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		__extension_Int8_1325_i8 result{}; 
		#line 902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		auto overflowed = !Builtin::SafeModulus(__this, rhs, result); 
		#line 903 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	auto getCheckedIsqrt(__extension_Int8_1171_i8 const& __this ) -> const Builtin::Nullable<__extension_Int8_1325_i8>
	{
		#line 1182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (ADV_UPCS(IsNegative)(__this.__ref())) {
			#line 1183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return nullptr;
		}
		#line 1185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		constexpr auto MAX_RESULT = Builtin::Cast<true, __extension_Int8_1325_i8>(ADV_USFCS((Math), Isqrt8)(Builtin::Cast<true, Builtin::u8>(ADV_USPCS(MaxValue, __extension_Int8_1325_i8)())));
		#line 1186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		const auto result = Builtin::Cast<true, __extension_Int8_1325_i8>(ADV_USFCS((Math), Isqrt8)(Builtin::Cast<true, Builtin::u8>(__this))); 
		#line 1187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ASSUME((result <=> Builtin::i32(0)) >= 0);
		#line 1188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ASSUME((result <=> MAX_RESULT) <= 0);
		#line 1189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return result;
	}
	} namespace System{

}