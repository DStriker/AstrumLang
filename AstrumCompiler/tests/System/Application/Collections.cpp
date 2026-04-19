#include "Collections.h"

namespace System::Application {
//###############################################################################
//# Global type aliases
//###############################################################################
//###############################################################################
//# Type definitions
//###############################################################################
//###############################################################################
//# Free function declarations
//###############################################################################
//###############################################################################
//# Global compile-time constants
//###############################################################################
#line 631 "Collections.ast"
inline constexpr CppAdvance::usize PRIVATE_CONSTANT = CppAdvance::usize(34U);
//###############################################################################
//# Global variable declarations
//###############################################################################
#line 4 "Collections.ast"
volatile CppAdvance::Unsafe::__VolatileRawPtr<const CppAdvance::char16> globalVar{};
#line 5 "Collections.ast"
extern const CppAdvance::Unsafe::__RawPtr<CppAdvance::i32> globalVar1 = nullptr;
#line 632 "Collections.ast"
static CppAdvance::i32 globalVar2 = CppAdvance::i32(8);
#line 633 "Collections.ast"
static const CppAdvance::i32 globalVar3 = CppAdvance::i32(456);
#line 100 "Collections.ast"
thread_local CppAdvance::i32 Vector3::Count2 = CppAdvance::i32(123);
#line 102 "Collections.ast"
const Vector3 Vector3::ZERO = Vector3{CppAdvance::i32(0), CppAdvance::i32(0), CppAdvance::i32(0)};
#line 222 "Collections.ast"
CppAdvance::i32 __Class_VectorClass::Count2 = CppAdvance::i32(123);
#line 224 "Collections.ast"
const Vector3 __Class_VectorClass::ZERO = Vector3{CppAdvance::i32(0), CppAdvance::i32(0), CppAdvance::i32(0)};
#line 85 "Collections.ast"
CppAdvance::i32 Vector3::p_Count = CppAdvance::i32(1);
#line 85 "Collections.ast"
Vector3::__Property_Count<> Vector3::Count;
#line 222 "Collections.ast"
__Class_VectorClass::__self::__Property_Count2<> __Class_VectorClass::__self::Count2;
#line 224 "Collections.ast"
__Class_VectorClass::__self::__Property_ZERO<> __Class_VectorClass::__self::ZERO;
#line 374 "Collections.ast"
__Class_ConcreteVectorClass::__Property_Name2<> __Class_ConcreteVectorClass::Name2;
#line 374 "Collections.ast"
__Class_ConcreteVectorClass::__self::__Property_Name2<> __Class_ConcreteVectorClass::__self::Name2;
#line 501 "Collections.ast"
__Class_ComplexVariant::__Property_Count10<> __Class_ComplexVariant::Count10;
#line 501 "Collections.ast"
__Class_ComplexVariant::__self::__Property_Count10<> __Class_ComplexVariant::__self::Count10;
#line 520 "Collections.ast"
Media::__Property_Count10<> Media::Count10;

	
	
	
	
	
	
	
	
	
	
	
	
	
	#line 479 "Collections.ast"
const __Class_ComplexVariant::__self __Class_ComplexVariant::Value1 = __Class_ComplexVariant::__self{ new (::operator new(sizeof(__Class_ComplexVariant))) __Class_ComplexVariant(CppAdvance::i32(1), CppAdvance::f32(2.13f), CppAdvance::Str{u"Value1"}) };
	#line 479 "Collections.ast"
__Class_ComplexVariant::__self::__Property_Value1<> __Class_ComplexVariant::__self::Value1;
	#line 480 "Collections.ast"
const __Class_ComplexVariant::__self __Class_ComplexVariant::Value2 = __Class_ComplexVariant::__self{ new (::operator new(sizeof(__Class_ComplexVariant))) __Class_ComplexVariant(CppAdvance::i32(2), CppAdvance::f32(4.13f), CppAdvance::Str{u"Value2"}) };
	#line 480 "Collections.ast"
__Class_ComplexVariant::__self::__Property_Value2<> __Class_ComplexVariant::__self::Value2;
	#line 481 "Collections.ast"
const __Class_ComplexVariant::__self __Class_ComplexVariant::Value3 = __Class_ComplexVariant::__self{ new (::operator new(sizeof(__Class_ComplexVariant))) __Class_ComplexVariant(CppAdvance::i32(3), CppAdvance::f32(6.13f), CppAdvance::Str{u"Value3"}) };
	#line 481 "Collections.ast"
__Class_ComplexVariant::__self::__Property_Value3<> __Class_ComplexVariant::__self::Value3;
	#line 482 "Collections.ast"
const __Class_ComplexVariant::__self __Class_ComplexVariant::Value4 = __Class_ComplexVariant::__self{ new (::operator new(sizeof(__Class_ComplexVariant))) __Class_ComplexVariant(CppAdvance::i32(4), CppAdvance::f32(8.13f), CppAdvance::Str{u"Value4"}) };
	#line 482 "Collections.ast"
__Class_ComplexVariant::__self::__Property_Value4<> __Class_ComplexVariant::__self::Value4;
	#line 478 "Collections.ast"
const __Class_ComplexVariant::__self __Class_ComplexVariant::__values[] = { Value1, Value2, Value3, Value4 };
	
	
	
	
	
	
	
	
	
	
	
	
	
