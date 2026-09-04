#include "Int128.h"
#include "Math.h"

namespace System {
//###############################################################################
//# Global type aliases
//###############################################################################
//###############################################################################
//# Type definitions
//###############################################################################

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	















#line 1473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	static_assert(Builtin::usize(sizeof(Builtin::i128)) == Builtin::i32(16), "i128 should be 16 bytes");
#line 1474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	static_assert(ADV_USPCS(MinValue, Builtin::i128)() == INT128_MIN, "i128.Min should be -170141183460469231731687303715884105728");
#line 1475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	static_assert(ADV_USPCS(MaxValue, Builtin::i128)() == Builtin::ParseInt128("0x7FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"), "i128.Max should be 0x7FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF");
#line 1476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	static_assert(ADV_UFCS_NONLOCAL(_operator_gt_gt_not)(ADV_USPCS(One, Builtin::i128)(), Builtin::i32(3)) == Builtin::ParseUInt128("0x20000000000000000000000000000000"), "i128.One >>% 3 == 0x20_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00");
#line 1477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	static_assert(ADV_USPCS(IsSigned, Builtin::i128)(), "i128 must be signed");
#line 1478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	static_assert(ADV_USPCS(MaxDigitCount, Builtin::i128)() == Builtin::i32(39), "i128 max digit count must be 39");
#line 1479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	static_assert(Builtin::ParseInt128("123123123123123123123") + (Builtin::i32(-5)) == Builtin::ParseInt128("123123123123123123118"), "123123123123123123123 + (-5) == 123123123123123123118");
#line 1480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	static_assert(Builtin::ParseInt128("123123123123123123123") * Builtin::i32(5) == Builtin::ParseInt128("615615615615615615615"), "123123123123123123123 * 5 == 615615615615615615615");
#line 1481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	static_assert(Builtin::ParseInt128("615615615615615615615") * Builtin::i64(9223372036854775LL) == Builtin::ParseInt128("5678051854520206831826153779977311625"), "a * 9223372036854775 == 5678051854520206831826153779977311625");
#line 1482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	static_assert(Builtin::ParseInt128("615615615615615615615") * (Builtin::i32(-5)) == Builtin::ParseInt128("-3078078078078078078075"), "a * (-5) == -3078078078078078078075");
#line 1483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	static_assert(ADV_UFCS_NONLOCAL(_operator_xor_xor)(Builtin::i128(2LL), Builtin::u32(126U)) == Builtin::ParseInt128("85070591730234615865843651857942052864"), "2i128 ^^ 126u == 85070591730234615865843651857942052864");
#line 1484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	static_assert(ADV_UPCS_NONLOCAL(ByteSwapped)(Builtin::ParseInt128("0x7b233d2a39fea3397b233d2a39fea339").$ref()) == Builtin::ParseInt128("0x39a3fe392a3d237b39a3fe392a3d237b"), "0x7b233d2a39fea3397b233d2a39fea339_i128.ByteSwapped == 0x39a3fe392a3d237b39a3fe392a3d237b");
#line 1485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	static_assert(Builtin::TypeIs<Builtin::i128, IComparable<Builtin::i128>>(), "i128 should implement IComparable<i128>");
#line 1486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	static_assert(Builtin::TypeIs<Builtin::i128, IEquatable<Builtin::i128>>(), "i128 should implement IEquatable<i128>");
#line 1487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	static_assert(Builtin::TypeIs<Builtin::i128, ISelfComparable>(), "i128 should implement ISelfComparable");
#line 1488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	static_assert(Builtin::TypeIs<Builtin::i128, ISelfEquatable>(), "i128 should implement ISelfEquatable");
#line 1489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	static_assert(Builtin::TypeIs<Builtin::i128, IAdditionOperators<Builtin::i128, Builtin::i128>>(), "i128 should implement IAdditionOperators<i128, i128>");
#line 1490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	static_assert(Builtin::TypeIs<Builtin::i128, ISubtractionOperators<Builtin::i128, Builtin::i128>>(), "i128 should implement ISubtractionOperators<i128, i128>");
#line 1491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	static_assert(Builtin::TypeIs<Builtin::i128, IMultiplyOperators<Builtin::i128, Builtin::i128>>(), "i128 should implement IMultiplyOperators<i128, i128>");
#line 1492 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	static_assert(Builtin::TypeIs<Builtin::i128, IDivisionOperators<Builtin::i128, Builtin::f64>>(), "i128 should implement IDivisionOperators<i128, f64>");
#line 1493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	static_assert(Builtin::TypeIs<Builtin::i128, IIntDivOperators<Builtin::i128, Builtin::i128>>(), "i128 should implement IIntDivOperators<i128, i128>");
#line 1494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	static_assert(Builtin::TypeIs<Builtin::i128, IModulusOperators<Builtin::i128, Builtin::i128>>(), "i128 should implement IModulusOperators<i128, i128>");
#line 1495 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	static_assert(Builtin::TypeIs<Builtin::i128, IBitwiseOperators<Builtin::i128, Builtin::i128>>(), "i128 should implement IBitwiseOperators<i128, i128>");
#line 1496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	static_assert(Builtin::TypeIs<Builtin::i128, IShiftOperators<Builtin::i32, Builtin::i128>>(), "i128 should implement IShiftOperators<i32, i128>");
#line 1497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	static_assert(Builtin::TypeIs<Builtin::i128, IUnaryPlusOperators<Builtin::i128>>(), "i128 should implement IUnaryPlusOperators<i128>");
#line 1498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	static_assert(Builtin::TypeIs<Builtin::i128, IUnaryNegationOperators<Builtin::i128>>(), "i128 should implement IUnaryNegationOperators<i128>");
#line 1499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	static_assert(Builtin::TypeIs<Builtin::i128, IIncrementOperators<Builtin::i128>>(), "i128 should implement IIncrementOperators<i128>");
#line 1500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	static_assert(Builtin::TypeIs<Builtin::i128, IDecrementOperators<Builtin::i128>>(), "i128 should implement IDecrementOperators<i128>");
#line 1501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	static_assert(ADV_UFCS_NONLOCAL(_operator_add_mod)(ADV_USPCS(MaxValue, Builtin::i128)(), Builtin::i128(1LL)) == ADV_USPCS(MinValue, Builtin::i128)(), "i128.MaxValue +% 1i128 == i128.MinValue");
#line 1502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	static_assert(ADV_UFCS_NONLOCAL(_operator_add_or)(ADV_USPCS(MaxValue, Builtin::i128)(), Builtin::i128(1LL)) == ADV_USPCS(MaxValue, Builtin::i128)(), "i128.MaxValue +| 1i128 == i128.MaxValue");
#ifdef ADV_UNITTEST
	#line 1504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	static bool $Test_58e632171b2e9327 = [](){
		#line 1506 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::i128 a = Builtin::i32(-12345); 
		#line 1507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::i32(-12345)), "a==-12345");
		#line 1508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = Builtin::i8(-23);
		#line 1509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::i32(-23)), "a==-23");
		#line 1510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = Builtin::i16(1234);
		#line 1511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::i32(1234)), "a==1234");
		#line 1512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = Builtin::i64(-12345678901234LL);
		#line 1513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::i64(-12345678901234LL)), "a==-12345678901234");
		#line 1514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = Builtin::u8(23U);
		#line 1515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::i32(23)), "a==23");
		#line 1516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = Builtin::u16(1234U);
		#line 1517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::i32(1234)), "a==1234");
		#line 1518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = Builtin::u32(212455666U);
		#line 1519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::i32(212455666)), "a==212455666");
		#line 1520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = Builtin::u64(1234567890123567ULL);
		#line 1521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::i64(1234567890123567LL)), "a==1234567890123567");
		#line 1522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = Builtin::ParseInt128("170141183460469231731687303715");
		#line 1523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::ParseInt128("170141183460469231731687303715")), "a==170141183460469231731687303715");
		#line 1524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::u128 u = Builtin::ParseUInt128("170141183460469231731687303715884105727"); 
		#line 1525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = Builtin::Cast<true, Builtin::i128>(u);
		#line 1526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == u), "a==u");
		#line 1527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = ADV_USPCS(MinValue, Builtin::i128)();
		#line 1528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		u = Builtin::ParseUInt128("170141183460469231731687303715884105728");
		#line 1529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a != u), "a!=u");
		#line 1530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT(((a <=> u) < 0), "a<u");
		#line 1531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((Builtin::Cast<true, Builtin::i8>(Builtin::i128(-123LL)) == Builtin::i32(-123)), "-123i128asi8==-123");
		#line 1532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((Builtin::Cast<true, Builtin::i16>(Builtin::i128(-1234LL)) == Builtin::i32(-1234)), "-1234i128asi16==-1234");
		#line 1533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((Builtin::Cast<true, Builtin::i32>(Builtin::i128(-123123LL)) == Builtin::i32(-123123)), "-123123i128asi32==-123123");
		#line 1534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((Builtin::Cast<true, Builtin::i64>(Builtin::i128(-123123123123LL)) == Builtin::i64(-123123123123LL)), "-123123123123i128asi64==-123123123123");
		#line 1535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((Builtin::Cast<true, Builtin::u8>(Builtin::i128(123LL)) == Builtin::i32(123)), "123i128asu8==123");
		#line 1536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((Builtin::Cast<true, Builtin::u16>(Builtin::i128(1234LL)) == Builtin::i32(1234)), "1234i128asu16==1234");
		#line 1537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((Builtin::Cast<true, Builtin::u32>(Builtin::i128(123123LL)) == Builtin::i32(123123)), "123123i128asu32==123123");
		#line 1538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((Builtin::Cast<true, Builtin::u64>(Builtin::i128(123123123123LL)) == Builtin::i64(123123123123LL)), "123123123123i128asu64==123123123123");
		#line 1539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT(((a <=> Builtin::i8(123)) < 0), "a<123i8");
		#line 1540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT(((a <=> Builtin::i16(1234)) < 0), "a<1234i16");
		#line 1541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT(((a <=> Builtin::i32(123123)) < 0), "a<123123i32");
		#line 1542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT(((a <=> Builtin::i64(123123123123LL)) < 0), "a<123123123123i64");
		#line 1543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT(((a <=> Builtin::u8(250U)) < 0), "a<250u8");
		#line 1544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT(((a <=> Builtin::u16(25000U)) < 0), "a<25000u16");
		#line 1545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT(((a <=> Builtin::u32(2500000U)) < 0), "a<2500000u32");
		#line 1546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT(((a <=> Builtin::u64(250000000000ULL)) < 0), "a<250000000000u64");
		#line 1547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = Builtin::ParseInt128("11834604692317316873037158841057");
		#line 1548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT(((a <=> Builtin::i8(123)) > 0), "a>123i8");
		#line 1549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT(((a <=> Builtin::i16(1234)) > 0), "a>1234i16");
		#line 1550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT(((a <=> Builtin::i32(123123)) > 0), "a>123123i32");
		#line 1551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT(((a <=> Builtin::i64(123123123123LL)) > 0), "a>123123123123i64");
		#line 1552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT(((a <=> Builtin::u8(250U)) > 0), "a>250u8");
		#line 1553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT(((a <=> Builtin::u16(25000U)) > 0), "a>25000u16");
		#line 1554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT(((a <=> Builtin::u32(2500000U)) > 0), "a>2500000u32");
		#line 1555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT(((a <=> Builtin::u64(250000000000ULL)) > 0), "a>250000000000u64");
		#line 1556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((+a == a), "+a==a");
		#line 1557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((-a == Builtin::ParseInt128("-11834604692317316873037158841057")), "-a==-11834604692317316873037158841057");
		#line 1558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_not)(a) == Builtin::ParseInt128("-11834604692317316873037158841058")), "~a==-11834604692317316873037158841058");
		#line 1560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT(((a & Builtin::i32(1234)) == Builtin::i32(192)), "(a&1234)==192");
		#line 1561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT(((a | Builtin::i32(1234)) == Builtin::ParseInt128("11834604692317316873037158842099")), "(a|1234)==11834604692317316873037158842099");
		#line 1562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT(((a ^ Builtin::i32(1234)) == Builtin::ParseInt128("11834604692317316873037158841907")), "(a^1234)==11834604692317316873037158841907");
		#line 1563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT(((a & Builtin::ParseInt128("123412341234123412341234")) == Builtin::ParseInt128("47262864179445148942560")), "(a&123412341234123412341234)==47262864179445148942560");
		#line 1564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT(((a | Builtin::ParseInt128("123412341234123412341234")) == Builtin::ParseInt128("11834604768466793927715422239731")), "(a|123412341234123412341234)==11834604768466793927715422239731");
		#line 1565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT(((a ^ Builtin::ParseInt128("123412341234123412341234")) == Builtin::ParseInt128("11834604721203929748270273297171")), "(a^123412341234123412341234)==11834604721203929748270273297171");
		#line 1566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = ADV_USPCS(MaxValue, Builtin::i128)();
		#line 1567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a >> Builtin::i32(0) == a), "a>>0==a");
		#line 1568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a << Builtin::i32(0) == a), "a<<0==a");
		#line 1569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a >> Builtin::i32(15) == Builtin::ParseInt128("0xFFFFFFFFFFFFFFFFFFFFFFFFFFFF")), "a>>15==0xFFFFFFFFFFFFFFFFFFFFFFFFFFFF_i128");
		#line 1570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a >> Builtin::i32(95) == Builtin::i64(0xFFFFFFFFLL)), "a>>95==0xFFFFFFFF");
		#line 1571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a >> Builtin::i32(127) == Builtin::i32(0)), "a>>127==0");
		#line 1572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = Builtin::i64(0xFFFFFFFFFFLL);
		#line 1573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a << Builtin::i32(16) == Builtin::i64(0xFFFFFFFFFF0000LL)), "a<<16==0xFFFFFFFFFF0000");
		#line 1574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a << Builtin::i32(80) == Builtin::ParseInt128("0xFFFFFFFFFF00000000000000000000")), "a<<80==0xFFFFFFFFFF00000000000000000000_i128");
		#line 1575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((Builtin::i128(-1LL) >> Builtin::i32(58) == Builtin::i32(-1)), "-1i128>>58==-1");
		#line 1576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = Builtin::i32(-1);
		#line 1577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a >> Builtin::i32(64) == Builtin::i32(-1)), "a>>64==-1");
		#line 1578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_gt)(a, Builtin::i32(64)) == Builtin::u64(0xFFFFFFFFFFFFFFFFULL)), "a>>>64==0xFFFFFFFFFFFFFFFFu");
		#line 1579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_UFCS(_operator_gt_gt_gt_eq)(a, Builtin::i32(64));
		#line 1580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::u64(0xFFFFFFFFFFFFFFFFULL)), "a==0xFFFFFFFFFFFFFFFFu");
		#line 1582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = Builtin::ParseInt128("123123123123123123123");
		#line 1583 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a++ == Builtin::ParseInt128("123123123123123123123")), "a++==123123123123123123123");
		#line 1584 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((++a == Builtin::ParseInt128("123123123123123123125")), "++a==123123123123123123125");
		#line 1585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::ParseInt128("123123123123123123125")), "a==123123123123123123125");
		#line 1586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a-- == Builtin::ParseInt128("123123123123123123125")), "a--==123123123123123123125");
		#line 1587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((--a == Builtin::ParseInt128("123123123123123123123")), "--a==123123123123123123123");
		#line 1588 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::ParseInt128("123123123123123123123")), "a==123123123123123123123");
		#line 1590 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a + Builtin::i32(5) == Builtin::ParseInt128("123123123123123123128")), "a+5==123123123123123123128");
		#line 1591 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a + Builtin::ParseInt128("123123123123123123123") == Builtin::ParseInt128("246246246246246246246")), "a+123123123123123123123==246246246246246246246");
		#line 1592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a + (Builtin::i32(-5)) == Builtin::ParseInt128("123123123123123123118")), "a+(-5)==123123123123123123118");
		#line 1593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a += Builtin::ParseInt128("123123123123123123125");
		#line 1594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::ParseInt128("246246246246246246248")), "a==246246246246246246248");
		#line 1595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a += (Builtin::ParseInt128("-123123123123123123125"));
		#line 1596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::ParseInt128("123123123123123123123")), "a==123123123123123123123");
		#line 1598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a - Builtin::i32(5) == Builtin::ParseInt128("123123123123123123118")), "a-5==123123123123123123118");
		#line 1599 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a - Builtin::ParseInt128("123123123123123123123") == Builtin::i32(0)), "a-123123123123123123123==0");
		#line 1600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a - Builtin::ParseInt128("246246246246246246248") == Builtin::ParseInt128("-123123123123123123125")), "a-246246246246246246248==-123123123123123123125");
		#line 1601 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a - (Builtin::i32(-5)) == Builtin::ParseInt128("123123123123123123128")), "a-(-5)==123123123123123123128");
		#line 1602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a -= Builtin::ParseInt128("246246246246246246248");
		#line 1603 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::ParseInt128("-123123123123123123125")), "a==-123123123123123123125");
		#line 1604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a -= (Builtin::ParseInt128("-246246246246246246248"));
		#line 1605 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::ParseInt128("123123123123123123123")), "a==123123123123123123123");
		#line 1607 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a * Builtin::i32(5) == Builtin::ParseInt128("615615615615615615615")), "a*5==615615615615615615615");
		#line 1608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a *= Builtin::i32(5);
		#line 1609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::ParseInt128("615615615615615615615")), "a==615615615615615615615");
		#line 1610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a * Builtin::i64(9223372036854775LL) == Builtin::ParseInt128("5678051854520206831826153779977311625")), "a*9223372036854775==5678051854520206831826153779977311625");
		#line 1611 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a * (Builtin::i64(-9223372036854775LL)) == Builtin::ParseInt128("-5678051854520206831826153779977311625")), "a*(-9223372036854775)==-5678051854520206831826153779977311625");
		#line 1612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a * (Builtin::i32(-5)) == Builtin::ParseInt128("-3078078078078078078075")), "a*(-5)==-3078078078078078078075");
		#line 1613 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a * Builtin::i32(0) == Builtin::i32(0)), "a*0==0");
		#line 1614 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_USPCS(MaxValue, Builtin::i128)() * (Builtin::i32(-1)) == -ADV_USPCS(MaxValue, Builtin::i128)()), "i128.MaxValue*(-1)==-i128.MaxValue");
		#line 1615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((-a * (Builtin::i32(-1000000)) == Builtin::ParseInt128("615615615615615615615000000")), "-a*(-1000000)==615615615615615615615000000");
		#line 1617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, Builtin::i32(5)) == Builtin::ParseInt128("123123123123123123123")), "a\\5==123123123123123123123");
		#line 1618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, Builtin::i32(123123123)) == Builtin::i64(5000000005000LL)), "a\\123123123==5000000005000");
		#line 1619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, Builtin::ParseInt128("123123123123123123128")) == Builtin::i32(4)), "a\\123123123123123123128==4");
		#line 1620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, (Builtin::i32(-1))) == Builtin::ParseInt128("-615615615615615615615")), "a\\(-1)==-615615615615615615615");
		#line 1621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, (Builtin::i32(-5))) == Builtin::ParseInt128("-123123123123123123123")), "a\\(-5)==-123123123123123123123");
		#line 1622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, (Builtin::i32(-123123123))) == Builtin::i64(-5000000005000LL)), "a\\(-123123123)==-5000000005000");
		#line 1623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, (Builtin::ParseInt128("-123123123123123123128"))) == Builtin::i32(-4)), "a\\(-123123123123123123128)==-4");
		#line 1624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_UFCS(_operator_bsl_eq)(a, (Builtin::i32(-1)));
		#line 1625 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, Builtin::i32(5)) == Builtin::ParseInt128("-123123123123123123123")), "a\\5==-123123123123123123123");
		#line 1626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, Builtin::i32(123123123)) == Builtin::i64(-5000000005000LL)), "a\\123123123==-5000000005000");
		#line 1627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, Builtin::ParseInt128("123123123123123123128")) == Builtin::i32(-4)), "a\\123123123123123123128==-4");
		#line 1628 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, (Builtin::i32(-1))) == Builtin::ParseInt128("615615615615615615615")), "a\\(-1)==615615615615615615615");
		#line 1629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, (Builtin::i32(-5))) == Builtin::ParseInt128("123123123123123123123")), "a\\(-5)==123123123123123123123");
		#line 1630 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, (Builtin::i32(-123123123))) == Builtin::i64(5000000005000LL)), "a\\(-123123123)==5000000005000");
		#line 1631 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, (Builtin::ParseInt128("-123123123123123123128"))) == Builtin::i32(4)), "a\\(-123123123123123123128)==4");
		#line 1632 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_UFCS(_operator_bsl_eq)(a, (Builtin::i32(-5)));
		#line 1633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::ParseInt128("123123123123123123123")), "a==123123123123123123123");
		#line 1634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a *= Builtin::i32(5);
		#line 1636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a % Builtin::i32(5) == Builtin::i32(0)), "a%5==0");
		#line 1637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a % Builtin::i32(123123123) == Builtin::i32(615)), "a%123123123==615");
		#line 1638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a % Builtin::ParseInt128("123123123123123123128") == Builtin::ParseInt128("123123123123123123103")), "a%123123123123123123128==123123123123123123103");
		#line 1639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a % (Builtin::i32(-1)) == Builtin::i32(0)), "a%(-1)==0");
		#line 1640 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a % (Builtin::i32(-5)) == Builtin::i32(0)), "a%(-5)==0");
		#line 1641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a % (Builtin::i32(-123123123)) == Builtin::i32(615)), "a%(-123123123)==615");
		#line 1642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a % (Builtin::ParseInt128("-123123123123123123128")) == Builtin::ParseInt128("123123123123123123103")), "a%(-123123123123123123128)==123123123123123123103");
		#line 1643 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_UFCS(_operator_bsl_eq)(a, (Builtin::i32(-1)));
		#line 1644 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a % Builtin::i32(5) == Builtin::i32(0)), "a%5==0");
		#line 1645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a % Builtin::i32(123123123) == Builtin::i32(-615)), "a%123123123==-615");
		#line 1646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a % Builtin::ParseInt128("123123123123123123128") == Builtin::ParseInt128("-123123123123123123103")), "a%123123123123123123128==-123123123123123123103");
		#line 1647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a % (Builtin::i32(-1)) == Builtin::i32(0)), "a%(-1)==0");
		#line 1648 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a % (Builtin::i32(-5)) == Builtin::i32(0)), "a%(-5)==0");
		#line 1649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a % (Builtin::i32(-123123123)) == Builtin::i32(-615)), "a%(-123123123)==-615");
		#line 1650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a % (Builtin::ParseInt128("-123123123123123123128")) == Builtin::ParseInt128("-123123123123123123103")), "a%(-123123123123123123128)==-123123123123123123103");
		#line 1651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a %= (Builtin::i32(-5));
		#line 1652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::i32(0)), "a==0");
		#line 1654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = Builtin::i32(10);
		#line 1656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Nullable<Builtin::i128> c = nullptr; 
		#line 1657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Nullable<Builtin::i128> d = Builtin::i32(5); 
		#line 1658 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::i128 b = Builtin::i32(5); 
		#line 1659 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a != b), "a!=b");
		#line 1660 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((b != c), "b!=c");
		#line 1661 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((!Builtin::IdentityEquals(b, c)), "b!==c");
		#line 1662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT(((b <=> c) > 0), "b>c");
		#line 1663 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((c != b), "c!=b");
		#line 1664 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((c == nullptr), "c==null");
		#line 1665 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((d != nullptr), "d!=null");
		#line 1666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT(((c <=> d) < 0), "c<d");
		#line 1667 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((b == d), "b==d");
		#line 1671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Nullable<Builtin::ObjectRef> o = c; 
		#line 1672 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		o = d;
		#line 1673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_ne_eq_mul)(b, o)), "b!=*o");
		#line 1674 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		IComparable<Builtin::i128> icomp = a; 
		#line 1675 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT(((icomp <=> b) > 0), "icomp>b");
		#line 1678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = Builtin::ParseInt128("-123123123123123123123");
		#line 1679 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(a.$ref()) == Builtin::i64(7828766007537524882LL)), "a.HashCode==7828766007537524882");
		#line 1680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(a) == Builtin::i64(7828766007537524882LL)), "#a==7828766007537524882");
		#line 1681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a++;
		#line 1682 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(a) == Builtin::ParseInt128("10642750005548672299")), "#a==10642750005548672299");
		#line 1683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a -= Builtin::i32(2);
		#line 1684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(a) == Builtin::i64(6494541062850619495LL)), "#a==6494541062850619495");
		#line 1685 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = -a;
		#line 1687 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		b = Builtin::i32(-6);
		#line 1688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(ToInt32)(b.$ref()) == Builtin::i32(-6)), "b.ToInt32()==-6");
		#line 1689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(NarrowToUInt64)(b.$ref()) == Builtin::u64(18446744073709551610ULL)), "b.NarrowToUInt64()==18446744073709551610u");
		#line 1690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(NarrowToUInt128)(b.$ref()) == Builtin::u128{ADV_USPCS(MaxValue, Builtin::u64)(), ADV_USPCS(MaxValue, Builtin::u64)()} - Builtin::i32(5)), "b.NarrowToUInt128()==u128(u64.MaxValue,u64.MaxValue)-5");
		#line 1693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(Abs)(b.$ref()) == Builtin::i32(6)), "b.Abs==6");
		#line 1694 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(CheckedAbs)(b.$ref()) == Builtin::i64(6LL)), "b.CheckedAbs==6i64");
		#line 1695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(CheckedAbs)(ADV_USPCS(MinValue, Builtin::i128)().$ref()) == nullptr), "i128.MinValue.CheckedAbs==null");
		#line 1696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(StrictAbs)(b.$ref()) == Builtin::i32(6)), "b.StrictAbs==6");
		#line 1697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(WrappingAbs)(ADV_USPCS(MinValue, Builtin::i128)().$ref()) == ADV_USPCS(MinValue, Builtin::i128)()), "i128.MinValue.WrappingAbs==i128.MinValue");
		#line 1698 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(SaturatingAbs)(ADV_USPCS(MinValue, Builtin::i128)().$ref()) == ADV_USPCS(MaxValue, Builtin::i128)()), "i128.MinValue.SaturatingAbs==i128.MaxValue");
		#line 1699 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		{
			#line 1700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			const auto& [result, overflowed] = ADV_UPCS(OverflowingAbs)(ADV_USPCS(MinValue, Builtin::i128)().$ref());
			#line 1701 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_ASSERT((result == ADV_USPCS(MinValue, Builtin::i128)() && overflowed), "result==i128.MinValue&&overflowed");
		}
		#line 1703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(IsFinite)(b.$ref())), "b.IsFinite");
		#line 1704 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(IsInteger)(b.$ref())), "b.IsInteger");
		#line 1705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(IsNegative)(b.$ref())), "b.IsNegative");
		#line 1706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(IsPositive)(a.$ref())), "a.IsPositive");
		#line 1707 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((!ADV_UPCS(IsPositive)(b.$ref())), "!b.IsPositive");
		#line 1708 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(IsCanonical)(b.$ref())), "b.IsCanonical");
		#line 1709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((!ADV_UPCS(IsComplexNumber)(b.$ref())), "!b.IsComplexNumber");
		#line 1710 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(IsRealNumber)(b.$ref())), "b.IsRealNumber");
		#line 1711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((!ADV_UPCS(IsImaginaryNumber)(b.$ref())), "!b.IsImaginaryNumber");
		#line 1712 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(IsEvenInteger)(b.$ref())), "b.IsEvenInteger");
		#line 1713 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((!ADV_UPCS(IsOddInteger)(b.$ref())), "!b.IsOddInteger");
		#line 1714 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((!ADV_UPCS(IsInfinity)(b.$ref())), "!b.IsInfinity");
		#line 1715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((!ADV_UPCS(IsPositiveInfinity)(b.$ref())), "!b.IsPositiveInfinity");
		#line 1716 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((!ADV_UPCS(IsNegativeInfinity)(b.$ref())), "!b.IsNegativeInfinity");
		#line 1717 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((!ADV_UPCS(IsNaN)(b.$ref())), "!b.IsNaN");
		#line 1718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(IsNormal)(b.$ref())), "b.IsNormal");
		#line 1719 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((!ADV_UPCS(IsSubnormal)(b.$ref())), "!b.IsSubnormal");
		#line 1720 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((!ADV_UPCS(IsZero)(b.$ref())), "!b.IsZero");
		#line 1723 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = Builtin::ParseInt128("100000000000000000000");
		#line 1724 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(Sign)(a.$ref()) == +Builtin::i32(1)), "a.Sign==+1");
		#line 1725 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(Sign)(b.$ref()) == Builtin::i32(-1)), "b.Sign==-1");
		#line 1726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(CopySign)(a.$ref(), b) == Builtin::ParseInt128("-100000000000000000000")), "a.CopySign(b)==-100_000_000_000_000_000_000");
		#line 1727 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(Max)(a.$ref(), b) == a), "a.Max(b)==a");
		#line 1728 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(Min)(a.$ref(), b) == b), "a.Min(b)==b");
		#line 1729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(MaxNumber)(a.$ref(), b) == a), "a.MaxNumber(b)==a");
		#line 1730 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(MinNumber)(a.$ref(), b) == b), "a.MinNumber(b)==b");
		#line 1731 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(Clamp)(b.$ref(), Builtin::i128(-5LL), +Builtin::i128(5LL)) == Builtin::i32(-5)), "b.Clamp(-5i128,+5i128)==-5");
		#line 1734 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::i128(2LL).$ref()) == Builtin::i32(1)), "2i128.Log2==1");
		#line 1735 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::i128(16LL).$ref()) == Builtin::i32(4)), "16i128.Log2==4");
		#line 1736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::i128(64LL).$ref()) == Builtin::i32(6)), "64i128.Log2==6");
		#line 1737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::ParseInt128("100141183460469231731687303715884105728").$ref()) == Builtin::i32(126)), "100141183460469231731687303715884105728.Log2==126");
		#line 1738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::i128(2LL).$ref()) == Builtin::i32(1)), "2i128.Log2Ceiling==1");
		#line 1739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::i128(16LL).$ref()) == Builtin::i32(4)), "16i128.Log2Ceiling==4");
		#line 1740 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::i128(65LL).$ref()) == Builtin::i32(7)), "65i128.Log2Ceiling==7");
		#line 1741 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::ParseInt128("100141183460469231731687303715884105728").$ref()) == Builtin::i32(127)), "100141183460469231731687303715884105728.Log2Ceiling==127");
		#line 1742 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(CheckedLog2)(Builtin::i128(0LL).$ref()) == nullptr), "0i128.CheckedLog2==null");
		#line 1743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(Builtin::i128(5LL).$ref()) == Builtin::i32(0)), "5i128.Log10==0");
		#line 1744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(a.$ref()) == Builtin::i32(20)), "a.Log10==20");
		#line 1745 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(ADV_USPCS(MaxValue, Builtin::i128)().$ref()) == Builtin::i32(38)), "i128.MaxValue.Log10==38");
		#line 1746 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(Log)(Builtin::i128(5LL).$ref(), Builtin::i128(5LL)) == Builtin::i32(1)), "5i128.Log(5i128)==1");
		#line 1747 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(CheckedLog)(Builtin::i128(5LL).$ref(), Builtin::i128(-5LL)) == nullptr), "5i128.CheckedLog(-5i128)==null");
		#line 1748 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(Midpoint)(a.$ref(), Builtin::ParseInt128("300000000000000000000")) == Builtin::ParseInt128("200000000000000000000")), "a.Midpoint(300_000_000_000_000_000_000)==200_000_000_000_000_000_000");
		#line 1749 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(Midpoint)(Builtin::ParseInt128("100000000000000000000000000000000000000").$ref(), Builtin::ParseInt128("170000000000000000000000000000000000000")) == Builtin::ParseInt128("135000000000000000000000000000000000000")), "100000000000000000000000000000000000000.Midpoint(170000000000000000000000000000000000000)==135000000000000000000000000000000000000");
		#line 1750 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)(a.$ref(), Builtin::i32(10)) == Builtin::ParseInt128("100000000000000000000")), "a.NextMultipleOf(10)==100_000_000_000_000_000_000");
		#line 1751 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)(Builtin::ParseInt128("100000000000000000001").$ref(), Builtin::i32(100)) == Builtin::ParseInt128("100000000000000000100")), "100_000_000_000_000_000_001.NextMultipleOf(100)==100_000_000_000_000_000_100");
		#line 1752 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)(a.$ref(), Builtin::i64(8500000000000LL)) == Builtin::ParseInt128("100000001000000000000")), "a.NextMultipleOf(8500000000000)==100000001000000000000");
		#line 1753 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)((Builtin::i128(-13LL)).$ref(), Builtin::i128(4LL)) == Builtin::i32(-12)), "(-13i128).NextMultipleOf(4i128)==-12");
		#line 1754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)((Builtin::i128(-13LL)).$ref(), Builtin::i128(-4LL)) == Builtin::i32(-16)), "(-13i128).NextMultipleOf(-4i128)==-16");
		#line 1755 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(ByteCount)(a.$ref()) == Builtin::i32(16)), "a.ByteCount==16");
		#line 1756 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(ByteSwapped)(Builtin::ParseInt128("0x7b233d2a39fea3397b233d2a39fea339").$ref()) == Builtin::ParseInt128("0x39a3fe392a3d237b39a3fe392a3d237b")), "0x7b233d2a39fea3397b233d2a39fea339_i128.ByteSwapped==0x39a3fe392a3d237b39a3fe392a3d237b_i128");
		#line 1757 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_not)(Builtin::i128(0b1010LL), Builtin::i32(3)) == Builtin::i32(0b01010000)), "0b1010_i128<<~3==0b0101_0000");
		#line 1758 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_not)(Builtin::i128(0b1010LL), Builtin::i32(5)) == Builtin::i32(0b101000000)), "0b1010_i128<<~5==0b1_0100_0000");
		#line 1759 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_not)(Builtin::i128(0b1010LL), Builtin::i32(3)) == Builtin::ParseInt128("0x40000000000000000000000000000001")), "0b1010_i128>>~3==0x40000000000000000000000000000001_i128");
		#line 1760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_not)(Builtin::i128(0b1010LL), Builtin::i32(5)) == Builtin::ParseInt128("0x50000000000000000000000000000000")), "0b1010_i128>>~5==0x50000000000000000000000000000000_i128");
		#line 1762 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(IsMultipleOf)(a.$ref(), Builtin::i32(5))), "a.IsMultipleOf(5)");
		#line 1763 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((!ADV_UFCS(IsMultipleOf)(a.$ref(), Builtin::i32(6))), "!a.IsMultipleOf(6)");
		#line 1765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(MultiplyBy10)(a.$ref()) == Builtin::ParseInt128("1000000000000000000000")), "a.MultiplyBy10==1_000_000_000_000_000_000_000");
		#line 1766 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(MultiplyBy16)(a.$ref()) == Builtin::ParseInt128("1600000000000000000000")), "a.MultiplyBy16==1_600_000_000_000_000_000_000");
		#line 1769 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = Builtin::ParseInt128("1000000000004000000000");
		#line 1770 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_qst)(a, Builtin::i128(100000LL)) == Builtin::ParseInt128("1000000000004000100000")), "a+?100000i128==1000000000004000100000");
		#line 1771 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_qst)(a, ADV_USPCS(MaxValue, Builtin::i128)()) == nullptr), "a+?i128.MaxValue==null");
		#line 1772 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_UFCS(_operator_add_qst_eq)(a, Builtin::i128(5LL));
		#line 1773 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::ParseInt128("1000000000004000000005")), "a==1000000000004000000005");
		#line 1774 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_UFCS(_operator_add_qst_eq)(a, ADV_USPCS(MaxValue, Builtin::i128)());
		#line 1775 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::ParseInt128("1000000000004000000005")), "a==1000000000004000000005");
		#line 1776 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_ne)(a, Builtin::i128(100LL)) == Builtin::ParseInt128("1000000000004000000105")), "a+!100i128==1000000000004000000105");
		#line 1777 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_mod)(a, Builtin::i128(100LL)) == Builtin::ParseInt128("1000000000004000000105")), "a+%100i128==1000000000004000000105");
		#line 1778 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_mod)(a, Builtin::ParseInt128("170141183460469230731687303711884105723")) == ADV_USPCS(MinValue, Builtin::i128)()), "a+%170141183460469230731687303711884105723==i128.MinValue");
		#line 1779 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_UFCS(_operator_add_mod_eq)(a, ADV_USPCS(MaxValue, Builtin::i128)());
		#line 1780 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::ParseInt128("-170141183460469230731687303711884105724")), "a==-170141183460469230731687303711884105724");
		#line 1781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_or)(a, (Builtin::ParseInt128("-160141183460469230731687303711884105724"))) == ADV_USPCS(MinValue, Builtin::i128)()), "a+|(-160141183460469230731687303711884105724)==i128.MinValue");
		#line 1782 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_UFCS(_operator_add_or_eq)(a, ADV_USPCS(MaxValue, Builtin::i128)());
		#line 1783 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::ParseInt128("1000000000004000000003")), "a==1000000000004000000003");
		#line 1784 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_or)(a, Builtin::ParseInt128("170141183460469231731687303715884105500")) == ADV_USPCS(MaxValue, Builtin::i128)()), "a+|170141183460469231731687303715884105500==i128.MaxValue");
		#line 1785 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		{
			#line 1786 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_add_mod_qst)(a, Builtin::ParseInt128("170141183460469230731687303711884105725"));
			#line 1787 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_ASSERT((result == ADV_USPCS(MinValue, Builtin::i128)() && overflowed), "result==i128.MinValue&&overflowed");
		}
		#line 1790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = ADV_USPCS(MaxValue, Builtin::i128)() - Builtin::i32(1);
		#line 1791 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_add_qst_postfix)(a) == ADV_USPCS(MaxValue, Builtin::i128)() - Builtin::i32(1)), "a++?==i128.MaxValue-1");
		#line 1792 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::i128)()), "a==i128.MaxValue");
		#line 1793 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_UFCS(_operator_add_add_mod_postfix)(a);
		#line 1794 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::i128)()), "a==i128.MinValue");
		#line 1795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = ADV_USPCS(MaxValue, Builtin::i128)();
		#line 1796 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_UFCS(_operator_add_add_or_postfix)(a);
		#line 1797 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::i128)()), "a==i128.MaxValue");
		#line 1799 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		{
			#line 1800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.$ref(), Builtin::i128(0LL), Builtin::Boolean(false));
			#line 1801 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_ASSERT((result == ADV_USPCS(MaxValue, Builtin::i128)() && !overflowed), "result==i128.MaxValue&&!overflowed");
		}
		#line 1803 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		{
			#line 1804 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.$ref(), Builtin::i128(-5LL), Builtin::Boolean(true));
			#line 1805 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_ASSERT((result == Builtin::ParseInt128("170141183460469231731687303715884105723") && !overflowed), "result==170141183460469231731687303715884105723&&!overflowed");
		}
		#line 1807 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		{
			#line 1808 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.$ref(), Builtin::i128(0LL), Builtin::Boolean(true));
			#line 1809 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_ASSERT((result == ADV_USPCS(MinValue, Builtin::i128)() && overflowed), "result==i128.MinValue&&overflowed");
		}
		#line 1811 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		{
			#line 1812 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.$ref(), Builtin::i128(10LL), Builtin::Boolean(true));
			#line 1813 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_ASSERT((result == Builtin::ParseInt128("-170141183460469231731687303715884105718") && overflowed), "result==-170141183460469231731687303715884105718&&overflowed");
		}
		#line 1816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_qst)(a, Builtin::ParseInt128("1000000000000000000000000000000000")) == Builtin::ParseInt128("170140183460469231731687303715884105727")), "a-?1_000_000_000_000_000_000_000_000_000_000_000==170140183460469231731687303715884105727");
		#line 1817 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_qst)(-a, ADV_USPCS(MaxValue, Builtin::i128)()) == nullptr), "-a-?i128.MaxValue==null");
		#line 1818 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_UFCS(_operator_sub_qst_eq)(a, Builtin::ParseInt128("1000000000000000000000000000000000"));
		#line 1819 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::ParseInt128("170140183460469231731687303715884105727")), "a==170140183460469231731687303715884105727");
		#line 1820 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_UFCS(_operator_sub_qst_eq)(a, Builtin::i128(1LL));
		#line 1821 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::ParseInt128("170140183460469231731687303715884105726")), "a==170140183460469231731687303715884105726");
		#line 1822 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_ne)(a, Builtin::ParseInt128("1000000000000000000000000000000000")) == Builtin::ParseInt128("170139183460469231731687303715884105726")), "a-!1_000_000_000_000_000_000_000_000_000_000_000==170139183460469231731687303715884105726");
		#line 1823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_mod)(-a, Builtin::ParseInt128("1000000000000000000000000000000003")) == ADV_USPCS(MaxValue, Builtin::i128)()), "-a-%1000000000000000000000000000000003==i128.MaxValue");
		#line 1824 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_mod)(a, Builtin::ParseInt128("1000000000000000000000000000000000")) == Builtin::ParseInt128("170139183460469231731687303715884105726")), "a-%1_000_000_000_000_000_000_000_000_000_000_000==170139183460469231731687303715884105726");
		#line 1825 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_UFCS(_operator_sub_mod_eq)(a, ADV_USPCS(MaxValue, Builtin::i128)());
		#line 1826 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::ParseInt128("-1000000000000000000000000000000001")), "a==-1000000000000000000000000000000001");
		#line 1827 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_or)(a, Builtin::ParseInt128("170141183460469231731687303715884105000")) == ADV_USPCS(MinValue, Builtin::i128)()), "a-|170141183460469231731687303715884105000==i128.MinValue");
		#line 1828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_UFCS(_operator_sub_or_eq)(a, ADV_USPCS(MaxValue, Builtin::i128)());
		#line 1829 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::i128)()), "a==i128.MinValue");
		#line 1830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		{
			#line 1831 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_sub_mod_qst)(a, Builtin::ParseInt128("1000000000000000000000000000000000"));
			#line 1832 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_ASSERT((result == Builtin::ParseInt128("170140183460469231731687303715884105728") && overflowed), "result==170140183460469231731687303715884105728&&overflowed");
		}
		#line 1835 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = ADV_USPCS(MinValue, Builtin::i128)() + Builtin::i32(1);
		#line 1836 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_sub_qst_postfix)(a) == ADV_USPCS(MinValue, Builtin::i128)() + Builtin::i32(1)), "a--?==i128.MinValue+1");
		#line 1837 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::i128)()), "a==i128.MinValue");
		#line 1838 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_UFCS(_operator_sub_sub_mod_postfix)(a);
		#line 1839 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::i128)()), "a==i128.MaxValue");
		#line 1840 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = ADV_USPCS(MinValue, Builtin::i128)();
		#line 1841 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_UFCS(_operator_sub_sub_or_postfix)(a);
		#line 1842 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::i128)()), "a==i128.MinValue");
		#line 1844 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		{
			#line 1845 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.$ref(), Builtin::i128(0LL), Builtin::Boolean(false));
			#line 1846 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_ASSERT((result == ADV_USPCS(MinValue, Builtin::i128)() && !overflowed), "result==i128.MinValue&&!overflowed");
		}
		#line 1848 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		{
			#line 1849 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.$ref(), Builtin::i128(-5LL), Builtin::Boolean(true));
			#line 1850 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_ASSERT((result == Builtin::ParseInt128("-170141183460469231731687303715884105724") && !overflowed), "result==-170141183460469231731687303715884105724&&!overflowed");
		}
		#line 1852 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		{
			#line 1853 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.$ref(), Builtin::i128(0LL), Builtin::Boolean(true));
			#line 1854 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_ASSERT((result == ADV_USPCS(MaxValue, Builtin::i128)() && overflowed), "result==i128.MaxValue&&overflowed");
		}
		#line 1856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		{
			#line 1857 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.$ref(), Builtin::i128(10LL), Builtin::Boolean(true));
			#line 1858 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_ASSERT((result == Builtin::ParseInt128("170141183460469231731687303715884105717") && overflowed), "result==170141183460469231731687303715884105717&&overflowed");
		}
		#line 1861 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_qst)(a, Builtin::i128(1LL)) == ADV_USPCS(MinValue, Builtin::i128)()), "a*?1i128==i128.MinValue");
		#line 1862 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_qst)(a, Builtin::i128(2LL)) == nullptr), "a*?2i128==null");
		#line 1863 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_UFCS(_operator_mul_qst_eq)(a, Builtin::i128(5LL));
		#line 1864 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::i128)()), "a==i128.MinValue");
		#line 1865 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = Builtin::ParseInt128("150000000000000000000");
		#line 1866 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::ParseInt128("150000000000000000000")), "a==150_000_000_000_000_000_000");
		#line 1867 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_ne)(a, Builtin::i128(3LL)) == Builtin::ParseInt128("450000000000000000000")), "a*!3i128==450_000_000_000_000_000_000");
		#line 1868 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_mod)(a, Builtin::i128(6LL)) == Builtin::ParseInt128("900000000000000000000")), "a*%6i128==900_000_000_000_000_000_000");
		#line 1869 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_mod)(a, Builtin::ParseInt128("10000000000000000000")) == Builtin::ParseInt128("138870532316246146146501570272927154176")), "a*%10_000_000_000_000_000_000==138870532316246146146501570272927154176");
		#line 1870 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_UFCS(_operator_mul_mod_eq)(a, Builtin::i128(6LL));
		#line 1871 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::ParseInt128("900000000000000000000")), "a==900_000_000_000_000_000_000");
		#line 1872 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_or)(a, (Builtin::ParseInt128("-10000000000000000000"))) == ADV_USPCS(MinValue, Builtin::i128)()), "a*|(-10_000_000_000_000_000_000)==i128.MinValue");
		#line 1873 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_UFCS(_operator_mul_or_eq)(a, Builtin::ParseInt128("10000000000000000000"));
		#line 1874 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::i128)()), "a==i128.MaxValue");
		#line 1875 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_or)(a, Builtin::i128(2LL)) == ADV_USPCS(MaxValue, Builtin::i128)()), "a*|2i128==i128.MaxValue");
		#line 1876 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		{
			#line 1877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_mul_mod_qst)(a, Builtin::i128(2LL));
			#line 1878 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_ASSERT((result == Builtin::i32(-2) && overflowed), "result==-2&&overflowed");
		}
		#line 1880 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = Builtin::ParseInt128("150000000000000000000");
		#line 1881 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		{
			#line 1882 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			const auto& [low, high] = ADV_UFCS(_operator_mul_gt)(a, Builtin::ParseInt128("10000000000000000000"));
			#line 1883 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_ASSERT((low == Builtin::ParseUInt128("138870532316246146146501570272927154176") && high == Builtin::i32(4)), "low==138870532316246146146501570272927154176_u128&&high==4");
		}
		#line 1885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		{
			#line 1886 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			const auto& [low, high] = ADV_UFCS(_operator_mul_gt)(a, (Builtin::ParseInt128("-10000000000000000000")));
			#line 1887 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_ASSERT((low == Builtin::ParseUInt128("201411834604692317316873037158841057280") && high == Builtin::i32(-5)), "low==201411834604692317316873037158841057280_u128&&high==-5");
		}
		#line 1889 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = ADV_USPCS(MaxValue, Builtin::i128)();
		#line 1890 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		{
			#line 1891 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			const auto& [low, high] = ADV_UFCS(CarryingMul)(a.$ref(), Builtin::i128(2LL), Builtin::i128(12LL));
			#line 1892 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_ASSERT((low == Builtin::i32(10) && high == Builtin::i32(1)), "low==10&&high==1");
		}
		#line 1894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		{
			#line 1895 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			const auto& [low, high] = ADV_UFCS(CarryingMul)(a.$ref(), Builtin::i128(-2LL), Builtin::i128(-12LL));
			#line 1896 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_ASSERT((low == Builtin::ParseUInt128("340282366920938463463374607431768211446") && high == Builtin::i32(-2)), "low==340282366920938463463374607431768211446_u128&&high==-2");
		}
		#line 1899 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = Builtin::ParseInt128("100000000000000000000");
		#line 1900 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, Builtin::i64(6000000000000LL)) == Builtin::i32(16666666)), "a\\6000000000000==16666666");
		#line 1901 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a /= Builtin::i64(6000000000000LL);
		#line 1902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::i32(16666667)), "a==16666667");
		#line 1903 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = Builtin::ParseInt128("100000000000000000000");
		#line 1904 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		{
			#line 1905 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)(a, Builtin::i64(6000000000000LL));
			#line 1906 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_ASSERT((div == Builtin::i32(16666666) && rem == Builtin::i64(4000000000000LL)), "div==16666666&&rem==4000000000000");
		}
		#line 1908 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_qst)(a, Builtin::i128(50000000LL)) == Builtin::i128(2000000000000LL)), "a\\?50000000i128==2000000000000i128");
		#line 1909 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_qst)(a, Builtin::i128(0LL)) == nullptr), "a\\?0i128==null");
		#line 1910 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_qst)(ADV_USPCS(MinValue, Builtin::i128)(), (Builtin::i128(-1LL))) == nullptr), "i128.MinValue\\?(-1i128)==null");
		#line 1912 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_ne)(a, Builtin::i128(50000000LL)) == Builtin::i128(2000000000000LL)), "a\\!50000000i128==2000000000000i128");
		#line 1913 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_UFCS(_operator_bsl_mod_eq)(a, Builtin::i128(50000000LL));
		#line 1914 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::i128(2000000000000LL)), "a==2000000000000i128");
		#line 1915 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = Builtin::i32(10);
		#line 1916 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_mod)(ADV_USPCS(MinValue, Builtin::i128)(), (Builtin::i128(-1LL))) == ADV_USPCS(MinValue, Builtin::i128)()), "i128.MinValue\\%(-1i128)==i128.MinValue");
		#line 1917 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_UFCS(_operator_bsl_or_eq)(a, Builtin::i128(5LL));
		#line 1918 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::i32(2)), "a==2");
		#line 1919 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_or)(ADV_USPCS(MinValue, Builtin::i128)(), (Builtin::i128(-1LL))) == ADV_USPCS(MaxValue, Builtin::i128)()), "i128.MinValue\\|(-1i128)==i128.MaxValue");
		#line 1920 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		{
			#line 1921 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_bsl_mod_qst)(ADV_USPCS(MinValue, Builtin::i128)(), (Builtin::i128(-1LL)));
			#line 1922 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_ASSERT((result == ADV_USPCS(MinValue, Builtin::i128)() && overflowed), "result==i128.MinValue&&overflowed");
		}
		#line 1925 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = Builtin::ParseInt128("123123123123123000000000000");
		#line 1926 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_bsl)(a, Builtin::i128(5000000000LL)) == Builtin::i128(24624624624624600LL)), "a\\\\5000000000i128==24624624624624600i128");
		#line 1927 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_bsl)(a, Builtin::i128(6LL)) == Builtin::ParseInt128("20520520520520500000000000")), "a\\\\6i128==20520520520520500000000000i128");
		#line 1928 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_bsl)(a, Builtin::i128(7LL)) == nullptr), "a\\\\7i128==null");
		#line 1929 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_bsl_qst)(a, Builtin::i128(0LL)) == nullptr), "a\\\\?0i128==null");
		#line 1931 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, Builtin::ParseInt128("94689769974534758482")) == Builtin::i32(1300279)), "a\\94689769974534758482==1300279");
		#line 1932 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_not)(a, Builtin::ParseInt128("94689769974534758482")) == Builtin::i32(1300279)), "a/~94689769974534758482==1300279");
		#line 1933 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_lt)(a, Builtin::ParseInt128("94689769974534758482")) == Builtin::i32(1300279)), "a/<94689769974534758482==1300279");
		#line 1934 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_gt)(a, Builtin::ParseInt128("94689769974534758482")) == Builtin::i32(1300280)), "a/>94689769974534758482==1300280");
		#line 1935 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_not)(a, (Builtin::ParseInt128("-94689769974534758482"))) == Builtin::i32(-1300279)), "a/~(-94689769974534758482)==-1300279");
		#line 1936 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_lt)(a, (Builtin::ParseInt128("-94689769974534758482"))) == Builtin::i32(-1300280)), "a/<(-94689769974534758482)==-1300280");
		#line 1937 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_gt)(a, (Builtin::ParseInt128("-94689769974534758482"))) == Builtin::i32(-1300279)), "a/>(-94689769974534758482)==-1300279");
		#line 1939 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_qst)(a, Builtin::i128(5000000000LL)) == Builtin::i128(0LL)), "a%?5000000000i128==0i128");
		#line 1940 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_qst)(a, Builtin::i128(0LL)) == nullptr), "a%?0i128==null");
		#line 1941 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_qst)(ADV_USPCS(MinValue, Builtin::i128)(), (Builtin::i128(-1LL))) == nullptr), "i128.MinValue%?(-1i128)==null");
		#line 1943 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_ne)(a, Builtin::i128(66000000LL)) == Builtin::i32(24000000)), "a%!66000000i128==24000000");
		#line 1944 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_UFCS(_operator_mod_mod_eq)(a, Builtin::i128(66000000LL));
		#line 1945 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::i32(24000000)), "a==24000000");
		#line 1946 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = Builtin::i32(10);
		#line 1947 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_mod)(ADV_USPCS(MinValue, Builtin::i128)(), (Builtin::i128(-1LL))) == Builtin::i32(0)), "i128.MinValue%%(-1i128)==0");
		#line 1948 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		{
			#line 1949 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_mod_mod_qst)(ADV_USPCS(MinValue, Builtin::i128)(), (Builtin::i128(-1LL)));
			#line 1950 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_ASSERT((result == Builtin::i32(0) && overflowed), "result==0&&overflowed");
		}
		#line 1953 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_qst)(a) == Builtin::i128(-10LL)), "-?a==-10i128");
		#line 1954 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_qst)(ADV_USPCS(MinValue, Builtin::i128)()) == nullptr), "-?i128.MinValue==null");
		#line 1955 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_ne)(a) == Builtin::i32(-10)), "-!a==-10");
		#line 1956 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_mod)(a) == Builtin::i32(-10)), "-%a==-10");
		#line 1957 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_mod)(ADV_USPCS(MinValue, Builtin::i128)()) == ADV_USPCS(MinValue, Builtin::i128)()), "-%i128.MinValue==i128.MinValue");
		#line 1958 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_or)(a) == Builtin::i32(-10)), "-|a==-10");
		#line 1959 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_or)(ADV_USPCS(MinValue, Builtin::i128)()) == ADV_USPCS(MaxValue, Builtin::i128)()), "-|i128.MinValue==i128.MaxValue");
		#line 1961 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_bsl)(ADV_USPCS(MaxValue, Builtin::i128)(), Builtin::u32(7U)) == Builtin::ParseInt128("0xFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF")), "i128.MaxValue>>\\7u==0xFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF_i128");
		#line 1962 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_bsl)(ADV_USPCS(MaxValue, Builtin::i128)(), Builtin::u32(130U)) == Builtin::i32(0)), "i128.MaxValue>>\\130u==0");
		#line 1963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_bsl)(ADV_USPCS(MinValue, Builtin::i128)(), Builtin::u32(130U)) == Builtin::i32(-1)), "i128.MinValue>>\\130u==-1");
		#line 1964 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_bsl)(ADV_USPCS(MaxValue, Builtin::i128)(), Builtin::u32(130U)) == Builtin::i32(0)), "i128.MaxValue<<\\130u==0");
		#line 1965 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_qst)(ADV_USPCS(MaxValue, Builtin::i128)(), Builtin::i32(4)) == Builtin::ParseInt128("0x7FFFFFFFFFFFFFFFFFFFFFFFFFFFFFF")), "i128.MaxValue>>?4==0x7FFFFFFFFFFFFFFFFFFFFFFFFFFFFFF_i128");
		#line 1966 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_qst)(ADV_USPCS(MaxValue, Builtin::i128)(), Builtin::i32(130)) == nullptr), "i128.MaxValue>>?130==null");
		#line 1967 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_qst)(ADV_USPCS(MaxValue, Builtin::i128)(), Builtin::i32(130)) == nullptr), "i128.MaxValue<<?130==null");
		#line 1968 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_ne)(ADV_USPCS(MaxValue, Builtin::i128)(), Builtin::i32(4)) == Builtin::ParseInt128("0x7FFFFFFFFFFFFFFFFFFFFFFFFFFFFFF")), "i128.MaxValue>>!4==0x7FFFFFFFFFFFFFFFFFFFFFFFFFFFFFF_i128");
		#line 1969 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_mod)(ADV_USPCS(MaxValue, Builtin::i128)(), Builtin::i32(132)) == Builtin::ParseInt128("0x7FFFFFFFFFFFFFFFFFFFFFFFFFFFFFF")), "i128.MaxValue>>%132==0x7FFFFFFFFFFFFFFFFFFFFFFFFFFFFFF_i128");
		#line 1970 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = ADV_USPCS(MaxValue, Builtin::i128)();
		#line 1971 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_UFCS(_operator_gt_gt_mod_eq)(a, Builtin::i32(132));
		#line 1972 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_mod)(a, Builtin::i32(132)) == Builtin::ParseInt128("0x7FFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0")), "a<<%132==0x7FFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0_i128");
		#line 1973 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		{
			#line 1974 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_gt_gt_mod_qst)(ADV_USPCS(MaxValue, Builtin::i128)(), Builtin::i32(132));
			#line 1975 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_ASSERT((result == Builtin::ParseInt128("0x7FFFFFFFFFFFFFFFFFFFFFFFFFFFFFF") && overflowed), "result==0x7FFFFFFFFFFFFFFFFFFFFFFFFFFFFFF_i128&&overflowed");
		}
		#line 1979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = Builtin::i64(1515151500000000LL);
		#line 1980 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor)(a, Builtin::u32(2U)) == Builtin::ParseInt128("2295684067952250000000000000000")), "a^^2u==2295684067952250000000000000000");
		#line 1981 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_UFCS(_operator_xor_xor_eq)(a, Builtin::u32(2U));
		#line 1982 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::ParseInt128("2295684067952250000000000000000")), "a==2295684067952250000000000000000");
		#line 1983 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor)(Builtin::i128(61500000000LL), Builtin::u32(3U)) == Builtin::ParseInt128("232608375000000000000000000000000")), "61500000000_i128^^3u==232608375000000000000000000000000");
		#line 1984 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_qst)(Builtin::i128(61500000000LL), Builtin::u32(3U)) == Builtin::ParseInt128("232608375000000000000000000000000")), "61500000000_i128^^?3u==232608375000000000000000000000000");
		#line 1985 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_qst)(Builtin::i128(61500000000LL), Builtin::u32(4U)) == nullptr), "61500000000_i128^^?4u==null");
		#line 1986 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = Builtin::i128(61500000000LL);
		#line 1987 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_UFCS(_operator_xor_xor_qst_eq)(a, Builtin::u32(3U));
		#line 1988 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::ParseInt128("232608375000000000000000000000000")), "a==232608375000000000000000000000000");
		#line 1989 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_ne)(Builtin::i128(61500000000LL), Builtin::u32(3U)) == Builtin::ParseInt128("232608375000000000000000000000000")), "61500000000_i128^^!3u==232608375000000000000000000000000");
		#line 1990 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_mod)(Builtin::i128(61500000000LL), Builtin::u32(4U)) == Builtin::ParseInt128("-55642856253004000268496431535609610240")), "61500000000_i128^^%4u==-55642856253004000268496431535609610240");
		#line 1991 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = Builtin::i32(300);
		#line 1992 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_UFCS(_operator_xor_xor_mod_eq)(a, Builtin::u32(2U));
		#line 1993 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::i32(90000)), "a==90000");
		#line 1994 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_or)(Builtin::i128(61500000000LL), Builtin::u32(3U)) == Builtin::ParseInt128("232608375000000000000000000000000")), "61500000000_i128^^|3u==232608375000000000000000000000000");
		#line 1995 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_or)(Builtin::i128(61500000000LL), Builtin::u32(4U)) == ADV_USPCS(MaxValue, Builtin::i128)()), "61500000000_i128^^|4u==i128.MaxValue");
		#line 1996 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		{
			#line 1997 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_xor_xor_mod_qst)(Builtin::i128(61500000000LL), Builtin::u32(4U));
			#line 1998 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_ASSERT((result == Builtin::ParseInt128("-55642856253004000268496431535609610240") && overflowed), "result==-55642856253004000268496431535609610240&&overflowed");
		}
		return true;
	}();
	#endif	
} namespace $extensions { using namespace System;
#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	auto _operator_eq_eq_mul($extension_Int128_21_i128 const& $this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool
	{
		#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		{
			#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			auto __tmp0 = Builtin::Cast<false, $extension_Int128_21_i128>(obj);
			#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			if ((__tmp0.IsValid())) {
				#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				const auto& obj = *__tmp0;
				
				#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				return $this == obj;
			}
		}
		#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return Builtin::Boolean(false);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	auto _operator_lt_eq_gt_mul($extension_Int128_90_i128 const& $this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32
	{
		#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		{
			#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			auto __tmp0 = Builtin::Cast<false, $extension_Int128_90_i128>(obj);
			#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			if ((__tmp0.IsValid())) {
				#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				const auto& obj = *__tmp0;
				
				#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				return $this <=> obj;
			}
		}
		#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		{
			#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			if ((!Builtin::Is(obj, nullptr))) {
				#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				auto __tmp0 = *obj; const auto& obj = __tmp0;
				
				#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				Builtin::Throw(Builtin::InvalidOperationException{});
			}
		}
		#line 100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return Builtin::i32(1);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	auto MaxMagnitude($extension_Int128_316_i128 const& $this LIFETIMEBOUND, $extension_Int128_316_i128 rhs)  -> const typename $extension_Int128_316_i128
	{
		#line 342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype($this)> absX = $this; 
		#line 343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (ADV_UPCS(IsNegative)(absX.$ref())) {
			#line 344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			absX = -absX;
			#line 345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			if (ADV_UPCS(IsNegative)(absX.$ref())) {
				#line 346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				return $this;
			}
		}
		#line 350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype(rhs)> absY = rhs; 
		#line 351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (ADV_UPCS(IsNegative)(absY.$ref())) {
			#line 352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			absY = -absY;
			#line 353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			if (ADV_UPCS(IsNegative)(absY.$ref())) {
				#line 354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				return rhs;
			}
		}
		#line 358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((absX <=> absY) > 0) {
			#line 359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return $this;
		}
		#line 362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (absX == absY) {
			#line 363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return ADV_UPCS(IsNegative)($this.$ref()) ? rhs : $this;
		}
		#line 366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return rhs;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	auto MinMagnitude($extension_Int128_316_i128 const& $this LIFETIMEBOUND, $extension_Int128_316_i128 rhs)  -> const typename $extension_Int128_316_i128
	{
		#line 373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype($this)> absX = $this; 
		#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (ADV_UPCS(IsNegative)(absX.$ref())) {
			#line 375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			absX = -absX;
			#line 376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			if (ADV_UPCS(IsNegative)(absX.$ref())) {
				#line 377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				return rhs;
			}
		}
		#line 381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype(rhs)> absY = rhs; 
		#line 382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (ADV_UPCS(IsNegative)(absY.$ref())) {
			#line 383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			absY = -absY;
			#line 384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			if (ADV_UPCS(IsNegative)(absY.$ref())) {
				#line 385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				return $this;
			}
		}
		#line 389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((absX <=> absY) < 0) {
			#line 390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return $this;
		}
		#line 393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (absX == absY) {
			#line 394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return ADV_UPCS(IsNegative)($this.$ref()) ? $this : rhs;
		}
		#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return rhs;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	auto Parse($extension_Int128_316_i128 const& $this LIFETIMEBOUND, Builtin::Str input)  -> const typename $extension_Int128_316_i128
	{
		#line 404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return Builtin::i64(0LL);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	auto TryParse($extension_Int128_316_i128 const& $this LIFETIMEBOUND, Builtin::Str input) noexcept -> const Builtin::Nullable<$extension_Int128_316_i128>
	{
		#line 409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return Builtin::i64(0LL);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	auto CopySign($extension_Int128_432_i128 const& $this LIFETIMEBOUND, $extension_Int128_432_i128 sign)  -> const typename $extension_Int128_432_i128
	{
		#line 448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Auto<decltype($this)> absValue = $this; 
		#line 449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (ADV_UPCS(IsNegative)(absValue.$ref())) {
			#line 450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			absValue = -absValue;
		}
		#line 453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((sign <=> Builtin::i32(0)) >= 0) {
			#line 454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			if (ADV_UPCS(IsNegative)(absValue.$ref())) {
				#line 455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				Builtin::Throw(Builtin::IntegerOverflowException{});
			}
			#line 458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return absValue;
		}
		#line 461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return -absValue;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	auto Log($extension_Int128_482_i128 const& $this LIFETIMEBOUND, $extension_Int128_482_i128 base)  -> const typename $extension_Int128_482_i128
	{
		#line 596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (const auto result = ADV_UFCS(CheckedLog)($this.$ref(), base)) {
			{
				#line 596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				return result;
			}
		}
		#line 599 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	auto getCheckedIsqrt($extension_Int128_1283_i128 const & $this ) -> const Builtin::Nullable<$extension_Int128_1283_i128>
	{
		#line 1300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (ADV_UPCS(IsNegative)($this.$ref())) {
			#line 1301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return nullptr;
		}
		#line 1303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		constexpr Builtin::Auto<decltype(Builtin::Cast<true, $extension_Int128_1283_i128>(ADV_USFCS((Math), Isqrt128)(Builtin::Cast<true, Builtin::u128>(ADV_USPCS(MaxValue, $extension_Int128_1283_i128)()))))> MAX_RESULT = Builtin::Cast<true, $extension_Int128_1283_i128>(ADV_USFCS((Math), Isqrt128)(Builtin::Cast<true, Builtin::u128>(ADV_USPCS(MaxValue, $extension_Int128_1283_i128)())));
		#line 1304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		const Builtin::Auto<decltype(Builtin::Cast<true, $extension_Int128_1283_i128>(ADV_USFCS((Math), Isqrt128)(Builtin::Cast<true, Builtin::u128>($this))))> result = Builtin::Cast<true, $extension_Int128_1283_i128>(ADV_USFCS((Math), Isqrt128)(Builtin::Cast<true, Builtin::u128>($this))); 
		#line 1305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ASSUME((result <=> Builtin::i32(0)) >= 0);
		#line 1306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ASSUME((result <=> MAX_RESULT) <= 0);
		#line 1307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	} namespace System{

}