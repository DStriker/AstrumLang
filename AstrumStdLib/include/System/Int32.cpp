#include "Math.h"
#include "Int32.h"

namespace System {
//###############################################################################
//# Global type aliases
//###############################################################################
//###############################################################################
//# Type definitions
//###############################################################################

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	















static_assert(Builtin::usize(sizeof(Builtin::i32)) == Builtin::i32(4), "i32 should be 4 bytes");
static_assert(ADV_USPCS(MinValue, Builtin::i32)() == Builtin::i32(-2147483648), "i32.Min should be -0x80000000");
static_assert(ADV_USPCS(MaxValue, Builtin::i32)() == Builtin::i32(0x7FFFFFFF), "i32.Max should be 0x7FFFFFFF");
static_assert(ADV_UFCS_NONLOCAL(_operator_gt_gt_not)(ADV_USPCS(One, Builtin::i32)(), Builtin::i32(3)) == Builtin::i32(0x20000000), "i32.One >>% 3 == 0x20000000");
static_assert(ADV_USPCS(IsSigned, Builtin::i32)(), "i32 must be signed");
static_assert(ADV_USPCS(MaxDigitCount, Builtin::i32)() == Builtin::i32(10), "i32 max digit count must be 10");
static_assert(ADV_UFCS_NONLOCAL(_operator_xor_xor)(Builtin::i32(2), Builtin::u32(30U)) == Builtin::i32(1073741824), "2i32 ^^ 30u == 1_073_741_824");
static_assert(Builtin::TypeIs<Builtin::i32, IComparable<Builtin::i32>>(), "i32 should implement IComparable<i32>");
static_assert(Builtin::TypeIs<Builtin::i32, IEquatable<Builtin::i32>>(), "i32 should implement IEquatable<i32>");
static_assert(Builtin::TypeIs<Builtin::i32, ISelfComparable>(), "i32 should implement ISelfComparable");
static_assert(Builtin::TypeIs<Builtin::i32, ISelfEquatable>(), "i32 should implement ISelfEquatable");
static_assert(Builtin::TypeIs<Builtin::i32, IAdditionOperators<Builtin::i32, Builtin::i32>>(), "i32 should implement IAdditionOperators<i32, i32>");
static_assert(Builtin::TypeIs<Builtin::i32, ISubtractionOperators<Builtin::i32, Builtin::i32>>(), "i32 should implement ISubtractionOperators<i32, i32>");
static_assert(Builtin::TypeIs<Builtin::i32, IMultiplyOperators<Builtin::i32, Builtin::i32>>(), "i32 should implement IMultiplyOperators<i32, i32>");
static_assert(Builtin::TypeIs<Builtin::i32, IDivisionOperators<Builtin::i32, Builtin::f64>>(), "i32 should implement IDivisionOperators<i32, f64>");
static_assert(Builtin::TypeIs<Builtin::i32, IIntDivOperators<Builtin::i32, Builtin::i32>>(), "i32 should implement IIntDivOperators<i32, i32>");
static_assert(Builtin::TypeIs<Builtin::i32, IModulusOperators<Builtin::i32, Builtin::i32>>(), "i32 should implement IModulusOperators<i32, i32>");
static_assert(Builtin::TypeIs<Builtin::i32, IBitwiseOperators<Builtin::i32, Builtin::i32>>(), "i32 should implement IBitwiseOperators<i32, i32>");
static_assert(Builtin::TypeIs<Builtin::i32, IShiftOperators<Builtin::i32, Builtin::i32>>(), "i32 should implement IShiftOperators<i32, i32>");
static_assert(Builtin::TypeIs<Builtin::i32, IUnaryPlusOperators<Builtin::i32>>(), "i32 should implement IUnaryPlusOperators<i32>");
static_assert(Builtin::TypeIs<Builtin::i32, IUnaryNegationOperators<Builtin::i32>>(), "i32 should implement IUnaryNegationOperators<i32>");
static_assert(Builtin::TypeIs<Builtin::i32, IIncrementOperators<Builtin::i32>>(), "i32 should implement IIncrementOperators<i32>");
static_assert(Builtin::TypeIs<Builtin::i32, IDecrementOperators<Builtin::i32>>(), "i32 should implement IDecrementOperators<i32>");
static_assert(ADV_UFCS_NONLOCAL(_operator_add_mod)(ADV_USPCS(MaxValue, Builtin::i32)(), Builtin::i32(1)) == ADV_USPCS(MinValue, Builtin::i32)(), "i32.MaxValue +% 1i32 == i32.MinValue");
static_assert(ADV_UFCS_NONLOCAL(_operator_add_or)(ADV_USPCS(MaxValue, Builtin::i32)(), Builtin::i32(1)) == ADV_USPCS(MaxValue, Builtin::i32)(), "i32.MaxValue +| 1i32 == i32.MaxValue");
#ifdef ADV_UNITTEST
	#line 1379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	static bool __Test_f2fa738630ebcb07 = [](){
		#line 1381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::i32 a = Builtin::i32(5); 
		#line 1384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a + Builtin::i8(10) == Builtin::i32(15)), u"a+10i8==15");
		#line 1385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a + Builtin::u8(10U) == Builtin::i32(15)), u"a+10u8==15");
		#line 1386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a + Builtin::i16(10) == Builtin::i32(15)), u"a+10i16==15");
		#line 1387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a + Builtin::u16(10U) == Builtin::i32(15)), u"a+10u16==15");
		#line 1388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a + Builtin::i32(10) == Builtin::i32(15)), u"a+10i32==15");
		#line 1389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a + Builtin::u32(10U) == Builtin::i32(15)), u"a+10u32==15");
		#line 1390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a + Builtin::i64(10LL) == Builtin::i32(15)), u"a+10i64==15");
		#line 1391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a + Builtin::u64(10ULL) == Builtin::i32(15)), u"a+10u64==15");
		#line 1392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a + Builtin::i128(10LL) == Builtin::i32(15)), u"a+10i128==15");
		#line 1393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a + Builtin::u128(10ULL) == Builtin::i32(15)), u"a+10u128==15");
		#line 1396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a - Builtin::i32(12) == Builtin::i32(-7)), u"a-12==-7");
		#line 1397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a * Builtin::i32(2) == Builtin::i32(10)), u"a*2==10");
		#line 1398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, Builtin::i32(2)) == Builtin::i32(2)), u"a\\2==2");
		#line 1399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a % Builtin::i32(2) == Builtin::i32(1)), u"a%2==1");
		#line 1400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT(((a & Builtin::i32(1)) == Builtin::i32(1)), u"(a&1)==1");
		#line 1401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT(((a | Builtin::i32(1)) == Builtin::i32(5)), u"(a|1)==5");
		#line 1402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT(((a ^ Builtin::i32(1)) == Builtin::i32(4)), u"(a^1)==4");
		#line 1403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a << Builtin::i32(1) == Builtin::i32(10)), u"a<<1==10");
		#line 1404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a >> Builtin::i32(1) == Builtin::i32(2)), u"a>>1==2");
		#line 1405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a = Builtin::i32(-5);
		#line 1406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_UFCS(_operator_gt_gt_gt_eq)(a, Builtin::i32(2));
		#line 1407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a == Builtin::i32(0b00111111111111111111111111111110)), u"a==0b00111111_11111111_11111111_11111110");
		#line 1408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_gt)(a, Builtin::i32(2)) == Builtin::i32(0b00001111111111111111111111111111)), u"a>>>2==0b00001111_11111111_11111111_11111111");
		#line 1409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_gt)(a, Builtin::i32(7)) == Builtin::i32(0b00000000011111111111111111111111)), u"a>>>7==0b00000000_01111111_11111111_11111111");
		#line 1412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a = Builtin::i32(5);
		#line 1413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a == Builtin::i32(5)), u"a==5");
		#line 1414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a != Builtin::i32(6)), u"a!=6");
		#line 1415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT(((a <=> Builtin::i32(6)) < 0), u"a<6");
		#line 1416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT(((a <=> Builtin::i32(5)) <= 0), u"a<=5");
		#line 1417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT(((a <=> Builtin::i32(4)) > 0), u"a>4");
		#line 1418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT(((a <=> Builtin::i32(5)) >= 0), u"a>=5");
		#line 1421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a = Builtin::i32(5);
		#line 1422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a++;
		#line 1423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a--;
		#line 1424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a += Builtin::i32(5);
		#line 1425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a -= Builtin::i32(5);
		#line 1426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a *= Builtin::i32(2);
		#line 1427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_UFCS(_operator_bsl_eq)(a, Builtin::i32(2));
		#line 1428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a %= Builtin::i32(1);
		#line 1429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a &= Builtin::i32(1);
		#line 1430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a |= Builtin::i32(1);
		#line 1431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a ^= Builtin::i32(1);
		#line 1432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a <<= Builtin::i32(1);
		#line 1433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a >>= Builtin::i32(1);
		#line 1434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a == Builtin::i32(0)), u"a==0");
		#line 1435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a = Builtin::i32(10);
		#line 1436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_not)(a) == Builtin::i32(-11)), u"~a==-11");
		#line 1439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::i32 b = Builtin::i32(5); 
		#line 1440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Nullable<Builtin::i32> c = nullptr; 
		#line 1441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Nullable<Builtin::i32> d = Builtin::i32(5); 
		#line 1442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a != b), u"a!=b");
		#line 1443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((b != c), u"b!=c");
		#line 1444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((!Builtin::IdentityEquals(b, c)), u"b!==c");
		#line 1445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT(((b <=> c) > 0), u"b>c");
		#line 1446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((c != b), u"c!=b");
		#line 1447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((c == nullptr), u"c==null");
		#line 1448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((d != nullptr), u"d!=null");
		#line 1449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT(((c <=> d) < 0), u"c<d");
		#line 1450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((b == d), u"b==d");
		#line 1451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((Builtin::IdentityEquals(b, d)), u"b===d");
		#line 1454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Nullable<Builtin::ObjectRef> o = c; 
		#line 1455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		o = d;
		#line 1456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_ne_eq_mul)(b, o)), u"b!=*o");
		#line 1457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		IComparable<Builtin::i32> icomp = a; 
		#line 1458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT(((icomp <=> b) > 0), u"icomp>b");
		#line 1461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(a.__ref()) == Builtin::i32(10)), u"a.HashCode==10");
		#line 1462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(a) == Builtin::i32(10)), u"#a==10");
		#line 1463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		b = Builtin::i32(-6);
		#line 1464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(b) == Builtin::u64(18446744073709551610ULL)), u"#b==18446744073709551610u");
		#line 1466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(ToInt64)(b.__ref()) == Builtin::i32(-6)), u"b.ToInt64()==-6");
		#line 1467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(NarrowToUInt64)(b.__ref()) == Builtin::u64(18446744073709551610ULL)), u"b.NarrowToUInt64()==18446744073709551610u");
		#line 1470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(Abs)(b.__ref()) == Builtin::i32(6)), u"b.Abs==6");
		#line 1471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(CheckedAbs)(b.__ref()) == Builtin::i32(6)), u"b.CheckedAbs==6");
		#line 1472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(CheckedAbs)(ADV_USPCS(MinValue, Builtin::i32)().__ref()) == nullptr), u"i32.MinValue.CheckedAbs==null");
		#line 1473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(StrictAbs)(b.__ref()) == Builtin::i32(6)), u"b.StrictAbs==6");
		#line 1474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(WrappingAbs)(ADV_USPCS(MinValue, Builtin::i32)().__ref()) == ADV_USPCS(MinValue, Builtin::i32)()), u"i32.MinValue.WrappingAbs==i32.MinValue");
		#line 1475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(SaturatingAbs)(ADV_USPCS(MinValue, Builtin::i32)().__ref()) == ADV_USPCS(MaxValue, Builtin::i32)()), u"i32.MinValue.SaturatingAbs==i32.MaxValue");
		#line 1476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		{
			#line 1477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			const auto& [result, overflowed] = ADV_UPCS(OverflowingAbs)(ADV_USPCS(MinValue, Builtin::i32)().__ref());
			#line 1478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			ADV_ASSERT((result == ADV_USPCS(MinValue, Builtin::i32)() && overflowed), u"result==i32.MinValue&&overflowed");
		}
		#line 1480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(IsFinite)(b.__ref())), u"b.IsFinite");
		#line 1481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(IsInteger)(b.__ref())), u"b.IsInteger");
		#line 1482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(IsNegative)(b.__ref())), u"b.IsNegative");
		#line 1483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(IsPositive)(a.__ref())), u"a.IsPositive");
		#line 1484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((!ADV_UPCS(IsPositive)(b.__ref())), u"!b.IsPositive");
		#line 1485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(IsCanonical)(b.__ref())), u"b.IsCanonical");
		#line 1486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((!ADV_UPCS(IsComplexNumber)(b.__ref())), u"!b.IsComplexNumber");
		#line 1487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(IsRealNumber)(b.__ref())), u"b.IsRealNumber");
		#line 1488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((!ADV_UPCS(IsImaginaryNumber)(b.__ref())), u"!b.IsImaginaryNumber");
		#line 1489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(IsEvenInteger)(b.__ref())), u"b.IsEvenInteger");
		#line 1490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((!ADV_UPCS(IsOddInteger)(b.__ref())), u"!b.IsOddInteger");
		#line 1491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((!ADV_UPCS(IsInfinity)(b.__ref())), u"!b.IsInfinity");
		#line 1492 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((!ADV_UPCS(IsPositiveInfinity)(b.__ref())), u"!b.IsPositiveInfinity");
		#line 1493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((!ADV_UPCS(IsNegativeInfinity)(b.__ref())), u"!b.IsNegativeInfinity");
		#line 1494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((!ADV_UPCS(IsNaN)(b.__ref())), u"!b.IsNaN");
		#line 1495 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(IsNormal)(b.__ref())), u"b.IsNormal");
		#line 1496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((!ADV_UPCS(IsSubnormal)(b.__ref())), u"!b.IsSubnormal");
		#line 1497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((!ADV_UPCS(IsZero)(b.__ref())), u"!b.IsZero");
		#line 1500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(Sign)(a.__ref()) == +Builtin::i32(1)), u"a.Sign==+1");
		#line 1501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(Sign)(b.__ref()) == Builtin::i32(-1)), u"b.Sign==-1");
		#line 1502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(CopySign)(a.__ref(), b) == Builtin::i32(-10)), u"a.CopySign(b)==-10");
		#line 1503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(Max)(a.__ref(), b) == a), u"a.Max(b)==a");
		#line 1504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(Min)(a.__ref(), b) == b), u"a.Min(b)==b");
		#line 1505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(MaxNumber)(a.__ref(), b) == a), u"a.MaxNumber(b)==a");
		#line 1506 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(MinNumber)(a.__ref(), b) == b), u"a.MinNumber(b)==b");
		#line 1507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(Clamp)(b.__ref(), Builtin::i32(-5), +Builtin::i32(5)) == Builtin::i32(-5)), u"b.Clamp(-5,+5)==-5");
		#line 1510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::i32(2).__ref()) == Builtin::i32(1)), u"2i32.Log2==1");
		#line 1511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::i32(16).__ref()) == Builtin::i32(4)), u"16i32.Log2==4");
		#line 1512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::i32(64).__ref()) == Builtin::i32(6)), u"64i32.Log2==6");
		#line 1513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::i32(2000000000).__ref()) == Builtin::i32(30)), u"2_000_000_000i32.Log2==30");
		#line 1514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::i32(2).__ref()) == Builtin::i32(1)), u"2i32.Log2Ceiling==1");
		#line 1515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::i32(16).__ref()) == Builtin::i32(4)), u"16i32.Log2Ceiling==4");
		#line 1516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::i32(65).__ref()) == Builtin::i32(7)), u"65i32.Log2Ceiling==7");
		#line 1517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::i32(2000000000).__ref()) == Builtin::i32(31)), u"2_000_000_000i32.Log2Ceiling==31");
		#line 1518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(CheckedLog2)(Builtin::i32(0).__ref()) == nullptr), u"0i32.CheckedLog2==null");
		#line 1519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(Builtin::i32(5).__ref()) == Builtin::i32(0)), u"5i32.Log10==0");
		#line 1520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(a.__ref()) == Builtin::i32(1)), u"a.Log10==1");
		#line 1521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(ADV_USPCS(MaxValue, Builtin::i32)().__ref()) == Builtin::i32(9)), u"i32.MaxValue.Log10==9");
		#line 1522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(Log)(Builtin::i32(5).__ref(), Builtin::i32(5)) == Builtin::i32(1)), u"5i32.Log(5i32)==1");
		#line 1523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(CheckedLog)(Builtin::i32(5).__ref(), Builtin::i32(-5)) == nullptr), u"5i32.CheckedLog(-5i32)==null");
		#line 1524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(Midpoint)(a.__ref(), Builtin::i32(30)) == Builtin::i32(20)), u"a.Midpoint(30i32)==20");
		#line 1525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(Midpoint)(Builtin::i32(1000000000).__ref(), Builtin::i32(2000000000)) == Builtin::i32(1500000000)), u"1_000_000_000i32.Midpoint(2_000_000_000)==1_500_000_000");
		#line 1526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)(a.__ref(), Builtin::i32(10)) == Builtin::i32(10)), u"a.NextMultipleOf(10i32)==10");
		#line 1527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)(Builtin::i32(11).__ref(), Builtin::i32(10)) == Builtin::i32(20)), u"11i32.NextMultipleOf(10i32)==20");
		#line 1528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)(Builtin::i32(1000000000).__ref(), Builtin::i32(8500)) == Builtin::i32(1000008000)), u"1_000_000_000i32.NextMultipleOf(8500i32)==1_000_008_000");
		#line 1529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)((Builtin::i32(-13)).__ref(), Builtin::i32(4)) == Builtin::i32(-12)), u"(-13i32).NextMultipleOf(4i32)==-12");
		#line 1530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)((Builtin::i32(-13)).__ref(), Builtin::i32(-4)) == Builtin::i32(-16)), u"(-13i32).NextMultipleOf(-4i32)==-16");
		#line 1531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(ByteCount)(a.__ref()) == Builtin::i32(4)), u"a.ByteCount==4");
		#line 1532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(ByteSwapped)(Builtin::i32(0x7b233d2a).__ref()) == Builtin::i32(0x2a3d237b)), u"0x7b233d2a_i32.ByteSwapped==0x2a3d237b");
		#line 1533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_not)(Builtin::i32(0b1010), Builtin::i32(3)) == Builtin::i32(0b01010000)), u"0b1010_i32<<~3==0b0101_0000");
		#line 1534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_not)(Builtin::i32(0b1010), Builtin::i32(5)) == Builtin::i32(0b101000000)), u"0b1010_i32<<~5==0b1_0100_0000");
		#line 1535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_not)(Builtin::i32(0b1010), Builtin::i32(3)) == Builtin::i32(0b01000000000000000000000000000001)), u"0b1010_i32>>~3==0b0100_0000_0000_0000_0000_0000_0000_0001");
		#line 1536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_not)(Builtin::i32(0b1010), Builtin::i32(5)) == Builtin::i32(0b01010000000000000000000000000000)), u"0b1010_i32>>~5==0b0101_0000_0000_0000_0000_0000_0000_0000");
		#line 1538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(IsMultipleOf)(a.__ref(), Builtin::i32(5))), u"a.IsMultipleOf(5)");
		#line 1539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((!ADV_UFCS(IsMultipleOf)(a.__ref(), Builtin::i32(6))), u"!a.IsMultipleOf(6)");
		#line 1541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(MultiplyBy10)(a.__ref()) == Builtin::i32(100)), u"a.MultiplyBy10==100");
		#line 1542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(MultiplyBy16)(a.__ref()) == Builtin::i32(160)), u"a.MultiplyBy16==160");
		#line 1545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_qst)(a, Builtin::i32(100)) == Builtin::i32(110)), u"a+?100i32==110");
		#line 1546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_qst)(a, ADV_USPCS(MaxValue, Builtin::i32)()) == nullptr), u"a+?i32.MaxValue==null");
		#line 1547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_UFCS(_operator_add_qst_eq)(a, Builtin::i32(5));
		#line 1548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a == Builtin::i32(15)), u"a==15");
		#line 1549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_UFCS(_operator_add_qst_eq)(a, ADV_USPCS(MaxValue, Builtin::i32)());
		#line 1550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a == Builtin::i32(15)), u"a==15");
		#line 1551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_ne)(a, Builtin::i32(100)) == Builtin::i32(115)), u"a+!100i32==115");
		#line 1552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_mod)(a, Builtin::i32(100)) == Builtin::i32(115)), u"a+%100i32==115");
		#line 1553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_mod)(a, Builtin::i32(2147483633)) == ADV_USPCS(MinValue, Builtin::i32)()), u"a+%2_147_483_633i32==i32.MinValue");
		#line 1554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_UFCS(_operator_add_mod_eq)(a, ADV_USPCS(MaxValue, Builtin::i32)());
		#line 1555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a == Builtin::i32(-2147483634)), u"a==-2147483634");
		#line 1556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_or)(a, (Builtin::i32(-32760))) == ADV_USPCS(MinValue, Builtin::i32)()), u"a+|(-32760i32)==i32.MinValue");
		#line 1557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_UFCS(_operator_add_or_eq)(a, ADV_USPCS(MaxValue, Builtin::i32)());
		#line 1558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a == Builtin::i32(13)), u"a==13");
		#line 1559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_or)(a, Builtin::i32(2147483640)) == ADV_USPCS(MaxValue, Builtin::i32)()), u"a+|2147483640i32==i32.MaxValue");
		#line 1560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		{
			#line 1561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_add_mod_qst)(a, Builtin::i32(2147483640));
			#line 1562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			ADV_ASSERT((result == Builtin::i32(-2147483643) && overflowed), u"result==-2147483643&&overflowed");
		}
		#line 1565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a = ADV_USPCS(MaxValue, Builtin::i32)() - Builtin::i32(1);
		#line 1566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_add_qst_postfix)(a) == ADV_USPCS(MaxValue, Builtin::i32)() - Builtin::i32(1)), u"a++?==i32.MaxValue-1");
		#line 1567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::i32)()), u"a==i32.MaxValue");
		#line 1568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_UFCS(_operator_add_add_mod_postfix)(a);
		#line 1569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::i32)()), u"a==i32.MinValue");
		#line 1570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a = ADV_USPCS(MaxValue, Builtin::i32)();
		#line 1571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_UFCS(_operator_add_add_or_postfix)(a);
		#line 1572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::i32)()), u"a==i32.MaxValue");
		#line 1574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		{
			#line 1575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.__ref(), Builtin::i32(0), false);
			#line 1576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			ADV_ASSERT((result == ADV_USPCS(MaxValue, Builtin::i32)() && !overflowed), u"result==i32.MaxValue&&!overflowed");
		}
		#line 1578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		{
			#line 1579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.__ref(), Builtin::i32(-5), true);
			#line 1580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			ADV_ASSERT((result == Builtin::i32(2147483643) && !overflowed), u"result==2147483643&&!overflowed");
		}
		#line 1582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		{
			#line 1583 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.__ref(), Builtin::i32(0), true);
			#line 1584 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			ADV_ASSERT((result == ADV_USPCS(MinValue, Builtin::i32)() && overflowed), u"result==i32.MinValue&&overflowed");
		}
		#line 1586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		{
			#line 1587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.__ref(), Builtin::i32(10), true);
			#line 1588 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			ADV_ASSERT((result == Builtin::i32(-2147483638) && overflowed), u"result==-2147483638&&overflowed");
		}
		#line 1591 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_qst)(a, Builtin::i32(1000000000)) == Builtin::i32(1147483647)), u"a-?1_000_000_000i32==1147483647");
		#line 1592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_qst)(-a, ADV_USPCS(MaxValue, Builtin::i32)()) == nullptr), u"-a-?i32.MaxValue==null");
		#line 1593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_UFCS(_operator_sub_qst_eq)(a, Builtin::i32(1000000000));
		#line 1594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a == Builtin::i32(1147483647)), u"a==1147483647");
		#line 1595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_UFCS(_operator_sub_qst_eq)(a, Builtin::i32(1));
		#line 1596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a == Builtin::i32(1147483646)), u"a==1147483646");
		#line 1597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_ne)(a, Builtin::i32(1000000000)) == Builtin::i32(147483646)), u"a-!1000000000i32==147483646");
		#line 1598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_mod)(-a, Builtin::i32(1000000003)) == ADV_USPCS(MaxValue, Builtin::i32)()), u"-a-%1_000_000_003i32==i32.MaxValue");
		#line 1599 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_mod)(a, Builtin::i32(10000000)) == Builtin::i32(1137483646)), u"a-%10000000i32==1_137_483_646");
		#line 1600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_UFCS(_operator_sub_mod_eq)(a, ADV_USPCS(MaxValue, Builtin::i32)());
		#line 1601 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a == Builtin::i32(-1000000001)), u"a==-1_000_000_001");
		#line 1602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_or)(a, Builtin::i32(2000000000)) == ADV_USPCS(MinValue, Builtin::i32)()), u"a-|2_000_000_000i32==i32.MinValue");
		#line 1603 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_UFCS(_operator_sub_or_eq)(a, ADV_USPCS(MaxValue, Builtin::i32)());
		#line 1604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::i32)()), u"a==i32.MinValue");
		#line 1605 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		{
			#line 1606 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_sub_mod_qst)(a, Builtin::i32(2000000000));
			#line 1607 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			ADV_ASSERT((result == Builtin::i32(147483648) && overflowed), u"result==147483648&&overflowed");
		}
		#line 1610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a = ADV_USPCS(MinValue, Builtin::i32)() + Builtin::i32(1);
		#line 1611 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_sub_qst_postfix)(a) == ADV_USPCS(MinValue, Builtin::i32)() + Builtin::i32(1)), u"a--?==i32.MinValue+1");
		#line 1612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::i32)()), u"a==i32.MinValue");
		#line 1613 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_UFCS(_operator_sub_sub_mod_postfix)(a);
		#line 1614 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::i32)()), u"a==i32.MaxValue");
		#line 1615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a = ADV_USPCS(MinValue, Builtin::i32)();
		#line 1616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_UFCS(_operator_sub_sub_or_postfix)(a);
		#line 1617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::i32)()), u"a==i32.MinValue");
		#line 1619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		{
			#line 1620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.__ref(), Builtin::i32(0), false);
			#line 1621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			ADV_ASSERT((result == ADV_USPCS(MinValue, Builtin::i32)() && !overflowed), u"result==i32.MinValue&&!overflowed");
		}
		#line 1623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		{
			#line 1624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.__ref(), Builtin::i32(-5), true);
			#line 1625 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			ADV_ASSERT((result == Builtin::i32(-2147483644) && !overflowed), u"result==-2147483644&&!overflowed");
		}
		#line 1627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		{
			#line 1628 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.__ref(), Builtin::i32(0), true);
			#line 1629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			ADV_ASSERT((result == ADV_USPCS(MaxValue, Builtin::i32)() && overflowed), u"result==i32.MaxValue&&overflowed");
		}
		#line 1631 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		{
			#line 1632 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.__ref(), Builtin::i32(10), true);
			#line 1633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			ADV_ASSERT((result == Builtin::i32(2147483637) && overflowed), u"result==2147483637&&overflowed");
		}
		#line 1636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_qst)(a, Builtin::i32(1)) == ADV_USPCS(MinValue, Builtin::i32)()), u"a*?1i32==i32.MinValue");
		#line 1637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_qst)(a, Builtin::i32(2)) == nullptr), u"a*?2i32==null");
		#line 1638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_UFCS(_operator_mul_qst_eq)(a, Builtin::i32(5));
		#line 1639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::i32)()), u"a==i32.MinValue");
		#line 1640 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a = Builtin::i32(150000);
		#line 1641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a == Builtin::i32(150000)), u"a==150000");
		#line 1642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_ne)(a, Builtin::i32(3)) == Builtin::i32(450000)), u"a*!3i32==450000");
		#line 1643 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_mod)(a, Builtin::i32(6)) == Builtin::i32(900000)), u"a*%6i32==900000");
		#line 1644 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_mod)(a, Builtin::i32(15000)) == Builtin::i32(-2044967296)), u"a*%15000i32==-2_044_967_296");
		#line 1645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_UFCS(_operator_mul_mod_eq)(a, Builtin::i32(6));
		#line 1646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a == Builtin::i32(900000)), u"a==900000");
		#line 1647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_or)(a, (Builtin::i32(-10000))) == ADV_USPCS(MinValue, Builtin::i32)()), u"a*|(-10000i32)==i32.MinValue");
		#line 1648 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_UFCS(_operator_mul_or_eq)(a, Builtin::i32(10000));
		#line 1649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::i32)()), u"a==i32.MaxValue");
		#line 1650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_or)(a, Builtin::i32(2)) == ADV_USPCS(MaxValue, Builtin::i32)()), u"a*|2i32==i32.MaxValue");
		#line 1651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		{
			#line 1652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_mul_mod_qst)(a, Builtin::i32(2));
			#line 1653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			ADV_ASSERT((result == Builtin::i32(-2) && overflowed), u"result==-2&&overflowed");
		}
		#line 1655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a = Builtin::i32(150000);
		#line 1656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		{
			#line 1657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			const auto& [low, high] = ADV_UFCS(_operator_mul_gt)(a, (Builtin::i32(35000)));
			#line 1658 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			ADV_ASSERT((low == Builtin::i32(955032704) && high == Builtin::i32(1)), u"low==955032704&&high==1");
		}
		#line 1660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		{
			#line 1661 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			const auto& [low, high] = ADV_UFCS(_operator_mul_gt)(a, (Builtin::i32(-35000)));
			#line 1662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			ADV_ASSERT((low == Builtin::i64(3339934592LL) && high == Builtin::i32(-2)), u"low==3339934592&&high==-2");
		}
		#line 1664 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a = ADV_USPCS(MaxValue, Builtin::i32)();
		#line 1665 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		{
			#line 1666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			const auto& [low, high] = ADV_UFCS(CarryingMul)(a.__ref(), Builtin::i32(2), Builtin::i32(12));
			#line 1667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			ADV_ASSERT((low == Builtin::i32(10) && high == Builtin::i32(1)), u"low==10&&high==1");
		}
		#line 1669 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		{
			#line 1670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			const auto& [low, high] = ADV_UFCS(CarryingMul)(a.__ref(), Builtin::i32(-2), Builtin::i32(-12));
			#line 1671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			ADV_ASSERT((low == Builtin::i64(4294967286LL) && high == Builtin::i32(-2)), u"low==4294967286&&high==-2");
		}
		#line 1674 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a = Builtin::i32(100000);
		#line 1675 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, Builtin::i32(600)) == Builtin::i32(166)), u"a\\600==166");
		#line 1676 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a /= Builtin::i32(600);
		#line 1677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a == Builtin::i32(167)), u"a==167");
		#line 1678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a = Builtin::i32(100000);
		#line 1679 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		{
			#line 1680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)(a, Builtin::i32(600));
			#line 1681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			ADV_ASSERT((div == Builtin::i32(166) && rem == Builtin::i32(400)), u"div==166&&rem==400");
		}
		#line 1683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_qst)(a, Builtin::i32(5)) == Builtin::i32(20000)), u"a\\?5==20000");
		#line 1684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_qst)(a, Builtin::i32(0)) == nullptr), u"a\\?0==null");
		#line 1685 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_qst)(ADV_USPCS(MinValue, Builtin::i32)(), (Builtin::i32(-1))) == nullptr), u"i32.MinValue\\?(-1)==null");
		#line 1687 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_ne)(a, Builtin::i32(5)) == Builtin::i32(20000)), u"a\\!5==20000");
		#line 1688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_UFCS(_operator_bsl_mod_eq)(a, Builtin::i32(5));
		#line 1689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a == Builtin::i32(20000)), u"a==20000");
		#line 1690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a = Builtin::i32(10);
		#line 1691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_mod)(ADV_USPCS(MinValue, Builtin::i32)(), (Builtin::i32(-1))) == ADV_USPCS(MinValue, Builtin::i32)()), u"i32.MinValue\\%(-1)==i32.MinValue");
		#line 1692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_UFCS(_operator_bsl_or_eq)(a, Builtin::i32(5));
		#line 1693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a == Builtin::i32(2)), u"a==2");
		#line 1694 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a = Builtin::i32(100000);
		#line 1695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_or)(ADV_USPCS(MinValue, Builtin::i32)(), (Builtin::i32(-1))) == ADV_USPCS(MaxValue, Builtin::i32)()), u"i32.MinValue\\|(-1)==i32.MaxValue");
		#line 1696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		{
			#line 1697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_bsl_mod_qst)(ADV_USPCS(MinValue, Builtin::i32)(), (Builtin::i32(-1)));
			#line 1698 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			ADV_ASSERT((result == ADV_USPCS(MinValue, Builtin::i32)() && overflowed), u"result==i32.MinValue&&overflowed");
		}
		#line 1701 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_bsl)(a, Builtin::i32(500)) == Builtin::i32(200)), u"a\\\\500==200");
		#line 1702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_bsl)(a, Builtin::i32(6)) == nullptr), u"a\\\\6==null");
		#line 1703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_bsl_qst)(a, Builtin::i32(0)) == nullptr), u"a\\\\?0==null");
		#line 1705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_not)(a, Builtin::i32(600)) == Builtin::i32(167)), u"a/~600==167");
		#line 1706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_lt)(a, Builtin::i32(600)) == Builtin::i32(166)), u"a/<600==166");
		#line 1707 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_gt)(a, Builtin::i32(600)) == Builtin::i32(167)), u"a/>600==167");
		#line 1708 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_not)(a, (Builtin::i32(-600))) == Builtin::i32(-167)), u"a/~(-600)==-167");
		#line 1709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_lt)(a, (Builtin::i32(-600))) == Builtin::i32(-167)), u"a/<(-600)==-167");
		#line 1710 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_gt)(a, (Builtin::i32(-600))) == Builtin::i32(-166)), u"a/>(-600)==-166");
		#line 1712 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_qst)(a, Builtin::i32(500)) == Builtin::i32(0)), u"a%?500==0");
		#line 1713 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_qst)(a, Builtin::i32(0)) == nullptr), u"a%?0==null");
		#line 1714 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_qst)(ADV_USPCS(MinValue, Builtin::i32)(), (Builtin::i32(-1))) == nullptr), u"i32.MinValue%?(-1)==null");
		#line 1716 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_ne)(a, Builtin::i32(600)) == Builtin::i32(400)), u"a%!600==400");
		#line 1717 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_UFCS(_operator_mod_mod_eq)(a, Builtin::i32(600));
		#line 1718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a == Builtin::i32(400)), u"a==400");
		#line 1719 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a = Builtin::i32(10);
		#line 1720 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_mod)(ADV_USPCS(MinValue, Builtin::i32)(), (Builtin::i32(-1))) == Builtin::i32(0)), u"i32.MinValue%%(-1)==0");
		#line 1721 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		{
			#line 1722 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_mod_mod_qst)(ADV_USPCS(MinValue, Builtin::i32)(), (Builtin::i32(-1)));
			#line 1723 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			ADV_ASSERT((result == Builtin::i32(0) && overflowed), u"result==0&&overflowed");
		}
		#line 1726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_qst)(a) == Builtin::i32(-10)), u"-?a==-10");
		#line 1727 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_qst)(ADV_USPCS(MinValue, Builtin::i32)()) == nullptr), u"-?i32.MinValue==null");
		#line 1728 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_ne)(a) == Builtin::i32(-10)), u"-!a==-10");
		#line 1729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_mod)(a) == Builtin::i32(-10)), u"-%a==-10");
		#line 1730 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_mod)(ADV_USPCS(MinValue, Builtin::i32)()) == ADV_USPCS(MinValue, Builtin::i32)()), u"-%i32.MinValue==i32.MinValue");
		#line 1731 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_or)(a) == Builtin::i32(-10)), u"-|a==-10");
		#line 1732 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_or)(ADV_USPCS(MinValue, Builtin::i32)()) == ADV_USPCS(MaxValue, Builtin::i32)()), u"-|i32.MinValue==i32.MaxValue");
		#line 1734 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_bsl)(ADV_USPCS(MaxValue, Builtin::i32)(), Builtin::u32(4U)) == Builtin::i32(0b00000111111111111111111111111111)), u"i32.MaxValue>>\\4u==0b0000_0111_1111_1111_1111_1111_1111_1111");
		#line 1735 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_bsl)(ADV_USPCS(MaxValue, Builtin::i32)(), Builtin::u32(36U)) == Builtin::i32(0)), u"i32.MaxValue>>\\36u==0");
		#line 1736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_bsl)(ADV_USPCS(MinValue, Builtin::i32)(), Builtin::u32(36U)) == Builtin::i32(-1)), u"i32.MinValue>>\\36u==-1");
		#line 1737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_bsl)(ADV_USPCS(MaxValue, Builtin::i32)(), Builtin::u32(36U)) == Builtin::i32(0)), u"i32.MaxValue<<\\36u==0");
		#line 1738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_qst)(ADV_USPCS(MaxValue, Builtin::i32)(), Builtin::i32(4)) == Builtin::i32(0b00000111111111111111111111111111)), u"i32.MaxValue>>?4==0b0000_0111_1111_1111_1111_1111_1111_1111");
		#line 1739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_qst)(ADV_USPCS(MaxValue, Builtin::i32)(), Builtin::i32(36)) == nullptr), u"i32.MaxValue>>?36==null");
		#line 1740 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_qst)(ADV_USPCS(MaxValue, Builtin::i32)(), Builtin::i32(36)) == nullptr), u"i32.MaxValue<<?36==null");
		#line 1741 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_ne)(ADV_USPCS(MaxValue, Builtin::i32)(), Builtin::i32(4)) == Builtin::i32(0b00000111111111111111111111111111)), u"i32.MaxValue>>!4==0b0000_0111_1111_1111_1111_1111_1111_1111");
		#line 1742 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_mod)(ADV_USPCS(MaxValue, Builtin::i32)(), Builtin::i32(36)) == Builtin::i32(0b00000111111111111111111111111111)), u"i32.MaxValue>>%36==0b0000_0111_1111_1111_1111_1111_1111_1111");
		#line 1743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a = ADV_USPCS(MaxValue, Builtin::i32)();
		#line 1744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_UFCS(_operator_gt_gt_mod_eq)(a, Builtin::i32(36));
		#line 1745 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_mod)(a, Builtin::i32(36)) == Builtin::i32(0b01111111111111111111111111110000)), u"a<<%36==0b0111_1111_1111_1111_1111_1111_1111_0000");
		#line 1746 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		{
			#line 1747 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_gt_gt_mod_qst)(ADV_USPCS(MaxValue, Builtin::i32)(), Builtin::i32(36));
			#line 1748 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			ADV_ASSERT((result == Builtin::i32(0b00000111111111111111111111111111) && overflowed), u"result==0b0000_0111_1111_1111_1111_1111_1111_1111&&overflowed");
		}
		#line 1752 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a = Builtin::i32(1500);
		#line 1753 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor)(a, Builtin::u32(2U)) == Builtin::i32(2250000)), u"a^^2u==2250000");
		#line 1754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_UFCS(_operator_xor_xor_eq)(a, Builtin::u32(2U));
		#line 1755 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a == Builtin::i32(2250000)), u"a==2250000");
		#line 1756 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor)(Builtin::i32(300), Builtin::u32(3U)) == Builtin::i32(27000000)), u"300i32^^3u==27000000");
		#line 1757 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_qst)(Builtin::i32(300), Builtin::u32(3U)) == Builtin::i32(27000000)), u"300i32^^?3u==27000000");
		#line 1758 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_qst)(Builtin::i32(300), Builtin::u32(4U)) == nullptr), u"300i32^^?4u==null");
		#line 1759 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_UFCS(_operator_xor_xor_qst_eq)(a, Builtin::u32(2U));
		#line 1760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a == Builtin::i32(2250000)), u"a==2250000");
		#line 1761 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_ne)(Builtin::i32(300), Builtin::u32(3U)) == Builtin::i32(27000000)), u"300i32^^!3u==27000000");
		#line 1762 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_mod)(Builtin::i32(300), Builtin::u32(4U)) == Builtin::i32(-489934592)), u"300i32^^%4u==-489934592");
		#line 1763 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a = Builtin::i32(300);
		#line 1764 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_UFCS(_operator_xor_xor_mod_eq)(a, Builtin::u32(2U));
		#line 1765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a == Builtin::i32(90000)), u"a==90000");
		#line 1766 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_or)(Builtin::i32(300), Builtin::u32(3U)) == Builtin::i32(27000000)), u"300i32^^|3u==27000000");
		#line 1767 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_or)(Builtin::i32(300), Builtin::u32(4U)) == ADV_USPCS(MaxValue, Builtin::i32)()), u"300i32^^|4u==i32.MaxValue");
		#line 1768 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		{
			#line 1769 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_xor_xor_mod_qst)(Builtin::i32(300), Builtin::u32(4U));
			#line 1770 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			ADV_ASSERT((result == Builtin::i32(-489934592) && overflowed), u"result==-489934592&&overflowed");
		}
		return true;
	}();
	#endif	
} namespace __extensions { using namespace System;
#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	auto _operator_eq_eq_mul(__extension_Int32_19_i32 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool
	{
		#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		{
			#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			auto __tmp0 = Builtin::Cast<false, __extension_Int32_1342_i32>(obj);
			#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			if ((__tmp0.IsValid())) {
				#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				const auto& obj = *__tmp0;
				
				#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				return __this == obj;
			}
		}
		#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return false;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	auto _operator_lt_eq_gt_mul(__extension_Int32_72_i32 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32
	{
		#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		{
			#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			auto __tmp0 = Builtin::Cast<false, __extension_Int32_1342_i32>(obj);
			#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			if ((__tmp0.IsValid())) {
				#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				const auto& obj = *__tmp0;
				
				#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				return __this <=> obj;
			}
		}
		#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		{
			#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			if ((!Builtin::Is(obj, nullptr))) {
				#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				auto __tmp0 = *obj; const auto& obj = __tmp0;
				
				#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				Builtin::Throw(Builtin::InvalidOperationException{});
			}
		}
		#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return Builtin::i32(1);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	auto MaxMagnitude(__extension_Int32_257_i32 const& __this LIFETIMEBOUND, __extension_Int32_1342_i32 rhs) noexcept -> const typename __extension_Int32_257_i32
	{
		#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		auto absX = __this; 
		#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((absX <=> Builtin::i32(0)) < 0) {
			#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			absX = -absX;
			#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			if ((absX <=> Builtin::i32(0)) < 0) {
				#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				return __this;
			}
		}
		#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		auto absY = rhs; 
		#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((absY <=> Builtin::i32(0)) < 0) {
			#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			absY = -absY;
			#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			if ((absY <=> Builtin::i32(0)) < 0) {
				#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				return rhs;
			}
		}
		#line 299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((absX <=> absY) > 0) {
			#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return __this;
		}
		#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (absX == absY) {
			#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return ADV_UPCS(IsNegative)(__this.__ref()) ? rhs : __this;
		}
		#line 307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return rhs;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	auto MinMagnitude(__extension_Int32_257_i32 const& __this LIFETIMEBOUND, __extension_Int32_1342_i32 rhs) noexcept -> const typename __extension_Int32_257_i32
	{
		#line 314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		auto absX = __this; 
		#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((absX <=> Builtin::i32(0)) < 0) {
			#line 316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			absX = -absX;
			#line 317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			if ((absX <=> Builtin::i32(0)) < 0) {
				#line 318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				return rhs;
			}
		}
		#line 322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		auto absY = rhs; 
		#line 323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((absY <=> Builtin::i32(0)) < 0) {
			#line 324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			absY = -absY;
			#line 325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			if ((absY <=> Builtin::i32(0)) < 0) {
				#line 326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				return __this;
			}
		}
		#line 330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((absX <=> absY) < 0) {
			#line 331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return __this;
		}
		#line 334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (absX == absY) {
			#line 335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return ADV_UPCS(IsNegative)(__this.__ref()) ? __this : rhs;
		}
		#line 338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return rhs;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	auto Parse(__extension_Int32_257_i32 const& __this LIFETIMEBOUND, Builtin::Str input)  -> const typename __extension_Int32_257_i32
	{
		#line 345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return Builtin::i32(0);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	auto TryParse(__extension_Int32_257_i32 const& __this LIFETIMEBOUND, Builtin::Str input) noexcept -> const Builtin::Nullable<__extension_Int32_1342_i32>
	{
		#line 350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return Builtin::i32(0);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	auto CopySign(__extension_Int32_373_i32 const& __this LIFETIMEBOUND, __extension_Int32_1342_i32 sign)  -> const typename __extension_Int32_373_i32
	{
		#line 378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		auto absValue = __this; 
		#line 379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((absValue <=> Builtin::i32(0)) < 0) {
			#line 380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			absValue = -absValue;
		}
		#line 383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((sign <=> Builtin::i32(0)) >= 0) {
			#line 384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			if ((absValue <=> Builtin::i32(0)) < 0) {
				#line 385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				Builtin::Throw(Builtin::IntegerOverflowException{});
			}
			#line 388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return absValue;
		}
		#line 391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return -absValue;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	auto Log(__extension_Int32_401_i32 const& __this LIFETIMEBOUND, __extension_Int32_1342_i32 base)  -> const typename __extension_Int32_401_i32
	{
		#line 495 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (const auto result = ADV_UFCS(CheckedLog)(__this.__ref(), base)) {
			{
				#line 495 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				return result;
			}
		}
		#line 498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> auto _operator_add_mod_qst(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<__extension_Int32_1342_i32, bool>
	{
		#line 582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +%? implemented only for integer types");
		#line 583 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		__extension_Int32_1342_i32 result{}; 
		#line 584 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		auto overflowed = !Builtin::SafeAdd(__this, rhs, result); 
		#line 585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> auto _operator_sub_mod_qst(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<__extension_Int32_1342_i32, bool>
	{
		#line 674 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -%? implemented only for integer types");
		#line 675 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		__extension_Int32_1342_i32 result{}; 
		#line 676 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		auto overflowed = !Builtin::SafeSubtract(__this, rhs, result); 
		#line 677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 747 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> auto _operator_mul_mod_qst(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<__extension_Int32_1342_i32, bool>
	{
		#line 748 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *%? implemented only for integer types");
		#line 749 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		__extension_Int32_1342_i32 result{}; 
		#line 750 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		auto overflowed = !Builtin::SafeMultiply(__this, rhs, result); 
		#line 751 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> auto _operator_bsl_mod_qst(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_Int32_1342_i32, bool>
	{
		#line 831 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\%? implemented only for integer types");
		#line 832 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		__extension_Int32_1342_i32 result{}; 
		#line 833 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		auto overflowed = !Builtin::SafeDivide(__this, rhs, result); 
		#line 834 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 905 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	template<class T> auto _operator_mod_mod_qst(__extension_Int32_525_i32 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_Int32_1342_i32, bool>
	{
		#line 906 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %%? implemented only for integer types");
		#line 907 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		__extension_Int32_1342_i32 result{}; 
		#line 908 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		auto overflowed = !Builtin::SafeModulus(__this, rhs, result); 
		#line 909 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	auto getCheckedIsqrt(__extension_Int32_1176_i32 const& __this ) -> const Builtin::Nullable<__extension_Int32_1342_i32>
	{
		#line 1187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (ADV_UPCS(IsNegative)(__this.__ref())) {
			#line 1188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return nullptr;
		}
		#line 1194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return Builtin::i32(0);
	}
	} namespace System{

}