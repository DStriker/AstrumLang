#include "Math.h"
#include "UInt16.h"

namespace System {
//###############################################################################
//# Global type aliases
//###############################################################################
//###############################################################################
//# Type definitions
//###############################################################################

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
















#line 1154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	static_assert(Builtin::usize(sizeof(Builtin::u16)) == Builtin::i32(2), "u16 should be 2 bytes");
#line 1155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	static_assert(ADV_USPCS(MinValue, Builtin::u16)() == Builtin::i32(0), "u16.Min should be 0");
#line 1156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	static_assert(ADV_USPCS(MaxValue, Builtin::u16)() == Builtin::i32(0xFFFF), "u16.Max should be 0xFFFF");
#line 1157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	static_assert(ADV_UFCS_NONLOCAL(_operator_gt_gt_not)(ADV_USPCS(One, Builtin::u16)(), Builtin::i32(3)) == Builtin::i32(0b0010000000000000), "u16.One >>% 3 == 0b0010_0000_0000_0000");
#line 1158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	static_assert(!ADV_USPCS(IsSigned, Builtin::u16)(), "u16 must be unsigned");
#line 1159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	static_assert(ADV_USPCS(MaxDigitCount, Builtin::u16)() == Builtin::i32(5), "u16 max digit count must be 5");
#line 1160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	static_assert(ADV_UFCS_NONLOCAL(_operator_xor_xor)(Builtin::u16(2U), Builtin::u32(15U)) == Builtin::i32(32768), "2u16 ^^ 15u == 32768");
#line 1161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	static_assert(Builtin::TypeIs<Builtin::u16, IComparable<Builtin::u16>>(), "u16 should implement IComparable<u16>");
#line 1162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	static_assert(Builtin::TypeIs<Builtin::u16, IEquatable<Builtin::u16>>(), "u16 should implement IEquatable<u16>");
#line 1163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	static_assert(Builtin::TypeIs<Builtin::u16, ISelfComparable>(), "u16 should implement ISelfComparable");
#line 1164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	static_assert(Builtin::TypeIs<Builtin::u16, ISelfEquatable>(), "u16 should implement ISelfEquatable");
#line 1165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	static_assert(Builtin::TypeIs<Builtin::u16, IAdditionOperators<Builtin::u16, Builtin::u16>>(), "u16 should implement IAdditionOperators<u16, u16>");
#line 1166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	static_assert(Builtin::TypeIs<Builtin::u16, ISubtractionOperators<Builtin::u16, Builtin::u16>>(), "u16 should implement ISubtractionOperators<u16, u16>");
#line 1167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	static_assert(Builtin::TypeIs<Builtin::u16, IMultiplyOperators<Builtin::u16, Builtin::u16>>(), "u16 should implement IMultiplyOperators<u16, u16>");
#line 1168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	static_assert(Builtin::TypeIs<Builtin::u16, IDivisionOperators<Builtin::u16, Builtin::f64>>(), "u16 should implement IDivisionOperators<u16, f64>");
#line 1169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	static_assert(Builtin::TypeIs<Builtin::u16, IIntDivOperators<Builtin::u16, Builtin::u16>>(), "u16 should implement IIntDivOperators<u16, u16>");
#line 1170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	static_assert(Builtin::TypeIs<Builtin::u16, IModulusOperators<Builtin::u16, Builtin::u16>>(), "u16 should implement IModulusOperators<u16, u16>");
#line 1171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	static_assert(Builtin::TypeIs<Builtin::u16, IBitwiseOperators<Builtin::u16, Builtin::u16>>(), "u16 should implement IBitwiseOperators<u16, u16>");
#line 1172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	static_assert(Builtin::TypeIs<Builtin::u16, IShiftOperators<Builtin::u16, Builtin::u16>>(), "u16 should implement IShiftOperators<u16, u16>");
#line 1173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	static_assert(Builtin::TypeIs<Builtin::u16, IUnaryPlusOperators<Builtin::u16>>(), "u16 should implement IUnaryPlusOperators<u16>");
#line 1174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	static_assert(Builtin::TypeIs<Builtin::u16, IUnaryNegationOperators<Builtin::u16>>(), "u16 should implement IUnaryNegationOperators<u16>");
#line 1175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	static_assert(Builtin::TypeIs<Builtin::u16, IIncrementOperators<Builtin::u16>>(), "u16 should implement IIncrementOperators<u16>");
#line 1176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	static_assert(Builtin::TypeIs<Builtin::u16, IDecrementOperators<Builtin::u16>>(), "u16 should implement IDecrementOperators<u16>");
#line 1177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	static_assert(ADV_UFCS_NONLOCAL(_operator_add_mod)(ADV_USPCS(MaxValue, Builtin::u16)(), Builtin::u16(1U)) == ADV_USPCS(MinValue, Builtin::u16)(), "u16.MaxValue +% 1u16 == u16.MinValue");
#line 1178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	static_assert(ADV_UFCS_NONLOCAL(_operator_add_or)(ADV_USPCS(MaxValue, Builtin::u16)(), Builtin::u16(1U)) == ADV_USPCS(MaxValue, Builtin::u16)(), "u16.MaxValue +| 1u16 == u16.MaxValue");
#ifdef ADV_UNITTEST
	#line 1180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	static bool $Test_4be63a99e5b3ef70 = [](){
		#line 1182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		Builtin::u16 a = Builtin::u16(5U); 
		#line 1185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a + Builtin::i8(10) == Builtin::i32(15)), "a+10i8==15");
		#line 1186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a + Builtin::u8(10U) == Builtin::i32(15)), "a+10u8==15");
		#line 1187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a + Builtin::i16(10) == Builtin::i32(15)), "a+10i16==15");
		#line 1188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a + Builtin::u16(10U) == Builtin::i32(15)), "a+10u16==15");
		#line 1189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a + Builtin::i32(10) == Builtin::i32(15)), "a+10i32==15");
		#line 1190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a + Builtin::u32(10U) == Builtin::i32(15)), "a+10u32==15");
		#line 1191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a + Builtin::i64(10LL) == Builtin::i32(15)), "a+10i64==15");
		#line 1192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a + Builtin::u64(10ULL) == Builtin::i32(15)), "a+10u64==15");
		#line 1193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a + Builtin::i128(10LL) == Builtin::i32(15)), "a+10i128==15");
		#line 1194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a + Builtin::u128(10ULL) == Builtin::i32(15)), "a+10u128==15");
		#line 1197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a - Builtin::i32(2) == Builtin::i32(3)), "a-2==3");
		#line 1198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a * Builtin::i32(2) == Builtin::i32(10)), "a*2==10");
		#line 1199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, Builtin::i32(2)) == Builtin::i32(2)), "a\\2==2");
		#line 1200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a % Builtin::i32(2) == Builtin::i32(1)), "a%2==1");
		#line 1201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT(((a & Builtin::i32(1)) == Builtin::i32(1)), "(a&1)==1");
		#line 1202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT(((a | Builtin::i32(1)) == Builtin::i32(5)), "(a|1)==5");
		#line 1203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT(((a ^ Builtin::i32(1)) == Builtin::i32(4)), "(a^1)==4");
		#line 1204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a << Builtin::i32(1) == Builtin::i32(10)), "a<<1==10");
		#line 1205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a >> Builtin::i32(1) == Builtin::i32(2)), "a>>1==2");
		#line 1206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a = Builtin::u16(0b11111011U);
		#line 1207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_UFCS(_operator_gt_gt_gt_eq)(a, Builtin::i32(2));
		#line 1208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a == Builtin::i32(0b00111110)), "a==0b0011_1110");
		#line 1209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_gt)(a, Builtin::i32(2)) == Builtin::i32(0b00001111)), "a>>>2==0b0000_1111");
		#line 1210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_gt)(a, Builtin::i32(7)) == Builtin::i32(0)), "a>>>7==0");
		#line 1213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a = Builtin::u16(5U);
		#line 1214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a == Builtin::i32(5)), "a==5");
		#line 1215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a != Builtin::i32(6)), "a!=6");
		#line 1216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT(((a <=> Builtin::i32(6)) < 0), "a<6");
		#line 1217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT(((a <=> Builtin::i32(5)) <= 0), "a<=5");
		#line 1218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT(((a <=> Builtin::i32(4)) > 0), "a>4");
		#line 1219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT(((a <=> Builtin::i32(5)) >= 0), "a>=5");
		#line 1222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a = Builtin::u16(5U);
		#line 1223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a++;
		#line 1224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a--;
		#line 1225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a += Builtin::i32(5);
		#line 1226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a -= Builtin::i32(5);
		#line 1227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a *= Builtin::i32(2);
		#line 1228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_UFCS(_operator_bsl_eq)(a, Builtin::i32(2));
		#line 1229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a %= Builtin::i32(1);
		#line 1230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a &= Builtin::i32(1);
		#line 1231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a |= Builtin::i32(1);
		#line 1232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a ^= Builtin::i32(1);
		#line 1233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a <<= Builtin::i32(1);
		#line 1234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a >>= Builtin::i32(1);
		#line 1235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a == Builtin::i32(0)), "a==0");
		#line 1236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a = Builtin::u16(10U);
		#line 1237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_not)(a) == Builtin::i32(0b1111111111110101)), "~a==0b1111_1111_1111_0101");
		#line 1240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		Builtin::u16 b = Builtin::u16(5U); 
		#line 1241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		Builtin::Nullable<Builtin::u16> c = nullptr; 
		#line 1242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		Builtin::Nullable<Builtin::u16> d = Builtin::u16(5U); 
		#line 1243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a != b), "a!=b");
		#line 1244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((b != c), "b!=c");
		#line 1245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((!Builtin::IdentityEquals(b, c)), "b!==c");
		#line 1246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT(((b <=> c) > 0), "b>c");
		#line 1247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((c != b), "c!=b");
		#line 1248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((c == nullptr), "c==null");
		#line 1249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((d != nullptr), "d!=null");
		#line 1250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT(((c <=> d) < 0), "c<d");
		#line 1251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((b == d), "b==d");
		#line 1255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		Builtin::Nullable<Builtin::ObjectRef> o = c; 
		#line 1256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		o = d;
		#line 1257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_ne_eq_mul)(b, o)), "b!=*o");
		#line 1258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		IComparable<Builtin::u16> icomp = a; 
		#line 1259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT(((icomp <=> b) > 0), "icomp>b");
		#line 1262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a = Builtin::u16(200U);
		#line 1263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(a.$ref()) == Builtin::i32(200)), "a.HashCode==200");
		#line 1264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(a) == Builtin::i32(200)), "#a==200");
		#line 1266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a = Builtin::u16(35000U);
		#line 1267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(ToUInt32)(a.$ref()) == Builtin::i32(35000)), "a.ToUInt32()==35000");
		#line 1268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(NarrowToInt16)(a.$ref()) == Builtin::i32(-30536)), "a.NarrowToInt16()==-30536");
		#line 1271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a = Builtin::u16(10U);
		#line 1272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		b = Builtin::u16(6U);
		#line 1273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(Abs)(b.$ref()) == Builtin::i32(6)), "b.Abs==6");
		#line 1274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(IsFinite)(b.$ref())), "b.IsFinite");
		#line 1275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(IsInteger)(b.$ref())), "b.IsInteger");
		#line 1276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((!ADV_UPCS(IsNegative)(b.$ref())), "!b.IsNegative");
		#line 1277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(IsPositive)(a.$ref())), "a.IsPositive");
		#line 1278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(IsCanonical)(b.$ref())), "b.IsCanonical");
		#line 1279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((!ADV_UPCS(IsComplexNumber)(b.$ref())), "!b.IsComplexNumber");
		#line 1280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(IsRealNumber)(b.$ref())), "b.IsRealNumber");
		#line 1281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((!ADV_UPCS(IsImaginaryNumber)(b.$ref())), "!b.IsImaginaryNumber");
		#line 1282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(IsEvenInteger)(b.$ref())), "b.IsEvenInteger");
		#line 1283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((!ADV_UPCS(IsOddInteger)(b.$ref())), "!b.IsOddInteger");
		#line 1284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((!ADV_UPCS(IsInfinity)(b.$ref())), "!b.IsInfinity");
		#line 1285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((!ADV_UPCS(IsPositiveInfinity)(b.$ref())), "!b.IsPositiveInfinity");
		#line 1286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((!ADV_UPCS(IsNegativeInfinity)(b.$ref())), "!b.IsNegativeInfinity");
		#line 1287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((!ADV_UPCS(IsNaN)(b.$ref())), "!b.IsNaN");
		#line 1288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(IsNormal)(b.$ref())), "b.IsNormal");
		#line 1289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((!ADV_UPCS(IsSubnormal)(b.$ref())), "!b.IsSubnormal");
		#line 1290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((!ADV_UPCS(IsZero)(b.$ref())), "!b.IsZero");
		#line 1293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(Sign)(a.$ref()) == +Builtin::i32(1)), "a.Sign==+1");
		#line 1294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(CopySign)(a.$ref(), b) == a), "a.CopySign(b)==a");
		#line 1295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(Max)(a.$ref(), b) == a), "a.Max(b)==a");
		#line 1296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(Min)(a.$ref(), b) == b), "a.Min(b)==b");
		#line 1297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(MaxNumber)(a.$ref(), b) == a), "a.MaxNumber(b)==a");
		#line 1298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(MinNumber)(a.$ref(), b) == b), "a.MinNumber(b)==b");
		#line 1299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(Clamp)(b.$ref(), Builtin::u16(1U), Builtin::u16(5U)) == Builtin::i32(5)), "b.Clamp(1u16,5u16)==5");
		#line 1302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(IsPow2)(Builtin::u16(32768U).$ref())), "32768u16.IsPow2");
		#line 1303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((!ADV_UPCS(IsPow2)(Builtin::u16(32000U).$ref())), "!32000u16.IsPow2");
		#line 1304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::u16(2U).$ref()) == Builtin::i32(1)), "2u16.Log2==1");
		#line 1305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::u16(16U).$ref()) == Builtin::i32(4)), "16u16.Log2==4");
		#line 1306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::u16(64U).$ref()) == Builtin::i32(6)), "64u16.Log2==6");
		#line 1307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::u16(35000U).$ref()) == Builtin::i32(15)), "35000u16.Log2==15");
		#line 1308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::u16(2U).$ref()) == Builtin::i32(1)), "2u16.Log2Ceiling==1");
		#line 1309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::u16(16U).$ref()) == Builtin::i32(4)), "16u16.Log2Ceiling==4");
		#line 1310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::u16(65U).$ref()) == Builtin::i32(7)), "65u16.Log2Ceiling==7");
		#line 1311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::u16(35000U).$ref()) == Builtin::i32(16)), "35000u16.Log2Ceiling==16");
		#line 1312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(CheckedLog2)(Builtin::u16(0U).$ref()) == nullptr), "0u16.CheckedLog2==null");
		#line 1313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(Builtin::u16(5U).$ref()) == Builtin::i32(0)), "5u16.Log10==0");
		#line 1314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(a.$ref()) == Builtin::i32(1)), "a.Log10==1");
		#line 1315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(ADV_USPCS(MaxValue, Builtin::u16)().$ref()) == Builtin::i32(4)), "u16.MaxValue.Log10==4");
		#line 1316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(Log)(Builtin::u16(150U).$ref(), Builtin::u16(5U)) == Builtin::i32(3)), "150u16.Log(5u16)==3");
		#line 1317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(Midpoint)(a.$ref(), Builtin::u16(30U)) == Builtin::i32(20)), "a.Midpoint(30u16)==20");
		#line 1318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(Midpoint)(Builtin::u16(10000U).$ref(), ADV_USPCS(MaxValue, Builtin::u16)()) == Builtin::i32(37767)), "10000u16.Midpoint(u16.MaxValue)==37767");
		#line 1319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)(a.$ref(), Builtin::u16(10U)) == Builtin::i32(10)), "a.NextMultipleOf(10u16)==10");
		#line 1320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)(Builtin::u16(11U).$ref(), Builtin::u16(10U)) == Builtin::i32(20)), "11u16.NextMultipleOf(10u16)==20");
		#line 1321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)(Builtin::u16(35000U).$ref(), Builtin::u16(80U)) == Builtin::i32(35040)), "35000u16.NextMultipleOf(80u16)==35040");
		#line 1322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(ByteCount)(a.$ref()) == Builtin::i32(2)), "a.ByteCount==2");
		#line 1323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(ByteSwapped)(Builtin::u16(0xabcdU).$ref()) == Builtin::i32(0xcdab)), "0xabcd_u16.ByteSwapped==0xcdab");
		#line 1324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_not)(Builtin::u16(0b1010U), Builtin::i32(3)) == Builtin::i32(0b01010000)), "0b1010_u16<<~3==0b0101_0000");
		#line 1325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_not)(Builtin::u16(0b1010U), Builtin::i32(5)) == Builtin::i32(0b101000000)), "0b1010_u16<<~5==0b1_0100_0000");
		#line 1326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_not)(Builtin::u16(0b1010U), Builtin::i32(3)) == Builtin::i32(0b0100000000000001)), "0b1010_u16>>~3==0b0100_0000_0000_0001");
		#line 1327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_not)(Builtin::u16(0b1010U), Builtin::i32(5)) == Builtin::i32(0b0101000000000000)), "0b1010_u16>>~5==0b0101_0000_0000_0000");
		#line 1329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a = Builtin::u16(30000U);
		#line 1330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(MinimalBitWidth)(a.$ref()) == Builtin::i32(15)), "a.MinimalBitWidth==15");
		#line 1331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(LeadingZeroCount)(a.$ref()) == Builtin::i32(1)), "a.LeadingZeroCount==1");
		#line 1332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(TrailingZeroCount)(a.$ref()) == Builtin::i32(4)), "a.TrailingZeroCount==4");
		#line 1333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(LeadingOneCount)(a.$ref()) == Builtin::i32(0)), "a.LeadingOneCount==0");
		#line 1334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(TrailingOneCount)(a.$ref()) == Builtin::i32(0)), "a.TrailingOneCount==0");
		#line 1335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(PopCount)(a.$ref()) == Builtin::i32(7)), "a.PopCount==7");
		#line 1336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(ZeroCount)(a.$ref()) == Builtin::i32(9)), "a.ZeroCount==9");
		#line 1337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(ReverseBits)(a.$ref()) == Builtin::i32(0b0000110010101110)), "a.ReverseBits==0b0000_1100_1010_1110");
		#line 1338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(NextPow2)(a.$ref()) == Builtin::i32(32768)), "a.NextPow2==32768");
		#line 1339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(PrevPow2)(a.$ref()) == Builtin::i32(16384)), "a.PrevPow2==16384");
		#line 1340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(PrevPow2)(Builtin::u16(1U).$ref()) == Builtin::i32(0)), "1u16.PrevPow2==0");
		#line 1341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(PrevPow2)(Builtin::u16(2U).$ref()) == Builtin::i32(2)), "2u16.PrevPow2==2");
		#line 1342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(NextPow2)(Builtin::u16(2U).$ref()) == Builtin::i32(2)), "2u16.NextPow2==2");
		#line 1343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(NextPow2)(Builtin::u16(3U).$ref()) == Builtin::i32(4)), "3u16.NextPow2==4");
		#line 1344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(PrevPow2)(Builtin::u16(3U).$ref()) == Builtin::i32(2)), "3u16.PrevPow2==2");
		#line 1345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(NextPow2)(Builtin::u16(32767U).$ref()) == Builtin::i32(32768)), "32767u16.NextPow2==32768");
		#line 1346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(CheckedNextPow2)(Builtin::u16(32769U).$ref()) == nullptr), "32769u16.CheckedNextPow2==null");
		#line 1348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(IsMultipleOf)(a.$ref(), Builtin::u16(5U))), "a.IsMultipleOf(5u16)");
		#line 1349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((!ADV_UFCS(IsMultipleOf)(a.$ref(), Builtin::u16(7U))), "!a.IsMultipleOf(7u16)");
		#line 1351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(MultiplyBy10)(Builtin::u16(10U).$ref()) == Builtin::i32(100)), "10u16.MultiplyBy10==100");
		#line 1352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UPCS(MultiplyBy16)(Builtin::u16(10U).$ref()) == Builtin::i32(160)), "10u16.MultiplyBy16==160");
		#line 1355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_qst)(a, Builtin::u16(100U)) == Builtin::u16(30100U)), "a+?100u16==30100u16");
		#line 1356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_qst)(a, ADV_USPCS(MaxValue, Builtin::u16)()) == nullptr), "a+?u16.MaxValue==null");
		#line 1357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_UFCS(_operator_add_qst_eq)(a, Builtin::u16(5U));
		#line 1358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a == Builtin::i32(30005)), "a==30005");
		#line 1359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_UFCS(_operator_add_qst_eq)(a, Builtin::u16(55000U));
		#line 1360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a == Builtin::i32(30005)), "a==30005");
		#line 1361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_ne)(a, Builtin::u16(100U)) == Builtin::i32(30105)), "a+!100u16==30105");
		#line 1362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_mod)(a, Builtin::u16(100U)) == Builtin::i32(30105)), "a+%100u16==30105");
		#line 1363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_mod)(a, Builtin::u16(35531U)) == ADV_USPCS(MinValue, Builtin::u16)()), "a+%35531u16==u16.MinValue");
		#line 1364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_UFCS(_operator_add_mod_eq)(a, ADV_USPCS(MaxValue, Builtin::u16)());
		#line 1365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a == Builtin::i32(30004)), "a==30004");
		#line 1366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_or)(a, Builtin::u16(50000U)) == ADV_USPCS(MaxValue, Builtin::u16)()), "a+|50000u16==u16.MaxValue");
		#line 1367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_UFCS(_operator_add_or_eq)(a, ADV_USPCS(MaxValue, Builtin::u16)());
		#line 1368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a = Builtin::u16(30005U);
		#line 1369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_or)(a, Builtin::u16(60000U)) == ADV_USPCS(MaxValue, Builtin::u16)()), "a+|60000u16==u16.MaxValue");
		#line 1370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		{
			#line 1371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_add_mod_qst)(a, ADV_USPCS(MaxValue, Builtin::u16)());
			#line 1372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			ADV_ASSERT((result == Builtin::i32(30004) && overflowed), "result==30004&&overflowed");
		}
		#line 1375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a = ADV_USPCS(MaxValue, Builtin::u16)() - Builtin::i32(1);
		#line 1376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_add_qst_postfix)(a) == ADV_USPCS(MaxValue, Builtin::u16)() - Builtin::i32(1)), "a++?==u16.MaxValue-1");
		#line 1377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::u16)()), "a==u16.MaxValue");
		#line 1378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_UFCS(_operator_add_add_mod_postfix)(a);
		#line 1379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::u16)()), "a==u16.MinValue");
		#line 1380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a = ADV_USPCS(MaxValue, Builtin::u16)();
		#line 1381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_UFCS(_operator_add_add_or_postfix)(a);
		#line 1382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::u16)()), "a==u16.MaxValue");
		#line 1384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		{
			#line 1385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.$ref(), Builtin::u16(0U), Builtin::Boolean(false));
			#line 1386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			ADV_ASSERT((result == ADV_USPCS(MaxValue, Builtin::u16)() && !overflowed), "result==u16.MaxValue&&!overflowed");
		}
		#line 1388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		{
			#line 1389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.$ref(), Builtin::u16(0U), Builtin::Boolean(true));
			#line 1390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			ADV_ASSERT((result == ADV_USPCS(MinValue, Builtin::u16)() && overflowed), "result==u16.MinValue&&overflowed");
		}
		#line 1392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		{
			#line 1393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.$ref(), Builtin::u16(10U), Builtin::Boolean(true));
			#line 1394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			ADV_ASSERT((result == Builtin::i32(10) && overflowed), "result==10&&overflowed");
		}
		#line 1397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_qst)(a, Builtin::u16(10000U)) == Builtin::u16(55535U)), "a-?10000u16==55535u16");
		#line 1398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_qst)(Builtin::u16(10U), ADV_USPCS(MaxValue, Builtin::u16)()) == nullptr), "10u16-?u16.MaxValue==null");
		#line 1399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_UFCS(_operator_sub_qst_eq)(a, Builtin::u16(13300U));
		#line 1400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a == Builtin::i32(52235)), "a==52235");
		#line 1401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_UFCS(_operator_sub_qst_eq)(a, Builtin::u16(55000U));
		#line 1402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a == Builtin::i32(52235)), "a==52235");
		#line 1403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_ne)(a, Builtin::u16(1U)) == Builtin::i32(52234)), "a-!1u16==52234");
		#line 1404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_mod)(a, Builtin::u16(60000U)) == Builtin::i32(57771)), "a-%60000u16==57771");
		#line 1405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_UFCS(_operator_sub_mod_eq)(a, ADV_USPCS(MaxValue, Builtin::u16)());
		#line 1406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a == Builtin::i32(52236)), "a==52236");
		#line 1407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_or)(a, Builtin::u16(60000U)) == ADV_USPCS(MinValue, Builtin::u16)()), "a-|60000u16==u16.MinValue");
		#line 1408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_UFCS(_operator_sub_or_eq)(a, ADV_USPCS(MaxValue, Builtin::u16)());
		#line 1409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::u16)()), "a==u16.MinValue");
		#line 1410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		{
			#line 1411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_sub_mod_qst)(a, Builtin::u16(2U));
			#line 1412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			ADV_ASSERT((result == Builtin::i32(65534) && overflowed), "result==65534&&overflowed");
		}
		#line 1415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a = ADV_USPCS(MinValue, Builtin::u16)() + Builtin::i32(1);
		#line 1416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_sub_qst_postfix)(a) == ADV_USPCS(MinValue, Builtin::u16)() + Builtin::i32(1)), "a--?==u16.MinValue+1");
		#line 1417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::u16)()), "a==u16.MinValue");
		#line 1418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_UFCS(_operator_sub_sub_mod_postfix)(a);
		#line 1419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::u16)()), "a==u16.MaxValue");
		#line 1420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a = ADV_USPCS(MinValue, Builtin::u16)();
		#line 1421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_UFCS(_operator_sub_sub_or_postfix)(a);
		#line 1422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::u16)()), "a==u16.MinValue");
		#line 1424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		{
			#line 1425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.$ref(), Builtin::u16(0U), Builtin::Boolean(false));
			#line 1426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			ADV_ASSERT((result == ADV_USPCS(MinValue, Builtin::u16)() && !overflowed), "result==u16.MinValue&&!overflowed");
		}
		#line 1428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		{
			#line 1429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.$ref(), Builtin::u16(0U), Builtin::Boolean(true));
			#line 1430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			ADV_ASSERT((result == ADV_USPCS(MaxValue, Builtin::u16)() && overflowed), "result==u16.MaxValue&&overflowed");
		}
		#line 1432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		{
			#line 1433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.$ref(), Builtin::u16(10U), Builtin::Boolean(true));
			#line 1434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			ADV_ASSERT((result == Builtin::i32(65525) && overflowed), "result==65525&&overflowed");
		}
		#line 1437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_qst)(a, Builtin::u16(1U)) == ADV_USPCS(MinValue, Builtin::u16)()), "a*?1u16==u16.MinValue");
		#line 1438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a = Builtin::u16(1500U);
		#line 1439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_qst)(a, Builtin::u16(200U)) == nullptr), "a*?200u16==null");
		#line 1440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_UFCS(_operator_mul_qst_eq)(a, Builtin::u16(50U));
		#line 1441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a == Builtin::i32(1500)), "a==1500");
		#line 1442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a = Builtin::u16(15U);
		#line 1443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a == Builtin::i32(15)), "a==15");
		#line 1444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_ne)(a, Builtin::u16(3U)) == Builtin::i32(45)), "a*!3u16==45");
		#line 1445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_mod)(a, Builtin::u16(6U)) == Builtin::i32(90)), "a*%6u16==90");
		#line 1446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_mod)(a, Builtin::u16(5000U)) == Builtin::i32(9464)), "a*%5000u16==9464");
		#line 1447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_UFCS(_operator_mul_mod_eq)(a, Builtin::u16(5000U));
		#line 1448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a == Builtin::i32(9464)), "a==9464");
		#line 1449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_or)(a, Builtin::u16(5000U)) == ADV_USPCS(MaxValue, Builtin::u16)()), "a*|5000u16==u16.MaxValue");
		#line 1450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_UFCS(_operator_mul_or_eq)(a, Builtin::u16(5000U));
		#line 1451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::u16)()), "a==u16.MaxValue");
		#line 1452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_or)(a, Builtin::u16(2U)) == ADV_USPCS(MaxValue, Builtin::u16)()), "a*|2u16==u16.MaxValue");
		#line 1453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		{
			#line 1454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_mul_mod_qst)(a, Builtin::u16(2U));
			#line 1455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			ADV_ASSERT((result == Builtin::i32(65534) && overflowed), "result==65534&&overflowed");
		}
		#line 1457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a = Builtin::u16(500U);
		#line 1458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		{
			#line 1459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			const auto& [low, high] = ADV_UFCS(_operator_mul_gt)(a, (Builtin::u16(150U)));
			#line 1460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			ADV_ASSERT((low == Builtin::i32(9464) && high == Builtin::i32(1)), "low==9464&&high==1");
		}
		#line 1462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a = ADV_USPCS(MaxValue, Builtin::u16)();
		#line 1463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		{
			#line 1464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			const auto& [low, high] = ADV_UFCS(CarryingMul)(a.$ref(), Builtin::u16(2U), Builtin::u16(12U));
			#line 1465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			ADV_ASSERT((low == Builtin::i32(10) && high == Builtin::i32(2)), "low==10&&high==2");
		}
		#line 1468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a = Builtin::u16(10000U);
		#line 1469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, Builtin::i32(6000)) == Builtin::i32(1)), "a\\6000==1");
		#line 1470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a /= Builtin::i32(6000);
		#line 1471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a == Builtin::i32(2)), "a==2");
		#line 1472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a = Builtin::u16(10000U);
		#line 1473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		{
			#line 1474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)(a, Builtin::u16(6000U));
			#line 1475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			ADV_ASSERT((div == Builtin::i32(1) && rem == Builtin::i32(4000)), "div==1&&rem==4000");
		}
		#line 1477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_qst)(a, Builtin::u16(5000U)) == Builtin::u16(2U)), "a\\?5000u16==2u16");
		#line 1478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_qst)(a, Builtin::u16(0U)) == nullptr), "a\\?0u16==null");
		#line 1480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_ne)(a, Builtin::u16(5000U)) == Builtin::i32(2)), "a\\!5000u16==2");
		#line 1481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_UFCS(_operator_bsl_mod_eq)(a, Builtin::u16(5000U));
		#line 1482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a == Builtin::i32(2)), "a==2");
		#line 1483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a = Builtin::u16(10U);
		#line 1484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_UFCS(_operator_bsl_or_eq)(a, Builtin::u16(5U));
		#line 1485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a == Builtin::i32(2)), "a==2");
		#line 1486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a = Builtin::u16(10U);
		#line 1488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_bsl)(a, Builtin::u16(5U)) == Builtin::u16(2U)), "a\\\\5u16==2u16");
		#line 1489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_bsl)(a, Builtin::u16(6U)) == nullptr), "a\\\\6u16==null");
		#line 1490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_bsl_qst)(a, Builtin::u16(0U)) == nullptr), "a\\\\?0u16==null");
		#line 1492 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_not)(a, Builtin::u16(6U)) == Builtin::i32(2)), "a/~6u16==2");
		#line 1493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_lt)(a, Builtin::u16(6U)) == Builtin::i32(1)), "a/<6u16==1");
		#line 1494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_gt)(a, Builtin::u16(6U)) == Builtin::i32(2)), "a/>6u16==2");
		#line 1496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_qst)(a, Builtin::u16(5U)) == Builtin::u16(0U)), "a%?5u16==0u16");
		#line 1497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_qst)(a, Builtin::u16(0U)) == nullptr), "a%?0u16==null");
		#line 1499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_ne)(a, Builtin::u16(6U)) == Builtin::i32(4)), "a%!6u16==4");
		#line 1500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_UFCS(_operator_mod_mod_eq)(a, Builtin::u16(6U));
		#line 1501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a == Builtin::i32(4)), "a==4");
		#line 1502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a = Builtin::u16(10U);
		#line 1504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_bsl)(ADV_USPCS(MaxValue, Builtin::u16)(), Builtin::u32(4U)) == Builtin::i32(0b0000111111111111)), "u16.MaxValue>>\\4u==0b0000_1111_1111_1111");
		#line 1505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_bsl)(ADV_USPCS(MaxValue, Builtin::u16)(), Builtin::u32(20U)) == Builtin::i32(0)), "u16.MaxValue>>\\20u==0");
		#line 1506 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_bsl)(ADV_USPCS(MinValue, Builtin::u16)(), Builtin::u32(20U)) == Builtin::i32(0)), "u16.MinValue>>\\20u==0");
		#line 1507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_bsl)(ADV_USPCS(MaxValue, Builtin::u16)(), Builtin::u32(20U)) == Builtin::i32(0)), "u16.MaxValue<<\\20u==0");
		#line 1508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_qst)(ADV_USPCS(MaxValue, Builtin::u16)(), Builtin::i32(4)) == Builtin::u16(0b0000111111111111U)), "u16.MaxValue>>?4==0b0000_1111_1111_1111u16");
		#line 1509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_qst)(ADV_USPCS(MaxValue, Builtin::u16)(), Builtin::i32(20)) == nullptr), "u16.MaxValue>>?20==null");
		#line 1510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_qst)(ADV_USPCS(MaxValue, Builtin::u16)(), Builtin::i32(20)) == nullptr), "u16.MaxValue<<?20==null");
		#line 1511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_ne)(ADV_USPCS(MaxValue, Builtin::u16)(), Builtin::i32(4)) == Builtin::i32(0b0000111111111111)), "u16.MaxValue>>!4==0b0000_1111_1111_1111");
		#line 1512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_mod)(ADV_USPCS(MaxValue, Builtin::u16)(), Builtin::i32(20)) == Builtin::i32(0b0000111111111111)), "u16.MaxValue>>%20==0b0000_1111_1111_1111");
		#line 1513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a = ADV_USPCS(MaxValue, Builtin::u16)();
		#line 1514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_UFCS(_operator_gt_gt_mod_eq)(a, Builtin::i32(20));
		#line 1515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_mod)(a, Builtin::i32(20)) == Builtin::i32(0b1111111111110000)), "a<<%20==0b1111_1111_1111_0000");
		#line 1516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		{
			#line 1517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_gt_gt_mod_qst)(ADV_USPCS(MaxValue, Builtin::u16)(), Builtin::i32(20));
			#line 1518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			ADV_ASSERT((result == Builtin::i32(0b0000111111111111) && overflowed), "result==0b0000_1111_1111_1111&&overflowed");
		}
		#line 1522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		a = Builtin::u16(7U);
		#line 1523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor)(a, Builtin::u32(5U)) == Builtin::i32(16807)), "a^^5u==16807");
		#line 1524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_UFCS(_operator_xor_xor_eq)(a, Builtin::u32(5U));
		#line 1525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a == Builtin::i32(16807)), "a==16807");
		#line 1526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor)(Builtin::u16(30U), Builtin::u32(3U)) == Builtin::i32(27000)), "30u16^^3u==27000");
		#line 1527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_qst)(Builtin::u16(30U), Builtin::u32(3U)) == Builtin::u16(27000U)), "30u16^^?3u==27000u16");
		#line 1528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_qst)(Builtin::u16(30U), Builtin::u32(4U)) == nullptr), "30u16^^?4u==null");
		#line 1529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_UFCS(_operator_xor_xor_qst_eq)(a, Builtin::u32(5U));
		#line 1530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a == Builtin::i32(16807)), "a==16807");
		#line 1531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_ne)(Builtin::u16(30U), Builtin::u32(3U)) == Builtin::i32(27000)), "30u16^^!3u==27000");
		#line 1532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_mod)(Builtin::u16(30U), Builtin::u32(4U)) == Builtin::i32(23568)), "30u16^^%4u==23568");
		#line 1533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_UFCS(_operator_xor_xor_mod_eq)(a, Builtin::u32(4U));
		#line 1534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((a == Builtin::i32(5857)), "a==5857");
		#line 1535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_or)(Builtin::u16(30U), Builtin::u32(3U)) == Builtin::i32(27000)), "30u16^^|3u==27000");
		#line 1536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_or)(Builtin::u16(30U), Builtin::u32(4U)) == ADV_USPCS(MaxValue, Builtin::u16)()), "30u16^^|4u==u16.MaxValue");
		#line 1537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		{
			#line 1538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_xor_xor_mod_qst)(Builtin::u16(30U), Builtin::u32(4U));
			#line 1539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			ADV_ASSERT((result == Builtin::i32(23568) && overflowed), "result==23568&&overflowed");
		}
		return true;
	}();
	#endif	
} namespace $extensions { using namespace System;
#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	auto _operator_eq_eq_mul($extension_UInt16_20_u16 const& $this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool
	{
		#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		{
			#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			auto __tmp0 = Builtin::Cast<false, $extension_UInt16_20_u16>(obj);
			#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			if ((__tmp0.IsValid())) {
				#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				const auto& obj = *__tmp0;
				
				#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				return $this == obj;
			}
		}
		#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return Builtin::Boolean(false);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	auto _operator_lt_eq_gt_mul($extension_UInt16_73_u16 const& $this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32
	{
		#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		{
			#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			auto __tmp0 = Builtin::Cast<false, $extension_UInt16_73_u16>(obj);
			#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			if ((__tmp0.IsValid())) {
				#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				const auto& obj = *__tmp0;
				
				#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				return $this <=> obj;
			}
		}
		#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		{
			#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
			if ((!Builtin::Is(obj, nullptr))) {
				#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				auto __tmp0 = *obj; const auto& obj = __tmp0;
				
				#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				Builtin::Throw(Builtin::InvalidOperationException{});
			}
		}
		#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return Builtin::i32(1);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	auto Parse($extension_UInt16_229_u16 const& $this LIFETIMEBOUND, Builtin::Str input)  -> const typename $extension_UInt16_229_u16
	{
		#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return Builtin::u16(0U);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	auto TryParse($extension_UInt16_229_u16 const& $this LIFETIMEBOUND, Builtin::Str input) noexcept -> const Builtin::Nullable<$extension_UInt16_229_u16>
	{
		#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return Builtin::u16(0U);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	auto Log($extension_UInt16_300_u16 const& $this LIFETIMEBOUND, $extension_UInt16_300_u16 base)  -> const typename $extension_UInt16_300_u16
	{
		#line 389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		if (const auto result = ADV_UFCS(CheckedLog)($this.$ref(), base)) {
			{
				#line 389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
				return result;
			}
		}
		#line 392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
	auto getCheckedIsqrt($extension_UInt16_1007_u16 const& $this ) -> const Builtin::Nullable<$extension_UInt16_1007_u16>
	{
		#line 1017 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		constexpr Builtin::Auto<decltype(ADV_USFCS((Math), Isqrt16)(ADV_USPCS(MaxValue, $extension_UInt16_1007_u16)()))> MAX_RESULT = ADV_USFCS((Math), Isqrt16)(ADV_USPCS(MaxValue, $extension_UInt16_1007_u16)());
		#line 1018 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		const Builtin::Auto<decltype(ADV_USFCS((Math), Isqrt16)($this))> result = ADV_USFCS((Math), Isqrt16)($this); 
		#line 1019 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		ASSUME((result <=> MAX_RESULT) <= 0);
		#line 1020 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt16.ast"
		return result;
	}
	} namespace System{

}