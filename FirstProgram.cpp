#include "FirstProgram.h"

#line 418 "FirstProgram.adv"
using IntArray = CppAdvance::i64[size_t(CppAdvance::i32(3))][size_t(CppAdvance::i32(3))][size_t(CppAdvance::i32(3))];
#line 356 "FirstProgram.adv"
auto main(CppAdvance::i32 iparam, CppAdvance::In<CppAdvance::f64> jparam = CppAdvance::f64(3.5))  -> int;
#line 414 "FirstProgram.adv"
inline constexpr CppAdvance::usize PRIVATE_CONSTANT = CppAdvance::usize(34U);
#line 2 "FirstProgram.adv"
volatile CppAdvance::Unsafe::__VolatileRawPtr<const CppAdvance::char16> globalVar{};
#line 3 "FirstProgram.adv"
extern const CppAdvance::Unsafe::__RawPtr<CppAdvance::i32> globalVar1 = nullptr;
#line 415 "FirstProgram.adv"
static CppAdvance::i32 globalVar2 = CppAdvance::i32(8);
#line 416 "FirstProgram.adv"
static const CppAdvance::i32 globalVar3 = CppAdvance::i32(456);
#line 417 "FirstProgram.adv"
static IntArray xyz = { { { CppAdvance::i32(1), CppAdvance::i32(2), CppAdvance::i32(3) }, { CppAdvance::i32(4), CppAdvance::i32(5), CppAdvance::i32(6) }, { CppAdvance::i32(7), CppAdvance::i32(8), CppAdvance::i32(9) } }, { { CppAdvance::i32(11), CppAdvance::i32(12), CppAdvance::i32(13) }, { CppAdvance::i32(14), CppAdvance::i32(15), CppAdvance::i32(16) }, { CppAdvance::i32(17), CppAdvance::i32(18), CppAdvance::i32(19) } }, { { CppAdvance::i32(21), CppAdvance::i32(22), CppAdvance::i32(23) }, { CppAdvance::i32(24), CppAdvance::i32(25), CppAdvance::i32(26) }, { CppAdvance::i32(27), CppAdvance::i32(28), CppAdvance::i32(29) } } };
#line 90 "FirstProgram.adv"
thread_local CppAdvance::i32 Vector3::Count2 = CppAdvance::i32(123);
#line 92 "FirstProgram.adv"
const Vector3 Vector3::ZERO = Vector3{CppAdvance::i32(0), CppAdvance::i32(0), CppAdvance::i32(0)};
#line 209 "FirstProgram.adv"
CppAdvance::i32 __Class_VectorClass::Count2 = CppAdvance::i32(123);
#line 211 "FirstProgram.adv"
const Vector3 __Class_VectorClass::ZERO = Vector3{CppAdvance::i32(0), CppAdvance::i32(0), CppAdvance::i32(0)};
#line 76 "FirstProgram.adv"
CppAdvance::i32 Vector3::p_Count = CppAdvance::i32(1);
#line 76 "FirstProgram.adv"
Vector3::__Property_Count<> Vector3::Count;
#line 209 "FirstProgram.adv"
__Class_VectorClass::__self::__Property_Count2<> __Class_VectorClass::__self::Count2;
#line 211 "FirstProgram.adv"
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





#line 323 "FirstProgram.adv"
auto __Class_ConcreteVectorClass::setCount(const CppAdvance::i32& value) -> __selfClass& 
{
	#line 324 "FirstProgram.adv"
	print(CppAdvance::Str{u"Write"});
	#line 325 "FirstProgram.adv"
	if (value > CppAdvance::i32(10)) {
		#line 325 "FirstProgram.adv"
		p_Count = value / CppAdvance::i32(10);
	} else {
		#line 326 "FirstProgram.adv"
		p_Count = value;
	}
	return *this;
}
#line 319 "FirstProgram.adv"
auto __Class_ConcreteVectorClass::getCount() const  -> CppAdvance::i32 
{
	#line 320 "FirstProgram.adv"
	print(CppAdvance::Str{u"Read"});
	#line 321 "FirstProgram.adv"
	return p_Count * CppAdvance::i32(10);
}

#line 356 "FirstProgram.adv"
auto main(CppAdvance::i32 iparam, CppAdvance::In<CppAdvance::f64> jparam)  -> int
{
	#line 382 "FirstProgram.adv"
	Vector3 vv{ CppAdvance::i32(2), CppAdvance::i32(3), CppAdvance::i32(4) }; 
	#line 384 "FirstProgram.adv"
	print(ADV_UFCS(getClassExt)(ADV_UFCS(GetTest)(vv.__ref()).__ref(), CppAdvance::i32(1), CppAdvance::i32(2), CppAdvance::i32(4),  8,  true, true,  false).__ref().x);
	#line 385 "FirstProgram.adv"
	auto ss = CppAdvance::i32(300); 
	#line 387 "FirstProgram.adv"
	Vector3 v = { CppAdvance::i32(2), CppAdvance::i32(7), CppAdvance::i32(4) }; 
	#line 388 "FirstProgram.adv"
	print(ADV_UFCS(TemplateMethod)(v.__ref(), CppAdvance::i32(3), CppAdvance::i32(4), CppAdvance::i32(5)).__ref().x);
	#line 389 "FirstProgram.adv"
	Vector3 fv = v; 
	#line 391 "FirstProgram.adv"
	const auto& [x, y, z] = fv;
	#line 392 "FirstProgram.adv"
	print(ADV_UFCS(ToString)(fv.__ref()));
	#line 393 "FirstProgram.adv"
	print(ADV_UFCS(HashCode)(fv.__ref()));
	#line 394 "FirstProgram.adv"
	Vector3::setCount(CppAdvance::i32(30));
	#line 395 "FirstProgram.adv"
	Vector3::Count = CppAdvance::i32(30);
	#line 397 "FirstProgram.adv"
	ConcreteVectorClass vc = CppAdvance::New<ConcreteVectorClass>(CppAdvance::i32(13), CppAdvance::i32(4), CppAdvance::i32(15)); 
	#line 398 "FirstProgram.adv"
	print(vc.__ref().Name);
	#line 399 "FirstProgram.adv"
	print(vc.__ref().Count);
	#line 400 "FirstProgram.adv"
	print(ADV_UFCS(getX)(vc.__ref()));
	#line 402 "FirstProgram.adv"
	print(VectorClass::BYTES);
	#line 404 "FirstProgram.adv"
	{
		#line 405 "FirstProgram.adv"
		auto nxt = CppAdvance::New<Next>(CppAdvance::i32(10)); 
		#line 406 "FirstProgram.adv"
		print(nxt.__ref().i);
		#line 407 "FirstProgram.adv"
		print(ADV_UFCS(GetStrongReferenceCount)(nxt.__ref()));
		#line 408 "FirstProgram.adv"
		print(ADV_UFCS(GetUnownedReferenceCount)(nxt.__ref()));
	}
	#line 410 "FirstProgram.adv"
	print(Test1::Test2::TestClass::makeTestClass(CppAdvance::i32(3), CppAdvance::f32(3.14f)).__ref().x.__ref().x);
}


