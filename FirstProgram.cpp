#include "FirstProgram.h"

namespace MyApp::Main {
#line 563 "FirstProgram.adv"
	template<class T> using __extension_563_T = T;
	#line 566 "FirstProgram.adv"
	template<class T> inline auto operator*(__extension_563_T<T> const& __this LIFETIMEBOUND, CppAdvance::In<CppAdvance::f32> f)  -> const CppAdvance::f32;
	#line 568 "FirstProgram.adv"
	template<class T> inline auto PrintInterface(__extension_563_T<T> const& __this LIFETIMEBOUND, CppAdvance::i32 x)  -> const CppAdvance::i32;
	#line 576 "FirstProgram.adv"
	template<class T> inline const CppAdvance::f32 getAt(__extension_563_T<T> const& __this LIFETIMEBOUND, CppAdvance::f32 r, CppAdvance::f32 g, CppAdvance::f32 b);
	#line 576 "FirstProgram.adv"
	template<class T> inline const CppAdvance::f32 _operator_subscript(__extension_563_T<T> const& __this LIFETIMEBOUND, CppAdvance::f32 r, CppAdvance::f32 g, CppAdvance::f32 b) { return getAt(__this, r, g, b); }
	#line 578 "FirstProgram.adv"
	template<class T> inline auto __construct_(CppAdvance::ConstructorProxy<__extension_563_T<T>> __ctordata, CppAdvance::i32 x, CppAdvance::Str txt)  -> decltype(auto);
	#line 583 "FirstProgram.adv"
	template<class T> inline auto __construct_(CppAdvance::ConstructorProxy<__extension_563_T<T>> __ctordata, typename CppAdvance::MemorySpace mem, CppAdvance::i32 x, CppAdvance::Str txt)  -> decltype(auto);
	#line 564 "FirstProgram.adv"
	template<class T> inline auto getAsString(__extension_563_T<T> const& __this ) -> const CppAdvance::Str;
	
