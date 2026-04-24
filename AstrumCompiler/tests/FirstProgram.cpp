#include "System/Application/package.h"
using namespace System::Application;
#include "FirstProgram.h"

namespace MyApp::Main {
//###############################################################################
//# Global type aliases
//###############################################################################
//###############################################################################
//# Free function declarations
//###############################################################################
#line 7 "FirstProgram.ast"
	extern "C" auto __Astrum_Main()  -> CppAdvance::i32;

ADV_ENTRY_POINT(MyApp::Main)
	#line 7 "FirstProgram.ast"
	extern "C" auto __Astrum_Main()  -> CppAdvance::i32
	{
		#line 52 "FirstProgram.ast"
		CppAdvance::Nullable<IInterface> nxtm = CppAdvance::New<ConcreteVectorClass>(CppAdvance::i32(11), CppAdvance::i32(12), CppAdvance::i32(13)); 
		#line 53 "FirstProgram.ast"
		CppAdvance::Nullable<IInterface> nxt = nxtm; 
		#line 55 "FirstProgram.ast"
		{
			#line 56 "FirstProgram.ast"
			#line 56 "FirstProgram.ast"
			CppAdvance::Stackalloc<ConcreteVectorClass> __obj_56_33(CppAdvance::i32(10), CppAdvance::Str{u"123455555555"}); CppAdvance::InitStackObject((CppAdvance::Object*)__obj_56_33.obj);
			#line 56 "FirstProgram.ast"
			CppAdvance::Nullable<VectorClass> nxt2 = __obj_56_33; 
			#line 57 "FirstProgram.ast"
			Vector3 vec = CppAdvance::New<Vector3>(CppAdvance::i32(12), CppAdvance::Str{u"12344444444444"}); 
			#line 58 "FirstProgram.ast"
			auto xxn = ADV_UFCS(getNext)(vec.__ref()); 
			#line 59 "FirstProgram.ast"
			print(ADV_UFCS(GetStrongReferenceCount)((*(nxt2)).__ref()));
			#line 60 "FirstProgram.ast"
			print(ADV_UFCS(GetStrongReferenceCount)((*(nxt)).__ref()));
			#line 61 "FirstProgram.ast"
			print(ADV_UFCS(GetStrongReferenceCount)((*(nxt2)).__ref()));
			#line 62 "FirstProgram.ast"
			print(ADV_UFCS(_operator_subscript)((*(nxt)).__ref(), CppAdvance::i32(2)));
			#line 63 "FirstProgram.ast"
			typename IInterface::SomeInt xx = ADV_USPCS(VERSION, IInterface)(); 
			#line 64 "FirstProgram.ast"
			print(xx);
			#line 66 "FirstProgram.ast"
			print(ADV_UFCS(GetStrongReferenceCount)((*(nxt2)).__ref()));
			#line 68 "FirstProgram.ast"
			nxt.andThen([&](const auto& value) FORCE_INLINE_LAMBDA_CLANG FORCE_INLINE_LAMBDA { ADV_EXPRESSION_BODY(ADV_UFCS(Reset)(value.__ref())); });
			#line 69 "FirstProgram.ast"
			print(ADV_UFCS(PrintInterface)((*(nxt2)).__ref(), CppAdvance::i32(123)));
			#line 70 "FirstProgram.ast"
			print(ADV_UPCS(Name)((*(nxt)).__ref()));
			#line 71 "FirstProgram.ast"
			print(CppAdvance::usize(sizeof (__Class_ConcreteVectorClass)));
			#line 73 "FirstProgram.ast"
			print(ADV_UFCS(GetStrongReferenceCount)((*(nxt2)).__ref()));
			#line 75 "FirstProgram.ast"
			CppAdvance::Nullable<ConcreteVectorClass> cv1 = CppAdvance::New<ConcreteVectorClass>(CppAdvance::i32(1), CppAdvance::f32(2.13f), CppAdvance::i32(3)); 
			#line 76 "FirstProgram.ast"
			ConcreteVectorClass cv2 = (*(cv1)); 
			#line 79 "FirstProgram.ast"
			print(CppAdvance::Cast<true, CppAdvance::i32>((CppAdvance::IdentityEquals(cv1, cv2))));
			#line 80 "FirstProgram.ast"
			print(CppAdvance::Cast<true, CppAdvance::i32>((!CppAdvance::IdentityEquals(cv1, cv2))));
			#line 81 "FirstProgram.ast"
			Union3<Next, CppAdvance::f32, CppAdvance::Str> mu = CppAdvance::New<Next>(CppAdvance::i32(5)); 
			#line 82 "FirstProgram.ast"
			print(ADV_UPCS(i)((CppAdvance::Cast<true, Next>(mu)).__ref()));
			#line 83 "FirstProgram.ast"
			if (const auto cv11 = CppAdvance::Cast<false, Next>(nxt)) {
				#line 85 "FirstProgram.ast"
				print(CppAdvance::Str{u"aaaaaaaaaa"});
			}
			#line 87 "FirstProgram.ast"
			Media media = Media::Audio(CppAdvance::Str{u"abcd"}, CppAdvance::i32(1), CppAdvance::i32(13)); 
			#line 88 "FirstProgram.ast"
			ImportantOptions opt = { CppAdvance::i32(1), CppAdvance::i32(4), CppAdvance::Str{u"abc"} }; 
			#line 89 "FirstProgram.ast"
			const auto& [ox, oy, oz] = opt;
			#line 90 "FirstProgram.ast"
			print(ox);
			#line 91 "FirstProgram.ast"
			print(oy);
			#line 92 "FirstProgram.ast"
			print(oz);
			#line 93 "FirstProgram.ast"
			ADV_ASSERT((ox == CppAdvance::i32(1)), u"ox==1");
			#line 94 "FirstProgram.ast"
			CppAdvance::Defer __defer_94_2{[&]() {{
				#line 95 "FirstProgram.ast"
				print(CppAdvance::Str{u"ox == "});
				#line 96 "FirstProgram.ast"
				print(ox);
			}}};
			#line 99 "FirstProgram.ast"
			static_assert(CppAdvance::usize(sizeof(CppAdvance::i32)) == CppAdvance::i32(4), "i32 must be 4 bytes");
			#line 101 "FirstProgram.ast"
			const auto& [x, y, z] = vec;
			#line 102 "FirstProgram.ast"
			ADV_UFCS(_operator_subscript)(vec.__ref(), CppAdvance::i32(1)) = CppAdvance::i32(5);
			#line 103 "FirstProgram.ast"
			print(CppAdvance::Cast<true, CppAdvance::f32>((*(cv1))));
			#line 104 "FirstProgram.ast"
			print(CppAdvance::Cast<true, CppAdvance::i32>(((CppAdvance::Is((*(cv1)), (cv2))))));
			#line 105 "FirstProgram.ast"
			auto func = [] (const auto x) { ADV_EXPRESSION_BODY(x * x); }; 
			#line 106 "FirstProgram.ast"
			print(func(CppAdvance::i32(12)));
			#line 107 "FirstProgram.ast"
			auto nx = CppAdvance::New<Next>(CppAdvance::i32(5)); 
			#line 109 "FirstProgram.ast"
			CppAdvance::LocalFunction<const CppAdvance::i32(CppAdvance::i32)> factorial; factorial = [&] (CppAdvance::i32 x) -> const CppAdvance::i32 
			{
				#line 110 "FirstProgram.ast"
				ADV_EXPRESSION_BODY(x == CppAdvance::i32(0) ? CppAdvance::i32(1) : x * factorial(x - CppAdvance::i32(1))); return 0;
			};
			#line 111 "FirstProgram.ast"
			using SimpleAction = CppAdvance::FunctionRef<void()>;
			#line 113 "FirstProgram.ast"
			print(vsum(CppAdvance::i32(1), CppAdvance::i32(2), CppAdvance::i32(3), CppAdvance::i32(4), CppAdvance::i32(5), CppAdvance::i32(6)));
			#line 114 "FirstProgram.ast"
			print(ADV_USFCS((IInterface), SomeStaticMethod)(CppAdvance::i32(5)));
			#line 115 "FirstProgram.ast"
			auto ints = std::initializer_list{CppAdvance::i32(0), CppAdvance::i32(2), CppAdvance::i32(4), CppAdvance::i32(6)}; 
			#line 116 "FirstProgram.ast"
			auto mapping = std::initializer_list{std::make_pair(CppAdvance::Str{u"key1"}, CppAdvance::i32(1)), std::make_pair(CppAdvance::Str{u"key2"}, CppAdvance::i32(2)), std::make_pair(CppAdvance::Str{u"key3"}, CppAdvance::i32(3))}; 
			#line 119 "FirstProgram.ast"
			CppAdvance::Nullable<CppAdvance::ObjectRef> on = vec; 
			#line 120 "FirstProgram.ast"
			print(ADV_USPCS(lazyInt, Vector3)());
			#line 122 "FirstProgram.ast"
			print(CppAdvance::i32(123) + CppAdvance::i32(256));
			#line 123 "FirstProgram.ast"
			print(CppAdvance::i32(123) + ADV_USPCS(lazyInt, Vector3)());
			#line 124 "FirstProgram.ast"
			print(ADV_USPCS(lazyInt, Vector3)() + CppAdvance::i32(123));
			#line 125 "FirstProgram.ast"
			print(ADV_USPCS(lazyInt, Vector3)() - CppAdvance::i32(123));
			#line 126 "FirstProgram.ast"
			print(ADV_USPCS(lazyInt, Vector3)() * CppAdvance::i32(123));
			#line 127 "FirstProgram.ast"
			print(ADV_USPCS(lazyInt, Vector3)() / CppAdvance::i32(123));
			#line 128 "FirstProgram.ast"
			print(ADV_USPCS(lazyInt, Vector3)() % CppAdvance::i32(123));
			#line 129 "FirstProgram.ast"
			print(ADV_USPCS(lazyInt, Vector3)() & CppAdvance::i32(123));
			#line 130 "FirstProgram.ast"
			print(ADV_USPCS(lazyInt, Vector3)() | CppAdvance::i32(123));
			#line 131 "FirstProgram.ast"
			print(ADV_USPCS(lazyInt, Vector3)() ^ CppAdvance::i32(123));
			#line 132 "FirstProgram.ast"
			print(CppAdvance::i32{ADV_USPCS(lazyInt, Vector3)() == CppAdvance::i32(123)});
			#line 133 "FirstProgram.ast"
			print(CppAdvance::i32{CppAdvance::i32(123) == ADV_USPCS(lazyInt, Vector3)()});
			#line 134 "FirstProgram.ast"
			print(CppAdvance::i32{ADV_USPCS(lazyInt, Vector3)() <= CppAdvance::i32(123)});
			#line 135 "FirstProgram.ast"
			print(CppAdvance::i32{CppAdvance::i32(123) <= ADV_USPCS(lazyInt, Vector3)()});
		}
		#line 138 "FirstProgram.ast"
		print(ADV_UFCS(GetStrongReferenceCount)((*(nxt)).__ref()));
		#line 139 "FirstProgram.ast"
		print(ADV_UPCS(x)(ADV_UPCS(x)(ADV_USFCS((Test1::Test2::TestClass), makeTestClass)(CppAdvance::i32(3), CppAdvance::f32(3.14f)).__ref()).__ref()));
		return 0;
	}


}