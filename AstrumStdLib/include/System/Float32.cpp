#include "Float32.h"

namespace System {
//###############################################################################
//# Global type aliases
//###############################################################################
//###############################################################################
//# Type definitions
//###############################################################################
//###############################################################################
//# Free function declarations
//###############################################################################
#line 1233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto SinPiBy4(Builtin::f32 x) noexcept -> const Builtin::f32;
#line 1251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto CosPiBy4(Builtin::f32 x) noexcept -> const Builtin::f32;
#line 1269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto TanPiBy4(Builtin::f32 x, bool isReciprocal) noexcept -> const Builtin::f32;
//###############################################################################
//# Global compile-time constants
//###############################################################################

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	







































#line 1233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto SinPiBy4(Builtin::f32 x) noexcept -> const Builtin::f32
	{
		#line 1235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		constexpr auto C1 = Builtin::f64(-0.166666666666666646259241729);
		#line 1236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		constexpr auto C2 = +Builtin::f64(0.833333333333095043065222816e-2);
		#line 1237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		constexpr auto C3 = Builtin::f64(-0.19841269836761125688538679e-3);
		#line 1238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		constexpr auto C4 = +Builtin::f64(0.275573161037288022676895908448e-5);
		#line 1240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		const Builtin::f64 xx = x * x; 
		#line 1241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		auto result = C4; 
		#line 1243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		result = (result * xx) + C3;
		#line 1244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		result = (result * xx) + C2;
		#line 1245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		result = (result * xx) + C1;
		#line 1246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		result *= xx * x;
		#line 1247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		result += x;
		#line 1248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return Builtin::Cast<true, Builtin::f32>(result);
	}

#line 1251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto CosPiBy4(Builtin::f32 x) noexcept -> const Builtin::f32
	{
		#line 1253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		constexpr auto C1 = +Builtin::f64(0.41666666666666665390037e-1);
		#line 1254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		constexpr auto C2 = Builtin::f64(-0.13888888888887398280412e-2);
		#line 1255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		constexpr auto C3 = +Builtin::f64(0.248015872987670414957399e-4);
		#line 1256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		constexpr auto C4 = Builtin::f64(-0.275573172723441909470836e-6);
		#line 1258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		const Builtin::f64 xx = x * x; 
		#line 1259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		auto result = C4; 
		#line 1261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		result = (result * xx) + C3;
		#line 1262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		result = (result * xx) + C2;
		#line 1263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		result = (result * xx) + C1;
		#line 1264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		result *= xx * xx;
		#line 1265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		result += Builtin::f64(1.0) - (Builtin::f64(0.5) * xx);
		#line 1266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return Builtin::Cast<true, Builtin::f32>(result);
	}

#line 1269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto TanPiBy4(Builtin::f32 x, bool isReciprocal) noexcept -> const Builtin::f32
	{
		#line 1271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		const Builtin::f64 xx = x * x; 
		#line 1272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		auto denominator = +Builtin::f64(0.1844239256901656082986661e-1); 
		#line 1273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		denominator = Builtin::f64(-0.51396505478854532132342e+0) + (denominator * xx);
		#line 1274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		denominator = +Builtin::f64(0.115588821434688393452299e+1) + (denominator * xx);
		#line 1275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		auto numerator = Builtin::f64(-0.172032480471481694693109e-1); 
		#line 1276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		numerator = Builtin::f64(0.385296071263995406715129e+0) + (numerator * xx);
		#line 1278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		Builtin::f64 result = xx * x; 
		#line 1279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		result *= numerator / denominator;
		#line 1280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		result += x;
		#line 1282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (isReciprocal) {
			#line 1283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			result = Builtin::f64(-1.0) / result;
		}
		#line 1286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return Builtin::Cast<true, Builtin::f32>(result);
	}

