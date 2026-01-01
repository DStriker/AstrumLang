#include "FirstProgram.h"

#line 564 "FirstProgram.adv"
template<class T> using __extension_564_T = T;
#line 567 "FirstProgram.adv"
template<class T> inline auto operator*(__extension_564_T<T> const& __this LIFETIMEBOUND, CppAdvance::In<CppAdvance::f32> f)  -> const CppAdvance::f32;
#line 569 "FirstProgram.adv"
template<class T> inline auto PrintInterface(__extension_564_T<T> const& __this LIFETIMEBOUND, CppAdvance::i32 x)  -> const CppAdvance::i32;
#line 577 "FirstProgram.adv"
template<class T> inline const CppAdvance::f32 getAt(__extension_564_T<T> const& __this LIFETIMEBOUND, CppAdvance::f32 r, CppAdvance::f32 g, CppAdvance::f32 b);
#line 577 "FirstProgram.adv"
template<class T> inline const CppAdvance::f32 _operator_subscript(__extension_564_T<T> const& __this LIFETIMEBOUND, CppAdvance::f32 r, CppAdvance::f32 g, CppAdvance::f32 b) { return getAt(__this, r, g, b); }
#line 579 "FirstProgram.adv"
template<class T> inline auto __construct_(CppAdvance::ConstructorProxy<__extension_564_T<T>> __ctordata, CppAdvance::i32 x, CppAdvance::Str txt)  -> decltype(auto);
#line 584 "FirstProgram.adv"
template<class T> inline auto __construct_(CppAdvance::ConstructorProxy<__extension_564_T<T>> __ctordata, typename CppAdvance::MemorySpace mem, CppAdvance::i32 x, CppAdvance::Str txt)  -> decltype(auto);
#line 565 "FirstProgram.adv"
template<class T> inline auto getAsString(__extension_564_T<T> const& __this ) -> const CppAdvance::Str;

#line 600 "FirstProgram.adv"
auto main(CppAdvance::i32 iparam, CppAdvance::In<CppAdvance::f64> jparam = CppAdvance::f64(3.5))  -> const int;
#line 687 "FirstProgram.adv"
inline constexpr CppAdvance::usize PRIVATE_CONSTANT = CppAdvance::usize(34U);
#line 2 "FirstProgram.adv"
volatile CppAdvance::Unsafe::__VolatileRawPtr<const CppAdvance::char16> globalVar{};
#line 3 "FirstProgram.adv"
extern const CppAdvance::Unsafe::__RawPtr<CppAdvance::i32> globalVar1 = nullptr;
#line 688 "FirstProgram.adv"
static CppAdvance::i32 globalVar2 = CppAdvance::i32(8);
#line 689 "FirstProgram.adv"
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
#line 494 "FirstProgram.adv"
Media::__Property_Count10<> Media::Count10;












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









