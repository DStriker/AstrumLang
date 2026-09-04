#include "Decimal.h"
#include "InlineArray.h"

namespace System {
union Buf12;
union Buf16;
union Buf24;
class Buf28;
class PowerOvfl;
//###############################################################################
//# Type definitions
//###############################################################################
class $Class_Buf12;
	#line 2560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	union Buf12 {
		public: using $self = Buf12;
		public: using $class = $Class_Buf12;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		private: 
		class $Class_DWordsStruct;
		#line 2563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		struct DWordsStruct final : public Builtin::Struct {
			public: using $self = DWordsStruct;
			public: using $class = $Class_DWordsStruct;
			public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
			public: DWordsStruct() = default;
			public: DWordsStruct(Builtin::u32 _u0, Builtin::u32 _u1, Builtin::u32 _u2) : u0{_u0}, u1{_u1}, u2{_u2} {}
			#line 2564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			public: Builtin::u32 u0; ADV_CHECK_REF_STRUCT("u32", Builtin::u32);
			#line 2564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			public: Builtin::u32 u1; ADV_CHECK_REF_STRUCT("u32", Builtin::u32);
			#line 2564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			public: Builtin::u32 u2; ADV_CHECK_REF_STRUCT("u32", Builtin::u32);
			template <size_t I> friend auto& get(DWordsStruct&);
			template <size_t I> friend const auto& get(const DWordsStruct&);
			
		};
		
		private: 
		
		#line 2563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		class $Class_DWordsStruct final : public Builtin::ValueType
		{
			#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			public: using $underlying = DWordsStruct; using $self = $underlying;
			$self __value;
			$Class_DWordsStruct(const $underlying& value) noexcept(std::is_nothrow_copy_constructible_v<$underlying>) : __value{value} {}
			operator $underlying() const noexcept { return __value; }
			
		};
		#line 2563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_CHECK_FOR_CONCRETE(DWordsStruct);
		
		#if (ADV_VERSION_BIG_ENDIAN )
		#line 2573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: [[clang::annotate("unsafe")]] inline auto setLow64(const Builtin::u64& value) -> $self&;
		#line 2572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: [[clang::annotate("unsafe")]] inline auto getLow64() const  -> Builtin::u64;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_PROPERTY_GETTER_SETTER(public, Low64, public, getLow64, public, setLow64, Builtin::u64);
		#endif
		#if (!(ADV_VERSION_BIG_ENDIAN ))
		#line 2581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: [[clang::annotate("unsafe")]] inline auto setLow64(const Builtin::u64& value) -> $self&;
		#line 2580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: [[clang::annotate("unsafe")]] inline auto getLow64() const  -> Builtin::u64;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_PROPERTY_GETTER_SETTER(public, Low64, public, getLow64, public, setLow64, Builtin::u64);
		#endif
		#line 2586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: [[clang::annotate("unsafe")]] inline auto setHigh64(const Builtin::u64& value) -> $self&;
		#line 2585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: [[clang::annotate("unsafe")]] inline auto getHigh64() const  -> Builtin::u64;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_PROPERTY_GETTER_SETTER(public, High64, public, getHigh64, public, setHigh64, Builtin::u64);
		#line 2561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: ASTRUMSTD_API Buf12() noexcept;
		#line 2566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: DWordsStruct DWords; ADV_CHECK_REF_STRUCT("DWordsStruct", DWordsStruct);
		#line 2568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		private: Builtin::u64 ulo64; ADV_CHECK_REF_STRUCT("u64", Builtin::u64);
		
	};
	
	class $Class_Buf16;
	#line 2593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	union Buf16 {
		public: using $self = Buf16;
		public: using $class = $Class_Buf16;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		private: 
		class $Class_DWordsStruct;
		#line 2596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		struct DWordsStruct final : public Builtin::Struct {
			public: using $self = DWordsStruct;
			public: using $class = $Class_DWordsStruct;
			public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
			public: DWordsStruct() = default;
			public: DWordsStruct(Builtin::u32 _u0, Builtin::u32 _u1, Builtin::u32 _u2, Builtin::u32 _u3) : u0{_u0}, u1{_u1}, u2{_u2}, u3{_u3} {}
			#line 2597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			public: Builtin::u32 u0; ADV_CHECK_REF_STRUCT("u32", Builtin::u32);
			#line 2597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			public: Builtin::u32 u1; ADV_CHECK_REF_STRUCT("u32", Builtin::u32);
			#line 2597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			public: Builtin::u32 u2; ADV_CHECK_REF_STRUCT("u32", Builtin::u32);
			#line 2597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			public: Builtin::u32 u3; ADV_CHECK_REF_STRUCT("u32", Builtin::u32);
			template <size_t I> friend auto& get(DWordsStruct&);
			template <size_t I> friend const auto& get(const DWordsStruct&);
			
		};
		
		private: 
		class $Class_QWordsStruct;
		#line 2601 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		struct QWordsStruct final : public Builtin::Struct {
			public: using $self = QWordsStruct;
			public: using $class = $Class_QWordsStruct;
			public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
			public: QWordsStruct() = default;
			public: QWordsStruct(Builtin::u64 _ulo, Builtin::u64 _uhi) : ulo{_ulo}, uhi{_uhi} {}
			#line 2602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			public: Builtin::u64 ulo; ADV_CHECK_REF_STRUCT("u64", Builtin::u64);
			#line 2602 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			public: Builtin::u64 uhi; ADV_CHECK_REF_STRUCT("u64", Builtin::u64);
			template <size_t I> friend auto& get(QWordsStruct&);
			template <size_t I> friend const auto& get(const QWordsStruct&);
			
		};
		
		private: 
		
		#line 2596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		class $Class_DWordsStruct final : public Builtin::ValueType
		{
			#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			public: using $underlying = DWordsStruct; using $self = $underlying;
			$self __value;
			$Class_DWordsStruct(const $underlying& value) noexcept(std::is_nothrow_copy_constructible_v<$underlying>) : __value{value} {}
			operator $underlying() const noexcept { return __value; }
			
		};
		#line 2596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_CHECK_FOR_CONCRETE(DWordsStruct);
		
		private: 
		
		#line 2601 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		class $Class_QWordsStruct final : public Builtin::ValueType
		{
			#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			public: using $underlying = QWordsStruct; using $self = $underlying;
			$self __value;
			$Class_QWordsStruct(const $underlying& value) noexcept(std::is_nothrow_copy_constructible_v<$underlying>) : __value{value} {}
			operator $underlying() const noexcept { return __value; }
			
		};
		#line 2601 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_CHECK_FOR_CONCRETE(QWordsStruct);
		
		#if (ADV_VERSION_BIG_ENDIAN )
		#line 2609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: [[clang::annotate("unsafe")]] inline auto setLow64(const Builtin::u64& value) -> $self&;
		#line 2608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: [[clang::annotate("unsafe")]] inline auto getLow64() const  -> Builtin::u64;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_PROPERTY_GETTER_SETTER(public, Low64, public, getLow64, public, setLow64, Builtin::u64);
		#endif
		#if (ADV_VERSION_BIG_ENDIAN )
		#line 2616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: [[clang::annotate("unsafe")]] inline auto setHigh64(const Builtin::u64& value) -> $self&;
		#line 2615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: [[clang::annotate("unsafe")]] inline auto getHigh64() const  -> Builtin::u64;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_PROPERTY_GETTER_SETTER(public, High64, public, getHigh64, public, setHigh64, Builtin::u64);
		#endif
		#if (!(ADV_VERSION_BIG_ENDIAN ))
		#line 2624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: [[clang::annotate("unsafe")]] inline auto setLow64(const Builtin::u64& value) -> $self&;
		#line 2623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: [[clang::annotate("unsafe")]] inline auto getLow64() const  -> Builtin::u64;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_PROPERTY_GETTER_SETTER(public, Low64, public, getLow64, public, setLow64, Builtin::u64);
		#endif
		#if (!(ADV_VERSION_BIG_ENDIAN ))
		#line 2628 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: [[clang::annotate("unsafe")]] inline auto setHigh64(const Builtin::u64& value) -> $self&;
		#line 2627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: [[clang::annotate("unsafe")]] inline auto getHigh64() const  -> Builtin::u64;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_PROPERTY_GETTER_SETTER(public, High64, public, getHigh64, public, setHigh64, Builtin::u64);
		#endif
		#line 2594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: ASTRUMSTD_API Buf16() noexcept;
		#line 2599 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: DWordsStruct DWords; ADV_CHECK_REF_STRUCT("DWordsStruct", DWordsStruct);
		#line 2604 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		private: QWordsStruct QWords; ADV_CHECK_REF_STRUCT("QWordsStruct", QWordsStruct);
		
	};
	
	class $Class_Buf24;
	#line 2633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	union Buf24 {
		public: using $self = Buf24;
		public: using $class = $Class_Buf24;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		private: 
		class $Class_DWordsStruct;
		#line 2636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		struct DWordsStruct final : public Builtin::Struct {
			public: using $self = DWordsStruct;
			public: using $class = $Class_DWordsStruct;
			public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
			public: DWordsStruct() = default;
			public: DWordsStruct(Builtin::u32 _u0, Builtin::u32 _u1, Builtin::u32 _u2, Builtin::u32 _u3, Builtin::u32 _u4, Builtin::u32 _u5) : u0{_u0}, u1{_u1}, u2{_u2}, u3{_u3}, u4{_u4}, u5{_u5} {}
			#line 2637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			public: Builtin::u32 u0; ADV_CHECK_REF_STRUCT("u32", Builtin::u32);
			#line 2637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			public: Builtin::u32 u1; ADV_CHECK_REF_STRUCT("u32", Builtin::u32);
			#line 2637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			public: Builtin::u32 u2; ADV_CHECK_REF_STRUCT("u32", Builtin::u32);
			#line 2637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			public: Builtin::u32 u3; ADV_CHECK_REF_STRUCT("u32", Builtin::u32);
			#line 2637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			public: Builtin::u32 u4; ADV_CHECK_REF_STRUCT("u32", Builtin::u32);
			#line 2637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			public: Builtin::u32 u5; ADV_CHECK_REF_STRUCT("u32", Builtin::u32);
			template <size_t I> friend auto& get(DWordsStruct&);
			template <size_t I> friend const auto& get(const DWordsStruct&);
			
		};
		
		private: 
		class $Class_QWordsStruct;
		#line 2641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		struct QWordsStruct final : public Builtin::Struct {
			public: using $self = QWordsStruct;
			public: using $class = $Class_QWordsStruct;
			public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
			public: QWordsStruct() = default;
			public: QWordsStruct(Builtin::u64 _ulo, Builtin::u64 _umid, Builtin::u64 _uhi) : ulo{_ulo}, umid{_umid}, uhi{_uhi} {}
			#line 2642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			public: Builtin::u64 ulo; ADV_CHECK_REF_STRUCT("u64", Builtin::u64);
			#line 2642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			public: Builtin::u64 umid; ADV_CHECK_REF_STRUCT("u64", Builtin::u64);
			#line 2642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			public: Builtin::u64 uhi; ADV_CHECK_REF_STRUCT("u64", Builtin::u64);
			template <size_t I> friend auto& get(QWordsStruct&);
			template <size_t I> friend const auto& get(const QWordsStruct&);
			
		};
		
		private: 
		
		#line 2636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		class $Class_DWordsStruct final : public Builtin::ValueType
		{
			#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			public: using $underlying = DWordsStruct; using $self = $underlying;
			$self __value;
			$Class_DWordsStruct(const $underlying& value) noexcept(std::is_nothrow_copy_constructible_v<$underlying>) : __value{value} {}
			operator $underlying() const noexcept { return __value; }
			
		};
		#line 2636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_CHECK_FOR_CONCRETE(DWordsStruct);
		
		private: 
		
		#line 2641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		class $Class_QWordsStruct final : public Builtin::ValueType
		{
			#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			public: using $underlying = QWordsStruct; using $self = $underlying;
			$self __value;
			$Class_QWordsStruct(const $underlying& value) noexcept(std::is_nothrow_copy_constructible_v<$underlying>) : __value{value} {}
			operator $underlying() const noexcept { return __value; }
			
		};
		#line 2641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_CHECK_FOR_CONCRETE(QWordsStruct);
		
		#if (ADV_VERSION_BIG_ENDIAN )
		#line 2649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: [[clang::annotate("unsafe")]] inline auto setLow64(const Builtin::u64& value) -> $self&;
		#line 2648 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: [[clang::annotate("unsafe")]] inline auto getLow64() const  -> Builtin::u64;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_PROPERTY_GETTER_SETTER(public, Low64, public, getLow64, public, setLow64, Builtin::u64);
		#endif
		#if (ADV_VERSION_BIG_ENDIAN )
		#line 2656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: [[clang::annotate("unsafe")]] inline auto setMid64(const Builtin::u64& value) -> $self&;
		#line 2655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: [[clang::annotate("unsafe")]] inline auto getMid64() const  -> Builtin::u64;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_PROPERTY_GETTER_SETTER(public, Mid64, public, getMid64, public, setMid64, Builtin::u64);
		#endif
		#if (ADV_VERSION_BIG_ENDIAN )
		#line 2663 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: [[clang::annotate("unsafe")]] inline auto setHigh64(const Builtin::u64& value) -> $self&;
		#line 2662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: [[clang::annotate("unsafe")]] inline auto getHigh64() const  -> Builtin::u64;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_PROPERTY_GETTER_SETTER(public, High64, public, getHigh64, public, setHigh64, Builtin::u64);
		#endif
		#if (!(ADV_VERSION_BIG_ENDIAN ))
		#line 2671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: [[clang::annotate("unsafe")]] inline auto setLow64(const Builtin::u64& value) -> $self&;
		#line 2670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: [[clang::annotate("unsafe")]] inline auto getLow64() const  -> Builtin::u64;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_PROPERTY_GETTER_SETTER(public, Low64, public, getLow64, public, setLow64, Builtin::u64);
		#endif
		#if (!(ADV_VERSION_BIG_ENDIAN ))
		#line 2675 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: [[clang::annotate("unsafe")]] inline auto setMid64(const Builtin::u64& value) -> $self&;
		#line 2674 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: [[clang::annotate("unsafe")]] inline auto getMid64() const  -> Builtin::u64;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_PROPERTY_GETTER_SETTER(public, Mid64, public, getMid64, public, setMid64, Builtin::u64);
		#endif
		#if (!(ADV_VERSION_BIG_ENDIAN ))
		#line 2679 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: [[clang::annotate("unsafe")]] inline auto setHigh64(const Builtin::u64& value) -> $self&;
		#line 2678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: [[clang::annotate("unsafe")]] inline auto getHigh64() const  -> Builtin::u64;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_PROPERTY_GETTER_SETTER(public, High64, public, getHigh64, public, setHigh64, Builtin::u64);
		#endif
		#line 2634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: ASTRUMSTD_API Buf24() noexcept;
		#line 2639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: DWordsStruct DWords; ADV_CHECK_REF_STRUCT("DWordsStruct", DWordsStruct);
		#line 2644 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		private: QWordsStruct QWords; ADV_CHECK_REF_STRUCT("QWordsStruct", QWordsStruct);
		#line 2682 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: static constexpr auto LENGTH = Builtin::i32(6);
		
	};
	
	class $Class_Buf28;
	#line 2685 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	struct Buf28 final : public Builtin::Struct {
		public: using $self = Buf28;
		public: using $class = $Class_Buf28;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		public: Buf28(Buf24 _buf24, Builtin::u32 _u6) : buf24{_buf24}, u6{_u6} {}
		#line 2691 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: inline Buf28() noexcept = default;
		#line 2686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: Buf24 buf24; ADV_CHECK_REF_STRUCT("Buf24", Buf24);
		#line 2687 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: Builtin::u32 u6; ADV_CHECK_REF_STRUCT("u32", Builtin::u32);
		#line 2689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: static constexpr auto LENGTH = Builtin::i32(7);
		template <size_t I> friend auto& get(Buf28&);
		template <size_t I> friend const auto& get(const Buf28&);
		
	};
	template<> inline auto& get<0>(Buf28& t) { return t.buf24; }
	template<> inline const auto& get<0>(const Buf28& t) { return t.buf24; }
	template<> inline auto& get<1>(Buf28& t) { return t.u6; }
	template<> inline const auto& get<1>(const Buf28& t) { return t.u6; }
	
	
}
namespace std {
	template<> struct tuple_size<System::Buf28> : integral_constant<size_t, 2> {}; 
	template<> struct tuple_element<0, System::Buf28> { using type = decltype(std::declval<System::Buf28>().$ref().buf24); };
	template<> struct tuple_element<1, System::Buf28> { using type = decltype(std::declval<System::Buf28>().$ref().u6); };
	
}

namespace System {class $Class_PowerOvfl;
	#line 2826 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	struct PowerOvfl final : public Builtin::Struct {
		public: using $self = PowerOvfl;
		public: using $class = $Class_PowerOvfl;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		public: constexpr PowerOvfl(Builtin::u32 _Hi, Builtin::u64 _MidLo) : Hi{_Hi}, MidLo{_MidLo} {}
		#line 2830 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: inline constexpr PowerOvfl() noexcept = default;
		#line 2831 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: inline constexpr PowerOvfl(Builtin::u32 hi, Builtin::u32 mid, Builtin::u32 lo) noexcept;
		#line 2827 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: Builtin::u32 Hi;
		#line 2828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: Builtin::u64 MidLo; ADV_CHECK_REF_STRUCT("u64", Builtin::u64);
		template <size_t I> friend auto& get(PowerOvfl&);
		template <size_t I> friend const auto& get(const PowerOvfl&);
		
	};
	template<> inline auto& get<0>(PowerOvfl& t) { return t.Hi; }
	template<> inline const auto& get<0>(const PowerOvfl& t) { return t.Hi; }
	template<> inline auto& get<1>(PowerOvfl& t) { return t.MidLo; }
	template<> inline const auto& get<1>(const PowerOvfl& t) { return t.MidLo; }
	
	
}
namespace std {
	template<> struct tuple_size<System::PowerOvfl> : integral_constant<size_t, 2> {}; 
	template<> struct tuple_element<0, System::PowerOvfl> { using type = decltype(std::declval<System::PowerOvfl>().$ref().Hi); };
	template<> struct tuple_element<1, System::PowerOvfl> { using type = decltype(std::declval<System::PowerOvfl>().$ref().MidLo); };
	
}

namespace System {
	#line 2560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	class $Class_Buf12 final : public Builtin::ValueType
	{
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: using $underlying = Buf12; using $self = $underlying;
		$self __value;
		$Class_Buf12(const $underlying& value) noexcept(std::is_nothrow_copy_constructible_v<$underlying>) : __value{value} {}
		operator $underlying() const noexcept { return __value; }
		#if (ADV_VERSION_BIG_ENDIAN )
		$underlying& setLow64(const Builtin::u64& value) { return __value.setLow64(value); }
		auto getLow64() const -> Builtin::u64 { return __value.getLow64(); }
		#endif 
#if (!(ADV_VERSION_BIG_ENDIAN ))
		$underlying& setLow64(const Builtin::u64& value) { return __value.setLow64(value); }
		auto getLow64() const -> Builtin::u64 { return __value.getLow64(); }
		#endif 
$underlying& setHigh64(const Builtin::u64& value) { return __value.setHigh64(value); }
		auto getHigh64() const -> Builtin::u64 { return __value.getHigh64(); }
		
	};
	#line 2560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ADV_CHECK_FOR_CONCRETE(Buf12);
	

	#line 2593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	class $Class_Buf16 final : public Builtin::ValueType
	{
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: using $underlying = Buf16; using $self = $underlying;
		$self __value;
		$Class_Buf16(const $underlying& value) noexcept(std::is_nothrow_copy_constructible_v<$underlying>) : __value{value} {}
		operator $underlying() const noexcept { return __value; }
		#if (ADV_VERSION_BIG_ENDIAN )
		$underlying& setLow64(const Builtin::u64& value) { return __value.setLow64(value); }
		auto getLow64() const -> Builtin::u64 { return __value.getLow64(); }
		#endif 
#if (ADV_VERSION_BIG_ENDIAN )
		$underlying& setHigh64(const Builtin::u64& value) { return __value.setHigh64(value); }
		auto getHigh64() const -> Builtin::u64 { return __value.getHigh64(); }
		#endif 
#if (!(ADV_VERSION_BIG_ENDIAN ))
		$underlying& setLow64(const Builtin::u64& value) { return __value.setLow64(value); }
		auto getLow64() const -> Builtin::u64 { return __value.getLow64(); }
		#endif 
#if (!(ADV_VERSION_BIG_ENDIAN ))
		$underlying& setHigh64(const Builtin::u64& value) { return __value.setHigh64(value); }
		auto getHigh64() const -> Builtin::u64 { return __value.getHigh64(); }
		#endif 

	};
	#line 2593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ADV_CHECK_FOR_CONCRETE(Buf16);
	

	#line 2633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	class $Class_Buf24 final : public Builtin::ValueType
	{
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: using $underlying = Buf24; using $self = $underlying;
		$self __value;
		$Class_Buf24(const $underlying& value) noexcept(std::is_nothrow_copy_constructible_v<$underlying>) : __value{value} {}
		operator $underlying() const noexcept { return __value; }
		#if (ADV_VERSION_BIG_ENDIAN )
		$underlying& setLow64(const Builtin::u64& value) { return __value.setLow64(value); }
		auto getLow64() const -> Builtin::u64 { return __value.getLow64(); }
		#endif 
#if (ADV_VERSION_BIG_ENDIAN )
		$underlying& setMid64(const Builtin::u64& value) { return __value.setMid64(value); }
		auto getMid64() const -> Builtin::u64 { return __value.getMid64(); }
		#endif 
#if (ADV_VERSION_BIG_ENDIAN )
		$underlying& setHigh64(const Builtin::u64& value) { return __value.setHigh64(value); }
		auto getHigh64() const -> Builtin::u64 { return __value.getHigh64(); }
		#endif 
#if (!(ADV_VERSION_BIG_ENDIAN ))
		$underlying& setLow64(const Builtin::u64& value) { return __value.setLow64(value); }
		auto getLow64() const -> Builtin::u64 { return __value.getLow64(); }
		#endif 
#if (!(ADV_VERSION_BIG_ENDIAN ))
		$underlying& setMid64(const Builtin::u64& value) { return __value.setMid64(value); }
		auto getMid64() const -> Builtin::u64 { return __value.getMid64(); }
		#endif 
#if (!(ADV_VERSION_BIG_ENDIAN ))
		$underlying& setHigh64(const Builtin::u64& value) { return __value.setHigh64(value); }
		auto getHigh64() const -> Builtin::u64 { return __value.getHigh64(); }
		#endif 

	};
	#line 2633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ADV_CHECK_FOR_CONCRETE(Buf24);
	

	#line 2685 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	class $Class_Buf28 final : public Builtin::ValueType
	{
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: using $underlying = Buf28; using $self = $underlying;
		$self __value;
		$Class_Buf28(const $underlying& value) noexcept(std::is_nothrow_copy_constructible_v<$underlying>) : __value{value} {}
		operator $underlying() const noexcept { return __value; }
		
	};
	#line 2685 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ADV_CHECK_FOR_CONCRETE(Buf28);
	

