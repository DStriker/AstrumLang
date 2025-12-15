#include "FirstProgram.h"

#line 401 "FirstProgram.adv"
auto main(CppAdvance::i32 iparam, CppAdvance::In<CppAdvance::f64> jparam = CppAdvance::f64(3.5))  -> const int;
#line 470 "FirstProgram.adv"
inline constexpr CppAdvance::usize PRIVATE_CONSTANT = CppAdvance::usize(34U);
#line 2 "FirstProgram.adv"
volatile CppAdvance::Unsafe::__VolatileRawPtr<const CppAdvance::char16> globalVar{};
#line 3 "FirstProgram.adv"
extern const CppAdvance::Unsafe::__RawPtr<CppAdvance::i32> globalVar1 = nullptr;
#line 471 "FirstProgram.adv"
static CppAdvance::i32 globalVar2 = CppAdvance::i32(8);
#line 472 "FirstProgram.adv"
static const CppAdvance::i32 globalVar3 = CppAdvance::i32(456);
#line 91 "FirstProgram.adv"
thread_local CppAdvance::i32 Vector3::Count2 = CppAdvance::i32(123);
#line 93 "FirstProgram.adv"
const Vector3 Vector3::ZERO = Vector3{CppAdvance::i32(0), CppAdvance::i32(0), CppAdvance::i32(0)};
#line 212 "FirstProgram.adv"
CppAdvance::i32 __Class_VectorClass::Count2 = CppAdvance::i32(123);
#line 214 "FirstProgram.adv"
const Vector3 __Class_VectorClass::ZERO = Vector3{CppAdvance::i32(0), CppAdvance::i32(0), CppAdvance::i32(0)};
#line 77 "FirstProgram.adv"
CppAdvance::i32 Vector3::p_Count = CppAdvance::i32(1);
#line 77 "FirstProgram.adv"
Vector3::__Property_Count<> Vector3::Count;
#line 212 "FirstProgram.adv"
__Class_VectorClass::__self::__Property_Count2<> __Class_VectorClass::__self::Count2;
#line 214 "FirstProgram.adv"
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
extern auto externalFunc(CppAdvance::i32 a, CppAdvance::Str b) -> const CppAdvance::Str;
#line 82 "FirstProgram.adv"
auto Vector3::setCount(const CppAdvance::i32& value) -> void 
{
	#line 83 "FirstProgram.adv"
	print(CppAdvance::Str{u"Write"});
	#line 84 "FirstProgram.adv"
	if (value > CppAdvance::i32(10)) {
		#line 84 "FirstProgram.adv"
		p_Count = value / CppAdvance::i32(10);
	} else {
		#line 85 "FirstProgram.adv"
		p_Count = value;
	}
}
#line 78 "FirstProgram.adv"
auto Vector3::getCount()  -> CppAdvance::i32 
{
	#line 79 "FirstProgram.adv"
	print(CppAdvance::Str{u"Read"});
	#line 80 "FirstProgram.adv"
	return p_Count * CppAdvance::i32(10);
}





#line 344 "FirstProgram.adv"
auto __Class_ConcreteVectorClass::setCount(const CppAdvance::i32& value) -> __selfClass& 
{
	#line 345 "FirstProgram.adv"
	print(CppAdvance::Str{u"Write"});
	#line 346 "FirstProgram.adv"
	if (value > CppAdvance::i32(10)) {
		#line 346 "FirstProgram.adv"
		p_Count = value / CppAdvance::i32(10);
	} else {
		#line 347 "FirstProgram.adv"
		p_Count = value;
	}
	return *this;
}
#line 340 "FirstProgram.adv"
auto __Class_ConcreteVectorClass::getCount() const  -> CppAdvance::i32 
{
	#line 341 "FirstProgram.adv"
	print(CppAdvance::Str{u"Read"});
	#line 342 "FirstProgram.adv"
	return p_Count * CppAdvance::i32(10);
}




#line 401 "FirstProgram.adv"
auto main(CppAdvance::i32 iparam, CppAdvance::In<CppAdvance::f64> jparam)  -> const int
{
	#line 446 "FirstProgram.adv"
	CppAdvance::Nullable<IInterface> nxtm = CppAdvance::New<ConcreteVectorClass>(CppAdvance::i32(11), CppAdvance::i32(12), CppAdvance::i32(13)); 
	#line 447 "FirstProgram.adv"
	CppAdvance::Nullable<IInterface> nxt = nxtm; 
	#line 448 "FirstProgram.adv"
	{
		#line 449 "FirstProgram.adv"
		auto nxt2 = CppAdvance::New<ConcreteVectorClass>(CppAdvance::i32(3), CppAdvance::i32(4), CppAdvance::i32(5)); 
		#line 450 "FirstProgram.adv"
		Vector3 vec = { CppAdvance::i32(12), CppAdvance::i32(13), CppAdvance::i32(14) }; 
		#line 451 "FirstProgram.adv"
		print(ADV_UFCS(GetStrongReferenceCount)((*(nxt)).__ref()));
		#line 452 "FirstProgram.adv"
		print(ADV_UFCS(GetMagicNumber)((*(nxt)).__ref(), nxt2));
		#line 453 "FirstProgram.adv"
		nxt = (*(nxtm)) + nxt2;
		#line 454 "FirstProgram.adv"
		print(ADV_UFCS(GetMagicNumber)((*(nxt)).__ref(), nxt2));
		#line 455 "FirstProgram.adv"
		print(ADV_UFCS(DefaultMethod)((*(nxt)).__ref(), nxt2));
		#line 456 "FirstProgram.adv"
		print(ADV_UPCS(Name)((*(nxt)).__ref()));
		#line 457 "FirstProgram.adv"
		nxt = nxt2;
		#line 458 "FirstProgram.adv"
		nxt.andThen([&](const auto& value) FORCE_INLINE_LAMBDA_CLANG FORCE_INLINE_LAMBDA { ADV_EXPRESSION_BODY(ADV_UFCS(Reset)(value.__ref())); });
		#line 459 "FirstProgram.adv"
		ADV_UPCS(Name)((*(nxt)).__ref()) = CppAdvance::Str{u"12345"};
		#line 460 "FirstProgram.adv"
		print(ADV_UPCS(Name)((*(nxt)).__ref()));
		#line 461 "FirstProgram.adv"
		CppAdvance::ObjectRef o = (*(nxt)); 
		#line 462 "FirstProgram.adv"
		CppAdvance::Nullable<CppAdvance::ObjectRef> on = nxt; 
		#line 463 "FirstProgram.adv"
		print(CppAdvance::usize(sizeof (__Class_ConcreteVectorClass)));
	}
	#line 465 "FirstProgram.adv"
	print(ADV_UFCS(GetStrongReferenceCount)((*(nxt)).__ref()));
	#line 466 "FirstProgram.adv"
	print(ADV_UPCS(x)(ADV_UPCS(x)(Test1::Test2::TestClass::makeTestClass(CppAdvance::i32(3), CppAdvance::f32(3.14f)).__ref()).__ref()));
}


