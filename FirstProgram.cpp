#include "FirstProgram.h"

#line 484 "FirstProgram.adv"
template<class T> using __extension_484_T = T;
#line 487 "FirstProgram.adv"
template<class T> inline auto operator*(__extension_484_T<T> const& __this LIFETIMEBOUND, CppAdvance::In<CppAdvance::f32> f)  -> const CppAdvance::f32;
#line 489 "FirstProgram.adv"
template<class T> inline auto PrintInterface(__extension_484_T<T> const& __this LIFETIMEBOUND, CppAdvance::i32 x)  -> const CppAdvance::i32;
#line 497 "FirstProgram.adv"
template<class T> inline const CppAdvance::f32 getAt(__extension_484_T<T> const& __this LIFETIMEBOUND, CppAdvance::f32 r, CppAdvance::f32 g, CppAdvance::f32 b);
#line 497 "FirstProgram.adv"
template<class T> inline const CppAdvance::f32 _operator_subscript(__extension_484_T<T> const& __this LIFETIMEBOUND, CppAdvance::f32 r, CppAdvance::f32 g, CppAdvance::f32 b) { return getAt(__this, r, g, b); }
#line 499 "FirstProgram.adv"
template<class T> inline auto __construct_(CppAdvance::ConstructorProxy<__extension_484_T<T>> __ctordata, CppAdvance::i32 x, CppAdvance::Str txt)  -> decltype(auto);
#line 504 "FirstProgram.adv"
template<class T> inline auto __construct_(CppAdvance::ConstructorProxy<__extension_484_T<T>> __ctordata, typename CppAdvance::MemorySpace mem, CppAdvance::i32 x, CppAdvance::Str txt)  -> decltype(auto);
#line 485 "FirstProgram.adv"
template<class T> inline auto getAsString(__extension_484_T<T> const& __this ) -> const CppAdvance::Str;

#line 520 "FirstProgram.adv"
auto main(CppAdvance::i32 iparam, CppAdvance::In<CppAdvance::f64> jparam = CppAdvance::f64(3.5))  -> const int;
#line 613 "FirstProgram.adv"
inline constexpr CppAdvance::usize PRIVATE_CONSTANT = CppAdvance::usize(34U);
#line 2 "FirstProgram.adv"
volatile CppAdvance::Unsafe::__VolatileRawPtr<const CppAdvance::char16> globalVar{};
#line 3 "FirstProgram.adv"
extern const CppAdvance::Unsafe::__RawPtr<CppAdvance::i32> globalVar1 = nullptr;
#line 614 "FirstProgram.adv"
static CppAdvance::i32 globalVar2 = CppAdvance::i32(8);
#line 615 "FirstProgram.adv"
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
#line 481 "FirstProgram.adv"
__Class_ComplexVariant::__Property_Count10<> __Class_ComplexVariant::Count10;
#line 481 "FirstProgram.adv"
__Class_ComplexVariant::__self::__Property_Count10<> __Class_ComplexVariant::__self::Count10;

#line 453 "FirstProgram.adv"
const __Class_ComplexVariant::__self __Class_ComplexVariant::Value1 = __Class_ComplexVariant::__self{ new (::operator new(sizeof(__Class_ComplexVariant))) __Class_ComplexVariant(CppAdvance::i32(1), CppAdvance::f32(2.13f), CppAdvance::Str{u"Value1"}) };
#line 453 "FirstProgram.adv"
__Class_ComplexVariant::__self::__Property_Value1<> __Class_ComplexVariant::__self::Value1;
#line 454 "FirstProgram.adv"
const __Class_ComplexVariant::__self __Class_ComplexVariant::Value2 = __Class_ComplexVariant::__self{ new (::operator new(sizeof(__Class_ComplexVariant))) __Class_ComplexVariant(CppAdvance::i32(2), CppAdvance::f32(4.13f), CppAdvance::Str{u"Value2"}) };
#line 454 "FirstProgram.adv"
__Class_ComplexVariant::__self::__Property_Value2<> __Class_ComplexVariant::__self::Value2;
#line 455 "FirstProgram.adv"
const __Class_ComplexVariant::__self __Class_ComplexVariant::Value3 = __Class_ComplexVariant::__self{ new (::operator new(sizeof(__Class_ComplexVariant))) __Class_ComplexVariant(CppAdvance::i32(3), CppAdvance::f32(6.13f), CppAdvance::Str{u"Value3"}) };
#line 455 "FirstProgram.adv"
__Class_ComplexVariant::__self::__Property_Value3<> __Class_ComplexVariant::__self::Value3;
#line 456 "FirstProgram.adv"
const __Class_ComplexVariant::__self __Class_ComplexVariant::Value4 = __Class_ComplexVariant::__self{ new (::operator new(sizeof(__Class_ComplexVariant))) __Class_ComplexVariant(CppAdvance::i32(4), CppAdvance::f32(8.13f), CppAdvance::Str{u"Value4"}) };
#line 456 "FirstProgram.adv"
__Class_ComplexVariant::__self::__Property_Value4<> __Class_ComplexVariant::__self::Value4;
#line 452 "FirstProgram.adv"
const __Class_ComplexVariant::__self __Class_ComplexVariant::__values[] = { Value1, Value2, Value3, Value4 };
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





