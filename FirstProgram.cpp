#include "FirstProgram.h"

#line 530 "FirstProgram.adv"
template<class T> using __extension_530_T = T;
#line 533 "FirstProgram.adv"
template<class T> inline auto operator*(__extension_530_T<T> const& __this LIFETIMEBOUND, CppAdvance::In<CppAdvance::f32> f)  -> const CppAdvance::f32;
#line 535 "FirstProgram.adv"
template<class T> inline auto PrintInterface(__extension_530_T<T> const& __this LIFETIMEBOUND, CppAdvance::i32 x)  -> const CppAdvance::i32;
#line 543 "FirstProgram.adv"
template<class T> inline const CppAdvance::f32 getAt(__extension_530_T<T> const& __this LIFETIMEBOUND, CppAdvance::f32 r, CppAdvance::f32 g, CppAdvance::f32 b);
#line 543 "FirstProgram.adv"
template<class T> inline const CppAdvance::f32 _operator_subscript(__extension_530_T<T> const& __this LIFETIMEBOUND, CppAdvance::f32 r, CppAdvance::f32 g, CppAdvance::f32 b) { return getAt(__this, r, g, b); }
#line 545 "FirstProgram.adv"
template<class T> inline auto __construct_(CppAdvance::ConstructorProxy<__extension_530_T<T>> __ctordata, CppAdvance::i32 x, CppAdvance::Str txt)  -> decltype(auto);
#line 550 "FirstProgram.adv"
template<class T> inline auto __construct_(CppAdvance::ConstructorProxy<__extension_530_T<T>> __ctordata, typename CppAdvance::MemorySpace mem, CppAdvance::i32 x, CppAdvance::Str txt)  -> decltype(auto);
#line 531 "FirstProgram.adv"
template<class T> inline auto getAsString(__extension_530_T<T> const& __this ) -> const CppAdvance::Str;

#line 566 "FirstProgram.adv"
auto main(CppAdvance::i32 iparam, CppAdvance::In<CppAdvance::f64> jparam = CppAdvance::f64(3.5))  -> const int;
#line 652 "FirstProgram.adv"
inline constexpr CppAdvance::usize PRIVATE_CONSTANT = CppAdvance::usize(34U);
#line 2 "FirstProgram.adv"
volatile CppAdvance::Unsafe::__VolatileRawPtr<const CppAdvance::char16> globalVar{};
#line 3 "FirstProgram.adv"
extern const CppAdvance::Unsafe::__RawPtr<CppAdvance::i32> globalVar1 = nullptr;
#line 653 "FirstProgram.adv"
static CppAdvance::i32 globalVar2 = CppAdvance::i32(8);
#line 654 "FirstProgram.adv"
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
#line 475 "FirstProgram.adv"
__Class_ComplexVariant::__Property_Count10<> __Class_ComplexVariant::Count10;
#line 475 "FirstProgram.adv"
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



