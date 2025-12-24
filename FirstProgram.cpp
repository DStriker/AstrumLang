#include "FirstProgram.h"

#line 450 "FirstProgram.adv"
template<class T> using __extension_450_T = T;
#line 453 "FirstProgram.adv"
template<class T> inline auto operator*(__extension_450_T<T> const& __this LIFETIMEBOUND, CppAdvance::In<CppAdvance::f32> f)  -> const CppAdvance::f32;
#line 455 "FirstProgram.adv"
template<class T> inline auto PrintInterface(__extension_450_T<T> const& __this LIFETIMEBOUND, CppAdvance::i32 x)  -> const CppAdvance::i32;
#line 463 "FirstProgram.adv"
template<class T> inline const CppAdvance::f32 getAt(__extension_450_T<T> const& __this LIFETIMEBOUND, CppAdvance::f32 r, CppAdvance::f32 g, CppAdvance::f32 b);
#line 463 "FirstProgram.adv"
template<class T> inline const CppAdvance::f32 _operator_subscript(__extension_450_T<T> const& __this LIFETIMEBOUND, CppAdvance::f32 r, CppAdvance::f32 g, CppAdvance::f32 b) { return getAt(__this, r, g, b); }
#line 465 "FirstProgram.adv"
template<class T> inline auto __construct_(CppAdvance::ConstructorProxy<__extension_450_T<T>> __ctordata, CppAdvance::i32 x, CppAdvance::Str txt)  -> decltype(auto);
#line 470 "FirstProgram.adv"
template<class T> inline auto __construct_(CppAdvance::ConstructorProxy<__extension_450_T<T>> __ctordata, typename CppAdvance::MemorySpace mem, CppAdvance::i32 x, CppAdvance::Str txt)  -> decltype(auto);
#line 451 "FirstProgram.adv"
template<class T> inline auto getAsString(__extension_450_T<T> const& __this ) -> const CppAdvance::Str;

#line 480 "FirstProgram.adv"
auto main(CppAdvance::i32 iparam, CppAdvance::In<CppAdvance::f64> jparam = CppAdvance::f64(3.5))  -> const int;
#line 571 "FirstProgram.adv"
inline constexpr CppAdvance::usize PRIVATE_CONSTANT = CppAdvance::usize(34U);
#line 2 "FirstProgram.adv"
volatile CppAdvance::Unsafe::__VolatileRawPtr<const CppAdvance::char16> globalVar{};
#line 3 "FirstProgram.adv"
extern const CppAdvance::Unsafe::__RawPtr<CppAdvance::i32> globalVar1 = nullptr;
#line 572 "FirstProgram.adv"
static CppAdvance::i32 globalVar2 = CppAdvance::i32(8);
#line 573 "FirstProgram.adv"
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