#line 345 "FirstProgram.adv"
auto __Class_ConcreteVectorClass::setCount(const CppAdvance::i32& value) -> __selfClass& 
{
	#line 346 "FirstProgram.adv"
	print(CppAdvance::Str{u"Write"});
	#line 347 "FirstProgram.adv"
	if (value > CppAdvance::i32(10)) {
		#line 347 "FirstProgram.adv"
		p_Count = value / CppAdvance::i32(10);
	} else {
		#line 348 "FirstProgram.adv"
		p_Count = value;
	}
	return *this;
}
#line 341 "FirstProgram.adv"
auto __Class_ConcreteVectorClass::getCount() const  -> CppAdvance::i32 
{
	#line 342 "FirstProgram.adv"
	print(CppAdvance::Str{u"Read"});
	#line 343 "FirstProgram.adv"
	return p_Count * CppAdvance::i32(10);
}





#line 449 "FirstProgram.adv"
inline auto Text::getShortString() const  -> CppAdvance::Str 
{
	#line 449 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(Value); 
}



#line 520 "FirstProgram.adv"
auto main(CppAdvance::i32 iparam, CppAdvance::In<CppAdvance::f64> jparam)  -> const int
{
	#line 565 "FirstProgram.adv"
	CppAdvance::Nullable<IInterface> nxtm = CppAdvance::New<ConcreteVectorClass>(CppAdvance::i32(11), CppAdvance::i32(12), CppAdvance::i32(13)); 
	#line 566 "FirstProgram.adv"
	CppAdvance::Nullable<IInterface> nxt = nxtm; 
	#line 568 "FirstProgram.adv"
	{
		#line 569 "FirstProgram.adv"
		#line 569 "FirstProgram.adv"
		CppAdvance::Stackalloc<ConcreteVectorClass> __obj_569_33(CppAdvance::i32(10), CppAdvance::Str{u"123455555555"}); CppAdvance::InitStackObject((CppAdvance::Object*)__obj_569_33.obj);
		#line 569 "FirstProgram.adv"
		CppAdvance::Nullable<VectorClass> nxt2 = __obj_569_33; 
		#line 570 "FirstProgram.adv"
		Vector3 vec = CppAdvance::New<Vector3>(CppAdvance::i32(12), CppAdvance::Str{u"12344444444444"}); 
		#line 571 "FirstProgram.adv"
		print(ADV_UFCS(GetStrongReferenceCount)((*(nxt2)).__ref()));
		#line 572 "FirstProgram.adv"
		print(ADV_UFCS(GetStrongReferenceCount)((*(nxt)).__ref()));
		#line 573 "FirstProgram.adv"
		print(ADV_UFCS(GetStrongReferenceCount)((*(nxt2)).__ref()));
		#line 574 "FirstProgram.adv"
		print(ADV_UFCS(_operator_subscript)((*(nxt)).__ref(), CppAdvance::i32(2)));
		#line 575 "FirstProgram.adv"
		typename IInterface::SomeInt xx = ADV_USPCS(VERSION, IInterface)(); 
		#line 576 "FirstProgram.adv"
		print(xx);
		#line 578 "FirstProgram.adv"
		print(ADV_UFCS(GetStrongReferenceCount)((*(nxt2)).__ref()));
		#line 580 "FirstProgram.adv"
		nxt.andThen([&](const auto& value) FORCE_INLINE_LAMBDA_CLANG FORCE_INLINE_LAMBDA { ADV_EXPRESSION_BODY(ADV_UFCS(Reset)(value.__ref())); });
		#line 581 "FirstProgram.adv"
		print(ADV_UFCS(PrintInterface)((*(nxt2)).__ref(), CppAdvance::i32(123)));
		#line 582 "FirstProgram.adv"
		print(ADV_UPCS(Name)((*(nxt)).__ref()));
		#line 583 "FirstProgram.adv"
		print(CppAdvance::usize(sizeof (__Class_ConcreteVectorClass)));
		#line 585 "FirstProgram.adv"
		print(ADV_UFCS(GetStrongReferenceCount)((*(nxt2)).__ref()));
		#line 587 "FirstProgram.adv"
		DayOfWeek day = DayOfWeek::Monday; 
		#line 588 "FirstProgram.adv"
		day = decltype(day)::Wednesday;
		#line 589 "FirstProgram.adv"
		print(ADV_UPCS(Value)(day.__ref()));
		#line 590 "FirstProgram.adv"
		ComplexVariant var = ComplexVariant::Value2; 
		#line 591 "FirstProgram.adv"
		var = decltype(var)::Value3;
		#line 592 "FirstProgram.adv"
		print(CppAdvance::Str{u"Value3 is:"});
		#line 593 "FirstProgram.adv"
		print(ADV_UPCS(i)(var.__ref()));
		#line 594 "FirstProgram.adv"
		print(ADV_UPCS(f)(var.__ref()));
		#line 595 "FirstProgram.adv"
		print(ADV_UPCS(s)(var.__ref()));
		#line 596 "FirstProgram.adv"
		ADV_UFCS(printVariant)(var.__ref());
		#line 597 "FirstProgram.adv"
		print(ADV_UPCS(Count123)(var.__ref()));
		#line 598 "FirstProgram.adv"
		print(ADV_USPCS(Count10, ComplexVariant)());
		#line 599 "FirstProgram.adv"
		print(CppAdvance::Str{u"Values:"});
		#line 600 "FirstProgram.adv"
		for (const auto& val : ADV_USFCS((ComplexVariant), GetValues)()) 
		{
			#line 601 "FirstProgram.adv"
			print(ADV_UPCS(s)(val.__ref()));
		}
		#line 603 "FirstProgram.adv"
		print(ADV_UFCS(GetStrongReferenceCount)(var.__ref()));
		#line 604 "FirstProgram.adv"
		CppAdvance::ObjectRef o = var; 
		#line 605 "FirstProgram.adv"
		CppAdvance::Nullable<CppAdvance::ObjectRef> on = var; 
		#line 606 "FirstProgram.adv"
		print(ADV_UPCS(Value)(day.__ref()));
	}
	#line 608 "FirstProgram.adv"
	print(ADV_UFCS(GetStrongReferenceCount)((*(nxt)).__ref()));
	#line 609 "FirstProgram.adv"
	print(ADV_UPCS(x)(ADV_UPCS(x)(ADV_USFCS((Test1::Test2::TestClass), makeTestClass)(CppAdvance::i32(3), CppAdvance::f32(3.14f)).__ref()).__ref()));
}


