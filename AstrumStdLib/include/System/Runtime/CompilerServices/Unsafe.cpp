#include "Unsafe.h"

namespace System::Runtime::CompilerServices {
class TestConstruct;
//###############################################################################
//# Type definitions
//###############################################################################
class $Class_TestConstruct;
	#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	struct TestConstruct final : public Builtin::Struct {
		public: using $self = TestConstruct;
		public: using $class = $Class_TestConstruct;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		public: TestConstruct() = default;
		#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: ASTRUMSTD_API TestConstruct(Builtin::i32 i, Builtin::f32 f) ;
		#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: ASTRUMSTD_API ~TestConstruct() ;
		#line 285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		private: Builtin::i32 _i; ADV_CHECK_REF_STRUCT("i32", Builtin::i32);
		template <size_t I> friend auto& get(TestConstruct&);
		template <size_t I> friend const auto& get(const TestConstruct&);
		
	};
	
	
	#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	class $Class_TestConstruct final : public Builtin::ValueType
	{
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		public: using $underlying = TestConstruct; using $self = $underlying;
		$self __value;
		$Class_TestConstruct(const $underlying& value) noexcept(std::is_nothrow_copy_constructible_v<$underlying>) : __value{value} {}
		operator $underlying() const noexcept { return __value; }
		
	};
	#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	ADV_CHECK_FOR_CONCRETE(TestConstruct);
	

	
	
	
	#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	TestConstruct::TestConstruct(Builtin::i32 i, Builtin::f32 f)  : 
	#line 288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	_i{i}
	{
	}
#line 291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	TestConstruct::~TestConstruct() 
	{
		#line 292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		ADV_USFCS((Unsafe), Write)(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(Builtin::MutableRef((*this))), Builtin::i32(0));
	}

