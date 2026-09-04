#include "Int32.h"
#include "Math.h"

namespace System {
//###############################################################################
//# Global type aliases
//###############################################################################
//###############################################################################
//# Type definitions
//###############################################################################

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	















#line 1374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	static_assert(Builtin::usize(sizeof(Builtin::i32)) == Builtin::i32(4), "i32 should be 4 bytes");
#line 1375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	static_assert(ADV_USPCS(MinValue, Builtin::i32)() == Builtin::i32(-2147483648), "i32.Min should be -0x80000000");
#line 1376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	static_assert(ADV_USPCS(MaxValue, Builtin::i32)() == Builtin::i32(0x7FFFFFFF), "i32.Max should be 0x7FFFFFFF");
#line 1377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	static_assert(ADV_UFCS_NONLOCAL(_operator_gt_gt_not)(ADV_USPCS(One, Builtin::i32)(), Builtin::i32(3)) == Builtin::i32(0x20000000), "i32.One >>% 3 == 0x20000000");
#line 1378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	static_assert(ADV_USPCS(IsSigned, Builtin::i32)(), "i32 must be signed");
#line 1379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	static_assert(ADV_USPCS(MaxDigitCount, Builtin::i32)() == Builtin::i32(10), "i32 max digit count must be 10");
#line 1380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	static_assert(ADV_UFCS_NONLOCAL(_operator_xor_xor)(Builtin::i32(2), Builtin::u32(30U)) == Builtin::i32(1073741824), "2i32 ^^ 30u == 1_073_741_824");
#line 1381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	static_assert(Builtin::TypeIs<Builtin::i32, IComparable<Builtin::i32>>(), "i32 should implement IComparable<i32>");
#line 1382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	static_assert(Builtin::TypeIs<Builtin::i32, IEquatable<Builtin::i32>>(), "i32 should implement IEquatable<i32>");
#line 1383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	static_assert(Builtin::TypeIs<Builtin::i32, ISelfComparable>(), "i32 should implement ISelfComparable");
#line 1384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	static_assert(Builtin::TypeIs<Builtin::i32, ISelfEquatable>(), "i32 should implement ISelfEquatable");
#line 1385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	static_assert(Builtin::TypeIs<Builtin::i32, IAdditionOperators<Builtin::i32, Builtin::i32>>(), "i32 should implement IAdditionOperators<i32, i32>");
#line 1386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	static_assert(Builtin::TypeIs<Builtin::i32, ISubtractionOperators<Builtin::i32, Builtin::i32>>(), "i32 should implement ISubtractionOperators<i32, i32>");
#line 1387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	static_assert(Builtin::TypeIs<Builtin::i32, IMultiplyOperators<Builtin::i32, Builtin::i32>>(), "i32 should implement IMultiplyOperators<i32, i32>");
#line 1388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	static_assert(Builtin::TypeIs<Builtin::i32, IDivisionOperators<Builtin::i32, Builtin::f64>>(), "i32 should implement IDivisionOperators<i32, f64>");
#line 1389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	static_assert(Builtin::TypeIs<Builtin::i32, IIntDivOperators<Builtin::i32, Builtin::i32>>(), "i32 should implement IIntDivOperators<i32, i32>");
#line 1390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	static_assert(Builtin::TypeIs<Builtin::i32, IModulusOperators<Builtin::i32, Builtin::i32>>(), "i32 should implement IModulusOperators<i32, i32>");
#line 1391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	static_assert(Builtin::TypeIs<Builtin::i32, IBitwiseOperators<Builtin::i32, Builtin::i32>>(), "i32 should implement IBitwiseOperators<i32, i32>");
#line 1392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	static_assert(Builtin::TypeIs<Builtin::i32, IShiftOperators<Builtin::i32, Builtin::i32>>(), "i32 should implement IShiftOperators<i32, i32>");
#line 1393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	static_assert(Builtin::TypeIs<Builtin::i32, IUnaryPlusOperators<Builtin::i32>>(), "i32 should implement IUnaryPlusOperators<i32>");
#line 1394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	static_assert(Builtin::TypeIs<Builtin::i32, IUnaryNegationOperators<Builtin::i32>>(), "i32 should implement IUnaryNegationOperators<i32>");
#line 1395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	static_assert(Builtin::TypeIs<Builtin::i32, IIncrementOperators<Builtin::i32>>(), "i32 should implement IIncrementOperators<i32>");
#line 1396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	static_assert(Builtin::TypeIs<Builtin::i32, IDecrementOperators<Builtin::i32>>(), "i32 should implement IDecrementOperators<i32>");
#line 1397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	static_assert(ADV_UFCS_NONLOCAL(_operator_add_mod)(ADV_USPCS(MaxValue, Builtin::i32)(), Builtin::i32(1)) == ADV_USPCS(MinValue, Builtin::i32)(), "i32.MaxValue +% 1i32 == i32.MinValue");
#line 1398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	static_assert(ADV_UFCS_NONLOCAL(_operator_add_or)(ADV_USPCS(MaxValue, Builtin::i32)(), Builtin::i32(1)) == ADV_USPCS(MaxValue, Builtin::i32)(), "i32.MaxValue +| 1i32 == i32.MaxValue");
#ifdef ADV_UNITTEST
	#line 1400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	static bool $Test_f2fa738630ebcb07 = [](){
		#line 1402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::i32 a = Builtin::i32(5); 
		#line 1405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a + Builtin::i8(10) == Builtin::i32(15)), "a+10i8==15");
		#line 1406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a + Builtin::u8(10U) == Builtin::i32(15)), "a+10u8==15");
		#line 1407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a + Builtin::i16(10) == Builtin::i32(15)), "a+10i16==15");
		#line 1408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a + Builtin::u16(10U) == Builtin::i32(15)), "a+10u16==15");
		#line 1409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a + Builtin::i32(10) == Builtin::i32(15)), "a+10i32==15");
		#line 1410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a + Builtin::u32(10U) == Builtin::i32(15)), "a+10u32==15");
		#line 1411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a + Builtin::i64(10LL) == Builtin::i32(15)), "a+10i64==15");
		#line 1412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a + Builtin::u64(10ULL) == Builtin::i32(15)), "a+10u64==15");
		#line 1413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a + Builtin::i128(10LL) == Builtin::i32(15)), "a+10i128==15");
		#line 1414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a + Builtin::u128(10ULL) == Builtin::i32(15)), "a+10u128==15");
		#line 1417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a - Builtin::i32(12) == Builtin::i32(-7)), "a-12==-7");
		#line 1418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a * Builtin::i32(2) == Builtin::i32(10)), "a*2==10");
		#line 1419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, Builtin::i32(2)) == Builtin::i32(2)), "a\\2==2");
		#line 1420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a % Builtin::i32(2) == Builtin::i32(1)), "a%2==1");
		#line 1421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT(((a & Builtin::i32(1)) == Builtin::i32(1)), "(a&1)==1");
		#line 1422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT(((a | Builtin::i32(1)) == Builtin::i32(5)), "(a|1)==5");
		#line 1423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT(((a ^ Builtin::i32(1)) == Builtin::i32(4)), "(a^1)==4");
		#line 1424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a << Builtin::i32(1) == Builtin::i32(10)), "a<<1==10");
		#line 1425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a >> Builtin::i32(1) == Builtin::i32(2)), "a>>1==2");
		#line 1426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a = Builtin::i32(-5);
		#line 1427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_UFCS(_operator_gt_gt_gt_eq)(a, Builtin::i32(2));
		#line 1428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a == Builtin::i32(0b00111111111111111111111111111110)), "a==0b00111111_11111111_11111111_11111110");
		#line 1429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_gt)(a, Builtin::i32(2)) == Builtin::i32(0b00001111111111111111111111111111)), "a>>>2==0b00001111_11111111_11111111_11111111");
		#line 1430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_gt)(a, Builtin::i32(7)) == Builtin::i32(0b00000000011111111111111111111111)), "a>>>7==0b00000000_01111111_11111111_11111111");
		#line 1433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a = Builtin::i32(5);
		#line 1434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a == Builtin::i32(5)), "a==5");
		#line 1435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a != Builtin::i32(6)), "a!=6");
		#line 1436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT(((a <=> Builtin::i32(6)) < 0), "a<6");
		#line 1437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT(((a <=> Builtin::i32(5)) <= 0), "a<=5");
		#line 1438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT(((a <=> Builtin::i32(4)) > 0), "a>4");
		#line 1439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT(((a <=> Builtin::i32(5)) >= 0), "a>=5");
		#line 1442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a = Builtin::i32(5);
		#line 1443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a++;
		#line 1444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a--;
		#line 1445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a += Builtin::i32(5);
		#line 1446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a -= Builtin::i32(5);
		#line 1447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a *= Builtin::i32(2);
		#line 1448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_UFCS(_operator_bsl_eq)(a, Builtin::i32(2));
		#line 1449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a %= Builtin::i32(1);
		#line 1450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a &= Builtin::i32(1);
		#line 1451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a |= Builtin::i32(1);
		#line 1452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a ^= Builtin::i32(1);
		#line 1453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a <<= Builtin::i32(1);
		#line 1454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a >>= Builtin::i32(1);
		#line 1455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a == Builtin::i32(0)), "a==0");
		#line 1456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a = Builtin::i32(10);
		#line 1457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_not)(a) == Builtin::i32(-11)), "~a==-11");
		#line 1460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::i32 b = Builtin::i32(5); 
		#line 1461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Nullable<Builtin::i32> c = nullptr; 
		#line 1462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Nullable<Builtin::i32> d = Builtin::i32(5); 
		#line 1463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a != b), "a!=b");
		#line 1464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((b != c), "b!=c");
		#line 1465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((!Builtin::IdentityEquals(b, c)), "b!==c");
		#line 1466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT(((b <=> c) > 0), "b>c");
		#line 1467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((c != b), "c!=b");
		#line 1468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((c == nullptr), "c==null");
		#line 1469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((d != nullptr), "d!=null");
		#line 1470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT(((c <=> d) < 0), "c<d");
		#line 1471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((b == d), "b==d");
		#line 1475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Nullable<Builtin::ObjectRef> o = c; 
		#line 1476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		o = d;
		#line 1477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_ne_eq_mul)(b, o)), "b!=*o");
		#line 1478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		IComparable<Builtin::i32> icomp = a; 
		#line 1479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT(((icomp <=> b) > 0), "icomp>b");
		#line 1482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(a.$ref()) == Builtin::i32(10)), "a.HashCode==10");
		#line 1483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(a) == Builtin::i32(10)), "#a==10");
		#line 1484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		b = Builtin::i32(-6);
		#line 1485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(b) == Builtin::u64(18446744073709551610ULL)), "#b==18446744073709551610u");
		#line 1487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(ToInt64)(b.$ref()) == Builtin::i32(-6)), "b.ToInt64()==-6");
		#line 1488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(NarrowToUInt64)(b.$ref()) == Builtin::u64(18446744073709551610ULL)), "b.NarrowToUInt64()==18446744073709551610u");
		#line 1491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(Abs)(b.$ref()) == Builtin::i32(6)), "b.Abs==6");
		#line 1492 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(CheckedAbs)(b.$ref()) == Builtin::i32(6)), "b.CheckedAbs==6");
		#line 1493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(CheckedAbs)(ADV_USPCS(MinValue, Builtin::i32)().$ref()) == nullptr), "i32.MinValue.CheckedAbs==null");
		#line 1494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(StrictAbs)(b.$ref()) == Builtin::i32(6)), "b.StrictAbs==6");
		#line 1495 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(WrappingAbs)(ADV_USPCS(MinValue, Builtin::i32)().$ref()) == ADV_USPCS(MinValue, Builtin::i32)()), "i32.MinValue.WrappingAbs==i32.MinValue");
		#line 1496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(SaturatingAbs)(ADV_USPCS(MinValue, Builtin::i32)().$ref()) == ADV_USPCS(MaxValue, Builtin::i32)()), "i32.MinValue.SaturatingAbs==i32.MaxValue");
		#line 1497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		{
			#line 1498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			const auto& [result, overflowed] = ADV_UPCS(OverflowingAbs)(ADV_USPCS(MinValue, Builtin::i32)().$ref());
			#line 1499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			ADV_ASSERT((result == ADV_USPCS(MinValue, Builtin::i32)() && overflowed), "result==i32.MinValue&&overflowed");
		}
		#line 1501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(IsFinite)(b.$ref())), "b.IsFinite");
		#line 1502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(IsInteger)(b.$ref())), "b.IsInteger");
		#line 1503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(IsNegative)(b.$ref())), "b.IsNegative");
		#line 1504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(IsPositive)(a.$ref())), "a.IsPositive");
		#line 1505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((!ADV_UPCS(IsPositive)(b.$ref())), "!b.IsPositive");
		#line 1506 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(IsCanonical)(b.$ref())), "b.IsCanonical");
		#line 1507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((!ADV_UPCS(IsComplexNumber)(b.$ref())), "!b.IsComplexNumber");
		#line 1508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(IsRealNumber)(b.$ref())), "b.IsRealNumber");
		#line 1509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((!ADV_UPCS(IsImaginaryNumber)(b.$ref())), "!b.IsImaginaryNumber");
		#line 1510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(IsEvenInteger)(b.$ref())), "b.IsEvenInteger");
		#line 1511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((!ADV_UPCS(IsOddInteger)(b.$ref())), "!b.IsOddInteger");
		#line 1512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((!ADV_UPCS(IsInfinity)(b.$ref())), "!b.IsInfinity");
		#line 1513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((!ADV_UPCS(IsPositiveInfinity)(b.$ref())), "!b.IsPositiveInfinity");
		#line 1514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((!ADV_UPCS(IsNegativeInfinity)(b.$ref())), "!b.IsNegativeInfinity");
		#line 1515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((!ADV_UPCS(IsNaN)(b.$ref())), "!b.IsNaN");
		#line 1516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(IsNormal)(b.$ref())), "b.IsNormal");
		#line 1517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((!ADV_UPCS(IsSubnormal)(b.$ref())), "!b.IsSubnormal");
		#line 1518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((!ADV_UPCS(IsZero)(b.$ref())), "!b.IsZero");
		#line 1521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(Sign)(a.$ref()) == +Builtin::i32(1)), "a.Sign==+1");
		#line 1522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(Sign)(b.$ref()) == Builtin::i32(-1)), "b.Sign==-1");
		#line 1523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(CopySign)(a.$ref(), b) == Builtin::i32(-10)), "a.CopySign(b)==-10");
		#line 1524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(Max)(a.$ref(), b) == a), "a.Max(b)==a");
		#line 1525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(Min)(a.$ref(), b) == b), "a.Min(b)==b");
		#line 1526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(MaxNumber)(a.$ref(), b) == a), "a.MaxNumber(b)==a");
		#line 1527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(MinNumber)(a.$ref(), b) == b), "a.MinNumber(b)==b");
		#line 1528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(Clamp)(b.$ref(), Builtin::i32(-5), +Builtin::i32(5)) == Builtin::i32(-5)), "b.Clamp(-5,+5)==-5");
		#line 1531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::i32(2).$ref()) == Builtin::i32(1)), "2i32.Log2==1");
		#line 1532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::i32(16).$ref()) == Builtin::i32(4)), "16i32.Log2==4");
		#line 1533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::i32(64).$ref()) == Builtin::i32(6)), "64i32.Log2==6");
		#line 1534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::i32(2000000000).$ref()) == Builtin::i32(30)), "2_000_000_000i32.Log2==30");
		#line 1535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::i32(2).$ref()) == Builtin::i32(1)), "2i32.Log2Ceiling==1");
		#line 1536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::i32(16).$ref()) == Builtin::i32(4)), "16i32.Log2Ceiling==4");
		#line 1537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::i32(65).$ref()) == Builtin::i32(7)), "65i32.Log2Ceiling==7");
		#line 1538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::i32(2000000000).$ref()) == Builtin::i32(31)), "2_000_000_000i32.Log2Ceiling==31");
		#line 1539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(CheckedLog2)(Builtin::i32(0).$ref()) == nullptr), "0i32.CheckedLog2==null");
		#line 1540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(Builtin::i32(5).$ref()) == Builtin::i32(0)), "5i32.Log10==0");
		#line 1541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(a.$ref()) == Builtin::i32(1)), "a.Log10==1");
		#line 1542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(ADV_USPCS(MaxValue, Builtin::i32)().$ref()) == Builtin::i32(9)), "i32.MaxValue.Log10==9");
		#line 1543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(Log)(Builtin::i32(5).$ref(), Builtin::i32(5)) == Builtin::i32(1)), "5i32.Log(5i32)==1");
		#line 1544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(CheckedLog)(Builtin::i32(5).$ref(), Builtin::i32(-5)) == nullptr), "5i32.CheckedLog(-5i32)==null");
		#line 1545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(Midpoint)(a.$ref(), Builtin::i32(30)) == Builtin::i32(20)), "a.Midpoint(30i32)==20");
		#line 1546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(Midpoint)(Builtin::i32(1000000000).$ref(), Builtin::i32(2000000000)) == Builtin::i32(1500000000)), "1_000_000_000i32.Midpoint(2_000_000_000)==1_500_000_000");
		#line 1547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)(a.$ref(), Builtin::i32(10)) == Builtin::i32(10)), "a.NextMultipleOf(10i32)==10");
		#line 1548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)(Builtin::i32(11).$ref(), Builtin::i32(10)) == Builtin::i32(20)), "11i32.NextMultipleOf(10i32)==20");
		#line 1549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)(Builtin::i32(1000000000).$ref(), Builtin::i32(8500)) == Builtin::i32(1000008000)), "1_000_000_000i32.NextMultipleOf(8500i32)==1_000_008_000");
		#line 1550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)((Builtin::i32(-13)).$ref(), Builtin::i32(4)) == Builtin::i32(-12)), "(-13i32).NextMultipleOf(4i32)==-12");
		#line 1551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)((Builtin::i32(-13)).$ref(), Builtin::i32(-4)) == Builtin::i32(-16)), "(-13i32).NextMultipleOf(-4i32)==-16");
		#line 1552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(ByteCount)(a.$ref()) == Builtin::i32(4)), "a.ByteCount==4");
		#line 1553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(ByteSwapped)(Builtin::i32(0x7b233d2a).$ref()) == Builtin::i32(0x2a3d237b)), "0x7b233d2a_i32.ByteSwapped==0x2a3d237b");
		#line 1554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_not)(Builtin::i32(0b1010), Builtin::i32(3)) == Builtin::i32(0b01010000)), "0b1010_i32<<~3==0b0101_0000");
		#line 1555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_not)(Builtin::i32(0b1010), Builtin::i32(5)) == Builtin::i32(0b101000000)), "0b1010_i32<<~5==0b1_0100_0000");
		#line 1556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_not)(Builtin::i32(0b1010), Builtin::i32(3)) == Builtin::i32(0b01000000000000000000000000000001)), "0b1010_i32>>~3==0b0100_0000_0000_0000_0000_0000_0000_0001");
		#line 1557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_not)(Builtin::i32(0b1010), Builtin::i32(5)) == Builtin::i32(0b01010000000000000000000000000000)), "0b1010_i32>>~5==0b0101_0000_0000_0000_0000_0000_0000_0000");
		#line 1559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(IsMultipleOf)(a.$ref(), Builtin::i32(5))), "a.IsMultipleOf(5)");
		#line 1560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((!ADV_UFCS(IsMultipleOf)(a.$ref(), Builtin::i32(6))), "!a.IsMultipleOf(6)");
		#line 1562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(MultiplyBy10)(a.$ref()) == Builtin::i32(100)), "a.MultiplyBy10==100");
		#line 1563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UPCS(MultiplyBy16)(a.$ref()) == Builtin::i32(160)), "a.MultiplyBy16==160");
		#line 1566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_qst)(a, Builtin::i32(100)) == Builtin::i32(110)), "a+?100i32==110");
		#line 1567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_qst)(a, ADV_USPCS(MaxValue, Builtin::i32)()) == nullptr), "a+?i32.MaxValue==null");
		#line 1568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_UFCS(_operator_add_qst_eq)(a, Builtin::i32(5));
		#line 1569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a == Builtin::i32(15)), "a==15");
		#line 1570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_UFCS(_operator_add_qst_eq)(a, ADV_USPCS(MaxValue, Builtin::i32)());
		#line 1571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a == Builtin::i32(15)), "a==15");
		#line 1572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_ne)(a, Builtin::i32(100)) == Builtin::i32(115)), "a+!100i32==115");
		#line 1573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_mod)(a, Builtin::i32(100)) == Builtin::i32(115)), "a+%100i32==115");
		#line 1574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_mod)(a, Builtin::i32(2147483633)) == ADV_USPCS(MinValue, Builtin::i32)()), "a+%2_147_483_633i32==i32.MinValue");
		#line 1575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_UFCS(_operator_add_mod_eq)(a, ADV_USPCS(MaxValue, Builtin::i32)());
		#line 1576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a == Builtin::i32(-2147483634)), "a==-2147483634");
		#line 1577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_or)(a, (Builtin::i32(-32760))) == ADV_USPCS(MinValue, Builtin::i32)()), "a+|(-32760i32)==i32.MinValue");
		#line 1578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_UFCS(_operator_add_or_eq)(a, ADV_USPCS(MaxValue, Builtin::i32)());
		#line 1579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a == Builtin::i32(13)), "a==13");
		#line 1580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_or)(a, Builtin::i32(2147483640)) == ADV_USPCS(MaxValue, Builtin::i32)()), "a+|2147483640i32==i32.MaxValue");
		#line 1581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		{
			#line 1582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_add_mod_qst)(a, Builtin::i32(2147483640));
			#line 1583 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			ADV_ASSERT((result == Builtin::i32(-2147483643) && overflowed), "result==-2147483643&&overflowed");
		}
		#line 1586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a = ADV_USPCS(MaxValue, Builtin::i32)() - Builtin::i32(1);
		#line 1587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_add_qst_postfix)(a) == ADV_USPCS(MaxValue, Builtin::i32)() - Builtin::i32(1)), "a++?==i32.MaxValue-1");
		#line 1588 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::i32)()), "a==i32.MaxValue");
		#line 1589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_UFCS(_operator_add_add_mod_postfix)(a);
		#line 1590 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::i32)()), "a==i32.MinValue");
		#line 1591 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a = ADV_USPCS(MaxValue, Builtin::i32)();
		#line 1592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_UFCS(_operator_add_add_or_postfix)(a);
		#line 1593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::i32)()), "a==i32.MaxValue");
		#line 1595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		{
			#line 1596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.$ref(), Builtin::i32(0), Builtin::Boolean(false));
			#line 1597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			ADV_ASSERT((result == ADV_USPCS(MaxValue, Builtin::i32)() && !overflowed), "result==i32.MaxValue&&!overflowed");
		}
		#line 1599 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		{
			#line 1600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.$ref(), Builtin::i32(-5), Builtin::Boolean(true));
			#line 1601 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			ADV_ASSERT((result == Builtin::i32(2147483643) && !overflowed), "result==2147483643&&!overflowed");
		}
		#line 1603 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		{
			#line 1604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.$ref(), Builtin::i32(0), Builtin::Boolean(true));
			#line 1605 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			ADV_ASSERT((result == ADV_USPCS(MinValue, Builtin::i32)() && overflowed), "result==i32.MinValue&&overflowed");
		}
		#line 1607 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		{
			#line 1608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.$ref(), Builtin::i32(10), Builtin::Boolean(true));
			#line 1609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			ADV_ASSERT((result == Builtin::i32(-2147483638) && overflowed), "result==-2147483638&&overflowed");
		}
		#line 1612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_qst)(a, Builtin::i32(1000000000)) == Builtin::i32(1147483647)), "a-?1_000_000_000i32==1147483647");
		#line 1613 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_qst)(-a, ADV_USPCS(MaxValue, Builtin::i32)()) == nullptr), "-a-?i32.MaxValue==null");
		#line 1614 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_UFCS(_operator_sub_qst_eq)(a, Builtin::i32(1000000000));
		#line 1615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a == Builtin::i32(1147483647)), "a==1147483647");
		#line 1616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_UFCS(_operator_sub_qst_eq)(a, Builtin::i32(1));
		#line 1617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a == Builtin::i32(1147483646)), "a==1147483646");
		#line 1618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_ne)(a, Builtin::i32(1000000000)) == Builtin::i32(147483646)), "a-!1000000000i32==147483646");
		#line 1619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_mod)(-a, Builtin::i32(1000000003)) == ADV_USPCS(MaxValue, Builtin::i32)()), "-a-%1_000_000_003i32==i32.MaxValue");
		#line 1620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_mod)(a, Builtin::i32(10000000)) == Builtin::i32(1137483646)), "a-%10000000i32==1_137_483_646");
		#line 1621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_UFCS(_operator_sub_mod_eq)(a, ADV_USPCS(MaxValue, Builtin::i32)());
		#line 1622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a == Builtin::i32(-1000000001)), "a==-1_000_000_001");
		#line 1623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_or)(a, Builtin::i32(2000000000)) == ADV_USPCS(MinValue, Builtin::i32)()), "a-|2_000_000_000i32==i32.MinValue");
		#line 1624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_UFCS(_operator_sub_or_eq)(a, ADV_USPCS(MaxValue, Builtin::i32)());
		#line 1625 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::i32)()), "a==i32.MinValue");
		#line 1626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		{
			#line 1627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_sub_mod_qst)(a, Builtin::i32(2000000000));
			#line 1628 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			ADV_ASSERT((result == Builtin::i32(147483648) && overflowed), "result==147483648&&overflowed");
		}
		#line 1631 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a = ADV_USPCS(MinValue, Builtin::i32)() + Builtin::i32(1);
		#line 1632 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_sub_qst_postfix)(a) == ADV_USPCS(MinValue, Builtin::i32)() + Builtin::i32(1)), "a--?==i32.MinValue+1");
		#line 1633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::i32)()), "a==i32.MinValue");
		#line 1634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_UFCS(_operator_sub_sub_mod_postfix)(a);
		#line 1635 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::i32)()), "a==i32.MaxValue");
		#line 1636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a = ADV_USPCS(MinValue, Builtin::i32)();
		#line 1637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_UFCS(_operator_sub_sub_or_postfix)(a);
		#line 1638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::i32)()), "a==i32.MinValue");
		#line 1640 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		{
			#line 1641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.$ref(), Builtin::i32(0), Builtin::Boolean(false));
			#line 1642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			ADV_ASSERT((result == ADV_USPCS(MinValue, Builtin::i32)() && !overflowed), "result==i32.MinValue&&!overflowed");
		}
		#line 1644 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		{
			#line 1645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.$ref(), Builtin::i32(-5), Builtin::Boolean(true));
			#line 1646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			ADV_ASSERT((result == Builtin::i32(-2147483644) && !overflowed), "result==-2147483644&&!overflowed");
		}
		#line 1648 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		{
			#line 1649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.$ref(), Builtin::i32(0), Builtin::Boolean(true));
			#line 1650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			ADV_ASSERT((result == ADV_USPCS(MaxValue, Builtin::i32)() && overflowed), "result==i32.MaxValue&&overflowed");
		}
		#line 1652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		{
			#line 1653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.$ref(), Builtin::i32(10), Builtin::Boolean(true));
			#line 1654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			ADV_ASSERT((result == Builtin::i32(2147483637) && overflowed), "result==2147483637&&overflowed");
		}
		#line 1657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_qst)(a, Builtin::i32(1)) == ADV_USPCS(MinValue, Builtin::i32)()), "a*?1i32==i32.MinValue");
		#line 1658 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_qst)(a, Builtin::i32(2)) == nullptr), "a*?2i32==null");
		#line 1659 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_UFCS(_operator_mul_qst_eq)(a, Builtin::i32(5));
		#line 1660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::i32)()), "a==i32.MinValue");
		#line 1661 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a = Builtin::i32(150000);
		#line 1662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a == Builtin::i32(150000)), "a==150000");
		#line 1663 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_ne)(a, Builtin::i32(3)) == Builtin::i32(450000)), "a*!3i32==450000");
		#line 1664 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_mod)(a, Builtin::i32(6)) == Builtin::i32(900000)), "a*%6i32==900000");
		#line 1665 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_mod)(a, Builtin::i32(15000)) == Builtin::i32(-2044967296)), "a*%15000i32==-2_044_967_296");
		#line 1666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_UFCS(_operator_mul_mod_eq)(a, Builtin::i32(6));
		#line 1667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a == Builtin::i32(900000)), "a==900000");
		#line 1668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_or)(a, (Builtin::i32(-10000))) == ADV_USPCS(MinValue, Builtin::i32)()), "a*|(-10000i32)==i32.MinValue");
		#line 1669 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_UFCS(_operator_mul_or_eq)(a, Builtin::i32(10000));
		#line 1670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::i32)()), "a==i32.MaxValue");
		#line 1671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_or)(a, Builtin::i32(2)) == ADV_USPCS(MaxValue, Builtin::i32)()), "a*|2i32==i32.MaxValue");
		#line 1672 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		{
			#line 1673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_mul_mod_qst)(a, Builtin::i32(2));
			#line 1674 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			ADV_ASSERT((result == Builtin::i32(-2) && overflowed), "result==-2&&overflowed");
		}
		#line 1676 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a = Builtin::i32(150000);
		#line 1677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		{
			#line 1678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			const auto& [low, high] = ADV_UFCS(_operator_mul_gt)(a, (Builtin::i32(35000)));
			#line 1679 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			ADV_ASSERT((low == Builtin::i32(955032704) && high == Builtin::i32(1)), "low==955032704&&high==1");
		}
		#line 1681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		{
			#line 1682 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			const auto& [low, high] = ADV_UFCS(_operator_mul_gt)(a, (Builtin::i32(-35000)));
			#line 1683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			ADV_ASSERT((low == Builtin::i64(3339934592LL) && high == Builtin::i32(-2)), "low==3339934592&&high==-2");
		}
		#line 1685 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a = ADV_USPCS(MaxValue, Builtin::i32)();
		#line 1686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		{
			#line 1687 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			const auto& [low, high] = ADV_UFCS(CarryingMul)(a.$ref(), Builtin::i32(2), Builtin::i32(12));
			#line 1688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			ADV_ASSERT((low == Builtin::i32(10) && high == Builtin::i32(1)), "low==10&&high==1");
		}
		#line 1690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		{
			#line 1691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			const auto& [low, high] = ADV_UFCS(CarryingMul)(a.$ref(), Builtin::i32(-2), Builtin::i32(-12));
			#line 1692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			ADV_ASSERT((low == Builtin::i64(4294967286LL) && high == Builtin::i32(-2)), "low==4294967286&&high==-2");
		}
		#line 1695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a = Builtin::i32(100000);
		#line 1696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, Builtin::i32(600)) == Builtin::i32(166)), "a\\600==166");
		#line 1697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a /= Builtin::i32(600);
		#line 1698 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a == Builtin::i32(167)), "a==167");
		#line 1699 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a = Builtin::i32(100000);
		#line 1700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		{
			#line 1701 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)(a, Builtin::i32(600));
			#line 1702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			ADV_ASSERT((div == Builtin::i32(166) && rem == Builtin::i32(400)), "div==166&&rem==400");
		}
		#line 1704 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_qst)(a, Builtin::i32(5)) == Builtin::i32(20000)), "a\\?5==20000");
		#line 1705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_qst)(a, Builtin::i32(0)) == nullptr), "a\\?0==null");
		#line 1706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_qst)(ADV_USPCS(MinValue, Builtin::i32)(), (Builtin::i32(-1))) == nullptr), "i32.MinValue\\?(-1)==null");
		#line 1708 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_ne)(a, Builtin::i32(5)) == Builtin::i32(20000)), "a\\!5==20000");
		#line 1709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_UFCS(_operator_bsl_mod_eq)(a, Builtin::i32(5));
		#line 1710 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a == Builtin::i32(20000)), "a==20000");
		#line 1711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a = Builtin::i32(10);
		#line 1712 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_mod)(ADV_USPCS(MinValue, Builtin::i32)(), (Builtin::i32(-1))) == ADV_USPCS(MinValue, Builtin::i32)()), "i32.MinValue\\%(-1)==i32.MinValue");
		#line 1713 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_UFCS(_operator_bsl_or_eq)(a, Builtin::i32(5));
		#line 1714 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a == Builtin::i32(2)), "a==2");
		#line 1715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a = Builtin::i32(100000);
		#line 1716 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_or)(ADV_USPCS(MinValue, Builtin::i32)(), (Builtin::i32(-1))) == ADV_USPCS(MaxValue, Builtin::i32)()), "i32.MinValue\\|(-1)==i32.MaxValue");
		#line 1717 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		{
			#line 1718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_bsl_mod_qst)(ADV_USPCS(MinValue, Builtin::i32)(), (Builtin::i32(-1)));
			#line 1719 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			ADV_ASSERT((result == ADV_USPCS(MinValue, Builtin::i32)() && overflowed), "result==i32.MinValue&&overflowed");
		}
		#line 1722 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_bsl)(a, Builtin::i32(500)) == Builtin::i32(200)), "a\\\\500==200");
		#line 1723 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_bsl)(a, Builtin::i32(6)) == nullptr), "a\\\\6==null");
		#line 1724 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_bsl_qst)(a, Builtin::i32(0)) == nullptr), "a\\\\?0==null");
		#line 1726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_not)(a, Builtin::i32(600)) == Builtin::i32(167)), "a/~600==167");
		#line 1727 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_lt)(a, Builtin::i32(600)) == Builtin::i32(166)), "a/<600==166");
		#line 1728 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_gt)(a, Builtin::i32(600)) == Builtin::i32(167)), "a/>600==167");
		#line 1729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_not)(a, (Builtin::i32(-600))) == Builtin::i32(-167)), "a/~(-600)==-167");
		#line 1730 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_lt)(a, (Builtin::i32(-600))) == Builtin::i32(-167)), "a/<(-600)==-167");
		#line 1731 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_gt)(a, (Builtin::i32(-600))) == Builtin::i32(-166)), "a/>(-600)==-166");
		#line 1732 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_lt)((Builtin::i32(-7)), Builtin::i32(5)) == Builtin::i32(3)), "(-7)%<5==3");
		#line 1734 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_qst)(a, Builtin::i32(500)) == Builtin::i32(0)), "a%?500==0");
		#line 1735 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_qst)(a, Builtin::i32(0)) == nullptr), "a%?0==null");
		#line 1736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_qst)(ADV_USPCS(MinValue, Builtin::i32)(), (Builtin::i32(-1))) == nullptr), "i32.MinValue%?(-1)==null");
		#line 1738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_ne)(a, Builtin::i32(600)) == Builtin::i32(400)), "a%!600==400");
		#line 1739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_UFCS(_operator_mod_mod_eq)(a, Builtin::i32(600));
		#line 1740 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a == Builtin::i32(400)), "a==400");
		#line 1741 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a = Builtin::i32(10);
		#line 1742 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_mod)(ADV_USPCS(MinValue, Builtin::i32)(), (Builtin::i32(-1))) == Builtin::i32(0)), "i32.MinValue%%(-1)==0");
		#line 1743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		{
			#line 1744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_mod_mod_qst)(ADV_USPCS(MinValue, Builtin::i32)(), (Builtin::i32(-1)));
			#line 1745 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			ADV_ASSERT((result == Builtin::i32(0) && overflowed), "result==0&&overflowed");
		}
		#line 1748 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_qst)(a) == Builtin::i32(-10)), "-?a==-10");
		#line 1749 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_qst)(ADV_USPCS(MinValue, Builtin::i32)()) == nullptr), "-?i32.MinValue==null");
		#line 1750 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_ne)(a) == Builtin::i32(-10)), "-!a==-10");
		#line 1751 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_mod)(a) == Builtin::i32(-10)), "-%a==-10");
		#line 1752 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_mod)(ADV_USPCS(MinValue, Builtin::i32)()) == ADV_USPCS(MinValue, Builtin::i32)()), "-%i32.MinValue==i32.MinValue");
		#line 1753 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_or)(a) == Builtin::i32(-10)), "-|a==-10");
		#line 1754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_or)(ADV_USPCS(MinValue, Builtin::i32)()) == ADV_USPCS(MaxValue, Builtin::i32)()), "-|i32.MinValue==i32.MaxValue");
		#line 1756 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_bsl)(ADV_USPCS(MaxValue, Builtin::i32)(), Builtin::u32(4U)) == Builtin::i32(0b00000111111111111111111111111111)), "i32.MaxValue>>\\4u==0b0000_0111_1111_1111_1111_1111_1111_1111");
		#line 1757 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_bsl)(ADV_USPCS(MaxValue, Builtin::i32)(), Builtin::u32(36U)) == Builtin::i32(0)), "i32.MaxValue>>\\36u==0");
		#line 1758 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_bsl)(ADV_USPCS(MinValue, Builtin::i32)(), Builtin::u32(36U)) == Builtin::i32(-1)), "i32.MinValue>>\\36u==-1");
		#line 1759 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_bsl)(ADV_USPCS(MaxValue, Builtin::i32)(), Builtin::u32(36U)) == Builtin::i32(0)), "i32.MaxValue<<\\36u==0");
		#line 1760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_qst)(ADV_USPCS(MaxValue, Builtin::i32)(), Builtin::i32(4)) == Builtin::i32(0b00000111111111111111111111111111)), "i32.MaxValue>>?4==0b0000_0111_1111_1111_1111_1111_1111_1111");
		#line 1761 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_qst)(ADV_USPCS(MaxValue, Builtin::i32)(), Builtin::i32(36)) == nullptr), "i32.MaxValue>>?36==null");
		#line 1762 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_qst)(ADV_USPCS(MaxValue, Builtin::i32)(), Builtin::i32(36)) == nullptr), "i32.MaxValue<<?36==null");
		#line 1763 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_ne)(ADV_USPCS(MaxValue, Builtin::i32)(), Builtin::i32(4)) == Builtin::i32(0b00000111111111111111111111111111)), "i32.MaxValue>>!4==0b0000_0111_1111_1111_1111_1111_1111_1111");
		#line 1764 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_mod)(ADV_USPCS(MaxValue, Builtin::i32)(), Builtin::i32(36)) == Builtin::i32(0b00000111111111111111111111111111)), "i32.MaxValue>>%36==0b0000_0111_1111_1111_1111_1111_1111_1111");
		#line 1765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a = ADV_USPCS(MaxValue, Builtin::i32)();
		#line 1766 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_UFCS(_operator_gt_gt_mod_eq)(a, Builtin::i32(36));
		#line 1767 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_mod)(a, Builtin::i32(36)) == Builtin::i32(0b01111111111111111111111111110000)), "a<<%36==0b0111_1111_1111_1111_1111_1111_1111_0000");
		#line 1768 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		{
			#line 1769 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_gt_gt_mod_qst)(ADV_USPCS(MaxValue, Builtin::i32)(), Builtin::i32(36));
			#line 1770 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			ADV_ASSERT((result == Builtin::i32(0b00000111111111111111111111111111) && overflowed), "result==0b0000_0111_1111_1111_1111_1111_1111_1111&&overflowed");
		}
		#line 1774 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a = Builtin::i32(1500);
		#line 1775 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor)(a, Builtin::u32(2U)) == Builtin::i32(2250000)), "a^^2u==2250000");
		#line 1776 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_UFCS(_operator_xor_xor_eq)(a, Builtin::u32(2U));
		#line 1777 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a == Builtin::i32(2250000)), "a==2250000");
		#line 1778 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor)(Builtin::i32(300), Builtin::u32(3U)) == Builtin::i32(27000000)), "300i32^^3u==27000000");
		#line 1779 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_qst)(Builtin::i32(300), Builtin::u32(3U)) == Builtin::i32(27000000)), "300i32^^?3u==27000000");
		#line 1780 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_qst)(Builtin::i32(300), Builtin::u32(4U)) == nullptr), "300i32^^?4u==null");
		#line 1781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_UFCS(_operator_xor_xor_qst_eq)(a, Builtin::u32(2U));
		#line 1782 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a == Builtin::i32(2250000)), "a==2250000");
		#line 1783 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_ne)(Builtin::i32(300), Builtin::u32(3U)) == Builtin::i32(27000000)), "300i32^^!3u==27000000");
		#line 1784 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_mod)(Builtin::i32(300), Builtin::u32(4U)) == Builtin::i32(-489934592)), "300i32^^%4u==-489934592");
		#line 1785 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		a = Builtin::i32(300);
		#line 1786 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_UFCS(_operator_xor_xor_mod_eq)(a, Builtin::u32(2U));
		#line 1787 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((a == Builtin::i32(90000)), "a==90000");
		#line 1788 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_or)(Builtin::i32(300), Builtin::u32(3U)) == Builtin::i32(27000000)), "300i32^^|3u==27000000");
		#line 1789 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_or)(Builtin::i32(300), Builtin::u32(4U)) == ADV_USPCS(MaxValue, Builtin::i32)()), "300i32^^|4u==i32.MaxValue");
		#line 1790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		{
			#line 1791 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_xor_xor_mod_qst)(Builtin::i32(300), Builtin::u32(4U));
			#line 1792 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			ADV_ASSERT((result == Builtin::i32(-489934592) && overflowed), "result==-489934592&&overflowed");
		}
		return true;
	}();
	#endif	
} namespace $extensions { using namespace System;
#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	auto _operator_eq_eq_mul($extension_Int32_19_i32 const& $this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool
	{
		#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		{
			#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			auto __tmp0 = Builtin::Cast<false, $extension_Int32_19_i32>(obj);
			#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			if ((__tmp0.IsValid())) {
				#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				const auto& obj = *__tmp0;
				
				#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				return $this == obj;
			}
		}
		#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return Builtin::Boolean(false);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	auto _operator_lt_eq_gt_mul($extension_Int32_72_i32 const& $this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32
	{
		#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		{
			#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			auto __tmp0 = Builtin::Cast<false, $extension_Int32_72_i32>(obj);
			#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			if ((__tmp0.IsValid())) {
				#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				const auto& obj = *__tmp0;
				
				#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				return $this <=> obj;
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
} namespace $extensions { using namespace System;
#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	auto MaxMagnitude($extension_Int32_272_i32 const& $this LIFETIMEBOUND, $extension_Int32_272_i32 rhs) noexcept -> const typename $extension_Int32_272_i32
	{
		#line 298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Auto<decltype($this)> absX = $this; 
		#line 299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((absX <=> Builtin::i32(0)) < 0) {
			#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			absX = -absX;
			#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			if ((absX <=> Builtin::i32(0)) < 0) {
				#line 302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				return $this;
			}
		}
		#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Auto<decltype(rhs)> absY = rhs; 
		#line 307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((absY <=> Builtin::i32(0)) < 0) {
			#line 308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			absY = -absY;
			#line 309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			if ((absY <=> Builtin::i32(0)) < 0) {
				#line 310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				return rhs;
			}
		}
		#line 314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((absX <=> absY) > 0) {
			#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return $this;
		}
		#line 318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (absX == absY) {
			#line 319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return ADV_UPCS(IsNegative)($this.$ref()) ? rhs : $this;
		}
		#line 322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return rhs;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	auto MinMagnitude($extension_Int32_272_i32 const& $this LIFETIMEBOUND, $extension_Int32_272_i32 rhs) noexcept -> const typename $extension_Int32_272_i32
	{
		#line 329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Auto<decltype($this)> absX = $this; 
		#line 330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((absX <=> Builtin::i32(0)) < 0) {
			#line 331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			absX = -absX;
			#line 332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			if ((absX <=> Builtin::i32(0)) < 0) {
				#line 333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				return rhs;
			}
		}
		#line 337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Auto<decltype(rhs)> absY = rhs; 
		#line 338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((absY <=> Builtin::i32(0)) < 0) {
			#line 339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			absY = -absY;
			#line 340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			if ((absY <=> Builtin::i32(0)) < 0) {
				#line 341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				return $this;
			}
		}
		#line 345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((absX <=> absY) < 0) {
			#line 346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return $this;
		}
		#line 349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (absX == absY) {
			#line 350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return ADV_UPCS(IsNegative)($this.$ref()) ? $this : rhs;
		}
		#line 353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return rhs;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	auto Parse($extension_Int32_272_i32 const& $this LIFETIMEBOUND, Builtin::Str input)  -> const typename $extension_Int32_272_i32
	{
		#line 360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return Builtin::i32(0);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	auto TryParse($extension_Int32_272_i32 const& $this LIFETIMEBOUND, Builtin::Str input) noexcept -> const Builtin::Nullable<$extension_Int32_272_i32>
	{
		#line 365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return Builtin::i32(0);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	auto CopySign($extension_Int32_388_i32 const& $this LIFETIMEBOUND, $extension_Int32_388_i32 sign)  -> const typename $extension_Int32_388_i32
	{
		#line 393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Auto<decltype($this)> absValue = $this; 
		#line 394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((absValue <=> Builtin::i32(0)) < 0) {
			#line 395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			absValue = -absValue;
		}
		#line 398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if ((sign <=> Builtin::i32(0)) >= 0) {
			#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			if ((absValue <=> Builtin::i32(0)) < 0) {
				#line 400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				Builtin::Throw(Builtin::IntegerOverflowException{});
			}
			#line 403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return absValue;
		}
		#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return -absValue;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	auto Log($extension_Int32_416_i32 const& $this LIFETIMEBOUND, $extension_Int32_416_i32 base)  -> const typename $extension_Int32_416_i32
	{
		#line 510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (const auto result = ADV_UFCS(CheckedLog)($this.$ref(), base)) {
			{
				#line 510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
				return result;
			}
		}
		#line 513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
	auto getCheckedIsqrt($extension_Int32_1197_i32 const & $this ) -> const Builtin::Nullable<$extension_Int32_1197_i32>
	{
		#line 1208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		if (ADV_UPCS(IsNegative)($this.$ref())) {
			#line 1209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
			return nullptr;
		}
		#line 1211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		constexpr Builtin::Auto<decltype(Builtin::Cast<true, $extension_Int32_1197_i32>(ADV_USFCS((Math), Isqrt32)(Builtin::Cast<true, Builtin::u32>(ADV_USPCS(MaxValue, $extension_Int32_1197_i32)()))))> MAX_RESULT = Builtin::Cast<true, $extension_Int32_1197_i32>(ADV_USFCS((Math), Isqrt32)(Builtin::Cast<true, Builtin::u32>(ADV_USPCS(MaxValue, $extension_Int32_1197_i32)())));
		#line 1212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, $extension_Int32_1197_i32>(ADV_USFCS((Math), Isqrt32)(Builtin::Cast<true, Builtin::u32>($this))))> result = Builtin::Cast<true, $extension_Int32_1197_i32>(ADV_USFCS((Math), Isqrt32)(Builtin::Cast<true, Builtin::u32>($this))); 
		#line 1213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ASSUME((result <=> Builtin::i32(0)) >= 0);
		#line 1214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		ASSUME((result <=> MAX_RESULT) <= 0);
		#line 1215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int32.ast"
		return result;
	}
	} namespace System{

}