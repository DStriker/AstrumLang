#include "System/Application/Collections.h"
using namespace System::Application;
#include "FirstProgram.h"

namespace MyApp::Main {
#line 6 "FirstProgram.adv"
	extern "C" auto __Astrum_Main()  -> CppAdvance::i32;

ADV_ENTRY_POINT(MyApp::Main)
	#line 6 "FirstProgram.adv"
	extern "C" auto __Astrum_Main()  -> CppAdvance::i32
	{
		#line 51 "FirstProgram.adv"
		CppAdvance::Nullable<IInterface> nxtm = CppAdvance::New<ConcreteVectorClass>(CppAdvance::i32(11), CppAdvance::i32(12), CppAdvance::i32(13)); 
		#line 52 "FirstProgram.adv"
		CppAdvance::Nullable<IInterface> nxt = nxtm; 
		#line 54 "FirstProgram.adv"
		{
			#line 55 "FirstProgram.adv"
			#line 55 "FirstProgram.adv"
			CppAdvance::Stackalloc<ConcreteVectorClass> __obj_55_33(CppAdvance::i32(10), CppAdvance::Str{u"123455555555"}); CppAdvance::InitStackObject((CppAdvance::Object*)__obj_55_33.obj);
			#line 55 "FirstProgram.adv"
			CppAdvance::Nullable<VectorClass> nxt2 = __obj_55_33; 
			#line 56 "FirstProgram.adv"
			Vector3 vec = CppAdvance::New<Vector3>(CppAdvance::i32(12), CppAdvance::Str{u"12344444444444"}); 
			#line 57 "FirstProgram.adv"
			auto xxn = ADV_UFCS(getNext)(vec.__ref()); 
			#line 58 "FirstProgram.adv"
			print(ADV_UFCS(GetStrongReferenceCount)((*(nxt2)).__ref()));
			#line 59 "FirstProgram.adv"
			print(ADV_UFCS(GetStrongReferenceCount)((*(nxt)).__ref()));
			#line 60 "FirstProgram.adv"
			print(ADV_UFCS(GetStrongReferenceCount)((*(nxt2)).__ref()));
			#line 61 "FirstProgram.adv"
			print(ADV_UFCS(_operator_subscript)((*(nxt)).__ref(), CppAdvance::i32(2)));
			#line 62 "FirstProgram.adv"
			typename IInterface::SomeInt xx = ADV_USPCS(VERSION, IInterface)(); 
			#line 63 "FirstProgram.adv"
			print(xx);
			#line 65 "FirstProgram.adv"
			print(ADV_UFCS(GetStrongReferenceCount)((*(nxt2)).__ref()));
			#line 67 "FirstProgram.adv"
			nxt.andThen([&](const auto& value) FORCE_INLINE_LAMBDA_CLANG FORCE_INLINE_LAMBDA { ADV_EXPRESSION_BODY(ADV_UFCS(Reset)(value.__ref())); });
			#line 68 "FirstProgram.adv"
			print(ADV_UFCS(PrintInterface)((*(nxt2)).__ref(), CppAdvance::i32(123)));
			#line 69 "FirstProgram.adv"
			print(ADV_UPCS(Name)((*(nxt)).__ref()));
			#line 70 "FirstProgram.adv"
			print(CppAdvance::usize(sizeof (__Class_ConcreteVectorClass)));
			#line 72 "FirstProgram.adv"
			print(ADV_UFCS(GetStrongReferenceCount)((*(nxt2)).__ref()));
			#line 74 "FirstProgram.adv"
			CppAdvance::Nullable<ConcreteVectorClass> cv1 = CppAdvance::New<ConcreteVectorClass>(CppAdvance::i32(1), CppAdvance::f32(2.13f), CppAdvance::i32(3)); 
			#line 75 "FirstProgram.adv"
			ConcreteVectorClass cv2 = (*(cv1)); 
			#line 78 "FirstProgram.adv"
			print(CppAdvance::Cast<true, CppAdvance::i32>((CppAdvance::IdentityEquals(cv1, cv2))));
			#line 79 "FirstProgram.adv"
			print(CppAdvance::Cast<true, CppAdvance::i32>((!CppAdvance::IdentityEquals(cv1, cv2))));
			#line 80 "FirstProgram.adv"
			Union3<Next, CppAdvance::f32, CppAdvance::Str> mu = CppAdvance::New<Next>(CppAdvance::i32(5)); 
			#line 81 "FirstProgram.adv"
			print(ADV_UPCS(i)((CppAdvance::Cast<true, Next>(mu)).__ref()));
			#line 82 "FirstProgram.adv"
			if (const auto cv11 = CppAdvance::Cast<false, Next>(nxt)) {
				#line 84 "FirstProgram.adv"
				print(CppAdvance::Str{u"aaaaaaaaaa"});
			}
			#line 86 "FirstProgram.adv"
			Media media = Media::Audio(CppAdvance::Str{u"abcd"}, CppAdvance::i32(1), CppAdvance::i32(13)); 
			#line 87 "FirstProgram.adv"
			ImportantOptions opt = { CppAdvance::i32(1), CppAdvance::i32(4), CppAdvance::Str{u"abc"} }; 
			#line 88 "FirstProgram.adv"
			const auto& [ox, oy, oz] = opt;
			#line 89 "FirstProgram.adv"
			print(ox);
			#line 90 "FirstProgram.adv"
			print(oy);
			#line 91 "FirstProgram.adv"
			print(oz);
			#line 92 "FirstProgram.adv"
			ADV_ASSERT((ox == CppAdvance::i32(1)), u"ox==1");
			#line 94 "FirstProgram.adv"
			static_assert(CppAdvance::usize(sizeof(CppAdvance::i32)) == CppAdvance::i32(4), "i32 must be 4 bytes");
			#line 96 "FirstProgram.adv"
			const auto& [x, y, z] = vec;
			#line 107 "FirstProgram.adv"
			ADV_UFCS(_operator_subscript)(vec.__ref(), CppAdvance::i32(1)) = CppAdvance::i32(5);
			#line 108 "FirstProgram.adv"
			print(CppAdvance::Cast<true, CppAdvance::f32>((*(cv1))));
			#line 109 "FirstProgram.adv"
			print(CppAdvance::Cast<true, CppAdvance::i32>(((CppAdvance::Is((*(cv1)), (cv2))))));
			#line 110 "FirstProgram.adv"
			auto func = [] (const auto x) { ADV_EXPRESSION_BODY(x * x); }; 
			#line 111 "FirstProgram.adv"
			print(func(CppAdvance::i32(12)));
			#line 112 "FirstProgram.adv"
			auto nx = CppAdvance::New<Next>(CppAdvance::i32(5)); 
			#line 114 "FirstProgram.adv"
			CppAdvance::LocalFunction<const CppAdvance::i32(CppAdvance::i32)> factorial; factorial = [&] (CppAdvance::i32 x) -> const CppAdvance::i32 
			{
				#line 115 "FirstProgram.adv"
				ADV_EXPRESSION_BODY(x == CppAdvance::i32(0) ? CppAdvance::i32(1) : x * factorial(x - CppAdvance::i32(1))); return 0;
			};
			#line 116 "FirstProgram.adv"
			using SimpleAction = CppAdvance::FunctionRef<void()>;
			#line 118 "FirstProgram.adv"
			print(vsum(CppAdvance::i32(1), CppAdvance::i32(2), CppAdvance::i32(3), CppAdvance::i32(4), CppAdvance::i32(5), CppAdvance::i32(6)));
			#line 121 "FirstProgram.adv"
			CppAdvance::Nullable<CppAdvance::ObjectRef> on = vec; 
		}
		#line 123 "FirstProgram.adv"
		print(ADV_UFCS(GetStrongReferenceCount)((*(nxt)).__ref()));
		#line 124 "FirstProgram.adv"
		print(ADV_UPCS(x)(ADV_UPCS(x)(ADV_USFCS((Test1::Test2::TestClass), makeTestClass)(CppAdvance::i32(3), CppAdvance::f32(3.14f)).__ref()).__ref()));
		return 0;
	}


}