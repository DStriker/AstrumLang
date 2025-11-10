#include "FirstProgram.h"

#line 244 "FirstProgram.adv"
using IntArray = CppAdvance::i64[size_t(CppAdvance::i32(3))][size_t(CppAdvance::i32(3))][size_t(CppAdvance::i32(3))];
#line 196 "FirstProgram.adv"
auto main(CppAdvance::i32 iparam, CppAdvance::In<CppAdvance::f64> jparam = CppAdvance::f64(3.5))  -> int;
#line 240 "FirstProgram.adv"
inline constexpr CppAdvance::usize PRIVATE_CONSTANT = CppAdvance::usize(34U);
#line 2 "FirstProgram.adv"
volatile CppAdvance::Unsafe::__VolatileRawPtr<const CppAdvance::char16> globalVar{};
#line 3 "FirstProgram.adv"
extern const CppAdvance::Unsafe::__RawPtr<CppAdvance::i32> globalVar1 = nullptr;
#line 241 "FirstProgram.adv"
static CppAdvance::i32 globalVar2 = CppAdvance::i32(8);
#line 242 "FirstProgram.adv"
static const CppAdvance::i32 globalVar3 = CppAdvance::i32(456);
#line 243 "FirstProgram.adv"
static IntArray xyz = { { { CppAdvance::i32(1), CppAdvance::i32(2), CppAdvance::i32(3) }, { CppAdvance::i32(4), CppAdvance::i32(5), CppAdvance::i32(6) }, { CppAdvance::i32(7), CppAdvance::i32(8), CppAdvance::i32(9) } }, { { CppAdvance::i32(11), CppAdvance::i32(12), CppAdvance::i32(13) }, { CppAdvance::i32(14), CppAdvance::i32(15), CppAdvance::i32(16) }, { CppAdvance::i32(17), CppAdvance::i32(18), CppAdvance::i32(19) } }, { { CppAdvance::i32(21), CppAdvance::i32(22), CppAdvance::i32(23) }, { CppAdvance::i32(24), CppAdvance::i32(25), CppAdvance::i32(26) }, { CppAdvance::i32(27), CppAdvance::i32(28), CppAdvance::i32(29) } } };
#line 79 "FirstProgram.adv"
thread_local CppAdvance::i32 Vector3::Count2 = CppAdvance::i32(123);
#line 81 "FirstProgram.adv"
const Vector3 Vector3::ZERO = Vector3{CppAdvance::i32(0), CppAdvance::i32(0), CppAdvance::i32(0)};
#line 65 "FirstProgram.adv"
CppAdvance::i32 Vector3::p_Count = CppAdvance::i32(1);
#line 65 "FirstProgram.adv"
Vector3::__Property_Count<> Vector3::Count;
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

#line 34 "FirstProgram.adv"
auto testt(CppAdvance::i32 x)  -> __ntuples::NamedTuple_ffda88e0b5252a0a
{
	CppAdvance::i32 i;
	typename Test1::Test2::TestClass t;
	bool b;
	#line 35 "FirstProgram.adv"
	i = x;
	#line 36 "FirstProgram.adv"
	t = Test1::Test2::TestClass{};
	#line 37 "FirstProgram.adv"
	b = true;
	return {i, t, b};
}




#line 46 "FirstProgram.adv"
extern auto externalFunc(CppAdvance::i32 a, CppAdvance::Str b) -> CppAdvance::Str;

#line 70 "FirstProgram.adv"
auto Vector3::setCount(const CppAdvance::i32& value) -> void 
{
	#line 71 "FirstProgram.adv"
	print(CppAdvance::Str{u"Write"});
	#line 72 "FirstProgram.adv"
	if (value > CppAdvance::i32(10)) {
		#line 72 "FirstProgram.adv"
		p_Count = value / CppAdvance::i32(10);
	} else {
		#line 73 "FirstProgram.adv"
		p_Count = value;
	}
}
#line 66 "FirstProgram.adv"
auto Vector3::getCount()  -> CppAdvance::i32 
{
	#line 67 "FirstProgram.adv"
	print(CppAdvance::Str{u"Read"});
	#line 68 "FirstProgram.adv"
	return p_Count * CppAdvance::i32(10);
}



#line 196 "FirstProgram.adv"
auto main(CppAdvance::i32 iparam, CppAdvance::In<CppAdvance::f64> jparam)  -> int
{
	#line 222 "FirstProgram.adv"
	Vector3 vv{ CppAdvance::i32(2), CppAdvance::i32(3), CppAdvance::i32(4) }; 
	#line 224 "FirstProgram.adv"
	print(ADV_UFCS(getClassExt)(ADV_UFCS(GetTest)(vv.__ref()).__ref(), CppAdvance::i32(1), CppAdvance::i32(2), CppAdvance::i32(4),  8,  true, true,  false).__ref().x);
	#line 225 "FirstProgram.adv"
	auto ss = CppAdvance::i32(300); 
	#line 227 "FirstProgram.adv"
	Vector3 v{ CppAdvance::i32(2), CppAdvance::i32(7), CppAdvance::i32(4) }; 
	#line 228 "FirstProgram.adv"
	print(ADV_UFCS(TemplateMethod)(v.__ref(), CppAdvance::i32(3), CppAdvance::i32(4), CppAdvance::i32(5)).__ref().x);
	#line 229 "FirstProgram.adv"
	Vector3 fv = v; 
	#line 231 "FirstProgram.adv"
	print(Vector3::Count);
	#line 232 "FirstProgram.adv"
	Vector3::setCount(CppAdvance::i32(30));
	#line 233 "FirstProgram.adv"
	Vector3::Count = CppAdvance::i32(30);
	#line 234 "FirstProgram.adv"
	print(Vector3::Count);
	#line 236 "FirstProgram.adv"
	print(Test1::Test2::TestClass::makeTestClass(CppAdvance::i32(3), CppAdvance::f32(3.14f)).__ref().x.__ref().x);
}


