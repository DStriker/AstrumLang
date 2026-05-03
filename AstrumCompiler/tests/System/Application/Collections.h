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
#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
#define ADV_VERSION_WINDOWS 167
#endif
#ifndef ADV_VERSION___COLLECTIONS_PROTECTED_Linux
#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
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
#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
using cstring [[clang::annotate("unsafe")]] = Builtin::Unsafe::__RawPtr<const Builtin::char8>;
#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
namespace __Collections_Protected { using Test111 = typename Test1::Test2::TestClass; }
#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
namespace __Collections_Protected { using Test112 = typename Test1::Test2::Class2; }
#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
template<class A, class C> using SimpleTuple = std::tuple<A, bool, C>;
#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
using ImportantOptions = __ntuples::NamedTuple_4e7be1ed49b09d71;
#line 646 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
template<class... Args> using Action = Builtin::FunctionRef<void(Args...)>;
#line 647 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
template<class T> using Predicate = Builtin::FunctionRef<bool (T)>;
//###############################################################################
//# Type definitions
//###############################################################################
class Span;
	#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	struct [[clang::annotate("ref_struct")]] Span final : public Builtin::RefStruct {
		public: using __self = Span;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: Builtin::f32 & data;
		#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: Builtin::i32 length;
		#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline ~Span() noexcept;
		
	};
	
	class __Class_Vector3;
	#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	struct Vector3 final : public Builtin::Struct {
		public: using __self = Vector3;
		public: using __class = __Class_Vector3;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		public: 
		class NestedStruct; class NestedStruct__Unowned; class NestedStruct__Weak; class __Class_NestedStruct;
		#line 124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		class NestedStruct : public Builtin::ObjectRef {
			public: using __self = NestedStruct;
			private: using ___super = Builtin::ObjectRef;
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
			#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			public: inline constexpr static decltype(auto) count(Builtin::i32 i) ;
			
		};
		#line 124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		class NestedStruct__Unowned : public Builtin::ObjectRef__Unowned {
			public: using __self = NestedStruct;
			public: using __strong_ref = NestedStruct;
			public: using __unowned_ref = NestedStruct__Unowned;
			public: using __weak_ref = NestedStruct__Weak;
			private: using ___super = Builtin::ObjectRef__Unowned;
			public: using __class = __Class_NestedStruct;
			public: FORCE_INLINE decltype(auto) __ref() const noexcept { Builtin::UnownedCheck(_obj); return *reinterpret_cast<__class*>(_obj); }
			ADV_CLASS_FROM_PTR(NestedStruct__Unowned)
			ADV_CLASS_UNOWNED_COMMON_CTORS(NestedStruct__Unowned)
			
		};
		#line 124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		class NestedStruct__Weak : public Builtin::ObjectRef__Weak {
			public: using __self = NestedStruct;
			public: using __strong_ref = NestedStruct;
			public: using __unowned_ref = NestedStruct__Unowned;
			public: using __weak_ref = NestedStruct__Weak;
			private: using ___super = Builtin::ObjectRef__Weak;
			public: using __class = __Class_NestedStruct;
			static constexpr bool __IS_ADV_NULLABLE = true;
			public: FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
			ADV_CLASS_WEAK_FROM_PTR(NestedStruct__Weak)
			ADV_CLASS_WEAK_COMMON_CTORS(NestedStruct__Weak)
			#define ADV_PROPERTY_SELF __self
		};
		
		public: 
		#line 124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		class __Class_NestedStruct : public Builtin::Object {
			public: using __self = NestedStruct;
			private: using ___super = Builtin::Object;
			public: using __selfClass = __Class_NestedStruct;
			friend class __self;
			friend class __self::__weak_ref;
			#define ADV_PROPERTY_SELF __selfClass
			public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
			#line 126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			public: mutable Builtin::f32 x; ADV_CHECK_REF_STRUCT("f32", Builtin::f32);
			#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			public: mutable Builtin::f32 y; ADV_CHECK_REF_STRUCT("f32", Builtin::f32);
			#line 128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			public: mutable Builtin::f32 z; ADV_CHECK_REF_STRUCT("f32", Builtin::f32);
			#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			public: inline constexpr static auto count(Builtin::i32 i)  -> const Builtin::i32;
			
#define ADV_PROPERTY_SELF __self
		};
		
		#line 124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		ADV_CHECK_FOR_CONCRETE(NestedStruct);
		
		#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		private: friend class TestStruct; friend class __Class_TestStruct;
		#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		private: template<class T> friend class TestStruct2; template<class T> friend class __Class_TestStruct2;
		#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		private: friend const Builtin::i32 func3(Builtin::i32 x);
		#line 170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		private: friend const Next getNext(const __self&);
		#line 84 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		private: friend const Builtin::i32 func4(Builtin::i32 x);
		#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: Builtin::i32 x; ADV_CHECK_REF_STRUCT("i32", Builtin::i32);
		#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: Builtin::i32 y; ADV_CHECK_REF_STRUCT("i32", Builtin::i32);
		#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: Builtin::i32 z; ADV_CHECK_REF_STRUCT("i32", Builtin::i32);
		#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		private: static thread_local Builtin::i32 Count2; ADV_CHECK_REF_STRUCT("i32", Builtin::i32);
		#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: static const Vector3 ZERO;
		private: class __sctor {
			static __sctor instance;
			#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			__sctor();
			#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			~__sctor();
			
		};
		public: constexpr Vector3(Builtin::i32 _x, Builtin::i32 _y, Builtin::i32 _z) : x{_x}, y{_y}, z{_z} {}
		#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: static constexpr auto BYTES = Builtin::i32(24);
		#line 122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		private: using Coords = __ntuples::NamedTuple_6893f862d6c49683;
		#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		private: static auto __lazy_init_lazyInt() -> Builtin::i32;
		#line 9999 "Collections.ast"
		ADV_PROPERTY_GETTER_LAZY(public, , lazyInt, __lazy_init_lazyInt, Builtin::i32);
		#line 104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		private: static Builtin::i32 p_Count; ADV_CHECK_REF_STRUCT("i32", Builtin::i32);
		#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: static auto setCount(const Builtin::i32& value) -> void;
		#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: static auto getCount()  -> Builtin::i32;
		#line 9999 "Collections.ast"
		ADV_PROPERTY_GETTER_SETTER_STATIC(public, , Count, public, getCount, public, setCount, Builtin::i32);
		#line 117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline constexpr auto getName() const  -> Builtin::Str;
		#line 9999 "Collections.ast"
		ADV_PROPERTY_GETTER(public, Name, getName, Builtin::Str);
		#line 100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline constexpr auto format() const noexcept -> const Builtin::Str;
		#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline constexpr auto HashCode() const  -> const Builtin::usize;
		#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline constexpr static auto AStaticMethod(Builtin::i32 i)  -> const Builtin::i32;
		#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline constexpr Vector3()  = default;
		#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline constexpr  Vector3(const __self& that)  = default;
		#line 136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: template<class U> inline constexpr  Vector3(U f) ;
		#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline ~Vector3() noexcept;
		#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline constexpr  operator Builtin::f32() const noexcept;
		#line 145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline auto operator+(const __self& other) const  -> const __self;
		#line 147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline auto operator++()  LIFETIMEBOUND -> __self&;
		public: inline auto operator++(int)  -> Vector3;
		#line 9999 "Collections.ast"
		private: template<class __IdxT = Builtin::f32> struct __IndexerAccessor_157 {
			private:
			Vector3& _parent;
			Builtin::i32 _idx;
			 friend class Vector3;
			public:
			FORCE_INLINE __IndexerAccessor_157(Vector3& parent, Builtin::i32 idx) : _parent(parent), _idx(idx) {}
			FORCE_INLINE __IndexerAccessor_157(Vector3 const& parent, Builtin::i32 idx) : _parent(const_cast<std::remove_cvref_t<decltype(parent)>&>(parent)), _idx(idx) {}
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
			template<class Ch> friend FORCE_INLINE decltype(auto) operator<<(std::basic_ostream<Ch>& stream, const __IndexerAccessor_157<__IdxT>& elem) { return stream << elem.__ref(); }
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

		friend struct __IndexerAccessor_157<Builtin::f32>;
		public: inline void setAt(Builtin::i32 idx, const Builtin::f32& value);
		public: inline const Builtin::f32 getAt(Builtin::i32 idx);
		inline const Builtin::f32 getAt(Builtin::i32 idx) const;
		#line 157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline auto _operator_subscript(Builtin::i32 idx)  -> __IndexerAccessor_157<Builtin::f32>;
		public: inline auto _operator_subscript(Builtin::i32 idx) const  -> const __IndexerAccessor_157<Builtin::f32>;
		public: inline constexpr const Builtin::f32 getAt(Builtin::i32 idx, Builtin::i32 idx2, Builtin::i32 idx3);
		inline constexpr const Builtin::f32 getAt(Builtin::i32 idx, Builtin::i32 idx2, Builtin::i32 idx3) const;
		#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline constexpr auto _operator_subscript(Builtin::i32 idx, Builtin::i32 idx2, Builtin::i32 idx3)  -> const Builtin::f32;
		public: inline constexpr auto _operator_subscript(Builtin::i32 idx, Builtin::i32 idx2, Builtin::i32 idx3) const  -> const Builtin::f32;
		#line 169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline constexpr auto getX() const  -> const Builtin::f32;
		#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline constexpr static auto Method(Builtin::i32 x, Builtin::i32 y, Builtin::i32 z)  -> const Builtin::i32;
		#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline constexpr auto Reset()  -> void;
		#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
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
template<> inline constexpr bool Builtin::__details::cheapCopy<System::Application::BaseClass> = false;

namespace System::Application {
	#line 205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	class BaseClass : public Builtin::ObjectRef {
		public: using __self = BaseClass;
		private: using ___super = Builtin::ObjectRef;
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
	#line 205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	class BaseClass__Unowned : public Builtin::ObjectRef__Unowned {
		public: using __self = BaseClass;
		public: using __strong_ref = BaseClass;
		public: using __unowned_ref = BaseClass__Unowned;
		public: using __weak_ref = BaseClass__Weak;
		private: using ___super = Builtin::ObjectRef__Unowned;
		public: using __class = __Class_BaseClass;
		public: FORCE_INLINE decltype(auto) __ref() const noexcept { Builtin::UnownedCheck(_obj); return *reinterpret_cast<__class*>(_obj); }
		ADV_CLASS_FROM_PTR(BaseClass__Unowned)
		ADV_CLASS_UNOWNED_COMMON_CTORS(BaseClass__Unowned)
		
	};
	#line 205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	class BaseClass__Weak : public Builtin::ObjectRef__Weak {
		public: using __self = BaseClass;
		public: using __strong_ref = BaseClass;
		public: using __unowned_ref = BaseClass__Unowned;
		public: using __weak_ref = BaseClass__Weak;
		private: using ___super = Builtin::ObjectRef__Weak;
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
template<> inline constexpr bool Builtin::__details::cheapCopy<System::Application::VectorClass> = false;

namespace System::Application {
	#line 209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	class VectorClass : public Builtin::ClassRefParent<BaseClass> {
		public: using __self = VectorClass;
		private: using ___super = Builtin::ClassRefParent<BaseClass>;
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
		#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		class NestedClass : public Builtin::ObjectRef {
			public: using __self = NestedClass;
			private: using ___super = Builtin::ObjectRef;
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
			#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			public: inline constexpr static decltype(auto) count(Builtin::i32 i) ;
			
		};
		#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		class NestedClass__Unowned : public Builtin::ObjectRef__Unowned {
			public: using __self = NestedClass;
			public: using __strong_ref = NestedClass;
			public: using __unowned_ref = NestedClass__Unowned;
			public: using __weak_ref = NestedClass__Weak;
			private: using ___super = Builtin::ObjectRef__Unowned;
			public: using __class = __Class_NestedClass;
			public: FORCE_INLINE decltype(auto) __ref() const noexcept { Builtin::UnownedCheck(_obj); return *reinterpret_cast<__class*>(_obj); }
			ADV_CLASS_FROM_PTR(NestedClass__Unowned)
			ADV_CLASS_UNOWNED_COMMON_CTORS(NestedClass__Unowned)
			
		};
		#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		class NestedClass__Weak : public Builtin::ObjectRef__Weak {
			public: using __self = NestedClass;
			public: using __strong_ref = NestedClass;
			public: using __unowned_ref = NestedClass__Unowned;
			public: using __weak_ref = NestedClass__Weak;
			private: using ___super = Builtin::ObjectRef__Weak;
			public: using __class = __Class_NestedClass;
			static constexpr bool __IS_ADV_NULLABLE = true;
			public: FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
			ADV_CLASS_WEAK_FROM_PTR(NestedClass__Weak)
			ADV_CLASS_WEAK_COMMON_CTORS(NestedClass__Weak)
			#define ADV_PROPERTY_SELF __self
		};
		
		public: 
		#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		class __Class_NestedClass : public Builtin::Object {
			public: using __self = NestedClass;
			private: using ___super = Builtin::Object;
			public: using __selfClass = __Class_NestedClass;
			friend class __self;
			friend class __self::__weak_ref;
			#define ADV_PROPERTY_SELF __selfClass
			public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
			#line 248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			public: mutable Builtin::f32 x; ADV_CHECK_REF_STRUCT("f32", Builtin::f32);
			#line 249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			public: mutable Builtin::f32 y; ADV_CHECK_REF_STRUCT("f32", Builtin::f32);
			#line 250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			public: mutable Builtin::f32 z; ADV_CHECK_REF_STRUCT("f32", Builtin::f32);
			#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			public: inline constexpr __Class_NestedClass(Builtin::f32 x, Builtin::f32 y, Builtin::f32 z) noexcept;
			#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			public: inline constexpr static auto count(Builtin::i32 i)  -> const Builtin::i32;
			
#define ADV_PROPERTY_SELF __self
		};
		
		#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		ADV_CHECK_FOR_CONCRETE(NestedClass);
		
		public: static decltype(auto) getCount2();
		static void setCount2(const Builtin::i32& value);
		ADV_PROPERTY_GETTER_SETTER_STATIC(public, , Count2, public, getCount2, public, setCount2, Builtin::i32);
		public: static decltype(auto) getZERO();
		ADV_PROPERTY_GETTER_STATIC(public, , ZERO, getZERO, Vector3);
		#define ADV_PROPERTY_SELF __class
		#define ADV_PROPERTY_SELF __self
		#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline explicit operator Builtin::f32() const noexcept;
		#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline decltype(auto) _operator_subscript(Builtin::i32 idx) const  LIFETIMEBOUND;
		#line 316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline decltype(auto) _operator_subscript(Builtin::i32 idx, Builtin::i32 idx2, Builtin::i32 idx3) const ;
		#line 322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline constexpr static decltype(auto) Method(Builtin::i32 x, Builtin::i32 y, Builtin::i32 z) ;
		public: static constexpr decltype(auto) BYTES = Builtin::i32(24);
		public: using Coords = __ntuples::NamedTuple_6893f862d6c49683;
		friend class TestStruct;
		friend class __Class_TestStruct;
		template<class T> friend class TestStruct2;
		template<class T> friend class __Class_TestStruct2;
		friend const Builtin::i32 func3(Builtin::i32 x);
		
	};
	#line 209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	class VectorClass__Unowned : public Builtin::ClassRefParentUnowned<BaseClass> {
		public: using __self = VectorClass;
		public: using __strong_ref = VectorClass;
		public: using __unowned_ref = VectorClass__Unowned;
		public: using __weak_ref = VectorClass__Weak;
		private: using ___super = Builtin::ClassRefParentUnowned<BaseClass>;
		public: using __class = __Class_VectorClass;
		public: FORCE_INLINE decltype(auto) __ref() const noexcept { Builtin::UnownedCheck(_obj); return *reinterpret_cast<__class*>(_obj); }
		ADV_CLASS_FROM_PTR(VectorClass__Unowned)
		ADV_CLASS_UNOWNED_COMMON_CTORS(VectorClass__Unowned)
		#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline explicit operator Builtin::f32() const noexcept;
		#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline decltype(auto) _operator_subscript(Builtin::i32 idx) const  LIFETIMEBOUND;
		#line 316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline decltype(auto) _operator_subscript(Builtin::i32 idx, Builtin::i32 idx2, Builtin::i32 idx3) const ;
		
	};
	#line 209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	class VectorClass__Weak : public Builtin::ClassRefParentWeak<BaseClass> {
		public: using __self = VectorClass;
		public: using __strong_ref = VectorClass;
		public: using __unowned_ref = VectorClass__Unowned;
		public: using __weak_ref = VectorClass__Weak;
		private: using ___super = Builtin::ClassRefParentWeak<BaseClass>;
		public: using __class = __Class_VectorClass;
		static constexpr bool __IS_ADV_NULLABLE = true;
		public: FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		ADV_CLASS_WEAK_FROM_PTR(VectorClass__Weak)
		ADV_CLASS_WEAK_COMMON_CTORS(VectorClass__Weak)
		#define ADV_PROPERTY_SELF __self
	};
	
	
}
template<> inline constexpr bool Builtin::__details::cheapCopy<System::Application::ConcreteVectorClass> = false;

namespace System::Application {
	#line 354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	class ConcreteVectorClass : public Builtin::ClassRefParent<VectorClass> {
		public: using __self = ConcreteVectorClass;
		private: using ___super = Builtin::ClassRefParent<VectorClass>;
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
		public: ADV_PROPERTY_GETTER_STATIC(public, , Name2, getName2, Builtin::Str);
		#define ADV_PROPERTY_SELF __self
		#line 363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline  ConcreteVectorClass(Builtin::i32 i) noexcept;
		#line 387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline decltype(auto) operator+(const ConcreteVectorClass& other) const ;
		#line 390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline decltype(auto) operator==(Builtin::In<__self> other) const ;
		#line 392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline constexpr static decltype(auto) AbstractStaticMethod(Builtin::i32 i) ;
		public: using ElementType = Builtin::i32;
		
	};
	#line 354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	class ConcreteVectorClass__Unowned : public Builtin::ClassRefParentUnowned<VectorClass> {
		public: using __self = ConcreteVectorClass;
		public: using __strong_ref = ConcreteVectorClass;
		public: using __unowned_ref = ConcreteVectorClass__Unowned;
		public: using __weak_ref = ConcreteVectorClass__Weak;
		private: using ___super = Builtin::ClassRefParentUnowned<VectorClass>;
		public: using __class = __Class_ConcreteVectorClass;
		public: FORCE_INLINE decltype(auto) __ref() const noexcept { Builtin::UnownedCheck(_obj); return *reinterpret_cast<__class*>(_obj); }
		ADV_CLASS_FROM_PTR(ConcreteVectorClass__Unowned)
		ADV_CLASS_UNOWNED_COMMON_CTORS(ConcreteVectorClass__Unowned)
		#line 387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline decltype(auto) operator+(const ConcreteVectorClass& other) const ;
		#line 390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline decltype(auto) operator==(Builtin::In<__self> other) const ;
		
	};
	#line 354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	class ConcreteVectorClass__Weak : public Builtin::ClassRefParentWeak<VectorClass> {
		public: using __self = ConcreteVectorClass;
		public: using __strong_ref = ConcreteVectorClass;
		public: using __unowned_ref = ConcreteVectorClass__Unowned;
		public: using __weak_ref = ConcreteVectorClass__Weak;
		private: using ___super = Builtin::ClassRefParentWeak<VectorClass>;
		public: using __class = __Class_ConcreteVectorClass;
		static constexpr bool __IS_ADV_NULLABLE = true;
		public: FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		ADV_CLASS_WEAK_FROM_PTR(ConcreteVectorClass__Weak)
		ADV_CLASS_WEAK_COMMON_CTORS(ConcreteVectorClass__Weak)
		#define ADV_PROPERTY_SELF __self
	};
	
	
}
template<> inline constexpr bool Builtin::__details::cheapCopy<System::Application::Next> = false;