	#line 2826 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	class $Class_PowerOvfl final : public Builtin::ValueType
	{
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		public: using $underlying = PowerOvfl; using $self = $underlying;
		$self __value;
		$Class_PowerOvfl(const $underlying& value) noexcept(std::is_nothrow_copy_constructible_v<$underlying>) : __value{value} {}
		operator $underlying() const noexcept { return __value; }
		
	};
	#line 2826 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	ADV_CHECK_FOR_CONCRETE(PowerOvfl);
	
//###############################################################################
//# Free function declarations
//###############################################################################
#line 2695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	namespace __Unsafe { [[clang::annotate("unsafe")]] auto ScaleResult(Builtin::Unsafe::__RawPtr<Buf24> buf, Builtin::u32 hi, Builtin::i32 scale)  -> const Builtin::i32; }
#line 2848 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	namespace __Unsafe { [[clang::annotate("unsafe")]] auto SearchScale(Builtin::MutableRef<Buf12> __buf__, Builtin::i32 scale)  -> const Builtin::i32; }
#line 2919 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto Unscale(Builtin::MutableRef<Builtin::u32> __low__, Builtin::MutableRef<Builtin::u64> __high__, Builtin::MutableRef<Builtin::i32> __scale__) noexcept -> void;
#line 2999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	namespace __Unsafe { [[clang::annotate("unsafe")]] auto Div96By64(Builtin::MutableRef<Buf12> __buf__, Builtin::u64 den)  -> const Builtin::u32; }
#line 3052 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	namespace __Unsafe { [[clang::annotate("unsafe")]] auto Div128By96(Builtin::MutableRef<Buf16> __buf__, Builtin::MutableRef<Buf12> __bufDen__)  -> const Builtin::u32; }
#line 3105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	auto printd(System::Decimal d)  -> void;
//###############################################################################
//# Global compile-time constants
//###############################################################################
#line 2513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
inline constexpr Builtin::InlineArray<10, Builtin::u32> Int32Powers10 = Builtin::ToInlineArray<Builtin::u32>({Builtin::u32(Builtin::u32(1U)), Builtin::u32(Builtin::u32(10U)), Builtin::u32(Builtin::u32(100U)), Builtin::u32(Builtin::u32(1000U)), Builtin::u32(Builtin::u32(10000U)), Builtin::u32(Builtin::u32(100000U)), Builtin::u32(Builtin::u32(1000000U)), Builtin::u32(Builtin::u32(10000000U)), Builtin::u32(Builtin::u32(100000000U)), Builtin::u32(Builtin::u32(1000000000U))});
#line 2526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
inline constexpr Builtin::InlineArray<19, Builtin::u64> Int64Powers10 = Builtin::ToInlineArray<Builtin::u64>({Builtin::u64(Builtin::u64(10ULL)), Builtin::u64(Builtin::u64(100ULL)), Builtin::u64(Builtin::u64(1000ULL)), Builtin::u64(Builtin::u64(10000ULL)), Builtin::u64(Builtin::u64(100000ULL)), Builtin::u64(Builtin::u64(1000000ULL)), Builtin::u64(Builtin::u64(10000000ULL)), Builtin::u64(Builtin::u64(100000000ULL)), Builtin::u64(Builtin::u64(1000000000ULL)), Builtin::u64(Builtin::u64(10000000000ULL)), Builtin::u64(Builtin::u64(100000000000ULL)), Builtin::u64(Builtin::u64(1000000000000ULL)), Builtin::u64(Builtin::u64(10000000000000ULL)), Builtin::u64(Builtin::u64(100000000000000ULL)), Builtin::u64(Builtin::u64(1000000000000000ULL)), Builtin::u64(Builtin::u64(10000000000000000ULL)), Builtin::u64(Builtin::u64(100000000000000000ULL)), Builtin::u64(Builtin::u64(1000000000000000000ULL)), Builtin::u64(Builtin::u64(10000000000000000000ULL))});
#line 2548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
inline constexpr Builtin::InlineArray<81, Builtin::f64> FloatPowers10 = Builtin::ToInlineArray<Builtin::f64>({Builtin::f64(Builtin::f64(1.0)), Builtin::f64(Builtin::f64(1.0e1)), Builtin::f64(Builtin::f64(1.0e2)), Builtin::f64(Builtin::f64(1.0e3)), Builtin::f64(Builtin::f64(1.0e4)), Builtin::f64(Builtin::f64(1.0e5)), Builtin::f64(Builtin::f64(1.0e6)), Builtin::f64(Builtin::f64(1.0e7)), Builtin::f64(Builtin::f64(1.0e8)), Builtin::f64(Builtin::f64(1.0e9)), Builtin::f64(Builtin::f64(1.0e10)), Builtin::f64(Builtin::f64(1.0e11)), Builtin::f64(Builtin::f64(1.0e12)), Builtin::f64(Builtin::f64(1.0e13)), Builtin::f64(Builtin::f64(1.0e14)), Builtin::f64(Builtin::f64(1.0e15)), Builtin::f64(Builtin::f64(1.0e16)), Builtin::f64(Builtin::f64(1.0e17)), Builtin::f64(Builtin::f64(1.0e18)), Builtin::f64(Builtin::f64(1.0e19)), Builtin::f64(Builtin::f64(1.0e20)), Builtin::f64(Builtin::f64(1.0e21)), Builtin::f64(Builtin::f64(1.0e22)), Builtin::f64(Builtin::f64(1.0e23)), Builtin::f64(Builtin::f64(1.0e24)), Builtin::f64(Builtin::f64(1.0e25)), Builtin::f64(Builtin::f64(1.0e26)), Builtin::f64(Builtin::f64(1.0e27)), Builtin::f64(Builtin::f64(1.0e28)), Builtin::f64(Builtin::f64(1.0e29)), Builtin::f64(Builtin::f64(1.0e30)), Builtin::f64(Builtin::f64(1.0e31)), Builtin::f64(Builtin::f64(1.0e32)), Builtin::f64(Builtin::f64(1.0e33)), Builtin::f64(Builtin::f64(1.0e34)), Builtin::f64(Builtin::f64(1.0e35)), Builtin::f64(Builtin::f64(1.0e36)), Builtin::f64(Builtin::f64(1.0e37)), Builtin::f64(Builtin::f64(1.0e38)), Builtin::f64(Builtin::f64(1.0e39)), Builtin::f64(Builtin::f64(1.0e40)), Builtin::f64(Builtin::f64(1.0e41)), Builtin::f64(Builtin::f64(1.0e42)), Builtin::f64(Builtin::f64(1.0e43)), Builtin::f64(Builtin::f64(1.0e44)), Builtin::f64(Builtin::f64(1.0e45)), Builtin::f64(Builtin::f64(1.0e46)), Builtin::f64(Builtin::f64(1.0e47)), Builtin::f64(Builtin::f64(1.0e48)), Builtin::f64(Builtin::f64(1.0e49)), Builtin::f64(Builtin::f64(1.0e50)), Builtin::f64(Builtin::f64(1.0e51)), Builtin::f64(Builtin::f64(1.0e52)), Builtin::f64(Builtin::f64(1.0e53)), Builtin::f64(Builtin::f64(1.0e54)), Builtin::f64(Builtin::f64(1.0e55)), Builtin::f64(Builtin::f64(1.0e56)), Builtin::f64(Builtin::f64(1.0e57)), Builtin::f64(Builtin::f64(1.0e58)), Builtin::f64(Builtin::f64(1.0e59)), Builtin::f64(Builtin::f64(1.0e60)), Builtin::f64(Builtin::f64(1.0e61)), Builtin::f64(Builtin::f64(1.0e62)), Builtin::f64(Builtin::f64(1.0e63)), Builtin::f64(Builtin::f64(1.0e64)), Builtin::f64(Builtin::f64(1.0e65)), Builtin::f64(Builtin::f64(1.0e66)), Builtin::f64(Builtin::f64(1.0e67)), Builtin::f64(Builtin::f64(1.0e68)), Builtin::f64(Builtin::f64(1.0e69)), Builtin::f64(Builtin::f64(1.0e70)), Builtin::f64(Builtin::f64(1.0e71)), Builtin::f64(Builtin::f64(1.0e72)), Builtin::f64(Builtin::f64(1.0e73)), Builtin::f64(Builtin::f64(1.0e74)), Builtin::f64(Builtin::f64(1.0e75)), Builtin::f64(Builtin::f64(1.0e76)), Builtin::f64(Builtin::f64(1.0e77)), Builtin::f64(Builtin::f64(1.0e78)), Builtin::f64(Builtin::f64(1.0e79)), Builtin::f64(Builtin::f64(1.0e80))});
#line 2694 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
inline constexpr auto DEC_SCALE_MAX = Builtin::i32(28);
//###############################################################################
//# Global variable declarations
//###############################################################################
#line 2837 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
static const auto PowerOvflValues = Builtin::ToInlineArray<PowerOvfl>({{ Builtin::u32(429496729U), Builtin::u32(2576980377U), Builtin::u32(2576980377U) }, { Builtin::u32(42949672U), Builtin::u32(4123168604U), Builtin::u32(687194767U) }, { Builtin::u32(4294967U), Builtin::u32(1271310319U), Builtin::u32(2645699854U) }, { Builtin::u32(429496U), Builtin::u32(3133608139U), Builtin::u32(694066715U) }, { Builtin::u32(42949U), Builtin::u32(2890341191U), Builtin::u32(2216890319U) }, { Builtin::u32(4294U), Builtin::u32(4154504685U), Builtin::u32(2369172679U) }, { Builtin::u32(429U), Builtin::u32(2133437386U), Builtin::u32(4102387834U) }, { Builtin::u32(42U), Builtin::u32(4078814305U), Builtin::u32(410238783U) }});

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	Decimal::Decimal(Builtin::f32 value) 
	{
		#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		const Builtin::Auto<decltype(Builtin::i32{ADV_UFCS(NarrowToUInt8)((ADV_UPCS(Bits)(value.$ref()) >> Builtin::i32(23)).$ref())} - Builtin::i32(126))> exp = Builtin::i32{ADV_UFCS(NarrowToUInt8)((ADV_UPCS(Bits)(value.$ref()) >> Builtin::i32(23)).$ref())} - Builtin::i32(126); 
		#line 177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if ((exp <=> Builtin::i32(-94)) < 0) {
			#line 178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return ;
		}
		#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if ((exp <=> Builtin::i32(96)) > 0) {
			#line 182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			Builtin::Throw(Builtin::DecimalOverflowException{});
		}
		#line 184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype(Builtin::i32(0))> flags = Builtin::i32(0); 
		#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if ((value <=> Builtin::i32(0)) < 0) {
			#line 186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			value = -value;
			#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			flags = __Decimal$Protected::SignMask;
		}
		#line 192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::f64 d = value; 
		#line 193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype(Builtin::i32(6) - ((exp * Builtin::i32(19728)) >> Builtin::i32(16)))> power = Builtin::i32(6) - ((exp * Builtin::i32(19728)) >> Builtin::i32(16)); 
		#line 195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if ((power <=> Builtin::i32(0)) >= 0) {
			#line 196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			if ((power <=> SCALE_MAX) > 0) {
				#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				power = SCALE_MAX;
			}
			#line 200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			d *= ADV_UFCS(_operator_subscript)(FloatPowers10.$ref(), power);
		} else {
			#line 201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			{
				#line 202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if (power != Builtin::i32(-1) || (d <=> Builtin::f64(1.0e7)) >= 0) {
					#line 203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					d /= ADV_UFCS(_operator_subscript)(FloatPowers10.$ref(), -power);
				} else {
					#line 204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					{
						#line 205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						power = Builtin::i32(0);
					}
				}
			}
		}
		#line 209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT(((d <=> Builtin::f64(1.0e7)) < 0), "d<1.0e7");
		#line 210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if ((d <=> Builtin::f64(1.0e6)) < 0 && (power <=> SCALE_MAX) < 0) {
			#line 211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			d *= Builtin::i32(10);
			#line 212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			power++;
			#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			ADV_ASSERT(((d <=> Builtin::f64(1.0e6)) >= 0), "d>=1.0e6");
		}
		#line 217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype(Builtin::u32{ADV_UFCS(RoundTiesEvenToInt32)(d.$ref())})> mantissa = Builtin::u32{ADV_UFCS(RoundTiesEvenToInt32)(d.$ref())}; 
		#line 218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if (mantissa == Builtin::i32(0)) {
			#line 219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return ;
		}
		#line 221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if ((power <=> Builtin::i32(0)) < 0) {
			#line 222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			power = -power;
			#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			if ((power <=> Builtin::i32(10)) < 0) {
				#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				_lo = Builtin::u64{mantissa} * ADV_UFCS(_operator_subscript)(Int32Powers10.$ref(), power);
			} else {
				#line 225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				{
					#line 226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					if ((power <=> Builtin::i32(18)) > 0) {
						#line 227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						const Builtin::Auto<decltype(Builtin::u64{mantissa} * ADV_UFCS(_operator_subscript)(Int32Powers10.$ref(), power - Builtin::i32(18)))> low = Builtin::u64{mantissa} * ADV_UFCS(_operator_subscript)(Int32Powers10.$ref(), power - Builtin::i32(18)); 
						#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						const Builtin::Auto<decltype(Builtin::u128{low} * TenToPowerEighteen)> result = Builtin::u128{low} * TenToPowerEighteen; 
						#line 229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						_lo = ADV_UFCS(Low64)(result.$ref());
						#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						const Builtin::Auto<decltype(ADV_UFCS(High64)(result.$ref()))> high = ADV_UFCS(High64)(result.$ref()); 
						#line 231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						if ((high <=> ADV_USPCS(MaxValue, Builtin::u32)()) > 0) {
							#line 232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							Builtin::Throw(Builtin::DecimalOverflowException{});
						}
						#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						_hi = Builtin::Cast<true, Builtin::u32>(high);
					} else {
						#line 235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						{
							#line 236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							Builtin::Auto<decltype(Builtin::u64{mantissa} * ADV_UFCS(_operator_subscript)(Int32Powers10.$ref(), power - Builtin::i32(9)))> low = Builtin::u64{mantissa} * ADV_UFCS(_operator_subscript)(Int32Powers10.$ref(), power - Builtin::i32(9)); 
							#line 237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							Builtin::Auto<decltype(Builtin::u64{TenToPowerNine} * (low >> Builtin::i32(32)))> high = Builtin::u64{TenToPowerNine} * (low >> Builtin::i32(32)); 
							#line 238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							low = Builtin::u64{TenToPowerNine} * ADV_UFCS(NarrowToUInt32)(low.$ref());
							#line 239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							high += low >> Builtin::i32(32);
							#line 240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							_lo = (Builtin::u64{ADV_UFCS(NarrowToUInt32)(high.$ref())} << Builtin::i32(32)) | ADV_UFCS(NarrowToUInt32)(low.$ref());
							#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							high >>= Builtin::i32(32);
							#line 242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							_hi = Builtin::Cast<true, Builtin::u32>(high);
						}
					}
				}
			}
		} else {
			#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			{
				#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				Builtin::Auto<decltype(power)> lmax = power; 
				#line 247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if ((lmax <=> Builtin::i32(6)) > 0) {
					#line 248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					lmax = Builtin::i32(6);
				}
				#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if ((mantissa & Builtin::i32(0xF)) == Builtin::i32(0) && (lmax <=> Builtin::i32(4)) >= 0) {
					#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					const Builtin::Auto<decltype(ADV_UFCS(_operator_bsl)(mantissa, Builtin::i32(10000)))> div = ADV_UFCS(_operator_bsl)(mantissa, Builtin::i32(10000)); 
					#line 253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					if (mantissa == div * Builtin::i32(10000)) {
						#line 254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						mantissa = div;
						#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						power -= Builtin::i32(4);
						#line 256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						lmax -= Builtin::i32(4);
					}
				}
				#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if ((mantissa & Builtin::i32(3)) == Builtin::i32(0) && (lmax <=> Builtin::i32(2)) >= 0) {
					#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					const Builtin::Auto<decltype(ADV_UFCS(_operator_bsl)(mantissa, Builtin::i32(100)))> div = ADV_UFCS(_operator_bsl)(mantissa, Builtin::i32(100)); 
					#line 262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					if (mantissa == div * Builtin::i32(100)) {
						#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						mantissa = div;
						#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						power -= Builtin::i32(2);
						#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						lmax -= Builtin::i32(2);
					}
				}
				#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if ((mantissa & Builtin::i32(1)) == Builtin::i32(0) && (lmax <=> Builtin::i32(1)) >= 0) {
					#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					const Builtin::Auto<decltype(ADV_UFCS(_operator_bsl)(mantissa, Builtin::i32(10)))> div = ADV_UFCS(_operator_bsl)(mantissa, Builtin::i32(10)); 
					#line 271 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					if (mantissa == div * Builtin::i32(10)) {
						#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						mantissa = div;
						#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						power--;
					}
				}
				#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				_lo = mantissa;
				#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				flags |= Builtin::u32{power} << __Decimal$Protected::ScaleShift;
			}
		}
		#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		_flags = flags;
	}
#line 284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	Decimal::Decimal(Builtin::f64 value) 
	{
		#line 286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		const Builtin::Auto<decltype(Builtin::i32{ADV_UFCS(NarrowToUInt32)((ADV_UPCS(Bits)(value.$ref()) >> Builtin::i32(52)).$ref()) & Builtin::u32(0x7FFU)} - Builtin::i32(1022))> exp = Builtin::i32{ADV_UFCS(NarrowToUInt32)((ADV_UPCS(Bits)(value.$ref()) >> Builtin::i32(52)).$ref()) & Builtin::u32(0x7FFU)} - Builtin::i32(1022); 
		#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if ((exp <=> Builtin::i32(-94)) < 0) {
			#line 290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return ;
		}
		#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if ((exp <=> Builtin::i32(96)) > 0) {
			#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			Builtin::Throw(Builtin::DecimalOverflowException{});
		}
		#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype(Builtin::i32(0))> flags = Builtin::i32(0); 
		#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if ((value <=> Builtin::i32(0)) < 0) {
			#line 298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			value = -value;
			#line 299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			flags = __Decimal$Protected::SignMask;
		}
		#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::f64 d = value; 
		#line 305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype(Builtin::i32(14) - ((exp * Builtin::i32(19728)) >> Builtin::i32(16)))> power = Builtin::i32(14) - ((exp * Builtin::i32(19728)) >> Builtin::i32(16)); 
		#line 307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if ((power <=> Builtin::i32(0)) >= 0) {
			#line 308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			if ((power <=> SCALE_MAX) > 0) {
				#line 309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				power = SCALE_MAX;
			}
			#line 312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			d *= ADV_UFCS(_operator_subscript)(FloatPowers10.$ref(), power);
		} else {
			#line 313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			{
				#line 314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if (power != Builtin::i32(-1) || (d <=> Builtin::f64(1.0e15)) >= 0) {
					#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					d /= ADV_UFCS(_operator_subscript)(FloatPowers10.$ref(), -power);
				} else {
					#line 316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					{
						#line 317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						power = Builtin::i32(0);
					}
				}
			}
		}
		#line 321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT(((d <=> Builtin::f64(1.0e15)) < 0), "d<1.0e15");
		#line 322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if ((d <=> Builtin::f64(1.0e14)) < 0 && (power <=> SCALE_MAX) < 0) {
			#line 323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			d *= Builtin::i32(10);
			#line 324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			power++;
			#line 325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			ADV_ASSERT(((d <=> Builtin::f64(1.0e14)) >= 0), "d>=1.0e14");
		}
		#line 329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype(Builtin::u64{ADV_UFCS(RoundTiesEvenToInt64)(d.$ref())})> mantissa = Builtin::u64{ADV_UFCS(RoundTiesEvenToInt64)(d.$ref())}; 
		#line 330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if (mantissa == Builtin::i32(0)) {
			#line 331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return ;
		}
		#line 333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if ((power <=> Builtin::i32(0)) < 0) {
			#line 334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			power = -power;
			#line 335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			if ((power <=> Builtin::i32(10)) < 0) {
				#line 336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(Int32Powers10.$ref(), power))> pow10 = ADV_UFCS(_operator_subscript)(Int32Powers10.$ref(), power); 
				#line 337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				const Builtin::Auto<decltype(Builtin::u64{ADV_UFCS(NarrowToUInt32)(mantissa.$ref())} * pow10)> low = Builtin::u64{ADV_UFCS(NarrowToUInt32)(mantissa.$ref())} * pow10; 
				#line 338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				Builtin::Auto<decltype((mantissa >> Builtin::i32(32)) * pow10)> high = (mantissa >> Builtin::i32(32)) * pow10; 
				#line 339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				high += low >> Builtin::i32(32);
				#line 340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				_lo = (Builtin::u64{ADV_UFCS(NarrowToUInt32)(high.$ref())} << Builtin::i32(32)) | ADV_UFCS(NarrowToUInt32)(low.$ref());
				#line 341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				high >>= Builtin::i32(32);
				#line 342 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				_hi = Builtin::Cast<true, Builtin::u32>(high);
			} else {
				#line 343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				{
					#line 344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					ADV_ASSERT(((power <=> Builtin::i32(14)) <= 0), "power<=14");
					#line 345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					const Builtin::Auto<decltype(Builtin::u128{mantissa} * ADV_UFCS(_operator_subscript)(Int64Powers10.$ref(), power - Builtin::i32(1)))> result = Builtin::u128{mantissa} * ADV_UFCS(_operator_subscript)(Int64Powers10.$ref(), power - Builtin::i32(1)); 
					#line 346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					_lo = ADV_UFCS(Low64)(result.$ref());
					#line 347 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					const Builtin::Auto<decltype(ADV_UFCS(High64)(result.$ref()))> high = ADV_UFCS(High64)(result.$ref()); 
					#line 348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					if ((high <=> ADV_USPCS(MaxValue, Builtin::u32)()) > 0) {
						#line 349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						Builtin::Throw(Builtin::DecimalOverflowException{});
					}
					#line 351 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					_hi = Builtin::Cast<true, Builtin::u32>(high);
				}
			}
		} else {
			#line 353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			{
				#line 354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				Builtin::Auto<decltype(power)> lmax = power; 
				#line 355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if ((lmax <=> Builtin::i32(14)) > 0) {
					#line 356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					lmax = Builtin::i32(14);
				}
				#line 359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if (ADV_UFCS(NarrowToUInt8)(mantissa.$ref()) == Builtin::i32(0) && (lmax <=> Builtin::i32(8)) >= 0) {
					#line 360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					const Builtin::Auto<decltype(ADV_UFCS(_operator_bsl)(mantissa, Builtin::i32(100000000)))> div = ADV_UFCS(_operator_bsl)(mantissa, Builtin::i32(100000000)); 
					#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					if (ADV_UFCS(NarrowToUInt32)(mantissa.$ref()) == ADV_UFCS(NarrowToUInt32)((div * Builtin::i32(100000000)).$ref())) {
						#line 362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						mantissa = div;
						#line 363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						power -= Builtin::i32(8);
						#line 364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						lmax -= Builtin::i32(8);
					}
				}
				#line 368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if ((mantissa & Builtin::i32(0xF)) == Builtin::i32(0) && (lmax <=> Builtin::i32(4)) >= 0) {
					#line 369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					const Builtin::Auto<decltype(ADV_UFCS(_operator_bsl)(mantissa, Builtin::i32(10000)))> div = ADV_UFCS(_operator_bsl)(mantissa, Builtin::i32(10000)); 
					#line 370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					if (ADV_UFCS(NarrowToUInt32)(mantissa.$ref()) == ADV_UFCS(NarrowToUInt32)((div * Builtin::i32(10000)).$ref())) {
						#line 371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						mantissa = div;
						#line 372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						power -= Builtin::i32(4);
						#line 373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						lmax -= Builtin::i32(4);
					}
				}
				#line 377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if ((mantissa & Builtin::i32(3)) == Builtin::i32(0) && (lmax <=> Builtin::i32(2)) >= 0) {
					#line 378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					const Builtin::Auto<decltype(ADV_UFCS(_operator_bsl)(mantissa, Builtin::i32(100)))> div = ADV_UFCS(_operator_bsl)(mantissa, Builtin::i32(100)); 
					#line 379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					if (ADV_UFCS(NarrowToUInt32)(mantissa.$ref()) == ADV_UFCS(NarrowToUInt32)((div * Builtin::i32(100)).$ref())) {
						#line 380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						mantissa = div;
						#line 381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						power -= Builtin::i32(2);
						#line 382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						lmax -= Builtin::i32(2);
					}
				}
				#line 386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if ((mantissa & Builtin::i32(1)) == Builtin::i32(0) && (lmax <=> Builtin::i32(1)) >= 0) {
					#line 387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					const Builtin::Auto<decltype(ADV_UFCS(_operator_bsl)(mantissa, Builtin::i32(10)))> div = ADV_UFCS(_operator_bsl)(mantissa, Builtin::i32(10)); 
					#line 388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					if (ADV_UFCS(NarrowToUInt32)(mantissa.$ref()) == ADV_UFCS(NarrowToUInt32)((div * Builtin::i32(10)).$ref())) {
						#line 389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						mantissa = div;
						#line 390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						power--;
					}
				}
				#line 394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				_lo = mantissa;
				#line 395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				flags |= Builtin::u32{power} << __Decimal$Protected::ScaleShift;
			}
		}
		#line 398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		_flags = flags;
	}
#line 401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	Decimal::Decimal(Builtin::f128 value)  :
	#line 403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	Decimal(Builtin::Cast<true, Builtin::f64>(value))
	{
	}
#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	Decimal::Decimal(Builtin::f16 value)  :
	#line 408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	Decimal(Builtin::Cast<true, Builtin::f32>(value))
	{
	}
#line 516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	Decimal::operator Builtin::f64() const noexcept
	{
		#line 519 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		constexpr Builtin::Auto<decltype(Builtin::f64(1.8446744073709552e+19))> multiplier64 = Builtin::f64(1.8446744073709552e+19);
		#line 520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		const Builtin::Auto<decltype((Builtin::f64{ADV_UPCS(_lo)((*this).$ref())} + Builtin::f64{ADV_UPCS(_hi)((*this).$ref())} * multiplier64) / ADV_UFCS(_operator_subscript)(FloatPowers10.$ref(), Builtin::Cast<true, Builtin::u32>(ADV_UPCS(Scale)((*this).$ref()))))> f = (Builtin::f64{ADV_UPCS(_lo)((*this).$ref())} + Builtin::f64{ADV_UPCS(_hi)((*this).$ref())} * multiplier64) / ADV_UFCS(_operator_subscript)(FloatPowers10.$ref(), Builtin::Cast<true, Builtin::u32>(ADV_UPCS(Scale)((*this).$ref()))); 
		#line 521 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		return (_flags <=> Builtin::i32(0)) >= 0 ? f : -f;
	}
#line 524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	Decimal::operator Builtin::f128() const noexcept
	{
		#line 527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		constexpr Builtin::Auto<decltype(Builtin::f128{ADV_USPCS(MaxValue, Builtin::u64)()} + Builtin::i32(1))> multiplier64 = Builtin::f128{ADV_USPCS(MaxValue, Builtin::u64)()} + Builtin::i32(1);
		#line 528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		const Builtin::Auto<decltype((Builtin::f128{ADV_UPCS(_lo)((*this).$ref())} + Builtin::f128{ADV_UPCS(_hi)((*this).$ref())} * multiplier64) / ADV_UFCS(_operator_subscript)(FloatPowers10.$ref(), Builtin::Cast<true, Builtin::u32>(ADV_UPCS(Scale)((*this).$ref()))))> f = (Builtin::f128{ADV_UPCS(_lo)((*this).$ref())} + Builtin::f128{ADV_UPCS(_hi)((*this).$ref())} * multiplier64) / ADV_UFCS(_operator_subscript)(FloatPowers10.$ref(), Builtin::Cast<true, Builtin::u32>(ADV_UPCS(Scale)((*this).$ref()))); 
		#line 529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		return (_flags <=> Builtin::i32(0)) >= 0 ? f : -f;
	}
#line 566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	auto Decimal::operator<=>($self other) const noexcept -> const Builtin::i32
	{
		#line 568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if ((ADV_UPCS(_lo)(other.$ref()) | ADV_UPCS(_hi)(other.$ref())) == Builtin::u32(0U)) {
			#line 569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			if ((_lo | _hi) == Builtin::u32(0U)) {
				#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				return Builtin::i32(0);
			}
			#line 572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return (_flags >> Builtin::i32(31)) | Builtin::i32(1);
		}
		#line 574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if ((_lo | _hi) == Builtin::u32(0U)) {
			#line 575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return -((ADV_UPCS(_flags)(other.$ref()) >> Builtin::i32(31)) | Builtin::i32(1));
		}
		#line 577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_sub_mod)((_flags >> Builtin::i32(31)), (ADV_UPCS(_flags)(other.$ref()) >> Builtin::i32(31))))> sign = ADV_UFCS(_operator_sub_mod)((_flags >> Builtin::i32(31)), (ADV_UPCS(_flags)(other.$ref()) >> Builtin::i32(31))); 
		#line 578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if (sign != Builtin::i32(0)) {
			#line 579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return sign;
		}
		#line 581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		return CmpSub(other);
	}