static_assert(Builtin::usize(sizeof(Builtin::f32)) == Builtin::i32(4), "f32 should be 4 bytes");
static_assert(ADV_USPCS(Pi, Builtin::f32)() == Builtin::f32(3.14159265f), "f32.Pi should be 3.14159265f");
static_assert(Builtin::TypeIs<Builtin::f32, IComparable<Builtin::f32>>(), "f32 should implement IComparable<f32>");
static_assert(Builtin::TypeIs<Builtin::f32, IEquatable<Builtin::f32>>(), "f32 should implement IEquatable<f32>");
static_assert(Builtin::TypeIs<Builtin::f32, ISelfComparable>(), "f32 should implement ISelfComparable");
static_assert(Builtin::TypeIs<Builtin::f32, ISelfEquatable>(), "f32 should implement ISelfEquatable");
static_assert(Builtin::TypeIs<Builtin::f32, IAdditionOperators<Builtin::f32, Builtin::f32>>(), "f32 should implement IAdditionOperators<f32, f32>");
static_assert(Builtin::TypeIs<Builtin::f32, ISubtractionOperators<Builtin::f32, Builtin::f32>>(), "f32 should implement ISubtractionOperators<f32, f32>");
static_assert(Builtin::TypeIs<Builtin::f32, IMultiplyOperators<Builtin::f32, Builtin::f32>>(), "f32 should implement IMultiplyOperators<f32, f32>");
static_assert(Builtin::TypeIs<Builtin::f32, IDivisionOperators<Builtin::f32, Builtin::f64>>(), "f32 should implement IDivisionOperators<f32, f64>");
static_assert(Builtin::TypeIs<Builtin::f32, IModulusOperators<Builtin::f32, Builtin::f32>>(), "f32 should implement IModulusOperators<f32, f32>");
static_assert(Builtin::TypeIs<Builtin::f32, IUnaryPlusOperators<Builtin::f32>>(), "f32 should implement IUnaryPlusOperators<f32>");
static_assert(Builtin::TypeIs<Builtin::f32, IUnaryNegationOperators<Builtin::f32>>(), "f32 should implement IUnaryNegationOperators<f32>");
static_assert(Builtin::TypeIs<Builtin::f32, IIncrementOperators<Builtin::f32>>(), "f32 should implement IIncrementOperators<f32>");
static_assert(Builtin::TypeIs<Builtin::f32, IDecrementOperators<Builtin::f32>>(), "f32 should implement IDecrementOperators<f32>");
#ifdef ADV_UNITTEST
	#line 1305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	static bool __Test_d2cb87dfccf6cab6 = [](){
		#line 1306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		Builtin::f32 f = Builtin::f32(1234.1234f); 
		#line 1308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_USPCS(Pi, Builtin::f32)() == Builtin::f32(3.14159265f)), u"f32.Pi==3.14159265f");
		#line 1309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((f != ADV_USPCS(Pi, Builtin::f32)()), u"f!=f32.Pi");
		#line 1310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT(((f <=> Builtin::f32(1234.1f)) > 0), u"f>1234.1f");
		#line 1311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT(((f <=> Builtin::f32(1234.5f)) < 0), u"f<1234.5f");
		#line 1313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((f + Builtin::f32(1.0f) == Builtin::f32(1235.1234f)), u"f+1.0f==1235.1234f");
		#line 1314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((f - Builtin::f32(1.0f) == Builtin::f32(1233.1234f)), u"f-1.0f==1233.1234f");
		#line 1315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((f * Builtin::f32(2.0f) == Builtin::f32(2468.2468f)), u"f*2.0f==2468.2468f");
		#line 1316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((f / Builtin::f32(2.0f) == Builtin::f32(617.0617f)), u"f/2.0f==617.0617f");
		#line 1317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((f % Builtin::f32(2.0f) == Builtin::f32(0.123413086f)), u"f%2.0f==0.123413086f");
		#line 1319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		f += Builtin::f32(1.0f);
		#line 1320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((f == Builtin::f32(1235.1234f)), u"f==1235.1234f");
		#line 1321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		f -= Builtin::f32(1.0f);
		#line 1322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((f == Builtin::f32(1234.1234f)), u"f==1234.1234f");
		#line 1323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		f *= Builtin::f32(2.0f);
		#line 1324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((f == Builtin::f32(2468.2468f)), u"f==2468.2468f");
		#line 1325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		f /= Builtin::f32(2.0f);
		#line 1326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((f == Builtin::f32(1234.1234f)), u"f==1234.1234f");
		#line 1327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		f %= Builtin::f32(2.0f);
		#line 1328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((f == Builtin::f32(0.123413086f)), u"f==0.123413086f");
		#line 1330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		f = Builtin::f32(1234.1234f);
		#line 1331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((f++ == Builtin::f32(1234.1234f)), u"f++==1234.1234f");
		#line 1332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((++f == Builtin::f32(1236.1234f)), u"++f==1236.1234f");
		#line 1333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((f-- == Builtin::f32(1236.1234f)), u"f--==1236.1234f");
		#line 1334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((--f == Builtin::f32(1234.1234f)), u"--f==1234.1234f");
		#line 1336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((+f == Builtin::f32(1234.1234f)), u"+f==1234.1234f");
		#line 1337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((-f == Builtin::f32(-1234.1234f)), u"-f==-1234.1234f");
		#line 1339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		Builtin::Nullable<Builtin::f32> n = nullptr; 
		#line 1340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((n == nullptr), u"n==null");
		#line 1341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((f != n), u"f!=n");
		#line 1342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		n = Builtin::f32(3.1234f);
		#line 1343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((n != nullptr), u"n!=null");
		#line 1344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((f != n), u"f!=n");
		#line 1347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		Builtin::Nullable<Builtin::ObjectRef> o = f; 
		#line 1349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		IComparable<Builtin::f32> icomp = f; 
		#line 1350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT(((icomp <=> (*(n))) > 0), u"icomp>n!");
		#line 1352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(f.__ref()) == Builtin::i32(1150960627)), u"f.HashCode==1150960627");
		#line 1353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(f) == Builtin::i32(1150960627)), u"#f==1150960627");
		#line 1355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(ToBoolean)(f.__ref())), u"f.ToBoolean()");
		#line 1356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((!ADV_UFCS(ToBoolean)(Builtin::f32(0.0f).__ref())), u"!0.0f.ToBoolean()");
		#line 1357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(ToInt16)(f.__ref()) == Builtin::i32(1234)), u"f.ToInt16()==1234");
		#line 1358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(ToInt32)(f.__ref()) == Builtin::i32(1234)), u"f.ToInt32()==1234");
		#line 1359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(ToInt64)(f.__ref()) == Builtin::i32(1234)), u"f.ToInt64()==1234");
		#line 1360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(ToInt128)(f.__ref()) == Builtin::i32(1234)), u"f.ToInt128()==1234");
		#line 1361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(ToUsize)(f.__ref()) == Builtin::i32(1234)), u"f.ToUsize()==1234");
		#line 1363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		{
			#line 1364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)(f, Builtin::f32(2.0f));
			#line 1365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			ADV_ASSERT((div == Builtin::f32(617.0617f) && rem == Builtin::f32(0.123413086f)), u"div==617.0617f&&rem==0.123413086f");
		}
		#line 1368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor)(f, Builtin::i32(2)) == Builtin::f32(1523060.625f)), u"f^^2==1523060.625f");
		#line 1369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor)(f, (Builtin::i32(-2))) == Builtin::f32(6.5657269487928715534508228302e-07f)), u"f^^(-2)==6.5657269487928715534508228302e-07f");
		#line 1370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_mul)(f, Builtin::i32(2)) == Builtin::f32(1523060.625f)), u"f**2==1523060.625f");
		#line 1371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_mul)(f, (Builtin::i32(-2))) == Builtin::f32(6.5657269487928715534508228302e-07f)), u"f**(-2)==6.5657269487928715534508228302e-07f");
		#line 1372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_mul)(f, Builtin::f32(1.234f)) == Builtin::f32(6527.34228515625f)), u"f**1.234f==6527.34228515625f");
		#line 1374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Abs)(f.__ref()) == f), u"f.Abs==f");
		#line 1375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Abs)(Builtin::f32(-1234.1234f).__ref()) == Builtin::f32(1234.1234f)), u"-1234.1234f.Abs==1234.1234f");
		#line 1376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(IsCanonical)(f.__ref())), u"f.IsCanonical");
		#line 1377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((!ADV_UPCS(IsComplexNumber)(f.__ref())), u"!f.IsComplexNumber");
		#line 1378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((!ADV_UPCS(IsImaginaryNumber)(f.__ref())), u"!f.IsImaginaryNumber");
		#line 1379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(IsRealNumber)(f.__ref())), u"f.IsRealNumber");
		#line 1380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(IsFinite)(f.__ref())), u"f.IsFinite");
		#line 1381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((!ADV_UPCS(IsInfinity)(f.__ref())), u"!f.IsInfinity");
		#line 1382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((!ADV_UPCS(IsNaN)(f.__ref())), u"!f.IsNaN");
		#line 1383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((!ADV_UPCS(IsNegative)(f.__ref())), u"!f.IsNegative");
		#line 1384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(IsNegative)(Builtin::f32(-1234.1234f).__ref())), u"-1234.1234f.IsNegative");
		#line 1385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((!ADV_UPCS(IsNegativeInfinity)(f.__ref())), u"!f.IsNegativeInfinity");
		#line 1386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(IsPositive)(f.__ref())), u"f.IsPositive");
		#line 1387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((!ADV_UPCS(IsPositiveInfinity)(f.__ref())), u"!f.IsPositiveInfinity");
		#line 1388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((!ADV_UPCS(IsSubnormal)(f.__ref())), u"!f.IsSubnormal");
		#line 1389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((!ADV_UPCS(IsZero)(f.__ref())), u"!f.IsZero");
		#line 1390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(IsZero)(Builtin::f32(0.0f).__ref())), u"0.0f.IsZero");
		#line 1391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((!ADV_UPCS(IsInteger)(f.__ref())), u"!f.IsInteger");
		#line 1392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((!ADV_UPCS(IsEvenInteger)(f.__ref())), u"!f.IsEvenInteger");
		#line 1393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((!ADV_UPCS(IsOddInteger)(f.__ref())), u"!f.IsOddInteger");
		#line 1394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(IsInteger)(Builtin::f32(1.0f).__ref())), u"1.0f.IsInteger");
		#line 1395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(IsOddInteger)(Builtin::f32(1.0f).__ref())), u"1.0f.IsOddInteger");
		#line 1396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(IsEvenInteger)(Builtin::f32(2.0f).__ref())), u"2.0f.IsEvenInteger");
		#line 1397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(MaxMagnitude)(f.__ref(), Builtin::f32(-1235.0f)) == Builtin::f32(-1235.0f)), u"f.MaxMagnitude(-1235.0f)==-1235.0f");
		#line 1398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(MinMagnitude)(f.__ref(), Builtin::f32(-1235.0f)) == Builtin::f32(1234.1234f)), u"f.MinMagnitude(-1235.0f)==1234.1234f");
		#line 1400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(NarrowToInt32)(f.__ref()) == Builtin::i32(1234)), u"f.NarrowToInt32()==1234");
		#line 1401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(NarrowToInt8)(f.__ref()) == Builtin::i32(-46)), u"f.NarrowToInt8()==-46");
		#line 1403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Sign)(f.__ref()) == Builtin::i32(1)), u"f.Sign==1");
		#line 1404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Sign)(Builtin::f32(-1234.1234f).__ref()) == Builtin::i32(-1)), u"-1234.1234f.Sign==-1");
		#line 1405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Sign)(Builtin::f32(0.0f).__ref()) == Builtin::i32(0)), u"0.0f.Sign==0");
		#line 1407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(CopySign)(f.__ref(), Builtin::f32(-1.0f)) == Builtin::f32(-1234.1234f)), u"f.CopySign(-1.0f)==-1234.1234f");
		#line 1408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(Max)(f.__ref(), Builtin::i32(123)) == f), u"f.Max(123)==f");
		#line 1409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(Min)(f.__ref(), Builtin::i32(123)) == Builtin::f32(123.0f)), u"f.Min(123)==123.0f");
		#line 1410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(Clamp)(f.__ref(), Builtin::i32(1), Builtin::i32(1000)) == Builtin::f32(1000.0f)), u"f.Clamp(1,1000)==1000.0f");
		#line 1412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((!ADV_UPCS(IsPow2)(f.__ref())), u"!f.IsPow2");
		#line 1413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(IsPow2)(Builtin::f32(4096.0f).__ref())), u"4096.0f.IsPow2");
		#line 1414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::f32(4096.0f).__ref()) == Builtin::f32(12.0f)), u"4096.0f.Log2==12.0f");
		#line 1416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(IsNaN)(ADV_UPCS(Log2)(Builtin::f32(-123.0f).__ref()).__ref())), u"-123.0f.Log2.IsNaN");
		#line 1417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(Builtin::f32(10000.0f).__ref()) == Builtin::f32(4.0f)), u"10000.0f.Log10==4.0f");
		#line 1419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(IsNaN)(ADV_UPCS(Log10)(Builtin::f32(-123.0f).__ref()).__ref())), u"-123.0f.Log10.IsNaN");
		#line 1420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(Midpoint)(f.__ref(), Builtin::f32(2431.15f)) == Builtin::f32(1832.6367f)), u"f.Midpoint(2431.15f)==1832.6367f");
		#line 1421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(IsMultipleOf)(Builtin::f32(10000.0f).__ref(), Builtin::i32(10))), u"10000.0f.IsMultipleOf(10)");
		#line 1422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((!ADV_UFCS(IsMultipleOf)(Builtin::f32(10000.0f).__ref(), Builtin::f32(7.5f))), u"!10000.0f.IsMultipleOf(7.5f)");
		#line 1423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(IsMultipleOf)(Builtin::f32(22.5f).__ref(), Builtin::f32(7.5f))), u"22.5f.IsMultipleOf(7.5f)");
		#line 1425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Ceil)(Builtin::f32(2.5f).__ref()) == Builtin::f32(3.0f)), u"2.5f.Ceil==3.0f");
		#line 1426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Floor)(Builtin::f32(2.5f).__ref()) == Builtin::f32(2.0f)), u"2.5f.Floor==2.0f");
		#line 1427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Truncate)(Builtin::f32(2.5f).__ref()) == Builtin::f32(2.0f)), u"2.5f.Truncate==2.0f");
		#line 1428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Round)(Builtin::f32(2.5f).__ref()) == Builtin::f32(3.0f)), u"2.5f.Round==3.0f");
		#line 1429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(RoundToInt32)(Builtin::f32(2.5f).__ref()) == Builtin::i32(3)), u"2.5f.RoundToInt32()==3");
		#line 1430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(RoundTiesEven)(Builtin::f32(2.5f).__ref()) == Builtin::f32(2.0f)), u"2.5f.RoundTiesEven==2.0f");
		#line 1431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(RoundTiesEvenToInt32)(Builtin::f32(2.5f).__ref()) == Builtin::i32(2)), u"2.5f.RoundTiesEvenToInt32()==2");
		#line 1432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(RoundTiesEven)(Builtin::f32(3.5f).__ref()) == Builtin::f32(4.0f)), u"3.5f.RoundTiesEven==4.0f");
		#line 1433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(Round)(Builtin::f32(2.665f).__ref(), Builtin::u32(2U)) == Builtin::f32(2.67f)), u"2.665f.Round(2u)==2.67f");
		#line 1434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(Round)(Builtin::f32(2.665f).__ref(), Builtin::u32(2U), ADV_USPCS(ToEven, MidpointRounding)()) == Builtin::f32(2.66f)), u"2.665f.Round(2u,MidpointRounding.ToEven)==2.66f");
		#line 1435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Ceil)((Builtin::f32(-2.5f)).__ref()) == Builtin::f32(-2.0f)), u"(-2.5f).Ceil==-2.0f");
		#line 1436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Floor)((Builtin::f32(-2.5f)).__ref()) == Builtin::f32(-3.0f)), u"(-2.5f).Floor==-3.0f");
		#line 1437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Truncate)((Builtin::f32(-2.5f)).__ref()) == Builtin::f32(-2.0f)), u"(-2.5f).Truncate==-2.0f");
		#line 1438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Round)((Builtin::f32(-2.5f)).__ref()) == Builtin::f32(-3.0f)), u"(-2.5f).Round==-3.0f");
		#line 1439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(RoundToInt32)((Builtin::f32(-2.5f)).__ref()) == Builtin::i32(-3)), u"(-2.5f).RoundToInt32()==-3");
		#line 1440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(RoundTiesEven)((Builtin::f32(-2.5f)).__ref()) == Builtin::f32(-2.0f)), u"(-2.5f).RoundTiesEven==-2.0f");
		#line 1441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(RoundTiesEvenToInt32)((Builtin::f32(-2.5f)).__ref()) == Builtin::i32(-2)), u"(-2.5f).RoundTiesEvenToInt32()==-2");
		#line 1442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(RoundTiesEven)((Builtin::f32(-3.5f)).__ref()) == Builtin::f32(-4.0f)), u"(-3.5f).RoundTiesEven==-4.0f");
		#line 1443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(Round)((Builtin::f32(-2.665f)).__ref(), Builtin::u32(2U)) == Builtin::f32(-2.67f)), u"(-2.665f).Round(2u)==-2.67f");
		#line 1444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(Round)((Builtin::f32(-2.665f)).__ref(), Builtin::u32(2U), ADV_USPCS(ToEven, MidpointRounding)()) == Builtin::f32(-2.66f)), u"(-2.665f).Round(2u,MidpointRounding.ToEven)==-2.66f");
		#line 1446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		f = Builtin::f32(12.34f);
		#line 1447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Exp)(f.__ref()) == Builtin::f32(228661.98f)), u"f.Exp==228661.98f");
		#line 1448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(ExpM1)(f.__ref()) == Builtin::f32(228660.98f)), u"f.ExpM1==228660.98f");
		#line 1449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Exp2)(f.__ref()) == Builtin::f32(5184.5396f)), u"f.Exp2==5184.5396f");
		#line 1450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Exp2M1)(f.__ref()) == Builtin::f32(5183.5396f)), u"f.Exp2M1==5183.5396f");
		#line 1451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Exp10)(f.__ref()) == Builtin::f32(2187762300000.0f)), u"f.Exp10==2187762300000.0f");
		#line 1452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Exp10M1)(f.__ref()) == Builtin::f32(2187762300000.0f)), u"f.Exp10M1==2187762300000.0f");
		#line 1453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Ln)(f.__ref()) == Builtin::f32(2.512846f)), u"f.Ln==2.512846f");
		#line 1454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(LnP1)(f.__ref()) == Builtin::f32(2.5907671f)), u"f.LnP1==2.5907671f");
		#line 1455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(Log)(f.__ref(), Builtin::f32(1.25f)) == Builtin::f32(11.261119f)), u"f.Log(1.25f)==11.261119f");
		#line 1457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Sqrt)(f.__ref()) == Builtin::f32(3.5128336f)), u"f.Sqrt==3.5128336f");
		#line 1458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Cbrt)(f.__ref()) == Builtin::f32(2.310849666595458984375f)), u"f.Cbrt==2.310849666595458984375f");
		#line 1459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(Root)(Builtin::f32(1234.1234f).__ref(), Builtin::i32(5)) == Builtin::f32(4.1521373f)), u"1234.1234f.Root(5)==4.1521373f");
		#line 1460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(Root)(f.__ref(), Builtin::i32(-5)) == Builtin::f32(0.6049743f)), u"f.Root(-5)==0.6049743f");
		#line 1461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(Hypot)(f.__ref(), Builtin::f32(9.12f)) == Builtin::f32(15.34438f)), u"f.Hypot(9.12f)==15.34438f");
		#line 1463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Sin)(f.__ref()) == Builtin::f32(-0.22444206f)), u"f.Sin==-0.22444206f");
		#line 1464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Cos)(f.__ref()) == Builtin::f32(0.9744874f)), u"f.Cos==0.9744874f");
		#line 1465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Tan)(f.__ref()) == Builtin::f32(-0.23031807f)), u"f.Tan==-0.23031807f");
		#line 1466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Cot)(f.__ref()) == Builtin::f32(-4.3418217f)), u"f.Cot==-4.3418217f");
		#line 1467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Sec)(f.__ref()) == Builtin::f32(1.0261805f)), u"f.Sec==1.0261805f");
		#line 1468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Csc)(f.__ref()) == Builtin::f32(-4.455493f)), u"f.Csc==-4.455493f");
		#line 1469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		f = Builtin::f32(0.34f);
		#line 1470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Asin)(f.__ref()) == Builtin::f32(0.3469169f)), u"f.Asin==0.3469169f");
		#line 1471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Acos)(f.__ref()) == Builtin::f32(1.2238795f)), u"f.Acos==1.2238795f");
		#line 1472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Atan)(f.__ref()) == Builtin::f32(0.32773852f)), u"f.Atan==0.32773852f");
		#line 1473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Acot)(f.__ref()) == Builtin::f32(1.2430578f)), u"f.Acot==1.2430578f");
		#line 1474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		f = Builtin::f32(12.34f);
		#line 1475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Asec)(f.__ref()) == Builtin::f32(1.48967f)), u"f.Asec==1.48967f");
		#line 1476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Acsc)(f.__ref()) == Builtin::f32(0.081126235f)), u"f.Acsc==0.081126235f");
		#line 1477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(ToRadians)(f.__ref()) == Builtin::f32(0.21537364f)), u"f.ToRadians()==0.21537364f");
		#line 1478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(ToDegrees)(Builtin::f32(0.34f).__ref()) == Builtin::f32(19.480564f)), u"0.34f.ToDegrees()==19.480564f");
		#line 1479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(SinPi)(f.__ref()) == Builtin::f32(0.8763069f)), u"f.SinPi==0.8763069f");
		#line 1480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(SinPi)(Builtin::f32(1.0f).__ref()) == Builtin::f32(0.0f)), u"1.0f.SinPi==0.0f");
		#line 1481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(SinPi)(Builtin::f32(0.5f).__ref()) == Builtin::f32(1.0f)), u"0.5f.SinPi==1.0f");
		#line 1482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(CosPi)(f.__ref()) == Builtin::f32(0.4817533f)), u"f.CosPi==0.4817533f");
		#line 1483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(CosPi)(Builtin::f32(1.0f).__ref()) == Builtin::f32(-1.0f)), u"1.0f.CosPi==-1.0f");
		#line 1484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(CosPi)(Builtin::f32(0.5f).__ref()) == Builtin::f32(0.0f)), u"0.5f.CosPi==0.0f");
		#line 1485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(TanPi)(f.__ref()) == Builtin::f32(1.8189952f)), u"f.TanPi==1.8189952f");
		#line 1486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(TanPi)(Builtin::f32(1.0f).__ref()) == Builtin::f32(-0.0f)), u"1.0f.TanPi==-0.0f");
		#line 1487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(TanPi)(Builtin::f32(0.0f).__ref()) == Builtin::f32(0.0f)), u"0.0f.TanPi==0.0f");
		#line 1489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Sinh)(f.__ref()) == Builtin::f32(114330.99f)), u"f.Sinh==114330.99f");
		#line 1490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Cosh)(f.__ref()) == Builtin::f32(114330.99f)), u"f.Cosh==114330.99f");
		#line 1491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Tanh)(f.__ref()) == Builtin::f32(1.0f)), u"f.Tanh==1.0f");
		#line 1492 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Coth)(f.__ref()) == Builtin::f32(1.0f)), u"f.Coth==1.0f");
		#line 1493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Sech)(f.__ref()) == Builtin::f32(0.000008746535f)), u"f.Sech==0.000008746535f");
		#line 1494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Csch)(f.__ref()) == Builtin::f32(0.000008746535f)), u"f.Csch==0.000008746535f");
		#line 1495 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Asinh)(f.__ref()) == Builtin::f32(3.2076309f)), u"f.Asinh==3.2076309f");
		#line 1496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Acosh)(f.__ref()) == Builtin::f32(3.2043474f)), u"f.Acosh==3.2043474f");
		#line 1497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(IsNaN)(ADV_UPCS(Atanh)(f.__ref()).__ref())), u"f.Atanh.IsNaN");
		#line 1498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		f = Builtin::f32(0.34f);
		#line 1499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Sinh)(f.__ref()) == Builtin::f32(0.34658864140510559082f)), u"f.Sinh==0.34658864140510559082f");
		#line 1500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Cosh)(f.__ref()) == Builtin::f32(1.0583589076995849609f)), u"f.Cosh==1.0583589076995849609f");
		#line 1501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Tanh)(f.__ref()) == Builtin::f32(0.32747739553451538086f)), u"f.Tanh==0.32747739553451538086f");
		#line 1502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Coth)(f.__ref()) == Builtin::f32(3.0536458492279052734f)), u"f.Coth==3.0536458492279052734f");
		#line 1503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Sech)(f.__ref()) == Builtin::f32(0.94485902786254882812f)), u"f.Sech==0.94485902786254882812f");
		#line 1504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Csch)(f.__ref()) == Builtin::f32(2.8852648735046386719f)), u"f.Csch==2.8852648735046386719f");
		#line 1505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Asinh)(f.__ref()) == Builtin::f32(0.33376836776733398438f)), u"f.Asinh==0.33376836776733398438f");
		#line 1506 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(IsNaN)(ADV_UPCS(Acosh)(f.__ref()).__ref())), u"f.Acosh.IsNaN");
		#line 1507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Atanh)(f.__ref()) == Builtin::f32(0.35409253835678100586f)), u"f.Atanh==0.35409253835678100586f");
		#line 1509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(ReciprocalEstimate)(f.__ref()) == Builtin::f32(2.9411764144897460938f)), u"f.ReciprocalEstimate==2.9411764144897460938f");
		#line 1510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(FusedMultiplyAdd)(f.__ref(), Builtin::f32(5.0f), Builtin::f32(2.12f)) == Builtin::f32(3.8199999332427978516f)), u"f.FusedMultiplyAdd(5.0f,2.12f)==3.8199999332427978516f");
		#line 1511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(Lerp)(Builtin::f32(1.0f).__ref(), Builtin::f32(2.0f), Builtin::f32(0.75f)) == Builtin::f32(1.75f)), u"1.0f.Lerp(2.0f,0.75f)==1.75f");
		#line 1513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Gamma)(f.__ref()) == Builtin::f32(2.6241631507873535156f)), u"f.Gamma==2.6241631507873535156f");
		#line 1514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(LnGamma)(f.__ref()) == Builtin::f32(0.96476197242736816406f)), u"f.LnGamma==0.96476197242736816406f");
		#line 1515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Erf)(f.__ref()) == Builtin::f32(0.36936452984809875488f)), u"f.Erf==0.36936452984809875488f");
		#line 1516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Erfc)(f.__ref()) == Builtin::f32(0.63063549995422363281f)), u"f.Erfc==0.63063549995422363281f");
		return true;
	}();
	#endif	
} namespace __extensions { using namespace System;
#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	auto _operator_eq_eq_mul(__extension_Float32_18_f32 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool
	{
		#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		{
			#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			auto __tmp0 = Builtin::Cast<false, __extension_Float32_1209_f32>(obj);
			#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			if ((__tmp0.IsValid())) {
				#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				const auto& obj = *__tmp0;
				
				#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				if (__this == obj) {
					#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					return Builtin::Boolean(true);
				}
			}
		}
		#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return Builtin::Boolean(false);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	auto _operator_lt_eq_gt_mul(__extension_Float32_60_f32 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32
	{
		#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		{
			#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			auto __tmp0 = Builtin::Cast<false, __extension_Float32_1209_f32>(obj);
			#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			if ((__tmp0.IsValid())) {
				#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				const auto& obj = *__tmp0;
				
				#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				return __this <=> obj;
			}
		}
		#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		{
			#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			if ((!Builtin::Is(obj, nullptr))) {
				#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				auto __tmp0 = *obj; const auto& obj = __tmp0;
				
				#line 68 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				Builtin::Throw(Builtin::InvalidOperationException{});
			}
		}
		#line 70 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return Builtin::i32(1);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	auto Parse(__extension_Float32_160_f32 const& __this LIFETIMEBOUND, Builtin::Str input)  -> const typename __extension_Float32_160_f32
	{
		#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return Builtin::i32(0);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	auto TryParse(__extension_Float32_160_f32 const& __this LIFETIMEBOUND, Builtin::Str input) noexcept -> const Builtin::Nullable<__extension_Float32_1209_f32>
	{
		#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return Builtin::f32(0.0f);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 717 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	auto Root(__extension_Float32_711_f32 const& __this LIFETIMEBOUND, Builtin::i32 n)  -> const typename __extension_Float32_711_f32
	{
		#line 719 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		auto PositiveN = [] (__extension_Float32_1209_f32 x, Builtin::i32 n) 
		{
			#line 721 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			__extension_Float32_1209_f32 result{}; 
			#line 722 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			if (ADV_UPCS(IsFinite)(x.__ref())) {
				#line 723 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				if (x != Builtin::i32(0)) {
					#line 724 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					if ((x <=> Builtin::i32(0)) > 0 || ADV_UPCS(IsOddInteger)(n.__ref())) {
						#line 725 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						result = Builtin::f32{std::pow(Builtin::Cast<true, CDouble>(ADV_UPCS(Abs)(x.__ref())), Builtin::f64(1.0) / n)};
						#line 726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						result = ADV_UFCS(CopySign)(result.__ref(), x);
					} else {
						#line 727 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						{
							#line 728 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							result = ADV_USPCS(NaN, Builtin::f32)();
						}
					}
				} else {
					#line 730 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					if (ADV_UPCS(IsEvenInteger)(n.__ref())) {
						#line 731 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						result = Builtin::f32(0.0f);
					} else {
						#line 732 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						{
							#line 733 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							result = ADV_UFCS(CopySign)(Builtin::f32(0.0f).__ref(), x);
						}
					}
				}
			} else {
				#line 735 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				if (ADV_UPCS(IsNaN)(x.__ref())) {
					#line 736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					result = ADV_USPCS(NaN, Builtin::f32)();
				} else {
					#line 737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					if ((x <=> Builtin::i32(0)) > 0) {
						#line 738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						ADV_ASSERT((ADV_UPCS(IsPositiveInfinity)(x.__ref())), u"x.IsPositiveInfinity");
						#line 739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						result = ADV_USPCS(PositiveInfinity, Builtin::f32)();
					} else {
						#line 740 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						{
							#line 741 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							ADV_ASSERT((ADV_UPCS(IsNegativeInfinity)(x.__ref())), u"x.IsNegativeInfinity");
							#line 742 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							result = ADV_UPCS(IsOddInteger)(n.__ref()) ? ADV_USPCS(NegativeInfinity, Builtin::f32)() : ADV_USPCS(NaN, Builtin::f32)();
						}
					}
				}
			}
			#line 745 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return result;
		}; 
		#line 748 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		auto NegativeN = [] (__extension_Float32_1209_f32 x, Builtin::i32 n) 
		{
			#line 750 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			__extension_Float32_1209_f32 result{}; 
			#line 751 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			if (ADV_UPCS(IsFinite)(x.__ref())) {
				#line 752 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				if (x != Builtin::i32(0)) {
					#line 753 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					if ((x <=> Builtin::i32(0)) > 0 || ADV_UPCS(IsOddInteger)(n.__ref())) {
						#line 754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						result = Builtin::f32{std::pow(Builtin::Cast<true, CDouble>(ADV_UPCS(Abs)(x.__ref())), Builtin::f64(1.0) / n)};
						#line 755 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						result = ADV_UFCS(CopySign)(result.__ref(), x);
					} else {
						#line 756 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						{
							#line 757 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							result = ADV_USPCS(NaN, Builtin::f32)();
						}
					}
				} else {
					#line 759 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					if (ADV_UPCS(IsEvenInteger)(n.__ref())) {
						#line 760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						result = ADV_USPCS(PositiveInfinity, Builtin::f32)();
					} else {
						#line 761 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						{
							#line 762 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							result = ADV_UFCS(CopySign)(ADV_USPCS(PositiveInfinity, Builtin::f32)().__ref(), x);
						}
					}
				}
			} else {
				#line 764 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				if (ADV_UPCS(IsNaN)(x.__ref())) {
					#line 765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					result = ADV_USPCS(NaN, Builtin::f32)();
				} else {
					#line 766 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					if ((x <=> Builtin::i32(0)) > 0) {
						#line 767 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						ADV_ASSERT((ADV_UPCS(IsPositiveInfinity)(x.__ref())), u"x.IsPositiveInfinity");
						#line 768 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						result = Builtin::f32(0.0f);
					} else {
						#line 769 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						{
							#line 770 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							ADV_ASSERT((ADV_UPCS(IsNegativeInfinity)(x.__ref())), u"x.IsNegativeInfinity");
							#line 771 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							result = ADV_UPCS(IsOddInteger)(n.__ref()) ? Builtin::f32(-0.0f) : ADV_USPCS(NaN, Builtin::f32)();
						}
					}
				}
			}
			#line 774 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return result;
		}; 
		#line 777 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return [&]() 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
		{
			#line 778 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			auto __tmp__valid_777 = Builtin::Cast<false, std::decay_t<decltype(n)>::__self>(n);
			#line 778 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			if(__tmp__valid_777.IsValid() && Builtin::IsGreater(*__tmp__valid_777, Builtin::i32(0))) {
				#line 778 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				const auto& n = *__tmp__valid_777;
				return [&]() 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
				{
					#line 780 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					auto __tmp__valid_778 = Builtin::Cast<false, std::decay_t<decltype(n)>::__self>(n);
					#line 780 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					if(__tmp__valid_778.IsValid() && Builtin::Is(*__tmp__valid_778, Builtin::i32(2))) {
						#line 780 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						const auto& n = *__tmp__valid_778;
						return __this != Builtin::f32(0.0f) ? ADV_UPCS(Sqrt)(__this.__ref()) : Builtin::f32(0.0f);
					}
					else {
						#line 781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						if(__tmp__valid_778.IsValid() && Builtin::Is(*__tmp__valid_778, Builtin::i32(3))) {
							#line 781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							const auto& n = *__tmp__valid_778;
							return ADV_UPCS(Cbrt)(__this.__ref());
						}
						else {
							return PositiveN(__this, n);
							
						}
					}
				}