#line 566 "FirstProgram.adv"
auto main(CppAdvance::i32 iparam, CppAdvance::In<CppAdvance::f64> jparam)  -> const int
{
	#line 611 "FirstProgram.adv"
	CppAdvance::Nullable<IInterface> nxtm = CppAdvance::New<ConcreteVectorClass>(CppAdvance::i32(11), CppAdvance::i32(12), CppAdvance::i32(13)); 
	#line 612 "FirstProgram.adv"
	CppAdvance::Nullable<IInterface> nxt = nxtm; 
	#line 614 "FirstProgram.adv"
	{
		#line 615 "FirstProgram.adv"
		#line 615 "FirstProgram.adv"
		CppAdvance::Stackalloc<ConcreteVectorClass> __obj_615_33(CppAdvance::i32(10), CppAdvance::Str{u"123455555555"}); CppAdvance::InitStackObject((CppAdvance::Object*)__obj_615_33.obj);
		#line 615 "FirstProgram.adv"
		CppAdvance::Nullable<VectorClass> nxt2 = __obj_615_33; 
		#line 616 "FirstProgram.adv"
		Vector3 vec = CppAdvance::New<Vector3>(CppAdvance::i32(12), CppAdvance::Str{u"12344444444444"}); 
		#line 617 "FirstProgram.adv"
		print(ADV_UFCS(GetStrongReferenceCount)((*(nxt2)).__ref()));
		#line 618 "FirstProgram.adv"
		print(ADV_UFCS(GetStrongReferenceCount)((*(nxt)).__ref()));
		#line 619 "FirstProgram.adv"
		print(ADV_UFCS(GetStrongReferenceCount)((*(nxt2)).__ref()));
		#line 620 "FirstProgram.adv"
		print(ADV_UFCS(_operator_subscript)((*(nxt)).__ref(), CppAdvance::i32(2)));
		#line 621 "FirstProgram.adv"
		typename IInterface::SomeInt xx = ADV_USPCS(VERSION, IInterface)(); 
		#line 622 "FirstProgram.adv"
		print(xx);
		#line 624 "FirstProgram.adv"
		print(ADV_UFCS(GetStrongReferenceCount)((*(nxt2)).__ref()));
		#line 626 "FirstProgram.adv"
		nxt.andThen([&](const auto& value) FORCE_INLINE_LAMBDA_CLANG FORCE_INLINE_LAMBDA { ADV_EXPRESSION_BODY(ADV_UFCS(Reset)(value.__ref())); });
		#line 627 "FirstProgram.adv"
		print(ADV_UFCS(PrintInterface)((*(nxt2)).__ref(), CppAdvance::i32(123)));
		#line 628 "FirstProgram.adv"
		print(ADV_UPCS(Name)((*(nxt)).__ref()));
		#line 629 "FirstProgram.adv"
		print(CppAdvance::usize(sizeof (__Class_ConcreteVectorClass)));
		#line 631 "FirstProgram.adv"
		print(ADV_UFCS(GetStrongReferenceCount)((*(nxt2)).__ref()));
		#line 633 "FirstProgram.adv"
		RawUnion ru = CppAdvance::f32(3.14f); 
		#line 634 "FirstProgram.adv"
		{	using namespace CppAdvance::Unsafe;	using namespace __Unsafe;	using namespace __FirstProgram_Protected__Unsafe;	CppAdvance::UnsafeContextGuard __unsafe_context_guard634{};
			#line 635 "FirstProgram.adv"
			print(ADV_UPCS(F)(ru.__ref()));
			#line 636 "FirstProgram.adv"
			print(ADV_UFCS(GetMagicNumber)(ru.__ref(), (*(nxt2))));
		}
		#line 638 "FirstProgram.adv"
		ru = CppAdvance::Str{u"abc"};
		#line 639 "FirstProgram.adv"
		{	using namespace CppAdvance::Unsafe;	using namespace __Unsafe;	using namespace __FirstProgram_Protected__Unsafe;	CppAdvance::UnsafeContextGuard __unsafe_context_guard639{};
			#line 640 "FirstProgram.adv"
			print(ADV_UPCS(S)(ru.__ref()));
		}
		#line 643 "FirstProgram.adv"
		CppAdvance::ObjectRef o = ru; 
		#line 644 "FirstProgram.adv"
		CppAdvance::Nullable<CppAdvance::ObjectRef> on = ru; 
	}
	#line 647 "FirstProgram.adv"
	print(ADV_UFCS(GetStrongReferenceCount)((*(nxt)).__ref()));
	#line 648 "FirstProgram.adv"
	print(ADV_UPCS(x)(ADV_UPCS(x)(ADV_USFCS((Test1::Test2::TestClass), makeTestClass)(CppAdvance::i32(3), CppAdvance::f32(3.14f)).__ref()).__ref()));
}


#line 533 "FirstProgram.adv"
template<class T> inline auto operator*(__extension_530_T<T> const& __this LIFETIMEBOUND, CppAdvance::In<CppAdvance::f32> f)  -> const CppAdvance::f32
{
	#line 533 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(f * CppAdvance::i32(10)); 
}

#line 535 "FirstProgram.adv"
template<class T> inline auto PrintInterface(__extension_530_T<T> const& __this LIFETIMEBOUND, CppAdvance::i32 x)  -> const CppAdvance::i32
{
	#line 536 "FirstProgram.adv"
	print(CppAdvance::Str{u"PrintInterface Begin"});
	#line 537 "FirstProgram.adv"
	print(ADV_UPCS(Name)(__this.__ref()));
	#line 538 "FirstProgram.adv"
	print(x);
	#line 539 "FirstProgram.adv"
	print(CppAdvance::Str{u"PrintInterface End"});
	#line 540 "FirstProgram.adv"
	return x * CppAdvance::i32(11);
}

#line 543 "FirstProgram.adv"
template<class T> inline const CppAdvance::f32 getAt(__extension_530_T<T> const& __this LIFETIMEBOUND, CppAdvance::f32 r, CppAdvance::f32 g, CppAdvance::f32 b)
{
	#line 543 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(r + g + b); 
}
#line 545 "FirstProgram.adv"
template<class T> inline auto __construct_(CppAdvance::ConstructorProxy<__extension_530_T<T>> __ctordata, CppAdvance::i32 x, CppAdvance::Str txt)  -> decltype(auto)
{
	#line 546 "FirstProgram.adv"
	auto __this = new (__ctordata.memory) typename CppAdvance::ConstructorProxy<T>::ConstructingType(x, x, x);
	#line 547 "FirstProgram.adv"
	print(txt);
	return __this;
}

#line 550 "FirstProgram.adv"
template<class T> inline auto __construct_(CppAdvance::ConstructorProxy<__extension_530_T<T>> __ctordata, typename CppAdvance::MemorySpace mem, CppAdvance::i32 x, CppAdvance::Str txt)  -> decltype(auto)
{
	#line 551 "FirstProgram.adv"
	auto __this = new (__ctordata.memory) typename CppAdvance::ConstructorProxy<T>::ConstructingType(x, x, x);
	#line 552 "FirstProgram.adv"
	print(txt);
	return __this;
}

#line 531 "FirstProgram.adv"
template<class T> inline auto getAsString(__extension_530_T<T> const& __this ) -> const CppAdvance::Str
{
	#line 531 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(CppAdvance::Str{u"AsString"}); 
}
#line 9999 "FirstProgram.adv"

