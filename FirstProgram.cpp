#include "FirstProgram.h"

#line 375 "FirstProgram.adv"
using IntArray = CppAdvance::i64[size_t(CppAdvance::i32(3))][size_t(CppAdvance::i32(3))][size_t(CppAdvance::i32(3))];
#line 319 "FirstProgram.adv"
auto main(CppAdvance::i32 iparam, CppAdvance::In<CppAdvance::f64> jparam = CppAdvance::f64(3.5))  -> int;
#line 371 "FirstProgram.adv"
inline constexpr CppAdvance::usize PRIVATE_CONSTANT = CppAdvance::usize(34U);
#line 2 "FirstProgram.adv"
volatile CppAdvance::Unsafe::__VolatileRawPtr<const CppAdvance::char16> globalVar{};
#line 3 "FirstProgram.adv"
extern const CppAdvance::Unsafe::__RawPtr<CppAdvance::i32> globalVar1 = nullptr;
#line 372 "FirstProgram.adv"
static CppAdvance::i32 globalVar2 = CppAdvance::i32(8);
#line 373 "FirstProgram.adv"
static const CppAdvance::i32 globalVar3 = CppAdvance::i32(456);
#line 374 "FirstProgram.adv"
static IntArray xyz = { { { CppAdvance::i32(1), CppAdvance::i32(2), CppAdvance::i32(3) }, { CppAdvance::i32(4), CppAdvance::i32(5), CppAdvance::i32(6) }, { CppAdvance::i32(7), CppAdvance::i32(8), CppAdvance::i32(9) } }, { { CppAdvance::i32(11), CppAdvance::i32(12), CppAdvance::i32(13) }, { CppAdvance::i32(14), CppAdvance::i32(15), CppAdvance::i32(16) }, { CppAdvance::i32(17), CppAdvance::i32(18), CppAdvance::i32(19) } }, { { CppAdvance::i32(21), CppAdvance::i32(22), CppAdvance::i32(23) }, { CppAdvance::i32(24), CppAdvance::i32(25), CppAdvance::i32(26) }, { CppAdvance::i32(27), CppAdvance::i32(28), CppAdvance::i32(29) } } };
#line 90 "FirstProgram.adv"
thread_local CppAdvance::i32 Vector3::Count2 = CppAdvance::i32(123);
#line 92 "FirstProgram.adv"
const Vector3 Vector3::ZERO = Vector3{CppAdvance::i32(0), CppAdvance::i32(0), CppAdvance::i32(0)};
#line 207 "FirstProgram.adv"
CppAdvance::i32 __Class_VectorClass::Count2 = CppAdvance::i32(123);
#line 209 "FirstProgram.adv"
const Vector3 __Class_VectorClass::ZERO = Vector3{CppAdvance::i32(0), CppAdvance::i32(0), CppAdvance::i32(0)};
#line 76 "FirstProgram.adv"
CppAdvance::i32 Vector3::p_Count = CppAdvance::i32(1);
#line 193 "FirstProgram.adv"
CppAdvance::i32 __Class_VectorClass::p_Count = CppAdvance::i32(1);
#line 76 "FirstProgram.adv"
Vector3::__Property_Count<> Vector3::Count;
#line 193 "FirstProgram.adv"
__Class_VectorClass::__Property_Count<> __Class_VectorClass::Count;
#line 193 "FirstProgram.adv"
__Class_VectorClass::__self::__Property_Count<> __Class_VectorClass::__self::Count;
#line 207 "FirstProgram.adv"
__Class_VectorClass::__self::__Property_Count2<> __Class_VectorClass::__self::Count2;
#line 209 "FirstProgram.adv"
__Class_VectorClass::__self::__Property_ZERO<> __Class_VectorClass::__self::ZERO;
#line 5 "FirstProgram.adv"
extern CppAdvance::i32 externalUnsafePtr;


#line 21 "FirstProgram.adv"
auto printParams(CppAdvance::Str s, std::initializer_list<CppAdvance::i32> params)  -> void
{
	#line 22 "FirstProgram.adv"
	print(s);
	#line 23 "FirstProgram.adv"
	for (const auto& param : params) 
	{
		#line 24 "FirstProgram.adv"
		print(param);
	}
}

#line 28 "FirstProgram.adv"
auto printParams(CppAdvance::Str s, std::initializer_list<CppAdvance::Str> params)  -> void
{
	#line 29 "FirstProgram.adv"
	for (const auto& param : params) 
	{
		#line 30 "FirstProgram.adv"
		print(param);
	}
}