ADV_WARNING_POP
				();
			}
			else {
				#line 784 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				if(__tmp__valid_777.IsValid() && Builtin::IsLess(*__tmp__valid_777, Builtin::i32(0))) {
					#line 784 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					const auto& n = *__tmp__valid_777;
					return NegativeN(__this, n);
				}
				else {
					return ADV_USPCS(NaN, Builtin::f32)();
					
				}
			}
		}
ADV_WARNING_POP
		();
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	auto Hypot(__extension_Float32_711_f32 const& __this LIFETIMEBOUND, __extension_Float32_1209_f32 y)  -> const typename __extension_Float32_711_f32
	{
		#line 792 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		__extension_Float32_1209_f32 result{}; 
		#line 793 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (ADV_UPCS(IsFinite)(__this.__ref()) && ADV_UPCS(IsFinite)(y.__ref())) {
			#line 794 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			const auto ax = ADV_UPCS(Abs)(__this.__ref()); 
			#line 795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			const auto ay = ADV_UPCS(Abs)(y.__ref()); 
			#line 797 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			if (ax == Builtin::f32(0.0f)) {
				#line 798 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				result = ay;
			} else {
				#line 799 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				if (ay == Builtin::f32(0.0f)) {
					#line 800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					result = ax;
				} else {
					#line 801 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					{
						#line 802 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						Builtin::f64 xx = ax; 
						#line 803 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						xx *= xx;
						#line 804 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						Builtin::f64 yy = ay; 
						#line 805 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						yy *= yy;
						#line 806 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						result = Builtin::f32{std::sqrt(CDouble(xx + yy))};
					}
				}
			}
		} else {
			#line 808 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			if (ADV_UPCS(IsInfinity)(__this.__ref()) || ADV_UPCS(IsInfinity)(y.__ref())) {
				#line 809 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				result = ADV_USPCS(PositiveInfinity, Builtin::f32)();
			} else {
				#line 810 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				{
					#line 811 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					ADV_ASSERT((ADV_UPCS(IsNaN)(__this.__ref()) || ADV_UPCS(IsNaN)(y.__ref())), u"this.IsNaNory.IsNaN");
					#line 812 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					result = ADV_USPCS(NaN, Builtin::f32)();
				}
			}
		}
		#line 815 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 847 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	auto getSinPi(__extension_Float32_819_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 849 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		__extension_Float32_1209_f32 result{}; 
		#line 850 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (ADV_UPCS(IsFinite)(__this.__ref())) {
			#line 851 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			const auto ax = ADV_UPCS(Abs)(__this.__ref()); 
			#line 854 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			if ((ax <=> Builtin::f32(8388608.0f)) < 0) {
				#line 855 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				{
					#line 856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					auto __tmp__valid_855 = Builtin::Cast<false, std::decay_t<decltype(ax)>::__self>(ax);
					#line 856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					if(__tmp__valid_855.IsValid() && Builtin::IsGreater(*__tmp__valid_855, Builtin::f32(0.25f)))  {
						#line 856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						const auto& ax = *__tmp__valid_855;
						#line 856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						{
							#line 857 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							const auto integral = Builtin::Cast<true, Builtin::i32>(ax); 
							#line 858 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							const auto fractional = ax - integral; 
							#line 859 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							const auto sign = ((__this <=> Builtin::f32(0.0f)) > 0 ? +Builtin::f32(1.0f) : Builtin::f32(-1.0f)) * (ADV_UPCS(IsOddInteger)(integral.__ref()) ? Builtin::f32(-1.0f) : +Builtin::f32(1.0f)); 
							#line 861 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							result = [&]() 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
							{
								#line 862 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
								auto __tmp__valid_861 = Builtin::Cast<false, std::decay_t<decltype(fractional)>::__self>(fractional);
								#line 862 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
								if(__tmp__valid_861.IsValid() && Builtin::IsLessOrEqual(*__tmp__valid_861, Builtin::f32(0.25f))) {
									#line 862 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
									const auto& fractional = *__tmp__valid_861;
									return fractional != Builtin::f32(0.0f) ? sign * SinPiBy4(fractional * ADV_USPCS(Pi, Builtin::f32)()) : __this * Builtin::f32(0.0f);
								}
								else {
									#line 863 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
									if(__tmp__valid_861.IsValid() && Builtin::IsLessOrEqual(*__tmp__valid_861, Builtin::f32(0.5f))) {
										#line 863 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
										const auto& fractional = *__tmp__valid_861;
										return fractional != Builtin::f32(0.5f) ? sign * CosPiBy4((Builtin::f32(0.5f) - fractional) * ADV_USPCS(Pi, Builtin::f32)()) : sign;
									}
									else {
										#line 864 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
										if(__tmp__valid_861.IsValid() && Builtin::IsLessOrEqual(*__tmp__valid_861, Builtin::f32(0.75f))) {
											#line 864 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
											const auto& fractional = *__tmp__valid_861;
											return sign * CosPiBy4((fractional - Builtin::f32(0.5f)) * ADV_USPCS(Pi, Builtin::f32)());
										}
										else {
											return sign * SinPiBy4((Builtin::f32(1.0f) - fractional) * ADV_USPCS(Pi, Builtin::f32)());
											
										}
									}
								}
							}
