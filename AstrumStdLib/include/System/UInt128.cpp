#include "Math.h"
#include "UInt128.h"

namespace System {
//###############################################################################
//# Global type aliases
//###############################################################################
//###############################################################################
//# Type definitions
//###############################################################################

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	















#line 1269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	static_assert(Builtin::usize(sizeof(Builtin::u128)) == Builtin::i32(16), "u128 should be 16 bytes");
#line 1270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	static_assert(ADV_USPCS(MinValue, Builtin::u128)() == Builtin::i32(0), "u128.Min should be 0");
#line 1271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	static_assert(ADV_USPCS(MaxValue, Builtin::u128)() == Builtin::ParseUInt128("0xFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"), "u128.Max should be 0xFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFu");
#line 1272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	static_assert(!ADV_USPCS(IsSigned, Builtin::u128)(), "u128 must be unsigned");
#line 1273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	static_assert(ADV_USPCS(MaxDigitCount, Builtin::u128)() == Builtin::i32(39), "u128 max digit count must be 39");
#line 1274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	static_assert(ADV_UFCS_NONLOCAL(_operator_xor_xor)(Builtin::u128(2ULL), Builtin::u32(127U)) == Builtin::ParseUInt128("170141183460469231731687303715884105728"), "2u128 ^^ 127u == 170141183460469231731687303715884105728_u128");
#line 1275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	static_assert(Builtin::TypeIs<Builtin::u128, IComparable<Builtin::u128>>(), "u128 should implement IComparable<u128>");
#line 1276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	static_assert(Builtin::TypeIs<Builtin::u128, IEquatable<Builtin::u128>>(), "u128 should implement IEquatable<u128>");
#line 1277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	static_assert(Builtin::TypeIs<Builtin::u128, ISelfComparable>(), "u128 should implement ISelfComparable");
#line 1278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	static_assert(Builtin::TypeIs<Builtin::u128, ISelfEquatable>(), "u128 should implement ISelfEquatable");
#line 1279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	static_assert(Builtin::TypeIs<Builtin::u128, IAdditionOperators<Builtin::u128, Builtin::u128>>(), "u128 should implement IAdditionOperators<u128, u128>");
#line 1280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	static_assert(Builtin::TypeIs<Builtin::u128, ISubtractionOperators<Builtin::u128, Builtin::u128>>(), "u128 should implement ISubtractionOperators<u128, u128>");
#line 1281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	static_assert(Builtin::TypeIs<Builtin::u128, IMultiplyOperators<Builtin::u128, Builtin::u128>>(), "u128 should implement IMultiplyOperators<u128, u128>");
#line 1282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	static_assert(Builtin::TypeIs<Builtin::u128, IDivisionOperators<Builtin::u128, Builtin::f64>>(), "u128 should implement IDivisionOperators<u128, f64>");
#line 1283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	static_assert(Builtin::TypeIs<Builtin::u128, IIntDivOperators<Builtin::u128, Builtin::u128>>(), "u128 should implement IIntDivOperators<u128, u128>");
#line 1284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	static_assert(Builtin::TypeIs<Builtin::u128, IModulusOperators<Builtin::u128, Builtin::u128>>(), "u128 should implement IModulusOperators<u128, u128>");
#line 1285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	static_assert(Builtin::TypeIs<Builtin::u128, IBitwiseOperators<Builtin::u128, Builtin::u128>>(), "u128 should implement IBitwiseOperators<u128, u128>");
#line 1286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	static_assert(Builtin::TypeIs<Builtin::u128, IShiftOperators<Builtin::i32, Builtin::u128>>(), "u128 should implement IShiftOperators<i32, u128>");
#line 1287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	static_assert(Builtin::TypeIs<Builtin::u128, IUnaryPlusOperators<Builtin::u128>>(), "u128 should implement IUnaryPlusOperators<u128>");
#line 1288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	static_assert(Builtin::TypeIs<Builtin::u128, IUnaryNegationOperators<Builtin::u128>>(), "u128 should implement IUnaryNegationOperators<u128>");
#line 1289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	static_assert(Builtin::TypeIs<Builtin::u128, IIncrementOperators<Builtin::u128>>(), "u128 should implement IIncrementOperators<u128>");
#line 1290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	static_assert(Builtin::TypeIs<Builtin::u128, IDecrementOperators<Builtin::u128>>(), "u128 should implement IDecrementOperators<u128>");
#line 1291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	static_assert(ADV_UFCS_NONLOCAL(_operator_add_mod)(ADV_USPCS(MaxValue, Builtin::u128)(), Builtin::u128(1ULL)) == ADV_USPCS(MinValue, Builtin::u128)(), "u128.MaxValue +% 1u128 == u128.MinValue");
#line 1292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	static_assert(ADV_UFCS_NONLOCAL(_operator_add_or)(ADV_USPCS(MaxValue, Builtin::u128)(), Builtin::u128(1ULL)) == ADV_USPCS(MaxValue, Builtin::u128)(), "u128.MaxValue +| 1u128 == u128.MaxValue");
#ifdef ADV_UNITTEST
	#line 1294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	static bool $Test_89d751813d6ab908 = [](){
		#line 1296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::u128 a = Builtin::u32(5U); 
		#line 1299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a + Builtin::i8(10) == Builtin::i32(15)), "a+10i8==15");
		#line 1300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a + Builtin::u8(10U) == Builtin::i32(15)), "a+10u8==15");
		#line 1301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a + Builtin::i16(10) == Builtin::i32(15)), "a+10i16==15");
		#line 1302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a + Builtin::u128(10ULL) == Builtin::i32(15)), "a+10u128==15");
		#line 1303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a + Builtin::i32(10) == Builtin::i32(15)), "a+10i32==15");
		#line 1304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a + Builtin::u128(10ULL) == Builtin::i32(15)), "a+10u128==15");
		#line 1305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a + Builtin::i64(10LL) == Builtin::i32(15)), "a+10i64==15");
		#line 1306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a + Builtin::u128(10ULL) == Builtin::i32(15)), "a+10u128==15");
		#line 1307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a + Builtin::i128(10LL) == Builtin::i32(15)), "a+10i128==15");
		#line 1308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a + Builtin::u128(10ULL) == Builtin::i32(15)), "a+10u128==15");
		#line 1311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a - Builtin::i32(2) == Builtin::i32(3)), "a-2==3");
		#line 1312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a * Builtin::i32(2) == Builtin::i32(10)), "a*2==10");
		#line 1313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, Builtin::i32(2)) == Builtin::i32(2)), "a\\2==2");
		#line 1314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a % Builtin::i32(2) == Builtin::i32(1)), "a%2==1");
		#line 1315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT(((a & Builtin::i32(1)) == Builtin::i32(1)), "(a&1)==1");
		#line 1316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT(((a | Builtin::i32(1)) == Builtin::i32(5)), "(a|1)==5");
		#line 1317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT(((a ^ Builtin::i32(1)) == Builtin::i32(4)), "(a^1)==4");
		#line 1318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a << Builtin::i32(1) == Builtin::i32(10)), "a<<1==10");
		#line 1319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a >> Builtin::i32(1) == Builtin::i32(2)), "a>>1==2");
		#line 1320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a = Builtin::u32(0b11111011U);
		#line 1321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_UFCS(_operator_gt_gt_gt_eq)(a, Builtin::i32(2));
		#line 1322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a == Builtin::i32(0b00111110)), "a==0b0011_1110");
		#line 1323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_gt)(a, Builtin::i32(2)) == Builtin::i32(0b00001111)), "a>>>2==0b0000_1111");
		#line 1324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_gt)(a, Builtin::i32(7)) == Builtin::i32(0)), "a>>>7==0");
		#line 1327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a = Builtin::u32(5U);
		#line 1328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a == Builtin::i32(5)), "a==5");
		#line 1329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a != Builtin::i32(6)), "a!=6");
		#line 1330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT(((a <=> Builtin::i32(6)) < 0), "a<6");
		#line 1331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT(((a <=> Builtin::i32(5)) <= 0), "a<=5");
		#line 1332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT(((a <=> Builtin::i32(4)) > 0), "a>4");
		#line 1333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT(((a <=> Builtin::i32(5)) >= 0), "a>=5");
		#line 1336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a = Builtin::u128(5ULL);
		#line 1337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a++;
		#line 1338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a--;
		#line 1339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a += Builtin::i32(5);
		#line 1340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a -= Builtin::i32(5);
		#line 1341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a *= Builtin::i32(2);
		#line 1342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_UFCS(_operator_bsl_eq)(a, Builtin::i32(2));
		#line 1343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a %= Builtin::i32(1);
		#line 1344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a &= Builtin::i32(1);
		#line 1345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a |= Builtin::i32(1);
		#line 1346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a ^= Builtin::i32(1);
		#line 1347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a <<= Builtin::i32(1);
		#line 1348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a >>= Builtin::i32(1);
		#line 1349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a == Builtin::i32(0)), "a==0");
		#line 1350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a = Builtin::u128(10ULL);
		#line 1351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_not)(a) == Builtin::ParseUInt128("0xFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF5")), "~a==0xFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF5u128");
		#line 1354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::u128 b = Builtin::u128(5ULL); 
		#line 1355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::Nullable<Builtin::u128> c = nullptr; 
		#line 1356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::Nullable<Builtin::u128> d = Builtin::u128(5ULL); 
		#line 1357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a != b), "a!=b");
		#line 1358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((b != c), "b!=c");
		#line 1359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((!Builtin::IdentityEquals(b, c)), "b!==c");
		#line 1360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT(((b <=> c) > 0), "b>c");
		#line 1361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((c != b), "c!=b");
		#line 1362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((c == nullptr), "c==null");
		#line 1363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((d != nullptr), "d!=null");
		#line 1364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT(((c <=> d) < 0), "c<d");
		#line 1365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((b == d), "b==d");
		#line 1369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::Nullable<Builtin::ObjectRef> o = c; 
		#line 1370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		o = d;
		#line 1371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_ne_eq_mul)(b, o)), "b!=*o");
		#line 1372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		IComparable<Builtin::u128> icomp = a; 
		#line 1373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT(((icomp <=> b) > 0), "icomp>b");
		#line 1376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a = Builtin::u128(200ULL);
		#line 1380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a = Builtin::u128(35000ULL);
		#line 1381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(ToUInt32)(a.$ref()) == Builtin::i32(35000)), "a.ToUInt32()==35000");
		#line 1382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(NarrowToInt16)(a.$ref()) == Builtin::i32(-30536)), "a.NarrowToInt16()==-30536");
		#line 1385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a = Builtin::u128(10ULL);
		#line 1386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		b = Builtin::u128(6ULL);
		#line 1387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(Abs)(b.$ref()) == Builtin::i32(6)), "b.Abs==6");
		#line 1388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(IsFinite)(b.$ref())), "b.IsFinite");
		#line 1389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(IsInteger)(b.$ref())), "b.IsInteger");
		#line 1390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((!ADV_UPCS(IsNegative)(b.$ref())), "!b.IsNegative");
		#line 1391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(IsPositive)(a.$ref())), "a.IsPositive");
		#line 1392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(IsCanonical)(b.$ref())), "b.IsCanonical");
		#line 1393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((!ADV_UPCS(IsComplexNumber)(b.$ref())), "!b.IsComplexNumber");
		#line 1394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(IsRealNumber)(b.$ref())), "b.IsRealNumber");
		#line 1395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((!ADV_UPCS(IsImaginaryNumber)(b.$ref())), "!b.IsImaginaryNumber");
		#line 1396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(IsEvenInteger)(b.$ref())), "b.IsEvenInteger");
		#line 1397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((!ADV_UPCS(IsOddInteger)(b.$ref())), "!b.IsOddInteger");
		#line 1398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((!ADV_UPCS(IsInfinity)(b.$ref())), "!b.IsInfinity");
		#line 1399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((!ADV_UPCS(IsPositiveInfinity)(b.$ref())), "!b.IsPositiveInfinity");
		#line 1400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((!ADV_UPCS(IsNegativeInfinity)(b.$ref())), "!b.IsNegativeInfinity");
		#line 1401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((!ADV_UPCS(IsNaN)(b.$ref())), "!b.IsNaN");
		#line 1402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(IsNormal)(b.$ref())), "b.IsNormal");
		#line 1403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((!ADV_UPCS(IsSubnormal)(b.$ref())), "!b.IsSubnormal");
		#line 1404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((!ADV_UPCS(IsZero)(b.$ref())), "!b.IsZero");
		#line 1407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(Sign)(a.$ref()) == +Builtin::i32(1)), "a.Sign==+1");
		#line 1408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(CopySign)(a.$ref(), b) == a), "a.CopySign(b)==a");
		#line 1409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(Max)(a.$ref(), b) == a), "a.Max(b)==a");
		#line 1410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(Min)(a.$ref(), b) == b), "a.Min(b)==b");
		#line 1411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(MaxNumber)(a.$ref(), b) == a), "a.MaxNumber(b)==a");
		#line 1412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(MinNumber)(a.$ref(), b) == b), "a.MinNumber(b)==b");
		#line 1413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(Clamp)(b.$ref(), Builtin::u128(1ULL), Builtin::u128(5ULL)) == Builtin::i32(5)), "b.Clamp(1u128,5u128)==5");
		#line 1416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(IsPow2)(Builtin::ParseUInt128("170141183460469231731687303715884105728").$ref())), "170141183460469231731687303715884105728u128.IsPow2");
		#line 1417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((!ADV_UPCS(IsPow2)(Builtin::ParseUInt128("170141183460469231731687303715884105726").$ref())), "!170141183460469231731687303715884105726u128.IsPow2");
		#line 1418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::u128(2ULL).$ref()) == Builtin::i32(1)), "2u128.Log2==1");
		#line 1419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::u128(16ULL).$ref()) == Builtin::i32(4)), "16u128.Log2==4");
		#line 1420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::u128(64ULL).$ref()) == Builtin::i32(6)), "64u128.Log2==6");
		#line 1421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::ParseUInt128("180141183460469231731687303715884105728").$ref()) == Builtin::i32(127)), "180141183460469231731687303715884105728u128.Log2==127");
		#line 1422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::u128(2ULL).$ref()) == Builtin::i32(1)), "2u128.Log2Ceiling==1");
		#line 1423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::u128(16ULL).$ref()) == Builtin::i32(4)), "16u128.Log2Ceiling==4");
		#line 1424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::u128(65ULL).$ref()) == Builtin::i32(7)), "65u128.Log2Ceiling==7");
		#line 1425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::ParseUInt128("180141183460469231731687303715884105728").$ref()) == Builtin::i32(128)), "180141183460469231731687303715884105728u128.Log2Ceiling==128");
		#line 1426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(CheckedLog2)(Builtin::u128(0ULL).$ref()) == nullptr), "0u128.CheckedLog2==null");
		#line 1427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(Builtin::u128(5ULL).$ref()) == Builtin::i32(0)), "5u128.Log10==0");
		#line 1428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(a.$ref()) == Builtin::i32(1)), "a.Log10==1");
		#line 1429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(ADV_USPCS(MaxValue, Builtin::u128)().$ref()) == Builtin::i32(38)), "u128.MaxValue.Log10==38");
		#line 1430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(Log)(Builtin::u128(150ULL).$ref(), Builtin::u128(5ULL)) == Builtin::i32(3)), "150u128.Log(5u128)==3");
		#line 1431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(Midpoint)(a.$ref(), Builtin::u128(30ULL)) == Builtin::i32(20)), "a.Midpoint(30u128)==20");
		#line 1432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(Midpoint)(Builtin::ParseUInt128("100000000000000000000000000000000000000").$ref(), Builtin::ParseUInt128("300000000000000000000000000000000000000")) == Builtin::ParseUInt128("200000000000000000000000000000000000000")), "100000000000000000000000000000000000000u128.Midpoint(300000000000000000000000000000000000000u128)==200000000000000000000000000000000000000u128");
		#line 1433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)(a.$ref(), Builtin::u128(10ULL)) == Builtin::i32(10)), "a.NextMultipleOf(10u128)==10");
		#line 1434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)(Builtin::u128(11ULL).$ref(), Builtin::u128(10ULL)) == Builtin::i32(20)), "11u128.NextMultipleOf(10u128)==20");
		#line 1435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)(Builtin::ParseUInt128("200000000000000000000000000000000000000").$ref(), Builtin::u128(85035530000000ULL)) == Builtin::ParseUInt128("200000000000000000000000022569640000000")), "200000000000000000000000000000000000000u128.NextMultipleOf(85035530000000u128)==200000000000000000000000022569640000000u128");
		#line 1436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(ByteCount)(a.$ref()) == Builtin::i32(16)), "a.ByteCount==16");
		#line 1437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(ByteSwapped)(Builtin::ParseUInt128("0xabcdef12abcdef12abcdef12abcdef12").$ref()) == Builtin::ParseUInt128("0x12efcdab12efcdab12efcdab12efcdab")), "0xabcdef12abcdef12abcdef12abcdef12_u128.ByteSwapped==0x12efcdab12efcdab12efcdab12efcdab_u128");
		#line 1438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_not)(Builtin::u128(0b1010ULL), Builtin::i32(3)) == Builtin::i32(0b01010000)), "0b1010_u128<<~3==0b0101_0000");
		#line 1439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_not)(Builtin::u128(0b1010ULL), Builtin::i32(5)) == Builtin::i32(0b101000000)), "0b1010_u128<<~5==0b1_0100_0000");
		#line 1440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_not)(Builtin::u128(0b1010ULL), Builtin::i32(3)) == Builtin::ParseUInt128("0x40000000000000000000000000000001")), "0b1010_u128>>~3==0x40000000000000000000000000000001_u128");
		#line 1441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_not)(Builtin::u128(0b1010ULL), Builtin::i32(5)) == Builtin::ParseUInt128("0x50000000000000000000000000000000")), "0b1010_u128>>~5==0x50000000000000000000000000000000_u128");
		#line 1443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a = Builtin::ParseUInt128("200000000000000000000000000000000000000");
		#line 1444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(MinimalBitWidth)(a.$ref()) == Builtin::i32(128)), "a.MinimalBitWidth==128");
		#line 1445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(LeadingZeroCount)(a.$ref()) == Builtin::i32(0)), "a.LeadingZeroCount==0");
		#line 1446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(TrailingZeroCount)(a.$ref()) == Builtin::i32(39)), "a.TrailingZeroCount==39");
		#line 1447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(LeadingOneCount)(a.$ref()) == Builtin::i32(1)), "a.LeadingOneCount==1");
		#line 1448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(TrailingOneCount)(a.$ref()) == Builtin::i32(0)), "a.TrailingOneCount==0");
		#line 1449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(PopCount)(a.$ref()) == Builtin::i32(38)), "a.PopCount==38");
		#line 1450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(ZeroCount)(a.$ref()) == Builtin::i32(90)), "a.ZeroCount==90");
		#line 1451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(ReverseBits)(a.$ref()) == Builtin::ParseUInt128("350781075088058240024014441")), "a.ReverseBits==350781075088058240024014441u128");
		#line 1452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a = Builtin::ParseUInt128("160141183460469231731687303715884105728");
		#line 1453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(NextPow2)(a.$ref()) == Builtin::ParseUInt128("170141183460469231731687303715884105728")), "a.NextPow2==170141183460469231731687303715884105728u128");
		#line 1454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(PrevPow2)(a.$ref()) == Builtin::ParseUInt128("85070591730234615865843651857942052864")), "a.PrevPow2==85070591730234615865843651857942052864u128");
		#line 1455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(PrevPow2)(Builtin::u128(1ULL).$ref()) == Builtin::i32(0)), "1u128.PrevPow2==0");
		#line 1456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(PrevPow2)(Builtin::u128(2ULL).$ref()) == Builtin::i32(2)), "2u128.PrevPow2==2");
		#line 1457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(NextPow2)(Builtin::u128(2ULL).$ref()) == Builtin::i32(2)), "2u128.NextPow2==2");
		#line 1458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(NextPow2)(Builtin::u128(3ULL).$ref()) == Builtin::i32(4)), "3u128.NextPow2==4");
		#line 1459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(PrevPow2)(Builtin::u128(3ULL).$ref()) == Builtin::i32(2)), "3u128.PrevPow2==2");
		#line 1460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(CheckedNextPow2)(Builtin::ParseUInt128("200000000000000000000000000000000000000").$ref()) == nullptr), "200000000000000000000000000000000000000u128.CheckedNextPow2==null");
		#line 1462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(IsMultipleOf)(Builtin::ParseUInt128("200000000000000000000000000000000000000").$ref(), Builtin::u128(5ULL))), "200000000000000000000000000000000000000u128.IsMultipleOf(5u128)");
		#line 1463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((!ADV_UFCS(IsMultipleOf)(Builtin::ParseUInt128("200000000000000000000000000000000000000").$ref(), Builtin::u128(7ULL))), "!200000000000000000000000000000000000000u128.IsMultipleOf(7u128)");
		#line 1465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(MultiplyBy10)(Builtin::u128(10ULL).$ref()) == Builtin::i32(100)), "10u128.MultiplyBy10==100");
		#line 1466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UPCS(MultiplyBy16)(Builtin::u128(10ULL).$ref()) == Builtin::i32(160)), "10u128.MultiplyBy16==160");
		#line 1469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_qst)(a, Builtin::u128(100ULL)) == Builtin::ParseUInt128("160141183460469231731687303715884105828")), "a+?100u128==160141183460469231731687303715884105828u128");
		#line 1470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_qst)(a, ADV_USPCS(MaxValue, Builtin::u128)()) == nullptr), "a+?u128.MaxValue==null");
		#line 1471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_UFCS(_operator_add_qst_eq)(a, Builtin::u128(5ULL));
		#line 1472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a == Builtin::ParseUInt128("160141183460469231731687303715884105733")), "a==160141183460469231731687303715884105733u128");
		#line 1473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_UFCS(_operator_add_qst_eq)(a, ADV_USPCS(MaxValue, Builtin::u128)());
		#line 1474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a == Builtin::ParseUInt128("160141183460469231731687303715884105733")), "a==160141183460469231731687303715884105733u128");
		#line 1475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_ne)(a, Builtin::u128(100ULL)) == Builtin::ParseUInt128("160141183460469231731687303715884105833")), "a+!100u128==160141183460469231731687303715884105833u128");
		#line 1476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_mod)(a, Builtin::u128(100ULL)) == Builtin::ParseUInt128("160141183460469231731687303715884105833")), "a+%100u128==160141183460469231731687303715884105833u128");
		#line 1477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_mod)(a, Builtin::ParseUInt128("180141183460469231731687303715884105723")) == ADV_USPCS(MinValue, Builtin::u128)()), "a+%180141183460469231731687303715884105723u128==u128.MinValue");
		#line 1478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_UFCS(_operator_add_mod_eq)(a, ADV_USPCS(MaxValue, Builtin::u128)());
		#line 1479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a == Builtin::ParseUInt128("160141183460469231731687303715884105732")), "a==160141183460469231731687303715884105732u128");
		#line 1480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_or)(a, Builtin::ParseUInt128("200141183460469231731687303715884105723")) == ADV_USPCS(MaxValue, Builtin::u128)()), "a+|200141183460469231731687303715884105723u128==u128.MaxValue");
		#line 1481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_UFCS(_operator_add_or_eq)(a, ADV_USPCS(MaxValue, Builtin::u128)());
		#line 1482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a = Builtin::ParseUInt128("160141183460469231731687303715884105728");
		#line 1483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_or)(a, Builtin::ParseUInt128("200141183460469231731687303715884105723")) == ADV_USPCS(MaxValue, Builtin::u128)()), "a+|200141183460469231731687303715884105723u128==u128.MaxValue");
		#line 1484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		{
			#line 1485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_add_mod_qst)(a, ADV_USPCS(MaxValue, Builtin::u128)());
			#line 1486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			ADV_ASSERT((result == Builtin::ParseUInt128("160141183460469231731687303715884105727") && overflowed), "result==160141183460469231731687303715884105727u128&&overflowed");
		}
		#line 1489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a = ADV_USPCS(MaxValue, Builtin::u128)() - Builtin::i32(1);
		#line 1490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_add_qst_postfix)(a) == ADV_USPCS(MaxValue, Builtin::u128)() - Builtin::i32(1)), "a++?==u128.MaxValue-1");
		#line 1491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::u128)()), "a==u128.MaxValue");
		#line 1492 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_UFCS(_operator_add_add_mod_postfix)(a);
		#line 1493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::u128)()), "a==u128.MinValue");
		#line 1494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a = ADV_USPCS(MaxValue, Builtin::u128)();
		#line 1495 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_UFCS(_operator_add_add_or_postfix)(a);
		#line 1496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::u128)()), "a==u128.MaxValue");
		#line 1498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		{
			#line 1499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.$ref(), Builtin::u128(0ULL), Builtin::Boolean(false));
			#line 1500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			ADV_ASSERT((result == ADV_USPCS(MaxValue, Builtin::u128)() && !overflowed), "result==u128.MaxValue&&!overflowed");
		}
		#line 1502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		{
			#line 1503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.$ref(), Builtin::u128(0ULL), Builtin::Boolean(true));
			#line 1504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			ADV_ASSERT((result == ADV_USPCS(MinValue, Builtin::u128)() && overflowed), "result==u128.MinValue&&overflowed");
		}
		#line 1506 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		{
			#line 1507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.$ref(), Builtin::u128(10ULL), Builtin::Boolean(true));
			#line 1508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			ADV_ASSERT((result == Builtin::i32(10) && overflowed), "result==10&&overflowed");
		}
		#line 1511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_qst)(a, Builtin::ParseUInt128("200000000000000000000000000000000000000")) == Builtin::ParseUInt128("140282366920938463463374607431768211455")), "a-?200000000000000000000000000000000000000u128==140282366920938463463374607431768211455u128");
		#line 1512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_qst)(Builtin::u128(10ULL), ADV_USPCS(MaxValue, Builtin::u128)()) == nullptr), "10u128-?u128.MaxValue==null");
		#line 1513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_UFCS(_operator_sub_qst_eq)(a, Builtin::ParseUInt128("200000000000000000000000000000000000000"));
		#line 1514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a == Builtin::ParseUInt128("140282366920938463463374607431768211455")), "a==140282366920938463463374607431768211455u128");
		#line 1515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_UFCS(_operator_sub_qst_eq)(a, ADV_USPCS(MaxValue, Builtin::u128)());
		#line 1516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a == Builtin::ParseUInt128("140282366920938463463374607431768211455")), "a==140282366920938463463374607431768211455u128");
		#line 1517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_ne)(a, Builtin::u128(1ULL)) == Builtin::ParseUInt128("140282366920938463463374607431768211454")), "a-!1u128==140282366920938463463374607431768211454u128");
		#line 1518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_mod)(a, Builtin::ParseUInt128("200000000000000000000000000000000000000")) == Builtin::ParseUInt128("280564733841876926926749214863536422911")), "a-%200000000000000000000000000000000000000u128==280564733841876926926749214863536422911u128");
		#line 1519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_UFCS(_operator_sub_mod_eq)(a, ADV_USPCS(MaxValue, Builtin::u128)());
		#line 1520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a == Builtin::ParseUInt128("140282366920938463463374607431768211456")), "a==140282366920938463463374607431768211456u128");
		#line 1521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_or)(a, Builtin::ParseUInt128("300000000000000000000000000000000000000")) == ADV_USPCS(MinValue, Builtin::u128)()), "a-|300000000000000000000000000000000000000u128==u128.MinValue");
		#line 1522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_UFCS(_operator_sub_or_eq)(a, ADV_USPCS(MaxValue, Builtin::u128)());
		#line 1523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::u128)()), "a==u128.MinValue");
		#line 1524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		{
			#line 1525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_sub_mod_qst)(a, Builtin::u128(2ULL));
			#line 1526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			ADV_ASSERT((result == Builtin::ParseUInt128("340282366920938463463374607431768211454") && overflowed), "result==340282366920938463463374607431768211454u128&&overflowed");
		}
		#line 1529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a = ADV_USPCS(MinValue, Builtin::u128)() + Builtin::i32(1);
		#line 1530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_sub_qst_postfix)(a) == ADV_USPCS(MinValue, Builtin::u128)() + Builtin::i32(1)), "a--?==u128.MinValue+1");
		#line 1531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::u128)()), "a==u128.MinValue");
		#line 1532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_UFCS(_operator_sub_sub_mod_postfix)(a);
		#line 1533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::u128)()), "a==u128.MaxValue");
		#line 1534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a = ADV_USPCS(MinValue, Builtin::u128)();
		#line 1535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_UFCS(_operator_sub_sub_or_postfix)(a);
		#line 1536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::u128)()), "a==u128.MinValue");
		#line 1538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		{
			#line 1539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.$ref(), Builtin::u128(0ULL), Builtin::Boolean(false));
			#line 1540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			ADV_ASSERT((result == ADV_USPCS(MinValue, Builtin::u128)() && !overflowed), "result==u128.MinValue&&!overflowed");
		}
		#line 1542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		{
			#line 1543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.$ref(), Builtin::u128(0ULL), Builtin::Boolean(true));
			#line 1544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			ADV_ASSERT((result == ADV_USPCS(MaxValue, Builtin::u128)() && overflowed), "result==u128.MaxValue&&overflowed");
		}
		#line 1546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		{
			#line 1547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.$ref(), Builtin::u128(10ULL), Builtin::Boolean(true));
			#line 1548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			ADV_ASSERT((result == Builtin::ParseUInt128("340282366920938463463374607431768211445") && overflowed), "result==340282366920938463463374607431768211445u128&&overflowed");
		}
		#line 1551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_qst)(a, Builtin::u128(1ULL)) == ADV_USPCS(MinValue, Builtin::u128)()), "a*?1u128==u128.MinValue");
		#line 1552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a = Builtin::ParseUInt128("150000000000000000000");
		#line 1553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_qst)(a, Builtin::ParseUInt128("20000000000000000000")) == nullptr), "a*?20000000000000000000u128==null");
		#line 1554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_UFCS(_operator_mul_qst_eq)(a, Builtin::ParseUInt128("20000000000000000000"));
		#line 1555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a == Builtin::ParseUInt128("150000000000000000000")), "a==150000000000000000000u");
		#line 1556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_ne)(a, Builtin::u128(3000000ULL)) == Builtin::ParseUInt128("450000000000000000000000000")), "a*!3000000u128==450000000000000000000000000u");
		#line 1557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_mod)(a, Builtin::u128(3000000ULL)) == Builtin::ParseUInt128("450000000000000000000000000")), "a*%3000000u128==450000000000000000000000000u");
		#line 1558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_mod)(a, Builtin::ParseUInt128("20000000000000000000")) == Builtin::ParseUInt128("277741064632492292293003140545854308352")), "a*%20000000000000000000u128==277741064632492292293003140545854308352u");
		#line 1559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_UFCS(_operator_mul_mod_eq)(a, Builtin::ParseUInt128("20000000000000000000"));
		#line 1560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a == Builtin::ParseUInt128("277741064632492292293003140545854308352")), "a==277741064632492292293003140545854308352u");
		#line 1561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_or)(a, Builtin::u128(5000ULL)) == ADV_USPCS(MaxValue, Builtin::u128)()), "a*|5000u128==u128.MaxValue");
		#line 1562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_UFCS(_operator_mul_or_eq)(a, Builtin::u128(5000ULL));
		#line 1563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::u128)()), "a==u128.MaxValue");
		#line 1564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_or)(a, Builtin::u128(2ULL)) == ADV_USPCS(MaxValue, Builtin::u128)()), "a*|2u128==u128.MaxValue");
		#line 1565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		{
			#line 1566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_mul_mod_qst)(a, Builtin::u128(2ULL));
			#line 1567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			ADV_ASSERT((result == Builtin::ParseUInt128("340282366920938463463374607431768211454") && overflowed), "result==340282366920938463463374607431768211454u&&overflowed");
		}
		#line 1569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a = Builtin::ParseUInt128("150000000000000000000");
		#line 1570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		{
			#line 1571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			const auto& [low, high] = ADV_UFCS(_operator_mul_gt)(a, Builtin::ParseUInt128("200000000000000000000"));
			#line 1572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			ADV_ASSERT((low == Builtin::ParseUInt128("0x297dd54a15ee3f032de0230000000000") && high == Builtin::u32(0x58U)), "low==0x297dd54a15ee3f032de0230000000000_u128&&high==0x58u");
		}
		#line 1574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a = ADV_USPCS(MaxValue, Builtin::u128)();
		#line 1575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		{
			#line 1576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			const auto& [low, high] = ADV_UFCS(CarryingMul)(a.$ref(), Builtin::u128(2ULL), Builtin::u128(12ULL));
			#line 1577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			ADV_ASSERT((low == Builtin::i32(10) && high == Builtin::i32(2)), "low==10&&high==2");
		}
		#line 1580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a = Builtin::ParseUInt128("100000000000000000000");
		#line 1581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, Builtin::u128(6000000000ULL)) == Builtin::i64(16666666666LL)), "a\\6000000000u128==16666666666");
		#line 1582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a /= Builtin::u128(6000000000ULL);
		#line 1583 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a == Builtin::i64(16666666667LL)), "a==16666666667");
		#line 1584 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a = Builtin::ParseUInt128("100000000000000000000");
		#line 1585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		{
			#line 1586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)(a, Builtin::u128(6000000000ULL));
			#line 1587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			ADV_ASSERT((div == Builtin::i64(16666666666LL) && rem == Builtin::i64(4000000000LL)), "div==16666666666&&rem==4000000000");
		}
		#line 1589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_qst)(a, Builtin::u128(6000000000ULL)) == Builtin::u64(16666666666ULL)), "a\\?6000000000u128==16666666666u");
		#line 1590 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_qst)(a, Builtin::u128(0ULL)) == nullptr), "a\\?0u128==null");
		#line 1592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_ne)(a, Builtin::u128(6000000000ULL)) == Builtin::u64(16666666666ULL)), "a\\!6000000000u128==16666666666u");
		#line 1593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_UFCS(_operator_bsl_mod_eq)(a, Builtin::u128(6000000000ULL));
		#line 1594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a == Builtin::i64(16666666666LL)), "a==16666666666");
		#line 1595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a = Builtin::u32(10U);
		#line 1596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_UFCS(_operator_bsl_or_eq)(a, Builtin::u128(5ULL));
		#line 1597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a == Builtin::i32(2)), "a==2");
		#line 1598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a = Builtin::u32(10U);
		#line 1600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_bsl)(a, Builtin::u128(5ULL)) == Builtin::u128(2ULL)), "a\\\\5u128==2u128");
		#line 1601 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_bsl)(a, Builtin::u128(6ULL)) == nullptr), "a\\\\6u128==null");
		#line 1602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_bsl_qst)(a, Builtin::u128(0ULL)) == nullptr), "a\\\\?0u128==null");
		#line 1604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_not)(a, Builtin::u128(6ULL)) == Builtin::i32(2)), "a/~6u128==2");
		#line 1605 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_lt)(a, Builtin::u128(6ULL)) == Builtin::i32(1)), "a/<6u128==1");
		#line 1606 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_gt)(a, Builtin::u128(6ULL)) == Builtin::i32(2)), "a/>6u128==2");
		#line 1608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_qst)(a, Builtin::u128(5ULL)) == Builtin::u32(0U)), "a%?5u128==0u");
		#line 1609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_qst)(a, Builtin::u128(0ULL)) == nullptr), "a%?0u128==null");
		#line 1611 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_ne)(a, Builtin::u128(6ULL)) == Builtin::i32(4)), "a%!6u128==4");
		#line 1612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_UFCS(_operator_mod_mod_eq)(a, Builtin::i32(6));
		#line 1613 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a == Builtin::i32(4)), "a==4");
		#line 1614 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a = Builtin::u32(10U);
		#line 1616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_bsl)(ADV_USPCS(MaxValue, Builtin::u128)(), Builtin::u32(4U)) == Builtin::ParseUInt128("0x0FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF")), "u128.MaxValue>>\\4u==0x0FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF_u128");
		#line 1617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_bsl)(ADV_USPCS(MaxValue, Builtin::u128)(), Builtin::u32(132U)) == Builtin::i32(0)), "u128.MaxValue>>\\132u==0");
		#line 1618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_bsl)(ADV_USPCS(MinValue, Builtin::u128)(), Builtin::u32(132U)) == Builtin::i32(0)), "u128.MinValue>>\\132u==0");
		#line 1619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_bsl)(ADV_USPCS(MaxValue, Builtin::u128)(), Builtin::u32(132U)) == Builtin::i32(0)), "u128.MaxValue<<\\132u==0");
		#line 1620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_qst)(ADV_USPCS(MaxValue, Builtin::u128)(), Builtin::i32(4)) == Builtin::ParseUInt128("0x0FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF")), "u128.MaxValue>>?4==0x0FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF_u128");
		#line 1621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_qst)(ADV_USPCS(MaxValue, Builtin::u128)(), Builtin::i32(132)) == nullptr), "u128.MaxValue>>?132==null");
		#line 1622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_qst)(ADV_USPCS(MaxValue, Builtin::u128)(), Builtin::i32(132)) == nullptr), "u128.MaxValue<<?132==null");
		#line 1623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_ne)(ADV_USPCS(MaxValue, Builtin::u128)(), Builtin::i32(4)) == Builtin::ParseUInt128("0x0FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF")), "u128.MaxValue>>!4==0x0FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF_u128");
		#line 1624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_mod)(ADV_USPCS(MaxValue, Builtin::u128)(), Builtin::i32(132)) == Builtin::ParseUInt128("0x0FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF")), "u128.MaxValue>>%132==0x0FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF_u128");
		#line 1625 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a = ADV_USPCS(MaxValue, Builtin::u128)();
		#line 1626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_UFCS(_operator_gt_gt_mod_eq)(a, Builtin::i32(132));
		#line 1627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_mod)(a, Builtin::i32(132)) == Builtin::ParseUInt128("0xFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0")), "a<<%132==0xFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0_u128");
		#line 1628 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		{
			#line 1629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_gt_gt_mod_qst)(ADV_USPCS(MaxValue, Builtin::u128)(), Builtin::i32(132));
			#line 1630 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			ADV_ASSERT((result == Builtin::ParseUInt128("0x0FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF") && overflowed), "result==0x0FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF_u128&&overflowed");
		}
		#line 1634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a = Builtin::u64(1515151500000000ULL);
		#line 1635 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor)(a, Builtin::u32(2U)) == Builtin::ParseUInt128("2295684067952250000000000000000")), "a^^2u==2295684067952250000000000000000u");
		#line 1636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_UFCS(_operator_xor_xor_eq)(a, Builtin::u32(2U));
		#line 1637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a == Builtin::ParseUInt128("2295684067952250000000000000000")), "a==2295684067952250000000000000000u");
		#line 1638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor)(Builtin::u128(61500000000ULL), Builtin::u32(3U)) == Builtin::ParseUInt128("232608375000000000000000000000000")), "61500000000_u128^^3u==232608375000000000000000000000000u");
		#line 1639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_qst)(Builtin::u128(61500000000ULL), Builtin::u32(3U)) == Builtin::ParseUInt128("232608375000000000000000000000000")), "61500000000_u128^^?3u==232608375000000000000000000000000u");
		#line 1640 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_qst)(Builtin::u128(61500000000ULL), Builtin::u32(4U)) == nullptr), "61500000000_u128^^?4u==null");
		#line 1641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a = Builtin::u128(61500000000ULL);
		#line 1642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_UFCS(_operator_xor_xor_qst_eq)(a, Builtin::u32(3U));
		#line 1643 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a == Builtin::ParseUInt128("232608375000000000000000000000000")), "a==232608375000000000000000000000000u");
		#line 1644 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_ne)(Builtin::u128(61500000000ULL), Builtin::u32(3U)) == Builtin::ParseUInt128("232608375000000000000000000000000")), "61500000000_u128^^!3u==232608375000000000000000000000000u");
		#line 1645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_mod)(Builtin::u128(61500000000ULL), Builtin::u32(4U)) == Builtin::ParseUInt128("284639510667934463194878175896158601216")), "61500000000_u128^^%4u==284639510667934463194878175896158601216u");
		#line 1646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		a = Builtin::i32(300);
		#line 1647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_UFCS(_operator_xor_xor_mod_eq)(a, Builtin::u32(2U));
		#line 1648 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((a == Builtin::i32(90000)), "a==90000");
		#line 1649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_or)(Builtin::u128(61500000000ULL), Builtin::u32(3U)) == Builtin::ParseUInt128("232608375000000000000000000000000")), "61500000000_u128^^|3u==232608375000000000000000000000000u");
		#line 1650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_or)(Builtin::u128(61500000000ULL), Builtin::u32(4U)) == ADV_USPCS(MaxValue, Builtin::u128)()), "61500000000_u128^^|4u==u128.MaxValue");
		#line 1651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		{
			#line 1652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_xor_xor_mod_qst)(Builtin::u128(61500000000ULL), Builtin::u32(4U));
			#line 1653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			ADV_ASSERT((result == Builtin::ParseUInt128("284639510667934463194878175896158601216") && overflowed), "result==284639510667934463194878175896158601216u&&overflowed");
		}
		return true;
	}();
	#endif	
} namespace $extensions { using namespace System;
#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	auto _operator_eq_eq_mul($extension_UInt128_21_u128 const& $this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool
	{
		#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		{
			#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			auto __tmp0 = Builtin::Cast<false, $extension_UInt128_21_u128>(obj);
			#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			if ((__tmp0.IsValid())) {
				#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				const auto& obj = *__tmp0;
				
				#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				return $this == obj;
			}
		}
		#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return Builtin::Boolean(false);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	auto _operator_lt_eq_gt_mul($extension_UInt128_90_u128 const& $this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32
	{
		#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		{
			#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			auto __tmp0 = Builtin::Cast<false, $extension_UInt128_90_u128>(obj);
			#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			if ((__tmp0.IsValid())) {
				#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				const auto& obj = *__tmp0;
				
				#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				return $this <=> obj;
			}
		}
		#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		{
			#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
			if ((!Builtin::Is(obj, nullptr))) {
				#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				auto __tmp0 = *obj; const auto& obj = __tmp0;
				
				#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				Builtin::Throw(Builtin::InvalidOperationException{});
			}
		}
		#line 100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return Builtin::i32(1);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	auto Parse($extension_UInt128_296_u128 const& $this LIFETIMEBOUND, Builtin::Str input)  -> const typename $extension_UInt128_296_u128
	{
		#line 328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return Builtin::u128(0ULL);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	auto TryParse($extension_UInt128_296_u128 const& $this LIFETIMEBOUND, Builtin::Str input) noexcept -> const Builtin::Nullable<$extension_UInt128_296_u128>
	{
		#line 333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return Builtin::u128(0ULL);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	auto Log($extension_UInt128_378_u128 const& $this LIFETIMEBOUND, $extension_UInt128_378_u128 base)  -> const typename $extension_UInt128_378_u128
	{
		#line 491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		if (const auto result = ADV_UFCS(CheckedLog)($this.$ref(), base)) {
			{
				#line 491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 492 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
				return result;
			}
		}
		#line 494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 796 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	template<class T> auto _operator_bsl_mod_qst($extension_UInt128_512_u128 const& $this LIFETIMEBOUND, T rhs)  -> const std::tuple<$extension_UInt128_512_u128, bool>
	{
		#line 797 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		static_assert(Builtin::TypeIs<T, IBinaryInteger>(), "Operator \\%? implemented only for integer types");
		#line 798 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		$extension_UInt128_512_u128 result{}; 
		#line 799 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		Builtin::Auto<decltype(!Builtin::SafeDivide($this, rhs, result))> overflowed = !Builtin::SafeDivide($this, rhs, result); 
		#line 800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return std::make_tuple(result, overflowed);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
	auto getCheckedIsqrt($extension_UInt128_1109_u128 const& $this ) -> const Builtin::Nullable<$extension_UInt128_1109_u128>
	{
		#line 1125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		constexpr Builtin::Auto<decltype(ADV_USFCS((Math), Isqrt128)(ADV_USPCS(MaxValue, $extension_UInt128_1109_u128)()))> MAX_RESULT = ADV_USFCS((Math), Isqrt128)(ADV_USPCS(MaxValue, $extension_UInt128_1109_u128)());
		#line 1126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		const Builtin::Auto<decltype(ADV_USFCS((Math), Isqrt128)($this))> result = ADV_USFCS((Math), Isqrt128)($this); 
		#line 1127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		ASSUME((result <=> MAX_RESULT) <= 0);
		#line 1128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt128.ast"
		return result;
	}
	} namespace System{

}