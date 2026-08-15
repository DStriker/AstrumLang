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
#line 1234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto SinPiBy4(Builtin::f32 x) noexcept -> const Builtin::f32;
#line 1252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto CosPiBy4(Builtin::f32 x) noexcept -> const Builtin::f32;
#line 1270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto TanPiBy4(Builtin::f32 x, bool isReciprocal) noexcept -> const Builtin::f32;
//###############################################################################
//# Global compile-time constants
//###############################################################################

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	







































#line 1234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto SinPiBy4(Builtin::f32 x) noexcept -> const Builtin::f32
	{
		#line 1236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		constexpr Builtin::Auto<decltype(Builtin::f64(-0.166666666666666646259241729))> C1 = Builtin::f64(-0.166666666666666646259241729);
		#line 1237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		constexpr Builtin::Auto<decltype(+Builtin::f64(0.833333333333095043065222816e-2))> C2 = +Builtin::f64(0.833333333333095043065222816e-2);
		#line 1238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		constexpr Builtin::Auto<decltype(Builtin::f64(-0.19841269836761125688538679e-3))> C3 = Builtin::f64(-0.19841269836761125688538679e-3);
		#line 1239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		constexpr Builtin::Auto<decltype(+Builtin::f64(0.275573161037288022676895908448e-5))> C4 = +Builtin::f64(0.275573161037288022676895908448e-5);
		#line 1241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		const Builtin::f64 xx = x * x; 
		#line 1242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		Builtin::Auto<decltype(C4)> result = C4; 
		#line 1244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		result = (result * xx) + C3;
		#line 1245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		result = (result * xx) + C2;
		#line 1246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		result = (result * xx) + C1;
		#line 1247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		result *= xx * x;
		#line 1248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		result += x;
		#line 1249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return Builtin::Cast<true, Builtin::f32>(result);
	}

#line 1252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto CosPiBy4(Builtin::f32 x) noexcept -> const Builtin::f32
	{
		#line 1254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		constexpr Builtin::Auto<decltype(+Builtin::f64(0.41666666666666665390037e-1))> C1 = +Builtin::f64(0.41666666666666665390037e-1);
		#line 1255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		constexpr Builtin::Auto<decltype(Builtin::f64(-0.13888888888887398280412e-2))> C2 = Builtin::f64(-0.13888888888887398280412e-2);
		#line 1256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		constexpr Builtin::Auto<decltype(+Builtin::f64(0.248015872987670414957399e-4))> C3 = +Builtin::f64(0.248015872987670414957399e-4);
		#line 1257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		constexpr Builtin::Auto<decltype(Builtin::f64(-0.275573172723441909470836e-6))> C4 = Builtin::f64(-0.275573172723441909470836e-6);
		#line 1259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		const Builtin::f64 xx = x * x; 
		#line 1260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		Builtin::Auto<decltype(C4)> result = C4; 
		#line 1262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		result = (result * xx) + C3;
		#line 1263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		result = (result * xx) + C2;
		#line 1264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		result = (result * xx) + C1;
		#line 1265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		result *= xx * xx;
		#line 1266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		result += Builtin::f64(1.0) - (Builtin::f64(0.5) * xx);
		#line 1267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return Builtin::Cast<true, Builtin::f32>(result);
	}

#line 1270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	inline auto TanPiBy4(Builtin::f32 x, bool isReciprocal) noexcept -> const Builtin::f32
	{
		#line 1272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		const Builtin::f64 xx = x * x; 
		#line 1273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		Builtin::Auto<decltype(+Builtin::f64(0.1844239256901656082986661e-1))> denominator = +Builtin::f64(0.1844239256901656082986661e-1); 
		#line 1274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		denominator = Builtin::f64(-0.51396505478854532132342e+0) + (denominator * xx);
		#line 1275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		denominator = +Builtin::f64(0.115588821434688393452299e+1) + (denominator * xx);
		#line 1276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		Builtin::Auto<decltype(Builtin::f64(-0.172032480471481694693109e-1))> numerator = Builtin::f64(-0.172032480471481694693109e-1); 
		#line 1277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		numerator = Builtin::f64(0.385296071263995406715129e+0) + (numerator * xx);
		#line 1279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		Builtin::f64 result = xx * x; 
		#line 1280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		result *= numerator / denominator;
		#line 1281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		result += x;
		#line 1283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (isReciprocal) {
			#line 1284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			result = Builtin::f64(-1.0) / result;
		}
		#line 1287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return Builtin::Cast<true, Builtin::f32>(result);
	}