#line 34 "FirstProgram.adv"
auto testt(CppAdvance::i32 x)  -> __ntuples::NamedTuple_ffda88e0b5252a0a
{
	CppAdvance::i32 i;
	typename Test1::Test2::TestClass t;
	bool b;
	#line 36 "FirstProgram.adv"
	i = x;
	#line 37 "FirstProgram.adv"
	t = Test1::Test2::TestClass{};
	#line 38 "FirstProgram.adv"
	b = true;
	#line 39 "FirstProgram.adv"
	return { i, t, b };
}




#line 48 "FirstProgram.adv"
extern auto externalFunc(CppAdvance::i32 a, CppAdvance::Str b) -> CppAdvance::Str;

#line 81 "FirstProgram.adv"
auto Vector3::setCount(const CppAdvance::i32& value) -> void 
{
	#line 82 "FirstProgram.adv"
	print(CppAdvance::Str{u"Write"});
	#line 83 "FirstProgram.adv"
	if (value > CppAdvance::i32(10)) {
		#line 83 "FirstProgram.adv"
		p_Count = value / CppAdvance::i32(10);
	} else {
		#line 84 "FirstProgram.adv"
		p_Count = value;
	}
}
#line 77 "FirstProgram.adv"
auto Vector3::getCount()  -> CppAdvance::i32 
{
	#line 78 "FirstProgram.adv"
	print(CppAdvance::Str{u"Read"});
	#line 79 "FirstProgram.adv"
	return p_Count * CppAdvance::i32(10);
}



#line 198 "FirstProgram.adv"
auto __Class_VectorClass::setCount(const CppAdvance::i32& value) -> void 
{
	#line 199 "FirstProgram.adv"
	print(CppAdvance::Str{u"Write"});
	#line 200 "FirstProgram.adv"
	if (value > CppAdvance::i32(10)) {
		#line 200 "FirstProgram.adv"
		p_Count = value / CppAdvance::i32(10);
	} else {
		#line 201 "FirstProgram.adv"
		p_Count = value;
	}
}
#line 194 "FirstProgram.adv"
auto __Class_VectorClass::getCount()  -> CppAdvance::i32 
{
	#line 195 "FirstProgram.adv"
	print(CppAdvance::Str{u"Read"});
	#line 196 "FirstProgram.adv"
	return p_Count * CppAdvance::i32(10);
}



#line 319 "FirstProgram.adv"
auto main(CppAdvance::i32 iparam, CppAdvance::In<CppAdvance::f64> jparam)  -> int
{
	#line 345 "FirstProgram.adv"
	Vector3 vv{ CppAdvance::i32(2), CppAdvance::i32(3), CppAdvance::i32(4) }; 
	#line 347 "FirstProgram.adv"
	print(ADV_UFCS(getClassExt)(ADV_UFCS(GetTest)(vv.__ref()).__ref(), CppAdvance::i32(1), CppAdvance::i32(2), CppAdvance::i32(4),  8,  true, true,  false).__ref().x);
	#line 348 "FirstProgram.adv"
	auto ss = CppAdvance::i32(300); 
	#line 350 "FirstProgram.adv"
	Vector3 v = { CppAdvance::i32(2), CppAdvance::i32(7), CppAdvance::i32(4) }; 
	#line 351 "FirstProgram.adv"
	print(ADV_UFCS(TemplateMethod)(v.__ref(), CppAdvance::i32(3), CppAdvance::i32(4), CppAdvance::i32(5)).__ref().x);
	#line 352 "FirstProgram.adv"
	Vector3 fv = v; 
	#line 354 "FirstProgram.adv"
	const auto& [x, y, z] = fv;
	#line 355 "FirstProgram.adv"
	print(ADV_UFCS(ToString)(fv.__ref()));
	#line 356 "FirstProgram.adv"
	print(ADV_UFCS(HashCode)(fv.__ref()));
	#line 357 "FirstProgram.adv"
	Vector3::setCount(CppAdvance::i32(30));
	#line 358 "FirstProgram.adv"
	Vector3::Count = CppAdvance::i32(30);
	#line 360 "FirstProgram.adv"
	VectorClass vc = ADV_UFCS(increment)(ADV_UFCS(increment)(ADV_UFCS(increment)(CppAdvance::New<VectorClass>(CppAdvance::i32(13), CppAdvance::i32(4), CppAdvance::i32(15)).__ref()).__ref()).__ref()); 
	#line 362 "FirstProgram.adv"
	print(VectorClass::BYTES);
	#line 363 "FirstProgram.adv"
	vc = CppAdvance::New<VectorClass>();
	#line 364 "FirstProgram.adv"
	typename VectorClass::Coords vcx{}; 
	#line 366 "FirstProgram.adv"
	print(ADV_UFCS(GetStrongReferenceCount)(vc.__ref()));
	#line 367 "FirstProgram.adv"
	print(Test1::Test2::TestClass::makeTestClass(CppAdvance::i32(3), CppAdvance::f32(3.14f)).__ref().x.__ref().x);
}


