#include "Math.h"
#include "UInt32.h"

namespace System {
//###############################################################################
//# Global type aliases
//###############################################################################
//###############################################################################
//# Type definitions
//###############################################################################

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	















#line 1185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	static_assert(Builtin::usize(sizeof(Builtin::u32)) == Builtin::i32(4), "u32 should be 4 bytes");
#line 1186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	static_assert(ADV_USPCS(MinValue, Builtin::u32)() == Builtin::i32(0), "u32.Min should be 0");
#line 1187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	static_assert(ADV_USPCS(MaxValue, Builtin::u32)() == Builtin::i64(0xFFFFFFFFLL), "u32.Max should be 0xFFFFFFFF");
#line 1188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	static_assert(!ADV_USPCS(IsSigned, Builtin::u32)(), "u32 must be unsigned");
#line 1189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	static_assert(ADV_USPCS(MaxDigitCount, Builtin::u32)() == Builtin::i32(10), "u32 max digit count must be 10");
#line 1190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	static_assert(ADV_UFCS_NONLOCAL(_operator_xor_xor)(Builtin::u32(2U), Builtin::u32(31U)) == Builtin::i64(2147483648LL), "2u32 ^^ 31u == 2147483648");
#line 1191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	static_assert(Builtin::TypeIs<Builtin::u32, IComparable<Builtin::u32>>(), "u32 should implement IComparable<u32>");
#line 1192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	static_assert(Builtin::TypeIs<Builtin::u32, IEquatable<Builtin::u32>>(), "u32 should implement IEquatable<u32>");
#line 1193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	static_assert(Builtin::TypeIs<Builtin::u32, ISelfComparable>(), "u32 should implement ISelfComparable");
#line 1194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	static_assert(Builtin::TypeIs<Builtin::u32, ISelfEquatable>(), "u32 should implement ISelfEquatable");
#line 1195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	static_assert(Builtin::TypeIs<Builtin::u32, IAdditionOperators<Builtin::u32, Builtin::u32>>(), "u32 should implement IAdditionOperators<u32, u32>");
#line 1196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	static_assert(Builtin::TypeIs<Builtin::u32, ISubtractionOperators<Builtin::u32, Builtin::u32>>(), "u32 should implement ISubtractionOperators<u32, u32>");
#line 1197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	static_assert(Builtin::TypeIs<Builtin::u32, IMultiplyOperators<Builtin::u32, Builtin::u32>>(), "u32 should implement IMultiplyOperators<u32, u32>");
#line 1198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	static_assert(Builtin::TypeIs<Builtin::u32, IDivisionOperators<Builtin::u32, Builtin::f64>>(), "u32 should implement IDivisionOperators<u32, f64>");
#line 1199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	static_assert(Builtin::TypeIs<Builtin::u32, IIntDivOperators<Builtin::u32, Builtin::u32>>(), "u32 should implement IIntDivOperators<u32, u32>");
#line 1200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	static_assert(Builtin::TypeIs<Builtin::u32, IModulusOperators<Builtin::u32, Builtin::u32>>(), "u32 should implement IModulusOperators<u32, u32>");
#line 1201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	static_assert(Builtin::TypeIs<Builtin::u32, IBitwiseOperators<Builtin::u32, Builtin::u32>>(), "u32 should implement IBitwiseOperators<u32, u32>");
#line 1202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	static_assert(Builtin::TypeIs<Builtin::u32, IShiftOperators<Builtin::i32, Builtin::u32>>(), "u32 should implement IShiftOperators<i32, u32>");
#line 1203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	static_assert(Builtin::TypeIs<Builtin::u32, IUnaryPlusOperators<Builtin::u32>>(), "u32 should implement IUnaryPlusOperators<u32>");
#line 1204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	static_assert(Builtin::TypeIs<Builtin::u32, IUnaryNegationOperators<Builtin::u32>>(), "u32 should implement IUnaryNegationOperators<u32>");
#line 1205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	static_assert(Builtin::TypeIs<Builtin::u32, IIncrementOperators<Builtin::u32>>(), "u32 should implement IIncrementOperators<u32>");
#line 1206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	static_assert(Builtin::TypeIs<Builtin::u32, IDecrementOperators<Builtin::u32>>(), "u32 should implement IDecrementOperators<u32>");
#line 1207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	static_assert(ADV_UFCS_NONLOCAL(_operator_add_mod)(ADV_USPCS(MaxValue, Builtin::u32)(), Builtin::u32(1U)) == ADV_USPCS(MinValue, Builtin::u32)(), "u32.MaxValue +% 1u32 == u32.MinValue");
#line 1208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	static_assert(ADV_UFCS_NONLOCAL(_operator_add_or)(ADV_USPCS(MaxValue, Builtin::u32)(), Builtin::u32(1U)) == ADV_USPCS(MaxValue, Builtin::u32)(), "u32.MaxValue +| 1u32 == u32.MaxValue");
#ifdef ADV_UNITTEST
	#line 1210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	static bool $Test_5df78499f025a48a = [](){
		#line 1212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::u32 a = Builtin::u32(5U); 
		#line 1215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a + Builtin::i8(10) == Builtin::i32(15)), "a+10i8==15");
		#line 1216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a + Builtin::u8(10U) == Builtin::i32(15)), "a+10u8==15");
		#line 1217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a + Builtin::i16(10) == Builtin::i32(15)), "a+10i16==15");
		#line 1218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a + Builtin::u32(10U) == Builtin::i32(15)), "a+10u32==15");
		#line 1219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a + Builtin::i32(10) == Builtin::i32(15)), "a+10i32==15");
		#line 1220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a + Builtin::u32(10U) == Builtin::i32(15)), "a+10u32==15");
		#line 1221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a + Builtin::i64(10LL) == Builtin::i32(15)), "a+10i64==15");
		#line 1222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a + Builtin::u64(10ULL) == Builtin::i32(15)), "a+10u64==15");
		#line 1223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a + Builtin::i128(10LL) == Builtin::i32(15)), "a+10i128==15");
		#line 1224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a + Builtin::u128(10ULL) == Builtin::i32(15)), "a+10u128==15");
		#line 1227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a - Builtin::i32(2) == Builtin::i32(3)), "a-2==3");
		#line 1228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a * Builtin::i32(2) == Builtin::i32(10)), "a*2==10");
		#line 1229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, Builtin::i32(2)) == Builtin::i32(2)), "a\\2==2");
		#line 1230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a % Builtin::i32(2) == Builtin::i32(1)), "a%2==1");
		#line 1231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT(((a & Builtin::i32(1)) == Builtin::i32(1)), "(a&1)==1");
		#line 1232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT(((a | Builtin::i32(1)) == Builtin::i32(5)), "(a|1)==5");
		#line 1233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT(((a ^ Builtin::i32(1)) == Builtin::i32(4)), "(a^1)==4");
		#line 1234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a << Builtin::i32(1) == Builtin::i32(10)), "a<<1==10");
		#line 1235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a >> Builtin::i32(1) == Builtin::i32(2)), "a>>1==2");
		#line 1236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a = Builtin::u32(0b11111011U);
		#line 1237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_UFCS(_operator_gt_gt_gt_eq)(a, Builtin::i32(2));
		#line 1238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a == Builtin::i32(0b00111110)), "a==0b0011_1110");
		#line 1239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_gt)(a, Builtin::i32(2)) == Builtin::i32(0b00001111)), "a>>>2==0b0000_1111");
		#line 1240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_gt)(a, Builtin::i32(7)) == Builtin::i32(0)), "a>>>7==0");
		#line 1243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a = Builtin::u32(5U);
		#line 1244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a == Builtin::i32(5)), "a==5");
		#line 1245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a != Builtin::i32(6)), "a!=6");
		#line 1246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT(((a <=> Builtin::i32(6)) < 0), "a<6");
		#line 1247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT(((a <=> Builtin::i32(5)) <= 0), "a<=5");
		#line 1248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT(((a <=> Builtin::i32(4)) > 0), "a>4");
		#line 1249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT(((a <=> Builtin::i32(5)) >= 0), "a>=5");
		#line 1252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a = Builtin::u32(5U);
		#line 1253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a++;
		#line 1254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a--;
		#line 1255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a += Builtin::i32(5);
		#line 1256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a -= Builtin::i32(5);
		#line 1257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a *= Builtin::i32(2);
		#line 1258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_UFCS(_operator_bsl_eq)(a, Builtin::i32(2));
		#line 1259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a %= Builtin::i32(1);
		#line 1260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a &= Builtin::i32(1);
		#line 1261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a |= Builtin::i32(1);
		#line 1262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a ^= Builtin::i32(1);
		#line 1263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a <<= Builtin::i32(1);
		#line 1264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a >>= Builtin::i32(1);
		#line 1265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a == Builtin::i32(0)), "a==0");
		#line 1266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a = Builtin::u32(10U);
		#line 1267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_not)(a) == Builtin::i64(0b11111111111111111111111111110101LL)), "~a==0b1111_1111_1111_1111_1111_1111_1111_0101");
		#line 1270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::u32 b = Builtin::u32(5U); 
		#line 1271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::Nullable<Builtin::u32> c = nullptr; 
		#line 1272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::Nullable<Builtin::u32> d = Builtin::u32(5U); 
		#line 1273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a != b), "a!=b");
		#line 1274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((b != c), "b!=c");
		#line 1275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((!Builtin::IdentityEquals(b, c)), "b!==c");
		#line 1276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT(((b <=> c) > 0), "b>c");
		#line 1277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((c != b), "c!=b");
		#line 1278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((c == nullptr), "c==null");
		#line 1279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((d != nullptr), "d!=null");
		#line 1280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT(((c <=> d) < 0), "c<d");
		#line 1281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((b == d), "b==d");
		#line 1285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::Nullable<Builtin::ObjectRef> o = c; 
		#line 1286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		o = d;
		#line 1287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_ne_eq_mul)(b, o)), "b!=*o");
		#line 1288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		IComparable<Builtin::u32> icomp = a; 
		#line 1289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT(((icomp <=> b) > 0), "icomp>b");
		#line 1292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a = Builtin::u32(200U);
		#line 1293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(a.$ref()) == Builtin::i32(200)), "a.HashCode==200");
		#line 1294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(a) == Builtin::i32(200)), "#a==200");
		#line 1296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a = Builtin::u32(35000U);
		#line 1297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(ToUInt64)(a.$ref()) == Builtin::i32(35000)), "a.ToUInt64()==35000");
		#line 1298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(NarrowToInt16)(a.$ref()) == Builtin::i32(-30536)), "a.NarrowToInt16()==-30536");
		#line 1301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a = Builtin::u32(10U);
		#line 1302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		b = Builtin::u32(6U);
		#line 1303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(Abs)(b.$ref()) == Builtin::i32(6)), "b.Abs==6");
		#line 1304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(IsFinite)(b.$ref())), "b.IsFinite");
		#line 1305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(IsInteger)(b.$ref())), "b.IsInteger");
		#line 1306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((!ADV_UPCS(IsNegative)(b.$ref())), "!b.IsNegative");
		#line 1307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(IsPositive)(a.$ref())), "a.IsPositive");
		#line 1308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(IsCanonical)(b.$ref())), "b.IsCanonical");
		#line 1309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((!ADV_UPCS(IsComplexNumber)(b.$ref())), "!b.IsComplexNumber");
		#line 1310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(IsRealNumber)(b.$ref())), "b.IsRealNumber");
		#line 1311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((!ADV_UPCS(IsImaginaryNumber)(b.$ref())), "!b.IsImaginaryNumber");
		#line 1312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(IsEvenInteger)(b.$ref())), "b.IsEvenInteger");
		#line 1313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((!ADV_UPCS(IsOddInteger)(b.$ref())), "!b.IsOddInteger");
		#line 1314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((!ADV_UPCS(IsInfinity)(b.$ref())), "!b.IsInfinity");
		#line 1315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((!ADV_UPCS(IsPositiveInfinity)(b.$ref())), "!b.IsPositiveInfinity");
		#line 1316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((!ADV_UPCS(IsNegativeInfinity)(b.$ref())), "!b.IsNegativeInfinity");
		#line 1317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((!ADV_UPCS(IsNaN)(b.$ref())), "!b.IsNaN");
		#line 1318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(IsNormal)(b.$ref())), "b.IsNormal");
		#line 1319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((!ADV_UPCS(IsSubnormal)(b.$ref())), "!b.IsSubnormal");
		#line 1320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((!ADV_UPCS(IsZero)(b.$ref())), "!b.IsZero");
		#line 1323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(Sign)(a.$ref()) == +Builtin::i32(1)), "a.Sign==+1");
		#line 1324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(CopySign)(a.$ref(), b) == a), "a.CopySign(b)==a");
		#line 1325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(Max)(a.$ref(), b) == a), "a.Max(b)==a");
		#line 1326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(Min)(a.$ref(), b) == b), "a.Min(b)==b");
		#line 1327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(MaxNumber)(a.$ref(), b) == a), "a.MaxNumber(b)==a");
		#line 1328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(MinNumber)(a.$ref(), b) == b), "a.MinNumber(b)==b");
		#line 1329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(Clamp)(b.$ref(), Builtin::u32(1U), Builtin::u32(5U)) == Builtin::i32(5)), "b.Clamp(1u32,5u32)==5");
		#line 1332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(IsPow2)(Builtin::u32(2147483648U).$ref())), "2147483648u32.IsPow2");
		#line 1333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((!ADV_UPCS(IsPow2)(Builtin::u32(2147483647U).$ref())), "!2147483647u32.IsPow2");
		#line 1334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::u32(2U).$ref()) == Builtin::i32(1)), "2u32.Log2==1");
		#line 1335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::u32(16U).$ref()) == Builtin::i32(4)), "16u32.Log2==4");
		#line 1336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::u32(64U).$ref()) == Builtin::i32(6)), "64u32.Log2==6");
		#line 1337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::u32(3000000000U).$ref()) == Builtin::i32(31)), "3_000_000_000u32.Log2==31");
		#line 1338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::u32(2U).$ref()) == Builtin::i32(1)), "2u32.Log2Ceiling==1");
		#line 1339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::u32(16U).$ref()) == Builtin::i32(4)), "16u32.Log2Ceiling==4");
		#line 1340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::u32(65U).$ref()) == Builtin::i32(7)), "65u32.Log2Ceiling==7");
		#line 1341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::u32(3000000000U).$ref()) == Builtin::i32(32)), "3_000_000_000u32.Log2Ceiling==32");
		#line 1342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(CheckedLog2)(Builtin::u32(0U).$ref()) == nullptr), "0u32.CheckedLog2==null");
		#line 1343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(Builtin::u32(5U).$ref()) == Builtin::i32(0)), "5u32.Log10==0");
		#line 1344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(a.$ref()) == Builtin::i32(1)), "a.Log10==1");
		#line 1345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(ADV_USPCS(MaxValue, Builtin::u32)().$ref()) == Builtin::i32(9)), "u32.MaxValue.Log10==9");
		#line 1346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(Log)(Builtin::u32(150U).$ref(), Builtin::u32(5U)) == Builtin::i32(3)), "150u32.Log(5u32)==3");
		#line 1347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(Midpoint)(a.$ref(), Builtin::u32(30U)) == Builtin::i32(20)), "a.Midpoint(30u32)==20");
		#line 1348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(Midpoint)(Builtin::u32(1000000000U).$ref(), Builtin::u32(4000000000U)) == Builtin::i64(2500000000LL)), "1000000000u32.Midpoint(4000000000u32)==2500000000");
		#line 1349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)(a.$ref(), Builtin::u32(10U)) == Builtin::i32(10)), "a.NextMultipleOf(10u32)==10");
		#line 1350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)(Builtin::u32(11U).$ref(), Builtin::u32(10U)) == Builtin::i32(20)), "11u32.NextMultipleOf(10u32)==20");
		#line 1351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)(Builtin::u32(3500000000U).$ref(), Builtin::u32(8500U)) == Builtin::i64(3500002500LL)), "3500000000u32.NextMultipleOf(8500u32)==3500002500");
		#line 1352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(ByteCount)(a.$ref()) == Builtin::i32(4)), "a.ByteCount==4");
		#line 1353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(ByteSwapped)(Builtin::u32(0xabcdef12U).$ref()) == Builtin::i32(0x12efcdab)), "0xabcdef12_u32.ByteSwapped==0x12efcdab");
		#line 1354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_not)(Builtin::u32(0b1010U), Builtin::i32(3)) == Builtin::i32(0b01010000)), "0b1010_u32<<~3==0b0101_0000");
		#line 1355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_not)(Builtin::u32(0b1010U), Builtin::i32(5)) == Builtin::i32(0b101000000)), "0b1010_u32<<~5==0b1_0100_0000");
		#line 1356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_not)(Builtin::u32(0b1010U), Builtin::i32(3)) == Builtin::i32(0b01000000000000000000000000000001)), "0b1010_u32>>~3==0b0100_0000_0000_0000_0000_0000_0000_0001");
		#line 1357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_not)(Builtin::u32(0b1010U), Builtin::i32(5)) == Builtin::i32(0b01010000000000000000000000000000)), "0b1010_u32>>~5==0b0101_0000_0000_0000_0000_0000_0000_0000");
		#line 1359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a = Builtin::u32(3000000000U);
		#line 1360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(MinimalBitWidth)(a.$ref()) == Builtin::i32(32)), "a.MinimalBitWidth==32");
		#line 1361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(LeadingZeroCount)(a.$ref()) == Builtin::i32(0)), "a.LeadingZeroCount==0");
		#line 1362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(TrailingZeroCount)(a.$ref()) == Builtin::i32(9)), "a.TrailingZeroCount==9");
		#line 1363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(LeadingOneCount)(a.$ref()) == Builtin::i32(1)), "a.LeadingOneCount==1");
		#line 1364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(TrailingOneCount)(a.$ref()) == Builtin::i32(0)), "a.TrailingOneCount==0");
		#line 1365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(PopCount)(a.$ref()) == Builtin::i32(12)), "a.PopCount==12");
		#line 1366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(ZeroCount)(a.$ref()) == Builtin::i32(20)), "a.ZeroCount==20");
		#line 1367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(ReverseBits)(a.$ref()) == Builtin::i32(0b00000000011110100000101101001101)), "a.ReverseBits==0b0000_0000_0111_1010_0000_1011_0100_1101");
		#line 1368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a = Builtin::u32(2000000000U);
		#line 1369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(NextPow2)(a.$ref()) == Builtin::i64(2147483648LL)), "a.NextPow2==2147483648");
		#line 1370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(PrevPow2)(a.$ref()) == Builtin::i32(1073741824)), "a.PrevPow2==1073741824");
		#line 1371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(PrevPow2)(Builtin::u32(1U).$ref()) == Builtin::i32(0)), "1u32.PrevPow2==0");
		#line 1372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(PrevPow2)(Builtin::u32(2U).$ref()) == Builtin::i32(2)), "2u32.PrevPow2==2");
		#line 1373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(NextPow2)(Builtin::u32(2U).$ref()) == Builtin::i32(2)), "2u32.NextPow2==2");
		#line 1374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(NextPow2)(Builtin::u32(3U).$ref()) == Builtin::i32(4)), "3u32.NextPow2==4");
		#line 1375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(PrevPow2)(Builtin::u32(3U).$ref()) == Builtin::i32(2)), "3u32.PrevPow2==2");
		#line 1376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(CheckedNextPow2)(Builtin::u32(3000000000U).$ref()) == nullptr), "3000000000u32.CheckedNextPow2==null");
		#line 1378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(IsMultipleOf)(a.$ref(), Builtin::u32(5U))), "a.IsMultipleOf(5u)");
		#line 1379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((!ADV_UFCS(IsMultipleOf)(a.$ref(), Builtin::u32(7U))), "!a.IsMultipleOf(7u)");
		#line 1381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(MultiplyBy10)(Builtin::u32(10U).$ref()) == Builtin::i32(100)), "10u32.MultiplyBy10==100");
		#line 1382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UPCS(MultiplyBy16)(Builtin::u32(10U).$ref()) == Builtin::i32(160)), "10u32.MultiplyBy16==160");
		#line 1385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_qst)(a, Builtin::u32(100U)) == Builtin::u32(2000000100U)), "a+?100u32==2000000100u");
		#line 1386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_qst)(a, ADV_USPCS(MaxValue, Builtin::u32)()) == nullptr), "a+?u32.MaxValue==null");
		#line 1387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_UFCS(_operator_add_qst_eq)(a, Builtin::u32(5U));
		#line 1388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a == Builtin::i32(2000000005)), "a==2000000005");
		#line 1389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_UFCS(_operator_add_qst_eq)(a, Builtin::u32(3000000000U));
		#line 1390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a == Builtin::i32(2000000005)), "a==2000000005");
		#line 1391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_ne)(a, Builtin::u32(100U)) == Builtin::i32(2000000105)), "a+!100u32==2000000105");
		#line 1392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_mod)(a, Builtin::u32(100U)) == Builtin::i32(2000000105)), "a+%100u32==2000000105");
		#line 1393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_mod)(a, Builtin::u32(2294967291U)) == ADV_USPCS(MinValue, Builtin::u32)()), "a+%2294967291u32==u32.MinValue");
		#line 1394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_UFCS(_operator_add_mod_eq)(a, ADV_USPCS(MaxValue, Builtin::u32)());
		#line 1395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a == Builtin::i32(2000000004)), "a==2000000004");
		#line 1396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_or)(a, Builtin::u32(3000000000U)) == ADV_USPCS(MaxValue, Builtin::u32)()), "a+|3000000000u32==u32.MaxValue");
		#line 1397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_UFCS(_operator_add_or_eq)(a, ADV_USPCS(MaxValue, Builtin::u32)());
		#line 1398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a = Builtin::u32(3000000000U);
		#line 1399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_or)(a, Builtin::u32(2000000000U)) == ADV_USPCS(MaxValue, Builtin::u32)()), "a+|2000000000u32==u32.MaxValue");
		#line 1400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		{
			#line 1401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_add_mod_qst)(a, ADV_USPCS(MaxValue, Builtin::u32)());
			#line 1402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			ADV_ASSERT((result == Builtin::i64(2999999999LL) && overflowed), "result==2999999999&&overflowed");
		}
		#line 1405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a = ADV_USPCS(MaxValue, Builtin::u32)() - Builtin::i32(1);
		#line 1406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_add_qst_postfix)(a) == ADV_USPCS(MaxValue, Builtin::u32)() - Builtin::i32(1)), "a++?==u32.MaxValue-1");
		#line 1407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::u32)()), "a==u32.MaxValue");
		#line 1408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_UFCS(_operator_add_add_mod_postfix)(a);
		#line 1409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::u32)()), "a==u32.MinValue");
		#line 1410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a = ADV_USPCS(MaxValue, Builtin::u32)();
		#line 1411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_UFCS(_operator_add_add_or_postfix)(a);
		#line 1412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::u32)()), "a==u32.MaxValue");
		#line 1414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		{
			#line 1415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.$ref(), Builtin::u32(0U), Builtin::Boolean(false));
			#line 1416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			ADV_ASSERT((result == ADV_USPCS(MaxValue, Builtin::u32)() && !overflowed), "result==u32.MaxValue&&!overflowed");
		}
		#line 1418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		{
			#line 1419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.$ref(), Builtin::u32(0U), Builtin::Boolean(true));
			#line 1420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			ADV_ASSERT((result == ADV_USPCS(MinValue, Builtin::u32)() && overflowed), "result==u32.MinValue&&overflowed");
		}
		#line 1422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		{
			#line 1423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.$ref(), Builtin::u32(10U), Builtin::Boolean(true));
			#line 1424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			ADV_ASSERT((result == Builtin::i32(10) && overflowed), "result==10&&overflowed");
		}
		#line 1427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_qst)(a, Builtin::u32(1000000000U)) == Builtin::u32(3294967295U)), "a-?1000000000u32==3294967295u");
		#line 1428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_qst)(Builtin::u32(10U), ADV_USPCS(MaxValue, Builtin::u32)()) == nullptr), "10u32-?u32.MaxValue==null");
		#line 1429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_UFCS(_operator_sub_qst_eq)(a, Builtin::u32(1000000000U));
		#line 1430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a == Builtin::u32(3294967295U)), "a==3294967295u");
		#line 1431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_UFCS(_operator_sub_qst_eq)(a, ADV_USPCS(MaxValue, Builtin::u32)());
		#line 1432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a == Builtin::u32(3294967295U)), "a==3294967295u");
		#line 1433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_ne)(a, Builtin::u32(1U)) == Builtin::u32(3294967294U)), "a-!1u32==3294967294u");
		#line 1434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_mod)(a, Builtin::u32(4000000000U)) == Builtin::i64(3589934591LL)), "a-%4000000000u32==3589934591");
		#line 1435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_UFCS(_operator_sub_mod_eq)(a, ADV_USPCS(MaxValue, Builtin::u32)());
		#line 1436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a == Builtin::u32(3294967296U)), "a==3294967296u");
		#line 1437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_or)(a, Builtin::u32(4000000000U)) == ADV_USPCS(MinValue, Builtin::u32)()), "a-|4000000000u==u32.MinValue");
		#line 1438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_UFCS(_operator_sub_or_eq)(a, ADV_USPCS(MaxValue, Builtin::u32)());
		#line 1439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::u32)()), "a==u32.MinValue");
		#line 1440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		{
			#line 1441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_sub_mod_qst)(a, Builtin::u32(2U));
			#line 1442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			ADV_ASSERT((result == Builtin::i64(4294967294LL) && overflowed), "result==4294967294&&overflowed");
		}
		#line 1445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a = ADV_USPCS(MinValue, Builtin::u32)() + Builtin::i32(1);
		#line 1446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_sub_qst_postfix)(a) == ADV_USPCS(MinValue, Builtin::u32)() + Builtin::i32(1)), "a--?==u32.MinValue+1");
		#line 1447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::u32)()), "a==u32.MinValue");
		#line 1448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_UFCS(_operator_sub_sub_mod_postfix)(a);
		#line 1449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::u32)()), "a==u32.MaxValue");
		#line 1450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a = ADV_USPCS(MinValue, Builtin::u32)();
		#line 1451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_UFCS(_operator_sub_sub_or_postfix)(a);
		#line 1452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::u32)()), "a==u32.MinValue");
		#line 1454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		{
			#line 1455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.$ref(), Builtin::u32(0U), Builtin::Boolean(false));
			#line 1456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			ADV_ASSERT((result == ADV_USPCS(MinValue, Builtin::u32)() && !overflowed), "result==u32.MinValue&&!overflowed");
		}
		#line 1458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		{
			#line 1459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.$ref(), Builtin::u32(0U), Builtin::Boolean(true));
			#line 1460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			ADV_ASSERT((result == ADV_USPCS(MaxValue, Builtin::u32)() && overflowed), "result==u32.MaxValue&&overflowed");
		}
		#line 1462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		{
			#line 1463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.$ref(), Builtin::u32(10U), Builtin::Boolean(true));
			#line 1464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			ADV_ASSERT((result == Builtin::i64(4294967285LL) && overflowed), "result==4294967285&&overflowed");
		}
		#line 1467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_qst)(a, Builtin::u32(1U)) == ADV_USPCS(MinValue, Builtin::u32)()), "a*?1u32==u32.MinValue");
		#line 1468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a = Builtin::u32(1500000U);
		#line 1469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_qst)(a, Builtin::u32(20000U)) == nullptr), "a*?20000u32==null");
		#line 1470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_UFCS(_operator_mul_qst_eq)(a, Builtin::u32(20000U));
		#line 1471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a == Builtin::i32(1500000)), "a==1500000");
		#line 1472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_ne)(a, Builtin::u32(300U)) == Builtin::i32(450000000)), "a*!300u32==450_000_000");
		#line 1473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_mod)(a, Builtin::u32(300U)) == Builtin::i32(450000000)), "a*%300u32==450_000_000");
		#line 1474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_mod)(a, Builtin::u32(3000U)) == Builtin::i32(205032704)), "a*%3000u32==205032704");
		#line 1475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_UFCS(_operator_mul_mod_eq)(a, Builtin::u32(3000U));
		#line 1476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a == Builtin::i32(205032704)), "a==205032704");
		#line 1477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_or)(a, Builtin::u32(5000U)) == ADV_USPCS(MaxValue, Builtin::u32)()), "a*|5000u32==u32.MaxValue");
		#line 1478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_UFCS(_operator_mul_or_eq)(a, Builtin::u32(5000U));
		#line 1479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::u32)()), "a==u32.MaxValue");
		#line 1480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_or)(a, Builtin::u32(2U)) == ADV_USPCS(MaxValue, Builtin::u32)()), "a*|2u32==u32.MaxValue");
		#line 1481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		{
			#line 1482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_mul_mod_qst)(a, Builtin::u32(2U));
			#line 1483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			ADV_ASSERT((result == Builtin::i64(4294967294LL) && overflowed), "result==4294967294&&overflowed");
		}
		#line 1485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a = Builtin::u32(5000000U);
		#line 1486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		{
			#line 1487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			const auto& [low, high] = ADV_UFCS(_operator_mul_gt)(a, (Builtin::u32(1500U)));
			#line 1488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			ADV_ASSERT((low == Builtin::i64(3205032704LL) && high == Builtin::i32(1)), "low==3205032704&&high==1");
		}
		#line 1490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a = ADV_USPCS(MaxValue, Builtin::u32)();
		#line 1491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		{
			#line 1492 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			const auto& [low, high] = ADV_UFCS(CarryingMul)(a.$ref(), Builtin::u32(2U), Builtin::u32(12U));
			#line 1493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			ADV_ASSERT((low == Builtin::i32(10) && high == Builtin::i32(2)), "low==10&&high==2");
		}
		#line 1496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a = Builtin::u32(100000000U);
		#line 1497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, Builtin::i32(6000)) == Builtin::i32(16666)), "a\\6000==16666");
		#line 1498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a /= Builtin::i32(6000);
		#line 1499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a == Builtin::i32(16667)), "a==16667");
		#line 1500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a = Builtin::u32(100000000U);
		#line 1501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		{
			#line 1502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)(a, Builtin::u32(6000U));
			#line 1503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			ADV_ASSERT((div == Builtin::i32(16666) && rem == Builtin::i32(4000)), "div==16666&&rem==4000");
		}
		#line 1505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_qst)(a, Builtin::u32(6000U)) == Builtin::u32(16666U)), "a\\?6000u==16666u");
		#line 1506 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_qst)(a, Builtin::u32(0U)) == nullptr), "a\\?0u==null");
		#line 1508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_ne)(a, Builtin::u32(6000U)) == Builtin::i32(16666)), "a\\!6000u==16666");
		#line 1509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_UFCS(_operator_bsl_mod_eq)(a, Builtin::u32(6000U));
		#line 1510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a == Builtin::i32(16666)), "a==16666");
		#line 1511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a = Builtin::u32(10U);
		#line 1512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_UFCS(_operator_bsl_or_eq)(a, Builtin::u32(5U));
		#line 1513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a == Builtin::i32(2)), "a==2");
		#line 1514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a = Builtin::u32(10U);
		#line 1516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_bsl)(a, Builtin::u32(5U)) == Builtin::u32(2U)), "a\\\\5u==2u");
		#line 1517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_bsl)(a, Builtin::u32(6U)) == nullptr), "a\\\\6u==null");
		#line 1518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_bsl_qst)(a, Builtin::u32(0U)) == nullptr), "a\\\\?0u==null");
		#line 1520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_not)(a, Builtin::u32(6U)) == Builtin::i32(2)), "a/~6u==2");
		#line 1521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_lt)(a, Builtin::u32(6U)) == Builtin::i32(1)), "a/<6u==1");
		#line 1522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_gt)(a, Builtin::u32(6U)) == Builtin::i32(2)), "a/>6u==2");
		#line 1524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_qst)(a, Builtin::u32(5U)) == Builtin::u32(0U)), "a%?5u==0u");
		#line 1525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_qst)(a, Builtin::u32(0U)) == nullptr), "a%?0u==null");
		#line 1527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_ne)(a, Builtin::u32(6U)) == Builtin::i32(4)), "a%!6u==4");
		#line 1528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_UFCS(_operator_mod_mod_eq)(a, Builtin::i32(6));
		#line 1529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a == Builtin::i32(4)), "a==4");
		#line 1530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a = Builtin::u32(10U);
		#line 1532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_bsl)(ADV_USPCS(MaxValue, Builtin::u32)(), Builtin::u32(4U)) == Builtin::i32(0b00001111111111111111111111111111)), "u32.MaxValue>>\\4u==0b0000_1111_1111_1111_1111_1111_1111_1111");
		#line 1533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_bsl)(ADV_USPCS(MaxValue, Builtin::u32)(), Builtin::u32(36U)) == Builtin::i32(0)), "u32.MaxValue>>\\36u==0");
		#line 1534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_bsl)(ADV_USPCS(MinValue, Builtin::u32)(), Builtin::u32(36U)) == Builtin::i32(0)), "u32.MinValue>>\\36u==0");
		#line 1535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_bsl)(ADV_USPCS(MaxValue, Builtin::u32)(), Builtin::u32(36U)) == Builtin::i32(0)), "u32.MaxValue<<\\36u==0");
		#line 1536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_qst)(ADV_USPCS(MaxValue, Builtin::u32)(), Builtin::i32(4)) == Builtin::u32(0b00001111111111111111111111111111U)), "u32.MaxValue>>?4==0b0000_1111_1111_1111_1111_1111_1111_1111u");
		#line 1537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_qst)(ADV_USPCS(MaxValue, Builtin::u32)(), Builtin::i32(36)) == nullptr), "u32.MaxValue>>?36==null");
		#line 1538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_qst)(ADV_USPCS(MaxValue, Builtin::u32)(), Builtin::i32(36)) == nullptr), "u32.MaxValue<<?36==null");
		#line 1539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_ne)(ADV_USPCS(MaxValue, Builtin::u32)(), Builtin::i32(4)) == Builtin::i32(0b00001111111111111111111111111111)), "u32.MaxValue>>!4==0b0000_1111_1111_1111_1111_1111_1111_1111");
		#line 1540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_mod)(ADV_USPCS(MaxValue, Builtin::u32)(), Builtin::i32(36)) == Builtin::i32(0b00001111111111111111111111111111)), "u32.MaxValue>>%36==0b0000_1111_1111_1111_1111_1111_1111_1111");
		#line 1541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a = ADV_USPCS(MaxValue, Builtin::u32)();
		#line 1542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_UFCS(_operator_gt_gt_mod_eq)(a, Builtin::i32(36));
		#line 1543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_mod)(a, Builtin::i32(36)) == Builtin::i64(0b11111111111111111111111111110000LL)), "a<<%36==0b1111_1111_1111_1111_1111_1111_1111_0000");
		#line 1544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		{
			#line 1545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_gt_gt_mod_qst)(ADV_USPCS(MaxValue, Builtin::u32)(), Builtin::i32(36));
			#line 1546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			ADV_ASSERT((result == Builtin::i32(0b00001111111111111111111111111111) && overflowed), "result==0b0000_1111_1111_1111_1111_1111_1111_1111&&overflowed");
		}
		#line 1550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a = Builtin::u32(1500U);
		#line 1551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor)(a, Builtin::u32(3U)) == Builtin::i64(3375000000LL)), "a^^3u==3375000000");
		#line 1552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_UFCS(_operator_xor_xor_eq)(a, Builtin::u32(3U));
		#line 1553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a == Builtin::i64(3375000000LL)), "a==3375000000");
		#line 1554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor)(Builtin::u32(1500U), Builtin::u32(3U)) == Builtin::i64(3375000000LL)), "1500u32^^3u==3375000000");
		#line 1555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_qst)(Builtin::u32(1500U), Builtin::u32(3U)) == Builtin::u32(3375000000U)), "1500u32^^?3u==3375000000u");
		#line 1556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_qst)(Builtin::u32(1500U), Builtin::u32(4U)) == nullptr), "1500u32^^?4u==null");
		#line 1557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_UFCS(_operator_xor_xor_qst_eq)(a, Builtin::u32(4U));
		#line 1558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a == Builtin::i64(3375000000LL)), "a==3375000000");
		#line 1559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		a = Builtin::u32(1500U);
		#line 1560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_ne)(Builtin::u32(1500U), Builtin::u32(3U)) == Builtin::i64(3375000000LL)), "1500u32^^!3u==3375000000");
		#line 1561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_mod)(Builtin::u32(1500U), Builtin::u32(4U)) == Builtin::i64(3028525312LL)), "1500u32^^%4u==3028525312");
		#line 1562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_UFCS(_operator_xor_xor_mod_eq)(a, Builtin::u32(4U));
		#line 1563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((a == Builtin::i64(3028525312LL)), "a==3028525312");
		#line 1564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_or)(Builtin::u32(1500U), Builtin::u32(3U)) == Builtin::i64(3375000000LL)), "1500u32^^|3u==3375000000");
		#line 1565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_or)(Builtin::u32(1500U), Builtin::u32(4U)) == ADV_USPCS(MaxValue, Builtin::u32)()), "1500u32^^|4u==u32.MaxValue");
		#line 1566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		{
			#line 1567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_xor_xor_mod_qst)(Builtin::u32(1500U), Builtin::u32(4U));
			#line 1568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			ADV_ASSERT((result == Builtin::i64(3028525312LL) && overflowed), "result==3028525312&&overflowed");
		}
		return true;
	}();
	#endif	
} namespace $extensions { using namespace System;
#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	auto _operator_eq_eq_mul($extension_UInt32_19_u32 const& $this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool
	{
		#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		{
			#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			auto __tmp0 = Builtin::Cast<false, $extension_UInt32_19_u32>(obj);
			#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			if ((__tmp0.IsValid())) {
				#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				const auto& obj = *__tmp0;
				
				#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				return $this == obj;
			}
		}
		#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return Builtin::Boolean(false);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	auto _operator_lt_eq_gt_mul($extension_UInt32_72_u32 const& $this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32
	{
		#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		{
			#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			auto __tmp0 = Builtin::Cast<false, $extension_UInt32_72_u32>(obj);
			#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			if ((__tmp0.IsValid())) {
				#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				const auto& obj = *__tmp0;
				
				#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				return $this <=> obj;
			}
		}
		#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		{
			#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
			if ((!Builtin::Is(obj, nullptr))) {
				#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				auto __tmp0 = *obj; const auto& obj = __tmp0;
				
				#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				Builtin::Throw(Builtin::InvalidOperationException{});
			}
		}
		#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return Builtin::i32(1);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	auto Parse($extension_UInt32_255_u32 const& $this LIFETIMEBOUND, Builtin::Str input)  -> const typename $extension_UInt32_255_u32
	{
		#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return Builtin::u32(0U);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	auto TryParse($extension_UInt32_255_u32 const& $this LIFETIMEBOUND, Builtin::Str input) noexcept -> const Builtin::Nullable<$extension_UInt32_255_u32>
	{
		#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return Builtin::u32(0U);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	auto Log($extension_UInt32_326_u32 const& $this LIFETIMEBOUND, $extension_UInt32_326_u32 base)  -> const typename $extension_UInt32_326_u32
	{
		#line 420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		if (const auto result = ADV_UFCS(CheckedLog)($this.$ref(), base)) {
			{
				#line 420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
				return result;
			}
		}
		#line 423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1047 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
	auto getCheckedIsqrt($extension_UInt32_1038_u32 const & $this ) -> const Builtin::Nullable<$extension_UInt32_1038_u32>
	{
		#line 1048 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		constexpr Builtin::Auto<decltype(ADV_USFCS((Math), Isqrt32)(ADV_USPCS(MaxValue, $extension_UInt32_1038_u32)()))> MAX_RESULT = ADV_USFCS((Math), Isqrt32)(ADV_USPCS(MaxValue, $extension_UInt32_1038_u32)());
		#line 1049 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		const Builtin::Auto<decltype(ADV_USFCS((Math), Isqrt32)($this))> result = ADV_USFCS((Math), Isqrt32)($this); 
		#line 1050 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		ASSUME((result <=> MAX_RESULT) <= 0);
		#line 1051 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt32.ast"
		return result;
	}
	} namespace System{

}