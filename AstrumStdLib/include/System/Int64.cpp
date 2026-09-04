#include "Int64.h"
#include "Math.h"

namespace System {
//###############################################################################
//# Global type aliases
//###############################################################################
//###############################################################################
//# Type definitions
//###############################################################################

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
















#line 1391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	static_assert(Builtin::usize(sizeof(Builtin::i64)) == Builtin::i32(8), "i64 should be 8 bytes");
#line 1392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	static_assert(ADV_USPCS(MinValue, Builtin::i64)() == Builtin::i64(-9223372036854775807LL - 1), "i64.Min should be -9223372036854775808");
#line 1393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	static_assert(ADV_USPCS(MaxValue, Builtin::i64)() == Builtin::i64(0x7FFFFFFFFFFFFFFFLL), "i64.Max should be 0x7FFFFFFFFFFFFFFF");
#line 1394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	static_assert(ADV_UFCS_NONLOCAL(_operator_gt_gt_not)(ADV_USPCS(One, Builtin::i64)(), Builtin::i32(3)) == Builtin::i64(0x2000000000000000LL), "i64.One >>% 3 == 0x20_00_00_00_00_00_00_00");
#line 1395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	static_assert(ADV_USPCS(IsSigned, Builtin::i64)(), "i64 must be signed");
#line 1396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	static_assert(ADV_USPCS(MaxDigitCount, Builtin::i64)() == Builtin::i32(19), "i64 max digit count must be 19");
#line 1397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	static_assert(ADV_UFCS_NONLOCAL(_operator_xor_xor)(Builtin::i64(2LL), Builtin::u32(62U)) == Builtin::i64(4611686018427387904LL), "2i64 ^^ 62u == 4_611_686_018_427_387_904");
#line 1398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	static_assert(ADV_UPCS_NONLOCAL(ByteSwapped)(Builtin::i64(0x7b233d2a39fea339LL).$ref()) == Builtin::i64(0x39a3fe392a3d237bLL), "0x7b233d2a39fea339_i64.ByteSwapped == 0x39a3fe392a3d237b");
#line 1399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	static_assert(Builtin::TypeIs<Builtin::i64, IComparable<Builtin::i64>>(), "i64 should implement IComparable<i64>");
#line 1400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	static_assert(Builtin::TypeIs<Builtin::i64, IEquatable<Builtin::i64>>(), "i64 should implement IEquatable<i64>");
#line 1401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	static_assert(Builtin::TypeIs<Builtin::i64, ISelfComparable>(), "i64 should implement ISelfComparable");
#line 1402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	static_assert(Builtin::TypeIs<Builtin::i64, ISelfEquatable>(), "i64 should implement ISelfEquatable");
#line 1403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	static_assert(Builtin::TypeIs<Builtin::i64, IAdditionOperators<Builtin::i64, Builtin::i64>>(), "i64 should implement IAdditionOperators<i64, i64>");
#line 1404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	static_assert(Builtin::TypeIs<Builtin::i64, ISubtractionOperators<Builtin::i64, Builtin::i64>>(), "i64 should implement ISubtractionOperators<i64, i64>");
#line 1405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	static_assert(Builtin::TypeIs<Builtin::i64, IMultiplyOperators<Builtin::i64, Builtin::i64>>(), "i64 should implement IMultiplyOperators<i64, i64>");
#line 1406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	static_assert(Builtin::TypeIs<Builtin::i64, IDivisionOperators<Builtin::i64, Builtin::f64>>(), "i64 should implement IDivisionOperators<i64, f64>");
#line 1407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	static_assert(Builtin::TypeIs<Builtin::i64, IIntDivOperators<Builtin::i64, Builtin::i64>>(), "i64 should implement IIntDivOperators<i64, i64>");
#line 1408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	static_assert(Builtin::TypeIs<Builtin::i64, IModulusOperators<Builtin::i64, Builtin::i64>>(), "i64 should implement IModulusOperators<i64, i64>");
#line 1409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	static_assert(Builtin::TypeIs<Builtin::i64, IBitwiseOperators<Builtin::i64, Builtin::i64>>(), "i64 should implement IBitwiseOperators<i64, i64>");
#line 1410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	static_assert(Builtin::TypeIs<Builtin::i64, IShiftOperators<Builtin::i32, Builtin::i64>>(), "i64 should implement IShiftOperators<i32, i64>");
#line 1411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	static_assert(Builtin::TypeIs<Builtin::i64, IUnaryPlusOperators<Builtin::i64>>(), "i64 should implement IUnaryPlusOperators<i64>");
#line 1412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	static_assert(Builtin::TypeIs<Builtin::i64, IUnaryNegationOperators<Builtin::i64>>(), "i64 should implement IUnaryNegationOperators<i64>");
#line 1413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	static_assert(Builtin::TypeIs<Builtin::i64, IIncrementOperators<Builtin::i64>>(), "i64 should implement IIncrementOperators<i64>");
#line 1414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	static_assert(Builtin::TypeIs<Builtin::i64, IDecrementOperators<Builtin::i64>>(), "i64 should implement IDecrementOperators<i64>");
#line 1415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	static_assert(ADV_UFCS_NONLOCAL(_operator_add_mod)(ADV_USPCS(MaxValue, Builtin::i64)(), Builtin::i64(1LL)) == ADV_USPCS(MinValue, Builtin::i64)(), "i64.MaxValue +% 1i64 == i64.MinValue");
#line 1416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	static_assert(ADV_UFCS_NONLOCAL(_operator_add_or)(ADV_USPCS(MaxValue, Builtin::i64)(), Builtin::i64(1LL)) == ADV_USPCS(MaxValue, Builtin::i64)(), "i64.MaxValue +| 1i64 == i64.MaxValue");
#ifdef ADV_UNITTEST
	#line 1418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	static bool $Test_c7bf748618752b72 = [](){
		#line 1420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::i64 a = Builtin::i32(5); 
		#line 1423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a + Builtin::i8(10) == Builtin::i32(15)), "a+10i8==15");
		#line 1424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a + Builtin::u8(10U) == Builtin::i32(15)), "a+10u8==15");
		#line 1425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a + Builtin::i16(10) == Builtin::i32(15)), "a+10i16==15");
		#line 1426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a + Builtin::u16(10U) == Builtin::i32(15)), "a+10u16==15");
		#line 1427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a + Builtin::i64(10LL) == Builtin::i32(15)), "a+10i64==15");
		#line 1428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a + Builtin::u32(10U) == Builtin::i32(15)), "a+10u32==15");
		#line 1429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a + Builtin::i64(10LL) == Builtin::i32(15)), "a+10i64==15");
		#line 1430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a + Builtin::u64(10ULL) == Builtin::i32(15)), "a+10u64==15");
		#line 1431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a + Builtin::i128(10LL) == Builtin::i32(15)), "a+10i128==15");
		#line 1432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a + Builtin::u128(10ULL) == Builtin::i32(15)), "a+10u128==15");
		#line 1435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a - Builtin::i32(12) == Builtin::i32(-7)), "a-12==-7");
		#line 1436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a * Builtin::i32(2) == Builtin::i32(10)), "a*2==10");
		#line 1437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, Builtin::i32(2)) == Builtin::i32(2)), "a\\2==2");
		#line 1438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a % Builtin::i32(2) == Builtin::i32(1)), "a%2==1");
		#line 1439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT(((a & Builtin::i32(1)) == Builtin::i32(1)), "(a&1)==1");
		#line 1440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT(((a | Builtin::i32(1)) == Builtin::i32(5)), "(a|1)==5");
		#line 1441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT(((a ^ Builtin::i32(1)) == Builtin::i32(4)), "(a^1)==4");
		#line 1442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a << Builtin::i32(1) == Builtin::i32(10)), "a<<1==10");
		#line 1443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a >> Builtin::i32(1) == Builtin::i32(2)), "a>>1==2");
		#line 1444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a = Builtin::i32(-5);
		#line 1445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_UFCS(_operator_gt_gt_gt_eq)(a, Builtin::i32(2));
		#line 1446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a == Builtin::i64(0b0011111111111111111111111111111111111111111111111111111111111110LL)), "a==0b00111111_11111111_11111111_11111111_11111111_11111111_11111111_11111110");
		#line 1447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_gt)(a, Builtin::i32(2)) == Builtin::i64(0b0000111111111111111111111111111111111111111111111111111111111111LL)), "a>>>2==0b00001111_11111111_11111111_11111111_11111111_11111111_11111111_11111111");
		#line 1448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_gt)(a, Builtin::i32(7)) == Builtin::i64(0b0000000001111111111111111111111111111111111111111111111111111111LL)), "a>>>7==0b00000000_01111111_11111111_11111111_11111111_11111111_11111111_11111111");
		#line 1451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a = Builtin::i32(5);
		#line 1452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a == Builtin::i32(5)), "a==5");
		#line 1453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a != Builtin::i32(6)), "a!=6");
		#line 1454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT(((a <=> Builtin::i32(6)) < 0), "a<6");
		#line 1455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT(((a <=> Builtin::i32(5)) <= 0), "a<=5");
		#line 1456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT(((a <=> Builtin::i32(4)) > 0), "a>4");
		#line 1457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT(((a <=> Builtin::i32(5)) >= 0), "a>=5");
		#line 1460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a = Builtin::i32(5);
		#line 1461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a++;
		#line 1462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a--;
		#line 1463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a += Builtin::i32(5);
		#line 1464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a -= Builtin::i32(5);
		#line 1465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a *= Builtin::i32(2);
		#line 1466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_UFCS(_operator_bsl_eq)(a, Builtin::i32(2));
		#line 1467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a %= Builtin::i32(1);
		#line 1468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a &= Builtin::i32(1);
		#line 1469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a |= Builtin::i32(1);
		#line 1470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a ^= Builtin::i32(1);
		#line 1471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a <<= Builtin::i32(1);
		#line 1472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a >>= Builtin::i32(1);
		#line 1473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a == Builtin::i32(0)), "a==0");
		#line 1474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a = Builtin::i32(10);
		#line 1475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_not)(a) == Builtin::i32(-11)), "~a==-11");
		#line 1478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::i64 b = Builtin::i32(5); 
		#line 1479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Nullable<Builtin::i64> c = nullptr; 
		#line 1480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Nullable<Builtin::i64> d = Builtin::i32(5); 
		#line 1481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a != b), "a!=b");
		#line 1482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((b != c), "b!=c");
		#line 1483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((!Builtin::IdentityEquals(b, c)), "b!==c");
		#line 1484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT(((b <=> c) > 0), "b>c");
		#line 1485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((c != b), "c!=b");
		#line 1486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((c == nullptr), "c==null");
		#line 1487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((d != nullptr), "d!=null");
		#line 1488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT(((c <=> d) < 0), "c<d");
		#line 1489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((b == d), "b==d");
		#line 1493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Nullable<Builtin::ObjectRef> o = c; 
		#line 1494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		o = d;
		#line 1495 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_ne_eq_mul)(b, o)), "b!=*o");
		#line 1496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		IComparable<Builtin::i64> icomp = a; 
		#line 1497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT(((icomp <=> b) > 0), "icomp>b");
		#line 1500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(a.$ref()) == Builtin::i32(10)), "a.HashCode==10");
		#line 1501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(a) == Builtin::i32(10)), "#a==10");
		#line 1502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		b = Builtin::i32(-6);
		#line 1503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(b) == Builtin::u64(18446744073709551610ULL)), "#b==18446744073709551610u");
		#line 1505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(ToInt32)(b.$ref()) == Builtin::i32(-6)), "b.ToInt32()==-6");
		#line 1506 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(NarrowToUInt64)(b.$ref()) == Builtin::u64(18446744073709551610ULL)), "b.NarrowToUInt64()==18446744073709551610u");
		#line 1509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(Abs)(b.$ref()) == Builtin::i32(6)), "b.Abs==6");
		#line 1510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(CheckedAbs)(b.$ref()) == Builtin::i64(6LL)), "b.CheckedAbs==6i64");
		#line 1511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(CheckedAbs)(ADV_USPCS(MinValue, Builtin::i64)().$ref()) == nullptr), "i64.MinValue.CheckedAbs==null");
		#line 1512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(StrictAbs)(b.$ref()) == Builtin::i32(6)), "b.StrictAbs==6");
		#line 1513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(WrappingAbs)(ADV_USPCS(MinValue, Builtin::i64)().$ref()) == ADV_USPCS(MinValue, Builtin::i64)()), "i64.MinValue.WrappingAbs==i64.MinValue");
		#line 1514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(SaturatingAbs)(ADV_USPCS(MinValue, Builtin::i64)().$ref()) == ADV_USPCS(MaxValue, Builtin::i64)()), "i64.MinValue.SaturatingAbs==i64.MaxValue");
		#line 1515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		{
			#line 1516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			const auto& [result, overflowed] = ADV_UPCS(OverflowingAbs)(ADV_USPCS(MinValue, Builtin::i64)().$ref());
			#line 1517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			ADV_ASSERT((result == ADV_USPCS(MinValue, Builtin::i64)() && overflowed), "result==i64.MinValue&&overflowed");
		}
		#line 1519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(IsFinite)(b.$ref())), "b.IsFinite");
		#line 1520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(IsInteger)(b.$ref())), "b.IsInteger");
		#line 1521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(IsNegative)(b.$ref())), "b.IsNegative");
		#line 1522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(IsPositive)(a.$ref())), "a.IsPositive");
		#line 1523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((!ADV_UPCS(IsPositive)(b.$ref())), "!b.IsPositive");
		#line 1524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(IsCanonical)(b.$ref())), "b.IsCanonical");
		#line 1525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((!ADV_UPCS(IsComplexNumber)(b.$ref())), "!b.IsComplexNumber");
		#line 1526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(IsRealNumber)(b.$ref())), "b.IsRealNumber");
		#line 1527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((!ADV_UPCS(IsImaginaryNumber)(b.$ref())), "!b.IsImaginaryNumber");
		#line 1528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(IsEvenInteger)(b.$ref())), "b.IsEvenInteger");
		#line 1529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((!ADV_UPCS(IsOddInteger)(b.$ref())), "!b.IsOddInteger");
		#line 1530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((!ADV_UPCS(IsInfinity)(b.$ref())), "!b.IsInfinity");
		#line 1531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((!ADV_UPCS(IsPositiveInfinity)(b.$ref())), "!b.IsPositiveInfinity");
		#line 1532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((!ADV_UPCS(IsNegativeInfinity)(b.$ref())), "!b.IsNegativeInfinity");
		#line 1533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((!ADV_UPCS(IsNaN)(b.$ref())), "!b.IsNaN");
		#line 1534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(IsNormal)(b.$ref())), "b.IsNormal");
		#line 1535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((!ADV_UPCS(IsSubnormal)(b.$ref())), "!b.IsSubnormal");
		#line 1536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((!ADV_UPCS(IsZero)(b.$ref())), "!b.IsZero");
		#line 1539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(Sign)(a.$ref()) == +Builtin::i32(1)), "a.Sign==+1");
		#line 1540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(Sign)(b.$ref()) == Builtin::i32(-1)), "b.Sign==-1");
		#line 1541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(CopySign)(a.$ref(), b) == Builtin::i32(-10)), "a.CopySign(b)==-10");
		#line 1542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(Max)(a.$ref(), b) == a), "a.Max(b)==a");
		#line 1543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(Min)(a.$ref(), b) == b), "a.Min(b)==b");
		#line 1544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(MaxNumber)(a.$ref(), b) == a), "a.MaxNumber(b)==a");
		#line 1545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(MinNumber)(a.$ref(), b) == b), "a.MinNumber(b)==b");
		#line 1546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(Clamp)(b.$ref(), Builtin::i64(-5LL), +Builtin::i64(5LL)) == Builtin::i32(-5)), "b.Clamp(-5i64,+5i64)==-5");
		#line 1549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::i64(2LL).$ref()) == Builtin::i32(1)), "2i64.Log2==1");
		#line 1550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::i64(16LL).$ref()) == Builtin::i32(4)), "16i64.Log2==4");
		#line 1551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::i64(64LL).$ref()) == Builtin::i32(6)), "64i64.Log2==6");
		#line 1552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::i64(4611686018427387908LL).$ref()) == Builtin::i32(62)), "4_611_686_018_427_387_908i64.Log2==62");
		#line 1553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::i64(2LL).$ref()) == Builtin::i32(1)), "2i64.Log2Ceiling==1");
		#line 1554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::i64(16LL).$ref()) == Builtin::i32(4)), "16i64.Log2Ceiling==4");
		#line 1555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::i64(65LL).$ref()) == Builtin::i32(7)), "65i64.Log2Ceiling==7");
		#line 1556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::i64(4611686018427387908LL).$ref()) == Builtin::i32(63)), "4_611_686_018_427_387_908i64.Log2Ceiling==63");
		#line 1557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(CheckedLog2)(Builtin::i64(0LL).$ref()) == nullptr), "0i64.CheckedLog2==null");
		#line 1558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(Builtin::i64(5LL).$ref()) == Builtin::i32(0)), "5i64.Log10==0");
		#line 1559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(a.$ref()) == Builtin::i32(1)), "a.Log10==1");
		#line 1560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(ADV_USPCS(MaxValue, Builtin::i64)().$ref()) == Builtin::i32(18)), "i64.MaxValue.Log10==18");
		#line 1561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(Log)(Builtin::i64(5LL).$ref(), Builtin::i64(5LL)) == Builtin::i32(1)), "5i64.Log(5i64)==1");
		#line 1562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(CheckedLog)(Builtin::i64(5LL).$ref(), Builtin::i64(-5LL)) == nullptr), "5i64.CheckedLog(-5i64)==null");
		#line 1563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(Midpoint)(a.$ref(), Builtin::i64(30LL)) == Builtin::i32(20)), "a.Midpoint(30i64)==20");
		#line 1564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(Midpoint)(Builtin::i64(1000000000000000000LL).$ref(), Builtin::i64(9000000000000000000LL)) == Builtin::i64(5000000000000000000LL)), "1_000_000_000_000_000_000i64.Midpoint(9_000_000_000_000_000_000)==5_000_000_000_000_000_000");
		#line 1565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)(a.$ref(), Builtin::i64(10LL)) == Builtin::i32(10)), "a.NextMultipleOf(10i64)==10");
		#line 1566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)(Builtin::i64(11LL).$ref(), Builtin::i64(10LL)) == Builtin::i32(20)), "11i64.NextMultipleOf(10i64)==20");
		#line 1567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)(Builtin::i64(1000000000000000000LL).$ref(), Builtin::i64(8500000LL)) == Builtin::i64(1000000000004000000LL)), "1_000_000_000_000_000_000i64.NextMultipleOf(8500000i64)==1_000_000_000_004_000_000");
		#line 1568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)((Builtin::i64(-13LL)).$ref(), Builtin::i64(4LL)) == Builtin::i32(-12)), "(-13i64).NextMultipleOf(4i64)==-12");
		#line 1569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)((Builtin::i64(-13LL)).$ref(), Builtin::i64(-4LL)) == Builtin::i32(-16)), "(-13i64).NextMultipleOf(-4i64)==-16");
		#line 1570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(ByteCount)(a.$ref()) == Builtin::i32(8)), "a.ByteCount==8");
		#line 1571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(ByteSwapped)(Builtin::i64(0x7b233d2a39fea339LL).$ref()) == Builtin::i64(0x39a3fe392a3d237bLL)), "0x7b233d2a39fea339_i64.ByteSwapped==0x39a3fe392a3d237b");
		#line 1572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_not)(Builtin::i64(0b1010LL), Builtin::i32(3)) == Builtin::i32(0b01010000)), "0b1010_i64<<~3==0b0101_0000");
		#line 1573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_not)(Builtin::i64(0b1010LL), Builtin::i32(5)) == Builtin::i32(0b101000000)), "0b1010_i64<<~5==0b1_0100_0000");
		#line 1574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_not)(Builtin::i64(0b1010LL), Builtin::i32(3)) == Builtin::i64(0b0100000000000000000000000000000000000000000000000000000000000001LL)), "0b1010_i64>>~3==0b0100_0000_0000_0000_0000_0000_0000_0000_0000_0000_0000_0000_0000_0000_0000_0001");
		#line 1575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_not)(Builtin::i64(0b1010LL), Builtin::i32(5)) == Builtin::i64(0b0101000000000000000000000000000000000000000000000000000000000000LL)), "0b1010_i64>>~5==0b0101_0000_0000_0000_0000_0000_0000_0000_0000_0000_0000_0000_0000_0000_0000_0000");
		#line 1577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(IsMultipleOf)(a.$ref(), Builtin::i64(5LL))), "a.IsMultipleOf(5i64)");
		#line 1578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((!ADV_UFCS(IsMultipleOf)(a.$ref(), Builtin::i64(6LL))), "!a.IsMultipleOf(6i64)");
		#line 1580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(MultiplyBy10)(a.$ref()) == Builtin::i32(100)), "a.MultiplyBy10==100");
		#line 1581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(MultiplyBy16)(a.$ref()) == Builtin::i32(160)), "a.MultiplyBy16==160");
		#line 1584 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a = Builtin::i64(1000000000004000000LL);
		#line 1585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_qst)(a, Builtin::i64(100LL)) == Builtin::i64(1000000000004000100LL)), "a+?100i64==1000000000004000100i64");
		#line 1586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_qst)(a, ADV_USPCS(MaxValue, Builtin::i64)()) == nullptr), "a+?i64.MaxValue==null");
		#line 1587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_UFCS(_operator_add_qst_eq)(a, Builtin::i64(5LL));
		#line 1588 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a == Builtin::i64(1000000000004000005LL)), "a==1000000000004000005");
		#line 1589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_UFCS(_operator_add_qst_eq)(a, ADV_USPCS(MaxValue, Builtin::i64)());
		#line 1590 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a == Builtin::i64(1000000000004000005LL)), "a==1000000000004000005");
		#line 1591 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_ne)(a, Builtin::i64(100LL)) == Builtin::i64(1000000000004000105LL)), "a+!100i64==1000000000004000105");
		#line 1592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_mod)(a, Builtin::i64(100LL)) == Builtin::i64(1000000000004000105LL)), "a+%100i64==1000000000004000105");
		#line 1593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_mod)(a, Builtin::i64(8223372036850775803LL)) == ADV_USPCS(MinValue, Builtin::i64)()), "a+%8_223_372_036_850_775_803i64==i64.MinValue");
		#line 1594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_UFCS(_operator_add_mod_eq)(a, ADV_USPCS(MaxValue, Builtin::i64)());
		#line 1595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a == Builtin::i64(-8223372036850775804LL)), "a==-8223372036850775804");
		#line 1596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_or)(a, (Builtin::i64(-2000000000004000005LL))) == ADV_USPCS(MinValue, Builtin::i64)()), "a+|(-2000000000004000005i64)==i64.MinValue");
		#line 1597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_UFCS(_operator_add_or_eq)(a, ADV_USPCS(MaxValue, Builtin::i64)());
		#line 1598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a == Builtin::i64(1000000000004000003LL)), "a==1000000000004000003");
		#line 1599 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_or)(a, Builtin::i64(9000000000004000003LL)) == ADV_USPCS(MaxValue, Builtin::i64)()), "a+|9000000000004000003i64==i64.MaxValue");
		#line 1600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		{
			#line 1601 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_add_mod_qst)(a, Builtin::i64(9000000000004000003LL));
			#line 1602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			ADV_ASSERT((result == Builtin::i64(-8446744073701551610LL) && overflowed), "result==-8446744073701551610&&overflowed");
		}
		#line 1605 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a = ADV_USPCS(MaxValue, Builtin::i64)() - Builtin::i32(1);
		#line 1606 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_add_qst_postfix)(a) == ADV_USPCS(MaxValue, Builtin::i64)() - Builtin::i32(1)), "a++?==i64.MaxValue-1");
		#line 1607 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::i64)()), "a==i64.MaxValue");
		#line 1608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_UFCS(_operator_add_add_mod_postfix)(a);
		#line 1609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::i64)()), "a==i64.MinValue");
		#line 1610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a = ADV_USPCS(MaxValue, Builtin::i64)();
		#line 1611 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_UFCS(_operator_add_add_or_postfix)(a);
		#line 1612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::i64)()), "a==i64.MaxValue");
		#line 1614 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		{
			#line 1615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.$ref(), Builtin::i64(0LL), Builtin::Boolean(false));
			#line 1616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			ADV_ASSERT((result == ADV_USPCS(MaxValue, Builtin::i64)() && !overflowed), "result==i64.MaxValue&&!overflowed");
		}
		#line 1618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		{
			#line 1619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.$ref(), Builtin::i64(-5LL), Builtin::Boolean(true));
			#line 1620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			ADV_ASSERT((result == Builtin::i64(9223372036854775803LL) && !overflowed), "result==9223372036854775803&&!overflowed");
		}
		#line 1622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		{
			#line 1623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.$ref(), Builtin::i64(0LL), Builtin::Boolean(true));
			#line 1624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			ADV_ASSERT((result == ADV_USPCS(MinValue, Builtin::i64)() && overflowed), "result==i64.MinValue&&overflowed");
		}
		#line 1626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		{
			#line 1627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.$ref(), Builtin::i64(10LL), Builtin::Boolean(true));
			#line 1628 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			ADV_ASSERT((result == Builtin::i64(-9223372036854775798LL) && overflowed), "result==-9223372036854775798&&overflowed");
		}
		#line 1631 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_qst)(a, Builtin::i64(1000000000000000000LL)) == Builtin::i64(8223372036854775807LL)), "a-?1_000_000_000_000_000_000i64==8223372036854775807");
		#line 1632 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_qst)(-a, ADV_USPCS(MaxValue, Builtin::i64)()) == nullptr), "-a-?i64.MaxValue==null");
		#line 1633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_UFCS(_operator_sub_qst_eq)(a, Builtin::i64(1000000000000000000LL));
		#line 1634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a == Builtin::i64(8223372036854775807LL)), "a==8223372036854775807");
		#line 1635 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_UFCS(_operator_sub_qst_eq)(a, Builtin::i64(1LL));
		#line 1636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a == Builtin::i64(8223372036854775806LL)), "a==8223372036854775806");
		#line 1637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_ne)(a, Builtin::i64(1000000000000000000LL)) == Builtin::i64(7223372036854775806LL)), "a-!1_000_000_000_000_000_000i64==7223372036854775806");
		#line 1638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_mod)(-a, Builtin::i64(1000000000000000003LL)) == ADV_USPCS(MaxValue, Builtin::i64)()), "-a-%1000000000000000003i64==i64.MaxValue");
		#line 1639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_mod)(a, Builtin::i64(1000000000000000000LL)) == Builtin::i64(7223372036854775806LL)), "a-%1_000_000_000_000_000_000i64==7223372036854775806");
		#line 1640 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_UFCS(_operator_sub_mod_eq)(a, ADV_USPCS(MaxValue, Builtin::i64)());
		#line 1641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a == Builtin::i64(-1000000000000000001LL)), "a==-1_000_000_000_000_000_001");
		#line 1642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_or)(a, Builtin::i64(9000000000000000000LL)) == ADV_USPCS(MinValue, Builtin::i64)()), "a-|9_000_000_000_000_000_000i64==i64.MinValue");
		#line 1643 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_UFCS(_operator_sub_or_eq)(a, ADV_USPCS(MaxValue, Builtin::i64)());
		#line 1644 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::i64)()), "a==i64.MinValue");
		#line 1645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		{
			#line 1646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_sub_mod_qst)(a, Builtin::i64(1000000000000000000LL));
			#line 1647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			ADV_ASSERT((result == Builtin::i64(8223372036854775808LL) && overflowed), "result==8223372036854775808&&overflowed");
		}
		#line 1650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a = ADV_USPCS(MinValue, Builtin::i64)() + Builtin::i32(1);
		#line 1651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_sub_qst_postfix)(a) == ADV_USPCS(MinValue, Builtin::i64)() + Builtin::i32(1)), "a--?==i64.MinValue+1");
		#line 1652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::i64)()), "a==i64.MinValue");
		#line 1653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_UFCS(_operator_sub_sub_mod_postfix)(a);
		#line 1654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::i64)()), "a==i64.MaxValue");
		#line 1655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a = ADV_USPCS(MinValue, Builtin::i64)();
		#line 1656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_UFCS(_operator_sub_sub_or_postfix)(a);
		#line 1657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::i64)()), "a==i64.MinValue");
		#line 1659 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		{
			#line 1660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.$ref(), Builtin::i64(0LL), Builtin::Boolean(false));
			#line 1661 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			ADV_ASSERT((result == ADV_USPCS(MinValue, Builtin::i64)() && !overflowed), "result==i64.MinValue&&!overflowed");
		}
		#line 1663 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		{
			#line 1664 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.$ref(), Builtin::i64(-5LL), Builtin::Boolean(true));
			#line 1665 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			ADV_ASSERT((result == Builtin::i64(-9223372036854775804LL) && !overflowed), "result==-9223372036854775804&&!overflowed");
		}
		#line 1667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		{
			#line 1668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.$ref(), Builtin::i64(0LL), Builtin::Boolean(true));
			#line 1669 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			ADV_ASSERT((result == ADV_USPCS(MaxValue, Builtin::i64)() && overflowed), "result==i64.MaxValue&&overflowed");
		}
		#line 1671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		{
			#line 1672 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.$ref(), Builtin::i64(10LL), Builtin::Boolean(true));
			#line 1673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			ADV_ASSERT((result == Builtin::i64(9223372036854775797LL) && overflowed), "result==9223372036854775797&&overflowed");
		}
		#line 1676 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_qst)(a, Builtin::i64(1LL)) == ADV_USPCS(MinValue, Builtin::i64)()), "a*?1i64==i64.MinValue");
		#line 1677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_qst)(a, Builtin::i64(2LL)) == nullptr), "a*?2i64==null");
		#line 1678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_UFCS(_operator_mul_qst_eq)(a, Builtin::i64(5LL));
		#line 1679 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::i64)()), "a==i64.MinValue");
		#line 1680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a = Builtin::i64(15000000000LL);
		#line 1681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a == Builtin::i64(15000000000LL)), "a==15_000_000_000");
		#line 1682 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_ne)(a, Builtin::i64(3LL)) == Builtin::i64(45000000000LL)), "a*!3i64==45_000_000_000");
		#line 1683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_mod)(a, Builtin::i64(6LL)) == Builtin::i64(90000000000LL)), "a*%6i64==90_000_000_000");
		#line 1684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_mod)(a, Builtin::i64(1000000000LL)) == Builtin::i64(-3446744073709551616LL)), "a*%1_000_000_000i64==-3446744073709551616");
		#line 1685 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_UFCS(_operator_mul_mod_eq)(a, Builtin::i64(6LL));
		#line 1686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a == Builtin::i64(90000000000LL)), "a==90_000_000_000");
		#line 1687 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_or)(a, (Builtin::i64(-1000000000LL))) == ADV_USPCS(MinValue, Builtin::i64)()), "a*|(-1_000_000_000i64)==i64.MinValue");
		#line 1688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_UFCS(_operator_mul_or_eq)(a, Builtin::i64(1000000000LL));
		#line 1689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::i64)()), "a==i64.MaxValue");
		#line 1690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_or)(a, Builtin::i64(2LL)) == ADV_USPCS(MaxValue, Builtin::i64)()), "a*|2i64==i64.MaxValue");
		#line 1691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		{
			#line 1692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_mul_mod_qst)(a, Builtin::i64(2LL));
			#line 1693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			ADV_ASSERT((result == Builtin::i32(-2) && overflowed), "result==-2&&overflowed");
		}
		#line 1695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a = Builtin::i64(15000000000LL);
		#line 1696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		{
			#line 1697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			const auto& [low, high] = ADV_UFCS(_operator_mul_gt)(a, (Builtin::i64(10000000000LL)));
			#line 1698 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			ADV_ASSERT((low == Builtin::u64(0x21ab0d4414980000ULL) && high == Builtin::i32(8)), "low==0x21ab0d4414980000u64&&high==8");
		}
		#line 1700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		{
			#line 1701 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			const auto& [low, high] = ADV_UFCS(_operator_mul_gt)(a, (Builtin::i64(-10000000000LL)));
			#line 1702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			ADV_ASSERT((low == Builtin::u64(16020696663385964544ULL) && high == Builtin::i32(-9)), "low==16020696663385964544u64&&high==-9");
		}
		#line 1704 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a = ADV_USPCS(MaxValue, Builtin::i64)();
		#line 1705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		{
			#line 1706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			const auto& [low, high] = ADV_UFCS(CarryingMul)(a.$ref(), Builtin::i64(2LL), Builtin::i64(12LL));
			#line 1707 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			ADV_ASSERT((low == Builtin::i32(10) && high == Builtin::i32(1)), "low==10&&high==1");
		}
		#line 1709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		{
			#line 1710 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			const auto& [low, high] = ADV_UFCS(CarryingMul)(a.$ref(), Builtin::i64(-2LL), Builtin::i64(-12LL));
			#line 1711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			ADV_ASSERT((low == Builtin::ParseInt128("18446744073709551606") && high == Builtin::i32(-2)), "low==18446744073709551606&&high==-2");
		}
		#line 1714 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a = Builtin::i64(100000000000LL);
		#line 1715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, Builtin::i32(6000000)) == Builtin::i32(16666)), "a\\6000000==16666");
		#line 1716 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a /= Builtin::i32(6000000);
		#line 1717 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a == Builtin::i32(16667)), "a==16667");
		#line 1718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a = Builtin::i64(100000000000LL);
		#line 1719 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		{
			#line 1720 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)(a, Builtin::i64(6000000LL));
			#line 1721 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			ADV_ASSERT((div == Builtin::i32(16666) && rem == Builtin::i32(4000000)), "div==16666&&rem==4000000");
		}
		#line 1723 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_qst)(a, Builtin::i64(5LL)) == Builtin::i64(20000000000LL)), "a\\?5i64==20000000000i64");
		#line 1724 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_qst)(a, Builtin::i64(0LL)) == nullptr), "a\\?0i64==null");
		#line 1725 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_qst)(ADV_USPCS(MinValue, Builtin::i64)(), (Builtin::i64(-1LL))) == nullptr), "i64.MinValue\\?(-1i64)==null");
		#line 1727 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_ne)(a, Builtin::i64(5LL)) == Builtin::i64(20000000000LL)), "a\\!5i64==20000000000i64");
		#line 1728 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_UFCS(_operator_bsl_mod_eq)(a, Builtin::i64(5LL));
		#line 1729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a == Builtin::i64(20000000000LL)), "a==20000000000i64");
		#line 1730 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a = Builtin::i32(10);
		#line 1731 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_mod)(ADV_USPCS(MinValue, Builtin::i64)(), (Builtin::i64(-1LL))) == ADV_USPCS(MinValue, Builtin::i64)()), "i64.MinValue\\%(-1i64)==i64.MinValue");
		#line 1732 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_UFCS(_operator_bsl_or_eq)(a, Builtin::i64(5LL));
		#line 1733 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a == Builtin::i32(2)), "a==2");
		#line 1734 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a = Builtin::i32(100000);
		#line 1735 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_or)(ADV_USPCS(MinValue, Builtin::i64)(), (Builtin::i64(-1LL))) == ADV_USPCS(MaxValue, Builtin::i64)()), "i64.MinValue\\|(-1i64)==i64.MaxValue");
		#line 1736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		{
			#line 1737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_bsl_mod_qst)(ADV_USPCS(MinValue, Builtin::i64)(), (Builtin::i64(-1LL)));
			#line 1738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			ADV_ASSERT((result == ADV_USPCS(MinValue, Builtin::i64)() && overflowed), "result==i64.MinValue&&overflowed");
		}
		#line 1741 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_bsl)(a, Builtin::i64(500LL)) == Builtin::i64(200LL)), "a\\\\500i64==200i64");
		#line 1742 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_bsl)(a, Builtin::i64(6LL)) == nullptr), "a\\\\6i64==null");
		#line 1743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_bsl_qst)(a, Builtin::i64(0LL)) == nullptr), "a\\\\?0i64==null");
		#line 1745 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_not)(a, Builtin::i64(600LL)) == Builtin::i32(167)), "a/~600i64==167");
		#line 1746 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_lt)(a, Builtin::i64(600LL)) == Builtin::i32(166)), "a/<600i64==166");
		#line 1747 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_gt)(a, Builtin::i64(600LL)) == Builtin::i32(167)), "a/>600i64==167");
		#line 1748 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_not)(a, (Builtin::i64(-600LL))) == Builtin::i32(-167)), "a/~(-600i64)==-167");
		#line 1749 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_lt)(a, (Builtin::i64(-600LL))) == Builtin::i32(-167)), "a/<(-600i64)==-167");
		#line 1750 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_gt)(a, (Builtin::i64(-600LL))) == Builtin::i32(-166)), "a/>(-600i64)==-166");
		#line 1752 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_qst)(a, Builtin::i64(500LL)) == Builtin::i64(0LL)), "a%?500i64==0i64");
		#line 1753 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_qst)(a, Builtin::i64(0LL)) == nullptr), "a%?0i64==null");
		#line 1754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_qst)(ADV_USPCS(MinValue, Builtin::i64)(), (Builtin::i64(-1LL))) == nullptr), "i64.MinValue%?(-1i64)==null");
		#line 1756 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_ne)(a, Builtin::i64(600LL)) == Builtin::i32(400)), "a%!600i64==400");
		#line 1757 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_UFCS(_operator_mod_mod_eq)(a, Builtin::i64(600LL));
		#line 1758 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a == Builtin::i32(400)), "a==400");
		#line 1759 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a = Builtin::i32(10);
		#line 1760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_mod)(ADV_USPCS(MinValue, Builtin::i64)(), (Builtin::i64(-1LL))) == Builtin::i32(0)), "i64.MinValue%%(-1i64)==0");
		#line 1761 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		{
			#line 1762 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_mod_mod_qst)(ADV_USPCS(MinValue, Builtin::i64)(), (Builtin::i64(-1LL)));
			#line 1763 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			ADV_ASSERT((result == Builtin::i32(0) && overflowed), "result==0&&overflowed");
		}
		#line 1766 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_qst)(a) == Builtin::i64(-10LL)), "-?a==-10i64");
		#line 1767 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_qst)(ADV_USPCS(MinValue, Builtin::i64)()) == nullptr), "-?i64.MinValue==null");
		#line 1768 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_ne)(a) == Builtin::i32(-10)), "-!a==-10");
		#line 1769 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_mod)(a) == Builtin::i32(-10)), "-%a==-10");
		#line 1770 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_mod)(ADV_USPCS(MinValue, Builtin::i64)()) == ADV_USPCS(MinValue, Builtin::i64)()), "-%i64.MinValue==i64.MinValue");
		#line 1771 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_or)(a) == Builtin::i32(-10)), "-|a==-10");
		#line 1772 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_or)(ADV_USPCS(MinValue, Builtin::i64)()) == ADV_USPCS(MaxValue, Builtin::i64)()), "-|i64.MinValue==i64.MaxValue");
		#line 1774 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_bsl)(ADV_USPCS(MaxValue, Builtin::i64)(), Builtin::u32(4U)) == Builtin::i64(0b0000011111111111111111111111111111111111111111111111111111111111LL)), "i64.MaxValue>>\\4u==0b0000_0111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111");
		#line 1775 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_bsl)(ADV_USPCS(MaxValue, Builtin::i64)(), Builtin::u32(68U)) == Builtin::i32(0)), "i64.MaxValue>>\\68u==0");
		#line 1776 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_bsl)(ADV_USPCS(MinValue, Builtin::i64)(), Builtin::u32(68U)) == Builtin::i32(-1)), "i64.MinValue>>\\68u==-1");
		#line 1777 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_bsl)(ADV_USPCS(MaxValue, Builtin::i64)(), Builtin::u32(68U)) == Builtin::i32(0)), "i64.MaxValue<<\\68u==0");
		#line 1778 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_qst)(ADV_USPCS(MaxValue, Builtin::i64)(), Builtin::i32(4)) == Builtin::i64(0b0000011111111111111111111111111111111111111111111111111111111111LL)), "i64.MaxValue>>?4==0b0000_0111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111");
		#line 1779 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_qst)(ADV_USPCS(MaxValue, Builtin::i64)(), Builtin::i32(68)) == nullptr), "i64.MaxValue>>?68==null");
		#line 1780 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_qst)(ADV_USPCS(MaxValue, Builtin::i64)(), Builtin::i32(68)) == nullptr), "i64.MaxValue<<?68==null");
		#line 1781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_ne)(ADV_USPCS(MaxValue, Builtin::i64)(), Builtin::i32(4)) == Builtin::i64(0b0000011111111111111111111111111111111111111111111111111111111111LL)), "i64.MaxValue>>!4==0b0000_0111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111");
		#line 1782 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_mod)(ADV_USPCS(MaxValue, Builtin::i64)(), Builtin::i32(68)) == Builtin::i64(0b0000011111111111111111111111111111111111111111111111111111111111LL)), "i64.MaxValue>>%68==0b0000_0111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111");
		#line 1783 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a = ADV_USPCS(MaxValue, Builtin::i64)();
		#line 1784 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_UFCS(_operator_gt_gt_mod_eq)(a, Builtin::i32(68));
		#line 1785 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_mod)(a, Builtin::i32(68)) == Builtin::i64(0b0111111111111111111111111111111111111111111111111111111111110000LL)), "a<<%68==0b0111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_0000");
		#line 1786 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		{
			#line 1787 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_gt_gt_mod_qst)(ADV_USPCS(MaxValue, Builtin::i64)(), Builtin::i32(68));
			#line 1788 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			ADV_ASSERT((result == Builtin::i64(0b0000011111111111111111111111111111111111111111111111111111111111LL) && overflowed), "result==0b0000_0111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111&&overflowed");
		}
		#line 1792 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a = Builtin::i32(1500000000);
		#line 1793 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor)(a, Builtin::u32(2U)) == Builtin::i64(2250000000000000000LL)), "a^^2u==2250000000000000000");
		#line 1794 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_UFCS(_operator_xor_xor_eq)(a, Builtin::u32(2U));
		#line 1795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a == Builtin::i64(2250000000000000000LL)), "a==2250000000000000000");
		#line 1796 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor)(Builtin::i64(60000LL), Builtin::u32(3U)) == Builtin::i64(216000000000000LL)), "60000i64^^3u==216000000000000");
		#line 1797 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_qst)(Builtin::i64(60000LL), Builtin::u32(3U)) == Builtin::i64(216000000000000LL)), "60000i64^^?3u==216000000000000");
		#line 1798 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_qst)(Builtin::i64(60000LL), Builtin::u32(4U)) == nullptr), "60000i64^^?4u==null");
		#line 1799 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_UFCS(_operator_xor_xor_qst_eq)(a, Builtin::u32(2U));
		#line 1800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a == Builtin::i64(2250000000000000000LL)), "a==2250000000000000000");
		#line 1801 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_ne)(Builtin::i64(60000LL), Builtin::u32(3U)) == Builtin::i64(216000000000000LL)), "60000i64^^!3u==216000000000000");
		#line 1802 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_mod)(Builtin::i64(60000LL), Builtin::u32(4U)) == Builtin::i64(-5486744073709551616LL)), "60000i64^^%4u==-5486744073709551616");
		#line 1803 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a = Builtin::i32(300);
		#line 1804 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_UFCS(_operator_xor_xor_mod_eq)(a, Builtin::u32(2U));
		#line 1805 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a == Builtin::i32(90000)), "a==90000");
		#line 1806 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_or)(Builtin::i64(60000LL), Builtin::u32(3U)) == Builtin::i64(216000000000000LL)), "60000i64^^|3u==216000000000000");
		#line 1807 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_or)(Builtin::i64(60000LL), Builtin::u32(4U)) == ADV_USPCS(MaxValue, Builtin::i64)()), "60000i64^^|4u==i64.MaxValue");
		#line 1808 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		{
			#line 1809 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_xor_xor_mod_qst)(Builtin::i64(60000LL), Builtin::u32(4U));
			#line 1810 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			ADV_ASSERT((result == Builtin::i64(-5486744073709551616LL) && overflowed), "result==-5486744073709551616&&overflowed");
		}
		return true;
	}();
	#endif	
} namespace $extensions { using namespace System;
#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	auto _operator_eq_eq_mul($extension_Int64_20_i64 const& $this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool
	{
		#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		{
			#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			auto __tmp0 = Builtin::Cast<false, $extension_Int64_20_i64>(obj);
			#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			if ((__tmp0.IsValid())) {
				#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				const auto& obj = *__tmp0;
				
				#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				return $this == obj;
			}
		}
		#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return Builtin::Boolean(false);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	auto _operator_lt_eq_gt_mul($extension_Int64_73_i64 const& $this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32
	{
		#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		{
			#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			auto __tmp0 = Builtin::Cast<false, $extension_Int64_73_i64>(obj);
			#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			if ((__tmp0.IsValid())) {
				#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				const auto& obj = *__tmp0;
				
				#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				return $this <=> obj;
			}
		}
		#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		{
			#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			if ((!Builtin::Is(obj, nullptr))) {
				#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				auto __tmp0 = *obj; const auto& obj = __tmp0;
				
				#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				Builtin::Throw(Builtin::InvalidOperationException{});
			}
		}
		#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return Builtin::i32(1);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	auto MaxMagnitude($extension_Int64_284_i64 const& $this LIFETIMEBOUND, $extension_Int64_284_i64 rhs)  -> const typename $extension_Int64_284_i64
	{
		#line 310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Auto<decltype($this)> absX = $this; 
		#line 311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((absX <=> Builtin::i32(0)) < 0) {
			#line 312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			absX = -absX;
			#line 313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			if ((absX <=> Builtin::i32(0)) < 0) {
				#line 314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				return $this;
			}
		}
		#line 318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Auto<decltype(rhs)> absY = rhs; 
		#line 319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((absY <=> Builtin::i32(0)) < 0) {
			#line 320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			absY = -absY;
			#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			if ((absY <=> Builtin::i32(0)) < 0) {
				#line 322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				return rhs;
			}
		}
		#line 326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((absX <=> absY) > 0) {
			#line 327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return $this;
		}
		#line 330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (absX == absY) {
			#line 331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return ADV_UPCS(IsNegative)($this.$ref()) ? rhs : $this;
		}
		#line 334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return rhs;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	auto MinMagnitude($extension_Int64_284_i64 const& $this LIFETIMEBOUND, $extension_Int64_284_i64 rhs)  -> const typename $extension_Int64_284_i64
	{
		#line 341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Auto<decltype($this)> absX = $this; 
		#line 342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((absX <=> Builtin::i32(0)) < 0) {
			#line 343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			absX = -absX;
			#line 344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			if ((absX <=> Builtin::i32(0)) < 0) {
				#line 345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				return rhs;
			}
		}
		#line 349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Auto<decltype(rhs)> absY = rhs; 
		#line 350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((absY <=> Builtin::i32(0)) < 0) {
			#line 351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			absY = -absY;
			#line 352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			if ((absY <=> Builtin::i32(0)) < 0) {
				#line 353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				return $this;
			}
		}
		#line 357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((absX <=> absY) < 0) {
			#line 358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return $this;
		}
		#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (absX == absY) {
			#line 362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return ADV_UPCS(IsNegative)($this.$ref()) ? $this : rhs;
		}
		#line 365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return rhs;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	auto Parse($extension_Int64_284_i64 const& $this LIFETIMEBOUND, Builtin::Str input)  -> const typename $extension_Int64_284_i64
	{
		#line 372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return Builtin::i64(0LL);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	auto TryParse($extension_Int64_284_i64 const& $this LIFETIMEBOUND, Builtin::Str input) noexcept -> const Builtin::Nullable<$extension_Int64_284_i64>
	{
		#line 377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return Builtin::i64(0LL);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	auto CopySign($extension_Int64_400_i64 const& $this LIFETIMEBOUND, $extension_Int64_400_i64 sign)  -> const typename $extension_Int64_400_i64
	{
		#line 405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Auto<decltype($this)> absValue = $this; 
		#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((absValue <=> Builtin::i32(0)) < 0) {
			#line 407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			absValue = -absValue;
		}
		#line 410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((sign <=> Builtin::i32(0)) >= 0) {
			#line 411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			if ((absValue <=> Builtin::i32(0)) < 0) {
				#line 412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				Builtin::Throw(Builtin::IntegerOverflowException{});
			}
			#line 415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return absValue;
		}
		#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return -absValue;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	auto Log($extension_Int64_428_i64 const& $this LIFETIMEBOUND, $extension_Int64_428_i64 base)  -> const typename $extension_Int64_428_i64
	{
		#line 527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (const auto result = ADV_UFCS(CheckedLog)($this.$ref(), base)) {
			{
				#line 527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				return result;
			}
		}
		#line 530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	auto getCheckedIsqrt($extension_Int64_1214_i64 const & $this ) -> const Builtin::Nullable<$extension_Int64_1214_i64>
	{
		#line 1225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (ADV_UPCS(IsNegative)($this.$ref())) {
			#line 1226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return nullptr;
		}
		#line 1228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		constexpr Builtin::Auto<decltype(Builtin::Cast<true, $extension_Int64_1214_i64>(ADV_USFCS((Math), Isqrt64)(Builtin::Cast<true, Builtin::u64>(ADV_USPCS(MaxValue, $extension_Int64_1214_i64)()))))> MAX_RESULT = Builtin::Cast<true, $extension_Int64_1214_i64>(ADV_USFCS((Math), Isqrt64)(Builtin::Cast<true, Builtin::u64>(ADV_USPCS(MaxValue, $extension_Int64_1214_i64)())));
		#line 1229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, $extension_Int64_1214_i64>(ADV_USFCS((Math), Isqrt64)(Builtin::Cast<true, Builtin::u64>($this))))> result = Builtin::Cast<true, $extension_Int64_1214_i64>(ADV_USFCS((Math), Isqrt64)(Builtin::Cast<true, Builtin::u64>($this))); 
		#line 1230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ASSUME((result <=> Builtin::i32(0)) >= 0);
		#line 1231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ASSUME((result <=> MAX_RESULT) <= 0);
		#line 1232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	} namespace System{

}