#line 1290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	static_assert(Builtin::usize(sizeof(Builtin::f32)) == Builtin::i32(4), "f32 should be 4 bytes");
#line 1291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	static_assert(ADV_USPCS(Pi, Builtin::f32)() == Builtin::f32(3.14159265f), "f32.Pi should be 3.14159265f");
#line 1292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	static_assert(Builtin::TypeIs<Builtin::f32, IComparable<Builtin::f32>>(), "f32 should implement IComparable<f32>");
#line 1293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	static_assert(Builtin::TypeIs<Builtin::f32, IEquatable<Builtin::f32>>(), "f32 should implement IEquatable<f32>");
#line 1294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	static_assert(Builtin::TypeIs<Builtin::f32, ISelfComparable>(), "f32 should implement ISelfComparable");
#line 1295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	static_assert(Builtin::TypeIs<Builtin::f32, ISelfEquatable>(), "f32 should implement ISelfEquatable");
#line 1296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	static_assert(Builtin::TypeIs<Builtin::f32, IAdditionOperators<Builtin::f32, Builtin::f32>>(), "f32 should implement IAdditionOperators<f32, f32>");
#line 1297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	static_assert(Builtin::TypeIs<Builtin::f32, ISubtractionOperators<Builtin::f32, Builtin::f32>>(), "f32 should implement ISubtractionOperators<f32, f32>");
#line 1298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	static_assert(Builtin::TypeIs<Builtin::f32, IMultiplyOperators<Builtin::f32, Builtin::f32>>(), "f32 should implement IMultiplyOperators<f32, f32>");
#line 1299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	static_assert(Builtin::TypeIs<Builtin::f32, IDivisionOperators<Builtin::f32, Builtin::f64>>(), "f32 should implement IDivisionOperators<f32, f64>");
#line 1300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	static_assert(Builtin::TypeIs<Builtin::f32, IModulusOperators<Builtin::f32, Builtin::f32>>(), "f32 should implement IModulusOperators<f32, f32>");
#line 1301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	static_assert(Builtin::TypeIs<Builtin::f32, IUnaryPlusOperators<Builtin::f32>>(), "f32 should implement IUnaryPlusOperators<f32>");
#line 1302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	static_assert(Builtin::TypeIs<Builtin::f32, IUnaryNegationOperators<Builtin::f32>>(), "f32 should implement IUnaryNegationOperators<f32>");
#line 1303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	static_assert(Builtin::TypeIs<Builtin::f32, IIncrementOperators<Builtin::f32>>(), "f32 should implement IIncrementOperators<f32>");
#line 1304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	static_assert(Builtin::TypeIs<Builtin::f32, IDecrementOperators<Builtin::f32>>(), "f32 should implement IDecrementOperators<f32>");
#ifdef ADV_UNITTEST
	#line 1306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	static bool $Test_d2cb87dfccf6cab6 = [](){
		#line 1307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		Builtin::f32 f = Builtin::f32(1234.1234f); 
		#line 1309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_USPCS(Pi, Builtin::f32)() == Builtin::f32(3.14159265f)), "f32.Pi==3.14159265f");
		#line 1310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((f != ADV_USPCS(Pi, Builtin::f32)()), "f!=f32.Pi");
		#line 1311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT(((f <=> Builtin::f32(1234.1f)) > 0), "f>1234.1f");
		#line 1312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT(((f <=> Builtin::f32(1234.5f)) < 0), "f<1234.5f");
		#line 1314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((f + Builtin::f32(1.0f) == Builtin::f32(1235.1234f)), "f+1.0f==1235.1234f");
		#line 1315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((f - Builtin::f32(1.0f) == Builtin::f32(1233.1234f)), "f-1.0f==1233.1234f");
		#line 1316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((f * Builtin::f32(2.0f) == Builtin::f32(2468.2468f)), "f*2.0f==2468.2468f");
		#line 1317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((f / Builtin::f32(2.0f) == Builtin::f32(617.0617f)), "f/2.0f==617.0617f");
		#line 1318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((f % Builtin::f32(2.0f) == Builtin::f32(0.123413086f)), "f%2.0f==0.123413086f");
		#line 1320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		f += Builtin::f32(1.0f);
		#line 1321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((f == Builtin::f32(1235.1234f)), "f==1235.1234f");
		#line 1322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		f -= Builtin::f32(1.0f);
		#line 1323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((f == Builtin::f32(1234.1234f)), "f==1234.1234f");
		#line 1324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		f *= Builtin::f32(2.0f);
		#line 1325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((f == Builtin::f32(2468.2468f)), "f==2468.2468f");
		#line 1326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		f /= Builtin::f32(2.0f);
		#line 1327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((f == Builtin::f32(1234.1234f)), "f==1234.1234f");
		#line 1328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		f %= Builtin::f32(2.0f);
		#line 1329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((f == Builtin::f32(0.123413086f)), "f==0.123413086f");
		#line 1331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		f = Builtin::f32(1234.1234f);
		#line 1332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((f++ == Builtin::f32(1234.1234f)), "f++==1234.1234f");
		#line 1333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((++f == Builtin::f32(1236.1234f)), "++f==1236.1234f");
		#line 1334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((f-- == Builtin::f32(1236.1234f)), "f--==1236.1234f");
		#line 1335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((--f == Builtin::f32(1234.1234f)), "--f==1234.1234f");
		#line 1337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((+f == Builtin::f32(1234.1234f)), "+f==1234.1234f");
		#line 1338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((-f == Builtin::f32(-1234.1234f)), "-f==-1234.1234f");
		#line 1340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		Builtin::Nullable<Builtin::f32> n = nullptr; 
		#line 1341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((n == nullptr), "n==null");
		#line 1342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((f != n), "f!=n");
		#line 1343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		n = Builtin::f32(3.1234f);
		#line 1344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((n != nullptr), "n!=null");
		#line 1345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((f != n), "f!=n");
		#line 1348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		Builtin::Nullable<Builtin::ObjectRef> o = f; 
		#line 1350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		IComparable<Builtin::f32> icomp = f; 
		#line 1351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT(((icomp <=> (*(n))) > 0), "icomp>n!");
		#line 1353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(f.$ref()) == Builtin::i32(1150960627)), "f.HashCode==1150960627");
		#line 1354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(f) == Builtin::i32(1150960627)), "#f==1150960627");
		#line 1356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(ToBoolean)(f.$ref())), "f.ToBoolean()");
		#line 1357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((!ADV_UFCS(ToBoolean)(Builtin::f32(0.0f).$ref())), "!0.0f.ToBoolean()");
		#line 1358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(ToInt16)(f.$ref()) == Builtin::i32(1234)), "f.ToInt16()==1234");
		#line 1359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(ToInt32)(f.$ref()) == Builtin::i32(1234)), "f.ToInt32()==1234");
		#line 1360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(ToInt64)(f.$ref()) == Builtin::i32(1234)), "f.ToInt64()==1234");
		#line 1361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(ToInt128)(f.$ref()) == Builtin::i32(1234)), "f.ToInt128()==1234");
		#line 1362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(ToUsize)(f.$ref()) == Builtin::i32(1234)), "f.ToUsize()==1234");
		#line 1364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		{
			#line 1365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)(f, Builtin::f32(2.0f));
			#line 1366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			ADV_ASSERT((div == Builtin::f32(617.0617f) && rem == Builtin::f32(0.123413086f)), "div==617.0617f&&rem==0.123413086f");
		}
		#line 1369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor)(f, Builtin::i32(2)) == Builtin::f32(1523060.625f)), "f^^2==1523060.625f");
		#line 1370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor)(f, (Builtin::i32(-2))) == Builtin::f32(6.5657269487928715534508228302e-07f)), "f^^(-2)==6.5657269487928715534508228302e-07f");
		#line 1371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_mul)(f, Builtin::i32(2)) == Builtin::f32(1523060.625f)), "f**2==1523060.625f");
		#line 1372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_mul)(f, (Builtin::i32(-2))) == Builtin::f32(6.5657269487928715534508228302e-07f)), "f**(-2)==6.5657269487928715534508228302e-07f");
		#line 1373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_mul)(f, Builtin::f32(1.234f)) == Builtin::f32(6527.34228515625f)), "f**1.234f==6527.34228515625f");
		#line 1375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Abs)(f.$ref()) == f), "f.Abs==f");
		#line 1376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Abs)(Builtin::f32(-1234.1234f).$ref()) == Builtin::f32(1234.1234f)), "-1234.1234f.Abs==1234.1234f");
		#line 1377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(IsCanonical)(f.$ref())), "f.IsCanonical");
		#line 1378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((!ADV_UPCS(IsComplexNumber)(f.$ref())), "!f.IsComplexNumber");
		#line 1379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((!ADV_UPCS(IsImaginaryNumber)(f.$ref())), "!f.IsImaginaryNumber");
		#line 1380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(IsRealNumber)(f.$ref())), "f.IsRealNumber");
		#line 1381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(IsFinite)(f.$ref())), "f.IsFinite");
		#line 1382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((!ADV_UPCS(IsInfinity)(f.$ref())), "!f.IsInfinity");
		#line 1383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((!ADV_UPCS(IsNaN)(f.$ref())), "!f.IsNaN");
		#line 1384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((!ADV_UPCS(IsNegative)(f.$ref())), "!f.IsNegative");
		#line 1385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(IsNegative)(Builtin::f32(-1234.1234f).$ref())), "-1234.1234f.IsNegative");
		#line 1386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((!ADV_UPCS(IsNegativeInfinity)(f.$ref())), "!f.IsNegativeInfinity");
		#line 1387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(IsPositive)(f.$ref())), "f.IsPositive");
		#line 1388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((!ADV_UPCS(IsPositiveInfinity)(f.$ref())), "!f.IsPositiveInfinity");
		#line 1389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((!ADV_UPCS(IsSubnormal)(f.$ref())), "!f.IsSubnormal");
		#line 1390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((!ADV_UPCS(IsZero)(f.$ref())), "!f.IsZero");
		#line 1391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(IsZero)(Builtin::f32(0.0f).$ref())), "0.0f.IsZero");
		#line 1392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((!ADV_UPCS(IsInteger)(f.$ref())), "!f.IsInteger");
		#line 1393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((!ADV_UPCS(IsEvenInteger)(f.$ref())), "!f.IsEvenInteger");
		#line 1394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((!ADV_UPCS(IsOddInteger)(f.$ref())), "!f.IsOddInteger");
		#line 1395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(IsInteger)(Builtin::f32(1.0f).$ref())), "1.0f.IsInteger");
		#line 1396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(IsOddInteger)(Builtin::f32(1.0f).$ref())), "1.0f.IsOddInteger");
		#line 1397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(IsEvenInteger)(Builtin::f32(2.0f).$ref())), "2.0f.IsEvenInteger");
		#line 1398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(MaxMagnitude)(f.$ref(), Builtin::f32(-1235.0f)) == Builtin::f32(-1235.0f)), "f.MaxMagnitude(-1235.0f)==-1235.0f");
		#line 1399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(MinMagnitude)(f.$ref(), Builtin::f32(-1235.0f)) == Builtin::f32(1234.1234f)), "f.MinMagnitude(-1235.0f)==1234.1234f");
		#line 1401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(NarrowToInt32)(f.$ref()) == Builtin::i32(1234)), "f.NarrowToInt32()==1234");
		#line 1402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(NarrowToInt8)(f.$ref()) == Builtin::i32(-46)), "f.NarrowToInt8()==-46");
		#line 1404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Sign)(f.$ref()) == Builtin::i32(1)), "f.Sign==1");
		#line 1405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Sign)(Builtin::f32(-1234.1234f).$ref()) == Builtin::i32(-1)), "-1234.1234f.Sign==-1");
		#line 1406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Sign)(Builtin::f32(0.0f).$ref()) == Builtin::i32(0)), "0.0f.Sign==0");
		#line 1408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(CopySign)(f.$ref(), Builtin::f32(-1.0f)) == Builtin::f32(-1234.1234f)), "f.CopySign(-1.0f)==-1234.1234f");
		#line 1409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(Max)(f.$ref(), Builtin::i32(123)) == f), "f.Max(123)==f");
		#line 1410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(Min)(f.$ref(), Builtin::i32(123)) == Builtin::f32(123.0f)), "f.Min(123)==123.0f");
		#line 1411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(Clamp)(f.$ref(), Builtin::i32(1), Builtin::i32(1000)) == Builtin::f32(1000.0f)), "f.Clamp(1,1000)==1000.0f");
		#line 1413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((!ADV_UPCS(IsPow2)(f.$ref())), "!f.IsPow2");
		#line 1414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(IsPow2)(Builtin::f32(4096.0f).$ref())), "4096.0f.IsPow2");
		#line 1415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::f32(4096.0f).$ref()) == Builtin::f32(12.0f)), "4096.0f.Log2==12.0f");
		#line 1417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(IsNaN)(ADV_UPCS(Log2)(Builtin::f32(-123.0f).$ref()).$ref())), "-123.0f.Log2.IsNaN");
		#line 1418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(Builtin::f32(10000.0f).$ref()) == Builtin::f32(4.0f)), "10000.0f.Log10==4.0f");
		#line 1420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(IsNaN)(ADV_UPCS(Log10)(Builtin::f32(-123.0f).$ref()).$ref())), "-123.0f.Log10.IsNaN");
		#line 1421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(Midpoint)(f.$ref(), Builtin::f32(2431.15f)) == Builtin::f32(1832.6367f)), "f.Midpoint(2431.15f)==1832.6367f");
		#line 1422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(IsMultipleOf)(Builtin::f32(10000.0f).$ref(), Builtin::i32(10))), "10000.0f.IsMultipleOf(10)");
		#line 1423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((!ADV_UFCS(IsMultipleOf)(Builtin::f32(10000.0f).$ref(), Builtin::f32(7.5f))), "!10000.0f.IsMultipleOf(7.5f)");
		#line 1424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(IsMultipleOf)(Builtin::f32(22.5f).$ref(), Builtin::f32(7.5f))), "22.5f.IsMultipleOf(7.5f)");
		#line 1425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_USPCS(NaN, Builtin::f32)() != ADV_USPCS(NaN, Builtin::f32)()), "f32.NaN!=f32.NaN");
		#line 1428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Ceil)(Builtin::f32(2.5f).$ref()) == Builtin::f32(3.0f)), "2.5f.Ceil==3.0f");
		#line 1429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Floor)(Builtin::f32(2.5f).$ref()) == Builtin::f32(2.0f)), "2.5f.Floor==2.0f");
		#line 1430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Truncate)(Builtin::f32(2.5f).$ref()) == Builtin::f32(2.0f)), "2.5f.Truncate==2.0f");
		#line 1431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Round)(Builtin::f32(2.5f).$ref()) == Builtin::f32(3.0f)), "2.5f.Round==3.0f");
		#line 1432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(RoundToInt32)(Builtin::f32(2.5f).$ref()) == Builtin::i32(3)), "2.5f.RoundToInt32()==3");
		#line 1433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(RoundTiesEven)(Builtin::f32(2.5f).$ref()) == Builtin::f32(2.0f)), "2.5f.RoundTiesEven==2.0f");
		#line 1434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(RoundTiesEvenToInt32)(Builtin::f32(2.5f).$ref()) == Builtin::i32(2)), "2.5f.RoundTiesEvenToInt32()==2");
		#line 1435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(RoundTiesEven)(Builtin::f32(3.5f).$ref()) == Builtin::f32(4.0f)), "3.5f.RoundTiesEven==4.0f");
		#line 1436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(Round)(Builtin::f32(2.665f).$ref(), Builtin::u32(2U)) == Builtin::f32(2.67f)), "2.665f.Round(2u)==2.67f");
		#line 1437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(Round)(Builtin::f32(2.665f).$ref(), Builtin::u32(2U), ADV_USPCS(ToEven, MidpointRounding)()) == Builtin::f32(2.66f)), "2.665f.Round(2u,MidpointRounding.ToEven)==2.66f");
		#line 1438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Ceil)((Builtin::f32(-2.5f)).$ref()) == Builtin::f32(-2.0f)), "(-2.5f).Ceil==-2.0f");
		#line 1439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Floor)((Builtin::f32(-2.5f)).$ref()) == Builtin::f32(-3.0f)), "(-2.5f).Floor==-3.0f");
		#line 1440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Truncate)((Builtin::f32(-2.5f)).$ref()) == Builtin::f32(-2.0f)), "(-2.5f).Truncate==-2.0f");
		#line 1441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Round)((Builtin::f32(-2.5f)).$ref()) == Builtin::f32(-3.0f)), "(-2.5f).Round==-3.0f");
		#line 1442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(RoundToInt32)((Builtin::f32(-2.5f)).$ref()) == Builtin::i32(-3)), "(-2.5f).RoundToInt32()==-3");
		#line 1443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(RoundTiesEven)((Builtin::f32(-2.5f)).$ref()) == Builtin::f32(-2.0f)), "(-2.5f).RoundTiesEven==-2.0f");
		#line 1444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(RoundTiesEvenToInt32)((Builtin::f32(-2.5f)).$ref()) == Builtin::i32(-2)), "(-2.5f).RoundTiesEvenToInt32()==-2");
		#line 1445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(RoundTiesEven)((Builtin::f32(-3.5f)).$ref()) == Builtin::f32(-4.0f)), "(-3.5f).RoundTiesEven==-4.0f");
		#line 1446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(Round)((Builtin::f32(-2.665f)).$ref(), Builtin::u32(2U)) == Builtin::f32(-2.67f)), "(-2.665f).Round(2u)==-2.67f");
		#line 1447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(Round)((Builtin::f32(-2.665f)).$ref(), Builtin::u32(2U), ADV_USPCS(ToEven, MidpointRounding)()) == Builtin::f32(-2.66f)), "(-2.665f).Round(2u,MidpointRounding.ToEven)==-2.66f");
		#line 1449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		f = Builtin::f32(12.34f);
		#line 1450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Exp)(f.$ref()) == Builtin::f32(228661.98f)), "f.Exp==228661.98f");
		#line 1451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(ExpM1)(f.$ref()) == Builtin::f32(228660.98f)), "f.ExpM1==228660.98f");
		#line 1452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Exp2)(f.$ref()) == Builtin::f32(5184.5396f)), "f.Exp2==5184.5396f");
		#line 1453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Exp2M1)(f.$ref()) == Builtin::f32(5183.5396f)), "f.Exp2M1==5183.5396f");
		#line 1454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Exp10)(f.$ref()) == Builtin::f32(2187762300000.0f)), "f.Exp10==2187762300000.0f");
		#line 1455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Exp10M1)(f.$ref()) == Builtin::f32(2187762300000.0f)), "f.Exp10M1==2187762300000.0f");
		#line 1456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Ln)(f.$ref()) == Builtin::f32(2.512846f)), "f.Ln==2.512846f");
		#line 1457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(LnP1)(f.$ref()) == Builtin::f32(2.5907671f)), "f.LnP1==2.5907671f");
		#line 1458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(Log)(f.$ref(), Builtin::f32(1.25f)) == Builtin::f32(11.261119f)), "f.Log(1.25f)==11.261119f");
		#line 1460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Sqrt)(f.$ref()) == Builtin::f32(3.5128336f)), "f.Sqrt==3.5128336f");
		#line 1461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Cbrt)(f.$ref()) == Builtin::f32(2.310849666595458984375f)), "f.Cbrt==2.310849666595458984375f");
		#line 1462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(Root)(Builtin::f32(1234.1234f).$ref(), Builtin::i32(5)) == Builtin::f32(4.1521373f)), "1234.1234f.Root(5)==4.1521373f");
		#line 1463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(Root)(f.$ref(), Builtin::i32(-5)) == Builtin::f32(0.6049743f)), "f.Root(-5)==0.6049743f");
		#line 1464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(Hypot)(f.$ref(), Builtin::f32(9.12f)) == Builtin::f32(15.34438f)), "f.Hypot(9.12f)==15.34438f");
		#line 1466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Sin)(f.$ref()) == Builtin::f32(-0.22444206f)), "f.Sin==-0.22444206f");
		#line 1467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Cos)(f.$ref()) == Builtin::f32(0.9744874f)), "f.Cos==0.9744874f");
		#line 1468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Tan)(f.$ref()) == Builtin::f32(-0.23031807f)), "f.Tan==-0.23031807f");
		#line 1469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Cot)(f.$ref()) == Builtin::f32(-4.3418217f)), "f.Cot==-4.3418217f");
		#line 1470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Sec)(f.$ref()) == Builtin::f32(1.0261805f)), "f.Sec==1.0261805f");
		#line 1471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Csc)(f.$ref()) == Builtin::f32(-4.455493f)), "f.Csc==-4.455493f");
		#line 1472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		f = Builtin::f32(0.34f);
		#line 1473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Asin)(f.$ref()) == Builtin::f32(0.3469169f)), "f.Asin==0.3469169f");
		#line 1474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Acos)(f.$ref()) == Builtin::f32(1.2238795f)), "f.Acos==1.2238795f");
		#line 1475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Atan)(f.$ref()) == Builtin::f32(0.32773852f)), "f.Atan==0.32773852f");
		#line 1476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Acot)(f.$ref()) == Builtin::f32(1.2430578f)), "f.Acot==1.2430578f");
		#line 1477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		f = Builtin::f32(12.34f);
		#line 1478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Asec)(f.$ref()) == Builtin::f32(1.48967f)), "f.Asec==1.48967f");
		#line 1479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Acsc)(f.$ref()) == Builtin::f32(0.081126235f)), "f.Acsc==0.081126235f");
		#line 1480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(ToRadians)(f.$ref()) == Builtin::f32(0.21537364f)), "f.ToRadians()==0.21537364f");
		#line 1481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(ToDegrees)(Builtin::f32(0.34f).$ref()) == Builtin::f32(19.480564f)), "0.34f.ToDegrees()==19.480564f");
		#line 1482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(SinPi)(f.$ref()) == Builtin::f32(0.8763069f)), "f.SinPi==0.8763069f");
		#line 1483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(SinPi)(Builtin::f32(1.0f).$ref()) == Builtin::f32(0.0f)), "1.0f.SinPi==0.0f");
		#line 1484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(SinPi)(Builtin::f32(0.5f).$ref()) == Builtin::f32(1.0f)), "0.5f.SinPi==1.0f");
		#line 1485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(CosPi)(f.$ref()) == Builtin::f32(0.4817533f)), "f.CosPi==0.4817533f");
		#line 1486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(CosPi)(Builtin::f32(1.0f).$ref()) == Builtin::f32(-1.0f)), "1.0f.CosPi==-1.0f");
		#line 1487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(CosPi)(Builtin::f32(0.5f).$ref()) == Builtin::f32(0.0f)), "0.5f.CosPi==0.0f");
		#line 1488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(TanPi)(f.$ref()) == Builtin::f32(1.8189952f)), "f.TanPi==1.8189952f");
		#line 1489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(TanPi)(Builtin::f32(1.0f).$ref()) == Builtin::f32(-0.0f)), "1.0f.TanPi==-0.0f");
		#line 1490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(TanPi)(Builtin::f32(0.0f).$ref()) == Builtin::f32(0.0f)), "0.0f.TanPi==0.0f");
		#line 1492 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Sinh)(f.$ref()) == Builtin::f32(114330.99f)), "f.Sinh==114330.99f");
		#line 1493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Cosh)(f.$ref()) == Builtin::f32(114330.99f)), "f.Cosh==114330.99f");
		#line 1494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Tanh)(f.$ref()) == Builtin::f32(1.0f)), "f.Tanh==1.0f");
		#line 1495 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Coth)(f.$ref()) == Builtin::f32(1.0f)), "f.Coth==1.0f");
		#line 1496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Sech)(f.$ref()) == Builtin::f32(0.000008746535f)), "f.Sech==0.000008746535f");
		#line 1497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Csch)(f.$ref()) == Builtin::f32(0.000008746535f)), "f.Csch==0.000008746535f");
		#line 1498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Asinh)(f.$ref()) == Builtin::f32(3.2076309f)), "f.Asinh==3.2076309f");
		#line 1499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Acosh)(f.$ref()) == Builtin::f32(3.2043474f)), "f.Acosh==3.2043474f");
		#line 1500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(IsNaN)(ADV_UPCS(Atanh)(f.$ref()).$ref())), "f.Atanh.IsNaN");
		#line 1501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		f = Builtin::f32(0.34f);
		#line 1502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Sinh)(f.$ref()) == Builtin::f32(0.34658864140510559082f)), "f.Sinh==0.34658864140510559082f");
		#line 1503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Cosh)(f.$ref()) == Builtin::f32(1.0583589076995849609f)), "f.Cosh==1.0583589076995849609f");
		#line 1504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Tanh)(f.$ref()) == Builtin::f32(0.32747739553451538086f)), "f.Tanh==0.32747739553451538086f");
		#line 1505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Coth)(f.$ref()) == Builtin::f32(3.0536458492279052734f)), "f.Coth==3.0536458492279052734f");
		#line 1506 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Sech)(f.$ref()) == Builtin::f32(0.94485902786254882812f)), "f.Sech==0.94485902786254882812f");
		#line 1507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Csch)(f.$ref()) == Builtin::f32(2.8852648735046386719f)), "f.Csch==2.8852648735046386719f");
		#line 1508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Asinh)(f.$ref()) == Builtin::f32(0.33376836776733398438f)), "f.Asinh==0.33376836776733398438f");
		#line 1509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(IsNaN)(ADV_UPCS(Acosh)(f.$ref()).$ref())), "f.Acosh.IsNaN");
		#line 1510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Atanh)(f.$ref()) == Builtin::f32(0.35409253835678100586f)), "f.Atanh==0.35409253835678100586f");
		#line 1512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(ReciprocalEstimate)(f.$ref()) == Builtin::f32(2.9411764144897460938f)), "f.ReciprocalEstimate==2.9411764144897460938f");
		#line 1513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(FusedMultiplyAdd)(f.$ref(), Builtin::f32(5.0f), Builtin::f32(2.12f)) == Builtin::f32(3.8199999332427978516f)), "f.FusedMultiplyAdd(5.0f,2.12f)==3.8199999332427978516f");
		#line 1514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UFCS(Lerp)(Builtin::f32(1.0f).$ref(), Builtin::f32(2.0f), Builtin::f32(0.75f)) == Builtin::f32(1.75f)), "1.0f.Lerp(2.0f,0.75f)==1.75f");
		#line 1516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Gamma)(f.$ref()) == Builtin::f32(2.6241631507873535156f)), "f.Gamma==2.6241631507873535156f");
		#line 1517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(LnGamma)(f.$ref()) == Builtin::f32(0.96476197242736816406f)), "f.LnGamma==0.96476197242736816406f");
		#line 1518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Erf)(f.$ref()) == Builtin::f32(0.36936452984809875488f)), "f.Erf==0.36936452984809875488f");
		#line 1519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		ADV_ASSERT((ADV_UPCS(Erfc)(f.$ref()) == Builtin::f32(0.63063549995422363281f)), "f.Erfc==0.63063549995422363281f");
		return true;
	}();
	#endif	
} namespace $extensions { using namespace System;
#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	auto _operator_eq_eq_mul($extension_Float32_19_f32 const& $this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool
	{
		#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		{
			#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			auto __tmp0 = Builtin::Cast<false, $extension_Float32_19_f32>(obj);
			#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			if ((__tmp0.IsValid())) {
				#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				const auto& obj = *__tmp0;
				
				#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				if ($this == obj) {
					#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					return Builtin::Boolean(true);
				}
			}
		}
		#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return Builtin::Boolean(false);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	auto _operator_lt_eq_gt_mul($extension_Float32_61_f32 const& $this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32
	{
		#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		{
			#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			auto __tmp0 = Builtin::Cast<false, $extension_Float32_61_f32>(obj);
			#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			if ((__tmp0.IsValid())) {
				#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				const auto& obj = *__tmp0;
				
				#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				return $this <=> obj;
			}
		}
		#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		{
			#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			if ((!Builtin::Is(obj, nullptr))) {
				#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				auto __tmp0 = *obj; const auto& obj = __tmp0;
				
				#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				Builtin::Throw(Builtin::InvalidOperationException{});
			}
		}
		#line 71 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return Builtin::i32(1);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	auto Parse($extension_Float32_161_f32 const& $this LIFETIMEBOUND, Builtin::Str input)  -> const typename $extension_Float32_161_f32
	{
		#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return Builtin::i32(0);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	auto TryParse($extension_Float32_161_f32 const& $this LIFETIMEBOUND, Builtin::Str input) noexcept -> const Builtin::Nullable<$extension_Float32_161_f32>
	{
		#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return Builtin::f32(0.0f);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	auto Root($extension_Float32_712_f32 const& $this LIFETIMEBOUND, Builtin::i32 n)  -> const typename $extension_Float32_712_f32
	{
		#line 720 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		auto PositiveN = [&] ($extension_Float32_712_f32 x, Builtin::i32 n) 
		{
			#line 722 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			$extension_Float32_712_f32 result{}; 
			#line 723 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			if (ADV_UPCS(IsFinite)(x.$ref())) {
				#line 724 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				if (x != Builtin::i32(0)) {
					#line 725 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					if ((x <=> Builtin::i32(0)) > 0 || ADV_UPCS(IsOddInteger)(n.$ref())) {
						#line 726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						result = Builtin::f32{std::pow(Builtin::Cast<true, CDouble>(ADV_UPCS(Abs)(x.$ref())), Builtin::f64(1.0) / n)};
						#line 727 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						result = ADV_UFCS(CopySign)(result.$ref(), x);
					} else {
						#line 728 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						{
							#line 729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							result = ADV_USPCS(NaN, Builtin::f32)();
						}
					}
				} else {
					#line 731 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					if (ADV_UPCS(IsEvenInteger)(n.$ref())) {
						#line 732 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						result = Builtin::f32(0.0f);
					} else {
						#line 733 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						{
							#line 734 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							result = ADV_UFCS(CopySign)(Builtin::f32(0.0f).$ref(), x);
						}
					}
				}
			} else {
				#line 736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				if (ADV_UPCS(IsNaN)(x.$ref())) {
					#line 737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					result = ADV_USPCS(NaN, Builtin::f32)();
				} else {
					#line 738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					if ((x <=> Builtin::i32(0)) > 0) {
						#line 739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						ADV_ASSERT((ADV_UPCS(IsPositiveInfinity)(x.$ref())), "x.IsPositiveInfinity");
						#line 740 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						result = ADV_USPCS(PositiveInfinity, Builtin::f32)();
					} else {
						#line 741 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						{
							#line 742 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							ADV_ASSERT((ADV_UPCS(IsNegativeInfinity)(x.$ref())), "x.IsNegativeInfinity");
							#line 743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							result = ADV_UPCS(IsOddInteger)(n.$ref()) ? ADV_USPCS(NegativeInfinity, Builtin::f32)() : ADV_USPCS(NaN, Builtin::f32)();
						}
					}
				}
			}
			#line 746 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return result;
		}; 
		#line 749 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		auto NegativeN = [&] ($extension_Float32_712_f32 x, Builtin::i32 n) 
		{
			#line 751 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			$extension_Float32_712_f32 result{}; 
			#line 752 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			if (ADV_UPCS(IsFinite)(x.$ref())) {
				#line 753 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				if (x != Builtin::i32(0)) {
					#line 754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					if ((x <=> Builtin::i32(0)) > 0 || ADV_UPCS(IsOddInteger)(n.$ref())) {
						#line 755 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						result = Builtin::f32{std::pow(Builtin::Cast<true, CDouble>(ADV_UPCS(Abs)(x.$ref())), Builtin::f64(1.0) / n)};
						#line 756 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						result = ADV_UFCS(CopySign)(result.$ref(), x);
					} else {
						#line 757 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						{
							#line 758 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							result = ADV_USPCS(NaN, Builtin::f32)();
						}
					}
				} else {
					#line 760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					if (ADV_UPCS(IsEvenInteger)(n.$ref())) {
						#line 761 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						result = ADV_USPCS(PositiveInfinity, Builtin::f32)();
					} else {
						#line 762 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						{
							#line 763 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							result = ADV_UFCS(CopySign)(ADV_USPCS(PositiveInfinity, Builtin::f32)().$ref(), x);
						}
					}
				}
			} else {
				#line 765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				if (ADV_UPCS(IsNaN)(x.$ref())) {
					#line 766 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					result = ADV_USPCS(NaN, Builtin::f32)();
				} else {
					#line 767 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					if ((x <=> Builtin::i32(0)) > 0) {
						#line 768 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						ADV_ASSERT((ADV_UPCS(IsPositiveInfinity)(x.$ref())), "x.IsPositiveInfinity");
						#line 769 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						result = Builtin::f32(0.0f);
					} else {
						#line 770 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						{
							#line 771 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							ADV_ASSERT((ADV_UPCS(IsNegativeInfinity)(x.$ref())), "x.IsNegativeInfinity");
							#line 772 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							result = ADV_UPCS(IsOddInteger)(n.$ref()) ? Builtin::f32(-0.0f) : ADV_USPCS(NaN, Builtin::f32)();
						}
					}
				}
			}
			#line 775 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			return result;
		}; 
		#line 778 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return [&]() 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
		{
			#line 779 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			auto __tmp__valid_778 = Builtin::Cast<false, std::decay_t<decltype(n)>::$self>(n);
			#line 779 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			if(__tmp__valid_778.IsValid() && Builtin::IsGreater(*__tmp__valid_778, Builtin::i32(0))) {
				#line 779 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				const auto& n = *__tmp__valid_778;
				return [&]() 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
				{
					#line 781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					auto __tmp__valid_779 = Builtin::Cast<false, std::decay_t<decltype(n)>::$self>(n);
					#line 781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					if(__tmp__valid_779.IsValid() && Builtin::Is(*__tmp__valid_779, Builtin::i32(2))) {
						#line 781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						const auto& n = *__tmp__valid_779;
						return $this != Builtin::f32(0.0f) ? ADV_UPCS(Sqrt)($this.$ref()) : Builtin::f32(0.0f);
					}
					else {
						#line 782 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						if(__tmp__valid_779.IsValid() && Builtin::Is(*__tmp__valid_779, Builtin::i32(3))) {
							#line 782 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							const auto& n = *__tmp__valid_779;
							return ADV_UPCS(Cbrt)($this.$ref());
						}
						else {
							return PositiveN($this, n);
							
						}
					}
				}
