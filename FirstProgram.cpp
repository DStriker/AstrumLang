#include "FirstProgram.h"

#line 394 "FirstProgram.adv"
auto main(CppAdvance::i32 iparam, CppAdvance::In<CppAdvance::f64> jparam = CppAdvance::f64(3.5))  -> int;
#line 461 "FirstProgram.adv"
inline constexpr CppAdvance::usize PRIVATE_CONSTANT = CppAdvance::usize(34U);
#line 2 "FirstProgram.adv"
volatile CppAdvance::Unsafe::__VolatileRawPtr<const CppAdvance::char16> globalVar{};
#line 3 "FirstProgram.adv"
extern const CppAdvance::Unsafe::__RawPtr<CppAdvance::i32> globalVar1 = nullptr;
#line 462 "FirstProgram.adv"
static CppAdvance::i32 globalVar2 = CppAdvance::i32(8);
#line 463 "FirstProgram.adv"
static const CppAdvance::i32 globalVar3 = CppAdvance::i32(456);
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





#line 339 "FirstProgram.adv"
auto __Class_ConcreteVectorClass::setCount(const CppAdvance::i32& value) -> __selfClass& 
{
	#line 340 "FirstProgram.adv"
	print(CppAdvance::Str{u"Write"});
	#line 341 "FirstProgram.adv"
	if (value > CppAdvance::i32(10)) {
		#line 341 "FirstProgram.adv"
		p_Count = value / CppAdvance::i32(10);
	} else {
		#line 342 "FirstProgram.adv"
		p_Count = value;
	}
	return *this;
}
#line 335 "FirstProgram.adv"
auto __Class_ConcreteVectorClass::getCount() const  -> CppAdvance::i32 
{
	#line 336 "FirstProgram.adv"
	print(CppAdvance::Str{u"Read"});
	#line 337 "FirstProgram.adv"
	return p_Count * CppAdvance::i32(10);
}




#line 394 "FirstProgram.adv"
auto main(CppAdvance::i32 iparam, CppAdvance::In<CppAdvance::f64> jparam)  -> int
{
	#line 439 "FirstProgram.adv"
	IInterface<VectorClass> nxtm = CppAdvance::New<ConcreteVectorClass>(CppAdvance::i32(11), CppAdvance::i32(12), CppAdvance::i32(13)); 
	#line 440 "FirstProgram.adv"
	CppAdvance::Nullable<IInterface<ConcreteVectorClass>> nxt = nxtm; 
	#line 441 "FirstProgram.adv"
	{
		#line 442 "FirstProgram.adv"
		auto nxt2 = CppAdvance::New<ConcreteVectorClass>(CppAdvance::i32(3), CppAdvance::i32(4), CppAdvance::i32(5)); 
		#line 443 "FirstProgram.adv"
		Vector3 vec = { CppAdvance::i32(12), CppAdvance::i32(13), CppAdvance::i32(14) }; 
		#line 444 "FirstProgram.adv"
		print(ADV_UFCS(GetStrongReferenceCount)((*(nxt)).__ref()));
		#line 446 "FirstProgram.adv"
		print(ADV_UFCS_TEMPLATE(GetMagicNumber<ConcreteVectorClass>)((*(nxt)).__ref(), nxt2));
		#line 447 "FirstProgram.adv"
		print(ADV_UFCS_TEMPLATE(GetMagicNumber<ConcreteVectorClass>)((*(nxt)).__ref(), nxt2));
		#line 448 "FirstProgram.adv"
		print(ADV_UFCS(DefaultMethod)((*(nxt)).__ref(), nxt2));
		#line 449 "FirstProgram.adv"
		nxt = nxt2;
		#line 450 "FirstProgram.adv"
		nxt.andThen([&](const auto& value) FORCE_INLINE_LAMBDA_CLANG FORCE_INLINE_LAMBDA { ADV_EXPRESSION_BODY(ADV_UFCS(Reset)(value.__ref())); });
		#line 451 "FirstProgram.adv"
		print(ADV_UFCS_TEMPLATE(GetMagicNumber<ConcreteVectorClass>)((*(nxt)).__ref(), nxt2));
		#line 452 "FirstProgram.adv"
		CppAdvance::ObjectRef o = (*(nxt)); 
		#line 453 "FirstProgram.adv"
		CppAdvance::Nullable<CppAdvance::ObjectRef> on = nxt; 
		#line 454 "FirstProgram.adv"
		print(ADV_UFCS(GetStrongReferenceCount)((*(nxt)).__ref()));
	}
	#line 456 "FirstProgram.adv"
	print(ADV_UFCS(GetStrongReferenceCount)((*(nxt)).__ref()));
	#line 457 "FirstProgram.adv"
	print(Test1::Test2::TestClass::makeTestClass(CppAdvance::i32(3), CppAdvance::f32(3.14f)).__ref().x.__ref().x);
}


