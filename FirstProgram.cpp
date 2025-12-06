#include "FirstProgram.h"

#line 358 "FirstProgram.adv"
auto main(CppAdvance::i32 iparam, CppAdvance::In<CppAdvance::f64> jparam = CppAdvance::f64(3.5))  -> int;
#line 425 "FirstProgram.adv"
inline constexpr CppAdvance::usize PRIVATE_CONSTANT = CppAdvance::usize(34U);
#line 2 "FirstProgram.adv"
volatile CppAdvance::Unsafe::__VolatileRawPtr<const CppAdvance::char16> globalVar{};
#line 3 "FirstProgram.adv"
extern const CppAdvance::Unsafe::__RawPtr<CppAdvance::i32> globalVar1 = nullptr;
#line 426 "FirstProgram.adv"
static CppAdvance::i32 globalVar2 = CppAdvance::i32(8);
#line 427 "FirstProgram.adv"
static const CppAdvance::i32 globalVar3 = CppAdvance::i32(456);
#line 90 "FirstProgram.adv"
thread_local CppAdvance::i32 Vector3::Count2 = CppAdvance::i32(123);
#line 92 "FirstProgram.adv"
const Vector3 Vector3::ZERO = Vector3{CppAdvance::i32(0), CppAdvance::i32(0), CppAdvance::i32(0)};
#line 203 "FirstProgram.adv"
CppAdvance::i32 __Class_VectorClass::Count2 = CppAdvance::i32(123);
#line 205 "FirstProgram.adv"
const Vector3 __Class_VectorClass::ZERO = Vector3{CppAdvance::i32(0), CppAdvance::i32(0), CppAdvance::i32(0)};
#line 76 "FirstProgram.adv"
CppAdvance::i32 Vector3::p_Count = CppAdvance::i32(1);
#line 76 "FirstProgram.adv"
Vector3::__Property_Count<> Vector3::Count;
#line 203 "FirstProgram.adv"
__Class_VectorClass::__self::__Property_Count2<> __Class_VectorClass::__self::Count2;
#line 205 "FirstProgram.adv"
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





#line 321 "FirstProgram.adv"
auto __Class_ConcreteVectorClass::setCount(const CppAdvance::i32& value) -> __selfClass& 
{
	#line 322 "FirstProgram.adv"
	print(CppAdvance::Str{u"Write"});
	#line 323 "FirstProgram.adv"
	if (value > CppAdvance::i32(10)) {
		#line 323 "FirstProgram.adv"
		p_Count = value / CppAdvance::i32(10);
	} else {
		#line 324 "FirstProgram.adv"
		p_Count = value;
	}
	return *this;
}
#line 317 "FirstProgram.adv"
auto __Class_ConcreteVectorClass::getCount() const  -> CppAdvance::i32 
{
	#line 318 "FirstProgram.adv"
	print(CppAdvance::Str{u"Read"});
	#line 319 "FirstProgram.adv"
	return p_Count * CppAdvance::i32(10);
}

#line 358 "FirstProgram.adv"
auto main(CppAdvance::i32 iparam, CppAdvance::In<CppAdvance::f64> jparam)  -> int
{
	#line 384 "FirstProgram.adv"
	Vector3 vv{ CppAdvance::i32(2), CppAdvance::i32(3), CppAdvance::i32(4) }; 
	#line 386 "FirstProgram.adv"
	print(ADV_UFCS(getClassExt)(Test1::Test2::TestClass::makeTestClass(CppAdvance::i32(3), CppAdvance::f32(3.14f)).__ref(), CppAdvance::i32(1), CppAdvance::i32(2), CppAdvance::i32(4), 8, true, true, false).__ref().x);
	#line 387 "FirstProgram.adv"
	auto ss = CppAdvance::i32(300); 
	#line 389 "FirstProgram.adv"
	Vector3 v = { CppAdvance::i32(2), CppAdvance::i32(7), CppAdvance::i32(4) }; 
	#line 390 "FirstProgram.adv"
	v = { CppAdvance::i32(6), CppAdvance::i32(53), CppAdvance::i32(9) };
	#line 391 "FirstProgram.adv"
	print(v.__ref().y);
	#line 392 "FirstProgram.adv"
	Vector3 fv = v; 
	#line 394 "FirstProgram.adv"
	const auto& [x, y, z] = fv;
	#line 395 "FirstProgram.adv"
	print(ADV_UFCS(ToString)(fv.__ref()));
	#line 396 "FirstProgram.adv"
	print(ADV_UFCS(HashCode)(fv.__ref()));
	#line 397 "FirstProgram.adv"
	Vector3::setCount(CppAdvance::i32(30));
	#line 398 "FirstProgram.adv"
	Vector3::Count = CppAdvance::i32(30);
	#line 399 "FirstProgram.adv"
	ConcreteVectorClass vcc{}; 
	#line 400 "FirstProgram.adv"
	ConcreteVectorClass vc = CppAdvance::i32(15); 
	#line 401 "FirstProgram.adv"
	print(vc.__ref().Name);
	#line 402 "FirstProgram.adv"
	print(vc.__ref().Count);
	#line 403 "FirstProgram.adv"
	print(ADV_UFCS(getX)(vc.__ref()));
	#line 405 "FirstProgram.adv"
	print(VectorClass::BYTES);
	#line 406 "FirstProgram.adv"
	CppAdvance::ObjectRef o{}; 
	#line 407 "FirstProgram.adv"
	o = true;
	#line 408 "FirstProgram.adv"
	o = ss;
	#line 409 "FirstProgram.adv"
	o = CppAdvance::char16(u'r');
	#line 410 "FirstProgram.adv"
	o = CppAdvance::Str{u"12345"};
	#line 411 "FirstProgram.adv"
	o = v;
	#line 412 "FirstProgram.adv"
	o = vc;
	#line 413 "FirstProgram.adv"
	print(ADV_UFCS(GetStrongReferenceCount)(o.__ref()));
	#line 414 "FirstProgram.adv"
	print(ADV_UFCS(GetUnownedReferenceCount)(o.__ref()));
	#line 415 "FirstProgram.adv"
	print(ADV_UFCS(GetWeakReferenceCount)(o.__ref()));
	#line 416 "FirstProgram.adv"
	print(CppAdvance::i32{ADV_UFCS(IsStackAllocated)(o.__ref())});
	#line 417 "FirstProgram.adv"
	CppAdvance::Nullable<CppAdvance::ObjectRef> on = nullptr; 
	#line 418 "FirstProgram.adv"
	on = CppAdvance::i32(10);
	#line 419 "FirstProgram.adv"
	on = v;
	#line 420 "FirstProgram.adv"
	on = vc;
	#line 421 "FirstProgram.adv"
	print(Test1::Test2::TestClass::makeTestClass(CppAdvance::i32(3), CppAdvance::f32(3.14f)).__ref().x.__ref().x);
}


