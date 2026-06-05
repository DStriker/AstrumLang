#include "Math.h"
#include "Int64.h"

namespace System {
//###############################################################################
//# Global type aliases
//###############################################################################
//###############################################################################
//# Type definitions
//###############################################################################

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
















static_assert(Builtin::usize(sizeof(Builtin::i64)) == Builtin::i32(8), "i64 should be 8 bytes");
static_assert(ADV_USPCS(MinValue, Builtin::i64)() == Builtin::i64(-9223372036854775807LL - 1), "i64.Min should be -9223372036854775808");
static_assert(ADV_USPCS(MaxValue, Builtin::i64)() == Builtin::i64(0x7FFFFFFFFFFFFFFFLL), "i64.Max should be 0x7FFFFFFFFFFFFFFF");
static_assert(ADV_UFCS_NONLOCAL(_operator_gt_gt_not)(ADV_USPCS(One, Builtin::i64)(), Builtin::i32(3)) == Builtin::i64(0x2000000000000000LL), "i64.One >>% 3 == 0x20_00_00_00_00_00_00_00");
static_assert(ADV_USPCS(IsSigned, Builtin::i64)(), "i64 must be signed");
static_assert(ADV_USPCS(MaxDigitCount, Builtin::i64)() == Builtin::i32(19), "i64 max digit count must be 19");
static_assert(ADV_UFCS_NONLOCAL(_operator_xor_xor)(Builtin::i64(2LL), Builtin::u32(62U)) == Builtin::i64(4611686018427387904LL), "2i64 ^^ 62u == 4_611_686_018_427_387_904");
static_assert(ADV_UPCS_NONLOCAL(ByteSwapped)(Builtin::i64(0x7b233d2a39fea339LL).__ref()) == Builtin::i64(0x39a3fe392a3d237bLL), "0x7b233d2a39fea339_i64.ByteSwapped == 0x39a3fe392a3d237b");
static_assert(Builtin::TypeIs<Builtin::i64, IComparable<Builtin::i64>>(), "i64 should implement IComparable<i64>");
static_assert(Builtin::TypeIs<Builtin::i64, IEquatable<Builtin::i64>>(), "i64 should implement IEquatable<i64>");
static_assert(Builtin::TypeIs<Builtin::i64, ISelfComparable>(), "i64 should implement ISelfComparable");
static_assert(Builtin::TypeIs<Builtin::i64, ISelfEquatable>(), "i64 should implement ISelfEquatable");
static_assert(Builtin::TypeIs<Builtin::i64, IAdditionOperators<Builtin::i64, Builtin::i64>>(), "i64 should implement IAdditionOperators<i64, i64>");
static_assert(Builtin::TypeIs<Builtin::i64, ISubtractionOperators<Builtin::i64, Builtin::i64>>(), "i64 should implement ISubtractionOperators<i64, i64>");
static_assert(Builtin::TypeIs<Builtin::i64, IMultiplyOperators<Builtin::i64, Builtin::i64>>(), "i64 should implement IMultiplyOperators<i64, i64>");
static_assert(Builtin::TypeIs<Builtin::i64, IDivisionOperators<Builtin::i64, Builtin::f64>>(), "i64 should implement IDivisionOperators<i64, f64>");
static_assert(Builtin::TypeIs<Builtin::i64, IIntDivOperators<Builtin::i64, Builtin::i64>>(), "i64 should implement IIntDivOperators<i64, i64>");
static_assert(Builtin::TypeIs<Builtin::i64, IModulusOperators<Builtin::i64, Builtin::i64>>(), "i64 should implement IModulusOperators<i64, i64>");
static_assert(Builtin::TypeIs<Builtin::i64, IBitwiseOperators<Builtin::i64, Builtin::i64>>(), "i64 should implement IBitwiseOperators<i64, i64>");
static_assert(Builtin::TypeIs<Builtin::i64, IShiftOperators<Builtin::i32, Builtin::i64>>(), "i64 should implement IShiftOperators<i32, i64>");
static_assert(Builtin::TypeIs<Builtin::i64, IUnaryPlusOperators<Builtin::i64>>(), "i64 should implement IUnaryPlusOperators<i64>");
static_assert(Builtin::TypeIs<Builtin::i64, IUnaryNegationOperators<Builtin::i64>>(), "i64 should implement IUnaryNegationOperators<i64>");
static_assert(Builtin::TypeIs<Builtin::i64, IIncrementOperators<Builtin::i64>>(), "i64 should implement IIncrementOperators<i64>");
static_assert(Builtin::TypeIs<Builtin::i64, IDecrementOperators<Builtin::i64>>(), "i64 should implement IDecrementOperators<i64>");
static_assert(ADV_UFCS_NONLOCAL(_operator_add_mod)(ADV_USPCS(MaxValue, Builtin::i64)(), Builtin::i64(1LL)) == ADV_USPCS(MinValue, Builtin::i64)(), "i64.MaxValue +% 1i64 == i64.MinValue");
static_assert(ADV_UFCS_NONLOCAL(_operator_add_or)(ADV_USPCS(MaxValue, Builtin::i64)(), Builtin::i64(1LL)) == ADV_USPCS(MaxValue, Builtin::i64)(), "i64.MaxValue +| 1i64 == i64.MaxValue");
#ifdef ADV_UNITTEST
	#line 1408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	static bool __Test_c7bf748618752b72 = [](){
		#line 1410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::i64 a = Builtin::i32(5); 
		#line 1413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a + Builtin::i8(10) == Builtin::i32(15)), u"a+10i8==15");
		#line 1414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a + Builtin::u8(10U) == Builtin::i32(15)), u"a+10u8==15");
		#line 1415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a + Builtin::i16(10) == Builtin::i32(15)), u"a+10i16==15");
		#line 1416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a + Builtin::u16(10U) == Builtin::i32(15)), u"a+10u16==15");
		#line 1417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a + Builtin::i64(10LL) == Builtin::i32(15)), u"a+10i64==15");
		#line 1418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a + Builtin::u32(10U) == Builtin::i32(15)), u"a+10u32==15");
		#line 1419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a + Builtin::i64(10LL) == Builtin::i32(15)), u"a+10i64==15");
		#line 1420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a + Builtin::u64(10ULL) == Builtin::i32(15)), u"a+10u64==15");
		#line 1421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a + Builtin::i128(10LL) == Builtin::i32(15)), u"a+10i128==15");
		#line 1422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a + Builtin::u128(10ULL) == Builtin::i32(15)), u"a+10u128==15");
		#line 1425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a - Builtin::i32(12) == Builtin::i32(-7)), u"a-12==-7");
		#line 1426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a * Builtin::i32(2) == Builtin::i32(10)), u"a*2==10");
		#line 1427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, Builtin::i32(2)) == Builtin::i32(2)), u"a\\2==2");
		#line 1428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a % Builtin::i32(2) == Builtin::i32(1)), u"a%2==1");
		#line 1429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT(((a & Builtin::i32(1)) == Builtin::i32(1)), u"(a&1)==1");
		#line 1430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT(((a | Builtin::i32(1)) == Builtin::i32(5)), u"(a|1)==5");
		#line 1431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT(((a ^ Builtin::i32(1)) == Builtin::i32(4)), u"(a^1)==4");
		#line 1432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a << Builtin::i32(1) == Builtin::i32(10)), u"a<<1==10");
		#line 1433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a >> Builtin::i32(1) == Builtin::i32(2)), u"a>>1==2");
		#line 1434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a = Builtin::i32(-5);
		#line 1435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_UFCS(_operator_gt_gt_gt_eq)(a, Builtin::i32(2));
		#line 1436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a == Builtin::i64(0b0011111111111111111111111111111111111111111111111111111111111110LL)), u"a==0b00111111_11111111_11111111_11111111_11111111_11111111_11111111_11111110");
		#line 1437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_gt)(a, Builtin::i32(2)) == Builtin::i64(0b0000111111111111111111111111111111111111111111111111111111111111LL)), u"a>>>2==0b00001111_11111111_11111111_11111111_11111111_11111111_11111111_11111111");
		#line 1438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_gt)(a, Builtin::i32(7)) == Builtin::i64(0b0000000001111111111111111111111111111111111111111111111111111111LL)), u"a>>>7==0b00000000_01111111_11111111_11111111_11111111_11111111_11111111_11111111");
		#line 1441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a = Builtin::i32(5);
		#line 1442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a == Builtin::i32(5)), u"a==5");
		#line 1443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a != Builtin::i32(6)), u"a!=6");
		#line 1444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT(((a <=> Builtin::i32(6)) < 0), u"a<6");
		#line 1445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT(((a <=> Builtin::i32(5)) <= 0), u"a<=5");
		#line 1446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT(((a <=> Builtin::i32(4)) > 0), u"a>4");
		#line 1447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT(((a <=> Builtin::i32(5)) >= 0), u"a>=5");
		#line 1450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a = Builtin::i32(5);
		#line 1451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a++;
		#line 1452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a--;
		#line 1453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a += Builtin::i32(5);
		#line 1454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a -= Builtin::i32(5);
		#line 1455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a *= Builtin::i32(2);
		#line 1456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_UFCS(_operator_bsl_eq)(a, Builtin::i32(2));
		#line 1457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a %= Builtin::i32(1);
		#line 1458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a &= Builtin::i32(1);
		#line 1459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a |= Builtin::i32(1);
		#line 1460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a ^= Builtin::i32(1);
		#line 1461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a <<= Builtin::i32(1);
		#line 1462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a >>= Builtin::i32(1);
		#line 1463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a == Builtin::i32(0)), u"a==0");
		#line 1464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a = Builtin::i32(10);
		#line 1465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_not)(a) == Builtin::i32(-11)), u"~a==-11");
		#line 1468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::i64 b = Builtin::i32(5); 
		#line 1469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Nullable<Builtin::i64> c = nullptr; 
		#line 1470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Nullable<Builtin::i64> d = Builtin::i32(5); 
		#line 1471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a != b), u"a!=b");
		#line 1472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((b != c), u"b!=c");
		#line 1473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((!Builtin::IdentityEquals(b, c)), u"b!==c");
		#line 1474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT(((b <=> c) > 0), u"b>c");
		#line 1475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((c != b), u"c!=b");
		#line 1476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((c == nullptr), u"c==null");
		#line 1477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((d != nullptr), u"d!=null");
		#line 1478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT(((c <=> d) < 0), u"c<d");
		#line 1479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((b == d), u"b==d");
		#line 1480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((Builtin::IdentityEquals(b, d)), u"b===d");
		#line 1483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Nullable<Builtin::ObjectRef> o = c; 
		#line 1484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		o = d;
		#line 1485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_ne_eq_mul)(b, o)), u"b!=*o");
		#line 1486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		IComparable<Builtin::i64> icomp = a; 
		#line 1487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT(((icomp <=> b) > 0), u"icomp>b");
		#line 1490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(a.__ref()) == Builtin::i32(10)), u"a.HashCode==10");
		#line 1491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(a) == Builtin::i32(10)), u"#a==10");
		#line 1492 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		b = Builtin::i32(-6);
		#line 1493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(b) == Builtin::u64(18446744073709551610ULL)), u"#b==18446744073709551610u");
		#line 1495 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(ToInt32)(b.__ref()) == Builtin::i32(-6)), u"b.ToInt32()==-6");
		#line 1496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(NarrowToUInt64)(b.__ref()) == Builtin::u64(18446744073709551610ULL)), u"b.NarrowToUInt64()==18446744073709551610u");
		#line 1499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(Abs)(b.__ref()) == Builtin::i32(6)), u"b.Abs==6");
		#line 1500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(CheckedAbs)(b.__ref()) == Builtin::i64(6LL)), u"b.CheckedAbs==6i64");
		#line 1501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(CheckedAbs)(ADV_USPCS(MinValue, Builtin::i64)().__ref()) == nullptr), u"i64.MinValue.CheckedAbs==null");
		#line 1502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(StrictAbs)(b.__ref()) == Builtin::i32(6)), u"b.StrictAbs==6");
		#line 1503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(WrappingAbs)(ADV_USPCS(MinValue, Builtin::i64)().__ref()) == ADV_USPCS(MinValue, Builtin::i64)()), u"i64.MinValue.WrappingAbs==i64.MinValue");
		#line 1504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(SaturatingAbs)(ADV_USPCS(MinValue, Builtin::i64)().__ref()) == ADV_USPCS(MaxValue, Builtin::i64)()), u"i64.MinValue.SaturatingAbs==i64.MaxValue");
		#line 1505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		{
			#line 1506 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			const auto& [result, overflowed] = ADV_UPCS(OverflowingAbs)(ADV_USPCS(MinValue, Builtin::i64)().__ref());
			#line 1507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			ADV_ASSERT((result == ADV_USPCS(MinValue, Builtin::i64)() && overflowed), u"result==i64.MinValue&&overflowed");
		}
		#line 1509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(IsFinite)(b.__ref())), u"b.IsFinite");
		#line 1510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(IsInteger)(b.__ref())), u"b.IsInteger");
		#line 1511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(IsNegative)(b.__ref())), u"b.IsNegative");
		#line 1512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(IsPositive)(a.__ref())), u"a.IsPositive");
		#line 1513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((!ADV_UPCS(IsPositive)(b.__ref())), u"!b.IsPositive");
		#line 1514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(IsCanonical)(b.__ref())), u"b.IsCanonical");
		#line 1515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((!ADV_UPCS(IsComplexNumber)(b.__ref())), u"!b.IsComplexNumber");
		#line 1516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(IsRealNumber)(b.__ref())), u"b.IsRealNumber");
		#line 1517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((!ADV_UPCS(IsImaginaryNumber)(b.__ref())), u"!b.IsImaginaryNumber");
		#line 1518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(IsEvenInteger)(b.__ref())), u"b.IsEvenInteger");
		#line 1519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((!ADV_UPCS(IsOddInteger)(b.__ref())), u"!b.IsOddInteger");
		#line 1520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((!ADV_UPCS(IsInfinity)(b.__ref())), u"!b.IsInfinity");
		#line 1521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((!ADV_UPCS(IsPositiveInfinity)(b.__ref())), u"!b.IsPositiveInfinity");
		#line 1522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((!ADV_UPCS(IsNegativeInfinity)(b.__ref())), u"!b.IsNegativeInfinity");
		#line 1523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((!ADV_UPCS(IsNaN)(b.__ref())), u"!b.IsNaN");
		#line 1524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(IsNormal)(b.__ref())), u"b.IsNormal");
		#line 1525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((!ADV_UPCS(IsSubnormal)(b.__ref())), u"!b.IsSubnormal");
		#line 1526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((!ADV_UPCS(IsZero)(b.__ref())), u"!b.IsZero");
		#line 1529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(Sign)(a.__ref()) == +Builtin::i32(1)), u"a.Sign==+1");
		#line 1530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(Sign)(b.__ref()) == Builtin::i32(-1)), u"b.Sign==-1");
		#line 1531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(CopySign)(a.__ref(), b) == Builtin::i32(-10)), u"a.CopySign(b)==-10");
		#line 1532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(Max)(a.__ref(), b) == a), u"a.Max(b)==a");
		#line 1533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(Min)(a.__ref(), b) == b), u"a.Min(b)==b");
		#line 1534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(MaxNumber)(a.__ref(), b) == a), u"a.MaxNumber(b)==a");
		#line 1535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(MinNumber)(a.__ref(), b) == b), u"a.MinNumber(b)==b");
		#line 1536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(Clamp)(b.__ref(), Builtin::i64(-5LL), +Builtin::i64(5LL)) == Builtin::i32(-5)), u"b.Clamp(-5i64,+5i64)==-5");
		#line 1539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::i64(2LL).__ref()) == Builtin::i32(1)), u"2i64.Log2==1");
		#line 1540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::i64(16LL).__ref()) == Builtin::i32(4)), u"16i64.Log2==4");
		#line 1541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::i64(64LL).__ref()) == Builtin::i32(6)), u"64i64.Log2==6");
		#line 1542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::i64(4611686018427387908LL).__ref()) == Builtin::i32(62)), u"4_611_686_018_427_387_908i64.Log2==62");
		#line 1543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::i64(2LL).__ref()) == Builtin::i32(1)), u"2i64.Log2Ceiling==1");
		#line 1544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::i64(16LL).__ref()) == Builtin::i32(4)), u"16i64.Log2Ceiling==4");
		#line 1545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::i64(65LL).__ref()) == Builtin::i32(7)), u"65i64.Log2Ceiling==7");
		#line 1546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::i64(4611686018427387908LL).__ref()) == Builtin::i32(63)), u"4_611_686_018_427_387_908i64.Log2Ceiling==63");
		#line 1547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(CheckedLog2)(Builtin::i64(0LL).__ref()) == nullptr), u"0i64.CheckedLog2==null");
		#line 1548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(Builtin::i64(5LL).__ref()) == Builtin::i32(0)), u"5i64.Log10==0");
		#line 1549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(a.__ref()) == Builtin::i32(1)), u"a.Log10==1");
		#line 1550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(ADV_USPCS(MaxValue, Builtin::i64)().__ref()) == Builtin::i32(18)), u"i64.MaxValue.Log10==18");
		#line 1551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(Log)(Builtin::i64(5LL).__ref(), Builtin::i64(5LL)) == Builtin::i32(1)), u"5i64.Log(5i64)==1");
		#line 1552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(CheckedLog)(Builtin::i64(5LL).__ref(), Builtin::i64(-5LL)) == nullptr), u"5i64.CheckedLog(-5i64)==null");
		#line 1553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(Midpoint)(a.__ref(), Builtin::i64(30LL)) == Builtin::i32(20)), u"a.Midpoint(30i64)==20");
		#line 1554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(Midpoint)(Builtin::i64(1000000000000000000LL).__ref(), Builtin::i64(9000000000000000000LL)) == Builtin::i64(5000000000000000000LL)), u"1_000_000_000_000_000_000i64.Midpoint(9_000_000_000_000_000_000)==5_000_000_000_000_000_000");
		#line 1555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)(a.__ref(), Builtin::i64(10LL)) == Builtin::i32(10)), u"a.NextMultipleOf(10i64)==10");
		#line 1556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)(Builtin::i64(11LL).__ref(), Builtin::i64(10LL)) == Builtin::i32(20)), u"11i64.NextMultipleOf(10i64)==20");
		#line 1557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)(Builtin::i64(1000000000000000000LL).__ref(), Builtin::i64(8500000LL)) == Builtin::i64(1000000000004000000LL)), u"1_000_000_000_000_000_000i64.NextMultipleOf(8500000i64)==1_000_000_000_004_000_000");
		#line 1558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)((Builtin::i64(-13LL)).__ref(), Builtin::i64(4LL)) == Builtin::i32(-12)), u"(-13i64).NextMultipleOf(4i64)==-12");
		#line 1559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)((Builtin::i64(-13LL)).__ref(), Builtin::i64(-4LL)) == Builtin::i32(-16)), u"(-13i64).NextMultipleOf(-4i64)==-16");
		#line 1560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(ByteCount)(a.__ref()) == Builtin::i32(8)), u"a.ByteCount==8");
		#line 1561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(ByteSwapped)(Builtin::i64(0x7b233d2a39fea339LL).__ref()) == Builtin::i64(0x39a3fe392a3d237bLL)), u"0x7b233d2a39fea339_i64.ByteSwapped==0x39a3fe392a3d237b");
		#line 1562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_not)(Builtin::i64(0b1010LL), Builtin::i32(3)) == Builtin::i32(0b01010000)), u"0b1010_i64<<~3==0b0101_0000");
		#line 1563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_not)(Builtin::i64(0b1010LL), Builtin::i32(5)) == Builtin::i32(0b101000000)), u"0b1010_i64<<~5==0b1_0100_0000");
		#line 1564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_not)(Builtin::i64(0b1010LL), Builtin::i32(3)) == Builtin::i64(0b0100000000000000000000000000000000000000000000000000000000000001LL)), u"0b1010_i64>>~3==0b0100_0000_0000_0000_0000_0000_0000_0000_0000_0000_0000_0000_0000_0000_0000_0001");
		#line 1565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_not)(Builtin::i64(0b1010LL), Builtin::i32(5)) == Builtin::i64(0b0101000000000000000000000000000000000000000000000000000000000000LL)), u"0b1010_i64>>~5==0b0101_0000_0000_0000_0000_0000_0000_0000_0000_0000_0000_0000_0000_0000_0000_0000");
		#line 1567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(IsMultipleOf)(a.__ref(), Builtin::i64(5LL))), u"a.IsMultipleOf(5i64)");
		#line 1568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((!ADV_UFCS(IsMultipleOf)(a.__ref(), Builtin::i64(6LL))), u"!a.IsMultipleOf(6i64)");
		#line 1570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(MultiplyBy10)(a.__ref()) == Builtin::i32(100)), u"a.MultiplyBy10==100");
		#line 1571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UPCS(MultiplyBy16)(a.__ref()) == Builtin::i32(160)), u"a.MultiplyBy16==160");
		#line 1574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a = Builtin::i64(1000000000004000000LL);
		#line 1575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_qst)(a, Builtin::i64(100LL)) == Builtin::i64(1000000000004000100LL)), u"a+?100i64==1000000000004000100i64");
		#line 1576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_qst)(a, ADV_USPCS(MaxValue, Builtin::i64)()) == nullptr), u"a+?i64.MaxValue==null");
		#line 1577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_UFCS(_operator_add_qst_eq)(a, Builtin::i64(5LL));
		#line 1578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a == Builtin::i64(1000000000004000005LL)), u"a==1000000000004000005");
		#line 1579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_UFCS(_operator_add_qst_eq)(a, ADV_USPCS(MaxValue, Builtin::i64)());
		#line 1580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a == Builtin::i64(1000000000004000005LL)), u"a==1000000000004000005");
		#line 1581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_ne)(a, Builtin::i64(100LL)) == Builtin::i64(1000000000004000105LL)), u"a+!100i64==1000000000004000105");
		#line 1582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_mod)(a, Builtin::i64(100LL)) == Builtin::i64(1000000000004000105LL)), u"a+%100i64==1000000000004000105");
		#line 1583 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_mod)(a, Builtin::i64(8223372036850775803LL)) == ADV_USPCS(MinValue, Builtin::i64)()), u"a+%8_223_372_036_850_775_803i64==i64.MinValue");
		#line 1584 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_UFCS(_operator_add_mod_eq)(a, ADV_USPCS(MaxValue, Builtin::i64)());
		#line 1585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a == Builtin::i64(-8223372036850775804LL)), u"a==-8223372036850775804");
		#line 1586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_or)(a, (Builtin::i64(-2000000000004000005LL))) == ADV_USPCS(MinValue, Builtin::i64)()), u"a+|(-2000000000004000005i64)==i64.MinValue");
		#line 1587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_UFCS(_operator_add_or_eq)(a, ADV_USPCS(MaxValue, Builtin::i64)());
		#line 1588 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a == Builtin::i64(1000000000004000003LL)), u"a==1000000000004000003");
		#line 1589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_or)(a, Builtin::i64(9000000000004000003LL)) == ADV_USPCS(MaxValue, Builtin::i64)()), u"a+|9000000000004000003i64==i64.MaxValue");
		#line 1590 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		{
			#line 1591 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_add_mod_qst)(a, Builtin::i64(9000000000004000003LL));
			#line 1592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			ADV_ASSERT((result == Builtin::i64(-8446744073701551610LL) && overflowed), u"result==-8446744073701551610&&overflowed");
		}
		#line 1595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a = ADV_USPCS(MaxValue, Builtin::i64)() - Builtin::i32(1);
		#line 1596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_add_qst_postfix)(a) == ADV_USPCS(MaxValue, Builtin::i64)() - Builtin::i32(1)), u"a++?==i64.MaxValue-1");
		#line 1597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::i64)()), u"a==i64.MaxValue");
		#line 1598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_UFCS(_operator_add_add_mod_postfix)(a);
		#line 1599 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::i64)()), u"a==i64.MinValue");
		#line 1600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a = ADV_USPCS(MaxValue, Builtin::i64)();
		#line 1601 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_UFCS(_operator_add_add_or_postfix)(a);
		#line 1602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::i64)()), u"a==i64.MaxValue");
		#line 1604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		{
			#line 1605 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.__ref(), Builtin::i64(0LL), Builtin::Boolean(false));
			#line 1606 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			ADV_ASSERT((result == ADV_USPCS(MaxValue, Builtin::i64)() && !overflowed), u"result==i64.MaxValue&&!overflowed");
		}
		#line 1608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		{
			#line 1609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.__ref(), Builtin::i64(-5LL), Builtin::Boolean(true));
			#line 1610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			ADV_ASSERT((result == Builtin::i64(9223372036854775803LL) && !overflowed), u"result==9223372036854775803&&!overflowed");
		}
		#line 1612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		{
			#line 1613 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.__ref(), Builtin::i64(0LL), Builtin::Boolean(true));
			#line 1614 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			ADV_ASSERT((result == ADV_USPCS(MinValue, Builtin::i64)() && overflowed), u"result==i64.MinValue&&overflowed");
		}
		#line 1616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		{
			#line 1617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.__ref(), Builtin::i64(10LL), Builtin::Boolean(true));
			#line 1618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			ADV_ASSERT((result == Builtin::i64(-9223372036854775798LL) && overflowed), u"result==-9223372036854775798&&overflowed");
		}
		#line 1621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_qst)(a, Builtin::i64(1000000000000000000LL)) == Builtin::i64(8223372036854775807LL)), u"a-?1_000_000_000_000_000_000i64==8223372036854775807");
		#line 1622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_qst)(-a, ADV_USPCS(MaxValue, Builtin::i64)()) == nullptr), u"-a-?i64.MaxValue==null");
		#line 1623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_UFCS(_operator_sub_qst_eq)(a, Builtin::i64(1000000000000000000LL));
		#line 1624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a == Builtin::i64(8223372036854775807LL)), u"a==8223372036854775807");
		#line 1625 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_UFCS(_operator_sub_qst_eq)(a, Builtin::i64(1LL));
		#line 1626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a == Builtin::i64(8223372036854775806LL)), u"a==8223372036854775806");
		#line 1627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_ne)(a, Builtin::i64(1000000000000000000LL)) == Builtin::i64(7223372036854775806LL)), u"a-!1_000_000_000_000_000_000i64==7223372036854775806");
		#line 1628 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_mod)(-a, Builtin::i64(1000000000000000003LL)) == ADV_USPCS(MaxValue, Builtin::i64)()), u"-a-%1000000000000000003i64==i64.MaxValue");
		#line 1629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_mod)(a, Builtin::i64(1000000000000000000LL)) == Builtin::i64(7223372036854775806LL)), u"a-%1_000_000_000_000_000_000i64==7223372036854775806");
		#line 1630 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_UFCS(_operator_sub_mod_eq)(a, ADV_USPCS(MaxValue, Builtin::i64)());
		#line 1631 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a == Builtin::i64(-1000000000000000001LL)), u"a==-1_000_000_000_000_000_001");
		#line 1632 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_or)(a, Builtin::i64(9000000000000000000LL)) == ADV_USPCS(MinValue, Builtin::i64)()), u"a-|9_000_000_000_000_000_000i64==i64.MinValue");
		#line 1633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_UFCS(_operator_sub_or_eq)(a, ADV_USPCS(MaxValue, Builtin::i64)());
		#line 1634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::i64)()), u"a==i64.MinValue");
		#line 1635 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		{
			#line 1636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_sub_mod_qst)(a, Builtin::i64(1000000000000000000LL));
			#line 1637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			ADV_ASSERT((result == Builtin::i64(8223372036854775808LL) && overflowed), u"result==8223372036854775808&&overflowed");
		}
		#line 1640 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a = ADV_USPCS(MinValue, Builtin::i64)() + Builtin::i32(1);
		#line 1641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_sub_qst_postfix)(a) == ADV_USPCS(MinValue, Builtin::i64)() + Builtin::i32(1)), u"a--?==i64.MinValue+1");
		#line 1642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::i64)()), u"a==i64.MinValue");
		#line 1643 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_UFCS(_operator_sub_sub_mod_postfix)(a);
		#line 1644 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::i64)()), u"a==i64.MaxValue");
		#line 1645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a = ADV_USPCS(MinValue, Builtin::i64)();
		#line 1646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_UFCS(_operator_sub_sub_or_postfix)(a);
		#line 1647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::i64)()), u"a==i64.MinValue");
		#line 1649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		{
			#line 1650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.__ref(), Builtin::i64(0LL), Builtin::Boolean(false));
			#line 1651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			ADV_ASSERT((result == ADV_USPCS(MinValue, Builtin::i64)() && !overflowed), u"result==i64.MinValue&&!overflowed");
		}
		#line 1653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		{
			#line 1654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.__ref(), Builtin::i64(-5LL), Builtin::Boolean(true));
			#line 1655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			ADV_ASSERT((result == Builtin::i64(-9223372036854775804LL) && !overflowed), u"result==-9223372036854775804&&!overflowed");
		}
		#line 1657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		{
			#line 1658 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.__ref(), Builtin::i64(0LL), Builtin::Boolean(true));
			#line 1659 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			ADV_ASSERT((result == ADV_USPCS(MaxValue, Builtin::i64)() && overflowed), u"result==i64.MaxValue&&overflowed");
		}
		#line 1661 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		{
			#line 1662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.__ref(), Builtin::i64(10LL), Builtin::Boolean(true));
			#line 1663 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			ADV_ASSERT((result == Builtin::i64(9223372036854775797LL) && overflowed), u"result==9223372036854775797&&overflowed");
		}
		#line 1666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_qst)(a, Builtin::i64(1LL)) == ADV_USPCS(MinValue, Builtin::i64)()), u"a*?1i64==i64.MinValue");
		#line 1667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_qst)(a, Builtin::i64(2LL)) == nullptr), u"a*?2i64==null");
		#line 1668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_UFCS(_operator_mul_qst_eq)(a, Builtin::i64(5LL));
		#line 1669 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::i64)()), u"a==i64.MinValue");
		#line 1670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a = Builtin::i64(15000000000LL);
		#line 1671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a == Builtin::i64(15000000000LL)), u"a==15_000_000_000");
		#line 1672 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_ne)(a, Builtin::i64(3LL)) == Builtin::i64(45000000000LL)), u"a*!3i64==45_000_000_000");
		#line 1673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_mod)(a, Builtin::i64(6LL)) == Builtin::i64(90000000000LL)), u"a*%6i64==90_000_000_000");
		#line 1674 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_mod)(a, Builtin::i64(1000000000LL)) == Builtin::i64(-3446744073709551616LL)), u"a*%1_000_000_000i64==-3446744073709551616");
		#line 1675 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_UFCS(_operator_mul_mod_eq)(a, Builtin::i64(6LL));
		#line 1676 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a == Builtin::i64(90000000000LL)), u"a==90_000_000_000");
		#line 1677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_or)(a, (Builtin::i64(-1000000000LL))) == ADV_USPCS(MinValue, Builtin::i64)()), u"a*|(-1_000_000_000i64)==i64.MinValue");
		#line 1678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_UFCS(_operator_mul_or_eq)(a, Builtin::i64(1000000000LL));
		#line 1679 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::i64)()), u"a==i64.MaxValue");
		#line 1680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_or)(a, Builtin::i64(2LL)) == ADV_USPCS(MaxValue, Builtin::i64)()), u"a*|2i64==i64.MaxValue");
		#line 1681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		{
			#line 1682 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_mul_mod_qst)(a, Builtin::i64(2LL));
			#line 1683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			ADV_ASSERT((result == Builtin::i32(-2) && overflowed), u"result==-2&&overflowed");
		}
		#line 1685 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a = Builtin::i64(15000000000LL);
		#line 1686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		{
			#line 1687 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			const auto& [low, high] = ADV_UFCS(_operator_mul_gt)(a, (Builtin::i64(10000000000LL)));
			#line 1688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			ADV_ASSERT((low == Builtin::u64(0x21ab0d4414980000ULL) && high == Builtin::i32(8)), u"low==0x21ab0d4414980000u64&&high==8");
		}
		#line 1690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		{
			#line 1691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			const auto& [low, high] = ADV_UFCS(_operator_mul_gt)(a, (Builtin::i64(-10000000000LL)));
			#line 1692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			ADV_ASSERT((low == Builtin::u64(16020696663385964544ULL) && high == Builtin::i32(-9)), u"low==16020696663385964544u64&&high==-9");
		}
		#line 1694 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a = ADV_USPCS(MaxValue, Builtin::i64)();
		#line 1695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		{
			#line 1696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			const auto& [low, high] = ADV_UFCS(CarryingMul)(a.__ref(), Builtin::i64(2LL), Builtin::i64(12LL));
			#line 1697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			ADV_ASSERT((low == Builtin::i32(10) && high == Builtin::i32(1)), u"low==10&&high==1");
		}
		#line 1699 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		{
			#line 1700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			const auto& [low, high] = ADV_UFCS(CarryingMul)(a.__ref(), Builtin::i64(-2LL), Builtin::i64(-12LL));
			#line 1701 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			ADV_ASSERT((low == Builtin::ParseInt128("18446744073709551606") && high == Builtin::i32(-2)), u"low==18446744073709551606&&high==-2");
		}
		#line 1704 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a = Builtin::i64(100000000000LL);
		#line 1705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, Builtin::i32(6000000)) == Builtin::i32(16666)), u"a\\6000000==16666");
		#line 1706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a /= Builtin::i32(6000000);
		#line 1707 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a == Builtin::i32(16667)), u"a==16667");
		#line 1708 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a = Builtin::i64(100000000000LL);
		#line 1709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		{
			#line 1710 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)(a, Builtin::i64(6000000LL));
			#line 1711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			ADV_ASSERT((div == Builtin::i32(16666) && rem == Builtin::i32(4000000)), u"div==16666&&rem==4000000");
		}
		#line 1713 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_qst)(a, Builtin::i64(5LL)) == Builtin::i64(20000000000LL)), u"a\\?5i64==20000000000i64");
		#line 1714 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_qst)(a, Builtin::i64(0LL)) == nullptr), u"a\\?0i64==null");
		#line 1715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_qst)(ADV_USPCS(MinValue, Builtin::i64)(), (Builtin::i64(-1LL))) == nullptr), u"i64.MinValue\\?(-1i64)==null");
		#line 1717 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_ne)(a, Builtin::i64(5LL)) == Builtin::i64(20000000000LL)), u"a\\!5i64==20000000000i64");
		#line 1718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_UFCS(_operator_bsl_mod_eq)(a, Builtin::i64(5LL));
		#line 1719 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a == Builtin::i64(20000000000LL)), u"a==20000000000i64");
		#line 1720 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a = Builtin::i32(10);
		#line 1721 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_mod)(ADV_USPCS(MinValue, Builtin::i64)(), (Builtin::i64(-1LL))) == ADV_USPCS(MinValue, Builtin::i64)()), u"i64.MinValue\\%(-1i64)==i64.MinValue");
		#line 1722 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_UFCS(_operator_bsl_or_eq)(a, Builtin::i64(5LL));
		#line 1723 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a == Builtin::i32(2)), u"a==2");
		#line 1724 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a = Builtin::i32(100000);
		#line 1725 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_or)(ADV_USPCS(MinValue, Builtin::i64)(), (Builtin::i64(-1LL))) == ADV_USPCS(MaxValue, Builtin::i64)()), u"i64.MinValue\\|(-1i64)==i64.MaxValue");
		#line 1726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		{
			#line 1727 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_bsl_mod_qst)(ADV_USPCS(MinValue, Builtin::i64)(), (Builtin::i64(-1LL)));
			#line 1728 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			ADV_ASSERT((result == ADV_USPCS(MinValue, Builtin::i64)() && overflowed), u"result==i64.MinValue&&overflowed");
		}
		#line 1731 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_bsl)(a, Builtin::i64(500LL)) == Builtin::i64(200LL)), u"a\\\\500i64==200i64");
		#line 1732 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_bsl)(a, Builtin::i64(6LL)) == nullptr), u"a\\\\6i64==null");
		#line 1733 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_bsl_qst)(a, Builtin::i64(0LL)) == nullptr), u"a\\\\?0i64==null");
		#line 1735 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_not)(a, Builtin::i64(600LL)) == Builtin::i32(167)), u"a/~600i64==167");
		#line 1736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_lt)(a, Builtin::i64(600LL)) == Builtin::i32(166)), u"a/<600i64==166");
		#line 1737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_gt)(a, Builtin::i64(600LL)) == Builtin::i32(167)), u"a/>600i64==167");
		#line 1738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_not)(a, (Builtin::i64(-600LL))) == Builtin::i32(-167)), u"a/~(-600i64)==-167");
		#line 1739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_lt)(a, (Builtin::i64(-600LL))) == Builtin::i32(-167)), u"a/<(-600i64)==-167");
		#line 1740 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_gt)(a, (Builtin::i64(-600LL))) == Builtin::i32(-166)), u"a/>(-600i64)==-166");
		#line 1742 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_qst)(a, Builtin::i64(500LL)) == Builtin::i64(0LL)), u"a%?500i64==0i64");
		#line 1743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_qst)(a, Builtin::i64(0LL)) == nullptr), u"a%?0i64==null");
		#line 1744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_qst)(ADV_USPCS(MinValue, Builtin::i64)(), (Builtin::i64(-1LL))) == nullptr), u"i64.MinValue%?(-1i64)==null");
		#line 1746 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_ne)(a, Builtin::i64(600LL)) == Builtin::i32(400)), u"a%!600i64==400");
		#line 1747 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_UFCS(_operator_mod_mod_eq)(a, Builtin::i64(600LL));
		#line 1748 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a == Builtin::i32(400)), u"a==400");
		#line 1749 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a = Builtin::i32(10);
		#line 1750 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_mod)(ADV_USPCS(MinValue, Builtin::i64)(), (Builtin::i64(-1LL))) == Builtin::i32(0)), u"i64.MinValue%%(-1i64)==0");
		#line 1751 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		{
			#line 1752 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_mod_mod_qst)(ADV_USPCS(MinValue, Builtin::i64)(), (Builtin::i64(-1LL)));
			#line 1753 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			ADV_ASSERT((result == Builtin::i32(0) && overflowed), u"result==0&&overflowed");
		}
		#line 1756 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_qst)(a) == Builtin::i64(-10LL)), u"-?a==-10i64");
		#line 1757 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_qst)(ADV_USPCS(MinValue, Builtin::i64)()) == nullptr), u"-?i64.MinValue==null");
		#line 1758 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_ne)(a) == Builtin::i32(-10)), u"-!a==-10");
		#line 1759 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_mod)(a) == Builtin::i32(-10)), u"-%a==-10");
		#line 1760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_mod)(ADV_USPCS(MinValue, Builtin::i64)()) == ADV_USPCS(MinValue, Builtin::i64)()), u"-%i64.MinValue==i64.MinValue");
		#line 1761 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_or)(a) == Builtin::i32(-10)), u"-|a==-10");
		#line 1762 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_or)(ADV_USPCS(MinValue, Builtin::i64)()) == ADV_USPCS(MaxValue, Builtin::i64)()), u"-|i64.MinValue==i64.MaxValue");
		#line 1764 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_bsl)(ADV_USPCS(MaxValue, Builtin::i64)(), Builtin::u32(4U)) == Builtin::i64(0b0000011111111111111111111111111111111111111111111111111111111111LL)), u"i64.MaxValue>>\\4u==0b0000_0111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111");
		#line 1765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_bsl)(ADV_USPCS(MaxValue, Builtin::i64)(), Builtin::u32(68U)) == Builtin::i32(0)), u"i64.MaxValue>>\\68u==0");
		#line 1766 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_bsl)(ADV_USPCS(MinValue, Builtin::i64)(), Builtin::u32(68U)) == Builtin::i32(-1)), u"i64.MinValue>>\\68u==-1");
		#line 1767 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_bsl)(ADV_USPCS(MaxValue, Builtin::i64)(), Builtin::u32(68U)) == Builtin::i32(0)), u"i64.MaxValue<<\\68u==0");
		#line 1768 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_qst)(ADV_USPCS(MaxValue, Builtin::i64)(), Builtin::i32(4)) == Builtin::i64(0b0000011111111111111111111111111111111111111111111111111111111111LL)), u"i64.MaxValue>>?4==0b0000_0111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111");
		#line 1769 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_qst)(ADV_USPCS(MaxValue, Builtin::i64)(), Builtin::i32(68)) == nullptr), u"i64.MaxValue>>?68==null");
		#line 1770 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_qst)(ADV_USPCS(MaxValue, Builtin::i64)(), Builtin::i32(68)) == nullptr), u"i64.MaxValue<<?68==null");
		#line 1771 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_ne)(ADV_USPCS(MaxValue, Builtin::i64)(), Builtin::i32(4)) == Builtin::i64(0b0000011111111111111111111111111111111111111111111111111111111111LL)), u"i64.MaxValue>>!4==0b0000_0111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111");
		#line 1772 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_mod)(ADV_USPCS(MaxValue, Builtin::i64)(), Builtin::i32(68)) == Builtin::i64(0b0000011111111111111111111111111111111111111111111111111111111111LL)), u"i64.MaxValue>>%68==0b0000_0111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111");
		#line 1773 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a = ADV_USPCS(MaxValue, Builtin::i64)();
		#line 1774 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_UFCS(_operator_gt_gt_mod_eq)(a, Builtin::i32(68));
		#line 1775 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_mod)(a, Builtin::i32(68)) == Builtin::i64(0b0111111111111111111111111111111111111111111111111111111111110000LL)), u"a<<%68==0b0111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_0000");
		#line 1776 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		{
			#line 1777 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_gt_gt_mod_qst)(ADV_USPCS(MaxValue, Builtin::i64)(), Builtin::i32(68));
			#line 1778 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			ADV_ASSERT((result == Builtin::i64(0b0000011111111111111111111111111111111111111111111111111111111111LL) && overflowed), u"result==0b0000_0111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111_1111&&overflowed");
		}
		#line 1782 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a = Builtin::i32(1500000000);
		#line 1783 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor)(a, Builtin::u32(2U)) == Builtin::i64(2250000000000000000LL)), u"a^^2u==2250000000000000000");
		#line 1784 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_UFCS(_operator_xor_xor_eq)(a, Builtin::u32(2U));
		#line 1785 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a == Builtin::i64(2250000000000000000LL)), u"a==2250000000000000000");
		#line 1786 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor)(Builtin::i64(60000LL), Builtin::u32(3U)) == Builtin::i64(216000000000000LL)), u"60000i64^^3u==216000000000000");
		#line 1787 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_qst)(Builtin::i64(60000LL), Builtin::u32(3U)) == Builtin::i64(216000000000000LL)), u"60000i64^^?3u==216000000000000");
		#line 1788 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_qst)(Builtin::i64(60000LL), Builtin::u32(4U)) == nullptr), u"60000i64^^?4u==null");
		#line 1789 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_UFCS(_operator_xor_xor_qst_eq)(a, Builtin::u32(2U));
		#line 1790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a == Builtin::i64(2250000000000000000LL)), u"a==2250000000000000000");
		#line 1791 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_ne)(Builtin::i64(60000LL), Builtin::u32(3U)) == Builtin::i64(216000000000000LL)), u"60000i64^^!3u==216000000000000");
		#line 1792 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_mod)(Builtin::i64(60000LL), Builtin::u32(4U)) == Builtin::i64(-5486744073709551616LL)), u"60000i64^^%4u==-5486744073709551616");
		#line 1793 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		a = Builtin::i32(300);
		#line 1794 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_UFCS(_operator_xor_xor_mod_eq)(a, Builtin::u32(2U));
		#line 1795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((a == Builtin::i32(90000)), u"a==90000");
		#line 1796 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_or)(Builtin::i64(60000LL), Builtin::u32(3U)) == Builtin::i64(216000000000000LL)), u"60000i64^^|3u==216000000000000");
		#line 1797 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_or)(Builtin::i64(60000LL), Builtin::u32(4U)) == ADV_USPCS(MaxValue, Builtin::i64)()), u"60000i64^^|4u==i64.MaxValue");
		#line 1798 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		{
			#line 1799 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_xor_xor_mod_qst)(Builtin::i64(60000LL), Builtin::u32(4U));
			#line 1800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			ADV_ASSERT((result == Builtin::i64(-5486744073709551616LL) && overflowed), u"result==-5486744073709551616&&overflowed");
		}
		return true;
	}();
	#endif	
} namespace __extensions { using namespace System;
#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	auto _operator_eq_eq_mul(__extension_Int64_20_i64 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool
	{
		#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		{
			#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			auto __tmp0 = Builtin::Cast<false, __extension_Int64_1370_i64>(obj);
			#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			if ((__tmp0.IsValid())) {
				#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				const auto& obj = *__tmp0;
				
				#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				return __this == obj;
			}
		}
		#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return Builtin::Boolean(false);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	auto _operator_lt_eq_gt_mul(__extension_Int64_73_i64 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32
	{
		#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		{
			#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			auto __tmp0 = Builtin::Cast<false, __extension_Int64_1370_i64>(obj);
			#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			if ((__tmp0.IsValid())) {
				#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				const auto& obj = *__tmp0;
				
				#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				return __this <=> obj;
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
} namespace __extensions { using namespace System;
#line 298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	auto MaxMagnitude(__extension_Int64_274_i64 const& __this LIFETIMEBOUND, __extension_Int64_1370_i64 rhs)  -> const typename __extension_Int64_274_i64
	{
		#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		auto absX = __this; 
		#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((absX <=> Builtin::i32(0)) < 0) {
			#line 302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			absX = -absX;
			#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			if ((absX <=> Builtin::i32(0)) < 0) {
				#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				return __this;
			}
		}
		#line 308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		auto absY = rhs; 
		#line 309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((absY <=> Builtin::i32(0)) < 0) {
			#line 310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			absY = -absY;
			#line 311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			if ((absY <=> Builtin::i32(0)) < 0) {
				#line 312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				return rhs;
			}
		}
		#line 316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((absX <=> absY) > 0) {
			#line 317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return __this;
		}
		#line 320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (absX == absY) {
			#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return ADV_UPCS(IsNegative)(__this.__ref()) ? rhs : __this;
		}
		#line 324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return rhs;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	auto MinMagnitude(__extension_Int64_274_i64 const& __this LIFETIMEBOUND, __extension_Int64_1370_i64 rhs)  -> const typename __extension_Int64_274_i64
	{
		#line 331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		auto absX = __this; 
		#line 332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((absX <=> Builtin::i32(0)) < 0) {
			#line 333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			absX = -absX;
			#line 334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			if ((absX <=> Builtin::i32(0)) < 0) {
				#line 335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				return rhs;
			}
		}
		#line 339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		auto absY = rhs; 
		#line 340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((absY <=> Builtin::i32(0)) < 0) {
			#line 341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			absY = -absY;
			#line 342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			if ((absY <=> Builtin::i32(0)) < 0) {
				#line 343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				return __this;
			}
		}
		#line 347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((absX <=> absY) < 0) {
			#line 348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return __this;
		}
		#line 351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (absX == absY) {
			#line 352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return ADV_UPCS(IsNegative)(__this.__ref()) ? __this : rhs;
		}
		#line 355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return rhs;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	auto Parse(__extension_Int64_274_i64 const& __this LIFETIMEBOUND, Builtin::Str input)  -> const typename __extension_Int64_274_i64
	{
		#line 362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return Builtin::i64(0LL);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	auto TryParse(__extension_Int64_274_i64 const& __this LIFETIMEBOUND, Builtin::Str input) noexcept -> const Builtin::Nullable<__extension_Int64_1370_i64>
	{
		#line 367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return Builtin::i64(0LL);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	auto CopySign(__extension_Int64_390_i64 const& __this LIFETIMEBOUND, __extension_Int64_1370_i64 sign)  -> const typename __extension_Int64_390_i64
	{
		#line 395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		auto absValue = __this; 
		#line 396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((absValue <=> Builtin::i32(0)) < 0) {
			#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			absValue = -absValue;
		}
		#line 400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if ((sign <=> Builtin::i32(0)) >= 0) {
			#line 401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			if ((absValue <=> Builtin::i32(0)) < 0) {
				#line 402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				Builtin::Throw(Builtin::IntegerOverflowException{});
			}
			#line 405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return absValue;
		}
		#line 408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return -absValue;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	auto Log(__extension_Int64_418_i64 const& __this LIFETIMEBOUND, __extension_Int64_1370_i64 base)  -> const typename __extension_Int64_418_i64
	{
		#line 517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (const auto result = ADV_UFCS(CheckedLog)(__this.__ref(), base)) {
			{
				#line 517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
				return result;
			}
		}
		#line 520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
	auto getCheckedIsqrt(__extension_Int64_1204_i64 const& __this ) -> const Builtin::Nullable<__extension_Int64_1370_i64>
	{
		#line 1215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		if (ADV_UPCS(IsNegative)(__this.__ref())) {
			#line 1216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
			return nullptr;
		}
		#line 1218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		constexpr auto MAX_RESULT = Builtin::Cast<true, __extension_Int64_1370_i64>(ADV_USFCS((Math), Isqrt64)(Builtin::Cast<true, Builtin::u64>(ADV_USPCS(MaxValue, __extension_Int64_1370_i64)())));
		#line 1219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		const auto result = Builtin::Cast<true, __extension_Int64_1370_i64>(ADV_USFCS((Math), Isqrt64)(Builtin::Cast<true, Builtin::u64>(__this))); 
		#line 1220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ASSUME((result <=> Builtin::i32(0)) >= 0);
		#line 1221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		ASSUME((result <=> MAX_RESULT) <= 0);
		#line 1222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int64.ast"
		return result;
	}
	} namespace System{

}