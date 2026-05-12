#include "Math.h"
#include "Int16.h"

namespace System {
//###############################################################################
//# Global type aliases
//###############################################################################
//###############################################################################
//# Type definitions
//###############################################################################

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
















static_assert(Builtin::usize(sizeof(Builtin::i16)) == Builtin::i32(2), "i16 should be 2 bytes");
static_assert(ADV_USPCS(MinValue, Builtin::i16)() == Builtin::i32(-0x8000), "i16.Min should be -0x8000");
static_assert(ADV_USPCS(MaxValue, Builtin::i16)() == Builtin::i32(0x7FFF), "i16.Max should be 0x7FFF");
static_assert(ADV_UFCS_NONLOCAL(_operator_gt_gt_not)(ADV_USPCS(One, Builtin::i16)(), Builtin::i32(3)) == Builtin::i32(0b0010000000000000), "i16.One >>% 3 == 0b0010_0000_0000_0000");
static_assert(ADV_USPCS(IsSigned, Builtin::i16)(), "i16 must be signed");
static_assert(ADV_USPCS(MaxDigitCount, Builtin::i16)() == Builtin::i32(5), "i16 max digit count must be 5");
static_assert(ADV_UFCS_NONLOCAL(_operator_xor_xor)(Builtin::i16(2), Builtin::u32(14U)) == Builtin::i32(16384), "2i16 ^^ 14u == 16384");
static_assert(Builtin::TypeIs<Builtin::i16, IComparable<Builtin::i16>>(), "i16 should implement IComparable<i16>");
static_assert(Builtin::TypeIs<Builtin::i16, IEquatable<Builtin::i16>>(), "i16 should implement IEquatable<i16>");
static_assert(Builtin::TypeIs<Builtin::i16, ISelfComparable>(), "i16 should implement ISelfComparable");
static_assert(Builtin::TypeIs<Builtin::i16, ISelfEquatable>(), "i16 should implement ISelfEquatable");
static_assert(Builtin::TypeIs<Builtin::i16, IAdditionOperators<Builtin::i16, Builtin::i16>>(), "i16 should implement IAdditionOperators<i16, i16>");
static_assert(Builtin::TypeIs<Builtin::i16, ISubtractionOperators<Builtin::i16, Builtin::i16>>(), "i16 should implement ISubtractionOperators<i16, i16>");
static_assert(Builtin::TypeIs<Builtin::i16, IMultiplyOperators<Builtin::i16, Builtin::i16>>(), "i16 should implement IMultiplyOperators<i16, i16>");
static_assert(Builtin::TypeIs<Builtin::i16, IDivisionOperators<Builtin::i16, Builtin::f64>>(), "i16 should implement IDivisionOperators<i16, f64>");
static_assert(Builtin::TypeIs<Builtin::i16, IIntDivOperators<Builtin::i16, Builtin::i16>>(), "i16 should implement IIntDivOperators<i16, i16>");
static_assert(Builtin::TypeIs<Builtin::i16, IModulusOperators<Builtin::i16, Builtin::i16>>(), "i16 should implement IModulusOperators<i16, i16>");
static_assert(Builtin::TypeIs<Builtin::i16, IBitwiseOperators<Builtin::i16, Builtin::i16>>(), "i16 should implement IBitwiseOperators<i16, i16>");
static_assert(Builtin::TypeIs<Builtin::i16, IShiftOperators<Builtin::i16, Builtin::i16>>(), "i16 should implement IShiftOperators<i16, i16>");
static_assert(Builtin::TypeIs<Builtin::i16, IUnaryPlusOperators<Builtin::i16>>(), "i16 should implement IUnaryPlusOperators<i16>");
static_assert(Builtin::TypeIs<Builtin::i16, IUnaryNegationOperators<Builtin::i16>>(), "i16 should implement IUnaryNegationOperators<i16>");
static_assert(Builtin::TypeIs<Builtin::i16, IIncrementOperators<Builtin::i16>>(), "i16 should implement IIncrementOperators<i16>");
static_assert(Builtin::TypeIs<Builtin::i16, IDecrementOperators<Builtin::i16>>(), "i16 should implement IDecrementOperators<i16>");
static_assert(ADV_UFCS_NONLOCAL(_operator_add_mod)(ADV_USPCS(MaxValue, Builtin::i16)(), Builtin::i16(1)) == ADV_USPCS(MinValue, Builtin::i16)(), "i16.MaxValue +% 1i16 == i16.MinValue");
static_assert(ADV_UFCS_NONLOCAL(_operator_add_or)(ADV_USPCS(MaxValue, Builtin::i16)(), Builtin::i16(1)) == ADV_USPCS(MaxValue, Builtin::i16)(), "i16.MaxValue +| 1i16 == i16.MaxValue");
#ifdef ADV_UNITTEST
	#line 1371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	static bool __Test_05272d863b750629 = [](){
		#line 1373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::i16 a = Builtin::i16(5); 
		#line 1376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((a + Builtin::i16(10) == Builtin::i32(15)), u"a+10i16==15");
		#line 1377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((a + Builtin::u8(10U) == Builtin::i32(15)), u"a+10u8==15");
		#line 1378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((a + Builtin::i16(10) == Builtin::i32(15)), u"a+10i16==15");
		#line 1379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((a + Builtin::u16(10U) == Builtin::i32(15)), u"a+10u16==15");
		#line 1380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((a + Builtin::i32(10) == Builtin::i32(15)), u"a+10i32==15");
		#line 1381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((a + Builtin::u32(10U) == Builtin::i32(15)), u"a+10u32==15");
		#line 1382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((a + Builtin::i64(10LL) == Builtin::i32(15)), u"a+10i64==15");
		#line 1383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((a + Builtin::u64(10ULL) == Builtin::i32(15)), u"a+10u64==15");
		#line 1384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((a + Builtin::i128(10LL) == Builtin::i32(15)), u"a+10i128==15");
		#line 1385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((a + Builtin::u128(10ULL) == Builtin::i32(15)), u"a+10u128==15");
		#line 1388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((a - Builtin::i32(12) == Builtin::i32(-7)), u"a-12==-7");
		#line 1389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((a * Builtin::i32(2) == Builtin::i32(10)), u"a*2==10");
		#line 1390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, Builtin::i32(2)) == Builtin::i32(2)), u"a\\2==2");
		#line 1391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((a % Builtin::i32(2) == Builtin::i32(1)), u"a%2==1");
		#line 1392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT(((a & Builtin::i32(1)) == Builtin::i32(1)), u"(a&1)==1");
		#line 1393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT(((a | Builtin::i32(1)) == Builtin::i32(5)), u"(a|1)==5");
		#line 1394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT(((a ^ Builtin::i32(1)) == Builtin::i32(4)), u"(a^1)==4");
		#line 1395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((a << Builtin::i32(1) == Builtin::i32(10)), u"a<<1==10");
		#line 1396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((a >> Builtin::i32(1) == Builtin::i32(2)), u"a>>1==2");
		#line 1397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		a = Builtin::i16((short)-5);
		#line 1398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_UFCS(_operator_gt_gt_gt_eq)(a, Builtin::i16((short)2));
		#line 1399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((a == Builtin::i32(0b0011111111111110)), u"a==0b0011_1111_1111_1110");
		#line 1400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_gt)(a, Builtin::i32(2)) == Builtin::i32(0b0000111111111111)), u"a>>>2==0b0000_1111_1111_1111");
		#line 1401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_gt)(a, Builtin::i32(7)) == Builtin::i32(0b0000000001111111)), u"a>>>7==0b0000_0000_0111_1111");
		#line 1404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		a = Builtin::i16((short)5);
		#line 1405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((a == Builtin::i32(5)), u"a==5");
		#line 1406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((a != Builtin::i32(6)), u"a!=6");
		#line 1407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT(((a <=> Builtin::i32(6)) < 0), u"a<6");
		#line 1408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT(((a <=> Builtin::i32(5)) <= 0), u"a<=5");
		#line 1409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT(((a <=> Builtin::i32(4)) > 0), u"a>4");
		#line 1410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT(((a <=> Builtin::i32(5)) >= 0), u"a>=5");
		#line 1413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		a = Builtin::i16(5);
		#line 1414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		a++;
		#line 1415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		a--;
		#line 1416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		a += Builtin::i16((short)5);
		#line 1417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		a -= Builtin::i16((short)5);
		#line 1418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		a *= Builtin::i16((short)2);
		#line 1419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_UFCS(_operator_bsl_eq)(a, Builtin::i16((short)2));
		#line 1420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		a %= Builtin::i16((short)1);
		#line 1421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		a &= Builtin::i16((short)1);
		#line 1422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		a |= Builtin::i16((short)1);
		#line 1423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		a ^= Builtin::i16((short)1);
		#line 1424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		a <<= Builtin::i16((short)1);
		#line 1425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		a >>= Builtin::i16((short)1);
		#line 1426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((a == Builtin::i32(0)), u"a==0");
		#line 1427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		a = Builtin::i16(10);
		#line 1428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_not)(a) == Builtin::i32(-11)), u"~a==-11");
		#line 1431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::i16 b = Builtin::i16(5); 
		#line 1432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Nullable<Builtin::i16> c = nullptr; 
		#line 1433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Nullable<Builtin::i16> d = Builtin::i16(5); 
		#line 1434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((a != b), u"a!=b");
		#line 1435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((b != c), u"b!=c");
		#line 1436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((!Builtin::IdentityEquals(b, c)), u"b!==c");
		#line 1437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT(((b <=> c) > 0), u"b>c");
		#line 1438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((c != b), u"c!=b");
		#line 1439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((c == nullptr), u"c==null");
		#line 1440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((d != nullptr), u"d!=null");
		#line 1441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT(((c <=> d) < 0), u"c<d");
		#line 1442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((b == d), u"b==d");
		#line 1443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((Builtin::IdentityEquals(b, d)), u"b===d");
		#line 1446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Nullable<Builtin::ObjectRef> o = c; 
		#line 1447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		o = d;
		#line 1448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_ne_eq_mul)(b, o)), u"b!=*o");
		#line 1449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		IComparable<Builtin::i16> icomp = a; 
		#line 1450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT(((icomp <=> b) > 0), u"icomp>b");
		#line 1453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(a.__ref()) == Builtin::i32(10)), u"a.HashCode==10");
		#line 1454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(a) == Builtin::i32(10)), u"#a==10");
		#line 1455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		b = Builtin::i16(-6);
		#line 1456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(b) == Builtin::i128::Parse("18446744073709551610")), u"#b==18446744073709551610");
		#line 1458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(ToInt32)(b.__ref()) == Builtin::i32(-6)), u"b.ToInt32()==-6");
		#line 1459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(NarrowToUInt64)(b.__ref()) == Builtin::i128::Parse("18446744073709551610")), u"b.NarrowToUInt64()==18446744073709551610");
		#line 1462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UPCS(Abs)(b.__ref()) == Builtin::i32(6)), u"b.Abs==6");
		#line 1463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UPCS(CheckedAbs)(b.__ref()) == Builtin::i16(6)), u"b.CheckedAbs==6i16");
		#line 1464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UPCS(CheckedAbs)(ADV_USPCS(MinValue, Builtin::i16)().__ref()) == nullptr), u"i16.MinValue.CheckedAbs==null");
		#line 1465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UPCS(StrictAbs)(b.__ref()) == Builtin::i32(6)), u"b.StrictAbs==6");
		#line 1466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UPCS(WrappingAbs)(ADV_USPCS(MinValue, Builtin::i16)().__ref()) == ADV_USPCS(MinValue, Builtin::i16)()), u"i16.MinValue.WrappingAbs==i16.MinValue");
		#line 1467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UPCS(SaturatingAbs)(ADV_USPCS(MinValue, Builtin::i16)().__ref()) == ADV_USPCS(MaxValue, Builtin::i16)()), u"i16.MinValue.SaturatingAbs==i16.MaxValue");
		#line 1468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		{
			#line 1469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			const auto& [result, overflowed] = ADV_UPCS(OverflowingAbs)(ADV_USPCS(MinValue, Builtin::i16)().__ref());
			#line 1470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			ADV_ASSERT((result == ADV_USPCS(MinValue, Builtin::i16)() && overflowed), u"result==i16.MinValue&&overflowed");
		}
		#line 1472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UPCS(IsFinite)(b.__ref())), u"b.IsFinite");
		#line 1473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UPCS(IsInteger)(b.__ref())), u"b.IsInteger");
		#line 1474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UPCS(IsNegative)(b.__ref())), u"b.IsNegative");
		#line 1475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UPCS(IsPositive)(a.__ref())), u"a.IsPositive");
		#line 1476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((!ADV_UPCS(IsPositive)(b.__ref())), u"!b.IsPositive");
		#line 1477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UPCS(IsCanonical)(b.__ref())), u"b.IsCanonical");
		#line 1478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((!ADV_UPCS(IsComplexNumber)(b.__ref())), u"!b.IsComplexNumber");
		#line 1479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UPCS(IsRealNumber)(b.__ref())), u"b.IsRealNumber");
		#line 1480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((!ADV_UPCS(IsImaginaryNumber)(b.__ref())), u"!b.IsImaginaryNumber");
		#line 1481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UPCS(IsEvenInteger)(b.__ref())), u"b.IsEvenInteger");
		#line 1482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((!ADV_UPCS(IsOddInteger)(b.__ref())), u"!b.IsOddInteger");
		#line 1483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((!ADV_UPCS(IsInfinity)(b.__ref())), u"!b.IsInfinity");
		#line 1484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((!ADV_UPCS(IsPositiveInfinity)(b.__ref())), u"!b.IsPositiveInfinity");
		#line 1485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((!ADV_UPCS(IsNegativeInfinity)(b.__ref())), u"!b.IsNegativeInfinity");
		#line 1486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((!ADV_UPCS(IsNaN)(b.__ref())), u"!b.IsNaN");
		#line 1487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UPCS(IsNormal)(b.__ref())), u"b.IsNormal");
		#line 1488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((!ADV_UPCS(IsSubnormal)(b.__ref())), u"!b.IsSubnormal");
		#line 1489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((!ADV_UPCS(IsZero)(b.__ref())), u"!b.IsZero");
		#line 1492 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UPCS(Sign)(a.__ref()) == +Builtin::i32(1)), u"a.Sign==+1");
		#line 1493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UPCS(Sign)(b.__ref()) == Builtin::i32(-1)), u"b.Sign==-1");
		#line 1494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(CopySign)(a.__ref(), b) == Builtin::i32(-10)), u"a.CopySign(b)==-10");
		#line 1495 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(Max)(a.__ref(), b) == a), u"a.Max(b)==a");
		#line 1496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(Min)(a.__ref(), b) == b), u"a.Min(b)==b");
		#line 1497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(MaxNumber)(a.__ref(), b) == a), u"a.MaxNumber(b)==a");
		#line 1498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(MinNumber)(a.__ref(), b) == b), u"a.MinNumber(b)==b");
		#line 1499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(Clamp)(b.__ref(), Builtin::i16(-5), +Builtin::i16(5)) == Builtin::i32(-5)), u"b.Clamp(-5i16,+5i16)==-5");
		#line 1502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::i16(2).__ref()) == Builtin::i32(1)), u"2i16.Log2==1");
		#line 1503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::i16(16).__ref()) == Builtin::i32(4)), u"16i16.Log2==4");
		#line 1504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::i16(64).__ref()) == Builtin::i32(6)), u"64i16.Log2==6");
		#line 1505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::i16(20000).__ref()) == Builtin::i32(14)), u"20_000i16.Log2==14");
		#line 1506 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::i16(2).__ref()) == Builtin::i32(1)), u"2i16.Log2Ceiling==1");
		#line 1507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::i16(16).__ref()) == Builtin::i32(4)), u"16i16.Log2Ceiling==4");
		#line 1508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::i16(65).__ref()) == Builtin::i32(7)), u"65i16.Log2Ceiling==7");
		#line 1509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::i16(20000).__ref()) == Builtin::i32(15)), u"20_000i16.Log2Ceiling==15");
		#line 1510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UPCS(CheckedLog2)(Builtin::i16(0).__ref()) == nullptr), u"0i16.CheckedLog2==null");
		#line 1511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(Builtin::i16(5).__ref()) == Builtin::i32(0)), u"5i16.Log10==0");
		#line 1512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(a.__ref()) == Builtin::i32(1)), u"a.Log10==1");
		#line 1513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(ADV_USPCS(MaxValue, Builtin::i16)().__ref()) == Builtin::i32(4)), u"i16.MaxValue.Log10==4");
		#line 1514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(Log)(Builtin::i16(5).__ref(), Builtin::i16(5)) == Builtin::i32(1)), u"5i16.Log(5i16)==1");
		#line 1515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(CheckedLog)(Builtin::i16(5).__ref(), Builtin::i16(-5)) == nullptr), u"5i16.CheckedLog(-5i16)==null");
		#line 1516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(Midpoint)(a.__ref(), Builtin::i16(30)) == Builtin::i32(20)), u"a.Midpoint(30i16)==20");
		#line 1517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(Midpoint)(Builtin::i16(10000).__ref(), ADV_USPCS(MaxValue, Builtin::i16)()) == Builtin::i32(21383)), u"10_000i16.Midpoint(i16.MaxValue)==21_383");
		#line 1518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)(a.__ref(), Builtin::i16(10)) == Builtin::i32(10)), u"a.NextMultipleOf(10i16)==10");
		#line 1519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)(Builtin::i16(11).__ref(), Builtin::i16(10)) == Builtin::i32(20)), u"11i16.NextMultipleOf(10i16)==20");
		#line 1520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)(Builtin::i16(10345).__ref(), Builtin::i16(80)) == Builtin::i32(10400)), u"10_345i16.NextMultipleOf(80i16)==10_400");
		#line 1521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)((Builtin::i16(-13)).__ref(), Builtin::i16(4)) == Builtin::i32(-12)), u"(-13i16).NextMultipleOf(4i16)==-12");
		#line 1522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)((Builtin::i16(-13)).__ref(), Builtin::i16(-4)) == Builtin::i32(-16)), u"(-13i16).NextMultipleOf(-4i16)==-16");
		#line 1523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UPCS(ByteCount)(a.__ref()) == Builtin::i32(2)), u"a.ByteCount==2");
		#line 1524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UPCS(ByteSwapped)(Builtin::i16(0x7b23).__ref()) == Builtin::i32(0x237b)), u"0x7b23_i16.ByteSwapped==0x237b");
		#line 1525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_not)(Builtin::i16(0b1010), Builtin::i32(3)) == Builtin::i32(0b01010000)), u"0b1010_i16<<~3==0b0101_0000");
		#line 1526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_not)(Builtin::i16(0b1010), Builtin::i32(5)) == Builtin::i32(0b101000000)), u"0b1010_i16<<~5==0b1_0100_0000");
		#line 1527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_not)(Builtin::i16(0b1010), Builtin::i32(3)) == Builtin::i32(0b0100000000000001)), u"0b1010_i16>>~3==0b0100_0000_0000_0001");
		#line 1528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_not)(Builtin::i16(0b1010), Builtin::i32(5)) == Builtin::i32(0b0101000000000000)), u"0b1010_i16>>~5==0b0101_0000_0000_0000");
		#line 1530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(IsMultipleOf)(a.__ref(), Builtin::i16(5))), u"a.IsMultipleOf(5i16)");
		#line 1531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((!ADV_UFCS(IsMultipleOf)(a.__ref(), Builtin::i16(6))), u"!a.IsMultipleOf(6i16)");
		#line 1533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UPCS(MultiplyBy10)(a.__ref()) == Builtin::i32(100)), u"a.MultiplyBy10==100");
		#line 1534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UPCS(MultiplyBy16)(a.__ref()) == Builtin::i32(160)), u"a.MultiplyBy16==160");
		#line 1537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_qst)(a, Builtin::i16(100)) == Builtin::i16(110)), u"a+?100i16==110i16");
		#line 1538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_qst)(a, ADV_USPCS(MaxValue, Builtin::i16)()) == nullptr), u"a+?i16.MaxValue==null");
		#line 1539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_UFCS(_operator_add_qst_eq)(a, Builtin::i16(5));
		#line 1540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((a == Builtin::i32(15)), u"a==15");
		#line 1541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_UFCS(_operator_add_qst_eq)(a, Builtin::i16(32760));
		#line 1542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((a == Builtin::i32(15)), u"a==15");
		#line 1543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_ne)(a, Builtin::i16(100)) == Builtin::i32(115)), u"a+!100i16==115");
		#line 1544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_mod)(a, Builtin::i16(100)) == Builtin::i32(115)), u"a+%100i16==115");
		#line 1545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_mod)(a, Builtin::i16(32753)) == ADV_USPCS(MinValue, Builtin::i16)()), u"a+%32753i16==i16.MinValue");
		#line 1546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_UFCS(_operator_add_mod_eq)(a, ADV_USPCS(MaxValue, Builtin::i16)());
		#line 1547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((a == Builtin::i32(-32754)), u"a==-32754");
		#line 1548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_or)(a, (Builtin::i16(-32760))) == ADV_USPCS(MinValue, Builtin::i16)()), u"a+|(-32760i16)==i16.MinValue");
		#line 1549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_UFCS(_operator_add_or_eq)(a, ADV_USPCS(MaxValue, Builtin::i16)());
		#line 1550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((a == Builtin::i32(13)), u"a==13");
		#line 1551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_or)(a, Builtin::i16(32760)) == ADV_USPCS(MaxValue, Builtin::i16)()), u"a+|32760i16==i16.MaxValue");
		#line 1552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		{
			#line 1553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_add_mod_qst)(a, Builtin::i16(32760));
			#line 1554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			ADV_ASSERT((result == Builtin::i32(-32763) && overflowed), u"result==-32763&&overflowed");
		}
		#line 1557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		a = ADV_USPCS(MaxValue, Builtin::i16)() - Builtin::i16((short)1);
		#line 1558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_add_qst_postfix)(a) == ADV_USPCS(MaxValue, Builtin::i16)() - Builtin::i32(1)), u"a++?==i16.MaxValue-1");
		#line 1559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::i16)()), u"a==i16.MaxValue");
		#line 1560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_UFCS(_operator_add_add_mod_postfix)(a);
		#line 1561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::i16)()), u"a==i16.MinValue");
		#line 1562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		a = ADV_USPCS(MaxValue, Builtin::i16)();
		#line 1563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_UFCS(_operator_add_add_or_postfix)(a);
		#line 1564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::i16)()), u"a==i16.MaxValue");
		#line 1566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		{
			#line 1567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.__ref(), Builtin::i16(0), false);
			#line 1568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			ADV_ASSERT((result == ADV_USPCS(MaxValue, Builtin::i16)() && !overflowed), u"result==i16.MaxValue&&!overflowed");
		}
		#line 1570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		{
			#line 1571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.__ref(), Builtin::i16(-5), true);
			#line 1572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			ADV_ASSERT((result == Builtin::i32(32763) && !overflowed), u"result==32763&&!overflowed");
		}
		#line 1574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		{
			#line 1575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.__ref(), Builtin::i16(0), true);
			#line 1576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			ADV_ASSERT((result == ADV_USPCS(MinValue, Builtin::i16)() && overflowed), u"result==i16.MinValue&&overflowed");
		}
		#line 1578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		{
			#line 1579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.__ref(), Builtin::i16(10), true);
			#line 1580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			ADV_ASSERT((result == Builtin::i32(-32758) && overflowed), u"result==-32758&&overflowed");
		}
		#line 1583 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_qst)(a, Builtin::i16(1000)) == Builtin::i16(31767)), u"a-?1000i16==31767i16");
		#line 1584 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_qst)(-a, ADV_USPCS(MaxValue, Builtin::i16)()) == nullptr), u"-a-?i16.MaxValue==null");
		#line 1585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_UFCS(_operator_sub_qst_eq)(a, Builtin::i16(5000));
		#line 1586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((a == Builtin::i32(27767)), u"a==27767");
		#line 1587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_UFCS(_operator_sub_qst_eq)(a, Builtin::i16(1));
		#line 1588 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((a == Builtin::i32(27766)), u"a==27766");
		#line 1589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_ne)(a, Builtin::i16(1000)) == Builtin::i32(26766)), u"a-!1000i16==26766");
		#line 1590 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_mod)(-a, Builtin::i16(5003)) == ADV_USPCS(MaxValue, Builtin::i16)()), u"-a-%5003i16==i16.MaxValue");
		#line 1591 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_mod)(a, Builtin::i16(10000)) == Builtin::i32(17766)), u"a-%10000i16==17766");
		#line 1592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_UFCS(_operator_sub_mod_eq)(a, ADV_USPCS(MaxValue, Builtin::i16)());
		#line 1593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((a == Builtin::i32(-5001)), u"a==-5001");
		#line 1594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_or)(a, Builtin::i16(30000)) == ADV_USPCS(MinValue, Builtin::i16)()), u"a-|30000i16==i16.MinValue");
		#line 1595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_UFCS(_operator_sub_or_eq)(a, ADV_USPCS(MaxValue, Builtin::i16)());
		#line 1596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::i16)()), u"a==i16.MinValue");
		#line 1597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		{
			#line 1598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_sub_mod_qst)(a, Builtin::i16(27769));
			#line 1599 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			ADV_ASSERT((result == Builtin::i32(4999) && overflowed), u"result==4999&&overflowed");
		}
		#line 1602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		a = ADV_USPCS(MinValue, Builtin::i16)() + Builtin::i16((short)1);
		#line 1603 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_sub_qst_postfix)(a) == ADV_USPCS(MinValue, Builtin::i16)() + Builtin::i32(1)), u"a--?==i16.MinValue+1");
		#line 1604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::i16)()), u"a==i16.MinValue");
		#line 1605 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_UFCS(_operator_sub_sub_mod_postfix)(a);
		#line 1606 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::i16)()), u"a==i16.MaxValue");
		#line 1607 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		a = ADV_USPCS(MinValue, Builtin::i16)();
		#line 1608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_UFCS(_operator_sub_sub_or_postfix)(a);
		#line 1609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::i16)()), u"a==i16.MinValue");
		#line 1611 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		{
			#line 1612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.__ref(), Builtin::i16(0), false);
			#line 1613 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			ADV_ASSERT((result == ADV_USPCS(MinValue, Builtin::i16)() && !overflowed), u"result==i16.MinValue&&!overflowed");
		}
		#line 1615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		{
			#line 1616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.__ref(), Builtin::i16(-5), true);
			#line 1617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			ADV_ASSERT((result == Builtin::i32(-32764) && !overflowed), u"result==-32764&&!overflowed");
		}
		#line 1619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		{
			#line 1620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.__ref(), Builtin::i16(0), true);
			#line 1621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			ADV_ASSERT((result == ADV_USPCS(MaxValue, Builtin::i16)() && overflowed), u"result==i16.MaxValue&&overflowed");
		}
		#line 1623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		{
			#line 1624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.__ref(), Builtin::i16(10), true);
			#line 1625 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			ADV_ASSERT((result == Builtin::i32(32757) && overflowed), u"result==32757&&overflowed");
		}
		#line 1628 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_qst)(a, Builtin::i16(1)) == ADV_USPCS(MinValue, Builtin::i16)()), u"a*?1i16==i16.MinValue");
		#line 1629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_qst)(a, Builtin::i16(2)) == nullptr), u"a*?2i16==null");
		#line 1630 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_UFCS(_operator_mul_qst_eq)(a, Builtin::i16(5));
		#line 1631 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::i16)()), u"a==i16.MinValue");
		#line 1632 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		a = Builtin::i16((short)15);
		#line 1633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((a == Builtin::i32(15)), u"a==15");
		#line 1634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_ne)(a, Builtin::i16(3)) == Builtin::i32(45)), u"a*!3i16==45");
		#line 1635 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_mod)(a, Builtin::i16(6)) == Builtin::i32(90)), u"a*%6i16==90");
		#line 1636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_mod)(a, Builtin::i16(3000)) == Builtin::i32(-20536)), u"a*%3000i16==-20536");
		#line 1637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_UFCS(_operator_mul_mod_eq)(a, Builtin::i16(6));
		#line 1638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((a == Builtin::i32(90)), u"a==90");
		#line 1639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_or)(a, (Builtin::i16(-1000))) == ADV_USPCS(MinValue, Builtin::i16)()), u"a*|(-1000i16)==i16.MinValue");
		#line 1640 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_UFCS(_operator_mul_or_eq)(a, Builtin::i16(800));
		#line 1641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::i16)()), u"a==i16.MaxValue");
		#line 1642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_or)(a, Builtin::i16(2)) == ADV_USPCS(MaxValue, Builtin::i16)()), u"a*|2i16==i16.MaxValue");
		#line 1643 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		{
			#line 1644 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_mul_mod_qst)(a, Builtin::i16(2));
			#line 1645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			ADV_ASSERT((result == Builtin::i32(-2) && overflowed), u"result==-2&&overflowed");
		}
		#line 1647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		a = Builtin::i16((short)500);
		#line 1648 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		{
			#line 1649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			const auto& [low, high] = ADV_UFCS(_operator_mul_gt)(a, (Builtin::i16(150)));
			#line 1650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			ADV_ASSERT((low == Builtin::i32(9464) && high == Builtin::i32(1)), u"low==9464&&high==1");
		}
		#line 1652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		{
			#line 1653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			const auto& [low, high] = ADV_UFCS(_operator_mul_gt)(a, (Builtin::i16(-150)));
			#line 1654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			ADV_ASSERT((low == Builtin::i32(56072) && high == Builtin::i32(-2)), u"low==56072&&high==-2");
		}
		#line 1656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		a = ADV_USPCS(MaxValue, Builtin::i16)();
		#line 1657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		{
			#line 1658 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			const auto& [low, high] = ADV_UFCS(CarryingMul)(a.__ref(), Builtin::i16(2), Builtin::i16(12));
			#line 1659 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			ADV_ASSERT((low == Builtin::i32(10) && high == Builtin::i32(1)), u"low==10&&high==1");
		}
		#line 1661 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		{
			#line 1662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			const auto& [low, high] = ADV_UFCS(CarryingMul)(a.__ref(), Builtin::i16(-2), Builtin::i16(-12));
			#line 1663 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			ADV_ASSERT((low == Builtin::i32(65526) && high == Builtin::i32(-2)), u"low==65526&&high==-2");
		}
		#line 1666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		a = Builtin::i16((short)10000);
		#line 1667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, Builtin::i32(60)) == Builtin::i32(166)), u"a\\60==166");
		#line 1668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		a /= Builtin::i16((short)60);
		#line 1669 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((a == Builtin::i32(167)), u"a==167");
		#line 1670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		a = Builtin::i16((short)10000);
		#line 1671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		{
			#line 1672 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)(a, Builtin::i16(60));
			#line 1673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			ADV_ASSERT((div == Builtin::i32(166) && rem == Builtin::i32(40)), u"div==166&&rem==40");
		}
		#line 1675 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_qst)(a, Builtin::i16(5)) == Builtin::i16(2000)), u"a\\?5i16==2000i16");
		#line 1676 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_qst)(a, Builtin::i16(0)) == nullptr), u"a\\?0i16==null");
		#line 1677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_qst)(ADV_USPCS(MinValue, Builtin::i16)(), (Builtin::i16(-1))) == nullptr), u"i16.MinValue\\?(-1i16)==null");
		#line 1679 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_ne)(a, Builtin::i16(5)) == Builtin::i32(2000)), u"a\\!5i16==2000");
		#line 1680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_UFCS(_operator_bsl_mod_eq)(a, Builtin::i16(5));
		#line 1681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((a == Builtin::i32(2000)), u"a==2000");
		#line 1682 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		a = Builtin::i16((short)10);
		#line 1683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_mod)(ADV_USPCS(MinValue, Builtin::i16)(), (Builtin::i16(-1))) == ADV_USPCS(MinValue, Builtin::i16)()), u"i16.MinValue\\%(-1i16)==i16.MinValue");
		#line 1684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_UFCS(_operator_bsl_or_eq)(a, Builtin::i16(5));
		#line 1685 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((a == Builtin::i32(2)), u"a==2");
		#line 1686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		a = Builtin::i16((short)10);
		#line 1687 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_or)(ADV_USPCS(MinValue, Builtin::i16)(), (Builtin::i16(-1))) == ADV_USPCS(MaxValue, Builtin::i16)()), u"i16.MinValue\\|(-1i16)==i16.MaxValue");
		#line 1688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		{
			#line 1689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_bsl_mod_qst)(ADV_USPCS(MinValue, Builtin::i16)(), (Builtin::i16(-1)));
			#line 1690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			ADV_ASSERT((result == ADV_USPCS(MinValue, Builtin::i16)() && overflowed), u"result==i16.MinValue&&overflowed");
		}
		#line 1693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_bsl)(a, Builtin::i16(5)) == Builtin::i16(2)), u"a\\\\5i16==2i16");
		#line 1694 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_bsl)(a, Builtin::i16(6)) == nullptr), u"a\\\\6i16==null");
		#line 1695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_bsl_qst)(a, Builtin::i16(0)) == nullptr), u"a\\\\?0i16==null");
		#line 1697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_not)(a, Builtin::i16(6)) == Builtin::i32(2)), u"a/~6i16==2");
		#line 1698 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_lt)(a, Builtin::i16(6)) == Builtin::i32(1)), u"a/<6i16==1");
		#line 1699 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_gt)(a, Builtin::i16(6)) == Builtin::i32(2)), u"a/>6i16==2");
		#line 1700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_not)(a, (Builtin::i16(-6))) == Builtin::i32(-2)), u"a/~(-6i16)==-2");
		#line 1701 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_lt)(a, (Builtin::i16(-6))) == Builtin::i32(-2)), u"a/<(-6i16)==-2");
		#line 1702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_gt)(a, (Builtin::i16(-6))) == Builtin::i32(-1)), u"a/>(-6i16)==-1");
		#line 1704 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_qst)(a, Builtin::i16(5)) == Builtin::i16(0)), u"a%?5i16==0i16");
		#line 1705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_qst)(a, Builtin::i16(0)) == nullptr), u"a%?0i16==null");
		#line 1706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_qst)(ADV_USPCS(MinValue, Builtin::i16)(), (Builtin::i16(-1))) == nullptr), u"i16.MinValue%?(-1i16)==null");
		#line 1708 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_ne)(a, Builtin::i16(6)) == Builtin::i32(4)), u"a%!6i16==4");
		#line 1709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_UFCS(_operator_mod_mod_eq)(a, Builtin::i16(6));
		#line 1710 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((a == Builtin::i32(4)), u"a==4");
		#line 1711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		a = Builtin::i16((short)10);
		#line 1712 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_mod)(ADV_USPCS(MinValue, Builtin::i16)(), (Builtin::i16(-1))) == Builtin::i32(0)), u"i16.MinValue%%(-1i16)==0");
		#line 1713 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		{
			#line 1714 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_mod_mod_qst)(ADV_USPCS(MinValue, Builtin::i16)(), (Builtin::i16(-1)));
			#line 1715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			ADV_ASSERT((result == Builtin::i32(0) && overflowed), u"result==0&&overflowed");
		}
		#line 1718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_qst)(a) == Builtin::i16(-10)), u"-?a==-10i16");
		#line 1719 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_qst)(ADV_USPCS(MinValue, Builtin::i16)()) == nullptr), u"-?i16.MinValue==null");
		#line 1720 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_ne)(a) == Builtin::i32(-10)), u"-!a==-10");
		#line 1721 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_mod)(a) == Builtin::i32(-10)), u"-%a==-10");
		#line 1722 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_mod)(ADV_USPCS(MinValue, Builtin::i16)()) == ADV_USPCS(MinValue, Builtin::i16)()), u"-%i16.MinValue==i16.MinValue");
		#line 1723 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_or)(a) == Builtin::i32(-10)), u"-|a==-10");
		#line 1724 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_or)(ADV_USPCS(MinValue, Builtin::i16)()) == ADV_USPCS(MaxValue, Builtin::i16)()), u"-|i16.MinValue==i16.MaxValue");
		#line 1726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_bsl)(ADV_USPCS(MaxValue, Builtin::i16)(), Builtin::u32(4U)) == Builtin::i32(0b0000011111111111)), u"i16.MaxValue>>\\4u==0b0000_0111_1111_1111");
		#line 1727 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_bsl)(ADV_USPCS(MaxValue, Builtin::i16)(), Builtin::u32(20U)) == Builtin::i32(0)), u"i16.MaxValue>>\\20u==0");
		#line 1728 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_bsl)(ADV_USPCS(MinValue, Builtin::i16)(), Builtin::u32(20U)) == Builtin::i32(-1)), u"i16.MinValue>>\\20u==-1");
		#line 1729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_bsl)(ADV_USPCS(MaxValue, Builtin::i16)(), Builtin::u32(20U)) == Builtin::i32(0)), u"i16.MaxValue<<\\20u==0");
		#line 1730 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_qst)(ADV_USPCS(MaxValue, Builtin::i16)(), Builtin::i32(4)) == Builtin::i16(0b0000011111111111)), u"i16.MaxValue>>?4==0b0000_0111_1111_1111i16");
		#line 1731 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_qst)(ADV_USPCS(MaxValue, Builtin::i16)(), Builtin::i32(20)) == nullptr), u"i16.MaxValue>>?20==null");
		#line 1732 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_qst)(ADV_USPCS(MaxValue, Builtin::i16)(), Builtin::i32(20)) == nullptr), u"i16.MaxValue<<?20==null");
		#line 1733 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_ne)(ADV_USPCS(MaxValue, Builtin::i16)(), Builtin::i32(4)) == Builtin::i32(0b0000011111111111)), u"i16.MaxValue>>!4==0b0000_0111_1111_1111");
		#line 1734 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_mod)(ADV_USPCS(MaxValue, Builtin::i16)(), Builtin::i32(20)) == Builtin::i32(0b0000011111111111)), u"i16.MaxValue>>%20==0b0000_0111_1111_1111");
		#line 1735 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		a = ADV_USPCS(MaxValue, Builtin::i16)();
		#line 1736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_UFCS(_operator_gt_gt_mod_eq)(a, Builtin::i16((short)20));
		#line 1737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_mod)(a, Builtin::i32(20)) == Builtin::i32(0b0111111111110000)), u"a<<%20==0b0111_1111_1111_0000");
		#line 1738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		{
			#line 1739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_gt_gt_mod_qst)(ADV_USPCS(MaxValue, Builtin::i16)(), Builtin::i32(20));
			#line 1740 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			ADV_ASSERT((result == Builtin::i32(0b0000011111111111) && overflowed), u"result==0b0000_0111_1111_1111&&overflowed");
		}
		#line 1744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		a = Builtin::i16((short)150);
		#line 1745 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor)(a, Builtin::u32(2U)) == Builtin::i32(22500)), u"a^^2u==22500");
		#line 1746 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_UFCS(_operator_xor_xor_eq)(a, Builtin::u32(2U));
		#line 1747 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((a == Builtin::i32(22500)), u"a==22500");
		#line 1748 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor)(Builtin::i16(30), Builtin::u32(3U)) == Builtin::i32(27000)), u"30i16^^3u==27000");
		#line 1749 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_qst)(Builtin::i16(30), Builtin::u32(3U)) == Builtin::i16(27000)), u"30i16^^?3u==27000i16");
		#line 1750 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_qst)(Builtin::i16(30), Builtin::u32(4U)) == nullptr), u"30i16^^?4u==null");
		#line 1751 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_UFCS(_operator_xor_xor_qst_eq)(a, Builtin::u32(2U));
		#line 1752 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((a == Builtin::i32(22500)), u"a==22500");
		#line 1753 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_ne)(Builtin::i16(30), Builtin::u32(3U)) == Builtin::i32(27000)), u"30i16^^!3u==27000");
		#line 1754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_mod)(Builtin::i16(30), Builtin::u32(4U)) == Builtin::i32(23568)), u"30i16^^%4u==23568");
		#line 1755 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		a = Builtin::i16((short)30);
		#line 1756 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_UFCS(_operator_xor_xor_mod_eq)(a, Builtin::u32(2U));
		#line 1757 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((a == Builtin::i32(900)), u"a==900");
		#line 1758 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_or)(Builtin::i16(30), Builtin::u32(3U)) == Builtin::i32(27000)), u"30i16^^|3u==27000");
		#line 1759 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_or)(Builtin::i16(30), Builtin::u32(4U)) == ADV_USPCS(MaxValue, Builtin::i16)()), u"30i16^^|4u==i16.MaxValue");
		#line 1760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		{
			#line 1761 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_xor_xor_mod_qst)(Builtin::i16(30), Builtin::u32(4U));
			#line 1762 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			ADV_ASSERT((result == Builtin::i32(23568) && overflowed), u"result==23568&&overflowed");
		}
		return true;
	}();
	#endif	
} namespace __extensions { using namespace System;
#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	auto _operator_eq_eq_mul(__extension_Int16_20_i16 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool
	{
		#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		{
			#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			auto __tmp0 = Builtin::Cast<false, __extension_Int16_1334_i16>(obj);
			#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			if ((__tmp0.IsValid())) {
				#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				const auto& obj = *__tmp0;
				
				#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				return __this == obj;
			}
		}
		#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return false;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	auto _operator_lt_eq_gt_mul(__extension_Int16_73_i16 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32
	{
		#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		{
			#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			auto __tmp0 = Builtin::Cast<false, __extension_Int16_1334_i16>(obj);
			#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			if ((__tmp0.IsValid())) {
				#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				const auto& obj = *__tmp0;
				
				#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				return __this <=> obj;
			}
		}
		#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		{
			#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			if ((!Builtin::Is(obj, nullptr))) {
				#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				auto __tmp0 = *obj; const auto& obj = __tmp0;
				
				#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				Builtin::Throw(Builtin::InvalidOperationException{});
			}
		}
		#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return Builtin::i32(1);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	auto MaxMagnitude(__extension_Int16_253_i16 const& __this LIFETIMEBOUND, __extension_Int16_1334_i16 rhs) noexcept -> const typename __extension_Int16_253_i16
	{
		#line 279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		auto absX = __this; 
		#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if ((absX <=> Builtin::i32(0)) < 0) {
			#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			absX = UnsafeCast<__extension_Int16_1334_i16>(-Builtin::i32{absX});
			#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			if ((absX <=> Builtin::i32(0)) < 0) {
				#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				return __this;
			}
		}
		#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		auto absY = rhs; 
		#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if ((absY <=> Builtin::i32(0)) < 0) {
			#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			absY = UnsafeCast<__extension_Int16_1334_i16>(-Builtin::i32{absY});
			#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			if ((absY <=> Builtin::i32(0)) < 0) {
				#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				return rhs;
			}
		}
		#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if ((absX <=> absY) > 0) {
			#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return __this;
		}
		#line 299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (absX == absY) {
			#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return ADV_UPCS(IsNegative)(__this.__ref()) ? rhs : __this;
		}
		#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return rhs;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	auto MinMagnitude(__extension_Int16_253_i16 const& __this LIFETIMEBOUND, __extension_Int16_1334_i16 rhs) noexcept -> const typename __extension_Int16_253_i16
	{
		#line 310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		auto absX = __this; 
		#line 311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if ((absX <=> Builtin::i32(0)) < 0) {
			#line 312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			absX = UnsafeCast<__extension_Int16_1334_i16>(-Builtin::i32{absX});
			#line 313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			if ((absX <=> Builtin::i32(0)) < 0) {
				#line 314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				return rhs;
			}
		}
		#line 318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		auto absY = rhs; 
		#line 319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if ((absY <=> Builtin::i32(0)) < 0) {
			#line 320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			absY = UnsafeCast<__extension_Int16_1334_i16>(-Builtin::i32{absY});
			#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			if ((absY <=> Builtin::i32(0)) < 0) {
				#line 322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				return __this;
			}
		}
		#line 326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if ((absX <=> absY) < 0) {
			#line 327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return __this;
		}
		#line 330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (absX == absY) {
			#line 331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return ADV_UPCS(IsNegative)(__this.__ref()) ? __this : rhs;
		}
		#line 334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return rhs;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	auto Parse(__extension_Int16_253_i16 const& __this LIFETIMEBOUND, Builtin::Str input)  -> const typename __extension_Int16_253_i16
	{
		#line 341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return Builtin::i16(0);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	auto TryParse(__extension_Int16_253_i16 const& __this LIFETIMEBOUND, Builtin::Str input) noexcept -> const Builtin::Nullable<__extension_Int16_1334_i16>
	{
		#line 346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return Builtin::i16(0);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	auto CopySign(__extension_Int16_369_i16 const& __this LIFETIMEBOUND, __extension_Int16_1334_i16 sign)  -> const typename __extension_Int16_369_i16
	{
		#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		auto absValue = __this; 
		#line 375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if ((absValue <=> Builtin::i32(0)) < 0) {
			#line 376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			absValue = UnsafeCast<__extension_Int16_1334_i16>(-Builtin::i32{absValue});
		}
		#line 379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if ((sign <=> Builtin::i32(0)) >= 0) {
			#line 380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			if ((absValue <=> Builtin::i32(0)) < 0) {
				#line 381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				Builtin::Throw(Builtin::IntegerOverflowException{});
			}
			#line 384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return absValue;
		}
		#line 387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return UnsafeCast<__extension_Int16_1334_i16>(-Builtin::i32{absValue});
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	auto Log(__extension_Int16_397_i16 const& __this LIFETIMEBOUND, __extension_Int16_1334_i16 base)  -> const typename __extension_Int16_397_i16
	{
		#line 486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (const auto result = ADV_UFCS(CheckedLog)(__this.__ref(), base)) {
			{
				#line 486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
				return result;
			}
		}
		#line 489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> auto _operator_add_mod_qst(__extension_Int16_516_i16 const& __this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<__extension_Int16_1334_i16, bool>
	{
		#line 573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator +%? implemented only for integer types");
		#line 574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		__extension_Int16_1334_i16 result{}; 
		#line 575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		auto overflowed = !Builtin::SafeAdd(__this, rhs, result); 
		#line 576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 664 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> auto _operator_sub_mod_qst(__extension_Int16_516_i16 const& __this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<__extension_Int16_1334_i16, bool>
	{
		#line 665 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator -%? implemented only for integer types");
		#line 666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		__extension_Int16_1334_i16 result{}; 
		#line 667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		auto overflowed = !Builtin::SafeSubtract(__this, rhs, result); 
		#line 668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> auto _operator_mul_mod_qst(__extension_Int16_516_i16 const& __this LIFETIMEBOUND, T rhs) noexcept -> const std::tuple<__extension_Int16_1334_i16, bool>
	{
		#line 739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator *%? implemented only for integer types");
		#line 740 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		__extension_Int16_1334_i16 result{}; 
		#line 741 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		auto overflowed = !Builtin::SafeMultiply(__this, rhs, result); 
		#line 742 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 821 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> auto _operator_bsl_mod_qst(__extension_Int16_516_i16 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_Int16_1334_i16, bool>
	{
		#line 822 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\%? implemented only for integer types");
		#line 823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		__extension_Int16_1334_i16 result{}; 
		#line 824 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		auto overflowed = !Builtin::SafeDivide(__this, rhs, result); 
		#line 825 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 896 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	template<class T> auto _operator_mod_mod_qst(__extension_Int16_516_i16 const& __this LIFETIMEBOUND, T rhs)  -> const std::tuple<__extension_Int16_1334_i16, bool>
	{
		#line 897 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator %%? implemented only for integer types");
		#line 898 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		__extension_Int16_1334_i16 result{}; 
		#line 899 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		auto overflowed = !Builtin::SafeModulus(__this, rhs, result); 
		#line 900 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
	auto getCheckedIsqrt(__extension_Int16_1168_i16 const& __this ) -> const Builtin::Nullable<__extension_Int16_1334_i16>
	{
		#line 1179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		if (ADV_UPCS(IsNegative)(__this.__ref())) {
			#line 1180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
			return nullptr;
		}
		#line 1186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int16.ast"
		return Builtin::i16(0);
	}
	} namespace System{

}