namespace System::Application {
	#line 401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	class Next : public Builtin::ObjectRef {
		public: using __self = Next;
		private: using ___super = Builtin::ObjectRef;
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
		#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline decltype(auto) operator*() const ;
		
	};
	#line 401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	class Next__Unowned : public Builtin::ObjectRef__Unowned {
		public: using __self = Next;
		public: using __strong_ref = Next;
		public: using __unowned_ref = Next__Unowned;
		public: using __weak_ref = Next__Weak;
		private: using ___super = Builtin::ObjectRef__Unowned;
		public: using __class = __Class_Next;
		public: FORCE_INLINE decltype(auto) __ref() const noexcept { Builtin::UnownedCheck(_obj); return *reinterpret_cast<__class*>(_obj); }
		ADV_CLASS_FROM_PTR(Next__Unowned)
		ADV_CLASS_UNOWNED_COMMON_CTORS(Next__Unowned)
		#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline decltype(auto) operator*() const ;
		
	};
	#line 401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	class Next__Weak : public Builtin::ObjectRef__Weak {
		public: using __self = Next;
		public: using __strong_ref = Next;
		public: using __unowned_ref = Next__Unowned;
		public: using __weak_ref = Next__Weak;
		private: using ___super = Builtin::ObjectRef__Weak;
		public: using __class = __Class_Next;
		static constexpr bool __IS_ADV_NULLABLE = true;
		public: FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		ADV_CLASS_WEAK_FROM_PTR(Next__Weak)
		ADV_CLASS_WEAK_COMMON_CTORS(Next__Weak)
		#define ADV_PROPERTY_SELF __self
	};
	
	#line 427 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	using __extension_427_Next = Next;
	#line 428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr auto TestInt(__extension_427_Next const& __this LIFETIMEBOUND, Builtin::i32 j)  -> const Builtin::i32;
	
	
}
template<> inline constexpr bool Builtin::__details::cheapCopy<System::Application::IMagicNumber> = false;

