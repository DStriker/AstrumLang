#include "Int8.h"
#include "Math.h"

namespace System {
//###############################################################################
//# Global type aliases
//###############################################################################
//###############################################################################
//# Type definitions
//###############################################################################

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
















#line 1352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	static_assert(Builtin::usize(sizeof(Builtin::i8)) == Builtin::i32(1), "i8 should be 1 byte");
#line 1353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	static_assert(ADV_USPCS(MinValue, Builtin::i8)() == Builtin::i32(-0x80), "i8.Min should be -0x80");
#line 1354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	static_assert(ADV_USPCS(MaxValue, Builtin::i8)() == Builtin::i32(0x7F), "i8.Max should be 0x7F");
#line 1355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	static_assert(ADV_UFCS_NONLOCAL(_operator_gt_gt_not)(ADV_USPCS(One, Builtin::i8)(), Builtin::i32(3)) == Builtin::i32(0b00100000), "i8.One >>% 3 == 0b0010_0000");
#line 1356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	static_assert(ADV_USPCS(IsSigned, Builtin::i8)(), "i8 must be signed");
#line 1357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	static_assert(ADV_USPCS(MaxDigitCount, Builtin::i8)() == Builtin::i32(3), "i8 max digit count must be 3");
#line 1358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	static_assert(ADV_UFCS_NONLOCAL(_operator_xor_xor)(Builtin::i8(2), Builtin::u32(6U)) == Builtin::i32(64), "2i8 ^^ 6u == 64i8");
#line 1359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	static_assert(Builtin::TypeIs<Builtin::i8, IComparable<Builtin::i8>>(), "i8 should implement IComparable<i8>");
#line 1360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	static_assert(Builtin::TypeIs<Builtin::i8, IEquatable<Builtin::i8>>(), "i8 should implement IEquatable<i8>");
#line 1361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	static_assert(Builtin::TypeIs<Builtin::i8, ISelfComparable>(), "i8 should implement ISelfComparable");
#line 1362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	static_assert(Builtin::TypeIs<Builtin::i8, ISelfEquatable>(), "i8 should implement ISelfEquatable");
#line 1363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	static_assert(Builtin::TypeIs<Builtin::i8, IAdditionOperators<Builtin::i8, Builtin::i8>>(), "i8 should implement IAdditionOperators<i8, i8>");
#line 1364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	static_assert(Builtin::TypeIs<Builtin::i8, ISubtractionOperators<Builtin::i8, Builtin::i8>>(), "i8 should implement ISubtractionOperators<i8, i8>");
#line 1365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	static_assert(Builtin::TypeIs<Builtin::i8, IMultiplyOperators<Builtin::i8, Builtin::i8>>(), "i8 should implement IMultiplyOperators<i8, i8>");
#line 1366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	static_assert(Builtin::TypeIs<Builtin::i8, IDivisionOperators<Builtin::i8, Builtin::f64>>(), "i8 should implement IDivisionOperators<i8, f64>");
#line 1367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	static_assert(Builtin::TypeIs<Builtin::i8, IIntDivOperators<Builtin::i8, Builtin::i8>>(), "i8 should implement IIntDivOperators<i8, i8>");
#line 1368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	static_assert(Builtin::TypeIs<Builtin::i8, IModulusOperators<Builtin::i8, Builtin::i8>>(), "i8 should implement IModulusOperators<i8, i8>");
#line 1369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	static_assert(Builtin::TypeIs<Builtin::i8, IBitwiseOperators<Builtin::i8, Builtin::i8>>(), "i8 should implement IBitwiseOperators<i8, i8>");
#line 1370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	static_assert(Builtin::TypeIs<Builtin::i8, IShiftOperators<Builtin::i8, Builtin::i8>>(), "i8 should implement IShiftOperators<i8, i8>");
#line 1371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	static_assert(Builtin::TypeIs<Builtin::i8, IUnaryPlusOperators<Builtin::i8>>(), "i8 should implement IUnaryPlusOperators<i8>");
#line 1372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	static_assert(Builtin::TypeIs<Builtin::i8, IUnaryNegationOperators<Builtin::i8>>(), "i8 should implement IUnaryNegationOperators<i8>");
#line 1373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	static_assert(Builtin::TypeIs<Builtin::i8, IIncrementOperators<Builtin::i8>>(), "i8 should implement IIncrementOperators<i8>");
#line 1374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	static_assert(Builtin::TypeIs<Builtin::i8, IDecrementOperators<Builtin::i8>>(), "i8 should implement IDecrementOperators<i8>");
#line 1375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	static_assert(ADV_UFCS_NONLOCAL(_operator_add_mod)(ADV_USPCS(MaxValue, Builtin::i8)(), Builtin::i8(1)) == ADV_USPCS(MinValue, Builtin::i8)(), "i8.MaxValue +% 1i8 == i8.MinValue");
#line 1376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	static_assert(ADV_UFCS_NONLOCAL(_operator_add_or)(ADV_USPCS(MaxValue, Builtin::i8)(), Builtin::i8(1)) == ADV_USPCS(MaxValue, Builtin::i8)(), "i8.MaxValue +| 1i8 == i8.MaxValue");
#ifdef ADV_UNITTEST
	#line 1378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	static bool $Test_298d83b2a01bf150 = [](){
		#line 1380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::i8 a = Builtin::i8(5); 
		#line 1383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a + Builtin::i8(10) == Builtin::i32(15)), "a+10i8==15");
		#line 1384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a + Builtin::u8(10U) == Builtin::i32(15)), "a+10u8==15");
		#line 1385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a + Builtin::i16(10) == Builtin::i32(15)), "a+10i16==15");
		#line 1386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a + Builtin::u16(10U) == Builtin::i32(15)), "a+10u16==15");
		#line 1387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a + Builtin::i32(10) == Builtin::i32(15)), "a+10i32==15");
		#line 1388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a + Builtin::u32(10U) == Builtin::i32(15)), "a+10u32==15");
		#line 1389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a + Builtin::i64(10LL) == Builtin::i32(15)), "a+10i64==15");
		#line 1390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a + Builtin::u64(10ULL) == Builtin::i32(15)), "a+10u64==15");
		#line 1391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a + Builtin::i128(10LL) == Builtin::i32(15)), "a+10i128==15");
		#line 1392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a + Builtin::u128(10ULL) == Builtin::i32(15)), "a+10u128==15");
		#line 1395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a - Builtin::i32(12) == Builtin::i32(-7)), "a-12==-7");
		#line 1396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a * Builtin::i32(2) == Builtin::i32(10)), "a*2==10");
		#line 1397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, Builtin::i32(2)) == Builtin::i32(2)), "a\\2==2");
		#line 1398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a % Builtin::i32(2) == Builtin::i32(1)), "a%2==1");
		#line 1399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT(((a & Builtin::i32(1)) == Builtin::i32(1)), "(a&1)==1");
		#line 1400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT(((a | Builtin::i32(1)) == Builtin::i32(5)), "(a|1)==5");
		#line 1401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT(((a ^ Builtin::i32(1)) == Builtin::i32(4)), "(a^1)==4");
		#line 1402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a << Builtin::i32(1) == Builtin::i32(10)), "a<<1==10");
		#line 1403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a >> Builtin::i32(1) == Builtin::i32(2)), "a>>1==2");
		#line 1404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a = Builtin::i8(-5);
		#line 1405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_UFCS(_operator_gt_gt_gt_eq)(a, Builtin::i32(2));
		#line 1406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == Builtin::i32(0b00111110)), "a==0b0011_1110");
		#line 1407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_gt)(a, Builtin::i32(2)) == Builtin::i32(0b00001111)), "a>>>2==0b0000_1111");
		#line 1408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_gt)(a, Builtin::i32(7)) == Builtin::i32(0)), "a>>>7==0");
		#line 1411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a = Builtin::i8(5);
		#line 1412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == Builtin::i32(5)), "a==5");
		#line 1413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a != Builtin::i32(6)), "a!=6");
		#line 1414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT(((a <=> Builtin::i32(6)) < 0), "a<6");
		#line 1415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT(((a <=> Builtin::i32(5)) <= 0), "a<=5");
		#line 1416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT(((a <=> Builtin::i32(4)) > 0), "a>4");
		#line 1417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT(((a <=> Builtin::i32(5)) >= 0), "a>=5");
		#line 1420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a = Builtin::i8(5);
		#line 1421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a++;
		#line 1422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a--;
		#line 1423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a += Builtin::i32(5);
		#line 1424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a -= Builtin::i32(5);
		#line 1425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a *= Builtin::i32(2);
		#line 1426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_UFCS(_operator_bsl_eq)(a, Builtin::i32(2));
		#line 1427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a %= Builtin::i32(1);
		#line 1428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a &= Builtin::i32(1);
		#line 1429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a |= Builtin::i32(1);
		#line 1430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a ^= Builtin::i32(1);
		#line 1431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a <<= Builtin::i32(1);
		#line 1432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a >>= Builtin::i32(1);
		#line 1433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == Builtin::i32(0)), "a==0");
		#line 1434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a = Builtin::i8(10);
		#line 1435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_not)(a) == Builtin::i32(-11)), "~a==-11");
		#line 1438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::i8 b = Builtin::i8(5); 
		#line 1439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::Nullable<Builtin::i8> c = nullptr; 
		#line 1440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::Nullable<Builtin::i8> d = Builtin::i8(5); 
		#line 1441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a != b), "a!=b");
		#line 1442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((b != c), "b!=c");
		#line 1443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((!Builtin::IdentityEquals(b, c)), "b!==c");
		#line 1444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT(((b <=> c) > 0), "b>c");
		#line 1445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((c != b), "c!=b");
		#line 1446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((c == nullptr), "c==null");
		#line 1447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((d != nullptr), "d!=null");
		#line 1448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT(((c <=> d) < 0), "c<d");
		#line 1449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((b == d), "b==d");
		#line 1453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::Nullable<Builtin::ObjectRef> o = c; 
		#line 1454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		o = d;
		#line 1455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_ne_eq_mul)(b, o)), "b!=*o");
		#line 1456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		IComparable<Builtin::i8> icomp = a; 
		#line 1457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT(((icomp <=> b) > 0), "icomp>b");
		#line 1460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(a.$ref()) == Builtin::i32(10)), "a.HashCode==10");
		#line 1461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(a) == Builtin::i32(10)), "#a==10");
		#line 1462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		b = Builtin::i8(-6);
		#line 1463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(b) == Builtin::u64(18446744073709551610ULL)), "#b==18446744073709551610u");
		#line 1465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(ToInt32)(b.$ref()) == Builtin::i32(-6)), "b.ToInt32()==-6");
		#line 1466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(NarrowToUInt64)(b.$ref()) == Builtin::u64(18446744073709551610ULL)), "b.NarrowToUInt64()==18446744073709551610u");
		#line 1469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(Abs)(b.$ref()) == Builtin::i32(6)), "b.Abs==6");
		#line 1470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(CheckedAbs)(b.$ref()) == Builtin::i8(6)), "b.CheckedAbs==6i8");
		#line 1471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(CheckedAbs)(ADV_USPCS(MinValue, Builtin::i8)().$ref()) == nullptr), "i8.MinValue.CheckedAbs==null");
		#line 1472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(StrictAbs)(b.$ref()) == Builtin::i32(6)), "b.StrictAbs==6");
		#line 1473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(WrappingAbs)(ADV_USPCS(MinValue, Builtin::i8)().$ref()) == ADV_USPCS(MinValue, Builtin::i8)()), "i8.MinValue.WrappingAbs==i8.MinValue");
		#line 1474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(SaturatingAbs)(ADV_USPCS(MinValue, Builtin::i8)().$ref()) == ADV_USPCS(MaxValue, Builtin::i8)()), "i8.MinValue.SaturatingAbs==i8.MaxValue");
		#line 1475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		{
			#line 1476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			const auto& [result, overflowed] = ADV_UPCS(OverflowingAbs)(ADV_USPCS(MinValue, Builtin::i8)().$ref());
			#line 1477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			ADV_ASSERT((result == ADV_USPCS(MinValue, Builtin::i8)() && overflowed), "result==i8.MinValue&&overflowed");
		}
		#line 1479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(IsFinite)(b.$ref())), "b.IsFinite");
		#line 1480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(IsInteger)(b.$ref())), "b.IsInteger");
		#line 1481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(IsNegative)(b.$ref())), "b.IsNegative");
		#line 1482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(IsPositive)(a.$ref())), "a.IsPositive");
		#line 1483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((!ADV_UPCS(IsPositive)(b.$ref())), "!b.IsPositive");
		#line 1484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(IsCanonical)(b.$ref())), "b.IsCanonical");
		#line 1485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((!ADV_UPCS(IsComplexNumber)(b.$ref())), "!b.IsComplexNumber");
		#line 1486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(IsRealNumber)(b.$ref())), "b.IsRealNumber");
		#line 1487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((!ADV_UPCS(IsImaginaryNumber)(b.$ref())), "!b.IsImaginaryNumber");
		#line 1488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(IsEvenInteger)(b.$ref())), "b.IsEvenInteger");
		#line 1489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((!ADV_UPCS(IsOddInteger)(b.$ref())), "!b.IsOddInteger");
		#line 1490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((!ADV_UPCS(IsInfinity)(b.$ref())), "!b.IsInfinity");
		#line 1491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((!ADV_UPCS(IsPositiveInfinity)(b.$ref())), "!b.IsPositiveInfinity");
		#line 1492 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((!ADV_UPCS(IsNegativeInfinity)(b.$ref())), "!b.IsNegativeInfinity");
		#line 1493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((!ADV_UPCS(IsNaN)(b.$ref())), "!b.IsNaN");
		#line 1494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(IsNormal)(b.$ref())), "b.IsNormal");
		#line 1495 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((!ADV_UPCS(IsSubnormal)(b.$ref())), "!b.IsSubnormal");
		#line 1496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((!ADV_UPCS(IsZero)(b.$ref())), "!b.IsZero");
		#line 1499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(Sign)(a.$ref()) == +Builtin::i32(1)), "a.Sign==+1");
		#line 1500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(Sign)(b.$ref()) == Builtin::i32(-1)), "b.Sign==-1");
		#line 1501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(CopySign)(a.$ref(), b) == Builtin::i32(-10)), "a.CopySign(b)==-10");
		#line 1502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(Max)(a.$ref(), b) == a), "a.Max(b)==a");
		#line 1503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(Min)(a.$ref(), b) == b), "a.Min(b)==b");
		#line 1504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(MaxNumber)(a.$ref(), b) == a), "a.MaxNumber(b)==a");
		#line 1505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(MinNumber)(a.$ref(), b) == b), "a.MinNumber(b)==b");
		#line 1506 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(Clamp)(b.$ref(), Builtin::i8(-5), +Builtin::i8(5)) == Builtin::i32(-5)), "b.Clamp(-5i8,+5i8)==-5");
		#line 1509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::i8(2).$ref()) == Builtin::i32(1)), "2i8.Log2==1");
		#line 1510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::i8(16).$ref()) == Builtin::i32(4)), "16i8.Log2==4");
		#line 1511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::i8(64).$ref()) == Builtin::i32(6)), "64i8.Log2==6");
		#line 1512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::i8(120).$ref()) == Builtin::i32(6)), "120i8.Log2==6");
		#line 1513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::i8(2).$ref()) == Builtin::i32(1)), "2i8.Log2Ceiling==1");
		#line 1514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::i8(16).$ref()) == Builtin::i32(4)), "16i8.Log2Ceiling==4");
		#line 1515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::i8(65).$ref()) == Builtin::i32(7)), "65i8.Log2Ceiling==7");
		#line 1516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::i8(120).$ref()) == Builtin::i32(7)), "120i8.Log2Ceiling==7");
		#line 1517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(CheckedLog2)(Builtin::i8(0).$ref()) == nullptr), "0i8.CheckedLog2==null");
		#line 1518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(Builtin::i8(5).$ref()) == Builtin::i32(0)), "5i8.Log10==0");
		#line 1519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(a.$ref()) == Builtin::i32(1)), "a.Log10==1");
		#line 1520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(ADV_USPCS(MaxValue, Builtin::i8)().$ref()) == Builtin::i32(2)), "i8.MaxValue.Log10==2");
		#line 1521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(Log)(Builtin::i8(5).$ref(), Builtin::i8(5)) == Builtin::i32(1)), "5i8.Log(5i8)==1");
		#line 1522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(CheckedLog)(Builtin::i8(5).$ref(), Builtin::i8(-5)) == nullptr), "5i8.CheckedLog(-5i8)==null");
		#line 1523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(Midpoint)(a.$ref(), Builtin::i8(30)) == Builtin::i32(20)), "a.Midpoint(30i8)==20");
		#line 1524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(Midpoint)(Builtin::i8(100).$ref(), ADV_USPCS(MaxValue, Builtin::i8)()) == Builtin::i32(113)), "100i8.Midpoint(i8.MaxValue)==113");
		#line 1525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)(a.$ref(), Builtin::i8(10)) == Builtin::i32(10)), "a.NextMultipleOf(10i8)==10");
		#line 1526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)(Builtin::i8(11).$ref(), Builtin::i8(10)) == Builtin::i32(20)), "11i8.NextMultipleOf(10i8)==20");
		#line 1527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)(Builtin::i8(60).$ref(), Builtin::i8(8)) == Builtin::i32(64)), "60i8.NextMultipleOf(8i8)==64");
		#line 1528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)((Builtin::i8(-13)).$ref(), Builtin::i8(4)) == Builtin::i32(-12)), "(-13i8).NextMultipleOf(4i8)==-12");
		#line 1529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)((Builtin::i8(-13)).$ref(), Builtin::i8(-4)) == Builtin::i32(-16)), "(-13i8).NextMultipleOf(-4i8)==-16");
		#line 1530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(ByteCount)(a.$ref()) == Builtin::i32(1)), "a.ByteCount==1");
		#line 1531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(ByteSwapped)(a.$ref()) == a), "a.ByteSwapped==a");
		#line 1532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_not)(Builtin::i8(0b1010), Builtin::i32(3)) == Builtin::i32(0b01010000)), "0b1010_i8<<~3==0b0101_0000");
		#line 1533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_not)(Builtin::i8(0b1010), Builtin::i32(5)) == Builtin::i32(0b01000001)), "0b1010_i8<<~5==0b0100_0001");
		#line 1534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_not)(Builtin::i8(0b1010), Builtin::i32(3)) == Builtin::i32(0b01000001)), "0b1010_i8>>~3==0b0100_0001");
		#line 1535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_not)(Builtin::i8(0b1010), Builtin::i32(5)) == Builtin::i32(0b01010000)), "0b1010_i8>>~5==0b0101_0000");
		#line 1537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(IsMultipleOf)(a.$ref(), Builtin::i8(5))), "a.IsMultipleOf(5i8)");
		#line 1538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((!ADV_UFCS(IsMultipleOf)(a.$ref(), Builtin::i8(6))), "!a.IsMultipleOf(6i8)");
		#line 1540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(MultiplyBy10)(a.$ref()) == Builtin::i32(100)), "a.MultiplyBy10==100");
		#line 1541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(MultiplyBy16)(a.$ref()) == Builtin::i32(160) + Builtin::i32(2) * ADV_USPCS(MinValue, Builtin::i8)()), "a.MultiplyBy16==160+2i32*i8.MinValue");
		#line 1544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_qst)(a, Builtin::i8(100)) == Builtin::i8(110)), "a+?100i8==110i8");
		#line 1545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_qst)(a, ADV_USPCS(MaxValue, Builtin::i8)()) == nullptr), "a+?i8.MaxValue==null");
		#line 1546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_UFCS(_operator_add_qst_eq)(a, Builtin::i8(5));
		#line 1547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == Builtin::i32(15)), "a==15");
		#line 1548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_UFCS(_operator_add_qst_eq)(a, Builtin::i8(120));
		#line 1549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == Builtin::i32(15)), "a==15");
		#line 1550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_ne)(a, Builtin::i8(100)) == Builtin::i32(115)), "a+!100i8==115");
		#line 1551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_mod)(a, Builtin::i8(100)) == Builtin::i32(115)), "a+%100i8==115");
		#line 1552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_mod)(a, Builtin::i8(113)) == ADV_USPCS(MinValue, Builtin::i8)()), "a+%113i8==i8.MinValue");
		#line 1553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_UFCS(_operator_add_mod_eq)(a, ADV_USPCS(MaxValue, Builtin::i8)());
		#line 1554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == Builtin::i32(-114)), "a==-114");
		#line 1555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_or)(a, (Builtin::i8(-115))) == ADV_USPCS(MinValue, Builtin::i8)()), "a+|(-115i8)==i8.MinValue");
		#line 1556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_UFCS(_operator_add_or_eq)(a, ADV_USPCS(MaxValue, Builtin::i8)());
		#line 1557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == Builtin::i32(13)), "a==13");
		#line 1558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_or)(a, Builtin::i8(120)) == ADV_USPCS(MaxValue, Builtin::i8)()), "a+|120i8==i8.MaxValue");
		#line 1559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		{
			#line 1560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_add_mod_qst)(a, Builtin::i8(120));
			#line 1561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			ADV_ASSERT((result == Builtin::i32(-123) && overflowed), "result==-123&&overflowed");
		}
		#line 1564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a = ADV_USPCS(MaxValue, Builtin::i8)() - Builtin::i32(1);
		#line 1565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_add_qst_postfix)(a) == ADV_USPCS(MaxValue, Builtin::i8)() - Builtin::i32(1)), "a++?==i8.MaxValue-1");
		#line 1566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::i8)()), "a==i8.MaxValue");
		#line 1567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_UFCS(_operator_add_add_mod_postfix)(a);
		#line 1568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::i8)()), "a==i8.MinValue");
		#line 1569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a = ADV_USPCS(MaxValue, Builtin::i8)();
		#line 1570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_UFCS(_operator_add_add_or_postfix)(a);
		#line 1571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::i8)()), "a==i8.MaxValue");
		#line 1573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		{
			#line 1574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.$ref(), Builtin::i8(0), Builtin::Boolean(false));
			#line 1575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			ADV_ASSERT((result == ADV_USPCS(MaxValue, Builtin::i8)() && !overflowed), "result==i8.MaxValue&&!overflowed");
		}
		#line 1577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		{
			#line 1578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.$ref(), Builtin::i8(-5), Builtin::Boolean(true));
			#line 1579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			ADV_ASSERT((result == Builtin::i32(123) && !overflowed), "result==123&&!overflowed");
		}
		#line 1581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		{
			#line 1582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.$ref(), Builtin::i8(0), Builtin::Boolean(true));
			#line 1583 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			ADV_ASSERT((result == ADV_USPCS(MinValue, Builtin::i8)() && overflowed), "result==i8.MinValue&&overflowed");
		}
		#line 1585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		{
			#line 1586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.$ref(), Builtin::i8(10), Builtin::Boolean(true));
			#line 1587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			ADV_ASSERT((result == Builtin::i32(-118) && overflowed), "result==-118&&overflowed");
		}
		#line 1590 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_qst)(a, Builtin::i8(100)) == Builtin::i8(27)), "a-?100i8==27i8");
		#line 1591 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_qst)(-a, ADV_USPCS(MaxValue, Builtin::i8)()) == nullptr), "-a-?i8.MaxValue==null");
		#line 1592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_UFCS(_operator_sub_qst_eq)(a, Builtin::i8(5));
		#line 1593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == Builtin::i32(122)), "a==122");
		#line 1594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_UFCS(_operator_sub_qst_eq)(a, Builtin::i8(120));
		#line 1595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == Builtin::i32(2)), "a==2");
		#line 1596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_ne)(a, Builtin::i8(100)) == Builtin::i32(-98)), "a-!100i8==-98");
		#line 1597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_mod)(-a, Builtin::i8(127)) == ADV_USPCS(MaxValue, Builtin::i8)()), "-a-%127i8==i8.MaxValue");
		#line 1598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_mod)(a, Builtin::i8(113)) == Builtin::i32(-111)), "a-%113i8==-111");
		#line 1599 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_UFCS(_operator_sub_mod_eq)(a, ADV_USPCS(MaxValue, Builtin::i8)());
		#line 1600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == Builtin::i32(-125)), "a==-125");
		#line 1601 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_or)(a, Builtin::i8(4)) == ADV_USPCS(MinValue, Builtin::i8)()), "a-|4i8==i8.MinValue");
		#line 1602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_UFCS(_operator_sub_or_eq)(a, ADV_USPCS(MaxValue, Builtin::i8)());
		#line 1603 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::i8)()), "a==i8.MinValue");
		#line 1604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		{
			#line 1605 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_sub_mod_qst)(a, Builtin::i8(2));
			#line 1606 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			ADV_ASSERT((result == Builtin::i32(126) && overflowed), "result==126&&overflowed");
		}
		#line 1609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a = ADV_USPCS(MinValue, Builtin::i8)() + Builtin::i32(1);
		#line 1610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_sub_qst_postfix)(a) == ADV_USPCS(MinValue, Builtin::i8)() + Builtin::i32(1)), "a--?==i8.MinValue+1");
		#line 1611 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::i8)()), "a==i8.MinValue");
		#line 1612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_UFCS(_operator_sub_sub_mod_postfix)(a);
		#line 1613 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::i8)()), "a==i8.MaxValue");
		#line 1614 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a = ADV_USPCS(MinValue, Builtin::i8)();
		#line 1615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_UFCS(_operator_sub_sub_or_postfix)(a);
		#line 1616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::i8)()), "a==i8.MinValue");
		#line 1618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		{
			#line 1619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.$ref(), Builtin::i8(0), Builtin::Boolean(false));
			#line 1620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			ADV_ASSERT((result == ADV_USPCS(MinValue, Builtin::i8)() && !overflowed), "result==i8.MinValue&&!overflowed");
		}
		#line 1622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		{
			#line 1623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.$ref(), Builtin::i8(-5), Builtin::Boolean(true));
			#line 1624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			ADV_ASSERT((result == Builtin::i32(-124) && !overflowed), "result==-124&&!overflowed");
		}
		#line 1626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		{
			#line 1627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.$ref(), Builtin::i8(0), Builtin::Boolean(true));
			#line 1628 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			ADV_ASSERT((result == ADV_USPCS(MaxValue, Builtin::i8)() && overflowed), "result==i8.MaxValue&&overflowed");
		}
		#line 1630 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		{
			#line 1631 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.$ref(), Builtin::i8(10), Builtin::Boolean(true));
			#line 1632 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			ADV_ASSERT((result == Builtin::i32(117) && overflowed), "result==117&&overflowed");
		}
		#line 1635 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_qst)(a, Builtin::i8(1)) == ADV_USPCS(MinValue, Builtin::i8)()), "a*?1i8==i8.MinValue");
		#line 1636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_qst)(a, Builtin::i8(2)) == nullptr), "a*?2i8==null");
		#line 1637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_UFCS(_operator_mul_qst_eq)(a, Builtin::i8(5));
		#line 1638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::i8)()), "a==i8.MinValue");
		#line 1639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a = Builtin::i8(15);
		#line 1640 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == Builtin::i32(15)), "a==15");
		#line 1641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_ne)(a, Builtin::i8(3)) == Builtin::i32(45)), "a*!3i8==45");
		#line 1642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_mod)(a, Builtin::i8(6)) == Builtin::i32(90)), "a*%6i8==90");
		#line 1643 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_mod)(a, Builtin::i8(9)) == Builtin::i32(-121)), "a*%9i8==-121");
		#line 1644 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_UFCS(_operator_mul_mod_eq)(a, Builtin::i8(6));
		#line 1645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == Builtin::i32(90)), "a==90");
		#line 1646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_or)(a, (Builtin::i8(-10))) == ADV_USPCS(MinValue, Builtin::i8)()), "a*|(-10i8)==i8.MinValue");
		#line 1647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_UFCS(_operator_mul_or_eq)(a, Builtin::i8(2));
		#line 1648 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::i8)()), "a==i8.MaxValue");
		#line 1649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_or)(a, Builtin::i8(2)) == ADV_USPCS(MaxValue, Builtin::i8)()), "a*|2i8==i8.MaxValue");
		#line 1650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		{
			#line 1651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_mul_mod_qst)(a, Builtin::i8(2));
			#line 1652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			ADV_ASSERT((result == Builtin::i32(-2) && overflowed), "result==-2&&overflowed");
		}
		#line 1654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a = Builtin::i8(5);
		#line 1655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		{
			#line 1656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			const auto& [low, high] = ADV_UFCS(_operator_mul_gt)(a, (Builtin::i8(120)));
			#line 1657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			ADV_ASSERT((low == Builtin::i32(88) && high == Builtin::i32(2)), "low==88&&high==2");
		}
		#line 1659 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		{
			#line 1660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			const auto& [low, high] = ADV_UFCS(_operator_mul_gt)(a, (Builtin::i8(-100)));
			#line 1661 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			ADV_ASSERT((low == Builtin::i32(12) && high == Builtin::i32(-2)), "low==12&&high==-2");
		}
		#line 1663 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a = ADV_USPCS(MaxValue, Builtin::i8)();
		#line 1664 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		{
			#line 1665 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			const auto& [low, high] = ADV_UFCS(CarryingMul)(a.$ref(), Builtin::i8(2), Builtin::i8(12));
			#line 1666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			ADV_ASSERT((low == Builtin::i32(10) && high == Builtin::i32(1)), "low==10&&high==1");
		}
		#line 1668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		{
			#line 1669 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			const auto& [low, high] = ADV_UFCS(CarryingMul)(a.$ref(), Builtin::i8(-2), Builtin::i8(-12));
			#line 1670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			ADV_ASSERT((low == Builtin::i32(246) && high == Builtin::i32(-2)), "low==246&&high==-2");
		}
		#line 1673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a = Builtin::i8(10);
		#line 1674 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, Builtin::i32(6)) == Builtin::i32(1)), "a\\6==1");
		#line 1675 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a /= Builtin::i32(6);
		#line 1676 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == Builtin::i32(2)), "a==2");
		#line 1677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a = Builtin::i8(10);
		#line 1678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		{
			#line 1679 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)(a, Builtin::i8(6));
			#line 1680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			ADV_ASSERT((div == Builtin::i32(1) && rem == Builtin::i32(4)), "div==1&&rem==4");
		}
		#line 1682 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_qst)(a, Builtin::i8(5)) == Builtin::i8(2)), "a\\?5i8==2i8");
		#line 1683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_qst)(a, Builtin::i8(0)) == nullptr), "a\\?0i8==null");
		#line 1684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_qst)(ADV_USPCS(MinValue, Builtin::i8)(), (Builtin::i8(-1))) == nullptr), "i8.MinValue\\?(-1i8)==null");
		#line 1686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_ne)(a, Builtin::i8(5)) == Builtin::i32(2)), "a\\!5i8==2");
		#line 1687 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_UFCS(_operator_bsl_mod_eq)(a, Builtin::i8(5));
		#line 1688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == Builtin::i32(2)), "a==2");
		#line 1689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a = Builtin::i8(10);
		#line 1690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_mod)(ADV_USPCS(MinValue, Builtin::i8)(), (Builtin::i8(-1))) == ADV_USPCS(MinValue, Builtin::i8)()), "i8.MinValue\\%(-1i8)==i8.MinValue");
		#line 1691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_UFCS(_operator_bsl_or_eq)(a, Builtin::i8(5));
		#line 1692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == Builtin::i32(2)), "a==2");
		#line 1693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a = Builtin::i8(10);
		#line 1694 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_or)(ADV_USPCS(MinValue, Builtin::i8)(), (Builtin::i8(-1))) == ADV_USPCS(MaxValue, Builtin::i8)()), "i8.MinValue\\|(-1i8)==i8.MaxValue");
		#line 1695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		{
			#line 1696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_bsl_mod_qst)(ADV_USPCS(MinValue, Builtin::i8)(), (Builtin::i8(-1)));
			#line 1697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			ADV_ASSERT((result == ADV_USPCS(MinValue, Builtin::i8)() && overflowed), "result==i8.MinValue&&overflowed");
		}
		#line 1700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_bsl)(a, Builtin::i8(5)) == Builtin::i8(2)), "a\\\\5i8==2i8");
		#line 1701 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_bsl)(a, Builtin::i8(6)) == nullptr), "a\\\\6i8==null");
		#line 1702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_bsl_qst)(a, Builtin::i8(0)) == nullptr), "a\\\\?0i8==null");
		#line 1704 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_not)(a, Builtin::i8(6)) == Builtin::i32(2)), "a/~6i8==2");
		#line 1705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_lt)(a, Builtin::i8(6)) == Builtin::i32(1)), "a/<6i8==1");
		#line 1706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_gt)(a, Builtin::i8(6)) == Builtin::i32(2)), "a/>6i8==2");
		#line 1707 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_not)(a, (Builtin::i8(-6))) == Builtin::i32(-2)), "a/~(-6i8)==-2");
		#line 1708 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_lt)(a, (Builtin::i8(-6))) == Builtin::i32(-2)), "a/<(-6i8)==-2");
		#line 1709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_gt)(a, (Builtin::i8(-6))) == Builtin::i32(-1)), "a/>(-6i8)==-1");
		#line 1711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_qst)(a, Builtin::i8(5)) == Builtin::i8(0)), "a%?5i8==0i8");
		#line 1712 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_qst)(a, Builtin::i8(0)) == nullptr), "a%?0i8==null");
		#line 1713 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_qst)(ADV_USPCS(MinValue, Builtin::i8)(), (Builtin::i8(-1))) == nullptr), "i8.MinValue%?(-1i8)==null");
		#line 1715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_ne)(a, Builtin::i8(6)) == Builtin::i32(4)), "a%!6i8==4");
		#line 1716 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_UFCS(_operator_mod_mod_eq)(a, Builtin::i8(6));
		#line 1717 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == Builtin::i32(4)), "a==4");
		#line 1718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a = Builtin::i8(10);
		#line 1719 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_mod)(ADV_USPCS(MinValue, Builtin::i8)(), (Builtin::i8(-1))) == Builtin::i32(0)), "i8.MinValue%%(-1i8)==0");
		#line 1720 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		{
			#line 1721 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_mod_mod_qst)(ADV_USPCS(MinValue, Builtin::i8)(), (Builtin::i8(-1)));
			#line 1722 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			ADV_ASSERT((result == Builtin::i32(0) && overflowed), "result==0&&overflowed");
		}
		#line 1725 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_qst)(a) == Builtin::i8(-10)), "-?a==-10i8");
		#line 1726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_qst)(ADV_USPCS(MinValue, Builtin::i8)()) == nullptr), "-?i8.MinValue==null");
		#line 1727 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_ne)(a) == Builtin::i32(-10)), "-!a==-10");
		#line 1728 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_mod)(a) == Builtin::i32(-10)), "-%a==-10");
		#line 1729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_mod)(ADV_USPCS(MinValue, Builtin::i8)()) == ADV_USPCS(MinValue, Builtin::i8)()), "-%i8.MinValue==i8.MinValue");
		#line 1730 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_or)(a) == Builtin::i32(-10)), "-|a==-10");
		#line 1731 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_or)(ADV_USPCS(MinValue, Builtin::i8)()) == ADV_USPCS(MaxValue, Builtin::i8)()), "-|i8.MinValue==i8.MaxValue");
		#line 1733 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_bsl)(ADV_USPCS(MaxValue, Builtin::i8)(), Builtin::u32(4U)) == Builtin::i32(0b00000111)), "i8.MaxValue>>\\4u==0b0000_0111");
		#line 1734 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_bsl)(ADV_USPCS(MaxValue, Builtin::i8)(), Builtin::u32(10U)) == Builtin::i32(0)), "i8.MaxValue>>\\10u==0");
		#line 1735 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_bsl)(ADV_USPCS(MinValue, Builtin::i8)(), Builtin::u32(10U)) == Builtin::i32(-1)), "i8.MinValue>>\\10u==-1");
		#line 1736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_bsl)(ADV_USPCS(MaxValue, Builtin::i8)(), Builtin::u32(10U)) == Builtin::i32(0)), "i8.MaxValue<<\\10u==0");
		#line 1737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_qst)(ADV_USPCS(MaxValue, Builtin::i8)(), Builtin::i32(4)) == Builtin::i8(0b00000111)), "i8.MaxValue>>?4==0b0000_0111i8");
		#line 1738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_qst)(ADV_USPCS(MaxValue, Builtin::i8)(), Builtin::i32(10)) == nullptr), "i8.MaxValue>>?10==null");
		#line 1739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_qst)(ADV_USPCS(MaxValue, Builtin::i8)(), Builtin::i32(10)) == nullptr), "i8.MaxValue<<?10==null");
		#line 1740 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_ne)(ADV_USPCS(MaxValue, Builtin::i8)(), Builtin::i32(4)) == Builtin::i32(0b00000111)), "i8.MaxValue>>!4==0b0000_0111");
		#line 1741 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_mod)(ADV_USPCS(MaxValue, Builtin::i8)(), Builtin::i32(12)) == Builtin::i32(0b00000111)), "i8.MaxValue>>%12==0b0000_0111");
		#line 1742 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a = ADV_USPCS(MaxValue, Builtin::i8)();
		#line 1743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_UFCS(_operator_gt_gt_mod_eq)(a, Builtin::i32(12));
		#line 1744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_mod)(a, Builtin::i32(12)) == Builtin::i32(0b01110000)), "a<<%12==0b0111_0000");
		#line 1745 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		{
			#line 1746 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_gt_gt_mod_qst)(ADV_USPCS(MaxValue, Builtin::i8)(), Builtin::i32(12));
			#line 1747 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			ADV_ASSERT((result == Builtin::i32(0b00000111) && overflowed), "result==0b0000_0111&&overflowed");
		}
		#line 1751 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor)(a, Builtin::u32(2U)) == Builtin::i32(49)), "a^^2u==49");
		#line 1752 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_UFCS(_operator_xor_xor_eq)(a, Builtin::u32(2U));
		#line 1753 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == Builtin::i32(49)), "a==49");
		#line 1754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor)(Builtin::i8(3), Builtin::u32(4U)) == Builtin::i32(81)), "3i8^^4u==81");
		#line 1755 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_qst)(Builtin::i8(3), Builtin::u32(4U)) == Builtin::i8(81)), "3i8^^?4u==81i8");
		#line 1756 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_qst)(Builtin::i8(3), Builtin::u32(5U)) == nullptr), "3i8^^?5u==null");
		#line 1757 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_UFCS(_operator_xor_xor_qst_eq)(a, Builtin::u32(2U));
		#line 1758 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == Builtin::i32(49)), "a==49");
		#line 1759 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_ne)(Builtin::i8(3), Builtin::u32(4U)) == Builtin::i32(81)), "3i8^^!4u==81");
		#line 1760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_mod)(Builtin::i8(3), Builtin::u32(5U)) == Builtin::i32(-13)), "3i8^^%5u==-13");
		#line 1761 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_UFCS(_operator_xor_xor_mod_eq)(a, Builtin::u32(2U));
		#line 1762 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == Builtin::i32(97)), "a==97");
		#line 1763 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_or)(Builtin::i8(3), Builtin::u32(4U)) == Builtin::i32(81)), "3i8^^|4u==81");
		#line 1764 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_or)(Builtin::i8(3), Builtin::u32(5U)) == ADV_USPCS(MaxValue, Builtin::i8)()), "3i8^^|5u==i8.MaxValue");
		#line 1765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		{
			#line 1766 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_xor_xor_mod_qst)(Builtin::i8(3), Builtin::u32(5U));
			#line 1767 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			ADV_ASSERT((result == Builtin::i32(-13) && overflowed), "result==-13&&overflowed");
		}
		return true;
	}();
	#endif	
} namespace $extensions { using namespace System;
#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	auto _operator_eq_eq_mul($extension_Int8_20_i8 const& $this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool
	{
		#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		{
			#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			auto __tmp0 = Builtin::Cast<false, $extension_Int8_20_i8>(obj);
			#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			if ((__tmp0.IsValid())) {
				#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				const auto& obj = *__tmp0;
				
				#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				return $this == obj;
			}
		}
		#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::Boolean(false);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	auto _operator_lt_eq_gt_mul($extension_Int8_73_i8 const& $this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32
	{
		#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		{
			#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			auto __tmp0 = Builtin::Cast<false, $extension_Int8_73_i8>(obj);
			#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			if ((__tmp0.IsValid())) {
				#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				const auto& obj = *__tmp0;
				
				#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				return $this <=> obj;
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
		return Builtin::i32(1);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	auto MaxMagnitude($extension_Int8_268_i8 const& $this LIFETIMEBOUND, $extension_Int8_268_i8 rhs) noexcept -> const typename $extension_Int8_268_i8
	{
		#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::Auto<decltype($this)> absX = $this; 
		#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((absX <=> Builtin::i32(0)) < 0) {
			#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			absX = UnsafeCast<$extension_Int8_268_i8>(-Builtin::i32{absX});
			#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			if ((absX <=> Builtin::i32(0)) < 0) {
				#line 298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				return $this;
			}
		}
		#line 302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::Auto<decltype(rhs)> absY = rhs; 
		#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((absY <=> Builtin::i32(0)) < 0) {
			#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			absY = UnsafeCast<$extension_Int8_268_i8>(-Builtin::i32{absY});
			#line 305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			if ((absY <=> Builtin::i32(0)) < 0) {
				#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				return rhs;
			}
		}
		#line 310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((absX <=> absY) > 0) {
			#line 311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return $this;
		}
		#line 314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (absX == absY) {
			#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return ADV_UPCS(IsNegative)($this.$ref()) ? rhs : $this;
		}
		#line 318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return rhs;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	auto MinMagnitude($extension_Int8_268_i8 const& $this LIFETIMEBOUND, $extension_Int8_268_i8 rhs) noexcept -> const typename $extension_Int8_268_i8
	{
		#line 325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::Auto<decltype($this)> absX = $this; 
		#line 326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((absX <=> Builtin::i32(0)) < 0) {
			#line 327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			absX = UnsafeCast<$extension_Int8_268_i8>(-Builtin::i32{absX});
			#line 328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			if ((absX <=> Builtin::i32(0)) < 0) {
				#line 329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				return rhs;
			}
		}
		#line 333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::Auto<decltype(rhs)> absY = rhs; 
		#line 334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((absY <=> Builtin::i32(0)) < 0) {
			#line 335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			absY = UnsafeCast<$extension_Int8_268_i8>(-Builtin::i32{absY});
			#line 336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			if ((absY <=> Builtin::i32(0)) < 0) {
				#line 337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				return $this;
			}
		}
		#line 341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((absX <=> absY) < 0) {
			#line 342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return $this;
		}
		#line 345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (absX == absY) {
			#line 346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return ADV_UPCS(IsNegative)($this.$ref()) ? $this : rhs;
		}
		#line 349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return rhs;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	auto Parse($extension_Int8_268_i8 const& $this LIFETIMEBOUND, Builtin::Str input)  -> const typename $extension_Int8_268_i8
	{
		#line 356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::i8(0);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	auto TryParse($extension_Int8_268_i8 const& $this LIFETIMEBOUND, Builtin::Str input) noexcept -> const Builtin::Nullable<$extension_Int8_268_i8>
	{
		#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::i8(0);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	auto CopySign($extension_Int8_384_i8 const& $this LIFETIMEBOUND, $extension_Int8_384_i8 sign)  -> const typename $extension_Int8_384_i8
	{
		#line 389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::Auto<decltype($this)> absValue = $this; 
		#line 390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((absValue <=> Builtin::i32(0)) < 0) {
			#line 391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			absValue = UnsafeCast<$extension_Int8_384_i8>(-Builtin::i32{absValue});
		}
		#line 394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((sign <=> Builtin::i32(0)) >= 0) {
			#line 395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			if ((absValue <=> Builtin::i32(0)) < 0) {
				#line 396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				Builtin::Throw(Builtin::IntegerOverflowException{});
			}
			#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return absValue;
		}
		#line 402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return UnsafeCast<$extension_Int8_384_i8>(-Builtin::i32{absValue});
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	auto Log($extension_Int8_412_i8 const& $this LIFETIMEBOUND, $extension_Int8_412_i8 base)  -> const typename $extension_Int8_412_i8
	{
		#line 499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (const auto result = ADV_UFCS(CheckedLog)($this.$ref(), base)) {
			{
				#line 499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				return result;
			}
		}
		#line 502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	auto getCheckedIsqrt($extension_Int8_1187_i8 const & $this ) -> const Builtin::Nullable<$extension_Int8_1187_i8>
	{
		#line 1198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (ADV_UPCS(IsNegative)($this.$ref())) {
			#line 1199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return nullptr;
		}
		#line 1201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		constexpr Builtin::Auto<decltype(Builtin::Cast<true, $extension_Int8_1187_i8>(ADV_USFCS((Math), Isqrt8)(Builtin::Cast<true, Builtin::u8>(ADV_USPCS(MaxValue, $extension_Int8_1187_i8)()))))> MAX_RESULT = Builtin::Cast<true, $extension_Int8_1187_i8>(ADV_USFCS((Math), Isqrt8)(Builtin::Cast<true, Builtin::u8>(ADV_USPCS(MaxValue, $extension_Int8_1187_i8)())));
		#line 1202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, $extension_Int8_1187_i8>(ADV_USFCS((Math), Isqrt8)(Builtin::Cast<true, Builtin::u8>($this))))> result = Builtin::Cast<true, $extension_Int8_1187_i8>(ADV_USFCS((Math), Isqrt8)(Builtin::Cast<true, Builtin::u8>($this))); 
		#line 1203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ASSUME((result <=> Builtin::i32(0)) >= 0);
		#line 1204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ASSUME((result <=> MAX_RESULT) <= 0);
		#line 1205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return result;
	}
	} namespace System{

}