#line 584 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	auto Decimal::AddSub($self other, bool sign) const  -> const $self
	{
		#line 586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype(_lo)> low = _lo; 
		#line 587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype(_hi)> high = _hi; 
		#line 588 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype(ADV_UFCS(NarrowToUInt32)(_flags.$ref()))> flags = ADV_UFCS(NarrowToUInt32)(_flags.$ref()); 
		#line 589 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype(ADV_UFCS(NarrowToUInt32)(ADV_UPCS(_flags)(other.$ref()).$ref()))> otherFlags = ADV_UFCS(NarrowToUInt32)(ADV_UPCS(_flags)(other.$ref()).$ref()); 
		#line 591 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		const Builtin::Auto<decltype(otherFlags ^ flags)> xorflags = otherFlags ^ flags; 
		#line 592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		sign ^= (xorflags & __Decimal$Protected::SignMask) != Builtin::i32(0);
		#line 595 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		auto flipSign = [&] () 
		{
			#line 596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			flags ^= __Decimal$Protected::SignMask;
			#line 597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			high = ADV_UFCS(_operator_not)(high);
			#line 598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			low = ADV_UFCS(NarrowToUInt64)((ADV_UFCS(NarrowToInt64)(-low.$ref())).$ref());
			#line 599 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			if (low == Builtin::i32(0)) {
				#line 600 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				ADV_UFCS(_operator_add_add_mod_postfix)(high);
			}
			#line 603 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return $self{low, high, ADV_UFCS(NarrowToInt32)(flags.$ref())};
		}; 
		#line 607 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		auto alignedScale = [&] () 
		{
			#line 608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			if ((flags & __Decimal$Protected::ScaleMask) == Builtin::i32(0)) {
				#line 609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				Builtin::Throw(Builtin::DecimalOverflowException{});
			}
			#line 612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			ADV_UFCS(_operator_sub_mod_eq)(flags, Builtin::i32(1) << __Decimal$Protected::ScaleShift);
			#line 614 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			constexpr auto  divisor = Builtin::u32(10U);
			#line 615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			auto num = ADV_UFCS(_operator_add_mod)(Builtin::u64{high}, (Builtin::u64(1ULL) << Builtin::i32(32))); 
			#line 616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			high = ADV_UFCS(NarrowToUInt32)((ADV_UFCS(_operator_bsl)(num, divisor)).$ref());
			#line 617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			num = ADV_UFCS(_operator_add_mod)(((ADV_UFCS(_operator_sub_mod)(num, ADV_UFCS(_operator_mul_mod)(high, divisor))) << Builtin::i32(32)), (low >> Builtin::i32(32)));
			#line 618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			auto div = ADV_UFCS(NarrowToUInt32)((ADV_UFCS(_operator_bsl)(num, divisor)).$ref()); 
			#line 619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			num = ADV_UFCS(_operator_add_mod)(((ADV_UFCS(_operator_sub_mod)(num, ADV_UFCS(_operator_mul_mod)(high, divisor))) << Builtin::i32(32)), ADV_UFCS(NarrowToUInt32)(low.$ref()));
			#line 620 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			low = div;
			#line 621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			low <<= Builtin::i32(32);
			#line 622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			div = ADV_UFCS(NarrowToUInt32)((ADV_UFCS(_operator_bsl)(num, divisor)).$ref());
			#line 623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			ADV_UFCS(_operator_add_mod_eq)(low, div);
			#line 624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			div = ADV_UFCS(_operator_sub_mod)(ADV_UFCS(NarrowToUInt32)(num.$ref()), ADV_UFCS(_operator_mul_mod)(div, divisor));
			#line 626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			if ((div <=> Builtin::i32(5)) >= 0 && ((div <=> Builtin::i32(5)) > 0 || (low & Builtin::u32(1U)) != Builtin::i32(0))) {
				#line 627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if (ADV_UFCS(_operator_add_add_mod)(low) == Builtin::i32(0)) {
					#line 628 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					ADV_UFCS(_operator_add_add_mod_postfix)(high);
				}
			}
			#line 632 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return $self{low, high, ADV_UFCS(NarrowToInt32)(flags.$ref())};
		}; 
		#line 635 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		auto alignedAdd = [&] () 
		{
			#line 636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			const auto low1 = low; 
			#line 637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			const auto high1 = high; 
			#line 638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			if (sign) {
				#line 639 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				low = ADV_UFCS(_operator_sub_mod)(low1, ADV_UPCS(_lo)(other.$ref()));
				#line 640 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				high = ADV_UFCS(_operator_sub_mod)(high1, ADV_UPCS(_hi)(other.$ref()));
				#line 641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if ((low <=> low1) > 0) {
					#line 642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					ADV_UFCS(_operator_sub_sub_mod_postfix)(high);
					#line 643 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					if ((high <=> high1) >= 0) {
						#line 644 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						return flipSign();
					}
				} else {
					#line 646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					if ((high <=> high1) > 0) {
						#line 647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						return flipSign();
					}
				}
			} else {
				#line 649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				{
					#line 650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					low = ADV_UFCS(_operator_add_mod)(low1, ADV_UPCS(_lo)(other.$ref()));
					#line 651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					high = ADV_UFCS(_operator_add_mod)(high1, ADV_UPCS(_hi)(other.$ref()));
					#line 652 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					if ((low <=> low1) < 0) {
						#line 653 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						ADV_UFCS(_operator_add_add_mod_postfix)(high);
						#line 654 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						if ((high <=> high1) <= 0) {
							#line 655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							return alignedScale();
						}
					} else {
						#line 657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						if ((high <=> high1) < 0) {
							#line 658 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							return alignedScale();
						}
					}
				}
			}
			#line 661 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return $self{low, high, ADV_UFCS(NarrowToInt32)(flags.$ref())};
		}; 
		#line 665 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if ((xorflags & __Decimal$Protected::ScaleMask) == Builtin::i32(0)) {
			#line 666 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return alignedAdd();
		}
		#line 669 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		const Builtin::Auto<decltype(flags)> flags1 = flags; 
		#line 670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		flags = (otherFlags & __Decimal$Protected::ScaleMask) | (flags & __Decimal$Protected::SignMask);
		#line 671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype(ADV_UFCS(NarrowToInt32)((ADV_UFCS(_operator_sub_mod)(flags, flags1)).$ref()) >> __Decimal$Protected::ScaleShift)> scale = ADV_UFCS(NarrowToInt32)((ADV_UFCS(_operator_sub_mod)(flags, flags1)).$ref()) >> __Decimal$Protected::ScaleShift; 
		#line 673 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if ((scale <=> Builtin::i32(0)) < 0) {
			#line 675 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			scale = -scale;
			#line 676 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			flags = flags1;
			#line 677 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			if (sign) {
				#line 678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				flags ^= __Decimal$Protected::SignMask;
			}
			#line 680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			low = ADV_UPCS(_lo)(other.$ref());
			#line 681 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			high = ADV_UPCS(_hi)(other.$ref());
			#line 682 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			other = (*this);
			#line 683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			otherFlags = ADV_UFCS(NarrowToUInt32)(ADV_UPCS(_flags)(other.$ref()).$ref());
		}
		#line 686 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::u32 power{}; 
		#line 687 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::u64 tmp64{}, tmpLow{}; 
		#line 689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if (high == Builtin::i32(0)) {
			#line 690 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			if ((low <=> ADV_USPCS(MaxValue, Builtin::u32)()) <= 0) {
				#line 692 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if (Builtin::u32{low} == Builtin::i32(0)) {
					#line 693 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					Builtin::Auto<decltype(flags & __Decimal$Protected::SignMask)> signFlags = flags & __Decimal$Protected::SignMask; 
					#line 694 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					if (sign) {
						#line 695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						signFlags ^= __Decimal$Protected::SignMask;
					}
					#line 698 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					Builtin::Auto<decltype(other)> result = other; 
					#line 699 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					ADV_UPCS(_flags)(result.$ref()) = ADV_UFCS(NarrowToInt32)(((otherFlags & __Decimal$Protected::ScaleMask) | signFlags).$ref());
					#line 700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					return result;
				}
				#line 703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				do 
				#line 703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				{
					#line 704 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					if ((scale <=> MaxScaleInt32) <= 0) {
						#line 705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						low = ADV_UFCS(_operator_mul_mod)(Builtin::u64{ADV_UFCS(NarrowToUInt32)(low.$ref())}, ADV_UFCS(_operator_subscript)(Int32Powers10.$ref(), scale));
						#line 706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						return alignedAdd();
					}
					#line 708 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					scale -= MaxScaleInt32;
					#line 709 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					low = ADV_UFCS(_operator_mul_mod)(Builtin::u64{ADV_UFCS(NarrowToUInt32)(low.$ref())}, TenToPowerNine);
				} while ((low <=> ADV_USPCS(MaxValue, Builtin::u32)()) <= 0);
			}
			#line 713 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			do 
			#line 713 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			{
				#line 714 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				power = TenToPowerNine;
				#line 715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if ((scale <=> MaxScaleInt32) < 0) {
					#line 716 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					power = ADV_UFCS(_operator_subscript)(Int32Powers10.$ref(), scale);
				}
				#line 718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				tmpLow = ADV_UFCS(_operator_mul_mod)(Builtin::u64{ADV_UFCS(NarrowToUInt32)(low.$ref())}, power);
				#line 719 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				tmp64 = ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_mul_mod)((low >> Builtin::i32(32)), power), (tmpLow >> Builtin::i32(32)));
				#line 720 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				low = ADV_UFCS(_operator_add_mod)(Builtin::u64{ADV_UFCS(NarrowToUInt32)(tmpLow.$ref())}, (tmp64 << Builtin::i32(32)));
				#line 721 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				high = Builtin::u32{tmp64 >> Builtin::i32(32)};
				#line 722 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if (((scale -= MaxScaleInt32) <=> Builtin::i32(0)) <= 0) {
					#line 723 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					return alignedAdd();
				}
			} while (high == Builtin::i32(0));
		}
		#line 728 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		for (;;) 
		{
			#line 729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			power = TenToPowerNine;
			#line 730 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			if ((scale <=> MaxScaleInt32) < 0) {
				#line 731 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				power = ADV_UFCS(_operator_subscript)(Int32Powers10.$ref(), scale);
			}
			#line 733 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			tmpLow = ADV_UFCS(_operator_mul_mod)(Builtin::u64{ADV_UFCS(NarrowToUInt32)(low.$ref())}, power);
			#line 734 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			tmp64 = ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_mul_mod)((low >> Builtin::i32(32)), power), (tmpLow >> Builtin::i32(32)));
			#line 735 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			low = ADV_UFCS(_operator_add_mod)(Builtin::u64{ADV_UFCS(NarrowToUInt32)(tmpLow.$ref())}, (tmp64 << Builtin::i32(32)));
			#line 736 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			tmp64 >>= Builtin::i32(32);
			#line 737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			ADV_UFCS(_operator_add_mod_eq)(tmp64, ADV_UFCS(_operator_mul_mod)(Builtin::u64{high}, power));
			#line 739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			scale -= MaxScaleInt32;
			#line 740 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			if ((tmp64 <=> ADV_USPCS(MaxValue, Builtin::u32)()) > 0) {
				#line 741 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				break;
			}
			#line 743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			high = ADV_UFCS(NarrowToUInt32)(tmp64.$ref());
			#line 744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			if ((scale <=> Builtin::i32(0)) <= 0) {
				#line 745 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				return alignedAdd();
			}
		}
		#line 749 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Buf24 buf{}; 
		#line 750 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_UPCS(Low64)(buf.$ref()) = low;
		#line 751 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_UPCS(Mid64)(buf.$ref()) = tmp64;
		#line 752 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype(Builtin::u32(3U))> hiProd = Builtin::u32(3U); 
		#line 754 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		while ((scale <=> Builtin::i32(0)) > 0) 
		{
			#line 755 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			power = TenToPowerNine;
			#line 756 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			if ((scale <=> MaxScaleInt32) < 0) {
				#line 757 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				power = ADV_UFCS(_operator_subscript)(Int32Powers10.$ref(), scale);
			}
			#line 759 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			tmp64 = Builtin::u32(0U);
			#line 760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			{	using namespace Builtin::Unsafe;	using namespace System::__Unsafe;	using namespace __Decimal$Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard760{};
				#line 761 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				Builtin::Auto<decltype(UnsafePointerCast<Builtin::u32>((__RawPtr(std::addressof(buf)))))> numMemory = UnsafePointerCast<Builtin::u32>((__RawPtr(std::addressof(buf)))); 
				#line 762 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				Builtin::Auto<decltype(Builtin::u32(0U))> cur = Builtin::u32(0U); 
				#line 763 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				for (;;) 
				{
					#line 764 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					ADV_ASSERT(((cur <=> ADV_USPCS(LENGTH, Buf24)()) < 0), "cur<Buf24.LENGTH");
					#line 765 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					ADV_UFCS(_operator_add_mod_eq)(tmp64, ADV_UFCS(_operator_mul_mod)(Builtin::u64{ADV_UFCS(_operator_subscript)(numMemory.$ref(), cur)}, power));
					#line 766 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					ADV_UFCS(_operator_subscript)(numMemory.$ref(), cur) = ADV_UFCS(NarrowToUInt32)(tmp64.$ref());
					#line 767 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					ADV_UFCS(_operator_add_add_mod_postfix)(cur);
					#line 768 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					tmp64 >>= Builtin::i32(32);
					#line 770 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					if ((cur <=> hiProd) > 0) {
						#line 771 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						break;
					}
				}
				#line 774 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if (ADV_UFCS(NarrowToUInt32)(tmp64.$ref()) != Builtin::i32(0)) {
					#line 775 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					ADV_ASSERT(((hiProd + Builtin::i32(1) <=> ADV_USPCS(LENGTH, Buf24)()) < 0), "hiProd+1<Buf24.LENGTH");
					#line 776 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					ADV_UFCS(_operator_subscript)(numMemory.$ref(), ADV_UFCS(_operator_add_add_mod)(hiProd)) = Builtin::Cast<true, Builtin::u32>(tmp64);
				}
			}
			#line 780 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			scale -= MaxScaleInt32;
		}
		#line 783 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		tmp64 = ADV_UPCS(Low64)(buf.$ref());
		#line 784 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		low = ADV_UPCS(_lo)(other.$ref());
		#line 785 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype(ADV_UPCS(u2)(ADV_UPCS(DWords)(buf.$ref()).$ref()))> tmpHi = ADV_UPCS(u2)(ADV_UPCS(DWords)(buf.$ref()).$ref()); 
		#line 786 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		high = ADV_UPCS(_hi)(other.$ref());
		#line 788 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		auto noCarry = [&] () 
		{
			#line 789 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			ADV_UPCS(Low64)(buf.$ref()) = low;
			#line 790 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			ADV_UPCS(u2)(ADV_UPCS(DWords)(buf.$ref()).$ref()) = high;
			#line 791 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			{	using namespace Builtin::Unsafe;	using namespace System::__Unsafe;	using namespace __Decimal$Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard791{};
				#line 792 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				scale = ScaleResult((__RawPtr(std::addressof(buf))), hiProd, ADV_UFCS(NarrowToUInt8)((flags >> __Decimal$Protected::ScaleShift).$ref()));
				#line 793 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				flags = (flags & (ADV_UFCS(_operator_not)(__Decimal$Protected::ScaleMask))) | (Builtin::u32{scale} << __Decimal$Protected::ScaleShift);
			}
			#line 795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			low = ADV_UPCS(Low64)(buf.$ref());
			#line 796 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			high = ADV_UPCS(u2)(ADV_UPCS(DWords)(buf.$ref()).$ref());
			#line 797 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return $self{low, high, ADV_UFCS(NarrowToInt32)(flags.$ref())};
		}; 
		#line 800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if (sign) {
			#line 803 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			low = ADV_UFCS(_operator_sub_mod)(tmp64, low);
			#line 804 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			high = ADV_UFCS(_operator_sub_mod)(tmpHi, high);
			#line 806 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			if ((low <=> tmp64) > 0) {
				#line 807 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				ADV_UFCS(_operator_sub_sub_mod_postfix)(high);
				#line 808 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if ((high <=> tmpHi) < 0) {
					#line 809 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					return noCarry();
				}
			} else {
				#line 811 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if ((high <=> tmpHi) <= 0) {
					#line 812 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					return noCarry();
				}
			}
			#line 815 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			{	using namespace Builtin::Unsafe;	using namespace System::__Unsafe;	using namespace __Decimal$Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard815{};
				#line 816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				Builtin::Auto<decltype(UnsafePointerCast<Builtin::u32>((__RawPtr(std::addressof(buf)))))> number = UnsafePointerCast<Builtin::u32>((__RawPtr(std::addressof(buf)))); 
				#line 817 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				Builtin::Auto<decltype(Builtin::u32(3U))> cur = Builtin::u32(3U); 
				#line 818 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				do 
				#line 818 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				{
					#line 819 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					ADV_ASSERT(((cur <=> ADV_USPCS(LENGTH, Buf24)()) < 0), "cur<Buf24.LENGTH");
				} while (ADV_UFCS(_operator_sub_sub_mod_postfix)(ADV_UFCS(_operator_subscript)(number.$ref(), cur++)) == Builtin::u32(0U));
				#line 821 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				ADV_ASSERT(((hiProd <=> ADV_USPCS(LENGTH, Buf24)()) < 0), "hiProd<Buf24.LENGTH");
				#line 822 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if (ADV_UFCS(_operator_subscript)(number.$ref(), hiProd) == Builtin::u32(0U) && (--hiProd <=> Builtin::u32(2U)) <= 0) {
					#line 823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					return $self{low, high, ADV_UFCS(NarrowToInt32)(flags.$ref())};
				}
			}
		} else {
			#line 826 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			{
				#line 828 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				ADV_UFCS(_operator_add_mod_eq)(low, tmp64);
				#line 829 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				ADV_UFCS(_operator_add_mod_eq)(high, tmpHi);
				#line 831 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if ((low <=> tmp64) < 0) {
					#line 832 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					ADV_UFCS(_operator_add_add_mod_postfix)(high);
					#line 833 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					if ((high <=> tmpHi) > 0) {
						#line 834 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						return noCarry();
					}
				} else {
					#line 836 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					if ((high <=> tmpHi) >= 0) {
						#line 837 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						return noCarry();
					}
				}
				#line 840 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				{	using namespace Builtin::Unsafe;	using namespace System::__Unsafe;	using namespace __Decimal$Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard840{};
					#line 841 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					Builtin::Auto<decltype(UnsafePointerCast<Builtin::u32>((__RawPtr(std::addressof(buf)))))> number = UnsafePointerCast<Builtin::u32>((__RawPtr(std::addressof(buf)))); 
					#line 842 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					Builtin::Auto<decltype(Builtin::u32(3U))> cur = Builtin::u32(3U); 
					#line 843 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					while (++ADV_UFCS(_operator_subscript)(number.$ref(), cur++) == Builtin::u32(0U)) 
					{
						#line 844 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						ADV_ASSERT(((cur <=> ADV_USPCS(LENGTH, Buf24)()) < 0), "cur<Buf24.LENGTH");
						#line 845 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						if ((hiProd <=> cur) < 0) {
							#line 846 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							ADV_UFCS(_operator_subscript)(number.$ref(), cur) = Builtin::u32(1U);
							#line 847 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							hiProd = cur;
							#line 848 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							break;
						}
					}
				}
			}
		}
		#line 854 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		return noCarry();
	}
#line 857 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	auto Decimal::Mul($self other) const  -> const $self
	{
		#line 859 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype(ADV_UFCS(NarrowToUInt32)(_flags.$ref()))> flags = ADV_UFCS(NarrowToUInt32)(_flags.$ref()); 
		#line 860 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype(ADV_UFCS(NarrowToUInt32)(ADV_UPCS(_flags)(other.$ref()).$ref()))> otherFlags = ADV_UFCS(NarrowToUInt32)(ADV_UPCS(_flags)(other.$ref()).$ref()); 
		#line 862 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::i32 scale = ADV_UFCS(NarrowToUInt8)((ADV_UFCS(_operator_add_mod)(flags, otherFlags) >> __Decimal$Protected::ScaleShift).$ref()); 
		#line 863 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::u64 tmp{}; 
		#line 864 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::u32 hiProd{}; 
		#line 865 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Buf24 buf{}; 
		#line 867 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		auto skipScan = [&] () 
		{
			#line 868 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			{	using namespace Builtin::Unsafe;	using namespace System::__Unsafe;	using namespace __Decimal$Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard868{};
				#line 869 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if ((hiProd <=> Builtin::u32(2U)) > 0 || (scale <=> SCALE_MAX) > 0) {
					#line 870 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					scale = ScaleResult((__RawPtr(std::addressof(buf))), hiProd, scale);
				}
				#line 873 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				return $self{ADV_UPCS(Low64)(buf.$ref()), ADV_UPCS(u2)(ADV_UPCS(DWords)(buf.$ref()).$ref()), ADV_UFCS(NarrowToInt32)((((otherFlags ^ flags) & __Decimal$Protected::SignMask) | (Builtin::u32{scale} << __Decimal$Protected::ScaleShift)).$ref())};
			}
		}; 
		#line 878 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if ((_hi | (_lo >> Builtin::i32(32))) == Builtin::u32(0U)) {
			#line 880 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			if ((ADV_UPCS(_hi)(other.$ref()) | (ADV_UPCS(_lo)(other.$ref()) >> Builtin::i32(32))) == Builtin::u32(0U)) {
				#line 881 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(Builtin::u64{ADV_UFCS(NarrowToUInt32)(_lo.$ref())}, ADV_UFCS(NarrowToUInt32)(ADV_UPCS(_lo)(other.$ref()).$ref())))> low64 = ADV_UFCS(_operator_mul_mod)(Builtin::u64{ADV_UFCS(NarrowToUInt32)(_lo.$ref())}, ADV_UFCS(NarrowToUInt32)(ADV_UPCS(_lo)(other.$ref()).$ref())); 
				#line 883 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if ((scale <=> SCALE_MAX) > 0) {
					#line 885 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					if ((scale <=> SCALE_MAX + MaxScaleInt64) > 0) {
						#line 886 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						return $self{};
					}
					#line 889 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					scale -= SCALE_MAX + Builtin::i32(1);
					#line 890 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(Int64Powers10.$ref(), Builtin::Cast<true, Builtin::usize>(scale)))> power = ADV_UFCS(_operator_subscript)(Int64Powers10.$ref(), Builtin::Cast<true, Builtin::usize>(scale)); 
					#line 891 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					tmp = ADV_UFCS(_operator_bsl)(low64, power);
					#line 893 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					const Builtin::Auto<decltype(ADV_UFCS(_operator_sub_mod)(low64, ADV_UFCS(_operator_mul_mod)(tmp, power)))> remainder = ADV_UFCS(_operator_sub_mod)(low64, ADV_UFCS(_operator_mul_mod)(tmp, power)); 
					#line 894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					low64 = tmp;
					#line 895 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					power >>= Builtin::i32(1);
					#line 896 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					if ((remainder <=> power) >= 0 && ((remainder <=> power) > 0 || ((ADV_UFCS(NarrowToUInt32)(low64.$ref()) & Builtin::u32(1U)) <=> Builtin::i32(0)) > 0)) {
						#line 897 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						ADV_UFCS(_operator_add_add_mod_postfix)(low64);
					}
					#line 899 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					scale = SCALE_MAX;
				}
				#line 902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				return $self{low64, Builtin::u32(0U), ADV_UFCS(NarrowToInt32)((((otherFlags ^ flags) & __Decimal$Protected::SignMask) | (Builtin::u32{scale} << __Decimal$Protected::ScaleShift)).$ref())};
			} else {
				#line 903 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				{
					#line 905 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					tmp = ADV_UFCS(_operator_mul_mod)(Builtin::u64{ADV_UFCS(NarrowToUInt32)(_lo.$ref())}, ADV_UFCS(NarrowToUInt32)(ADV_UPCS(_lo)(other.$ref()).$ref()));
					#line 906 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					ADV_UPCS(u0)(ADV_UPCS(DWords)(buf.$ref()).$ref()) = ADV_UFCS(NarrowToUInt32)(tmp.$ref());
					#line 907 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					tmp = ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_mul_mod)(Builtin::u64{ADV_UFCS(NarrowToUInt32)(_lo.$ref())}, (ADV_UPCS(_lo)(other.$ref()) >> Builtin::i32(32))), (tmp >> Builtin::i32(32)));
					#line 908 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					ADV_UPCS(u1)(ADV_UPCS(DWords)(buf.$ref()).$ref()) = ADV_UFCS(NarrowToUInt32)(tmp.$ref());
					#line 909 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					tmp >>= Builtin::i32(32);
					#line 911 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					if (ADV_UPCS(_hi)(other.$ref()) != Builtin::u32(0U)) {
						#line 912 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						ADV_UFCS(_operator_add_mod_eq)(tmp, ADV_UFCS(_operator_mul_mod)(Builtin::u64{ADV_UFCS(NarrowToUInt32)(_lo.$ref())}, ADV_UPCS(_hi)(other.$ref())));
						#line 913 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						if ((tmp <=> ADV_USPCS(MaxValue, Builtin::u32)()) > 0) {
							#line 914 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							ADV_UPCS(Mid64)(buf.$ref()) = tmp;
							#line 915 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							hiProd = Builtin::u32(3U);
							#line 916 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							return skipScan();
						}
					}
					#line 919 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					ADV_UPCS(u2)(ADV_UPCS(DWords)(buf.$ref()).$ref()) = ADV_UFCS(NarrowToUInt32)(tmp.$ref());
					#line 920 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					hiProd = Builtin::u32(2U);
				}
			}
		} else {
			#line 922 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			if ((ADV_UPCS(_hi)(other.$ref()) | (ADV_UPCS(_lo)(other.$ref()) >> Builtin::i32(32))) == Builtin::u32(0U)) {
				#line 924 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				tmp = ADV_UFCS(_operator_mul_mod)(Builtin::u64{ADV_UFCS(NarrowToUInt32)(ADV_UPCS(_lo)(other.$ref()).$ref())}, ADV_UFCS(NarrowToUInt32)(_lo.$ref()));
				#line 925 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				ADV_UPCS(u0)(ADV_UPCS(DWords)(buf.$ref()).$ref()) = ADV_UFCS(NarrowToUInt32)(tmp.$ref());
				#line 926 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				tmp = ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_mul_mod)(Builtin::u64{ADV_UFCS(NarrowToUInt32)(ADV_UPCS(_lo)(other.$ref()).$ref())}, (_lo >> Builtin::i32(32))), (tmp >> Builtin::i32(32)));
				#line 927 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				ADV_UPCS(u1)(ADV_UPCS(DWords)(buf.$ref()).$ref()) = ADV_UFCS(NarrowToUInt32)(tmp.$ref());
				#line 928 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				tmp >>= Builtin::i32(32);
				#line 930 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if (_hi != Builtin::u32(0U)) {
					#line 931 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					ADV_UFCS(_operator_add_mod_eq)(tmp, ADV_UFCS(_operator_mul_mod)(Builtin::u64{ADV_UFCS(NarrowToUInt32)(ADV_UPCS(_lo)(other.$ref()).$ref())}, _hi));
					#line 932 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					if ((tmp <=> ADV_USPCS(MaxValue, Builtin::u32)()) > 0) {
						#line 933 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						ADV_UPCS(Mid64)(buf.$ref()) = tmp;
						#line 934 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						hiProd = Builtin::u32(3U);
						#line 935 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						return skipScan();
					}
				}
				#line 938 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				ADV_UPCS(u2)(ADV_UPCS(DWords)(buf.$ref()).$ref()) = ADV_UFCS(NarrowToUInt32)(tmp.$ref());
				#line 939 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				hiProd = Builtin::u32(2U);
			} else {
				#line 940 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				{
					#line 942 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					tmp = ADV_UFCS(_operator_mul_mod)(Builtin::u64{ADV_UFCS(NarrowToUInt32)(_lo.$ref())}, ADV_UFCS(NarrowToUInt32)(ADV_UPCS(_lo)(other.$ref()).$ref()));
					#line 943 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					ADV_UPCS(u0)(ADV_UPCS(DWords)(buf.$ref()).$ref()) = ADV_UFCS(NarrowToUInt32)(tmp.$ref());
					#line 944 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					Builtin::Auto<decltype(ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_mul_mod)(Builtin::u64{ADV_UFCS(NarrowToUInt32)(_lo.$ref())}, (ADV_UPCS(_lo)(other.$ref()) >> Builtin::i32(32))), (tmp >> Builtin::i32(32))))> tmp2 = ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_mul_mod)(Builtin::u64{ADV_UFCS(NarrowToUInt32)(_lo.$ref())}, (ADV_UPCS(_lo)(other.$ref()) >> Builtin::i32(32))), (tmp >> Builtin::i32(32))); 
					#line 945 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					tmp = ADV_UFCS(_operator_mul_mod)(Builtin::u64{_lo >> Builtin::i32(32)}, ADV_UFCS(NarrowToUInt32)(ADV_UPCS(_lo)(other.$ref()).$ref()));
					#line 946 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					ADV_UFCS(_operator_add_mod_eq)(tmp, tmp2);
					#line 947 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					ADV_UPCS(u1)(ADV_UPCS(DWords)(buf.$ref()).$ref()) = ADV_UFCS(NarrowToUInt32)(tmp.$ref());
					#line 948 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					if ((tmp <=> tmp2) < 0) {
						#line 949 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						tmp2 = (tmp >> Builtin::i32(32)) | (Builtin::u64(1ULL) << Builtin::i32(32));
					} else {
						#line 950 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						{
							#line 951 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							tmp2 = tmp >> Builtin::i32(32);
						}
					}
					#line 954 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					tmp = ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_mul_mod)(Builtin::u64{_lo >> Builtin::i32(32)}, (ADV_UPCS(_lo)(other.$ref()) >> Builtin::i32(32))), tmp2);
					#line 955 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					if (((_hi | ADV_UPCS(_hi)(other.$ref())) <=> Builtin::u32(0U)) > 0) {
						#line 956 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						tmp2 = ADV_UFCS(_operator_mul_mod)(Builtin::u64{ADV_UFCS(NarrowToUInt32)(_lo.$ref())}, ADV_UPCS(_hi)(other.$ref()));
						#line 957 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						ADV_UFCS(_operator_add_mod_eq)(tmp, tmp2);
						#line 958 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						Builtin::Auto<decltype(Builtin::u32(0U))> tmp3 = Builtin::u32(0U); 
						#line 959 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						if ((tmp <=> tmp2) < 0) {
							#line 960 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							tmp3 = Builtin::u32(1U);
						}
						#line 963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						tmp2 = ADV_UFCS(_operator_mul_mod)(Builtin::u64{_hi}, ADV_UFCS(NarrowToUInt32)(ADV_UPCS(_lo)(other.$ref()).$ref()));
						#line 964 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						ADV_UFCS(_operator_add_mod_eq)(tmp, tmp2);
						#line 965 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						ADV_UPCS(u2)(ADV_UPCS(DWords)(buf.$ref()).$ref()) = ADV_UFCS(NarrowToUInt32)(tmp.$ref());
						#line 966 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						if ((tmp <=> tmp2) < 0) {
							#line 967 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							tmp3++;
						}
						#line 969 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						tmp2 = (Builtin::u64{tmp3} << Builtin::i32(32)) | (tmp >> Builtin::i32(32));
						#line 970 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						tmp = ADV_UFCS(_operator_mul_mod)(Builtin::u64{_lo >> Builtin::i32(32)}, ADV_UPCS(_hi)(other.$ref()));
						#line 971 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						ADV_UFCS(_operator_add_mod_eq)(tmp, tmp2);
						#line 972 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						tmp3 = Builtin::u32(0U);
						#line 973 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						if ((tmp <=> tmp2) < 0) {
							#line 974 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							tmp3 = Builtin::u32(1U);
						}
						#line 977 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						tmp2 = ADV_UFCS(_operator_mul_mod)(Builtin::u64{_hi}, (ADV_UPCS(_lo)(other.$ref()) >> Builtin::i32(32)));
						#line 978 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						ADV_UFCS(_operator_add_mod_eq)(tmp, tmp2);
						#line 979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						ADV_UPCS(u3)(ADV_UPCS(DWords)(buf.$ref()).$ref()) = ADV_UFCS(NarrowToUInt32)(tmp.$ref());
						#line 980 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						if ((tmp <=> tmp2) < 0) {
							#line 981 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							tmp3++;
						}
						#line 983 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						tmp = (Builtin::u64{tmp3} << Builtin::i32(32)) | (tmp >> Builtin::i32(32));
						#line 985 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						ADV_UPCS(High64)(buf.$ref()) = ADV_UFCS(_operator_add_mod)(ADV_UFCS(_operator_mul_mod)(Builtin::u64{_hi}, ADV_UPCS(_hi)(other.$ref())), tmp);
						#line 986 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						hiProd = Builtin::u32(5U);
					} else {
						#line 987 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						{
							#line 988 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							ADV_UPCS(Mid64)(buf.$ref()) = tmp;
							#line 989 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							hiProd = Builtin::u32(3U);
						}
					}
				}
			}
		}
		#line 993 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::__Unsafe;	using namespace __Decimal$Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard993{};
			#line 994 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			Builtin::Auto<decltype(UnsafePointerCast<Builtin::u32>((__RawPtr(std::addressof(buf)))))> product = UnsafePointerCast<Builtin::u32>((__RawPtr(std::addressof(buf)))); 
			#line 995 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			while (ADV_UFCS(_operator_subscript)(product.$ref(), ADV_UFCS(NarrowToInt32)(hiProd.$ref())) == Builtin::u32(0U)) 
			{
				#line 996 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if (hiProd == Builtin::u32(0U)) {
					#line 997 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					return $self{};
				}
				#line 999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				hiProd--;
			}
			#line 1001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return skipScan();
		}
	}