	#line 627 "FirstProgram.adv"
	extern "C" auto __Astrum_Main()  -> CppAdvance::i32;
#line 756 "FirstProgram.adv"
inline constexpr CppAdvance::usize PRIVATE_CONSTANT = CppAdvance::usize(34U);
#line 7 "FirstProgram.adv"
volatile CppAdvance::Unsafe::__VolatileRawPtr<const CppAdvance::char16> globalVar{};
#line 8 "FirstProgram.adv"
extern const CppAdvance::Unsafe::__RawPtr<CppAdvance::i32> globalVar1 = nullptr;
#line 757 "FirstProgram.adv"
static CppAdvance::i32 globalVar2 = CppAdvance::i32(8);
#line 758 "FirstProgram.adv"
static const CppAdvance::i32 globalVar3 = CppAdvance::i32(456);
#line 105 "FirstProgram.adv"
thread_local CppAdvance::i32 Vector3::Count2 = CppAdvance::i32(123);
#line 107 "FirstProgram.adv"
const Vector3 Vector3::ZERO = Vector3{CppAdvance::i32(0), CppAdvance::i32(0), CppAdvance::i32(0)};
#line 227 "FirstProgram.adv"
CppAdvance::i32 __Class_VectorClass::Count2 = CppAdvance::i32(123);
#line 229 "FirstProgram.adv"
const Vector3 __Class_VectorClass::ZERO = Vector3{CppAdvance::i32(0), CppAdvance::i32(0), CppAdvance::i32(0)};
#line 90 "FirstProgram.adv"
CppAdvance::i32 Vector3::p_Count = CppAdvance::i32(1);
#line 90 "FirstProgram.adv"
Vector3::__Property_Count<> Vector3::Count;
#line 227 "FirstProgram.adv"
__Class_VectorClass::__self::__Property_Count2<> __Class_VectorClass::__self::Count2;
#line 229 "FirstProgram.adv"
__Class_VectorClass::__self::__Property_ZERO<> __Class_VectorClass::__self::ZERO;
#line 379 "FirstProgram.adv"
__Class_ConcreteVectorClass::__Property_Name2<> __Class_ConcreteVectorClass::Name2;
#line 379 "FirstProgram.adv"
__Class_ConcreteVectorClass::__self::__Property_Name2<> __Class_ConcreteVectorClass::__self::Name2;
#line 506 "FirstProgram.adv"
__Class_ComplexVariant::__Property_Count10<> __Class_ComplexVariant::Count10;
#line 506 "FirstProgram.adv"
__Class_ComplexVariant::__self::__Property_Count10<> __Class_ComplexVariant::__self::Count10;
#line 525 "FirstProgram.adv"
Media::__Property_Count10<> Media::Count10;

	
	
	
	
	
	
	
	
	
	
	
	
	
	#line 484 "FirstProgram.adv"
const __Class_ComplexVariant::__self __Class_ComplexVariant::Value1 = __Class_ComplexVariant::__self{ new (::operator new(sizeof(__Class_ComplexVariant))) __Class_ComplexVariant(CppAdvance::i32(1), CppAdvance::f32(2.13f), CppAdvance::Str{u"Value1"}) };
	#line 484 "FirstProgram.adv"
__Class_ComplexVariant::__self::__Property_Value1<> __Class_ComplexVariant::__self::Value1;
	#line 485 "FirstProgram.adv"
const __Class_ComplexVariant::__self __Class_ComplexVariant::Value2 = __Class_ComplexVariant::__self{ new (::operator new(sizeof(__Class_ComplexVariant))) __Class_ComplexVariant(CppAdvance::i32(2), CppAdvance::f32(4.13f), CppAdvance::Str{u"Value2"}) };
	#line 485 "FirstProgram.adv"
__Class_ComplexVariant::__self::__Property_Value2<> __Class_ComplexVariant::__self::Value2;
	#line 486 "FirstProgram.adv"
const __Class_ComplexVariant::__self __Class_ComplexVariant::Value3 = __Class_ComplexVariant::__self{ new (::operator new(sizeof(__Class_ComplexVariant))) __Class_ComplexVariant(CppAdvance::i32(3), CppAdvance::f32(6.13f), CppAdvance::Str{u"Value3"}) };
	#line 486 "FirstProgram.adv"
__Class_ComplexVariant::__self::__Property_Value3<> __Class_ComplexVariant::__self::Value3;
	#line 487 "FirstProgram.adv"
const __Class_ComplexVariant::__self __Class_ComplexVariant::Value4 = __Class_ComplexVariant::__self{ new (::operator new(sizeof(__Class_ComplexVariant))) __Class_ComplexVariant(CppAdvance::i32(4), CppAdvance::f32(8.13f), CppAdvance::Str{u"Value4"}) };
	#line 487 "FirstProgram.adv"
__Class_ComplexVariant::__self::__Property_Value4<> __Class_ComplexVariant::__self::Value4;
	#line 483 "FirstProgram.adv"
const __Class_ComplexVariant::__self __Class_ComplexVariant::__values[] = { Value1, Value2, Value3, Value4 };
	
	
	
	
	
	
	
	
	
	
	
	
	