namespace System::Application {
	#line 432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class __AnyType> concept __HasMethodImplementation_a2e2f819fa3cd789 = requires(typename __AnyType::__class t) { {t.GetMagicNumber(std::declval<VectorClass>())} -> std::convertible_to<Builtin::f32>; }  || requires(typename __AnyType::__class t) { {GetMagicNumber(t, std::declval<VectorClass>())} -> std::convertible_to<Builtin::f32>; };
	#line 433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class __AnyType> concept __HasMethodImplementation_getaddd298886dbcfb6 = requires(typename __AnyType::__class t) { {t.getCount123()} -> std::convertible_to<Builtin::i32>; } || requires(typename __AnyType::__class t) { {getCount123(t)} -> std::convertible_to<Builtin::i32>; };
	namespace __vtables {
		#line 431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		struct __vtable_IMagicNumber
		{
			using fn_a2e2f819fa3cd789 = const Builtin::f32(Builtin::Object*, Builtin::In<VectorClass> f);
			fn_a2e2f819fa3cd789* fnptr_a2e2f819fa3cd789;
			#line 432 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			template<class __AnyType> static const Builtin::f32 impl_a2e2f819fa3cd789(Builtin::Object* obj, Builtin::In<VectorClass> f) { ADV_EXPRESSION_BODY(ADV_UFCS(GetMagicNumber)(*static_cast<typename __AnyType::__class*>(obj), f)); }
			using fn_getCount123 = Builtin::i32(Builtin::Object*);
			fn_getCount123* fnptr_getCount123;
			#line 433 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			template<class __AnyType> static Builtin::i32 impl_getCount123(Builtin::Object* obj) { return ADV_UFCS(getCount123)(*static_cast<typename __AnyType::__class*>(obj)); }
			
		};
	}
	#line 431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class __AnyType> inline constexpr __vtables::__vtable_IMagicNumber __vtable_IMagicNumber_for = {&__vtables::__vtable_IMagicNumber::template impl_a2e2f819fa3cd789<__AnyType>
		, &__vtables::__vtable_IMagicNumber::template impl_getCount123<__AnyType>
		};
	#line 431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class __AnyType> concept __ImplementsInterface_IMagicNumber = __HasMethodImplementation_a2e2f819fa3cd789<__AnyType> && __HasMethodImplementation_getaddd298886dbcfb6<__AnyType>;
	#line 431 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	class IMagicNumber final : public Builtin::InterfaceRef {
		public: using __self = IMagicNumber;
		public: using __vtable = __vtables::__vtable_IMagicNumber;
		public: using __class = Builtin::Object;
		public: using ___super = Builtin::InterfaceRef;
		private: friend class IMagicNumber__Unowned;
		friend class IMagicNumber__Weak;
		public: using __strong_ref = __self;
		public: using __unowned_ref = IMagicNumber__Unowned;
		public: using __weak_ref = IMagicNumber__Weak;
		public: template<class __AnyType> static constexpr bool __ImplementsInterface = __ImplementsInterface_IMagicNumber<__AnyType>;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_STRONG_COMMON_CTORS(IMagicNumber);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IMagicNumber(const __AnyType& value) : ___super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::Retain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IMagicNumber(__AnyType&& value) : ___super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IMagicNumber& operator=(const __AnyType& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IMagicNumber& operator=(__AnyType&& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); _vtable = Builtin::GetVTableFromInterface(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); return *this; } 
		public: template<class __AnyType> IMagicNumber(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			static_assert(__ImplementsInterface_IMagicNumber<std::decay_t<__AnyType>>,"Cannot initialize interface IMagicNumber from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IMagicNumber_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IMagicNumber(__AnyType&& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			static_assert(__ImplementsInterface_IMagicNumber<std::decay_t<__AnyType>>,"Cannot initialize interface IMagicNumber from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IMagicNumber_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::__self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> IMagicNumber(__AnyType&& value) : ___super((Builtin::Object*)&value), _vtable{ &__vtable_IMagicNumber_for<__FixedType> } { static_assert(__ImplementsInterface_IMagicNumber<__FixedType>, "Cannot initialize interface IMagicNumber from this type"); Builtin::Retain(_obj); }
		public: template<class __AnyType> IMagicNumber& operator=(const __AnyType& value) {
			static_assert(__ImplementsInterface_IMagicNumber<std::decay_t<__AnyType>>,"Cannot initialize interface IMagicNumber from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IMagicNumber_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IMagicNumber& operator=(__AnyType&& value) {
			static_assert(__ImplementsInterface_IMagicNumber<std::decay_t<__AnyType>>,"Cannot initialize interface IMagicNumber from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IMagicNumber_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::__self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> IMagicNumber& operator=(__AnyType&& value) { static_assert(__ImplementsInterface_IMagicNumber<__FixedType>, "Cannot initialize interface IMagicNumber from this type"); 
 		if (_obj) Builtin::Release(_obj); _obj = (Builtin::Object*)&value; Builtin::Retain(_obj); 
		_vtable = &__vtable_IMagicNumber_for<__FixedType>; return *this; }
		
	};
	class IMagicNumber__Unowned final : public Builtin::InterfaceRef__Unowned {
		public: using __self = IMagicNumber__Unowned;
		public: using __vtable = __vtables::__vtable_IMagicNumber;
		public: using __class = Builtin::Object;
		public: using ___super = Builtin::InterfaceRef__Unowned;
		private: friend class IMagicNumber;
		public: using __strong_ref = IMagicNumber;
		public: using __unowned_ref = __self;
		public: using __weak_ref = IMagicNumber__Weak;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { UnownedCheck(_obj); return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { UnownedCheck(_obj); return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_UNOWNED_COMMON_CTORS(IMagicNumber__Unowned);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IMagicNumber__Unowned(const __AnyType& value) : ___super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::UnownedRetain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IMagicNumber__Unowned& operator=(const __AnyType& value) { if (_obj) Builtin::UnownedRelease(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires __ImplementsInterface_IMagicNumber<__AnyType> IMagicNumber__Unowned(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_IMagicNumber<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> IMagicNumber__Unowned(__AnyType&& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj);if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_IMagicNumber<__AnyType> IMagicNumber__Unowned& operator=(const __AnyType& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		public: template<class __AnyType> requires __ImplementsInterface_IMagicNumber<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> IMagicNumber__Unowned& operator=(__AnyType&& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	class IMagicNumber__Weak final : public Builtin::ObjectRef__Weak {
		public: using __self = IMagicNumber__Weak;
		public: using __vtable = __vtables::__vtable_IMagicNumber;
		public: using __class = Builtin::Object;
		public: using ___super = Builtin::ObjectRef__Weak;
		private: friend class IMagicNumber;
		public: using __strong_ref = IMagicNumber;
		public: using __unowned_ref = IMagicNumber__Unowned;
		public: using __weak_ref = __self;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_WEAK_COMMON_CTORS(IMagicNumber__Weak);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IMagicNumber__Weak(const __AnyType& value) : ___super(formWeakRef(Builtin::GetObjectReferenceFromInterface(&value))), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IMagicNumber__Weak& operator=(const __AnyType& value) { if (_obj) _obj->decrementWeak(); _obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires __ImplementsInterface_IMagicNumber<__AnyType> IMagicNumber__Weak(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_IMagicNumber<__AnyType> IMagicNumber__Weak& operator=(const __AnyType& value) {
			if (_obj) _obj->decrementWeak();
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IMagicNumber::__vtable> FORCE_INLINE const Builtin::f32 GetMagicNumber(const __AnyInterface& iface, Builtin::In<VectorClass> f)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_a2e2f819fa3cd789(Builtin::GetObjectReferenceFromInterface(&iface), f)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IMagicNumber::__vtable> FORCE_INLINE const Builtin::i32 getCount123(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getCount123(Builtin::GetObjectReferenceFromInterface(&iface)); }
	
	
}
template<> inline constexpr bool Builtin::__details::cheapCopy<System::Application::IResettable> = false;

namespace System::Application {
	#line 437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class __AnyType> concept __HasMethodImplementation_565bebff34b81aa1 = requires(typename __AnyType::__class t) { {t.Reset()} -> std::same_as<void>; }  || requires(typename __AnyType::__class t) { {Reset(t)} -> std::same_as<void>; };
	namespace __vtables {
		#line 436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		struct __vtable_IResettable
		{
			using fn_565bebff34b81aa1 = void(Builtin::Object*);
			fn_565bebff34b81aa1* fnptr_565bebff34b81aa1;
			#line 437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			template<class __AnyType> static void impl_565bebff34b81aa1(Builtin::Object* obj) { ADV_EXPRESSION_BODY(ADV_UFCS(Reset)(*static_cast<typename __AnyType::__class*>(obj))); }
			
		};
	}
	#line 436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class __AnyType> inline constexpr __vtables::__vtable_IResettable __vtable_IResettable_for = {&__vtables::__vtable_IResettable::template impl_565bebff34b81aa1<__AnyType>
		};
	#line 436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class __AnyType> concept __ImplementsInterface_IResettable = __HasMethodImplementation_565bebff34b81aa1<__AnyType>;
	#line 436 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	class IResettable final : public Builtin::InterfaceRef {
		public: using __self = IResettable;
		public: using __vtable = __vtables::__vtable_IResettable;
		public: using __class = Builtin::Object;
		public: using ___super = Builtin::InterfaceRef;
		private: friend class IResettable__Unowned;
		friend class IResettable__Weak;
		public: using __strong_ref = __self;
		public: using __unowned_ref = IResettable__Unowned;
		public: using __weak_ref = IResettable__Weak;
		public: template<class __AnyType> static constexpr bool __ImplementsInterface = __ImplementsInterface_IResettable<__AnyType>;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_STRONG_COMMON_CTORS(IResettable);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IResettable(const __AnyType& value) : ___super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::Retain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IResettable(__AnyType&& value) : ___super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IResettable& operator=(const __AnyType& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IResettable& operator=(__AnyType&& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); _vtable = Builtin::GetVTableFromInterface(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); return *this; } 
		public: template<class __AnyType> IResettable(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			static_assert(__ImplementsInterface_IResettable<std::decay_t<__AnyType>>,"Cannot initialize interface IResettable from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &__vtable_IResettable_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IResettable_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IResettable_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IResettable_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IResettable(__AnyType&& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			static_assert(__ImplementsInterface_IResettable<std::decay_t<__AnyType>>,"Cannot initialize interface IResettable from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &__vtable_IResettable_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IResettable_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IResettable_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IResettable_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::__self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> IResettable(__AnyType&& value) : ___super((Builtin::Object*)&value), _vtable{ &__vtable_IResettable_for<__FixedType> } { static_assert(__ImplementsInterface_IResettable<__FixedType>, "Cannot initialize interface IResettable from this type"); Builtin::Retain(_obj); }
		public: template<class __AnyType> IResettable& operator=(const __AnyType& value) {
			static_assert(__ImplementsInterface_IResettable<std::decay_t<__AnyType>>,"Cannot initialize interface IResettable from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &__vtable_IResettable_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IResettable_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IResettable_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IResettable_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IResettable& operator=(__AnyType&& value) {
			static_assert(__ImplementsInterface_IResettable<std::decay_t<__AnyType>>,"Cannot initialize interface IResettable from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &__vtable_IResettable_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IResettable_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IResettable_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IResettable_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::__self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> IResettable& operator=(__AnyType&& value) { static_assert(__ImplementsInterface_IResettable<__FixedType>, "Cannot initialize interface IResettable from this type"); 
 		if (_obj) Builtin::Release(_obj); _obj = (Builtin::Object*)&value; Builtin::Retain(_obj); 
		_vtable = &__vtable_IResettable_for<__FixedType>; return *this; }
		
	};
	class IResettable__Unowned final : public Builtin::InterfaceRef__Unowned {
		public: using __self = IResettable__Unowned;
		public: using __vtable = __vtables::__vtable_IResettable;
		public: using __class = Builtin::Object;
		public: using ___super = Builtin::InterfaceRef__Unowned;
		private: friend class IResettable;
		public: using __strong_ref = IResettable;
		public: using __unowned_ref = __self;
		public: using __weak_ref = IResettable__Weak;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { UnownedCheck(_obj); return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { UnownedCheck(_obj); return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_UNOWNED_COMMON_CTORS(IResettable__Unowned);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IResettable__Unowned(const __AnyType& value) : ___super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::UnownedRetain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IResettable__Unowned& operator=(const __AnyType& value) { if (_obj) Builtin::UnownedRelease(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires __ImplementsInterface_IResettable<__AnyType> IResettable__Unowned(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IResettable_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IResettable_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_IResettable<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> IResettable__Unowned(__AnyType&& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj);if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IResettable_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &__vtable_IResettable_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_IResettable<__AnyType> IResettable__Unowned& operator=(const __AnyType& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IResettable_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IResettable_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		public: template<class __AnyType> requires __ImplementsInterface_IResettable<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> IResettable__Unowned& operator=(__AnyType&& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IResettable_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &__vtable_IResettable_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	class IResettable__Weak final : public Builtin::ObjectRef__Weak {
		public: using __self = IResettable__Weak;
		public: using __vtable = __vtables::__vtable_IResettable;
		public: using __class = Builtin::Object;
		public: using ___super = Builtin::ObjectRef__Weak;
		private: friend class IResettable;
		public: using __strong_ref = IResettable;
		public: using __unowned_ref = IResettable__Unowned;
		public: using __weak_ref = __self;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_WEAK_COMMON_CTORS(IResettable__Weak);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IResettable__Weak(const __AnyType& value) : ___super(formWeakRef(Builtin::GetObjectReferenceFromInterface(&value))), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IResettable__Weak& operator=(const __AnyType& value) { if (_obj) _obj->decrementWeak(); _obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires __ImplementsInterface_IResettable<__AnyType> IResettable__Weak(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &__vtable_IResettable_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_IResettable<__AnyType> IResettable__Weak& operator=(const __AnyType& value) {
			if (_obj) _obj->decrementWeak();
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &__vtable_IResettable_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IResettable::__vtable> FORCE_INLINE void Reset(const __AnyInterface& iface)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_565bebff34b81aa1(Builtin::GetObjectReferenceFromInterface(&iface))); }
	
	
}
template<> inline constexpr bool Builtin::__details::cheapCopy<System::Application::IInterface> = false;

namespace System::Application {
	#line 446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class __AnyType> concept __HasMethodImplementation_fbc51d6746c8ca94 = requires(typename __AnyType::__class t) { {t.operator+(std::declval<ConcreteVectorClass>())} -> std::convertible_to<ConcreteVectorClass>; }  || requires(typename __AnyType::__class t) { {operator+(t, std::declval<ConcreteVectorClass>())} -> std::convertible_to<ConcreteVectorClass>; };
	#line 450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class __AnyType> concept __HasMethodImplementation_8addcb5f9470873d = requires(typename __AnyType::__class t) { {t.getAt(std::declval<Builtin::i32>())} -> std::convertible_to<Builtin::f32&>; }  || requires(typename __AnyType::__class t) { {_operator_subscript(t, std::declval<Builtin::i32>())} -> std::convertible_to<Builtin::f32&>; };
	#line 452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class __AnyType> concept __HasMethodImplementation_5aa06689d687e755 = requires { {__AnyType::__class::AbstractStaticMethod(std::declval<Builtin::i32>())} -> std::convertible_to<Builtin::i32>; }  || requires { { __static_AbstractStaticMethod<__AnyType>(std::declval<Builtin::i32>())} -> std::convertible_to<Builtin::i32>; };
	#line 448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class __AnyType> concept __HasMethodImplementation_getfd864fe31949d59b = requires(typename __AnyType::__class t) { {t.getName()} -> std::convertible_to<Builtin::Str>; } || requires(typename __AnyType::__class t) { {getName(t)} -> std::convertible_to<Builtin::Str>; };
	#line 449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class __AnyType> concept __HasMethodImplementation_get150f67e3f8760e2b = requires { __AnyType::Name2; } || requires { __static_getName2<__AnyType>(); };
	#line 442 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class __AnyType> concept __HasAssociatedType_639db4f5c0c18988 = requires { typename __AnyType::ElementType; };
	#line 440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	ADV_CHECK_INTERFACE(IMagicNumber, IMagicNumber);
	#line 440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	ADV_CHECK_INTERFACE(IResettable, IResettable);
	namespace __vtables {
		#line 440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		struct __vtable_IInterface : public IMagicNumber::__vtable, public IResettable::__vtable
		{
			using fn_fbc51d6746c8ca94 = const ConcreteVectorClass(Builtin::Object*, const ConcreteVectorClass& f);
			fn_fbc51d6746c8ca94* fnptr_fbc51d6746c8ca94;
			#line 446 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			template<class __AnyType> static const ConcreteVectorClass impl_fbc51d6746c8ca94(Builtin::Object* obj, const ConcreteVectorClass& f) { ADV_EXPRESSION_BODY(ADV_UFCS(operator+)(*static_cast<typename __AnyType::__class*>(obj), f)); }
			using fn_8addcb5f9470873d = Builtin::f32&(Builtin::Object*, Builtin::i32 i);
			fn_8addcb5f9470873d* fnptr_8addcb5f9470873d;
			#line 450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			template<class __AnyType> static Builtin::f32& impl_8addcb5f9470873d(Builtin::Object* obj, Builtin::i32 i) { return ADV_UFCS(getAt)(*static_cast<typename __AnyType::__class*>(obj), i); }
			using fn_getName = Builtin::Str(Builtin::Object*);
			fn_getName* fnptr_getName;
			#line 448 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			template<class __AnyType> static Builtin::Str impl_getName(Builtin::Object* obj) { return ADV_UFCS(getName)(*static_cast<typename __AnyType::__class*>(obj)); }
			
		};
	}
	#line 440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class __AnyType> inline constexpr __vtables::__vtable_IInterface __vtable_IInterface_for = {__vtable_IMagicNumber_for<__AnyType>
		, __vtable_IResettable_for<__AnyType>
		, &__vtables::__vtable_IInterface::template impl_fbc51d6746c8ca94<__AnyType>
		, &__vtables::__vtable_IInterface::template impl_8addcb5f9470873d<__AnyType>
		, &__vtables::__vtable_IInterface::template impl_getName<__AnyType>
		};
	#line 440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class __AnyType> concept __ImplementsInterface_IInterface = __ImplementsInterface_IMagicNumber<__AnyType> && __ImplementsInterface_IResettable<__AnyType> && __HasMethodImplementation_fbc51d6746c8ca94<__AnyType> && __HasMethodImplementation_8addcb5f9470873d<__AnyType> && __HasMethodImplementation_5aa06689d687e755<__AnyType> && __HasMethodImplementation_getfd864fe31949d59b<__AnyType> && __HasMethodImplementation_get150f67e3f8760e2b<__AnyType> && __HasAssociatedType_639db4f5c0c18988<__AnyType>;
	#line 440 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	class IInterface final : public Builtin::InterfaceRef {
		public: using __self = IInterface;
		public: using __vtable = __vtables::__vtable_IInterface;
		public: using __class = Builtin::Object;
		public: using ___super = Builtin::InterfaceRef;
		private: friend class IInterface__Unowned;
		friend class IInterface__Weak;
		public: using __strong_ref = __self;
		public: using __unowned_ref = IInterface__Unowned;
		public: using __weak_ref = IInterface__Weak;
		public: template<class __AnyType> static constexpr bool __ImplementsInterface = __ImplementsInterface_IInterface<__AnyType>;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_STRONG_COMMON_CTORS(IInterface);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IInterface(const __AnyType& value) : ___super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::Retain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IInterface(__AnyType&& value) : ___super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IInterface& operator=(const __AnyType& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable> && std::is_rvalue_reference_v<__AnyType&&>
		IInterface& operator=(__AnyType&& value) { if (_obj) Builtin::Release(_obj); _obj = Builtin::GetObjectReference(&value); _vtable = Builtin::GetVTableFromInterface(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); return *this; } 
		public: template<class __AnyType> IInterface(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			static_assert(__ImplementsInterface_IInterface<std::decay_t<__AnyType>>,"Cannot initialize interface IInterface from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IInterface_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IInterface(__AnyType&& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			static_assert(__ImplementsInterface_IInterface<std::decay_t<__AnyType>>,"Cannot initialize interface IInterface from this type");
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IInterface_for<typename __AnyType::__type>; }
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::__self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> IInterface(__AnyType&& value) : ___super((Builtin::Object*)&value), _vtable{ &__vtable_IInterface_for<__FixedType> } { static_assert(__ImplementsInterface_IInterface<__FixedType>, "Cannot initialize interface IInterface from this type"); Builtin::Retain(_obj); }
		public: template<class __AnyType> IInterface& operator=(const __AnyType& value) {
			static_assert(__ImplementsInterface_IInterface<std::decay_t<__AnyType>>,"Cannot initialize interface IInterface from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::Retain(_obj);
				_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IInterface_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType> requires std::is_rvalue_reference_v<__AnyType&&> IInterface& operator=(__AnyType&& value) {
			static_assert(__ImplementsInterface_IInterface<std::decay_t<__AnyType>>,"Cannot initialize interface IInterface from this type");
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::ClearObjectReference((Builtin::ObjectRef*)&value);
				_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::Retain(_obj);
				_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::Struct, std::remove_cvref_t<__AnyType>>) {
			_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
				_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>>;
			} else { _obj = (Builtin::Object*)value.obj; _vtable = &__vtable_IInterface_for<typename __AnyType::__type>; } return *this;
		}
		public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::__self> requires std::is_base_of_v<Builtin::Object, std::decay_t<__AnyType>> IInterface& operator=(__AnyType&& value) { static_assert(__ImplementsInterface_IInterface<__FixedType>, "Cannot initialize interface IInterface from this type"); 
 		if (_obj) Builtin::Release(_obj); _obj = (Builtin::Object*)&value; Builtin::Retain(_obj); 
		_vtable = &__vtable_IInterface_for<__FixedType>; return *this; }
		#line 441 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		static constexpr auto VERSION = Builtin::i32(12345);
		#line 443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		using SomeInt = Builtin::i32;
		#line 445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: const Builtin::f32 DefaultMethod(Builtin::In<VectorClass> f) const ;
		#line 453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: static const Builtin::i32 SomeStaticMethod(Builtin::i32 i) ;
		
	};
	class IInterface__Unowned final : public Builtin::InterfaceRef__Unowned {
		public: using __self = IInterface__Unowned;
		public: using __vtable = __vtables::__vtable_IInterface;
		public: using __class = Builtin::Object;
		public: using ___super = Builtin::InterfaceRef__Unowned;
		private: friend class IInterface;
		public: using __strong_ref = IInterface;
		public: using __unowned_ref = __self;
		public: using __weak_ref = IInterface__Weak;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { UnownedCheck(_obj); return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { UnownedCheck(_obj); return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_UNOWNED_COMMON_CTORS(IInterface__Unowned);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IInterface__Unowned(const __AnyType& value) : ___super(Builtin::GetObjectReference(&value)), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{
			Builtin::UnownedRetain(_obj);
		}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IInterface__Unowned& operator=(const __AnyType& value) { if (_obj) Builtin::UnownedRelease(_obj); _obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires __ImplementsInterface_IInterface<__AnyType> IInterface__Unowned(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_IInterface<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> IInterface__Unowned(__AnyType&& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj);if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_IInterface<__AnyType> IInterface__Unowned& operator=(const __AnyType& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		public: template<class __AnyType> requires __ImplementsInterface_IInterface<__AnyType> && std::is_rvalue_reference_v<__AnyType&&> IInterface__Unowned& operator=(__AnyType&& value) {
			if (_obj) Builtin::Release(_obj);
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReferenceFromInterface(&value); Builtin::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(&value); Builtin::UnownedRetain(_obj);
				_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>>;
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
			_obj = Builtin::GetObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value)); Builtin::ClearObjectReference(reinterpret_cast<Builtin::ObjectRef*>(&value));
				_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	class IInterface__Weak final : public Builtin::ObjectRef__Weak {
		public: using __self = IInterface__Weak;
		public: using __vtable = __vtables::__vtable_IInterface;
		public: using __class = Builtin::Object;
		public: using ___super = Builtin::ObjectRef__Weak;
		private: friend class IInterface;
		public: using __strong_ref = IInterface;
		public: using __unowned_ref = IInterface__Unowned;
		public: using __weak_ref = __self;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		private: const __vtable* _vtable;
		ADV_INTERFACE_WEAK_COMMON_CTORS(IInterface__Weak);
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IInterface__Weak(const __AnyType& value) : ___super(formWeakRef(Builtin::GetObjectReferenceFromInterface(&value))), _vtable{ Builtin::GetVTableFromInterface(&value) } 
		{}
		public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, Builtin::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
		IInterface__Weak& operator=(const __AnyType& value) { if (_obj) _obj->decrementWeak(); _obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); _vtable = Builtin::GetVTableFromInterface(&value); return *this; } 
		public: template<class __AnyType> requires __ImplementsInterface_IInterface<__AnyType> IInterface__Weak(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
		{
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object");
		}
		public: template<class __AnyType> requires __ImplementsInterface_IInterface<__AnyType> IInterface__Weak& operator=(const __AnyType& value) {
			if (_obj) _obj->decrementWeak();
			if constexpr (std::is_base_of_v<Builtin::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = Builtin::GetVTableFromInterface(&value);
				else static_assert(false, "Incompatible interfaces");
			} else if constexpr (std::is_base_of_v<Builtin::ObjectRef, std::remove_cvref_t<__AnyType>>) {
			_obj = formWeakRef(Builtin::GetObjectReference(&value)); 
				_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>>;
			} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
		}
		
	};
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IInterface::__vtable> FORCE_INLINE const Builtin::f32 DefaultMethod(const __AnyInterface& iface, Builtin::In<VectorClass> f)  { ADV_EXPRESSION_BODY(reinterpret_cast<const IInterface*>(&iface)->DefaultMethod(f)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IInterface::__vtable> FORCE_INLINE const ConcreteVectorClass operator+(const __AnyInterface& iface, const ConcreteVectorClass& f)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_fbc51d6746c8ca94(Builtin::GetObjectReferenceFromInterface(&iface), f)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IInterface::__vtable> FORCE_INLINE Builtin::f32& getAt(const __AnyInterface& iface, Builtin::i32 i)  { ADV_EXPRESSION_BODY(Builtin::GetVTableFromInterface(&iface)->fnptr_8addcb5f9470873d(Builtin::GetObjectReferenceFromInterface(&iface), i)); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IInterface::__vtable> FORCE_INLINE decltype(auto) _operator_subscript(const __AnyInterface& iface, Builtin::i32 i) { return getAt(iface, i); }
	template<class __AnyInterface> requires std::derived_from<__AnyInterface, Builtin::InterfaceRef> && std::derived_from<typename __AnyInterface::__vtable, typename IInterface::__vtable> FORCE_INLINE const Builtin::Str getName(const __AnyInterface& iface) { return Builtin::GetVTableFromInterface(&iface)->fnptr_getName(Builtin::GetObjectReferenceFromInterface(&iface)); }
	
	class __Class_DayOfWeek;
	#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	struct DayOfWeek final : public Builtin::Enum {
		public: using __self = DayOfWeek;
		public: using __class = __Class_DayOfWeek;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		private: Builtin::i32 __value;
		#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: constexpr auto getValue() const noexcept { return __value; } ADV_PROPERTY_GETTER(public, Value, getValue, Builtin::i32)
		#line 457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: static const DayOfWeek Monday;
		#line 458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: static const DayOfWeek Tuesday;
		#line 459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: static const DayOfWeek Wednesday;
		#line 460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: static const DayOfWeek Thursday;
		#line 461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: static const DayOfWeek Friday;
		#line 462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: static const DayOfWeek Saturday;
		#line 463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: static const DayOfWeek Sunday;
		#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		private: static constexpr Builtin::Str __names[] = {u"Monday", u"Tuesday", u"Wednesday", u"Thursday", u"Friday", u"Saturday", u"Sunday"};
		#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: static constexpr int __variants = 7;
		#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: static constexpr std::span<const Builtin::Str> GetNames() noexcept { return __names; }
		#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		private: static const DayOfWeek __values[];
		#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: static constexpr std::span<const DayOfWeek> GetValues() noexcept;
		#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: constexpr operator bool() const noexcept { return static_cast<bool>(__value); } 
		#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: constexpr bool operator ==(const __self& that) const noexcept { return __value == that.__value; } 
		#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: constexpr operator Builtin::i32() const noexcept { return __value; }
		#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		private: constexpr DayOfWeek(Builtin::i32 value) : __value(value) {}
		
	};
	
	#line 457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr DayOfWeek DayOfWeek::Monday = Builtin::i32(Builtin::i32(1));
	
	#line 458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr DayOfWeek DayOfWeek::Tuesday = Builtin::i32(Builtin::i64(Monday.__value) + 1);
	
	#line 459 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr DayOfWeek DayOfWeek::Wednesday = Builtin::i32(Builtin::i64(Tuesday.__value) + 1);
	
	#line 460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr DayOfWeek DayOfWeek::Thursday = Builtin::i32(Builtin::i64(Wednesday.__value) + 1);
	
	#line 461 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr DayOfWeek DayOfWeek::Friday = Builtin::i32(Builtin::i64(Thursday.__value) + 1);
	
	#line 462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr DayOfWeek DayOfWeek::Saturday = Builtin::i32(Builtin::i64(Friday.__value) + 1);
	
	#line 463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr DayOfWeek DayOfWeek::Sunday = Builtin::i32(Builtin::i64(Saturday.__value) + 1);
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
	#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	struct [[clang::annotate("UserAttr: Flags")]] Options final : public Builtin::Enum {
		public: using __self = Options;
		public: using __class = __Class_Options;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		private: Builtin::u8 __value;
		#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: constexpr auto getValue() const noexcept { return __value; } ADV_PROPERTY_GETTER(public, Value, getValue, Builtin::u8)
		#line 468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: static const Options None;
		#line 469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: static const Options First;
		#line 470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: static const Options Second;
		#line 471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: static const Options Third;
		#line 472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: static const Options Fourth;
		#line 473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: static const Options Fiveth;
		#line 474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: static const Options Sixth;
		#line 475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: static const Options Seventh;
		#line 477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: static const Options All;
		#line 478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: static const Options Weekend;
		#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		private: static constexpr Builtin::Str __names[] = {u"None", u"First", u"Second", u"Third", u"Fourth", u"Fiveth", u"Sixth", u"Seventh", u"All", u"Weekend"};
		#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: static constexpr int __variants = 10;
		#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: static constexpr std::span<const Builtin::Str> GetNames() noexcept { return __names; }
		#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		private: static const Options __values[];
		#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: static constexpr std::span<const Options> GetValues() noexcept;
		#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: constexpr operator bool() const noexcept { return static_cast<bool>(__value); } 
		#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: constexpr bool operator ==(const __self& that) const noexcept { return __value == that.__value; } 
		#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: constexpr Options operator &(Options other) const noexcept { return (__value & other.__value); }
		#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: constexpr bool HasFlag(Options other) const noexcept { return static_cast<bool>(__value & other.__value); }
		#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: constexpr const Options operator |(Options other) const noexcept { return (__value | other.__value); }
		#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: constexpr Options& operator |=(Options other) noexcept { __value |= other.__value; return *this; }
		#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: constexpr Options& AddFlag(Options other) noexcept { __value |= other.__value; return *this; }
		#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: constexpr Options RemoveFlag(Options other) noexcept { __value &=~ other.__value; return __value; }
		#line 480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline auto getIsWeekend() const  -> bool;
		#line 9999 "Collections.ast"
		ADV_PROPERTY_GETTER(public, IsWeekend, getIsWeekend, bool);
		#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: constexpr operator Builtin::u8() const noexcept { return __value; }
		#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		private: constexpr Options(Builtin::u8 value) : __value(value) {}
		
	};
	
	#line 468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr Options Options::None = Builtin::u8(Builtin::i32(0));
	
	#line 469 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr Options Options::First = Builtin::u8(Builtin::i64(None.__value) << 1 ? Builtin::i64(None.__value) << 1 : 1);
	
	#line 470 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr Options Options::Second = Builtin::u8(Builtin::i64(First.__value) << 1 ? Builtin::i64(First.__value) << 1 : 1);
	
	#line 471 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr Options Options::Third = Builtin::u8(Builtin::i64(Second.__value) << 1 ? Builtin::i64(Second.__value) << 1 : 1);
	
	#line 472 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr Options Options::Fourth = Builtin::u8(Builtin::i64(Third.__value) << 1 ? Builtin::i64(Third.__value) << 1 : 1);
	
	#line 473 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr Options Options::Fiveth = Builtin::u8(Builtin::i64(Fourth.__value) << 1 ? Builtin::i64(Fourth.__value) << 1 : 1);
	
	#line 474 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr Options Options::Sixth = Builtin::u8(Builtin::i64(Fiveth.__value) << 1 ? Builtin::i64(Fiveth.__value) << 1 : 1);
	
	#line 475 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr Options Options::Seventh = Builtin::u8(Builtin::i64(Sixth.__value) << 1 ? Builtin::i64(Sixth.__value) << 1 : 1);
	
	#line 477 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr Options Options::All = Builtin::u8(First | Second | Third | Fourth | Fiveth | Sixth | Seventh);
	
	#line 478 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr Options Options::Weekend = Builtin::u8(Sixth | Seventh);
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
	#line 482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	struct Text final : public Builtin::Enum {
		public: using __self = Text;
		public: using __class = __Class_Text;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		private: Builtin::Str __value;
		#line 482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: constexpr auto getValue() const noexcept { return __value; } ADV_PROPERTY_GETTER(public, Value, getValue, Builtin::Str)
		#line 483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: static const Text Monday;
		#line 484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: static const Text Tuesday;
		#line 485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: static const Text Wednesday;
		#line 486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: static const Text Thursday;
		#line 487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: static const Text Friday;
		#line 488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: static const Text Saturday;
		#line 489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: static const Text Sunday;
		#line 482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		private: static constexpr Builtin::Str __names[] = {u"Monday", u"Tuesday", u"Wednesday", u"Thursday", u"Friday", u"Saturday", u"Sunday"};
		#line 482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: static constexpr int __variants = 7;
		#line 482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: static constexpr std::span<const Builtin::Str> GetNames() noexcept { return __names; }
		#line 482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		private: static const Text __values[];
		#line 482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: static constexpr std::span<const Text> GetValues() noexcept;
		#line 482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: constexpr operator bool() const noexcept { return static_cast<bool>(__value); } 
		#line 482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: constexpr bool operator ==(const __self& that) const noexcept { return __value == that.__value; } 
		#line 494 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		private: inline auto getShortString() const  -> Builtin::Str;
		#line 9999 "Collections.ast"
		ADV_PROPERTY_GETTER(private, ShortString, getShortString, Builtin::Str);
		#line 491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline auto ToShortString() const  -> const Builtin::Str;
		#line 482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: constexpr operator Builtin::Str() const noexcept { return __value; }
		#line 482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		private: constexpr Text(Builtin::Str value) : __value(value) {}
		
	};
	
	#line 483 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr Text Text::Monday = Builtin::Str(Builtin::Str{u"This is Monday"});
	
	#line 484 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr Text Text::Tuesday = Builtin::Str(Builtin::Str{u"This is Tuesday"});
	
	#line 485 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr Text Text::Wednesday = Builtin::Str(Builtin::Str{u"This is Wednesday"});
	
	#line 486 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr Text Text::Thursday = Builtin::Str(Builtin::Str{u"This is Thursday"});
	
	#line 487 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr Text Text::Friday = Builtin::Str(Builtin::Str{u"This is Friday"});
	
	#line 488 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr Text Text::Saturday = Builtin::Str(Builtin::Str{u"This is Saturday"});
	
	#line 489 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr Text Text::Sunday = Builtin::Str(Builtin::Str{u"This is Sunday"});
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
template<> inline constexpr bool Builtin::__details::cheapCopy<System::Application::ComplexVariant> = false;

namespace System::Application {
	#line 497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	class ComplexVariant final : public Builtin::EnumClassRef {
		public: using __self = ComplexVariant;
		private: using ___super = Builtin::EnumClassRef;
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
		public: ADV_PROPERTY_GETTER_STATIC(public, , Count10, getCount10, Builtin::i32);
		#define ADV_PROPERTY_SELF __self
		#line 509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline decltype(auto) operator*() const ;
		public: FORCE_INLINE static decltype(auto) getValue1() noexcept;
		ADV_PROPERTY_GETTER_STATIC(public, , Value1, getValue1, __self);
		public: FORCE_INLINE static decltype(auto) getValue2() noexcept;
		ADV_PROPERTY_GETTER_STATIC(public, , Value2, getValue2, __self);
		public: FORCE_INLINE static decltype(auto) getValue3() noexcept;
		ADV_PROPERTY_GETTER_STATIC(public, , Value3, getValue3, __self);
		public: FORCE_INLINE static decltype(auto) getValue4() noexcept;
		ADV_PROPERTY_GETTER_STATIC(public, , Value4, getValue4, __self);
		#line 497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: FORCE_INLINE static decltype(auto) GetValues() noexcept;
		
	};
	#line 497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	class ComplexVariant__Unowned : public Builtin::ObjectRef__Unowned {
		public: using __self = ComplexVariant;
		public: using __strong_ref = ComplexVariant;
		public: using __unowned_ref = ComplexVariant__Unowned;
		public: using __weak_ref = ComplexVariant__Weak;
		private: using ___super = Builtin::ObjectRef__Unowned;
		public: using __class = __Class_ComplexVariant;
		public: FORCE_INLINE decltype(auto) __ref() const noexcept { Builtin::UnownedCheck(_obj); return *reinterpret_cast<__class*>(_obj); }
		ADV_CLASS_FROM_PTR(ComplexVariant__Unowned)
		ADV_CLASS_UNOWNED_COMMON_CTORS(ComplexVariant__Unowned)
		#line 509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline decltype(auto) operator*() const ;
		
	};
	#line 497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	class ComplexVariant__Weak : public Builtin::ObjectRef__Weak {
		public: using __self = ComplexVariant;
		public: using __strong_ref = ComplexVariant;
		public: using __unowned_ref = ComplexVariant__Unowned;
		public: using __weak_ref = ComplexVariant__Weak;
		private: using ___super = Builtin::ObjectRef__Weak;
		public: using __class = __Class_ComplexVariant;
		static constexpr bool __IS_ADV_NULLABLE = true;
		public: FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		ADV_CLASS_WEAK_FROM_PTR(ComplexVariant__Weak)
		ADV_CLASS_WEAK_COMMON_CTORS(ComplexVariant__Weak)
		#define ADV_PROPERTY_SELF __self
	};
	
	class __Class_Media;
	#line 523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	struct Media final : public Builtin::Union {
		public: using __self = Media;
		public: using __class = __Class_Media;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		private: struct __UnionType_None{ constexpr bool operator==(const __UnionType_None &) const noexcept { return true; } }; public: static constexpr __UnionType_None None{};
		#line 525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: using String = Builtin::Str; ADV_CHECK_REF_STRUCT("str", Builtin::Str);
		#line 526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: using XYZ = std::tuple<Builtin::i32, Builtin::i32, Builtin::i32>;
		#line 527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: struct Audio { decltype(auto) __ref() const noexcept { return *this; }
			Builtin::Str name; ADV_CHECK_REF_STRUCT("str", Builtin::Str);
			Builtin::i32 len; ADV_CHECK_REF_STRUCT("i32", Builtin::i32);
			Builtin::f32 volume; ADV_CHECK_REF_STRUCT("f32", Builtin::f32);
			bool operator==(const Audio& that) const noexcept { return name == that.name && len == that.len && volume == that.volume; }
		};
		#line 528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: struct Video { decltype(auto) __ref() const noexcept { return *this; }
			Builtin::Str name; ADV_CHECK_REF_STRUCT("str", Builtin::Str);
			Builtin::i32 len; ADV_CHECK_REF_STRUCT("i32", Builtin::i32);
			Builtin::f32 fps; ADV_CHECK_REF_STRUCT("f32", Builtin::f32);
			Builtin::Str lang; ADV_CHECK_REF_STRUCT("str", Builtin::Str);
			bool operator==(const Video& that) const noexcept { return name == that.name && len == that.len && fps == that.fps && lang == that.lang; }
		};
		#line 529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: struct Text { decltype(auto) __ref() const noexcept { return *this; }
			Builtin::Str lang; ADV_CHECK_REF_STRUCT("str", Builtin::Str);
			bool operator==(const Text& that) const noexcept { return lang == that.lang; }
		};
		private: union {
			#line 524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			__UnionType_None _None;
			#line 525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			String _String;
			#line 526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			XYZ _XYZ;
			#line 527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			Audio _Audio;
			#line 528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			Video _Video;
			#line 529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			Text _Text;
			
		};
		enum : unsigned char {
			_TAG__None, _TAG__String, _TAG__XYZ, _TAG__Audio, _TAG__Video, _TAG__Text
		} __union_internal_tag;
		public:
		#line 523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		static constexpr int __variants = 6;
		#line 524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		Media(Builtin::In<__UnionType_None> value) : __union_internal_tag{ _TAG__None } { new (&_None) __UnionType_None(value); }
		#line 525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		Media(Builtin::In<String> value) : __union_internal_tag{ _TAG__String } { new (&_String) String(value); }
		#line 526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		Media(Builtin::In<XYZ> value) : __union_internal_tag{ _TAG__XYZ } { new (&_XYZ) XYZ(value); }
		#line 527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		Media(Builtin::In<Audio> value) : __union_internal_tag{ _TAG__Audio } { new (&_Audio) Audio(value); }
		#line 528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		Media(Builtin::In<Video> value) : __union_internal_tag{ _TAG__Video } { new (&_Video) Video(value); }
		#line 529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		Media(Builtin::In<Text> value) : __union_internal_tag{ _TAG__Text } { new (&_Text) Text(value); }
		#line 9999 "Collections.ast"
		private: void __copy(const __self& other) {
			__union_internal_tag = other.__union_internal_tag;
			switch (__union_internal_tag) {
				#line 524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__None: new (&_None) __UnionType_None(other._None); break;
				#line 525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__String: new (&_String) String(other._String); break;
				#line 526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__XYZ: new (&_XYZ) XYZ(other._XYZ); break;
				#line 527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Audio: new (&_Audio) Audio(other._Audio); break;
				#line 528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Video: new (&_Video) Video(other._Video); break;
				#line 529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Text: new (&_Text) Text(other._Text); break;
				
			}
		}
		#line 523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: Media(const __self& other) { __copy(other); }
		#line 9999 "Collections.ast"
		private: void __move(__self&& other) {
			__union_internal_tag = other.__union_internal_tag;
			switch (__union_internal_tag) {
				#line 524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__None: new (&_None) __UnionType_None(std::move(other._None)); break;
				#line 525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__String: new (&_String) String(std::move(other._String)); break;
				#line 526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__XYZ: new (&_XYZ) XYZ(std::move(other._XYZ)); break;
				#line 527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Audio: new (&_Audio) Audio(std::move(other._Audio)); break;
				#line 528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Video: new (&_Video) Video(std::move(other._Video)); break;
				#line 529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Text: new (&_Text) Text(std::move(other._Text)); break;
				
			}
		}
		#line 523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: Media(__self&& other) { __move(std::move(other)); }
		#line 9999 "Collections.ast"
		private: void __destroy() {
			switch (__union_internal_tag) {
				#line 524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__None: _None.~__UnionType_None(); break;
				#line 525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__String: _String.~String(); break;
				#line 526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__XYZ: _XYZ.~XYZ(); break;
				#line 527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Audio: _Audio.~Audio(); break;
				#line 528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Video: _Video.~Video(); break;
				#line 529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Text: _Text.~Text(); break;
				
			}
		}
		#line 523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: ~Media() { __destroy(); }
		#line 524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		Media& operator=(Builtin::In<__UnionType_None> value) {
			__destroy();
			__union_internal_tag = _TAG__None;
			new (&_None) __UnionType_None(value); return *this;
		}
		#line 525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		Media& operator=(Builtin::In<String> value) {
			__destroy();
			__union_internal_tag = _TAG__String;
			new (&_String) String(value); return *this;
		}
		#line 526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		Media& operator=(Builtin::In<XYZ> value) {
			__destroy();
			__union_internal_tag = _TAG__XYZ;
			new (&_XYZ) XYZ(value); return *this;
		}
		#line 527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		Media& operator=(Builtin::In<Audio> value) {
			__destroy();
			__union_internal_tag = _TAG__Audio;
			new (&_Audio) Audio(value); return *this;
		}
		#line 528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		Media& operator=(Builtin::In<Video> value) {
			__destroy();
			__union_internal_tag = _TAG__Video;
			new (&_Video) Video(value); return *this;
		}
		#line 529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		Media& operator=(Builtin::In<Text> value) {
			__destroy();
			__union_internal_tag = _TAG__Text;
			new (&_Text) Text(value); return *this;
		}
		#line 523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: __self& operator=(const __self& other) { __destroy(); __copy(other); return *this; }
		#line 523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: __self& operator=(__self&& other) { __destroy(); __move(std::move(other)); return *this; }
		#line 524 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: auto GetNone() { if (__union_internal_tag != _TAG__None) throw std::logic_error("Type mismatch in the discriminated union"); return _None; }
		#line 525 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: auto GetString() { if (__union_internal_tag != _TAG__String) throw std::logic_error("Type mismatch in the discriminated union"); return _String; }
		#line 526 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: auto GetXYZ() { if (__union_internal_tag != _TAG__XYZ) throw std::logic_error("Type mismatch in the discriminated union"); return _XYZ; }
		#line 527 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: auto GetAudio() { if (__union_internal_tag != _TAG__Audio) throw std::logic_error("Type mismatch in the discriminated union"); return _Audio; }
		#line 528 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: auto GetVideo() { if (__union_internal_tag != _TAG__Video) throw std::logic_error("Type mismatch in the discriminated union"); return _Video; }
		#line 529 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
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
		public: template<class __SomeT> Builtin::Nullable<__SomeT> As() const noexcept {
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
		#line 537 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline constexpr auto getCount123() const  -> Builtin::i32;
		#line 9999 "Collections.ast"
		ADV_PROPERTY_GETTER(public, Count123, getCount123, Builtin::i32);
		#line 539 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline constexpr static auto getCount10()  -> Builtin::i32;
		#line 9999 "Collections.ast"
		ADV_PROPERTY_GETTER_STATIC(public, , Count10, getCount10, Builtin::i32);
		#line 531 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline auto printVariant() const  -> void;
		#line 535 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline auto GetMagicNumber(Builtin::In<VectorClass> f) const  -> const Builtin::f32;
		
	};
	
	template<class T1, class T2> class __Class_Union2;
	#line 542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class T1, class T2> struct Union2 final : public Builtin::Union {
		public: using __self = Union2<T1, T2>;
		public: using __class = __Class_Union2<T1, T2>;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: using Type1 = T1; ADV_CHECK_REF_STRUCT("T1", T1);
		#line 544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: using Type2 = T2; ADV_CHECK_REF_STRUCT("T2", T2);
		private: union {
			#line 543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			Type1 _Type1;
			#line 544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			Type2 _Type2;
			
		};
		enum : unsigned char {
			_TAG__Type1, _TAG__Type2
		} __union_internal_tag;
		public:
		#line 542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		static constexpr int __variants = 2;
		#line 543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		Union2(Builtin::In<Type1> value) : __union_internal_tag{ _TAG__Type1 } { new (&_Type1) Type1(value); }
		#line 544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		Union2(Builtin::In<Type2> value) : __union_internal_tag{ _TAG__Type2 } { new (&_Type2) Type2(value); }
		#line 9999 "Collections.ast"
		private: void __copy(const __self& other) {
			__union_internal_tag = other.__union_internal_tag;
			switch (__union_internal_tag) {
				#line 543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type1: new (&_Type1) Type1(other._Type1); break;
				#line 544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type2: new (&_Type2) Type2(other._Type2); break;
				
			}
		}
		#line 542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: Union2(const __self& other) { __copy(other); }
		#line 9999 "Collections.ast"
		private: void __move(__self&& other) {
			__union_internal_tag = other.__union_internal_tag;
			switch (__union_internal_tag) {
				#line 543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type1: new (&_Type1) Type1(std::move(other._Type1)); break;
				#line 544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type2: new (&_Type2) Type2(std::move(other._Type2)); break;
				
			}
		}
		#line 542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: Union2(__self&& other) { __move(std::move(other)); }
		#line 9999 "Collections.ast"
		private: void __destroy() {
			switch (__union_internal_tag) {
				#line 543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type1: _Type1.~Type1(); break;
				#line 544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type2: _Type2.~Type2(); break;
				
			}
		}
		#line 542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: ~Union2() { __destroy(); }
		#line 543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		Union2& operator=(Builtin::In<Type1> value) {
			__destroy();
			__union_internal_tag = _TAG__Type1;
			new (&_Type1) Type1(value); return *this;
		}
		#line 544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		Union2& operator=(Builtin::In<Type2> value) {
			__destroy();
			__union_internal_tag = _TAG__Type2;
			new (&_Type2) Type2(value); return *this;
		}
		#line 542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: __self& operator=(const __self& other) { __destroy(); __copy(other); return *this; }
		#line 542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: __self& operator=(__self&& other) { __destroy(); __move(std::move(other)); return *this; }
		#line 543 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: auto GetType1() { if (__union_internal_tag != _TAG__Type1) throw std::logic_error("Type mismatch in the discriminated union"); return _Type1; }
		#line 544 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: auto GetType2() { if (__union_internal_tag != _TAG__Type2) throw std::logic_error("Type mismatch in the discriminated union"); return _Type2; }
		#line 9999 "Collections.ast"
		public: template<class __SomeT> bool Is() const noexcept {
			if constexpr (std::is_same_v<__SomeT, Type1>) return __union_internal_tag == _TAG__Type1;
			else if constexpr (std::is_same_v<__SomeT, Type2>) return __union_internal_tag == _TAG__Type2;
			return false;
		}
		#line 9999 "Collections.ast"
		public: template<class __SomeT> Builtin::Nullable<__SomeT> As() const noexcept {
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
	#line 547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class T1, class T2, class T3> struct Union3 final : public Builtin::Union {
		public: using __self = Union3<T1, T2, T3>;
		public: using __class = __Class_Union3<T1, T2, T3>;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: using Type1 = T1; ADV_CHECK_REF_STRUCT("T1", T1);
		#line 549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: using Type2 = T2; ADV_CHECK_REF_STRUCT("T2", T2);
		#line 550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: using Type3 = T3; ADV_CHECK_REF_STRUCT("T3", T3);
		private: union {
			#line 548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			Type1 _Type1;
			#line 549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			Type2 _Type2;
			#line 550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			Type3 _Type3;
			
		};
		enum : unsigned char {
			_TAG__Type1, _TAG__Type2, _TAG__Type3
		} __union_internal_tag;
		public:
		#line 547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		static constexpr int __variants = 3;
		#line 548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		Union3(Builtin::In<Type1> value) : __union_internal_tag{ _TAG__Type1 } { new (&_Type1) Type1(value); }
		#line 549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		Union3(Builtin::In<Type2> value) : __union_internal_tag{ _TAG__Type2 } { new (&_Type2) Type2(value); }
		#line 550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		Union3(Builtin::In<Type3> value) : __union_internal_tag{ _TAG__Type3 } { new (&_Type3) Type3(value); }
		#line 9999 "Collections.ast"
		private: void __copy(const __self& other) {
			__union_internal_tag = other.__union_internal_tag;
			switch (__union_internal_tag) {
				#line 548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type1: new (&_Type1) Type1(other._Type1); break;
				#line 549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type2: new (&_Type2) Type2(other._Type2); break;
				#line 550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type3: new (&_Type3) Type3(other._Type3); break;
				
			}
		}
		#line 547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: Union3(const __self& other) { __copy(other); }
		#line 9999 "Collections.ast"
		private: void __move(__self&& other) {
			__union_internal_tag = other.__union_internal_tag;
			switch (__union_internal_tag) {
				#line 548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type1: new (&_Type1) Type1(std::move(other._Type1)); break;
				#line 549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type2: new (&_Type2) Type2(std::move(other._Type2)); break;
				#line 550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type3: new (&_Type3) Type3(std::move(other._Type3)); break;
				
			}
		}
		#line 547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: Union3(__self&& other) { __move(std::move(other)); }
		#line 9999 "Collections.ast"
		private: void __destroy() {
			switch (__union_internal_tag) {
				#line 548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type1: _Type1.~Type1(); break;
				#line 549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type2: _Type2.~Type2(); break;
				#line 550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type3: _Type3.~Type3(); break;
				
			}
		}
		#line 547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: ~Union3() { __destroy(); }
		#line 548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		Union3& operator=(Builtin::In<Type1> value) {
			__destroy();
			__union_internal_tag = _TAG__Type1;
			new (&_Type1) Type1(value); return *this;
		}
		#line 549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		Union3& operator=(Builtin::In<Type2> value) {
			__destroy();
			__union_internal_tag = _TAG__Type2;
			new (&_Type2) Type2(value); return *this;
		}
		#line 550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		Union3& operator=(Builtin::In<Type3> value) {
			__destroy();
			__union_internal_tag = _TAG__Type3;
			new (&_Type3) Type3(value); return *this;
		}
		#line 547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: __self& operator=(const __self& other) { __destroy(); __copy(other); return *this; }
		#line 547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: __self& operator=(__self&& other) { __destroy(); __move(std::move(other)); return *this; }
		#line 548 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: auto GetType1() { if (__union_internal_tag != _TAG__Type1) throw std::logic_error("Type mismatch in the discriminated union"); return _Type1; }
		#line 549 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: auto GetType2() { if (__union_internal_tag != _TAG__Type2) throw std::logic_error("Type mismatch in the discriminated union"); return _Type2; }
		#line 550 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: auto GetType3() { if (__union_internal_tag != _TAG__Type3) throw std::logic_error("Type mismatch in the discriminated union"); return _Type3; }
		#line 9999 "Collections.ast"
		public: template<class __SomeT> bool Is() const noexcept {
			if constexpr (std::is_same_v<__SomeT, Type1>) return __union_internal_tag == _TAG__Type1;
			else if constexpr (std::is_same_v<__SomeT, Type2>) return __union_internal_tag == _TAG__Type2;
			else if constexpr (std::is_same_v<__SomeT, Type3>) return __union_internal_tag == _TAG__Type3;
			return false;
		}
		#line 9999 "Collections.ast"
		public: template<class __SomeT> Builtin::Nullable<__SomeT> As() const noexcept {
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
	#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class T1, class T2, class T3, class T4> struct Union4 final : public Builtin::Union {
		public: using __self = Union4<T1, T2, T3, T4>;
		public: using __class = __Class_Union4<T1, T2, T3, T4>;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: using Type1 = T1; ADV_CHECK_REF_STRUCT("T1", T1);
		#line 555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: using Type2 = T2; ADV_CHECK_REF_STRUCT("T2", T2);
		#line 556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: using Type3 = T3; ADV_CHECK_REF_STRUCT("T3", T3);
		#line 557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: using Type4 = T4; ADV_CHECK_REF_STRUCT("T4", T4);
		private: union {
			#line 554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			Type1 _Type1;
			#line 555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			Type2 _Type2;
			#line 556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			Type3 _Type3;
			#line 557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			Type4 _Type4;
			
		};
		enum : unsigned char {
			_TAG__Type1, _TAG__Type2, _TAG__Type3, _TAG__Type4
		} __union_internal_tag;
		public:
		#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		static constexpr int __variants = 4;
		#line 554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		Union4(Builtin::In<Type1> value) : __union_internal_tag{ _TAG__Type1 } { new (&_Type1) Type1(value); }
		#line 555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		Union4(Builtin::In<Type2> value) : __union_internal_tag{ _TAG__Type2 } { new (&_Type2) Type2(value); }
		#line 556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		Union4(Builtin::In<Type3> value) : __union_internal_tag{ _TAG__Type3 } { new (&_Type3) Type3(value); }
		#line 557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		Union4(Builtin::In<Type4> value) : __union_internal_tag{ _TAG__Type4 } { new (&_Type4) Type4(value); }
		#line 9999 "Collections.ast"
		private: void __copy(const __self& other) {
			__union_internal_tag = other.__union_internal_tag;
			switch (__union_internal_tag) {
				#line 554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type1: new (&_Type1) Type1(other._Type1); break;
				#line 555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type2: new (&_Type2) Type2(other._Type2); break;
				#line 556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type3: new (&_Type3) Type3(other._Type3); break;
				#line 557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type4: new (&_Type4) Type4(other._Type4); break;
				
			}
		}
		#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: Union4(const __self& other) { __copy(other); }
		#line 9999 "Collections.ast"
		private: void __move(__self&& other) {
			__union_internal_tag = other.__union_internal_tag;
			switch (__union_internal_tag) {
				#line 554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type1: new (&_Type1) Type1(std::move(other._Type1)); break;
				#line 555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type2: new (&_Type2) Type2(std::move(other._Type2)); break;
				#line 556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type3: new (&_Type3) Type3(std::move(other._Type3)); break;
				#line 557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type4: new (&_Type4) Type4(std::move(other._Type4)); break;
				
			}
		}
		#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: Union4(__self&& other) { __move(std::move(other)); }
		#line 9999 "Collections.ast"
		private: void __destroy() {
			switch (__union_internal_tag) {
				#line 554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type1: _Type1.~Type1(); break;
				#line 555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type2: _Type2.~Type2(); break;
				#line 556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type3: _Type3.~Type3(); break;
				#line 557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type4: _Type4.~Type4(); break;
				
			}
		}
		#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: ~Union4() { __destroy(); }
		#line 554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		Union4& operator=(Builtin::In<Type1> value) {
			__destroy();
			__union_internal_tag = _TAG__Type1;
			new (&_Type1) Type1(value); return *this;
		}
		#line 555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		Union4& operator=(Builtin::In<Type2> value) {
			__destroy();
			__union_internal_tag = _TAG__Type2;
			new (&_Type2) Type2(value); return *this;
		}
		#line 556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		Union4& operator=(Builtin::In<Type3> value) {
			__destroy();
			__union_internal_tag = _TAG__Type3;
			new (&_Type3) Type3(value); return *this;
		}
		#line 557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		Union4& operator=(Builtin::In<Type4> value) {
			__destroy();
			__union_internal_tag = _TAG__Type4;
			new (&_Type4) Type4(value); return *this;
		}
		#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: __self& operator=(const __self& other) { __destroy(); __copy(other); return *this; }
		#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: __self& operator=(__self&& other) { __destroy(); __move(std::move(other)); return *this; }
		#line 554 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: auto GetType1() { if (__union_internal_tag != _TAG__Type1) throw std::logic_error("Type mismatch in the discriminated union"); return _Type1; }
		#line 555 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: auto GetType2() { if (__union_internal_tag != _TAG__Type2) throw std::logic_error("Type mismatch in the discriminated union"); return _Type2; }
		#line 556 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: auto GetType3() { if (__union_internal_tag != _TAG__Type3) throw std::logic_error("Type mismatch in the discriminated union"); return _Type3; }
		#line 557 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
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
		public: template<class __SomeT> Builtin::Nullable<__SomeT> As() const noexcept {
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
	#line 560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class T1, class T2, class T3, class T4, class T5> struct Union5 final : public Builtin::Union {
		public: using __self = Union5<T1, T2, T3, T4, T5>;
		public: using __class = __Class_Union5<T1, T2, T3, T4, T5>;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: using Type1 = T1; ADV_CHECK_REF_STRUCT("T1", T1);
		#line 562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: using Type2 = T2; ADV_CHECK_REF_STRUCT("T2", T2);
		#line 563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: using Type3 = T3; ADV_CHECK_REF_STRUCT("T3", T3);
		#line 564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: using Type4 = T4; ADV_CHECK_REF_STRUCT("T4", T4);
		#line 565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: using Type5 = T5; ADV_CHECK_REF_STRUCT("T5", T5);
		private: union {
			#line 561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			Type1 _Type1;
			#line 562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			Type2 _Type2;
			#line 563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			Type3 _Type3;
			#line 564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			Type4 _Type4;
			#line 565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			Type5 _Type5;
			
		};
		enum : unsigned char {
			_TAG__Type1, _TAG__Type2, _TAG__Type3, _TAG__Type4, _TAG__Type5
		} __union_internal_tag;
		public:
		#line 560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		static constexpr int __variants = 5;
		#line 561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		Union5(Builtin::In<Type1> value) : __union_internal_tag{ _TAG__Type1 } { new (&_Type1) Type1(value); }
		#line 562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		Union5(Builtin::In<Type2> value) : __union_internal_tag{ _TAG__Type2 } { new (&_Type2) Type2(value); }
		#line 563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		Union5(Builtin::In<Type3> value) : __union_internal_tag{ _TAG__Type3 } { new (&_Type3) Type3(value); }
		#line 564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		Union5(Builtin::In<Type4> value) : __union_internal_tag{ _TAG__Type4 } { new (&_Type4) Type4(value); }
		#line 565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		Union5(Builtin::In<Type5> value) : __union_internal_tag{ _TAG__Type5 } { new (&_Type5) Type5(value); }
		#line 9999 "Collections.ast"
		private: void __copy(const __self& other) {
			__union_internal_tag = other.__union_internal_tag;
			switch (__union_internal_tag) {
				#line 561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type1: new (&_Type1) Type1(other._Type1); break;
				#line 562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type2: new (&_Type2) Type2(other._Type2); break;
				#line 563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type3: new (&_Type3) Type3(other._Type3); break;
				#line 564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type4: new (&_Type4) Type4(other._Type4); break;
				#line 565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type5: new (&_Type5) Type5(other._Type5); break;
				
			}
		}
		#line 560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: Union5(const __self& other) { __copy(other); }
		#line 9999 "Collections.ast"
		private: void __move(__self&& other) {
			__union_internal_tag = other.__union_internal_tag;
			switch (__union_internal_tag) {
				#line 561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type1: new (&_Type1) Type1(std::move(other._Type1)); break;
				#line 562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type2: new (&_Type2) Type2(std::move(other._Type2)); break;
				#line 563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type3: new (&_Type3) Type3(std::move(other._Type3)); break;
				#line 564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type4: new (&_Type4) Type4(std::move(other._Type4)); break;
				#line 565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type5: new (&_Type5) Type5(std::move(other._Type5)); break;
				
			}
		}
		#line 560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: Union5(__self&& other) { __move(std::move(other)); }
		#line 9999 "Collections.ast"
		private: void __destroy() {
			switch (__union_internal_tag) {
				#line 561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type1: _Type1.~Type1(); break;
				#line 562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type2: _Type2.~Type2(); break;
				#line 563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type3: _Type3.~Type3(); break;
				#line 564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type4: _Type4.~Type4(); break;
				#line 565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type5: _Type5.~Type5(); break;
				
			}
		}
		#line 560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: ~Union5() { __destroy(); }
		#line 561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		Union5& operator=(Builtin::In<Type1> value) {
			__destroy();
			__union_internal_tag = _TAG__Type1;
			new (&_Type1) Type1(value); return *this;
		}
		#line 562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		Union5& operator=(Builtin::In<Type2> value) {
			__destroy();
			__union_internal_tag = _TAG__Type2;
			new (&_Type2) Type2(value); return *this;
		}
		#line 563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		Union5& operator=(Builtin::In<Type3> value) {
			__destroy();
			__union_internal_tag = _TAG__Type3;
			new (&_Type3) Type3(value); return *this;
		}
		#line 564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		Union5& operator=(Builtin::In<Type4> value) {
			__destroy();
			__union_internal_tag = _TAG__Type4;
			new (&_Type4) Type4(value); return *this;
		}
		#line 565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		Union5& operator=(Builtin::In<Type5> value) {
			__destroy();
			__union_internal_tag = _TAG__Type5;
			new (&_Type5) Type5(value); return *this;
		}
		#line 560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: __self& operator=(const __self& other) { __destroy(); __copy(other); return *this; }
		#line 560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: __self& operator=(__self&& other) { __destroy(); __move(std::move(other)); return *this; }
		#line 561 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: auto GetType1() { if (__union_internal_tag != _TAG__Type1) throw std::logic_error("Type mismatch in the discriminated union"); return _Type1; }
		#line 562 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: auto GetType2() { if (__union_internal_tag != _TAG__Type2) throw std::logic_error("Type mismatch in the discriminated union"); return _Type2; }
		#line 563 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: auto GetType3() { if (__union_internal_tag != _TAG__Type3) throw std::logic_error("Type mismatch in the discriminated union"); return _Type3; }
		#line 564 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: auto GetType4() { if (__union_internal_tag != _TAG__Type4) throw std::logic_error("Type mismatch in the discriminated union"); return _Type4; }
		#line 565 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
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
		public: template<class __SomeT> Builtin::Nullable<__SomeT> As() const noexcept {
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
	#line 568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class T1, class T2, class T3, class T4, class T5, class T6> struct Union6 final : public Builtin::Union {
		public: using __self = Union6<T1, T2, T3, T4, T5, T6>;
		public: using __class = __Class_Union6<T1, T2, T3, T4, T5, T6>;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: using Type1 = T1; ADV_CHECK_REF_STRUCT("T1", T1);
		#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: using Type2 = T2; ADV_CHECK_REF_STRUCT("T2", T2);
		#line 571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: using Type3 = T3; ADV_CHECK_REF_STRUCT("T3", T3);
		#line 572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: using Type4 = T4; ADV_CHECK_REF_STRUCT("T4", T4);
		#line 573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: using Type5 = T5; ADV_CHECK_REF_STRUCT("T5", T5);
		#line 574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: using Type6 = T6; ADV_CHECK_REF_STRUCT("T6", T6);
		private: union {
			#line 569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			Type1 _Type1;
			#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			Type2 _Type2;
			#line 571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			Type3 _Type3;
			#line 572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			Type4 _Type4;
			#line 573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			Type5 _Type5;
			#line 574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			Type6 _Type6;
			
		};
		enum : unsigned char {
			_TAG__Type1, _TAG__Type2, _TAG__Type3, _TAG__Type4, _TAG__Type5, _TAG__Type6
		} __union_internal_tag;
		public:
		#line 568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		static constexpr int __variants = 6;
		#line 569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		Union6(Builtin::In<Type1> value) : __union_internal_tag{ _TAG__Type1 } { new (&_Type1) Type1(value); }
		#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		Union6(Builtin::In<Type2> value) : __union_internal_tag{ _TAG__Type2 } { new (&_Type2) Type2(value); }
		#line 571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		Union6(Builtin::In<Type3> value) : __union_internal_tag{ _TAG__Type3 } { new (&_Type3) Type3(value); }
		#line 572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		Union6(Builtin::In<Type4> value) : __union_internal_tag{ _TAG__Type4 } { new (&_Type4) Type4(value); }
		#line 573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		Union6(Builtin::In<Type5> value) : __union_internal_tag{ _TAG__Type5 } { new (&_Type5) Type5(value); }
		#line 574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		Union6(Builtin::In<Type6> value) : __union_internal_tag{ _TAG__Type6 } { new (&_Type6) Type6(value); }
		#line 9999 "Collections.ast"
		private: void __copy(const __self& other) {
			__union_internal_tag = other.__union_internal_tag;
			switch (__union_internal_tag) {
				#line 569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type1: new (&_Type1) Type1(other._Type1); break;
				#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type2: new (&_Type2) Type2(other._Type2); break;
				#line 571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type3: new (&_Type3) Type3(other._Type3); break;
				#line 572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type4: new (&_Type4) Type4(other._Type4); break;
				#line 573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type5: new (&_Type5) Type5(other._Type5); break;
				#line 574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type6: new (&_Type6) Type6(other._Type6); break;
				
			}
		}
		#line 568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: Union6(const __self& other) { __copy(other); }
		#line 9999 "Collections.ast"
		private: void __move(__self&& other) {
			__union_internal_tag = other.__union_internal_tag;
			switch (__union_internal_tag) {
				#line 569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type1: new (&_Type1) Type1(std::move(other._Type1)); break;
				#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type2: new (&_Type2) Type2(std::move(other._Type2)); break;
				#line 571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type3: new (&_Type3) Type3(std::move(other._Type3)); break;
				#line 572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type4: new (&_Type4) Type4(std::move(other._Type4)); break;
				#line 573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type5: new (&_Type5) Type5(std::move(other._Type5)); break;
				#line 574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type6: new (&_Type6) Type6(std::move(other._Type6)); break;
				
			}
		}
		#line 568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: Union6(__self&& other) { __move(std::move(other)); }
		#line 9999 "Collections.ast"
		private: void __destroy() {
			switch (__union_internal_tag) {
				#line 569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type1: _Type1.~Type1(); break;
				#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type2: _Type2.~Type2(); break;
				#line 571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type3: _Type3.~Type3(); break;
				#line 572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type4: _Type4.~Type4(); break;
				#line 573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type5: _Type5.~Type5(); break;
				#line 574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
				case _TAG__Type6: _Type6.~Type6(); break;
				
			}
		}
		#line 568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: ~Union6() { __destroy(); }
		#line 569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		Union6& operator=(Builtin::In<Type1> value) {
			__destroy();
			__union_internal_tag = _TAG__Type1;
			new (&_Type1) Type1(value); return *this;
		}
		#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		Union6& operator=(Builtin::In<Type2> value) {
			__destroy();
			__union_internal_tag = _TAG__Type2;
			new (&_Type2) Type2(value); return *this;
		}
		#line 571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		Union6& operator=(Builtin::In<Type3> value) {
			__destroy();
			__union_internal_tag = _TAG__Type3;
			new (&_Type3) Type3(value); return *this;
		}
		#line 572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		Union6& operator=(Builtin::In<Type4> value) {
			__destroy();
			__union_internal_tag = _TAG__Type4;
			new (&_Type4) Type4(value); return *this;
		}
		#line 573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		Union6& operator=(Builtin::In<Type5> value) {
			__destroy();
			__union_internal_tag = _TAG__Type5;
			new (&_Type5) Type5(value); return *this;
		}
		#line 574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		Union6& operator=(Builtin::In<Type6> value) {
			__destroy();
			__union_internal_tag = _TAG__Type6;
			new (&_Type6) Type6(value); return *this;
		}
		#line 568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: __self& operator=(const __self& other) { __destroy(); __copy(other); return *this; }
		#line 568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: __self& operator=(__self&& other) { __destroy(); __move(std::move(other)); return *this; }
		#line 569 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: auto GetType1() { if (__union_internal_tag != _TAG__Type1) throw std::logic_error("Type mismatch in the discriminated union"); return _Type1; }
		#line 570 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: auto GetType2() { if (__union_internal_tag != _TAG__Type2) throw std::logic_error("Type mismatch in the discriminated union"); return _Type2; }
		#line 571 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: auto GetType3() { if (__union_internal_tag != _TAG__Type3) throw std::logic_error("Type mismatch in the discriminated union"); return _Type3; }
		#line 572 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: auto GetType4() { if (__union_internal_tag != _TAG__Type4) throw std::logic_error("Type mismatch in the discriminated union"); return _Type4; }
		#line 573 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: auto GetType5() { if (__union_internal_tag != _TAG__Type5) throw std::logic_error("Type mismatch in the discriminated union"); return _Type5; }
		#line 574 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
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
		public: template<class __SomeT> Builtin::Nullable<__SomeT> As() const noexcept {
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
	
	#line 577 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class T> using __extension_577_T = T;
	#line 580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class T> inline auto operator*(__extension_577_T<T> const& __this LIFETIMEBOUND, Builtin::In<Builtin::f32> f)  -> const Builtin::f32;
	#line 582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class T> inline auto PrintInterface(__extension_577_T<T> const& __this LIFETIMEBOUND, Builtin::i32 x)  -> const Builtin::i32;
	#line 590 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class T> inline const Builtin::f32 getAt(__extension_577_T<T> const& __this LIFETIMEBOUND, Builtin::f32 r, Builtin::f32 g, Builtin::f32 b);
	#line 590 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class T> inline const Builtin::f32 _operator_subscript(__extension_577_T<T> const& __this LIFETIMEBOUND, Builtin::f32 r, Builtin::f32 g, Builtin::f32 b) { return getAt(__this, r, g, b); }
	#line 592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class T> inline auto __construct_(Builtin::ConstructorProxy<__extension_577_T<T>> __ctordata, Builtin::i32 x, Builtin::Str txt)  -> decltype(auto);
	#line 597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class T> inline auto __construct_(Builtin::ConstructorProxy<__extension_577_T<T>> __ctordata, typename Builtin::MemorySpace mem, Builtin::i32 x, Builtin::Str txt)  -> decltype(auto);
	#line 578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class T> inline auto getAsString(__extension_577_T<T> const& __this ) -> const Builtin::Str;
	
	#line 606 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class T> using __extension_606_T = T;
	#line 608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class T> inline constexpr auto __static_GetSuperCount(Builtin::i32 x, Builtin::i32 y)  -> const Builtin::i32;
	#line 607 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class T> inline constexpr auto __static_getCount3() -> const Builtin::i32;
	
	#line 611 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class T> requires(Builtin::TypeIs<T, Builtin::i32>()) using __extension_611_T = T;
	#line 615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class T> [[clang::annotate("UserAttr: AllowPostfix")]] inline constexpr auto _operator_bsl_mul_div(__extension_611_T<T> const& __this LIFETIMEBOUND)  -> const Builtin::i32;
	template<class T> [[clang::annotate("UserAttr: AllowPostfix")]] inline constexpr auto _operator_bsl_mul_div_postfix(__extension_611_T<T> & __this)  -> decltype(auto);
	#line 618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class T> [[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_bsl_mul_div(__extension_611_T<T> const& __this LIFETIMEBOUND, Builtin::f32 other)  -> const Builtin::f32;
	template<class T> [[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_bsl_mul_div(Builtin::f32 other, const __extension_611_T<T> & __this)  -> decltype(auto);
	#line 612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class T> inline constexpr auto getkm(__extension_611_T<T> const& __this ) -> const Builtin::i32;
	
	#line 621 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	using __extension_621_f64 = Builtin::f64;
	#line 622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr auto getkm(__extension_621_f64 const& __this ) -> const Builtin::f64;
	
	#line 625 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	using __extension_625_str = Builtin::Str;
	#line 626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr auto getkm(__extension_625_str const& __this ) -> const Builtin::Str;
	
	class __Class_TestStruct;
	#pragma pack(push, 1)
	#line 633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	struct alignas((alignof(Builtin::i64))) TestStruct final : public Builtin::Struct {
		public: using __self = TestStruct;
		public: using __class = __Class_TestStruct;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 634 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		private: typename System::CInt x : 4; ADV_CHECK_REF_STRUCT("System.CInt", typename System::CInt);
		#line 635 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		private: typename System::CInt y : 4; ADV_CHECK_REF_STRUCT("System.CInt", typename System::CInt);
		public: TestStruct(typename System::CInt _x, typename System::CInt _y) : x{_x}, y{_y} {}
		#line 637 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		static_assert(Builtin::usize(sizeof(Builtin::i32)) == Builtin::i32(4), "i32 must be 4 bytes");
		template <size_t I> friend auto& get(TestStruct&);
		template <size_t I> friend const auto& get(const TestStruct&);
		
	};
	#pragma pack(pop)
	
	#line 657 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	using __extension_657_Vector3 = Vector3;
	#line 659 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline auto getNext(__extension_657_Vector3 const& __this LIFETIMEBOUND)  -> const Next;
	
	
	#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	class __Class_Vector3 final : public Builtin::ValueType
	{
		#line 9999 "Collections.ast"
		public: using __underlying = Vector3; using __self = __underlying;
		__self __value;
		using NestedStruct = __self::NestedStruct;
		__Class_Vector3(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
		operator __underlying() const noexcept { return __value; }
		auto getName() const -> Builtin::Str { return __value.getName(); }
		auto format() const noexcept -> Builtin::Str const { ADV_EXPRESSION_BODY(__value.format()); }
		auto HashCode() const  -> Builtin::usize const { ADV_EXPRESSION_BODY(__value.HashCode()); }
		static auto AStaticMethod(Builtin::i32 i) -> Builtin::i32 const { ADV_EXPRESSION_BODY(__self::AStaticMethod(i)); }
		operator Builtin::f32() const noexcept { return static_cast<Builtin::f32>(__value); }
		auto operator+(const __self& other) const  -> __self const { ADV_EXPRESSION_BODY(__value.operator+(other)); }
		auto operator++() -> __self & { ADV_EXPRESSION_BODY(__value.operator++()); }
		void setAt(Builtin::i32 idx, const Builtin::f32& value)  { __value.setAt(idx, value); }
		decltype(auto) getAt(Builtin::i32 idx)  { return __value._operator_subscript(idx); }
		decltype(auto) getAt(Builtin::i32 idx) const  { return __value._operator_subscript(idx); }
		decltype(auto) getAt(Builtin::i32 idx, Builtin::i32 idx2, Builtin::i32 idx3)  { return __value._operator_subscript(idx, idx2, idx3); }
		decltype(auto) getAt(Builtin::i32 idx, Builtin::i32 idx2, Builtin::i32 idx3) const  { return __value._operator_subscript(idx, idx2, idx3); }
		auto getX() const  -> Builtin::f32 const { ADV_EXPRESSION_BODY(__value.getX()); }
		static auto Method(Builtin::i32 x, Builtin::i32 y, Builtin::i32 z) -> Builtin::i32 const { ADV_EXPRESSION_BODY(__self::Method(x, y, z)); }
		auto Reset() -> void { ADV_EXPRESSION_BODY(__value.Reset()); }
		
	};
	#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	ADV_CHECK_FOR_CONCRETE(Vector3);
	
#line 205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	class __Class_BaseClass : public Builtin::Object {
		public: using __self = BaseClass;
		private: using ___super = Builtin::Object;
		public: using __selfClass = __Class_BaseClass;
		friend class __self;
		friend class __self::__weak_ref;
		#define ADV_PROPERTY_SELF __selfClass
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline virtual auto getNext() const  -> const Next;
		
#define ADV_PROPERTY_SELF __self
	};
	
	#line 205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	ADV_CHECK_FOR_CONCRETE(BaseClass);
	
#line 209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	class ADV_NOVTABLE __Class_VectorClass ADV_ABSTRACT : public Builtin::ClassParent<BaseClass> {
		public: using __self = VectorClass;
		private: using ___super = Builtin::ClassParent<BaseClass>;
		public: using __selfClass = __Class_VectorClass;
		friend class __self;
		friend class __self::__weak_ref;
		#define ADV_PROPERTY_SELF __selfClass
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		public: using NestedClass = __self::NestedClass;
		#line 218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		private: friend class TestStruct; friend class __Class_TestStruct;
		#line 219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		private: template<class T> friend class TestStruct2; template<class T> friend class __Class_TestStruct2;
		#line 220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		private: friend const Builtin::i32 func3(Builtin::i32 x);
		#line 212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: mutable Builtin::f32 x; ADV_CHECK_REF_STRUCT("f32", Builtin::f32);
		#line 212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: mutable Builtin::f32 y; ADV_CHECK_REF_STRUCT("f32", Builtin::f32);
		#line 212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: mutable Builtin::f32 z; ADV_CHECK_REF_STRUCT("f32", Builtin::f32);
		#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: static Builtin::i32 Count2; ADV_CHECK_REF_STRUCT("i32", Builtin::i32);
		#line 243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: static const Vector3 ZERO; ADV_CHECK_REF_STRUCT("Vector3", Vector3);
		#line 242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: static constexpr auto BYTES = Builtin::i32(24);
		#line 244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: using Coords = __ntuples::NamedTuple_6893f862d6c49683;
		#line 236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: virtual auto setCount(const Builtin::i32& value) -> __selfClass& = 0;
		#line 236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: virtual auto getCount() const  -> Builtin::i32 = 0;
		#line 9999 "Collections.ast"
		ADV_PROPERTY_GETTER_SETTER(public, Count, public, getCount, public, setCount, Builtin::i32);
		#line 239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: virtual auto setName(const Builtin::Str& value) -> __selfClass& = 0;
		#line 239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: virtual auto getName() const  -> Builtin::Str = 0;
		#line 9999 "Collections.ast"
		ADV_PROPERTY_GETTER_SETTER(public, Name, public, getName, public, setName, Builtin::Str);
		#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline constexpr auto format() const noexcept -> const Builtin::Str;
		#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		protected: inline constexpr __Class_VectorClass()  = default;
		#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		protected: inline constexpr __Class_VectorClass(Builtin::f32 x, Builtin::f32 y, Builtin::f32 z) noexcept;
		#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		protected: template<class U> inline constexpr explicit __Class_VectorClass(U f) ;
		#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		protected: inline explicit __Class_VectorClass(Builtin::In<__self> other) ;
		inline __Class_VectorClass(__selfClass& copy) : __Class_VectorClass(__self(copy)) {}
		#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline ~__Class_VectorClass() noexcept;
		#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline explicit operator Builtin::f32() const noexcept;
		public: inline Builtin::f32& getAt(Builtin::i32 idx);
		inline const Builtin::f32& getAt(Builtin::i32 idx) const;
		#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline auto _operator_subscript(Builtin::i32 idx)  LIFETIMEBOUND -> Builtin::f32&;
		public: inline auto _operator_subscript(Builtin::i32 idx) const  -> const Builtin::f32&;
		public: inline const Builtin::f32 getAt(Builtin::i32 idx, Builtin::i32 idx2, Builtin::i32 idx3);
		inline const Builtin::f32 getAt(Builtin::i32 idx, Builtin::i32 idx2, Builtin::i32 idx3) const;
		#line 316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline auto _operator_subscript(Builtin::i32 idx, Builtin::i32 idx2, Builtin::i32 idx3)  -> const Builtin::f32;
		public: inline auto _operator_subscript(Builtin::i32 idx, Builtin::i32 idx2, Builtin::i32 idx3) const  -> const Builtin::f32;
		#line 318 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: virtual auto getX() const  -> const Builtin::f32 = 0;
		#line 319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline virtual auto getNext() const  -> const Next final;
		#line 322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline constexpr static auto Method(Builtin::i32 x, Builtin::i32 y, Builtin::i32 z)  -> const Builtin::i32;
		#line 327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline constexpr auto Reset() const  -> void;
		#line 335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: template<class U> inline constexpr auto TemplateMethod(U x, U y, U z) const  -> const Coords;
		
#define ADV_PROPERTY_SELF __self
	};
	
	#line 209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	ADV_CHECK_FOR_ABSTRACT(VectorClass);
	#line 209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(VectorClass, BaseClass, BaseClass, VectorClass);
	
#line 354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	class __Class_ConcreteVectorClass : public Builtin::ClassParent<VectorClass> {
		public: using __self = ConcreteVectorClass;
		private: using ___super = Builtin::ClassParent<VectorClass>;
		public: using __selfClass = __Class_ConcreteVectorClass;
		friend class __self;
		friend class __self::__weak_ref;
		#define ADV_PROPERTY_SELF __selfClass
		#line 354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		ADV_CHECK_INTERFACE(IInterface, IInterface);
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: using ElementType = Builtin::i32;
		#line 367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		private: mutable Builtin::Str p_Name = Builtin::Str{u"ConcreteVectorClass"}; ADV_CHECK_REF_STRUCT("str", Builtin::Str);
		#line 367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline auto setName(const Builtin::Str& value) -> __selfClass&;
		#line 367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline auto getName() const  -> Builtin::Str;
		#line 9999 "Collections.ast"
		ADV_PROPERTY_GETTER_SETTER(public, Name, public, getName, public, setName, Builtin::Str);
		#line 369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		private: mutable Builtin::i32 p_ZZ = Builtin::i32(5); ADV_CHECK_REF_STRUCT("i32", Builtin::i32);
		#line 369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline auto setZZ(const Builtin::i32& value) -> __selfClass&;
		#line 369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline auto getZZ() const  -> Builtin::i32;
		#line 9999 "Collections.ast"
		ADV_PROPERTY_GETTER_SETTER(public, ZZ, public, getZZ, public, setZZ, Builtin::i32);
		#line 371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		private: mutable Builtin::i32 p_Count = Builtin::i32(1); ADV_CHECK_REF_STRUCT("i32", Builtin::i32);
		#line 376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		private: virtual auto setCount(const Builtin::i32& value) -> __selfClass& final;
		#line 372 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: virtual auto getCount() const  -> Builtin::i32 final;
		#line 9999 "Collections.ast"
		ADV_PROPERTY_GETTER_SETTER(public, Count, public, getCount, private, setCount, Builtin::i32);
		#line 383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline constexpr auto getCount123() const  -> Builtin::i32;
		#line 9999 "Collections.ast"
		ADV_PROPERTY_GETTER(public, Count123, getCount123, Builtin::i32);
		#line 393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline constexpr static auto getName2()  -> Builtin::Str;
		#line 9999 "Collections.ast"
		ADV_PROPERTY_GETTER_STATIC(public, , Name2, getName2, Builtin::Str);
		#line 357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline constexpr __Class_ConcreteVectorClass()  = default;
		#line 359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline constexpr __Class_ConcreteVectorClass(Builtin::f32 x, Builtin::f32 y, Builtin::f32 z) noexcept;
		#line 363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline constexpr  __Class_ConcreteVectorClass(Builtin::i32 i) noexcept;
		#line 385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline virtual auto getX() const  -> const Builtin::f32 final;
		#line 387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline auto operator+(const ConcreteVectorClass& other) const  -> const ConcreteVectorClass;
		#line 388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline auto GetMagicNumber(Builtin::In<VectorClass> i) const  -> const Builtin::f32;
		#line 390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline auto operator==(Builtin::In<__self> other) const  -> const bool;
		#line 392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline constexpr static auto AbstractStaticMethod(Builtin::i32 i)  -> const Builtin::i32;
		
#define ADV_PROPERTY_SELF __self
	};
	
	#line 354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	ADV_CHECK_FOR_CONCRETE(ConcreteVectorClass);
	#line 354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(ConcreteVectorClass, VectorClass, VectorClass, ConcreteVectorClass);
	#line 354 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(ConcreteVectorClass, IInterface, IInterface, ConcreteVectorClass);
	
#line 401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	class __Class_Next : public Builtin::Object {
		public: using __self = Next;
		private: using ___super = Builtin::Object;
		public: using __selfClass = __Class_Next;
		friend class __self;
		friend class __self::__weak_ref;
		#define ADV_PROPERTY_SELF __selfClass
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 402 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: mutable Builtin::i32 i; ADV_CHECK_REF_STRUCT("i32", Builtin::i32);
		#line 403 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: mutable Builtin::Nullable<Next>::__weak_ref v;
		#line 405 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline __Class_Next()  = default;
		#line 407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline ~__Class_Next() ;
		#line 409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline explicit __Class_Next(Builtin::i32 i) ;
		#line 414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline explicit __Class_Next(Builtin::In<__self> other) ;
		inline __Class_Next(__selfClass& copy) : __Class_Next(__self(copy)) {}
		#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline auto operator*() const  -> const Builtin::i32;
		#line 420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline auto printNext() const  -> void;
		
#define ADV_PROPERTY_SELF __self
	};
	
	#line 401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	ADV_CHECK_FOR_CONCRETE(Next);
	

	#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	class __Class_DayOfWeek final : public Builtin::ValueType
	{
		#line 9999 "Collections.ast"
		public: using __underlying = DayOfWeek; using __self = __underlying;
		__self __value;
		__Class_DayOfWeek(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
		operator __underlying() const noexcept { return __value; }
		
	};
	#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	ADV_CHECK_FOR_CONCRETE(DayOfWeek);
	

	#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	class __Class_Options final : public Builtin::ValueType
	{
		#line 9999 "Collections.ast"
		public: using __underlying = Options; using __self = __underlying;
		__self __value;
		__Class_Options(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
		operator __underlying() const noexcept { return __value; }
		auto getIsWeekend() const -> bool { return __value.getIsWeekend(); }
		
	};
	#line 467 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	ADV_CHECK_FOR_CONCRETE(Options);
	

	#line 482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	class __Class_Text final : public Builtin::ValueType
	{
		#line 9999 "Collections.ast"
		public: using __underlying = Text; using __self = __underlying;
		__self __value;
		__Class_Text(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
		operator __underlying() const noexcept { return __value; }
		auto ToShortString() const  -> Builtin::Str const { ADV_EXPRESSION_BODY(__value.ToShortString()); }
		
	};
	#line 482 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	ADV_CHECK_FOR_CONCRETE(Text);
	
#line 497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	class __Class_ComplexVariant final : public Builtin::EnumClass {
		public: using __self = ComplexVariant;
		private: using ___super = Builtin::EnumClass;
		public: using __selfClass = __Class_ComplexVariant;
		friend class __self;
		friend class __self::__weak_ref;
		#define ADV_PROPERTY_SELF __selfClass
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 504 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: const Builtin::i32 i; ADV_CHECK_REF_STRUCT("i32", Builtin::i32);
		#line 505 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: const Builtin::f32 f; ADV_CHECK_REF_STRUCT("f32", Builtin::f32);
		#line 506 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: const Builtin::Str s; ADV_CHECK_REF_STRUCT("str", Builtin::Str);
		private: __Class_ComplexVariant(Builtin::i32 _i, Builtin::f32 _f, Builtin::Str _s) : i{_i}, f{_f}, s{_s} {}
		#line 498 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: static  const __self Value1;
		#line 499 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: static  const __self Value2;
		#line 500 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: static  const __self Value3;
		#line 501 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: static  const __self Value4;
		#line 497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		private: static  const __self __values[];
		#line 497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: static std::span<const __self> GetValues() noexcept { return { __values, 4 }; }
		#line 497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: static constexpr int __variants = 4;
		#line 518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline constexpr auto getCount123() const  -> Builtin::i32;
		#line 9999 "Collections.ast"
		ADV_PROPERTY_GETTER(public, Count123, getCount123, Builtin::i32);
		#line 520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline constexpr static auto getCount10()  -> Builtin::i32;
		#line 9999 "Collections.ast"
		ADV_PROPERTY_GETTER_STATIC(public, , Count10, getCount10, Builtin::i32);
		#line 509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline auto operator*() const  -> const Builtin::i32;
		#line 511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline auto printVariant() const  -> void;
		#line 516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		public: inline auto GetMagicNumber(Builtin::In<VectorClass> f) const  -> const Builtin::f32;
		
#define ADV_PROPERTY_SELF __self
	};
	
	#line 497 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	ADV_CHECK_FOR_CONCRETE(ComplexVariant);
	

	#line 523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	class __Class_Media final : public Builtin::ValueType
	{
		#line 523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		ADV_CHECK_INTERFACE(IMagicNumber, IMagicNumber);
		#line 9999 "Collections.ast"
		public: using __underlying = Media; using __self = __underlying;
		__self __value;
		__Class_Media(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
		operator __underlying() const noexcept { return __value; }
		auto getCount123() const -> Builtin::i32 { return __value.getCount123(); }
		auto printVariant() const  -> void { ADV_EXPRESSION_BODY(__value.printVariant()); }
		auto GetMagicNumber(Builtin::In<VectorClass> f) const  -> Builtin::f32 const { ADV_EXPRESSION_BODY(__value.GetMagicNumber(f)); }
		
	};
	#line 523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	ADV_CHECK_FOR_CONCRETE(Media);
	#line 523 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	ADV_CHECK_INTERFACE_IMPLEMENTATION(Media, IMagicNumber, IMagicNumber, Media);
	

	#line 542 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class T1, class T2> class __Class_Union2 final : public Builtin::ValueType
	{
		#line 9999 "Collections.ast"
		public: using __underlying = Union2<T1, T2>; using __self = __underlying;
		__self __value;
		__Class_Union2(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
		operator __underlying() const noexcept { return __value; }
		
	};
	

	#line 547 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class T1, class T2, class T3> class __Class_Union3 final : public Builtin::ValueType
	{
		#line 9999 "Collections.ast"
		public: using __underlying = Union3<T1, T2, T3>; using __self = __underlying;
		__self __value;
		__Class_Union3(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
		operator __underlying() const noexcept { return __value; }
		
	};
	

	#line 553 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class T1, class T2, class T3, class T4> class __Class_Union4 final : public Builtin::ValueType
	{
		#line 9999 "Collections.ast"
		public: using __underlying = Union4<T1, T2, T3, T4>; using __self = __underlying;
		__self __value;
		__Class_Union4(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
		operator __underlying() const noexcept { return __value; }
		
	};
	

	#line 560 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class T1, class T2, class T3, class T4, class T5> class __Class_Union5 final : public Builtin::ValueType
	{
		#line 9999 "Collections.ast"
		public: using __underlying = Union5<T1, T2, T3, T4, T5>; using __self = __underlying;
		__self __value;
		__Class_Union5(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
		operator __underlying() const noexcept { return __value; }
		
	};
	

	#line 568 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class T1, class T2, class T3, class T4, class T5, class T6> class __Class_Union6 final : public Builtin::ValueType
	{
		#line 9999 "Collections.ast"
		public: using __underlying = Union6<T1, T2, T3, T4, T5, T6>; using __self = __underlying;
		__self __value;
		__Class_Union6(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
		operator __underlying() const noexcept { return __value; }
		
	};
	

	#line 633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	class __Class_TestStruct final : public Builtin::ValueType
	{
		#line 9999 "Collections.ast"
		public: using __underlying = TestStruct; using __self = __underlying;
		__self __value;
		__Class_TestStruct(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
		operator __underlying() const noexcept { return __value; }
		
	};
	#line 633 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	ADV_CHECK_FOR_CONCRETE(TestStruct);
	
namespace __ntuples {
		#line 9999 "Collections.ast"
		struct NamedTuple_4e7be1ed49b09d71 final : public Builtin::Struct { 
			using __class = Builtin::__Class_Basic<NamedTuple_4e7be1ed49b09d71>;
			Builtin::i32 i;
			Builtin::f64 f;
			Builtin::Str s;
			NamedTuple_4e7be1ed49b09d71() = default;
			NamedTuple_4e7be1ed49b09d71(Builtin::In<Builtin::i32> _i, Builtin::In<Builtin::f64> _f, Builtin::In<Builtin::Str> _s) : i{_i}, f{_f}, s{_s} {}
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
		struct NamedTuple_6893f862d6c49683 final : public Builtin::Struct { 
			using __class = Builtin::__Class_Basic<NamedTuple_6893f862d6c49683>;
			Builtin::i32 x;
			Builtin::i32 y;
			Builtin::i32 z;
			NamedTuple_6893f862d6c49683() = default;
			NamedTuple_6893f862d6c49683(Builtin::In<Builtin::i32> _x, Builtin::In<Builtin::i32> _y, Builtin::In<Builtin::i32> _z) : x{_x}, y{_y}, z{_z} {}
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
#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr auto square(auto a)  -> decltype(auto);
#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	[[clang::annotate("varargs:1")]] auto printParams(Builtin::Str s, std::initializer_list<Builtin::i32> params)  -> void;
#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	[[clang::annotate("varargs:1")]] auto printParams(Builtin::Str s, std::initializer_list<Builtin::Str> params)  -> void;
#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class T, int32_t U> auto sum(T a, T b)  -> decltype(auto);
#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<> inline constexpr auto sum<Builtin::i32, Builtin::i32(15)>(Builtin::i32 a, Builtin::i32 b)  -> decltype(auto);
#line 84 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline auto func4(Builtin::i32 x)  -> const Builtin::i32;
#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline auto _operator_subscript(Builtin::In<VectorClass> vec, Builtin::f32 x, Builtin::f32 y)  -> const Builtin::f32;
#line 629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline auto getSum(Builtin::In<VectorClass> vec)  -> const Builtin::f32;
#line 640 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class T1, class T2> inline auto ttest(T1 x, T2 y)  -> const Builtin::i32;
#line 643 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class... TArgs> inline auto vsum(TArgs&&... args)  -> decltype(auto);
//###############################################################################
//# Global compile-time constants
//###############################################################################
#if (_DEBUG)
#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
template<class T> inline constexpr T NORMAL_CONSTANT = Builtin::i32(45);
#endif 
#if (_DEBUG)
#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
inline constexpr auto INT_CONSTANT = NORMAL_CONSTANT<Builtin::i32>;
#endif 
#if (_DEBUG)
#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
inline constexpr auto LONG_CONSTANT = NORMAL_CONSTANT<Builtin::i64>;
#endif 
//###############################################################################
//# Global variable declarations
//###############################################################################
#line 4 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
[[clang::annotate("unsafe")]] extern volatile Builtin::Unsafe::__VolatileRawPtr<const Builtin::char16> globalVar;
#line 5 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
[[clang::annotate("unsafe")]] extern const Builtin::Unsafe::__RawPtr<Builtin::i32> globalVar1;
//###############################################################################
//# Function definitions
//###############################################################################

#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr auto square(auto a)  -> decltype(auto)
	{
		#line 27 "Collections.ast"
		ADV_EXPRESSION_BODY(a * a); 
	}
#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<> inline constexpr auto sum<Builtin::i32, Builtin::i32(15)>(Builtin::i32 a, Builtin::i32 b)  -> decltype(auto)
	{
		#line 55 "Collections.ast"
		ADV_EXPRESSION_BODY(a + b + Builtin::i32(15)); 
	}
#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline Span::~Span() noexcept
	{
		#line 61 "Collections.ast"
		print(Builtin::Str{u"Span deiniting"}); 
	}
#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline Vector3::__sctor::~__sctor() 
	{
		#line 77 "Collections.ast"
		ADV_EXPRESSION_BODY(print(Builtin::Str{u"Static destructor call!"})); 
	}
#line 84 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline auto func4(Builtin::i32 x)  -> const Builtin::i32
	{
		#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		return Builtin::i32(0);
	}
#line 100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr auto Vector3::format() const noexcept -> const Builtin::Str
	{
		#line 100 "Collections.ast"
		ADV_EXPRESSION_BODY(Builtin::Str{u"test"}); 
	}
#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr auto Vector3::HashCode() const  -> const Builtin::usize
	{
		#line 101 "Collections.ast"
		ADV_EXPRESSION_BODY(Builtin::u32(654321U)); 
	}
#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr auto Vector3::AStaticMethod(Builtin::i32 i)  -> const Builtin::i32
	{
		#line 102 "Collections.ast"
		ADV_EXPRESSION_BODY(i * Builtin::i32(2)); 
	}
#line 117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr auto Vector3::getName() const  -> Builtin::Str 
	{
		#line 117 "Collections.ast"
		ADV_EXPRESSION_BODY(Builtin::Str{u"Vector3"}); 
	}
	
#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr auto Vector3::__Class_NestedStruct::count(Builtin::i32 i)  -> const Builtin::i32
	{
		#line 129 "Collections.ast"
		ADV_EXPRESSION_BODY(i * Builtin::i32(10)); 
	}
#line 136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class U> inline constexpr Vector3::Vector3(U f)  :
	#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	Vector3(f, f, f)
	{
		#line 138 "Collections.ast"
		this->x = f;
	}
#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline Vector3::~Vector3() noexcept
	{
		#line 141 "Collections.ast"
		print(Builtin::Str{u"Vector3 deiniting"}); 
	}
#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr Vector3::operator Builtin::f32() const noexcept
	{
		#line 143 "Collections.ast"
		ADV_EXPRESSION_BODY(y); 
	}
#line 145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline auto Vector3::operator+(const __self& other) const  -> const __self
	{
		#line 145 "Collections.ast"
		ADV_EXPRESSION_BODY(__self{ADV_UPCS(x)((*this).__ref()) + ADV_UPCS(x)(other.__ref()), ADV_UPCS(y)((*this).__ref()) + ADV_UPCS(y)(other.__ref()), ADV_UPCS(z)((*this).__ref()) + ADV_UPCS(z)(other.__ref())}); 
	}
#line 147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline auto Vector3::operator++()  -> __self&
	{
		#line 148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		++x;
		#line 149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		++y;
		#line 150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		++z;
		#line 151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		++Count;
		#line 154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		return (*this);
	}
	#line 147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline auto Vector3::operator++(int)  -> __self { auto copy = Builtin::New<__self>(__self(*this)); ++(*this); return copy; }
#line 157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	auto Vector3::_operator_subscript(Builtin::i32 idx)  -> __IndexerAccessor_157<Builtin::f32>
	{
		return __IndexerAccessor_157<Builtin::f32>{ *this, idx };
	}

	#line 157 "Collections.ast"
	auto Vector3::_operator_subscript(Builtin::i32 idx)  const  -> const __IndexerAccessor_157<Builtin::f32>
	{
		return __IndexerAccessor_157<Builtin::f32>{ *this, idx };
	}

	#line 157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	auto Vector3::getAt(Builtin::i32 idx)  -> const Builtin::f32
	{
		#line 159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		print(Builtin::Str{u"Read"});
		#line 160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		return x;
	}
	#line 157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	auto Vector3::getAt(Builtin::i32 idx) const  -> const Builtin::f32
	{
		#line 159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		print(Builtin::Str{u"Read"});
		#line 160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		return x;
	}
	#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	auto Vector3::setAt(Builtin::i32 idx, const Builtin::f32& value)  -> void 
	{
		#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		if (value < Builtin::i32(10)) {
			#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			return ;
		}
		#line 164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		x = Builtin::i32(5);
	}
#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr auto Vector3::_operator_subscript(Builtin::i32 idx, Builtin::i32 idx2, Builtin::i32 idx3)  -> const Builtin::f32
	{
		#line 167 "Collections.ast"
		ADV_EXPRESSION_BODY(y + z); 
	}
	#line 167 "Collections.ast"
	inline constexpr auto Vector3::_operator_subscript(Builtin::i32 idx, Builtin::i32 idx2, Builtin::i32 idx3)  const  -> const Builtin::f32
	{
		#line 167 "Collections.ast"
		ADV_EXPRESSION_BODY(y + z); 
	}
	#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr auto Vector3::getAt(Builtin::i32 idx, Builtin::i32 idx2, Builtin::i32 idx3)  -> const Builtin::f32 { return _operator_subscript(idx, idx2, idx3); }
	#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr auto Vector3::getAt(Builtin::i32 idx, Builtin::i32 idx2, Builtin::i32 idx3) const  -> const Builtin::f32 { return _operator_subscript(idx, idx2, idx3); }
#line 169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr auto Vector3::getX() const  -> const Builtin::f32
	{
		#line 169 "Collections.ast"
		ADV_EXPRESSION_BODY(x); 
	}
#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr auto Vector3::Method(Builtin::i32 x, Builtin::i32 y, Builtin::i32 z)  -> const Builtin::i32
	{
		#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		return y + z;
	}
#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr auto Vector3::Reset()  -> void
	{
		#line 180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		x = Builtin::i32(0);
		#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		y = Builtin::i32(0);
		#line 182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		z = Builtin::i32(0);
	}
#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class U> inline constexpr auto Vector3::TemplateMethod(U x, U y, U z)  -> const typename Vector3::Coords
	{
		#line 188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		class __Class_LocalStruct;
		#line 188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		struct LocalStruct : public Builtin::Struct
		{
			public: using __self = LocalStruct;
			public: using __class = __Class_LocalStruct;
			public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
			#line 189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			#line 189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			public: Builtin::f32 x{}; 
			#line 189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			public: Builtin::f32 y{}; 
			#line 189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			public: Builtin::f32 z{}; 
			
			
		};
		#line 188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		class __Class_LocalStruct : public Builtin::ValueType
		{
			#line 9999 "Collections.ast"
			LocalStruct __value;
			public: using __underlying = LocalStruct; using __self = __underlying;
			__Class_LocalStruct(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
			operator __underlying() const noexcept { return __value; }
			
		};
		#line 198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		ADV_UFCS(_operator_subscript)((*this).__ref(), Builtin::i32(0)) = Builtin::i32(13);
		#line 200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		return { x, y, z };
	}
#line 206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline auto __Class_BaseClass::getNext() const  -> const Next
	{
		#line 206 "Collections.ast"
		ADV_EXPRESSION_BODY(Builtin::New<Next>(Builtin::i32(5))); 
	}
#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr auto __Class_VectorClass::format() const noexcept -> const Builtin::Str
	{
		#line 223 "Collections.ast"
		ADV_EXPRESSION_BODY(Builtin::Str{u"test"}); 
	}
#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr VectorClass::__Class_NestedClass::__Class_NestedClass(Builtin::f32 x, Builtin::f32 y, Builtin::f32 z) noexcept : 
	#line 253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	x{x}, 
	#line 254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	y{y}, 
	#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	z{z}
	{
	}
#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr auto VectorClass::__Class_NestedClass::count(Builtin::i32 i)  -> const Builtin::i32
	{
		#line 257 "Collections.ast"
		ADV_EXPRESSION_BODY(i * Builtin::i32(10)); 
	}
#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr __Class_VectorClass::__Class_VectorClass(Builtin::f32 x, Builtin::f32 y, Builtin::f32 z) noexcept : 
	#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	x{x}, 
	#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	y{y}, 
	#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	z{z}
	{
	}
#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class U> inline constexpr __Class_VectorClass::__Class_VectorClass(U f)  :
	#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	__Class_VectorClass(f, f, f)
	{
		#line 271 "Collections.ast"
		this->x = f;
	}
#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline __Class_VectorClass::__Class_VectorClass(Builtin::In<__self> other)  :
	#line 275 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	__Class_VectorClass(ADV_UPCS_NONLOCAL(x)(other.__ref()), ADV_UPCS_NONLOCAL(y)(other.__ref()), ADV_UPCS_NONLOCAL(z)(other.__ref()))
	{
	}
#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline __Class_VectorClass::~__Class_VectorClass() noexcept
	{
		#line 278 "Collections.ast"
		print(Builtin::Str{u"VectorClass deiniting"}); 
	}
#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline __Class_VectorClass::operator Builtin::f32() const noexcept
	{
		#line 283 "Collections.ast"
		ADV_EXPRESSION_BODY(y); 
	}
#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline auto __Class_VectorClass::_operator_subscript(Builtin::i32 idx)  -> Builtin::f32&
	{
		#line 315 "Collections.ast"
		ADV_EXPRESSION_BODY(x); 
	}
	#line 315 "Collections.ast"
	inline auto __Class_VectorClass::_operator_subscript(Builtin::i32 idx)  const  -> const Builtin::f32&
	{
		#line 315 "Collections.ast"
		ADV_EXPRESSION_BODY(x); 
	}
	#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline auto __Class_VectorClass::getAt(Builtin::i32 idx)  -> Builtin::f32& { return _operator_subscript(idx); }
	#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline auto __Class_VectorClass::getAt(Builtin::i32 idx) const  -> const Builtin::f32& { return _operator_subscript(idx); }
#line 316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline auto __Class_VectorClass::_operator_subscript(Builtin::i32 idx, Builtin::i32 idx2, Builtin::i32 idx3)  -> const Builtin::f32
	{
		#line 316 "Collections.ast"
		ADV_EXPRESSION_BODY(y + z); 
	}
	#line 316 "Collections.ast"
	inline auto __Class_VectorClass::_operator_subscript(Builtin::i32 idx, Builtin::i32 idx2, Builtin::i32 idx3)  const  -> const Builtin::f32
	{
		#line 316 "Collections.ast"
		ADV_EXPRESSION_BODY(y + z); 
	}
	#line 316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline auto __Class_VectorClass::getAt(Builtin::i32 idx, Builtin::i32 idx2, Builtin::i32 idx3)  -> const Builtin::f32 { return _operator_subscript(idx, idx2, idx3); }
	#line 316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline auto __Class_VectorClass::getAt(Builtin::i32 idx, Builtin::i32 idx2, Builtin::i32 idx3) const  -> const Builtin::f32 { return _operator_subscript(idx, idx2, idx3); }
#line 319 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline auto __Class_VectorClass::getNext() const  -> const Next
	{
		#line 319 "Collections.ast"
		ADV_EXPRESSION_BODY(___super::getNext()); 
	}
#line 322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr auto __Class_VectorClass::Method(Builtin::i32 x, Builtin::i32 y, Builtin::i32 z)  -> const Builtin::i32
	{
		#line 323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		return y + z;
	}
#line 327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr auto __Class_VectorClass::Reset() const  -> void
	{
		#line 328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		x = Builtin::i32(0);
		#line 329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		y = Builtin::i32(0);
		#line 330 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		z = Builtin::i32(0);
	}
#line 335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class U> inline constexpr auto __Class_VectorClass::TemplateMethod(U x, U y, U z) const  -> const typename __Class_VectorClass::Coords
	{
		#line 336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		class __Class_LocalStruct;
		#line 336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		struct LocalStruct : public Builtin::Struct
		{
			public: using __self = LocalStruct;
			public: using __class = __Class_LocalStruct;
			public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
			#line 337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			#line 337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			public: Builtin::f32 x{}; 
			#line 337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			public: Builtin::f32 y{}; 
			#line 337 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			public: Builtin::f32 z{}; 
			
			
		};
		#line 336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		class __Class_LocalStruct : public Builtin::ValueType
		{
			#line 9999 "Collections.ast"
			LocalStruct __value;
			public: using __underlying = LocalStruct; using __self = __underlying;
			__Class_LocalStruct(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
			operator __underlying() const noexcept { return __value; }
			
		};
		#line 346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		ADV_UFCS(_operator_subscript)((*this).__ref(), Builtin::i32(0)) = Builtin::i32(13);
		#line 348 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		return { x, y, z };
	}
#line 359 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr __Class_ConcreteVectorClass::__Class_ConcreteVectorClass(Builtin::f32 x, Builtin::f32 y, Builtin::f32 z) noexcept :
	#line 360 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	___super(x, y, z)
	{
	}
#line 363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr __Class_ConcreteVectorClass::__Class_ConcreteVectorClass(Builtin::i32 i) noexcept :
	#line 364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	___super(Builtin::f32{i}, Builtin::f32{i}, Builtin::f32{i})
	{
	}
#line 367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline auto __Class_ConcreteVectorClass::setName(const Builtin::Str& value) -> __selfClass& { p_Name = value; return *this;}
	#line 367 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline auto __Class_ConcreteVectorClass::getName() const  -> Builtin::Str { return p_Name; }
	
#line 369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline auto __Class_ConcreteVectorClass::setZZ(const Builtin::i32& value) -> __selfClass& { p_ZZ = value; return *this;}
	#line 369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline auto __Class_ConcreteVectorClass::getZZ() const  -> Builtin::i32 { return p_ZZ; }
	
#line 383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr auto __Class_ConcreteVectorClass::getCount123() const  -> Builtin::i32 
	{
		#line 383 "Collections.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(1500)); 
	}
	
#line 385 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline auto __Class_ConcreteVectorClass::getX() const  -> const Builtin::f32
	{
		#line 385 "Collections.ast"
		ADV_EXPRESSION_BODY(x); 
	}
#line 387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline auto __Class_ConcreteVectorClass::operator+(const ConcreteVectorClass& other) const  -> const ConcreteVectorClass
	{
		#line 387 "Collections.ast"
		ADV_EXPRESSION_BODY(Builtin::New<ConcreteVectorClass>(ADV_UPCS(x)((*this).__ref()) + ADV_UPCS(x)(other.__ref()), ADV_UPCS(y)((*this).__ref()) + ADV_UPCS(y)(other.__ref()), ADV_UPCS(z)((*this).__ref()) + ADV_UPCS(z)(other.__ref()))); 
	}
#line 388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline auto __Class_ConcreteVectorClass::GetMagicNumber(Builtin::In<VectorClass> i) const  -> const Builtin::f32
	{
		#line 388 "Collections.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(x)((*this).__ref()) * ADV_UPCS(x)(i.__ref())); 
	}
#line 390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline auto __Class_ConcreteVectorClass::operator==(Builtin::In<__self> other) const  -> const bool
	{
		#line 390 "Collections.ast"
		ADV_EXPRESSION_BODY(x == ADV_UPCS(x)(other.__ref()) && y == ADV_UPCS(y)(other.__ref()) && z == ADV_UPCS(z)(other.__ref())); 
	}
#line 392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr auto __Class_ConcreteVectorClass::AbstractStaticMethod(Builtin::i32 i)  -> const Builtin::i32
	{
		#line 392 "Collections.ast"
		ADV_EXPRESSION_BODY(i * Builtin::i32(2)); 
	}
#line 393 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr auto __Class_ConcreteVectorClass::getName2()  -> Builtin::Str 
	{
		#line 393 "Collections.ast"
		ADV_EXPRESSION_BODY(Builtin::Str{u"abc"}); 
	}
	
#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline auto _operator_subscript(Builtin::In<VectorClass> vec, Builtin::f32 x, Builtin::f32 y)  -> const Builtin::f32
	{
		#line 399 "Collections.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(x)(vec.__ref()) * x + ADV_UPCS(y)(vec.__ref()) * y); 
	}
#line 407 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline __Class_Next::~__Class_Next() 
	{
		#line 407 "Collections.ast"
		print(Builtin::Str{u"Next deiniting"}); 
	}
#line 409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline __Class_Next::__Class_Next(Builtin::i32 i)  : 
	#line 410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	i{i}
	{
	}
#line 414 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline __Class_Next::__Class_Next(Builtin::In<__self> other)  : 
	#line 415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	i{Builtin::i32(0)}
	{
	}
#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline auto __Class_Next::operator*() const  -> const Builtin::i32
	{
		#line 418 "Collections.ast"
		ADV_EXPRESSION_BODY(i); 
	}
#line 420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline auto __Class_Next::printNext() const  -> void
	{
		#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		auto func2 = [__this = __self::__weak_ref(*this)] (Builtin::i32 x, Builtin::i32 y) -> const Builtin::i32 
		{
			#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			auto j = x * y * ADV_UPCS(i)((*(__this)).__ref()); 
			#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
			return j * Builtin::i32(2);
		}; 
		#line 422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		print(Builtin::Str{u"This is printNext function in optional chaining call"});
		#line 423 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		print(func2(Builtin::i32(3), Builtin::i32(4)));
	}
#line 480 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline auto Options::getIsWeekend() const  -> bool 
	{
		#line 480 "Collections.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(HasFlag)(Weekend.__ref(), (*this))); 
	}
	
#line 491 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline auto Text::ToShortString() const  -> const Builtin::Str
	{
		#line 492 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		return Value;
	}
#line 509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline auto __Class_ComplexVariant::operator*() const  -> const Builtin::i32
	{
		#line 509 "Collections.ast"
		ADV_EXPRESSION_BODY(i); 
	}
#line 511 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline auto __Class_ComplexVariant::printVariant() const  -> void
	{
		#line 512 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		print(Builtin::Str{u"This is printVariant function in optional chaining call"});
		#line 513 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		print(s);
	}
#line 516 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline auto __Class_ComplexVariant::GetMagicNumber(Builtin::In<VectorClass> f) const  -> const Builtin::f32
	{
		#line 516 "Collections.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(f)((*this).__ref()) * ADV_UPCS(x)(f.__ref())); 
	}
#line 518 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr auto __Class_ComplexVariant::getCount123() const  -> Builtin::i32 
	{
		#line 518 "Collections.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(1234567890)); 
	}
	
#line 520 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr auto __Class_ComplexVariant::getCount10()  -> Builtin::i32 
	{
		#line 520 "Collections.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(12345)); 
	}
	
#line 629 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline auto getSum(Builtin::In<VectorClass> vec)  -> const Builtin::f32
	{
		#line 629 "Collections.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(x)(vec.__ref()) + ADV_UPCS(y)(vec.__ref()) + ADV_UPCS(z)(vec.__ref())); 
	}
#line 640 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class T1, class T2> inline auto ttest(T1 x, T2 y)  -> const Builtin::i32
	{
		#line 640 "Collections.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((T2), GetInt)()); 
	}
#line 643 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class... TArgs> inline auto vsum(TArgs&&... args)  -> decltype(auto)
	{
		#line 644 "Collections.ast"
		ADV_EXPRESSION_BODY((args + ... + Builtin::i32(1))); 
	}
#line 9999 "Collections.ast"
	
#line 9999 "Collections.ast"
	inline Vector3::NestedStruct::ADV_CLASS_STRONG_CTOR_REF(NestedStruct)
	inline Vector3::NestedStruct& Vector3::NestedStruct::ADV_CLASS_STRONG_ASSIGN_REF(NestedStruct)
	inline Vector3::NestedStruct__Unowned::ADV_CLASS_UNOWNED_CTOR_REF(NestedStruct__Unowned)
	inline Vector3::NestedStruct__Unowned& Vector3::NestedStruct__Unowned::ADV_CLASS_UNOWNED_ASSIGN_REF(NestedStruct__Unowned)
	inline Vector3::NestedStruct__Weak::ADV_CLASS_WEAK_CTOR_REF(NestedStruct__Weak)
	inline Vector3::NestedStruct__Weak& Vector3::NestedStruct__Weak::ADV_CLASS_WEAK_ASSIGN_REF(NestedStruct__Weak)
	#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr decltype(auto) Vector3::NestedStruct::count(Builtin::i32 i){ ADV_EXPRESSION_BODY(__class::count(i)); }
	
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
	#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr decltype(auto) VectorClass::NestedClass::count(Builtin::i32 i){ ADV_EXPRESSION_BODY(__class::count(i)); }
	inline VectorClass::ADV_CLASS_STRONG_CTOR_REF(VectorClass)
	inline VectorClass& VectorClass::ADV_CLASS_STRONG_ASSIGN_REF(VectorClass)
	inline VectorClass__Unowned::ADV_CLASS_UNOWNED_CTOR_REF(VectorClass__Unowned)
	inline VectorClass__Unowned& VectorClass__Unowned::ADV_CLASS_UNOWNED_ASSIGN_REF(VectorClass__Unowned)
	inline VectorClass__Weak::ADV_CLASS_WEAK_CTOR_REF(VectorClass__Weak)
	inline VectorClass__Weak& VectorClass__Weak::ADV_CLASS_WEAK_ASSIGN_REF(VectorClass__Weak)
	inline decltype(auto) VectorClass::getCount2() { return __class::Count2; }
	inline void VectorClass::setCount2(const Builtin::i32& value) { __class::Count2 = value; }
	inline decltype(auto) VectorClass::getZERO() { return __class::ZERO; }
	#line 283 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline VectorClass::operator Builtin::f32() const noexcept{ ADV_EXPRESSION_BODY(__ref().operator Builtin::f32()); }
	inline VectorClass__Unowned::operator Builtin::f32() const noexcept{ ADV_EXPRESSION_BODY(__ref().operator Builtin::f32()); }
	#line 315 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline decltype(auto) VectorClass::_operator_subscript(Builtin::i32 idx) const  LIFETIMEBOUND{ ADV_EXPRESSION_BODY(__ref()._operator_subscript(idx)); }
	inline decltype(auto) VectorClass__Unowned::_operator_subscript(Builtin::i32 idx) const  LIFETIMEBOUND{ ADV_EXPRESSION_BODY(__ref()._operator_subscript(idx)); }
	#line 316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline decltype(auto) VectorClass::_operator_subscript(Builtin::i32 idx, Builtin::i32 idx2, Builtin::i32 idx3) const { ADV_EXPRESSION_BODY(__ref()._operator_subscript(idx, idx2, idx3)); }
	inline decltype(auto) VectorClass__Unowned::_operator_subscript(Builtin::i32 idx, Builtin::i32 idx2, Builtin::i32 idx3) const { ADV_EXPRESSION_BODY(__ref()._operator_subscript(idx, idx2, idx3)); }
	#line 322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr decltype(auto) VectorClass::Method(Builtin::i32 x, Builtin::i32 y, Builtin::i32 z){ ADV_EXPRESSION_BODY(__class::Method(x, y, z)); }
	
#line 9999 "Collections.ast"
	inline ConcreteVectorClass::ADV_CLASS_DEFAULT_CTOR(ConcreteVectorClass)
	inline ConcreteVectorClass::ADV_CLASS_STRONG_CTOR_REF(ConcreteVectorClass)
	inline ConcreteVectorClass& ConcreteVectorClass::ADV_CLASS_STRONG_ASSIGN_REF(ConcreteVectorClass)
	inline ConcreteVectorClass__Unowned::ADV_CLASS_UNOWNED_CTOR_REF(ConcreteVectorClass__Unowned)
	inline ConcreteVectorClass__Unowned& ConcreteVectorClass__Unowned::ADV_CLASS_UNOWNED_ASSIGN_REF(ConcreteVectorClass__Unowned)
	inline ConcreteVectorClass__Weak::ADV_CLASS_WEAK_CTOR_REF(ConcreteVectorClass__Weak)
	inline ConcreteVectorClass__Weak& ConcreteVectorClass__Weak::ADV_CLASS_WEAK_ASSIGN_REF(ConcreteVectorClass__Weak)
	#line 363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline ConcreteVectorClass::ConcreteVectorClass(Builtin::i32 i)noexcept : ___super(new (::operator new(sizeof(__class))) __class(i)) {}
	#line 387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline decltype(auto) ConcreteVectorClass::operator+(const ConcreteVectorClass& other) const { ADV_EXPRESSION_BODY(__ref().operator+(other)); }
	inline decltype(auto) ConcreteVectorClass__Unowned::operator+(const ConcreteVectorClass& other) const { ADV_EXPRESSION_BODY(__ref().operator+(other)); }
	#line 390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline decltype(auto) ConcreteVectorClass::operator==(Builtin::In<__self> other) const { ADV_EXPRESSION_BODY(__ref().operator==(other)); }
	inline decltype(auto) ConcreteVectorClass__Unowned::operator==(Builtin::In<__self> other) const { ADV_EXPRESSION_BODY(__ref().operator==(other)); }
	#line 392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr decltype(auto) ConcreteVectorClass::AbstractStaticMethod(Builtin::i32 i){ ADV_EXPRESSION_BODY(__class::AbstractStaticMethod(i)); }
	
#line 9999 "Collections.ast"
	inline Next::ADV_CLASS_DEFAULT_CTOR(Next)
	inline Next::ADV_CLASS_STRONG_CTOR_REF(Next)
	inline Next& Next::ADV_CLASS_STRONG_ASSIGN_REF(Next)
	inline Next__Unowned::ADV_CLASS_UNOWNED_CTOR_REF(Next__Unowned)
	inline Next__Unowned& Next__Unowned::ADV_CLASS_UNOWNED_ASSIGN_REF(Next__Unowned)
	inline Next__Weak::ADV_CLASS_WEAK_CTOR_REF(Next__Weak)
	inline Next__Weak& Next__Weak::ADV_CLASS_WEAK_ASSIGN_REF(Next__Weak)
	#line 418 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline decltype(auto) Next::operator*() const { ADV_EXPRESSION_BODY(__ref().operator*()); }
	inline decltype(auto) Next__Unowned::operator*() const { ADV_EXPRESSION_BODY(__ref().operator*()); }
	
#line 428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr auto TestInt(__extension_427_Next const& __this LIFETIMEBOUND, Builtin::i32 j)  -> const Builtin::i32
	{
		#line 428 "Collections.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(i)(__this.__ref()) + j * Builtin::i32(2)); 
	}
	
#line 9999 "Collections.ast"
	
#line 9999 "Collections.ast"
	
#line 9999 "Collections.ast"
	
inline const Builtin::f32 IInterface::DefaultMethod(Builtin::In<VectorClass> f) const 
	{
		#line 445 "Collections.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(GetMagicNumber)((*this).__ref(), f)); 
	}
	inline const Builtin::i32 IInterface::SomeStaticMethod(Builtin::i32 i) 
	{
		#line 453 "Collections.ast"
		ADV_EXPRESSION_BODY(i * Builtin::i32(123)); 
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
	#line 509 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline decltype(auto) ComplexVariant::operator*() const { ADV_EXPRESSION_BODY(__ref().operator*()); }
	inline decltype(auto) ComplexVariant__Unowned::operator*() const { ADV_EXPRESSION_BODY(__ref().operator*()); }
	
#line 9999 "Collections.ast"
	
#line 9999 "Collections.ast"
	
#line 9999 "Collections.ast"
	
#line 9999 "Collections.ast"
	
#line 9999 "Collections.ast"
	
#line 9999 "Collections.ast"
	
#line 580 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class T> inline auto operator*(__extension_577_T<T> const& __this LIFETIMEBOUND, Builtin::In<Builtin::f32> f)  -> const Builtin::f32
	{
		#line 580 "Collections.ast"
		ADV_EXPRESSION_BODY(f * Builtin::i32(10)); 
	}
	
#line 582 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class T> inline auto PrintInterface(__extension_577_T<T> const& __this LIFETIMEBOUND, Builtin::i32 x)  -> const Builtin::i32
	{
		#line 583 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		print(Builtin::Str{u"PrintInterface Begin"});
		#line 584 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		print(ADV_UPCS(Name)(__this.__ref()));
		#line 585 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		print(x);
		#line 586 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		print(Builtin::Str{u"PrintInterface End"});
		#line 587 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		return x * Builtin::i32(11);
	}
	
#line 590 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class T> inline const Builtin::f32 getAt(__extension_577_T<T> const& __this LIFETIMEBOUND, Builtin::f32 r, Builtin::f32 g, Builtin::f32 b)
	{
		#line 590 "Collections.ast"
		ADV_EXPRESSION_BODY(r + g + b); 
	}
	#line 592 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class T> inline auto __construct_(Builtin::ConstructorProxy<__extension_577_T<T>> __ctordata, Builtin::i32 x, Builtin::Str txt)  -> decltype(auto)
	{
		#line 593 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		auto __this = new (__ctordata.memory) typename Builtin::ConstructorProxy<T>::ConstructingType(x, x, x);
		#line 594 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		print(txt);
		return __this;
	}
	
#line 597 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class T> inline auto __construct_(Builtin::ConstructorProxy<__extension_577_T<T>> __ctordata, typename Builtin::MemorySpace mem, Builtin::i32 x, Builtin::Str txt)  -> decltype(auto)
	{
		#line 598 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		auto __this = new (__ctordata.memory) typename Builtin::ConstructorProxy<T>::ConstructingType(x, x, x);
		#line 599 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
		print(txt);
		return __this;
	}
	
#line 578 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class T> inline auto getAsString(__extension_577_T<T> const& __this ) -> const Builtin::Str
	{
		#line 578 "Collections.ast"
		ADV_EXPRESSION_BODY(Builtin::Str{u"AsString"}); 
	}
	#line 9999 "Collections.ast"
	
#line 608 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class T> inline constexpr auto __static_GetSuperCount(Builtin::i32 x, Builtin::i32 y)  -> const Builtin::i32
	{
		#line 608 "Collections.ast"
		ADV_EXPRESSION_BODY(x * y + x + y); 
	}
	
#line 607 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class T> inline constexpr auto __static_getCount3() -> const Builtin::i32
	{
		#line 607 "Collections.ast"
		ADV_EXPRESSION_BODY(Builtin::i32(333)); 
	}
	#line 9999 "Collections.ast"
	
#line 615 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class T> inline constexpr auto _operator_bsl_mul_div(__extension_611_T<T> const& __this LIFETIMEBOUND)  -> const Builtin::i32
	{
		#line 615 "Collections.ast"
		ADV_EXPRESSION_BODY(__this / Builtin::i32(2)); 
	}
	template<class T> inline constexpr auto _operator_bsl_mul_div_postfix(__extension_611_T<T> & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_bsl_mul_div)(__this); return copy; }
	
#line 618 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class T> inline constexpr auto _operator_bsl_mul_div(__extension_611_T<T> const& __this LIFETIMEBOUND, Builtin::f32 other)  -> const Builtin::f32
	{
		#line 618 "Collections.ast"
		ADV_EXPRESSION_BODY(Builtin::f32{__this} * other * Builtin::i32(2)); 
	}
	template<class T> inline constexpr auto _operator_bsl_mul_div(Builtin::f32 other, const __extension_611_T<T> & __this)  -> decltype(auto) { return ADV_UFCS(_operator_bsl_mul_div)(__this, other); }
	
#line 612 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	template<class T> inline constexpr auto getkm(__extension_611_T<T> const& __this ) -> const Builtin::i32
	{
		#line 612 "Collections.ast"
		ADV_EXPRESSION_BODY(__this * Builtin::i32(1000)); 
	}
	#line 9999 "Collections.ast"
	
#line 622 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr auto getkm(__extension_621_f64 const& __this ) -> const Builtin::f64
	{
		#line 622 "Collections.ast"
		ADV_EXPRESSION_BODY(__this * Builtin::f32(1000.0f)); 
	}
	#line 9999 "Collections.ast"
	
#line 626 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline constexpr auto getkm(__extension_625_str const& __this ) -> const Builtin::Str
	{
		#line 626 "Collections.ast"
		ADV_EXPRESSION_BODY(Builtin::Str{u"1000km"}); 
	}
	#line 9999 "Collections.ast"
	
#line 9999 "Collections.ast"
	
#line 659 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumCompiler\\tests\\System\\Application\\Collections.ast"
	inline auto getNext(__extension_657_Vector3 const& __this LIFETIMEBOUND)  -> const Next
	{
		#line 659 "Collections.ast"
		ADV_EXPRESSION_BODY(Builtin::New<Next>(ADV_UPCS(x)(__this.__ref()))); 
	}
	
#line 9999 "Collections.ast"
	

}