#line 487 "FirstProgram.adv"
template<class T> inline auto operator*(__extension_484_T<T> const& __this LIFETIMEBOUND, CppAdvance::In<CppAdvance::f32> f)  -> const CppAdvance::f32
{
	#line 487 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(f * CppAdvance::i32(10)); 
}

#line 489 "FirstProgram.adv"
template<class T> inline auto PrintInterface(__extension_484_T<T> const& __this LIFETIMEBOUND, CppAdvance::i32 x)  -> const CppAdvance::i32
{
	#line 490 "FirstProgram.adv"
	print(CppAdvance::Str{u"PrintInterface Begin"});
	#line 491 "FirstProgram.adv"
	print(ADV_UPCS(Name)(__this.__ref()));
	#line 492 "FirstProgram.adv"
	print(x);
	#line 493 "FirstProgram.adv"
	print(CppAdvance::Str{u"PrintInterface End"});
	#line 494 "FirstProgram.adv"
	return x * CppAdvance::i32(11);
}

#line 497 "FirstProgram.adv"
template<class T> inline const CppAdvance::f32 getAt(__extension_484_T<T> const& __this LIFETIMEBOUND, CppAdvance::f32 r, CppAdvance::f32 g, CppAdvance::f32 b)
{
	#line 497 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(r + g + b); 
}
#line 499 "FirstProgram.adv"
template<class T> inline auto __construct_(CppAdvance::ConstructorProxy<__extension_484_T<T>> __ctordata, CppAdvance::i32 x, CppAdvance::Str txt)  -> decltype(auto)
{
	#line 500 "FirstProgram.adv"
	auto __this = new (__ctordata.memory) typename CppAdvance::ConstructorProxy<T>::ConstructingType(x, x, x);
	#line 501 "FirstProgram.adv"
	print(txt);
	return __this;
}

#line 504 "FirstProgram.adv"
template<class T> inline auto __construct_(CppAdvance::ConstructorProxy<__extension_484_T<T>> __ctordata, typename CppAdvance::MemorySpace mem, CppAdvance::i32 x, CppAdvance::Str txt)  -> decltype(auto)
{
	#line 505 "FirstProgram.adv"
	auto __this = new (__ctordata.memory) typename CppAdvance::ConstructorProxy<T>::ConstructingType(x, x, x);
	#line 506 "FirstProgram.adv"
	print(txt);
	return __this;
}

#line 485 "FirstProgram.adv"
template<class T> inline auto getAsString(__extension_484_T<T> const& __this ) -> const CppAdvance::Str
{
	#line 485 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(CppAdvance::Str{u"AsString"}); 
}