#line 1005 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	auto Decimal::Div($self other) const  -> const $self
	{
		#line 1007 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype(ADV_UFCS(NarrowToUInt32)(_flags.$ref()))> flags = ADV_UFCS(NarrowToUInt32)(_flags.$ref()); 
		#line 1008 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype(ADV_UFCS(NarrowToUInt32)(ADV_UPCS(_flags)(other.$ref()).$ref()))> otherFlags = ADV_UFCS(NarrowToUInt32)(ADV_UPCS(_flags)(other.$ref()).$ref()); 
		#line 1009 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Buf12 buf{}; 
		#line 1010 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::u32 power{}; 
		#line 1011 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::i32 currentScale{}; 
		#line 1012 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::i32 scale = ADV_UFCS(NarrowToInt8)((ADV_UFCS(_operator_sub_mod)(flags, otherFlags) >> __Decimal$Protected::ScaleShift).$ref()); 
		#line 1013 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype(Builtin::Boolean(false))> unscale = Builtin::Boolean(false); 
		#line 1014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::u32 tmp{}; 
		#line 1016 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::__Unsafe;	using namespace __Decimal$Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard1016{};
			#line 1017 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			auto add32to96 = [&] (Builtin::u32 val) -> bool 
			{
				#line 1018 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				ADV_UPCS(Low64)(buf.$ref()) = ADV_UFCS(_operator_add_mod)(ADV_UPCS(Low64)(buf.$ref()), val);
				#line 1019 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if ((ADV_UPCS(Low64)(buf.$ref()) <=> val) < 0) {
					#line 1020 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					return ADV_UFCS(_operator_add_add_mod)(ADV_UPCS(u2)(ADV_UPCS(DWords)(buf.$ref()).$ref())) != Builtin::u32(0U);
				}
				#line 1022 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				return Builtin::Boolean(true);
			}; 
			#line 1025 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			auto doUnscale = [&] () 
			{
				#line 1026 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if (unscale) {
					#line 1027 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					auto low = ADV_UPCS(u0)(ADV_UPCS(DWords)(buf.$ref()).$ref()); 
					#line 1028 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					Builtin::u64 high = ADV_UPCS(High64)(buf.$ref()); 
					#line 1029 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					Unscale(Builtin::MutableRef(low), Builtin::MutableRef(high), Builtin::MutableRef(scale));
					#line 1030 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					return $self{Builtin::u64{low} | (Builtin::u64{ADV_UFCS(NarrowToUInt32)(high.$ref())} << Builtin::i32(32)), ADV_UFCS(NarrowToUInt32)((high >> Builtin::i32(32)).$ref()), ADV_UFCS(NarrowToInt32)((((flags ^ otherFlags) & __Decimal$Protected::SignMask) | (ADV_UFCS(NarrowToUInt32)(scale.$ref()) << __Decimal$Protected::ScaleShift)).$ref())};
				} else {
					#line 1032 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					{
						#line 1033 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						return $self{ADV_UPCS(Low64)(buf.$ref()), ADV_UPCS(u2)(ADV_UPCS(DWords)(buf.$ref()).$ref()), ADV_UFCS(NarrowToInt32)((((flags ^ otherFlags) & __Decimal$Protected::SignMask) | (ADV_UFCS(NarrowToUInt32)(scale.$ref()) << __Decimal$Protected::ScaleShift)).$ref())};
					}
				}
			}; 
			#line 1038 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			auto overflowUnscale = [&] (bool sticky) 
			{
				#line 1039 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if ((--scale <=> Builtin::i32(0)) < 0) {
					#line 1040 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					Builtin::Throw(Builtin::DecimalOverflowException{});
				}
				#line 1043 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				ADV_ASSERT((ADV_UPCS(u2)(ADV_UPCS(DWords)(buf.$ref()).$ref()) == Builtin::u32(0U)), "buf.DWords.u2==0u");
				#line 1045 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				constexpr auto  HIGH_BIT = Builtin::u64(1ULL) << Builtin::i32(32);
				#line 1046 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				ADV_UPCS(u2)(ADV_UPCS(DWords)(buf.$ref()).$ref()) = Builtin::u32{ADV_UFCS(_operator_bsl)(HIGH_BIT, Builtin::u32(10U))};
				#line 1047 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				auto tmp2 = ADV_UFCS(_operator_add_mod)(((HIGH_BIT % Builtin::u32(10U)) << Builtin::i32(32)), ADV_UPCS(u1)(ADV_UPCS(DWords)(buf.$ref()).$ref())); 
				#line 1048 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				auto div = ADV_UFCS(NarrowToUInt32)((ADV_UFCS(_operator_bsl)(tmp2, Builtin::u32(10U))).$ref()); 
				#line 1049 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				ADV_UPCS(u1)(ADV_UPCS(DWords)(buf.$ref()).$ref()) = div;
				#line 1050 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				tmp2 = ADV_UFCS(_operator_add_mod)(((ADV_UFCS(_operator_sub_mod)(tmp2, ADV_UFCS(_operator_mul_mod)(div, Builtin::u32(10U)))) << Builtin::i32(32)), ADV_UPCS(u0)(ADV_UPCS(DWords)(buf.$ref()).$ref()));
				#line 1051 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				div = ADV_UFCS(NarrowToUInt32)((ADV_UFCS(_operator_bsl)(tmp2, Builtin::u32(10U))).$ref());
				#line 1052 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				ADV_UPCS(u0)(ADV_UPCS(DWords)(buf.$ref()).$ref()) = div;
				#line 1053 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				const auto remainder = ADV_UFCS(NarrowToUInt32)((ADV_UFCS(_operator_sub_mod)(tmp2, ADV_UFCS(_operator_mul_mod)(div, Builtin::u32(10U)))).$ref()); 
				#line 1054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if ((remainder <=> Builtin::u32(5U)) > 0 || remainder == Builtin::u32(5U) && (sticky || (ADV_UPCS(u0)(ADV_UPCS(DWords)(buf.$ref()).$ref()) & Builtin::u32(1U)) != Builtin::u32(0U))) {
					#line 1055 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					add32to96(Builtin::u32(1U));
				}
				#line 1058 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				return scale;
			}; 
			#line 1061 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			auto increaseScale = [&] (Builtin::MutableRef<Buf12> __buf__) 
			{
				Buf12& buf = __buf__;
				#line 1062 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				auto tmp2 = ADV_UFCS(_operator_mul_mod)(Builtin::u64{ADV_UPCS(u0)(ADV_UPCS(DWords)(buf.$ref()).$ref())}, power); 
				#line 1063 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				ADV_UPCS(u0)(ADV_UPCS(DWords)(buf.$ref()).$ref()) = ADV_UFCS(NarrowToUInt32)(tmp2.$ref());
				#line 1064 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				tmp2 >>= Builtin::i32(32);
				#line 1065 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				ADV_UFCS(_operator_add_mod_eq)(tmp2, ADV_UFCS(_operator_mul_mod)(Builtin::u64{ADV_UPCS(u1)(ADV_UPCS(DWords)(buf.$ref()).$ref())}, power));
				#line 1066 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				ADV_UPCS(u1)(ADV_UPCS(DWords)(buf.$ref()).$ref()) = ADV_UFCS(NarrowToUInt32)(tmp2.$ref());
				#line 1067 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				tmp2 >>= Builtin::i32(32);
				#line 1068 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				ADV_UFCS(_operator_add_mod_eq)(tmp2, ADV_UFCS(_operator_mul_mod)(Builtin::u64{ADV_UPCS(u2)(ADV_UPCS(DWords)(buf.$ref()).$ref())}, power));
				#line 1069 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				ADV_UPCS(u2)(ADV_UPCS(DWords)(buf.$ref()).$ref()) = ADV_UFCS(NarrowToUInt32)(tmp2.$ref());
				#line 1070 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				return Builtin::u32{tmp2 >> Builtin::i32(32)};
			}; 
			#line 1073 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			auto increaseScale64 = [&] (Builtin::MutableRef<Buf12> __buf__) 
			{
				Buf12& buf = __buf__;
				#line 1074 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				auto tmp2 = ADV_UFCS(_operator_mul_mod)(Builtin::u64{ADV_UPCS(u0)(ADV_UPCS(DWords)(buf.$ref()).$ref())}, power); 
				#line 1075 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				ADV_UPCS(u0)(ADV_UPCS(DWords)(buf.$ref()).$ref()) = ADV_UFCS(NarrowToUInt32)(tmp2.$ref());
				#line 1076 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				tmp2 >>= Builtin::i32(32);
				#line 1077 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				ADV_UFCS(_operator_add_mod_eq)(tmp2, ADV_UFCS(_operator_mul_mod)(Builtin::u64{ADV_UPCS(u1)(ADV_UPCS(DWords)(buf.$ref()).$ref())}, power));
				#line 1078 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				ADV_UPCS(High64)(buf.$ref()) = tmp2;
			}; 
			#line 1081 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			auto roundUp = [&] () 
			{
				#line 1082 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				ADV_UPCS(Low64)(buf.$ref()) = ADV_UFCS(_operator_add_mod)(ADV_UPCS(Low64)(buf.$ref()), Builtin::u32(1U));
				#line 1083 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if (ADV_UPCS(Low64)(buf.$ref()) == Builtin::u32(0U) && ADV_UFCS(_operator_add_add_mod)(ADV_UPCS(u2)(ADV_UPCS(DWords)(buf.$ref()).$ref())) == Builtin::u32(0U)) {
					#line 1084 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					scale = overflowUnscale(Builtin::Boolean(true));
				}
				#line 1086 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				return doUnscale();
			}; 
			#line 1089 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			if ((ADV_UPCS(_hi)(other.$ref()) | (ADV_UPCS(_lo)(other.$ref()) >> Builtin::i32(32))) == Builtin::u32(0U)) {
				#line 1091 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				const Builtin::Auto<decltype(ADV_UFCS(NarrowToUInt32)(ADV_UPCS(_lo)(other.$ref()).$ref()))> den = ADV_UFCS(NarrowToUInt32)(ADV_UPCS(_lo)(other.$ref()).$ref()); 
				#line 1092 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if (den == Builtin::u32(0U)) {
					#line 1093 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					Builtin::Throw(Builtin::DivisionByZeroException{});
				}
				#line 1096 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				ADV_UPCS(Low64)(buf.$ref()) = _lo;
				#line 1097 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				ADV_UPCS(u2)(ADV_UPCS(DWords)(buf.$ref()).$ref()) = _hi;
				#line 1098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				auto remainder = [&] () 
				{
					#line 1099 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					Builtin::u64 tmp2{}, div{}; 
					#line 1100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					if (ADV_UPCS(u2)(ADV_UPCS(DWords)(buf.$ref()).$ref()) != Builtin::u32(0U)) {
						#line 1101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						tmp2 = ADV_UPCS(High64)(buf.$ref());
						#line 1102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						div = ADV_UFCS(_operator_bsl)(tmp2, den);
						#line 1103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						ADV_UPCS(High64)(buf.$ref()) = div;
						#line 1104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						tmp2 = ((ADV_UFCS(_operator_sub_mod)(tmp2, ADV_UFCS(_operator_mul_mod)(ADV_UFCS(NarrowToUInt32)(div.$ref()), den))) << Builtin::i32(32)) | ADV_UPCS(u0)(ADV_UPCS(DWords)(buf.$ref()).$ref());
						#line 1105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						if (tmp2 == Builtin::u32(0U)) {
							#line 1106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							return Builtin::u32(0U);
						}
						#line 1109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						const auto div32 = ADV_UFCS(NarrowToUInt32)((ADV_UFCS(_operator_bsl)(tmp2, den)).$ref()); 
						#line 1110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						ADV_UPCS(u0)(ADV_UPCS(DWords)(buf.$ref()).$ref()) = div32;
						#line 1111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						return ADV_UFCS(_operator_sub_mod)(ADV_UFCS(NarrowToUInt32)(tmp2.$ref()), ADV_UFCS(_operator_mul_mod)(div32, den));
					}
					#line 1114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					tmp2 = ADV_UPCS(Low64)(buf.$ref());
					#line 1115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					if (tmp2 == Builtin::u32(0U)) {
						#line 1116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						return Builtin::u32(0U);
					}
					#line 1118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					div = ADV_UFCS(_operator_bsl)(tmp2, den);
					#line 1119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					ADV_UPCS(Low64)(buf.$ref()) = div;
					#line 1120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					return ADV_UFCS(NarrowToUInt32)((ADV_UFCS(_operator_sub_mod)(tmp2, ADV_UFCS(_operator_mul_mod)(div, den))).$ref());
				}(); 
				#line 1123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				for (;;) 
				{
					#line 1124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					Builtin::Auto<decltype(Builtin::Boolean(false))> haveScale = Builtin::Boolean(false); 
					#line 1125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					if (remainder == Builtin::u32(0U)) {
						#line 1126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						if ((scale <=> Builtin::i32(0)) < 0) {
							#line 1127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							currentScale = ADV_UFCS(Min)(Builtin::i32(9).$ref(), -scale);
							#line 1128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							haveScale = Builtin::Boolean(true);
						} else {
							#line 1130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							break;
						}
					}
					#line 1133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					if (!haveScale) {
						#line 1134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						unscale = Builtin::Boolean(true);
						#line 1135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						if (scale != SCALE_MAX) {
							#line 1136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							currentScale = SearchScale(Builtin::MutableRef(buf), scale);
						}
						#line 1137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						if (scale == SCALE_MAX || currentScale == Builtin::i32(0)) {
							#line 1138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							tmp = remainder << Builtin::i32(1);
							#line 1139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							if ((tmp <=> remainder) < 0 || (tmp <=> den) >= 0 && ((tmp <=> den) > 0 || (ADV_UPCS(u0)(ADV_UPCS(DWords)(buf.$ref()).$ref()) & Builtin::u32(1U)) != Builtin::u32(0U))) {
								#line 1140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								return roundUp();
							}
							#line 1142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							break;
						}
					}
					#line 1146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					power = ADV_UFCS(_operator_subscript)(Int32Powers10.$ref(), Builtin::Cast<true, Builtin::usize>(currentScale));
					#line 1147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					scale += currentScale;
					#line 1149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					if (increaseScale(Builtin::MutableRef(buf)) != Builtin::i32(0)) {
						#line 1150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						Builtin::Throw(Builtin::DecimalOverflowException{});
					}
					#line 1153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(Builtin::u64{remainder}, power))> num = ADV_UFCS(_operator_mul_mod)(Builtin::u64{remainder}, power); 
					#line 1154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					const Builtin::Auto<decltype(ADV_UFCS(NarrowToUInt32)((ADV_UFCS(_operator_bsl)(num, den)).$ref()))> div = ADV_UFCS(NarrowToUInt32)((ADV_UFCS(_operator_bsl)(num, den)).$ref()); 
					#line 1155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					remainder = ADV_UFCS(_operator_sub_mod)(ADV_UFCS(NarrowToUInt32)(num.$ref()), ADV_UFCS(_operator_mul_mod)(div, den));
					#line 1157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					if (!add32to96(div)) {
						#line 1158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						scale = overflowUnscale(remainder != Builtin::u32(0U));
						#line 1159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						break;
					}
				}
			} else {
				#line 1162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				{
					#line 1164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					tmp = ADV_UPCS(_hi)(other.$ref());
					#line 1165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					if (tmp == Builtin::u32(0U)) {
						#line 1166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						tmp = Builtin::u32{ADV_UPCS(_lo)(other.$ref()) >> Builtin::i32(32)};
					}
					#line 1169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					currentScale = Builtin::i32{ADV_UPCS(LeadingZeroCount)(tmp.$ref())};
					#line 1170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					Buf16 bufRem{}; 
					#line 1171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					ADV_UPCS(Low64)(bufRem.$ref()) = _lo << currentScale;
					#line 1172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					ADV_UPCS(High64)(bufRem.$ref()) = ((_lo >> Builtin::i32(32)) + (Builtin::u64{_hi} << Builtin::i32(32))) >> (Builtin::i32(32) - currentScale);
					#line 1174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					const Builtin::Auto<decltype(ADV_UPCS(_lo)(other.$ref()) << currentScale)> divisor = ADV_UPCS(_lo)(other.$ref()) << currentScale; 
					#line 1175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					if (ADV_UPCS(_hi)(other.$ref()) == Builtin::u32(0U)) {
						#line 1177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						ADV_UPCS(u2)(ADV_UPCS(DWords)(buf.$ref()).$ref()) = Builtin::u32(0U);
						#line 1178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						ADV_UPCS(u1)(ADV_UPCS(DWords)(buf.$ref()).$ref()) = Div96By64(Builtin::MutableRef(((*(UnsafePointerCast<Buf12>((__RawPtr(std::addressof(ADV_UPCS(u1)(ADV_UPCS(DWords)(bufRem.$ref()).$ref()))))))))), divisor);
						#line 1179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						ADV_UPCS(u0)(ADV_UPCS(DWords)(buf.$ref()).$ref()) = Div96By64(Builtin::MutableRef(((*(UnsafePointerCast<Buf12>((__RawPtr(std::addressof(bufRem)))))))), divisor);
						#line 1180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						Builtin::Auto<decltype(Builtin::Boolean(false))> haveScale = Builtin::Boolean(false); 
						#line 1182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						for (;;) 
						{
							#line 1183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							if (ADV_UPCS(Low64)(bufRem.$ref()) == Builtin::u32(0U)) {
								#line 1184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								if ((scale <=> Builtin::i32(0)) < 0) {
									#line 1185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
									currentScale = ADV_UFCS(Min)(Builtin::i32(9).$ref(), -scale);
									#line 1186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
									haveScale = Builtin::Boolean(true);
								} else {
									#line 1188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
									break;
								}
							}
							#line 1191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							if (!haveScale) {
								#line 1192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								unscale = Builtin::Boolean(true);
								#line 1193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								if (scale != SCALE_MAX) {
									#line 1194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
									currentScale = SearchScale(Builtin::MutableRef(buf), scale);
								}
								#line 1195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								if (scale == SCALE_MAX || currentScale == Builtin::i32(0)) {
									#line 1196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
									Builtin::Auto<decltype(ADV_UPCS(Low64)(bufRem.$ref()))> tmp64 = ADV_UPCS(Low64)(bufRem.$ref()); 
									#line 1197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
									if ((ADV_UFCS(NarrowToInt64)(tmp64.$ref()) <=> Builtin::i32(0)) < 0 || ((tmp64 <<= Builtin::i32(1)) <=> divisor) > 0 || (tmp64 == divisor && (ADV_UPCS(u0)(ADV_UPCS(DWords)(buf.$ref()).$ref()) & Builtin::u32(1U)) != Builtin::u32(0U))) {
										#line 1199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
										return roundUp();
									}
									#line 1201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
									break;
								}
							}
							#line 1205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							power = ADV_UFCS(_operator_subscript)(Int32Powers10.$ref(), Builtin::Cast<true, Builtin::usize>(currentScale));
							#line 1206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							scale += currentScale;
							#line 1207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							if (increaseScale(Builtin::MutableRef(buf)) != Builtin::i32(0)) {
								#line 1208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								Builtin::Throw(Builtin::DecimalOverflowException{});
							}
							#line 1211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							increaseScale64(Builtin::MutableRef(((*(UnsafePointerCast<Buf12>((__RawPtr(std::addressof(bufRem)))))))));
							#line 1212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							tmp = Div96By64(Builtin::MutableRef(((*(UnsafePointerCast<Buf12>((__RawPtr(std::addressof(bufRem)))))))), divisor);
							#line 1213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							if (!add32to96(tmp)) {
								#line 1214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								scale = overflowUnscale(ADV_UPCS(Low64)(bufRem.$ref()) != Builtin::u32(0U));
								#line 1215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								break;
							}
						}
					} else {
						#line 1218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						{
							#line 1220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							Buf12 bufDivisor{}; 
							#line 1221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							ADV_UPCS(Low64)(bufDivisor.$ref()) = divisor;
							#line 1222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							ADV_UPCS(u2)(ADV_UPCS(DWords)(bufDivisor.$ref()).$ref()) = ADV_UFCS(NarrowToUInt32)(((ADV_UFCS(_operator_add_mod)((ADV_UPCS(_lo)(other.$ref()) >> Builtin::i32(32)), (Builtin::u64{ADV_UPCS(_hi)(other.$ref())} << Builtin::i32(32)))) >> (Builtin::i32(32) - currentScale)).$ref());
							#line 1223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							ADV_UPCS(Low64)(buf.$ref()) = Div128By96(Builtin::MutableRef(bufRem), Builtin::MutableRef(bufDivisor));
							#line 1224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							ADV_UPCS(u2)(ADV_UPCS(DWords)(buf.$ref()).$ref()) = Builtin::u32(0U);
							#line 1225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							Builtin::Auto<decltype(Builtin::Boolean(false))> haveScale = Builtin::Boolean(false); 
							#line 1227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							for (;;) 
							{
								#line 1228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								if ((ADV_UPCS(Low64)(bufRem.$ref()) | ADV_UPCS(u2)(ADV_UPCS(DWords)(bufRem.$ref()).$ref())) == Builtin::u32(0U)) {
									#line 1229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
									if ((scale <=> Builtin::i32(0)) < 0) {
										#line 1230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
										currentScale = ADV_UFCS(Min)(Builtin::i32(9).$ref(), -scale);
										#line 1231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
										haveScale = Builtin::Boolean(true);
									} else {
										#line 1233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
										break;
									}
								}
								#line 1236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								if (!haveScale) {
									#line 1237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
									unscale = Builtin::Boolean(true);
									#line 1238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
									if (scale != SCALE_MAX) {
										#line 1239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
										currentScale = SearchScale(Builtin::MutableRef(buf), scale);
									}
									#line 1240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
									if (scale == SCALE_MAX || currentScale == Builtin::i32(0)) {
										#line 1241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
										if ((ADV_UFCS(NarrowToInt32)(ADV_UPCS(u2)(ADV_UPCS(DWords)(bufRem.$ref()).$ref()).$ref()) <=> Builtin::i32(0)) < 0) {
											#line 1242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
											return roundUp();
										}
										#line 1245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
										tmp = ADV_UPCS(u1)(ADV_UPCS(DWords)(bufRem.$ref()).$ref()) >> Builtin::i32(31);
										#line 1246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
										ADV_UPCS(Low64)(bufRem.$ref()) <<= Builtin::i32(1);
										#line 1247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
										ADV_UPCS(u2)(ADV_UPCS(DWords)(bufRem.$ref()).$ref()) = ADV_UFCS(_operator_add_mod)((ADV_UPCS(u2)(ADV_UPCS(DWords)(bufRem.$ref()).$ref()) << Builtin::i32(1)), tmp);
										#line 1249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
										if ((ADV_UPCS(u2)(ADV_UPCS(DWords)(bufRem.$ref()).$ref()) <=> ADV_UPCS(u2)(ADV_UPCS(DWords)(bufDivisor.$ref()).$ref())) > 0 || ADV_UPCS(u2)(ADV_UPCS(DWords)(bufRem.$ref()).$ref()) == ADV_UPCS(u2)(ADV_UPCS(DWords)(bufDivisor.$ref()).$ref()) && ((ADV_UPCS(Low64)(bufRem.$ref()) <=> ADV_UPCS(Low64)(bufDivisor.$ref())) > 0 || ADV_UPCS(Low64)(bufRem.$ref()) == ADV_UPCS(Low64)(bufDivisor.$ref()) && (ADV_UPCS(u0)(ADV_UPCS(DWords)(buf.$ref()).$ref()) & Builtin::u32(1U)) != Builtin::u32(0U))) {
											#line 1252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
											return roundUp();
										}
										#line 1254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
										break;
									}
								}
								#line 1258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								power = ADV_UFCS(_operator_subscript)(Int32Powers10.$ref(), Builtin::Cast<true, Builtin::usize>(currentScale));
								#line 1259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								scale += currentScale;
								#line 1260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								if (increaseScale(Builtin::MutableRef(buf)) != Builtin::i32(0)) {
									#line 1261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
									Builtin::Throw(Builtin::DecimalOverflowException{});
								}
								#line 1264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								ADV_UPCS(u3)(ADV_UPCS(DWords)(bufRem.$ref()).$ref()) = increaseScale(Builtin::MutableRef(((*(UnsafePointerCast<Buf12>((__RawPtr(std::addressof(bufRem)))))))));
								#line 1265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								tmp = Div128By96(Builtin::MutableRef(bufRem), Builtin::MutableRef(bufDivisor));
								#line 1266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								if (!add32to96(tmp)) {
									#line 1267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
									scale = overflowUnscale((ADV_UPCS(Low64)(bufRem.$ref()) | ADV_UPCS(High64)(bufRem.$ref())) != Builtin::u32(0U));
									#line 1268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
									break;
								}
							}
						}
					}
				}
			}
			#line 1273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return doUnscale();
		}
	}
#line 1277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	auto Decimal::Mod($self other) const  -> const $self
	{
		#line 1279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if ((ADV_UPCS(_lo)(other.$ref()) | ADV_UPCS(_hi)(other.$ref())) == Builtin::u32(0U)) {
			#line 1280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			Builtin::Throw(Builtin::DivisionByZeroException{});
		}
		#line 1282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if ((_lo | _hi) == Builtin::u32(0U)) {
			#line 1283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return (*this);
		}
		#line 1286 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype(ADV_UFCS(NarrowToUInt32)(_flags.$ref()))> flags = ADV_UFCS(NarrowToUInt32)(_flags.$ref()); 
		#line 1287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype((ADV_UFCS(NarrowToUInt32)(ADV_UPCS(_flags)(other.$ref()).$ref()) & (ADV_UFCS(_operator_not)(__Decimal$Protected::SignMask))) | (flags & __Decimal$Protected::SignMask))> otherFlags = (ADV_UFCS(NarrowToUInt32)(ADV_UPCS(_flags)(other.$ref()).$ref()) & (ADV_UFCS(_operator_not)(__Decimal$Protected::SignMask))) | (flags & __Decimal$Protected::SignMask); 
		#line 1288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_UPCS(_flags)(other.$ref()) = ADV_UFCS(NarrowToInt32)(otherFlags.$ref());
		#line 1290 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		const Builtin::Auto<decltype(CmpSub(other))> cmp = CmpSub(other); 
		#line 1292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if (cmp == Builtin::i32(0)) {
			#line 1293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			if ((otherFlags <=> flags) > 0) {
				#line 1294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				flags = otherFlags;
			}
			#line 1296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return $self{Builtin::u32(0U), Builtin::u32(0U), ADV_UFCS(NarrowToInt32)(flags.$ref())};
		}
		#line 1300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if (((cmp ^ ADV_UFCS(NarrowToInt32)((flags & __Decimal$Protected::SignMask).$ref())) <=> Builtin::i32(0)) < 0) {
			#line 1301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return (*this);
		}
		#line 1305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::i32 scale = ADV_UFCS(NarrowToInt8)((ADV_UFCS(_operator_sub_mod)(flags, otherFlags) >> __Decimal$Protected::ScaleShift).$ref()); 
		#line 1306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if ((scale <=> Builtin::i32(0)) > 0) {
			#line 1307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			do 
			#line 1307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			{
				#line 1308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				const Builtin::Auto<decltype((scale <=> MaxScaleInt32) >= 0 ? TenToPowerNine : ADV_UFCS(_operator_subscript)(Int32Powers10.$ref(), Builtin::Cast<true, Builtin::usize>(scale)))> power = (scale <=> MaxScaleInt32) >= 0 ? TenToPowerNine : ADV_UFCS(_operator_subscript)(Int32Powers10.$ref(), Builtin::Cast<true, Builtin::usize>(scale)); 
				#line 1309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(Builtin::u64{ADV_UFCS(NarrowToUInt32)(ADV_UPCS(_lo)(other.$ref()).$ref())}, power))> tmp = ADV_UFCS(_operator_mul_mod)(Builtin::u64{ADV_UFCS(NarrowToUInt32)(ADV_UPCS(_lo)(other.$ref()).$ref())}, power); 
				#line 1310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				const Builtin::Auto<decltype(ADV_UFCS(NarrowToUInt32)(tmp.$ref()))> low = ADV_UFCS(NarrowToUInt32)(tmp.$ref()); 
				#line 1311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				tmp >>= Builtin::i32(32);
				#line 1312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				ADV_UFCS(_operator_add_mod_eq)(tmp, ADV_UFCS(_operator_mul_mod)((ADV_UFCS(_operator_add_mod)((ADV_UPCS(_lo)(other.$ref()) >> Builtin::i32(32)), (Builtin::u64{ADV_UPCS(_hi)(other.$ref())} << Builtin::i32(32)))), power));
				#line 1313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				ADV_UPCS(_lo)(other.$ref()) = (Builtin::u64{ADV_UFCS(NarrowToUInt32)(tmp.$ref())} << Builtin::i32(32)) | low;
				#line 1314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				ADV_UPCS(_hi)(other.$ref()) = ADV_UFCS(NarrowToUInt32)((tmp >> Builtin::i32(32)).$ref());
			} while (((scale -= MaxScaleInt32) <=> Builtin::i32(0)) > 0);
			#line 1316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			scale = Builtin::i32(0);
		}
		#line 1319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype(_lo)> low = _lo; 
		#line 1320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype(_hi)> high = _hi; 
		#line 1321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::__Unsafe;	using namespace __Decimal$Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard1321{};
			#line 1322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			do 
			#line 1322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			{
				#line 1323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if ((scale <=> Builtin::i32(0)) < 0) {
					#line 1324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					flags = otherFlags;
					#line 1325 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					Buf12 buf{}; 
					#line 1326 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					ADV_UPCS(Low64)(buf.$ref()) = low;
					#line 1327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					ADV_UPCS(u2)(ADV_UPCS(DWords)(buf.$ref()).$ref()) = high;
					#line 1329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					do 
					#line 1329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					{
						#line 1330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						const Builtin::Auto<decltype(SearchScale(Builtin::MutableRef(buf), SCALE_MAX + scale))> currentScale = SearchScale(Builtin::MutableRef(buf), SCALE_MAX + scale); 
						#line 1331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						if (currentScale == Builtin::i32(0)) {
							#line 1332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							break;
						}
						#line 1334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						const Builtin::Auto<decltype((currentScale <=> MaxScaleInt32) >= 0 ? TenToPowerNine : ADV_UFCS(_operator_subscript)(Int32Powers10.$ref(), Builtin::Cast<true, Builtin::usize>(currentScale)))> power = (currentScale <=> MaxScaleInt32) >= 0 ? TenToPowerNine : ADV_UFCS(_operator_subscript)(Int32Powers10.$ref(), Builtin::Cast<true, Builtin::usize>(currentScale)); 
						#line 1335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						scale += currentScale;
						#line 1336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(Builtin::u64{ADV_UPCS(u0)(ADV_UPCS(DWords)(buf.$ref()).$ref())}, power))> tmp = ADV_UFCS(_operator_mul_mod)(Builtin::u64{ADV_UPCS(u0)(ADV_UPCS(DWords)(buf.$ref()).$ref())}, power); 
						#line 1337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						ADV_UPCS(u0)(ADV_UPCS(DWords)(buf.$ref()).$ref()) = ADV_UFCS(NarrowToUInt32)(tmp.$ref());
						#line 1338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						tmp >>= Builtin::i32(32);
						#line 1339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						ADV_UPCS(High64)(buf.$ref()) = ADV_UFCS(_operator_add_mod)(tmp, ADV_UFCS(_operator_mul_mod)(ADV_UPCS(High64)(buf.$ref()), power));
						#line 1340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						if (power != TenToPowerNine) {
							#line 1341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							break;
						}
					} while ((scale <=> Builtin::i32(0)) < 0);
					#line 1344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					low = ADV_UPCS(Low64)(buf.$ref());
					#line 1345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					high = ADV_UPCS(u2)(ADV_UPCS(DWords)(buf.$ref()).$ref());
				}
				#line 1348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if (high == Builtin::u32(0U)) {
					#line 1349 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					ADV_ASSERT((ADV_UPCS(_hi)(other.$ref()) == Builtin::u32(0U)), "other._hi==0u");
					#line 1350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					ADV_ASSERT((scale == Builtin::i32(0)), "scale==0");
					#line 1352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					ADV_UFCS(_operator_mod_mod_eq)(low, ADV_UPCS(_lo)(other.$ref()));
					#line 1353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					return $self{low, Builtin::u32(0U), ADV_UFCS(NarrowToInt32)(flags.$ref())};
				} else {
					#line 1354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					if ((ADV_UPCS(_hi)(other.$ref()) | (ADV_UPCS(_lo)(other.$ref()) >> Builtin::i32(32))) == Builtin::u32(0U)) {
						#line 1355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						const Builtin::Auto<decltype(ADV_UFCS(NarrowToUInt32)(ADV_UPCS(_lo)(other.$ref()).$ref()))> den = ADV_UFCS(NarrowToUInt32)(ADV_UPCS(_lo)(other.$ref()).$ref()); 
						#line 1356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						Builtin::Auto<decltype((Builtin::u64{high} << Builtin::i32(32)) | (low >> Builtin::i32(32)))> tmp = (Builtin::u64{high} << Builtin::i32(32)) | (low >> Builtin::i32(32)); 
						#line 1357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						tmp = ((ADV_UFCS(_operator_mod_mod)(tmp, den)) << Builtin::i32(32)) | ADV_UFCS(NarrowToUInt32)(low.$ref());
						#line 1358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						low = ADV_UFCS(_operator_mod_mod)(tmp, den);
						#line 1359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						high = Builtin::u32(0U);
					} else {
						#line 1360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						{
							#line 1361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							Builtin::Auto<decltype(ADV_UPCS(_hi)(other.$ref()))> tmp = ADV_UPCS(_hi)(other.$ref()); 
							#line 1362 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							if (tmp == Builtin::u32(0U)) {
								#line 1363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								tmp = Builtin::u32{ADV_UPCS(_lo)(other.$ref()) >> Builtin::i32(32)};
							}
							#line 1365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							const Builtin::Auto<decltype(Builtin::Cast<true, Builtin::i32>(ADV_UPCS(LeadingZeroCount)(tmp.$ref())))> shift = Builtin::Cast<true, Builtin::i32>(ADV_UPCS(LeadingZeroCount)(tmp.$ref())); 
							#line 1366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							Buf28 buf{}; 
							#line 1367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							ADV_UPCS(Low64)(ADV_UPCS(buf24)(buf.$ref()).$ref()) = low << shift;
							#line 1368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							ADV_UPCS(Mid64)(ADV_UPCS(buf24)(buf.$ref()).$ref()) = (ADV_UFCS(_operator_add_mod)((low >> Builtin::i32(32)), (Builtin::u64{high} << Builtin::i32(32)))) >> (Builtin::i32(32) - shift);
							#line 1370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							Builtin::Auto<decltype(Builtin::u32(3U))> h = Builtin::u32(3U); 
							#line 1371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							while ((scale <=> Builtin::i32(0)) < 0) 
							{
								#line 1372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								const Builtin::Auto<decltype((scale <=> (-MaxScaleInt32)) <= 0 ? TenToPowerNine : ADV_UFCS(_operator_subscript)(Int32Powers10.$ref(), Builtin::Cast<true, Builtin::usize>((-scale))))> power = (scale <=> (-MaxScaleInt32)) <= 0 ? TenToPowerNine : ADV_UFCS(_operator_subscript)(Int32Powers10.$ref(), Builtin::Cast<true, Builtin::usize>((-scale))); 
								#line 1373 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								Builtin::Auto<decltype(UnsafePointerCast<Builtin::u32>((__RawPtr(std::addressof(buf)))))> ibuf = UnsafePointerCast<Builtin::u32>((__RawPtr(std::addressof(buf)))); 
								#line 1374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(Builtin::u64{ADV_UPCS(u0)(ADV_UPCS(DWords)(ADV_UPCS(buf24)(buf.$ref()).$ref()).$ref())}, power))> tmp64 = ADV_UFCS(_operator_mul_mod)(Builtin::u64{ADV_UPCS(u0)(ADV_UPCS(DWords)(ADV_UPCS(buf24)(buf.$ref()).$ref()).$ref())}, power); 
								#line 1375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								ADV_UPCS(u0)(ADV_UPCS(DWords)(ADV_UPCS(buf24)(buf.$ref()).$ref()).$ref()) = ADV_UFCS(NarrowToUInt32)(tmp64.$ref());
								#line 1376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								for (Builtin::Auto<decltype(Builtin::u32(1U))> i = Builtin::u32(1U); (i <=> h) <= 0; i++) 
								{
									#line 1377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
									tmp64 >>= Builtin::i32(32);
									#line 1378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
									ADV_UFCS(_operator_add_mod_eq)(tmp64, ADV_UFCS(_operator_mul_mod)(Builtin::u64{ADV_UFCS(_operator_subscript)(ibuf.$ref(), i)}, power));
									#line 1379 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
									ADV_UFCS(_operator_subscript)(ibuf.$ref(), i) = ADV_UFCS(NarrowToUInt32)(tmp64.$ref());
								}
								#line 1381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								if ((tmp64 <=> ADV_USPCS(MaxValue, Builtin::i32)()) > 0) {
									#line 1382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
									ADV_ASSERT((((h + Builtin::i32(1)) <=> ADV_USPCS(LENGTH, Buf28)()) < 0), "(h+1)<Buf28.LENGTH");
									#line 1384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
									ADV_UFCS(_operator_subscript)(ibuf.$ref(), ++h) = Builtin::u32{tmp64 >> Builtin::i32(32)};
								}
								#line 1386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								scale += MaxScaleInt32;
							}
							#line 1389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							if (ADV_UPCS(_hi)(other.$ref()) == Builtin::u32(0U)) {
								#line 1390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								const Builtin::Auto<decltype(ADV_UPCS(_lo)(other.$ref()) << shift)> divisor = ADV_UPCS(_lo)(other.$ref()) << shift; 
								#line 1391 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								if ((h <=> Builtin::u32(5U)) > 0) {
									#line 1392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
									Div96By64(Builtin::MutableRef(((*(UnsafePointerCast<Buf12>((__RawPtr(std::addressof(ADV_UPCS(u4)(ADV_UPCS(DWords)(ADV_UPCS(buf24)(buf.$ref()).$ref()).$ref()))))))))), divisor);
								}
								#line 1394 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								if ((h <=> Builtin::u32(4U)) > 0) {
									#line 1395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
									Div96By64(Builtin::MutableRef(((*(UnsafePointerCast<Buf12>((__RawPtr(std::addressof(ADV_UPCS(u3)(ADV_UPCS(DWords)(ADV_UPCS(buf24)(buf.$ref()).$ref()).$ref()))))))))), divisor);
								}
								#line 1397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								if ((h <=> Builtin::u32(3U)) > 0) {
									#line 1398 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
									Div96By64(Builtin::MutableRef(((*(UnsafePointerCast<Buf12>((__RawPtr(std::addressof(ADV_UPCS(u2)(ADV_UPCS(DWords)(ADV_UPCS(buf24)(buf.$ref()).$ref()).$ref()))))))))), divisor);
								}
								#line 1400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								Div96By64(Builtin::MutableRef(((*(UnsafePointerCast<Buf12>((__RawPtr(std::addressof(ADV_UPCS(u1)(ADV_UPCS(DWords)(ADV_UPCS(buf24)(buf.$ref()).$ref()).$ref()))))))))), divisor);
								#line 1401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								Div96By64(Builtin::MutableRef(((*(UnsafePointerCast<Buf12>((__RawPtr(std::addressof(buf)))))))), divisor);
								#line 1402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								low = ADV_UPCS(Low64)(ADV_UPCS(buf24)(buf.$ref()).$ref()) >> shift;
								#line 1403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								high = Builtin::u32(0U);
							} else {
								#line 1404 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								{
									#line 1405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
									Buf12 bufDivisor{}; 
									#line 1406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
									ADV_UPCS(Low64)(bufDivisor.$ref()) = ADV_UPCS(_lo)(other.$ref()) << shift;
									#line 1407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
									ADV_UPCS(u2)(ADV_UPCS(DWords)(bufDivisor.$ref()).$ref()) = ADV_UFCS(NarrowToUInt32)(((ADV_UFCS(_operator_add_mod)((ADV_UPCS(_lo)(other.$ref()) >> Builtin::i32(32)), (Builtin::u64{ADV_UPCS(_hi)(other.$ref())} << Builtin::i32(32)))) >> (Builtin::i32(32) - shift)).$ref());
									#line 1408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
									if ((h <=> Builtin::u32(5U)) > 0) {
										#line 1409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
										Div128By96(Builtin::MutableRef(((*(UnsafePointerCast<Buf16>((__RawPtr(std::addressof(ADV_UPCS(u3)(ADV_UPCS(DWords)(ADV_UPCS(buf24)(buf.$ref()).$ref()).$ref()))))))))), Builtin::MutableRef(bufDivisor));
									}
									#line 1411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
									if ((h <=> Builtin::u32(4U)) > 0) {
										#line 1412 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
										Div128By96(Builtin::MutableRef(((*(UnsafePointerCast<Buf16>((__RawPtr(std::addressof(ADV_UPCS(u2)(ADV_UPCS(DWords)(ADV_UPCS(buf24)(buf.$ref()).$ref()).$ref()))))))))), Builtin::MutableRef(bufDivisor));
									}
									#line 1414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
									if ((h <=> Builtin::u32(3U)) > 0) {
										#line 1415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
										Div128By96(Builtin::MutableRef(((*(UnsafePointerCast<Buf16>((__RawPtr(std::addressof(ADV_UPCS(u1)(ADV_UPCS(DWords)(ADV_UPCS(buf24)(buf.$ref()).$ref()).$ref()))))))))), Builtin::MutableRef(bufDivisor));
									}
									#line 1417 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
									Div128By96(Builtin::MutableRef(((*(UnsafePointerCast<Buf16>((__RawPtr(std::addressof(buf)))))))), Builtin::MutableRef(bufDivisor));
									#line 1418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
									low = ADV_UFCS(_operator_add_mod)((ADV_UPCS(Low64)(ADV_UPCS(buf24)(buf.$ref()).$ref()) >> shift), (Builtin::u64{ADV_UPCS(u2)(ADV_UPCS(DWords)(ADV_UPCS(buf24)(buf.$ref()).$ref()).$ref())} << (Builtin::i32(32) - shift) << Builtin::i32(32)));
									#line 1419 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
									high = ADV_UPCS(u2)(ADV_UPCS(DWords)(ADV_UPCS(buf24)(buf.$ref()).$ref()).$ref()) >> shift;
								}
							}
							#line 1422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							return $self{low, high, ADV_UFCS(NarrowToInt32)(flags.$ref())};
						}
					}
				}
			} while ((scale <=> Builtin::i32(0)) < 0);
		}
		#line 1427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		return $self{low, high, ADV_UFCS(NarrowToInt32)(flags.$ref())};
	}
