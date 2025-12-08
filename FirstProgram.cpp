#include "FirstProgram.h"

#line 407 "FirstProgram.adv"
auto main(CppAdvance::i32 iparam, CppAdvance::In<CppAdvance::f64> jparam = CppAdvance::f64(3.5))  -> int;
#line 469 "FirstProgram.adv"
inline constexpr CppAdvance::usize PRIVATE_CONSTANT = CppAdvance::usize(34U);
#line 2 "FirstProgram.adv"
volatile CppAdvance::Unsafe::__VolatileRawPtr<const CppAdvance::char16> globalVar{};
#line 3 "FirstProgram.adv"
extern const CppAdvance::Unsafe::__RawPtr<CppAdvance::i32> globalVar1 = nullptr;
#line 470 "FirstProgram.adv"
static CppAdvance::i32 globalVar2 = CppAdvance::i32(8);
#line 471 "FirstProgram.adv"
static const CppAdvance::i32 globalVar3 = CppAdvance::i32(456);
#line 90 "FirstProgram.adv"
thread_local CppAdvance::i32 Vector3::Count2 = CppAdvance::i32(123);
#line 92 "FirstProgram.adv"
const Vector3 Vector3::ZERO = Vector3{CppAdvance::i32(0), CppAdvance::i32(0), CppAdvance::i32(0)};
#line 201 "FirstProgram.adv"
CppAdvance::i32 __Class_VectorClass::Count2 = CppAdvance::i32(123);
#line 203 "FirstProgram.adv"
const Vector3 __Class_VectorClass::ZERO = Vector3{CppAdvance::i32(0), CppAdvance::i32(0), CppAdvance::i32(0)};
#line 362 "FirstProgram.adv"
ConcreteVectorClass Utils::v;
#line 363 "FirstProgram.adv"
const Vector3 Utils::vv = { CppAdvance::i32(1), CppAdvance::i32(2), CppAdvance::i32(3) };
#line 76 "FirstProgram.adv"
CppAdvance::i32 Vector3::p_Count = CppAdvance::i32(1);
#line 368 "FirstProgram.adv"
CppAdvance::i32 Utils::p_Count = CppAdvance::i32(1);
#line 76 "FirstProgram.adv"
Vector3::__Property_Count<> Vector3::Count;
#line 201 "FirstProgram.adv"
__Class_VectorClass::__self::__Property_Count2<> __Class_VectorClass::__self::Count2;
#line 203 "FirstProgram.adv"
__Class_VectorClass::__self::__Property_ZERO<> __Class_VectorClass::__self::ZERO;
#line 368 "FirstProgram.adv"
Utils::__Property_Count<> Utils::Count;
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

#line 373 "FirstProgram.adv"
auto Utils::setCount(const CppAdvance::i32& value) -> void 
{
	#line 374 "FirstProgram.adv"
	print(CppAdvance::Str{u"Write"});
	#line 375 "FirstProgram.adv"
	if (value > CppAdvance::i32(10)) {
		#line 375 "FirstProgram.adv"
		p_Count = value / CppAdvance::i32(10);
	} else {
		#line 376 "FirstProgram.adv"
		p_Count = value;
	}
}
#line 369 "FirstProgram.adv"
auto Utils::getCount()  -> CppAdvance::i32 
{
	#line 370 "FirstProgram.adv"
	print(CppAdvance::Str{u"Read"});
	#line 371 "FirstProgram.adv"
	return p_Count * CppAdvance::i32(10);
}



#line 407 "FirstProgram.adv"
auto main(CppAdvance::i32 iparam, CppAdvance::In<CppAdvance::f64> jparam)  -> int
{
	#line 451 "FirstProgram.adv"
	CppAdvance::Nullable<typename VectorClass::NestedClass> nxt{}; 
	#line 452 "FirstProgram.adv"
	{
		#line 453 "FirstProgram.adv"
		auto nxt2 = CppAdvance::New<typename VectorClass::NestedClass>(CppAdvance::f32(3.14f), CppAdvance::f32(4.15f), CppAdvance::f32(6.73f)); 
		#line 454 "FirstProgram.adv"
		nxt = nxt2;
		#line 455 "FirstProgram.adv"
		print(Utils::Count);
		#line 456 "FirstProgram.adv"
		print(Utils2::Count);
		#line 457 "FirstProgram.adv"
		const auto& [x, y, z] = Utils2::TemplateMethod(CppAdvance::i32(1), CppAdvance::i32(2), CppAdvance::i32(3));
		#line 458 "FirstProgram.adv"
		print(x);
		#line 459 "FirstProgram.adv"
		print(y);
		#line 460 "FirstProgram.adv"
		print(z);
		#line 461 "FirstProgram.adv"
		Utils::printUtils();
		#line 462 "FirstProgram.adv"
		Utils2::printUtils();
	}
	#line 464 "FirstProgram.adv"
	print(ADV_UFCS(GetStrongReferenceCount)((*(nxt)).__ref()));
	#line 465 "FirstProgram.adv"
	print(Test1::Test2::TestClass::makeTestClass(CppAdvance::i32(3), CppAdvance::f32(3.14f)).__ref().x.__ref().x);
}


