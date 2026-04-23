#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif

namespace System::Application {
namespace __Unsafe {} namespace __Collections_Protected__Unsafe {}
//###############################################################################
//# Versions
//###############################################################################
#ifndef ADV_VERSION_WINDOWS
#line 18 "Collections.ast"
#define ADV_VERSION_WINDOWS 167
#endif
#ifndef ADV_VERSION___COLLECTIONS_PROTECTED_Linux
#line 19 "Collections.ast"
#define ADV_VERSION___COLLECTIONS_PROTECTED_Linux 1
#endif
//###############################################################################
//# Type forward declarations
//###############################################################################
namespace __ntuples { class NamedTuple_4e7be1ed49b09d71; } 
class Span;
namespace __ntuples { class NamedTuple_6893f862d6c49683; } 
class Vector3;
class BaseClass;
class BaseClass__Unowned;
class BaseClass__Weak;
class __Class_BaseClass;
namespace __ntuples { class NamedTuple_6893f862d6c49683; } 
class VectorClass;
class VectorClass__Unowned;
class VectorClass__Weak;
class __Class_VectorClass;
class ConcreteVectorClass;
class ConcreteVectorClass__Unowned;
class ConcreteVectorClass__Weak;
class __Class_ConcreteVectorClass;
class Next;
class Next__Unowned;
class Next__Weak;
class __Class_Next;
class IMagicNumber;
class IMagicNumber__Unowned;
class IMagicNumber__Weak;
class IResettable;
class IResettable__Unowned;
class IResettable__Weak;
class IInterface;
class IInterface__Unowned;
class IInterface__Weak;
class DayOfWeek;
class __Class_DayOfWeek;
class Options;
class __Class_Options;
class Text;
class __Class_Text;
class ComplexVariant;
class ComplexVariant__Unowned;
class ComplexVariant__Weak;
class __Class_ComplexVariant;
class Media;
class __Class_Media;
template<class T1, class T2> class Union2;
template<class T1, class T2> class __Class_Union2;
template<class T1, class T2, class T3> class Union3;
template<class T1, class T2, class T3> class __Class_Union3;
template<class T1, class T2, class T3, class T4> class Union4;
template<class T1, class T2, class T3, class T4> class __Class_Union4;
template<class T1, class T2, class T3, class T4, class T5> class Union5;
template<class T1, class T2, class T3, class T4, class T5> class __Class_Union5;
template<class T1, class T2, class T3, class T4, class T5, class T6> class Union6;
template<class T1, class T2, class T3, class T4, class T5, class T6> class __Class_Union6;
class TestStruct;
//###############################################################################
//# Global type aliases
//###############################################################################
#line 6 "Collections.ast"
using cstring [[clang::annotate("unsafe")]] = CppAdvance::Unsafe::__RawPtr<const CppAdvance::char8>;
#line 16 "Collections.ast"
namespace __Collections_Protected { using Test111 = typename Test1::Test2::TestClass; }
#line 17 "Collections.ast"
namespace __Collections_Protected { using Test112 = typename Test1::Test2::Class2; }
#line 50 "Collections.ast"
template<class A, class C> using SimpleTuple = std::tuple<A, bool, C>;
#line 51 "Collections.ast"
using ImportantOptions = __ntuples::NamedTuple_4e7be1ed49b09d71;
#line 644 "Collections.ast"
template<class... Args> using Action = CppAdvance::FunctionRef<void(Args...)>;
#line 645 "Collections.ast"
template<class T> using Predicate = CppAdvance::FunctionRef<bool (T)>;
//###############################################################################
//# Type definitions
//###############################################################################
class Span;
	#line 57 "Collections.ast"
	struct [[clang::annotate("ref_struct")]] Span final : public CppAdvance::RefStruct {
		public: using __self = Span;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 59 "Collections.ast"
		public: CppAdvance::f32 & data;
		#line 60 "Collections.ast"
		public: CppAdvance::i32 length;
		#line 61 "Collections.ast"
		public: inline ~Span() noexcept;
		
	};
	
	class __Class_Vector3;
	#line 64 "Collections.ast"
	struct Vector3 final : public CppAdvance::Struct {
		public: using __self = Vector3;
		public: using __class = __Class_Vector3;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		public: 
		class NestedStruct; class NestedStruct__Unowned; class NestedStruct__Weak; class __Class_NestedStruct;
		#line 122 "Collections.ast"
		class NestedStruct : public CppAdvance::ObjectRef {
			public: using __self = NestedStruct;
			private: using ___super = CppAdvance::ObjectRef;
			public: using __class = __Class_NestedStruct;
			private: friend class NestedStruct__Unowned;
			friend class __Class_NestedStruct;
			friend class NestedStruct__Weak;
			public: using __strong_ref = NestedStruct;
			public: using __unowned_ref = NestedStruct__Unowned;
			public: using __weak_ref = NestedStruct__Weak;
			public: FORCE_INLINE decltype(auto) __ref() const noexcept { return *reinterpret_cast<__class*>(_obj); }
			ADV_CLASS_FROM_PTR(NestedStruct)
			ADV_CLASS_INIT(NestedStruct)
			ADV_CLASS_STRONG_COMMON_CTORS(NestedStruct)
			#define ADV_PROPERTY_SELF __class
			#define ADV_PROPERTY_SELF __self
			#line 127 "Collections.ast"
			public: inline constexpr static decltype(auto) count(CppAdvance::i32 i) ;
			
		};
		#line 122 "Collections.ast"
		class NestedStruct__Unowned : public CppAdvance::ObjectRef__Unowned {
			public: using __self = NestedStruct;
			public: using __strong_ref = NestedStruct;
			public: using __unowned_ref = NestedStruct__Unowned;
			public: using __weak_ref = NestedStruct__Weak;
			private: using ___super = CppAdvance::ObjectRef__Unowned;
			public: using __class = __Class_NestedStruct;
			public: FORCE_INLINE decltype(auto) __ref() const noexcept { CppAdvance::UnownedCheck(_obj); return *reinterpret_cast<__class*>(_obj); }
			ADV_CLASS_FROM_PTR(NestedStruct__Unowned)
			ADV_CLASS_UNOWNED_COMMON_CTORS(NestedStruct__Unowned)
			
		};
		#line 122 "Collections.ast"
		class NestedStruct__Weak : public CppAdvance::ObjectRef__Weak {
			public: using __self = NestedStruct;
			public: using __strong_ref = NestedStruct;
			public: using __unowned_ref = NestedStruct__Unowned;
			public: using __weak_ref = NestedStruct__Weak;
			private: using ___super = CppAdvance::ObjectRef__Weak;
			public: using __class = __Class_NestedStruct;
			static constexpr bool __IS_ADV_NULLABLE = true;
			public: FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
			ADV_CLASS_WEAK_FROM_PTR(NestedStruct__Weak)
			ADV_CLASS_WEAK_COMMON_CTORS(NestedStruct__Weak)
			#define ADV_PROPERTY_SELF __self
		};
		
		public: 
		#line 122 "Collections.ast"
		class __Class_NestedStruct : public CppAdvance::Object {
			public: using __self = NestedStruct;
			private: using ___super = CppAdvance::Object;
			public: using __selfClass = __Class_NestedStruct;
			friend class __self;
			friend class __self::__weak_ref;
			#define ADV_PROPERTY_SELF __selfClass
			public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
			#line 124 "Collections.ast"
			public: mutable CppAdvance::f32 x; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
			#line 125 "Collections.ast"
			public: mutable CppAdvance::f32 y; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
			#line 126 "Collections.ast"
			public: mutable CppAdvance::f32 z; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
			#line 127 "Collections.ast"
			public: inline constexpr static auto count(CppAdvance::i32 i)  -> const CppAdvance::i32;
			
#define ADV_PROPERTY_SELF __self
		};
		
		#line 122 "Collections.ast"
		ADV_CHECK_FOR_CONCRETE(NestedStruct);
		
		#line 79 "Collections.ast"
		private: friend class TestStruct; friend class __Class_TestStruct;
		#line 80 "Collections.ast"
		private: template<class T> friend class TestStruct2; template<class T> friend class __Class_TestStruct2;
		#line 81 "Collections.ast"
		private: friend const CppAdvance::i32 func3(CppAdvance::i32 x);
		#line 168 "Collections.ast"
		private: friend const Next getNext(const __self&);
		#line 82 "Collections.ast"
		private: friend const CppAdvance::i32 func4(CppAdvance::i32 x);
		#line 67 "Collections.ast"
		public: CppAdvance::i32 x; ADV_CHECK_REF_STRUCT("i32", CppAdvance::i32);
		#line 67 "Collections.ast"
		public: CppAdvance::i32 y; ADV_CHECK_REF_STRUCT("i32", CppAdvance::i32);
		#line 67 "Collections.ast"
		public: CppAdvance::i32 z; ADV_CHECK_REF_STRUCT("i32", CppAdvance::i32);
		#line 117 "Collections.ast"
		private: static thread_local CppAdvance::i32 Count2; ADV_CHECK_REF_STRUCT("i32", CppAdvance::i32);
		#line 119 "Collections.ast"
		public: static const Vector3 ZERO;
		private: class __sctor {
			static __sctor instance;
			#line 73 "Collections.ast"
			__sctor();
			#line 77 "Collections.ast"
			~__sctor();
			
		};
		public: constexpr Vector3(CppAdvance::i32 _x, CppAdvance::i32 _y, CppAdvance::i32 _z) : x{_x}, y{_y}, z{_z} {}
		#line 118 "Collections.ast"
		public: static constexpr auto BYTES = CppAdvance::i32(24);
		#line 120 "Collections.ast"
		private: using Coords = __ntuples::NamedTuple_6893f862d6c49683;
		#line 102 "Collections.ast"
		private: static CppAdvance::i32 p_Count; ADV_CHECK_REF_STRUCT("i32", CppAdvance::i32);
		#line 107 "Collections.ast"
		public: static auto setCount(const CppAdvance::i32& value) -> void;
		#line 103 "Collections.ast"
		public: static auto getCount()  -> CppAdvance::i32;
		#line 9999 "Collections.ast"
		ADV_PROPERTY_GETTER_SETTER_STATIC(public, , Count, public, getCount, public, setCount, CppAdvance::i32);
		#line 115 "Collections.ast"
		public: inline constexpr auto getName() const  -> CppAdvance::Str;
		#line 9999 "Collections.ast"
		ADV_PROPERTY_GETTER(public, Name, getName, CppAdvance::Str);
		#line 98 "Collections.ast"
		public: inline constexpr auto format() const noexcept -> const CppAdvance::Str;
		#line 99 "Collections.ast"
		public: inline constexpr auto HashCode() const  -> const CppAdvance::usize;
		#line 100 "Collections.ast"
		public: inline constexpr static auto AStaticMethod(CppAdvance::i32 i)  -> const CppAdvance::i32;
		#line 131 "Collections.ast"
		public: inline constexpr Vector3()  = default;
		#line 132 "Collections.ast"
		public: inline constexpr  Vector3(const __self& that)  = default;
		#line 134 "Collections.ast"
		public: template<class U> inline constexpr  Vector3(U f) ;
		#line 139 "Collections.ast"
		public: inline ~Vector3() noexcept;
		#line 141 "Collections.ast"
		public: inline constexpr  operator CppAdvance::f32() const noexcept;
		#line 143 "Collections.ast"
		public: inline auto operator+(const __self& other) const  -> const __self;
		#line 145 "Collections.ast"
		public: inline auto operator++()  LIFETIMEBOUND -> __self&;
		public: inline auto operator++(int)  -> Vector3;
		#line 9999 "Collections.ast"
		private: template<class __IdxT = CppAdvance::f32> struct __IndexerAccessor_155 {
			private:
			Vector3& _parent;
			CppAdvance::i32 _idx;
			 friend class Vector3;
			public:
			FORCE_INLINE __IndexerAccessor_155(Vector3& parent, CppAdvance::i32 idx) : _parent(parent), _idx(idx) {}
			FORCE_INLINE __IndexerAccessor_155(Vector3 const& parent, CppAdvance::i32 idx) : _parent(const_cast<std::remove_cvref_t<decltype(parent)>&>(parent)), _idx(idx) {}
			template<class _ElemRight> FORCE_INLINE auto& operator=(_ElemRight&& other) { _parent.setAt(_idx, std::forward<_ElemRight>(other)); return *this; }
			template<class _ElemRight> FORCE_INLINE decltype(auto) operator+=(_ElemRight&& other) requires requires(__IdxT t, _ElemRight u) {t = t+=u;} { return *this = __ref() += std::forward<_ElemRight>(other); }
			template<class _ElemRight> FORCE_INLINE decltype(auto) operator-=(_ElemRight&& other) requires requires(__IdxT t, _ElemRight u) {t = t-=u;} { return *this = __ref() -= std::forward<_ElemRight>(other); }
			template<class _ElemRight> FORCE_INLINE decltype(auto) operator*=(_ElemRight&& other) requires requires(__IdxT t, _ElemRight u) {t = t*=u;} { return *this = __ref() *= std::forward<_ElemRight>(other); }
			template<class _ElemRight> FORCE_INLINE decltype(auto) operator/=(_ElemRight&& other) requires requires(__IdxT t, _ElemRight u) {t = t/=u;} { return *this = __ref() /= std::forward<_ElemRight>(other); }
			template<class _ElemRight> FORCE_INLINE decltype(auto) operator%=(_ElemRight&& other) requires requires(__IdxT t, _ElemRight u) {t = t%=u;} { return *this = __ref() %= std::forward<_ElemRight>(other); }
			template<class _ElemRight> FORCE_INLINE decltype(auto) operator&=(_ElemRight&& other) requires requires(__IdxT t, _ElemRight u) {t = t&=u;} { return *this = __ref() &= std::forward<_ElemRight>(other); }
			template<class _ElemRight> FORCE_INLINE decltype(auto) operator|=(_ElemRight&& other) requires requires(__IdxT t, _ElemRight u) {t = t|=u;} { return *this = __ref() |= std::forward<_ElemRight>(other); }
			template<class _ElemRight> FORCE_INLINE decltype(auto) operator^=(_ElemRight&& other) requires requires(__IdxT t, _ElemRight u) {t = t^=u;} { return *this = __ref() ^= std::forward<_ElemRight>(other); }
			template<class _ElemRight> FORCE_INLINE decltype(auto) operator<<=(_ElemRight&& other) requires requires(__IdxT t, _ElemRight u) {t = t<<=u;} { return *this = __ref() <<= std::forward<_ElemRight>(other); }
			template<class _ElemRight> FORCE_INLINE decltype(auto) operator>>=(_ElemRight&& other) requires requires(__IdxT t, _ElemRight u) {t = t>>=u;} { return *this = __ref() >>= std::forward<_ElemRight>(other); }
			FORCE_INLINE decltype(auto) operator++() requires requires(__IdxT t) {++t;} { return *this = ++__ref(); }
			FORCE_INLINE decltype(auto) operator++(int) requires requires(__IdxT t) {t++;} { auto copy = __ref(); *this = ++__ref(); return copy; }
			FORCE_INLINE decltype(auto) operator--() requires requires(__IdxT t) {--t;} { return *this = --__ref(); }
			FORCE_INLINE decltype(auto) operator--(int) requires requires(__IdxT t) {t--;} { auto copy = __ref(); *this = --__ref(); return copy; }
			public: FORCE_INLINE operator __IdxT() { return _parent.getAt(_idx); }
			FORCE_INLINE operator const __IdxT() const { return _parent.getAt(_idx); }
			FORCE_INLINE decltype(auto) __ref() { return _parent.getAt(_idx); }
			FORCE_INLINE decltype(auto) __ref() const { return const_cast<std::remove_cvref_t<decltype(_parent)> const&>(_parent).getAt(_idx); }
			FORCE_INLINE decltype(auto) operator+() const requires requires(__IdxT t) {t = +t;} { return +__ref(); }
			FORCE_INLINE decltype(auto) operator-() const requires requires(__IdxT t) {t = -t;} { return -__ref(); }
			FORCE_INLINE decltype(auto) operator~() const requires requires(__IdxT t) {t = ~t;} { return ~__ref(); }
			template<class _ElemRight> FORCE_INLINE decltype(auto) operator+(_ElemRight&& other) const requires requires(__IdxT t, _ElemRight u) { t+u;} { return __ref() + std::forward<_ElemRight>(other); }
			template<class _ElemRight> FORCE_INLINE decltype(auto) operator-(_ElemRight&& other) const requires requires(__IdxT t, _ElemRight u) { t-u;} { return __ref() - std::forward<_ElemRight>(other); }
			template<class _ElemRight> FORCE_INLINE decltype(auto) operator*(_ElemRight&& other) const requires requires(__IdxT t, _ElemRight u) { t*u;} { return __ref() * std::forward<_ElemRight>(other); }
			template<class _ElemRight> FORCE_INLINE decltype(auto) operator/(_ElemRight&& other) const requires requires(__IdxT t, _ElemRight u) { t/u;} { return __ref() / std::forward<_ElemRight>(other); }
			template<class _ElemRight> FORCE_INLINE decltype(auto) operator%(_ElemRight&& other) const requires requires(__IdxT t, _ElemRight u) { t%u;} { return __ref() % std::forward<_ElemRight>(other); }
			template<class _ElemRight> FORCE_INLINE decltype(auto) operator&(_ElemRight&& other) const requires requires(__IdxT t, _ElemRight u) { t&u;} { return __ref() & std::forward<_ElemRight>(other); }
			template<class _ElemRight> FORCE_INLINE decltype(auto) operator|(_ElemRight&& other) const requires requires(__IdxT t, _ElemRight u) { t|u;} { return __ref() | std::forward<_ElemRight>(other); }
			template<class _ElemRight> FORCE_INLINE decltype(auto) operator^(_ElemRight&& other) const requires requires(__IdxT t, _ElemRight u) { t^u;} { return __ref() ^ std::forward<_ElemRight>(other); }
			template<class _ElemRight> FORCE_INLINE decltype(auto) operator<<(_ElemRight&& other) const requires requires(__IdxT t, _ElemRight u) { t<<u;} { return __ref() << std::forward<_ElemRight>(other); }
			template<class _ElemRight> FORCE_INLINE decltype(auto) operator>>(_ElemRight&& other) const requires requires(__IdxT t, _ElemRight u) { t>>u;} { return __ref() >> std::forward<_ElemRight>(other); }
			template<class... _ElemRight> FORCE_INLINE decltype(auto) _operator_subscript(_ElemRight&&... other) { return __ref().__ref()._operator_subscript(std::forward<_ElemRight>(other)...); }
			template<class... _ElemRight> FORCE_INLINE decltype(auto) _operator_subscript(_ElemRight&&... other) const { return __ref().__ref()._operator_subscript(std::forward<_ElemRight>(other)...); }
			template<class... Args> FORCE_INLINE decltype(auto) operator()(Args&&... other) { return __ref()(std::forward<Args>(other)...); }
			template<class... Args> FORCE_INLINE decltype(auto) operator()(Args&&... other) const { return __ref()(std::forward<Args>(other)...); }
			template<class Ch> friend FORCE_INLINE decltype(auto) operator<<(std::basic_ostream<Ch>& stream, const __IndexerAccessor_155<__IdxT>& elem) { return stream << elem.__ref(); }
			FORCE_INLINE decltype(auto) operator*() requires requires(__IdxT t) {*t;} { return *__ref(); }
			FORCE_INLINE decltype(auto) operator&() requires requires(__IdxT t) {&t;} { return &__ref(); }
			template<class _ElemRight> FORCE_INLINE bool operator==(const _ElemRight& other) const requires requires(__IdxT t, _ElemRight u) {t==u;} { return __ref() == other; }
			template<class _ElemRight> FORCE_INLINE bool operator!=(const _ElemRight& other) const requires requires(__IdxT t, _ElemRight u) {t!=u;} { return __ref() != other; }
			template<class _ElemRight> FORCE_INLINE bool operator<(const _ElemRight& other) const requires requires(__IdxT t, _ElemRight u) {t<u;} { return __ref() < other; }
			template<class _ElemRight> FORCE_INLINE bool operator<=(const _ElemRight& other) const requires requires(__IdxT t, _ElemRight u) {t<=u;} { return __ref() <= other; }
			template<class _ElemRight> FORCE_INLINE bool operator>(const _ElemRight& other) const requires requires(__IdxT t, _ElemRight u) {t>u;} { return __ref() > other; }
			template<class _ElemRight> FORCE_INLINE bool operator>=(const _ElemRight& other) const requires requires(__IdxT t, _ElemRight u) {t>=u;} { return __ref() >= other; }
			FORCE_INLINE explicit operator bool() const requires(!std::is_same_v<__IdxT,bool>) { return static_cast<bool>(__ref()); }
			
		};

		friend struct __IndexerAccessor_155<CppAdvance::f32>;
		public: inline void setAt(CppAdvance::i32 idx, const CppAdvance::f32& value);
		public: inline const CppAdvance::f32 getAt(CppAdvance::i32 idx);
		inline const CppAdvance::f32 getAt(CppAdvance::i32 idx) const;
		#line 155 "Collections.ast"
		public: inline auto _operator_subscript(CppAdvance::i32 idx)  -> __IndexerAccessor_155<CppAdvance::f32>;
		public: inline auto _operator_subscript(CppAdvance::i32 idx) const  -> const __IndexerAccessor_155<CppAdvance::f32>;
		public: inline constexpr const CppAdvance::f32 getAt(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3);
		inline constexpr const CppAdvance::f32 getAt(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3) const;
		#line 165 "Collections.ast"
		public: inline constexpr auto _operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3)  -> const CppAdvance::f32;
		public: inline constexpr auto _operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3) const  -> const CppAdvance::f32;
		#line 167 "Collections.ast"
		public: inline constexpr auto getX() const  -> const CppAdvance::f32;
		#line 171 "Collections.ast"
		public: inline constexpr static auto Method(CppAdvance::i32 x, CppAdvance::i32 y, CppAdvance::i32 z)  -> const CppAdvance::i32;
		#line 177 "Collections.ast"
		public: inline constexpr auto Reset()  -> void;
		#line 185 "Collections.ast"
		public: template<class U> inline constexpr auto TemplateMethod(U x, U y, U z)  -> const Coords;
		template <size_t I> friend auto& get(Vector3&);
		template <size_t I> friend const auto& get(const Vector3&);
		
	};
	template<> inline auto& get<0>(Vector3& t) { return t.x; }
	template<> inline const auto& get<0>(const Vector3& t) { return t.x; }
	template<> inline auto& get<1>(Vector3& t) { return t.y; }
	template<> inline const auto& get<1>(const Vector3& t) { return t.y; }
	template<> inline auto& get<2>(Vector3& t) { return t.z; }
	template<> inline const auto& get<2>(const Vector3& t) { return t.z; }
	
	
}
namespace std {
	template<> struct tuple_size<System::Application::Vector3> : integral_constant<size_t, 3> {}; 
	template<> struct tuple_element<0, System::Application::Vector3> { using type = decltype(std::declval<System::Application::Vector3>().__ref().x); };
	template<> struct tuple_element<1, System::Application::Vector3> { using type = decltype(std::declval<System::Application::Vector3>().__ref().y); };
	template<> struct tuple_element<2, System::Application::Vector3> { using type = decltype(std::declval<System::Application::Vector3>().__ref().z); };
	
}

namespace System::Application {
}
template<> inline constexpr bool CppAdvance::__details::cheapCopy<System::Application::BaseClass> = false;

namespace System::Application {
	#line 203 "Collections.ast"
	class BaseClass : public CppAdvance::ObjectRef {
		public: using __self = BaseClass;
		private: using ___super = CppAdvance::ObjectRef;
		public: using __class = __Class_BaseClass;
		private: friend class BaseClass__Unowned;
		friend class __Class_BaseClass;
		friend class BaseClass__Weak;
		public: using __strong_ref = BaseClass;
		public: using __unowned_ref = BaseClass__Unowned;
		public: using __weak_ref = BaseClass__Weak;
		public: FORCE_INLINE decltype(auto) __ref() const noexcept { return *reinterpret_cast<__class*>(_obj); }
		ADV_CLASS_FROM_PTR(BaseClass)
		public: inline BaseClass();
		ADV_CLASS_INIT(BaseClass)
		ADV_CLASS_STRONG_COMMON_CTORS(BaseClass)
		#define ADV_PROPERTY_SELF __class
		#define ADV_PROPERTY_SELF __self
		
	};
	#line 203 "Collections.ast"
	class BaseClass__Unowned : public CppAdvance::ObjectRef__Unowned {
		public: using __self = BaseClass;
		public: using __strong_ref = BaseClass;
		public: using __unowned_ref = BaseClass__Unowned;
		public: using __weak_ref = BaseClass__Weak;
		private: using ___super = CppAdvance::ObjectRef__Unowned;
		public: using __class = __Class_BaseClass;
		public: FORCE_INLINE decltype(auto) __ref() const noexcept { CppAdvance::UnownedCheck(_obj); return *reinterpret_cast<__class*>(_obj); }
		ADV_CLASS_FROM_PTR(BaseClass__Unowned)
		ADV_CLASS_UNOWNED_COMMON_CTORS(BaseClass__Unowned)
		
	};
	#line 203 "Collections.ast"
	class BaseClass__Weak : public CppAdvance::ObjectRef__Weak {
		public: using __self = BaseClass;
		public: using __strong_ref = BaseClass;
		public: using __unowned_ref = BaseClass__Unowned;
		public: using __weak_ref = BaseClass__Weak;
		private: using ___super = CppAdvance::ObjectRef__Weak;
		public: using __class = __Class_BaseClass;
		static constexpr bool __IS_ADV_NULLABLE = true;
		public: FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		ADV_CLASS_WEAK_FROM_PTR(BaseClass__Weak)
		ADV_CLASS_WEAK_COMMON_CTORS(BaseClass__Weak)
		#define ADV_PROPERTY_SELF __self
	};
	
	
}
namespace std {
	template<> struct tuple_size<System::Application::BaseClass> : integral_constant<size_t, 3> {}; 
	
}

namespace System::Application {
}
template<> inline constexpr bool CppAdvance::__details::cheapCopy<System::Application::VectorClass> = false;

namespace System::Application {
	#line 207 "Collections.ast"
	class VectorClass : public CppAdvance::ClassRefParent<BaseClass> {
		public: using __self = VectorClass;
		private: using ___super = CppAdvance::ClassRefParent<BaseClass>;
		public: using __class = __Class_VectorClass;
		private: friend class VectorClass__Unowned;
		friend class __Class_VectorClass;
		friend class VectorClass__Weak;
		public: using __strong_ref = VectorClass;
		public: using __unowned_ref = VectorClass__Unowned;
		public: using __weak_ref = VectorClass__Weak;
		public: FORCE_INLINE decltype(auto) __ref() const noexcept { return *reinterpret_cast<__class*>(_obj); }
		ADV_CLASS_FROM_PTR(VectorClass)
		private: VectorClass() = delete;
		VectorClass(__class*, InitTag) = delete;
		ADV_CLASS_STRONG_COMMON_CTORS(VectorClass)
		public: 
		class NestedClass; class NestedClass__Unowned; class NestedClass__Weak; class __Class_NestedClass;
		#line 244 "Collections.ast"
		class NestedClass : public CppAdvance::ObjectRef {
			public: using __self = NestedClass;
			private: using ___super = CppAdvance::ObjectRef;
			public: using __class = __Class_NestedClass;
			private: friend class NestedClass__Unowned;
			friend class __Class_NestedClass;
			friend class NestedClass__Weak;
			public: using __strong_ref = NestedClass;
			public: using __unowned_ref = NestedClass__Unowned;
			public: using __weak_ref = NestedClass__Weak;
			public: FORCE_INLINE decltype(auto) __ref() const noexcept { return *reinterpret_cast<__class*>(_obj); }
			ADV_CLASS_FROM_PTR(NestedClass)
			ADV_CLASS_INIT(NestedClass)
			ADV_CLASS_STRONG_COMMON_CTORS(NestedClass)
			#define ADV_PROPERTY_SELF __class
			#define ADV_PROPERTY_SELF __self
			#line 255 "Collections.ast"
			public: inline constexpr static decltype(auto) count(CppAdvance::i32 i) ;
			
		};
		#line 244 "Collections.ast"
		class NestedClass__Unowned : public CppAdvance::ObjectRef__Unowned {
			public: using __self = NestedClass;
			public: using __strong_ref = NestedClass;
			public: using __unowned_ref = NestedClass__Unowned;
			public: using __weak_ref = NestedClass__Weak;
			private: using ___super = CppAdvance::ObjectRef__Unowned;
			public: using __class = __Class_NestedClass;
			public: FORCE_INLINE decltype(auto) __ref() const noexcept { CppAdvance::UnownedCheck(_obj); return *reinterpret_cast<__class*>(_obj); }
			ADV_CLASS_FROM_PTR(NestedClass__Unowned)
			ADV_CLASS_UNOWNED_COMMON_CTORS(NestedClass__Unowned)
			
		};
		#line 244 "Collections.ast"
		class NestedClass__Weak : public CppAdvance::ObjectRef__Weak {
			public: using __self = NestedClass;
			public: using __strong_ref = NestedClass;
			public: using __unowned_ref = NestedClass__Unowned;
			public: using __weak_ref = NestedClass__Weak;
			private: using ___super = CppAdvance::ObjectRef__Weak;
			public: using __class = __Class_NestedClass;
			static constexpr bool __IS_ADV_NULLABLE = true;
			public: FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
			ADV_CLASS_WEAK_FROM_PTR(NestedClass__Weak)
			ADV_CLASS_WEAK_COMMON_CTORS(NestedClass__Weak)
			#define ADV_PROPERTY_SELF __self
		};
		