#line 1430 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	auto Decimal::CmpSub($self other) const  -> const Builtin::i32
	{
		#line 1432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		const Builtin::Auto<decltype(ADV_UPCS(_flags)(other.$ref()))> flags = ADV_UPCS(_flags)(other.$ref()); 
		#line 1433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype((flags >> Builtin::i32(31)) | Builtin::i32(1))> sign = (flags >> Builtin::i32(31)) | Builtin::i32(1); 
		#line 1434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype(flags - _flags)> scale = flags - _flags; 
		#line 1435 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype(_lo)> low = _lo; 
		#line 1436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype(_hi)> high = _hi; 
		#line 1437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype(ADV_UPCS(_lo)(other.$ref()))> low2 = ADV_UPCS(_lo)(other.$ref()); 
		#line 1438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype(ADV_UPCS(_hi)(other.$ref()))> high2 = ADV_UPCS(_hi)(other.$ref()); 
		#line 1440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if (scale) {
			#line 1441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			scale >>= __Decimal$Protected::ScaleShift;
			#line 1442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			if ((scale <=> Builtin::i32(0)) < 0) {
				#line 1444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				scale = -scale;
				#line 1445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				sign = -sign;
				#line 1447 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				const Builtin::Auto<decltype(low)> tmp64 = low; 
				#line 1448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				low = low2;
				#line 1449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				low2 = tmp64;
				#line 1451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				const Builtin::Auto<decltype(high)> tmp = high; 
				#line 1452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				high = high2;
				#line 1453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				high2 = tmp;
			}
			#line 1456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			do 
			#line 1456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			{
				#line 1457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				const Builtin::Auto<decltype((scale <=> MaxScaleInt32) >= 0 ? TenToPowerNine : ADV_UFCS(_operator_subscript)(Int32Powers10.$ref(), Builtin::Cast<true, Builtin::usize>(scale)))> power = (scale <=> MaxScaleInt32) >= 0 ? TenToPowerNine : ADV_UFCS(_operator_subscript)(Int32Powers10.$ref(), Builtin::Cast<true, Builtin::usize>(scale)); 
				#line 1458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(Builtin::u64{ADV_UFCS(NarrowToUInt32)(low.$ref())}, power))> tmpLow = ADV_UFCS(_operator_mul_mod)(Builtin::u64{ADV_UFCS(NarrowToUInt32)(low.$ref())}, power); 
				#line 1459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				Builtin::Auto<decltype(ADV_UFCS(_operator_add_mod)((ADV_UFCS(_operator_mul_mod)((low >> Builtin::i32(32)), power)), (tmpLow >> Builtin::i32(32))))> tmp = ADV_UFCS(_operator_add_mod)((ADV_UFCS(_operator_mul_mod)((low >> Builtin::i32(32)), power)), (tmpLow >> Builtin::i32(32))); 
				#line 1460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				low = ADV_UFCS(_operator_add_mod)(Builtin::u64{ADV_UFCS(NarrowToUInt32)(tmpLow.$ref())}, (tmp << Builtin::i32(32)));
				#line 1461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				tmp >>= Builtin::i32(32);
				#line 1462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				ADV_UFCS(_operator_add_mod_eq)(tmp, ADV_UFCS(_operator_mul_mod)(Builtin::u64{high}, power));
				#line 1463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if ((tmp <=> ADV_USPCS(MaxValue, Builtin::u32)()) > 0) {
					#line 1464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					return sign;
				}
				#line 1466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				high = ADV_UFCS(NarrowToUInt32)(tmp.$ref());
			} while (((scale -= MaxScaleInt32) <=> Builtin::i32(0)) > 0);
		}
		#line 1470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_sub_mod)(high, high2))> cmpHigh = ADV_UFCS(_operator_sub_mod)(high, high2); 
		#line 1471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if (cmpHigh) {
			#line 1472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			if ((cmpHigh <=> high) > 0) {
				#line 1473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				sign = -sign;
			}
			#line 1475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return sign;
		}
		#line 1478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_sub_mod)(low, low2))> cmpLow = ADV_UFCS(_operator_sub_mod)(low, low2); 
		#line 1479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if (cmpLow == Builtin::u32(0U)) {
			#line 1480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			sign = Builtin::i32(0);
		} else {
			#line 1481 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			if ((cmpLow <=> low) > 0) {
				#line 1482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				sign = -sign;
			}
		}
		#line 1485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		return sign;
	}
#line 1488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	auto Decimal::RoundInternal(Builtin::u32 scale, MidpointRounding mode) const noexcept -> const $self
	{
		#line 1490 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		const Builtin::Auto<decltype((*this))> copy = (*this); 
		#line 1491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_UPCS(_flags)(copy.$ref()) -= Builtin::i32{scale} << __Decimal$Protected::ScaleShift;
		#line 1493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::u32 remainder{}, sticky{}, power{}; 
		#line 1494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		CONTINUE_rounding: {{
			#line 1495 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			while ((scale <=> MaxScaleInt32) >= 0) 
			{
				#line 1496 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				scale -= MaxScaleInt32;
				#line 1498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				constexpr Builtin::Auto<decltype(TenToPowerNine)> divisor = TenToPowerNine;
				#line 1499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				Builtin::Auto<decltype(ADV_UPCS(_hi)(copy.$ref()))> n = ADV_UPCS(_hi)(copy.$ref()); 
				#line 1500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if (n == Builtin::i32(0)) {
					#line 1501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					const Builtin::Auto<decltype(ADV_UPCS(_lo)(copy.$ref()))> tmp = ADV_UPCS(_lo)(copy.$ref()); 
					#line 1502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					const Builtin::Auto<decltype(ADV_UFCS(_operator_bsl)(tmp, divisor))> div = ADV_UFCS(_operator_bsl)(tmp, divisor); 
					#line 1503 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					ADV_UPCS(_lo)(copy.$ref()) = div;
					#line 1504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					remainder = ADV_UFCS(NarrowToUInt32)((tmp - div * divisor).$ref());
				} else {
					#line 1505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					{
						#line 1506 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						Builtin::u32 q{}; 
						#line 1507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						ADV_UPCS(_hi)(copy.$ref()) = q = ADV_UFCS(_operator_bsl)(n, divisor);
						#line 1508 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						remainder = n - q * divisor;
						#line 1509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						n = Builtin::u32{ADV_UPCS(_lo)(copy.$ref()) >> Builtin::i32(32)};
						#line 1510 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						Builtin::u32 mid{}, low{}; 
						#line 1511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						if ((n | remainder) != Builtin::i32(0)) {
							#line 1512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							mid = q = ADV_UFCS(NarrowToUInt32)((ADV_UFCS(_operator_bsl)(((Builtin::u64{remainder} << Builtin::i32(32)) | n), divisor)).$ref());
							#line 1513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							remainder = n - q * divisor;
						}
						#line 1515 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						n = ADV_UFCS(NarrowToUInt32)(ADV_UPCS(_lo)(copy.$ref()).$ref());
						#line 1516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						if ((n | remainder) != Builtin::i32(0)) {
							#line 1517 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							low = q = ADV_UFCS(NarrowToUInt32)((ADV_UFCS(_operator_bsl)(((Builtin::u64{remainder} << Builtin::i32(32)) | n), divisor)).$ref());
							#line 1518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							remainder = n - q * divisor;
						}
						#line 1520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						ADV_UPCS(_lo)(copy.$ref()) = (Builtin::u64{mid} << Builtin::i32(32)) | low;
					}
				}
				#line 1523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				power = divisor;
				#line 1524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if (scale == Builtin::i32(0)) {
					#line 1525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					goto BREAK_rounding;
				}
				#line 1528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				sticky |= remainder;
			}
			#line 1531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			{
				#line 1532 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				power = ADV_UFCS(_operator_subscript)(Int32Powers10.$ref(), scale);
				#line 1533 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				Builtin::Auto<decltype(ADV_UPCS(_hi)(copy.$ref()))> n = ADV_UPCS(_hi)(copy.$ref()); 
				#line 1534 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if (n == Builtin::i32(0)) {
					#line 1535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					const Builtin::Auto<decltype(ADV_UPCS(_lo)(copy.$ref()))> tmp = ADV_UPCS(_lo)(copy.$ref()); 
					#line 1536 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					if (tmp == Builtin::i32(0)) {
						#line 1537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						if ((mode <=> ADV_USPCS(ToZero, MidpointRounding)()) <= 0) {
							#line 1538 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							return copy;
						}
						#line 1540 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						remainder = Builtin::u32(0U);
						#line 1541 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						goto BREAK_rounding;
					}
					#line 1543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					const Builtin::Auto<decltype(ADV_UFCS(_operator_bsl)(tmp, power))> div = ADV_UFCS(_operator_bsl)(tmp, power); 
					#line 1544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					ADV_UPCS(_lo)(copy.$ref()) = div;
					#line 1545 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					remainder = ADV_UFCS(NarrowToUInt32)((tmp - div * power).$ref());
				} else {
					#line 1546 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					{
						#line 1547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						Builtin::u32 q{}; 
						#line 1548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						ADV_UPCS(_hi)(copy.$ref()) = q = ADV_UFCS(_operator_bsl)(n, power);
						#line 1549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						remainder = n - q * power;
						#line 1550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						n = Builtin::u32{ADV_UPCS(_lo)(copy.$ref()) >> Builtin::i32(32)};
						#line 1551 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						Builtin::u32 mid{}, low{}; 
						#line 1552 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						if ((n | remainder) != Builtin::i32(0)) {
							#line 1553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							mid = q = ADV_UFCS(NarrowToUInt32)((ADV_UFCS(_operator_bsl)(((Builtin::u64{remainder} << Builtin::i32(32)) | n), power)).$ref());
							#line 1554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							remainder = n - q * power;
						}
						#line 1556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						n = ADV_UFCS(NarrowToUInt32)(ADV_UPCS(_lo)(copy.$ref()).$ref());
						#line 1557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						if ((n | remainder) != Builtin::i32(0)) {
							#line 1558 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							low = q = ADV_UFCS(NarrowToUInt32)((ADV_UFCS(_operator_bsl)(((Builtin::u64{remainder} << Builtin::i32(32)) | n), power)).$ref());
							#line 1559 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							remainder = n - q * power;
						}
						#line 1561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						ADV_UPCS(_lo)(copy.$ref()) = (Builtin::u64{mid} << Builtin::i32(32)) | low;
					}
				}
			}
		} BREAK_rounding:; }
		#line 1566 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		{
			#line 1567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			auto __tmp__valid_1566 = Builtin::Cast<false, std::decay_t<decltype(mode)>::$self>(mode);
			#line 1567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			if(__tmp__valid_1566.IsValid() && Builtin::Is(*__tmp__valid_1566, std::decay_t<decltype(mode)>::ToZero))  {
				#line 1567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				const auto& mode = *__tmp__valid_1566;
				#line 1567 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				return copy;
			}
			else {
				#line 1568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if(__tmp__valid_1566.IsValid() && Builtin::Is(*__tmp__valid_1566, std::decay_t<decltype(mode)>::ToEven))  {
					#line 1568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					const auto& mode = *__tmp__valid_1566;
					#line 1568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					{
						#line 1569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						remainder <<= Builtin::i32(1);
						#line 1570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						if ((sticky | ADV_UPCS(_lo)(copy.$ref()) & Builtin::u32(1U)) != Builtin::i32(0)) {
							#line 1571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							remainder++;
						}
						#line 1573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						if ((power <=> remainder) >= 0) {
							#line 1574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							return copy;
						}
					}
				}
				else {
					#line 1576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					if(__tmp__valid_1566.IsValid() && Builtin::Is(*__tmp__valid_1566, std::decay_t<decltype(mode)>::AwayFromZero))  {
						#line 1576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						const auto& mode = *__tmp__valid_1566;
						#line 1576 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						{
							#line 1577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							remainder <<= Builtin::i32(1);
							#line 1578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							if ((power <=> remainder) > 0) {
								#line 1579 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								return copy;
							}
						}
					}
					else {
						#line 1581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						if(__tmp__valid_1566.IsValid() && Builtin::Is(*__tmp__valid_1566, std::decay_t<decltype(mode)>::ToNegativeInfinity))  {
							#line 1581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							const auto& mode = *__tmp__valid_1566;
							#line 1581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							{
								#line 1582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								if (!ADV_UPCS(IsNegative)(copy.$ref()) || (remainder | sticky) == Builtin::i32(0)) {
									#line 1583 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
									return copy;
								}
							}
						}
						else {
							#line 1585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							{
								#line 1586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								ADV_ASSERT((mode == ADV_USPCS(ToPositiveInfinity, MidpointRounding)()), "mode==MidpointRounding.ToPositiveInfinity");
								#line 1587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								if (ADV_UPCS(IsNegative)(copy.$ref()) || (remainder | sticky) == Builtin::i32(0)) {
									#line 1588 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
									return copy;
								}
							}
							
						}
					}
				}
			}
		}

		#line 1592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if (++ADV_UPCS(_lo)(copy.$ref()) == Builtin::i32(0)) {
			#line 1593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			ADV_UPCS(_hi)(copy.$ref())++;
		}
		#line 1596 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		return copy;
	}
























#line 2561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	Buf12::Buf12() noexcept
	{
	}
#if (ADV_VERSION_BIG_ENDIAN )
#line 2573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto Buf12::setLow64(const Builtin::u64& value) -> $self& 
	{	using namespace Builtin::Unsafe;	using namespace System::__Unsafe;	using namespace __Decimal$Protected__Unsafe;
		Builtin::CheckForUnsafeContext(); Builtin::UnsafeContextGuard __unsafe_context_guard2573{};
		#line 2574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_UPCS(u1)(DWords.$ref()) = Builtin::u32{value >> Builtin::i32(32)};
		#line 2575 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_UPCS(u0)(DWords.$ref()) = ADV_UFCS(NarrowToUInt32)(value.$ref());
		return *this;
	}
	
#endif 
#if (ADV_VERSION_BIG_ENDIAN )
#line 2572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto Buf12::getLow64() const  -> Builtin::u64 
	{
		#line 2572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(Builtin::u64{ADV_UPCS(u1)(DWords.$ref())} << Builtin::i32(32) | ADV_UPCS(u0)(DWords.$ref())); 
	}
	
#endif 
#if (!(ADV_VERSION_BIG_ENDIAN ))
#line 2581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto Buf12::setLow64(const Builtin::u64& value) -> $self& 
	{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __Decimal$Protected__Unsafe;
		#line 2581 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ulo64 = value; return *this;
	}
	
#endif 
#if (!(ADV_VERSION_BIG_ENDIAN ))
#line 2580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto Buf12::getLow64() const  -> Builtin::u64 
	{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __Decimal$Protected__Unsafe;
		#line 2580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(ulo64); 
	}
	
#endif 
#line 2586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto Buf12::setHigh64(const Builtin::u64& value) -> $self& 
	{	using namespace Builtin::Unsafe;	using namespace System::__Unsafe;	using namespace __Decimal$Protected__Unsafe;
		Builtin::CheckForUnsafeContext(); Builtin::UnsafeContextGuard __unsafe_context_guard2586{};
		#line 2587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_UPCS(u2)(DWords.$ref()) = Builtin::u32{value >> Builtin::i32(32)};
		#line 2588 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_UPCS(u1)(DWords.$ref()) = ADV_UFCS(NarrowToUInt32)(value.$ref());
		return *this;
	}
	
#line 2585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto Buf12::getHigh64() const  -> Builtin::u64 
	{
		#line 2585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(Builtin::u64{ADV_UPCS(u2)(DWords.$ref())} << Builtin::i32(32) | ADV_UPCS(u1)(DWords.$ref())); 
	}
	

#line 2594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	Buf16::Buf16() noexcept
	{
	}
#if (ADV_VERSION_BIG_ENDIAN )
#line 2609 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto Buf16::setLow64(const Builtin::u64& value) -> $self& 
	{	using namespace Builtin::Unsafe;	using namespace System::__Unsafe;	using namespace __Decimal$Protected__Unsafe;
		Builtin::CheckForUnsafeContext(); Builtin::UnsafeContextGuard __unsafe_context_guard2609{};
		#line 2610 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_UPCS(u1)(DWords.$ref()) = Builtin::u32{value >> Builtin::i32(32)};
		#line 2611 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_UPCS(u0)(DWords.$ref()) = ADV_UFCS(NarrowToUInt32)(value.$ref());
		return *this;
	}
	
#endif 
#if (ADV_VERSION_BIG_ENDIAN )
#line 2608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto Buf16::getLow64() const  -> Builtin::u64 
	{
		#line 2608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(Builtin::u64{ADV_UPCS(u1)(DWords.$ref())} << Builtin::i32(32) | ADV_UPCS(u0)(DWords.$ref())); 
	}
	
#endif 
#if (ADV_VERSION_BIG_ENDIAN )
#line 2616 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto Buf16::setHigh64(const Builtin::u64& value) -> $self& 
	{	using namespace Builtin::Unsafe;	using namespace System::__Unsafe;	using namespace __Decimal$Protected__Unsafe;
		Builtin::CheckForUnsafeContext(); Builtin::UnsafeContextGuard __unsafe_context_guard2616{};
		#line 2617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_UPCS(u3)(DWords.$ref()) = Builtin::u32{value >> Builtin::i32(32)};
		#line 2618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_UPCS(u2)(DWords.$ref()) = ADV_UFCS(NarrowToUInt32)(value.$ref());
		return *this;
	}
	
#endif 
#if (ADV_VERSION_BIG_ENDIAN )
#line 2615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto Buf16::getHigh64() const  -> Builtin::u64 
	{
		#line 2615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(Builtin::u64{ADV_UPCS(u3)(DWords.$ref())} << Builtin::i32(32) | ADV_UPCS(u2)(DWords.$ref())); 
	}
	
#endif 
#if (!(ADV_VERSION_BIG_ENDIAN ))
#line 2624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto Buf16::setLow64(const Builtin::u64& value) -> $self& 
	{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __Decimal$Protected__Unsafe;
		#line 2624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_UPCS(ulo)(QWords.$ref()) = value; return *this;
	}
	
#endif 
#if (!(ADV_VERSION_BIG_ENDIAN ))
#line 2623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto Buf16::getLow64() const  -> Builtin::u64 
	{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __Decimal$Protected__Unsafe;
		#line 2623 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(ulo)(QWords.$ref())); 
	}
	
#endif 
#if (!(ADV_VERSION_BIG_ENDIAN ))
#line 2628 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto Buf16::setHigh64(const Builtin::u64& value) -> $self& 
	{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __Decimal$Protected__Unsafe;
		#line 2628 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_UPCS(uhi)(QWords.$ref()) = value; return *this;
	}
	
#endif 
#if (!(ADV_VERSION_BIG_ENDIAN ))
#line 2627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto Buf16::getHigh64() const  -> Builtin::u64 
	{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __Decimal$Protected__Unsafe;
		#line 2627 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(uhi)(QWords.$ref())); 
	}
	
#endif 

#line 2634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	Buf24::Buf24() noexcept
	{
	}
#if (ADV_VERSION_BIG_ENDIAN )
#line 2649 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto Buf24::setLow64(const Builtin::u64& value) -> $self& 
	{	using namespace Builtin::Unsafe;	using namespace System::__Unsafe;	using namespace __Decimal$Protected__Unsafe;
		Builtin::CheckForUnsafeContext(); Builtin::UnsafeContextGuard __unsafe_context_guard2649{};
		#line 2650 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_UPCS(u1)(DWords.$ref()) = Builtin::u32{value >> Builtin::i32(32)};
		#line 2651 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_UPCS(u0)(DWords.$ref()) = ADV_UFCS(NarrowToUInt32)(value.$ref());
		return *this;
	}
	
#endif 
#if (ADV_VERSION_BIG_ENDIAN )
#line 2648 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto Buf24::getLow64() const  -> Builtin::u64 
	{
		#line 2648 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(Builtin::u64{ADV_UPCS(u1)(DWords.$ref())} << Builtin::i32(32) | ADV_UPCS(u0)(DWords.$ref())); 
	}
	
#endif 
#if (ADV_VERSION_BIG_ENDIAN )
#line 2656 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto Buf24::setMid64(const Builtin::u64& value) -> $self& 
	{	using namespace Builtin::Unsafe;	using namespace System::__Unsafe;	using namespace __Decimal$Protected__Unsafe;
		Builtin::CheckForUnsafeContext(); Builtin::UnsafeContextGuard __unsafe_context_guard2656{};
		#line 2657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_UPCS(u3)(DWords.$ref()) = Builtin::u32{value >> Builtin::i32(32)};
		#line 2658 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_UPCS(u2)(DWords.$ref()) = ADV_UFCS(NarrowToUInt32)(value.$ref());
		return *this;
	}
	
#endif 
#if (ADV_VERSION_BIG_ENDIAN )
#line 2655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto Buf24::getMid64() const  -> Builtin::u64 
	{
		#line 2655 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(Builtin::u64{ADV_UPCS(u3)(DWords.$ref())} << Builtin::i32(32) | ADV_UPCS(u2)(DWords.$ref())); 
	}
	
#endif 
#if (ADV_VERSION_BIG_ENDIAN )
#line 2663 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto Buf24::setHigh64(const Builtin::u64& value) -> $self& 
	{	using namespace Builtin::Unsafe;	using namespace System::__Unsafe;	using namespace __Decimal$Protected__Unsafe;
		Builtin::CheckForUnsafeContext(); Builtin::UnsafeContextGuard __unsafe_context_guard2663{};
		#line 2664 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_UPCS(u5)(DWords.$ref()) = Builtin::u32{value >> Builtin::i32(32)};
		#line 2665 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_UPCS(u4)(DWords.$ref()) = ADV_UFCS(NarrowToUInt32)(value.$ref());
		return *this;
	}
	
#endif 
#if (ADV_VERSION_BIG_ENDIAN )
#line 2662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto Buf24::getHigh64() const  -> Builtin::u64 
	{
		#line 2662 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(Builtin::u64{ADV_UPCS(u5)(DWords.$ref())} << Builtin::i32(32) | ADV_UPCS(u4)(DWords.$ref())); 
	}
	
#endif 
#if (!(ADV_VERSION_BIG_ENDIAN ))
#line 2671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto Buf24::setLow64(const Builtin::u64& value) -> $self& 
	{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __Decimal$Protected__Unsafe;
		#line 2671 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_UPCS(ulo)(QWords.$ref()) = value; return *this;
	}
	
#endif 
#if (!(ADV_VERSION_BIG_ENDIAN ))
#line 2670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto Buf24::getLow64() const  -> Builtin::u64 
	{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __Decimal$Protected__Unsafe;
		#line 2670 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(ulo)(QWords.$ref())); 
	}
	
#endif 
#if (!(ADV_VERSION_BIG_ENDIAN ))
#line 2675 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto Buf24::setMid64(const Builtin::u64& value) -> $self& 
	{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __Decimal$Protected__Unsafe;
		#line 2675 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_UPCS(umid)(QWords.$ref()) = value; return *this;
	}
	
#endif 
#if (!(ADV_VERSION_BIG_ENDIAN ))
#line 2674 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto Buf24::getMid64() const  -> Builtin::u64 
	{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __Decimal$Protected__Unsafe;
		#line 2674 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(umid)(QWords.$ref())); 
	}
	
#endif 
#if (!(ADV_VERSION_BIG_ENDIAN ))
#line 2679 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto Buf24::setHigh64(const Builtin::u64& value) -> $self& 
	{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __Decimal$Protected__Unsafe;
		#line 2679 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_UPCS(uhi)(QWords.$ref()) = value; return *this;
	}
	
#endif 
#if (!(ADV_VERSION_BIG_ENDIAN ))
#line 2678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto Buf24::getHigh64() const  -> Builtin::u64 
	{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __Decimal$Protected__Unsafe;
		#line 2678 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(uhi)(QWords.$ref())); 
	}
	
#endif 



