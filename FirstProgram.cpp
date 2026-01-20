#include "FirstProgram.h"

#line 574 "FirstProgram.adv"
template<class T> using __extension_574_T = T;
#line 577 "FirstProgram.adv"
template<class T> inline auto operator*(__extension_574_T<T> const& __this LIFETIMEBOUND, CppAdvance::In<CppAdvance::f32> f)  -> const CppAdvance::f32;
#line 579 "FirstProgram.adv"
template<class T> inline auto PrintInterface(__extension_574_T<T> const& __this LIFETIMEBOUND, CppAdvance::i32 x)  -> const CppAdvance::i32;
#line 587 "FirstProgram.adv"
template<class T> inline const CppAdvance::f32 getAt(__extension_574_T<T> const& __this LIFETIMEBOUND, CppAdvance::f32 r, CppAdvance::f32 g, CppAdvance::f32 b);
#line 587 "FirstProgram.adv"
template<class T> inline const CppAdvance::f32 _operator_subscript(__extension_574_T<T> const& __this LIFETIMEBOUND, CppAdvance::f32 r, CppAdvance::f32 g, CppAdvance::f32 b) { return getAt(__this, r, g, b); }
#line 589 "FirstProgram.adv"
template<class T> inline auto __construct_(CppAdvance::ConstructorProxy<__extension_574_T<T>> __ctordata, CppAdvance::i32 x, CppAdvance::Str txt)  -> decltype(auto);
#line 594 "FirstProgram.adv"
template<class T> inline auto __construct_(CppAdvance::ConstructorProxy<__extension_574_T<T>> __ctordata, typename CppAdvance::MemorySpace mem, CppAdvance::i32 x, CppAdvance::Str txt)  -> decltype(auto);
#line 575 "FirstProgram.adv"
template<class T> inline auto getAsString(__extension_574_T<T> const& __this ) -> const CppAdvance::Str;

#line 640 "FirstProgram.adv"
extern "C" auto __Astrum_Main()  -> CppAdvance::i32;
#line 782 "FirstProgram.adv"
inline constexpr CppAdvance::usize PRIVATE_CONSTANT = CppAdvance::usize(34U);
#line 2 "FirstProgram.adv"
volatile CppAdvance::Unsafe::__VolatileRawPtr<const CppAdvance::char16> globalVar{};
#line 3 "FirstProgram.adv"
extern const CppAdvance::Unsafe::__RawPtr<CppAdvance::i32> globalVar1 = nullptr;
#line 783 "FirstProgram.adv"
static CppAdvance::i32 globalVar2 = CppAdvance::i32(8);
#line 784 "FirstProgram.adv"
static const CppAdvance::i32 globalVar3 = CppAdvance::i32(456);
#line 92 "FirstProgram.adv"
thread_local CppAdvance::i32 Vector3::Count2 = CppAdvance::i32(123);
#line 94 "FirstProgram.adv"
const Vector3 Vector3::ZERO = Vector3{CppAdvance::i32(0), CppAdvance::i32(0), CppAdvance::i32(0)};
#line 214 "FirstProgram.adv"
CppAdvance::i32 __Class_VectorClass::Count2 = CppAdvance::i32(123);
#line 216 "FirstProgram.adv"
const Vector3 __Class_VectorClass::ZERO = Vector3{CppAdvance::i32(0), CppAdvance::i32(0), CppAdvance::i32(0)};
#line 77 "FirstProgram.adv"
CppAdvance::i32 Vector3::p_Count = CppAdvance::i32(1);
#line 77 "FirstProgram.adv"
Vector3::__Property_Count<> Vector3::Count;
#line 214 "FirstProgram.adv"
__Class_VectorClass::__self::__Property_Count2<> __Class_VectorClass::__self::Count2;
#line 216 "FirstProgram.adv"
__Class_VectorClass::__self::__Property_ZERO<> __Class_VectorClass::__self::ZERO;
#line 485 "FirstProgram.adv"
__Class_ComplexVariant::__Property_Count10<> __Class_ComplexVariant::Count10;
#line 485 "FirstProgram.adv"
__Class_ComplexVariant::__self::__Property_Count10<> __Class_ComplexVariant::__self::Count10;
#line 504 "FirstProgram.adv"
Media::__Property_Count10<> Media::Count10;