	#line 10 "Collections.ast"
	extern "C" CppAdvance::i32 ExternalCounter;
#line 14 "Collections.ast"
	extern "C" auto __stdcall externalFunc(CppAdvance::i32 a, CppAdvance::Str b) -> const CppAdvance::Str;



#line 29 "Collections.ast"
	auto printParams(CppAdvance::Str s, std::initializer_list<CppAdvance::i32> params)  -> void
	{
		#line 30 "Collections.ast"
		print(s);
		#line 31 "Collections.ast"
		for (const auto& param : params) 
		{
			#line 32 "Collections.ast"
			print(param);
		}
	}

#line 36 "Collections.ast"
	auto printParams(CppAdvance::Str s, std::initializer_list<CppAdvance::Str> params)  -> void
	{
		#line 37 "Collections.ast"
		for (const auto& param : params) 
		{
			#line 38 "Collections.ast"
			print(param);
		}
	}




#line 90 "Collections.ast"
	auto Vector3::setCount(const CppAdvance::i32& value) -> void 
	{
		#line 91 "Collections.ast"
		print(CppAdvance::Str{u"Write"});
		#line 92 "Collections.ast"
		if (value > CppAdvance::i32(10)) [[likely]] {
			#line 93 "Collections.ast"
			p_Count = value / CppAdvance::i32(10);
		} else {
			#line 94 "Collections.ast"
			p_Count = value;
		}
	}
	#line 86 "Collections.ast"
	auto Vector3::getCount()  -> CppAdvance::i32 
	{
		#line 87 "Collections.ast"
		print(CppAdvance::Str{u"Read"});
		#line 88 "Collections.ast"
		return p_Count * CppAdvance::i32(10);
	}
	

	
	
	
	#line 357 "Collections.ast"
	auto __Class_ConcreteVectorClass::setCount(const CppAdvance::i32& value) -> __selfClass& 
	{
		#line 358 "Collections.ast"
		print(CppAdvance::Str{u"Write"});
		#line 359 "Collections.ast"
		if (value > CppAdvance::i32(10)) {
			#line 359 "Collections.ast"
			p_Count = value / CppAdvance::i32(10);
		} else {
			#line 360 "Collections.ast"
			p_Count = value;
		}
		return *this;
	}
	#line 353 "Collections.ast"
	auto __Class_ConcreteVectorClass::getCount() const  -> CppAdvance::i32 
	{
		#line 354 "Collections.ast"
		print(CppAdvance::Str{u"Read"});
		#line 355 "Collections.ast"
		return p_Count * CppAdvance::i32(10);
	}
	





#line 475 "Collections.ast"
	inline auto Text::getShortString() const  -> CppAdvance::Str 
	{
		#line 475 "Collections.ast"
		ADV_EXPRESSION_BODY(Value); 
	}
	


















}