ADV_WARNING_POP
				();
			}
			else {
				#line 785 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				if(__tmp__valid_778.IsValid() && Builtin::IsLess(*__tmp__valid_778, Builtin::i32(0))) {
					#line 785 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					const auto& n = *__tmp__valid_778;
					return NegativeN($this, n);
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
} namespace $extensions { using namespace System;
#line 791 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	auto Hypot($extension_Float32_712_f32 const& $this LIFETIMEBOUND, $extension_Float32_712_f32 y)  -> const typename $extension_Float32_712_f32
	{
		#line 793 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		$extension_Float32_712_f32 result{}; 
		#line 794 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (ADV_UPCS(IsFinite)($this.$ref()) && ADV_UPCS(IsFinite)(y.$ref())) {
			#line 795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Abs)($this.$ref()))> ax = ADV_UPCS(Abs)($this.$ref()); 
			#line 796 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Abs)(y.$ref()))> ay = ADV_UPCS(Abs)(y.$ref()); 
			#line 798 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			if (ax == Builtin::f32(0.0f)) {
				#line 799 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				result = ay;
			} else {
				#line 800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				if (ay == Builtin::f32(0.0f)) {
					#line 801 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					result = ax;
				} else {
					#line 802 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					{
						#line 803 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						Builtin::f64 xx = ax; 
						#line 804 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						xx *= xx;
						#line 805 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						Builtin::f64 yy = ay; 
						#line 806 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						yy *= yy;
						#line 807 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						result = Builtin::f32{std::sqrt(CDouble{xx + yy})};
					}
				}
			}
		} else {
			#line 809 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			if (ADV_UPCS(IsInfinity)($this.$ref()) || ADV_UPCS(IsInfinity)(y.$ref())) {
				#line 810 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				result = ADV_USPCS(PositiveInfinity, Builtin::f32)();
			} else {
				#line 811 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				{
					#line 812 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					ADV_ASSERT((ADV_UPCS(IsNaN)($this.$ref()) || ADV_UPCS(IsNaN)(y.$ref())), "this.IsNaNory.IsNaN");
					#line 813 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					result = ADV_USPCS(NaN, Builtin::f32)();
				}
			}
		}
		#line 816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 848 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	auto getSinPi($extension_Float32_820_f32 const& $this ) -> const $extension_Float32_820_f32
	{
		#line 850 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		$extension_Float32_820_f32 result{}; 
		#line 851 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (ADV_UPCS(IsFinite)($this.$ref())) {
			#line 852 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Abs)($this.$ref()))> ax = ADV_UPCS(Abs)($this.$ref()); 
			#line 855 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			if ((ax <=> Builtin::f32(8388608.0f)) < 0) {
				#line 856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				{
					#line 857 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					auto __tmp__valid_856 = Builtin::Cast<false, std::decay_t<decltype(ax)>::$self>(ax);
					#line 857 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					if(__tmp__valid_856.IsValid() && Builtin::IsGreater(*__tmp__valid_856, Builtin::f32(0.25f)))  {
						#line 857 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						const auto& ax = *__tmp__valid_856;
						#line 857 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						{
							#line 858 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::i32>(ax))> integral = Builtin::Cast<true, Builtin::i32>(ax); 
							#line 859 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							const Builtin::Auto<decltype(ax - integral)> fractional = ax - integral; 
							#line 860 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							const Builtin::Auto<decltype((($this <=> Builtin::f32(0.0f)) > 0 ? +Builtin::f32(1.0f) : Builtin::f32(-1.0f)) * (ADV_UPCS(IsOddInteger)(integral.$ref()) ? Builtin::f32(-1.0f) : +Builtin::f32(1.0f)))> sign = (($this <=> Builtin::f32(0.0f)) > 0 ? +Builtin::f32(1.0f) : Builtin::f32(-1.0f)) * (ADV_UPCS(IsOddInteger)(integral.$ref()) ? Builtin::f32(-1.0f) : +Builtin::f32(1.0f)); 
							#line 862 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							result = [&]() 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
							{
								#line 863 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
								auto __tmp__valid_862 = Builtin::Cast<false, std::decay_t<decltype(fractional)>::$self>(fractional);
								#line 863 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
								if(__tmp__valid_862.IsValid() && Builtin::IsLessOrEqual(*__tmp__valid_862, Builtin::f32(0.25f))) {
									#line 863 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
									const auto& fractional = *__tmp__valid_862;
									return fractional != Builtin::f32(0.0f) ? sign * SinPiBy4(fractional * ADV_USPCS(Pi, Builtin::f32)()) : $this * Builtin::f32(0.0f);
								}
								else {
									#line 864 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
									if(__tmp__valid_862.IsValid() && Builtin::IsLessOrEqual(*__tmp__valid_862, Builtin::f32(0.5f))) {
										#line 864 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
										const auto& fractional = *__tmp__valid_862;
										return fractional != Builtin::f32(0.5f) ? sign * CosPiBy4((Builtin::f32(0.5f) - fractional) * ADV_USPCS(Pi, Builtin::f32)()) : sign;
									}
									else {
										#line 865 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
										if(__tmp__valid_862.IsValid() && Builtin::IsLessOrEqual(*__tmp__valid_862, Builtin::f32(0.75f))) {
											#line 865 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
											const auto& fractional = *__tmp__valid_862;
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
						#line 869 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						if(__tmp__valid_856.IsValid() && Builtin::IsGreaterOrEqual(*__tmp__valid_856, Builtin::f32(7.8125e-3f)))  {
							#line 869 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							const auto& ax = *__tmp__valid_856;
							#line 869 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							result = SinPiBy4($this * ADV_USPCS(Pi, Builtin::f32)());
						}
						else {
							#line 870 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							if(__tmp__valid_856.IsValid() && Builtin::IsGreaterOrEqual(*__tmp__valid_856, Builtin::f32(1.22070313e-4f)))  {
								#line 870 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
								const auto& ax = *__tmp__valid_856;
								#line 870 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
								{
									#line 871 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
									const Builtin::Auto<decltype($this * ADV_USPCS(Pi, Builtin::f32)())> value = $this * ADV_USPCS(Pi, Builtin::f32)(); 
									#line 872 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
									result = value - (value * value * value * (Builtin::f32(1.0f) / Builtin::f32(6.0f)));
								}
							}
							else {
								#line 874 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
								result = $this * ADV_USPCS(Pi, Builtin::f32)();
								
							}
						}
					}
				}

			} else {
				#line 876 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				{
					#line 877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					result = $this * Builtin::f32(0.0f);
				}
			}
		} else {
			#line 879 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			{
				#line 880 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				result = ADV_USPCS(NaN, Builtin::f32)();
			}
		}
		#line 883 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return result;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 886 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	auto getCosPi($extension_Float32_820_f32 const& $this ) -> const $extension_Float32_820_f32
	{
		#line 888 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		$extension_Float32_820_f32 result{}; 
		#line 889 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (ADV_UPCS(IsFinite)($this.$ref())) {
			#line 890 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Abs)($this.$ref()))> ax = ADV_UPCS(Abs)($this.$ref()); 
			#line 893 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			if ((ax <=> Builtin::f32(8388608.0f)) < 0) {
				#line 894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				{
					#line 895 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					auto __tmp__valid_894 = Builtin::Cast<false, std::decay_t<decltype(ax)>::$self>(ax);
					#line 895 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					if(__tmp__valid_894.IsValid() && Builtin::IsGreater(*__tmp__valid_894, Builtin::f32(0.25f)))  {
						#line 895 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						const auto& ax = *__tmp__valid_894;
						#line 895 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						{
							#line 896 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::i32>(ax))> integral = Builtin::Cast<true, Builtin::i32>(ax); 
							#line 897 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							const Builtin::Auto<decltype(ax - integral)> fractional = ax - integral; 
							#line 898 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							const Builtin::Auto<decltype(ADV_UPCS(IsOddInteger)(integral.$ref()) ? Builtin::f32(-1.0f) : +Builtin::f32(1.0f))> sign = ADV_UPCS(IsOddInteger)(integral.$ref()) ? Builtin::f32(-1.0f) : +Builtin::f32(1.0f); 
							#line 900 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							result = [&]() 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
							{
								#line 901 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
								auto __tmp__valid_900 = Builtin::Cast<false, std::decay_t<decltype(fractional)>::$self>(fractional);
								#line 901 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
								if(__tmp__valid_900.IsValid() && Builtin::IsLessOrEqual(*__tmp__valid_900, Builtin::f32(0.25f))) {
									#line 901 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
									const auto& fractional = *__tmp__valid_900;
									return fractional != Builtin::f32(0.0f) ? sign * CosPiBy4(fractional * ADV_USPCS(Pi, Builtin::f32)()) : sign;
								}
								else {
									#line 902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
									if(__tmp__valid_900.IsValid() && Builtin::IsLessOrEqual(*__tmp__valid_900, Builtin::f32(0.5f))) {
										#line 902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
										const auto& fractional = *__tmp__valid_900;
										return fractional != Builtin::f32(0.5f) ? sign * SinPiBy4((Builtin::f32(0.5f) - fractional) * ADV_USPCS(Pi, Builtin::f32)()) : Builtin::f32(0.0f);
									}
									else {
										#line 903 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
										if(__tmp__valid_900.IsValid() && Builtin::IsLessOrEqual(*__tmp__valid_900, Builtin::f32(0.75f))) {
											#line 903 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
											const auto& fractional = *__tmp__valid_900;
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
						#line 907 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						if(__tmp__valid_894.IsValid() && Builtin::IsGreaterOrEqual(*__tmp__valid_894, Builtin::f32(7.8125e-3f)))  {
							#line 907 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							const auto& ax = *__tmp__valid_894;
							#line 907 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							result = CosPiBy4($this * ADV_USPCS(Pi, Builtin::f32)());
						}
						else {
							#line 908 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							if(__tmp__valid_894.IsValid() && Builtin::IsGreaterOrEqual(*__tmp__valid_894, Builtin::f32(1.22070313e-4f)))  {
								#line 908 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
								const auto& ax = *__tmp__valid_894;
								#line 908 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
								{
									#line 909 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
									const Builtin::Auto<decltype($this * ADV_USPCS(Pi, Builtin::f32)())> value = $this * ADV_USPCS(Pi, Builtin::f32)(); 
									#line 910 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
									result = Builtin::f32(1.0f) - (value * value * Builtin::f32(0.5f));
								}
							}
							else {
								#line 912 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
								result = Builtin::f32(1.0f);
								
							}
						}
					}
				}

			} else {
				#line 914 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				if ((ax <=> Builtin::f32(16777216.0f)) < 0) {
					#line 915 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					result = ADV_UPCS(IsOddInteger)(ADV_UPCS(Bits)(ax.$ref()).$ref()) ? Builtin::f32(-1.0f) : +Builtin::f32(1.0f);
				} else {
					#line 916 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					{
						#line 917 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						result = Builtin::f32(1.0f);
					}
				}
			}
		} else {
			#line 919 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			{
				#line 920 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				result = ADV_USPCS(NaN, Builtin::f32)();
			}
		}
		#line 923 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return result;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 926 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	auto getSinCosPi($extension_Float32_820_f32 const& $this ) -> const std::tuple<$extension_Float32_820_f32, $extension_Float32_820_f32>
	{
		#line 928 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		$extension_Float32_820_f32 sin{}; 
		#line 929 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		$extension_Float32_820_f32 cos{}; 
		#line 931 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (ADV_UPCS(IsFinite)($this.$ref())) {
			#line 932 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Abs)($this.$ref()))> ax = ADV_UPCS(Abs)($this.$ref()); 
			#line 935 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			if ((ax <=> Builtin::f32(8388608.0f)) < 0) {
				#line 936 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				if ((ax <=> Builtin::f32(0.25f)) > 0) {
					#line 937 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::i32>(ax))> integral = Builtin::Cast<true, Builtin::i32>(ax); 
					#line 938 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					const Builtin::Auto<decltype(ax - integral)> fractional = ax - integral; 
					#line 939 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					const Builtin::Auto<decltype(ADV_UPCS(IsOddInteger)(integral.$ref()) ? Builtin::f32(-1.0f) : +Builtin::f32(1.0f))> sign = ADV_UPCS(IsOddInteger)(integral.$ref()) ? Builtin::f32(-1.0f) : +Builtin::f32(1.0f); 
					#line 940 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					const Builtin::Auto<decltype((($this <=> Builtin::f32(0.0f)) > 0 ? +Builtin::f32(1.0f) : Builtin::f32(-1.0f)) * sign)> sinSign = (($this <=> Builtin::f32(0.0f)) > 0 ? +Builtin::f32(1.0f) : Builtin::f32(-1.0f)) * sign; 
					#line 941 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					const Builtin::Auto<decltype(sign)> cosSign = sign; 
					#line 943 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					if ((fractional <=> Builtin::f32(0.25f)) <= 0) {
						#line 944 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						if (fractional != Builtin::f32(0.0f)) {
							#line 945 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							const Builtin::Auto<decltype(fractional * ADV_USPCS(Pi, Builtin::f32)())> value = fractional * ADV_USPCS(Pi, Builtin::f32)(); 
							#line 946 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							sin = sinSign * SinPiBy4(value);
							#line 947 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							cos = cosSign * CosPiBy4(value);
						} else {
							#line 948 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							{
								#line 949 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
								sin = $this * Builtin::f32(0.0f);
								#line 950 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
								cos = cosSign;
							}
						}
					} else {
						#line 952 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						if ((fractional <=> Builtin::f32(0.5f)) <= 0) {
							#line 953 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							if (fractional != Builtin::f32(0.5f)) {
								#line 954 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
								const Builtin::Auto<decltype((Builtin::f32(0.5f) - fractional) * ADV_USPCS(Pi, Builtin::f32)())> value = (Builtin::f32(0.5f) - fractional) * ADV_USPCS(Pi, Builtin::f32)(); 
								#line 955 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
								sin = sinSign * CosPiBy4(value);
								#line 956 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
								cos = cosSign * SinPiBy4(value);
							} else {
								#line 957 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
								{
									#line 958 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
									sin = sinSign;
									#line 959 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
									cos = Builtin::f32(0.0f);
								}
							}
						} else {
							#line 961 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							if ((fractional <=> Builtin::f32(0.75f)) <= 0) {
								#line 962 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
								const Builtin::Auto<decltype((fractional - Builtin::f32(0.5f)) * ADV_USPCS(Pi, Builtin::f32)())> value = (fractional - Builtin::f32(0.5f)) * ADV_USPCS(Pi, Builtin::f32)(); 
								#line 963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
								sin = +sinSign * CosPiBy4(value);
								#line 964 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
								cos = -cosSign * SinPiBy4(value);
							} else {
								#line 965 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
								{
									#line 966 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
									const Builtin::Auto<decltype((Builtin::f32(1.0f) - fractional) * ADV_USPCS(Pi, Builtin::f32)())> value = (Builtin::f32(1.0f) - fractional) * ADV_USPCS(Pi, Builtin::f32)(); 
									#line 967 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
									sin = +sinSign * SinPiBy4(value);
									#line 968 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
									cos = -cosSign * CosPiBy4(value);
								}
							}
						}
					}
				} else {
					#line 970 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					if ((ax <=> Builtin::f32(7.8125e-3f)) >= 0) {
						#line 971 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						const Builtin::Auto<decltype($this * ADV_USPCS(Pi, Builtin::f32)())> value = $this * ADV_USPCS(Pi, Builtin::f32)(); 
						#line 972 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						sin = SinPiBy4(value);
						#line 973 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						cos = CosPiBy4(value);
					} else {
						#line 974 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						if ((ax <=> Builtin::f32(1.22070313e-4f)) >= 0) {
							#line 975 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							const Builtin::Auto<decltype($this * ADV_USPCS(Pi, Builtin::f32)())> value = $this * ADV_USPCS(Pi, Builtin::f32)(); 
							#line 976 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							const Builtin::Auto<decltype(value * value)> valueSq = value * value; 
							#line 978 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							sin = value - (value * valueSq * (Builtin::f32(1.0f) / Builtin::f32(6.0f)));
							#line 979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							cos = Builtin::f32(1.0f) - (valueSq * Builtin::f32(0.5f));
						} else {
							#line 980 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							{
								#line 981 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
								sin = $this * ADV_USPCS(Pi, Builtin::f32)();
								#line 982 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
								cos = Builtin::f32(1.0f);
							}
						}
					}
				}
			} else {
				#line 984 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				if ((ax <=> Builtin::f32(16777216.0f)) < 0) {
					#line 985 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					sin = $this * Builtin::f32(0.0f);
					#line 986 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					cos = ADV_UPCS(IsOddInteger)(ADV_UPCS(Bits)(ax.$ref()).$ref()) ? Builtin::f32(-1.0f) : +Builtin::f32(1.0f);
				} else {
					#line 987 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					{
						#line 988 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						sin = $this * Builtin::f32(0.0f);
						#line 989 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						cos = Builtin::f32(1.0f);
					}
				}
			}
		} else {
			#line 991 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			{
				#line 992 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				sin = ADV_USPCS(NaN, Builtin::f32)();
				#line 993 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				cos = ADV_USPCS(NaN, Builtin::f32)();
			}
		}
		#line 996 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return std::make_tuple(sin, cos);
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
	auto getTanPi($extension_Float32_820_f32 const& $this ) -> const $extension_Float32_820_f32
	{
		#line 1001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		$extension_Float32_820_f32 result{}; 
		#line 1003 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		if (ADV_UPCS(IsFinite)($this.$ref())) {
			#line 1004 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Abs)($this.$ref()))> ax = ADV_UPCS(Abs)($this.$ref()); 
			#line 1005 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			const Builtin::Auto<decltype(($this <=> Builtin::f32(0.0f)) > 0 ? +Builtin::f32(1.0f) : Builtin::f32(-1.0f))> sign = ($this <=> Builtin::f32(0.0f)) > 0 ? +Builtin::f32(1.0f) : Builtin::f32(-1.0f); 
			#line 1008 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			{
				#line 1009 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				auto __tmp__valid_1008 = Builtin::Cast<false, std::decay_t<decltype(ax)>::$self>(ax);
				#line 1009 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				if(__tmp__valid_1008.IsValid() && Builtin::IsLess(*__tmp__valid_1008, Builtin::f32(8388608.0f)))  {
					#line 1009 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					const auto& ax = *__tmp__valid_1008;
					#line 1009 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					{
						#line 1010 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						{
							#line 1011 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							auto __tmp__valid_1010 = Builtin::Cast<false, std::decay_t<decltype(ax)>::$self>(ax);
							#line 1011 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
							if(__tmp__valid_1010.IsValid() && Builtin::IsGreater(*__tmp__valid_1010, Builtin::f32(0.25f)))  {
								#line 1011 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
								const auto& ax = *__tmp__valid_1010;
								#line 1011 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
								{
									#line 1012 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
									const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::i32>(ax))> integral = Builtin::Cast<true, Builtin::i32>(ax); 
									#line 1013 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
									const Builtin::Auto<decltype(ax - integral)> fractional = ax - integral; 
									#line 1015 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
									result = [&]() 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
									{
										#line 1016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
										auto __tmp__valid_1015 = Builtin::Cast<false, std::decay_t<decltype(fractional)>::$self>(fractional);
										#line 1016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
										if(__tmp__valid_1015.IsValid() && Builtin::IsLessOrEqual(*__tmp__valid_1015, Builtin::f32(0.25f))) {
											#line 1016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
											const auto& fractional = *__tmp__valid_1015;
											return fractional != Builtin::f32(0.0f) ? sign * TanPiBy4(fractional * ADV_USPCS(Pi, Builtin::f32)(), Builtin::Boolean(false)) : sign * (ADV_UPCS(IsOddInteger)(integral.$ref()) ? Builtin::f32(-0.0f) : +Builtin::f32(0.0f));
										}
										else {
											#line 1018 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
											if(__tmp__valid_1015.IsValid() && Builtin::IsLessOrEqual(*__tmp__valid_1015, Builtin::f32(0.5f))) {
												#line 1018 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
												const auto& fractional = *__tmp__valid_1015;
												return fractional != Builtin::f32(0.5f) ? -sign * TanPiBy4((Builtin::f32(0.5f) - fractional) * ADV_USPCS(Pi, Builtin::f32)(), Builtin::Boolean(true)) : +sign * (ADV_UPCS(IsOddInteger)(integral.$ref()) ? ADV_USPCS(NegativeInfinity, Builtin::f32)() : ADV_USPCS(PositiveInfinity, Builtin::f32)());
											}
											else {
												#line 1020 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
												if(__tmp__valid_1015.IsValid() && Builtin::IsLessOrEqual(*__tmp__valid_1015, Builtin::f32(0.75f))) {
													#line 1020 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
													const auto& fractional = *__tmp__valid_1015;
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
								#line 1024 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
								if(__tmp__valid_1010.IsValid() && Builtin::IsGreaterOrEqual(*__tmp__valid_1010, Builtin::f32(7.8125e-3f)))  {
									#line 1024 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
									const auto& ax = *__tmp__valid_1010;
									#line 1024 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
									result = TanPiBy4($this * ADV_USPCS(Pi, Builtin::f32)(), Builtin::Boolean(false));
								}
								else {
									#line 1025 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
									if(__tmp__valid_1010.IsValid() && Builtin::IsGreaterOrEqual(*__tmp__valid_1010, Builtin::f32(1.22070313e-4f)))  {
										#line 1025 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
										const auto& ax = *__tmp__valid_1010;
										#line 1025 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
										{
											#line 1026 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
											const Builtin::Auto<decltype($this * ADV_USPCS(Pi, Builtin::f32)())> value = $this * ADV_USPCS(Pi, Builtin::f32)(); 
											#line 1027 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
											result = value + (value * value * value * (Builtin::f32(1.0f) / Builtin::f32(3.0f)));
										}
									}
									else {
										#line 1029 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
										result = $this * ADV_USPCS(Pi, Builtin::f32)();
										
									}
								}
							}
						}

					}
				}
				else {
					#line 1032 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
					if(__tmp__valid_1008.IsValid() && Builtin::IsLess(*__tmp__valid_1008, Builtin::i32(16777216)))  {
						#line 1032 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						const auto& ax = *__tmp__valid_1008;
						#line 1032 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						result = sign * (ADV_UPCS(IsOddInteger)(ADV_UPCS(Bits)(ax.$ref()).$ref()) ? Builtin::f32(-0.0f) : +Builtin::f32(0.0f));
					}
					else {
						#line 1033 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
						result = sign * Builtin::f32(0.0f);
						
					}
				}
			}

		} else {
			#line 1035 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
			{
				#line 1036 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
				result = ADV_USPCS(NaN, Builtin::f32)();
			}
		}
		#line 1039 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float32.ast"
		return result;
	}
	} namespace System{

}