		public: 
		#line 244 "Collections.ast"
		class __Class_NestedClass : public CppAdvance::Object {
			public: using __self = NestedClass;
			private: using ___super = CppAdvance::Object;
			public: using __selfClass = __Class_NestedClass;
			friend class __self;
			friend class __self::__weak_ref;
			#define ADV_PROPERTY_SELF __selfClass
			public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
			#line 246 "Collections.ast"
			public: mutable CppAdvance::f32 x; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
			#line 247 "Collections.ast"
			public: mutable CppAdvance::f32 y; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
			#line 248 "Collections.ast"
			public: mutable CppAdvance::f32 z; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
			#line 250 "Collections.ast"
			public: inline constexpr __Class_NestedClass(CppAdvance::f32 x, CppAdvance::f32 y, CppAdvance::f32 z) noexcept;
			#line 255 "Collections.ast"
			public: inline constexpr static auto count(CppAdvance::i32 i)  -> const CppAdvance::i32;
			
#define ADV_PROPERTY_SELF __self
		};
		
		#line 244 "Collections.ast"
		ADV_CHECK_FOR_CONCRETE(NestedClass);
		
		public: static decltype(auto) getCount2();
		static void setCount2(const CppAdvance::i32& value);
		ADV_PROPERTY_GETTER_SETTER_STATIC(public, , Count2, public, getCount2, public, setCount2, CppAdvance::i32);
		public: static decltype(auto) getZERO();
		ADV_PROPERTY_GETTER_STATIC(public, , ZERO, getZERO, Vector3);
		#define ADV_PROPERTY_SELF __class
		#define ADV_PROPERTY_SELF __self
		#line 281 "Collections.ast"
		public: inline explicit operator CppAdvance::f32() const noexcept;
		#line 313 "Collections.ast"
		public: inline decltype(auto) _operator_subscript(CppAdvance::i32 idx) const  LIFETIMEBOUND;
		#line 314 "Collections.ast"
		public: inline decltype(auto) _operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3) const ;
		#line 320 "Collections.ast"
		public: inline constexpr static decltype(auto) Method(CppAdvance::i32 x, CppAdvance::i32 y, CppAdvance::i32 z) ;
		public: static constexpr decltype(auto) BYTES = CppAdvance::i32(24);
		public: using Coords = __ntuples::NamedTuple_6893f862d6c49683;
		friend class TestStruct;
		friend class __Class_TestStruct;
		template<class T> friend class TestStruct2;
		template<class T> friend class __Class_TestStruct2;
		friend const CppAdvance::i32 func3(CppAdvance::i32 x);
		
	};
	#line 207 "Collections.ast"
	class VectorClass__Unowned : public CppAdvance::ClassRefParentUnowned<BaseClass> {
		public: using __self = VectorClass;
		public: using __strong_ref = VectorClass;
		public: using __unowned_ref = VectorClass__Unowned;
		public: using __weak_ref = VectorClass__Weak;
		private: using ___super = CppAdvance::ClassRefParentUnowned<BaseClass>;
		public: using __class = __Class_VectorClass;
		public: FORCE_INLINE decltype(auto) __ref() const noexcept { CppAdvance::UnownedCheck(_obj); return *reinterpret_cast<__class*>(_obj); }
		ADV_CLASS_FROM_PTR(VectorClass__Unowned)
		ADV_CLASS_UNOWNED_COMMON_CTORS(VectorClass__Unowned)
		#line 281 "Collections.ast"
		public: inline explicit operator CppAdvance::f32() const noexcept;
		#line 313 "Collections.ast"
		public: inline decltype(auto) _operator_subscript(CppAdvance::i32 idx) const  LIFETIMEBOUND;
		#line 314 "Collections.ast"
		public: inline decltype(auto) _operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3) const ;
		
	};
	#line 207 "Collections.ast"
	class VectorClass__Weak : public CppAdvance::ClassRefParentWeak<BaseClass> {
		public: using __self = VectorClass;
		public: using __strong_ref = VectorClass;
		public: using __unowned_ref = VectorClass__Unowned;
		public: using __weak_ref = VectorClass__Weak;
		private: using ___super = CppAdvance::ClassRefParentWeak<BaseClass>;
		public: using __class = __Class_VectorClass;
		static constexpr bool __IS_ADV_NULLABLE = true;
		public: FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		ADV_CLASS_WEAK_FROM_PTR(VectorClass__Weak)
		ADV_CLASS_WEAK_COMMON_CTORS(VectorClass__Weak)
		#define ADV_PROPERTY_SELF __self
	};
	
	
}
template<> inline constexpr bool CppAdvance::__details::cheapCopy<System::Application::ConcreteVectorClass> = false;

namespace System::Application {
	#line 352 "Collections.ast"
	class ConcreteVectorClass : public CppAdvance::ClassRefParent<VectorClass> {
		public: using __self = ConcreteVectorClass;
		private: using ___super = CppAdvance::ClassRefParent<VectorClass>;
		public: using __class = __Class_ConcreteVectorClass;
		private: friend class ConcreteVectorClass__Unowned;
		friend class __Class_ConcreteVectorClass;
		friend class ConcreteVectorClass__Weak;
		public: using __strong_ref = ConcreteVectorClass;
		public: using __unowned_ref = ConcreteVectorClass__Unowned;
		public: using __weak_ref = ConcreteVectorClass__Weak;
		public: FORCE_INLINE decltype(auto) __ref() const noexcept { return *reinterpret_cast<__class*>(_obj); }
		ADV_CLASS_FROM_PTR(ConcreteVectorClass)
		public: inline ConcreteVectorClass();
		ADV_CLASS_INIT(ConcreteVectorClass)
		ADV_CLASS_STRONG_COMMON_CTORS(ConcreteVectorClass)
		#define ADV_PROPERTY_SELF __class
		public: ADV_PROPERTY_GETTER_STATIC(public, , Name2, getName2, CppAdvance::Str);
		#define ADV_PROPERTY_SELF __self
		#line 361 "Collections.ast"
		public: inline  ConcreteVectorClass(CppAdvance::i32 i) noexcept;
		#line 385 "Collections.ast"
		public: inline decltype(auto) operator+(const ConcreteVectorClass& other) const ;
		#line 388 "Collections.ast"
		public: inline decltype(auto) operator==(CppAdvance::In<__self> other) const ;
		#line 390 "Collections.ast"
		public: inline constexpr static decltype(auto) AbstractStaticMethod(CppAdvance::i32 i) ;
		public: using ElementType = CppAdvance::i32;
		
	};
	#line 352 "Collections.ast"
	class ConcreteVectorClass__Unowned : public CppAdvance::ClassRefParentUnowned<VectorClass> {
		public: using __self = ConcreteVectorClass;
		public: using __strong_ref = ConcreteVectorClass;
		public: using __unowned_ref = ConcreteVectorClass__Unowned;
		public: using __weak_ref = ConcreteVectorClass__Weak;
		private: using ___super = CppAdvance::ClassRefParentUnowned<VectorClass>;
		public: using __class = __Class_ConcreteVectorClass;
		public: FORCE_INLINE decltype(auto) __ref() const noexcept { CppAdvance::UnownedCheck(_obj); return *reinterpret_cast<__class*>(_obj); }
		ADV_CLASS_FROM_PTR(ConcreteVectorClass__Unowned)
		ADV_CLASS_UNOWNED_COMMON_CTORS(ConcreteVectorClass__Unowned)
		#line 385 "Collections.ast"
		public: inline decltype(auto) operator+(const ConcreteVectorClass& other) const ;
		#line 388 "Collections.ast"
		public: inline decltype(auto) operator==(CppAdvance::In<__self> other) const ;
		
	};
	#line 352 "Collections.ast"
	class ConcreteVectorClass__Weak : public CppAdvance::ClassRefParentWeak<VectorClass> {
		public: using __self = ConcreteVectorClass;
		public: using __strong_ref = ConcreteVectorClass;
		public: using __unowned_ref = ConcreteVectorClass__Unowned;
		public: using __weak_ref = ConcreteVectorClass__Weak;
		private: using ___super = CppAdvance::ClassRefParentWeak<VectorClass>;
		public: using __class = __Class_ConcreteVectorClass;
		static constexpr bool __IS_ADV_NULLABLE = true;
		public: FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		ADV_CLASS_WEAK_FROM_PTR(ConcreteVectorClass__Weak)
		ADV_CLASS_WEAK_COMMON_CTORS(ConcreteVectorClass__Weak)
		#define ADV_PROPERTY_SELF __self
	};
	
	
}
template<> inline constexpr bool CppAdvance::__details::cheapCopy<System::Application::Next> = false;

namespace System::Application {
	#line 399 "Collections.ast"
	class Next : public CppAdvance::ObjectRef {
		public: using __self = Next;
		private: using ___super = CppAdvance::ObjectRef;
		public: using __class = __Class_Next;
		private: friend class Next__Unowned;
		friend class __Class_Next;
		friend class Next__Weak;
		public: using __strong_ref = Next;
		public: using __unowned_ref = Next__Unowned;
		public: using __weak_ref = Next__Weak;
		public: FORCE_INLINE decltype(auto) __ref() const noexcept { return *reinterpret_cast<__class*>(_obj); }
		ADV_CLASS_FROM_PTR(Next)
		public: inline Next();
		ADV_CLASS_INIT(Next)
		ADV_CLASS_STRONG_COMMON_CTORS(Next)
		#define ADV_PROPERTY_SELF __class
		#define ADV_PROPERTY_SELF __self
		#line 416 "Collections.ast"
		public: inline decltype(auto) operator*() const ;
		
	};
	#line 399 "Collections.ast"
	class Next__Unowned : public CppAdvance::ObjectRef__Unowned {
		public: using __self = Next;
		public: using __strong_ref = Next;
		public: using __unowned_ref = Next__Unowned;
		public: using __weak_ref = Next__Weak;
		private: using ___super = CppAdvance::ObjectRef__Unowned;
		public: using __class = __Class_Next;
		public: FORCE_INLINE decltype(auto) __ref() const noexcept { CppAdvance::UnownedCheck(_obj); return *reinterpret_cast<__class*>(_obj); }
		ADV_CLASS_FROM_PTR(Next__Unowned)
		ADV_CLASS_UNOWNED_COMMON_CTORS(Next__Unowned)
		#line 416 "Collections.ast"
		public: inline decltype(auto) operator*() const ;
		
	};
	#line 399 "Collections.ast"
	class Next__Weak : public CppAdvance::ObjectRef__Weak {
		public: using __self = Next;
		public: using __strong_ref = Next;
		public: using __unowned_ref = Next__Unowned;
		public: using __weak_ref = Next__Weak;
		private: using ___super = CppAdvance::ObjectRef__Weak;
		public: using __class = __Class_Next;
		static constexpr bool __IS_ADV_NULLABLE = true;
		public: FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		ADV_CLASS_WEAK_FROM_PTR(Next__Weak)
		ADV_CLASS_WEAK_COMMON_CTORS(Next__Weak)
		#define ADV_PROPERTY_SELF __self
	};
	
	#line 425 "Collections.ast"
	using __extension_425_Next = Next;
	#line 426 "Collections.ast"
	inline constexpr auto TestInt(__extension_425_Next const& __this LIFETIMEBOUND, CppAdvance::i32 j)  -> const CppAdvance::i32;
	
	
}
template<> inline constexpr bool CppAdvance::__details::cheapCopy<System::Application::IMagicNumber> = false;