namespace __Unsafe { [[clang::annotate("unsafe")]] 
		#line 2695 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		auto ScaleResult(Builtin::Unsafe::__RawPtr<Buf24> buf, Builtin::u32 hi, Builtin::i32 scale)  -> const Builtin::i32
		{	using namespace Builtin::Unsafe;	using namespace System::__Unsafe;	using namespace __Decimal$Protected__Unsafe;
			Builtin::CheckForUnsafeContext(); Builtin::UnsafeContextGuard __unsafe_context_guard2695{};
			#line 2696 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			ADV_ASSERT(((hi <=> ADV_USPCS(LENGTH, Buf24)()) < 0), "hi<Buf24.LENGTH");
			#line 2698 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			Builtin::Auto<decltype(UnsafePointerCast<Builtin::u32>(buf))> result = UnsafePointerCast<Builtin::u32>(buf); 
			#line 2699 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			Builtin::Auto<decltype(Builtin::i32(0))> newScale = Builtin::i32(0); 
			#line 2700 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			if ((hi <=> Builtin::u32(2U)) > 0) {
				#line 2701 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				newScale = ADV_UFCS(_operator_sub_mod)(ADV_UFCS(_operator_sub_mod)(ADV_UFCS(_operator_mul_mod)(ADV_UFCS(NarrowToInt32)(hi.$ref()), Builtin::i32(32)), Builtin::i32(64)), Builtin::i32(1));
				#line 2702 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				newScale -= ADV_UPCS(LeadingZeroCount)(ADV_UFCS(_operator_subscript)(result.$ref(), hi).$ref());
				#line 2703 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				newScale = ADV_UFCS(_operator_add_mod)(((ADV_UFCS(_operator_mul_mod)(newScale, Builtin::i32(77))) >> Builtin::i32(8)), Builtin::i32(1));
				#line 2705 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if ((newScale <=> scale) > 0) {
					#line 2706 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					Builtin::Throw(Builtin::DecimalOverflowException{});
				}
			}
			#line 2710 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			if ((newScale <=> scale - DEC_SCALE_MAX) < 0) {
				#line 2711 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				newScale = scale - DEC_SCALE_MAX;
			}
			#line 2714 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			if (newScale != Builtin::i32(0)) {
				#line 2715 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				scale -= newScale;
				#line 2716 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				Builtin::u32 sticky{}, quotient{}, remainder{}; 
				#line 2718 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				auto divByConst = [&] (Builtin::u32 pow) -> Builtin::u32 
				{
					#line 2719 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					const auto high = ADV_UFCS(_operator_subscript)(result.$ref(), hi); 
					#line 2720 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					quotient = ADV_UFCS(_operator_bsl)(high, pow);
					#line 2721 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					remainder = ADV_UFCS(_operator_sub_mod)(high, ADV_UFCS(_operator_mul_mod)(quotient, pow));
					#line 2722 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					for (auto i = ADV_UFCS(_operator_sub_mod)(hi, Builtin::i32(1)); (ADV_UFCS(NarrowToInt32)(i.$ref()) <=> Builtin::i32(0)) >= 0; ADV_UFCS(_operator_sub_sub_mod)(i)) 
					{
						#line 2723 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						if constexpr (Builtin::Is64BitTarget()) {
							#line 2724 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							const auto num = ADV_UFCS(_operator_add_mod)(Builtin::u64{ADV_UFCS(_operator_subscript)(result.$ref(), i)}, (Builtin::u64{remainder} << Builtin::i32(32))); 
							#line 2725 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							ADV_UFCS(_operator_subscript)(result.$ref(), i) = ADV_UFCS(NarrowToUInt32)((ADV_UFCS(_operator_bsl)(num, pow)).$ref());
							#line 2726 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							remainder = ADV_UFCS(_operator_sub_mod)(ADV_UFCS(NarrowToUInt32)(num.$ref()), ADV_UFCS(_operator_mul_mod)(ADV_UFCS(_operator_subscript)(result.$ref(), i), pow));
						} else {
							#line 2727 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							{
								#line 2728 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								ADV_ASSERT(((pow <=> ADV_USPCS(MaxValue, Builtin::u16)()) <= 0), "pow<=u16.MaxValue");
								#line 2729 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								#if ADV_VERSION_BIG_ENDIAN
								#line 2730 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								constexpr auto  low16 = Builtin::u32(2U);
								#line 2731 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								constexpr auto  high16 = Builtin::u32(0U);
								#else
								#line 2733 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								constexpr auto  low16 = Builtin::u32(0U);
								#line 2734 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								constexpr auto  high16 = Builtin::u32(2U);
								#endif
								#line 2737 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								auto num = ADV_UFCS(_operator_add_mod)(Builtin::u32{(*(UnsafePointerCast<Builtin::u16>(UnsafePointerCast<Builtin::u8>(result) + i * Builtin::i32(4) + high16)))}, (remainder << Builtin::i32(16))); 
								#line 2738 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								auto div = ADV_UFCS(_operator_bsl)(num, pow); 
								#line 2739 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								remainder = ADV_UFCS(_operator_sub_mod)(num, ADV_UFCS(_operator_mul_mod)(div, pow));
								#line 2740 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								(*(UnsafePointerCast<Builtin::u16>(UnsafePointerCast<Builtin::u8>(result) + i * Builtin::i32(4) + high16))) = ADV_UFCS(NarrowToUInt32)(div.$ref());
								#line 2742 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								num = ADV_UFCS(_operator_add_mod)(Builtin::u32{(*(UnsafePointerCast<Builtin::u16>(UnsafePointerCast<Builtin::u8>(result) + i * Builtin::i32(4) + low16)))}, (remainder << Builtin::i32(16)));
								#line 2743 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								auto div = ADV_UFCS(_operator_bsl)(num, pow); 
								#line 2744 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								remainder = ADV_UFCS(_operator_sub_mod)(num, ADV_UFCS(_operator_mul_mod)(div, pow));
								#line 2745 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								(*(UnsafePointerCast<Builtin::u16>(UnsafePointerCast<Builtin::u8>(result) + i * Builtin::i32(4) + low16))) = ADV_UFCS(NarrowToUInt32)(div.$ref());
							}
						}
					}
					#line 2748 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					return pow;
				}; 
				#line 2751 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				for (;;) 
				{
					#line 2752 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					sticky |= remainder;
					#line 2753 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					Builtin::u32 power{}; 
					#line 2755 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					if constexpr (Builtin::Is64BitTarget()) {
						#line 2756 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						power = [&]() 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
						{
							#line 2757 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							auto __tmp__valid_2756 = Builtin::Cast<false, std::decay_t<decltype(newScale)>::$self>(newScale);
							#line 2757 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							if(__tmp__valid_2756.IsValid() && Builtin::Is(*__tmp__valid_2756, Builtin::i32(1))) {
								#line 2757 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								const auto& newScale = *__tmp__valid_2756;
								return divByConst(Builtin::u32(10U));
							}
							else {
								#line 2758 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								if(__tmp__valid_2756.IsValid() && Builtin::Is(*__tmp__valid_2756, Builtin::i32(2))) {
									#line 2758 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
									const auto& newScale = *__tmp__valid_2756;
									return divByConst(Builtin::u32(100U));
								}
								else {
									#line 2759 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
									if(__tmp__valid_2756.IsValid() && Builtin::Is(*__tmp__valid_2756, Builtin::i32(3))) {
										#line 2759 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
										const auto& newScale = *__tmp__valid_2756;
										return divByConst(Builtin::u32(1000U));
									}
									else {
										#line 2760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
										if(__tmp__valid_2756.IsValid() && Builtin::Is(*__tmp__valid_2756, Builtin::i32(4))) {
											#line 2760 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
											const auto& newScale = *__tmp__valid_2756;
											return divByConst(Builtin::u32(10000U));
										}
										else {
											#line 2761 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
											if(__tmp__valid_2756.IsValid() && Builtin::Is(*__tmp__valid_2756, Builtin::i32(5))) {
												#line 2761 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
												const auto& newScale = *__tmp__valid_2756;
												return divByConst(Builtin::u32(100000U));
											}
											else {
												#line 2762 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
												if(__tmp__valid_2756.IsValid() && Builtin::Is(*__tmp__valid_2756, Builtin::i32(6))) {
													#line 2762 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
													const auto& newScale = *__tmp__valid_2756;
													return divByConst(Builtin::u32(1000000U));
												}
												else {
													#line 2763 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
													if(__tmp__valid_2756.IsValid() && Builtin::Is(*__tmp__valid_2756, Builtin::i32(7))) {
														#line 2763 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
														const auto& newScale = *__tmp__valid_2756;
														return divByConst(Builtin::u32(10000000U));
													}
													else {
														#line 2764 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
														if(__tmp__valid_2756.IsValid() && Builtin::Is(*__tmp__valid_2756, Builtin::i32(8))) {
															#line 2764 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
															const auto& newScale = *__tmp__valid_2756;
															return divByConst(Builtin::u32(100000000U));
														}
														else {
															return divByConst(Builtin::u32(1000000000U));
															
														}
													}
												}
											}
										}
									}
								}
							}
						}
ADV_WARNING_POP
						();
					} else {
						#line 2767 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						{
							#line 2768 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							power = [&]() 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
							{
								#line 2769 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								auto __tmp__valid_2768 = Builtin::Cast<false, std::decay_t<decltype(newScale)>::$self>(newScale);
								#line 2769 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								if(__tmp__valid_2768.IsValid() && Builtin::Is(*__tmp__valid_2768, Builtin::i32(1))) {
									#line 2769 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
									const auto& newScale = *__tmp__valid_2768;
									return divByConst(Builtin::u32(10U));
								}
								else {
									#line 2770 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
									if(__tmp__valid_2768.IsValid() && Builtin::Is(*__tmp__valid_2768, Builtin::i32(2))) {
										#line 2770 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
										const auto& newScale = *__tmp__valid_2768;
										return divByConst(Builtin::u32(100U));
									}
									else {
										#line 2771 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
										if(__tmp__valid_2768.IsValid() && Builtin::Is(*__tmp__valid_2768, Builtin::i32(3))) {
											#line 2771 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
											const auto& newScale = *__tmp__valid_2768;
											return divByConst(Builtin::u32(1000U));
										}
										else {
											return divByConst(Builtin::u32(10000U));
											
										}
									}
								}
							}
ADV_WARNING_POP
							();
						}
					}
					#line 2776 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					ADV_UFCS(_operator_subscript)(result.$ref(), hi) = quotient;
					#line 2777 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					if (quotient == Builtin::i32(0) && hi != Builtin::i32(0)) {
						#line 2778 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						ADV_UFCS(_operator_sub_sub_mod_postfix)(hi);
					}
					#line 2781 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					if constexpr (Builtin::Is64BitTarget()) {
						#line 2782 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						newScale -= Builtin::i32(9);
					} else {
						#line 2783 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						{
							#line 2784 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							newScale -= Builtin::i32(4);
						}
					}
					#line 2787 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					if ((newScale <=> Builtin::i32(0)) > 0) {
						#line 2788 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						continue;
					}
					#line 2791 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					if ((hi <=> Builtin::u32(2U)) > 0) {
						#line 2792 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						if (scale == Builtin::i32(0)) {
							#line 2793 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							Builtin::Throw(Builtin::DecimalOverflowException{});
						}
						#line 2795 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						newScale = Builtin::i32(1);
						#line 2796 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						scale--;
						#line 2797 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						continue;
					}
					#line 2800 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					power >>= Builtin::i32(1);
					#line 2801 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					if ((power <=> remainder) <= 0 && ((power <=> remainder) < 0 || ((ADV_UFCS(_operator_subscript)(result.$ref(), Builtin::u32(0U)) & Builtin::u32(1U)) | sticky) != Builtin::i32(0)) && ADV_UFCS(_operator_add_add_mod)(ADV_UFCS(_operator_subscript)(result.$ref(), Builtin::u32(0U))) == Builtin::u32(0U)) {
						#line 2802 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						Builtin::Auto<decltype(Builtin::u32(0U))> cur = Builtin::u32(0U); 
						#line 2803 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						do 
						#line 2803 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						{
							#line 2804 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							ADV_ASSERT(((cur + Builtin::u32(1U) <=> ADV_USPCS(LENGTH, Buf24)()) < 0), "cur+1u<Buf24.LENGTH");
						} while (ADV_UFCS(_operator_add_add_mod)(ADV_UFCS(_operator_subscript)(result.$ref(), ++cur)) == Builtin::u32(0U));
						#line 2807 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						if ((cur <=> Builtin::u32(2U)) > 0) {
							#line 2808 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							if (scale == Builtin::i32(0)) {
								#line 2809 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								Builtin::Throw(Builtin::DecimalOverflowException{});
							}
							#line 2811 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							hi = cur;
							#line 2812 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							sticky = Builtin::u32(0U);
							#line 2813 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							remainder = Builtin::u32(0U);
							#line 2814 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							newScale = Builtin::i32(1);
							#line 2815 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							scale--;
							#line 2816 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							continue;
						}
					}
					#line 2819 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					break;
				}
			}
			#line 2823 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return scale;
		}
	}

#line 2831 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline constexpr PowerOvfl::PowerOvfl(Builtin::u32 hi, Builtin::u32 mid, Builtin::u32 lo) noexcept : 
	#line 2832 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	Hi{hi}, 
	#line 2833 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	MidLo{(Builtin::u64{mid} << Builtin::i32(32)) | Builtin::u64{lo}}
	{
	}

namespace __Unsafe { [[clang::annotate("unsafe")]] 
		#line 2848 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		auto SearchScale(Builtin::MutableRef<Buf12> __buf__, Builtin::i32 scale)  -> const Builtin::i32
		{	using namespace Builtin::Unsafe;	using namespace System::__Unsafe;	using namespace __Decimal$Protected__Unsafe;
			Builtin::CheckForUnsafeContext(); Builtin::UnsafeContextGuard __unsafe_context_guard2849{};
			Buf12& buf = __buf__;
			#line 2850 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			constexpr Builtin::Auto<decltype(Builtin::u32(4U))> OVFL_MAX_9_HI = Builtin::u32(4U);
			#line 2851 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			constexpr Builtin::Auto<decltype(Builtin::u32(42U))> OVFL_MAX_8_HI = Builtin::u32(42U);
			#line 2852 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			constexpr Builtin::Auto<decltype(Builtin::u32(429U))> OVFL_MAX_7_HI = Builtin::u32(429U);
			#line 2853 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			constexpr Builtin::Auto<decltype(Builtin::u32(4294U))> OVFL_MAX_6_HI = Builtin::u32(4294U);
			#line 2854 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			constexpr Builtin::Auto<decltype(Builtin::u32(42949U))> OVFL_MAX_5_HI = Builtin::u32(42949U);
			#line 2855 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			constexpr Builtin::Auto<decltype(Builtin::u32(429496U))> OVFL_MAX_4_HI = Builtin::u32(429496U);
			#line 2856 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			constexpr Builtin::Auto<decltype(Builtin::u32(4294967U))> OVFL_MAX_3_HI = Builtin::u32(4294967U);
			#line 2857 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			constexpr Builtin::Auto<decltype(Builtin::u32(42949672U))> OVFL_MAX_2_HI = Builtin::u32(42949672U);
			#line 2858 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			constexpr Builtin::Auto<decltype(Builtin::u32(429496729U))> OVFL_MAX_1_HI = Builtin::u32(429496729U);
			#line 2859 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			constexpr Builtin::Auto<decltype(Builtin::u64(5441186219426131129ULL))> OVFL_MAX_9_MIDLO = Builtin::u64(5441186219426131129ULL);
			#line 2861 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			const Builtin::Auto<decltype(ADV_UPCS(u2)(ADV_UPCS(DWords)(buf.$ref()).$ref()))> hi = ADV_UPCS(u2)(ADV_UPCS(DWords)(buf.$ref()).$ref()); 
			#line 2862 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			const Builtin::Auto<decltype(ADV_UPCS(Low64)(buf.$ref()))> midLo = ADV_UPCS(Low64)(buf.$ref()); 
			#line 2863 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			Builtin::Auto<decltype(Builtin::i32(0))> currentScale = Builtin::i32(0); 
			#line 2865 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			auto haveScale = [&] () 
			{
				#line 2866 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if ((currentScale + scale <=> Builtin::i32(0)) < 0) {
					#line 2867 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					Builtin::Throw(Builtin::DecimalOverflowException{});
				}
				#line 2870 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				return currentScale;
			}; 
			#line 2873 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			if ((hi <=> OVFL_MAX_1_HI) > 0) {
				#line 2874 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				return haveScale();
			}
			#line 2877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			if ((scale <=> DEC_SCALE_MAX - Builtin::i32(9)) > 0) {
				#line 2878 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				currentScale = DEC_SCALE_MAX - scale;
				#line 2879 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if ((hi <=> ADV_UPCS(Hi)(ADV_UFCS(_operator_subscript)(PowerOvflValues.$ref(), Builtin::usize{currentScale - Builtin::i32(1)}).$ref())) < 0) {
					#line 2880 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					return haveScale();
				}
			} else {
				#line 2882 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if ((hi <=> OVFL_MAX_9_HI) < 0 || hi == OVFL_MAX_9_HI && (midLo <=> OVFL_MAX_9_MIDLO) <= 0) {
					#line 2883 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					return Builtin::i32(9);
				}
			}
			#line 2886 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			if ((hi <=> OVFL_MAX_5_HI) > 0) {
				#line 2887 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if ((hi <=> OVFL_MAX_3_HI) > 0) {
					#line 2888 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					currentScale = Builtin::i32(2);
					#line 2889 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					if ((hi <=> OVFL_MAX_2_HI) > 0) {
						#line 2890 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						currentScale--;
					}
				} else {
					#line 2892 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					{
						#line 2893 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						currentScale = Builtin::i32(4);
						#line 2894 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						if ((hi <=> OVFL_MAX_4_HI) > 0) {
							#line 2895 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							currentScale--;
						}
					}
				}
			} else {
				#line 2898 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				{
					#line 2899 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					if ((hi <=> OVFL_MAX_7_HI) > 0) {
						#line 2900 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						currentScale = Builtin::i32(6);
						#line 2901 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						if ((hi <=> OVFL_MAX_6_HI) > 0) {
							#line 2902 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							currentScale--;
						}
					} else {
						#line 2904 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						{
							#line 2905 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							currentScale = Builtin::i32(8);
							#line 2906 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							if ((hi <=> OVFL_MAX_8_HI) > 0) {
								#line 2907 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								currentScale--;
							}
						}
					}
				}
			}
			#line 2912 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			if (hi == ADV_UPCS(Hi)(ADV_UFCS(_operator_subscript)(PowerOvflValues.$ref(), Builtin::usize{currentScale - Builtin::i32(1)}).$ref()) && (midLo <=> ADV_UPCS(MidLo)(ADV_UFCS(_operator_subscript)(PowerOvflValues.$ref(), Builtin::usize{currentScale - Builtin::i32(1)}).$ref())) > 0) {
				#line 2913 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				currentScale--;
			}
			#line 2916 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return haveScale();
		}
	}

#line 2919 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	inline auto Unscale(Builtin::MutableRef<Builtin::u32> __low__, Builtin::MutableRef<Builtin::u64> __high__, Builtin::MutableRef<Builtin::i32> __scale__) noexcept -> void
	{
		Builtin::i32& scale = __scale__;
		Builtin::u32& low = __low__;
		Builtin::u64& high = __high__;
		#line 2921 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		auto divByConst = [&] (Builtin::u32 pow) 
		{
			#line 2922 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			if constexpr (Builtin::Is64BitTarget()) {
				#line 2923 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				const auto div64 = ADV_UFCS(_operator_bsl)(high, pow); 
				#line 2924 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				const auto div = ADV_UFCS(NarrowToUInt32)((ADV_UFCS(_operator_bsl)((ADV_UFCS(_operator_add_mod)(((ADV_UFCS(_operator_sub_mod)(high, ADV_UFCS(_operator_mul_mod)(div64, pow))) << Builtin::i32(32)), low)), pow)).$ref()); 
				#line 2925 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if (low == ADV_UFCS(_operator_mul_mod)(div, pow)) {
					#line 2926 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					high = div64;
					#line 2927 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					low = div;
					#line 2928 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					return Builtin::Boolean(true);
				}
			} else {
				#line 2930 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				{
					#line 2931 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					ADV_ASSERT(((pow <=> ADV_USPCS(MaxValue, Builtin::u16)()) <= 0), "pow<=u16.MaxValue");
					#line 2933 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					Builtin::u32 num{}, mid32{}, low16{}, div{}; 
					#line 2934 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					if ((high <=> ADV_USPCS(MaxValue, Builtin::u32)()) <= 0) {
						#line 2935 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						num = ADV_UFCS(NarrowToUInt32)(high.$ref());
						#line 2936 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						mid32 = ADV_UFCS(_operator_bsl)(num, pow);
						#line 2937 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						num = (ADV_UFCS(_operator_sub_mod)(num, ADV_UFCS(_operator_mul_mod)(mid32, pow))) << Builtin::i32(16);
						#line 2938 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						ADV_UFCS(_operator_add_mod_eq)(num, low >> Builtin::i32(16));
						#line 2939 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						low16 = ADV_UFCS(_operator_bsl)(num, pow);
						#line 2940 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						num = (ADV_UFCS(_operator_sub_mod)(num, ADV_UFCS(_operator_mul_mod)(low16, pow))) << Builtin::i32(16);
						#line 2941 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						ADV_UFCS(_operator_add_mod_eq)(num, ADV_UFCS(NarrowToUInt16)(low.$ref()));
						#line 2942 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						div = ADV_UFCS(_operator_bsl)(num, pow);
						#line 2943 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						if (num == ADV_UFCS(_operator_mul_mod)(div, pow)) {
							#line 2944 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							high = mid32;
							#line 2945 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							low = ADV_UFCS(_operator_add_mod)((low16 << Builtin::i32(16)), div);
							#line 2946 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							return Builtin::Boolean(true);
						}
					} else {
						#line 2948 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						{
							#line 2949 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							num = ADV_UFCS(NarrowToUInt32)((high >> Builtin::i32(32)).$ref());
							#line 2950 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							const auto high32 = ADV_UFCS(_operator_bsl)(num, pow); 
							#line 2951 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							num = (ADV_UFCS(_operator_sub_mod)(num, ADV_UFCS(_operator_mul_mod)(high32, pow))) << Builtin::i32(16);
							#line 2952 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							ADV_UFCS(_operator_add_mod_eq)(num, ADV_UFCS(NarrowToUInt32)(high.$ref()) >> Builtin::i32(16));
							#line 2954 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							mid32 = ADV_UFCS(_operator_bsl)(num, pow);
							#line 2955 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							num = (ADV_UFCS(_operator_sub_mod)(num, ADV_UFCS(_operator_mul_mod)(mid32, pow))) << Builtin::i32(16);
							#line 2956 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							ADV_UFCS(_operator_add_mod_eq)(num, ADV_UFCS(NarrowToUInt16)(high.$ref()));
							#line 2957 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							div = ADV_UFCS(_operator_bsl)(num, pow);
							#line 2958 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							num = (ADV_UFCS(_operator_sub_mod)(num, ADV_UFCS(_operator_mul_mod)(div, pow))) << Builtin::i32(16);
							#line 2959 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							mid32 = ADV_UFCS(_operator_add_mod)(div, (mid32 << Builtin::i32(16)));
							#line 2961 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							ADV_UFCS(_operator_add_mod_eq)(num, low >> Builtin::i32(16));
							#line 2962 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							low16 = ADV_UFCS(_operator_bsl)(num, pow);
							#line 2963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							num = (ADV_UFCS(_operator_sub_mod)(num, ADV_UFCS(_operator_mul_mod)(low16, pow))) << Builtin::i32(16);
							#line 2965 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							ADV_UFCS(_operator_add_mod_eq)(num, ADV_UFCS(NarrowToUInt16)(low.$ref()));
							#line 2966 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							div = ADV_UFCS(_operator_bsl)(num, pow);
							#line 2967 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							if (num == ADV_UFCS(_operator_mul_mod)(div, pow)) {
								#line 2968 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								high = (Builtin::u64{high32} << Builtin::i32(32)) | mid32;
								#line 2969 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								low = ADV_UFCS(_operator_add_mod)((low16 << Builtin::i32(16)), div);
								#line 2970 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
								return Builtin::Boolean(true);
							}
						}
					}
				}
			}
			#line 2974 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return Builtin::Boolean(false);
		}; 
		#line 2977 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if constexpr (Builtin::Is64BitTarget()) {
			#line 2978 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			while (ADV_UFCS(NarrowToUInt8)(low.$ref()) == Builtin::u32(0U) && (scale <=> Builtin::i32(8)) >= 0 && divByConst(Builtin::u32(100000000U))) 
			{
				#line 2979 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				scale -= Builtin::i32(8);
			}
			#line 2981 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			if ((low & Builtin::u32(0xFU)) == Builtin::u32(0U) && (scale <=> Builtin::i32(4)) >= 0 && divByConst(Builtin::u32(10000U))) {
				#line 2982 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				scale -= Builtin::i32(4);
			}
		} else {
			#line 2984 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			{
				#line 2985 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				while ((low & Builtin::u32(0xFU)) == Builtin::u32(0U) && (scale <=> Builtin::i32(4)) >= 0 && divByConst(Builtin::u32(10000U))) 
				{
					#line 2986 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					scale -= Builtin::i32(4);
				}
			}
		}
		#line 2990 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if ((low & Builtin::u32(3U)) == Builtin::u32(0U) && (scale <=> Builtin::i32(2)) >= 0 && divByConst(Builtin::u32(100U))) {
			#line 2991 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			scale -= Builtin::i32(2);
		}
		#line 2994 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if ((low & Builtin::u32(1U)) == Builtin::u32(0U) && (scale <=> Builtin::i32(1)) >= 0 && divByConst(Builtin::u32(10U))) {
			#line 2995 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			scale--;
		}
	}

namespace __Unsafe { [[clang::annotate("unsafe")]] 
		#line 2999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		auto Div96By64(Builtin::MutableRef<Buf12> __buf__, Builtin::u64 den)  -> const Builtin::u32
		{	using namespace Builtin::Unsafe;	using namespace System::__Unsafe;	using namespace __Decimal$Protected__Unsafe;
			Builtin::CheckForUnsafeContext(); Builtin::UnsafeContextGuard __unsafe_context_guard3000{};
			Buf12& buf = __buf__;
			#line 3001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			ADV_ASSERT(((den <=> ADV_UPCS(High64)(buf.$ref())) > 0), "den>buf.High64");
			#line 3002 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			Builtin::u32 quo{}; 
			#line 3003 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			Builtin::u64 num{}; 
			#line 3005 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			const Builtin::Auto<decltype(ADV_UPCS(u2)(ADV_UPCS(DWords)(buf.$ref()).$ref()))> num2 = ADV_UPCS(u2)(ADV_UPCS(DWords)(buf.$ref()).$ref()); 
			#line 3006 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			if (num2 == Builtin::u32(0U)) {
				#line 3007 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				num = ADV_UPCS(Low64)(buf.$ref());
				#line 3008 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if ((num <=> den) < 0) {
					#line 3009 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					return Builtin::u32(0U);
				}
				#line 3012 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				quo = ADV_UFCS(NarrowToUInt32)((ADV_UFCS(_operator_bsl)(num, den)).$ref());
				#line 3013 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				ADV_UFCS(_operator_sub_mod_eq)(num, ADV_UFCS(_operator_mul_mod)(quo, den));
				#line 3014 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				ADV_UPCS(Low64)(buf.$ref()) = num;
				#line 3015 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				return quo;
			}
			#line 3018 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			const Builtin::Auto<decltype(Builtin::u32{den >> Builtin::i32(32)})> denHigh32 = Builtin::u32{den >> Builtin::i32(32)}; 
			#line 3019 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			if ((num2 <=> denHigh32) >= 0) {
				#line 3020 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				num = ADV_UPCS(Low64)(buf.$ref());
				#line 3021 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				ADV_UFCS(_operator_sub_mod_eq)(num, den << Builtin::i32(32));
				#line 3022 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				quo = Builtin::u32(0U);
				#line 3023 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				do 
				#line 3023 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				{
					#line 3024 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					ADV_UFCS(_operator_sub_sub_mod_postfix)(quo);
					#line 3025 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					ADV_UFCS(_operator_add_mod_eq)(num, den);
				} while ((num <=> den) >= 0);
				#line 3027 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				ADV_UPCS(Low64)(buf.$ref()) = num;
				#line 3028 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				return quo;
			}
			#line 3031 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			const Builtin::Auto<decltype(ADV_UPCS(High64)(buf.$ref()))> num64 = ADV_UPCS(High64)(buf.$ref()); 
			#line 3032 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			if ((num64 <=> denHigh32) < 0) {
				#line 3033 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				return Builtin::u32(0U);
			}
			#line 3036 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			quo = ADV_UFCS(NarrowToUInt32)((ADV_UFCS(_operator_bsl)(num64, denHigh32)).$ref());
			#line 3037 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			num = Builtin::u64{ADV_UPCS(u0)(ADV_UPCS(DWords)(buf.$ref()).$ref())} | ((ADV_UFCS(_operator_sub_mod)(num64, ADV_UFCS(_operator_mul_mod)(quo, denHigh32))) << Builtin::i32(32));
			#line 3039 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			const Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(Builtin::u64{quo}, ADV_UFCS(NarrowToUInt32)(den.$ref())))> prod = ADV_UFCS(_operator_mul_mod)(Builtin::u64{quo}, ADV_UFCS(NarrowToUInt32)(den.$ref())); 
			#line 3040 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			ADV_UFCS(_operator_sub_mod_eq)(num, prod);
			#line 3041 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			if ((num <=> (ADV_UFCS(_operator_not)(prod))) > 0) {
				#line 3042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				do 
				#line 3042 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				{
					#line 3043 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					ADV_UFCS(_operator_sub_sub_mod_postfix)(quo);
					#line 3044 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					ADV_UFCS(_operator_add_mod_eq)(num, den);
				} while ((num <=> den) >= 0);
			}
			#line 3048 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			ADV_UPCS(Low64)(buf.$ref()) = num;
			#line 3049 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return quo;
		}
	}

