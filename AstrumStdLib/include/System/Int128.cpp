#include "Math.h"
#include "Int128.h"

namespace System {
//###############################################################################
//# Global type aliases
//###############################################################################
//###############################################################################
//# Type definitions
//###############################################################################

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	















static_assert(Builtin::usize(sizeof(Builtin::i128)) == Builtin::i32(16), "i128 should be 16 bytes");
static_assert(ADV_USPCS(MinValue, Builtin::i128)() == INT128_MIN, "i128.Min should be -170141183460469231731687303715884105728");
static_assert(ADV_USPCS(MaxValue, Builtin::i128)() == Builtin::ParseInt128("0x7FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"), "i128.Max should be 0x7FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF");
static_assert(ADV_UFCS_NONLOCAL(_operator_gt_gt_not)(ADV_USPCS(One, Builtin::i128)(), Builtin::i32(3)) == Builtin::ParseUInt128("0x20000000000000000000000000000000"), "i128.One >>% 3 == 0x20_00_00_00_00_00_00_00_00_00_00_00_00_00_00_00");
static_assert(ADV_USPCS(IsSigned, Builtin::i128)(), "i128 must be signed");
static_assert(ADV_USPCS(MaxDigitCount, Builtin::i128)() == Builtin::i32(39), "i128 max digit count must be 39");
static_assert(Builtin::ParseInt128("123123123123123123123") + (Builtin::i32(-5)) == Builtin::ParseInt128("123123123123123123118"), "123123123123123123123 + (-5) == 123123123123123123118");
static_assert(Builtin::ParseInt128("123123123123123123123") * Builtin::i32(5) == Builtin::ParseInt128("615615615615615615615"), "123123123123123123123 * 5 == 615615615615615615615");
static_assert(Builtin::ParseInt128("615615615615615615615") * Builtin::i64(9223372036854775LL) == Builtin::ParseInt128("5678051854520206831826153779977311625"), "a * 9223372036854775 == 5678051854520206831826153779977311625");
static_assert(Builtin::ParseInt128("615615615615615615615") * (Builtin::i32(-5)) == Builtin::ParseInt128("-3078078078078078078075"), "a * (-5) == -3078078078078078078075");
static_assert(ADV_UFCS_NONLOCAL(_operator_xor_xor)(Builtin::i128(2LL), Builtin::u32(126U)) == Builtin::ParseInt128("85070591730234615865843651857942052864"), "2i128 ^^ 126u == 85070591730234615865843651857942052864");
static_assert(ADV_UPCS_NONLOCAL(ByteSwapped)(Builtin::ParseInt128("0x7b233d2a39fea3397b233d2a39fea339").__ref()) == Builtin::ParseInt128("0x39a3fe392a3d237b39a3fe392a3d237b"), "0x7b233d2a39fea3397b233d2a39fea339_i128.ByteSwapped == 0x39a3fe392a3d237b39a3fe392a3d237b");
static_assert(Builtin::TypeIs<Builtin::i128, IComparable<Builtin::i128>>(), "i128 should implement IComparable<i128>");
static_assert(Builtin::TypeIs<Builtin::i128, IEquatable<Builtin::i128>>(), "i128 should implement IEquatable<i128>");
static_assert(Builtin::TypeIs<Builtin::i128, ISelfComparable>(), "i128 should implement ISelfComparable");
static_assert(Builtin::TypeIs<Builtin::i128, ISelfEquatable>(), "i128 should implement ISelfEquatable");
static_assert(Builtin::TypeIs<Builtin::i128, IAdditionOperators<Builtin::i128, Builtin::i128>>(), "i128 should implement IAdditionOperators<i128, i128>");
static_assert(Builtin::TypeIs<Builtin::i128, ISubtractionOperators<Builtin::i128, Builtin::i128>>(), "i128 should implement ISubtractionOperators<i128, i128>");
static_assert(Builtin::TypeIs<Builtin::i128, IMultiplyOperators<Builtin::i128, Builtin::i128>>(), "i128 should implement IMultiplyOperators<i128, i128>");
static_assert(Builtin::TypeIs<Builtin::i128, IDivisionOperators<Builtin::i128, Builtin::f64>>(), "i128 should implement IDivisionOperators<i128, f64>");
static_assert(Builtin::TypeIs<Builtin::i128, IIntDivOperators<Builtin::i128, Builtin::i128>>(), "i128 should implement IIntDivOperators<i128, i128>");
static_assert(Builtin::TypeIs<Builtin::i128, IModulusOperators<Builtin::i128, Builtin::i128>>(), "i128 should implement IModulusOperators<i128, i128>");
static_assert(Builtin::TypeIs<Builtin::i128, IBitwiseOperators<Builtin::i128, Builtin::i128>>(), "i128 should implement IBitwiseOperators<i128, i128>");
static_assert(Builtin::TypeIs<Builtin::i128, IShiftOperators<Builtin::i32, Builtin::i128>>(), "i128 should implement IShiftOperators<i32, i128>");
static_assert(Builtin::TypeIs<Builtin::i128, IUnaryPlusOperators<Builtin::i128>>(), "i128 should implement IUnaryPlusOperators<i128>");
static_assert(Builtin::TypeIs<Builtin::i128, IUnaryNegationOperators<Builtin::i128>>(), "i128 should implement IUnaryNegationOperators<i128>");
static_assert(Builtin::TypeIs<Builtin::i128, IIncrementOperators<Builtin::i128>>(), "i128 should implement IIncrementOperators<i128>");
static_assert(Builtin::TypeIs<Builtin::i128, IDecrementOperators<Builtin::i128>>(), "i128 should implement IDecrementOperators<i128>");
static_assert(ADV_UFCS_NONLOCAL(_operator_add_mod)(ADV_USPCS(MaxValue, Builtin::i128)(), Builtin::i128(1LL)) == ADV_USPCS(MinValue, Builtin::i128)(), "i128.MaxValue +% 1i128 == i128.MinValue");
static_assert(ADV_UFCS_NONLOCAL(_operator_add_or)(ADV_USPCS(MaxValue, Builtin::i128)(), Builtin::i128(1LL)) == ADV_USPCS(MaxValue, Builtin::i128)(), "i128.MaxValue +| 1i128 == i128.MaxValue");
#ifdef ADV_UNITTEST
	#line 1494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	static bool __Test_58e632171b2e9327 = [](){
		#line 1496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::i128 a = Builtin::i32(-12345); 
		#line 1497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::i32(-12345)), u"a==-12345");
		#line 1498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = Builtin::i8(-23);
		#line 1499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::i32(-23)), u"a==-23");
		#line 1500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = Builtin::i16(1234);
		#line 1501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::i32(1234)), u"a==1234");
		#line 1502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = Builtin::i64(-12345678901234LL);
		#line 1503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::i64(-12345678901234LL)), u"a==-12345678901234");
		#line 1504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = Builtin::u8(23U);
		#line 1505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::i32(23)), u"a==23");
		#line 1506 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = Builtin::u16(1234U);
		#line 1507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::i32(1234)), u"a==1234");
		#line 1508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = Builtin::u32(212455666U);
		#line 1509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::i32(212455666)), u"a==212455666");
		#line 1510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = Builtin::u64(1234567890123567ULL);
		#line 1511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::i64(1234567890123567LL)), u"a==1234567890123567");
		#line 1512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = Builtin::ParseInt128("170141183460469231731687303715");
		#line 1513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::ParseInt128("170141183460469231731687303715")), u"a==170141183460469231731687303715");
		#line 1514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::u128 u = Builtin::ParseUInt128("170141183460469231731687303715884105727"); 
		#line 1515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = Builtin::Cast<true, Builtin::i128>(u);
		#line 1516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == u), u"a==u");
		#line 1517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = ADV_USPCS(MinValue, Builtin::i128)();
		#line 1518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		u = Builtin::ParseUInt128("170141183460469231731687303715884105728");
		#line 1519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a != u), u"a!=u");
		#line 1520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT(((a <=> u) < 0), u"a<u");
		#line 1521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((Builtin::Cast<true, Builtin::i8>(Builtin::i128(-123LL)) == Builtin::i32(-123)), u"-123i128asi8==-123");
		#line 1522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((Builtin::Cast<true, Builtin::i16>(Builtin::i128(-1234LL)) == Builtin::i32(-1234)), u"-1234i128asi16==-1234");
		#line 1523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((Builtin::Cast<true, Builtin::i32>(Builtin::i128(-123123LL)) == Builtin::i32(-123123)), u"-123123i128asi32==-123123");
		#line 1524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((Builtin::Cast<true, Builtin::i64>(Builtin::i128(-123123123123LL)) == Builtin::i64(-123123123123LL)), u"-123123123123i128asi64==-123123123123");
		#line 1525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((Builtin::Cast<true, Builtin::u8>(Builtin::i128(123LL)) == Builtin::i32(123)), u"123i128asu8==123");
		#line 1526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((Builtin::Cast<true, Builtin::u16>(Builtin::i128(1234LL)) == Builtin::i32(1234)), u"1234i128asu16==1234");
		#line 1527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((Builtin::Cast<true, Builtin::u32>(Builtin::i128(123123LL)) == Builtin::i32(123123)), u"123123i128asu32==123123");
		#line 1528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((Builtin::Cast<true, Builtin::u64>(Builtin::i128(123123123123LL)) == Builtin::i64(123123123123LL)), u"123123123123i128asu64==123123123123");
		#line 1529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT(((a <=> Builtin::i8(123)) < 0), u"a<123i8");
		#line 1530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT(((a <=> Builtin::i16(1234)) < 0), u"a<1234i16");
		#line 1531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT(((a <=> Builtin::i32(123123)) < 0), u"a<123123i32");
		#line 1532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT(((a <=> Builtin::i64(123123123123LL)) < 0), u"a<123123123123i64");
		#line 1533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT(((a <=> Builtin::u8(250U)) < 0), u"a<250u8");
		#line 1534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT(((a <=> Builtin::u16(25000U)) < 0), u"a<25000u16");
		#line 1535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT(((a <=> Builtin::u32(2500000U)) < 0), u"a<2500000u32");
		#line 1536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT(((a <=> Builtin::u64(250000000000ULL)) < 0), u"a<250000000000u64");
		#line 1537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = Builtin::ParseInt128("11834604692317316873037158841057");
		#line 1538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT(((a <=> Builtin::i8(123)) > 0), u"a>123i8");
		#line 1539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT(((a <=> Builtin::i16(1234)) > 0), u"a>1234i16");
		#line 1540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT(((a <=> Builtin::i32(123123)) > 0), u"a>123123i32");
		#line 1541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT(((a <=> Builtin::i64(123123123123LL)) > 0), u"a>123123123123i64");
		#line 1542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT(((a <=> Builtin::u8(250U)) > 0), u"a>250u8");
		#line 1543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT(((a <=> Builtin::u16(25000U)) > 0), u"a>25000u16");
		#line 1544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT(((a <=> Builtin::u32(2500000U)) > 0), u"a>2500000u32");
		#line 1545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT(((a <=> Builtin::u64(250000000000ULL)) > 0), u"a>250000000000u64");
		#line 1546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((+a == a), u"+a==a");
		#line 1547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((-a == Builtin::ParseInt128("-11834604692317316873037158841057")), u"-a==-11834604692317316873037158841057");
		#line 1548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_not)(a) == Builtin::ParseInt128("-11834604692317316873037158841058")), u"~a==-11834604692317316873037158841058");
		#line 1550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT(((a & Builtin::i32(1234)) == Builtin::i32(192)), u"(a&1234)==192");
		#line 1551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT(((a | Builtin::i32(1234)) == Builtin::ParseInt128("11834604692317316873037158842099")), u"(a|1234)==11834604692317316873037158842099");
		#line 1552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT(((a ^ Builtin::i32(1234)) == Builtin::ParseInt128("11834604692317316873037158841907")), u"(a^1234)==11834604692317316873037158841907");
		#line 1553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT(((a & Builtin::ParseInt128("123412341234123412341234")) == Builtin::ParseInt128("47262864179445148942560")), u"(a&123412341234123412341234)==47262864179445148942560");
		#line 1554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT(((a | Builtin::ParseInt128("123412341234123412341234")) == Builtin::ParseInt128("11834604768466793927715422239731")), u"(a|123412341234123412341234)==11834604768466793927715422239731");
		#line 1555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT(((a ^ Builtin::ParseInt128("123412341234123412341234")) == Builtin::ParseInt128("11834604721203929748270273297171")), u"(a^123412341234123412341234)==11834604721203929748270273297171");
		#line 1556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = ADV_USPCS(MaxValue, Builtin::i128)();
		#line 1557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a >> Builtin::i32(0) == a), u"a>>0==a");
		#line 1558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a << Builtin::i32(0) == a), u"a<<0==a");
		#line 1559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a >> Builtin::i32(15) == Builtin::ParseInt128("0xFFFFFFFFFFFFFFFFFFFFFFFFFFFF")), u"a>>15==0xFFFFFFFFFFFFFFFFFFFFFFFFFFFF_i128");
		#line 1560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a >> Builtin::i32(95) == Builtin::i64(0xFFFFFFFFLL)), u"a>>95==0xFFFFFFFF");
		#line 1561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a >> Builtin::i32(127) == Builtin::i32(0)), u"a>>127==0");
		#line 1562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = Builtin::i64(0xFFFFFFFFFFLL);
		#line 1563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a << Builtin::i32(16) == Builtin::i64(0xFFFFFFFFFF0000LL)), u"a<<16==0xFFFFFFFFFF0000");
		#line 1564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a << Builtin::i32(80) == Builtin::ParseInt128("0xFFFFFFFFFF00000000000000000000")), u"a<<80==0xFFFFFFFFFF00000000000000000000_i128");
		#line 1565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((Builtin::i128(-1LL) >> Builtin::i32(58) == Builtin::i32(-1)), u"-1i128>>58==-1");
		#line 1566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = Builtin::i32(-1);
		#line 1567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a >> Builtin::i32(64) == Builtin::i32(-1)), u"a>>64==-1");
		#line 1568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_gt)(a, Builtin::i32(64)) == Builtin::u64(0xFFFFFFFFFFFFFFFFULL)), u"a>>>64==0xFFFFFFFFFFFFFFFFu");
		#line 1569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_UFCS(_operator_gt_gt_gt_eq)(a, Builtin::i32(64));
		#line 1570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::u64(0xFFFFFFFFFFFFFFFFULL)), u"a==0xFFFFFFFFFFFFFFFFu");
		#line 1572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = Builtin::ParseInt128("123123123123123123123");
		#line 1573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a++ == Builtin::ParseInt128("123123123123123123123")), u"a++==123123123123123123123");
		#line 1574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((++a == Builtin::ParseInt128("123123123123123123125")), u"++a==123123123123123123125");
		#line 1575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::ParseInt128("123123123123123123125")), u"a==123123123123123123125");
		#line 1576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a-- == Builtin::ParseInt128("123123123123123123125")), u"a--==123123123123123123125");
		#line 1577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((--a == Builtin::ParseInt128("123123123123123123123")), u"--a==123123123123123123123");
		#line 1578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::ParseInt128("123123123123123123123")), u"a==123123123123123123123");
		#line 1580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a + Builtin::i32(5) == Builtin::ParseInt128("123123123123123123128")), u"a+5==123123123123123123128");
		#line 1581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a + Builtin::ParseInt128("123123123123123123123") == Builtin::ParseInt128("246246246246246246246")), u"a+123123123123123123123==246246246246246246246");
		#line 1582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a + (Builtin::i32(-5)) == Builtin::ParseInt128("123123123123123123118")), u"a+(-5)==123123123123123123118");
		#line 1583 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a += Builtin::ParseInt128("123123123123123123125");
		#line 1584 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::ParseInt128("246246246246246246248")), u"a==246246246246246246248");
		#line 1585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a += (Builtin::ParseInt128("-123123123123123123125"));
		#line 1586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::ParseInt128("123123123123123123123")), u"a==123123123123123123123");
		#line 1588 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a - Builtin::i32(5) == Builtin::ParseInt128("123123123123123123118")), u"a-5==123123123123123123118");
		#line 1589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a - Builtin::ParseInt128("123123123123123123123") == Builtin::i32(0)), u"a-123123123123123123123==0");
		#line 1590 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a - Builtin::ParseInt128("246246246246246246248") == Builtin::ParseInt128("-123123123123123123125")), u"a-246246246246246246248==-123123123123123123125");
		#line 1591 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a - (Builtin::i32(-5)) == Builtin::ParseInt128("123123123123123123128")), u"a-(-5)==123123123123123123128");
		#line 1592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a -= Builtin::ParseInt128("246246246246246246248");
		#line 1593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::ParseInt128("-123123123123123123125")), u"a==-123123123123123123125");
		#line 1594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a -= (Builtin::ParseInt128("-246246246246246246248"));
		#line 1595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::ParseInt128("123123123123123123123")), u"a==123123123123123123123");
		#line 1597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a * Builtin::i32(5) == Builtin::ParseInt128("615615615615615615615")), u"a*5==615615615615615615615");
		#line 1598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a *= Builtin::i32(5);
		#line 1599 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::ParseInt128("615615615615615615615")), u"a==615615615615615615615");
		#line 1600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a * Builtin::i64(9223372036854775LL) == Builtin::ParseInt128("5678051854520206831826153779977311625")), u"a*9223372036854775==5678051854520206831826153779977311625");
		#line 1601 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a * (Builtin::i64(-9223372036854775LL)) == Builtin::ParseInt128("-5678051854520206831826153779977311625")), u"a*(-9223372036854775)==-5678051854520206831826153779977311625");
		#line 1602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a * (Builtin::i32(-5)) == Builtin::ParseInt128("-3078078078078078078075")), u"a*(-5)==-3078078078078078078075");
		#line 1603 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a * Builtin::i32(0) == Builtin::i32(0)), u"a*0==0");
		#line 1604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_USPCS(MaxValue, Builtin::i128)() * (Builtin::i32(-1)) == -ADV_USPCS(MaxValue, Builtin::i128)()), u"i128.MaxValue*(-1)==-i128.MaxValue");
		#line 1605 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((-a * (Builtin::i32(-1000000)) == Builtin::ParseInt128("615615615615615615615000000")), u"-a*(-1000000)==615615615615615615615000000");
		#line 1607 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, Builtin::i32(5)) == Builtin::ParseInt128("123123123123123123123")), u"a\\5==123123123123123123123");
		#line 1608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, Builtin::i32(123123123)) == Builtin::i64(5000000005000LL)), u"a\\123123123==5000000005000");
		#line 1609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, Builtin::ParseInt128("123123123123123123128")) == Builtin::i32(4)), u"a\\123123123123123123128==4");
		#line 1610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, (Builtin::i32(-1))) == Builtin::ParseInt128("-615615615615615615615")), u"a\\(-1)==-615615615615615615615");
		#line 1611 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, (Builtin::i32(-5))) == Builtin::ParseInt128("-123123123123123123123")), u"a\\(-5)==-123123123123123123123");
		#line 1612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, (Builtin::i32(-123123123))) == Builtin::i64(-5000000005000LL)), u"a\\(-123123123)==-5000000005000");
		#line 1613 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, (Builtin::ParseInt128("-123123123123123123128"))) == Builtin::i32(-4)), u"a\\(-123123123123123123128)==-4");
		#line 1614 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_UFCS(_operator_bsl_eq)(a, (Builtin::i32(-1)));
		#line 1615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, Builtin::i32(5)) == Builtin::ParseInt128("-123123123123123123123")), u"a\\5==-123123123123123123123");
		#line 1616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, Builtin::i32(123123123)) == Builtin::i64(-5000000005000LL)), u"a\\123123123==-5000000005000");
		#line 1617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, Builtin::ParseInt128("123123123123123123128")) == Builtin::i32(-4)), u"a\\123123123123123123128==-4");
		#line 1618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, (Builtin::i32(-1))) == Builtin::ParseInt128("615615615615615615615")), u"a\\(-1)==615615615615615615615");
		#line 1619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, (Builtin::i32(-5))) == Builtin::ParseInt128("123123123123123123123")), u"a\\(-5)==123123123123123123123");
		#line 1620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, (Builtin::i32(-123123123))) == Builtin::i64(5000000005000LL)), u"a\\(-123123123)==5000000005000");
		#line 1621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, (Builtin::ParseInt128("-123123123123123123128"))) == Builtin::i32(4)), u"a\\(-123123123123123123128)==4");
		#line 1622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_UFCS(_operator_bsl_eq)(a, (Builtin::i32(-5)));
		#line 1623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::ParseInt128("123123123123123123123")), u"a==123123123123123123123");
		#line 1624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a *= Builtin::i32(5);
		#line 1626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a % Builtin::i32(5) == Builtin::i32(0)), u"a%5==0");
		#line 1627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a % Builtin::i32(123123123) == Builtin::i32(615)), u"a%123123123==615");
		#line 1628 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a % Builtin::ParseInt128("123123123123123123128") == Builtin::ParseInt128("123123123123123123103")), u"a%123123123123123123128==123123123123123123103");
		#line 1629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a % (Builtin::i32(-1)) == Builtin::i32(0)), u"a%(-1)==0");
		#line 1630 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a % (Builtin::i32(-5)) == Builtin::i32(0)), u"a%(-5)==0");
		#line 1631 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a % (Builtin::i32(-123123123)) == Builtin::i32(615)), u"a%(-123123123)==615");
		#line 1632 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a % (Builtin::ParseInt128("-123123123123123123128")) == Builtin::ParseInt128("123123123123123123103")), u"a%(-123123123123123123128)==123123123123123123103");
		#line 1633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_UFCS(_operator_bsl_eq)(a, (Builtin::i32(-1)));
		#line 1634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a % Builtin::i32(5) == Builtin::i32(0)), u"a%5==0");
		#line 1635 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a % Builtin::i32(123123123) == Builtin::i32(-615)), u"a%123123123==-615");
		#line 1636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a % Builtin::ParseInt128("123123123123123123128") == Builtin::ParseInt128("-123123123123123123103")), u"a%123123123123123123128==-123123123123123123103");
		#line 1637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a % (Builtin::i32(-1)) == Builtin::i32(0)), u"a%(-1)==0");
		#line 1638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a % (Builtin::i32(-5)) == Builtin::i32(0)), u"a%(-5)==0");
		#line 1639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a % (Builtin::i32(-123123123)) == Builtin::i32(-615)), u"a%(-123123123)==-615");
		#line 1640 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a % (Builtin::ParseInt128("-123123123123123123128")) == Builtin::ParseInt128("-123123123123123123103")), u"a%(-123123123123123123128)==-123123123123123123103");
		#line 1641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a %= (Builtin::i32(-5));
		#line 1642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::i32(0)), u"a==0");
		#line 1644 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = Builtin::i32(10);
		#line 1646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Nullable<Builtin::i128> c = nullptr; 
		#line 1647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Nullable<Builtin::i128> d = Builtin::i32(5); 
		#line 1648 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::i128 b = Builtin::i32(5); 
		#line 1649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a != b), u"a!=b");
		#line 1650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((b != c), u"b!=c");
		#line 1651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((!Builtin::IdentityEquals(b, c)), u"b!==c");
		#line 1652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT(((b <=> c) > 0), u"b>c");
		#line 1653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((c != b), u"c!=b");
		#line 1654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((c == nullptr), u"c==null");
		#line 1655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((d != nullptr), u"d!=null");
		#line 1656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT(((c <=> d) < 0), u"c<d");
		#line 1657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((b == d), u"b==d");
		#line 1658 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((Builtin::IdentityEquals(b, d)), u"b===d");
		#line 1661 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Nullable<Builtin::ObjectRef> o = c; 
		#line 1662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		o = d;
		#line 1663 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_ne_eq_mul)(b, o)), u"b!=*o");
		#line 1664 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		IComparable<Builtin::i128> icomp = a; 
		#line 1665 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT(((icomp <=> b) > 0), u"icomp>b");
		#line 1668 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = Builtin::ParseInt128("-123123123123123123123");
		#line 1669 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(a.__ref()) == Builtin::i64(7828766007537524882LL)), u"a.HashCode==7828766007537524882");
		#line 1670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(a) == Builtin::i64(7828766007537524882LL)), u"#a==7828766007537524882");
		#line 1671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a++;
		#line 1672 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(a) == Builtin::ParseInt128("10642750005548672299")), u"#a==10642750005548672299");
		#line 1673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a -= Builtin::i32(2);
		#line 1674 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(a) == Builtin::i64(6494541062850619495LL)), u"#a==6494541062850619495");
		#line 1675 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = -a;
		#line 1677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		b = Builtin::i32(-6);
		#line 1678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(ToInt32)(b.__ref()) == Builtin::i32(-6)), u"b.ToInt32()==-6");
		#line 1679 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(NarrowToUInt64)(b.__ref()) == Builtin::u64(18446744073709551610ULL)), u"b.NarrowToUInt64()==18446744073709551610u");
		#line 1680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(NarrowToUInt128)(b.__ref()) == Builtin::u128{ADV_USPCS(MaxValue, Builtin::u64)(), ADV_USPCS(MaxValue, Builtin::u64)()} - Builtin::i32(5)), u"b.NarrowToUInt128()==u128(u64.MaxValue,u64.MaxValue)-5");
		#line 1683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(Abs)(b.__ref()) == Builtin::i32(6)), u"b.Abs==6");
		#line 1684 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(CheckedAbs)(b.__ref()) == Builtin::i64(6LL)), u"b.CheckedAbs==6i64");
		#line 1685 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(CheckedAbs)(ADV_USPCS(MinValue, Builtin::i128)().__ref()) == nullptr), u"i128.MinValue.CheckedAbs==null");
		#line 1686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(StrictAbs)(b.__ref()) == Builtin::i32(6)), u"b.StrictAbs==6");
		#line 1687 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(WrappingAbs)(ADV_USPCS(MinValue, Builtin::i128)().__ref()) == ADV_USPCS(MinValue, Builtin::i128)()), u"i128.MinValue.WrappingAbs==i128.MinValue");
		#line 1688 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(SaturatingAbs)(ADV_USPCS(MinValue, Builtin::i128)().__ref()) == ADV_USPCS(MaxValue, Builtin::i128)()), u"i128.MinValue.SaturatingAbs==i128.MaxValue");
		#line 1689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		{
			#line 1690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			const auto& [result, overflowed] = ADV_UPCS(OverflowingAbs)(ADV_USPCS(MinValue, Builtin::i128)().__ref());
			#line 1691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_ASSERT((result == ADV_USPCS(MinValue, Builtin::i128)() && overflowed), u"result==i128.MinValue&&overflowed");
		}
		#line 1693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(IsFinite)(b.__ref())), u"b.IsFinite");
		#line 1694 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(IsInteger)(b.__ref())), u"b.IsInteger");
		#line 1695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(IsNegative)(b.__ref())), u"b.IsNegative");
		#line 1696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(IsPositive)(a.__ref())), u"a.IsPositive");
		#line 1697 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((!ADV_UPCS(IsPositive)(b.__ref())), u"!b.IsPositive");
		#line 1698 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(IsCanonical)(b.__ref())), u"b.IsCanonical");
		#line 1699 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((!ADV_UPCS(IsComplexNumber)(b.__ref())), u"!b.IsComplexNumber");
		#line 1700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(IsRealNumber)(b.__ref())), u"b.IsRealNumber");
		#line 1701 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((!ADV_UPCS(IsImaginaryNumber)(b.__ref())), u"!b.IsImaginaryNumber");
		#line 1702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(IsEvenInteger)(b.__ref())), u"b.IsEvenInteger");
		#line 1703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((!ADV_UPCS(IsOddInteger)(b.__ref())), u"!b.IsOddInteger");
		#line 1704 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((!ADV_UPCS(IsInfinity)(b.__ref())), u"!b.IsInfinity");
		#line 1705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((!ADV_UPCS(IsPositiveInfinity)(b.__ref())), u"!b.IsPositiveInfinity");
		#line 1706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((!ADV_UPCS(IsNegativeInfinity)(b.__ref())), u"!b.IsNegativeInfinity");
		#line 1707 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((!ADV_UPCS(IsNaN)(b.__ref())), u"!b.IsNaN");
		#line 1708 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(IsNormal)(b.__ref())), u"b.IsNormal");
		#line 1709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((!ADV_UPCS(IsSubnormal)(b.__ref())), u"!b.IsSubnormal");
		#line 1710 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((!ADV_UPCS(IsZero)(b.__ref())), u"!b.IsZero");
		#line 1713 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = Builtin::ParseInt128("100000000000000000000");
		#line 1714 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(Sign)(a.__ref()) == +Builtin::i32(1)), u"a.Sign==+1");
		#line 1715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(Sign)(b.__ref()) == Builtin::i32(-1)), u"b.Sign==-1");
		#line 1716 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(CopySign)(a.__ref(), b) == Builtin::ParseInt128("-100000000000000000000")), u"a.CopySign(b)==-100_000_000_000_000_000_000");
		#line 1717 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(Max)(a.__ref(), b) == a), u"a.Max(b)==a");
		#line 1718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(Min)(a.__ref(), b) == b), u"a.Min(b)==b");
		#line 1719 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(MaxNumber)(a.__ref(), b) == a), u"a.MaxNumber(b)==a");
		#line 1720 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(MinNumber)(a.__ref(), b) == b), u"a.MinNumber(b)==b");
		#line 1721 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(Clamp)(b.__ref(), Builtin::i128(-5LL), +Builtin::i128(5LL)) == Builtin::i32(-5)), u"b.Clamp(-5i128,+5i128)==-5");
		#line 1724 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::i128(2LL).__ref()) == Builtin::i32(1)), u"2i128.Log2==1");
		#line 1725 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::i128(16LL).__ref()) == Builtin::i32(4)), u"16i128.Log2==4");
		#line 1726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::i128(64LL).__ref()) == Builtin::i32(6)), u"64i128.Log2==6");
		#line 1727 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::ParseInt128("100141183460469231731687303715884105728").__ref()) == Builtin::i32(126)), u"100141183460469231731687303715884105728.Log2==126");
		#line 1728 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::i128(2LL).__ref()) == Builtin::i32(1)), u"2i128.Log2Ceiling==1");
		#line 1729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::i128(16LL).__ref()) == Builtin::i32(4)), u"16i128.Log2Ceiling==4");
		#line 1730 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::i128(65LL).__ref()) == Builtin::i32(7)), u"65i128.Log2Ceiling==7");
		#line 1731 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::ParseInt128("100141183460469231731687303715884105728").__ref()) == Builtin::i32(127)), u"100141183460469231731687303715884105728.Log2Ceiling==127");
		#line 1732 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(CheckedLog2)(Builtin::i128(0LL).__ref()) == nullptr), u"0i128.CheckedLog2==null");
		#line 1733 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(Builtin::i128(5LL).__ref()) == Builtin::i32(0)), u"5i128.Log10==0");
		#line 1734 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(a.__ref()) == Builtin::i32(20)), u"a.Log10==20");
		#line 1735 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(ADV_USPCS(MaxValue, Builtin::i128)().__ref()) == Builtin::i32(38)), u"i128.MaxValue.Log10==38");
		#line 1736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(Log)(Builtin::i128(5LL).__ref(), Builtin::i128(5LL)) == Builtin::i32(1)), u"5i128.Log(5i128)==1");
		#line 1737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(CheckedLog)(Builtin::i128(5LL).__ref(), Builtin::i128(-5LL)) == nullptr), u"5i128.CheckedLog(-5i128)==null");
		#line 1738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(Midpoint)(a.__ref(), Builtin::ParseInt128("300000000000000000000")) == Builtin::ParseInt128("200000000000000000000")), u"a.Midpoint(300_000_000_000_000_000_000)==200_000_000_000_000_000_000");
		#line 1739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(Midpoint)(Builtin::ParseInt128("100000000000000000000000000000000000000").__ref(), Builtin::ParseInt128("170000000000000000000000000000000000000")) == Builtin::ParseInt128("135000000000000000000000000000000000000")), u"100000000000000000000000000000000000000.Midpoint(170000000000000000000000000000000000000)==135000000000000000000000000000000000000");
		#line 1740 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)(a.__ref(), Builtin::i32(10)) == Builtin::ParseInt128("100000000000000000000")), u"a.NextMultipleOf(10)==100_000_000_000_000_000_000");
		#line 1741 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)(Builtin::ParseInt128("100000000000000000001").__ref(), Builtin::i32(100)) == Builtin::ParseInt128("100000000000000000100")), u"100_000_000_000_000_000_001.NextMultipleOf(100)==100_000_000_000_000_000_100");
		#line 1742 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)(a.__ref(), Builtin::i64(8500000000000LL)) == Builtin::ParseInt128("100000001000000000000")), u"a.NextMultipleOf(8500000000000)==100000001000000000000");
		#line 1743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)((Builtin::i128(-13LL)).__ref(), Builtin::i128(4LL)) == Builtin::i32(-12)), u"(-13i128).NextMultipleOf(4i128)==-12");
		#line 1744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)((Builtin::i128(-13LL)).__ref(), Builtin::i128(-4LL)) == Builtin::i32(-16)), u"(-13i128).NextMultipleOf(-4i128)==-16");
		#line 1745 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(ByteCount)(a.__ref()) == Builtin::i32(16)), u"a.ByteCount==16");
		#line 1746 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(ByteSwapped)(Builtin::ParseInt128("0x7b233d2a39fea3397b233d2a39fea339").__ref()) == Builtin::ParseInt128("0x39a3fe392a3d237b39a3fe392a3d237b")), u"0x7b233d2a39fea3397b233d2a39fea339_i128.ByteSwapped==0x39a3fe392a3d237b39a3fe392a3d237b_i128");
		#line 1747 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_not)(Builtin::i128(0b1010LL), Builtin::i32(3)) == Builtin::i32(0b01010000)), u"0b1010_i128<<~3==0b0101_0000");
		#line 1748 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_not)(Builtin::i128(0b1010LL), Builtin::i32(5)) == Builtin::i32(0b101000000)), u"0b1010_i128<<~5==0b1_0100_0000");
		#line 1749 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_not)(Builtin::i128(0b1010LL), Builtin::i32(3)) == Builtin::ParseInt128("0x40000000000000000000000000000001")), u"0b1010_i128>>~3==0x40000000000000000000000000000001_i128");
		#line 1750 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_not)(Builtin::i128(0b1010LL), Builtin::i32(5)) == Builtin::ParseInt128("0x50000000000000000000000000000000")), u"0b1010_i128>>~5==0x50000000000000000000000000000000_i128");
		#line 1752 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(IsMultipleOf)(a.__ref(), Builtin::i32(5))), u"a.IsMultipleOf(5)");
		#line 1753 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((!ADV_UFCS(IsMultipleOf)(a.__ref(), Builtin::i32(6))), u"!a.IsMultipleOf(6)");
		#line 1755 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(MultiplyBy10)(a.__ref()) == Builtin::ParseInt128("1000000000000000000000")), u"a.MultiplyBy10==1_000_000_000_000_000_000_000");
		#line 1756 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UPCS(MultiplyBy16)(a.__ref()) == Builtin::ParseInt128("1600000000000000000000")), u"a.MultiplyBy16==1_600_000_000_000_000_000_000");
		#line 1759 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = Builtin::ParseInt128("1000000000004000000000");
		#line 1760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_qst)(a, Builtin::i128(100000LL)) == Builtin::ParseInt128("1000000000004000100000")), u"a+?100000i128==1000000000004000100000");
		#line 1761 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_qst)(a, ADV_USPCS(MaxValue, Builtin::i128)()) == nullptr), u"a+?i128.MaxValue==null");
		#line 1762 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_UFCS(_operator_add_qst_eq)(a, Builtin::i128(5LL));
		#line 1763 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::ParseInt128("1000000000004000000005")), u"a==1000000000004000000005");
		#line 1764 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_UFCS(_operator_add_qst_eq)(a, ADV_USPCS(MaxValue, Builtin::i128)());
		#line 1765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::ParseInt128("1000000000004000000005")), u"a==1000000000004000000005");
		#line 1766 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_ne)(a, Builtin::i128(100LL)) == Builtin::ParseInt128("1000000000004000000105")), u"a+!100i128==1000000000004000000105");
		#line 1767 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_mod)(a, Builtin::i128(100LL)) == Builtin::ParseInt128("1000000000004000000105")), u"a+%100i128==1000000000004000000105");
		#line 1768 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_mod)(a, Builtin::ParseInt128("170141183460469230731687303711884105723")) == ADV_USPCS(MinValue, Builtin::i128)()), u"a+%170141183460469230731687303711884105723==i128.MinValue");
		#line 1769 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_UFCS(_operator_add_mod_eq)(a, ADV_USPCS(MaxValue, Builtin::i128)());
		#line 1770 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::ParseInt128("-170141183460469230731687303711884105724")), u"a==-170141183460469230731687303711884105724");
		#line 1771 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_or)(a, (Builtin::ParseInt128("-160141183460469230731687303711884105724"))) == ADV_USPCS(MinValue, Builtin::i128)()), u"a+|(-160141183460469230731687303711884105724)==i128.MinValue");
		#line 1772 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_UFCS(_operator_add_or_eq)(a, ADV_USPCS(MaxValue, Builtin::i128)());
		#line 1773 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::ParseInt128("1000000000004000000003")), u"a==1000000000004000000003");
		#line 1774 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_or)(a, Builtin::ParseInt128("170141183460469231731687303715884105500")) == ADV_USPCS(MaxValue, Builtin::i128)()), u"a+|170141183460469231731687303715884105500==i128.MaxValue");
		#line 1775 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		{
			#line 1776 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_add_mod_qst)(a, Builtin::ParseInt128("170141183460469230731687303711884105725"));
			#line 1777 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_ASSERT((result == ADV_USPCS(MinValue, Builtin::i128)() && overflowed), u"result==i128.MinValue&&overflowed");
		}
		#line 1780 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = ADV_USPCS(MaxValue, Builtin::i128)() - Builtin::i32(1);
		#line 1781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_add_qst_postfix)(a) == ADV_USPCS(MaxValue, Builtin::i128)() - Builtin::i32(1)), u"a++?==i128.MaxValue-1");
		#line 1782 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::i128)()), u"a==i128.MaxValue");
		#line 1783 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_UFCS(_operator_add_add_mod_postfix)(a);
		#line 1784 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::i128)()), u"a==i128.MinValue");
		#line 1785 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = ADV_USPCS(MaxValue, Builtin::i128)();
		#line 1786 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_UFCS(_operator_add_add_or_postfix)(a);
		#line 1787 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::i128)()), u"a==i128.MaxValue");
		#line 1789 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		{
			#line 1790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.__ref(), Builtin::i128(0LL), Builtin::Boolean(false));
			#line 1791 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_ASSERT((result == ADV_USPCS(MaxValue, Builtin::i128)() && !overflowed), u"result==i128.MaxValue&&!overflowed");
		}
		#line 1793 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		{
			#line 1794 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.__ref(), Builtin::i128(-5LL), Builtin::Boolean(true));
			#line 1795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_ASSERT((result == Builtin::ParseInt128("170141183460469231731687303715884105723") && !overflowed), u"result==170141183460469231731687303715884105723&&!overflowed");
		}
		#line 1797 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		{
			#line 1798 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.__ref(), Builtin::i128(0LL), Builtin::Boolean(true));
			#line 1799 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_ASSERT((result == ADV_USPCS(MinValue, Builtin::i128)() && overflowed), u"result==i128.MinValue&&overflowed");
		}
		#line 1801 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		{
			#line 1802 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.__ref(), Builtin::i128(10LL), Builtin::Boolean(true));
			#line 1803 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_ASSERT((result == Builtin::ParseInt128("-170141183460469231731687303715884105718") && overflowed), u"result==-170141183460469231731687303715884105718&&overflowed");
		}
		#line 1806 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_qst)(a, Builtin::ParseInt128("1000000000000000000000000000000000")) == Builtin::ParseInt128("170140183460469231731687303715884105727")), u"a-?1_000_000_000_000_000_000_000_000_000_000_000==170140183460469231731687303715884105727");
		#line 1807 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_qst)(-a, ADV_USPCS(MaxValue, Builtin::i128)()) == nullptr), u"-a-?i128.MaxValue==null");
		#line 1808 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_UFCS(_operator_sub_qst_eq)(a, Builtin::ParseInt128("1000000000000000000000000000000000"));
		#line 1809 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::ParseInt128("170140183460469231731687303715884105727")), u"a==170140183460469231731687303715884105727");
		#line 1810 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_UFCS(_operator_sub_qst_eq)(a, Builtin::i128(1LL));
		#line 1811 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::ParseInt128("170140183460469231731687303715884105726")), u"a==170140183460469231731687303715884105726");
		#line 1812 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_ne)(a, Builtin::ParseInt128("1000000000000000000000000000000000")) == Builtin::ParseInt128("170139183460469231731687303715884105726")), u"a-!1_000_000_000_000_000_000_000_000_000_000_000==170139183460469231731687303715884105726");
		#line 1813 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_mod)(-a, Builtin::ParseInt128("1000000000000000000000000000000003")) == ADV_USPCS(MaxValue, Builtin::i128)()), u"-a-%1000000000000000000000000000000003==i128.MaxValue");
		#line 1814 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_mod)(a, Builtin::ParseInt128("1000000000000000000000000000000000")) == Builtin::ParseInt128("170139183460469231731687303715884105726")), u"a-%1_000_000_000_000_000_000_000_000_000_000_000==170139183460469231731687303715884105726");
		#line 1815 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_UFCS(_operator_sub_mod_eq)(a, ADV_USPCS(MaxValue, Builtin::i128)());
		#line 1816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::ParseInt128("-1000000000000000000000000000000001")), u"a==-1000000000000000000000000000000001");
		#line 1817 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_or)(a, Builtin::ParseInt128("170141183460469231731687303715884105000")) == ADV_USPCS(MinValue, Builtin::i128)()), u"a-|170141183460469231731687303715884105000==i128.MinValue");
		#line 1818 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_UFCS(_operator_sub_or_eq)(a, ADV_USPCS(MaxValue, Builtin::i128)());
		#line 1819 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::i128)()), u"a==i128.MinValue");
		#line 1820 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		{
			#line 1821 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_sub_mod_qst)(a, Builtin::ParseInt128("1000000000000000000000000000000000"));
			#line 1822 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_ASSERT((result == Builtin::ParseInt128("170140183460469231731687303715884105728") && overflowed), u"result==170140183460469231731687303715884105728&&overflowed");
		}
		#line 1825 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = ADV_USPCS(MinValue, Builtin::i128)() + Builtin::i32(1);
		#line 1826 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_sub_qst_postfix)(a) == ADV_USPCS(MinValue, Builtin::i128)() + Builtin::i32(1)), u"a--?==i128.MinValue+1");
		#line 1827 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::i128)()), u"a==i128.MinValue");
		#line 1828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_UFCS(_operator_sub_sub_mod_postfix)(a);
		#line 1829 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::i128)()), u"a==i128.MaxValue");
		#line 1830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = ADV_USPCS(MinValue, Builtin::i128)();
		#line 1831 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_UFCS(_operator_sub_sub_or_postfix)(a);
		#line 1832 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::i128)()), u"a==i128.MinValue");
		#line 1834 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		{
			#line 1835 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.__ref(), Builtin::i128(0LL), Builtin::Boolean(false));
			#line 1836 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_ASSERT((result == ADV_USPCS(MinValue, Builtin::i128)() && !overflowed), u"result==i128.MinValue&&!overflowed");
		}
		#line 1838 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		{
			#line 1839 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.__ref(), Builtin::i128(-5LL), Builtin::Boolean(true));
			#line 1840 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_ASSERT((result == Builtin::ParseInt128("-170141183460469231731687303715884105724") && !overflowed), u"result==-170141183460469231731687303715884105724&&!overflowed");
		}
		#line 1842 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		{
			#line 1843 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.__ref(), Builtin::i128(0LL), Builtin::Boolean(true));
			#line 1844 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_ASSERT((result == ADV_USPCS(MaxValue, Builtin::i128)() && overflowed), u"result==i128.MaxValue&&overflowed");
		}
		#line 1846 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		{
			#line 1847 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.__ref(), Builtin::i128(10LL), Builtin::Boolean(true));
			#line 1848 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_ASSERT((result == Builtin::ParseInt128("170141183460469231731687303715884105717") && overflowed), u"result==170141183460469231731687303715884105717&&overflowed");
		}
		#line 1851 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_qst)(a, Builtin::i128(1LL)) == ADV_USPCS(MinValue, Builtin::i128)()), u"a*?1i128==i128.MinValue");
		#line 1852 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_qst)(a, Builtin::i128(2LL)) == nullptr), u"a*?2i128==null");
		#line 1853 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_UFCS(_operator_mul_qst_eq)(a, Builtin::i128(5LL));
		#line 1854 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::i128)()), u"a==i128.MinValue");
		#line 1855 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = Builtin::ParseInt128("150000000000000000000");
		#line 1856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::ParseInt128("150000000000000000000")), u"a==150_000_000_000_000_000_000");
		#line 1857 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_ne)(a, Builtin::i128(3LL)) == Builtin::ParseInt128("450000000000000000000")), u"a*!3i128==450_000_000_000_000_000_000");
		#line 1858 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_mod)(a, Builtin::i128(6LL)) == Builtin::ParseInt128("900000000000000000000")), u"a*%6i128==900_000_000_000_000_000_000");
		#line 1859 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_mod)(a, Builtin::ParseInt128("10000000000000000000")) == Builtin::ParseInt128("138870532316246146146501570272927154176")), u"a*%10_000_000_000_000_000_000==138870532316246146146501570272927154176");
		#line 1860 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_UFCS(_operator_mul_mod_eq)(a, Builtin::i128(6LL));
		#line 1861 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::ParseInt128("900000000000000000000")), u"a==900_000_000_000_000_000_000");
		#line 1862 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_or)(a, (Builtin::ParseInt128("-10000000000000000000"))) == ADV_USPCS(MinValue, Builtin::i128)()), u"a*|(-10_000_000_000_000_000_000)==i128.MinValue");
		#line 1863 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_UFCS(_operator_mul_or_eq)(a, Builtin::ParseInt128("10000000000000000000"));
		#line 1864 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::i128)()), u"a==i128.MaxValue");
		#line 1865 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_or)(a, Builtin::i128(2LL)) == ADV_USPCS(MaxValue, Builtin::i128)()), u"a*|2i128==i128.MaxValue");
		#line 1866 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		{
			#line 1867 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_mul_mod_qst)(a, Builtin::i128(2LL));
			#line 1868 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_ASSERT((result == Builtin::i32(-2) && overflowed), u"result==-2&&overflowed");
		}
		#line 1870 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = Builtin::ParseInt128("150000000000000000000");
		#line 1871 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		{
			#line 1872 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			const auto& [low, high] = ADV_UFCS(_operator_mul_gt)(a, Builtin::ParseInt128("10000000000000000000"));
			#line 1873 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_ASSERT((low == Builtin::ParseUInt128("138870532316246146146501570272927154176") && high == Builtin::i32(4)), u"low==138870532316246146146501570272927154176_u128&&high==4");
		}
		#line 1875 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		{
			#line 1876 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			const auto& [low, high] = ADV_UFCS(_operator_mul_gt)(a, (Builtin::ParseInt128("-10000000000000000000")));
			#line 1877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_ASSERT((low == Builtin::ParseUInt128("201411834604692317316873037158841057280") && high == Builtin::i32(-5)), u"low==201411834604692317316873037158841057280_u128&&high==-5");
		}
		#line 1879 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = ADV_USPCS(MaxValue, Builtin::i128)();
		#line 1880 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		{
			#line 1881 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			const auto& [low, high] = ADV_UFCS(CarryingMul)(a.__ref(), Builtin::i128(2LL), Builtin::i128(12LL));
			#line 1882 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_ASSERT((low == Builtin::i32(10) && high == Builtin::i32(1)), u"low==10&&high==1");
		}
		#line 1884 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		{
			#line 1885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			const auto& [low, high] = ADV_UFCS(CarryingMul)(a.__ref(), Builtin::i128(-2LL), Builtin::i128(-12LL));
			#line 1886 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_ASSERT((low == Builtin::ParseUInt128("340282366920938463463374607431768211446") && high == Builtin::i32(-2)), u"low==340282366920938463463374607431768211446_u128&&high==-2");
		}
		#line 1889 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = Builtin::ParseInt128("100000000000000000000");
		#line 1890 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, Builtin::i64(6000000000000LL)) == Builtin::i32(16666666)), u"a\\6000000000000==16666666");
		#line 1891 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a /= Builtin::i64(6000000000000LL);
		#line 1892 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::i32(16666667)), u"a==16666667");
		#line 1893 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = Builtin::ParseInt128("100000000000000000000");
		#line 1894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		{
			#line 1895 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)(a, Builtin::i64(6000000000000LL));
			#line 1896 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_ASSERT((div == Builtin::i32(16666666) && rem == Builtin::i64(4000000000000LL)), u"div==16666666&&rem==4000000000000");
		}
		#line 1898 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_qst)(a, Builtin::i128(50000000LL)) == Builtin::i128(2000000000000LL)), u"a\\?50000000i128==2000000000000i128");
		#line 1899 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_qst)(a, Builtin::i128(0LL)) == nullptr), u"a\\?0i128==null");
		#line 1900 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_qst)(ADV_USPCS(MinValue, Builtin::i128)(), (Builtin::i128(-1LL))) == nullptr), u"i128.MinValue\\?(-1i128)==null");
		#line 1902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_ne)(a, Builtin::i128(50000000LL)) == Builtin::i128(2000000000000LL)), u"a\\!50000000i128==2000000000000i128");
		#line 1903 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_UFCS(_operator_bsl_mod_eq)(a, Builtin::i128(50000000LL));
		#line 1904 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::i128(2000000000000LL)), u"a==2000000000000i128");
		#line 1905 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = Builtin::i32(10);
		#line 1906 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_mod)(ADV_USPCS(MinValue, Builtin::i128)(), (Builtin::i128(-1LL))) == ADV_USPCS(MinValue, Builtin::i128)()), u"i128.MinValue\\%(-1i128)==i128.MinValue");
		#line 1907 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_UFCS(_operator_bsl_or_eq)(a, Builtin::i128(5LL));
		#line 1908 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::i32(2)), u"a==2");
		#line 1909 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_or)(ADV_USPCS(MinValue, Builtin::i128)(), (Builtin::i128(-1LL))) == ADV_USPCS(MaxValue, Builtin::i128)()), u"i128.MinValue\\|(-1i128)==i128.MaxValue");
		#line 1910 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		{
			#line 1911 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_bsl_mod_qst)(ADV_USPCS(MinValue, Builtin::i128)(), (Builtin::i128(-1LL)));
			#line 1912 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_ASSERT((result == ADV_USPCS(MinValue, Builtin::i128)() && overflowed), u"result==i128.MinValue&&overflowed");
		}
		#line 1915 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = Builtin::ParseInt128("123123123123123000000000000");
		#line 1916 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_bsl)(a, Builtin::i128(5000000000LL)) == Builtin::i128(24624624624624600LL)), u"a\\\\5000000000i128==24624624624624600i128");
		#line 1917 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_bsl)(a, Builtin::i128(6LL)) == Builtin::ParseInt128("20520520520520500000000000")), u"a\\\\6i128==20520520520520500000000000i128");
		#line 1918 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_bsl)(a, Builtin::i128(7LL)) == nullptr), u"a\\\\7i128==null");
		#line 1919 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_bsl_qst)(a, Builtin::i128(0LL)) == nullptr), u"a\\\\?0i128==null");
		#line 1921 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, Builtin::ParseInt128("94689769974534758482")) == Builtin::i32(1300279)), u"a\\94689769974534758482==1300279");
		#line 1922 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_not)(a, Builtin::ParseInt128("94689769974534758482")) == Builtin::i32(1300279)), u"a/~94689769974534758482==1300279");
		#line 1923 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_lt)(a, Builtin::ParseInt128("94689769974534758482")) == Builtin::i32(1300279)), u"a/<94689769974534758482==1300279");
		#line 1924 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_gt)(a, Builtin::ParseInt128("94689769974534758482")) == Builtin::i32(1300280)), u"a/>94689769974534758482==1300280");
		#line 1925 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_not)(a, (Builtin::ParseInt128("-94689769974534758482"))) == Builtin::i32(-1300279)), u"a/~(-94689769974534758482)==-1300279");
		#line 1926 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_lt)(a, (Builtin::ParseInt128("-94689769974534758482"))) == Builtin::i32(-1300280)), u"a/<(-94689769974534758482)==-1300280");
		#line 1927 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_gt)(a, (Builtin::ParseInt128("-94689769974534758482"))) == Builtin::i32(-1300279)), u"a/>(-94689769974534758482)==-1300279");
		#line 1929 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_qst)(a, Builtin::i128(5000000000LL)) == Builtin::i128(0LL)), u"a%?5000000000i128==0i128");
		#line 1930 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_qst)(a, Builtin::i128(0LL)) == nullptr), u"a%?0i128==null");
		#line 1931 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_qst)(ADV_USPCS(MinValue, Builtin::i128)(), (Builtin::i128(-1LL))) == nullptr), u"i128.MinValue%?(-1i128)==null");
		#line 1933 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_ne)(a, Builtin::i128(66000000LL)) == Builtin::i32(24000000)), u"a%!66000000i128==24000000");
		#line 1934 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_UFCS(_operator_mod_mod_eq)(a, Builtin::i128(66000000LL));
		#line 1935 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::i32(24000000)), u"a==24000000");
		#line 1936 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = Builtin::i32(10);
		#line 1937 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_mod)(ADV_USPCS(MinValue, Builtin::i128)(), (Builtin::i128(-1LL))) == Builtin::i32(0)), u"i128.MinValue%%(-1i128)==0");
		#line 1938 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		{
			#line 1939 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_mod_mod_qst)(ADV_USPCS(MinValue, Builtin::i128)(), (Builtin::i128(-1LL)));
			#line 1940 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_ASSERT((result == Builtin::i32(0) && overflowed), u"result==0&&overflowed");
		}
		#line 1943 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_qst)(a) == Builtin::i128(-10LL)), u"-?a==-10i128");
		#line 1944 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_qst)(ADV_USPCS(MinValue, Builtin::i128)()) == nullptr), u"-?i128.MinValue==null");
		#line 1945 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_ne)(a) == Builtin::i32(-10)), u"-!a==-10");
		#line 1946 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_mod)(a) == Builtin::i32(-10)), u"-%a==-10");
		#line 1947 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_mod)(ADV_USPCS(MinValue, Builtin::i128)()) == ADV_USPCS(MinValue, Builtin::i128)()), u"-%i128.MinValue==i128.MinValue");
		#line 1948 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_or)(a) == Builtin::i32(-10)), u"-|a==-10");
		#line 1949 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_or)(ADV_USPCS(MinValue, Builtin::i128)()) == ADV_USPCS(MaxValue, Builtin::i128)()), u"-|i128.MinValue==i128.MaxValue");
		#line 1951 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_bsl)(ADV_USPCS(MaxValue, Builtin::i128)(), Builtin::u32(7U)) == Builtin::ParseInt128("0xFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF")), u"i128.MaxValue>>\\7u==0xFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF_i128");
		#line 1952 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_bsl)(ADV_USPCS(MaxValue, Builtin::i128)(), Builtin::u32(130U)) == Builtin::i32(0)), u"i128.MaxValue>>\\130u==0");
		#line 1953 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_bsl)(ADV_USPCS(MinValue, Builtin::i128)(), Builtin::u32(130U)) == Builtin::i32(-1)), u"i128.MinValue>>\\130u==-1");
		#line 1954 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_bsl)(ADV_USPCS(MaxValue, Builtin::i128)(), Builtin::u32(130U)) == Builtin::i32(0)), u"i128.MaxValue<<\\130u==0");
		#line 1955 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_qst)(ADV_USPCS(MaxValue, Builtin::i128)(), Builtin::i32(4)) == Builtin::ParseInt128("0x7FFFFFFFFFFFFFFFFFFFFFFFFFFFFFF")), u"i128.MaxValue>>?4==0x7FFFFFFFFFFFFFFFFFFFFFFFFFFFFFF_i128");
		#line 1956 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_qst)(ADV_USPCS(MaxValue, Builtin::i128)(), Builtin::i32(130)) == nullptr), u"i128.MaxValue>>?130==null");
		#line 1957 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_qst)(ADV_USPCS(MaxValue, Builtin::i128)(), Builtin::i32(130)) == nullptr), u"i128.MaxValue<<?130==null");
		#line 1958 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_ne)(ADV_USPCS(MaxValue, Builtin::i128)(), Builtin::i32(4)) == Builtin::ParseInt128("0x7FFFFFFFFFFFFFFFFFFFFFFFFFFFFFF")), u"i128.MaxValue>>!4==0x7FFFFFFFFFFFFFFFFFFFFFFFFFFFFFF_i128");
		#line 1959 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_mod)(ADV_USPCS(MaxValue, Builtin::i128)(), Builtin::i32(132)) == Builtin::ParseInt128("0x7FFFFFFFFFFFFFFFFFFFFFFFFFFFFFF")), u"i128.MaxValue>>%132==0x7FFFFFFFFFFFFFFFFFFFFFFFFFFFFFF_i128");
		#line 1960 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = ADV_USPCS(MaxValue, Builtin::i128)();
		#line 1961 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_UFCS(_operator_gt_gt_mod_eq)(a, Builtin::i32(132));
		#line 1962 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_mod)(a, Builtin::i32(132)) == Builtin::ParseInt128("0x7FFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0")), u"a<<%132==0x7FFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0_i128");
		#line 1963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		{
			#line 1964 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_gt_gt_mod_qst)(ADV_USPCS(MaxValue, Builtin::i128)(), Builtin::i32(132));
			#line 1965 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_ASSERT((result == Builtin::ParseInt128("0x7FFFFFFFFFFFFFFFFFFFFFFFFFFFFFF") && overflowed), u"result==0x7FFFFFFFFFFFFFFFFFFFFFFFFFFFFFF_i128&&overflowed");
		}
		#line 1969 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = Builtin::i64(1515151500000000LL);
		#line 1970 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor)(a, Builtin::u32(2U)) == Builtin::ParseInt128("2295684067952250000000000000000")), u"a^^2u==2295684067952250000000000000000");
		#line 1971 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_UFCS(_operator_xor_xor_eq)(a, Builtin::u32(2U));
		#line 1972 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::ParseInt128("2295684067952250000000000000000")), u"a==2295684067952250000000000000000");
		#line 1973 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor)(Builtin::i128(61500000000LL), Builtin::u32(3U)) == Builtin::ParseInt128("232608375000000000000000000000000")), u"61500000000_i128^^3u==232608375000000000000000000000000");
		#line 1974 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_qst)(Builtin::i128(61500000000LL), Builtin::u32(3U)) == Builtin::ParseInt128("232608375000000000000000000000000")), u"61500000000_i128^^?3u==232608375000000000000000000000000");
		#line 1975 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_qst)(Builtin::i128(61500000000LL), Builtin::u32(4U)) == nullptr), u"61500000000_i128^^?4u==null");
		#line 1976 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = Builtin::i128(61500000000LL);
		#line 1977 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_UFCS(_operator_xor_xor_qst_eq)(a, Builtin::u32(3U));
		#line 1978 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::ParseInt128("232608375000000000000000000000000")), u"a==232608375000000000000000000000000");
		#line 1979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_ne)(Builtin::i128(61500000000LL), Builtin::u32(3U)) == Builtin::ParseInt128("232608375000000000000000000000000")), u"61500000000_i128^^!3u==232608375000000000000000000000000");
		#line 1980 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_mod)(Builtin::i128(61500000000LL), Builtin::u32(4U)) == Builtin::ParseInt128("-55642856253004000268496431535609610240")), u"61500000000_i128^^%4u==-55642856253004000268496431535609610240");
		#line 1981 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		a = Builtin::i32(300);
		#line 1982 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_UFCS(_operator_xor_xor_mod_eq)(a, Builtin::u32(2U));
		#line 1983 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((a == Builtin::i32(90000)), u"a==90000");
		#line 1984 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_or)(Builtin::i128(61500000000LL), Builtin::u32(3U)) == Builtin::ParseInt128("232608375000000000000000000000000")), u"61500000000_i128^^|3u==232608375000000000000000000000000");
		#line 1985 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_or)(Builtin::i128(61500000000LL), Builtin::u32(4U)) == ADV_USPCS(MaxValue, Builtin::i128)()), u"61500000000_i128^^|4u==i128.MaxValue");
		#line 1986 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		{
			#line 1987 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_xor_xor_mod_qst)(Builtin::i128(61500000000LL), Builtin::u32(4U));
			#line 1988 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			ADV_ASSERT((result == Builtin::ParseInt128("-55642856253004000268496431535609610240") && overflowed), u"result==-55642856253004000268496431535609610240&&overflowed");
		}
		return true;
	}();
	#endif	
} namespace __extensions { using namespace System;
#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	auto _operator_eq_eq_mul(__extension_Int128_21_i128 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool
	{
		#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		{
			#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			auto __tmp0 = Builtin::Cast<false, __extension_Int128_1452_i128>(obj);
			#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			if ((__tmp0.IsValid())) {
				#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				const auto& obj = *__tmp0;
				
				#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				return __this == obj;
			}
		}
		#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return Builtin::Boolean(false);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	auto _operator_lt_eq_gt_mul(__extension_Int128_90_i128 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32
	{
		#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		{
			#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			auto __tmp0 = Builtin::Cast<false, __extension_Int128_1452_i128>(obj);
			#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			if ((__tmp0.IsValid())) {
				#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				const auto& obj = *__tmp0;
				
				#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				return __this <=> obj;
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
} namespace __extensions { using namespace System;
#line 330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	auto MaxMagnitude(__extension_Int128_306_i128 const& __this LIFETIMEBOUND, __extension_Int128_1452_i128 rhs)  -> const typename __extension_Int128_306_i128
	{
		#line 332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		auto absX = __this; 
		#line 333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (ADV_UPCS(IsNegative)(absX.__ref())) {
			#line 334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			absX = -absX;
			#line 335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			if (ADV_UPCS(IsNegative)(absX.__ref())) {
				#line 336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				return __this;
			}
		}
		#line 340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		auto absY = rhs; 
		#line 341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (ADV_UPCS(IsNegative)(absY.__ref())) {
			#line 342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			absY = -absY;
			#line 343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			if (ADV_UPCS(IsNegative)(absY.__ref())) {
				#line 344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				return rhs;
			}
		}
		#line 348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((absX <=> absY) > 0) {
			#line 349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return __this;
		}
		#line 352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (absX == absY) {
			#line 353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return ADV_UPCS(IsNegative)(__this.__ref()) ? rhs : __this;
		}
		#line 356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return rhs;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	auto MinMagnitude(__extension_Int128_306_i128 const& __this LIFETIMEBOUND, __extension_Int128_1452_i128 rhs)  -> const typename __extension_Int128_306_i128
	{
		#line 363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		auto absX = __this; 
		#line 364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (ADV_UPCS(IsNegative)(absX.__ref())) {
			#line 365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			absX = -absX;
			#line 366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			if (ADV_UPCS(IsNegative)(absX.__ref())) {
				#line 367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				return rhs;
			}
		}
		#line 371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		auto absY = rhs; 
		#line 372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (ADV_UPCS(IsNegative)(absY.__ref())) {
			#line 373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			absY = -absY;
			#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			if (ADV_UPCS(IsNegative)(absY.__ref())) {
				#line 375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				return __this;
			}
		}
		#line 379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((absX <=> absY) < 0) {
			#line 380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return __this;
		}
		#line 383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (absX == absY) {
			#line 384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return ADV_UPCS(IsNegative)(__this.__ref()) ? __this : rhs;
		}
		#line 387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return rhs;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	auto Parse(__extension_Int128_306_i128 const& __this LIFETIMEBOUND, Builtin::Str input)  -> const typename __extension_Int128_306_i128
	{
		#line 394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return Builtin::i64(0LL);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	auto TryParse(__extension_Int128_306_i128 const& __this LIFETIMEBOUND, Builtin::Str input) noexcept -> const Builtin::Nullable<__extension_Int128_1452_i128>
	{
		#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return Builtin::i64(0LL);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	auto CopySign(__extension_Int128_422_i128 const& __this LIFETIMEBOUND, __extension_Int128_1452_i128 sign)  -> const typename __extension_Int128_422_i128
	{
		#line 438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		auto absValue = __this; 
		#line 439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (ADV_UPCS(IsNegative)(absValue.__ref())) {
			#line 440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			absValue = -absValue;
		}
		#line 443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if ((sign <=> Builtin::i32(0)) >= 0) {
			#line 444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			if (ADV_UPCS(IsNegative)(absValue.__ref())) {
				#line 445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				Builtin::Throw(Builtin::IntegerOverflowException{});
			}
			#line 448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return absValue;
		}
		#line 451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return -absValue;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 584 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	auto Log(__extension_Int128_472_i128 const& __this LIFETIMEBOUND, __extension_Int128_1452_i128 base)  -> const typename __extension_Int128_472_i128
	{
		#line 586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (const auto result = ADV_UFCS(CheckedLog)(__this.__ref(), base)) {
			{
				#line 586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
				return result;
			}
		}
		#line 589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 1289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
	auto getCheckedIsqrt(__extension_Int128_1273_i128 const& __this ) -> const Builtin::Nullable<__extension_Int128_1452_i128>
	{
		#line 1290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		if (ADV_UPCS(IsNegative)(__this.__ref())) {
			#line 1291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
			return nullptr;
		}
		#line 1293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		constexpr auto MAX_RESULT = Builtin::Cast<true, __extension_Int128_1452_i128>(ADV_USFCS((Math), Isqrt128)(Builtin::Cast<true, Builtin::u128>(ADV_USPCS(MaxValue, __extension_Int128_1452_i128)())));
		#line 1294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		const auto result = Builtin::Cast<true, __extension_Int128_1452_i128>(ADV_USFCS((Math), Isqrt128)(Builtin::Cast<true, Builtin::u128>(__this))); 
		#line 1295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ASSUME((result <=> Builtin::i32(0)) >= 0);
		#line 1296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		ASSUME((result <=> MAX_RESULT) <= 0);
		#line 1297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int128.ast"
		return result;
	}
	} namespace System{

}