namespace System::Application {
	#line 430 "Collections.ast"
	template<class __AnyType> concept __HasMethodImplementation_a2e2f819fa3cd789 = requires(typename __AnyType::__class t) { {t.GetMagicNumber(std::declval<VectorClass>())} -> std::convertible_to<CppAdvance::f32>; }  || requires(typename __AnyType::__class t) { {GetMagicNumber(t, std::declval<VectorClass>())} -> std::convertible_to<CppAdvance::f32>; };
	#line 431 "Collections.ast"
	template<class __AnyType> concept __HasMethodImplementation_getaddd298886dbcfb6 = requires(typename __AnyType::__class t) { {t.getCount123()} -> std::convertible_to<CppAdvance::i32>; } || requires(typename __AnyType::__class t) { {getCount123(t)} -> std::convertible_to<CppAdvance::i32>; };
	namespace __vtables {
		#line 429 "Collections.ast"
		struct __vtable_IMagicNumber
		{
			using fn_a2e2f819fa3cd789 = const CppAdvance::f32(CppAdvance::Object*, CppAdvance::In<VectorClass> f);
			fn_a2e2f819fa3cd789* fnptr_a2e2f819fa3cd789;
			#line 430 "Collections.ast"
			template<class __AnyType> static const CppAdvance::f32 impl_a2e2f819fa3cd789(CppAdvance::Object* obj, CppAdvance::In<VectorClass> f) { ADV_EXPRESSION_BODY(ADV_UFCS(GetMagicNumber)(*static_cast<typename __AnyType::__class*>(obj), f)); }
			using fn_getCount123 = CppAdvance::i32(CppAdvance::Object*);
			fn_getCount123* fnptr_getCount123;
			#line 431 "Collections.ast"
			template<class __AnyType> static CppAdvance::i32 impl_getCount123(CppAdvance::Object* obj) { return ADV_UFCS(getCount123)(*static_cast<typename __AnyType::__class*>(obj)); }
			
		};
	}
	#line 429 "Collections.ast"
	template<class __AnyType> inline constexpr __vtables::__vtable_IMagicNumber __vtable_IMagicNumber_for = {&__vtables::__vtable_IMagicNumber::template impl_a2e2f819fa3cd789<__AnyType>
		, &__vtables::__vtable_IMagicNumber::template impl_getCount123<__AnyType>
		};
	#line 429 "Collections.ast"
	template<class __AnyType> concept __ImplementsInterface_IMagicNumber = __HasMethodImplementation_a2e2f819fa3cd789<__AnyType> && __HasMethodImplementation_getaddd298886dbcfb6<__AnyType>;
	#line 429 "Collections.ast"
	class IMagicNumber final : public CppAdvance::InterfaceRef {
		public: using __self = IMagicNumber;
		public: using __vtable = __vtables::__vtable_IMagicNumber;
		public: using __class = CppAdvance::Object;
		public: using ___super = CppAdvance::InterfaceRef;
		private: friend class IMagicNumber__Unowned;
		friend class IMagicNumber__Weak;
		public: using __strong_ref = __self;
		public: using __unowned_ref = IMagicNumber__Unowned;
		public: using __weak_ref = IMagicNumber__Weak;
		public: template<class __AnyType> static constexpr bool __ImplementsInterface = __ImplementsInterface_IMagicNumber<__AnyType>;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_STRONG_COMMON_CTORS(IMagicNumber);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, CppAdvance::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IMagicNumber(const __AnyType& value) : ___super(CppAdvance::GetObjectReference(&value)), _vtable{ CppAdvance::GetVTableFromInterface(&value) } 
		{
			CppAdvance::Retain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, CppAdvance::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IMagicNumber(__AnyType&& value) : ___super(CppAdvance::GetObjectReference(&value)), _vtable{ CppAdvance::GetVTableFromInterface(&value) } 
		{
			CppAdvance::ClearObjectReference((CppAdvance::ObjectRef*)&value);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, CppAdvance::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IMagicNumber& operator=(const __AnyType& value) { if (_obj) CppAdvance::Release(_obj); _obj = CppAdvance::GetObjectReference(&value); CppAdvance::Retain(_obj); _vtable = CppAdvance::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, CppAdvance::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IMagicNumber& operator=(__AnyType&& value) { if (_obj) CppAdvance::Release(_obj); _obj = CppAdvance::GetObjectReference(&value); _vtable = CppAdvance::GetVTableFromInterface(&value); CppAdvance::ClearObjectReference((CppAdvance::ObjectRef*)&value); return *this; } 
		public: template<class __AnyType> IMagicNumber(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			static_assert(__ImplementsInterface_IMagicNumber<std::decay_t<__AnyType>>,"Cannot initialize interface IMagicNumber from this type");
			if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(&value); CppAdvance::Retain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(&value); CppAdvance::Retain(_obj);
				_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value)); CppAdvance::Retain(_obj);
				_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<CppAdvance::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (CppAdvance::Object*)value.obj; _vtable = &__vtable_IMagicNumber_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IMagicNumber(__AnyType&& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			static_assert(__ImplementsInterface_IMagicNumber<std::decay_t<__AnyType>>,"Cannot initialize interface IMagicNumber from this type");
			if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(&value); CppAdvance::ClearObjectReference((CppAdvance::ObjectRef*)&value); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(&value); CppAdvance::ClearObjectReference((CppAdvance::ObjectRef*)&value);
				_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value)); CppAdvance::Retain(_obj);
				_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<CppAdvance::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (CppAdvance::Object*)value.obj; _vtable = &__vtable_IMagicNumber_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::__self> requires std::is_base_of_v<CppAdvance::Object, std::decay_t<__AnyType>> IMagicNumber(__AnyType&& value) : ___super((CppAdvance::Object*)&value), _vtable{ &__vtable_IMagicNumber_for<__FixedType> } { static_assert(__ImplementsInterface_IMagicNumber<__FixedType>, "Cannot initialize interface IMagicNumber from this type"); CppAdvance::Retain(_obj); }
		public: template<class __AnyType> IMagicNumber& operator=(const __AnyType& value) {
			static_assert(__ImplementsInterface_IMagicNumber<std::decay_t<__AnyType>>,"Cannot initialize interface IMagicNumber from this type");
			if (_obj) CppAdvance::Release(_obj);
			if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(&value); CppAdvance::Retain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(&value); CppAdvance::Retain(_obj);
				_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value)); CppAdvance::Retain(_obj);
				_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<CppAdvance::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (CppAdvance::Object*)value.obj; _vtable = &__vtable_IMagicNumber_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IMagicNumber& operator=(__AnyType&& value) {
			static_assert(__ImplementsInterface_IMagicNumber<std::decay_t<__AnyType>>,"Cannot initialize interface IMagicNumber from this type");
			if (_obj) CppAdvance::Release(_obj);
			if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(&value); CppAdvance::ClearObjectReference((CppAdvance::ObjectRef*)&value); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(&value); CppAdvance::ClearObjectReference((CppAdvance::ObjectRef*)&value);
				_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value)); CppAdvance::Retain(_obj);
				_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<CppAdvance::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (CppAdvance::Object*)value.obj; _vtable = &__vtable_IMagicNumber_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::__self> requires std::is_base_of_v<CppAdvance::Object, std::decay_t<__AnyType>> IMagicNumber& operator=(__AnyType&& value) { static_assert(__ImplementsInterface_IMagicNumber<__FixedType>, "Cannot initialize interface IMagicNumber from this type"); 
 		if (_obj) CppAdvance::Release(_obj); _obj = (CppAdvance::Object*)&value; CppAdvance::Retain(_obj); 
		_vtable = &__vtable_IMagicNumber_for<__FixedType>; return *this; }
		
	};
	class IMagicNumber__Unowned final : public CppAdvance::InterfaceRef__Unowned {
		public: using __self = IMagicNumber__Unowned;
		public: using __vtable = __vtables::__vtable_IMagicNumber;
		public: using __class = CppAdvance::Object;
		public: using ___super = CppAdvance::InterfaceRef__Unowned;
		private: friend class IMagicNumber;
		public: using __strong_ref = IMagicNumber;
		public: using __unowned_ref = __self;
		public: using __weak_ref = IMagicNumber__Weak;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { UnownedCheck(_obj); return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { UnownedCheck(_obj); return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_UNOWNED_COMMON_CTORS(IMagicNumber__Unowned);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, CppAdvance::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IMagicNumber__Unowned(const __AnyType& value) : ___super(CppAdvance::GetObjectReference(&value)), _vtable{ CppAdvance::GetVTableFromInterface(&value) } 
		{
			CppAdvance::UnownedRetain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, CppAdvance::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IMagicNumber__Unowned& operator=(const __AnyType& value) { if (_obj) CppAdvance::UnownedRelease(_obj); _obj = CppAdvance::GetObjectReference(&value); CppAdvance::UnownedRetain(_obj); _vtable = CppAdvance::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires __ImplementsInterface_IMagicNumber<__AnyType> IMagicNumber__Unowned(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReferenceFromInterface(&value); CppAdvance::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(&value); CppAdvance::UnownedRetain(_obj);
				_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value)); CppAdvance::UnownedRetain(_obj);
				_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_IMagicNumber<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> IMagicNumber__Unowned(__AnyType&& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReferenceFromInterface(&value); CppAdvance::UnownedRetain(_obj);if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(&value); CppAdvance::UnownedRetain(_obj);
				_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value)); CppAdvance::ClearObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value));
				_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_IMagicNumber<__AnyType> IMagicNumber__Unowned& operator=(const __AnyType& value) {
			if (_obj) CppAdvance::Release(_obj);
			if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReferenceFromInterface(&value); CppAdvance::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(&value); CppAdvance::UnownedRetain(_obj);
				_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value)); CppAdvance::UnownedRetain(_obj);
				_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		public: template<class __AnyType> requires __ImplementsInterface_IMagicNumber<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> IMagicNumber__Unowned& operator=(__AnyType&& value) {
			if (_obj) CppAdvance::Release(_obj);
			if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReferenceFromInterface(&value); CppAdvance::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(&value); CppAdvance::UnownedRetain(_obj);
				_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value)); CppAdvance::ClearObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value));
				_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	class IMagicNumber__Weak final : public CppAdvance::ObjectRef__Weak {
		public: using __self = IMagicNumber__Weak;
		public: using __vtable = __vtables::__vtable_IMagicNumber;
		public: using __class = CppAdvance::Object;
		public: using ___super = CppAdvance::ObjectRef__Weak;
		private: friend class IMagicNumber;
		public: using __strong_ref = IMagicNumber;
		public: using __unowned_ref = IMagicNumber__Unowned;
		public: using __weak_ref = __self;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_WEAK_COMMON_CTORS(IMagicNumber__Weak);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, CppAdvance::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IMagicNumber__Weak(const __AnyType& value) : ___super(formWeakRef(CppAdvance::GetObjectReferenceFromInterface(&value))), _vtable{ CppAdvance::GetVTableFromInterface(&value) } 
		{}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, CppAdvance::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IMagicNumber__Weak& operator=(const __AnyType& value) { if (_obj) _obj->decrementWeak(); _obj = formWeakRef(CppAdvance::GetObjectReferenceFromInterface(&value)); _vtable = CppAdvance::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires __ImplementsInterface_IMagicNumber<__AnyType> IMagicNumber__Weak(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(CppAdvance::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(CppAdvance::GetObjectReference(&value)); 
				_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_IMagicNumber<__AnyType> IMagicNumber__Weak& operator=(const __AnyType& value) {
			if (_obj) _obj->decrementWeak();
			if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(CppAdvance::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(CppAdvance::GetObjectReference(&value)); 
				_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, CppAdvance::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IMagicNumber::__vtable> FORCE_INLINE const CppAdvance::f32 GetMagicNumber(const __AnyInterface& iface, CppAdvance::In<VectorClass> f)  { ADV_EXPRESSION_BODY(CppAdvance::GetVTableFromInterface(&iface)->fnptr_a2e2f819fa3cd789(CppAdvance::GetObjectReferenceFromInterface(&iface), f)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, CppAdvance::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IMagicNumber::__vtable> FORCE_INLINE const CppAdvance::i32 getCount123(const __AnyInterface& iface) { return CppAdvance::GetVTableFromInterface(&iface)->fnptr_getCount123(CppAdvance::GetObjectReferenceFromInterface(&iface)); }
	
	
}
template<> inline constexpr bool CppAdvance::__details::cheapCopy<System::Application::IResettable> = false;

namespace System::Application {
	#line 435 "Collections.ast"
	template<class __AnyType> concept __HasMethodImplementation_565bebff34b81aa1 = requires(typename __AnyType::__class t) { {t.Reset()} -> std::same_as<void>; }  || requires(typename __AnyType::__class t) { {Reset(t)} -> std::same_as<void>; };
	namespace __vtables {
		#line 434 "Collections.ast"
		struct __vtable_IResettable
		{
			using fn_565bebff34b81aa1 = void(CppAdvance::Object*);
			fn_565bebff34b81aa1* fnptr_565bebff34b81aa1;
			#line 435 "Collections.ast"
			template<class __AnyType> static void impl_565bebff34b81aa1(CppAdvance::Object* obj) { ADV_EXPRESSION_BODY(ADV_UFCS(Reset)(*static_cast<typename __AnyType::__class*>(obj))); }
			
		};
	}
	#line 434 "Collections.ast"
	template<class __AnyType> inline constexpr __vtables::__vtable_IResettable __vtable_IResettable_for = {&__vtables::__vtable_IResettable::template impl_565bebff34b81aa1<__AnyType>
		};
	#line 434 "Collections.ast"
	template<class __AnyType> concept __ImplementsInterface_IResettable = __HasMethodImplementation_565bebff34b81aa1<__AnyType>;
	#line 434 "Collections.ast"
	class IResettable final : public CppAdvance::InterfaceRef {
		public: using __self = IResettable;
		public: using __vtable = __vtables::__vtable_IResettable;
		public: using __class = CppAdvance::Object;
		public: using ___super = CppAdvance::InterfaceRef;
		private: friend class IResettable__Unowned;
		friend class IResettable__Weak;
		public: using __strong_ref = __self;
		public: using __unowned_ref = IResettable__Unowned;
		public: using __weak_ref = IResettable__Weak;
		public: template<class __AnyType> static constexpr bool __ImplementsInterface = __ImplementsInterface_IResettable<__AnyType>;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_STRONG_COMMON_CTORS(IResettable);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, CppAdvance::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IResettable(const __AnyType& value) : ___super(CppAdvance::GetObjectReference(&value)), _vtable{ CppAdvance::GetVTableFromInterface(&value) } 
		{
			CppAdvance::Retain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, CppAdvance::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IResettable(__AnyType&& value) : ___super(CppAdvance::GetObjectReference(&value)), _vtable{ CppAdvance::GetVTableFromInterface(&value) } 
		{
			CppAdvance::ClearObjectReference((CppAdvance::ObjectRef*)&value);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, CppAdvance::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IResettable& operator=(const __AnyType& value) { if (_obj) CppAdvance::Release(_obj); _obj = CppAdvance::GetObjectReference(&value); CppAdvance::Retain(_obj); _vtable = CppAdvance::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, CppAdvance::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IResettable& operator=(__AnyType&& value) { if (_obj) CppAdvance::Release(_obj); _obj = CppAdvance::GetObjectReference(&value); _vtable = CppAdvance::GetVTableFromInterface(&value); CppAdvance::ClearObjectReference((CppAdvance::ObjectRef*)&value); return *this; } 
		public: template<class __AnyType> IResettable(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			static_assert(__ImplementsInterface_IResettable<std::decay_t<__AnyType>>,"Cannot initialize interface IResettable from this type");
			if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(&value); CppAdvance::Retain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(&value); CppAdvance::Retain(_obj);
				_vtable = &__vtable_IResettable_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value)); CppAdvance::Retain(_obj);
				_vtable = &__vtable_IResettable_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<CppAdvance::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IResettable_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (CppAdvance::Object*)value.obj; _vtable = &__vtable_IResettable_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IResettable(__AnyType&& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			static_assert(__ImplementsInterface_IResettable<std::decay_t<__AnyType>>,"Cannot initialize interface IResettable from this type");
			if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(&value); CppAdvance::ClearObjectReference((CppAdvance::ObjectRef*)&value); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(&value); CppAdvance::ClearObjectReference((CppAdvance::ObjectRef*)&value);
				_vtable = &__vtable_IResettable_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value)); CppAdvance::Retain(_obj);
				_vtable = &__vtable_IResettable_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<CppAdvance::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IResettable_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (CppAdvance::Object*)value.obj; _vtable = &__vtable_IResettable_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::__self> requires std::is_base_of_v<CppAdvance::Object, std::decay_t<__AnyType>> IResettable(__AnyType&& value) : ___super((CppAdvance::Object*)&value), _vtable{ &__vtable_IResettable_for<__FixedType> } { static_assert(__ImplementsInterface_IResettable<__FixedType>, "Cannot initialize interface IResettable from this type"); CppAdvance::Retain(_obj); }
		public: template<class __AnyType> IResettable& operator=(const __AnyType& value) {
			static_assert(__ImplementsInterface_IResettable<std::decay_t<__AnyType>>,"Cannot initialize interface IResettable from this type");
			if (_obj) CppAdvance::Release(_obj);
			if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(&value); CppAdvance::Retain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(&value); CppAdvance::Retain(_obj);
				_vtable = &__vtable_IResettable_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value)); CppAdvance::Retain(_obj);
				_vtable = &__vtable_IResettable_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<CppAdvance::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IResettable_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (CppAdvance::Object*)value.obj; _vtable = &__vtable_IResettable_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IResettable& operator=(__AnyType&& value) {
			static_assert(__ImplementsInterface_IResettable<std::decay_t<__AnyType>>,"Cannot initialize interface IResettable from this type");
			if (_obj) CppAdvance::Release(_obj);
			if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(&value); CppAdvance::ClearObjectReference((CppAdvance::ObjectRef*)&value); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(&value); CppAdvance::ClearObjectReference((CppAdvance::ObjectRef*)&value);
				_vtable = &__vtable_IResettable_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value)); CppAdvance::Retain(_obj);
				_vtable = &__vtable_IResettable_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<CppAdvance::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IResettable_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (CppAdvance::Object*)value.obj; _vtable = &__vtable_IResettable_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::__self> requires std::is_base_of_v<CppAdvance::Object, std::decay_t<__AnyType>> IResettable& operator=(__AnyType&& value) { static_assert(__ImplementsInterface_IResettable<__FixedType>, "Cannot initialize interface IResettable from this type"); 
 		if (_obj) CppAdvance::Release(_obj); _obj = (CppAdvance::Object*)&value; CppAdvance::Retain(_obj); 
		_vtable = &__vtable_IResettable_for<__FixedType>; return *this; }
		
	};
	class IResettable__Unowned final : public CppAdvance::InterfaceRef__Unowned {
		public: using __self = IResettable__Unowned;
		public: using __vtable = __vtables::__vtable_IResettable;
		public: using __class = CppAdvance::Object;
		public: using ___super = CppAdvance::InterfaceRef__Unowned;
		private: friend class IResettable;
		public: using __strong_ref = IResettable;
		public: using __unowned_ref = __self;
		public: using __weak_ref = IResettable__Weak;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { UnownedCheck(_obj); return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { UnownedCheck(_obj); return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_UNOWNED_COMMON_CTORS(IResettable__Unowned);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, CppAdvance::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IResettable__Unowned(const __AnyType& value) : ___super(CppAdvance::GetObjectReference(&value)), _vtable{ CppAdvance::GetVTableFromInterface(&value) } 
		{
			CppAdvance::UnownedRetain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, CppAdvance::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IResettable__Unowned& operator=(const __AnyType& value) { if (_obj) CppAdvance::UnownedRelease(_obj); _obj = CppAdvance::GetObjectReference(&value); CppAdvance::UnownedRetain(_obj); _vtable = CppAdvance::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires __ImplementsInterface_IResettable<__AnyType> IResettable__Unowned(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReferenceFromInterface(&value); CppAdvance::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(&value); CppAdvance::UnownedRetain(_obj);
				_vtable = &__vtable_IResettable_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value)); CppAdvance::UnownedRetain(_obj);
				_vtable = &__vtable_IResettable_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_IResettable<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> IResettable__Unowned(__AnyType&& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReferenceFromInterface(&value); CppAdvance::UnownedRetain(_obj);if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(&value); CppAdvance::UnownedRetain(_obj);
				_vtable = &__vtable_IResettable_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value)); CppAdvance::ClearObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value));
				_vtable = &__vtable_IResettable_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_IResettable<__AnyType> IResettable__Unowned& operator=(const __AnyType& value) {
			if (_obj) CppAdvance::Release(_obj);
			if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReferenceFromInterface(&value); CppAdvance::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(&value); CppAdvance::UnownedRetain(_obj);
				_vtable = &__vtable_IResettable_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value)); CppAdvance::UnownedRetain(_obj);
				_vtable = &__vtable_IResettable_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		public: template<class __AnyType> requires __ImplementsInterface_IResettable<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> IResettable__Unowned& operator=(__AnyType&& value) {
			if (_obj) CppAdvance::Release(_obj);
			if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReferenceFromInterface(&value); CppAdvance::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(&value); CppAdvance::UnownedRetain(_obj);
				_vtable = &__vtable_IResettable_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value)); CppAdvance::ClearObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value));
				_vtable = &__vtable_IResettable_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	class IResettable__Weak final : public CppAdvance::ObjectRef__Weak {
		public: using __self = IResettable__Weak;
		public: using __vtable = __vtables::__vtable_IResettable;
		public: using __class = CppAdvance::Object;
		public: using ___super = CppAdvance::ObjectRef__Weak;
		private: friend class IResettable;
		public: using __strong_ref = IResettable;
		public: using __unowned_ref = IResettable__Unowned;
		public: using __weak_ref = __self;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_WEAK_COMMON_CTORS(IResettable__Weak);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, CppAdvance::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IResettable__Weak(const __AnyType& value) : ___super(formWeakRef(CppAdvance::GetObjectReferenceFromInterface(&value))), _vtable{ CppAdvance::GetVTableFromInterface(&value) } 
		{}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, CppAdvance::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IResettable__Weak& operator=(const __AnyType& value) { if (_obj) _obj->decrementWeak(); _obj = formWeakRef(CppAdvance::GetObjectReferenceFromInterface(&value)); _vtable = CppAdvance::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires __ImplementsInterface_IResettable<__AnyType> IResettable__Weak(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(CppAdvance::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(CppAdvance::GetObjectReference(&value)); 
				_vtable = &__vtable_IResettable_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_IResettable<__AnyType> IResettable__Weak& operator=(const __AnyType& value) {
			if (_obj) _obj->decrementWeak();
			if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(CppAdvance::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(CppAdvance::GetObjectReference(&value)); 
				_vtable = &__vtable_IResettable_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, CppAdvance::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IResettable::__vtable> FORCE_INLINE void Reset(const __AnyInterface& iface)  { ADV_EXPRESSION_BODY(CppAdvance::GetVTableFromInterface(&iface)->fnptr_565bebff34b81aa1(CppAdvance::GetObjectReferenceFromInterface(&iface))); }
	
	
}
template<> inline constexpr bool CppAdvance::__details::cheapCopy<System::Application::IInterface> = false;

namespace System::Application {
	#line 444 "Collections.ast"
	template<class __AnyType> concept __HasMethodImplementation_fbc51d6746c8ca94 = requires(typename __AnyType::__class t) { {t.operator+(std::declval<ConcreteVectorClass>())} -> std::convertible_to<ConcreteVectorClass>; }  || requires(typename __AnyType::__class t) { {operator+(t, std::declval<ConcreteVectorClass>())} -> std::convertible_to<ConcreteVectorClass>; };
	#line 448 "Collections.ast"
	template<class __AnyType> concept __HasMethodImplementation_8addcb5f9470873d = requires(typename __AnyType::__class t) { {t.getAt(std::declval<CppAdvance::i32>())} -> std::convertible_to<CppAdvance::f32&>; }  || requires(typename __AnyType::__class t) { {_operator_subscript(t, std::declval<CppAdvance::i32>())} -> std::convertible_to<CppAdvance::f32&>; };
	#line 450 "Collections.ast"
	template<class __AnyType> concept __HasMethodImplementation_5aa06689d687e755 = requires { {__AnyType::__class::AbstractStaticMethod(std::declval<CppAdvance::i32>())} -> std::convertible_to<CppAdvance::i32>; }  || requires { { __static_AbstractStaticMethod<__AnyType>(std::declval<CppAdvance::i32>())} -> std::convertible_to<CppAdvance::i32>; };
	#line 446 "Collections.ast"
	template<class __AnyType> concept __HasMethodImplementation_getfd864fe31949d59b = requires(typename __AnyType::__class t) { {t.getName()} -> std::convertible_to<CppAdvance::Str>; } || requires(typename __AnyType::__class t) { {getName(t)} -> std::convertible_to<CppAdvance::Str>; };
	#line 447 "Collections.ast"
	template<class __AnyType> concept __HasMethodImplementation_get150f67e3f8760e2b = requires { __AnyType::Name2; } || requires { __static_getName2<__AnyType>(); };
	#line 440 "Collections.ast"
	template<class __AnyType> concept __HasAssociatedType_639db4f5c0c18988 = requires { typename __AnyType::ElementType; };
	#line 438 "Collections.ast"
	ADV_CHECK_INTERFACE(IMagicNumber, IMagicNumber);
	#line 438 "Collections.ast"
	ADV_CHECK_INTERFACE(IResettable, IResettable);
	namespace __vtables {
		#line 438 "Collections.ast"
		struct __vtable_IInterface : public IMagicNumber::__vtable, public IResettable::__vtable
		{
			using fn_fbc51d6746c8ca94 = const ConcreteVectorClass(CppAdvance::Object*, const ConcreteVectorClass& f);
			fn_fbc51d6746c8ca94* fnptr_fbc51d6746c8ca94;
			#line 444 "Collections.ast"
			template<class __AnyType> static const ConcreteVectorClass impl_fbc51d6746c8ca94(CppAdvance::Object* obj, const ConcreteVectorClass& f) { ADV_EXPRESSION_BODY(ADV_UFCS(operator+)(*static_cast<typename __AnyType::__class*>(obj), f)); }
			using fn_8addcb5f9470873d = CppAdvance::f32&(CppAdvance::Object*, CppAdvance::i32 i);
			fn_8addcb5f9470873d* fnptr_8addcb5f9470873d;
			#line 448 "Collections.ast"
			template<class __AnyType> static CppAdvance::f32& impl_8addcb5f9470873d(CppAdvance::Object* obj, CppAdvance::i32 i) { return ADV_UFCS(getAt)(*static_cast<typename __AnyType::__class*>(obj), i); }
			using fn_getName = CppAdvance::Str(CppAdvance::Object*);
			fn_getName* fnptr_getName;
			#line 446 "Collections.ast"
			template<class __AnyType> static CppAdvance::Str impl_getName(CppAdvance::Object* obj) { return ADV_UFCS(getName)(*static_cast<typename __AnyType::__class*>(obj)); }
			
		};
	}
	#line 438 "Collections.ast"
	template<class __AnyType> inline constexpr __vtables::__vtable_IInterface __vtable_IInterface_for = {__vtable_IMagicNumber_for<__AnyType>
		, __vtable_IResettable_for<__AnyType>
		, &__vtables::__vtable_IInterface::template impl_fbc51d6746c8ca94<__AnyType>
		, &__vtables::__vtable_IInterface::template impl_8addcb5f9470873d<__AnyType>
		, &__vtables::__vtable_IInterface::template impl_getName<__AnyType>
		};
	#line 438 "Collections.ast"
	template<class __AnyType> concept __ImplementsInterface_IInterface = __ImplementsInterface_IMagicNumber<__AnyType> && __ImplementsInterface_IResettable<__AnyType> && __HasMethodImplementation_fbc51d6746c8ca94<__AnyType> && __HasMethodImplementation_8addcb5f9470873d<__AnyType> && __HasMethodImplementation_5aa06689d687e755<__AnyType> && __HasMethodImplementation_getfd864fe31949d59b<__AnyType> && __HasMethodImplementation_get150f67e3f8760e2b<__AnyType> && __HasAssociatedType_639db4f5c0c18988<__AnyType>;
	#line 438 "Collections.ast"
	class IInterface final : public CppAdvance::InterfaceRef {
		public: using __self = IInterface;
		public: using __vtable = __vtables::__vtable_IInterface;
		public: using __class = CppAdvance::Object;
		public: using ___super = CppAdvance::InterfaceRef;
		private: friend class IInterface__Unowned;
		friend class IInterface__Weak;
		public: using __strong_ref = __self;
		public: using __unowned_ref = IInterface__Unowned;
		public: using __weak_ref = IInterface__Weak;
		public: template<class __AnyType> static constexpr bool __ImplementsInterface = __ImplementsInterface_IInterface<__AnyType>;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_STRONG_COMMON_CTORS(IInterface);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, CppAdvance::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IInterface(const __AnyType& value) : ___super(CppAdvance::GetObjectReference(&value)), _vtable{ CppAdvance::GetVTableFromInterface(&value) } 
		{
			CppAdvance::Retain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, CppAdvance::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IInterface(__AnyType&& value) : ___super(CppAdvance::GetObjectReference(&value)), _vtable{ CppAdvance::GetVTableFromInterface(&value) } 
		{
			CppAdvance::ClearObjectReference((CppAdvance::ObjectRef*)&value);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, CppAdvance::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IInterface& operator=(const __AnyType& value) { if (_obj) CppAdvance::Release(_obj); _obj = CppAdvance::GetObjectReference(&value); CppAdvance::Retain(_obj); _vtable = CppAdvance::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, CppAdvance::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IInterface& operator=(__AnyType&& value) { if (_obj) CppAdvance::Release(_obj); _obj = CppAdvance::GetObjectReference(&value); _vtable = CppAdvance::GetVTableFromInterface(&value); CppAdvance::ClearObjectReference((CppAdvance::ObjectRef*)&value); return *this; } 
		public: template<class __AnyType> IInterface(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			static_assert(__ImplementsInterface_IInterface<std::decay_t<__AnyType>>,"Cannot initialize interface IInterface from this type");
			if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(&value); CppAdvance::Retain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(&value); CppAdvance::Retain(_obj);
				_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value)); CppAdvance::Retain(_obj);
				_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<CppAdvance::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (CppAdvance::Object*)value.obj; _vtable = &__vtable_IInterface_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IInterface(__AnyType&& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			static_assert(__ImplementsInterface_IInterface<std::decay_t<__AnyType>>,"Cannot initialize interface IInterface from this type");
			if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(&value); CppAdvance::ClearObjectReference((CppAdvance::ObjectRef*)&value); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(&value); CppAdvance::ClearObjectReference((CppAdvance::ObjectRef*)&value);
				_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value)); CppAdvance::Retain(_obj);
				_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<CppAdvance::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (CppAdvance::Object*)value.obj; _vtable = &__vtable_IInterface_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::__self> requires std::is_base_of_v<CppAdvance::Object, std::decay_t<__AnyType>> IInterface(__AnyType&& value) : ___super((CppAdvance::Object*)&value), _vtable{ &__vtable_IInterface_for<__FixedType> } { static_assert(__ImplementsInterface_IInterface<__FixedType>, "Cannot initialize interface IInterface from this type"); CppAdvance::Retain(_obj); }
		public: template<class __AnyType> IInterface& operator=(const __AnyType& value) {
			static_assert(__ImplementsInterface_IInterface<std::decay_t<__AnyType>>,"Cannot initialize interface IInterface from this type");
			if (_obj) CppAdvance::Release(_obj);
			if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(&value); CppAdvance::Retain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(&value); CppAdvance::Retain(_obj);
				_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value)); CppAdvance::Retain(_obj);
				_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<CppAdvance::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (CppAdvance::Object*)value.obj; _vtable = &__vtable_IInterface_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IInterface& operator=(__AnyType&& value) {
			static_assert(__ImplementsInterface_IInterface<std::decay_t<__AnyType>>,"Cannot initialize interface IInterface from this type");
			if (_obj) CppAdvance::Release(_obj);
			if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(&value); CppAdvance::ClearObjectReference((CppAdvance::ObjectRef*)&value); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(&value); CppAdvance::ClearObjectReference((CppAdvance::ObjectRef*)&value);
				_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value)); CppAdvance::Retain(_obj);
				_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<CppAdvance::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (CppAdvance::Object*)value.obj; _vtable = &__vtable_IInterface_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::__self> requires std::is_base_of_v<CppAdvance::Object, std::decay_t<__AnyType>> IInterface& operator=(__AnyType&& value) { static_assert(__ImplementsInterface_IInterface<__FixedType>, "Cannot initialize interface IInterface from this type"); 
 		if (_obj) CppAdvance::Release(_obj); _obj = (CppAdvance::Object*)&value; CppAdvance::Retain(_obj); 
		_vtable = &__vtable_IInterface_for<__FixedType>; return *this; }
		#line 439 "Collections.ast"
		static constexpr auto VERSION = CppAdvance::i32(12345);
		#line 441 "Collections.ast"
		using SomeInt = CppAdvance::i32;
		#line 443 "Collections.ast"
		public: const CppAdvance::f32 DefaultMethod(CppAdvance::In<VectorClass> f) const ;
		#line 451 "Collections.ast"
		public: static const CppAdvance::i32 SomeStaticMethod(CppAdvance::i32 i) ;
		
	};
	class IInterface__Unowned final : public CppAdvance::InterfaceRef__Unowned {
		public: using __self = IInterface__Unowned;
		public: using __vtable = __vtables::__vtable_IInterface;
		public: using __class = CppAdvance::Object;
		public: using ___super = CppAdvance::InterfaceRef__Unowned;
		private: friend class IInterface;
		public: using __strong_ref = IInterface;
		public: using __unowned_ref = __self;
		public: using __weak_ref = IInterface__Weak;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { UnownedCheck(_obj); return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { UnownedCheck(_obj); return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_UNOWNED_COMMON_CTORS(IInterface__Unowned);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, CppAdvance::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IInterface__Unowned(const __AnyType& value) : ___super(CppAdvance::GetObjectReference(&value)), _vtable{ CppAdvance::GetVTableFromInterface(&value) } 
		{
			CppAdvance::UnownedRetain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, CppAdvance::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IInterface__Unowned& operator=(const __AnyType& value) { if (_obj) CppAdvance::UnownedRelease(_obj); _obj = CppAdvance::GetObjectReference(&value); CppAdvance::UnownedRetain(_obj); _vtable = CppAdvance::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires __ImplementsInterface_IInterface<__AnyType> IInterface__Unowned(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReferenceFromInterface(&value); CppAdvance::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(&value); CppAdvance::UnownedRetain(_obj);
				_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value)); CppAdvance::UnownedRetain(_obj);
				_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_IInterface<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> IInterface__Unowned(__AnyType&& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReferenceFromInterface(&value); CppAdvance::UnownedRetain(_obj);if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(&value); CppAdvance::UnownedRetain(_obj);
				_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value)); CppAdvance::ClearObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value));
				_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_IInterface<__AnyType> IInterface__Unowned& operator=(const __AnyType& value) {
			if (_obj) CppAdvance::Release(_obj);
			if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReferenceFromInterface(&value); CppAdvance::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(&value); CppAdvance::UnownedRetain(_obj);
				_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value)); CppAdvance::UnownedRetain(_obj);
				_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		public: template<class __AnyType> requires __ImplementsInterface_IInterface<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> IInterface__Unowned& operator=(__AnyType&& value) {
			if (_obj) CppAdvance::Release(_obj);
			if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReferenceFromInterface(&value); CppAdvance::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(&value); CppAdvance::UnownedRetain(_obj);
				_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = CppAdvance::GetObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value)); CppAdvance::ClearObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value));
				_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	class IInterface__Weak final : public CppAdvance::ObjectRef__Weak {
		public: using __self = IInterface__Weak;
		public: using __vtable = __vtables::__vtable_IInterface;
		public: using __class = CppAdvance::Object;
		public: using ___super = CppAdvance::ObjectRef__Weak;
		private: friend class IInterface;
		public: using __strong_ref = IInterface;
		public: using __unowned_ref = IInterface__Unowned;
		public: using __weak_ref = __self;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_WEAK_COMMON_CTORS(IInterface__Weak);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, CppAdvance::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IInterface__Weak(const __AnyType& value) : ___super(formWeakRef(CppAdvance::GetObjectReferenceFromInterface(&value))), _vtable{ CppAdvance::GetVTableFromInterface(&value) } 
		{}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, CppAdvance::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IInterface__Weak& operator=(const __AnyType& value) { if (_obj) _obj->decrementWeak(); _obj = formWeakRef(CppAdvance::GetObjectReferenceFromInterface(&value)); _vtable = CppAdvance::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires __ImplementsInterface_IInterface<__AnyType> IInterface__Weak(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(CppAdvance::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(CppAdvance::GetObjectReference(&value)); 
				_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_IInterface<__AnyType> IInterface__Weak& operator=(const __AnyType& value) {
			if (_obj) _obj->decrementWeak();
			if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(CppAdvance::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(CppAdvance::GetObjectReference(&value)); 
				_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, CppAdvance::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IInterface::__vtable> FORCE_INLINE const CppAdvance::f32 DefaultMethod(const __AnyInterface& iface, CppAdvance::In<VectorClass> f)  { ADV_EXPRESSION_BODY(reinterpret_cast<const IInterface*>(&iface)->DefaultMethod(f)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, CppAdvance::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IInterface::__vtable> FORCE_INLINE const ConcreteVectorClass operator+(const __AnyInterface& iface, const ConcreteVectorClass& f)  { ADV_EXPRESSION_BODY(CppAdvance::GetVTableFromInterface(&iface)->fnptr_fbc51d6746c8ca94(CppAdvance::GetObjectReferenceFromInterface(&iface), f)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, CppAdvance::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IInterface::__vtable> FORCE_INLINE CppAdvance::f32& getAt(const __AnyInterface& iface, CppAdvance::i32 i)  { ADV_EXPRESSION_BODY(CppAdvance::GetVTableFromInterface(&iface)->fnptr_8addcb5f9470873d(CppAdvance::GetObjectReferenceFromInterface(&iface), i)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, CppAdvance::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IInterface::__vtable> FORCE_INLINE decltype(auto) _operator_subscript(const __AnyInterface& iface, CppAdvance::i32 i) { return getAt(iface, i); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, CppAdvance::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IInterface::__vtable> FORCE_INLINE const CppAdvance::Str getName(const __AnyInterface& iface) { return CppAdvance::GetVTableFromInterface(&iface)->fnptr_getName(CppAdvance::GetObjectReferenceFromInterface(&iface)); }
	
	class __Class_DayOfWeek;
	#line 454 "Collections.ast"
	struct DayOfWeek final : public CppAdvance::Enum {
		public: using __self = DayOfWeek;
		public: using __class = __Class_DayOfWeek;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 454 "Collections.ast"
		private: CppAdvance::i32 __value;
		#line 454 "Collections.ast"
		public: constexpr auto getValue() const noexcept { return __value; } ADV_PROPERTY_GETTER(public, Value, getValue, CppAdvance::i32)
		#line 455 "Collections.ast"
		public: static const DayOfWeek Monday;
		#line 456 "Collections.ast"
		public: static const DayOfWeek Tuesday;
		#line 457 "Collections.ast"
		public: static const DayOfWeek Wednesday;
		#line 458 "Collections.ast"
		public: static const DayOfWeek Thursday;
		#line 459 "Collections.ast"
		public: static const DayOfWeek Friday;
		#line 460 "Collections.ast"
		public: static const DayOfWeek Saturday;
		#line 461 "Collections.ast"
		public: static const DayOfWeek Sunday;
		#line 454 "Collections.ast"
		private: static constexpr CppAdvance::Str __names[] = {u"Monday", u"Tuesday", u"Wednesday", u"Thursday", u"Friday", u"Saturday", u"Sunday"};
		#line 454 "Collections.ast"
		public: static constexpr int __variants = 7;
		#line 454 "Collections.ast"
		public: static constexpr std::span<const CppAdvance::Str> GetNames() noexcept { return __names; }
		#line 454 "Collections.ast"
		private: static const DayOfWeek __values[];
		#line 454 "Collections.ast"
		public: static constexpr std::span<const DayOfWeek> GetValues() noexcept;
		#line 454 "Collections.ast"
		public: constexpr operator bool() const noexcept { return static_cast<bool>(__value); } 
		#line 454 "Collections.ast"
		public: constexpr bool operator ==(const __self& that) const noexcept { return __value == that.__value; } 
		#line 454 "Collections.ast"
		public: constexpr operator CppAdvance::i32() const noexcept { return __value; }
		#line 454 "Collections.ast"
		private: constexpr DayOfWeek(CppAdvance::i32 value) : __value(value) {}
		
	};
	
	#line 455 "Collections.ast"
	inline constexpr DayOfWeek DayOfWeek::Monday = CppAdvance::i32(CppAdvance::i32(1));
	
	#line 456 "Collections.ast"
	inline constexpr DayOfWeek DayOfWeek::Tuesday = CppAdvance::i32(CppAdvance::i64(Monday.__value) + 1);
	
	#line 457 "Collections.ast"
	inline constexpr DayOfWeek DayOfWeek::Wednesday = CppAdvance::i32(CppAdvance::i64(Tuesday.__value) + 1);
	
	#line 458 "Collections.ast"
	inline constexpr DayOfWeek DayOfWeek::Thursday = CppAdvance::i32(CppAdvance::i64(Wednesday.__value) + 1);
	
	#line 459 "Collections.ast"
	inline constexpr DayOfWeek DayOfWeek::Friday = CppAdvance::i32(CppAdvance::i64(Thursday.__value) + 1);
	
	#line 460 "Collections.ast"
	inline constexpr DayOfWeek DayOfWeek::Saturday = CppAdvance::i32(CppAdvance::i64(Friday.__value) + 1);
	
	#line 461 "Collections.ast"
	inline constexpr DayOfWeek DayOfWeek::Sunday = CppAdvance::i32(CppAdvance::i64(Saturday.__value) + 1);
	inline constexpr DayOfWeek DayOfWeek::__values[] = {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
	inline constexpr std::span<const DayOfWeek> DayOfWeek::GetValues() noexcept { return __values; }
	#define ADV_USING_ENUM_DayOfWeek \
	constexpr auto Monday = DayOfWeek::Monday;\
	constexpr auto Tuesday = DayOfWeek::Tuesday;\
	constexpr auto Wednesday = DayOfWeek::Wednesday;\
	constexpr auto Thursday = DayOfWeek::Thursday;\
	constexpr auto Friday = DayOfWeek::Friday;\
	constexpr auto Saturday = DayOfWeek::Saturday;\
	constexpr auto Sunday = DayOfWeek::Sunday;\
	
	
	class __Class_Options;
	#line 465 "Collections.ast"
	struct [[clang::annotate("UserAttr: Flags")]] Options final : public CppAdvance::Enum {
		public: using __self = Options;
		public: using __class = __Class_Options;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 465 "Collections.ast"
		private: CppAdvance::u8 __value;
		#line 465 "Collections.ast"
		public: constexpr auto getValue() const noexcept { return __value; } ADV_PROPERTY_GETTER(public, Value, getValue, CppAdvance::u8)
		#line 466 "Collections.ast"
		public: static const Options None;
		#line 467 "Collections.ast"
		public: static const Options First;
		#line 468 "Collections.ast"
		public: static const Options Second;
		#line 469 "Collections.ast"
		public: static const Options Third;
		#line 470 "Collections.ast"
		public: static const Options Fourth;
		#line 471 "Collections.ast"
		public: static const Options Fiveth;
		#line 472 "Collections.ast"
		public: static const Options Sixth;
		#line 473 "Collections.ast"
		public: static const Options Seventh;
		#line 475 "Collections.ast"
		public: static const Options All;
		#line 476 "Collections.ast"
		public: static const Options Weekend;
		#line 465 "Collections.ast"
		private: static constexpr CppAdvance::Str __names[] = {u"None", u"First", u"Second", u"Third", u"Fourth", u"Fiveth", u"Sixth", u"Seventh", u"All", u"Weekend"};
		#line 465 "Collections.ast"
		public: static constexpr int __variants = 10;
		#line 465 "Collections.ast"
		public: static constexpr std::span<const CppAdvance::Str> GetNames() noexcept { return __names; }
		#line 465 "Collections.ast"
		private: static const Options __values[];
		#line 465 "Collections.ast"
		public: static constexpr std::span<const Options> GetValues() noexcept;
		#line 465 "Collections.ast"
		public: constexpr operator bool() const noexcept { return static_cast<bool>(__value); } 
		#line 465 "Collections.ast"
		public: constexpr bool operator ==(const __self& that) const noexcept { return __value == that.__value; } 
		#line 465 "Collections.ast"
		public: constexpr Options operator &(Options other) const noexcept { return (__value & other.__value); }
		#line 465 "Collections.ast"
		public: constexpr bool HasFlag(Options other) const noexcept { return static_cast<bool>(__value & other.__value); }
		#line 465 "Collections.ast"
		public: constexpr const Options operator |(Options other) const noexcept { return (__value | other.__value); }
		#line 465 "Collections.ast"
		public: constexpr Options& operator |=(Options other) noexcept { __value |= other.__value; return *this; }
		#line 465 "Collections.ast"
		public: constexpr Options& AddFlag(Options other) noexcept { __value |= other.__value; return *this; }
		#line 465 "Collections.ast"
		public: constexpr Options RemoveFlag(Options other) noexcept { __value &=~ other.__value; return __value; }
		#line 478 "Collections.ast"
		public: inline auto getIsWeekend() const  -> bool;
		#line 9999 "Collections.ast"
		ADV_PROPERTY_GETTER(public, IsWeekend, getIsWeekend, bool);
		#line 465 "Collections.ast"
		public: constexpr operator CppAdvance::u8() const noexcept { return __value; }
		#line 465 "Collections.ast"
		private: constexpr Options(CppAdvance::u8 value) : __value(value) {}
		
	};
	
	#line 466 "Collections.ast"
	inline constexpr Options Options::None = CppAdvance::u8(CppAdvance::i32(0));
	
	#line 467 "Collections.ast"
	inline constexpr Options Options::First = CppAdvance::u8(CppAdvance::i64(None.__value) << 1 ? CppAdvance::i64(None.__value) << 1 : 1);
	
	#line 468 "Collections.ast"
	inline constexpr Options Options::Second = CppAdvance::u8(CppAdvance::i64(First.__value) << 1 ? CppAdvance::i64(First.__value) << 1 : 1);
	
	#line 469 "Collections.ast"
	inline constexpr Options Options::Third = CppAdvance::u8(CppAdvance::i64(Second.__value) << 1 ? CppAdvance::i64(Second.__value) << 1 : 1);
	
	#line 470 "Collections.ast"
	inline constexpr Options Options::Fourth = CppAdvance::u8(CppAdvance::i64(Third.__value) << 1 ? CppAdvance::i64(Third.__value) << 1 : 1);
	
	#line 471 "Collections.ast"
	inline constexpr Options Options::Fiveth = CppAdvance::u8(CppAdvance::i64(Fourth.__value) << 1 ? CppAdvance::i64(Fourth.__value) << 1 : 1);
	
	#line 472 "Collections.ast"
	inline constexpr Options Options::Sixth = CppAdvance::u8(CppAdvance::i64(Fiveth.__value) << 1 ? CppAdvance::i64(Fiveth.__value) << 1 : 1);
	
	#line 473 "Collections.ast"
	inline constexpr Options Options::Seventh = CppAdvance::u8(CppAdvance::i64(Sixth.__value) << 1 ? CppAdvance::i64(Sixth.__value) << 1 : 1);
	
	#line 475 "Collections.ast"
	inline constexpr Options Options::All = CppAdvance::u8(First | Second | Third | Fourth | Fiveth | Sixth | Seventh);
	
	#line 476 "Collections.ast"
	inline constexpr Options Options::Weekend = CppAdvance::u8(Sixth | Seventh);
	inline constexpr Options Options::__values[] = {None, First, Second, Third, Fourth, Fiveth, Sixth, Seventh, All, Weekend};
	inline constexpr std::span<const Options> Options::GetValues() noexcept { return __values; }
	#define ADV_USING_ENUM_Options \
	constexpr auto None = Options::None;\
	constexpr auto First = Options::First;\
	constexpr auto Second = Options::Second;\
	constexpr auto Third = Options::Third;\
	constexpr auto Fourth = Options::Fourth;\
	constexpr auto Fiveth = Options::Fiveth;\
	constexpr auto Sixth = Options::Sixth;\
	constexpr auto Seventh = Options::Seventh;\
	constexpr auto All = Options::All;\
	constexpr auto Weekend = Options::Weekend;\
	
	
	class __Class_Text;
	#line 480 "Collections.ast"
	struct Text final : public CppAdvance::Enum {
		public: using __self = Text;
		public: using __class = __Class_Text;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 480 "Collections.ast"
		private: CppAdvance::Str __value;
		#line 480 "Collections.ast"
		public: constexpr auto getValue() const noexcept { return __value; } ADV_PROPERTY_GETTER(public, Value, getValue, CppAdvance::Str)
		#line 481 "Collections.ast"
		public: static const Text Monday;
		#line 482 "Collections.ast"
		public: static const Text Tuesday;
		#line 483 "Collections.ast"
		public: static const Text Wednesday;
		#line 484 "Collections.ast"
		public: static const Text Thursday;
		#line 485 "Collections.ast"
		public: static const Text Friday;
		#line 486 "Collections.ast"
		public: static const Text Saturday;
		#line 487 "Collections.ast"
		public: static const Text Sunday;
		#line 480 "Collections.ast"
		private: static constexpr CppAdvance::Str __names[] = {u"Monday", u"Tuesday", u"Wednesday", u"Thursday", u"Friday", u"Saturday", u"Sunday"};
		#line 480 "Collections.ast"
		public: static constexpr int __variants = 7;
		#line 480 "Collections.ast"
		public: static constexpr std::span<const CppAdvance::Str> GetNames() noexcept { return __names; }
		#line 480 "Collections.ast"
		private: static const Text __values[];
		#line 480 "Collections.ast"
		public: static constexpr std::span<const Text> GetValues() noexcept;
		#line 480 "Collections.ast"
		public: constexpr operator bool() const noexcept { return static_cast<bool>(__value); } 
		#line 480 "Collections.ast"
		public: constexpr bool operator ==(const __self& that) const noexcept { return __value == that.__value; } 
		#line 492 "Collections.ast"
		private: inline auto getShortString() const  -> CppAdvance::Str;
		#line 9999 "Collections.ast"
		ADV_PROPERTY_GETTER(private, ShortString, getShortString, CppAdvance::Str);
		#line 489 "Collections.ast"
		public: inline auto ToShortString() const  -> const CppAdvance::Str;
		#line 480 "Collections.ast"
		public: constexpr operator CppAdvance::Str() const noexcept { return __value; }
		#line 480 "Collections.ast"
		private: constexpr Text(CppAdvance::Str value) : __value(value) {}
		
	};
	
	#line 481 "Collections.ast"
	inline constexpr Text Text::Monday = CppAdvance::Str(CppAdvance::Str{u"This is Monday"});
	
	#line 482 "Collections.ast"
	inline constexpr Text Text::Tuesday = CppAdvance::Str(CppAdvance::Str{u"This is Tuesday"});
	
	#line 483 "Collections.ast"
	inline constexpr Text Text::Wednesday = CppAdvance::Str(CppAdvance::Str{u"This is Wednesday"});
	
	#line 484 "Collections.ast"
	inline constexpr Text Text::Thursday = CppAdvance::Str(CppAdvance::Str{u"This is Thursday"});
	
	#line 485 "Collections.ast"
	inline constexpr Text Text::Friday = CppAdvance::Str(CppAdvance::Str{u"This is Friday"});
	
	#line 486 "Collections.ast"
	inline constexpr Text Text::Saturday = CppAdvance::Str(CppAdvance::Str{u"This is Saturday"});
	
	#line 487 "Collections.ast"
	inline constexpr Text Text::Sunday = CppAdvance::Str(CppAdvance::Str{u"This is Sunday"});
	inline constexpr Text Text::__values[] = {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
	inline constexpr std::span<const Text> Text::GetValues() noexcept { return __values; }
	#define ADV_USING_ENUM_Text \
	constexpr auto Monday = Text::Monday;\
	constexpr auto Tuesday = Text::Tuesday;\
	constexpr auto Wednesday = Text::Wednesday;\
	constexpr auto Thursday = Text::Thursday;\
	constexpr auto Friday = Text::Friday;\
	constexpr auto Saturday = Text::Saturday;\
	constexpr auto Sunday = Text::Sunday;\
	
	
	
}
template<> inline constexpr bool CppAdvance::__details::cheapCopy<System::Application::ComplexVariant> = false;

namespace System::Application {
	#line 495 "Collections.ast"
	class ComplexVariant final : public CppAdvance::EnumClassRef {
		public: using __self = ComplexVariant;
		private: using ___super = CppAdvance::EnumClassRef;
		public: using __class = __Class_ComplexVariant;
		private: friend class ComplexVariant__Unowned;
		friend class __Class_ComplexVariant;
		friend class ComplexVariant__Weak;
		public: using __strong_ref = ComplexVariant;
		public: using __unowned_ref = ComplexVariant__Unowned;
		public: using __weak_ref = ComplexVariant__Weak;
		public: FORCE_INLINE decltype(auto) __ref() const noexcept { return *reinterpret_cast<__class*>(_obj); }
		ADV_CLASS_FROM_PTR(ComplexVariant)
		ADV_CLASS_INIT(ComplexVariant)
		ADV_CLASS_STRONG_COMMON_CTORS(ComplexVariant)
		#define ADV_PROPERTY_SELF __class
		public: ADV_PROPERTY_GETTER_STATIC(public, , Count10, getCount10, CppAdvance::i32);
		#define ADV_PROPERTY_SELF __self
		#line 507 "Collections.ast"
		public: inline decltype(auto) operator*() const ;
		public: FORCE_INLINE static decltype(auto) getValue1() noexcept;
		ADV_PROPERTY_GETTER_STATIC(public, , Value1, getValue1, __self);
		public: FORCE_INLINE static decltype(auto) getValue2() noexcept;
		ADV_PROPERTY_GETTER_STATIC(public, , Value2, getValue2, __self);
		public: FORCE_INLINE static decltype(auto) getValue3() noexcept;
		ADV_PROPERTY_GETTER_STATIC(public, , Value3, getValue3, __self);
		public: FORCE_INLINE static decltype(auto) getValue4() noexcept;
		ADV_PROPERTY_GETTER_STATIC(public, , Value4, getValue4, __self);
		#line 495 "Collections.ast"
		public: FORCE_INLINE static decltype(auto) GetValues() noexcept;
		
	};
	#line 495 "Collections.ast"
	class ComplexVariant__Unowned : public CppAdvance::ObjectRef__Unowned {
		public: using __self = ComplexVariant;
		public: using __strong_ref = ComplexVariant;
		public: using __unowned_ref = ComplexVariant__Unowned;
		public: using __weak_ref = ComplexVariant__Weak;
		private: using ___super = CppAdvance::ObjectRef__Unowned;
		public: using __class = __Class_ComplexVariant;
		public: FORCE_INLINE decltype(auto) __ref() const noexcept { CppAdvance::UnownedCheck(_obj); return *reinterpret_cast<__class*>(_obj); }
		ADV_CLASS_FROM_PTR(ComplexVariant__Unowned)
		ADV_CLASS_UNOWNED_COMMON_CTORS(ComplexVariant__Unowned)
		#line 507 "Collections.ast"
		public: inline decltype(auto) operator*() const ;
		
	};
	#line 495 "Collections.ast"
	class ComplexVariant__Weak : public CppAdvance::ObjectRef__Weak {
		public: using __self = ComplexVariant;
		public: using __strong_ref = ComplexVariant;
		public: using __unowned_ref = ComplexVariant__Unowned;
		public: using __weak_ref = ComplexVariant__Weak;
		private: using ___super = CppAdvance::ObjectRef__Weak;
		public: using __class = __Class_ComplexVariant;
		static constexpr bool __IS_ADV_NULLABLE = true;
		public: FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		ADV_CLASS_WEAK_FROM_PTR(ComplexVariant__Weak)
		ADV_CLASS_WEAK_COMMON_CTORS(ComplexVariant__Weak)
		#define ADV_PROPERTY_SELF __self
	};
	
	class __Class_Media;
	#line 521 "Collections.ast"
	struct Media final : public CppAdvance::Union {
		public: using __self = Media;
		public: using __class = __Class_Media;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 522 "Collections.ast"
		private: struct __UnionType_None{ constexpr bool operator==(const __UnionType_None &) const noexcept { return true; } }; public: static constexpr __UnionType_None None{};
		#line 523 "Collections.ast"
		public: using String = CppAdvance::Str; ADV_CHECK_REF_STRUCT("str", CppAdvance::Str);
		#line 524 "Collections.ast"
		public: using XYZ = std::tuple<CppAdvance::i32, CppAdvance::i32, CppAdvance::i32>;
		#line 525 "Collections.ast"
		public: struct Audio { decltype(auto) __ref() const noexcept { return *this; }
			CppAdvance::Str name; ADV_CHECK_REF_STRUCT("str", CppAdvance::Str);
			CppAdvance::i32 len; ADV_CHECK_REF_STRUCT("i32", CppAdvance::i32);
			CppAdvance::f32 volume; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
			bool operator==(const Audio& that) const noexcept { return name == that.name && len == that.len && volume == that.volume; }
		};
		#line 526 "Collections.ast"
		public: struct Video { decltype(auto) __ref() const noexcept { return *this; }
			CppAdvance::Str name; ADV_CHECK_REF_STRUCT("str", CppAdvance::Str);
			CppAdvance::i32 len; ADV_CHECK_REF_STRUCT("i32", CppAdvance::i32);
			CppAdvance::f32 fps; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
			CppAdvance::Str lang; ADV_CHECK_REF_STRUCT("str", CppAdvance::Str);
			bool operator==(const Video& that) const noexcept { return name == that.name && len == that.len && fps == that.fps && lang == that.lang; }
		};
		#line 527 "Collections.ast"
		public: struct Text { decltype(auto) __ref() const noexcept { return *this; }
			CppAdvance::Str lang; ADV_CHECK_REF_STRUCT("str", CppAdvance::Str);
			bool operator==(const Text& that) const noexcept { return lang == that.lang; }
		};
		private: union {
			#line 522 "Collections.ast"
			__UnionType_None _None;
			#line 523 "Collections.ast"
			String _String;
			#line 524 "Collections.ast"
			XYZ _XYZ;
			#line 525 "Collections.ast"
			Audio _Audio;
			#line 526 "Collections.ast"
			Video _Video;
			#line 527 "Collections.ast"
			Text _Text;
			
		};
		enum : unsigned char {
			_TAG__None, _TAG__String, _TAG__XYZ, _TAG__Audio, _TAG__Video, _TAG__Text
		} __union_internal_tag;
		public:
		#line 521 "Collections.ast"
		static constexpr int __variants = 6;
		#line 522 "Collections.ast"
		Media(CppAdvance::In<__UnionType_None> value) : __union_internal_tag{ _TAG__None } { new (&_None) __UnionType_None(value); }
		#line 523 "Collections.ast"
		Media(CppAdvance::In<String> value) : __union_internal_tag{ _TAG__String } { new (&_String) String(value); }
		#line 524 "Collections.ast"
		Media(CppAdvance::In<XYZ> value) : __union_internal_tag{ _TAG__XYZ } { new (&_XYZ) XYZ(value); }
		#line 525 "Collections.ast"
		Media(CppAdvance::In<Audio> value) : __union_internal_tag{ _TAG__Audio } { new (&_Audio) Audio(value); }
		#line 526 "Collections.ast"
		Media(CppAdvance::In<Video> value) : __union_internal_tag{ _TAG__Video } { new (&_Video) Video(value); }
		#line 527 "Collections.ast"
		Media(CppAdvance::In<Text> value) : __union_internal_tag{ _TAG__Text } { new (&_Text) Text(value); }
		#line 9999 "Collections.ast"
		private: void __copy(const __self& other) {
			__union_internal_tag = other.__union_internal_tag;
			switch (__union_internal_tag) {
				#line 522 "Collections.ast"
				case _TAG__None: new (&_None) __UnionType_None(other._None); break;
				#line 523 "Collections.ast"
				case _TAG__String: new (&_String) String(other._String); break;
				#line 524 "Collections.ast"
				case _TAG__XYZ: new (&_XYZ) XYZ(other._XYZ); break;
				#line 525 "Collections.ast"
				case _TAG__Audio: new (&_Audio) Audio(other._Audio); break;
				#line 526 "Collections.ast"
				case _TAG__Video: new (&_Video) Video(other._Video); break;
				#line 527 "Collections.ast"
				case _TAG__Text: new (&_Text) Text(other._Text); break;
				
			}
		}
		#line 521 "Collections.ast"
		public: Media(const __self& other) { __copy(other); }
		#line 9999 "Collections.ast"
		private: void __move(__self&& other) {
			__union_internal_tag = other.__union_internal_tag;
			switch (__union_internal_tag) {
				#line 522 "Collections.ast"
				case _TAG__None: new (&_None) __UnionType_None(std::move(other._None)); break;
				#line 523 "Collections.ast"
				case _TAG__String: new (&_String) String(std::move(other._String)); break;
				#line 524 "Collections.ast"
				case _TAG__XYZ: new (&_XYZ) XYZ(std::move(other._XYZ)); break;
				#line 525 "Collections.ast"
				case _TAG__Audio: new (&_Audio) Audio(std::move(other._Audio)); break;
				#line 526 "Collections.ast"
				case _TAG__Video: new (&_Video) Video(std::move(other._Video)); break;
				#line 527 "Collections.ast"
				case _TAG__Text: new (&_Text) Text(std::move(other._Text)); break;
				
			}
		}
		#line 521 "Collections.ast"
		public: Media(__self&& other) { __move(std::move(other)); }
		#line 9999 "Collections.ast"
		private: void __destroy() {
			switch (__union_internal_tag) {
				#line 522 "Collections.ast"
				case _TAG__None: _None.~__UnionType_None(); break;
				#line 523 "Collections.ast"
				case _TAG__String: _String.~String(); break;
				#line 524 "Collections.ast"
				case _TAG__XYZ: _XYZ.~XYZ(); break;
				#line 525 "Collections.ast"
				case _TAG__Audio: _Audio.~Audio(); break;
				#line 526 "Collections.ast"
				case _TAG__Video: _Video.~Video(); break;
				#line 527 "Collections.ast"
				case _TAG__Text: _Text.~Text(); break;
				
			}
		}
		#line 521 "Collections.ast"
		public: ~Media() { __destroy(); }
		#line 522 "Collections.ast"
		Media& operator=(CppAdvance::In<__UnionType_None> value) {
			__destroy();
			__union_internal_tag = _TAG__None;
			new (&_None) __UnionType_None(value); return *this;
		}
		#line 523 "Collections.ast"
		Media& operator=(CppAdvance::In<String> value) {
			__destroy();
			__union_internal_tag = _TAG__String;
			new (&_String) String(value); return *this;
		}
		#line 524 "Collections.ast"
		Media& operator=(CppAdvance::In<XYZ> value) {
			__destroy();
			__union_internal_tag = _TAG__XYZ;
			new (&_XYZ) XYZ(value); return *this;
		}
		#line 525 "Collections.ast"
		Media& operator=(CppAdvance::In<Audio> value) {
			__destroy();
			__union_internal_tag = _TAG__Audio;
			new (&_Audio) Audio(value); return *this;
		}
		#line 526 "Collections.ast"
		Media& operator=(CppAdvance::In<Video> value) {
			__destroy();
			__union_internal_tag = _TAG__Video;
			new (&_Video) Video(value); return *this;
		}
		#line 527 "Collections.ast"
		Media& operator=(CppAdvance::In<Text> value) {
			__destroy();
			__union_internal_tag = _TAG__Text;
			new (&_Text) Text(value); return *this;
		}
		#line 521 "Collections.ast"
		public: __self& operator=(const __self& other) { __destroy(); __copy(other); return *this; }
		#line 521 "Collections.ast"
		public: __self& operator=(__self&& other) { __destroy(); __move(std::move(other)); return *this; }
		#line 522 "Collections.ast"
		public: auto GetNone() { if (__union_internal_tag != _TAG__None) throw std::logic_error("Type mismatch in the discriminated union"); return _None; }
		#line 523 "Collections.ast"
		public: auto GetString() { if (__union_internal_tag != _TAG__String) throw std::logic_error("Type mismatch in the discriminated union"); return _String; }
		#line 524 "Collections.ast"
		public: auto GetXYZ() { if (__union_internal_tag != _TAG__XYZ) throw std::logic_error("Type mismatch in the discriminated union"); return _XYZ; }
		#line 525 "Collections.ast"
		public: auto GetAudio() { if (__union_internal_tag != _TAG__Audio) throw std::logic_error("Type mismatch in the discriminated union"); return _Audio; }
		#line 526 "Collections.ast"
		public: auto GetVideo() { if (__union_internal_tag != _TAG__Video) throw std::logic_error("Type mismatch in the discriminated union"); return _Video; }
		#line 527 "Collections.ast"
		public: auto GetText() { if (__union_internal_tag != _TAG__Text) throw std::logic_error("Type mismatch in the discriminated union"); return _Text; }
		#line 9999 "Collections.ast"
		public: template<class __SomeT> bool Is() const noexcept {
			if constexpr (std::is_same_v<__SomeT, __UnionType_None>) return __union_internal_tag == _TAG__None;
			else if constexpr (std::is_same_v<__SomeT, String>) return __union_internal_tag == _TAG__String;
			else if constexpr (std::is_same_v<__SomeT, XYZ>) return __union_internal_tag == _TAG__XYZ;
			else if constexpr (std::is_same_v<__SomeT, Audio>) return __union_internal_tag == _TAG__Audio;
			else if constexpr (std::is_same_v<__SomeT, Video>) return __union_internal_tag == _TAG__Video;
			else if constexpr (std::is_same_v<__SomeT, Text>) return __union_internal_tag == _TAG__Text;
			return false;
		}
		#line 9999 "Collections.ast"
		public: template<class __SomeT> CppAdvance::Nullable<__SomeT> As() const noexcept {
			if constexpr (std::is_same_v<__SomeT, __UnionType_None>) { if(__union_internal_tag == _TAG__None) return _None; }
			else if constexpr (std::is_same_v<__SomeT, String>) { if(__union_internal_tag == _TAG__String) return _String; }
			else if constexpr (std::is_same_v<__SomeT, XYZ>) { if(__union_internal_tag == _TAG__XYZ) return _XYZ; }
			else if constexpr (std::is_same_v<__SomeT, Audio>) { if(__union_internal_tag == _TAG__Audio) return _Audio; }
			else if constexpr (std::is_same_v<__SomeT, Video>) { if(__union_internal_tag == _TAG__Video) return _Video; }
			else if constexpr (std::is_same_v<__SomeT, Text>) { if(__union_internal_tag == _TAG__Text) return _Text; }
			else static_assert(false, "Cannot to cast union type Media to __SomeT");
			return nullptr;
		}
		#line 9999 "Collections.ast"
		public: template<class __SomeT> bool operator==(const __SomeT& other) const noexcept {
			if constexpr (std::is_same_v<__SomeT, __UnionType_None>) return __union_internal_tag == _TAG__None && _None == other;
			else if constexpr (std::is_same_v<__SomeT, String>) return __union_internal_tag == _TAG__String && _String == other;
			else if constexpr (std::is_same_v<__SomeT, XYZ>) return __union_internal_tag == _TAG__XYZ && _XYZ == other;
			else if constexpr (std::is_same_v<__SomeT, Audio>) return __union_internal_tag == _TAG__Audio && _Audio == other;
			else if constexpr (std::is_same_v<__SomeT, Video>) return __union_internal_tag == _TAG__Video && _Video == other;
			else if constexpr (std::is_same_v<__SomeT, Text>) return __union_internal_tag == _TAG__Text && _Text == other;
			return false;
		}
		#line 535 "Collections.ast"
		public: inline constexpr auto getCount123() const  -> CppAdvance::i32;
		#line 9999 "Collections.ast"
		ADV_PROPERTY_GETTER(public, Count123, getCount123, CppAdvance::i32);
		#line 537 "Collections.ast"
		public: inline constexpr static auto getCount10()  -> CppAdvance::i32;
		#line 9999 "Collections.ast"
		ADV_PROPERTY_GETTER_STATIC(public, , Count10, getCount10, CppAdvance::i32);
		#line 529 "Collections.ast"
		public: inline auto printVariant() const  -> void;
		#line 533 "Collections.ast"
		public: inline auto GetMagicNumber(CppAdvance::In<VectorClass> f) const  -> const CppAdvance::f32;
		
	};
	
	template<class T1, class T2> class __Class_Union2;
	#line 540 "Collections.ast"
	template<class T1, class T2> struct Union2 final : public CppAdvance::Union {
		public: using __self = Union2<T1, T2>;
		public: using __class = __Class_Union2<T1, T2>;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 541 "Collections.ast"
		public: using Type1 = T1; ADV_CHECK_REF_STRUCT("T1", T1);
		#line 542 "Collections.ast"
		public: using Type2 = T2; ADV_CHECK_REF_STRUCT("T2", T2);
		private: union {
			#line 541 "Collections.ast"
			Type1 _Type1;
			#line 542 "Collections.ast"
			Type2 _Type2;
			
		};
		enum : unsigned char {
			_TAG__Type1, _TAG__Type2
		} __union_internal_tag;
		public:
		#line 540 "Collections.ast"
		static constexpr int __variants = 2;
		#line 541 "Collections.ast"
		Union2(CppAdvance::In<Type1> value) : __union_internal_tag{ _TAG__Type1 } { new (&_Type1) Type1(value); }
		#line 542 "Collections.ast"
		Union2(CppAdvance::In<Type2> value) : __union_internal_tag{ _TAG__Type2 } { new (&_Type2) Type2(value); }
		#line 9999 "Collections.ast"
		private: void __copy(const __self& other) {
			__union_internal_tag = other.__union_internal_tag;
			switch (__union_internal_tag) {
				#line 541 "Collections.ast"
				case _TAG__Type1: new (&_Type1) Type1(other._Type1); break;
				#line 542 "Collections.ast"
				case _TAG__Type2: new (&_Type2) Type2(other._Type2); break;
				
			}
		}
		#line 540 "Collections.ast"
		public: Union2(const __self& other) { __copy(other); }
		#line 9999 "Collections.ast"
		private: void __move(__self&& other) {
			__union_internal_tag = other.__union_internal_tag;
			switch (__union_internal_tag) {
				#line 541 "Collections.ast"
				case _TAG__Type1: new (&_Type1) Type1(std::move(other._Type1)); break;
				#line 542 "Collections.ast"
				case _TAG__Type2: new (&_Type2) Type2(std::move(other._Type2)); break;
				
			}
		}
		#line 540 "Collections.ast"
		public: Union2(__self&& other) { __move(std::move(other)); }
		#line 9999 "Collections.ast"
		private: void __destroy() {
			switch (__union_internal_tag) {
				#line 541 "Collections.ast"
				case _TAG__Type1: _Type1.~Type1(); break;
				#line 542 "Collections.ast"
				case _TAG__Type2: _Type2.~Type2(); break;
				
			}
		}
		#line 540 "Collections.ast"
		public: ~Union2() { __destroy(); }
		#line 541 "Collections.ast"
		Union2& operator=(CppAdvance::In<Type1> value) {
			__destroy();
			__union_internal_tag = _TAG__Type1;
			new (&_Type1) Type1(value); return *this;
		}
		#line 542 "Collections.ast"
		Union2& operator=(CppAdvance::In<Type2> value) {
			__destroy();
			__union_internal_tag = _TAG__Type2;
			new (&_Type2) Type2(value); return *this;
		}
		#line 540 "Collections.ast"
		public: __self& operator=(const __self& other) { __destroy(); __copy(other); return *this; }
		#line 540 "Collections.ast"
		public: __self& operator=(__self&& other) { __destroy(); __move(std::move(other)); return *this; }
		#line 541 "Collections.ast"
		public: auto GetType1() { if (__union_internal_tag != _TAG__Type1) throw std::logic_error("Type mismatch in the discriminated union"); return _Type1; }
		#line 542 "Collections.ast"
		public: auto GetType2() { if (__union_internal_tag != _TAG__Type2) throw std::logic_error("Type mismatch in the discriminated union"); return _Type2; }
		#line 9999 "Collections.ast"
		public: template<class __SomeT> bool Is() const noexcept {
			if constexpr (std::is_same_v<__SomeT, Type1>) return __union_internal_tag == _TAG__Type1;
			else if constexpr (std::is_same_v<__SomeT, Type2>) return __union_internal_tag == _TAG__Type2;
			return false;
		}
		#line 9999 "Collections.ast"
		public: template<class __SomeT> CppAdvance::Nullable<__SomeT> As() const noexcept {
			if constexpr (std::is_same_v<__SomeT, Type1>) { if(__union_internal_tag == _TAG__Type1) return _Type1; }
			else if constexpr (std::is_same_v<__SomeT, Type2>) { if(__union_internal_tag == _TAG__Type2) return _Type2; }
			else static_assert(false, "Cannot to cast union type Union2 to __SomeT");
			return nullptr;
		}
		#line 9999 "Collections.ast"
		public: template<class __SomeT> bool operator==(const __SomeT& other) const noexcept {
			if constexpr (std::is_same_v<__SomeT, Type1>) return __union_internal_tag == _TAG__Type1 && _Type1 == other;
			else if constexpr (std::is_same_v<__SomeT, Type2>) return __union_internal_tag == _TAG__Type2 && _Type2 == other;
			return false;
		}
		
	};
	
	template<class T1, class T2, class T3> class __Class_Union3;
	#line 545 "Collections.ast"
	template<class T1, class T2, class T3> struct Union3 final : public CppAdvance::Union {
		public: using __self = Union3<T1, T2, T3>;
		public: using __class = __Class_Union3<T1, T2, T3>;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 546 "Collections.ast"
		public: using Type1 = T1; ADV_CHECK_REF_STRUCT("T1", T1);
		#line 547 "Collections.ast"
		public: using Type2 = T2; ADV_CHECK_REF_STRUCT("T2", T2);
		#line 548 "Collections.ast"
		public: using Type3 = T3; ADV_CHECK_REF_STRUCT("T3", T3);
		private: union {
			#line 546 "Collections.ast"
			Type1 _Type1;
			#line 547 "Collections.ast"
			Type2 _Type2;
			#line 548 "Collections.ast"
			Type3 _Type3;
			
		};
		enum : unsigned char {
			_TAG__Type1, _TAG__Type2, _TAG__Type3
		} __union_internal_tag;
		public:
		#line 545 "Collections.ast"
		static constexpr int __variants = 3;
		#line 546 "Collections.ast"
		Union3(CppAdvance::In<Type1> value) : __union_internal_tag{ _TAG__Type1 } { new (&_Type1) Type1(value); }
		#line 547 "Collections.ast"
		Union3(CppAdvance::In<Type2> value) : __union_internal_tag{ _TAG__Type2 } { new (&_Type2) Type2(value); }
		#line 548 "Collections.ast"
		Union3(CppAdvance::In<Type3> value) : __union_internal_tag{ _TAG__Type3 } { new (&_Type3) Type3(value); }
		#line 9999 "Collections.ast"
		private: void __copy(const __self& other) {
			__union_internal_tag = other.__union_internal_tag;
			switch (__union_internal_tag) {
				#line 546 "Collections.ast"
				case _TAG__Type1: new (&_Type1) Type1(other._Type1); break;
				#line 547 "Collections.ast"
				case _TAG__Type2: new (&_Type2) Type2(other._Type2); break;
				#line 548 "Collections.ast"
				case _TAG__Type3: new (&_Type3) Type3(other._Type3); break;
				
			}
		}
		#line 545 "Collections.ast"
		public: Union3(const __self& other) { __copy(other); }
		#line 9999 "Collections.ast"
		private: void __move(__self&& other) {
			__union_internal_tag = other.__union_internal_tag;
			switch (__union_internal_tag) {
				#line 546 "Collections.ast"
				case _TAG__Type1: new (&_Type1) Type1(std::move(other._Type1)); break;
				#line 547 "Collections.ast"
				case _TAG__Type2: new (&_Type2) Type2(std::move(other._Type2)); break;
				#line 548 "Collections.ast"
				case _TAG__Type3: new (&_Type3) Type3(std::move(other._Type3)); break;
				
			}
		}
		#line 545 "Collections.ast"
		public: Union3(__self&& other) { __move(std::move(other)); }
		#line 9999 "Collections.ast"
		private: void __destroy() {
			switch (__union_internal_tag) {
				#line 546 "Collections.ast"
				case _TAG__Type1: _Type1.~Type1(); break;
				#line 547 "Collections.ast"
				case _TAG__Type2: _Type2.~Type2(); break;
				#line 548 "Collections.ast"
				case _TAG__Type3: _Type3.~Type3(); break;
				
			}
		}
		#line 545 "Collections.ast"
		public: ~Union3() { __destroy(); }
		#line 546 "Collections.ast"
		Union3& operator=(CppAdvance::In<Type1> value) {
			__destroy();
			__union_internal_tag = _TAG__Type1;
			new (&_Type1) Type1(value); return *this;
		}
		#line 547 "Collections.ast"
		Union3& operator=(CppAdvance::In<Type2> value) {
			__destroy();
			__union_internal_tag = _TAG__Type2;
			new (&_Type2) Type2(value); return *this;
		}
		#line 548 "Collections.ast"
		Union3& operator=(CppAdvance::In<Type3> value) {
			__destroy();
			__union_internal_tag = _TAG__Type3;
			new (&_Type3) Type3(value); return *this;
		}
		#line 545 "Collections.ast"
		public: __self& operator=(const __self& other) { __destroy(); __copy(other); return *this; }
		#line 545 "Collections.ast"
		public: __self& operator=(__self&& other) { __destroy(); __move(std::move(other)); return *this; }
		#line 546 "Collections.ast"
		public: auto GetType1() { if (__union_internal_tag != _TAG__Type1) throw std::logic_error("Type mismatch in the discriminated union"); return _Type1; }
		#line 547 "Collections.ast"
		public: auto GetType2() { if (__union_internal_tag != _TAG__Type2) throw std::logic_error("Type mismatch in the discriminated union"); return _Type2; }
		#line 548 "Collections.ast"
		public: auto GetType3() { if (__union_internal_tag != _TAG__Type3) throw std::logic_error("Type mismatch in the discriminated union"); return _Type3; }
		#line 9999 "Collections.ast"
		public: template<class __SomeT> bool Is() const noexcept {
			if constexpr (std::is_same_v<__SomeT, Type1>) return __union_internal_tag == _TAG__Type1;
			else if constexpr (std::is_same_v<__SomeT, Type2>) return __union_internal_tag == _TAG__Type2;
			else if constexpr (std::is_same_v<__SomeT, Type3>) return __union_internal_tag == _TAG__Type3;
			return false;
		}
		#line 9999 "Collections.ast"
		public: template<class __SomeT> CppAdvance::Nullable<__SomeT> As() const noexcept {
			if constexpr (std::is_same_v<__SomeT, Type1>) { if(__union_internal_tag == _TAG__Type1) return _Type1; }
			else if constexpr (std::is_same_v<__SomeT, Type2>) { if(__union_internal_tag == _TAG__Type2) return _Type2; }
			else if constexpr (std::is_same_v<__SomeT, Type3>) { if(__union_internal_tag == _TAG__Type3) return _Type3; }
			else static_assert(false, "Cannot to cast union type Union3 to __SomeT");
			return nullptr;
		}
		#line 9999 "Collections.ast"
		public: template<class __SomeT> bool operator==(const __SomeT& other) const noexcept {
			if constexpr (std::is_same_v<__SomeT, Type1>) return __union_internal_tag == _TAG__Type1 && _Type1 == other;
			else if constexpr (std::is_same_v<__SomeT, Type2>) return __union_internal_tag == _TAG__Type2 && _Type2 == other;
			else if constexpr (std::is_same_v<__SomeT, Type3>) return __union_internal_tag == _TAG__Type3 && _Type3 == other;
			return false;
		}
		
	};
	
	template<class T1, class T2, class T3, class T4> class __Class_Union4;
	#line 551 "Collections.ast"
	template<class T1, class T2, class T3, class T4> struct Union4 final : public CppAdvance::Union {
		public: using __self = Union4<T1, T2, T3, T4>;
		public: using __class = __Class_Union4<T1, T2, T3, T4>;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 552 "Collections.ast"
		public: using Type1 = T1; ADV_CHECK_REF_STRUCT("T1", T1);
		#line 553 "Collections.ast"
		public: using Type2 = T2; ADV_CHECK_REF_STRUCT("T2", T2);
		#line 554 "Collections.ast"
		public: using Type3 = T3; ADV_CHECK_REF_STRUCT("T3", T3);
		#line 555 "Collections.ast"
		public: using Type4 = T4; ADV_CHECK_REF_STRUCT("T4", T4);
		private: union {
			#line 552 "Collections.ast"
			Type1 _Type1;
			#line 553 "Collections.ast"
			Type2 _Type2;
			#line 554 "Collections.ast"
			Type3 _Type3;
			#line 555 "Collections.ast"
			Type4 _Type4;
			
		};
		enum : unsigned char {
			_TAG__Type1, _TAG__Type2, _TAG__Type3, _TAG__Type4
		} __union_internal_tag;
		public:
		#line 551 "Collections.ast"
		static constexpr int __variants = 4;
		#line 552 "Collections.ast"
		Union4(CppAdvance::In<Type1> value) : __union_internal_tag{ _TAG__Type1 } { new (&_Type1) Type1(value); }
		#line 553 "Collections.ast"
		Union4(CppAdvance::In<Type2> value) : __union_internal_tag{ _TAG__Type2 } { new (&_Type2) Type2(value); }
		#line 554 "Collections.ast"
		Union4(CppAdvance::In<Type3> value) : __union_internal_tag{ _TAG__Type3 } { new (&_Type3) Type3(value); }
		#line 555 "Collections.ast"
		Union4(CppAdvance::In<Type4> value) : __union_internal_tag{ _TAG__Type4 } { new (&_Type4) Type4(value); }
		#line 9999 "Collections.ast"
		private: void __copy(const __self& other) {
			__union_internal_tag = other.__union_internal_tag;
			switch (__union_internal_tag) {
				#line 552 "Collections.ast"
				case _TAG__Type1: new (&_Type1) Type1(other._Type1); break;
				#line 553 "Collections.ast"
				case _TAG__Type2: new (&_Type2) Type2(other._Type2); break;
				#line 554 "Collections.ast"
				case _TAG__Type3: new (&_Type3) Type3(other._Type3); break;
				#line 555 "Collections.ast"
				case _TAG__Type4: new (&_Type4) Type4(other._Type4); break;
				
			}
		}
		#line 551 "Collections.ast"
		public: Union4(const __self& other) { __copy(other); }
		#line 9999 "Collections.ast"
		private: void __move(__self&& other) {
			__union_internal_tag = other.__union_internal_tag;
			switch (__union_internal_tag) {
				#line 552 "Collections.ast"
				case _TAG__Type1: new (&_Type1) Type1(std::move(other._Type1)); break;
				#line 553 "Collections.ast"
				case _TAG__Type2: new (&_Type2) Type2(std::move(other._Type2)); break;
				#line 554 "Collections.ast"
				case _TAG__Type3: new (&_Type3) Type3(std::move(other._Type3)); break;
				#line 555 "Collections.ast"
				case _TAG__Type4: new (&_Type4) Type4(std::move(other._Type4)); break;
				
			}
		}
		#line 551 "Collections.ast"
		public: Union4(__self&& other) { __move(std::move(other)); }
		#line 9999 "Collections.ast"
		private: void __destroy() {
			switch (__union_internal_tag) {
				#line 552 "Collections.ast"
				case _TAG__Type1: _Type1.~Type1(); break;
				#line 553 "Collections.ast"
				case _TAG__Type2: _Type2.~Type2(); break;
				#line 554 "Collections.ast"
				case _TAG__Type3: _Type3.~Type3(); break;
				#line 555 "Collections.ast"
				case _TAG__Type4: _Type4.~Type4(); break;
				
			}
		}
		#line 551 "Collections.ast"
		public: ~Union4() { __destroy(); }
		#line 552 "Collections.ast"
		Union4& operator=(CppAdvance::In<Type1> value) {
			__destroy();
			__union_internal_tag = _TAG__Type1;
			new (&_Type1) Type1(value); return *this;
		}
		#line 553 "Collections.ast"
		Union4& operator=(CppAdvance::In<Type2> value) {
			__destroy();
			__union_internal_tag = _TAG__Type2;
			new (&_Type2) Type2(value); return *this;
		}
		#line 554 "Collections.ast"
		Union4& operator=(CppAdvance::In<Type3> value) {
			__destroy();
			__union_internal_tag = _TAG__Type3;
			new (&_Type3) Type3(value); return *this;
		}
		#line 555 "Collections.ast"
		Union4& operator=(CppAdvance::In<Type4> value) {
			__destroy();
			__union_internal_tag = _TAG__Type4;
			new (&_Type4) Type4(value); return *this;
		}
		#line 551 "Collections.ast"
		public: __self& operator=(const __self& other) { __destroy(); __copy(other); return *this; }
		#line 551 "Collections.ast"
		public: __self& operator=(__self&& other) { __destroy(); __move(std::move(other)); return *this; }
		#line 552 "Collections.ast"
		public: auto GetType1() { if (__union_internal_tag != _TAG__Type1) throw std::logic_error("Type mismatch in the discriminated union"); return _Type1; }
		#line 553 "Collections.ast"
		public: auto GetType2() { if (__union_internal_tag != _TAG__Type2) throw std::logic_error("Type mismatch in the discriminated union"); return _Type2; }
		#line 554 "Collections.ast"
		public: auto GetType3() { if (__union_internal_tag != _TAG__Type3) throw std::logic_error("Type mismatch in the discriminated union"); return _Type3; }
		#line 555 "Collections.ast"
		public: auto GetType4() { if (__union_internal_tag != _TAG__Type4) throw std::logic_error("Type mismatch in the discriminated union"); return _Type4; }
		#line 9999 "Collections.ast"
		public: template<class __SomeT> bool Is() const noexcept {
			if constexpr (std::is_same_v<__SomeT, Type1>) return __union_internal_tag == _TAG__Type1;
			else if constexpr (std::is_same_v<__SomeT, Type2>) return __union_internal_tag == _TAG__Type2;
			else if constexpr (std::is_same_v<__SomeT, Type3>) return __union_internal_tag == _TAG__Type3;
			else if constexpr (std::is_same_v<__SomeT, Type4>) return __union_internal_tag == _TAG__Type4;
			return false;
		}
		#line 9999 "Collections.ast"
		public: template<class __SomeT> CppAdvance::Nullable<__SomeT> As() const noexcept {
			if constexpr (std::is_same_v<__SomeT, Type1>) { if(__union_internal_tag == _TAG__Type1) return _Type1; }
			else if constexpr (std::is_same_v<__SomeT, Type2>) { if(__union_internal_tag == _TAG__Type2) return _Type2; }
			else if constexpr (std::is_same_v<__SomeT, Type3>) { if(__union_internal_tag == _TAG__Type3) return _Type3; }
			else if constexpr (std::is_same_v<__SomeT, Type4>) { if(__union_internal_tag == _TAG__Type4) return _Type4; }
			else static_assert(false, "Cannot to cast union type Union4 to __SomeT");
			return nullptr;
		}
		#line 9999 "Collections.ast"
		public: template<class __SomeT> bool operator==(const __SomeT& other) const noexcept {
			if constexpr (std::is_same_v<__SomeT, Type1>) return __union_internal_tag == _TAG__Type1 && _Type1 == other;
			else if constexpr (std::is_same_v<__SomeT, Type2>) return __union_internal_tag == _TAG__Type2 && _Type2 == other;
			else if constexpr (std::is_same_v<__SomeT, Type3>) return __union_internal_tag == _TAG__Type3 && _Type3 == other;
			else if constexpr (std::is_same_v<__SomeT, Type4>) return __union_internal_tag == _TAG__Type4 && _Type4 == other;
			return false;
		}
		
	};
	
	template<class T1, class T2, class T3, class T4, class T5> class __Class_Union5;
	#line 558 "Collections.ast"
	template<class T1, class T2, class T3, class T4, class T5> struct Union5 final : public CppAdvance::Union {
		public: using __self = Union5<T1, T2, T3, T4, T5>;
		public: using __class = __Class_Union5<T1, T2, T3, T4, T5>;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 559 "Collections.ast"
		public: using Type1 = T1; ADV_CHECK_REF_STRUCT("T1", T1);
		#line 560 "Collections.ast"
		public: using Type2 = T2; ADV_CHECK_REF_STRUCT("T2", T2);
		#line 561 "Collections.ast"
		public: using Type3 = T3; ADV_CHECK_REF_STRUCT("T3", T3);
		#line 562 "Collections.ast"
		public: using Type4 = T4; ADV_CHECK_REF_STRUCT("T4", T4);
		#line 563 "Collections.ast"
		public: using Type5 = T5; ADV_CHECK_REF_STRUCT("T5", T5);
		private: union {
			#line 559 "Collections.ast"
			Type1 _Type1;
			#line 560 "Collections.ast"
			Type2 _Type2;
			#line 561 "Collections.ast"
			Type3 _Type3;
			#line 562 "Collections.ast"
			Type4 _Type4;
			#line 563 "Collections.ast"
			Type5 _Type5;
			
		};
		enum : unsigned char {
			_TAG__Type1, _TAG__Type2, _TAG__Type3, _TAG__Type4, _TAG__Type5
		} __union_internal_tag;
		public:
		#line 558 "Collections.ast"
		static constexpr int __variants = 5;
		#line 559 "Collections.ast"
		Union5(CppAdvance::In<Type1> value) : __union_internal_tag{ _TAG__Type1 } { new (&_Type1) Type1(value); }
		#line 560 "Collections.ast"
		Union5(CppAdvance::In<Type2> value) : __union_internal_tag{ _TAG__Type2 } { new (&_Type2) Type2(value); }
		#line 561 "Collections.ast"
		Union5(CppAdvance::In<Type3> value) : __union_internal_tag{ _TAG__Type3 } { new (&_Type3) Type3(value); }
		#line 562 "Collections.ast"
		Union5(CppAdvance::In<Type4> value) : __union_internal_tag{ _TAG__Type4 } { new (&_Type4) Type4(value); }
		#line 563 "Collections.ast"
		Union5(CppAdvance::In<Type5> value) : __union_internal_tag{ _TAG__Type5 } { new (&_Type5) Type5(value); }
		#line 9999 "Collections.ast"
		private: void __copy(const __self& other) {
			__union_internal_tag = other.__union_internal_tag;
			switch (__union_internal_tag) {
				#line 559 "Collections.ast"
				case _TAG__Type1: new (&_Type1) Type1(other._Type1); break;
				#line 560 "Collections.ast"
				case _TAG__Type2: new (&_Type2) Type2(other._Type2); break;
				#line 561 "Collections.ast"
				case _TAG__Type3: new (&_Type3) Type3(other._Type3); break;
				#line 562 "Collections.ast"
				case _TAG__Type4: new (&_Type4) Type4(other._Type4); break;
				#line 563 "Collections.ast"
				case _TAG__Type5: new (&_Type5) Type5(other._Type5); break;
				
			}
		}
		#line 558 "Collections.ast"
		public: Union5(const __self& other) { __copy(other); }
		#line 9999 "Collections.ast"
		private: void __move(__self&& other) {
			__union_internal_tag = other.__union_internal_tag;
			switch (__union_internal_tag) {
				#line 559 "Collections.ast"
				case _TAG__Type1: new (&_Type1) Type1(std::move(other._Type1)); break;
				#line 560 "Collections.ast"
				case _TAG__Type2: new (&_Type2) Type2(std::move(other._Type2)); break;
				#line 561 "Collections.ast"
				case _TAG__Type3: new (&_Type3) Type3(std::move(other._Type3)); break;
				#line 562 "Collections.ast"
				case _TAG__Type4: new (&_Type4) Type4(std::move(other._Type4)); break;
				#line 563 "Collections.ast"
				case _TAG__Type5: new (&_Type5) Type5(std::move(other._Type5)); break;
				
			}
		}
		#line 558 "Collections.ast"
		public: Union5(__self&& other) { __move(std::move(other)); }
		#line 9999 "Collections.ast"
		private: void __destroy() {
			switch (__union_internal_tag) {
				#line 559 "Collections.ast"
				case _TAG__Type1: _Type1.~Type1(); break;
				#line 560 "Collections.ast"
				case _TAG__Type2: _Type2.~Type2(); break;
				#line 561 "Collections.ast"
				case _TAG__Type3: _Type3.~Type3(); break;
				#line 562 "Collections.ast"
				case _TAG__Type4: _Type4.~Type4(); break;
				#line 563 "Collections.ast"
				case _TAG__Type5: _Type5.~Type5(); break;
				
			}
		}
		#line 558 "Collections.ast"
		public: ~Union5() { __destroy(); }
		#line 559 "Collections.ast"
		Union5& operator=(CppAdvance::In<Type1> value) {
			__destroy();
			__union_internal_tag = _TAG__Type1;
			new (&_Type1) Type1(value); return *this;
		}
		#line 560 "Collections.ast"
		Union5& operator=(CppAdvance::In<Type2> value) {
			__destroy();
			__union_internal_tag = _TAG__Type2;
			new (&_Type2) Type2(value); return *this;
		}
		#line 561 "Collections.ast"
		Union5& operator=(CppAdvance::In<Type3> value) {
			__destroy();
			__union_internal_tag = _TAG__Type3;
			new (&_Type3) Type3(value); return *this;
		}
		#line 562 "Collections.ast"
		Union5& operator=(CppAdvance::In<Type4> value) {
			__destroy();
			__union_internal_tag = _TAG__Type4;
			new (&_Type4) Type4(value); return *this;
		}
		#line 563 "Collections.ast"
		Union5& operator=(CppAdvance::In<Type5> value) {
			__destroy();
			__union_internal_tag = _TAG__Type5;
			new (&_Type5) Type5(value); return *this;
		}
		#line 558 "Collections.ast"
		public: __self& operator=(const __self& other) { __destroy(); __copy(other); return *this; }
		#line 558 "Collections.ast"
		public: __self& operator=(__self&& other) { __destroy(); __move(std::move(other)); return *this; }
		#line 559 "Collections.ast"
		public: auto GetType1() { if (__union_internal_tag != _TAG__Type1) throw std::logic_error("Type mismatch in the discriminated union"); return _Type1; }
		#line 560 "Collections.ast"
		public: auto GetType2() { if (__union_internal_tag != _TAG__Type2) throw std::logic_error("Type mismatch in the discriminated union"); return _Type2; }
		#line 561 "Collections.ast"
		public: auto GetType3() { if (__union_internal_tag != _TAG__Type3) throw std::logic_error("Type mismatch in the discriminated union"); return _Type3; }
		#line 562 "Collections.ast"
		public: auto GetType4() { if (__union_internal_tag != _TAG__Type4) throw std::logic_error("Type mismatch in the discriminated union"); return _Type4; }
		#line 563 "Collections.ast"
		public: auto GetType5() { if (__union_internal_tag != _TAG__Type5) throw std::logic_error("Type mismatch in the discriminated union"); return _Type5; }
		#line 9999 "Collections.ast"
		public: template<class __SomeT> bool Is() const noexcept {
			if constexpr (std::is_same_v<__SomeT, Type1>) return __union_internal_tag == _TAG__Type1;
			else if constexpr (std::is_same_v<__SomeT, Type2>) return __union_internal_tag == _TAG__Type2;
			else if constexpr (std::is_same_v<__SomeT, Type3>) return __union_internal_tag == _TAG__Type3;
			else if constexpr (std::is_same_v<__SomeT, Type4>) return __union_internal_tag == _TAG__Type4;
			else if constexpr (std::is_same_v<__SomeT, Type5>) return __union_internal_tag == _TAG__Type5;
			return false;
		}
		#line 9999 "Collections.ast"
		public: template<class __SomeT> CppAdvance::Nullable<__SomeT> As() const noexcept {
			if constexpr (std::is_same_v<__SomeT, Type1>) { if(__union_internal_tag == _TAG__Type1) return _Type1; }
			else if constexpr (std::is_same_v<__SomeT, Type2>) { if(__union_internal_tag == _TAG__Type2) return _Type2; }
			else if constexpr (std::is_same_v<__SomeT, Type3>) { if(__union_internal_tag == _TAG__Type3) return _Type3; }
			else if constexpr (std::is_same_v<__SomeT, Type4>) { if(__union_internal_tag == _TAG__Type4) return _Type4; }
			else if constexpr (std::is_same_v<__SomeT, Type5>) { if(__union_internal_tag == _TAG__Type5) return _Type5; }
			else static_assert(false, "Cannot to cast union type Union5 to __SomeT");
			return nullptr;
		}
		#line 9999 "Collections.ast"
		public: template<class __SomeT> bool operator==(const __SomeT& other) const noexcept {
			if constexpr (std::is_same_v<__SomeT, Type1>) return __union_internal_tag == _TAG__Type1 && _Type1 == other;
			else if constexpr (std::is_same_v<__SomeT, Type2>) return __union_internal_tag == _TAG__Type2 && _Type2 == other;
			else if constexpr (std::is_same_v<__SomeT, Type3>) return __union_internal_tag == _TAG__Type3 && _Type3 == other;
			else if constexpr (std::is_same_v<__SomeT, Type4>) return __union_internal_tag == _TAG__Type4 && _Type4 == other;
			else if constexpr (std::is_same_v<__SomeT, Type5>) return __union_internal_tag == _TAG__Type5 && _Type5 == other;
			return false;
		}
		
	};
	
	template<class T1, class T2, class T3, class T4, class T5, class T6> class __Class_Union6;
	#line 566 "Collections.ast"
	template<class T1, class T2, class T3, class T4, class T5, class T6> struct Union6 final : public CppAdvance::Union {
		public: using __self = Union6<T1, T2, T3, T4, T5, T6>;
		public: using __class = __Class_Union6<T1, T2, T3, T4, T5, T6>;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 567 "Collections.ast"
		public: using Type1 = T1; ADV_CHECK_REF_STRUCT("T1", T1);
		#line 568 "Collections.ast"
		public: using Type2 = T2; ADV_CHECK_REF_STRUCT("T2", T2);
		#line 569 "Collections.ast"
		public: using Type3 = T3; ADV_CHECK_REF_STRUCT("T3", T3);
		#line 570 "Collections.ast"
		public: using Type4 = T4; ADV_CHECK_REF_STRUCT("T4", T4);
		#line 571 "Collections.ast"
		public: using Type5 = T5; ADV_CHECK_REF_STRUCT("T5", T5);
		#line 572 "Collections.ast"
		public: using Type6 = T6; ADV_CHECK_REF_STRUCT("T6", T6);
		private: union {
			#line 567 "Collections.ast"
			Type1 _Type1;
			#line 568 "Collections.ast"
			Type2 _Type2;
			#line 569 "Collections.ast"
			Type3 _Type3;
			#line 570 "Collections.ast"
			Type4 _Type4;
			#line 571 "Collections.ast"
			Type5 _Type5;
			#line 572 "Collections.ast"
			Type6 _Type6;
			
		};
		enum : unsigned char {
			_TAG__Type1, _TAG__Type2, _TAG__Type3, _TAG__Type4, _TAG__Type5, _TAG__Type6
		} __union_internal_tag;
		public:
		#line 566 "Collections.ast"
		static constexpr int __variants = 6;
		#line 567 "Collections.ast"
		Union6(CppAdvance::In<Type1> value) : __union_internal_tag{ _TAG__Type1 } { new (&_Type1) Type1(value); }
		#line 568 "Collections.ast"
		Union6(CppAdvance::In<Type2> value) : __union_internal_tag{ _TAG__Type2 } { new (&_Type2) Type2(value); }
		#line 569 "Collections.ast"
		Union6(CppAdvance::In<Type3> value) : __union_internal_tag{ _TAG__Type3 } { new (&_Type3) Type3(value); }
		#line 570 "Collections.ast"
		Union6(CppAdvance::In<Type4> value) : __union_internal_tag{ _TAG__Type4 } { new (&_Type4) Type4(value); }
		#line 571 "Collections.ast"
		Union6(CppAdvance::In<Type5> value) : __union_internal_tag{ _TAG__Type5 } { new (&_Type5) Type5(value); }
		#line 572 "Collections.ast"
		Union6(CppAdvance::In<Type6> value) : __union_internal_tag{ _TAG__Type6 } { new (&_Type6) Type6(value); }
		#line 9999 "Collections.ast"
		private: void __copy(const __self& other) {
			__union_internal_tag = other.__union_internal_tag;
			switch (__union_internal_tag) {
				#line 567 "Collections.ast"
				case _TAG__Type1: new (&_Type1) Type1(other._Type1); break;
				#line 568 "Collections.ast"
				case _TAG__Type2: new (&_Type2) Type2(other._Type2); break;
				#line 569 "Collections.ast"
				case _TAG__Type3: new (&_Type3) Type3(other._Type3); break;
				#line 570 "Collections.ast"
				case _TAG__Type4: new (&_Type4) Type4(other._Type4); break;
				#line 571 "Collections.ast"
				case _TAG__Type5: new (&_Type5) Type5(other._Type5); break;
				#line 572 "Collections.ast"
				case _TAG__Type6: new (&_Type6) Type6(other._Type6); break;
				
			}
		}
		#line 566 "Collections.ast"
		public: Union6(const __self& other) { __copy(other); }
		#line 9999 "Collections.ast"
		private: void __move(__self&& other) {
			__union_internal_tag = other.__union_internal_tag;
			switch (__union_internal_tag) {
				#line 567 "Collections.ast"
				case _TAG__Type1: new (&_Type1) Type1(std::move(other._Type1)); break;
				#line 568 "Collections.ast"
				case _TAG__Type2: new (&_Type2) Type2(std::move(other._Type2)); break;
				#line 569 "Collections.ast"
				case _TAG__Type3: new (&_Type3) Type3(std::move(other._Type3)); break;
				#line 570 "Collections.ast"
				case _TAG__Type4: new (&_Type4) Type4(std::move(other._Type4)); break;
				#line 571 "Collections.ast"
				case _TAG__Type5: new (&_Type5) Type5(std::move(other._Type5)); break;
				#line 572 "Collections.ast"
				case _TAG__Type6: new (&_Type6) Type6(std::move(other._Type6)); break;
				
			}
		}
		#line 566 "Collections.ast"
		public: Union6(__self&& other) { __move(std::move(other)); }
		#line 9999 "Collections.ast"
		private: void __destroy() {
			switch (__union_internal_tag) {
				#line 567 "Collections.ast"
				case _TAG__Type1: _Type1.~Type1(); break;
				#line 568 "Collections.ast"
				case _TAG__Type2: _Type2.~Type2(); break;
				#line 569 "Collections.ast"
				case _TAG__Type3: _Type3.~Type3(); break;
				#line 570 "Collections.ast"
				case _TAG__Type4: _Type4.~Type4(); break;
				#line 571 "Collections.ast"
				case _TAG__Type5: _Type5.~Type5(); break;
				#line 572 "Collections.ast"
				case _TAG__Type6: _Type6.~Type6(); break;
				
			}
		}
		#line 566 "Collections.ast"
		public: ~Union6() { __destroy(); }
		#line 567 "Collections.ast"
		Union6& operator=(CppAdvance::In<Type1> value) {
			__destroy();
			__union_internal_tag = _TAG__Type1;
			new (&_Type1) Type1(value); return *this;
		}
		#line 568 "Collections.ast"
		Union6& operator=(CppAdvance::In<Type2> value) {
			__destroy();
			__union_internal_tag = _TAG__Type2;
			new (&_Type2) Type2(value); return *this;
		}
		#line 569 "Collections.ast"
		Union6& operator=(CppAdvance::In<Type3> value) {
			__destroy();
			__union_internal_tag = _TAG__Type3;
			new (&_Type3) Type3(value); return *this;
		}
		#line 570 "Collections.ast"
		Union6& operator=(CppAdvance::In<Type4> value) {
			__destroy();
			__union_internal_tag = _TAG__Type4;
			new (&_Type4) Type4(value); return *this;
		}
		#line 571 "Collections.ast"
		Union6& operator=(CppAdvance::In<Type5> value) {
			__destroy();
			__union_internal_tag = _TAG__Type5;
			new (&_Type5) Type5(value); return *this;
		}
		#line 572 "Collections.ast"
		Union6& operator=(CppAdvance::In<Type6> value) {
			__destroy();
			__union_internal_tag = _TAG__Type6;
			new (&_Type6) Type6(value); return *this;
		}
		#line 566 "Collections.ast"
		public: __self& operator=(const __self& other) { __destroy(); __copy(other); return *this; }
		#line 566 "Collections.ast"
		public: __self& operator=(__self&& other) { __destroy(); __move(std::move(other)); return *this; }
		#line 567 "Collections.ast"
		public: auto GetType1() { if (__union_internal_tag != _TAG__Type1) throw std::logic_error("Type mismatch in the discriminated union"); return _Type1; }
		#line 568 "Collections.ast"
		public: auto GetType2() { if (__union_internal_tag != _TAG__Type2) throw std::logic_error("Type mismatch in the discriminated union"); return _Type2; }
		#line 569 "Collections.ast"
		public: auto GetType3() { if (__union_internal_tag != _TAG__Type3) throw std::logic_error("Type mismatch in the discriminated union"); return _Type3; }
		#line 570 "Collections.ast"
		public: auto GetType4() { if (__union_internal_tag != _TAG__Type4) throw std::logic_error("Type mismatch in the discriminated union"); return _Type4; }
		#line 571 "Collections.ast"
		public: auto GetType5() { if (__union_internal_tag != _TAG__Type5) throw std::logic_error("Type mismatch in the discriminated union"); return _Type5; }
		#line 572 "Collections.ast"
		public: auto GetType6() { if (__union_internal_tag != _TAG__Type6) throw std::logic_error("Type mismatch in the discriminated union"); return _Type6; }
		#line 9999 "Collections.ast"
		public: template<class __SomeT> bool Is() const noexcept {
			if constexpr (std::is_same_v<__SomeT, Type1>) return __union_internal_tag == _TAG__Type1;
			else if constexpr (std::is_same_v<__SomeT, Type2>) return __union_internal_tag == _TAG__Type2;
			else if constexpr (std::is_same_v<__SomeT, Type3>) return __union_internal_tag == _TAG__Type3;
			else if constexpr (std::is_same_v<__SomeT, Type4>) return __union_internal_tag == _TAG__Type4;
			else if constexpr (std::is_same_v<__SomeT, Type5>) return __union_internal_tag == _TAG__Type5;
			else if constexpr (std::is_same_v<__SomeT, Type6>) return __union_internal_tag == _TAG__Type6;
			return false;
		}
		#line 9999 "Collections.ast"
		public: template<class __SomeT> CppAdvance::Nullable<__SomeT> As() const noexcept {
			if constexpr (std::is_same_v<__SomeT, Type1>) { if(__union_internal_tag == _TAG__Type1) return _Type1; }
			else if constexpr (std::is_same_v<__SomeT, Type2>) { if(__union_internal_tag == _TAG__Type2) return _Type2; }
			else if constexpr (std::is_same_v<__SomeT, Type3>) { if(__union_internal_tag == _TAG__Type3) return _Type3; }
			else if constexpr (std::is_same_v<__SomeT, Type4>) { if(__union_internal_tag == _TAG__Type4) return _Type4; }
			else if constexpr (std::is_same_v<__SomeT, Type5>) { if(__union_internal_tag == _TAG__Type5) return _Type5; }
			else if constexpr (std::is_same_v<__SomeT, Type6>) { if(__union_internal_tag == _TAG__Type6) return _Type6; }
			else static_assert(false, "Cannot to cast union type Union6 to __SomeT");
			return nullptr;
		}
		#line 9999 "Collections.ast"
		public: template<class __SomeT> bool operator==(const __SomeT& other) const noexcept {
			if constexpr (std::is_same_v<__SomeT, Type1>) return __union_internal_tag == _TAG__Type1 && _Type1 == other;
			else if constexpr (std::is_same_v<__SomeT, Type2>) return __union_internal_tag == _TAG__Type2 && _Type2 == other;
			else if constexpr (std::is_same_v<__SomeT, Type3>) return __union_internal_tag == _TAG__Type3 && _Type3 == other;
			else if constexpr (std::is_same_v<__SomeT, Type4>) return __union_internal_tag == _TAG__Type4 && _Type4 == other;
			else if constexpr (std::is_same_v<__SomeT, Type5>) return __union_internal_tag == _TAG__Type5 && _Type5 == other;
			else if constexpr (std::is_same_v<__SomeT, Type6>) return __union_internal_tag == _TAG__Type6 && _Type6 == other;
			return false;
		}
		
	};
	
	#line 575 "Collections.ast"
	template<class T> using __extension_575_T = T;
	#line 578 "Collections.ast"
	template<class T> inline auto operator*(__extension_575_T<T> const& __this LIFETIMEBOUND, CppAdvance::In<CppAdvance::f32> f)  -> const CppAdvance::f32;
	#line 580 "Collections.ast"
	template<class T> inline auto PrintInterface(__extension_575_T<T> const& __this LIFETIMEBOUND, CppAdvance::i32 x)  -> const CppAdvance::i32;
	#line 588 "Collections.ast"
	template<class T> inline const CppAdvance::f32 getAt(__extension_575_T<T> const& __this LIFETIMEBOUND, CppAdvance::f32 r, CppAdvance::f32 g, CppAdvance::f32 b);
	#line 588 "Collections.ast"
	template<class T> inline const CppAdvance::f32 _operator_subscript(__extension_575_T<T> const& __this LIFETIMEBOUND, CppAdvance::f32 r, CppAdvance::f32 g, CppAdvance::f32 b) { return getAt(__this, r, g, b); }
	#line 590 "Collections.ast"
	template<class T> inline auto __construct_(CppAdvance::ConstructorProxy<__extension_575_T<T>> __ctordata, CppAdvance::i32 x, CppAdvance::Str txt)  -> decltype(auto);
	#line 595 "Collections.ast"
	template<class T> inline auto __construct_(CppAdvance::ConstructorProxy<__extension_575_T<T>> __ctordata, typename CppAdvance::MemorySpace mem, CppAdvance::i32 x, CppAdvance::Str txt)  -> decltype(auto);
	#line 576 "Collections.ast"
	template<class T> inline auto getAsString(__extension_575_T<T> const& __this ) -> const CppAdvance::Str;
	
	#line 604 "Collections.ast"
	template<class T> using __extension_604_T = T;
	#line 606 "Collections.ast"
	template<class T> inline constexpr auto __static_GetSuperCount(CppAdvance::i32 x, CppAdvance::i32 y)  -> const CppAdvance::i32;
	#line 605 "Collections.ast"
	template<class T> inline constexpr auto __static_getCount3() -> const CppAdvance::i32;
	
	#line 609 "Collections.ast"
	template<class T> requires(CppAdvance::TypeIs<T, CppAdvance::i32>()) using __extension_609_T = T;
	#line 613 "Collections.ast"
	template<class T> [[clang::annotate("UserAttr: AllowPostfix")]] inline constexpr auto _operator_bsl_mul_div(__extension_609_T<T> const& __this LIFETIMEBOUND)  -> const CppAdvance::i32;
	template<class T> [[clang::annotate("UserAttr: AllowPostfix")]] inline constexpr auto _operator_bsl_mul_div_postfix(__extension_609_T<T> & __this)  -> decltype(auto);
	#line 616 "Collections.ast"
	template<class T> [[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_bsl_mul_div(__extension_609_T<T> const& __this LIFETIMEBOUND, CppAdvance::f32 other)  -> const CppAdvance::f32;
	template<class T> [[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_bsl_mul_div(CppAdvance::f32 other, const __extension_609_T<T> & __this)  -> decltype(auto);
	#line 610 "Collections.ast"
	template<class T> inline constexpr auto getkm(__extension_609_T<T> const& __this ) -> const CppAdvance::i32;
	
	#line 619 "Collections.ast"
	using __extension_619_f64 = CppAdvance::f64;
	#line 620 "Collections.ast"
	inline constexpr auto getkm(__extension_619_f64 const& __this ) -> const CppAdvance::f64;
	
	#line 623 "Collections.ast"
	using __extension_623_str = CppAdvance::Str;
	#line 624 "Collections.ast"
	inline constexpr auto getkm(__extension_623_str const& __this ) -> const CppAdvance::Str;
	
	class __Class_TestStruct;
	#pragma pack(push, 1)
	#line 631 "Collections.ast"
	struct alignas((alignof(CppAdvance::i64))) TestStruct final : public CppAdvance::Struct {
		public: using __self = TestStruct;
		public: using __class = __Class_TestStruct;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 632 "Collections.ast"
		private: typename System::CInt x : 4; ADV_CHECK_REF_STRUCT("System.CInt", typename System::CInt);
		#line 633 "Collections.ast"
		private: typename System::CInt y : 4; ADV_CHECK_REF_STRUCT("System.CInt", typename System::CInt);
		public: TestStruct(typename System::CInt _x, typename System::CInt _y) : x{_x}, y{_y} {}
		#line 635 "Collections.ast"
		static_assert(CppAdvance::usize(sizeof(CppAdvance::i32)) == CppAdvance::i32(4), "i32 must be 4 bytes");
		template <size_t I> friend auto& get(TestStruct&);
		template <size_t I> friend const auto& get(const TestStruct&);
		
	};
	#pragma pack(pop)
	
	#line 655 "Collections.ast"
	using __extension_655_Vector3 = Vector3;
	#line 657 "Collections.ast"
	inline auto getNext(__extension_655_Vector3 const& __this LIFETIMEBOUND)  -> const Next;
	
	
	#line 64 "Collections.ast"
	class __Class_Vector3 final : public CppAdvance::ValueType
	{
		#line 9999 "Collections.ast"
		public: using __underlying = Vector3; using __self = __underlying;
		__self __value;
		using NestedStruct = __self::NestedStruct;
		__Class_Vector3(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
		operator __underlying() const noexcept { return __value; }
		auto getName() const -> CppAdvance::Str { return __value.getName(); }
		auto format() const noexcept -> CppAdvance::Str const { ADV_EXPRESSION_BODY(__value.format()); }
		auto HashCode() const  -> CppAdvance::usize const { ADV_EXPRESSION_BODY(__value.HashCode()); }
		static auto AStaticMethod(CppAdvance::i32 i) -> CppAdvance::i32 const { ADV_EXPRESSION_BODY(__self::AStaticMethod(i)); }
		operator CppAdvance::f32() const noexcept { return static_cast<CppAdvance::f32>(__value); }
		auto operator+(const __self& other) const  -> __self const { ADV_EXPRESSION_BODY(__value.operator+(other)); }
		auto operator++() -> __self & { ADV_EXPRESSION_BODY(__value.operator++()); }
		void setAt(CppAdvance::i32 idx, const CppAdvance::f32& value)  { __value.setAt(idx, value); }
		decltype(auto) getAt(CppAdvance::i32 idx)  { return __value._operator_subscript(idx); }
		decltype(auto) getAt(CppAdvance::i32 idx) const  { return __value._operator_subscript(idx); }
		decltype(auto) getAt(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3)  { return __value._operator_subscript(idx, idx2, idx3); }
		decltype(auto) getAt(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3) const  { return __value._operator_subscript(idx, idx2, idx3); }
		auto getX() const  -> CppAdvance::f32 const { ADV_EXPRESSION_BODY(__value.getX()); }
		static auto Method(CppAdvance::i32 x, CppAdvance::i32 y, CppAdvance::i32 z) -> CppAdvance::i32 const { ADV_EXPRESSION_BODY(__self::Method(x, y, z)); }
		auto Reset() -> void { ADV_EXPRESSION_BODY(__value.Reset()); }
		
	};
	#line 64 "Collections.ast"
	ADV_CHECK_FOR_CONCRETE(Vector3);
	
#line 203 "Collections.ast"
	class __Class_BaseClass : public CppAdvance::Object {
		public: using __self = BaseClass;
		private: using ___super = CppAdvance::Object;
		public: using __selfClass = __Class_BaseClass;
		friend class __self;
		friend class __self::__weak_ref;
		#define ADV_PROPERTY_SELF __selfClass
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 204 "Collections.ast"
		public: inline virtual auto getNext() const  -> const Next;
		
#define ADV_PROPERTY_SELF __self
	};
	
	#line 203 "Collections.ast"
	ADV_CHECK_FOR_CONCRETE(BaseClass);
	
#line 207 "Collections.ast"
	class ADV_NOVTABLE __Class_VectorClass ADV_ABSTRACT : public CppAdvance::ClassParent<BaseClass> {
		public: using __self = VectorClass;
		private: using ___super = CppAdvance::ClassParent<BaseClass>;
		public: using __selfClass = __Class_VectorClass;
		friend class __self;
		friend class __self::__weak_ref;
		#define ADV_PROPERTY_SELF __selfClass
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		public: using NestedClass = __self::NestedClass;
		#line 216 "Collections.ast"
		private: friend class TestStruct; friend class __Class_TestStruct;
		#line 217 "Collections.ast"
		private: template<class T> friend class TestStruct2; template<class T> friend class __Class_TestStruct2;
		#line 218 "Collections.ast"
		private: friend const CppAdvance::i32 func3(CppAdvance::i32 x);
		#line 210 "Collections.ast"
		public: mutable CppAdvance::f32 x; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
		#line 210 "Collections.ast"
		public: mutable CppAdvance::f32 y; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
		#line 210 "Collections.ast"
		public: mutable CppAdvance::f32 z; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
		#line 239 "Collections.ast"
		public: static CppAdvance::i32 Count2; ADV_CHECK_REF_STRUCT("i32", CppAdvance::i32);
		#line 241 "Collections.ast"
		public: static const Vector3 ZERO; ADV_CHECK_REF_STRUCT("Vector3", Vector3);
		#line 240 "Collections.ast"
		public: static constexpr auto BYTES = CppAdvance::i32(24);
		#line 242 "Collections.ast"
		public: using Coords = __ntuples::NamedTuple_6893f862d6c49683;
		#line 234 "Collections.ast"
		public: virtual auto setCount(const CppAdvance::i32& value) -> __selfClass& = 0;
		#line 234 "Collections.ast"
		public: virtual auto getCount() const  -> CppAdvance::i32 = 0;
		#line 9999 "Collections.ast"
		ADV_PROPERTY_GETTER_SETTER(public, Count, public, getCount, public, setCount, CppAdvance::i32);
		#line 237 "Collections.ast"
		public: virtual auto setName(const CppAdvance::Str& value) -> __selfClass& = 0;
		#line 237 "Collections.ast"
		public: virtual auto getName() const  -> CppAdvance::Str = 0;
		#line 9999 "Collections.ast"
		ADV_PROPERTY_GETTER_SETTER(public, Name, public, getName, public, setName, CppAdvance::Str);
		#line 221 "Collections.ast"
		public: inline constexpr auto format() const noexcept -> const CppAdvance::Str;
		#line 259 "Collections.ast"
		protected: inline constexpr __Class_VectorClass()  = default;
		#line 261 "Collections.ast"
		protected: inline constexpr __Class_VectorClass(CppAdvance::f32 x, CppAdvance::f32 y, CppAdvance::f32 z) noexcept;
		#line 267 "Collections.ast"
		protected: template<class U> inline constexpr explicit __Class_VectorClass(U f) ;
		#line 272 "Collections.ast"
		protected: inline explicit __Class_VectorClass(CppAdvance::In<__self> other) ;
		inline __Class_VectorClass(__selfClass& copy) : __Class_VectorClass(__self(copy)) {}
		#line 276 "Collections.ast"
		public: inline ~__Class_VectorClass() noexcept;
		#line 281 "Collections.ast"
		public: inline explicit operator CppAdvance::f32() const noexcept;
		public: inline CppAdvance::f32& getAt(CppAdvance::i32 idx);
		inline const CppAdvance::f32& getAt(CppAdvance::i32 idx) const;
		#line 313 "Collections.ast"
		public: inline auto _operator_subscript(CppAdvance::i32 idx)  LIFETIMEBOUND -> CppAdvance::f32&;
		public: inline auto _operator_subscript(CppAdvance::i32 idx) const  -> const CppAdvance::f32&;
		public: inline const CppAdvance::f32 getAt(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3);
		inline const CppAdvance::f32 getAt(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3) const;
		#line 314 "Collections.ast"
		public: inline auto _operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3)  -> const CppAdvance::f32;
		public: inline auto _operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3) const  -> const CppAdvance::f32;
		#line 316 "Collections.ast"
		public: virtual auto getX() const  -> const CppAdvance::f32 = 0;
		#line 317 "Collections.ast"
		public: inline virtual auto getNext() const  -> const Next final;
		#line 320 "Collections.ast"
		public: inline constexpr static auto Method(CppAdvance::i32 x, CppAdvance::i32 y, CppAdvance::i32 z)  -> const CppAdvance::i32;
		#line 325 "Collections.ast"
		public: inline constexpr auto Reset() const  -> void;
		#line 333 "Collections.ast"
		public: template<class U> inline constexpr auto TemplateMethod(U x, U y, U z) const  -> const Coords;
		
#define ADV_PROPERTY_SELF __self
	};
	
	#line 207 "Collections.ast"
	ADV_CHECK_FOR_ABSTRACT(VectorClass);
	#line 207 "Collections.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(VectorClass, BaseClass, BaseClass, VectorClass);
	
#line 352 "Collections.ast"
	class __Class_ConcreteVectorClass : public CppAdvance::ClassParent<VectorClass> {
		public: using __self = ConcreteVectorClass;
		private: using ___super = CppAdvance::ClassParent<VectorClass>;
		public: using __selfClass = __Class_ConcreteVectorClass;
		friend class __self;
		friend class __self::__weak_ref;
		#define ADV_PROPERTY_SELF __selfClass
		#line 352 "Collections.ast"
		ADV_CHECK_INTERFACE(IInterface, IInterface);
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 353 "Collections.ast"
		public: using ElementType = CppAdvance::i32;
		#line 365 "Collections.ast"
		private: mutable CppAdvance::Str p_Name = CppAdvance::Str{u"ConcreteVectorClass"}; ADV_CHECK_REF_STRUCT("str", CppAdvance::Str);
		#line 365 "Collections.ast"
		public: inline auto setName(const CppAdvance::Str& value) -> __selfClass&;
		#line 365 "Collections.ast"
		public: inline auto getName() const  -> CppAdvance::Str;
		#line 9999 "Collections.ast"
		ADV_PROPERTY_GETTER_SETTER(public, Name, public, getName, public, setName, CppAdvance::Str);
		#line 367 "Collections.ast"
		private: mutable CppAdvance::i32 p_ZZ = CppAdvance::i32(5); ADV_CHECK_REF_STRUCT("i32", CppAdvance::i32);
		#line 367 "Collections.ast"
		public: inline auto setZZ(const CppAdvance::i32& value) -> __selfClass&;
		#line 367 "Collections.ast"
		public: inline auto getZZ() const  -> CppAdvance::i32;
		#line 9999 "Collections.ast"
		ADV_PROPERTY_GETTER_SETTER(public, ZZ, public, getZZ, public, setZZ, CppAdvance::i32);
		#line 369 "Collections.ast"
		private: mutable CppAdvance::i32 p_Count = CppAdvance::i32(1); ADV_CHECK_REF_STRUCT("i32", CppAdvance::i32);
		#line 374 "Collections.ast"
		private: virtual auto setCount(const CppAdvance::i32& value) -> __selfClass& final;
		#line 370 "Collections.ast"
		public: virtual auto getCount() const  -> CppAdvance::i32 final;
		#line 9999 "Collections.ast"
		ADV_PROPERTY_GETTER_SETTER(public, Count, public, getCount, private, setCount, CppAdvance::i32);
		#line 381 "Collections.ast"
		public: inline constexpr auto getCount123() const  -> CppAdvance::i32;
		#line 9999 "Collections.ast"
		ADV_PROPERTY_GETTER(public, Count123, getCount123, CppAdvance::i32);
		#line 391 "Collections.ast"
		public: inline constexpr static auto getName2()  -> CppAdvance::Str;
		#line 9999 "Collections.ast"
		ADV_PROPERTY_GETTER_STATIC(public, , Name2, getName2, CppAdvance::Str);
		#line 355 "Collections.ast"
		public: inline constexpr __Class_ConcreteVectorClass()  = default;
		#line 357 "Collections.ast"
		public: inline constexpr __Class_ConcreteVectorClass(CppAdvance::f32 x, CppAdvance::f32 y, CppAdvance::f32 z) noexcept;
		#line 361 "Collections.ast"
		public: inline constexpr  __Class_ConcreteVectorClass(CppAdvance::i32 i) noexcept;
		#line 383 "Collections.ast"
		public: inline virtual auto getX() const  -> const CppAdvance::f32 final;
		#line 385 "Collections.ast"
		public: inline auto operator+(const ConcreteVectorClass& other) const  -> const ConcreteVectorClass;
		#line 386 "Collections.ast"
		public: inline auto GetMagicNumber(CppAdvance::In<VectorClass> i) const  -> const CppAdvance::f32;
		#line 388 "Collections.ast"
		public: inline auto operator==(CppAdvance::In<__self> other) const  -> const bool;
		#line 390 "Collections.ast"
		public: inline constexpr static auto AbstractStaticMethod(CppAdvance::i32 i)  -> const CppAdvance::i32;
		
#define ADV_PROPERTY_SELF __self
	};
	
	#line 352 "Collections.ast"
	ADV_CHECK_FOR_CONCRETE(ConcreteVectorClass);
	#line 352 "Collections.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(ConcreteVectorClass, VectorClass, VectorClass, ConcreteVectorClass);
	#line 352 "Collections.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(ConcreteVectorClass, IInterface, IInterface, ConcreteVectorClass);
	
#line 399 "Collections.ast"
	class __Class_Next : public CppAdvance::Object {
		public: using __self = Next;
		private: using ___super = CppAdvance::Object;
		public: using __selfClass = __Class_Next;
		friend class __self;
		friend class __self::__weak_ref;
		#define ADV_PROPERTY_SELF __selfClass
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 400 "Collections.ast"
		public: mutable CppAdvance::i32 i; ADV_CHECK_REF_STRUCT("i32", CppAdvance::i32);
		#line 401 "Collections.ast"
		public: mutable CppAdvance::Nullable<Next>::__weak_ref v;
		#line 403 "Collections.ast"
		public: inline __Class_Next()  = default;
		#line 405 "Collections.ast"
		public: inline ~__Class_Next() ;
		#line 407 "Collections.ast"
		public: inline explicit __Class_Next(CppAdvance::i32 i) ;
		#line 412 "Collections.ast"
		public: inline explicit __Class_Next(CppAdvance::In<__self> other) ;
		inline __Class_Next(__selfClass& copy) : __Class_Next(__self(copy)) {}
		#line 416 "Collections.ast"
		public: inline auto operator*() const  -> const CppAdvance::i32;
		#line 418 "Collections.ast"
		public: inline auto printNext() const  -> void;
		
#define ADV_PROPERTY_SELF __self
	};
	
	#line 399 "Collections.ast"
	ADV_CHECK_FOR_CONCRETE(Next);
	

	#line 454 "Collections.ast"
	class __Class_DayOfWeek final : public CppAdvance::ValueType
	{
		#line 9999 "Collections.ast"
		public: using __underlying = DayOfWeek; using __self = __underlying;
		__self __value;
		__Class_DayOfWeek(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
		operator __underlying() const noexcept { return __value; }
		
	};
	#line 454 "Collections.ast"
	ADV_CHECK_FOR_CONCRETE(DayOfWeek);
	

	#line 465 "Collections.ast"
	class __Class_Options final : public CppAdvance::ValueType
	{
		#line 9999 "Collections.ast"
		public: using __underlying = Options; using __self = __underlying;
		__self __value;
		__Class_Options(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
		operator __underlying() const noexcept { return __value; }
		auto getIsWeekend() const -> bool { return __value.getIsWeekend(); }
		
	};
	#line 465 "Collections.ast"
	ADV_CHECK_FOR_CONCRETE(Options);
	

	#line 480 "Collections.ast"
	class __Class_Text final : public CppAdvance::ValueType
	{
		#line 9999 "Collections.ast"
		public: using __underlying = Text; using __self = __underlying;
		__self __value;
		__Class_Text(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
		operator __underlying() const noexcept { return __value; }
		auto ToShortString() const  -> CppAdvance::Str const { ADV_EXPRESSION_BODY(__value.ToShortString()); }
		
	};
	#line 480 "Collections.ast"
	ADV_CHECK_FOR_CONCRETE(Text);
	
#line 495 "Collections.ast"
	class __Class_ComplexVariant final : public CppAdvance::EnumClass {
		public: using __self = ComplexVariant;
		private: using ___super = CppAdvance::EnumClass;
		public: using __selfClass = __Class_ComplexVariant;
		friend class __self;
		friend class __self::__weak_ref;
		#define ADV_PROPERTY_SELF __selfClass
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 502 "Collections.ast"
		public: const CppAdvance::i32 i; ADV_CHECK_REF_STRUCT("i32", CppAdvance::i32);
		#line 503 "Collections.ast"
		public: const CppAdvance::f32 f; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
		#line 504 "Collections.ast"
		public: const CppAdvance::Str s; ADV_CHECK_REF_STRUCT("str", CppAdvance::Str);
		private: __Class_ComplexVariant(CppAdvance::i32 _i, CppAdvance::f32 _f, CppAdvance::Str _s) : i{_i}, f{_f}, s{_s} {}
		#line 496 "Collections.ast"
		public: static  const __self Value1;
		#line 497 "Collections.ast"
		public: static  const __self Value2;
		#line 498 "Collections.ast"
		public: static  const __self Value3;
		#line 499 "Collections.ast"
		public: static  const __self Value4;
		#line 495 "Collections.ast"
		private: static  const __self __values[];
		#line 495 "Collections.ast"
		public: static std::span<const __self> GetValues() noexcept { return { __values, 4 }; }
		#line 495 "Collections.ast"
		public: static constexpr int __variants = 4;
		#line 516 "Collections.ast"
		public: inline constexpr auto getCount123() const  -> CppAdvance::i32;
		#line 9999 "Collections.ast"
		ADV_PROPERTY_GETTER(public, Count123, getCount123, CppAdvance::i32);
		#line 518 "Collections.ast"
		public: inline constexpr static auto getCount10()  -> CppAdvance::i32;
		#line 9999 "Collections.ast"
		ADV_PROPERTY_GETTER_STATIC(public, , Count10, getCount10, CppAdvance::i32);
		#line 507 "Collections.ast"
		public: inline auto operator*() const  -> const CppAdvance::i32;
		#line 509 "Collections.ast"
		public: inline auto printVariant() const  -> void;
		#line 514 "Collections.ast"
		public: inline auto GetMagicNumber(CppAdvance::In<VectorClass> f) const  -> const CppAdvance::f32;
		
#define ADV_PROPERTY_SELF __self
	};
	
	#line 495 "Collections.ast"
	ADV_CHECK_FOR_CONCRETE(ComplexVariant);
	

	#line 521 "Collections.ast"
	class __Class_Media final : public CppAdvance::ValueType
	{
		#line 521 "Collections.ast"
		ADV_CHECK_INTERFACE(IMagicNumber, IMagicNumber);
		#line 9999 "Collections.ast"
		public: using __underlying = Media; using __self = __underlying;
		__self __value;
		__Class_Media(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
		operator __underlying() const noexcept { return __value; }
		auto getCount123() const -> CppAdvance::i32 { return __value.getCount123(); }
		auto printVariant() const  -> void { ADV_EXPRESSION_BODY(__value.printVariant()); }
		auto GetMagicNumber(CppAdvance::In<VectorClass> f) const  -> CppAdvance::f32 const { ADV_EXPRESSION_BODY(__value.GetMagicNumber(f)); }
		
	};
	#line 521 "Collections.ast"
	ADV_CHECK_FOR_CONCRETE(Media);
	#line 521 "Collections.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(Media, IMagicNumber, IMagicNumber, Media);
	

	#line 540 "Collections.ast"
	template<class T1, class T2> class __Class_Union2 final : public CppAdvance::ValueType
	{
		#line 9999 "Collections.ast"
		public: using __underlying = Union2<T1, T2>; using __self = __underlying;
		__self __value;
		__Class_Union2(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
		operator __underlying() const noexcept { return __value; }
		
	};
	

	#line 545 "Collections.ast"
	template<class T1, class T2, class T3> class __Class_Union3 final : public CppAdvance::ValueType
	{
		#line 9999 "Collections.ast"
		public: using __underlying = Union3<T1, T2, T3>; using __self = __underlying;
		__self __value;
		__Class_Union3(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
		operator __underlying() const noexcept { return __value; }
		
	};
	

	#line 551 "Collections.ast"
	template<class T1, class T2, class T3, class T4> class __Class_Union4 final : public CppAdvance::ValueType
	{
		#line 9999 "Collections.ast"
		public: using __underlying = Union4<T1, T2, T3, T4>; using __self = __underlying;
		__self __value;
		__Class_Union4(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
		operator __underlying() const noexcept { return __value; }
		
	};
	

	#line 558 "Collections.ast"
	template<class T1, class T2, class T3, class T4, class T5> class __Class_Union5 final : public CppAdvance::ValueType
	{
		#line 9999 "Collections.ast"
		public: using __underlying = Union5<T1, T2, T3, T4, T5>; using __self = __underlying;
		__self __value;
		__Class_Union5(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
		operator __underlying() const noexcept { return __value; }
		
	};
	

	#line 566 "Collections.ast"
	template<class T1, class T2, class T3, class T4, class T5, class T6> class __Class_Union6 final : public CppAdvance::ValueType
	{
		#line 9999 "Collections.ast"
		public: using __underlying = Union6<T1, T2, T3, T4, T5, T6>; using __self = __underlying;
		__self __value;
		__Class_Union6(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
		operator __underlying() const noexcept { return __value; }
		
	};
	

	#line 631 "Collections.ast"
	class __Class_TestStruct final : public CppAdvance::ValueType
	{
		#line 9999 "Collections.ast"
		public: using __underlying = TestStruct; using __self = __underlying;
		__self __value;
		__Class_TestStruct(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
		operator __underlying() const noexcept { return __value; }
		
	};
	#line 631 "Collections.ast"
	ADV_CHECK_FOR_CONCRETE(TestStruct);
	
namespace __ntuples {
		#line 9999 "Collections.ast"
		struct NamedTuple_4e7be1ed49b09d71 final : public CppAdvance::Struct { 
			using __class = CppAdvance::__Class_Basic<NamedTuple_4e7be1ed49b09d71>;
			CppAdvance::i32 i;
			CppAdvance::f64 f;
			CppAdvance::Str s;
			NamedTuple_4e7be1ed49b09d71() = default;
			NamedTuple_4e7be1ed49b09d71(CppAdvance::In<CppAdvance::i32> _i, CppAdvance::In<CppAdvance::f64> _f, CppAdvance::In<CppAdvance::Str> _s) : i{_i}, f{_f}, s{_s} {}
			FORCE_INLINE decltype(auto) __ref() noexcept { return *this; }
			FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
			template <size_t I> friend auto& get(__ntuples::NamedTuple_4e7be1ed49b09d71&);
			template <size_t I> friend const auto& get(const __ntuples::NamedTuple_4e7be1ed49b09d71&);
			
		};
		template <> inline auto& get<0>(__ntuples::NamedTuple_4e7be1ed49b09d71& t) { return t.i; }
		template <> inline const auto& get<0>(const __ntuples::NamedTuple_4e7be1ed49b09d71& t) { return t.i; }
		template <> inline auto& get<1>(__ntuples::NamedTuple_4e7be1ed49b09d71& t) { return t.f; }
		template <> inline const auto& get<1>(const __ntuples::NamedTuple_4e7be1ed49b09d71& t) { return t.f; }
		template <> inline auto& get<2>(__ntuples::NamedTuple_4e7be1ed49b09d71& t) { return t.s; }
		template <> inline const auto& get<2>(const __ntuples::NamedTuple_4e7be1ed49b09d71& t) { return t.s; }
		
	}

}
namespace std {
	template <> struct tuple_size<System::Application::__ntuples::NamedTuple_4e7be1ed49b09d71> : integral_constant<size_t, 3> {};
	template <> struct tuple_element<0, System::Application::__ntuples::NamedTuple_4e7be1ed49b09d71> { using type = decltype(std::declval<System::Application::__ntuples::NamedTuple_4e7be1ed49b09d71>().i); };
	template <> struct tuple_element<1, System::Application::__ntuples::NamedTuple_4e7be1ed49b09d71> { using type = decltype(std::declval<System::Application::__ntuples::NamedTuple_4e7be1ed49b09d71>().f); };
	template <> struct tuple_element<2, System::Application::__ntuples::NamedTuple_4e7be1ed49b09d71> { using type = decltype(std::declval<System::Application::__ntuples::NamedTuple_4e7be1ed49b09d71>().s); };
	
}

namespace System::Application {namespace __ntuples {
		#line 9999 "Collections.ast"
		struct NamedTuple_6893f862d6c49683 final : public CppAdvance::Struct { 
			using __class = CppAdvance::__Class_Basic<NamedTuple_6893f862d6c49683>;
			CppAdvance::i32 x;
			CppAdvance::i32 y;
			CppAdvance::i32 z;
			NamedTuple_6893f862d6c49683() = default;
			NamedTuple_6893f862d6c49683(CppAdvance::In<CppAdvance::i32> _x, CppAdvance::In<CppAdvance::i32> _y, CppAdvance::In<CppAdvance::i32> _z) : x{_x}, y{_y}, z{_z} {}
			FORCE_INLINE decltype(auto) __ref() noexcept { return *this; }
			FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
			template <size_t I> friend auto& get(__ntuples::NamedTuple_6893f862d6c49683&);
			template <size_t I> friend const auto& get(const __ntuples::NamedTuple_6893f862d6c49683&);
			
		};
		template <> inline auto& get<0>(__ntuples::NamedTuple_6893f862d6c49683& t) { return t.x; }
		template <> inline const auto& get<0>(const __ntuples::NamedTuple_6893f862d6c49683& t) { return t.x; }
		template <> inline auto& get<1>(__ntuples::NamedTuple_6893f862d6c49683& t) { return t.y; }
		template <> inline const auto& get<1>(const __ntuples::NamedTuple_6893f862d6c49683& t) { return t.y; }
		template <> inline auto& get<2>(__ntuples::NamedTuple_6893f862d6c49683& t) { return t.z; }
		template <> inline const auto& get<2>(const __ntuples::NamedTuple_6893f862d6c49683& t) { return t.z; }
		
	}

}
namespace std {
	template <> struct tuple_size<System::Application::__ntuples::NamedTuple_6893f862d6c49683> : integral_constant<size_t, 3> {};
	template <> struct tuple_element<0, System::Application::__ntuples::NamedTuple_6893f862d6c49683> { using type = decltype(std::declval<System::Application::__ntuples::NamedTuple_6893f862d6c49683>().x); };
	template <> struct tuple_element<1, System::Application::__ntuples::NamedTuple_6893f862d6c49683> { using type = decltype(std::declval<System::Application::__ntuples::NamedTuple_6893f862d6c49683>().y); };
	template <> struct tuple_element<2, System::Application::__ntuples::NamedTuple_6893f862d6c49683> { using type = decltype(std::declval<System::Application::__ntuples::NamedTuple_6893f862d6c49683>().z); };
	
}

namespace System::Application {//###############################################################################
//# Free function declarations
//###############################################################################
#line 27 "Collections.ast"
	inline constexpr auto square(auto a)  -> decltype(auto);
#line 29 "Collections.ast"
	[[clang::annotate("varargs:1")]] auto printParams(CppAdvance::Str s, std::initializer_list<CppAdvance::i32> params)  -> void;
#line 36 "Collections.ast"
	[[clang::annotate("varargs:1")]] auto printParams(CppAdvance::Str s, std::initializer_list<CppAdvance::Str> params)  -> void;
#line 54 "Collections.ast"
	template<class T, int32_t U> auto sum(T a, T b)  -> decltype(auto);
#line 55 "Collections.ast"
	template<> inline constexpr auto sum<CppAdvance::i32, CppAdvance::i32(15)>(CppAdvance::i32 a, CppAdvance::i32 b)  -> decltype(auto);
#line 82 "Collections.ast"
	inline auto func4(CppAdvance::i32 x)  -> const CppAdvance::i32;
#line 397 "Collections.ast"
	inline auto _operator_subscript(CppAdvance::In<VectorClass> vec, CppAdvance::f32 x, CppAdvance::f32 y)  -> const CppAdvance::f32;
#line 627 "Collections.ast"
	inline auto getSum(CppAdvance::In<VectorClass> vec)  -> const CppAdvance::f32;
#line 638 "Collections.ast"
	template<class T1, class T2> inline auto ttest(T1 x, T2 y)  -> const CppAdvance::i32;
#line 641 "Collections.ast"
	template<class... TArgs> inline auto vsum(TArgs&&... args)  -> decltype(auto);
//###############################################################################
//# Global compile-time constants
//###############################################################################
#if (_DEBUG)
#line 22 "Collections.ast"
template<class T> inline constexpr T NORMAL_CONSTANT = CppAdvance::i32(45);
#endif 
#if (_DEBUG)
#line 23 "Collections.ast"
inline constexpr auto INT_CONSTANT = NORMAL_CONSTANT<CppAdvance::i32>;
#endif 
#if (_DEBUG)
#line 24 "Collections.ast"
inline constexpr auto LONG_CONSTANT = NORMAL_CONSTANT<CppAdvance::i64>;
#endif 
//###############################################################################
//# Global variable declarations
//###############################################################################
#line 4 "Collections.ast"
[[clang::annotate("unsafe")]] extern volatile CppAdvance::Unsafe::__VolatileRawPtr<const CppAdvance::char16> globalVar;
#line 5 "Collections.ast"
[[clang::annotate("unsafe")]] extern const CppAdvance::Unsafe::__RawPtr<CppAdvance::i32> globalVar1;
//###############################################################################
//# Function definitions
//###############################################################################

#line 27 "Collections.ast"
	inline constexpr auto square(auto a)  -> decltype(auto)
	{
		#line 27 "Collections.ast"
		ADV_EXPRESSION_BODY(a * a); 
	}
#line 55 "Collections.ast"
	template<> inline constexpr auto sum<CppAdvance::i32, CppAdvance::i32(15)>(CppAdvance::i32 a, CppAdvance::i32 b)  -> decltype(auto)
	{
		#line 55 "Collections.ast"
		ADV_EXPRESSION_BODY(a + b + CppAdvance::i32(15)); 
	}
#line 61 "Collections.ast"
	inline Span::~Span() noexcept
	{
		#line 61 "Collections.ast"
		print(CppAdvance::Str{u"Span deiniting"}); 
	}
#line 77 "Collections.ast"
	inline Vector3::__sctor::~__sctor() 
	{
		#line 77 "Collections.ast"
		ADV_EXPRESSION_BODY(print(CppAdvance::Str{u"Static destructor call!"})); 
	}
#line 82 "Collections.ast"
	inline auto func4(CppAdvance::i32 x)  -> const CppAdvance::i32
	{
		#line 94 "Collections.ast"
		return CppAdvance::i32(0);
	}
#line 98 "Collections.ast"
	inline constexpr auto Vector3::format() const noexcept -> const CppAdvance::Str
	{
		#line 98 "Collections.ast"
		ADV_EXPRESSION_BODY(CppAdvance::Str{u"test"}); 
	}
#line 99 "Collections.ast"
	inline constexpr auto Vector3::HashCode() const  -> const CppAdvance::usize
	{
		#line 99 "Collections.ast"
		ADV_EXPRESSION_BODY(CppAdvance::u32(654321U)); 
	}
#line 100 "Collections.ast"
	inline constexpr auto Vector3::AStaticMethod(CppAdvance::i32 i)  -> const CppAdvance::i32
	{
		#line 100 "Collections.ast"
		ADV_EXPRESSION_BODY(i * CppAdvance::i32(2)); 
	}
#line 115 "Collections.ast"
	inline constexpr auto Vector3::getName() const  -> CppAdvance::Str 
	{
		#line 115 "Collections.ast"
		ADV_EXPRESSION_BODY(CppAdvance::Str{u"Vector3"}); 
	}
	
#line 127 "Collections.ast"
	inline constexpr auto Vector3::__Class_NestedStruct::count(CppAdvance::i32 i)  -> const CppAdvance::i32
	{
		#line 127 "Collections.ast"
		ADV_EXPRESSION_BODY(i * CppAdvance::i32(10)); 
	}
#line 134 "Collections.ast"
	template<class U> inline constexpr Vector3::Vector3(U f)  :
	#line 135 "Collections.ast"
	Vector3(f, f, f)
	{
		#line 136 "Collections.ast"
		this->x = f;
	}
#line 139 "Collections.ast"
	inline Vector3::~Vector3() noexcept
	{
		#line 139 "Collections.ast"
		print(CppAdvance::Str{u"Vector3 deiniting"}); 
	}
#line 141 "Collections.ast"
	inline constexpr Vector3::operator CppAdvance::f32() const noexcept
	{
		#line 141 "Collections.ast"
		ADV_EXPRESSION_BODY(y); 
	}
#line 143 "Collections.ast"
	inline auto Vector3::operator+(const __self& other) const  -> const __self
	{
		#line 143 "Collections.ast"
		ADV_EXPRESSION_BODY(__self{ADV_UPCS(x)((*this).__ref()) + ADV_UPCS(x)(other.__ref()), ADV_UPCS(y)((*this).__ref()) + ADV_UPCS(y)(other.__ref()), ADV_UPCS(z)((*this).__ref()) + ADV_UPCS(z)(other.__ref())}); 
	}
#line 145 "Collections.ast"
	inline auto Vector3::operator++()  -> __self&
	{
		#line 146 "Collections.ast"
		++x;
		#line 147 "Collections.ast"
		++y;
		#line 148 "Collections.ast"
		++z;
		#line 149 "Collections.ast"
		++Count;
		#line 152 "Collections.ast"
		return (*this);
	}
	#line 145 "Collections.ast"
	inline auto Vector3::operator++(int)  -> __self { auto copy = CppAdvance::New<__self>(__self(*this)); ++(*this); return copy; }
#line 155 "Collections.ast"
	auto Vector3::_operator_subscript(CppAdvance::i32 idx)  -> __IndexerAccessor_155<CppAdvance::f32>
	{
		return __IndexerAccessor_155<CppAdvance::f32>{ *this, idx };
	}

	#line 155 "Collections.ast"
	auto Vector3::_operator_subscript(CppAdvance::i32 idx)  const  -> const __IndexerAccessor_155<CppAdvance::f32>
	{
		return __IndexerAccessor_155<CppAdvance::f32>{ *this, idx };
	}

	#line 155 "Collections.ast"
	auto Vector3::getAt(CppAdvance::i32 idx)  -> const CppAdvance::f32
	{
		#line 157 "Collections.ast"
		print(CppAdvance::Str{u"Read"});
		#line 158 "Collections.ast"
		return x;
	}
	#line 155 "Collections.ast"
	auto Vector3::getAt(CppAdvance::i32 idx) const  -> const CppAdvance::f32
	{
		#line 157 "Collections.ast"
		print(CppAdvance::Str{u"Read"});
		#line 158 "Collections.ast"
		return x;
	}
	#line 160 "Collections.ast"
	auto Vector3::setAt(CppAdvance::i32 idx, const CppAdvance::f32& value)  -> void 
	{
		#line 161 "Collections.ast"
		if (value < CppAdvance::i32(10)) {
			#line 161 "Collections.ast"
			return ;
		}
		#line 162 "Collections.ast"
		x = CppAdvance::i32(5);
	}
#line 165 "Collections.ast"
	inline constexpr auto Vector3::_operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3)  -> const CppAdvance::f32
	{
		#line 165 "Collections.ast"
		ADV_EXPRESSION_BODY(y + z); 
	}
	#line 165 "Collections.ast"
	inline constexpr auto Vector3::_operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3)  const  -> const CppAdvance::f32
	{
		#line 165 "Collections.ast"
		ADV_EXPRESSION_BODY(y + z); 
	}
	#line 165 "Collections.ast"
	inline constexpr auto Vector3::getAt(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3)  -> const CppAdvance::f32 { return _operator_subscript(idx, idx2, idx3); }
	#line 165 "Collections.ast"
	inline constexpr auto Vector3::getAt(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3) const  -> const CppAdvance::f32 { return _operator_subscript(idx, idx2, idx3); }
#line 167 "Collections.ast"
	inline constexpr auto Vector3::getX() const  -> const CppAdvance::f32
	{
		#line 167 "Collections.ast"
		ADV_EXPRESSION_BODY(x); 
	}
#line 171 "Collections.ast"
	inline constexpr auto Vector3::Method(CppAdvance::i32 x, CppAdvance::i32 y, CppAdvance::i32 z)  -> const CppAdvance::i32
	{
		#line 172 "Collections.ast"
		return y + z;
	}
#line 177 "Collections.ast"
	inline constexpr auto Vector3::Reset()  -> void
	{
		#line 178 "Collections.ast"
		x = CppAdvance::i32(0);
		#line 179 "Collections.ast"
		y = CppAdvance::i32(0);
		#line 180 "Collections.ast"
		z = CppAdvance::i32(0);
	}
#line 185 "Collections.ast"
	template<class U> inline constexpr auto Vector3::TemplateMethod(U x, U y, U z)  -> const typename Vector3::Coords
	{
		#line 186 "Collections.ast"
		class __Class_LocalStruct;
		#line 186 "Collections.ast"
		struct LocalStruct : public CppAdvance::Struct
		{
			public: using __self = LocalStruct;
			public: using __class = __Class_LocalStruct;
			public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
			#line 187 "Collections.ast"
			#line 187 "Collections.ast"
			public: CppAdvance::f32 x{}; 
			#line 187 "Collections.ast"
			public: CppAdvance::f32 y{}; 
			#line 187 "Collections.ast"
			public: CppAdvance::f32 z{}; 
			
			
		};
		#line 186 "Collections.ast"
		class __Class_LocalStruct : public CppAdvance::ValueType
		{
			#line 9999 "Collections.ast"
			LocalStruct __value;
			public: using __underlying = LocalStruct; using __self = __underlying;
			__Class_LocalStruct(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
			operator __underlying() const noexcept { return __value; }
			
		};
		#line 196 "Collections.ast"
		ADV_UFCS(_operator_subscript)((*this).__ref(), CppAdvance::i32(0)) = CppAdvance::i32(13);
		#line 198 "Collections.ast"
		return { x, y, z };
	}
#line 204 "Collections.ast"
	inline auto __Class_BaseClass::getNext() const  -> const Next
	{
		#line 204 "Collections.ast"
		ADV_EXPRESSION_BODY(CppAdvance::New<Next>(CppAdvance::i32(5))); 
	}
#line 221 "Collections.ast"
	inline constexpr auto __Class_VectorClass::format() const noexcept -> const CppAdvance::Str
	{
		#line 221 "Collections.ast"
		ADV_EXPRESSION_BODY(CppAdvance::Str{u"test"}); 
	}
#line 250 "Collections.ast"
	inline constexpr VectorClass::__Class_NestedClass::__Class_NestedClass(CppAdvance::f32 x, CppAdvance::f32 y, CppAdvance::f32 z) noexcept : 
	#line 251 "Collections.ast"
	x{x}, 
	#line 252 "Collections.ast"
	y{y}, 
	#line 253 "Collections.ast"
	z{z}
	{
	}
#line 255 "Collections.ast"
	inline constexpr auto VectorClass::__Class_NestedClass::count(CppAdvance::i32 i)  -> const CppAdvance::i32
	{
		#line 255 "Collections.ast"
		ADV_EXPRESSION_BODY(i * CppAdvance::i32(10)); 
	}
#line 261 "Collections.ast"
	inline constexpr __Class_VectorClass::__Class_VectorClass(CppAdvance::f32 x, CppAdvance::f32 y, CppAdvance::f32 z) noexcept : 
	#line 262 "Collections.ast"
	x{x}, 
	#line 263 "Collections.ast"
	y{y}, 
	#line 264 "Collections.ast"
	z{z}
	{
	}
#line 267 "Collections.ast"
	template<class U> inline constexpr __Class_VectorClass::__Class_VectorClass(U f)  :
	#line 268 "Collections.ast"
	__Class_VectorClass(f, f, f)
	{
		#line 269 "Collections.ast"
		this->x = f;
	}
#line 272 "Collections.ast"
	inline __Class_VectorClass::__Class_VectorClass(CppAdvance::In<__self> other)  :
	#line 273 "Collections.ast"
	__Class_VectorClass(ADV_UPCS_NONLOCAL(x)(other.__ref()), ADV_UPCS_NONLOCAL(y)(other.__ref()), ADV_UPCS_NONLOCAL(z)(other.__ref()))
	{
	}
#line 276 "Collections.ast"
	inline __Class_VectorClass::~__Class_VectorClass() noexcept
	{
		#line 276 "Collections.ast"
		print(CppAdvance::Str{u"VectorClass deiniting"}); 
	}
#line 281 "Collections.ast"
	inline __Class_VectorClass::operator CppAdvance::f32() const noexcept
	{
		#line 281 "Collections.ast"
		ADV_EXPRESSION_BODY(y); 
	}
#line 313 "Collections.ast"
	inline auto __Class_VectorClass::_operator_subscript(CppAdvance::i32 idx)  -> CppAdvance::f32&
	{
		#line 313 "Collections.ast"
		ADV_EXPRESSION_BODY(x); 
	}
	#line 313 "Collections.ast"
	inline auto __Class_VectorClass::_operator_subscript(CppAdvance::i32 idx)  const  -> const CppAdvance::f32&
	{
		#line 313 "Collections.ast"
		ADV_EXPRESSION_BODY(x); 
	}
	#line 313 "Collections.ast"
	inline auto __Class_VectorClass::getAt(CppAdvance::i32 idx)  -> CppAdvance::f32& { return _operator_subscript(idx); }
	#line 313 "Collections.ast"
	inline auto __Class_VectorClass::getAt(CppAdvance::i32 idx) const  -> const CppAdvance::f32& { return _operator_subscript(idx); }
#line 314 "Collections.ast"
	inline auto __Class_VectorClass::_operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3)  -> const CppAdvance::f32
	{
		#line 314 "Collections.ast"
		ADV_EXPRESSION_BODY(y + z); 
	}
	#line 314 "Collections.ast"
	inline auto __Class_VectorClass::_operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3)  const  -> const CppAdvance::f32
	{
		#line 314 "Collections.ast"
		ADV_EXPRESSION_BODY(y + z); 
	}
	#line 314 "Collections.ast"
	inline auto __Class_VectorClass::getAt(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3)  -> const CppAdvance::f32 { return _operator_subscript(idx, idx2, idx3); }
	#line 314 "Collections.ast"
	inline auto __Class_VectorClass::getAt(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3) const  -> const CppAdvance::f32 { return _operator_subscript(idx, idx2, idx3); }
#line 317 "Collections.ast"
	inline auto __Class_VectorClass::getNext() const  -> const Next
	{
		#line 317 "Collections.ast"
		ADV_EXPRESSION_BODY(___super::getNext()); 
	}
#line 320 "Collections.ast"
	inline constexpr auto __Class_VectorClass::Method(CppAdvance::i32 x, CppAdvance::i32 y, CppAdvance::i32 z)  -> const CppAdvance::i32
	{
		#line 321 "Collections.ast"
		return y + z;
	}
#line 325 "Collections.ast"
	inline constexpr auto __Class_VectorClass::Reset() const  -> void
	{
		#line 326 "Collections.ast"
		x = CppAdvance::i32(0);
		#line 327 "Collections.ast"
		y = CppAdvance::i32(0);
		#line 328 "Collections.ast"
		z = CppAdvance::i32(0);
	}
#line 333 "Collections.ast"
	template<class U> inline constexpr auto __Class_VectorClass::TemplateMethod(U x, U y, U z) const  -> const typename __Class_VectorClass::Coords
	{
		#line 334 "Collections.ast"
		class __Class_LocalStruct;
		#line 334 "Collections.ast"
		struct LocalStruct : public CppAdvance::Struct
		{
			public: using __self = LocalStruct;
			public: using __class = __Class_LocalStruct;
			public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
			#line 335 "Collections.ast"
			#line 335 "Collections.ast"
			public: CppAdvance::f32 x{}; 
			#line 335 "Collections.ast"
			public: CppAdvance::f32 y{}; 
			#line 335 "Collections.ast"
			public: CppAdvance::f32 z{}; 
			
			
		};
		#line 334 "Collections.ast"
		class __Class_LocalStruct : public CppAdvance::ValueType
		{
			#line 9999 "Collections.ast"
			LocalStruct __value;
			public: using __underlying = LocalStruct; using __self = __underlying;
			__Class_LocalStruct(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
			operator __underlying() const noexcept { return __value; }
			
		};
		#line 344 "Collections.ast"
		ADV_UFCS(_operator_subscript)((*this).__ref(), CppAdvance::i32(0)) = CppAdvance::i32(13);
		#line 346 "Collections.ast"
		return { x, y, z };
	}
#line 357 "Collections.ast"
	inline constexpr __Class_ConcreteVectorClass::__Class_ConcreteVectorClass(CppAdvance::f32 x, CppAdvance::f32 y, CppAdvance::f32 z) noexcept :
	#line 358 "Collections.ast"
	___super(x, y, z)
	{
	}
#line 361 "Collections.ast"
	inline constexpr __Class_ConcreteVectorClass::__Class_ConcreteVectorClass(CppAdvance::i32 i) noexcept :
	#line 362 "Collections.ast"
	___super(CppAdvance::f32{i}, CppAdvance::f32{i}, CppAdvance::f32{i})
	{
	}
#line 365 "Collections.ast"
	inline auto __Class_ConcreteVectorClass::setName(const CppAdvance::Str& value) -> __selfClass& { p_Name = value; return *this;}
	#line 365 "Collections.ast"
	inline auto __Class_ConcreteVectorClass::getName() const  -> CppAdvance::Str { return p_Name; }
	
#line 367 "Collections.ast"
	inline auto __Class_ConcreteVectorClass::setZZ(const CppAdvance::i32& value) -> __selfClass& { p_ZZ = value; return *this;}
	#line 367 "Collections.ast"
	inline auto __Class_ConcreteVectorClass::getZZ() const  -> CppAdvance::i32 { return p_ZZ; }
	
#line 381 "Collections.ast"
	inline constexpr auto __Class_ConcreteVectorClass::getCount123() const  -> CppAdvance::i32 
	{
		#line 381 "Collections.ast"
		ADV_EXPRESSION_BODY(CppAdvance::i32(1500)); 
	}
	
#line 383 "Collections.ast"
	inline auto __Class_ConcreteVectorClass::getX() const  -> const CppAdvance::f32
	{
		#line 383 "Collections.ast"
		ADV_EXPRESSION_BODY(x); 
	}
#line 385 "Collections.ast"
	inline auto __Class_ConcreteVectorClass::operator+(const ConcreteVectorClass& other) const  -> const ConcreteVectorClass
	{
		#line 385 "Collections.ast"
		ADV_EXPRESSION_BODY(CppAdvance::New<ConcreteVectorClass>(ADV_UPCS(x)((*this).__ref()) + ADV_UPCS(x)(other.__ref()), ADV_UPCS(y)((*this).__ref()) + ADV_UPCS(y)(other.__ref()), ADV_UPCS(z)((*this).__ref()) + ADV_UPCS(z)(other.__ref()))); 
	}
#line 386 "Collections.ast"
	inline auto __Class_ConcreteVectorClass::GetMagicNumber(CppAdvance::In<VectorClass> i) const  -> const CppAdvance::f32
	{
		#line 386 "Collections.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(x)((*this).__ref()) * ADV_UPCS(x)(i.__ref())); 
	}
#line 388 "Collections.ast"
	inline auto __Class_ConcreteVectorClass::operator==(CppAdvance::In<__self> other) const  -> const bool
	{
		#line 388 "Collections.ast"
		ADV_EXPRESSION_BODY(x == ADV_UPCS(x)(other.__ref()) && y == ADV_UPCS(y)(other.__ref()) && z == ADV_UPCS(z)(other.__ref())); 
	}
#line 390 "Collections.ast"
	inline constexpr auto __Class_ConcreteVectorClass::AbstractStaticMethod(CppAdvance::i32 i)  -> const CppAdvance::i32
	{
		#line 390 "Collections.ast"
		ADV_EXPRESSION_BODY(i * CppAdvance::i32(2)); 
	}
#line 391 "Collections.ast"
	inline constexpr auto __Class_ConcreteVectorClass::getName2()  -> CppAdvance::Str 
	{
		#line 391 "Collections.ast"
		ADV_EXPRESSION_BODY(CppAdvance::Str{u"abc"}); 
	}
	
#line 397 "Collections.ast"
	inline auto _operator_subscript(CppAdvance::In<VectorClass> vec, CppAdvance::f32 x, CppAdvance::f32 y)  -> const CppAdvance::f32
	{
		#line 397 "Collections.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(x)(vec.__ref()) * x + ADV_UPCS(y)(vec.__ref()) * y); 
	}
#line 405 "Collections.ast"
	inline __Class_Next::~__Class_Next() 
	{
		#line 405 "Collections.ast"
		print(CppAdvance::Str{u"Next deiniting"}); 
	}
#line 407 "Collections.ast"
	inline __Class_Next::__Class_Next(CppAdvance::i32 i)  : 
	#line 408 "Collections.ast"
	i{i}
	{
	}
#line 412 "Collections.ast"
	inline __Class_Next::__Class_Next(CppAdvance::In<__self> other)  : 
	#line 413 "Collections.ast"
	i{CppAdvance::i32(0)}
	{
	}
#line 416 "Collections.ast"
	inline auto __Class_Next::operator*() const  -> const CppAdvance::i32
	{
		#line 416 "Collections.ast"
		ADV_EXPRESSION_BODY(i); 
	}
#line 418 "Collections.ast"
	inline auto __Class_Next::printNext() const  -> void
	{
		#line 419 "Collections.ast"
		auto func2 = [__this = __self::__weak_ref(*this)] (CppAdvance::i32 x, CppAdvance::i32 y) -> const CppAdvance::i32 
		{
			#line 419 "Collections.ast"
			auto j = x * y * ADV_UPCS(i)((*(__this)).__ref()); 
			#line 419 "Collections.ast"
			return j * CppAdvance::i32(2);
		}; 
		#line 420 "Collections.ast"
		print(CppAdvance::Str{u"This is printNext function in optional chaining call"});
		#line 421 "Collections.ast"
		print(func2(CppAdvance::i32(3), CppAdvance::i32(4)));
	}
#line 478 "Collections.ast"
	inline auto Options::getIsWeekend() const  -> bool 
	{
		#line 478 "Collections.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(HasFlag)(Weekend.__ref(), (*this))); 
	}
	
#line 489 "Collections.ast"
	inline auto Text::ToShortString() const  -> const CppAdvance::Str
	{
		#line 490 "Collections.ast"
		return Value;
	}
#line 507 "Collections.ast"
	inline auto __Class_ComplexVariant::operator*() const  -> const CppAdvance::i32
	{
		#line 507 "Collections.ast"
		ADV_EXPRESSION_BODY(i); 
	}
#line 509 "Collections.ast"
	inline auto __Class_ComplexVariant::printVariant() const  -> void
	{
		#line 510 "Collections.ast"
		print(CppAdvance::Str{u"This is printVariant function in optional chaining call"});
		#line 511 "Collections.ast"
		print(s);
	}
#line 514 "Collections.ast"
	inline auto __Class_ComplexVariant::GetMagicNumber(CppAdvance::In<VectorClass> f) const  -> const CppAdvance::f32
	{
		#line 514 "Collections.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(f)((*this).__ref()) * ADV_UPCS(x)(f.__ref())); 
	}
#line 516 "Collections.ast"
	inline constexpr auto __Class_ComplexVariant::getCount123() const  -> CppAdvance::i32 
	{
		#line 516 "Collections.ast"
		ADV_EXPRESSION_BODY(CppAdvance::i32(1234567890)); 
	}
	
#line 518 "Collections.ast"
	inline constexpr auto __Class_ComplexVariant::getCount10()  -> CppAdvance::i32 
	{
		#line 518 "Collections.ast"
		ADV_EXPRESSION_BODY(CppAdvance::i32(12345)); 
	}
	
#line 627 "Collections.ast"
	inline auto getSum(CppAdvance::In<VectorClass> vec)  -> const CppAdvance::f32
	{
		#line 627 "Collections.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(x)(vec.__ref()) + ADV_UPCS(y)(vec.__ref()) + ADV_UPCS(z)(vec.__ref())); 
	}
#line 638 "Collections.ast"
	template<class T1, class T2> inline auto ttest(T1 x, T2 y)  -> const CppAdvance::i32
	{
		#line 638 "Collections.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((T2), GetInt)()); 
	}
#line 641 "Collections.ast"
	template<class... TArgs> inline auto vsum(TArgs&&... args)  -> decltype(auto)
	{
		#line 642 "Collections.ast"
		ADV_EXPRESSION_BODY((args + ... + CppAdvance::i32(1))); 
	}
#line 9999 "Collections.ast"
	
#line 9999 "Collections.ast"
	inline Vector3::NestedStruct::ADV_CLASS_STRONG_CTOR_REF(NestedStruct)
	inline Vector3::NestedStruct& Vector3::NestedStruct::ADV_CLASS_STRONG_ASSIGN_REF(NestedStruct)
	inline Vector3::NestedStruct__Unowned::ADV_CLASS_UNOWNED_CTOR_REF(NestedStruct__Unowned)
	inline Vector3::NestedStruct__Unowned& Vector3::NestedStruct__Unowned::ADV_CLASS_UNOWNED_ASSIGN_REF(NestedStruct__Unowned)
	inline Vector3::NestedStruct__Weak::ADV_CLASS_WEAK_CTOR_REF(NestedStruct__Weak)
	inline Vector3::NestedStruct__Weak& Vector3::NestedStruct__Weak::ADV_CLASS_WEAK_ASSIGN_REF(NestedStruct__Weak)
	#line 127 "Collections.ast"
	inline constexpr decltype(auto) Vector3::NestedStruct::count(CppAdvance::i32 i){ ADV_EXPRESSION_BODY(__class::count(i)); }
	
#line 9999 "Collections.ast"
	inline BaseClass::ADV_CLASS_DEFAULT_CTOR(BaseClass)
	inline BaseClass::ADV_CLASS_STRONG_CTOR_REF(BaseClass)
	inline BaseClass& BaseClass::ADV_CLASS_STRONG_ASSIGN_REF(BaseClass)
	inline BaseClass__Unowned::ADV_CLASS_UNOWNED_CTOR_REF(BaseClass__Unowned)
	inline BaseClass__Unowned& BaseClass__Unowned::ADV_CLASS_UNOWNED_ASSIGN_REF(BaseClass__Unowned)
	inline BaseClass__Weak::ADV_CLASS_WEAK_CTOR_REF(BaseClass__Weak)
	inline BaseClass__Weak& BaseClass__Weak::ADV_CLASS_WEAK_ASSIGN_REF(BaseClass__Weak)
	
#line 9999 "Collections.ast"
	inline VectorClass::NestedClass::ADV_CLASS_STRONG_CTOR_REF(NestedClass)
	inline VectorClass::NestedClass& VectorClass::NestedClass::ADV_CLASS_STRONG_ASSIGN_REF(NestedClass)
	inline VectorClass::NestedClass__Unowned::ADV_CLASS_UNOWNED_CTOR_REF(NestedClass__Unowned)
	inline VectorClass::NestedClass__Unowned& VectorClass::NestedClass__Unowned::ADV_CLASS_UNOWNED_ASSIGN_REF(NestedClass__Unowned)
	inline VectorClass::NestedClass__Weak::ADV_CLASS_WEAK_CTOR_REF(NestedClass__Weak)
	inline VectorClass::NestedClass__Weak& VectorClass::NestedClass__Weak::ADV_CLASS_WEAK_ASSIGN_REF(NestedClass__Weak)
	#line 255 "Collections.ast"
	inline constexpr decltype(auto) VectorClass::NestedClass::count(CppAdvance::i32 i){ ADV_EXPRESSION_BODY(__class::count(i)); }
	inline VectorClass::ADV_CLASS_STRONG_CTOR_REF(VectorClass)
	inline VectorClass& VectorClass::ADV_CLASS_STRONG_ASSIGN_REF(VectorClass)
	inline VectorClass__Unowned::ADV_CLASS_UNOWNED_CTOR_REF(VectorClass__Unowned)
	inline VectorClass__Unowned& VectorClass__Unowned::ADV_CLASS_UNOWNED_ASSIGN_REF(VectorClass__Unowned)
	inline VectorClass__Weak::ADV_CLASS_WEAK_CTOR_REF(VectorClass__Weak)
	inline VectorClass__Weak& VectorClass__Weak::ADV_CLASS_WEAK_ASSIGN_REF(VectorClass__Weak)
	inline decltype(auto) VectorClass::getCount2() { return __class::Count2; }
	inline void VectorClass::setCount2(const CppAdvance::i32& value) { __class::Count2 = value; }
	inline decltype(auto) VectorClass::getZERO() { return __class::ZERO; }
	#line 281 "Collections.ast"
	inline VectorClass::operator CppAdvance::f32() const noexcept{ ADV_EXPRESSION_BODY(__ref().operator CppAdvance::f32()); }
	inline VectorClass__Unowned::operator CppAdvance::f32() const noexcept{ ADV_EXPRESSION_BODY(__ref().operator CppAdvance::f32()); }
	#line 313 "Collections.ast"
	inline decltype(auto) VectorClass::_operator_subscript(CppAdvance::i32 idx) const  LIFETIMEBOUND{ ADV_EXPRESSION_BODY(__ref()._operator_subscript(idx)); }
	inline decltype(auto) VectorClass__Unowned::_operator_subscript(CppAdvance::i32 idx) const  LIFETIMEBOUND{ ADV_EXPRESSION_BODY(__ref()._operator_subscript(idx)); }
	#line 314 "Collections.ast"
	inline decltype(auto) VectorClass::_operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3) const { ADV_EXPRESSION_BODY(__ref()._operator_subscript(idx, idx2, idx3)); }
	inline decltype(auto) VectorClass__Unowned::_operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3) const { ADV_EXPRESSION_BODY(__ref()._operator_subscript(idx, idx2, idx3)); }
	#line 320 "Collections.ast"
	inline constexpr decltype(auto) VectorClass::Method(CppAdvance::i32 x, CppAdvance::i32 y, CppAdvance::i32 z){ ADV_EXPRESSION_BODY(__class::Method(x, y, z)); }
	
#line 9999 "Collections.ast"
	inline ConcreteVectorClass::ADV_CLASS_DEFAULT_CTOR(ConcreteVectorClass)
	inline ConcreteVectorClass::ADV_CLASS_STRONG_CTOR_REF(ConcreteVectorClass)
	inline ConcreteVectorClass& ConcreteVectorClass::ADV_CLASS_STRONG_ASSIGN_REF(ConcreteVectorClass)
	inline ConcreteVectorClass__Unowned::ADV_CLASS_UNOWNED_CTOR_REF(ConcreteVectorClass__Unowned)
	inline ConcreteVectorClass__Unowned& ConcreteVectorClass__Unowned::ADV_CLASS_UNOWNED_ASSIGN_REF(ConcreteVectorClass__Unowned)
	inline ConcreteVectorClass__Weak::ADV_CLASS_WEAK_CTOR_REF(ConcreteVectorClass__Weak)
	inline ConcreteVectorClass__Weak& ConcreteVectorClass__Weak::ADV_CLASS_WEAK_ASSIGN_REF(ConcreteVectorClass__Weak)
	#line 361 "Collections.ast"
	inline ConcreteVectorClass::ConcreteVectorClass(CppAdvance::i32 i)noexcept : ___super(new (::operator new(sizeof(__class))) __class(i)) {}
	#line 385 "Collections.ast"
	inline decltype(auto) ConcreteVectorClass::operator+(const ConcreteVectorClass& other) const { ADV_EXPRESSION_BODY(__ref().operator+(other)); }
	inline decltype(auto) ConcreteVectorClass__Unowned::operator+(const ConcreteVectorClass& other) const { ADV_EXPRESSION_BODY(__ref().operator+(other)); }
	#line 388 "Collections.ast"
	inline decltype(auto) ConcreteVectorClass::operator==(CppAdvance::In<__self> other) const { ADV_EXPRESSION_BODY(__ref().operator==(other)); }
	inline decltype(auto) ConcreteVectorClass__Unowned::operator==(CppAdvance::In<__self> other) const { ADV_EXPRESSION_BODY(__ref().operator==(other)); }
	#line 390 "Collections.ast"
	inline constexpr decltype(auto) ConcreteVectorClass::AbstractStaticMethod(CppAdvance::i32 i){ ADV_EXPRESSION_BODY(__class::AbstractStaticMethod(i)); }
	
#line 9999 "Collections.ast"
	inline Next::ADV_CLASS_DEFAULT_CTOR(Next)
	inline Next::ADV_CLASS_STRONG_CTOR_REF(Next)
	inline Next& Next::ADV_CLASS_STRONG_ASSIGN_REF(Next)
	inline Next__Unowned::ADV_CLASS_UNOWNED_CTOR_REF(Next__Unowned)
	inline Next__Unowned& Next__Unowned::ADV_CLASS_UNOWNED_ASSIGN_REF(Next__Unowned)
	inline Next__Weak::ADV_CLASS_WEAK_CTOR_REF(Next__Weak)
	inline Next__Weak& Next__Weak::ADV_CLASS_WEAK_ASSIGN_REF(Next__Weak)
	#line 416 "Collections.ast"
	inline decltype(auto) Next::operator*() const { ADV_EXPRESSION_BODY(__ref().operator*()); }
	inline decltype(auto) Next__Unowned::operator*() const { ADV_EXPRESSION_BODY(__ref().operator*()); }
	
#line 426 "Collections.ast"
	inline constexpr auto TestInt(__extension_425_Next const& __this LIFETIMEBOUND, CppAdvance::i32 j)  -> const CppAdvance::i32
	{
		#line 426 "Collections.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(i)(__this.__ref()) + j * CppAdvance::i32(2)); 
	}
	
#line 9999 "Collections.ast"
	
#line 9999 "Collections.ast"
	
#line 9999 "Collections.ast"
	
inline const CppAdvance::f32 IInterface::DefaultMethod(CppAdvance::In<VectorClass> f) const 
	{
		#line 443 "Collections.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GetMagicNumber)((*this).__ref(), f)); 
	}
	inline const CppAdvance::i32 IInterface::SomeStaticMethod(CppAdvance::i32 i) 
	{
		#line 451 "Collections.ast"
		ADV_EXPRESSION_BODY(i * CppAdvance::i32(123)); 
	}
	#line 9999 "Collections.ast"
	
#line 9999 "Collections.ast"
	
#line 9999 "Collections.ast"
	
#line 9999 "Collections.ast"
	
#line 9999 "Collections.ast"
	inline ComplexVariant::ADV_CLASS_STRONG_CTOR_REF(ComplexVariant)
	inline ComplexVariant& ComplexVariant::ADV_CLASS_STRONG_ASSIGN_REF(ComplexVariant)
	inline ComplexVariant__Unowned::ADV_CLASS_UNOWNED_CTOR_REF(ComplexVariant__Unowned)
	inline ComplexVariant__Unowned& ComplexVariant__Unowned::ADV_CLASS_UNOWNED_ASSIGN_REF(ComplexVariant__Unowned)
	inline ComplexVariant__Weak::ADV_CLASS_WEAK_CTOR_REF(ComplexVariant__Weak)
	inline ComplexVariant__Weak& ComplexVariant__Weak::ADV_CLASS_WEAK_ASSIGN_REF(ComplexVariant__Weak)
	FORCE_INLINE decltype(auto) ComplexVariant::getValue1() noexcept { return __class::Value1; }
	FORCE_INLINE decltype(auto) ComplexVariant::getValue2() noexcept { return __class::Value2; }
	FORCE_INLINE decltype(auto) ComplexVariant::getValue3() noexcept { return __class::Value3; }
	FORCE_INLINE decltype(auto) ComplexVariant::getValue4() noexcept { return __class::Value4; }
	FORCE_INLINE decltype(auto) ComplexVariant::GetValues() noexcept { return __class::GetValues(); }
	#line 507 "Collections.ast"
	inline decltype(auto) ComplexVariant::operator*() const { ADV_EXPRESSION_BODY(__ref().operator*()); }
	inline decltype(auto) ComplexVariant__Unowned::operator*() const { ADV_EXPRESSION_BODY(__ref().operator*()); }
	
#line 9999 "Collections.ast"
	
#line 9999 "Collections.ast"
	
#line 9999 "Collections.ast"
	
#line 9999 "Collections.ast"
	
#line 9999 "Collections.ast"
	
#line 9999 "Collections.ast"
	
#line 578 "Collections.ast"
	template<class T> inline auto operator*(__extension_575_T<T> const& __this LIFETIMEBOUND, CppAdvance::In<CppAdvance::f32> f)  -> const CppAdvance::f32
	{
		#line 578 "Collections.ast"
		ADV_EXPRESSION_BODY(f * CppAdvance::i32(10)); 
	}
	
#line 580 "Collections.ast"
	template<class T> inline auto PrintInterface(__extension_575_T<T> const& __this LIFETIMEBOUND, CppAdvance::i32 x)  -> const CppAdvance::i32
	{
		#line 581 "Collections.ast"
		print(CppAdvance::Str{u"PrintInterface Begin"});
		#line 582 "Collections.ast"
		print(ADV_UPCS(Name)(__this.__ref()));
		#line 583 "Collections.ast"
		print(x);
		#line 584 "Collections.ast"
		print(CppAdvance::Str{u"PrintInterface End"});
		#line 585 "Collections.ast"
		return x * CppAdvance::i32(11);
	}
	
#line 588 "Collections.ast"
	template<class T> inline const CppAdvance::f32 getAt(__extension_575_T<T> const& __this LIFETIMEBOUND, CppAdvance::f32 r, CppAdvance::f32 g, CppAdvance::f32 b)
	{
		#line 588 "Collections.ast"
		ADV_EXPRESSION_BODY(r + g + b); 
	}
	#line 590 "Collections.ast"
	template<class T> inline auto __construct_(CppAdvance::ConstructorProxy<__extension_575_T<T>> __ctordata, CppAdvance::i32 x, CppAdvance::Str txt)  -> decltype(auto)
	{
		#line 591 "Collections.ast"
		auto __this = new (__ctordata.memory) typename CppAdvance::ConstructorProxy<T>::ConstructingType(x, x, x);
		#line 592 "Collections.ast"
		print(txt);
		return __this;
	}
	
#line 595 "Collections.ast"
	template<class T> inline auto __construct_(CppAdvance::ConstructorProxy<__extension_575_T<T>> __ctordata, typename CppAdvance::MemorySpace mem, CppAdvance::i32 x, CppAdvance::Str txt)  -> decltype(auto)
	{
		#line 596 "Collections.ast"
		auto __this = new (__ctordata.memory) typename CppAdvance::ConstructorProxy<T>::ConstructingType(x, x, x);
		#line 597 "Collections.ast"
		print(txt);
		return __this;
	}
	
#line 576 "Collections.ast"
	template<class T> inline auto getAsString(__extension_575_T<T> const& __this ) -> const CppAdvance::Str
	{
		#line 576 "Collections.ast"
		ADV_EXPRESSION_BODY(CppAdvance::Str{u"AsString"}); 
	}
	#line 9999 "Collections.ast"
	
#line 606 "Collections.ast"
	template<class T> inline constexpr auto __static_GetSuperCount(CppAdvance::i32 x, CppAdvance::i32 y)  -> const CppAdvance::i32
	{
		#line 606 "Collections.ast"
		ADV_EXPRESSION_BODY(x * y + x + y); 
	}
	
#line 605 "Collections.ast"
	template<class T> inline constexpr auto __static_getCount3() -> const CppAdvance::i32
	{
		#line 605 "Collections.ast"
		ADV_EXPRESSION_BODY(CppAdvance::i32(333)); 
	}
	#line 9999 "Collections.ast"
	
#line 613 "Collections.ast"
	template<class T> inline constexpr auto _operator_bsl_mul_div(__extension_609_T<T> const& __this LIFETIMEBOUND)  -> const CppAdvance::i32
	{
		#line 613 "Collections.ast"
		ADV_EXPRESSION_BODY(__this / CppAdvance::i32(2)); 
	}
	template<class T> inline constexpr auto _operator_bsl_mul_div_postfix(__extension_609_T<T> & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_bsl_mul_div)(__this); return copy; }
	
#line 616 "Collections.ast"
	template<class T> inline constexpr auto _operator_bsl_mul_div(__extension_609_T<T> const& __this LIFETIMEBOUND, CppAdvance::f32 other)  -> const CppAdvance::f32
	{
		#line 616 "Collections.ast"
		ADV_EXPRESSION_BODY(CppAdvance::f32{__this} * other * CppAdvance::i32(2)); 
	}
	template<class T> inline constexpr auto _operator_bsl_mul_div(CppAdvance::f32 other, const __extension_609_T<T> & __this)  -> decltype(auto) { return ADV_UFCS(_operator_bsl_mul_div)(__this, other); }
	
#line 610 "Collections.ast"
	template<class T> inline constexpr auto getkm(__extension_609_T<T> const& __this ) -> const CppAdvance::i32
	{
		#line 610 "Collections.ast"
		ADV_EXPRESSION_BODY(__this * CppAdvance::i32(1000)); 
	}
	#line 9999 "Collections.ast"
	
#line 620 "Collections.ast"
	inline constexpr auto getkm(__extension_619_f64 const& __this ) -> const CppAdvance::f64
	{
		#line 620 "Collections.ast"
		ADV_EXPRESSION_BODY(__this * CppAdvance::f32(1000.0f)); 
	}
	#line 9999 "Collections.ast"
	
#line 624 "Collections.ast"
	inline constexpr auto getkm(__extension_623_str const& __this ) -> const CppAdvance::Str
	{
		#line 624 "Collections.ast"
		ADV_EXPRESSION_BODY(CppAdvance::Str{u"1000km"}); 
	}
	#line 9999 "Collections.ast"
	
#line 9999 "Collections.ast"
	
#line 657 "Collections.ast"
	inline auto getNext(__extension_655_Vector3 const& __this LIFETIMEBOUND)  -> const Next
	{
		#line 657 "Collections.ast"
		ADV_EXPRESSION_BODY(CppAdvance::New<Next>(ADV_UPCS(x)(__this.__ref()))); 
	}
	
#line 9999 "Collections.ast"
	

}