namespace __Unsafe { [[clang::annotate("unsafe")]] 
		#line 3052 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		auto Div128By96(Builtin::MutableRef<Buf16> __buf__, Builtin::MutableRef<Buf12> __bufDen__)  -> const Builtin::u32
		{	using namespace Builtin::Unsafe;	using namespace System::__Unsafe;	using namespace __Decimal$Protected__Unsafe;
			Builtin::CheckForUnsafeContext(); Builtin::UnsafeContextGuard __unsafe_context_guard3053{};
			Buf16& buf = __buf__;
			Buf12& bufDen = __bufDen__;
			#line 3054 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			ADV_ASSERT(((ADV_UPCS(u2)(ADV_UPCS(DWords)(bufDen.$ref()).$ref()) <=> ADV_UPCS(u3)(ADV_UPCS(DWords)(buf.$ref()).$ref())) > 0), "bufDen.DWords.u2>buf.DWords.u3");
			#line 3056 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			const Builtin::Auto<decltype(ADV_UPCS(High64)(buf.$ref()))> dividend = ADV_UPCS(High64)(buf.$ref()); 
			#line 3057 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			const Builtin::Auto<decltype(ADV_UPCS(u2)(ADV_UPCS(DWords)(bufDen.$ref()).$ref()))> den = ADV_UPCS(u2)(ADV_UPCS(DWords)(bufDen.$ref()).$ref()); 
			#line 3058 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			if ((dividend <=> den) < 0) {
				#line 3059 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				return Builtin::u32(0U);
			}
			#line 3062 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			Builtin::Auto<decltype(ADV_UFCS(NarrowToUInt32)((ADV_UFCS(_operator_bsl)(dividend, den)).$ref()))> quo = ADV_UFCS(NarrowToUInt32)((ADV_UFCS(_operator_bsl)(dividend, den)).$ref()); 
			#line 3063 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			Builtin::Auto<decltype(ADV_UFCS(_operator_sub_mod)(ADV_UFCS(NarrowToUInt32)(dividend.$ref()), ADV_UFCS(_operator_mul_mod)(quo, den)))> remainder = ADV_UFCS(_operator_sub_mod)(ADV_UFCS(NarrowToUInt32)(dividend.$ref()), ADV_UFCS(_operator_mul_mod)(quo, den)); 
			#line 3064 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(Builtin::u64{quo}, ADV_UPCS(u0)(ADV_UPCS(DWords)(bufDen.$ref()).$ref())))> prod1 = ADV_UFCS(_operator_mul_mod)(Builtin::u64{quo}, ADV_UPCS(u0)(ADV_UPCS(DWords)(bufDen.$ref()).$ref())); 
			#line 3065 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			Builtin::Auto<decltype(ADV_UFCS(_operator_mul_mod)(Builtin::u64{quo}, ADV_UPCS(u1)(ADV_UPCS(DWords)(bufDen.$ref()).$ref())))> prod2 = ADV_UFCS(_operator_mul_mod)(Builtin::u64{quo}, ADV_UPCS(u1)(ADV_UPCS(DWords)(bufDen.$ref()).$ref())); 
			#line 3066 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			ADV_UFCS(_operator_add_mod_eq)(prod2, prod1 >> Builtin::i32(32));
			#line 3067 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			prod1 = Builtin::u64{ADV_UFCS(NarrowToUInt32)(prod1.$ref())} | (prod2 << Builtin::i32(32));
			#line 3068 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			prod2 >>= Builtin::i32(32);
			#line 3070 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			Builtin::Auto<decltype(ADV_UPCS(Low64)(buf.$ref()))> num = ADV_UPCS(Low64)(buf.$ref()); 
			#line 3071 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			ADV_UFCS(_operator_sub_mod_eq)(num, prod1);
			#line 3072 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			ADV_UFCS(_operator_sub_mod_eq)(remainder, ADV_UFCS(NarrowToUInt32)(prod2.$ref()));
			#line 3074 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			auto posRem = [&] () 
			{
				#line 3075 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				ADV_UPCS(Low64)(buf.$ref()) = num;
				#line 3076 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				ADV_UPCS(u2)(ADV_UPCS(DWords)(buf.$ref()).$ref()) = remainder;
				#line 3077 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				return quo;
			}; 
			#line 3080 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			if ((num <=> (ADV_UFCS(_operator_not)(prod1))) > 0) {
				#line 3081 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				ADV_UFCS(_operator_sub_sub_mod_postfix)(remainder);
				#line 3082 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if ((remainder <=> (ADV_UFCS(_operator_not)(ADV_UFCS(NarrowToUInt32)(prod2.$ref())))) < 0) {
					#line 3083 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					return posRem();
				}
			} else {
				#line 3085 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if ((remainder <=> (ADV_UFCS(_operator_not)(ADV_UFCS(NarrowToUInt32)(prod2.$ref())))) <= 0) {
					#line 3086 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					return posRem();
				}
			}
			#line 3089 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			prod1 = ADV_UPCS(Low64)(bufDen.$ref());
			#line 3090 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			for (;;) 
			{
				#line 3091 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				ADV_UFCS(_operator_sub_sub_mod_postfix)(quo);
				#line 3092 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				ADV_UFCS(_operator_add_mod_eq)(num, prod1);
				#line 3093 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				ADV_UFCS(_operator_add_mod_eq)(remainder, den);
				#line 3094 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if ((num <=> prod1) < 0) {
					#line 3095 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					if ((ADV_UFCS(_operator_add_add_mod_postfix)(remainder) <=> den) < 0) {
						#line 3096 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						break;
					}
				}
				#line 3098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if ((remainder <=> den) < 0) {
					#line 3099 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					break;
				}
			}
			#line 3102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return posRem();
		}
	}

#line 3105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	auto printd(System::Decimal d)  -> void
	{
		#line 3107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		const Builtin::Auto<decltype(ADV_UPCS(IsNegative)(d.$ref()))> sign = ADV_UPCS(IsNegative)(d.$ref()); 
		#line 3108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Scale)(d.$ref()))> scale = ADV_UPCS(Scale)(d.$ref()); 
		#line 3109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype(Builtin::BitCast<Builtin::u128>(d) & Builtin::ParseUInt128("0xffffffffffffffffffffffff00000000"))> mantissa = Builtin::BitCast<Builtin::u128>(d) & Builtin::ParseUInt128("0xffffffffffffffffffffffff00000000"); 
		#line 3110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		const Builtin::Auto<decltype(ADV_UFCS(Low64)(mantissa.$ref()) >> Builtin::i32(32))> high = ADV_UFCS(Low64)(mantissa.$ref()) >> Builtin::i32(32); 
		#line 3111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		const Builtin::Auto<decltype(ADV_UFCS(High64)(mantissa.$ref()))> low = ADV_UFCS(High64)(mantissa.$ref()); 
		#line 3112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		mantissa = Builtin::u128{high, low};
		#line 3114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		printDecimal(mantissa, sign, scale);
	}

#line 3117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	static_assert(Builtin::usize(sizeof (Decimal)) == Builtin::i32(16), "Decimal should be 16 bytes");
#ifdef ADV_UNITTEST
	#line 3119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	static bool $Test_7e8bf6dec0b23b8a = [](){
		#line 3120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		System::Decimal d{}; 
		#line 3121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		d = Builtin::Cast<true, System::Decimal>(Builtin::f64(-1.2345));
		#line 3123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((+d == System::Decimal(Builtin::ParseUInt128("12345"), true, (uint8_t) 4)), "+d==-1.2345m");
		#line 3124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((-d == System::Decimal(Builtin::ParseUInt128("12345"), false, (uint8_t) 4)), "-d==1.2345m");
		#line 3125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((System::Decimal(Builtin::ParseUInt128("01"), false, (uint8_t) 1) + System::Decimal(Builtin::ParseUInt128("02"), false, (uint8_t) 1) == System::Decimal(Builtin::ParseUInt128("03"), false, (uint8_t) 1)), "0.1m+0.2m==0.3m");
		#line 3126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((System::Decimal(Builtin::ParseUInt128("03"), false, (uint8_t) 1) - System::Decimal(Builtin::ParseUInt128("02"), false, (uint8_t) 1) == System::Decimal(Builtin::ParseUInt128("01"), false, (uint8_t) 1)), "0.3m-0.2m==0.1m");
		#line 3127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((d + System::Decimal(Builtin::ParseUInt128("123"), false, (uint8_t) 2) == System::Decimal(Builtin::ParseUInt128("00045"), true, (uint8_t) 4)), "d+1.23m==-0.0045m");
		#line 3128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((d - System::Decimal(Builtin::ParseUInt128("12345"), false, (uint8_t) 4) == System::Decimal(Builtin::ParseUInt128("24690"), true, (uint8_t) 4)), "d-1.2345m==-2.4690m");
		#line 3129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		d += System::Decimal(Builtin::ParseUInt128("10"), false, (uint8_t) 1);
		#line 3130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((d == System::Decimal(Builtin::ParseUInt128("02345"), true, (uint8_t) 4)), "d==-0.2345m");
		#line 3131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		d -= System::Decimal(Builtin::ParseUInt128("10"), false, (uint8_t) 1);
		#line 3132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((d == System::Decimal(Builtin::ParseUInt128("12345"), true, (uint8_t) 4)), "d==-1.2345m");
		#line 3133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((d++ == System::Decimal(Builtin::ParseUInt128("12345"), true, (uint8_t) 4)), "d++==-1.2345m");
		#line 3134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((++d == System::Decimal(Builtin::ParseUInt128("07655"), false, (uint8_t) 4)), "++d==0.7655m");
		#line 3135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((d-- == System::Decimal(Builtin::ParseUInt128("07655"), false, (uint8_t) 4)), "d--==0.7655m");
		#line 3136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((--d == System::Decimal(Builtin::ParseUInt128("12345"), true, (uint8_t) 4)), "--d==-1.2345m");
		#line 3138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((System::Decimal(Builtin::ParseUInt128("123456"), false, (uint8_t) 3) + System::Decimal(Builtin::ParseUInt128("123456789123456789123456789"), false, (uint8_t) 9) == System::Decimal(Builtin::ParseUInt128("123456789123456912579456789"), false, (uint8_t) 9)), "123.456m+123456789123456789.123456789m==123456789123456912.579456789m");
		#line 3139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((System::Decimal(Builtin::ParseUInt128("123456"), false, (uint8_t) 3) - System::Decimal(Builtin::ParseUInt128("123456789123456789123456789"), false, (uint8_t) 9) == System::Decimal(Builtin::ParseUInt128("123456789123456665667456789"), true, (uint8_t) 9)), "123.456m-123456789123456789.123456789m==-123456789123456665.667456789m");
		#line 3141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((d * Builtin::i32(2) == System::Decimal(Builtin::ParseUInt128("24690"), true, (uint8_t) 4)), "d*2==-2.4690m");
		#line 3142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((d * System::Decimal(Builtin::ParseUInt128("20"), false, (uint8_t) 1) == System::Decimal(Builtin::ParseUInt128("246900"), true, (uint8_t) 5)), "d*2.0m==-2.46900m");
		#line 3143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((System::Decimal(Builtin::ParseUInt128("10250"), false, (uint8_t) 3) * System::Decimal(Builtin::ParseUInt128("05"), false, (uint8_t) 1) == System::Decimal(Builtin::ParseUInt128("51250"), false, (uint8_t) 4)), "10.250m*0.5m==5.1250m");
		#line 3144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((d * (System::Decimal(Builtin::ParseUInt128("20"), true, (uint8_t) 1)) == System::Decimal(Builtin::ParseUInt128("246900"), false, (uint8_t) 5)), "d*(-2.0m)==2.46900m");
		#line 3145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((System::Decimal(Builtin::ParseUInt128("123456"), false, (uint8_t) 3) * System::Decimal(Builtin::ParseUInt128("456789"), false, (uint8_t) 3) == System::Decimal(Builtin::ParseUInt128("56393342784"), false, (uint8_t) 6)), "123.456m*456.789m==56393.342784m");
		#line 3146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		d *= System::Decimal(Builtin::ParseUInt128("2123"), false, (uint8_t) 3);
		#line 3147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((d == System::Decimal(Builtin::ParseUInt128("26208435"), true, (uint8_t) 7)), "d==-2.6208435m");
		#line 3149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		d = System::Decimal(Builtin::ParseUInt128("12500"), true, (uint8_t) 3);
		#line 3150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((d == System::Decimal(Builtin::ParseUInt128("125"), true, (uint8_t) 1)), "d==-12.5m");
		#line 3151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((d != System::Decimal(Builtin::ParseUInt128("124"), true, (uint8_t) 1)), "d!=-12.4m");
		#line 3152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT(((d <=> System::Decimal(Builtin::ParseUInt128("124"), true, (uint8_t) 1)) < 0), "d<-12.4m");
		#line 3153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT(((d <=> System::Decimal(Builtin::ParseUInt128("126"), true, (uint8_t) 1)) > 0), "d>-12.6m");
		#line 3154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT(((d <=> System::Decimal(Builtin::ParseUInt128("124"), true, (uint8_t) 1)) <= 0), "d<=-12.4m");
		#line 3155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT(((d <=> System::Decimal(Builtin::ParseUInt128("126"), true, (uint8_t) 1)) >= 0), "d>=-12.6m");
		#line 3157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((d / System::Decimal(Builtin::ParseUInt128("25"), false, (uint8_t) 1) == System::Decimal(Builtin::ParseUInt128("500"), true, (uint8_t) 2)), "d/2.5m==-5.00m");
		#line 3158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((d / Builtin::i32(2) == System::Decimal(Builtin::ParseUInt128("6250"), true, (uint8_t) 3)), "d/2==-6.250m");
		#line 3159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((d / (System::Decimal(Builtin::ParseUInt128("20"), true, (uint8_t) 1)) == System::Decimal(Builtin::ParseUInt128("625"), false, (uint8_t) 2)), "d/(-2.0m)==6.25m");
		#line 3160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((System::Decimal(Builtin::ParseUInt128("123456789123456789123456789"), false, (uint8_t) 9) / System::Decimal(Builtin::ParseUInt128("123456123456"), false, (uint8_t) 6) == System::Decimal(Builtin::ParseUInt128("10000053919355164781973695622"), false, (uint8_t) 16)), "123456789123456789.123456789m/123456.123456m==1000005391935.5164781973695622m");
		#line 3161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((System::Decimal(Builtin::ParseUInt128("123456789123456789123456789"), false, (uint8_t) 9) / (System::Decimal(Builtin::ParseUInt128("123456123456"), true, (uint8_t) 6)) == System::Decimal(Builtin::ParseUInt128("10000053919355164781973695622"), true, (uint8_t) 16)), "123456789123456789.123456789m/(-123456.123456m)==-1000005391935.5164781973695622m");
		#line 3162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT(((System::Decimal(Builtin::ParseUInt128("123456789123456789123456789"), true, (uint8_t) 9)) / (System::Decimal(Builtin::ParseUInt128("123456123456"), true, (uint8_t) 6)) == System::Decimal(Builtin::ParseUInt128("10000053919355164781973695622"), false, (uint8_t) 16)), "(-123456789123456789.123456789m)/(-123456.123456m)==1000005391935.5164781973695622m");
		#line 3163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((System::Decimal(Builtin::ParseUInt128("123456789123456789123456789"), false, (uint8_t) 9) / System::Decimal(Builtin::ParseUInt128("123456123456123456123456"), false, (uint8_t) 12) == System::Decimal(Builtin::ParseUInt128("10000053919345164728054350457"), false, (uint8_t) 22)), "123456789123456789.123456789m/123456123456.123456123456m==1000005.3919345164728054350457m");
		#line 3164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((System::Decimal(Builtin::ParseUInt128("123456"), false, (uint8_t) 3) / System::Decimal(Builtin::ParseUInt128("0123456789"), false, (uint8_t) 9) == System::Decimal(Builtin::ParseUInt128("9999936090999418428094707696"), false, (uint8_t) 25)), "123.456m/0.123456789m==999.9936090999418428094707696m");
		#line 3165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		d /= System::Decimal(Builtin::ParseUInt128("25"), false, (uint8_t) 1);
		#line 3166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((d == System::Decimal(Builtin::ParseUInt128("500"), true, (uint8_t) 2)), "d==-5.00m");
		#line 3167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((d % Builtin::i32(2) == System::Decimal(Builtin::ParseUInt128("100"), true, (uint8_t) 2)), "d%2==-1.00m");
		#line 3168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT(((System::Decimal(Builtin::ParseUInt128("500"), true, (uint8_t) 2)) % System::Decimal(Builtin::ParseUInt128("2123"), false, (uint8_t) 3) == System::Decimal(Builtin::ParseUInt128("0754"), true, (uint8_t) 3)), "(-5.00m)%2.123m==-0.754m");
		#line 3169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((System::Decimal(Builtin::ParseUInt128("123456789123456789123456789"), false, (uint8_t) 9) % System::Decimal(Builtin::ParseUInt128("123456123456123456123456"), false, (uint8_t) 12) == System::Decimal(Builtin::ParseUInt128("48386716052382720171720"), false, (uint8_t) 12)), "123456789123456789.123456789m%123456123456.123456123456m==48386716052.382720171720m");
		#line 3170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		d %= Builtin::i32(2);
		#line 3171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((d == System::Decimal(Builtin::ParseUInt128("100"), true, (uint8_t) 2)), "d==-1.00m");
		#line 3173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		d = System::Decimal(Builtin::ParseUInt128("12345"), true, (uint8_t) 4);
		#line 3174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((d == System::Decimal(Builtin::ParseUInt128("12345"), true, (uint8_t) 4)), "d==-1.2345m");
		#line 3175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((ADV_UPCS(Truncate)(d.$ref()) == Builtin::i32(-1)), "d.Truncate==-1");
		#line 3176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((ADV_UPCS(Truncate)(System::Decimal(Builtin::ParseUInt128("2678"), false, (uint8_t) 3).$ref()) == Builtin::i32(2)), "2.678m.Truncate==2");
		#line 3177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((ADV_UFCS(TruncateToInt32)(d.$ref()) == Builtin::i32(-1)), "d.TruncateToInt32()==-1");
		#line 3178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((ADV_UPCS(Floor)(d.$ref()) == Builtin::i32(-2)), "d.Floor==-2");
		#line 3179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((ADV_UFCS(FloorToInt32)(d.$ref()) == Builtin::i32(-2)), "d.FloorToInt32()==-2");
		#line 3180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((ADV_UPCS(Floor)(System::Decimal(Builtin::ParseUInt128("2678"), false, (uint8_t) 3).$ref()) == Builtin::i32(2)), "2.678m.Floor==2");
		#line 3181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((ADV_UPCS(Ceil)(d.$ref()) == Builtin::i32(-1)), "d.Ceil==-1");
		#line 3182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((ADV_UFCS(CeilToInt32)(d.$ref()) == Builtin::i32(-1)), "d.CeilToInt32()==-1");
		#line 3183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((ADV_UPCS(Ceil)(System::Decimal(Builtin::ParseUInt128("2678"), false, (uint8_t) 3).$ref()) == Builtin::i32(3)), "2.678m.Ceil==3");
		#line 3184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((ADV_UPCS(Round)(d.$ref()) == Builtin::i32(-1)), "d.Round==-1");
		#line 3185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((ADV_UFCS(RoundToInt32)(d.$ref()) == Builtin::i32(-1)), "d.RoundToInt32()==-1");
		#line 3186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((ADV_UPCS(RoundTiesEven)(d.$ref()) == Builtin::i32(-1)), "d.RoundTiesEven==-1");
		#line 3187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((ADV_UFCS(RoundTiesEvenToInt32)(d.$ref()) == Builtin::i32(-1)), "d.RoundTiesEvenToInt32()==-1");
		#line 3188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((ADV_UPCS(Round)(System::Decimal(Builtin::ParseUInt128("2678"), false, (uint8_t) 3).$ref()) == Builtin::i32(3)), "2.678m.Round==3");
		#line 3189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((ADV_UPCS(Round)(System::Decimal(Builtin::ParseUInt128("25"), false, (uint8_t) 1).$ref()) == Builtin::i32(3)), "2.5m.Round==3");
		#line 3190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((ADV_UPCS(RoundTiesEven)(System::Decimal(Builtin::ParseUInt128("25"), false, (uint8_t) 1).$ref()) == Builtin::i32(2)), "2.5m.RoundTiesEven==2");
		#line 3191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((ADV_UFCS(Round)(d.$ref(), Builtin::u32(2U)) == System::Decimal(Builtin::ParseUInt128("123"), true, (uint8_t) 2)), "d.Round(2u)==-1.23m");
		#line 3193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		d = System::Decimal(Builtin::ParseUInt128("123456789123456789123456789"), false, (uint8_t) 9);
		#line 3194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		auto bits = ADV_UPCS(Bits)(d.$ref()); 
		#line 3195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(bits.$ref(), Builtin::u32(0U)) == Builtin::u32(2080661269U)), "bits[0u]==2080661269u");
		#line 3196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(bits.$ref(), Builtin::u32(1U)) == Builtin::u32(4075008415U)), "bits[1u]==4075008415u");
		#line 3197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(bits.$ref(), Builtin::u32(2U)) == Builtin::u32(6692605U)), "bits[2u]==6692605u");
		#line 3198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((ADV_UFCS(_operator_subscript)(bits.$ref(), Builtin::u32(3U)) == Builtin::u32(589824U)), "bits[3u]==589824u");
		#line 3200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((ADV_UFCS(_operator_mul_mul)(System::Decimal(Builtin::ParseUInt128("12345"), false, (uint8_t) 3), System::Decimal(Builtin::ParseUInt128("3475"), false, (uint8_t) 3)) == System::Decimal(Builtin::ParseUInt128("62077118925179657394820798383"), false, (uint8_t) 25)), "12.345m**3.475m==6207.7118925179657394820798383m");
		#line 3201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((ADV_UPCS(Exp)(System::Decimal(Builtin::ParseUInt128("12345"), false, (uint8_t) 3).$ref()) == System::Decimal(Builtin::ParseUInt128("22980812486124595475041888612"), false, (uint8_t) 23)), "12.345m.Exp==229808.12486124595475041888612m");
		#line 3202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((ADV_UPCS(Exp2)(System::Decimal(Builtin::ParseUInt128("12345"), false, (uint8_t) 3).$ref()) == System::Decimal(Builtin::ParseUInt128("52025384244788822035143417228"), false, (uint8_t) 25)), "12.345m.Exp2==5202.5384244788822035143417228m");
		#line 3203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((ADV_UPCS(Exp10)(System::Decimal(Builtin::ParseUInt128("12345"), false, (uint8_t) 3).$ref()) == System::Decimal(Builtin::ParseUInt128("22130947096056377223339808814"), false, (uint8_t) 16)), "12.345m.Exp10==2213094709605.6377223339808814m");
		#line 3204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((ADV_UPCS(Ln)(System::Decimal(Builtin::ParseUInt128("12345"), false, (uint8_t) 3).$ref()) == System::Decimal(Builtin::ParseUInt128("25132511227971428258519031703"), false, (uint8_t) 28)), "12.345m.Ln==2.5132511227971428258519031703m");
		#line 3205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((ADV_UPCS(Log2)(System::Decimal(Builtin::ParseUInt128("12345"), false, (uint8_t) 3).$ref()) == System::Decimal(Builtin::ParseUInt128("36258549313680571627010290442"), false, (uint8_t) 28)), "12.345m.Log2==3.6258549313680571627010290442m");
		#line 3206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((ADV_UPCS(Log10)(System::Decimal(Builtin::ParseUInt128("12345"), false, (uint8_t) 3).$ref()) == System::Decimal(Builtin::ParseUInt128("10914910942679510818489967645"), false, (uint8_t) 28)), "12.345m.Log10==1.0914910942679510818489967645m");
		#line 3207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((ADV_UFCS(Log)(System::Decimal(Builtin::ParseUInt128("12345"), false, (uint8_t) 3).$ref(), Builtin::i32(4)) == System::Decimal(Builtin::ParseUInt128("18129274656840285813505145227"), false, (uint8_t) 28)), "12.345m.Log(4)==1.8129274656840285813505145227m");
		#line 3208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((ADV_UPCS(Sqrt)(System::Decimal(Builtin::ParseUInt128("12345"), false, (uint8_t) 3).$ref()) == System::Decimal(Builtin::ParseUInt128("35135452181521728638212225535"), false, (uint8_t) 28)), "12.345m.Sqrt==3.5135452181521728638212225535m");
		#line 3209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((ADV_UFCS(Root)(System::Decimal(Builtin::ParseUInt128("123345"), false, (uint8_t) 3).$ref(), Builtin::i32(5)) == System::Decimal(Builtin::ParseUInt128("26195356295079193440029636649"), false, (uint8_t) 28)), "123.345m.Root(5)==2.6195356295079193440029636649m");
		#line 3210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((ADV_UFCS(Hypot)(System::Decimal(Builtin::ParseUInt128("12345"), false, (uint8_t) 3).$ref(), System::Decimal(Builtin::ParseUInt128("13475"), false, (uint8_t) 3)) == System::Decimal(Builtin::ParseUInt128("18274973324193937110010809348"), false, (uint8_t) 27)), "12.345m.Hypot(13.475m)==18.274973324193937110010809348m");
		#line 3211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((ADV_UPCS(Sin)(System::Decimal(Builtin::ParseUInt128("12345"), false, (uint8_t) 3).$ref()) == System::Decimal(Builtin::ParseUInt128("02195669967379331208777903957"), true, (uint8_t) 28)), "12.345m.Sin==-0.2195669967379331208777903957m");
		#line 3212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((ADV_UPCS(Cos)(System::Decimal(Builtin::ParseUInt128("12345"), false, (uint8_t) 3).$ref()) == System::Decimal(Builtin::ParseUInt128("09755974241168764311137172336"), false, (uint8_t) 28)), "12.345m.Cos==0.9755974241168764311137172336m");
		#line 3213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((ADV_UPCS(Tan)(System::Decimal(Builtin::ParseUInt128("12345"), false, (uint8_t) 3).$ref()) == System::Decimal(Builtin::ParseUInt128("02250590164654114812867215792"), true, (uint8_t) 28)), "12.345m.Tan==-0.2250590164654114812867215792m");
		#line 3214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((ADV_UPCS(Asin)(System::Decimal(Builtin::ParseUInt128("0345"), false, (uint8_t) 3).$ref()) == System::Decimal(Builtin::ParseUInt128("03522387850970647507525367312"), false, (uint8_t) 28)), "0.345m.Asin==0.3522387850970647507525367312m");
		#line 3215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((ADV_UPCS(Acos)(System::Decimal(Builtin::ParseUInt128("0345"), false, (uint8_t) 3).$ref()) == System::Decimal(Builtin::ParseUInt128("12185575416978318684787849604"), false, (uint8_t) 28)), "0.345m.Acos==1.2185575416978318684787849604m");
		#line 3216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((ADV_UPCS(Atan)(System::Decimal(Builtin::ParseUInt128("0345"), false, (uint8_t) 3).$ref()) == System::Decimal(Builtin::ParseUInt128("03322135507465967447407006541"), false, (uint8_t) 28)), "0.345m.Atan==0.3322135507465967447407006541m");
		#line 3217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((ADV_UPCS(Sinh)(System::Decimal(Builtin::ParseUInt128("12345"), false, (uint8_t) 3).$ref()) == System::Decimal(Builtin::ParseUInt128("11490406242844724925288177915"), false, (uint8_t) 23)), "12.345m.Sinh==114904.06242844724925288177915m");
		#line 3218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((ADV_UPCS(Cosh)(System::Decimal(Builtin::ParseUInt128("12345"), false, (uint8_t) 3).$ref()) == System::Decimal(Builtin::ParseUInt128("11490406243279870549753710697"), false, (uint8_t) 23)), "12.345m.Cosh==114904.06243279870549753710697m");
		#line 3219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((ADV_UPCS(Tanh)(System::Decimal(Builtin::ParseUInt128("12345"), false, (uint8_t) 3).$ref()) == System::Decimal(Builtin::ParseUInt128("09999999999621296571024173851"), false, (uint8_t) 28)), "12.345m.Tanh==0.9999999999621296571024173851m");
		#line 3220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((ADV_UPCS(Asinh)(System::Decimal(Builtin::ParseUInt128("12345"), false, (uint8_t) 3).$ref()) == System::Decimal(Builtin::ParseUInt128("32080347119330812566459538762"), false, (uint8_t) 28)), "12.345m.Asinh==3.2080347119330812566459538762m");
		#line 3221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((ADV_UPCS(Acosh)(System::Decimal(Builtin::ParseUInt128("12345"), false, (uint8_t) 3).$ref()) == System::Decimal(Builtin::ParseUInt128("32047538216182560379240045553"), false, (uint8_t) 28)), "12.345m.Acosh==3.2047538216182560379240045553m");
		#line 3222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		ADV_ASSERT((ADV_UPCS(Atanh)(System::Decimal(Builtin::ParseUInt128("0345"), false, (uint8_t) 3).$ref()) == System::Decimal(Builtin::ParseUInt128("03597570282003437810352645844"), false, (uint8_t) 28)), "0.345m.Atanh==0.3597570282003437810352645844m");
		return true;
	}();
	#endif	
} namespace $extensions { using namespace System;
#line 1615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	auto _operator_eq_eq_mul($extension_Decimal_1613_decimal const& $this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const bool
	{
		#line 1617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		{
			#line 1617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			auto __tmp0 = Builtin::Cast<false, $extension_Decimal_1613_decimal>(obj);
			#line 1617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			if ((__tmp0.IsValid())) {
				#line 1617 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				const auto& obj = *__tmp0;
				
				#line 1618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if ($this == obj) {
					#line 1619 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					return Builtin::Boolean(true);
				}
			}
		}
		#line 1624 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		return Builtin::Boolean(false);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	auto getHashCode($extension_Decimal_1613_decimal const & $this ) -> const Builtin::u64
	{
		#line 1631 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Bits)($this.$ref()))> bits = ADV_UPCS(Bits)($this.$ref()); 
		#line 1632 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if ((ADV_UFCS(_operator_subscript)(bits.$ref(), Builtin::u32(0U)) | ADV_UFCS(_operator_subscript)(bits.$ref(), Builtin::u32(1U)) | ADV_UFCS(_operator_subscript)(bits.$ref(), Builtin::u32(2U))) == Builtin::u32(0U)) {
			#line 1633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return Builtin::u32(0U);
		}
		#line 1636 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(bits.$ref(), Builtin::u32(3U)))> flags = ADV_UFCS(_operator_subscript)(bits.$ref(), Builtin::u32(3U)); 
		#line 1637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if ((flags & __Decimal$Protected::ScaleMask) == Builtin::u32(0U) || (ADV_UFCS(_operator_subscript)(bits.$ref(), Builtin::u32(0U)) & Builtin::u32(1U)) != Builtin::u32(0U)) {
			#line 1638 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return ((Builtin::u64{ADV_UFCS(_operator_subscript)(bits.$ref(), Builtin::u32(1U))} << Builtin::i32(32)) | ADV_UFCS(_operator_subscript)(bits.$ref(), Builtin::u32(0U))) ^ ((Builtin::u64{flags} << Builtin::i32(32)) | Builtin::u64{ADV_UFCS(_operator_subscript)(bits.$ref(), Builtin::u32(2U))});
		}
		#line 1641 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::i32 scale = ADV_UFCS(NarrowToInt8)((flags >> __Decimal$Protected::ScaleShift).$ref()); 
		#line 1642 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype(ADV_UFCS(_operator_subscript)(bits.$ref(), Builtin::u32(0U)))> low = ADV_UFCS(_operator_subscript)(bits.$ref(), Builtin::u32(0U)); 
		#line 1643 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype((Builtin::u64{ADV_UFCS(_operator_subscript)(bits.$ref(), Builtin::u32(2U))} << Builtin::i32(32)) | ADV_UFCS(_operator_subscript)(bits.$ref(), Builtin::u32(1U)))> high = (Builtin::u64{ADV_UFCS(_operator_subscript)(bits.$ref(), Builtin::u32(2U))} << Builtin::i32(32)) | ADV_UFCS(_operator_subscript)(bits.$ref(), Builtin::u32(1U)); 
		#line 1644 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Unscale(Builtin::MutableRef(low), Builtin::MutableRef(high), Builtin::MutableRef(scale));
		#line 1645 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		flags = (flags & (ADV_UFCS(_operator_not)(__Decimal$Protected::ScaleMask))) | (ADV_UFCS(NarrowToUInt32)(scale.$ref()) << __Decimal$Protected::ScaleShift);
		#line 1647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		return ((Builtin::u64{ADV_UFCS(NarrowToUInt32)(high.$ref())} << Builtin::i32(32)) | low) ^ ((Builtin::u64{flags} << Builtin::i32(32)) | (high >> Builtin::i32(32)));
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1680 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	auto _operator_lt_eq_gt_mul($extension_Decimal_1679_decimal const& $this LIFETIMEBOUND, Builtin::In<Builtin::Nullable<Builtin::ObjectRef>> obj)  -> const Builtin::i32
	{
		#line 1682 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		{
			#line 1682 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			auto __tmp0 = Builtin::Cast<false, $extension_Decimal_1679_decimal>(obj);
			#line 1682 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			if ((__tmp0.IsValid())) {
				#line 1682 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				const auto& obj = *__tmp0;
				
				#line 1683 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				return $this <=> obj;
			}
		}
		#line 1685 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		{
			#line 1685 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			if ((!Builtin::Is(obj, nullptr))) {
				#line 1685 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				auto __tmp0 = *obj; const auto& obj = __tmp0;
				
				#line 1687 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				Builtin::Throw(Builtin::InvalidOperationException{});
			}
		}
		#line 1689 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		return Builtin::i32(1);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1872 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	auto Parse($extension_Decimal_1778_decimal const& $this LIFETIMEBOUND, Builtin::Str input)  -> const typename $extension_Decimal_1778_decimal
	{
		#line 1874 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		return Builtin::i32(0);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1877 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	auto TryParse($extension_Decimal_1778_decimal const& $this LIFETIMEBOUND, Builtin::Str input) noexcept -> const Builtin::Nullable<$extension_Decimal_1778_decimal>
	{
		#line 1879 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		return System::Decimal(Builtin::ParseUInt128("00"), false, (uint8_t) 1);
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2001 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	auto Round($extension_Decimal_1932_decimal const& $this LIFETIMEBOUND, Builtin::u32 decimals, MidpointRounding mode)  -> const typename $extension_Decimal_1932_decimal
	{
		#line 2003 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		const Builtin::Auto<decltype(Builtin::u32(28U))> maxDecimals = Builtin::u32(28U); 
		#line 2004 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if ((decimals <=> maxDecimals) > 0) {
			#line 2005 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			Builtin::Throw(Builtin::InvalidArgumentException{});
		}
		#line 2007 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Scale)($this.$ref()) - decimals)> scale = ADV_UPCS(Scale)($this.$ref()) - decimals; 
		#line 2008 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if (scale != Builtin::i32(0)) {
			#line 2009 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return ADV_UFCS(RoundInternal)($this.$ref(), scale, mode);
		}
		#line 2011 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		return $this;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 1937 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	auto getTruncate($extension_Decimal_1932_decimal const & $this ) -> const $extension_Decimal_1932_decimal
	{
		#line 1938 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Scale)($this.$ref()))> scale = ADV_UPCS(Scale)($this.$ref()); 
		#line 1939 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if (scale != Builtin::i32(0)) {
			#line 1940 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return ADV_UFCS(RoundInternal)($this.$ref(), scale, ADV_USPCS(ToZero, MidpointRounding)());
		}
		#line 1942 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		return $this;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1949 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	auto getFloor($extension_Decimal_1932_decimal const & $this ) -> const $extension_Decimal_1932_decimal
	{
		#line 1950 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Scale)($this.$ref()))> scale = ADV_UPCS(Scale)($this.$ref()); 
		#line 1951 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if (scale != Builtin::i32(0)) {
			#line 1952 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return ADV_UFCS(RoundInternal)($this.$ref(), scale, ADV_USPCS(ToNegativeInfinity, MidpointRounding)());
		}
		#line 1954 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		return $this;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1961 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	auto getCeil($extension_Decimal_1932_decimal const & $this ) -> const $extension_Decimal_1932_decimal
	{
		#line 1962 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Scale)($this.$ref()))> scale = ADV_UPCS(Scale)($this.$ref()); 
		#line 1963 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if (scale != Builtin::i32(0)) {
			#line 1964 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return ADV_UFCS(RoundInternal)($this.$ref(), scale, ADV_USPCS(ToPositiveInfinity, MidpointRounding)());
		}
		#line 1966 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		return $this;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1973 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	auto getRound($extension_Decimal_1932_decimal const & $this ) -> const $extension_Decimal_1932_decimal
	{
		#line 1974 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Scale)($this.$ref()))> scale = ADV_UPCS(Scale)($this.$ref()); 
		#line 1975 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if (scale != Builtin::i32(0)) {
			#line 1976 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return ADV_UFCS(RoundInternal)($this.$ref(), scale, ADV_USPCS(AwayFromZero, MidpointRounding)());
		}
		#line 1978 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		return $this;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 1985 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	auto getRoundTiesEven($extension_Decimal_1932_decimal const & $this ) -> const $extension_Decimal_1932_decimal
	{
		#line 1986 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Scale)($this.$ref()))> scale = ADV_UPCS(Scale)($this.$ref()); 
		#line 1987 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if (scale != Builtin::i32(0)) {
			#line 1988 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return ADV_UFCS(RoundInternal)($this.$ref(), scale, ADV_USPCS(ToEven, MidpointRounding)());
		}
		#line 1990 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		return $this;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 2025 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	auto _operator_mul_mul($extension_Decimal_2024_decimal const& $this LIFETIMEBOUND, $extension_Decimal_2024_decimal exp)  -> const typename $extension_Decimal_2024_decimal
	{
		#line 2027 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if (exp == Builtin::i32(0)) {
			#line 2028 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return ADV_USPCS(One, $extension_Decimal_2024_decimal)();
		}
		#line 2031 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if (exp == Builtin::i32(1)) {
			#line 2032 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return $this;
		}
		#line 2035 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if ($this == Builtin::i32(1) || $this == Builtin::i32(0) && exp == Builtin::i32(0)) {
			#line 2036 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return ADV_USPCS(One, $extension_Decimal_2024_decimal)();
		}
		#line 2039 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if ($this == Builtin::i32(0)) {
			#line 2040 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			if ((exp <=> Builtin::i32(0)) > 0) {
				#line 2041 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				return Builtin::i32(0);
			}
			#line 2043 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			Builtin::Throw(Builtin::InvalidOperationException{});
		}
		#line 2046 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if (exp == ADV_USPCS(MinusOne, $extension_Decimal_2024_decimal)()) {
			#line 2047 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return ADV_USPCS(One, $extension_Decimal_2024_decimal)() / $this;
		}
		#line 2050 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		const Builtin::Auto<decltype(ADV_UPCS(IsInteger)(exp.$ref()))> isIntegerExp = ADV_UPCS(IsInteger)(exp.$ref()); 
		#line 2051 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if (ADV_UPCS(IsNegative)($this.$ref()) && !isIntegerExp) {
			#line 2052 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			Builtin::Throw(Builtin::InvalidOperationException{});
		}
		#line 2055 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if (isIntegerExp && ($this <=> Builtin::i32(0)) > 0) {
			#line 2056 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return ADV_UFCS(_operator_xor_xor)($this, (Builtin::Cast<true, Builtin::i32>(exp)));
		}
		#line 2059 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if (!isIntegerExp || ($this <=> Builtin::i32(0)) >= 0) {
			#line 2060 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return ADV_UPCS(Exp)((exp * ADV_UPCS(Ln)($this.$ref())).$ref());
		}
		#line 2063 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if (ADV_UPCS(IsEvenInteger)((Builtin::Cast<true, Builtin::i32>(exp)).$ref())) {
			#line 2064 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return ADV_UPCS(Exp)((exp * ADV_UPCS(Ln)((-$this).$ref())).$ref());
		}
		#line 2067 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		return ADV_UPCS(Exp)(-(exp * ADV_UPCS(Ln)((-$this).$ref())).$ref());
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2074 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	auto getExp($extension_Decimal_2072_decimal const & $this ) -> const $extension_Decimal_2072_decimal
	{
		#line 2076 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype(Builtin::i32(0))> count = Builtin::i32(0); 
		#line 2077 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype($this)> x = $this; 
		#line 2078 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		while ((x <=> ADV_USPCS(One, $extension_Decimal_2072_decimal)()) > 0) 
		{
			#line 2079 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			x--;
			#line 2080 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			count++;
		}
		#line 2083 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		while ((x <=> Builtin::i32(0)) < 0) 
		{
			#line 2084 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			x++;
			#line 2085 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			count--;
		}
		#line 2088 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype(Builtin::i32(1))> iteration = Builtin::i32(1); 
		#line 2089 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype(ADV_USPCS(One, $extension_Decimal_2072_decimal)())> result = ADV_USPCS(One, $extension_Decimal_2072_decimal)(); 
		#line 2090 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype(ADV_USPCS(One, $extension_Decimal_2072_decimal)())> factor = ADV_USPCS(One, $extension_Decimal_2072_decimal)(); 
		#line 2091 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		System::Decimal tmp{}; 
		#line 2092 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		do 
		#line 2092 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		{
			#line 2093 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			tmp = result;
			#line 2094 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			factor *= x / iteration++;
			#line 2095 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			result += factor;
		} while (tmp != result);
		#line 2098 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if (count) {
			#line 2099 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			result *= ADV_UFCS(_operator_xor_xor)(ADV_USPCS(E, System::Decimal)(), count);
		}
		#line 2102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		return result;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 2118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	auto getLn($extension_Decimal_2116_decimal const & $this ) -> const $extension_Decimal_2116_decimal
	{
		#line 2120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if (($this <=> Builtin::i32(0)) <= 0) {
			#line 2121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			Builtin::Throw(Builtin::InvalidOperationException{});
		}
		#line 2124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		const Builtin::Auto<decltype(System::Decimal(Builtin::ParseUInt128("036787944117144232159552377"), false, (uint8_t) 26))> E_INV = System::Decimal(Builtin::ParseUInt128("036787944117144232159552377"), false, (uint8_t) 26); 
		#line 2126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype(Builtin::i32(0))> count = Builtin::i32(0); 
		#line 2127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype($this)> x = $this; 
		#line 2128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		while ((x <=> ADV_USPCS(One, $extension_Decimal_2116_decimal)()) >= 0) 
		{
			#line 2129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			x *= E_INV;
			#line 2130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			count++;
		}
		#line 2132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		while ((x <=> E_INV) <= 0) 
		{
			#line 2133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			x *= System::Decimal(Builtin::ParseUInt128("2718281828459045235360287471"), false, (uint8_t) 27);
			#line 2134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			count--;
		}
		#line 2136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		x--;
		#line 2138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if (x == Builtin::i32(0)) {
			#line 2139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return count;
		}
		#line 2142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype(ADV_USPCS(Zero, $extension_Decimal_2116_decimal)())> result = ADV_USPCS(Zero, $extension_Decimal_2116_decimal)(); 
		#line 2143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype(Builtin::i32(0))> iteration = Builtin::i32(0); 
		#line 2144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype(ADV_USPCS(One, $extension_Decimal_2116_decimal)())> y = ADV_USPCS(One, $extension_Decimal_2116_decimal)(); 
		#line 2145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype(result - Builtin::i32(1))> tmp = result - Builtin::i32(1); 
		#line 2146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		while (tmp != result && (iteration <=> Builtin::i32(100)) < 0) 
		{
			#line 2147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			iteration++;
			#line 2148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			tmp = result;
			#line 2149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			y *= -x;
			#line 2150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			Builtin::Auto<decltype(y / iteration)> div = y / iteration; 
			#line 2151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			result += div;
		}
		#line 2154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		return System::Decimal{count} - result;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 2202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	auto Root($extension_Decimal_2180_decimal const& $this LIFETIMEBOUND, Builtin::i32 n)  -> const typename $extension_Decimal_2180_decimal
	{
		#line 2204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		auto PositiveN = [&] ($extension_Decimal_2180_decimal x, Builtin::i32 n) 
		{
			#line 2206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			$extension_Decimal_2180_decimal result{}; 
			#line 2207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			if (x != Builtin::i32(0)) {
				#line 2208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if ((x <=> Builtin::i32(0)) > 0 || ADV_UPCS(IsOddInteger)(n.$ref())) {
					#line 2209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					result = ADV_UFCS(_operator_mul_mul)(ADV_UPCS(Abs)(x.$ref()), (ADV_USPCS(One, $extension_Decimal_2180_decimal)() / n));
					#line 2210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					result = ADV_UFCS(CopySign)(result.$ref(), x);
				} else {
					#line 2211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					{
						#line 2212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						Builtin::Throw(Builtin::InvalidArgumentException{});
					}
				}
			} else {
				#line 2214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if (ADV_UPCS(IsEvenInteger)(n.$ref())) {
					#line 2215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					result = Builtin::i32(0);
				} else {
					#line 2216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					{
						#line 2217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						result = ADV_UFCS(CopySign)(Builtin::i32(0).$ref(), x);
					}
				}
			}
			#line 2220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return result;
		}; 
		#line 2223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		auto NegativeN = [&] ($extension_Decimal_2180_decimal x, Builtin::i32 n) 
		{
			#line 2225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			$extension_Decimal_2180_decimal result{}; 
			#line 2226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			if (x != Builtin::i32(0)) {
				#line 2227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if ((x <=> Builtin::i32(0)) > 0 || ADV_UPCS(IsOddInteger)(n.$ref())) {
					#line 2228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					result = ADV_UFCS(_operator_mul_mul)(ADV_UPCS(Abs)(x.$ref()), (ADV_USPCS(One, $extension_Decimal_2180_decimal)() / n));
					#line 2229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					result = ADV_UFCS(CopySign)(result.$ref(), x);
				} else {
					#line 2230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					{
						#line 2231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						Builtin::Throw(Builtin::InvalidArgumentException{});
					}
				}
			} else {
				#line 2233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if (ADV_UPCS(IsEvenInteger)(n.$ref())) {
					#line 2234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					Builtin::Throw(Builtin::DecimalOverflowException{});
				} else {
					#line 2235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					{
						#line 2236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						Builtin::Throw(Builtin::DecimalOverflowException{});
					}
				}
			}
			#line 2239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return result;
		}; 
		#line 2242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		return [&]() 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
		{
			#line 2243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			auto __tmp__valid_2242 = Builtin::Cast<false, std::decay_t<decltype(n)>::$self>(n);
			#line 2243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			if(__tmp__valid_2242.IsValid() && Builtin::IsGreater(*__tmp__valid_2242, Builtin::i32(0))) {
				#line 2243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				const auto& n = *__tmp__valid_2242;
				return [&]() 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
				{
					#line 2245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					auto __tmp__valid_2243 = Builtin::Cast<false, std::decay_t<decltype(n)>::$self>(n);
					#line 2245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					if(__tmp__valid_2243.IsValid() && Builtin::Is(*__tmp__valid_2243, Builtin::i32(2))) {
						#line 2245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						const auto& n = *__tmp__valid_2243;
						return $this != Builtin::i32(0) ? ADV_UPCS(Sqrt)($this.$ref()) : Builtin::i32(0);
					}
					else {
						#line 2246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
						if(__tmp__valid_2243.IsValid() && Builtin::Is(*__tmp__valid_2243, Builtin::i32(3))) {
							#line 2246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
							const auto& n = *__tmp__valid_2243;
							return ADV_UPCS(Cbrt)($this.$ref());
						}
						else {
							return PositiveN($this, n);
							
						}
					}
				}
