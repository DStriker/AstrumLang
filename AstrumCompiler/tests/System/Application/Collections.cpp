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
#line 650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
inline constexpr Builtin::usize PRIVATE_CONSTANT = Builtin::usize(34U);
//###############################################################################
//# Global variable declarations
//###############################################################################
#line 4 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
volatile Builtin::Unsafe::__VolatileRawPtr<const Builtin::char16> globalVar{};
#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
extern const Builtin::Unsafe::__RawPtr<Builtin::i32> globalVar1 = nullptr;
#line 651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
static Builtin::i32 globalVar2 = Builtin::i32(8);
#line 652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
static const Builtin::i32 globalVar3 = Builtin::i32(456);
#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
thread_local Builtin::i32 Vector3::Count2 = Builtin::i32(123);
#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
const Vector3 Vector3::ZERO = Vector3{Builtin::i32(0), Builtin::i32(0), Builtin::i32(0)};
#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
Builtin::i32 __Class_VectorClass::Count2 = Builtin::i32(123);
#line 243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
const Vector3 __Class_VectorClass::ZERO = Vector3{Builtin::i32(0), Builtin::i32(0), Builtin::i32(0)};
#line 104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
Builtin::i32 Vector3::p_Count = Builtin::i32(1);
#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
Vector3::__Property_lazyInt<> Vector3::lazyInt;
#line 104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
Vector3::__Property_Count<> Vector3::Count;
#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
__Class_VectorClass::__self::__Property_Count2<> __Class_VectorClass::__self::Count2;
#line 243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
__Class_VectorClass::__self::__Property_ZERO<> __Class_VectorClass::__self::ZERO;
#line 393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
__Class_ConcreteVectorClass::__Property_Name2<> __Class_ConcreteVectorClass::Name2;
#line 393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
__Class_ConcreteVectorClass::__self::__Property_Name2<> __Class_ConcreteVectorClass::__self::Name2;
#line 520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
__Class_ComplexVariant::__Property_Count10<> __Class_ComplexVariant::Count10;
#line 520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
__Class_ComplexVariant::__self::__Property_Count10<> __Class_ComplexVariant::__self::Count10;
#line 539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
Media::__Property_Count10<> Media::Count10;

	
	
	
	Vector3::__sctor Vector3::__sctor::instance;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	#line 498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
const __Class_ComplexVariant::__self __Class_ComplexVariant::Value1 = __Class_ComplexVariant::__self{ new (::operator new(sizeof(__Class_ComplexVariant))) __Class_ComplexVariant(Builtin::i32(1), Builtin::f32(2.13f), Builtin::Str{u"Value1"}) };
	#line 498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
__Class_ComplexVariant::__self::__Property_Value1<> __Class_ComplexVariant::__self::Value1;
	#line 499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
const __Class_ComplexVariant::__self __Class_ComplexVariant::Value2 = __Class_ComplexVariant::__self{ new (::operator new(sizeof(__Class_ComplexVariant))) __Class_ComplexVariant(Builtin::i32(2), Builtin::f32(4.13f), Builtin::Str{u"Value2"}) };
	#line 499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
__Class_ComplexVariant::__self::__Property_Value2<> __Class_ComplexVariant::__self::Value2;
	#line 500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
const __Class_ComplexVariant::__self __Class_ComplexVariant::Value3 = __Class_ComplexVariant::__self{ new (::operator new(sizeof(__Class_ComplexVariant))) __Class_ComplexVariant(Builtin::i32(3), Builtin::f32(6.13f), Builtin::Str{u"Value3"}) };
	#line 500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
__Class_ComplexVariant::__self::__Property_Value3<> __Class_ComplexVariant::__self::Value3;
	#line 501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
const __Class_ComplexVariant::__self __Class_ComplexVariant::Value4 = __Class_ComplexVariant::__self{ new (::operator new(sizeof(__Class_ComplexVariant))) __Class_ComplexVariant(Builtin::i32(4), Builtin::f32(8.13f), Builtin::Str{u"Value4"}) };
	#line 501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
__Class_ComplexVariant::__self::__Property_Value4<> __Class_ComplexVariant::__self::Value4;
	#line 497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
const __Class_ComplexVariant::__self __Class_ComplexVariant::__values[] = { Value1, Value2, Value3, Value4 };
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	extern "C" Builtin::i32 ExternalCounter;
#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	extern "C" auto __stdcall externalFunc(Builtin::i32 a, Builtin::Str b) -> const Builtin::Str;



#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	auto printParams(Builtin::Str s, std::initializer_list<Builtin::i32> params)  -> void
	{
		#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		print(s);
		#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		for (const auto& param : params) 
		{
			#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			print(param);
		}
	}

#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	auto printParams(Builtin::Str s, std::initializer_list<Builtin::Str> params)  -> void
	{
		#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		for (const auto& param : params) 
		{
			#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			print(param);
		}
	}




#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	Vector3::__sctor::__sctor() 
	{
		#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		print(Builtin::Str{u"Static constructor call!"});
	}
#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	auto Vector3::__lazy_init_lazyInt()  -> Builtin::i32  { return [] () 
	{
		#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		print(Builtin::Str{u"Lazy initialization!"});
		#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		return Builtin::i32(123);
	}(); }
	#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	auto Vector3::setCount(const Builtin::i32& value) -> void 
	{
		#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		print(Builtin::Str{u"Write"});
		#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		if (value > Builtin::i32(10)) [[likely]] {
			#line 112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			p_Count = value / Builtin::i32(10);
		} else {
			#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			p_Count = value;
		}
	}
	#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	auto Vector3::getCount()  -> Builtin::i32 
	{
		#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		print(Builtin::Str{u"Read"});
		#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		return p_Count * Builtin::i32(10);
	}
	

	
	
	
	#line 376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	auto __Class_ConcreteVectorClass::setCount(const Builtin::i32& value) -> __selfClass& 
	{
		#line 377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		print(Builtin::Str{u"Write"});
		#line 378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		if (value > Builtin::i32(10)) {
			#line 378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			p_Count = value / Builtin::i32(10);
		} else {
			#line 379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			p_Count = value;
		}
		return *this;
	}
	#line 372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	auto __Class_ConcreteVectorClass::getCount() const  -> Builtin::i32 
	{
		#line 373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		print(Builtin::Str{u"Read"});
		#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		return p_Count * Builtin::i32(10);
	}
	





#line 494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline auto Text::getShortString() const  -> Builtin::Str 
	{
		#line 494 "Collections.ast"
		ADV_EXPRESSION_BODY(Value); 
	}
	


















}