ADV_WARNING_POP
							();
						}
					}
					else {
						#line 868 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						if(__tmp__valid_855.IsValid() && Builtin::IsGreaterOrEqual(*__tmp__valid_855, Builtin::f32(7.8125e-3f)))  {
							#line 868 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							const auto& ax = *__tmp__valid_855;
							#line 868 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							result = SinPiBy4(__this * ADV_USPCS(Pi, Builtin::f32)());
						}
						else {
							#line 869 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							if(__tmp__valid_855.IsValid() && Builtin::IsGreaterOrEqual(*__tmp__valid_855, Builtin::f32(1.22070313e-4f)))  {
								#line 869 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
								const auto& ax = *__tmp__valid_855;
								#line 869 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
								{
									#line 870 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
									const auto value = __this * ADV_USPCS(Pi, Builtin::f32)(); 
									#line 871 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
									result = value - (value * value * value * (Builtin::f32(1.0f) / Builtin::f32(6.0f)));
								}
							}
							else {
								#line 873 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
								result = __this * ADV_USPCS(Pi, Builtin::f32)();
								
							}
						}
					}
				}

			} else {
				#line 875 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				{
					#line 876 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					result = __this * Builtin::f32(0.0f);
				}
			}
		} else {
			#line 878 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			{
				#line 879 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				result = ADV_USPCS(NaN, Builtin::f32)();
			}
		}
		#line 882 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return result;
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	auto getCosPi(__extension_Float32_819_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 887 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		__extension_Float32_1209_f32 result{}; 
		#line 888 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (ADV_UPCS(IsFinite)(__this.__ref())) {
			#line 889 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			const auto ax = ADV_UPCS(Abs)(__this.__ref()); 
			#line 892 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			if ((ax <=> Builtin::f32(8388608.0f)) < 0) {
				#line 893 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				{
					#line 894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					auto __tmp__valid_893 = Builtin::Cast<false, std::decay_t<decltype(ax)>::__self>(ax);
					#line 894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					if(__tmp__valid_893.IsValid() && Builtin::IsGreater(*__tmp__valid_893, Builtin::f32(0.25f)))  {
						#line 894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						const auto& ax = *__tmp__valid_893;
						#line 894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						{
							#line 895 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							const auto integral = Builtin::Cast<true, Builtin::i32>(ax); 
							#line 896 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							const auto fractional = ax - integral; 
							#line 897 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							const auto sign = ADV_UPCS(IsOddInteger)(integral.__ref()) ? Builtin::f32(-1.0f) : +Builtin::f32(1.0f); 
							#line 899 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							result = [&]() 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
							{
								#line 900 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
								auto __tmp__valid_899 = Builtin::Cast<false, std::decay_t<decltype(fractional)>::__self>(fractional);
								#line 900 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
								if(__tmp__valid_899.IsValid() && Builtin::IsLessOrEqual(*__tmp__valid_899, Builtin::f32(0.25f))) {
									#line 900 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
									const auto& fractional = *__tmp__valid_899;
									return fractional != Builtin::f32(0.0f) ? sign * CosPiBy4(fractional * ADV_USPCS(Pi, Builtin::f32)()) : sign;
								}
								else {
									#line 901 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
									if(__tmp__valid_899.IsValid() && Builtin::IsLessOrEqual(*__tmp__valid_899, Builtin::f32(0.5f))) {
										#line 901 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
										const auto& fractional = *__tmp__valid_899;
										return fractional != Builtin::f32(0.5f) ? sign * SinPiBy4((Builtin::f32(0.5f) - fractional) * ADV_USPCS(Pi, Builtin::f32)()) : Builtin::f32(0.0f);
									}
									else {
										#line 902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
										if(__tmp__valid_899.IsValid() && Builtin::IsLessOrEqual(*__tmp__valid_899, Builtin::f32(0.75f))) {
											#line 902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
											const auto& fractional = *__tmp__valid_899;
											return -sign * SinPiBy4((fractional - Builtin::f32(0.5f)) * ADV_USPCS(Pi, Builtin::f32)());
										}
										else {
											return -sign * CosPiBy4((Builtin::f32(1.0f) - fractional) * ADV_USPCS(Pi, Builtin::f32)());
											
										}
									}
								}
							}
ADV_WARNING_POP
							();
						}
					}
					else {
						#line 906 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						if(__tmp__valid_893.IsValid() && Builtin::IsGreaterOrEqual(*__tmp__valid_893, Builtin::f32(7.8125e-3f)))  {
							#line 906 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							const auto& ax = *__tmp__valid_893;
							#line 906 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							result = CosPiBy4(__this * ADV_USPCS(Pi, Builtin::f32)());
						}
						else {
							#line 907 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							if(__tmp__valid_893.IsValid() && Builtin::IsGreaterOrEqual(*__tmp__valid_893, Builtin::f32(1.22070313e-4f)))  {
								#line 907 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
								const auto& ax = *__tmp__valid_893;
								#line 907 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
								{
									#line 908 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
									const auto value = __this * ADV_USPCS(Pi, Builtin::f32)(); 
									#line 909 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
									result = Builtin::f32(1.0f) - (value * value * Builtin::f32(0.5f));
								}
							}
							else {
								#line 911 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
								result = Builtin::f32(1.0f);
								
							}
						}
					}
				}

			} else {
				#line 913 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				if ((ax <=> Builtin::f32(16777216.0f)) < 0) {
					#line 914 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					result = ADV_UPCS(IsOddInteger)(ADV_UPCS(Bits)(ax.__ref()).__ref()) ? Builtin::f32(-1.0f) : +Builtin::f32(1.0f);
				} else {
					#line 915 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					{
						#line 916 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						result = Builtin::f32(1.0f);
					}
				}
			}
		} else {
			#line 918 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			{
				#line 919 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				result = ADV_USPCS(NaN, Builtin::f32)();
			}
		}
		#line 922 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return result;
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 925 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	auto getSinCosPi(__extension_Float32_819_f32 const& __this ) -> const std::tuple<__extension_Float32_1209_f32, __extension_Float32_1209_f32>
	{
		#line 927 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		__extension_Float32_1209_f32 sin{}; 
		#line 928 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		__extension_Float32_1209_f32 cos{}; 
		#line 930 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (ADV_UPCS(IsFinite)(__this.__ref())) {
			#line 931 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			const auto ax = ADV_UPCS(Abs)(__this.__ref()); 
			#line 934 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			if ((ax <=> Builtin::f32(8388608.0f)) < 0) {
				#line 935 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				if ((ax <=> Builtin::f32(0.25f)) > 0) {
					#line 936 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					const auto integral = Builtin::Cast<true, Builtin::i32>(ax); 
					#line 937 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					const auto fractional = ax - integral; 
					#line 938 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					const auto sign = ADV_UPCS(IsOddInteger)(integral.__ref()) ? Builtin::f32(-1.0f) : +Builtin::f32(1.0f); 
					#line 939 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					const auto sinSign = ((__this <=> Builtin::f32(0.0f)) > 0 ? +Builtin::f32(1.0f) : Builtin::f32(-1.0f)) * sign; 
					#line 940 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					const auto cosSign = sign; 
					#line 942 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					if ((fractional <=> Builtin::f32(0.25f)) <= 0) {
						#line 943 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						if (fractional != Builtin::f32(0.0f)) {
							#line 944 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							const auto value = fractional * ADV_USPCS(Pi, Builtin::f32)(); 
							#line 945 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							sin = sinSign * SinPiBy4(value);
							#line 946 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							cos = cosSign * CosPiBy4(value);
						} else {
							#line 947 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							{
								#line 948 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
								sin = __this * Builtin::f32(0.0f);
								#line 949 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
								cos = cosSign;
							}
						}
					} else {
						#line 951 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						if ((fractional <=> Builtin::f32(0.5f)) <= 0) {
							#line 952 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							if (fractional != Builtin::f32(0.5f)) {
								#line 953 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
								const auto value = (Builtin::f32(0.5f) - fractional) * ADV_USPCS(Pi, Builtin::f32)(); 
								#line 954 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
								sin = sinSign * CosPiBy4(value);
								#line 955 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
								cos = cosSign * SinPiBy4(value);
							} else {
								#line 956 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
								{
									#line 957 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
									sin = sinSign;
									#line 958 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
									cos = Builtin::f32(0.0f);
								}
							}
						} else {
							#line 960 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							if ((fractional <=> Builtin::f32(0.75f)) <= 0) {
								#line 961 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
								const auto value = (fractional - Builtin::f32(0.5f)) * ADV_USPCS(Pi, Builtin::f32)(); 
								#line 962 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
								sin = +sinSign * CosPiBy4(value);
								#line 963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
								cos = -cosSign * SinPiBy4(value);
							} else {
								#line 964 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
								{
									#line 965 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
									const auto value = (Builtin::f32(1.0f) - fractional) * ADV_USPCS(Pi, Builtin::f32)(); 
									#line 966 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
									sin = +sinSign * SinPiBy4(value);
									#line 967 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
									cos = -cosSign * CosPiBy4(value);
								}
							}
						}
					}
				} else {
					#line 969 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					if ((ax <=> Builtin::f32(7.8125e-3f)) >= 0) {
						#line 970 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						const auto value = __this * ADV_USPCS(Pi, Builtin::f32)(); 
						#line 971 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						sin = SinPiBy4(value);
						#line 972 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						cos = CosPiBy4(value);
					} else {
						#line 973 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						if ((ax <=> Builtin::f32(1.22070313e-4f)) >= 0) {
							#line 974 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							const auto value = __this * ADV_USPCS(Pi, Builtin::f32)(); 
							#line 975 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							const auto valueSq = value * value; 
							#line 977 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							sin = value - (value * valueSq * (Builtin::f32(1.0f) / Builtin::f32(6.0f)));
							#line 978 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							cos = Builtin::f32(1.0f) - (valueSq * Builtin::f32(0.5f));
						} else {
							#line 979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							{
								#line 980 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
								sin = __this * ADV_USPCS(Pi, Builtin::f32)();
								#line 981 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
								cos = Builtin::f32(1.0f);
							}
						}
					}
				}
			} else {
				#line 983 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				if ((ax <=> Builtin::f32(16777216.0f)) < 0) {
					#line 984 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					sin = __this * Builtin::f32(0.0f);
					#line 985 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					cos = ADV_UPCS(IsOddInteger)(ADV_UPCS(Bits)(ax.__ref()).__ref()) ? Builtin::f32(-1.0f) : +Builtin::f32(1.0f);
				} else {
					#line 986 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					{
						#line 987 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						sin = __this * Builtin::f32(0.0f);
						#line 988 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						cos = Builtin::f32(1.0f);
					}
				}
			}
		} else {
			#line 990 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			{
				#line 991 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				sin = ADV_USPCS(NaN, Builtin::f32)();
				#line 992 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				cos = ADV_USPCS(NaN, Builtin::f32)();
			}
		}
		#line 995 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return std::make_tuple(sin, cos);
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 998 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	auto getTanPi(__extension_Float32_819_f32 const& __this ) -> const __extension_Float32_1209_f32
	{
		#line 1000 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		__extension_Float32_1209_f32 result{}; 
		#line 1002 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (ADV_UPCS(IsFinite)(__this.__ref())) {
			#line 1003 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			const auto ax = ADV_UPCS(Abs)(__this.__ref()); 
			#line 1004 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			const auto sign = (__this <=> Builtin::f32(0.0f)) > 0 ? +Builtin::f32(1.0f) : Builtin::f32(-1.0f); 
			#line 1007 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			{
				#line 1008 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				auto __tmp__valid_1007 = Builtin::Cast<false, std::decay_t<decltype(ax)>::__self>(ax);
				#line 1008 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				if(__tmp__valid_1007.IsValid() && Builtin::IsLess(*__tmp__valid_1007, Builtin::f32(8388608.0f)))  {
					#line 1008 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					const auto& ax = *__tmp__valid_1007;
					#line 1008 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					{
						#line 1009 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						{
							#line 1010 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							auto __tmp__valid_1009 = Builtin::Cast<false, std::decay_t<decltype(ax)>::__self>(ax);
							#line 1010 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							if(__tmp__valid_1009.IsValid() && Builtin::IsGreater(*__tmp__valid_1009, Builtin::f32(0.25f)))  {
								#line 1010 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
								const auto& ax = *__tmp__valid_1009;
								#line 1010 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
								{
									#line 1011 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
									const auto integral = Builtin::Cast<true, Builtin::i32>(ax); 
									#line 1012 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
									const auto fractional = ax - integral; 
									#line 1014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
									result = [&]() 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
									{
										#line 1015 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
										auto __tmp__valid_1014 = Builtin::Cast<false, std::decay_t<decltype(fractional)>::__self>(fractional);
										#line 1015 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
										if(__tmp__valid_1014.IsValid() && Builtin::IsLessOrEqual(*__tmp__valid_1014, Builtin::f32(0.25f))) {
											#line 1015 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
											const auto& fractional = *__tmp__valid_1014;
											return fractional != Builtin::f32(0.0f) ? sign * TanPiBy4(fractional * ADV_USPCS(Pi, Builtin::f32)(), Builtin::Boolean(false)) : sign * (ADV_UPCS(IsOddInteger)(integral.__ref()) ? Builtin::f32(-0.0f) : +Builtin::f32(0.0f));
										}
										else {
											#line 1017 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
											if(__tmp__valid_1014.IsValid() && Builtin::IsLessOrEqual(*__tmp__valid_1014, Builtin::f32(0.5f))) {
												#line 1017 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
												const auto& fractional = *__tmp__valid_1014;
												return fractional != Builtin::f32(0.5f) ? -sign * TanPiBy4((Builtin::f32(0.5f) - fractional) * ADV_USPCS(Pi, Builtin::f32)(), Builtin::Boolean(true)) : +sign * (ADV_UPCS(IsOddInteger)(integral.__ref()) ? ADV_USPCS(NegativeInfinity, Builtin::f32)() : ADV_USPCS(PositiveInfinity, Builtin::f32)());
											}
											else {
												#line 1019 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
												if(__tmp__valid_1014.IsValid() && Builtin::IsLessOrEqual(*__tmp__valid_1014, Builtin::f32(0.75f))) {
													#line 1019 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
													const auto& fractional = *__tmp__valid_1014;
													return +sign * TanPiBy4((fractional - Builtin::f32(0.5f)) * ADV_USPCS(Pi, Builtin::f32)(), Builtin::Boolean(true));
												}
												else {
													return -sign * TanPiBy4((Builtin::f32(1.0f) - fractional) * ADV_USPCS(Pi, Builtin::f32)(), Builtin::Boolean(false));
													
												}
											}
										}
									}
ADV_WARNING_POP
									();
								}
							}
							else {
								#line 1023 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
								if(__tmp__valid_1009.IsValid() && Builtin::IsGreaterOrEqual(*__tmp__valid_1009, Builtin::f32(7.8125e-3f)))  {
									#line 1023 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
									const auto& ax = *__tmp__valid_1009;
									#line 1023 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
									result = TanPiBy4(__this * ADV_USPCS(Pi, Builtin::f32)(), Builtin::Boolean(false));
								}
								else {
									#line 1024 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
									if(__tmp__valid_1009.IsValid() && Builtin::IsGreaterOrEqual(*__tmp__valid_1009, Builtin::f32(1.22070313e-4f)))  {
										#line 1024 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
										const auto& ax = *__tmp__valid_1009;
										#line 1024 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
										{
											#line 1025 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
											const auto value = __this * ADV_USPCS(Pi, Builtin::f32)(); 
											#line 1026 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
											result = value + (value * value * value * (Builtin::f32(1.0f) / Builtin::f32(3.0f)));
										}
									}
									else {
										#line 1028 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
										result = __this * ADV_USPCS(Pi, Builtin::f32)();
										
									}
								}
							}
						}

					}
				}
				else {
					#line 1031 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					if(__tmp__valid_1007.IsValid() && Builtin::IsLess(*__tmp__valid_1007, Builtin::i32(16777216)))  {
						#line 1031 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						const auto& ax = *__tmp__valid_1007;
						#line 1031 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						result = sign * (ADV_UPCS(IsOddInteger)(ADV_UPCS(Bits)(ax.__ref()).__ref()) ? Builtin::f32(-0.0f) : +Builtin::f32(0.0f));
					}
					else {
						#line 1032 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						result = sign * Builtin::f32(0.0f);
						
					}
				}
			}

		} else {
			#line 1034 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			{
				#line 1035 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				result = ADV_USPCS(NaN, Builtin::f32)();
			}
		}
		#line 1038 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return result;
	}
	} namespace System{

}