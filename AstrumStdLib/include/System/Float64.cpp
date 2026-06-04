#include "Float64.h"

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
#line 1234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto SinPiBy4(Builtin::f64 x, Builtin::f64 xTail) noexcept -> const Builtin::f64;
#line 1262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto CosPiBy4(Builtin::f64 x, Builtin::f64 xTail) noexcept -> const Builtin::f64;
#line 1287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto TanPiBy4(Builtin::f64 x, Builtin::f64 xTail, bool isReciprocal) noexcept -> const Builtin::f64;
//###############################################################################
//# Global compile-time constants
//###############################################################################

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	







































#line 1234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto SinPiBy4(Builtin::f64 x, Builtin::f64 xTail) noexcept -> const Builtin::f64
	{
		#line 1236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		constexpr auto C1 = Builtin::f64(-0.166666666666666646259241729);
		#line 1237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		constexpr auto C2 = +Builtin::f64(0.833333333333095043065222816e-2);
		#line 1238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		constexpr auto C3 = Builtin::f64(-0.19841269836761125688538679e-3);
		#line 1239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		constexpr auto C4 = +Builtin::f64(0.275573161037288022676895908448e-5);
		#line 1240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		constexpr auto C5 = Builtin::f64(-0.25051132068021699772257377197e-7);
		#line 1241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		constexpr auto C6 = +Builtin::f64(0.159181443044859136852668200e-9);
		#line 1243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		const auto xx = x * x; 
		#line 1244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		const auto xxx = xx * x; 
		#line 1245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		auto result = C6; 
		#line 1247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		result = (result * xx) + C5;
		#line 1248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		result = (result * xx) + C4;
		#line 1249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		result = (result * xx) + C3;
		#line 1250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		result = (result * xx) + C2;
		#line 1252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		if (xTail == Builtin::f64(0.0)) {
			#line 1253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			result = (result * xx) + C1;
			#line 1254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			result = (result * xxx) + x;
		} else {
			#line 1255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			{
				#line 1256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				result = x - ((xx * ((Builtin::f64(0.5) * xTail) - (xxx * result))) - xTail - (xxx * C1));
			}
		}
		#line 1259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		return result;
	}

#line 1262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto CosPiBy4(Builtin::f64 x, Builtin::f64 xTail) noexcept -> const Builtin::f64
	{
		#line 1264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		constexpr auto C1 = +Builtin::f64(0.41666666666666665390037e-1);
		#line 1265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		constexpr auto C2 = Builtin::f64(-0.13888888888887398280412e-2);
		#line 1266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		constexpr auto C3 = +Builtin::f64(0.248015872987670414957399e-4);
		#line 1267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		constexpr auto C4 = Builtin::f64(-0.275573172723441909470836e-6);
		#line 1268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		constexpr auto C5 = +Builtin::f64(0.208761463822329611076335e-8);
		#line 1269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		constexpr auto C6 = Builtin::f64(-0.113826398067944859590880e-10);
		#line 1271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		const auto xx = x * x; 
		#line 1272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		const auto tmp1 = Builtin::f64(0.5) * xx; 
		#line 1273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		const auto tmp2 = Builtin::f64(1.0) - tmp1; 
		#line 1274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		auto result = C6; 
		#line 1276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		result = (result * xx) + C5;
		#line 1277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		result = (result * xx) + C4;
		#line 1278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		result = (result * xx) + C3;
		#line 1279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		result = (result * xx) + C2;
		#line 1280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		result = (result * xx) + C1;
		#line 1281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		result *= xx * xx;
		#line 1282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		result += Builtin::f64(1.0) - tmp2 - tmp1 - x * xTail;
		#line 1283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		result += tmp2;
		#line 1284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		return result;
	}

#line 1287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	inline auto TanPiBy4(Builtin::f64 x, Builtin::f64 xTail, bool isReciprocal) noexcept -> const Builtin::f64
	{
		#line 1289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		constexpr auto pi4head = Builtin::f64(7.85398163397448278999e-01);
		#line 1290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		constexpr auto pi4tail = Builtin::f64(3.06161699786838240164e-17);
		#line 1292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		auto transform = Builtin::i32(0); 
		#line 1293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		if ((x <=> +Builtin::f64(0.68)) > 0) {
			#line 1294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			transform = Builtin::i32(1);
			#line 1295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			x = pi4head - x + (pi4tail - xTail);
			#line 1296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			xTail = Builtin::f64(0.0);
		} else {
			#line 1297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			if ((x <=> Builtin::f64(-0.68)) < 0) {
				#line 1298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				transform = Builtin::i32(-1);
				#line 1299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				x = pi4head + x + pi4tail + xTail;
				#line 1300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				xTail = Builtin::f64(0.0);
			}
		}
		#line 1303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		const auto tmp1 = x * x + Builtin::f64(2.0) * x * xTail; 
		#line 1304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		auto denominator = Builtin::f64(-0.232371494088563558304549252913e-3); 
		#line 1305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		denominator = +Builtin::f64(0.260656620398645407524064091208e-1) + (denominator * tmp1);
		#line 1306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		denominator = Builtin::f64(-0.515658515729031149329237816945e+0) + (denominator * tmp1);
		#line 1307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		denominator = +Builtin::f64(0.111713747927937668539901657944e+1) + (denominator * tmp1);
		#line 1308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		auto numerator = +Builtin::f64(0.224044448537022097264602535574e-3); 
		#line 1309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		numerator = Builtin::f64(-0.229345080057565662883358588111e-1) + (numerator * tmp1);
		#line 1310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		numerator = +Builtin::f64(0.372379159759792203640806338901e+0) + (numerator * tmp1);
		#line 1312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		auto tmp2 = x * tmp1; 
		#line 1313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		tmp2 *= numerator / denominator;
		#line 1314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		tmp2 += xTail;
		#line 1316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		auto result = x + tmp2; 
		#line 1318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		if (transform != Builtin::i32(0)) {
			#line 1319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			result = isReciprocal ? ((Builtin::f64(2.0) * result / (result - Builtin::i32(1))) * transform) - Builtin::f64(1.0) : (Builtin::f64(1.0) - (Builtin::f64(2.0) * result / (result + Builtin::i32(1)))) * transform;
		} else {
			#line 1322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			if (isReciprocal) {
				#line 1323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				auto bits = ADV_UPCS(Bits)(result.__ref()); 
				#line 1324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				bits &= Builtin::u64(0xFFFFFFFF00000000ULL);
				#line 1326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				const auto z1 = ADV_USFCS((Builtin::f64), FromBits)(bits); 
				#line 1327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				const auto z2 = tmp2 - (z1 - x); 
				#line 1328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				const auto reciprocal = Builtin::f64(-1.0) / result; 
				#line 1330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				bits = ADV_UPCS(Bits)(reciprocal.__ref());
				#line 1331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				bits &= Builtin::u64(0xFFFFFFFF00000000ULL);
				#line 1333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				const auto reciprocalHead = ADV_USFCS((Builtin::f64), FromBits)(bits); 
				#line 1334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				result = reciprocalHead + (reciprocal * (Builtin::f64(1.0) + reciprocalHead * z1 + reciprocalHead * z2));
			}
		}
		#line 1337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		return result;
	}