ADV_WARNING_POP
				();
			}
			else {
				#line 2249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if(__tmp__valid_2242.IsValid() && Builtin::IsLess(*__tmp__valid_2242, Builtin::i32(0))) {
					#line 2249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					const auto& n = *__tmp__valid_2242;
					return NegativeN($this, n);
				}
				else {
					Builtin::Throw(Builtin::InvalidArgumentException{});
					
				}
			}
		}
ADV_WARNING_POP
		();
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	auto Hypot($extension_Decimal_2180_decimal const& $this LIFETIMEBOUND, $extension_Decimal_2180_decimal y)  -> const typename $extension_Decimal_2180_decimal
	{
		#line 2257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		$extension_Decimal_2180_decimal result{}; 
		#line 2258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Abs)($this.$ref()))> ax = ADV_UPCS(Abs)($this.$ref()); 
		#line 2259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Abs)(y.$ref()))> ay = ADV_UPCS(Abs)(y.$ref()); 
		#line 2261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if (ax == Builtin::i32(0)) {
			#line 2262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			result = ay;
		} else {
			#line 2263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			if (ay == Builtin::i32(0)) {
				#line 2264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				result = ax;
			} else {
				#line 2265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				{
					#line 2266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					Builtin::Auto<decltype(ax)> xx = ax; 
					#line 2267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					xx *= xx;
					#line 2268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					Builtin::Auto<decltype(ay)> yy = ay; 
					#line 2269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					yy *= yy;
					#line 2270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					result = ADV_UPCS(Sqrt)((xx + yy).$ref());
				}
			}
		}
		#line 2273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		return result;
	}
	
} namespace System{
} namespace $extensions { using namespace System;
#line 2182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	auto getSqrt($extension_Decimal_2180_decimal const & $this ) -> const $extension_Decimal_2180_decimal
	{
		#line 2184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if (($this <=> Builtin::i32(0)) < 0) {
			#line 2185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			Builtin::Throw(Builtin::InvalidOperationException{});
		}
		#line 2188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype(Builtin::Cast<true, System::Decimal>(ADV_UPCS(Sqrt)((Builtin::Cast<true, Builtin::f64>($this)).$ref())))> current = Builtin::Cast<true, System::Decimal>(ADV_UPCS(Sqrt)((Builtin::Cast<true, Builtin::f64>($this)).$ref())); 
		#line 2189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		System::Decimal previous{}; 
		#line 2190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		do 
		#line 2190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		{
			#line 2191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			previous = current;
			#line 2192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			if (previous == Builtin::i32(0)) {
				#line 2193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				return Builtin::i32(0);
			}
			#line 2195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			current = (previous + $this / previous) * System::Decimal(Builtin::ParseUInt128("05"), false, (uint8_t) 1);
		} while ((ADV_UPCS(Abs)((previous - current).$ref()) <=> Builtin::i32(0)) > 0);
		#line 2197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		return current;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 2279 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	auto getSin($extension_Decimal_2277_decimal const & $this ) -> const $extension_Decimal_2277_decimal
	{
		#line 2281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Cos)($this.$ref()))> cos = ADV_UPCS(Cos)($this.$ref()); 
		#line 2282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Sqrt)((ADV_USPCS(One, $extension_Decimal_2277_decimal)() - cos * cos).$ref()))> sinModule = ADV_UPCS(Sqrt)((ADV_USPCS(One, $extension_Decimal_2277_decimal)() - cos * cos).$ref()); 
		#line 2283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		const auto isPositive = [&] (System::Decimal x) 
		{
			#line 2284 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			while ((x <=> ADV_USPCS(Tau, System::Decimal)()) >= 0) 
			{
				#line 2285 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				x -= ADV_USPCS(Tau, System::Decimal)();
			}
			#line 2287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			while ((x <=> -ADV_USPCS(Tau, System::Decimal)()) <= 0) 
			{
				#line 2288 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				x += ADV_USPCS(Tau, System::Decimal)();
			}
			#line 2291 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			if ((x <=> -ADV_USPCS(Tau, System::Decimal)()) >= 0 && (x <=> -ADV_USPCS(Pi, System::Decimal)()) <= 0) {
				#line 2292 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				return Builtin::Boolean(true);
			}
			#line 2294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			if ((x <=> -ADV_USPCS(Pi, System::Decimal)()) >= 0 && (x <=> Builtin::i32(0)) <= 0) {
				#line 2295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				return Builtin::Boolean(false);
			}
			#line 2297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			if ((x <=> Builtin::i32(0)) >= 0 && (x <=> ADV_USPCS(Pi, System::Decimal)()) <= 0) {
				#line 2298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				return Builtin::Boolean(true);
			}
			#line 2300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			if ((x <=> ADV_USPCS(Pi, System::Decimal)()) >= 0 && (x <=> ADV_USPCS(Tau, System::Decimal)()) <= 0) {
				#line 2301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				return Builtin::Boolean(false);
			}
			#line 2303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			Builtin::Throw(Builtin::InvalidOperationException{});
			#line 2304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return Builtin::Boolean(false);
		}($this); 
		#line 2307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		return isPositive ? sinModule : -sinModule;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 2310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	auto getCos($extension_Decimal_2277_decimal const & $this ) -> const $extension_Decimal_2277_decimal
	{
		#line 2312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype($this)> x = $this; 
		#line 2313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		while ((x <=> ADV_USPCS(Tau, System::Decimal)()) > 0) 
		{
			#line 2314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			x -= ADV_USPCS(Tau, System::Decimal)();
		}
		#line 2316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		while ((x <=> -ADV_USPCS(Tau, System::Decimal)()) < 0) 
		{
			#line 2317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			x += ADV_USPCS(Tau, System::Decimal)();
		}
		#line 2320 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if ((x <=> ADV_USPCS(Pi, System::Decimal)()) >= 0 && (x <=> ADV_USPCS(Tau, System::Decimal)()) <= 0) {
			#line 2321 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return -(ADV_UPCS(Cos)((x - ADV_USPCS(Pi, System::Decimal)()).$ref()));
		}
		#line 2323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if ((x <=> -ADV_USPCS(Tau, System::Decimal)()) >= 0 && (x <=> -ADV_USPCS(Pi, System::Decimal)()) <= 0) {
			#line 2324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return -(ADV_UPCS(Cos)((x + ADV_USPCS(Pi, System::Decimal)()).$ref()));
		}
		#line 2327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		x *= x;
		#line 2328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype(-x * System::Decimal(Builtin::ParseUInt128("05"), false, (uint8_t) 1))> xx = -x * System::Decimal(Builtin::ParseUInt128("05"), false, (uint8_t) 1); 
		#line 2329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype(xx + Builtin::i32(1))> y = xx + Builtin::i32(1); 
		#line 2330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype(xx)> tmp = xx; 
		#line 2331 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		for (Builtin::Auto<decltype(Builtin::i32(1))> i = Builtin::i32(1); tmp != y && (i <=> Builtin::i32(100)) < 0; i++) 
		{
			#line 2332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			tmp = y;
			#line 2333 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			System::Decimal factor = i * (i + i + Builtin::i32(3)) + Builtin::i32(1); 
			#line 2334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			factor = System::Decimal(Builtin::ParseUInt128("05"), true, (uint8_t) 1) / factor;
			#line 2335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			xx *= x * factor;
			#line 2336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			y += xx;
		}
		#line 2338 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		return y;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 2341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	auto getTan($extension_Decimal_2277_decimal const & $this ) -> const $extension_Decimal_2277_decimal
	{
		#line 2343 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		const Builtin::Auto<decltype(ADV_UPCS(Cos)($this.$ref()))> cos = ADV_UPCS(Cos)($this.$ref()); 
		#line 2344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if (cos == Builtin::i32(0)) {
			#line 2345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			Builtin::Throw(Builtin::InvalidOperationException{});
		}
		#line 2348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		return ADV_UPCS(Sin)($this.$ref()) / cos;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 2357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	auto getAsin($extension_Decimal_2277_decimal const & $this ) -> const $extension_Decimal_2277_decimal
	{
		#line 2359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if ((ADV_UPCS(Abs)($this.$ref()) <=> Builtin::i32(1)) > 0) {
			#line 2360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			Builtin::Throw(Builtin::InvalidOperationException{});
		}
		#line 2363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		constexpr Builtin::Auto<decltype(System::Decimal(Builtin::ParseUInt128("15707963267948966192313216916"), false, (uint8_t) 28))> HalfPi = System::Decimal(Builtin::ParseUInt128("15707963267948966192313216916"), false, (uint8_t) 28);
		#line 2365 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if ($this == Builtin::i32(0)) {
			#line 2366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return Builtin::i32(0);
		}
		#line 2368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if ($this == Builtin::i32(1)) {
			#line 2369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return HalfPi;
		}
		#line 2371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if (($this <=> Builtin::i32(0)) < 0) {
			#line 2372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return ADV_UPCS(Asin)(-(-$this).$ref());
		}
		#line 2375 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		const Builtin::Auto<decltype(ADV_USPCS(One, $extension_Decimal_2277_decimal)() - $this * $this * Builtin::i32(2))> newX = ADV_USPCS(One, $extension_Decimal_2277_decimal)() - $this * $this * Builtin::i32(2); 
		#line 2376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if ((ADV_UPCS(Abs)($this.$ref()) <=> ADV_UPCS(Abs)(newX.$ref())) > 0) {
			#line 2377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return System::Decimal(Builtin::ParseUInt128("05"), false, (uint8_t) 1) * (HalfPi - ADV_UPCS(Asin)(newX.$ref()));
		}
		#line 2380 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype(ADV_USPCS(Zero, $extension_Decimal_2277_decimal)())> y = ADV_USPCS(Zero, $extension_Decimal_2277_decimal)(); 
		#line 2381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype($this)> result = $this; 
		#line 2382 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		System::Decimal tmp{}; 
		#line 2383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		Builtin::Auto<decltype(Builtin::i32(1))> i = Builtin::i32(1); 
		#line 2384 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		y += result;
		#line 2385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		const Builtin::Auto<decltype($this * $this)> xx = $this * $this; 
		#line 2386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		do 
		#line 2386 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		{
			#line 2387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			tmp = result;
			#line 2388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			result *= xx * (ADV_USPCS(One, $extension_Decimal_2277_decimal)() - System::Decimal(Builtin::ParseUInt128("05"), false, (uint8_t) 1) / i);
			#line 2389 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			y += result / (Builtin::i32(2) * i + Builtin::i32(1));
			#line 2390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			i++;
		} while (tmp != result);
		#line 2392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		return y;
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 2395 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	auto getAcos($extension_Decimal_2277_decimal const & $this ) -> const $extension_Decimal_2277_decimal
	{
		#line 2397 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		constexpr Builtin::Auto<decltype(System::Decimal(Builtin::ParseUInt128("15707963267948966192313216916"), false, (uint8_t) 28))> HalfPi = System::Decimal(Builtin::ParseUInt128("15707963267948966192313216916"), false, (uint8_t) 28);
		#line 2399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if ($this == Builtin::i32(0)) {
			#line 2400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return HalfPi;
		}
		#line 2402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if ($this == Builtin::i32(1)) {
			#line 2403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return Builtin::i32(0);
		}
		#line 2405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if (($this <=> Builtin::i32(0)) < 0) {
			#line 2406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			return ADV_USPCS(Pi, System::Decimal)() - ADV_UPCS(Acos)((-$this).$ref());
		}
		#line 2408 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		return HalfPi - ADV_UPCS(Asin)($this.$ref());
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 2411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	auto getAtan($extension_Decimal_2277_decimal const & $this ) -> const $extension_Decimal_2277_decimal
	{
		#line 2413 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		return [&]() 
ADV_WARNING_DISABLE(4715, -Wreturn-type)
		{
			#line 2414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			auto __tmp__valid_2413 = Builtin::Cast<false, std::decay_t<decltype($this)>::$self>($this);
			#line 2414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			if(__tmp__valid_2413.IsValid() && Builtin::Is(*__tmp__valid_2413, Builtin::i32(0))) {
				#line 2414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				
				return ADV_USPCS(Zero, $extension_Decimal_2277_decimal)();
			}
			else {
				#line 2415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
				if(__tmp__valid_2413.IsValid() && Builtin::Is(*__tmp__valid_2413, Builtin::i32(1))) {
					#line 2415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
					
					return System::Decimal(Builtin::ParseUInt128("0785398163397448309615660845819875721049292349843776455243"), false, (uint8_t) 57);
				}
				else {
					return ADV_UPCS(Asin)(($this / ADV_UPCS(Sqrt)((ADV_USPCS(One, $extension_Decimal_2277_decimal)() + $this * $this).$ref())).$ref());
					
				}
			}
		}
ADV_WARNING_POP
		();
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 2462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	auto getAcosh($extension_Decimal_2460_decimal const & $this ) -> const $extension_Decimal_2460_decimal
	{
		#line 2464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if (($this <=> Builtin::i32(1)) < 0) {
			#line 2465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			Builtin::Throw(Builtin::InvalidOperationException{});
		}
		#line 2468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		return ADV_UPCS(Ln)(($this + ADV_UPCS(Sqrt)(($this * $this - Builtin::i32(1)).$ref())).$ref());
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 2477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	auto getAsinh($extension_Decimal_2460_decimal const & $this ) -> const $extension_Decimal_2460_decimal
	{
		#line 2479 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		return ADV_UPCS(Ln)(($this + ADV_UPCS(Sqrt)(($this * $this + Builtin::i32(1)).$ref())).$ref());
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 2482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	auto getAtanh($extension_Decimal_2460_decimal const & $this ) -> const $extension_Decimal_2460_decimal
	{
		#line 2484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		if ((ADV_UPCS(Abs)($this.$ref()) <=> Builtin::i32(1)) >= 0) {
			#line 2485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
			Builtin::Throw(Builtin::InvalidOperationException{});
		}
		#line 2488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		return System::Decimal(Builtin::ParseUInt128("05"), false, (uint8_t) 1) * ADV_UPCS(Ln)(((ADV_USPCS(One, $extension_Decimal_2460_decimal)() + $this) / (ADV_USPCS(One, $extension_Decimal_2460_decimal)() - $this)).$ref());
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 2491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	auto getCosh($extension_Decimal_2460_decimal const & $this ) -> const $extension_Decimal_2460_decimal
	{
		#line 2493 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		return (ADV_UPCS(Exp)($this.$ref()) + ADV_UPCS(Exp)((-$this).$ref())) * System::Decimal(Builtin::ParseUInt128("05"), false, (uint8_t) 1);
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 2502 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	auto getSinh($extension_Decimal_2460_decimal const & $this ) -> const $extension_Decimal_2460_decimal
	{
		#line 2504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		return (ADV_UPCS(Exp)($this.$ref()) - ADV_UPCS(Exp)((-$this).$ref())) * System::Decimal(Builtin::ParseUInt128("05"), false, (uint8_t) 1);
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 2507 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	auto getTanh($extension_Decimal_2460_decimal const & $this ) -> const $extension_Decimal_2460_decimal
	{
		#line 2509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
		return (ADV_UPCS(Exp)(($this * Builtin::i32(2)).$ref()) - Builtin::i32(1)) / (ADV_UPCS(Exp)(($this * Builtin::i32(2)).$ref()) + Builtin::i32(1));
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Decimal.ast"
	

}