#line 600 "FirstProgram.adv"
auto main(CppAdvance::i32 iparam, CppAdvance::In<CppAdvance::f64> jparam)  -> const int
{
	#line 645 "FirstProgram.adv"
	CppAdvance::Nullable<IInterface> nxtm = CppAdvance::New<ConcreteVectorClass>(CppAdvance::i32(11), CppAdvance::i32(12), CppAdvance::i32(13)); 
	#line 646 "FirstProgram.adv"
	CppAdvance::Nullable<IInterface> nxt = nxtm; 
	#line 648 "FirstProgram.adv"
	{
		#line 649 "FirstProgram.adv"
		#line 649 "FirstProgram.adv"
		CppAdvance::Stackalloc<ConcreteVectorClass> __obj_649_33(CppAdvance::i32(10), CppAdvance::Str{u"123455555555"}); CppAdvance::InitStackObject((CppAdvance::Object*)__obj_649_33.obj);
		#line 649 "FirstProgram.adv"
		CppAdvance::Nullable<VectorClass> nxt2 = __obj_649_33; 
		#line 650 "FirstProgram.adv"
		Vector3 vec = CppAdvance::New<Vector3>(CppAdvance::i32(12), CppAdvance::Str{u"12344444444444"}); 
		#line 651 "FirstProgram.adv"
		print(ADV_UFCS(GetStrongReferenceCount)((*(nxt2)).__ref()));
		#line 652 "FirstProgram.adv"
		print(ADV_UFCS(GetStrongReferenceCount)((*(nxt)).__ref()));
		#line 653 "FirstProgram.adv"
		print(ADV_UFCS(GetStrongReferenceCount)((*(nxt2)).__ref()));
		#line 654 "FirstProgram.adv"
		print(ADV_UFCS(_operator_subscript)((*(nxt)).__ref(), CppAdvance::i32(2)));
		#line 655 "FirstProgram.adv"
		typename IInterface::SomeInt xx = ADV_USPCS(VERSION, IInterface)(); 
		#line 656 "FirstProgram.adv"
		print(xx);
		#line 658 "FirstProgram.adv"
		print(ADV_UFCS(GetStrongReferenceCount)((*(nxt2)).__ref()));
		#line 660 "FirstProgram.adv"
		nxt.andThen([&](const auto& value) FORCE_INLINE_LAMBDA_CLANG FORCE_INLINE_LAMBDA { ADV_EXPRESSION_BODY(ADV_UFCS(Reset)(value.__ref())); });
		#line 661 "FirstProgram.adv"
		print(ADV_UFCS(PrintInterface)((*(nxt2)).__ref(), CppAdvance::i32(123)));
		#line 662 "FirstProgram.adv"
		print(ADV_UPCS(Name)((*(nxt)).__ref()));
		#line 663 "FirstProgram.adv"
		print(CppAdvance::usize(sizeof (__Class_ConcreteVectorClass)));
		#line 665 "FirstProgram.adv"
		print(ADV_UFCS(GetStrongReferenceCount)((*(nxt2)).__ref()));
		#line 667 "FirstProgram.adv"
		Media m = Media::None; 
		#line 668 "FirstProgram.adv"
		m = CppAdvance::Str{u"abcdef"};
		#line 669 "FirstProgram.adv"
		m = std::make_tuple(CppAdvance::i32(1), CppAdvance::i32(2), CppAdvance::i32(3));
		#line 670 "FirstProgram.adv"
		m = decltype(m)::Video(CppAdvance::Str{u"123"}, CppAdvance::i32(5), CppAdvance::f32(6.17f), CppAdvance::Str{u"def"});
		#line 671 "FirstProgram.adv"
		using NumOrStr = Union3<CppAdvance::i32, CppAdvance::f32, CppAdvance::Str>;
		#line 672 "FirstProgram.adv"
		Union3<CppAdvance::i32, CppAdvance::f32, CppAdvance::Str> mu = CppAdvance::i32(5); 
		#line 673 "FirstProgram.adv"
		mu = CppAdvance::Str{u"abc"};
		#line 674 "FirstProgram.adv"
		mu = CppAdvance::i32(123);
		#line 675 "FirstProgram.adv"
		mu = CppAdvance::Str{u"def"};
		#line 676 "FirstProgram.adv"
		print(ADV_UFCS(GetType3)(mu.__ref()));
		#line 678 "FirstProgram.adv"
		CppAdvance::ObjectRef o = m; 
		#line 679 "FirstProgram.adv"
		CppAdvance::Nullable<CppAdvance::ObjectRef> on = m; 
	}
	#line 682 "FirstProgram.adv"
	print(ADV_UFCS(GetStrongReferenceCount)((*(nxt)).__ref()));
	#line 683 "FirstProgram.adv"
	print(ADV_UPCS(x)(ADV_UPCS(x)(ADV_USFCS((Test1::Test2::TestClass), makeTestClass)(CppAdvance::i32(3), CppAdvance::f32(3.14f)).__ref()).__ref()));
}


#line 567 "FirstProgram.adv"
template<class T> inline auto operator*(__extension_564_T<T> const& __this LIFETIMEBOUND, CppAdvance::In<CppAdvance::f32> f)  -> const CppAdvance::f32
{
	#line 567 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(f * CppAdvance::i32(10)); 
}

#line 569 "FirstProgram.adv"
template<class T> inline auto PrintInterface(__extension_564_T<T> const& __this LIFETIMEBOUND, CppAdvance::i32 x)  -> const CppAdvance::i32
{
	#line 570 "FirstProgram.adv"
	print(CppAdvance::Str{u"PrintInterface Begin"});
	#line 571 "FirstProgram.adv"
	print(ADV_UPCS(Name)(__this.__ref()));
	#line 572 "FirstProgram.adv"
	print(x);
	#line 573 "FirstProgram.adv"
	print(CppAdvance::Str{u"PrintInterface End"});
	#line 574 "FirstProgram.adv"
	return x * CppAdvance::i32(11);
}

#line 577 "FirstProgram.adv"
template<class T> inline const CppAdvance::f32 getAt(__extension_564_T<T> const& __this LIFETIMEBOUND, CppAdvance::f32 r, CppAdvance::f32 g, CppAdvance::f32 b)
{
	#line 577 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(r + g + b); 
}
#line 579 "FirstProgram.adv"
template<class T> inline auto __construct_(CppAdvance::ConstructorProxy<__extension_564_T<T>> __ctordata, CppAdvance::i32 x, CppAdvance::Str txt)  -> decltype(auto)
{
	#line 580 "FirstProgram.adv"
	auto __this = new (__ctordata.memory) typename CppAdvance::ConstructorProxy<T>::ConstructingType(x, x, x);
	#line 581 "FirstProgram.adv"
	print(txt);
	return __this;
}

#line 584 "FirstProgram.adv"
template<class T> inline auto __construct_(CppAdvance::ConstructorProxy<__extension_564_T<T>> __ctordata, typename CppAdvance::MemorySpace mem, CppAdvance::i32 x, CppAdvance::Str txt)  -> decltype(auto)
{
	#line 585 "FirstProgram.adv"
	auto __this = new (__ctordata.memory) typename CppAdvance::ConstructorProxy<T>::ConstructingType(x, x, x);
	#line 586 "FirstProgram.adv"
	print(txt);
	return __this;
}

#line 565 "FirstProgram.adv"
template<class T> inline auto getAsString(__extension_564_T<T> const& __this ) -> const CppAdvance::Str
{
	#line 565 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(CppAdvance::Str{u"AsString"}); 
}
#line 9999 "FirstProgram.adv"