#ifdef ADV_UNITTEST
	#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	static bool $Test_ce0a2454397fc96f = [](){
		#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		Builtin::InlineArray<Builtin::i32(5), Builtin::i32> arr = {Builtin::i32(Builtin::i32(10)), Builtin::i32(Builtin::i32(20)), Builtin::i32(Builtin::i32(30)), Builtin::i32(Builtin::i32(40)), Builtin::i32(Builtin::i32(50))}; 
		#line 298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		ADV_USFCS((Unsafe), Add)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(2))), Builtin::u32(2U)) = Builtin::i32(55);
		#line 299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		ADV_ASSERT((ADV_USFCS((Unsafe), Add)(ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(2)), Builtin::u32(2U)) == Builtin::i32(55)), "Unsafe.Add(arr[2],2u)==55");
		#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		ADV_USFCS((Unsafe), AddByteOffset)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(2))), Builtin::u32(8U)) = Builtin::i32(65);
		#line 302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		ADV_ASSERT((ADV_USFCS((Unsafe), AddByteOffset)(ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(2)), Builtin::u32(8U)) == Builtin::i32(65)), "Unsafe.AddByteOffset(arr[2],8u)==65");
		#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		ADV_ASSERT((!ADV_USFCS((Unsafe), AreSame)(ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(2)), ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(3)))), "notUnsafe.AreSame(arr[2],arr[3])");
		#line 305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		Builtin::MutableRef<Builtin::i32> ra = Builtin::MutableRef(ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(2))); 
		#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		ADV_ASSERT((ADV_USFCS((Unsafe), AreSame)(Builtin::MutableRef(ra), Builtin::MutableRef(ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(2))))), "Unsafe.AreSame(&ra,&arr[2])");
		#line 308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		#if ADV_VERSION_BIG_ENDIAN
		#line 308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		{
		}
		#else
		#line 309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		ADV_ASSERT((ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::i64>)(ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(2))) == Builtin::i64(171798691870LL)), "Unsafe.As<i64>(arr[2])==171798691870");
		#endif
		#line 311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		ADV_ASSERT((ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::i16>)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(2)))) == Builtin::i32(30)), "Unsafe.As<i16>(&arr[2])==30");
		#line 313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		const auto arr2 = arr; 
		#line 314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		ADV_USFCS((Unsafe), AsMutableRef)(ADV_UFCS(_operator_subscript)(arr2.$ref(), Builtin::i32(2))) = Builtin::i32(65);
		#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arr2.$ref(), Builtin::i32(2)) == Builtin::i32(65)), "arr2[2]==65");
		#line 317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		ADV_ASSERT((ADV_USFCS_TEMPLATE((Unsafe), BitCast<Builtin::i32>)(Builtin::f32(0.5f)) == Builtin::i32(1056964608)), "Unsafe.BitCast<i32>(0.5f)==1056964608");
		#line 319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		ADV_ASSERT((ADV_USFCS((Unsafe), ByteOffset)(ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(2)), ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(4))) == Builtin::i32(8)), "Unsafe.ByteOffset(arr[2],arr[4])==8");
		#line 320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		ADV_ASSERT((ADV_USFCS((Unsafe), ByteOffset)(ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(4)), ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(2))) == Builtin::i32(-8)), "Unsafe.ByteOffset(arr[4],arr[2])==-8");
		#line 322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		const auto i = Builtin::u64(500500ULL); 
		#line 323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		ADV_USFCS((Unsafe), Copy)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(2))), i);
		#line 324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(2)) == Builtin::i32(500500)), "arr[2]==500500");
		#line 325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(3)) == Builtin::i32(0)), "arr[3]==0");
		#line 327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		ADV_USFCS((Unsafe), CopyBlock)(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(0)))), ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(1))), Builtin::u32(12U));
		#line 328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(0)) == Builtin::i32(20)), "arr[0]==20");
		#line 329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(1)) == Builtin::i32(500500)), "arr[1]==500500");
		#line 330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(2)) == Builtin::i32(0)), "arr[2]==0");
		#line 331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(3)) == Builtin::i32(0)), "arr[3]==0");
		#line 332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(4)) == Builtin::i32(65)), "arr[4]==65");
		#line 334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		ADV_USFCS((Unsafe), InitBlock)(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(2)))), Builtin::u8(1U), Builtin::u32(8U));
		#line 335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(0)) == Builtin::i32(20)), "arr[0]==20");
		#line 336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(1)) == Builtin::i32(500500)), "arr[1]==500500");
		#line 337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(2)) == Builtin::i32(0x1010101)), "arr[2]==0x1010101");
		#line 338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(3)) == Builtin::i32(0x1010101)), "arr[3]==0x1010101");
		#line 339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(4)) == Builtin::i32(65)), "arr[4]==65");
		#line 340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		ADV_USFCS((Unsafe), InitBlock)(ADV_USFCS_TEMPLATE((Unsafe), As<Builtin::u8>)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(2)))), Builtin::u8(0U), Builtin::u32(8U));
		#line 342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		ADV_ASSERT((!ADV_USFCS((Unsafe), IsNullRef)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(2))))), "notUnsafe.IsNullRef(&arr[2])");
		#line 343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		ADV_ASSERT((!ADV_USFCS((Unsafe), IsNullRef)(ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(2)))), "notUnsafe.IsNullRef(arr[2])");
		#line 344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		ADV_ASSERT((ADV_USFCS((Unsafe), IsNullRef)(ADV_USFCS_TEMPLATE((Unsafe), NullRef<Builtin::i32>)())), "Unsafe.IsNullRef(Unsafe.NullRef<i32>())");
		#line 346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		#if ADV_VERSION_BIG_ENDIAN
		#line 346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		{
		}
		#else
		#line 347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		auto bytes = Builtin::ToInlineArray<Builtin::u8>({Builtin::u8(Builtin::i32(11)), Builtin::u8(Builtin::i32(12)), Builtin::u8(Builtin::i32(13)), Builtin::u8(Builtin::i32(14)), Builtin::u8(Builtin::i32(15))}); 
		#line 348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		ADV_ASSERT((ADV_USFCS_TEMPLATE((Unsafe), Read<Builtin::i32>)(ADV_UFCS(_operator_subscript)(bytes.$ref(), Builtin::i32(0))) == Builtin::i32(0xE0D0C0B)), "Unsafe.Read<i32>(bytes[0])==0xE0D0C0B");
		#line 349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		ADV_USFCS((Unsafe), Write)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(bytes.$ref(), Builtin::i32(1))), Builtin::i32(15));
		#line 350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(bytes.$ref(), Builtin::i32(1)) == Builtin::i32(15)), "bytes[1]==15");
		#line 351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(bytes.$ref(), Builtin::i32(2)) == Builtin::i32(0)), "bytes[2]==0");
		#line 352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(bytes.$ref(), Builtin::i32(3)) == Builtin::i32(0)), "bytes[3]==0");
		#line 353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(bytes.$ref(), Builtin::i32(4)) == Builtin::i32(0)), "bytes[4]==0");
		#line 355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		const Builtin::MutableRef<TestConstruct> testStruct = ADV_USFCS_TEMPLATE((Unsafe), Construct<TestConstruct>)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(bytes.$ref(), Builtin::i32(1))), Builtin::i32(12345), Builtin::f32(123.45f)); 
		#line 356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		ADV_ASSERT((ADV_USFCS_TEMPLATE((Unsafe), Read<Builtin::i32>)(ADV_UFCS(_operator_subscript)(bytes.$ref(), Builtin::i32(1))) == Builtin::i32(12345)), "Unsafe.Read<i32>(bytes[1])==12345");
		#line 357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		ADV_USFCS((Unsafe), Destroy)(testStruct);
		#line 358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		ADV_ASSERT((ADV_USFCS_TEMPLATE((Unsafe), Read<Builtin::i32>)(ADV_UFCS(_operator_subscript)(bytes.$ref(), Builtin::i32(1))) == Builtin::i32(0)), "Unsafe.Read<i32>(bytes[1])==0");
		#endif
		#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		ADV_USFCS((Unsafe), Subtract)(Builtin::MutableRef(ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(2))), Builtin::u32(2U)) = Builtin::i32(5);
		#line 362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		ADV_ASSERT((ADV_USFCS((Unsafe), Subtract)(ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(2)), Builtin::u32(2U)) == Builtin::i32(5)), "Unsafe.Subtract(arr[2],2u)==5");
		#line 363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
		ADV_ASSERT((ADV_USFCS((Unsafe), SubtractByteOffset)(ADV_UFCS(_operator_subscript)(arr.$ref(), Builtin::i32(2)), Builtin::u32(8U)) == Builtin::i32(5)), "Unsafe.SubtractByteOffset(arr[2],8u)==5");
		return true;
	}();
	#endif	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\CompilerServices\\Unsafe.ast"
	

}