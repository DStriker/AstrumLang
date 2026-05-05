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
static_assert(ADV_UFCS_NONLOCAL(_operator_gt_gt_mod)(ADV_USPCS(One, Builtin::i8)(), Builtin::i32(3)) == Builtin::i32(0b00100000), "i8.One >>% 3 == 0b0010_0000");
static_assert(ADV_USPCS(IsSigned, Builtin::i8)(), "i8 must be signed");
static_assert(ADV_USPCS(MaxDigitCount, Builtin::i8)() == Builtin::i32(3), "i8 max digit count must be 3");
static_assert(Builtin::TypeIs<Builtin::i8, IComparable<Builtin::i8>>(), "i8 should implement IComparable<i8>");
static_assert(Builtin::TypeIs<Builtin::i8, IEquatable<Builtin::i8>>(), "i8 should implement IEquatable<i8>");
static_assert(Builtin::TypeIs<Builtin::i8, ISelfComparable>(), "i8 should implement ISelfComparable");
static_assert(Builtin::TypeIs<Builtin::i8, ISelfEquatable>(), "i8 should implement ISelfEquatable");
static_assert(Builtin::TypeIs<Builtin::i8, IAdditionOperators<Builtin::i8, Builtin::i8>>(), "i8 should implement IAdditionOperators<i8, i8>");
static_assert(Builtin::TypeIs<Builtin::i8, ISubtractionOperators<Builtin::i8, Builtin::i8>>(), "i8 should implement ISubtractionOperators<i8, i8>");
static_assert(Builtin::TypeIs<Builtin::i8, IMultiplyOperators<Builtin::i8, Builtin::i8>>(), "i8 should implement IMultiplyOperators<i8, i8>");
static_assert(Builtin::TypeIs<Builtin::i8, IDivisionOperators<Builtin::i8, Builtin::i8>>(), "i8 should implement IDivisionOperators<i8, i8>");
static_assert(Builtin::TypeIs<Builtin::i8, IModulusOperators<Builtin::i8, Builtin::i8>>(), "i8 should implement IModulusOperators<i8, i8>");
static_assert(Builtin::TypeIs<Builtin::i8, IBitwiseOperators<Builtin::i8, Builtin::i8>>(), "i8 should implement IBitwiseOperators<i8, i8>");
static_assert(Builtin::TypeIs<Builtin::i8, IShiftOperators<Builtin::i8, Builtin::i8>>(), "i8 should implement IShiftOperators<i8, i8>");
static_assert(Builtin::TypeIs<Builtin::i8, IUnaryPlusOperators<Builtin::i8>>(), "i8 should implement IUnaryPlusOperators<i8>");
static_assert(Builtin::TypeIs<Builtin::i8, IUnaryNegationOperators<Builtin::i8>>(), "i8 should implement IUnaryNegationOperators<i8>");
static_assert(Builtin::TypeIs<Builtin::i8, IIncrementOperators<Builtin::i8>>(), "i8 should implement IIncrementOperators<i8>");
static_assert(Builtin::TypeIs<Builtin::i8, IDecrementOperators<Builtin::i8>>(), "i8 should implement IDecrementOperators<i8>");
#ifdef ADV_UNITTEST
	#line 342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	static bool __Test_298d83b2a01bf150 = [](){
		#line 344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::i8 a = Builtin::i8(5); 
		#line 347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a + Builtin::i8(10) == Builtin::i8((signed char)15)), u"a+10i8==15");
		#line 348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a + Builtin::u8(10U) == Builtin::i8((signed char)15)), u"a+10u8==15");
		#line 349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a + Builtin::i16(10) == Builtin::i8((signed char)15)), u"a+10i16==15");
		#line 350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a + Builtin::u16(10U) == Builtin::i8((signed char)15)), u"a+10u16==15");
		#line 351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a + Builtin::i32(10) == Builtin::i8((signed char)15)), u"a+10i32==15");
		#line 352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a + Builtin::u32(10U) == Builtin::i8((signed char)15)), u"a+10u32==15");
		#line 353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a + Builtin::i64(10LL) == Builtin::i8((signed char)15)), u"a+10i64==15");
		#line 354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a + Builtin::u64(10ULL) == Builtin::i8((signed char)15)), u"a+10u64==15");
		#line 355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a + Builtin::i128(10LL) == Builtin::i8((signed char)15)), u"a+10i128==15");
		#line 356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a + Builtin::u128(10ULL) == Builtin::i8((signed char)15)), u"a+10u128==15");
		#line 359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a - Builtin::i8((signed char)12) == Builtin::i8((signed char)-7)), u"a-12==-7");
		#line 360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a * Builtin::i8((signed char)2) == Builtin::i8((signed char)10)), u"a*2==10");
		#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a / Builtin::i8((signed char)2) == Builtin::i8((signed char)2)), u"a/2==2");
		#line 362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a % Builtin::i8((signed char)2) == Builtin::i8((signed char)1)), u"a%2==1");
		#line 363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT(((a & Builtin::i8((signed char)1)) == Builtin::i8((signed char)1)), u"(a&1)==1");
		#line 364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT(((a | Builtin::i8((signed char)1)) == Builtin::i8((signed char)5)), u"(a|1)==5");
		#line 365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT(((a ^ Builtin::i8((signed char)1)) == Builtin::i8((signed char)4)), u"(a^1)==4");
		#line 366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a << Builtin::i8((signed char)1) == Builtin::i8((signed char)10)), u"a<<1==10");
		#line 367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a >> Builtin::i8((signed char)1) == Builtin::i8((signed char)2)), u"a>>1==2");
		#line 368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a = Builtin::i8((signed char)-5);
		#line 369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_UFCS(_operator_gt_gt_gt_eq)(a, Builtin::i8((signed char)2));
		#line 370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == Builtin::i8((signed char)0b00111110)), u"a==0b0011_1110");
		#line 371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_gt)(a, Builtin::i8((signed char)2)) == Builtin::i8((signed char)0b00001111)), u"a>>>2==0b0000_1111");
		#line 372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_gt)(a, Builtin::i8((signed char)7)) == Builtin::i8((signed char)0)), u"a>>>7==0");
		#line 375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a = Builtin::i8((signed char)5);
		#line 376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == Builtin::i8((signed char)5)), u"a==5");
		#line 377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a != Builtin::i8((signed char)6)), u"a!=6");
		#line 378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT(((a <=> Builtin::i8((signed char)6)) < 0), u"a<6");
		#line 379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT(((a <=> Builtin::i8((signed char)5)) <= 0), u"a<=5");
		#line 380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT(((a <=> Builtin::i8((signed char)4)) > 0), u"a>4");
		#line 381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT(((a <=> Builtin::i8((signed char)5)) >= 0), u"a>=5");
		#line 384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a = Builtin::i8(5);
		#line 385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a++;
		#line 386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a--;
		#line 387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a += Builtin::i8((signed char)5);
		#line 388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a -= Builtin::i8((signed char)5);
		#line 389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a *= Builtin::i8((signed char)2);
		#line 390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a /= Builtin::i8((signed char)2);
		#line 391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a %= Builtin::i8((signed char)1);
		#line 392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a &= Builtin::i8((signed char)1);
		#line 393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a |= Builtin::i8((signed char)1);
		#line 394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a ^= Builtin::i8((signed char)1);
		#line 395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a <<= Builtin::i8((signed char)1);
		#line 396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a >>= Builtin::i8((signed char)1);
		#line 397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a == Builtin::i8((signed char)0)), u"a==0");
		#line 398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		a = Builtin::i8(10);
		#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_not)(a) == Builtin::i8((signed char)-11)), u"~a==-11");
		#line 402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::i8 b = Builtin::i8(5); 
		#line 403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::Nullable<Builtin::i8> c = nullptr; 
		#line 404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::Nullable<Builtin::i8> d = Builtin::i8(5); 
		#line 405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((a != b), u"a!=b");
		#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((b != c), u"b!=c");
		#line 407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((!Builtin::IdentityEquals(b, c)), u"b!==c");
		#line 408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT(((b <=> c) > 0), u"b>c");
		#line 409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((c != b), u"c!=b");
		#line 410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((c == nullptr), u"c==null");
		#line 411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((d != nullptr), u"d!=null");
		#line 412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT(((c <=> d) < 0), u"c<d");
		#line 413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((b == d), u"b==d");
		#line 414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((Builtin::IdentityEquals(b, d)), u"b===d");
		#line 417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		Builtin::Nullable<Builtin::ObjectRef> o = c; 
		#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		o = d;
		#line 419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_ne_eq_qst)(b, o)), u"b!=?o");
		#line 420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		IComparable<Builtin::i8> icomp = a; 
		#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT(((icomp <=> b) > 0), u"icomp>b");
		#line 424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(a.__ref()) == Builtin::i32(10)), u"a.HashCode==10");
		#line 425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(a) == Builtin::i32(10)), u"#a==10");
		#line 426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		b = Builtin::i8(-6);
		#line 427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(b) == Builtin::i128::Parse("18446744073709551610")), u"#b==18446744073709551610");
		#line 429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(ToInt32)(b.__ref()) == Builtin::i8((signed char)-6)), u"b.ToInt32()==-6");
		#line 430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(NarrowToUInt64)(b.__ref()) == Builtin::i128::Parse("18446744073709551610")), u"b.NarrowToUInt64()==18446744073709551610");
		#line 433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(Abs)(b.__ref()) == Builtin::i8((signed char)6)), u"b.Abs==6");
		#line 434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(IsFinite)(b.__ref())), u"b.IsFinite");
		#line 435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(IsInteger)(b.__ref())), u"b.IsInteger");
		#line 436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(IsNegative)(b.__ref())), u"b.IsNegative");
		#line 437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(IsPositive)(a.__ref())), u"a.IsPositive");
		#line 438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((!ADV_UPCS(IsPositive)(b.__ref())), u"!b.IsPositive");
		#line 439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(IsCanonical)(b.__ref())), u"b.IsCanonical");
		#line 440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((!ADV_UPCS(IsComplexNumber)(b.__ref())), u"!b.IsComplexNumber");
		#line 441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(IsRealNumber)(b.__ref())), u"b.IsRealNumber");
		#line 442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((!ADV_UPCS(IsImaginaryNumber)(b.__ref())), u"!b.IsImaginaryNumber");
		#line 443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(IsEvenInteger)(b.__ref())), u"b.IsEvenInteger");
		#line 444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((!ADV_UPCS(IsOddInteger)(b.__ref())), u"!b.IsOddInteger");
		#line 445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((!ADV_UPCS(IsInfinity)(b.__ref())), u"!b.IsInfinity");
		#line 446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((!ADV_UPCS(IsPositiveInfinity)(b.__ref())), u"!b.IsPositiveInfinity");
		#line 447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((!ADV_UPCS(IsNegativeInfinity)(b.__ref())), u"!b.IsNegativeInfinity");
		#line 448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((!ADV_UPCS(IsNaN)(b.__ref())), u"!b.IsNaN");
		#line 449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(IsNormal)(b.__ref())), u"b.IsNormal");
		#line 450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((!ADV_UPCS(IsSubnormal)(b.__ref())), u"!b.IsSubnormal");
		#line 451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((!ADV_UPCS(IsZero)(b.__ref())), u"!b.IsZero");
		#line 454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(Sign)(a.__ref()) == +Builtin::i8((signed char)1)), u"a.Sign==+1");
		#line 455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(Sign)(b.__ref()) == Builtin::i8((signed char)-1)), u"b.Sign==-1");
		#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(CopySign)(a.__ref(), b) == Builtin::i8((signed char)-10)), u"a.CopySign(b)==-10");
		#line 457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(Max)(a.__ref(), b) == a), u"a.Max(b)==a");
		#line 458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(Min)(a.__ref(), b) == b), u"a.Min(b)==b");
		#line 459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(MaxNumber)(a.__ref(), b) == a), u"a.MaxNumber(b)==a");
		#line 460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(MinNumber)(a.__ref(), b) == b), u"a.MinNumber(b)==b");
		#line 461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(Clamp)(b.__ref(), Builtin::i8((signed char)-5), +Builtin::i8((signed char)5)) == Builtin::i8((signed char)-5)), u"b.Clamp(-5,+5)==-5");
		#line 464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_mod)(Builtin::i8(0b1010), Builtin::i8((signed char)3)) == Builtin::i8((signed char)0b01010000)), u"0b1010_i8<<%3==0b0101_0000");
		#line 465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_mod)(Builtin::i8(0b1010), Builtin::i8((signed char)5)) == Builtin::i8((signed char)0b01000001)), u"0b1010_i8<<%5==0b0100_0001");
		#line 466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_mod)(Builtin::i8(0b1010), Builtin::i8((signed char)3)) == Builtin::i8((signed char)0b01000001)), u"0b1010_i8>>%3==0b0100_0001");
		#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_mod)(Builtin::i8(0b1010), Builtin::i8((signed char)5)) == Builtin::i8((signed char)0b01010000)), u"0b1010_i8>>%5==0b0101_0000");
		#line 469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(MultiplyBy10)(a.__ref()) == Builtin::i8((signed char)100)), u"a.MultiplyBy10==100");
		#line 470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		ADV_ASSERT((ADV_UPCS(MultiplyBy16)(a.__ref()) == Builtin::i32(160) + Builtin::i32(2) * ADV_USPCS(MinValue, Builtin::i8)()), u"a.MultiplyBy16==160+2i32*i8.MinValue");
		return true;
	}();
	#endif	
} namespace __extensions { using namespace System;
#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	auto _operator_eq_eq_qst(__extension_Int8_17_i8 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool
	{
		#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		{
			#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			auto __tmp0 = Builtin::Cast<false, __extension_Int8_308_i8>(obj);
			#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			if ((__tmp0.IsValid())) {
				#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				const auto& obj = *__tmp0;
				
				#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				return __this == obj;
			}
		}
		#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return false;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	auto _operator_lt_eq_gt_qst(__extension_Int8_49_i8 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32
	{
		#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		{
			#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			auto __tmp0 = Builtin::Cast<false, __extension_Int8_308_i8>(obj);
			#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			if ((__tmp0.IsValid())) {
				#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				const auto& obj = *__tmp0;
				
				#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				return __this <=> obj;
			}
		}
		#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		{
			#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			if ((!Builtin::Is(obj, nullptr))) {
				#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				auto __tmp0 = *obj; const auto& obj = __tmp0;
				
				#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				Builtin::Throw(Builtin::InvalidOperationException{});
			}
		}
		#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::i8((signed char)1);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	auto MaxMagnitude(__extension_Int8_126_i8 const& __this LIFETIMEBOUND, __extension_Int8_308_i8 rhs)  -> const typename __extension_Int8_126_i8
	{
		#line 152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		auto absX = __this; 
		#line 153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((absX <=> Builtin::i32(0)) < 0) {
			#line 154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			absX = UnsafeCast<__extension_Int8_308_i8>(-Builtin::i32{absX});
			#line 155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			if ((absX <=> Builtin::i32(0)) < 0) {
				#line 156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				return __this;
			}
		}
		#line 160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		auto absY = rhs; 
		#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((absY <=> Builtin::i32(0)) < 0) {
			#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			absY = UnsafeCast<__extension_Int8_308_i8>(-Builtin::i32{absY});
			#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			if ((absY <=> Builtin::i32(0)) < 0) {
				#line 164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				return rhs;
			}
		}
		#line 168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((absX <=> absY) > 0) {
			#line 169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return __this;
		}
		#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (absX == absY) {
			#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return ADV_UPCS(IsNegative)(__this.__ref()) ? rhs : __this;
		}
		#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return rhs;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	auto MinMagnitude(__extension_Int8_126_i8 const& __this LIFETIMEBOUND, __extension_Int8_308_i8 rhs)  -> const typename __extension_Int8_126_i8
	{
		#line 183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		auto absX = __this; 
		#line 184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((absX <=> Builtin::i32(0)) < 0) {
			#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			absX = UnsafeCast<__extension_Int8_308_i8>(-Builtin::i32{absX});
			#line 186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			if ((absX <=> Builtin::i32(0)) < 0) {
				#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				return rhs;
			}
		}
		#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		auto absY = rhs; 
		#line 192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((absY <=> Builtin::i32(0)) < 0) {
			#line 193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			absY = UnsafeCast<__extension_Int8_308_i8>(-Builtin::i32{absY});
			#line 194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			if ((absY <=> Builtin::i32(0)) < 0) {
				#line 195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				return __this;
			}
		}
		#line 199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((absX <=> absY) < 0) {
			#line 200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return __this;
		}
		#line 203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if (absX == absY) {
			#line 204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return ADV_UPCS(IsNegative)(__this.__ref()) ? __this : rhs;
		}
		#line 207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return rhs;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	auto Parse(__extension_Int8_126_i8 const& __this LIFETIMEBOUND, Builtin::Str input)  -> const typename __extension_Int8_126_i8
	{
		#line 214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::i8(0);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	auto TryParse(__extension_Int8_126_i8 const& __this LIFETIMEBOUND, Builtin::Str input)  -> const Builtin::Nullable<__extension_Int8_308_i8>
	{
		#line 219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return Builtin::i8(0);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
	auto CopySign(__extension_Int8_242_i8 const& __this LIFETIMEBOUND, __extension_Int8_308_i8 sign)  -> const typename __extension_Int8_242_i8
	{
		#line 247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		auto absValue = __this; 
		#line 248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((absValue <=> Builtin::i32(0)) < 0) {
			#line 249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			absValue = UnsafeCast<__extension_Int8_308_i8>(-Builtin::i32{absValue});
		}
		#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		if ((sign <=> Builtin::i32(0)) >= 0) {
			#line 253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			if ((absValue <=> Builtin::i32(0)) < 0) {
				#line 254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
				Builtin::Throw(Builtin::IntegerOverflowException{});
			}
			#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
			return absValue;
		}
		#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Int8.ast"
		return UnsafeCast<__extension_Int8_308_i8>(-Builtin::i32{absValue});
	}
	
} namespace System{

}