static_assert(Builtin::usize(sizeof(Builtin::f64)) == Builtin::i32(8), "f64 should be 8 bytes");
static_assert(ADV_USPCS(Pi, Builtin::f64)() == Builtin::f64(3.14159265358979323846), "f64.Pi should be 3.14159265358979323846");
static_assert(Builtin::TypeIs<Builtin::f64, IComparable<Builtin::f64>>(), "f64 should implement IComparable<f64>");
static_assert(Builtin::TypeIs<Builtin::f64, IEquatable<Builtin::f64>>(), "f64 should implement IEquatable<f64>");
static_assert(Builtin::TypeIs<Builtin::f64, ISelfComparable>(), "f64 should implement ISelfComparable");
static_assert(Builtin::TypeIs<Builtin::f64, ISelfEquatable>(), "f64 should implement ISelfEquatable");
static_assert(Builtin::TypeIs<Builtin::f64, IAdditionOperators<Builtin::f64, Builtin::f64>>(), "f64 should implement IAdditionOperators<f64, f64>");
static_assert(Builtin::TypeIs<Builtin::f64, ISubtractionOperators<Builtin::f64, Builtin::f64>>(), "f64 should implement ISubtractionOperators<f64, f64>");
static_assert(Builtin::TypeIs<Builtin::f64, IMultiplyOperators<Builtin::f64, Builtin::f64>>(), "f64 should implement IMultiplyOperators<f64, f64>");
static_assert(Builtin::TypeIs<Builtin::f64, IDivisionOperators<Builtin::f64, Builtin::f64>>(), "f64 should implement IDivisionOperators<f64, f64>");
static_assert(Builtin::TypeIs<Builtin::f64, IModulusOperators<Builtin::f64, Builtin::f64>>(), "f64 should implement IModulusOperators<f64, f64>");
static_assert(Builtin::TypeIs<Builtin::f64, IUnaryPlusOperators<Builtin::f64>>(), "f64 should implement IUnaryPlusOperators<f64>");
static_assert(Builtin::TypeIs<Builtin::f64, IUnaryNegationOperators<Builtin::f64>>(), "f64 should implement IUnaryNegationOperators<f64>");
static_assert(Builtin::TypeIs<Builtin::f64, IIncrementOperators<Builtin::f64>>(), "f64 should implement IIncrementOperators<f64>");
static_assert(Builtin::TypeIs<Builtin::f64, IDecrementOperators<Builtin::f64>>(), "f64 should implement IDecrementOperators<f64>");
#ifdef ADV_UNITTEST
	#line 1356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	static bool __Test_b809f6dfbd97509f = [](){
		#line 1357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		Builtin::f64 f = Builtin::f64(1234.1234); 
		#line 1359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_USPCS(Pi, Builtin::f64)() == Builtin::f64(3.14159265358979323846)), u"f64.Pi==3.14159265358979323846");
		#line 1360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((f != ADV_USPCS(Pi, Builtin::f64)()), u"f!=f64.Pi");
		#line 1361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT(((f <=> Builtin::f64(1234.1)) > 0), u"f>1234.1");
		#line 1362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT(((f <=> Builtin::f64(1234.5)) < 0), u"f<1234.5");
		#line 1364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((f + Builtin::f64(1.0) == Builtin::f64(1235.1234)), u"f+1.0==1235.1234");
		#line 1365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((f - Builtin::f64(1.0) == Builtin::f64(1233.1234)), u"f-1.0==1233.1234");
		#line 1366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((f * Builtin::f64(2.0) == Builtin::f64(2468.2468)), u"f*2.0==2468.2468");
		#line 1367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((f / Builtin::f64(2.0) == Builtin::f64(617.0617)), u"f/2.0==617.0617");
		#line 1368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((f % Builtin::f64(2.0) == Builtin::f64(0.12339999999994688551)), u"f%2.0==0.12339999999994688551");
		#line 1370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		f += Builtin::f64(1.0);
		#line 1371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((f == Builtin::f64(1235.1234)), u"f==1235.1234");
		#line 1372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		f -= Builtin::f64(1.0);
		#line 1373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((f == Builtin::f64(1234.1234)), u"f==1234.1234");
		#line 1374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		f *= Builtin::f64(2.0);
		#line 1375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((f == Builtin::f64(2468.2468)), u"f==2468.2468");
		#line 1376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		f /= Builtin::f64(2.0);
		#line 1377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((f == Builtin::f64(1234.1234)), u"f==1234.1234");
		#line 1378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		f %= Builtin::f64(2.0);
		#line 1379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((f == Builtin::f64(0.12339999999994688551)), u"f==0.12339999999994688551");
		#line 1381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		f = Builtin::f64(1234.1234);
		#line 1382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((f++ == Builtin::f64(1234.1234)), u"f++==1234.1234");
		#line 1383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((++f == Builtin::f64(1236.1234)), u"++f==1236.1234");
		#line 1384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((f-- == Builtin::f64(1236.1234)), u"f--==1236.1234");
		#line 1385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((--f == Builtin::f64(1234.1234)), u"--f==1234.1234");
		#line 1387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((+f == Builtin::f64(1234.1234)), u"+f==1234.1234");
		#line 1388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((-f == Builtin::f64(-1234.1234)), u"-f==-1234.1234");
		#line 1390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		Builtin::Nullable<Builtin::f64> n = nullptr; 
		#line 1391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((n == nullptr), u"n==null");
		#line 1392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((f != n), u"f!=n");
		#line 1393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		n = Builtin::f64(3.1234);
		#line 1394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((n != nullptr), u"n!=null");
		#line 1395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((f != n), u"f!=n");
		#line 1398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		Builtin::Nullable<Builtin::ObjectRef> o = f; 
		#line 1400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		IComparable<Builtin::f64> icomp = f; 
		#line 1401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT(((icomp <=> (*(n))) > 0), u"icomp>n!");
		#line 1403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(f.__ref()) == Builtin::u64(4653142547559993678ULL)), u"f.HashCode==4653142547559993678u");
		#line 1404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(HashCode)(f) == Builtin::u64(4653142547559993678ULL)), u"#f==4653142547559993678u");
		#line 1406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UFCS(ToBoolean)(f.__ref())), u"f.ToBoolean()");
		#line 1407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((!ADV_UFCS(ToBoolean)(Builtin::f64(0.0).__ref())), u"!0.0.ToBoolean()");
		#line 1408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UFCS(ToInt16)(f.__ref()) == Builtin::i32(1234)), u"f.ToInt16()==1234");
		#line 1409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UFCS(ToInt32)(f.__ref()) == Builtin::i32(1234)), u"f.ToInt32()==1234");
		#line 1410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UFCS(ToInt64)(f.__ref()) == Builtin::i32(1234)), u"f.ToInt64()==1234");
		#line 1411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UFCS(ToInt128)(f.__ref()) == Builtin::i32(1234)), u"f.ToInt128()==1234");
		#line 1412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UFCS(ToUsize)(f.__ref()) == Builtin::i32(1234)), u"f.ToUsize()==1234");
		#line 1414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		{
			#line 1415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			const auto& [div, rem] = ADV_UFCS(_operator_div_mod)(f, Builtin::f64(2.0));
			#line 1416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			ADV_ASSERT((div == Builtin::f64(617.0617) && rem == Builtin::f64(0.12339999999994688551)), u"div==617.0617&&rem==0.12339999999994688551");
		}
		#line 1419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor)(f, Builtin::i32(2)) == Builtin::f64(1523060.56642755982466042042)), u"f^^2==1523060.56642755982466042042");
		#line 1420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_xor_xor)(f, (Builtin::i32(-2))) == Builtin::f64(6.56572707640620423020551017085e-07)), u"f^^(-2)==6.56572707640620423020551017085e-07");
		#line 1421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_mul)(f, Builtin::i32(2)) == Builtin::f64(1523060.56642755982466042042)), u"f**2==1523060.56642755982466042042");
		#line 1422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_mul)(f, (Builtin::i32(-2))) == Builtin::f64(6.56572707640620423020551017085e-07)), u"f**(-2)==6.56572707640620423020551017085e-07");
		#line 1423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_mul)(f, Builtin::f64(1.234)) == Builtin::f64(6527.34392651676535024307668209)), u"f**1.234==6527.34392651676535024307668209");
		#line 1425 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(Abs)(f.__ref()) == f), u"f.Abs==f");
		#line 1426 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(Abs)(Builtin::f64(-1234.1234).__ref()) == Builtin::f64(1234.1234)), u"-1234.1234.Abs==1234.1234");
		#line 1427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(IsCanonical)(f.__ref())), u"f.IsCanonical");
		#line 1428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((!ADV_UPCS(IsComplexNumber)(f.__ref())), u"!f.IsComplexNumber");
		#line 1429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((!ADV_UPCS(IsImaginaryNumber)(f.__ref())), u"!f.IsImaginaryNumber");
		#line 1430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(IsRealNumber)(f.__ref())), u"f.IsRealNumber");
		#line 1431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(IsFinite)(f.__ref())), u"f.IsFinite");
		#line 1432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((!ADV_UPCS(IsInfinity)(f.__ref())), u"!f.IsInfinity");
		#line 1433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((!ADV_UPCS(IsNaN)(f.__ref())), u"!f.IsNaN");
		#line 1434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((!ADV_UPCS(IsNegative)(f.__ref())), u"!f.IsNegative");
		#line 1435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(IsNegative)(Builtin::f64(-1234.1234).__ref())), u"-1234.1234.IsNegative");
		#line 1436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((!ADV_UPCS(IsNegativeInfinity)(f.__ref())), u"!f.IsNegativeInfinity");
		#line 1437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(IsPositive)(f.__ref())), u"f.IsPositive");
		#line 1438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((!ADV_UPCS(IsPositiveInfinity)(f.__ref())), u"!f.IsPositiveInfinity");
		#line 1439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((!ADV_UPCS(IsSubnormal)(f.__ref())), u"!f.IsSubnormal");
		#line 1440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((!ADV_UPCS(IsZero)(f.__ref())), u"!f.IsZero");
		#line 1441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(IsZero)(Builtin::f64(0.0).__ref())), u"0.0.IsZero");
		#line 1442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((!ADV_UPCS(IsInteger)(f.__ref())), u"!f.IsInteger");
		#line 1443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((!ADV_UPCS(IsEvenInteger)(f.__ref())), u"!f.IsEvenInteger");
		#line 1444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((!ADV_UPCS(IsOddInteger)(f.__ref())), u"!f.IsOddInteger");
		#line 1445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(IsInteger)(Builtin::f64(1.0).__ref())), u"1.0.IsInteger");
		#line 1446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(IsOddInteger)(Builtin::f64(1.0).__ref())), u"1.0.IsOddInteger");
		#line 1447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(IsEvenInteger)(Builtin::f64(2.0).__ref())), u"2.0.IsEvenInteger");
		#line 1448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UFCS(MaxMagnitude)(f.__ref(), Builtin::f64(-1235.0)) == Builtin::f64(-1235.0)), u"f.MaxMagnitude(-1235.0)==-1235.0");
		#line 1449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UFCS(MinMagnitude)(f.__ref(), Builtin::f64(-1235.0)) == Builtin::f64(1234.1234)), u"f.MinMagnitude(-1235.0)==1234.1234");
		#line 1451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UFCS(NarrowToInt32)(f.__ref()) == Builtin::i32(1234)), u"f.NarrowToInt32()==1234");
		#line 1452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UFCS(NarrowToInt8)(f.__ref()) == Builtin::i32(-46)), u"f.NarrowToInt8()==-46");
		#line 1454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(Sign)(f.__ref()) == Builtin::i32(1)), u"f.Sign==1");
		#line 1455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(Sign)(Builtin::f64(-1234.1234).__ref()) == Builtin::i32(-1)), u"-1234.1234.Sign==-1");
		#line 1456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(Sign)(Builtin::f64(0.0).__ref()) == Builtin::i32(0)), u"0.0.Sign==0");
		#line 1458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UFCS(CopySign)(f.__ref(), Builtin::f64(-1.0)) == Builtin::f64(-1234.1234)), u"f.CopySign(-1.0)==-1234.1234");
		#line 1459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UFCS(Max)(f.__ref(), Builtin::i32(123)) == f), u"f.Max(123)==f");
		#line 1460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UFCS(Min)(f.__ref(), Builtin::i32(123)) == Builtin::f64(123.0)), u"f.Min(123)==123.0");
		#line 1461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UFCS(Clamp)(f.__ref(), Builtin::i32(1), Builtin::i32(1000)) == Builtin::f64(1000.0)), u"f.Clamp(1,1000)==1000.0");
		#line 1463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((!ADV_UPCS(IsPow2)(f.__ref())), u"!f.IsPow2");
		#line 1464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(IsPow2)(Builtin::f64(4096.0).__ref())), u"4096.0.IsPow2");
		#line 1465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(Builtin::f64(4096.0).__ref()) == Builtin::f64(12.0)), u"4096.0.Log2==12.0");
		#line 1467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(IsNaN)(ADV_UPCS(Log2)(Builtin::f64(-123.0).__ref()).__ref())), u"-123.0.Log2.IsNaN");
		#line 1468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(Builtin::f64(10000.0).__ref()) == Builtin::f64(4.0)), u"10000.0.Log10==4.0");
		#line 1470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(IsNaN)(ADV_UPCS(Log10)(Builtin::f64(-123.0).__ref()).__ref())), u"-123.0.Log10.IsNaN");
		#line 1471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UFCS(Midpoint)(f.__ref(), Builtin::f64(2431.15)) == Builtin::f64(1832.6367)), u"f.Midpoint(2431.15)==1832.6367");
		#line 1472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UFCS(IsMultipleOf)(Builtin::f64(10000.0).__ref(), Builtin::i32(10))), u"10000.0.IsMultipleOf(10)");
		#line 1473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((!ADV_UFCS(IsMultipleOf)(Builtin::f64(10000.0).__ref(), Builtin::f64(7.5))), u"!10000.0.IsMultipleOf(7.5)");
		#line 1474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UFCS(IsMultipleOf)(Builtin::f64(22.5).__ref(), Builtin::f64(7.5))), u"22.5.IsMultipleOf(7.5)");
		#line 1476 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(Ceil)(Builtin::f64(2.5).__ref()) == Builtin::f64(3.0)), u"2.5.Ceil==3.0");
		#line 1477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(Floor)(Builtin::f64(2.5).__ref()) == Builtin::f64(2.0)), u"2.5.Floor==2.0");
		#line 1478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(Truncate)(Builtin::f64(2.5).__ref()) == Builtin::f64(2.0)), u"2.5.Truncate==2.0");
		#line 1479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(Round)(Builtin::f64(2.5).__ref()) == Builtin::f64(3.0)), u"2.5.Round==3.0");
		#line 1480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UFCS(RoundToInt32)(Builtin::f64(2.5).__ref()) == Builtin::i32(3)), u"2.5.RoundToInt32()==3");
		#line 1481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(RoundTiesEven)(Builtin::f64(2.5).__ref()) == Builtin::f64(2.0)), u"2.5.RoundTiesEven==2.0");
		#line 1482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UFCS(RoundTiesEvenToInt32)(Builtin::f64(2.5).__ref()) == Builtin::i32(2)), u"2.5.RoundTiesEvenToInt32()==2");
		#line 1483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(RoundTiesEven)(Builtin::f64(3.5).__ref()) == Builtin::f64(4.0)), u"3.5.RoundTiesEven==4.0");
		#line 1484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UFCS(Round)(Builtin::f64(2.665).__ref(), Builtin::u32(2U)) == Builtin::f64(2.67)), u"2.665.Round(2u)==2.67");
		#line 1485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UFCS(Round)(Builtin::f64(2.665).__ref(), Builtin::u32(2U), ADV_USPCS(ToEven, MidpointRounding)()) == Builtin::f64(2.66)), u"2.665.Round(2u,MidpointRounding.ToEven)==2.66");
		#line 1486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(Ceil)((Builtin::f64(-2.5)).__ref()) == Builtin::f64(-2.0)), u"(-2.5).Ceil==-2.0");
		#line 1487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(Floor)((Builtin::f64(-2.5)).__ref()) == Builtin::f64(-3.0)), u"(-2.5).Floor==-3.0");
		#line 1488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(Truncate)((Builtin::f64(-2.5)).__ref()) == Builtin::f64(-2.0)), u"(-2.5).Truncate==-2.0");
		#line 1489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(Round)((Builtin::f64(-2.5)).__ref()) == Builtin::f64(-3.0)), u"(-2.5).Round==-3.0");
		#line 1490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UFCS(RoundToInt32)((Builtin::f64(-2.5)).__ref()) == Builtin::i32(-3)), u"(-2.5).RoundToInt32()==-3");
		#line 1491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(RoundTiesEven)((Builtin::f64(-2.5)).__ref()) == Builtin::f64(-2.0)), u"(-2.5).RoundTiesEven==-2.0");
		#line 1492 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UFCS(RoundTiesEvenToInt32)((Builtin::f64(-2.5)).__ref()) == Builtin::i32(-2)), u"(-2.5).RoundTiesEvenToInt32()==-2");
		#line 1493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(RoundTiesEven)((Builtin::f64(-3.5)).__ref()) == Builtin::f64(-4.0)), u"(-3.5).RoundTiesEven==-4.0");
		#line 1494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UFCS(Round)((Builtin::f64(-2.665)).__ref(), Builtin::u32(2U)) == Builtin::f64(-2.67)), u"(-2.665).Round(2u)==-2.67");
		#line 1495 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UFCS(Round)((Builtin::f64(-2.665)).__ref(), Builtin::u32(2U), ADV_USPCS(ToEven, MidpointRounding)()) == Builtin::f64(-2.66)), u"(-2.665).Round(2u,MidpointRounding.ToEven)==-2.66");
		#line 1497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		f = Builtin::f64(12.34);
		#line 1498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(Exp)(f.__ref()) == Builtin::f64(228661.952056809794157743453979)), u"f.Exp==228661.952056809794157743453979");
		#line 1499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(ExpM1)(f.__ref()) == Builtin::f64(228660.952056809794157743453979)), u"f.ExpM1==228660.952056809794157743453979");
		#line 1500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(Exp2)(f.__ref()) == Builtin::f64(5184.53900890226577757857739925)), u"f.Exp2==5184.53900890226577757857739925");
		#line 1501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(Exp2M1)(f.__ref()) == Builtin::f64(5183.53900890226577757857739925)), u"f.Exp2M1==5183.53900890226577757857739925");
		#line 1502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(Exp10)(f.__ref()) == Builtin::f64(2187761623949.5517578125)), u"f.Exp10==2187761623949.5517578125");
		#line 1503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(Exp10M1)(f.__ref()) == Builtin::f64(2187761623948.5517578125)), u"f.Exp10M1==2187761623948.5517578125");
		#line 1504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(Ln)(f.__ref()) == Builtin::f64(2.51284601847724164969122284674)), u"f.Ln==2.51284601847724164969122284674");
		#line 1505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(LnP1)(f.__ref()) == Builtin::f64(2.5907670404874778569137561135)), u"f.LnP1==2.5907670404874778569137561135");
		#line 1506 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UFCS(Log)(f.__ref(), Builtin::f64(1.25)) == Builtin::f64(11.2611186999479464532214478822)), u"f.Log(1.25)==11.2611186999479464532214478822");
		#line 1508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(Sqrt)(f.__ref()) == Builtin::f64(3.51283361405005933875145274214)), u"f.Sqrt==3.51283361405005933875145274214");
		#line 1509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(Cbrt)(f.__ref()) == Builtin::f64(2.31084980883124302408759831451)), u"f.Cbrt==2.31084980883124302408759831451");
		#line 1510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UFCS(Root)(Builtin::f64(1234.1234).__ref(), Builtin::i32(5)) == Builtin::f64(4.15213740868436520514705989626)), u"1234.1234.Root(5)==4.15213740868436520514705989626");
		#line 1511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UFCS(Root)(f.__ref(), Builtin::i32(-5)) == Builtin::f64(0.604974358983159765656978379411)), u"f.Root(-5)==0.604974358983159765656978379411");
		#line 1512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UFCS(Hypot)(f.__ref(), Builtin::f64(9.12)) == Builtin::f64(15.344380078712857695677485026)), u"f.Hypot(9.12)==15.344380078712857695677485026");
		#line 1514 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(Sin)(f.__ref()) == Builtin::f64(-0.224442218951855371189552101896)), u"f.Sin==-0.224442218951855371189552101896");
		#line 1515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(Cos)(f.__ref()) == Builtin::f64(0.974487398765098156161457154667)), u"f.Cos==0.974487398765098156161457154667");
		#line 1516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(Tan)(f.__ref()) == Builtin::f64(-0.230318236270962345413337857281)), u"f.Tan==-0.230318236270962345413337857281");
		#line 1517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(Cot)(f.__ref()) == Builtin::f64(-4.34181859061967934110271016834)), u"f.Cot==-4.34181859061967934110271016834");
		#line 1518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(Sec)(f.__ref()) == Builtin::f64(1.02618053477883064417142122693)), u"f.Sec==1.02618053477883064417142122693");
		#line 1519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(Csc)(f.__ref()) == Builtin::f64(-4.45548972323477077139841640019)), u"f.Csc==-4.45548972323477077139841640019");
		#line 1520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		f = Builtin::f64(0.34);
		#line 1521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(Asin)(f.__ref()) == Builtin::f64(0.346916897527161760539371471168)), u"f.Asin==0.346916897527161760539371471168");
		#line 1522 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(Acos)(f.__ref()) == Builtin::f64(1.22387942926773485297076149436)), u"f.Acos==1.22387942926773485297076149436");
		#line 1523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(Atan)(f.__ref()) == Builtin::f64(0.327738506780555494124484994245)), u"f.Atan==0.327738506780555494124484994245");
		#line 1524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(Acot)(f.__ref()) == Builtin::f64(1.24305782001434117489679920254)), u"f.Acot==1.24305782001434117489679920254");
		#line 1525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		f = Builtin::f64(12.34);
		#line 1526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(Asec)(f.__ref()) == Builtin::f64(1.48967009066312705556356377201)), u"f.Asec==1.48967009066312705556356377201");
		#line 1527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(Acsc)(f.__ref()) == Builtin::f64(0.0811262361317696550910838482196)), u"f.Acsc==0.0811262361317696550910838482196");
		#line 1528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UFCS(ToRadians)(f.__ref()) == Builtin::f64(0.215373629696100243879897107036)), u"f.ToRadians()==0.215373629696100243879897107036");
		#line 1529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UFCS(ToDegrees)(Builtin::f64(0.34).__ref()) == Builtin::f64(19.4805650344479914792827912606)), u"0.34.ToDegrees()==19.4805650344479914792827912606");
		#line 1530 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(SinPi)(f.__ref()) == Builtin::f64(0.8763066800438634)), u"f.SinPi==0.8763066800438634");
		#line 1531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(SinPi)(Builtin::f64(1.0).__ref()) == Builtin::f64(0.0)), u"1.0.SinPi==0.0");
		#line 1532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(SinPi)(Builtin::f64(0.5).__ref()) == Builtin::f64(1.0)), u"0.5.SinPi==1.0");
		#line 1533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(CosPi)(f.__ref()) == Builtin::f64(0.4817536741017157)), u"f.CosPi==0.4817536741017157");
		#line 1534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(CosPi)(Builtin::f64(1.0).__ref()) == Builtin::f64(-1.0)), u"1.0.CosPi==-1.0");
		#line 1535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(CosPi)(Builtin::f64(0.5).__ref()) == Builtin::f64(0.0)), u"0.5.CosPi==0.0");
		#line 1536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(TanPi)(f.__ref()) == Builtin::f64(1.8189932472810644)), u"f.TanPi==1.8189932472810644");
		#line 1537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(TanPi)(Builtin::f64(1.0).__ref()) == Builtin::f64(-0.0)), u"1.0.TanPi==-0.0");
		#line 1538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(TanPi)(Builtin::f64(0.0).__ref()) == Builtin::f64(0.0)), u"0.0.TanPi==0.0");
		#line 1540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(Sinh)(f.__ref()) == Builtin::f64(114330.97602621826808899641037)), u"f.Sinh==114330.97602621826808899641037");
		#line 1541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(Cosh)(f.__ref()) == Builtin::f64(114330.97603059152606874704361)), u"f.Cosh==114330.97603059152606874704361");
		#line 1542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(Tanh)(f.__ref()) == Builtin::f64(0.99999999996174904204337963165)), u"f.Tanh==0.99999999996174904204337963165");
		#line 1543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(Coth)(f.__ref()) == Builtin::f64(1.00000000003825095795662036835)), u"f.Coth==1.00000000003825095795662036835");
		#line 1544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(Sech)(f.__ref()) == Builtin::f64(8.74653601953358790890066115642e-06)), u"f.Sech==8.74653601953358790890066115642e-06");
		#line 1545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(Csch)(f.__ref()) == Builtin::f64(8.74653601986815067647305921295e-06)), u"f.Csch==8.74653601986815067647305921295e-06");
		#line 1546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(Asinh)(f.__ref()) == Builtin::f64(3.20763093073212290917695099779)), u"f.Asinh==3.20763093073212290917695099779");
		#line 1547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(Acosh)(f.__ref()) == Builtin::f64(3.20434738108670913447895145509)), u"f.Acosh==3.20434738108670913447895145509");
		#line 1548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(IsNaN)(ADV_UPCS(Atanh)(f.__ref()).__ref())), u"f.Atanh.IsNaN");
		#line 1549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		f = Builtin::f64(0.34);
		#line 1550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(Sinh)(f.__ref()) == Builtin::f64(0.346588633900492049111363712655)), u"f.Sinh==0.346588633900492049111363712655");
		#line 1551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(Cosh)(f.__ref()) == Builtin::f64(1.05835895666310175755597811076)), u"f.Cosh==1.05835895666310175755597811076");
		#line 1552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(Tanh)(f.__ref()) == Builtin::f64(0.327477394808705357664990742705)), u"f.Tanh==0.327477394808705357664990742705");
		#line 1553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(Coth)(f.__ref()) == Builtin::f64(3.05364588778454804085527030111)), u"f.Coth==3.05364588778454804085527030111");
		#line 1554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(Sech)(f.__ref()) == Builtin::f64(0.944859013763060473500843272632)), u"f.Sech==0.944859013763060473500843272632");
		#line 1555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(Csch)(f.__ref()) == Builtin::f64(2.88526484191373322474305496144)), u"f.Csch==2.88526484191373322474305496144");
		#line 1556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(Asinh)(f.__ref()) == Builtin::f64(0.333768351645882199729697958901)), u"f.Asinh==0.333768351645882199729697958901");
		#line 1557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(IsNaN)(ADV_UPCS(Acosh)(f.__ref()).__ref())), u"f.Acosh.IsNaN");
		#line 1558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(Atanh)(f.__ref()) == Builtin::f64(0.354092528962242969470253228792)), u"f.Atanh==0.354092528962242969470253228792");
		#line 1560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(ReciprocalEstimate)(f.__ref()) == Builtin::f64(2.94117647058823505901159478526)), u"f.ReciprocalEstimate==2.94117647058823505901159478526");
		#line 1561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UFCS(FusedMultiplyAdd)(f.__ref(), Builtin::f64(5.0), Builtin::f64(2.12)) == Builtin::f64(3.82000000000000028421709430404)), u"f.FusedMultiplyAdd(5.0,2.12)==3.82000000000000028421709430404");
		#line 1562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UFCS(Lerp)(Builtin::f64(1.0).__ref(), Builtin::f64(2.0), Builtin::f64(0.75)) == Builtin::f64(1.75)), u"1.0.Lerp(2.0,0.75)==1.75");
		#line 1564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(Gamma)(f.__ref()) == Builtin::f64(2.62416325649848314327527987189)), u"f.Gamma==2.62416325649848314327527987189");
		#line 1565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(LnGamma)(f.__ref()) == Builtin::f64(0.964762085799852231460249640804)), u"f.LnGamma==0.964762085799852231460249640804");
		#line 1566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(Erf)(f.__ref()) == Builtin::f64(0.369364529344658687470825952914)), u"f.Erf==0.369364529344658687470825952914");
		#line 1567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		ADV_ASSERT((ADV_UPCS(Erfc)(f.__ref()) == Builtin::f64(0.630635470655341312529174047086)), u"f.Erfc==0.630635470655341312529174047086");
		return true;
	}();
	#endif	
} namespace __extensions { using namespace System;
#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	auto _operator_eq_eq_mul(__extension_Float64_18_f64 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool
	{
		#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		{
			#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			auto __tmp0 = Builtin::Cast<false, __extension_Float64_1210_f64>(obj);
			#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			if ((__tmp0.IsValid())) {
				#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				const auto& obj = *__tmp0;
				
				#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				if (__this == obj) {
					#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
					return Builtin::Boolean(true);
				}
			}
		}
		#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		return Builtin::Boolean(false);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	auto _operator_lt_eq_gt_mul(__extension_Float64_60_f64 const& __this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32
	{
		#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		{
			#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			auto __tmp0 = Builtin::Cast<false, __extension_Float64_1210_f64>(obj);
			#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			if ((__tmp0.IsValid())) {
				#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				const auto& obj = *__tmp0;
				
				#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				return __this <=> obj;
			}
		}
		#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		{
			#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			if ((!Builtin::Is(obj, nullptr))) {
				#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				auto __tmp0 = *obj; const auto& obj = __tmp0;
				
				#line 68 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				Builtin::Throw(Builtin::InvalidOperationException{});
			}
		}
		#line 70 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		return Builtin::i32(1);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	auto Parse(__extension_Float64_160_f64 const& __this LIFETIMEBOUND, Builtin::Str input)  -> const typename __extension_Float64_160_f64
	{
		#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		return Builtin::i32(0);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	auto TryParse(__extension_Float64_160_f64 const& __this LIFETIMEBOUND, Builtin::Str input) noexcept -> const Builtin::Nullable<__extension_Float64_1210_f64>
	{
		#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		return Builtin::f32(0.0f);
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	auto Root(__extension_Float64_712_f64 const& __this LIFETIMEBOUND, Builtin::i32 n)  -> const typename __extension_Float64_712_f64
	{
		#line 720 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		auto PositiveN = [] (__extension_Float64_1210_f64 x, Builtin::i32 n) 
		{
			#line 722 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			__extension_Float64_1210_f64 result{}; 
			#line 723 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			if (ADV_UPCS(IsFinite)(x.__ref())) {
				#line 724 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				if (x != Builtin::i32(0)) {
					#line 725 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
					if ((x <=> Builtin::i32(0)) > 0 || ADV_UPCS(IsOddInteger)(n.__ref())) {
						#line 726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
						result = ADV_UFCS(_operator_mul_mul)(ADV_UPCS(Abs)(x.__ref()), (Builtin::f64(1.0) / n));
						#line 727 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
						result = ADV_UFCS(CopySign)(result.__ref(), x);
					} else {
						#line 728 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
						{
							#line 729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
							result = ADV_USPCS(NaN, Builtin::f64)();
						}
					}
				} else {
					#line 731 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
					if (ADV_UPCS(IsEvenInteger)(n.__ref())) {
						#line 732 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
						result = Builtin::f64(0.0);
					} else {
						#line 733 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
						{
							#line 734 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
							result = ADV_UFCS(CopySign)(Builtin::f64(0.0).__ref(), x);
						}
					}
				}
			} else {
				#line 736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				if (ADV_UPCS(IsNaN)(x.__ref())) {
					#line 737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
					result = ADV_USPCS(NaN, Builtin::f64)();
				} else {
					#line 738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
					if ((x <=> Builtin::i32(0)) > 0) {
						#line 739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
						ADV_ASSERT((ADV_UPCS(IsPositiveInfinity)(x.__ref())), u"x.IsPositiveInfinity");
						#line 740 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
						result = ADV_USPCS(PositiveInfinity, Builtin::f64)();
					} else {
						#line 741 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
						{
							#line 742 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
							ADV_ASSERT((ADV_UPCS(IsNegativeInfinity)(x.__ref())), u"x.IsNegativeInfinity");
							#line 743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
							result = ADV_UPCS(IsOddInteger)(n.__ref()) ? ADV_USPCS(NegativeInfinity, Builtin::f64)() : ADV_USPCS(NaN, Builtin::f64)();
						}
					}
				}
			}
			#line 746 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			return result;
		}; 
		#line 749 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		auto NegativeN = [] (__extension_Float64_1210_f64 x, Builtin::i32 n) 
		{
			#line 751 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			__extension_Float64_1210_f64 result{}; 
			#line 752 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			if (ADV_UPCS(IsFinite)(x.__ref())) {
				#line 753 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				if (x != Builtin::i32(0)) {
					#line 754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
					if ((x <=> Builtin::i32(0)) > 0 || ADV_UPCS(IsOddInteger)(n.__ref())) {
						#line 755 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
						result = ADV_UFCS(_operator_mul_mul)(ADV_UPCS(Abs)(x.__ref()), (Builtin::f64(1.0) / n));
						#line 756 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
						result = ADV_UFCS(CopySign)(result.__ref(), x);
					} else {
						#line 757 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
						{
							#line 758 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
							result = ADV_USPCS(NaN, Builtin::f64)();
						}
					}
				} else {
					#line 760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
					if (ADV_UPCS(IsEvenInteger)(n.__ref())) {
						#line 761 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
						result = ADV_USPCS(PositiveInfinity, Builtin::f64)();
					} else {
						#line 762 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
						{
							#line 763 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
							result = ADV_UFCS(CopySign)(ADV_USPCS(PositiveInfinity, Builtin::f64)().__ref(), x);
						}
					}
				}
			} else {
				#line 765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				if (ADV_UPCS(IsNaN)(x.__ref())) {
					#line 766 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
					result = ADV_USPCS(NaN, Builtin::f64)();
				} else {
					#line 767 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
					if ((x <=> Builtin::i32(0)) > 0) {
						#line 768 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
						ADV_ASSERT((ADV_UPCS(IsPositiveInfinity)(x.__ref())), u"x.IsPositiveInfinity");
						#line 769 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
						result = Builtin::f64(0.0);
					} else {
						#line 770 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
						{
							#line 771 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
							ADV_ASSERT((ADV_UPCS(IsNegativeInfinity)(x.__ref())), u"x.IsNegativeInfinity");
							#line 772 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
							result = ADV_UPCS(IsOddInteger)(n.__ref()) ? Builtin::f64(-0.0) : ADV_USPCS(NaN, Builtin::f64)();
						}
					}
				}
			}
			#line 775 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			return result;
		}; 
		#line 778 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		return [&]() 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
		{
			#line 779 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			auto __tmp__valid_778 = Builtin::Cast<false, std::decay_t<decltype(n)>::__self>(n);
			#line 779 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			if(__tmp__valid_778.IsValid() && Builtin::IsGreater(*__tmp__valid_778, Builtin::i32(0))) {
				#line 779 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				const auto& n = *__tmp__valid_778;
				return [&]() 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
				{
					#line 781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
					auto __tmp__valid_779 = Builtin::Cast<false, std::decay_t<decltype(n)>::__self>(n);
					#line 781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
					if(__tmp__valid_779.IsValid() && Builtin::Is(*__tmp__valid_779, Builtin::i32(2))) {
						#line 781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
						const auto& n = *__tmp__valid_779;
						return __this != Builtin::f64(0.0) ? ADV_UPCS(Sqrt)(__this.__ref()) : Builtin::f64(0.0);
					}
					else {
						#line 782 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
						if(__tmp__valid_779.IsValid() && Builtin::Is(*__tmp__valid_779, Builtin::i32(3))) {
							#line 782 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
							const auto& n = *__tmp__valid_779;
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
				#line 785 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				if(__tmp__valid_778.IsValid() && Builtin::IsLess(*__tmp__valid_778, Builtin::i32(0))) {
					#line 785 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
					const auto& n = *__tmp__valid_778;
					return NegativeN(__this, n);
				}
				else {
					return ADV_USPCS(NaN, Builtin::f64)();
					
				}
			}
		}
ADV_WARNING_POP
		();
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 791 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	auto Hypot(__extension_Float64_712_f64 const& __this LIFETIMEBOUND, __extension_Float64_1210_f64 y)  -> const typename __extension_Float64_712_f64
	{
		#line 793 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		__extension_Float64_1210_f64 result{}; 
		#line 794 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		if (ADV_UPCS(IsFinite)(__this.__ref()) && ADV_UPCS(IsFinite)(y.__ref())) {
			#line 795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			const auto ax = ADV_UPCS(Abs)(__this.__ref()); 
			#line 796 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			const auto ay = ADV_UPCS(Abs)(y.__ref()); 
			#line 798 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			if (ax == Builtin::f64(0.0)) {
				#line 799 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				result = ay;
			} else {
				#line 800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				if (ay == Builtin::f64(0.0)) {
					#line 801 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
					result = ax;
				} else {
					#line 802 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
					{
						#line 803 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
						Builtin::f64 xx = ax; 
						#line 804 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
						xx *= xx;
						#line 805 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
						Builtin::f64 yy = ay; 
						#line 806 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
						yy *= yy;
						#line 807 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
						result = ADV_UPCS(Sqrt)((xx + yy).__ref());
					}
				}
			}
		} else {
			#line 809 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			if (ADV_UPCS(IsInfinity)(__this.__ref()) || ADV_UPCS(IsInfinity)(y.__ref())) {
				#line 810 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				result = ADV_USPCS(PositiveInfinity, Builtin::f64)();
			} else {
				#line 811 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				{
					#line 812 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
					ADV_ASSERT((ADV_UPCS(IsNaN)(__this.__ref()) || ADV_UPCS(IsNaN)(y.__ref())), u"this.IsNaNory.IsNaN");
					#line 813 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
					result = ADV_USPCS(NaN, Builtin::f64)();
				}
			}
		}
		#line 816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		return result;
	}
	
} namespace System{
} namespace __extensions { using namespace System;
#line 848 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	auto getSinPi(__extension_Float64_820_f64 const& __this ) -> const __extension_Float64_1210_f64
	{
		#line 850 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		__extension_Float64_1210_f64 result{}; 
		#line 851 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		if (ADV_UPCS(IsFinite)(__this.__ref())) {
			#line 852 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			const auto ax = ADV_UPCS(Abs)(__this.__ref()); 
			#line 855 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			if ((ax <=> Builtin::f64(4503599627370496.0)) < 0) {
				#line 856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				{
					#line 857 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
					auto __tmp__valid_856 = Builtin::Cast<false, std::decay_t<decltype(ax)>::__self>(ax);
					#line 857 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
					if(__tmp__valid_856.IsValid() && Builtin::IsGreater(*__tmp__valid_856, Builtin::f64(0.25)))  {
						#line 857 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
						const auto& ax = *__tmp__valid_856;
						#line 857 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
						{
							#line 858 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
							const auto integral = Builtin::Cast<true, Builtin::i64>(ax); 
							#line 859 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
							const auto fractional = ax - integral; 
							#line 860 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
							const auto sign = ((__this <=> Builtin::f64(0.0)) > 0 ? +Builtin::f64(1.0) : Builtin::f64(-1.0)) * (ADV_UPCS(IsOddInteger)(integral.__ref()) ? Builtin::f64(-1.0) : +Builtin::f64(1.0)); 
							#line 862 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
							result = [&]() 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
							{
								#line 863 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
								auto __tmp__valid_862 = Builtin::Cast<false, std::decay_t<decltype(fractional)>::__self>(fractional);
								#line 863 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
								if(__tmp__valid_862.IsValid() && Builtin::IsLessOrEqual(*__tmp__valid_862, Builtin::f64(0.25))) {
									#line 863 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
									const auto& fractional = *__tmp__valid_862;
									return fractional != Builtin::f64(0.0) ? sign * SinPiBy4(fractional * ADV_USPCS(Pi, Builtin::f64)(), Builtin::f64(0.0)) : __this * Builtin::f64(0.0);
								}
								else {
									#line 864 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
									if(__tmp__valid_862.IsValid() && Builtin::IsLessOrEqual(*__tmp__valid_862, Builtin::f64(0.5))) {
										#line 864 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
										const auto& fractional = *__tmp__valid_862;
										return fractional != Builtin::f64(0.5) ? sign * CosPiBy4((Builtin::f64(0.5) - fractional) * ADV_USPCS(Pi, Builtin::f64)(), Builtin::f64(0.0)) : sign;
									}
									else {
										#line 865 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
										if(__tmp__valid_862.IsValid() && Builtin::IsLessOrEqual(*__tmp__valid_862, Builtin::f64(0.75))) {
											#line 865 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
											const auto& fractional = *__tmp__valid_862;
											return sign * CosPiBy4((fractional - Builtin::f64(0.5)) * ADV_USPCS(Pi, Builtin::f64)(), Builtin::f64(0.0));
										}
										else {
											return sign * SinPiBy4((Builtin::f64(1.0) - fractional) * ADV_USPCS(Pi, Builtin::f64)(), Builtin::f64(0.0));
											
										}
									}
								}
							}
ADV_WARNING_POP
							();
						}
					}
					else {
						#line 869 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
						if(__tmp__valid_856.IsValid() && Builtin::IsGreaterOrEqual(*__tmp__valid_856, Builtin::f64(1.220703125e-4)))  {
							#line 869 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
							const auto& ax = *__tmp__valid_856;
							#line 869 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
							result = SinPiBy4(__this * ADV_USPCS(Pi, Builtin::f64)(), Builtin::f64(0.0));
						}
						else {
							#line 870 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
							if(__tmp__valid_856.IsValid() && Builtin::IsGreaterOrEqual(*__tmp__valid_856, Builtin::f64(7.450580596923828e-09)))  {
								#line 870 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
								const auto& ax = *__tmp__valid_856;
								#line 870 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
								{
									#line 871 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
									const auto value = __this * ADV_USPCS(Pi, Builtin::f64)(); 
									#line 872 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
									result = value - (value * value * value * (Builtin::f64(1.0) / Builtin::f64(6.0)));
								}
							}
							else {
								#line 874 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
								result = __this * ADV_USPCS(Pi, Builtin::f64)();
								
							}
						}
					}
				}

			} else {
				#line 876 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				{
					#line 877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
					result = __this * Builtin::f64(0.0);
				}
			}
		} else {
			#line 879 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			{
				#line 880 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				result = ADV_USPCS(NaN, Builtin::f64)();
			}
		}
		#line 883 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		return result;
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 886 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	auto getCosPi(__extension_Float64_820_f64 const& __this ) -> const __extension_Float64_1210_f64
	{
		#line 888 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		__extension_Float64_1210_f64 result{}; 
		#line 889 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		if (ADV_UPCS(IsFinite)(__this.__ref())) {
			#line 890 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			const auto ax = ADV_UPCS(Abs)(__this.__ref()); 
			#line 893 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			if ((ax <=> Builtin::f64(4503599627370496.0)) < 0) {
				#line 894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				{
					#line 895 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
					auto __tmp__valid_894 = Builtin::Cast<false, std::decay_t<decltype(ax)>::__self>(ax);
					#line 895 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
					if(__tmp__valid_894.IsValid() && Builtin::IsGreater(*__tmp__valid_894, Builtin::f64(0.25)))  {
						#line 895 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
						const auto& ax = *__tmp__valid_894;
						#line 895 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
						{
							#line 896 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
							const auto integral = Builtin::Cast<true, Builtin::i64>(ax); 
							#line 897 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
							const auto fractional = ax - integral; 
							#line 898 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
							const auto sign = ADV_UPCS(IsOddInteger)(integral.__ref()) ? Builtin::f64(-1.0) : +Builtin::f64(1.0); 
							#line 900 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
							result = [&]() 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
							{
								#line 901 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
								auto __tmp__valid_900 = Builtin::Cast<false, std::decay_t<decltype(fractional)>::__self>(fractional);
								#line 901 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
								if(__tmp__valid_900.IsValid() && Builtin::IsLessOrEqual(*__tmp__valid_900, Builtin::f64(0.25))) {
									#line 901 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
									const auto& fractional = *__tmp__valid_900;
									return fractional != Builtin::f64(0.0) ? sign * CosPiBy4(fractional * ADV_USPCS(Pi, Builtin::f64)(), Builtin::f64(0.0)) : sign;
								}
								else {
									#line 902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
									if(__tmp__valid_900.IsValid() && Builtin::IsLessOrEqual(*__tmp__valid_900, Builtin::f64(0.5))) {
										#line 902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
										const auto& fractional = *__tmp__valid_900;
										return fractional != Builtin::f64(0.5) ? sign * SinPiBy4((Builtin::f64(0.5) - fractional) * ADV_USPCS(Pi, Builtin::f64)(), Builtin::f64(0.0)) : Builtin::f64(0.0);
									}
									else {
										#line 903 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
										if(__tmp__valid_900.IsValid() && Builtin::IsLessOrEqual(*__tmp__valid_900, Builtin::f64(0.75))) {
											#line 903 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
											const auto& fractional = *__tmp__valid_900;
											return -sign * SinPiBy4((fractional - Builtin::f64(0.5)) * ADV_USPCS(Pi, Builtin::f64)(), Builtin::f64(0.0));
										}
										else {
											return -sign * CosPiBy4((Builtin::f64(1.0) - fractional) * ADV_USPCS(Pi, Builtin::f64)(), Builtin::f64(0.0));
											
										}
									}
								}
							}
ADV_WARNING_POP
							();
						}
					}
					else {
						#line 907 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
						if(__tmp__valid_894.IsValid() && Builtin::IsGreaterOrEqual(*__tmp__valid_894, Builtin::f64(6.103515625e-05)))  {
							#line 907 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
							const auto& ax = *__tmp__valid_894;
							#line 907 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
							result = CosPiBy4(__this * ADV_USPCS(Pi, Builtin::f64)(), Builtin::f64(0.0));
						}
						else {
							#line 908 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
							if(__tmp__valid_894.IsValid() && Builtin::IsGreaterOrEqual(*__tmp__valid_894, Builtin::f64(7.450580596923828e-09)))  {
								#line 908 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
								const auto& ax = *__tmp__valid_894;
								#line 908 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
								{
									#line 909 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
									const auto value = __this * ADV_USPCS(Pi, Builtin::f64)(); 
									#line 910 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
									result = Builtin::f64(1.0) - (value * value * Builtin::f64(0.5));
								}
							}
							else {
								#line 912 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
								result = Builtin::f64(1.0);
								
							}
						}
					}
				}

			} else {
				#line 914 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				if ((ax <=> Builtin::f64(9007199254740992.0)) < 0) {
					#line 915 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
					result = ADV_UPCS(IsOddInteger)(ADV_UPCS(Bits)(ax.__ref()).__ref()) ? Builtin::f64(-1.0) : +Builtin::f64(1.0);
				} else {
					#line 916 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
					{
						#line 917 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
						result = Builtin::f64(1.0);
					}
				}
			}
		} else {
			#line 919 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			{
				#line 920 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				result = ADV_USPCS(NaN, Builtin::f64)();
			}
		}
		#line 923 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		return result;
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 926 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	auto getSinCosPi(__extension_Float64_820_f64 const& __this ) -> const std::tuple<__extension_Float64_1210_f64, __extension_Float64_1210_f64>
	{
		#line 928 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		__extension_Float64_1210_f64 sin{}; 
		#line 929 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		__extension_Float64_1210_f64 cos{}; 
		#line 931 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		if (ADV_UPCS(IsFinite)(__this.__ref())) {
			#line 932 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			const auto ax = ADV_UPCS(Abs)(__this.__ref()); 
			#line 935 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			if ((ax <=> Builtin::f64(4503599627370496.0)) < 0) {
				#line 936 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				if ((ax <=> Builtin::f64(0.25)) > 0) {
					#line 937 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
					const auto integral = Builtin::Cast<true, Builtin::i64>(ax); 
					#line 938 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
					const auto fractional = ax - integral; 
					#line 939 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
					const auto sign = ADV_UPCS(IsOddInteger)(integral.__ref()) ? Builtin::f64(-1.0) : +Builtin::f64(1.0); 
					#line 940 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
					const auto sinSign = ((__this <=> Builtin::f64(0.0)) > 0 ? +Builtin::f64(1.0) : Builtin::f64(-1.0)) * sign; 
					#line 941 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
					const auto cosSign = sign; 
					#line 943 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
					if ((fractional <=> Builtin::f64(0.25)) <= 0) {
						#line 944 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
						if (fractional != Builtin::f64(0.0)) {
							#line 945 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
							const auto value = fractional * ADV_USPCS(Pi, Builtin::f64)(); 
							#line 946 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
							sin = sinSign * SinPiBy4(value, Builtin::f64(0.0));
							#line 947 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
							cos = cosSign * CosPiBy4(value, Builtin::f64(0.0));
						} else {
							#line 948 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
							{
								#line 949 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
								sin = __this * Builtin::f64(0.0);
								#line 950 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
								cos = cosSign;
							}
						}
					} else {
						#line 952 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
						if ((fractional <=> Builtin::f64(0.5)) <= 0) {
							#line 953 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
							if (fractional != Builtin::f64(0.5)) {
								#line 954 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
								const auto value = (Builtin::f64(0.5) - fractional) * ADV_USPCS(Pi, Builtin::f64)(); 
								#line 955 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
								sin = sinSign * CosPiBy4(value, Builtin::f64(0.0));
								#line 956 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
								cos = cosSign * SinPiBy4(value, Builtin::f64(0.0));
							} else {
								#line 957 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
								{
									#line 958 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
									sin = sinSign;
									#line 959 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
									cos = Builtin::f64(0.0);
								}
							}
						} else {
							#line 961 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
							if ((fractional <=> Builtin::f64(0.75)) <= 0) {
								#line 962 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
								const auto value = (fractional - Builtin::f64(0.5)) * ADV_USPCS(Pi, Builtin::f64)(); 
								#line 963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
								sin = +sinSign * CosPiBy4(value, Builtin::f64(0.0));
								#line 964 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
								cos = -cosSign * SinPiBy4(value, Builtin::f64(0.0));
							} else {
								#line 965 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
								{
									#line 966 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
									const auto value = (Builtin::f64(1.0) - fractional) * ADV_USPCS(Pi, Builtin::f64)(); 
									#line 967 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
									sin = +sinSign * SinPiBy4(value, Builtin::f64(0.0));
									#line 968 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
									cos = -cosSign * CosPiBy4(value, Builtin::f64(0.0));
								}
							}
						}
					}
				} else {
					#line 970 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
					if ((ax <=> Builtin::f64(1.220703125e-4)) >= 0) {
						#line 971 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
						const auto value = __this * ADV_USPCS(Pi, Builtin::f64)(); 
						#line 972 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
						sin = SinPiBy4(value, Builtin::f64(0.0));
						#line 973 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
						cos = CosPiBy4(value, Builtin::f64(0.0));
					} else {
						#line 974 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
						if ((ax <=> Builtin::f64(7.450580596923828e-09)) >= 0) {
							#line 975 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
							const auto value = __this * ADV_USPCS(Pi, Builtin::f64)(); 
							#line 976 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
							const auto valueSq = value * value; 
							#line 978 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
							sin = value - (value * valueSq * (Builtin::f64(1.0) / Builtin::f64(6.0)));
							#line 979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
							cos = Builtin::f64(1.0) - (valueSq * Builtin::f64(0.5));
						} else {
							#line 980 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
							{
								#line 981 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
								sin = __this * ADV_USPCS(Pi, Builtin::f64)();
								#line 982 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
								cos = Builtin::f64(1.0);
							}
						}
					}
				}
			} else {
				#line 984 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				if ((ax <=> Builtin::f64(9007199254740992.0)) < 0) {
					#line 985 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
					sin = __this * Builtin::f64(0.0);
					#line 986 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
					cos = ADV_UPCS(IsOddInteger)(ADV_UPCS(Bits)(ax.__ref()).__ref()) ? Builtin::f64(-1.0) : +Builtin::f64(1.0);
				} else {
					#line 987 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
					{
						#line 988 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
						sin = __this * Builtin::f64(0.0);
						#line 989 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
						cos = Builtin::f64(1.0);
					}
				}
			}
		} else {
			#line 991 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			{
				#line 992 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				sin = ADV_USPCS(NaN, Builtin::f64)();
				#line 993 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				cos = ADV_USPCS(NaN, Builtin::f64)();
			}
		}
		#line 996 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		return std::make_tuple(sin, cos);
	}
	} namespace System{
} namespace __extensions { using namespace System;
#line 999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
	auto getTanPi(__extension_Float64_820_f64 const& __this ) -> const __extension_Float64_1210_f64
	{
		#line 1001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		__extension_Float64_1210_f64 result{}; 
		#line 1003 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		if (ADV_UPCS(IsFinite)(__this.__ref())) {
			#line 1004 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			const auto ax = ADV_UPCS(Abs)(__this.__ref()); 
			#line 1005 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			const auto sign = (__this <=> Builtin::f64(0.0)) > 0 ? +Builtin::f64(1.0) : Builtin::f64(-1.0); 
			#line 1008 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			{
				#line 1009 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				auto __tmp__valid_1008 = Builtin::Cast<false, std::decay_t<decltype(ax)>::__self>(ax);
				#line 1009 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				if(__tmp__valid_1008.IsValid() && Builtin::IsLess(*__tmp__valid_1008, Builtin::f64(4503599627370496.0)))  {
					#line 1009 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
					const auto& ax = *__tmp__valid_1008;
					#line 1009 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
					{
						#line 1010 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
						{
							#line 1011 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
							auto __tmp__valid_1010 = Builtin::Cast<false, std::decay_t<decltype(ax)>::__self>(ax);
							#line 1011 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
							if(__tmp__valid_1010.IsValid() && Builtin::IsGreater(*__tmp__valid_1010, Builtin::f64(0.25)))  {
								#line 1011 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
								const auto& ax = *__tmp__valid_1010;
								#line 1011 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
								{
									#line 1012 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
									const auto integral = Builtin::Cast<true, Builtin::i64>(ax); 
									#line 1013 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
									const auto fractional = ax - integral; 
									#line 1015 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
									result = [&]() 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
									{
										#line 1016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
										auto __tmp__valid_1015 = Builtin::Cast<false, std::decay_t<decltype(fractional)>::__self>(fractional);
										#line 1016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
										if(__tmp__valid_1015.IsValid() && Builtin::IsLessOrEqual(*__tmp__valid_1015, Builtin::f64(0.25))) {
											#line 1016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
											const auto& fractional = *__tmp__valid_1015;
											return fractional != Builtin::f64(0.0) ? sign * TanPiBy4(fractional * ADV_USPCS(Pi, Builtin::f64)(), Builtin::f64(0.0), Builtin::Boolean(false)) : sign * (ADV_UPCS(IsOddInteger)(integral.__ref()) ? Builtin::f64(-0.0) : +Builtin::f64(0.0));
										}
										else {
											#line 1018 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
											if(__tmp__valid_1015.IsValid() && Builtin::IsLessOrEqual(*__tmp__valid_1015, Builtin::f64(0.5))) {
												#line 1018 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
												const auto& fractional = *__tmp__valid_1015;
												return fractional != Builtin::f64(0.5) ? -sign * TanPiBy4((Builtin::f64(0.5) - fractional) * ADV_USPCS(Pi, Builtin::f64)(), Builtin::f64(0.0), Builtin::Boolean(true)) : +sign * (ADV_UPCS(IsOddInteger)(integral.__ref()) ? ADV_USPCS(NegativeInfinity, Builtin::f64)() : ADV_USPCS(PositiveInfinity, Builtin::f64)());
											}
											else {
												#line 1020 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
												if(__tmp__valid_1015.IsValid() && Builtin::IsLessOrEqual(*__tmp__valid_1015, Builtin::f64(0.75))) {
													#line 1020 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
													const auto& fractional = *__tmp__valid_1015;
													return +sign * TanPiBy4((fractional - Builtin::f64(0.5)) * ADV_USPCS(Pi, Builtin::f64)(), Builtin::f64(0.0), Builtin::Boolean(true));
												}
												else {
													return -sign * TanPiBy4((Builtin::f64(1.0) - fractional) * ADV_USPCS(Pi, Builtin::f64)(), Builtin::f64(0.0), Builtin::Boolean(false));
													
												}
											}
										}
									}
ADV_WARNING_POP
									();
								}
							}
							else {
								#line 1024 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
								if(__tmp__valid_1010.IsValid() && Builtin::IsGreaterOrEqual(*__tmp__valid_1010, Builtin::f64(6.103515625e-05)))  {
									#line 1024 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
									const auto& ax = *__tmp__valid_1010;
									#line 1024 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
									result = TanPiBy4(__this * ADV_USPCS(Pi, Builtin::f64)(), Builtin::f64(0.0), Builtin::Boolean(false));
								}
								else {
									#line 1025 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
									if(__tmp__valid_1010.IsValid() && Builtin::IsGreaterOrEqual(*__tmp__valid_1010, Builtin::f64(7.450580596923828e-09)))  {
										#line 1025 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
										const auto& ax = *__tmp__valid_1010;
										#line 1025 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
										{
											#line 1026 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
											const auto value = __this * ADV_USPCS(Pi, Builtin::f64)(); 
											#line 1027 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
											result = value + (value * value * value * (Builtin::f64(1.0) / Builtin::f64(3.0)));
										}
									}
									else {
										#line 1029 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
										result = __this * ADV_USPCS(Pi, Builtin::f64)();
										
									}
								}
							}
						}

					}
				}
				else {
					#line 1032 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
					if(__tmp__valid_1008.IsValid() && Builtin::IsLess(*__tmp__valid_1008, Builtin::f64(9007199254740992.0)))  {
						#line 1032 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
						const auto& ax = *__tmp__valid_1008;
						#line 1032 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
						result = sign * (ADV_UPCS(IsOddInteger)(ADV_UPCS(Bits)(ax.__ref()).__ref()) ? Builtin::f64(-0.0) : +Builtin::f64(0.0));
					}
					else {
						#line 1033 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
						result = sign * Builtin::f64(0.0);
						
					}
				}
			}

		} else {
			#line 1035 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
			{
				#line 1036 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
				result = ADV_USPCS(NaN, Builtin::f64)();
			}
		}
		#line 1039 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Float64.ast"
		return result;
	}
	} namespace System{

}