	#line 13 "FirstProgram.adv"
	extern "C" CppAdvance::i32 ExternalCounter;
#line 17 "FirstProgram.adv"
	extern "C" auto __stdcall externalFunc(CppAdvance::i32 a, CppAdvance::Str b) -> const CppAdvance::Str;



#line 34 "FirstProgram.adv"
	auto printParams(CppAdvance::Str s, std::initializer_list<CppAdvance::i32> params)  -> void
	{
		#line 35 "FirstProgram.adv"
		print(s);
		#line 36 "FirstProgram.adv"
		for (const auto& param : params) 
		{
			#line 37 "FirstProgram.adv"
			print(param);
		}
	}

#line 41 "FirstProgram.adv"
	auto printParams(CppAdvance::Str s, std::initializer_list<CppAdvance::Str> params)  -> void
	{
		#line 42 "FirstProgram.adv"
		for (const auto& param : params) 
		{
			#line 43 "FirstProgram.adv"
			print(param);
		}
	}




#line 95 "FirstProgram.adv"
	auto Vector3::setCount(const CppAdvance::i32& value) -> void 
	{
		#line 96 "FirstProgram.adv"
		print(CppAdvance::Str{u"Write"});
		#line 97 "FirstProgram.adv"
		if (value > CppAdvance::i32(10)) [[likely]] {
			#line 98 "FirstProgram.adv"
			p_Count = value / CppAdvance::i32(10);
		} else {
			#line 99 "FirstProgram.adv"
			p_Count = value;
		}
	}
	#line 91 "FirstProgram.adv"
	auto Vector3::getCount()  -> CppAdvance::i32 
	{
		#line 92 "FirstProgram.adv"
		print(CppAdvance::Str{u"Read"});
		#line 93 "FirstProgram.adv"
		return p_Count * CppAdvance::i32(10);
	}
	

	
	
	
	#line 362 "FirstProgram.adv"
	auto __Class_ConcreteVectorClass::setCount(const CppAdvance::i32& value) -> __selfClass& 
	{
		#line 363 "FirstProgram.adv"
		print(CppAdvance::Str{u"Write"});
		#line 364 "FirstProgram.adv"
		if (value > CppAdvance::i32(10)) {
			#line 364 "FirstProgram.adv"
			p_Count = value / CppAdvance::i32(10);
		} else {
			#line 365 "FirstProgram.adv"
			p_Count = value;
		}
		return *this;
	}
	#line 358 "FirstProgram.adv"
	auto __Class_ConcreteVectorClass::getCount() const  -> CppAdvance::i32 
	{
		#line 359 "FirstProgram.adv"
		print(CppAdvance::Str{u"Read"});
		#line 360 "FirstProgram.adv"
		return p_Count * CppAdvance::i32(10);
	}
	





#line 480 "FirstProgram.adv"
	inline auto Text::getShortString() const  -> CppAdvance::Str 
	{
		#line 480 "FirstProgram.adv"
		ADV_EXPRESSION_BODY(Value); 
	}
	












ADV_ENTRY_POINT(MyApp::Main)
	#line 627 "FirstProgram.adv"
	extern "C" auto __Astrum_Main()  -> CppAdvance::i32
	{
		#line 672 "FirstProgram.adv"
		CppAdvance::Nullable<IInterface> nxtm = CppAdvance::New<ConcreteVectorClass>(CppAdvance::i32(11), CppAdvance::i32(12), CppAdvance::i32(13)); 
		#line 673 "FirstProgram.adv"
		CppAdvance::Nullable<IInterface> nxt = nxtm; 
		#line 675 "FirstProgram.adv"
		{
			#line 676 "FirstProgram.adv"
			#line 676 "FirstProgram.adv"
			CppAdvance::Stackalloc<ConcreteVectorClass> __obj_676_33(CppAdvance::i32(10), CppAdvance::Str{u"123455555555"}); CppAdvance::InitStackObject((CppAdvance::Object*)__obj_676_33.obj);
			#line 676 "FirstProgram.adv"
			CppAdvance::Nullable<VectorClass> nxt2 = __obj_676_33; 
			#line 677 "FirstProgram.adv"
			Vector3 vec = CppAdvance::New<Vector3>(CppAdvance::i32(12), CppAdvance::Str{u"12344444444444"}); 
			#line 678 "FirstProgram.adv"
			auto xxn = ADV_UFCS(getNext)(vec.__ref()); 
			#line 679 "FirstProgram.adv"
			print(ADV_UFCS(GetStrongReferenceCount)((*(nxt2)).__ref()));
			#line 680 "FirstProgram.adv"
			print(ADV_UFCS(GetStrongReferenceCount)((*(nxt)).__ref()));
			#line 681 "FirstProgram.adv"
			print(ADV_UFCS(GetStrongReferenceCount)((*(nxt2)).__ref()));
			#line 682 "FirstProgram.adv"
			print(ADV_UFCS(_operator_subscript)((*(nxt)).__ref(), CppAdvance::i32(2)));
			#line 683 "FirstProgram.adv"
			typename IInterface::SomeInt xx = ADV_USPCS(VERSION, IInterface)(); 
			#line 684 "FirstProgram.adv"
			print(xx);
			#line 686 "FirstProgram.adv"
			print(ADV_UFCS(GetStrongReferenceCount)((*(nxt2)).__ref()));
			#line 688 "FirstProgram.adv"
			nxt.andThen([&](const auto& value) FORCE_INLINE_LAMBDA_CLANG FORCE_INLINE_LAMBDA { ADV_EXPRESSION_BODY(ADV_UFCS(Reset)(value.__ref())); });
			#line 689 "FirstProgram.adv"
			print(ADV_UFCS(PrintInterface)((*(nxt2)).__ref(), CppAdvance::i32(123)));
			#line 690 "FirstProgram.adv"
			print(ADV_UPCS(Name)((*(nxt)).__ref()));
			#line 691 "FirstProgram.adv"
			print(CppAdvance::usize(sizeof (__Class_ConcreteVectorClass)));
			#line 693 "FirstProgram.adv"
			print(ADV_UFCS(GetStrongReferenceCount)((*(nxt2)).__ref()));
			#line 695 "FirstProgram.adv"
			CppAdvance::Nullable<ConcreteVectorClass> cv1 = CppAdvance::New<ConcreteVectorClass>(CppAdvance::i32(1), CppAdvance::f32(2.13f), CppAdvance::i32(3)); 
			#line 696 "FirstProgram.adv"
			ConcreteVectorClass cv2 = (*(cv1)); 
			#line 699 "FirstProgram.adv"
			print(CppAdvance::Cast<true, CppAdvance::i32>((CppAdvance::IdentityEquals(cv1, cv2))));
			#line 700 "FirstProgram.adv"
			print(CppAdvance::Cast<true, CppAdvance::i32>((!CppAdvance::IdentityEquals(cv1, cv2))));
			#line 701 "FirstProgram.adv"
			Union3<Next, CppAdvance::f32, CppAdvance::Str> mu = CppAdvance::New<Next>(CppAdvance::i32(5)); 
			#line 702 "FirstProgram.adv"
			print(ADV_UPCS(i)((CppAdvance::Cast<true, Next>(mu)).__ref()));
			#line 703 "FirstProgram.adv"
			if (const auto cv11 = CppAdvance::Cast<false, Next>(nxt)) {
				#line 705 "FirstProgram.adv"
				print(CppAdvance::Str{u"aaaaaaaaaa"});
			}
			#line 707 "FirstProgram.adv"
			Media media = Media::Audio(CppAdvance::Str{u"abcd"}, CppAdvance::i32(1), CppAdvance::i32(13)); 
			#line 708 "FirstProgram.adv"
			ImportantOptions opt = { CppAdvance::i32(1), CppAdvance::i32(4), CppAdvance::Str{u"abc"} }; 
			#line 709 "FirstProgram.adv"
			const auto& [ox, oy, oz] = opt;
			#line 710 "FirstProgram.adv"
			print(ox);
			#line 711 "FirstProgram.adv"
			print(oy);
			#line 712 "FirstProgram.adv"
			print(oz);
			#line 713 "FirstProgram.adv"
			ADV_ASSERT((ox == CppAdvance::i32(1)), u"ox==1");
			#line 715 "FirstProgram.adv"
			static_assert(CppAdvance::usize(sizeof(CppAdvance::i32)) == CppAdvance::i32(4), "i32 must be 4 bytes");
			#line 717 "FirstProgram.adv"
			const auto& [x, y, z] = vec;
			#line 728 "FirstProgram.adv"
			ADV_UFCS(_operator_subscript)(vec.__ref(), CppAdvance::i32(1)) = CppAdvance::i32(5);
			#line 729 "FirstProgram.adv"
			print(CppAdvance::Cast<true, CppAdvance::f32>((*(cv1))));
			#line 730 "FirstProgram.adv"
			print(CppAdvance::Cast<true, CppAdvance::i32>(((CppAdvance::Is((*(cv1)), (cv2))))));
			#line 731 "FirstProgram.adv"
			auto func = [] (const auto x) { ADV_EXPRESSION_BODY(x * x); }; 
			#line 732 "FirstProgram.adv"
			print(func(CppAdvance::i32(12)));
			#line 733 "FirstProgram.adv"
			auto nx = CppAdvance::New<Next>(CppAdvance::i32(5)); 
			#line 735 "FirstProgram.adv"
			CppAdvance::LocalFunction<const CppAdvance::i32(CppAdvance::i32)> factorial; factorial = [&] (CppAdvance::i32 x) -> const CppAdvance::i32 
			{
				#line 736 "FirstProgram.adv"
				ADV_EXPRESSION_BODY(x == CppAdvance::i32(0) ? CppAdvance::i32(1) : x * factorial(x - CppAdvance::i32(1))); return 0;
			};
			#line 737 "FirstProgram.adv"
			using SimpleAction = CppAdvance::FunctionRef<void()>;
			#line 739 "FirstProgram.adv"
			print(vsum(CppAdvance::i32(1), CppAdvance::i32(2), CppAdvance::i32(3), CppAdvance::i32(4), CppAdvance::i32(5), CppAdvance::i32(6)));
			#line 742 "FirstProgram.adv"
			CppAdvance::Nullable<CppAdvance::ObjectRef> on = vec; 
		}
		#line 744 "FirstProgram.adv"
		print(ADV_UFCS(GetStrongReferenceCount)((*(nxt)).__ref()));
		#line 745 "FirstProgram.adv"
		print(ADV_UPCS(x)(ADV_UPCS(x)(ADV_USFCS((Test1::Test2::TestClass), makeTestClass)(CppAdvance::i32(3), CppAdvance::f32(3.14f)).__ref()).__ref()));
		return 0;
	}






#line 566 "FirstProgram.adv"
	template<class T> inline auto operator*(__extension_563_T<T> const& __this LIFETIMEBOUND, CppAdvance::In<CppAdvance::f32> f)  -> const CppAdvance::f32
	{
		#line 566 "FirstProgram.adv"
		ADV_EXPRESSION_BODY(f * CppAdvance::i32(10)); 
	}
	
#line 568 "FirstProgram.adv"
	template<class T> inline auto PrintInterface(__extension_563_T<T> const& __this LIFETIMEBOUND, CppAdvance::i32 x)  -> const CppAdvance::i32
	{
		#line 569 "FirstProgram.adv"
		print(CppAdvance::Str{u"PrintInterface Begin"});
		#line 570 "FirstProgram.adv"
		print(ADV_UPCS(Name)(__this.__ref()));
		#line 571 "FirstProgram.adv"
		print(x);
		#line 572 "FirstProgram.adv"
		print(CppAdvance::Str{u"PrintInterface End"});
		#line 573 "FirstProgram.adv"
		return x * CppAdvance::i32(11);
	}
	
#line 576 "FirstProgram.adv"
	template<class T> inline const CppAdvance::f32 getAt(__extension_563_T<T> const& __this LIFETIMEBOUND, CppAdvance::f32 r, CppAdvance::f32 g, CppAdvance::f32 b)
	{
		#line 576 "FirstProgram.adv"
		ADV_EXPRESSION_BODY(r + g + b); 
	}
	#line 578 "FirstProgram.adv"
	template<class T> inline auto __construct_(CppAdvance::ConstructorProxy<__extension_563_T<T>> __ctordata, CppAdvance::i32 x, CppAdvance::Str txt)  -> decltype(auto)
	{
		#line 579 "FirstProgram.adv"
		auto __this = new (__ctordata.memory) typename CppAdvance::ConstructorProxy<T>::ConstructingType(x, x, x);
		#line 580 "FirstProgram.adv"
		print(txt);
		return __this;
	}
	
#line 583 "FirstProgram.adv"
	template<class T> inline auto __construct_(CppAdvance::ConstructorProxy<__extension_563_T<T>> __ctordata, typename CppAdvance::MemorySpace mem, CppAdvance::i32 x, CppAdvance::Str txt)  -> decltype(auto)
	{
		#line 584 "FirstProgram.adv"
		auto __this = new (__ctordata.memory) typename CppAdvance::ConstructorProxy<T>::ConstructingType(x, x, x);
		#line 585 "FirstProgram.adv"
		print(txt);
		return __this;
	}
	
#line 564 "FirstProgram.adv"
	template<class T> inline auto getAsString(__extension_563_T<T> const& __this ) -> const CppAdvance::Str
	{
		#line 564 "FirstProgram.adv"
		ADV_EXPRESSION_BODY(CppAdvance::Str{u"AsString"}); 
	}
	#line 9999 "FirstProgram.adv"
	

}