#line 480 "FirstProgram.adv"
auto main(CppAdvance::i32 iparam, CppAdvance::In<CppAdvance::f64> jparam)  -> const int
{
	#line 525 "FirstProgram.adv"
	CppAdvance::Nullable<IInterface> nxtm = CppAdvance::New<ConcreteVectorClass>(CppAdvance::i32(11), CppAdvance::i32(12), CppAdvance::i32(13)); 
	#line 526 "FirstProgram.adv"
	CppAdvance::Nullable<IInterface> nxt = nxtm; 
	#line 528 "FirstProgram.adv"
	{
		#line 529 "FirstProgram.adv"
		#line 529 "FirstProgram.adv"
		CppAdvance::Stackalloc<ConcreteVectorClass> __obj_529_33(CppAdvance::i32(10), CppAdvance::Str{u"123455555555"}); CppAdvance::InitStackObject((CppAdvance::Object*)__obj_529_33.obj);
		#line 529 "FirstProgram.adv"
		CppAdvance::Nullable<VectorClass> nxt2 = __obj_529_33; 
		#line 530 "FirstProgram.adv"
		Vector3 vec = CppAdvance::New<Vector3>(CppAdvance::i32(12), CppAdvance::Str{u"12344444444444"}); 
		#line 531 "FirstProgram.adv"
		print(ADV_UPCS(x)(vec.__ref()));
		#line 532 "FirstProgram.adv"
		print(ADV_UPCS(y)(vec.__ref()));
		#line 533 "FirstProgram.adv"
		print(ADV_UPCS(z)(vec.__ref()));
		#line 534 "FirstProgram.adv"
		print(ADV_UFCS(GetStrongReferenceCount)((*(nxt2)).__ref()));
		#line 535 "FirstProgram.adv"
		print(ADV_UFCS(GetStrongReferenceCount)((*(nxt)).__ref()));
		#line 540 "FirstProgram.adv"
		print(ADV_UFCS(GetStrongReferenceCount)((*(nxt2)).__ref()));
		#line 541 "FirstProgram.adv"
		print(ADV_UFCS(_operator_subscript)((*(nxt)).__ref(), CppAdvance::i32(2)));
		#line 542 "FirstProgram.adv"
		typename IInterface::SomeInt xx = IInterface::VERSION; 
		#line 543 "FirstProgram.adv"
		print(xx);
		#line 545 "FirstProgram.adv"
		print(ADV_UFCS(GetStrongReferenceCount)((*(nxt2)).__ref()));
		#line 547 "FirstProgram.adv"
		nxt.andThen([&](const auto& value) FORCE_INLINE_LAMBDA_CLANG FORCE_INLINE_LAMBDA { ADV_EXPRESSION_BODY(ADV_UFCS(Reset)(value.__ref())); });
		#line 548 "FirstProgram.adv"
		print(ADV_UFCS(PrintInterface)((*(nxt2)).__ref(), CppAdvance::i32(123)));
		#line 553 "FirstProgram.adv"
		print(ADV_UPCS(Name)((*(nxt)).__ref()));
		#line 554 "FirstProgram.adv"
		print(CppAdvance::usize(sizeof (__Class_ConcreteVectorClass)));
		#line 556 "FirstProgram.adv"
		print(ADV_UFCS(GetStrongReferenceCount)((*(nxt2)).__ref()));
		#line 557 "FirstProgram.adv"
		auto day = DayOfWeek::Wednesday; 
		#line 558 "FirstProgram.adv"
		day = DayOfWeek::Sunday;
		#line 559 "FirstProgram.adv"
		for (const auto& day : DayOfWeek::GetNames()) 
		{
			#line 560 "FirstProgram.adv"
			print(day);
		}
		#line 562 "FirstProgram.adv"
		CppAdvance::ObjectRef o = day; 
		#line 563 "FirstProgram.adv"
		CppAdvance::Nullable<CppAdvance::ObjectRef> on = day; 
		#line 564 "FirstProgram.adv"
		print(ADV_UPCS(Value)(day.__ref()));
	}
	#line 566 "FirstProgram.adv"
	print(ADV_UFCS(GetStrongReferenceCount)((*(nxt)).__ref()));
	#line 567 "FirstProgram.adv"
	print(ADV_UPCS(x)(ADV_UPCS(x)(Test1::Test2::TestClass::makeTestClass(CppAdvance::i32(3), CppAdvance::f32(3.14f)).__ref()).__ref()));
}


#line 453 "FirstProgram.adv"
template<class T> inline auto operator*(__extension_450_T<T> const& __this LIFETIMEBOUND, CppAdvance::In<CppAdvance::f32> f)  -> const CppAdvance::f32
{
	#line 453 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(f * CppAdvance::i32(10)); 
}

#line 455 "FirstProgram.adv"
template<class T> inline auto PrintInterface(__extension_450_T<T> const& __this LIFETIMEBOUND, CppAdvance::i32 x)  -> const CppAdvance::i32
{
	#line 456 "FirstProgram.adv"
	print(CppAdvance::Str{u"PrintInterface Begin"});
	#line 457 "FirstProgram.adv"
	print(ADV_UPCS(Name)(__this.__ref()));
	#line 458 "FirstProgram.adv"
	print(x);
	#line 459 "FirstProgram.adv"
	print(CppAdvance::Str{u"PrintInterface End"});
	#line 460 "FirstProgram.adv"
	return x * CppAdvance::i32(11);
}

#line 463 "FirstProgram.adv"
template<class T> inline const CppAdvance::f32 getAt(__extension_450_T<T> const& __this LIFETIMEBOUND, CppAdvance::f32 r, CppAdvance::f32 g, CppAdvance::f32 b)
{
	#line 463 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(r + g + b); 
}
#line 465 "FirstProgram.adv"
template<class T> inline auto __construct_(CppAdvance::ConstructorProxy<__extension_450_T<T>> __ctordata, CppAdvance::i32 x, CppAdvance::Str txt)  -> decltype(auto)
{
	#line 466 "FirstProgram.adv"
	auto __this = new (__ctordata.memory) typename CppAdvance::ConstructorProxy<T>::ConstructingType(x, x, x);
	#line 467 "FirstProgram.adv"
	print(txt);
	return __this;
}

#line 470 "FirstProgram.adv"
template<class T> inline auto __construct_(CppAdvance::ConstructorProxy<__extension_450_T<T>> __ctordata, typename CppAdvance::MemorySpace mem, CppAdvance::i32 x, CppAdvance::Str txt)  -> decltype(auto)
{
	#line 471 "FirstProgram.adv"
	auto __this = new (__ctordata.memory) typename CppAdvance::ConstructorProxy<T>::ConstructingType(x, x, x);
	#line 472 "FirstProgram.adv"
	print(txt);
	return __this;
}

#line 451 "FirstProgram.adv"
template<class T> inline auto getAsString(__extension_450_T<T> const& __this ) -> const CppAdvance::Str
{
	#line 451 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(CppAdvance::Str{u"AsString"}); 
}