#line 463 "FirstProgram.adv"
const __Class_ComplexVariant::__self __Class_ComplexVariant::Value1 = __Class_ComplexVariant::__self{ new (::operator new(sizeof(__Class_ComplexVariant))) __Class_ComplexVariant(CppAdvance::i32(1), CppAdvance::f32(2.13f), CppAdvance::Str{u"Value1"}) };
#line 463 "FirstProgram.adv"
__Class_ComplexVariant::__self::__Property_Value1<> __Class_ComplexVariant::__self::Value1;
#line 464 "FirstProgram.adv"
const __Class_ComplexVariant::__self __Class_ComplexVariant::Value2 = __Class_ComplexVariant::__self{ new (::operator new(sizeof(__Class_ComplexVariant))) __Class_ComplexVariant(CppAdvance::i32(2), CppAdvance::f32(4.13f), CppAdvance::Str{u"Value2"}) };
#line 464 "FirstProgram.adv"
__Class_ComplexVariant::__self::__Property_Value2<> __Class_ComplexVariant::__self::Value2;
#line 465 "FirstProgram.adv"
const __Class_ComplexVariant::__self __Class_ComplexVariant::Value3 = __Class_ComplexVariant::__self{ new (::operator new(sizeof(__Class_ComplexVariant))) __Class_ComplexVariant(CppAdvance::i32(3), CppAdvance::f32(6.13f), CppAdvance::Str{u"Value3"}) };
#line 465 "FirstProgram.adv"
__Class_ComplexVariant::__self::__Property_Value3<> __Class_ComplexVariant::__self::Value3;
#line 466 "FirstProgram.adv"
const __Class_ComplexVariant::__self __Class_ComplexVariant::Value4 = __Class_ComplexVariant::__self{ new (::operator new(sizeof(__Class_ComplexVariant))) __Class_ComplexVariant(CppAdvance::i32(4), CppAdvance::f32(8.13f), CppAdvance::Str{u"Value4"}) };
#line 466 "FirstProgram.adv"
__Class_ComplexVariant::__self::__Property_Value4<> __Class_ComplexVariant::__self::Value4;
#line 462 "FirstProgram.adv"
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
	if (value > CppAdvance::i32(10)) [[likely]] {
		#line 85 "FirstProgram.adv"
		p_Count = value / CppAdvance::i32(10);
	} else {
		#line 86 "FirstProgram.adv"
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





#line 347 "FirstProgram.adv"
auto __Class_ConcreteVectorClass::setCount(const CppAdvance::i32& value) -> __selfClass& 
{
	#line 348 "FirstProgram.adv"
	print(CppAdvance::Str{u"Write"});
	#line 349 "FirstProgram.adv"
	if (value > CppAdvance::i32(10)) {
		#line 349 "FirstProgram.adv"
		p_Count = value / CppAdvance::i32(10);
	} else {
		#line 350 "FirstProgram.adv"
		p_Count = value;
	}
	return *this;
}
#line 343 "FirstProgram.adv"
auto __Class_ConcreteVectorClass::getCount() const  -> CppAdvance::i32 
{
	#line 344 "FirstProgram.adv"
	print(CppAdvance::Str{u"Read"});
	#line 345 "FirstProgram.adv"
	return p_Count * CppAdvance::i32(10);
}






#line 459 "FirstProgram.adv"
inline auto Text::getShortString() const  -> CppAdvance::Str 
{
	#line 459 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(Value); 
}













ADV_ENTRY_POINT
#line 640 "FirstProgram.adv"
extern "C" auto __Astrum_Main()  -> CppAdvance::i32
{
	#line 685 "FirstProgram.adv"
	CppAdvance::Nullable<IInterface> nxtm = CppAdvance::New<ConcreteVectorClass>(CppAdvance::i32(11), CppAdvance::i32(12), CppAdvance::i32(13)); 
	#line 686 "FirstProgram.adv"
	CppAdvance::Nullable<IInterface> nxt = nxtm; 
	#line 688 "FirstProgram.adv"
	{
		#line 689 "FirstProgram.adv"
		#line 689 "FirstProgram.adv"
		CppAdvance::Stackalloc<ConcreteVectorClass> __obj_689_33(CppAdvance::i32(10), CppAdvance::Str{u"123455555555"}); CppAdvance::InitStackObject((CppAdvance::Object*)__obj_689_33.obj);
		#line 689 "FirstProgram.adv"
		CppAdvance::Nullable<VectorClass> nxt2 = __obj_689_33; 
		#line 690 "FirstProgram.adv"
		Vector3 vec = CppAdvance::New<Vector3>(CppAdvance::i32(12), CppAdvance::Str{u"12344444444444"}); 
		#line 691 "FirstProgram.adv"
		print(ADV_UFCS(GetStrongReferenceCount)((*(nxt2)).__ref()));
		#line 692 "FirstProgram.adv"
		print(ADV_UFCS(GetStrongReferenceCount)((*(nxt)).__ref()));
		#line 693 "FirstProgram.adv"
		print(ADV_UFCS(GetStrongReferenceCount)((*(nxt2)).__ref()));
		#line 694 "FirstProgram.adv"
		print(ADV_UFCS(_operator_subscript)((*(nxt)).__ref(), CppAdvance::i32(2)));
		#line 695 "FirstProgram.adv"
		typename IInterface::SomeInt xx = ADV_USPCS(VERSION, IInterface)(); 
		#line 696 "FirstProgram.adv"
		print(xx);
		#line 698 "FirstProgram.adv"
		print(ADV_UFCS(GetStrongReferenceCount)((*(nxt2)).__ref()));
		#line 700 "FirstProgram.adv"
		nxt.andThen([&](const auto& value) FORCE_INLINE_LAMBDA_CLANG FORCE_INLINE_LAMBDA { ADV_EXPRESSION_BODY(ADV_UFCS(Reset)(value.__ref())); });
		#line 701 "FirstProgram.adv"
		print(ADV_UFCS(PrintInterface)((*(nxt2)).__ref(), CppAdvance::i32(123)));
		#line 702 "FirstProgram.adv"
		print(ADV_UPCS(Name)((*(nxt)).__ref()));
		#line 703 "FirstProgram.adv"
		print(CppAdvance::usize(sizeof (__Class_ConcreteVectorClass)));
		#line 705 "FirstProgram.adv"
		print(ADV_UFCS(GetStrongReferenceCount)((*(nxt2)).__ref()));
		#line 707 "FirstProgram.adv"
		CppAdvance::Nullable<ConcreteVectorClass> cv1 = CppAdvance::New<ConcreteVectorClass>(CppAdvance::i32(1), CppAdvance::f32(2.13f), CppAdvance::i32(3)); 
		#line 708 "FirstProgram.adv"
		ConcreteVectorClass cv2 = (*(cv1)); 
		#line 711 "FirstProgram.adv"
		print(CppAdvance::Cast<true, CppAdvance::i32>((CppAdvance::IdentityEquals(cv1, cv2))));
		#line 712 "FirstProgram.adv"
		print(CppAdvance::Cast<true, CppAdvance::i32>((!CppAdvance::IdentityEquals(cv1, cv2))));
		#line 713 "FirstProgram.adv"
		Union3<Next, CppAdvance::f32, CppAdvance::Str> mu = CppAdvance::New<Next>(CppAdvance::i32(5)); 
		#line 714 "FirstProgram.adv"
		print(ADV_UPCS(i)((CppAdvance::Cast<true, Next>(mu)).__ref()));
		#line 715 "FirstProgram.adv"
		if (const auto cv11 = CppAdvance::Cast<false, Next>(nxt)) {
			#line 717 "FirstProgram.adv"
			print(CppAdvance::Str{u"aaaaaaaaaa"});
		}
		#line 719 "FirstProgram.adv"
		Media media = Media::Audio(CppAdvance::Str{u"abcd"}, CppAdvance::i32(1), CppAdvance::i32(13)); 
		#line 720 "FirstProgram.adv"
		ImportantOptions opt = { CppAdvance::i32(1), CppAdvance::i32(4), CppAdvance::Str{u"abc"} }; 
		#line 721 "FirstProgram.adv"
		const auto& [ox, oy, oz] = opt;
		#line 722 "FirstProgram.adv"
		print(ox);
		#line 723 "FirstProgram.adv"
		print(oy);
		#line 724 "FirstProgram.adv"
		print(oz);
		#line 725 "FirstProgram.adv"
		ADV_ASSERT((ox == CppAdvance::i32(1)), u"ox==1");
		#line 727 "FirstProgram.adv"
		static_assert(CppAdvance::usize(sizeof(CppAdvance::i32)) == CppAdvance::i32(4), "i32 must be 4 bytes");
		#line 729 "FirstProgram.adv"
		const auto& [x, y, z] = vec;
		#line 740 "FirstProgram.adv"
		ADV_UFCS(_operator_subscript)(vec.__ref(), CppAdvance::i32(1)) = CppAdvance::i32(5);
		#line 741 "FirstProgram.adv"
		print(CppAdvance::Cast<true, CppAdvance::f32>((*(cv1))));
		#line 742 "FirstProgram.adv"
		print(CppAdvance::Cast<true, CppAdvance::i32>(((CppAdvance::Is((*(cv1)), (cv2))))));
		#line 743 "FirstProgram.adv"
		auto func = [] (const auto x) { ADV_EXPRESSION_BODY(x * x); }; 
		#line 744 "FirstProgram.adv"
		print(func(CppAdvance::i32(12)));
		#line 745 "FirstProgram.adv"
		auto nx = CppAdvance::New<Next>(CppAdvance::i32(5)); 
		#line 747 "FirstProgram.adv"
		CppAdvance::LocalFunction<const CppAdvance::i32(CppAdvance::i32)> factorial; factorial = [&] (CppAdvance::i32 x) -> const CppAdvance::i32 
		{
			#line 748 "FirstProgram.adv"
			ADV_EXPRESSION_BODY(x == CppAdvance::i32(0) ? CppAdvance::i32(1) : x * factorial(x - CppAdvance::i32(1))); return 0;
		};
		#line 749 "FirstProgram.adv"
		using SimpleAction = CppAdvance::FunctionRef<void()>;
		#line 751 "FirstProgram.adv"
		CppAdvance::FunctionRef<CppAdvance::i32 (CppAdvance::i32)> action1 = testInt; 
		#line 752 "FirstProgram.adv"
		auto iii = CppAdvance::i32(20); 
		#line 753 "FirstProgram.adv"
		print(action1(iii));
		#line 754 "FirstProgram.adv"
		action1 = ADV_METHOD_BINDING_UNOWNED(TestInt, (nx));
		#line 755 "FirstProgram.adv"
		print(action1(iii));
		#line 756 "FirstProgram.adv"
		CppAdvance::Nullable<Action<>> action2{}; 
		#line 757 "FirstProgram.adv"
		action1 = [] (const auto x) { ADV_EXPRESSION_BODY(x * x); };
		#line 758 "FirstProgram.adv"
		print(action1(CppAdvance::i32(20)));
		#line 759 "FirstProgram.adv"
		CppAdvance::Nullable<SimpleAction> action3 = ADV_METHOD_BINDING_STRONG(printNext, (nx)); 
		#line 760 "FirstProgram.adv"
		action2 = action3;
		#line 761 "FirstProgram.adv"
		action2.andThen([&](const auto& value) FORCE_INLINE_LAMBDA_CLANG FORCE_INLINE_LAMBDA { ADV_EXPRESSION_BODY(ADV_UFCS(Invoke)(value.__ref())); });
		#line 762 "FirstProgram.adv"
		action2.andThen([&](const auto& value) FORCE_INLINE_LAMBDA_CLANG FORCE_INLINE_LAMBDA { ADV_EXPRESSION_BODY(ADV_UFCS(Invoke)(value.__ref())); });
		#line 763 "FirstProgram.adv"
		GenericStruct g{ CppAdvance::i32(5), CppAdvance::f64(5.13), CppAdvance::Str{u"abc"}, false, CppAdvance::i32(6), CppAdvance::f32(2.12f) }; 
		#line 764 "FirstProgram.adv"
		print(vsum(CppAdvance::i32(1), CppAdvance::i32(2), CppAdvance::i32(3), CppAdvance::i32(4), CppAdvance::i32(5), CppAdvance::i32(6)));
		#line 767 "FirstProgram.adv"
		CppAdvance::Nullable<CppAdvance::ObjectRef> on = vec; 
	}
	#line 769 "FirstProgram.adv"
	print(ADV_UFCS(GetStrongReferenceCount)((*(nxt)).__ref()));
	#line 770 "FirstProgram.adv"
	print(ADV_UPCS(x)(ADV_UPCS(x)(ADV_USFCS((Test1::Test2::TestClass), makeTestClass)(CppAdvance::i32(3), CppAdvance::f32(3.14f)).__ref()).__ref()));
	return 0;
}





#line 577 "FirstProgram.adv"
template<class T> inline auto operator*(__extension_574_T<T> const& __this LIFETIMEBOUND, CppAdvance::In<CppAdvance::f32> f)  -> const CppAdvance::f32
{
	#line 577 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(f * CppAdvance::i32(10)); 
}

#line 579 "FirstProgram.adv"
template<class T> inline auto PrintInterface(__extension_574_T<T> const& __this LIFETIMEBOUND, CppAdvance::i32 x)  -> const CppAdvance::i32
{
	#line 580 "FirstProgram.adv"
	print(CppAdvance::Str{u"PrintInterface Begin"});
	#line 581 "FirstProgram.adv"
	print(ADV_UPCS(Name)(__this.__ref()));
	#line 582 "FirstProgram.adv"
	print(x);
	#line 583 "FirstProgram.adv"
	print(CppAdvance::Str{u"PrintInterface End"});
	#line 584 "FirstProgram.adv"
	return x * CppAdvance::i32(11);
}

#line 587 "FirstProgram.adv"
template<class T> inline const CppAdvance::f32 getAt(__extension_574_T<T> const& __this LIFETIMEBOUND, CppAdvance::f32 r, CppAdvance::f32 g, CppAdvance::f32 b)
{
	#line 587 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(r + g + b); 
}
#line 589 "FirstProgram.adv"
template<class T> inline auto __construct_(CppAdvance::ConstructorProxy<__extension_574_T<T>> __ctordata, CppAdvance::i32 x, CppAdvance::Str txt)  -> decltype(auto)
{
	#line 590 "FirstProgram.adv"
	auto __this = new (__ctordata.memory) typename CppAdvance::ConstructorProxy<T>::ConstructingType(x, x, x);
	#line 591 "FirstProgram.adv"
	print(txt);
	return __this;
}

#line 594 "FirstProgram.adv"
template<class T> inline auto __construct_(CppAdvance::ConstructorProxy<__extension_574_T<T>> __ctordata, typename CppAdvance::MemorySpace mem, CppAdvance::i32 x, CppAdvance::Str txt)  -> decltype(auto)
{
	#line 595 "FirstProgram.adv"
	auto __this = new (__ctordata.memory) typename CppAdvance::ConstructorProxy<T>::ConstructingType(x, x, x);
	#line 596 "FirstProgram.adv"
	print(txt);
	return __this;
}

#line 575 "FirstProgram.adv"
template<class T> inline auto getAsString(__extension_574_T<T> const& __this ) -> const CppAdvance::Str
{
	#line 575 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(CppAdvance::Str{u"AsString"}); 
}
#line 9999 "FirstProgram.adv"

