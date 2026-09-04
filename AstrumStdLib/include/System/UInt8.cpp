#include "UInt8.h"
#include "Math.h"

namespace System {
//###############################################################################
//# Global type aliases
//###############################################################################
//###############################################################################
//# Type definitions
//###############################################################################

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
















#line 1135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	static_assert(Builtin::usize(sizeof(Builtin::u8)) == Builtin::i32(1), "u8 should be 1 byte");
#line 1136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	static_assert(ADV_USPCS(MinValue, Builtin::u8)() == Builtin::i32(0), "u8.Min should be 0");
#line 1137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	static_assert(ADV_USPCS(MaxValue, Builtin::u8)() == Builtin::i32(0xFF), "u8.Max should be 0xFF");
#line 1138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	static_assert(ADV_UFCS_NONLOCAL(_operator_gt_gt_not)(ADV_USPCS(One, Builtin::u8)(), Builtin::i32(3)) == Builtin::i32(0b00100000), "u8.One >>% 3 == 0b0010_0000");
#line 1139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	static_assert(!ADV_USPCS(IsSigned, Builtin::u8)(), "u8 must be unsigned");
#line 1140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	static_assert(ADV_USPCS(MaxDigitCount, Builtin::u8)() == Builtin::i32(3), "u8 max digit count must be 3");
#line 1141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	static_assert(ADV_UFCS_NONLOCAL(_operator_xor_xor)(Builtin::u8(2U), Builtin::u32(7U)) == Builtin::i32(128), "2u8 ^^ 7u == 128u8");
#line 1142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	static_assert(Builtin::TypeIs<Builtin::u8, IComparable<Builtin::u8>>(), "u8 should implement IComparable<u8>");
#line 1143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	static_assert(Builtin::TypeIs<Builtin::u8, IEquatable<Builtin::u8>>(), "u8 should implement IEquatable<u8>");
#line 1144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	static_assert(Builtin::TypeIs<Builtin::u8, ISelfComparable>(), "u8 should implement ISelfComparable");
#line 1145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	static_assert(Builtin::TypeIs<Builtin::u8, ISelfEquatable>(), "u8 should implement ISelfEquatable");
#line 1146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	static_assert(Builtin::TypeIs<Builtin::u8, IAdditionOperators<Builtin::u8, Builtin::u8>>(), "u8 should implement IAdditionOperators<u8, u8>");
#line 1147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	static_assert(Builtin::TypeIs<Builtin::u8, ISubtractionOperators<Builtin::u8, Builtin::u8>>(), "u8 should implement ISubtractionOperators<u8, u8>");
#line 1148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	static_assert(Builtin::TypeIs<Builtin::u8, IMultiplyOperators<Builtin::u8, Builtin::u8>>(), "u8 should implement IMultiplyOperators<u8, u8>");
#line 1149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	static_assert(Builtin::TypeIs<Builtin::u8, IDivisionOperators<Builtin::u8, Builtin::f64>>(), "u8 should implement IDivisionOperators<u8, f64>");
#line 1150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	static_assert(Builtin::TypeIs<Builtin::u8, IIntDivOperators<Builtin::u8, Builtin::u8>>(), "u8 should implement IIntDivOperators<u8, u8>");
#line 1151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	static_assert(Builtin::TypeIs<Builtin::u8, IModulusOperators<Builtin::u8, Builtin::u8>>(), "u8 should implement IModulusOperators<u8, u8>");
#line 1152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	static_assert(Builtin::TypeIs<Builtin::u8, IBitwiseOperators<Builtin::u8, Builtin::u8>>(), "u8 should implement IBitwiseOperators<u8, u8>");
#line 1153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	static_assert(Builtin::TypeIs<Builtin::u8, IShiftOperators<Builtin::u8, Builtin::u8>>(), "u8 should implement IShiftOperators<u8, u8>");
#line 1154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	static_assert(Builtin::TypeIs<Builtin::u8, IUnaryPlusOperators<Builtin::u8>>(), "u8 should implement IUnaryPlusOperators<u8>");
#line 1155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	static_assert(Builtin::TypeIs<Builtin::u8, IUnaryNegationOperators<Builtin::u8>>(), "u8 should implement IUnaryNegationOperators<u8>");
#line 1156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	static_assert(Builtin::TypeIs<Builtin::u8, IIncrementOperators<Builtin::u8>>(), "u8 should implement IIncrementOperators<u8>");
#line 1157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	static_assert(Builtin::TypeIs<Builtin::u8, IDecrementOperators<Builtin::u8>>(), "u8 should implement IDecrementOperators<u8>");
#line 1158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	static_assert(ADV_UFCS_NONLOCAL(_operator_add_mod)(ADV_USPCS(MaxValue, Builtin::u8)(), Builtin::u8(1U)) == ADV_USPCS(MinValue, Builtin::u8)(), "u8.MaxValue +% 1u8 == u8.MinValue");
#line 1159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	static_assert(ADV_UFCS_NONLOCAL(_operator_add_or)(ADV_USPCS(MaxValue, Builtin::u8)(), Builtin::u8(1U)) == ADV_USPCS(MaxValue, Builtin::u8)(), "u8.MaxValue +| 1u8 == u8.MaxValue");
#ifdef ADV_UNITTEST
	#line 1161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	static bool $Test_b25a7348bd8a44fb = [](){
		#line 1163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::u8 a = Builtin::u8(5U); 
		#line 1166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a + Builtin::u8(10U) == Builtin::i32(15)), "a+10u8==15");
		#line 1167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a + Builtin::u8(10U) == Builtin::i32(15)), "a+10u8==15");
		#line 1168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a + Builtin::i16(10) == Builtin::i32(15)), "a+10i16==15");
		#line 1169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a + Builtin::u16(10U) == Builtin::i32(15)), "a+10u16==15");
		#line 1170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a + Builtin::i32(10) == Builtin::i32(15)), "a+10i32==15");
		#line 1171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a + Builtin::u32(10U) == Builtin::i32(15)), "a+10u32==15");
		#line 1172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a + Builtin::i64(10LL) == Builtin::i32(15)), "a+10i64==15");
		#line 1173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a + Builtin::u64(10ULL) == Builtin::i32(15)), "a+10u64==15");
		#line 1174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a + Builtin::i128(10LL) == Builtin::i32(15)), "a+10i128==15");
		#line 1175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a + Builtin::u128(10ULL) == Builtin::i32(15)), "a+10u128==15");
		#line 1178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a - Builtin::i32(2) == Builtin::i32(3)), "a-2==3");
		#line 1179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a * Builtin::i32(2) == Builtin::i32(10)), "a*2==10");
		#line 1180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, Builtin::i32(2)) == Builtin::i32(2)), "a\\2==2");
		#line 1181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a % Builtin::i32(2) == Builtin::i32(1)), "a%2==1");
		#line 1182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT(((a & Builtin::i32(1)) == Builtin::i32(1)), "(a&1)==1");
		#line 1183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT(((a | Builtin::i32(1)) == Builtin::i32(5)), "(a|1)==5");
		#line 1184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT(((a ^ Builtin::i32(1)) == Builtin::i32(4)), "(a^1)==4");
		#line 1185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a << Builtin::i32(1) == Builtin::i32(10)), "a<<1==10");
		#line 1186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a >> Builtin::i32(1) == Builtin::i32(2)), "a>>1==2");
		#line 1187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a = Builtin::u8(0b11111011U);
		#line 1188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_UFCS(_operator_gt_gt_gt_eq)(a, Builtin::i32(2));
		#line 1189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a == Builtin::i32(0b00111110)), "a==0b0011_1110");
		#line 1190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_gt)(a, Builtin::i32(2)) == Builtin::i32(0b00001111)), "a>>>2==0b0000_1111");
		#line 1191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_gt)(a, Builtin::i32(7)) == Builtin::i32(0)), "a>>>7==0");
		#line 1194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a = Builtin::u8(5U);
		#line 1195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a == Builtin::i32(5)), "a==5");
		#line 1196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a != Builtin::i32(6)), "a!=6");
		#line 1197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT(((a <=> Builtin::i32(6)) < 0), "a<6");
		#line 1198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT(((a <=> Builtin::i32(5)) <= 0), "a<=5");
		#line 1199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT(((a <=> Builtin::i32(4)) > 0), "a>4");
		#line 1200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT(((a <=> Builtin::i32(5)) >= 0), "a>=5");
		#line 1203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a = Builtin::u8(5U);
		#line 1204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a++;
		#line 1205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a--;
		#line 1206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a += Builtin::i32(5);
		#line 1207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a -= Builtin::i32(5);
		#line 1208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a *= Builtin::i32(2);
		#line 1209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_UFCS(_operator_bsl_eq)(a, Builtin::i32(2));
		#line 1210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a %= Builtin::i32(1);
		#line 1211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a &= Builtin::i32(1);
		#line 1212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a |= Builtin::i32(1);
		#line 1213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a ^= Builtin::i32(1);
		#line 1214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a <<= Builtin::i32(1);
		#line 1215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a >>= Builtin::i32(1);
		#line 1216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a == Builtin::i32(0)), "a==0");
		#line 1217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a = Builtin::u8(10U);
		#line 1218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_not)(a) == Builtin::i32(0b11110101)), "~a==0b1111_0101");
		#line 1221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::u8 b = Builtin::u8(5U); 
		#line 1222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::Nullable<Builtin::u8> c = nullptr; 
		#line 1223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::Nullable<Builtin::u8> d = Builtin::u8(5U); 
		#line 1224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a != b), "a!=b");
		#line 1225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((b != c), "b!=c");
		#line 1226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((!Builtin::IdentityEquals(b, c)), "b!==c");
		#line 1227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT(((b <=> c) > 0), "b>c");
		#line 1228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((c != b), "c!=b");
		#line 1229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((c == nullptr), "c==null");
		#line 1230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((d != nullptr), "d!=null");
		#line 1231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT(((c <=> d) < 0), "c<d");
		#line 1232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((b == d), "b==d");
		#line 1236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::Nullable<Builtin::ObjectRef> o = c; 
		#line 1237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		o = d;
		#line 1238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_ne_eq_mul)(b, o)), "b!=*o");
		#line 1239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		IComparable<Builtin::u8> icomp = a; 
		#line 1240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT(((icomp <=> b) > 0), "icomp>b");
		#line 1243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a = Builtin::u8(200U);
		#line 1244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(a.$ref()) == Builtin::i32(200)), "a.HashCode==200");
		#line 1245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(a) == Builtin::i32(200)), "#a==200");
		#line 1247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a = Builtin::u8(250U);
		#line 1248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(ToUInt32)(a.$ref()) == Builtin::i32(250)), "a.ToUInt32()==250");
		#line 1249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(NarrowToInt8)(a.$ref()) == Builtin::i32(-6)), "a.NarrowToInt8()==-6");
		#line 1252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a = Builtin::u8(10U);
		#line 1253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		b = Builtin::u8(6U);
		#line 1254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(Abs)(b.$ref()) == Builtin::i32(6)), "b.Abs==6");
		#line 1255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(IsFinite)(b.$ref())), "b.IsFinite");
		#line 1256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(IsInteger)(b.$ref())), "b.IsInteger");
		#line 1257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((!ADV_UPCS(IsNegative)(b.$ref())), "!b.IsNegative");
		#line 1258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(IsPositive)(a.$ref())), "a.IsPositive");
		#line 1259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(IsCanonical)(b.$ref())), "b.IsCanonical");
		#line 1260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((!ADV_UPCS(IsComplexNumber)(b.$ref())), "!b.IsComplexNumber");
		#line 1261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(IsRealNumber)(b.$ref())), "b.IsRealNumber");
		#line 1262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((!ADV_UPCS(IsImaginaryNumber)(b.$ref())), "!b.IsImaginaryNumber");
		#line 1263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(IsEvenInteger)(b.$ref())), "b.IsEvenInteger");
		#line 1264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((!ADV_UPCS(IsOddInteger)(b.$ref())), "!b.IsOddInteger");
		#line 1265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((!ADV_UPCS(IsInfinity)(b.$ref())), "!b.IsInfinity");
		#line 1266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((!ADV_UPCS(IsPositiveInfinity)(b.$ref())), "!b.IsPositiveInfinity");
		#line 1267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((!ADV_UPCS(IsNegativeInfinity)(b.$ref())), "!b.IsNegativeInfinity");
		#line 1268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((!ADV_UPCS(IsNaN)(b.$ref())), "!b.IsNaN");
		#line 1269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(IsNormal)(b.$ref())), "b.IsNormal");
		#line 1270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((!ADV_UPCS(IsSubnormal)(b.$ref())), "!b.IsSubnormal");
		#line 1271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((!ADV_UPCS(IsZero)(b.$ref())), "!b.IsZero");
		#line 1274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(Sign)(a.$ref()) == +Builtin::i32(1)), "a.Sign==+1");
		#line 1275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(CopySign)(a.$ref(), b) == a), "a.CopySign(b)==a");
		#line 1276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(Max)(a.$ref(), b) == a), "a.Max(b)==a");
		#line 1277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(Min)(a.$ref(), b) == b), "a.Min(b)==b");
		#line 1278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(MaxNumber)(a.$ref(), b) == a), "a.MaxNumber(b)==a");
		#line 1279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(MinNumber)(a.$ref(), b) == b), "a.MinNumber(b)==b");
		#line 1280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(Clamp)(b.$ref(), Builtin::u8(1U), Builtin::u8(5U)) == Builtin::i32(5)), "b.Clamp(1u8,5u8)==5");
		#line 1283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(IsPow2)(Builtin::u8(32U).$ref())), "32u8.IsPow2");
		#line 1284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((!ADV_UPCS(IsPow2)(Builtin::u8(127U).$ref())), "!127u8.IsPow2");
		#line 1285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::u8(2U).$ref()) == Builtin::i32(1)), "2u8.Log2==1");
		#line 1286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::u8(16U).$ref()) == Builtin::i32(4)), "16u8.Log2==4");
		#line 1287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::u8(64U).$ref()) == Builtin::i32(6)), "64u8.Log2==6");
		#line 1288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::u8(250U).$ref()) == Builtin::i32(7)), "250u8.Log2==7");
		#line 1289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::u8(2U).$ref()) == Builtin::i32(1)), "2u8.Log2Ceiling==1");
		#line 1290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::u8(16U).$ref()) == Builtin::i32(4)), "16u8.Log2Ceiling==4");
		#line 1291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::u8(65U).$ref()) == Builtin::i32(7)), "65u8.Log2Ceiling==7");
		#line 1292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(Log2Ceiling)(Builtin::u8(250U).$ref()) == Builtin::i32(8)), "250u8.Log2Ceiling==8");
		#line 1293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(CheckedLog2)(Builtin::u8(0U).$ref()) == nullptr), "0u8.CheckedLog2==null");
		#line 1294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(Builtin::u8(5U).$ref()) == Builtin::i32(0)), "5u8.Log10==0");
		#line 1295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(a.$ref()) == Builtin::i32(1)), "a.Log10==1");
		#line 1296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(ADV_USPCS(MaxValue, Builtin::u8)().$ref()) == Builtin::i32(2)), "u8.MaxValue.Log10==2");
		#line 1297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(Log)(Builtin::u8(5U).$ref(), Builtin::u8(5U)) == Builtin::i32(1)), "5u8.Log(5u8)==1");
		#line 1298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(Midpoint)(a.$ref(), Builtin::u8(30U)) == Builtin::i32(20)), "a.Midpoint(30u8)==20");
		#line 1299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(Midpoint)(Builtin::u8(100U).$ref(), ADV_USPCS(MaxValue, Builtin::u8)()) == Builtin::i32(177)), "100u8.Midpoint(u8.MaxValue)==177");
		#line 1300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)(a.$ref(), Builtin::u8(10U)) == Builtin::i32(10)), "a.NextMultipleOf(10u8)==10");
		#line 1301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)(Builtin::u8(11U).$ref(), Builtin::u8(10U)) == Builtin::i32(20)), "11u8.NextMultipleOf(10u8)==20");
		#line 1302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(NextMultipleOf)(Builtin::u8(60U).$ref(), Builtin::u8(8U)) == Builtin::i32(64)), "60u8.NextMultipleOf(8u8)==64");
		#line 1303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(ByteCount)(a.$ref()) == Builtin::i32(1)), "a.ByteCount==1");
		#line 1304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(ByteSwapped)(a.$ref()) == a), "a.ByteSwapped==a");
		#line 1305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_not)(Builtin::u8(0b1010U), Builtin::i32(3)) == Builtin::i32(0b01010000)), "0b1010_u8<<~3==0b0101_0000");
		#line 1306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_not)(Builtin::u8(0b1010U), Builtin::i32(5)) == Builtin::i32(0b01000001)), "0b1010_u8<<~5==0b0100_0001");
		#line 1307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_not)(Builtin::u8(0b1010U), Builtin::i32(3)) == Builtin::i32(0b01000001)), "0b1010_u8>>~3==0b0100_0001");
		#line 1308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_not)(Builtin::u8(0b1010U), Builtin::i32(5)) == Builtin::i32(0b01010000)), "0b1010_u8>>~5==0b0101_0000");
		#line 1309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(MinimalBitWidth)(Builtin::u8(7U).$ref()) == Builtin::i32(3)), "7u8.MinimalBitWidth==3");
		#line 1311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(MinimalBitWidth)(a.$ref()) == Builtin::i32(4)), "a.MinimalBitWidth==4");
		#line 1312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(LeadingZeroCount)(a.$ref()) == Builtin::i32(4)), "a.LeadingZeroCount==4");
		#line 1313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(TrailingZeroCount)(a.$ref()) == Builtin::i32(1)), "a.TrailingZeroCount==1");
		#line 1314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(LeadingOneCount)(a.$ref()) == Builtin::i32(0)), "a.LeadingOneCount==0");
		#line 1315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(TrailingOneCount)(a.$ref()) == Builtin::i32(0)), "a.TrailingOneCount==0");
		#line 1316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(PopCount)(a.$ref()) == Builtin::i32(2)), "a.PopCount==2");
		#line 1317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(ZeroCount)(a.$ref()) == Builtin::i32(6)), "a.ZeroCount==6");
		#line 1318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(ReverseBits)(a.$ref()) == Builtin::i32(0b01010000)), "a.ReverseBits==0b0101_0000");
		#line 1319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(NextPow2)(a.$ref()) == Builtin::i32(16)), "a.NextPow2==16");
		#line 1320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(PrevPow2)(a.$ref()) == Builtin::i32(8)), "a.PrevPow2==8");
		#line 1321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(PrevPow2)(Builtin::u8(1U).$ref()) == Builtin::i32(0)), "1u8.PrevPow2==0");
		#line 1322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(PrevPow2)(Builtin::u8(2U).$ref()) == Builtin::i32(2)), "2u8.PrevPow2==2");
		#line 1323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(NextPow2)(Builtin::u8(2U).$ref()) == Builtin::i32(2)), "2u8.NextPow2==2");
		#line 1324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(NextPow2)(Builtin::u8(3U).$ref()) == Builtin::i32(4)), "3u8.NextPow2==4");
		#line 1325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(PrevPow2)(Builtin::u8(3U).$ref()) == Builtin::i32(2)), "3u8.PrevPow2==2");
		#line 1326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(NextPow2)(Builtin::u8(127U).$ref()) == Builtin::i32(128)), "127u8.NextPow2==128");
		#line 1327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(CheckedNextPow2)(Builtin::u8(129U).$ref()) == nullptr), "129u8.CheckedNextPow2==null");
		#line 1329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(IsMultipleOf)(a.$ref(), Builtin::u8(5U))), "a.IsMultipleOf(5u8)");
		#line 1330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((!ADV_UFCS(IsMultipleOf)(a.$ref(), Builtin::u8(6U))), "!a.IsMultipleOf(6u8)");
		#line 1332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(MultiplyBy10)(a.$ref()) == Builtin::i32(100)), "a.MultiplyBy10==100");
		#line 1333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UPCS(MultiplyBy16)(a.$ref()) == Builtin::i32(160)), "a.MultiplyBy16==160");
		#line 1336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_qst)(a, Builtin::u8(100U)) == Builtin::u8(110U)), "a+?100u8==110u8");
		#line 1337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_qst)(a, ADV_USPCS(MaxValue, Builtin::u8)()) == nullptr), "a+?u8.MaxValue==null");
		#line 1338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_UFCS(_operator_add_qst_eq)(a, Builtin::u8(5U));
		#line 1339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a == Builtin::i32(15)), "a==15");
		#line 1340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_UFCS(_operator_add_qst_eq)(a, Builtin::u8(250U));
		#line 1341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a == Builtin::i32(15)), "a==15");
		#line 1342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_ne)(a, Builtin::u8(100U)) == Builtin::i32(115)), "a+!100u8==115");
		#line 1343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_mod)(a, Builtin::u8(100U)) == Builtin::i32(115)), "a+%100u8==115");
		#line 1344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_mod)(a, Builtin::u8(241U)) == ADV_USPCS(MinValue, Builtin::u8)()), "a+%241u8==u8.MinValue");
		#line 1345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_UFCS(_operator_add_mod_eq)(a, ADV_USPCS(MaxValue, Builtin::u8)());
		#line 1346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a == Builtin::i32(14)), "a==14");
		#line 1347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_or)(a, Builtin::u8(250U)) == ADV_USPCS(MaxValue, Builtin::u8)()), "a+|250u8==u8.MaxValue");
		#line 1348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_UFCS(_operator_add_or_eq)(a, ADV_USPCS(MaxValue, Builtin::u8)());
		#line 1349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a = Builtin::u8(13U);
		#line 1350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_or)(a, Builtin::u8(250U)) == ADV_USPCS(MaxValue, Builtin::u8)()), "a+|250u8==u8.MaxValue");
		#line 1351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		{
			#line 1352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_add_mod_qst)(a, Builtin::u8(250U));
			#line 1353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			ADV_ASSERT((result == Builtin::i32(7) && overflowed), "result==7&&overflowed");
		}
		#line 1356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a = ADV_USPCS(MaxValue, Builtin::u8)() - Builtin::i32(1);
		#line 1357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_add_add_qst_postfix)(a) == ADV_USPCS(MaxValue, Builtin::u8)() - Builtin::i32(1)), "a++?==u8.MaxValue-1");
		#line 1358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::u8)()), "a==u8.MaxValue");
		#line 1359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_UFCS(_operator_add_add_mod_postfix)(a);
		#line 1360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::u8)()), "a==u8.MinValue");
		#line 1361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a = ADV_USPCS(MaxValue, Builtin::u8)();
		#line 1362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_UFCS(_operator_add_add_or_postfix)(a);
		#line 1363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::u8)()), "a==u8.MaxValue");
		#line 1365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		{
			#line 1366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.$ref(), Builtin::u8(0U), Builtin::Boolean(false));
			#line 1367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			ADV_ASSERT((result == ADV_USPCS(MaxValue, Builtin::u8)() && !overflowed), "result==u8.MaxValue&&!overflowed");
		}
		#line 1369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		{
			#line 1370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.$ref(), Builtin::u8(0U), Builtin::Boolean(true));
			#line 1371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			ADV_ASSERT((result == ADV_USPCS(MinValue, Builtin::u8)() && overflowed), "result==u8.MinValue&&overflowed");
		}
		#line 1373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		{
			#line 1374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			const auto& [result, overflowed] = ADV_UFCS(CarryingAdd)(a.$ref(), Builtin::u8(10U), Builtin::Boolean(true));
			#line 1375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			ADV_ASSERT((result == Builtin::i32(10) && overflowed), "result==10&&overflowed");
		}
		#line 1378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_qst)(a, Builtin::u8(100U)) == Builtin::u8(155U)), "a-?100u8==155u8");
		#line 1379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_qst)(Builtin::u8(10U), ADV_USPCS(MaxValue, Builtin::u8)()) == nullptr), "10u8-?u8.MaxValue==null");
		#line 1380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_UFCS(_operator_sub_qst_eq)(a, Builtin::u8(133U));
		#line 1381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a == Builtin::i32(122)), "a==122");
		#line 1382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_UFCS(_operator_sub_qst_eq)(a, Builtin::u8(120U));
		#line 1383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a == Builtin::i32(2)), "a==2");
		#line 1384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_ne)(a, Builtin::u8(1U)) == Builtin::i32(1)), "a-!1u8==1");
		#line 1385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_mod)(a, Builtin::u8(255U)) == Builtin::i32(3)), "a-%255u8==3");
		#line 1386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_UFCS(_operator_sub_mod_eq)(a, ADV_USPCS(MaxValue, Builtin::u8)());
		#line 1387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a == Builtin::i32(3)), "a==3");
		#line 1388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_or)(a, Builtin::u8(4U)) == ADV_USPCS(MinValue, Builtin::u8)()), "a-|4u8==u8.MinValue");
		#line 1389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_UFCS(_operator_sub_or_eq)(a, ADV_USPCS(MaxValue, Builtin::u8)());
		#line 1390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::u8)()), "a==u8.MinValue");
		#line 1391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		{
			#line 1392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_sub_mod_qst)(a, Builtin::u8(2U));
			#line 1393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			ADV_ASSERT((result == Builtin::i32(254) && overflowed), "result==254&&overflowed");
		}
		#line 1396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a = ADV_USPCS(MinValue, Builtin::u8)() + Builtin::i32(1);
		#line 1397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_sub_sub_qst_postfix)(a) == ADV_USPCS(MinValue, Builtin::u8)() + Builtin::i32(1)), "a--?==u8.MinValue+1");
		#line 1398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::u8)()), "a==u8.MinValue");
		#line 1399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_UFCS(_operator_sub_sub_mod_postfix)(a);
		#line 1400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::u8)()), "a==u8.MaxValue");
		#line 1401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a = ADV_USPCS(MinValue, Builtin::u8)();
		#line 1402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_UFCS(_operator_sub_sub_or_postfix)(a);
		#line 1403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a == ADV_USPCS(MinValue, Builtin::u8)()), "a==u8.MinValue");
		#line 1405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		{
			#line 1406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.$ref(), Builtin::u8(0U), Builtin::Boolean(false));
			#line 1407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			ADV_ASSERT((result == ADV_USPCS(MinValue, Builtin::u8)() && !overflowed), "result==u8.MinValue&&!overflowed");
		}
		#line 1409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		{
			#line 1410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.$ref(), Builtin::u8(0U), Builtin::Boolean(true));
			#line 1411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			ADV_ASSERT((result == ADV_USPCS(MaxValue, Builtin::u8)() && overflowed), "result==u8.MaxValue&&overflowed");
		}
		#line 1413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		{
			#line 1414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			const auto& [result, overflowed] = ADV_UFCS(BorrowingSub)(a.$ref(), Builtin::u8(10U), Builtin::Boolean(true));
			#line 1415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			ADV_ASSERT((result == Builtin::i32(245) && overflowed), "result==245&&overflowed");
		}
		#line 1418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_qst)(a, Builtin::u8(1U)) == ADV_USPCS(MinValue, Builtin::u8)()), "a*?1u8==u8.MinValue");
		#line 1419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a = Builtin::u8(15U);
		#line 1420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_qst)(a, Builtin::u8(20U)) == nullptr), "a*?20u8==null");
		#line 1421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_UFCS(_operator_mul_qst_eq)(a, Builtin::u8(5U));
		#line 1422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a == Builtin::i32(75)), "a==75");
		#line 1423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a = Builtin::u8(15U);
		#line 1424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a == Builtin::i32(15)), "a==15");
		#line 1425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_ne)(a, Builtin::u8(3U)) == Builtin::i32(45)), "a*!3u8==45");
		#line 1426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_mod)(a, Builtin::u8(6U)) == Builtin::i32(90)), "a*%6u8==90");
		#line 1427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_mod)(a, Builtin::u8(20U)) == Builtin::i32(44)), "a*%20u8==44");
		#line 1428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_UFCS(_operator_mul_mod_eq)(a, Builtin::u8(6U));
		#line 1429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a == Builtin::i32(90)), "a==90");
		#line 1430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_or)(a, Builtin::u8(10U)) == ADV_USPCS(MaxValue, Builtin::u8)()), "a*|10u8==u8.MaxValue");
		#line 1431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_UFCS(_operator_mul_or_eq)(a, Builtin::u8(3U));
		#line 1432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a == ADV_USPCS(MaxValue, Builtin::u8)()), "a==u8.MaxValue");
		#line 1433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_or)(a, Builtin::u8(2U)) == ADV_USPCS(MaxValue, Builtin::u8)()), "a*|2u8==u8.MaxValue");
		#line 1434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		{
			#line 1435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_mul_mod_qst)(a, Builtin::u8(2U));
			#line 1436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			ADV_ASSERT((result == Builtin::i32(254) && overflowed), "result==254&&overflowed");
		}
		#line 1438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a = Builtin::u8(5U);
		#line 1439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		{
			#line 1440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			const auto& [low, high] = ADV_UFCS(_operator_mul_gt)(a, (Builtin::u8(120U)));
			#line 1441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			ADV_ASSERT((low == Builtin::i32(88) && high == Builtin::i32(2)), "low==88&&high==2");
		}
		#line 1443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a = ADV_USPCS(MaxValue, Builtin::u8)();
		#line 1444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		{
			#line 1445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			const auto& [low, high] = ADV_UFCS(CarryingMul)(a.$ref(), Builtin::u8(2U), Builtin::u8(12U));
			#line 1446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			ADV_ASSERT((low == Builtin::i32(10) && high == Builtin::i32(2)), "low==10&&high==2");
		}
		#line 1449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a = Builtin::u8(10U);
		#line 1450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl)(a, Builtin::i32(6)) == Builtin::i32(1)), "a\\6==1");
		#line 1451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a /= Builtin::i32(6);
		#line 1452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a == Builtin::i32(2)), "a==2");
		#line 1453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a = Builtin::u8(10U);
		#line 1454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		{
			#line 1455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)(a, Builtin::u8(6U));
			#line 1456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			ADV_ASSERT((div == Builtin::i32(1) && rem == Builtin::i32(4)), "div==1&&rem==4");
		}
		#line 1458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_qst)(a, Builtin::u8(5U)) == Builtin::u8(2U)), "a\\?5u8==2u8");
		#line 1459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_qst)(a, Builtin::u8(0U)) == nullptr), "a\\?0u8==null");
		#line 1461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_ne)(a, Builtin::u8(5U)) == Builtin::i32(2)), "a\\!5u8==2");
		#line 1462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_UFCS(_operator_bsl_mod_eq)(a, Builtin::u8(5U));
		#line 1463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a == Builtin::i32(2)), "a==2");
		#line 1464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a = Builtin::u8(10U);
		#line 1465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_UFCS(_operator_bsl_or_eq)(a, Builtin::u8(5U));
		#line 1466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a == Builtin::i32(2)), "a==2");
		#line 1467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a = Builtin::u8(10U);
		#line 1469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_bsl)(a, Builtin::u8(5U)) == Builtin::u8(2U)), "a\\\\5u8==2u8");
		#line 1470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_bsl)(a, Builtin::u8(6U)) == nullptr), "a\\\\6u8==null");
		#line 1471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_bsl_bsl_qst)(a, Builtin::u8(0U)) == nullptr), "a\\\\?0u8==null");
		#line 1473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_not)(a, Builtin::u8(6U)) == Builtin::i32(2)), "a/~6u8==2");
		#line 1474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_lt)(a, Builtin::u8(6U)) == Builtin::i32(1)), "a/<6u8==1");
		#line 1475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_div_gt)(a, Builtin::u8(6U)) == Builtin::i32(2)), "a/>6u8==2");
		#line 1477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_qst)(a, Builtin::u8(5U)) == Builtin::u8(0U)), "a%?5u8==0u8");
		#line 1478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_qst)(a, Builtin::u8(0U)) == nullptr), "a%?0u8==null");
		#line 1480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mod_ne)(a, Builtin::u8(6U)) == Builtin::i32(4)), "a%!6u8==4");
		#line 1481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_UFCS(_operator_mod_mod_eq)(a, Builtin::u8(6U));
		#line 1482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a == Builtin::i32(4)), "a==4");
		#line 1483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a = Builtin::u8(10U);
		#line 1485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_bsl)(ADV_USPCS(MaxValue, Builtin::u8)(), Builtin::u32(4U)) == Builtin::i32(0b00001111)), "u8.MaxValue>>\\4u==0b0000_1111");
		#line 1486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_bsl)(ADV_USPCS(MaxValue, Builtin::u8)(), Builtin::u32(10U)) == Builtin::i32(0)), "u8.MaxValue>>\\10u==0");
		#line 1487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_bsl)(ADV_USPCS(MinValue, Builtin::u8)(), Builtin::u32(10U)) == Builtin::i32(0)), "u8.MinValue>>\\10u==0");
		#line 1488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_bsl)(ADV_USPCS(MaxValue, Builtin::u8)(), Builtin::u32(10U)) == Builtin::i32(0)), "u8.MaxValue<<\\10u==0");
		#line 1489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_qst)(ADV_USPCS(MaxValue, Builtin::u8)(), Builtin::i32(4)) == Builtin::u8(0b00001111U)), "u8.MaxValue>>?4==0b0000_1111u8");
		#line 1490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_qst)(ADV_USPCS(MaxValue, Builtin::u8)(), Builtin::i32(10)) == nullptr), "u8.MaxValue>>?10==null");
		#line 1491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_qst)(ADV_USPCS(MaxValue, Builtin::u8)(), Builtin::i32(10)) == nullptr), "u8.MaxValue<<?10==null");
		#line 1492 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_ne)(ADV_USPCS(MaxValue, Builtin::u8)(), Builtin::i32(4)) == Builtin::i32(0b00001111)), "u8.MaxValue>>!4==0b0000_1111");
		#line 1493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_gt_gt_mod)(ADV_USPCS(MaxValue, Builtin::u8)(), Builtin::i32(12)) == Builtin::i32(0b00001111)), "u8.MaxValue>>%12==0b0000_1111");
		#line 1494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a = ADV_USPCS(MaxValue, Builtin::u8)();
		#line 1495 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_UFCS(_operator_gt_gt_mod_eq)(a, Builtin::i32(12));
		#line 1496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_lt_lt_mod)(a, Builtin::i32(12)) == Builtin::i32(0b11110000)), "a<<%12==0b1111_0000");
		#line 1497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		{
			#line 1498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_gt_gt_mod_qst)(ADV_USPCS(MaxValue, Builtin::u8)(), Builtin::i32(12));
			#line 1499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			ADV_ASSERT((result == Builtin::i32(0b00001111) && overflowed), "result==0b0000_1111&&overflowed");
		}
		#line 1503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		a = Builtin::u8(7U);
		#line 1504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor)(a, Builtin::u32(2U)) == Builtin::i32(49)), "a^^2u==49");
		#line 1505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_UFCS(_operator_xor_xor_eq)(a, Builtin::u32(2U));
		#line 1506 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a == Builtin::i32(49)), "a==49");
		#line 1507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor)(Builtin::u8(3U), Builtin::u32(4U)) == Builtin::i32(81)), "3u8^^4u==81");
		#line 1508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_qst)(Builtin::u8(3U), Builtin::u32(4U)) == Builtin::u8(81U)), "3u8^^?4u==81u8");
		#line 1509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_qst)(Builtin::u8(3U), Builtin::u32(6U)) == nullptr), "3u8^^?6u==null");
		#line 1510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_UFCS(_operator_xor_xor_qst_eq)(a, Builtin::u32(2U));
		#line 1511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a == Builtin::i32(49)), "a==49");
		#line 1512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_ne)(Builtin::u8(3U), Builtin::u32(4U)) == Builtin::i32(81)), "3u8^^!4u==81");
		#line 1513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_mod)(Builtin::u8(3U), Builtin::u32(6U)) == Builtin::i32(217)), "3u8^^%6u==217");
		#line 1514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_UFCS(_operator_xor_xor_mod_eq)(a, Builtin::u32(2U));
		#line 1515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((a == Builtin::i32(97)), "a==97");
		#line 1516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_or)(Builtin::u8(3U), Builtin::u32(4U)) == Builtin::i32(81)), "3u8^^|4u==81");
		#line 1517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor_or)(Builtin::u8(3U), Builtin::u32(6U)) == ADV_USPCS(MaxValue, Builtin::u8)()), "3u8^^|6u==u8.MaxValue");
		#line 1518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		{
			#line 1519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			const auto& [result, overflowed] = ADV_UFCS(_operator_xor_xor_mod_qst)(Builtin::u8(3U), Builtin::u32(6U));
			#line 1520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			ADV_ASSERT((result == Builtin::i32(217) && overflowed), "result==217&&overflowed");
		}
		return true;
	}();
	#endif	
} namespace $extensions { using namespace System;
#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	auto _operator_eq_eq_mul($extension_UInt8_20_u8 const& $this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool
	{
		#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		{
			#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			auto __tmp0 = Builtin::Cast<false, $extension_UInt8_20_u8>(obj);
			#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			if ((__tmp0.IsValid())) {
				#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				const auto& obj = *__tmp0;
				
				#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				return $this == obj;
			}
		}
		#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return Builtin::Boolean(false);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	auto _operator_lt_eq_gt_mul($extension_UInt8_73_u8 const& $this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32
	{
		#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		{
			#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			auto __tmp0 = Builtin::Cast<false, $extension_UInt8_73_u8>(obj);
			#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			if ((__tmp0.IsValid())) {
				#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				const auto& obj = *__tmp0;
				
				#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				return $this <=> obj;
			}
		}
		#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		{
			#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
			if ((!Builtin::Is(obj, nullptr))) {
				#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				auto __tmp0 = *obj; const auto& obj = __tmp0;
				
				#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				Builtin::Throw(Builtin::InvalidOperationException{});
			}
		}
		#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return Builtin::i32(1);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	auto Parse($extension_UInt8_224_u8 const& $this LIFETIMEBOUND, Builtin::Str input)  -> const typename $extension_UInt8_224_u8
	{
		#line 256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return Builtin::u8(0U);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	auto TryParse($extension_UInt8_224_u8 const& $this LIFETIMEBOUND, Builtin::Str input) noexcept -> const Builtin::Nullable<$extension_UInt8_224_u8>
	{
		#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return Builtin::u8(0U);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	auto Log($extension_UInt8_295_u8 const& $this LIFETIMEBOUND, $extension_UInt8_295_u8 base)  -> const typename $extension_UInt8_295_u8
	{
		#line 382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		if (const auto result = ADV_UFCS(CheckedLog)($this.$ref(), base)) {
			{
				#line 382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
				return result;
			}
		}
		#line 385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		Builtin::Throw(Builtin::InvalidOperationException{});
		return {};
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1009 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
	auto getCheckedIsqrt($extension_UInt8_1000_u8 const & $this ) -> const Builtin::Nullable<$extension_UInt8_1000_u8>
	{
		#line 1010 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		constexpr Builtin::Auto<decltype(ADV_USFCS((Math), Isqrt8)(ADV_USPCS(MaxValue, $extension_UInt8_1000_u8)()))> MAX_RESULT = ADV_USFCS((Math), Isqrt8)(ADV_USPCS(MaxValue, $extension_UInt8_1000_u8)());
		#line 1011 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		const Builtin::Auto<decltype(ADV_USFCS((Math), Isqrt8)($this))> result = ADV_USFCS((Math), Isqrt8)($this); 
		#line 1012 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		ASSUME((result <=> MAX_RESULT) <= 0);
		#line 1013 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\UInt8.ast"
		return result;
	}
	} namespace System{

}