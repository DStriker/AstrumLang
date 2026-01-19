#pragma once
#include "CppAdvance.h"
#include "TESTDLL_export.h"

namespace __Unsafe {} namespace __FirstProgram_Protected__Unsafe {}
//###############################################################################
//# Versions
//###############################################################################
#ifndef ADV_VERSION_WINDOWS
#line 10 "FirstProgram.adv"
#define ADV_VERSION_WINDOWS 167
#endif
#ifndef ADV_VERSION___FIRSTPROGRAM_PROTECTED_Linux
#line 11 "FirstProgram.adv"
#define ADV_VERSION___FIRSTPROGRAM_PROTECTED_Linux 1
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
template<class T1, class... TArgs> class GenericStruct;
namespace __ntuples { class NamedTuple_4e7be1ed49b09d71; } 
namespace __ntuples { class NamedTuple_6893f862d6c49683; } 
namespace __ntuples { class NamedTuple_6893f862d6c49683; } 
//###############################################################################
//# Global type aliases
//###############################################################################
#line 4 "FirstProgram.adv"
using cstring [[clang::annotate("unsafe")]] = CppAdvance::Unsafe::__RawPtr<const CppAdvance::char8>;
#line 8 "FirstProgram.adv"
namespace __FirstProgram_Protected { using Test111 = typename Test1::Test2::TestClass; }
#line 9 "FirstProgram.adv"
namespace __FirstProgram_Protected { using Test112 = typename Test1::Test2::Class2; }
#line 42 "FirstProgram.adv"
template<class A, class C> using SimpleTuple = std::tuple<A, bool, C>;
#line 43 "FirstProgram.adv"
using ImportantOptions = __ntuples::NamedTuple_4e7be1ed49b09d71;
#line 775 "FirstProgram.adv"
template<class T> using Decayed = std::remove_cvref_t<T>;
#line 776 "FirstProgram.adv"
template<class T> using Conditional = 
	std::conditional_t<std::is_base_of_v<CppAdvance::ObjectRef, T>, 
		CppAdvance::i32, 
		std::conditional_t<std::is_base_of_v<CppAdvance::Struct, T>,
			Union2<CppAdvance::i32, CppAdvance::Str>,
			Union2<CppAdvance::f32, CppAdvance::Str>>>;
#line 800 "FirstProgram.adv"
template<class... Args> using Action = CppAdvance::FunctionRef<void(Args...)>;
#line 801 "FirstProgram.adv"
template<class T> using Predicate = CppAdvance::FunctionRef<bool (T)>;
//###############################################################################
//# Type definitions
//###############################################################################
class Span;
#line 50 "FirstProgram.adv"
struct [[clang::annotate("ref_struct")]] Span final : public CppAdvance::RefStruct {
	public: using __self = Span;
	public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
	#line 52 "FirstProgram.adv"
	public: CppAdvance::f32 & data;
	#line 53 "FirstProgram.adv"
	public: CppAdvance::i32 length;
	#line 54 "FirstProgram.adv"
	public: inline ~Span() noexcept;
	
};

class __Class_Vector3;
#line 57 "FirstProgram.adv"
struct Vector3 final : public CppAdvance::Struct {
	public: using __self = Vector3;
	public: using __class = __Class_Vector3;
	public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
	public: 
	class NestedStruct; class NestedStruct__Unowned; class NestedStruct__Weak; class __Class_NestedStruct;
	#line 97 "FirstProgram.adv"
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
		#line 102 "FirstProgram.adv"
		public: inline constexpr static decltype(auto) count(CppAdvance::i32 i) ;
		
	};
	#line 97 "FirstProgram.adv"
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
	#line 97 "FirstProgram.adv"
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
	#line 97 "FirstProgram.adv"
	class __Class_NestedStruct : public CppAdvance::Object {
		public: using __self = NestedStruct;
		private: using ___super = CppAdvance::Object;
		public: using __selfClass = __Class_NestedStruct;
		friend class __self;
		friend class __self::__weak_ref;
		#define ADV_PROPERTY_SELF __selfClass
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 99 "FirstProgram.adv"
		public: mutable CppAdvance::f32 x; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
		#line 100 "FirstProgram.adv"
		public: mutable CppAdvance::f32 y; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
		#line 101 "FirstProgram.adv"
		public: mutable CppAdvance::f32 z; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
		#line 102 "FirstProgram.adv"
		public: inline constexpr static auto count(CppAdvance::i32 i)  -> const CppAdvance::i32;
		
#define ADV_PROPERTY_SELF __self
	};
	
	#line 97 "FirstProgram.adv"
	ADV_CHECK_FOR_CONCRETE(NestedStruct);
	
	#line 66 "FirstProgram.adv"
	private: friend class TestStruct; friend class __Class_TestStruct;
	#line 67 "FirstProgram.adv"
	private: template<class T> friend class TestStruct2; template<class T> friend class __Class_TestStruct2;
	#line 68 "FirstProgram.adv"
	private: friend const CppAdvance::i32 func3(CppAdvance::i32 x);
	#line 69 "FirstProgram.adv"
	private: friend const CppAdvance::i32 func4(CppAdvance::i32 x);
	#line 60 "FirstProgram.adv"
	public: CppAdvance::f32 x; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
	#line 60 "FirstProgram.adv"
	public: CppAdvance::f32 y; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
	#line 60 "FirstProgram.adv"
	public: CppAdvance::f32 z; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
	#line 92 "FirstProgram.adv"
	private: static thread_local CppAdvance::i32 Count2; ADV_CHECK_REF_STRUCT("i32", CppAdvance::i32);
	#line 94 "FirstProgram.adv"
	public: TESTDLL_API static const Vector3 ZERO;
	public: constexpr Vector3(CppAdvance::f32 _x, CppAdvance::f32 _y, CppAdvance::f32 _z) : x{_x}, y{_y}, z{_z} {}
	#line 93 "FirstProgram.adv"
	public: static constexpr auto BYTES = CppAdvance::i32(24);
	#line 95 "FirstProgram.adv"
	private: using Coords = __ntuples::NamedTuple_6893f862d6c49683;
	#line 77 "FirstProgram.adv"
	private: static CppAdvance::i32 p_Count; ADV_CHECK_REF_STRUCT("i32", CppAdvance::i32);
	#line 82 "FirstProgram.adv"
	public: TESTDLL_API static auto setCount(const CppAdvance::i32& value) -> void;
	#line 78 "FirstProgram.adv"
	public: TESTDLL_API static auto getCount()  -> CppAdvance::i32;
	#line 9999 "FirstProgram.adv"
	ADV_PROPERTY_GETTER_SETTER_STATIC(public, TESTDLL_API, Count, public, getCount, public, setCount, CppAdvance::i32);
	#line 90 "FirstProgram.adv"
	public: inline constexpr auto getName() const  -> CppAdvance::Str;
	#line 9999 "FirstProgram.adv"
	ADV_PROPERTY_GETTER(public, Name, getName, CppAdvance::Str);
	#line 74 "FirstProgram.adv"
	public: inline constexpr auto format() const noexcept -> const CppAdvance::Str;
	#line 75 "FirstProgram.adv"
	public: inline constexpr auto HashCode() const  -> const CppAdvance::usize;
	#line 106 "FirstProgram.adv"
	public: inline constexpr Vector3()  = default;
	#line 107 "FirstProgram.adv"
	public: inline constexpr  Vector3(const __self& that)  = default;
	#line 109 "FirstProgram.adv"
	public: template<class U> inline constexpr  Vector3(U f) ;
	#line 114 "FirstProgram.adv"
	public: inline ~Vector3() noexcept;
	#line 116 "FirstProgram.adv"
	public: inline constexpr  operator CppAdvance::f32() const noexcept;
	#line 118 "FirstProgram.adv"
	public: inline auto operator+(const __self& other) const  -> const __self;
	#line 120 "FirstProgram.adv"
	public: inline auto operator++()  -> __self& LIFETIMEBOUND;
	public: inline auto operator++(int)  -> Vector3;
	#line 9999 "FirstProgram.adv"
	private: template<class __IdxT = CppAdvance::f32> struct __IndexerAccessor_130 {
		private:
		Vector3& _parent;
		CppAdvance::i32 _idx;
		 friend class Vector3;
		public:
		FORCE_INLINE __IndexerAccessor_130(Vector3& parent, CppAdvance::i32 idx) : _parent(parent), _idx(idx) {}
		FORCE_INLINE __IndexerAccessor_130(Vector3 const& parent, CppAdvance::i32 idx) : _parent(const_cast<std::remove_cvref_t<decltype(parent)>&>(parent)), _idx(idx) {}
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
		template<class Ch> friend FORCE_INLINE decltype(auto) operator<<(std::basic_ostream<Ch>& stream, const __IndexerAccessor_130<__IdxT>& elem) { return stream << elem.__ref(); }
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

	friend struct __IndexerAccessor_130<CppAdvance::f32>;
	public: inline void setAt(CppAdvance::i32 idx, const CppAdvance::f32& value);
	public: inline const CppAdvance::f32 getAt(CppAdvance::i32 idx);
	inline const CppAdvance::f32 getAt(CppAdvance::i32 idx) const;
	#line 130 "FirstProgram.adv"
	public: inline auto _operator_subscript(CppAdvance::i32 idx)  -> __IndexerAccessor_130<CppAdvance::f32>;
	public: inline auto _operator_subscript(CppAdvance::i32 idx) const  -> const __IndexerAccessor_130<CppAdvance::f32>;
	public: inline constexpr const CppAdvance::f32 getAt(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3);
	inline constexpr const CppAdvance::f32 getAt(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3) const;
	#line 140 "FirstProgram.adv"
	public: inline constexpr auto _operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3)  -> const CppAdvance::f32;
	public: inline constexpr auto _operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3) const  -> const CppAdvance::f32;
	#line 142 "FirstProgram.adv"
	public: inline constexpr auto getX() const  -> const CppAdvance::f32;
	#line 143 "FirstProgram.adv"
	public: inline auto getNext() const  -> const Next;
	#line 146 "FirstProgram.adv"
	public: inline constexpr static auto Method(CppAdvance::i32 x, CppAdvance::i32 y, CppAdvance::i32 z)  -> const CppAdvance::i32;
	#line 152 "FirstProgram.adv"
	public: inline constexpr auto Reset()  -> void;
	#line 160 "FirstProgram.adv"
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

namespace std {
	template<> struct tuple_size<Vector3> : integral_constant<size_t, 3> {}; 
	template<> struct tuple_element<0, Vector3> { using type = CppAdvance::f32; };
	template<> struct tuple_element<1, Vector3> { using type = CppAdvance::f32; };
	template<> struct tuple_element<2, Vector3> { using type = CppAdvance::f32; };
	
}
template<> inline constexpr bool CppAdvance::__details::cheapCopy<BaseClass> = false;
#line 178 "FirstProgram.adv"
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
#line 178 "FirstProgram.adv"
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
#line 178 "FirstProgram.adv"
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

namespace std {
	template<> struct tuple_size<BaseClass> : integral_constant<size_t, 3> {}; 
	
}
template<> inline constexpr bool CppAdvance::__details::cheapCopy<VectorClass> = false;
#line 182 "FirstProgram.adv"
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
	#line 219 "FirstProgram.adv"
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
		#line 230 "FirstProgram.adv"
		public: inline constexpr static decltype(auto) count(CppAdvance::i32 i) ;
		
	};
	#line 219 "FirstProgram.adv"
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
	#line 219 "FirstProgram.adv"
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
	#line 219 "FirstProgram.adv"
	class __Class_NestedClass : public CppAdvance::Object {
		public: using __self = NestedClass;
		private: using ___super = CppAdvance::Object;
		public: using __selfClass = __Class_NestedClass;
		friend class __self;
		friend class __self::__weak_ref;
		#define ADV_PROPERTY_SELF __selfClass
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 221 "FirstProgram.adv"
		public: mutable CppAdvance::f32 x; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
		#line 222 "FirstProgram.adv"
		public: mutable CppAdvance::f32 y; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
		#line 223 "FirstProgram.adv"
		public: mutable CppAdvance::f32 z; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
		#line 225 "FirstProgram.adv"
		public: inline constexpr __Class_NestedClass(CppAdvance::f32 x, CppAdvance::f32 y, CppAdvance::f32 z) noexcept;
		#line 230 "FirstProgram.adv"
		public: inline constexpr static auto count(CppAdvance::i32 i)  -> const CppAdvance::i32;
		
#define ADV_PROPERTY_SELF __self
	};
	
	#line 219 "FirstProgram.adv"
	ADV_CHECK_FOR_CONCRETE(NestedClass);
	
	public: static decltype(auto) getCount2();
	static void setCount2(const CppAdvance::i32& value);
	ADV_PROPERTY_GETTER_SETTER_STATIC(public, TESTDLL_API, Count2, public, getCount2, public, setCount2, CppAdvance::i32);
	public: static decltype(auto) getZERO();
	ADV_PROPERTY_GETTER_STATIC(public, TESTDLL_API, ZERO, getZERO, Vector3);
	#define ADV_PROPERTY_SELF __class
	#define ADV_PROPERTY_SELF __self
	#line 256 "FirstProgram.adv"
	public: inline explicit operator CppAdvance::f32() const noexcept;
	#line 288 "FirstProgram.adv"
	public: inline decltype(auto) _operator_subscript(CppAdvance::i32 idx) const  LIFETIMEBOUND;
	#line 289 "FirstProgram.adv"
	public: inline decltype(auto) _operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3) const ;
	#line 295 "FirstProgram.adv"
	public: inline constexpr static decltype(auto) Method(CppAdvance::i32 x, CppAdvance::i32 y, CppAdvance::i32 z) ;
	public: static constexpr decltype(auto) BYTES = CppAdvance::i32(24);
	public: using Coords = __ntuples::NamedTuple_6893f862d6c49683;
	friend class TestStruct;
	friend class __Class_TestStruct;
	template<class T> friend class TestStruct2;
	template<class T> friend class __Class_TestStruct2;
	friend const CppAdvance::i32 func3(CppAdvance::i32 x);
	
};
#line 182 "FirstProgram.adv"
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
	#line 256 "FirstProgram.adv"
	public: inline explicit operator CppAdvance::f32() const noexcept;
	#line 288 "FirstProgram.adv"
	public: inline decltype(auto) _operator_subscript(CppAdvance::i32 idx) const  LIFETIMEBOUND;
	#line 289 "FirstProgram.adv"
	public: inline decltype(auto) _operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3) const ;
	
};
#line 182 "FirstProgram.adv"
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

template<> inline constexpr bool CppAdvance::__details::cheapCopy<ConcreteVectorClass> = false;
#line 327 "FirstProgram.adv"
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
	#define ADV_PROPERTY_SELF __self
	#line 334 "FirstProgram.adv"
	public: inline  ConcreteVectorClass(CppAdvance::i32 i) noexcept;
	#line 358 "FirstProgram.adv"
	public: inline decltype(auto) operator+(const ConcreteVectorClass& other) const ;
	#line 361 "FirstProgram.adv"
	public: inline decltype(auto) operator==(CppAdvance::In<__self> other) const ;
	
};
#line 327 "FirstProgram.adv"
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
	#line 358 "FirstProgram.adv"
	public: inline decltype(auto) operator+(const ConcreteVectorClass& other) const ;
	#line 361 "FirstProgram.adv"
	public: inline decltype(auto) operator==(CppAdvance::In<__self> other) const ;
	
};
#line 327 "FirstProgram.adv"
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

template<> inline constexpr bool CppAdvance::__details::cheapCopy<Next> = false;
#line 369 "FirstProgram.adv"
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
	#line 386 "FirstProgram.adv"
	public: inline decltype(auto) operator*() const ;
	
};
#line 369 "FirstProgram.adv"
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
	#line 386 "FirstProgram.adv"
	public: inline decltype(auto) operator*() const ;
	
};
#line 369 "FirstProgram.adv"
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

#line 395 "FirstProgram.adv"
using __extension_395_Next = Next;
#line 396 "FirstProgram.adv"
inline constexpr auto TestInt(__extension_395_Next const& __this LIFETIMEBOUND, CppAdvance::i32 j)  -> const CppAdvance::i32;

template<> inline constexpr bool CppAdvance::__details::cheapCopy<IMagicNumber> = false;
#line 400 "FirstProgram.adv"
template<class __AnyType> concept __HasMethodImplementation_a2e2f819fa3cd789 = requires(typename __AnyType::__class t) { {t.GetMagicNumber(std::declval<VectorClass>())} -> std::convertible_to<CppAdvance::f32>; }  || requires(typename __AnyType::__class t) { {GetMagicNumber(t, std::declval<VectorClass>())} -> std::convertible_to<CppAdvance::f32>; };
#line 401 "FirstProgram.adv"
template<class __AnyType> concept __HasMethodImplementation_getaddd298886dbcfb6 = requires(typename __AnyType::__class t) { {t.getCount123()} -> std::convertible_to<CppAdvance::i32>; } || requires(typename __AnyType::__class t) { {getCount123(t)} -> std::convertible_to<CppAdvance::i32>; };
namespace __vtables {
	#line 399 "FirstProgram.adv"
	struct __vtable_IMagicNumber
	{
		using fn_a2e2f819fa3cd789 = const CppAdvance::f32(CppAdvance::Object*, CppAdvance::In<VectorClass> f);
		fn_a2e2f819fa3cd789* fnptr_a2e2f819fa3cd789;
		#line 400 "FirstProgram.adv"
		template<class __AnyType> static const CppAdvance::f32 impl_a2e2f819fa3cd789(CppAdvance::Object* obj, CppAdvance::In<VectorClass> f) { ADV_EXPRESSION_BODY(ADV_UFCS(GetMagicNumber)(*static_cast<typename __AnyType::__class*>(obj), f)); }
		using fn_getCount123 = CppAdvance::i32(CppAdvance::Object*);
		fn_getCount123* fnptr_getCount123;
		#line 401 "FirstProgram.adv"
		template<class __AnyType> static CppAdvance::i32 impl_getCount123(CppAdvance::Object* obj) { return ADV_UFCS(getCount123)(*static_cast<typename __AnyType::__class*>(obj)); }
		
	};
}
#line 399 "FirstProgram.adv"
template<class __AnyType> inline constexpr __vtables::__vtable_IMagicNumber __vtable_IMagicNumber_for = {&__vtables::__vtable_IMagicNumber::template impl_a2e2f819fa3cd789<__AnyType>
	, &__vtables::__vtable_IMagicNumber::template impl_getCount123<__AnyType>
	};
#line 399 "FirstProgram.adv"
template<class __AnyType> concept __ImplementsInterface_IMagicNumber = __HasMethodImplementation_a2e2f819fa3cd789<__AnyType> && __HasMethodImplementation_getaddd298886dbcfb6<__AnyType>;
#line 399 "FirstProgram.adv"
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
template<class __AnyInterface> requires std::derived_from<__AnyInterface, CppAdvance::InterfaceRef> FORCE_INLINE const CppAdvance::f32 GetMagicNumber(const __AnyInterface& iface, CppAdvance::In<VectorClass> f)  { ADV_EXPRESSION_BODY(CppAdvance::GetVTableFromInterface(&iface)->fnptr_a2e2f819fa3cd789(CppAdvance::GetObjectReferenceFromInterface(&iface), f)); }
template<class __AnyInterface> requires std::derived_from<__AnyInterface, CppAdvance::InterfaceRef> FORCE_INLINE const CppAdvance::i32 getCount123(const __AnyInterface& iface) { return CppAdvance::GetVTableFromInterface(&iface)->fnptr_getCount123(CppAdvance::GetObjectReferenceFromInterface(&iface)); }

template<> inline constexpr bool CppAdvance::__details::cheapCopy<IResettable> = false;
#line 405 "FirstProgram.adv"
template<class __AnyType> concept __HasMethodImplementation_565bebff34b81aa1 = requires(typename __AnyType::__class t) { {t.Reset()} -> std::same_as<void>; }  || requires(typename __AnyType::__class t) { {Reset(t)} -> std::same_as<void>; };
namespace __vtables {
	#line 404 "FirstProgram.adv"
	struct __vtable_IResettable
	{
		using fn_565bebff34b81aa1 = void(CppAdvance::Object*);
		fn_565bebff34b81aa1* fnptr_565bebff34b81aa1;
		#line 405 "FirstProgram.adv"
		template<class __AnyType> static void impl_565bebff34b81aa1(CppAdvance::Object* obj) { ADV_EXPRESSION_BODY(ADV_UFCS(Reset)(*static_cast<typename __AnyType::__class*>(obj))); }
		
	};
}
#line 404 "FirstProgram.adv"
template<class __AnyType> inline constexpr __vtables::__vtable_IResettable __vtable_IResettable_for = {&__vtables::__vtable_IResettable::template impl_565bebff34b81aa1<__AnyType>
	};
#line 404 "FirstProgram.adv"
template<class __AnyType> concept __ImplementsInterface_IResettable = __HasMethodImplementation_565bebff34b81aa1<__AnyType>;
#line 404 "FirstProgram.adv"
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
template<class __AnyInterface> requires std::derived_from<__AnyInterface, CppAdvance::InterfaceRef> FORCE_INLINE void Reset(const __AnyInterface& iface)  { ADV_EXPRESSION_BODY(CppAdvance::GetVTableFromInterface(&iface)->fnptr_565bebff34b81aa1(CppAdvance::GetObjectReferenceFromInterface(&iface))); }

template<> inline constexpr bool CppAdvance::__details::cheapCopy<IInterface> = false;
#line 412 "FirstProgram.adv"
template<class __AnyType> concept __HasMethodImplementation_6cedb65857a10a4e = requires(typename __AnyType::__class t) { {t.DefaultMethod(std::declval<VectorClass>())} -> std::convertible_to<CppAdvance::f32>; } ;
#line 413 "FirstProgram.adv"
template<class __AnyType> concept __HasMethodImplementation_fbc51d6746c8ca94 = requires(typename __AnyType::__class t) { {t.operator+(std::declval<ConcreteVectorClass>())} -> std::convertible_to<ConcreteVectorClass>; }  || requires(typename __AnyType::__class t) { {operator+(t, std::declval<ConcreteVectorClass>())} -> std::convertible_to<ConcreteVectorClass>; };
#line 416 "FirstProgram.adv"
template<class __AnyType> concept __HasMethodImplementation_8addcb5f9470873d = requires(typename __AnyType::__class t) { {t.getAt(std::declval<CppAdvance::i32>())} -> std::convertible_to<CppAdvance::f32&>; }  || requires(typename __AnyType::__class t) { {_operator_subscript(t, std::declval<CppAdvance::i32>())} -> std::convertible_to<CppAdvance::f32&>; };
#line 415 "FirstProgram.adv"
template<class __AnyType> concept __HasMethodImplementation_getfd864fe31949d59b = requires(typename __AnyType::__class t) { {t.getName()} -> std::convertible_to<CppAdvance::Str>; } || requires(typename __AnyType::__class t) { {getName(t)} -> std::convertible_to<CppAdvance::Str>; };
#line 408 "FirstProgram.adv"
ADV_CHECK_INTERFACE(IMagicNumber, IMagicNumber);
#line 408 "FirstProgram.adv"
ADV_CHECK_INTERFACE(IResettable, IResettable);
namespace __vtables {
	#line 408 "FirstProgram.adv"
	struct __vtable_IInterface : public IMagicNumber::__vtable, public IResettable::__vtable
	{
		using fn_6cedb65857a10a4e = const CppAdvance::f32(CppAdvance::Object*, CppAdvance::In<VectorClass> f);
		fn_6cedb65857a10a4e* fnptr_6cedb65857a10a4e;
		#line 412 "FirstProgram.adv"
		template<class __AnyType> static const CppAdvance::f32 impl_6cedb65857a10a4e(CppAdvance::Object* obj, CppAdvance::In<VectorClass> f) { 
			if constexpr(__HasMethodImplementation_6cedb65857a10a4e<__AnyType>) {
				ADV_EXPRESSION_BODY(ADV_UFCS(DefaultMethod)(*static_cast<typename __AnyType::__class*>(obj), f)); 
			} else { throw 0; }
		}
		using fn_fbc51d6746c8ca94 = const ConcreteVectorClass(CppAdvance::Object*, const ConcreteVectorClass& f);
		fn_fbc51d6746c8ca94* fnptr_fbc51d6746c8ca94;
		#line 413 "FirstProgram.adv"
		template<class __AnyType> static const ConcreteVectorClass impl_fbc51d6746c8ca94(CppAdvance::Object* obj, const ConcreteVectorClass& f) { ADV_EXPRESSION_BODY(ADV_UFCS(operator+)(*static_cast<typename __AnyType::__class*>(obj), f)); }
		using fn_8addcb5f9470873d = CppAdvance::f32&(CppAdvance::Object*, CppAdvance::i32 i);
		fn_8addcb5f9470873d* fnptr_8addcb5f9470873d;
		#line 416 "FirstProgram.adv"
		template<class __AnyType> static CppAdvance::f32& impl_8addcb5f9470873d(CppAdvance::Object* obj, CppAdvance::i32 i) { return ADV_UFCS(getAt)(*static_cast<typename __AnyType::__class*>(obj), i); }
		using fn_getName = CppAdvance::Str(CppAdvance::Object*);
		fn_getName* fnptr_getName;
		#line 415 "FirstProgram.adv"
		template<class __AnyType> static CppAdvance::Str impl_getName(CppAdvance::Object* obj) { return ADV_UFCS(getName)(*static_cast<typename __AnyType::__class*>(obj)); }
		
	};
}
#line 408 "FirstProgram.adv"
template<class __AnyType> inline constexpr __vtables::__vtable_IInterface __vtable_IInterface_for = {__vtable_IMagicNumber_for<__AnyType>
	, __vtable_IResettable_for<__AnyType>
	, __HasMethodImplementation_6cedb65857a10a4e<__AnyType> ? &__vtables::__vtable_IInterface::template impl_6cedb65857a10a4e<__AnyType> : nullptr
	, &__vtables::__vtable_IInterface::template impl_fbc51d6746c8ca94<__AnyType>
	, &__vtables::__vtable_IInterface::template impl_8addcb5f9470873d<__AnyType>
	, &__vtables::__vtable_IInterface::template impl_getName<__AnyType>
	};
#line 408 "FirstProgram.adv"
template<class __AnyType> concept __ImplementsInterface_IInterface = __ImplementsInterface_IMagicNumber<__AnyType> && __ImplementsInterface_IResettable<__AnyType> && __HasMethodImplementation_fbc51d6746c8ca94<__AnyType> && __HasMethodImplementation_8addcb5f9470873d<__AnyType> && __HasMethodImplementation_getfd864fe31949d59b<__AnyType>;
#line 408 "FirstProgram.adv"
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
	#line 409 "FirstProgram.adv"
	static constexpr auto VERSION = CppAdvance::i32(12345);
	#line 410 "FirstProgram.adv"
	using SomeInt = CppAdvance::i32;
	#line 412 "FirstProgram.adv"
	public: const CppAdvance::f32 __default_DefaultMethod(CppAdvance::In<VectorClass> f) const ;
	#line 418 "FirstProgram.adv"
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
template<class __AnyInterface> requires std::derived_from<__AnyInterface, CppAdvance::InterfaceRef> FORCE_INLINE const CppAdvance::f32 DefaultMethod(const __AnyInterface& iface, CppAdvance::In<VectorClass> f)  {
	auto func = CppAdvance::GetVTableFromInterface(&iface)->fnptr_6cedb65857a10a4e;
	if (func) { ADV_EXPRESSION_BODY(func(CppAdvance::GetObjectReferenceFromInterface(&iface), f)); }
	else { ADV_EXPRESSION_BODY(reinterpret_cast<const IInterface*>(&iface)->__default_DefaultMethod(f)); }
}
template<class __AnyInterface> requires std::derived_from<__AnyInterface, CppAdvance::InterfaceRef> FORCE_INLINE const ConcreteVectorClass operator+(const __AnyInterface& iface, const ConcreteVectorClass& f)  { ADV_EXPRESSION_BODY(CppAdvance::GetVTableFromInterface(&iface)->fnptr_fbc51d6746c8ca94(CppAdvance::GetObjectReferenceFromInterface(&iface), f)); }
template<class __AnyInterface> requires std::derived_from<__AnyInterface, CppAdvance::InterfaceRef> FORCE_INLINE CppAdvance::f32& getAt(const __AnyInterface& iface, CppAdvance::i32 i)  { ADV_EXPRESSION_BODY(CppAdvance::GetVTableFromInterface(&iface)->fnptr_8addcb5f9470873d(CppAdvance::GetObjectReferenceFromInterface(&iface), i)); }
template<class __AnyInterface> requires std::derived_from<__AnyInterface, CppAdvance::InterfaceRef> FORCE_INLINE decltype(auto) _operator_subscript(const __AnyInterface& iface, CppAdvance::i32 i) { return getAt(iface, i); }
template<class __AnyInterface> requires std::derived_from<__AnyInterface, CppAdvance::InterfaceRef> FORCE_INLINE const CppAdvance::Str getName(const __AnyInterface& iface) { return CppAdvance::GetVTableFromInterface(&iface)->fnptr_getName(CppAdvance::GetObjectReferenceFromInterface(&iface)); }

class __Class_DayOfWeek;
#line 421 "FirstProgram.adv"
struct DayOfWeek final : public CppAdvance::Enum {
	public: using __self = DayOfWeek;
	public: using __class = __Class_DayOfWeek;
	public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
	#line 421 "FirstProgram.adv"
	private: CppAdvance::i32 __value;
	#line 421 "FirstProgram.adv"
	public: constexpr auto getValue() const noexcept { return __value; } ADV_PROPERTY_GETTER(public, Value, getValue, CppAdvance::i32)
	#line 422 "FirstProgram.adv"
	public: static TESTDLL_HIDDEN const DayOfWeek Monday;
	#line 423 "FirstProgram.adv"
	public: static TESTDLL_HIDDEN const DayOfWeek Tuesday;
	#line 424 "FirstProgram.adv"
	public: static TESTDLL_HIDDEN const DayOfWeek Wednesday;
	#line 425 "FirstProgram.adv"
	public: static TESTDLL_HIDDEN const DayOfWeek Thursday;
	#line 426 "FirstProgram.adv"
	public: static TESTDLL_HIDDEN const DayOfWeek Friday;
	#line 427 "FirstProgram.adv"
	public: static TESTDLL_HIDDEN const DayOfWeek Saturday;
	#line 428 "FirstProgram.adv"
	public: static TESTDLL_HIDDEN const DayOfWeek Sunday;
	#line 421 "FirstProgram.adv"
	private: static constexpr CppAdvance::Str __names[] = {u"Monday", u"Tuesday", u"Wednesday", u"Thursday", u"Friday", u"Saturday", u"Sunday"};
	#line 421 "FirstProgram.adv"
	public: static constexpr int __variants = 7;
	#line 421 "FirstProgram.adv"
	public: static constexpr std::span<const CppAdvance::Str> GetNames() noexcept { return __names; }
	#line 421 "FirstProgram.adv"
	private: static const DayOfWeek __values[];
	#line 421 "FirstProgram.adv"
	public: static constexpr std::span<const DayOfWeek> GetValues() noexcept;
	#line 421 "FirstProgram.adv"
	public: constexpr operator bool() const noexcept { return static_cast<bool>(__value); } 
	#line 421 "FirstProgram.adv"
	public: constexpr bool operator ==(const __self& that) const noexcept { return __value == that.__value; } 
	#line 421 "FirstProgram.adv"
	public: constexpr operator CppAdvance::i32() const noexcept { return __value; }
	#line 421 "FirstProgram.adv"
	private: constexpr DayOfWeek(CppAdvance::i32 value) : __value(value) {}
	
};

#line 422 "FirstProgram.adv"
inline constexpr DayOfWeek DayOfWeek::Monday = CppAdvance::i32(CppAdvance::i32(1));

#line 423 "FirstProgram.adv"
inline constexpr DayOfWeek DayOfWeek::Tuesday = CppAdvance::i32(CppAdvance::i64(Monday.__value) + 1);

#line 424 "FirstProgram.adv"
inline constexpr DayOfWeek DayOfWeek::Wednesday = CppAdvance::i32(CppAdvance::i64(Tuesday.__value) + 1);

#line 425 "FirstProgram.adv"
inline constexpr DayOfWeek DayOfWeek::Thursday = CppAdvance::i32(CppAdvance::i64(Wednesday.__value) + 1);

#line 426 "FirstProgram.adv"
inline constexpr DayOfWeek DayOfWeek::Friday = CppAdvance::i32(CppAdvance::i64(Thursday.__value) + 1);

#line 427 "FirstProgram.adv"
inline constexpr DayOfWeek DayOfWeek::Saturday = CppAdvance::i32(CppAdvance::i64(Friday.__value) + 1);

#line 428 "FirstProgram.adv"
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
#line 432 "FirstProgram.adv"
struct [[clang::annotate("UserAttr: Flags")]] Options final : public CppAdvance::Enum {
	public: using __self = Options;
	public: using __class = __Class_Options;
	public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
	#line 432 "FirstProgram.adv"
	private: CppAdvance::u8 __value;
	#line 432 "FirstProgram.adv"
	public: constexpr auto getValue() const noexcept { return __value; } ADV_PROPERTY_GETTER(public, Value, getValue, CppAdvance::u8)
	#line 433 "FirstProgram.adv"
	public: static TESTDLL_HIDDEN const Options None;
	#line 434 "FirstProgram.adv"
	public: static TESTDLL_HIDDEN const Options First;
	#line 435 "FirstProgram.adv"
	public: static TESTDLL_HIDDEN const Options Second;
	#line 436 "FirstProgram.adv"
	public: static TESTDLL_HIDDEN const Options Third;
	#line 437 "FirstProgram.adv"
	public: static TESTDLL_HIDDEN const Options Fourth;
	#line 438 "FirstProgram.adv"
	public: static TESTDLL_HIDDEN const Options Fiveth;
	#line 439 "FirstProgram.adv"
	public: static TESTDLL_HIDDEN const Options Sixth;
	#line 440 "FirstProgram.adv"
	public: static TESTDLL_HIDDEN const Options Seventh;
	#line 442 "FirstProgram.adv"
	public: static TESTDLL_HIDDEN const Options All;
	#line 443 "FirstProgram.adv"
	public: static TESTDLL_HIDDEN const Options Weekend;
	#line 432 "FirstProgram.adv"
	private: static constexpr CppAdvance::Str __names[] = {u"None", u"First", u"Second", u"Third", u"Fourth", u"Fiveth", u"Sixth", u"Seventh", u"All", u"Weekend"};
	#line 432 "FirstProgram.adv"
	public: static constexpr int __variants = 10;
	#line 432 "FirstProgram.adv"
	public: static constexpr std::span<const CppAdvance::Str> GetNames() noexcept { return __names; }
	#line 432 "FirstProgram.adv"
	private: static const Options __values[];
	#line 432 "FirstProgram.adv"
	public: static constexpr std::span<const Options> GetValues() noexcept;
	#line 432 "FirstProgram.adv"
	public: constexpr operator bool() const noexcept { return static_cast<bool>(__value); } 
	#line 432 "FirstProgram.adv"
	public: constexpr bool operator ==(const __self& that) const noexcept { return __value == that.__value; } 
	#line 432 "FirstProgram.adv"
	public: constexpr Options operator &(Options other) const noexcept { return (__value & other.__value); }
	#line 432 "FirstProgram.adv"
	public: constexpr bool HasFlag(Options other) const noexcept { return static_cast<bool>(__value & other.__value); }
	#line 432 "FirstProgram.adv"
	public: constexpr const Options operator |(Options other) const noexcept { return (__value | other.__value); }
	#line 432 "FirstProgram.adv"
	public: constexpr Options& operator |=(Options other) noexcept { __value |= other.__value; return *this; }
	#line 432 "FirstProgram.adv"
	public: constexpr Options& AddFlag(Options other) noexcept { __value |= other.__value; return *this; }
	#line 432 "FirstProgram.adv"
	public: constexpr Options RemoveFlag(Options other) noexcept { __value &=~ other.__value; return __value; }
	#line 445 "FirstProgram.adv"
	public: inline auto getIsWeekend() const  -> bool;
	#line 9999 "FirstProgram.adv"
	ADV_PROPERTY_GETTER(public, IsWeekend, getIsWeekend, bool);
	#line 432 "FirstProgram.adv"
	public: constexpr operator CppAdvance::u8() const noexcept { return __value; }
	#line 432 "FirstProgram.adv"
	private: constexpr Options(CppAdvance::u8 value) : __value(value) {}
	
};

#line 433 "FirstProgram.adv"
inline constexpr Options Options::None = CppAdvance::u8(CppAdvance::i32(0));

#line 434 "FirstProgram.adv"
inline constexpr Options Options::First = CppAdvance::u8(CppAdvance::i64(None.__value) << 1 ? CppAdvance::i64(None.__value) << 1 : 1);

#line 435 "FirstProgram.adv"
inline constexpr Options Options::Second = CppAdvance::u8(CppAdvance::i64(First.__value) << 1 ? CppAdvance::i64(First.__value) << 1 : 1);

#line 436 "FirstProgram.adv"
inline constexpr Options Options::Third = CppAdvance::u8(CppAdvance::i64(Second.__value) << 1 ? CppAdvance::i64(Second.__value) << 1 : 1);

#line 437 "FirstProgram.adv"
inline constexpr Options Options::Fourth = CppAdvance::u8(CppAdvance::i64(Third.__value) << 1 ? CppAdvance::i64(Third.__value) << 1 : 1);

#line 438 "FirstProgram.adv"
inline constexpr Options Options::Fiveth = CppAdvance::u8(CppAdvance::i64(Fourth.__value) << 1 ? CppAdvance::i64(Fourth.__value) << 1 : 1);

#line 439 "FirstProgram.adv"
inline constexpr Options Options::Sixth = CppAdvance::u8(CppAdvance::i64(Fiveth.__value) << 1 ? CppAdvance::i64(Fiveth.__value) << 1 : 1);

#line 440 "FirstProgram.adv"
inline constexpr Options Options::Seventh = CppAdvance::u8(CppAdvance::i64(Sixth.__value) << 1 ? CppAdvance::i64(Sixth.__value) << 1 : 1);

#line 442 "FirstProgram.adv"
inline constexpr Options Options::All = CppAdvance::u8(First | Second | Third | Fourth | Fiveth | Sixth | Seventh);

#line 443 "FirstProgram.adv"
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
#line 447 "FirstProgram.adv"
struct Text final : public CppAdvance::Enum {
	public: using __self = Text;
	public: using __class = __Class_Text;
	public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
	#line 447 "FirstProgram.adv"
	private: CppAdvance::Str __value;
	#line 447 "FirstProgram.adv"
	public: constexpr auto getValue() const noexcept { return __value; } ADV_PROPERTY_GETTER(public, Value, getValue, CppAdvance::Str)
	#line 448 "FirstProgram.adv"
	public: static TESTDLL_HIDDEN const Text Monday;
	#line 449 "FirstProgram.adv"
	public: static TESTDLL_HIDDEN const Text Tuesday;
	#line 450 "FirstProgram.adv"
	public: static TESTDLL_HIDDEN const Text Wednesday;
	#line 451 "FirstProgram.adv"
	public: static TESTDLL_HIDDEN const Text Thursday;
	#line 452 "FirstProgram.adv"
	public: static TESTDLL_HIDDEN const Text Friday;
	#line 453 "FirstProgram.adv"
	public: static TESTDLL_HIDDEN const Text Saturday;
	#line 454 "FirstProgram.adv"
	public: static TESTDLL_HIDDEN const Text Sunday;
	#line 447 "FirstProgram.adv"
	private: static constexpr CppAdvance::Str __names[] = {u"Monday", u"Tuesday", u"Wednesday", u"Thursday", u"Friday", u"Saturday", u"Sunday"};
	#line 447 "FirstProgram.adv"
	public: static constexpr int __variants = 7;
	#line 447 "FirstProgram.adv"
	public: static constexpr std::span<const CppAdvance::Str> GetNames() noexcept { return __names; }
	#line 447 "FirstProgram.adv"
	private: static const Text __values[];
	#line 447 "FirstProgram.adv"
	public: static constexpr std::span<const Text> GetValues() noexcept;
	#line 447 "FirstProgram.adv"
	public: constexpr operator bool() const noexcept { return static_cast<bool>(__value); } 
	#line 447 "FirstProgram.adv"
	public: constexpr bool operator ==(const __self& that) const noexcept { return __value == that.__value; } 
	#line 459 "FirstProgram.adv"
	private: inline auto getShortString() const  -> CppAdvance::Str;
	#line 9999 "FirstProgram.adv"
	ADV_PROPERTY_GETTER(private, ShortString, getShortString, CppAdvance::Str);
	#line 456 "FirstProgram.adv"
	public: inline auto ToShortString() const  -> const CppAdvance::Str;
	#line 447 "FirstProgram.adv"
	public: constexpr operator CppAdvance::Str() const noexcept { return __value; }
	#line 447 "FirstProgram.adv"
	private: constexpr Text(CppAdvance::Str value) : __value(value) {}
	
};

#line 448 "FirstProgram.adv"
inline constexpr Text Text::Monday = CppAdvance::Str(CppAdvance::Str{u"This is Monday"});

#line 449 "FirstProgram.adv"
inline constexpr Text Text::Tuesday = CppAdvance::Str(CppAdvance::Str{u"This is Tuesday"});

#line 450 "FirstProgram.adv"
inline constexpr Text Text::Wednesday = CppAdvance::Str(CppAdvance::Str{u"This is Wednesday"});

#line 451 "FirstProgram.adv"
inline constexpr Text Text::Thursday = CppAdvance::Str(CppAdvance::Str{u"This is Thursday"});

#line 452 "FirstProgram.adv"
inline constexpr Text Text::Friday = CppAdvance::Str(CppAdvance::Str{u"This is Friday"});

#line 453 "FirstProgram.adv"
inline constexpr Text Text::Saturday = CppAdvance::Str(CppAdvance::Str{u"This is Saturday"});

#line 454 "FirstProgram.adv"
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


template<> inline constexpr bool CppAdvance::__details::cheapCopy<ComplexVariant> = false;
#line 462 "FirstProgram.adv"
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
	public: ADV_PROPERTY_GETTER_STATIC(public, TESTDLL_API, Count10, getCount10, CppAdvance::i32);
	#define ADV_PROPERTY_SELF __self
	#line 474 "FirstProgram.adv"
	public: inline decltype(auto) operator*() const ;
	public: FORCE_INLINE static decltype(auto) getValue1() noexcept;
	ADV_PROPERTY_GETTER_STATIC(public, TESTDLL_API, Value1, getValue1, __self);
	public: FORCE_INLINE static decltype(auto) getValue2() noexcept;
	ADV_PROPERTY_GETTER_STATIC(public, TESTDLL_API, Value2, getValue2, __self);
	public: FORCE_INLINE static decltype(auto) getValue3() noexcept;
	ADV_PROPERTY_GETTER_STATIC(public, TESTDLL_API, Value3, getValue3, __self);
	public: FORCE_INLINE static decltype(auto) getValue4() noexcept;
	ADV_PROPERTY_GETTER_STATIC(public, TESTDLL_API, Value4, getValue4, __self);
	#line 462 "FirstProgram.adv"
	public: FORCE_INLINE static decltype(auto) GetValues() noexcept;
	
};
#line 462 "FirstProgram.adv"
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
	#line 474 "FirstProgram.adv"
	public: inline decltype(auto) operator*() const ;
	
};
#line 462 "FirstProgram.adv"
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
#line 488 "FirstProgram.adv"
struct Media final : public CppAdvance::Union {
	public: using __self = Media;
	public: using __class = __Class_Media;
	public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
	#line 489 "FirstProgram.adv"
	private: struct __UnionType_None{ constexpr bool operator==(const __UnionType_None &) const noexcept { return true; } }; public: static constexpr __UnionType_None None{};
	#line 490 "FirstProgram.adv"
	public: using String = CppAdvance::Str; ADV_CHECK_REF_STRUCT("str", CppAdvance::Str);
	#line 491 "FirstProgram.adv"
	public: using XYZ = std::tuple<CppAdvance::i32, CppAdvance::i32, CppAdvance::i32>;
	#line 492 "FirstProgram.adv"
	public: struct Audio { decltype(auto) __ref() const noexcept { return *this; }
		CppAdvance::Str name; ADV_CHECK_REF_STRUCT("str", CppAdvance::Str);
		CppAdvance::i32 len; ADV_CHECK_REF_STRUCT("i32", CppAdvance::i32);
		CppAdvance::f32 volume; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
		bool operator==(const Audio& that) const noexcept { return name == that.name && len == that.len && volume == that.volume; }
	};
	#line 493 "FirstProgram.adv"
	public: struct Video { decltype(auto) __ref() const noexcept { return *this; }
		CppAdvance::Str name; ADV_CHECK_REF_STRUCT("str", CppAdvance::Str);
		CppAdvance::i32 len; ADV_CHECK_REF_STRUCT("i32", CppAdvance::i32);
		CppAdvance::f32 fps; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
		CppAdvance::Str lang; ADV_CHECK_REF_STRUCT("str", CppAdvance::Str);
		bool operator==(const Video& that) const noexcept { return name == that.name && len == that.len && fps == that.fps && lang == that.lang; }
	};
	#line 494 "FirstProgram.adv"
	public: struct Text { decltype(auto) __ref() const noexcept { return *this; }
		CppAdvance::Str lang; ADV_CHECK_REF_STRUCT("str", CppAdvance::Str);
		bool operator==(const Text& that) const noexcept { return lang == that.lang; }
	};
	private: union {
		#line 489 "FirstProgram.adv"
		__UnionType_None _None;
		#line 490 "FirstProgram.adv"
		String _String;
		#line 491 "FirstProgram.adv"
		XYZ _XYZ;
		#line 492 "FirstProgram.adv"
		Audio _Audio;
		#line 493 "FirstProgram.adv"
		Video _Video;
		#line 494 "FirstProgram.adv"
		Text _Text;
		
	};
	enum : unsigned char {
		_TAG__None, _TAG__String, _TAG__XYZ, _TAG__Audio, _TAG__Video, _TAG__Text
	} __union_internal_tag;
	public:
	#line 488 "FirstProgram.adv"
	static constexpr int __variants = 6;
	#line 489 "FirstProgram.adv"
	Media(CppAdvance::In<__UnionType_None> value) : __union_internal_tag{ _TAG__None } { new (&_None) __UnionType_None(value); }
	#line 490 "FirstProgram.adv"
	Media(CppAdvance::In<String> value) : __union_internal_tag{ _TAG__String } { new (&_String) String(value); }
	#line 491 "FirstProgram.adv"
	Media(CppAdvance::In<XYZ> value) : __union_internal_tag{ _TAG__XYZ } { new (&_XYZ) XYZ(value); }
	#line 492 "FirstProgram.adv"
	Media(CppAdvance::In<Audio> value) : __union_internal_tag{ _TAG__Audio } { new (&_Audio) Audio(value); }
	#line 493 "FirstProgram.adv"
	Media(CppAdvance::In<Video> value) : __union_internal_tag{ _TAG__Video } { new (&_Video) Video(value); }
	#line 494 "FirstProgram.adv"
	Media(CppAdvance::In<Text> value) : __union_internal_tag{ _TAG__Text } { new (&_Text) Text(value); }
	#line 9999 "FirstProgram.adv"
	private: void __copy(const __self& other) {
		__union_internal_tag = other.__union_internal_tag;
		switch (__union_internal_tag) {
			#line 489 "FirstProgram.adv"
			case _TAG__None: new (&_None) __UnionType_None(other._None); break;
			#line 490 "FirstProgram.adv"
			case _TAG__String: new (&_String) String(other._String); break;
			#line 491 "FirstProgram.adv"
			case _TAG__XYZ: new (&_XYZ) XYZ(other._XYZ); break;
			#line 492 "FirstProgram.adv"
			case _TAG__Audio: new (&_Audio) Audio(other._Audio); break;
			#line 493 "FirstProgram.adv"
			case _TAG__Video: new (&_Video) Video(other._Video); break;
			#line 494 "FirstProgram.adv"
			case _TAG__Text: new (&_Text) Text(other._Text); break;
			
		}
	}
	#line 488 "FirstProgram.adv"
	public: Media(const __self& other) { __copy(other); }
	#line 9999 "FirstProgram.adv"
	private: void __move(__self&& other) {
		__union_internal_tag = other.__union_internal_tag;
		switch (__union_internal_tag) {
			#line 489 "FirstProgram.adv"
			case _TAG__None: new (&_None) __UnionType_None(std::move(other._None)); break;
			#line 490 "FirstProgram.adv"
			case _TAG__String: new (&_String) String(std::move(other._String)); break;
			#line 491 "FirstProgram.adv"
			case _TAG__XYZ: new (&_XYZ) XYZ(std::move(other._XYZ)); break;
			#line 492 "FirstProgram.adv"
			case _TAG__Audio: new (&_Audio) Audio(std::move(other._Audio)); break;
			#line 493 "FirstProgram.adv"
			case _TAG__Video: new (&_Video) Video(std::move(other._Video)); break;
			#line 494 "FirstProgram.adv"
			case _TAG__Text: new (&_Text) Text(std::move(other._Text)); break;
			
		}
	}
	#line 488 "FirstProgram.adv"
	public: Media(__self&& other) { __move(std::move(other)); }
	#line 9999 "FirstProgram.adv"
	private: void __destroy() {
		switch (__union_internal_tag) {
			#line 489 "FirstProgram.adv"
			case _TAG__None: _None.~__UnionType_None(); break;
			#line 490 "FirstProgram.adv"
			case _TAG__String: _String.~String(); break;
			#line 491 "FirstProgram.adv"
			case _TAG__XYZ: _XYZ.~XYZ(); break;
			#line 492 "FirstProgram.adv"
			case _TAG__Audio: _Audio.~Audio(); break;
			#line 493 "FirstProgram.adv"
			case _TAG__Video: _Video.~Video(); break;
			#line 494 "FirstProgram.adv"
			case _TAG__Text: _Text.~Text(); break;
			
		}
	}
	#line 488 "FirstProgram.adv"
	public: ~Media() { __destroy(); }
	#line 489 "FirstProgram.adv"
	Media& operator=(CppAdvance::In<__UnionType_None> value) {
		__destroy();
		__union_internal_tag = _TAG__None;
		new (&_None) __UnionType_None(value); return *this;
	}
	#line 490 "FirstProgram.adv"
	Media& operator=(CppAdvance::In<String> value) {
		__destroy();
		__union_internal_tag = _TAG__String;
		new (&_String) String(value); return *this;
	}
	#line 491 "FirstProgram.adv"
	Media& operator=(CppAdvance::In<XYZ> value) {
		__destroy();
		__union_internal_tag = _TAG__XYZ;
		new (&_XYZ) XYZ(value); return *this;
	}
	#line 492 "FirstProgram.adv"
	Media& operator=(CppAdvance::In<Audio> value) {
		__destroy();
		__union_internal_tag = _TAG__Audio;
		new (&_Audio) Audio(value); return *this;
	}
	#line 493 "FirstProgram.adv"
	Media& operator=(CppAdvance::In<Video> value) {
		__destroy();
		__union_internal_tag = _TAG__Video;
		new (&_Video) Video(value); return *this;
	}
	#line 494 "FirstProgram.adv"
	Media& operator=(CppAdvance::In<Text> value) {
		__destroy();
		__union_internal_tag = _TAG__Text;
		new (&_Text) Text(value); return *this;
	}
	#line 488 "FirstProgram.adv"
	public: __self& operator=(const __self& other) { __destroy(); __copy(other); return *this; }
	#line 488 "FirstProgram.adv"
	public: __self& operator=(__self&& other) { __destroy(); __move(std::move(other)); return *this; }
	#line 489 "FirstProgram.adv"
	public: auto GetNone() const { if (__union_internal_tag != _TAG__None) throw std::logic_error("Type mismatch in the discriminated union"); return _None; }
	#line 490 "FirstProgram.adv"
	public: auto GetString() const { if (__union_internal_tag != _TAG__String) throw std::logic_error("Type mismatch in the discriminated union"); return _String; }
	#line 491 "FirstProgram.adv"
	public: auto GetXYZ() const { if (__union_internal_tag != _TAG__XYZ) throw std::logic_error("Type mismatch in the discriminated union"); return _XYZ; }
	#line 492 "FirstProgram.adv"
	public: auto GetAudio() const { if (__union_internal_tag != _TAG__Audio) throw std::logic_error("Type mismatch in the discriminated union"); return _Audio; }
	#line 493 "FirstProgram.adv"
	public: auto GetVideo() const { if (__union_internal_tag != _TAG__Video) throw std::logic_error("Type mismatch in the discriminated union"); return _Video; }
	#line 494 "FirstProgram.adv"
	public: auto GetText() const { if (__union_internal_tag != _TAG__Text) throw std::logic_error("Type mismatch in the discriminated union"); return _Text; }
	#line 9999 "FirstProgram.adv"
	public: template<class __SomeT> bool Is() const noexcept {
		if constexpr (std::is_same_v<__SomeT, __UnionType_None>) return __union_internal_tag == _TAG__None;
		else if constexpr (std::is_same_v<__SomeT, String>) return __union_internal_tag == _TAG__String;
		else if constexpr (std::is_same_v<__SomeT, XYZ>) return __union_internal_tag == _TAG__XYZ;
		else if constexpr (std::is_same_v<__SomeT, Audio>) return __union_internal_tag == _TAG__Audio;
		else if constexpr (std::is_same_v<__SomeT, Video>) return __union_internal_tag == _TAG__Video;
		else if constexpr (std::is_same_v<__SomeT, Text>) return __union_internal_tag == _TAG__Text;
		return false;
	}
	#line 9999 "FirstProgram.adv"
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
	#line 9999 "FirstProgram.adv"
	public: template<class __SomeT> bool operator==(const __SomeT& other) const noexcept {
		if constexpr (std::is_same_v<__SomeT, __UnionType_None>) return __union_internal_tag == _TAG__None && _None == other;
		else if constexpr (std::is_same_v<__SomeT, String>) return __union_internal_tag == _TAG__String && _String == other;
		else if constexpr (std::is_same_v<__SomeT, XYZ>) return __union_internal_tag == _TAG__XYZ && _XYZ == other;
		else if constexpr (std::is_same_v<__SomeT, Audio>) return __union_internal_tag == _TAG__Audio && _Audio == other;
		else if constexpr (std::is_same_v<__SomeT, Video>) return __union_internal_tag == _TAG__Video && _Video == other;
		else if constexpr (std::is_same_v<__SomeT, Text>) return __union_internal_tag == _TAG__Text && _Text == other;
		return false;
	}
	#line 502 "FirstProgram.adv"
	public: inline constexpr auto getCount123() const  -> CppAdvance::i32;
	#line 9999 "FirstProgram.adv"
	ADV_PROPERTY_GETTER(public, Count123, getCount123, CppAdvance::i32);
	#line 504 "FirstProgram.adv"
	public: inline constexpr static auto getCount10()  -> CppAdvance::i32;
	#line 9999 "FirstProgram.adv"
	ADV_PROPERTY_GETTER_STATIC(public, TESTDLL_API, Count10, getCount10, CppAdvance::i32);
	#line 496 "FirstProgram.adv"
	public: inline auto printVariant() const  -> void;
	#line 500 "FirstProgram.adv"
	public: inline auto GetMagicNumber(CppAdvance::In<VectorClass> f) const  -> const CppAdvance::f32;
	
};

template<class T1, class T2> class __Class_Union2;
#line 507 "FirstProgram.adv"
template<class T1, class T2> struct Union2 final : public CppAdvance::Union {
	public: using __self = Union2<T1, T2>;
	public: using __class = __Class_Union2<T1, T2>;
	public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
	#line 508 "FirstProgram.adv"
	public: using Type1 = T1; ADV_CHECK_REF_STRUCT("T1", T1);
	#line 509 "FirstProgram.adv"
	public: using Type2 = T2; ADV_CHECK_REF_STRUCT("T2", T2);
	private: union {
		#line 508 "FirstProgram.adv"
		Type1 _Type1;
		#line 509 "FirstProgram.adv"
		Type2 _Type2;
		
	};
	enum : unsigned char {
		_TAG__Type1, _TAG__Type2
	} __union_internal_tag;
	public:
	#line 507 "FirstProgram.adv"
	static constexpr int __variants = 2;
	#line 508 "FirstProgram.adv"
	Union2(CppAdvance::In<Type1> value) : __union_internal_tag{ _TAG__Type1 } { new (&_Type1) Type1(value); }
	#line 509 "FirstProgram.adv"
	Union2(CppAdvance::In<Type2> value) : __union_internal_tag{ _TAG__Type2 } { new (&_Type2) Type2(value); }
	#line 9999 "FirstProgram.adv"
	private: void __copy(const __self& other) {
		__union_internal_tag = other.__union_internal_tag;
		switch (__union_internal_tag) {
			#line 508 "FirstProgram.adv"
			case _TAG__Type1: new (&_Type1) Type1(other._Type1); break;
			#line 509 "FirstProgram.adv"
			case _TAG__Type2: new (&_Type2) Type2(other._Type2); break;
			
		}
	}
	#line 507 "FirstProgram.adv"
	public: Union2(const __self& other) { __copy(other); }
	#line 9999 "FirstProgram.adv"
	private: void __move(__self&& other) {
		__union_internal_tag = other.__union_internal_tag;
		switch (__union_internal_tag) {
			#line 508 "FirstProgram.adv"
			case _TAG__Type1: new (&_Type1) Type1(std::move(other._Type1)); break;
			#line 509 "FirstProgram.adv"
			case _TAG__Type2: new (&_Type2) Type2(std::move(other._Type2)); break;
			
		}
	}
	#line 507 "FirstProgram.adv"
	public: Union2(__self&& other) { __move(std::move(other)); }
	#line 9999 "FirstProgram.adv"
	private: void __destroy() {
		switch (__union_internal_tag) {
			#line 508 "FirstProgram.adv"
			case _TAG__Type1: _Type1.~Type1(); break;
			#line 509 "FirstProgram.adv"
			case _TAG__Type2: _Type2.~Type2(); break;
			
		}
	}
	#line 507 "FirstProgram.adv"
	public: ~Union2() { __destroy(); }
	#line 508 "FirstProgram.adv"
	Union2& operator=(CppAdvance::In<Type1> value) {
		__destroy();
		__union_internal_tag = _TAG__Type1;
		new (&_Type1) Type1(value); return *this;
	}
	#line 509 "FirstProgram.adv"
	Union2& operator=(CppAdvance::In<Type2> value) {
		__destroy();
		__union_internal_tag = _TAG__Type2;
		new (&_Type2) Type2(value); return *this;
	}
	#line 507 "FirstProgram.adv"
	public: __self& operator=(const __self& other) { __destroy(); __copy(other); return *this; }
	#line 507 "FirstProgram.adv"
	public: __self& operator=(__self&& other) { __destroy(); __move(std::move(other)); return *this; }
	#line 508 "FirstProgram.adv"
	public: auto GetType1() const { if (__union_internal_tag != _TAG__Type1) throw std::logic_error("Type mismatch in the discriminated union"); return _Type1; }
	#line 509 "FirstProgram.adv"
	public: auto GetType2() const { if (__union_internal_tag != _TAG__Type2) throw std::logic_error("Type mismatch in the discriminated union"); return _Type2; }
	#line 9999 "FirstProgram.adv"
	public: template<class __SomeT> bool Is() const noexcept {
		if constexpr (std::is_same_v<__SomeT, Type1>) return __union_internal_tag == _TAG__Type1;
		else if constexpr (std::is_same_v<__SomeT, Type2>) return __union_internal_tag == _TAG__Type2;
		return false;
	}
	#line 9999 "FirstProgram.adv"
	public: template<class __SomeT> CppAdvance::Nullable<__SomeT> As() const noexcept {
		if constexpr (std::is_same_v<__SomeT, Type1>) { if(__union_internal_tag == _TAG__Type1) return _Type1; }
		else if constexpr (std::is_same_v<__SomeT, Type2>) { if(__union_internal_tag == _TAG__Type2) return _Type2; }
		else static_assert(false, "Cannot to cast union type Union2 to __SomeT");
		return nullptr;
	}
	#line 9999 "FirstProgram.adv"
	public: template<class __SomeT> bool operator==(const __SomeT& other) const noexcept {
		if constexpr (std::is_same_v<__SomeT, Type1>) return __union_internal_tag == _TAG__Type1 && _Type1 == other;
		else if constexpr (std::is_same_v<__SomeT, Type2>) return __union_internal_tag == _TAG__Type2 && _Type2 == other;
		return false;
	}
	
};

template<class T1, class T2, class T3> class __Class_Union3;
#line 512 "FirstProgram.adv"
template<class T1, class T2, class T3> struct Union3 final : public CppAdvance::Union {
	public: using __self = Union3<T1, T2, T3>;
	public: using __class = __Class_Union3<T1, T2, T3>;
	public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
	#line 513 "FirstProgram.adv"
	public: using Type1 = T1; ADV_CHECK_REF_STRUCT("T1", T1);
	#line 514 "FirstProgram.adv"
	public: using Type2 = T2; ADV_CHECK_REF_STRUCT("T2", T2);
	#line 515 "FirstProgram.adv"
	public: using Type3 = T3; ADV_CHECK_REF_STRUCT("T3", T3);
	private: union {
		#line 513 "FirstProgram.adv"
		Type1 _Type1;
		#line 514 "FirstProgram.adv"
		Type2 _Type2;
		#line 515 "FirstProgram.adv"
		Type3 _Type3;
		
	};
	enum : unsigned char {
		_TAG__Type1, _TAG__Type2, _TAG__Type3
	} __union_internal_tag;
	public:
	#line 512 "FirstProgram.adv"
	static constexpr int __variants = 3;
	#line 513 "FirstProgram.adv"
	Union3(CppAdvance::In<Type1> value) : __union_internal_tag{ _TAG__Type1 } { new (&_Type1) Type1(value); }
	#line 514 "FirstProgram.adv"
	Union3(CppAdvance::In<Type2> value) : __union_internal_tag{ _TAG__Type2 } { new (&_Type2) Type2(value); }
	#line 515 "FirstProgram.adv"
	Union3(CppAdvance::In<Type3> value) : __union_internal_tag{ _TAG__Type3 } { new (&_Type3) Type3(value); }
	#line 9999 "FirstProgram.adv"
	private: void __copy(const __self& other) {
		__union_internal_tag = other.__union_internal_tag;
		switch (__union_internal_tag) {
			#line 513 "FirstProgram.adv"
			case _TAG__Type1: new (&_Type1) Type1(other._Type1); break;
			#line 514 "FirstProgram.adv"
			case _TAG__Type2: new (&_Type2) Type2(other._Type2); break;
			#line 515 "FirstProgram.adv"
			case _TAG__Type3: new (&_Type3) Type3(other._Type3); break;
			
		}
	}
	#line 512 "FirstProgram.adv"
	public: Union3(const __self& other) { __copy(other); }
	#line 9999 "FirstProgram.adv"
	private: void __move(__self&& other) {
		__union_internal_tag = other.__union_internal_tag;
		switch (__union_internal_tag) {
			#line 513 "FirstProgram.adv"
			case _TAG__Type1: new (&_Type1) Type1(std::move(other._Type1)); break;
			#line 514 "FirstProgram.adv"
			case _TAG__Type2: new (&_Type2) Type2(std::move(other._Type2)); break;
			#line 515 "FirstProgram.adv"
			case _TAG__Type3: new (&_Type3) Type3(std::move(other._Type3)); break;
			
		}
	}
	#line 512 "FirstProgram.adv"
	public: Union3(__self&& other) { __move(std::move(other)); }
	#line 9999 "FirstProgram.adv"
	private: void __destroy() {
		switch (__union_internal_tag) {
			#line 513 "FirstProgram.adv"
			case _TAG__Type1: _Type1.~Type1(); break;
			#line 514 "FirstProgram.adv"
			case _TAG__Type2: _Type2.~Type2(); break;
			#line 515 "FirstProgram.adv"
			case _TAG__Type3: _Type3.~Type3(); break;
			
		}
	}
	#line 512 "FirstProgram.adv"
	public: ~Union3() { __destroy(); }
	#line 513 "FirstProgram.adv"
	Union3& operator=(CppAdvance::In<Type1> value) {
		__destroy();
		__union_internal_tag = _TAG__Type1;
		new (&_Type1) Type1(value); return *this;
	}
	#line 514 "FirstProgram.adv"
	Union3& operator=(CppAdvance::In<Type2> value) {
		__destroy();
		__union_internal_tag = _TAG__Type2;
		new (&_Type2) Type2(value); return *this;
	}
	#line 515 "FirstProgram.adv"
	Union3& operator=(CppAdvance::In<Type3> value) {
		__destroy();
		__union_internal_tag = _TAG__Type3;
		new (&_Type3) Type3(value); return *this;
	}
	#line 512 "FirstProgram.adv"
	public: __self& operator=(const __self& other) { __destroy(); __copy(other); return *this; }
	#line 512 "FirstProgram.adv"
	public: __self& operator=(__self&& other) { __destroy(); __move(std::move(other)); return *this; }
	#line 513 "FirstProgram.adv"
	public: auto GetType1() const { if (__union_internal_tag != _TAG__Type1) throw std::logic_error("Type mismatch in the discriminated union"); return _Type1; }
	#line 514 "FirstProgram.adv"
	public: auto GetType2() const { if (__union_internal_tag != _TAG__Type2) throw std::logic_error("Type mismatch in the discriminated union"); return _Type2; }
	#line 515 "FirstProgram.adv"
	public: auto GetType3() const { if (__union_internal_tag != _TAG__Type3) throw std::logic_error("Type mismatch in the discriminated union"); return _Type3; }
	#line 9999 "FirstProgram.adv"
	public: template<class __SomeT> bool Is() const noexcept {
		if constexpr (std::is_same_v<__SomeT, Type1>) return __union_internal_tag == _TAG__Type1;
		else if constexpr (std::is_same_v<__SomeT, Type2>) return __union_internal_tag == _TAG__Type2;
		else if constexpr (std::is_same_v<__SomeT, Type3>) return __union_internal_tag == _TAG__Type3;
		return false;
	}
	#line 9999 "FirstProgram.adv"
	public: template<class __SomeT> CppAdvance::Nullable<__SomeT> As() const noexcept {
		if constexpr (std::is_same_v<__SomeT, Type1>) { if(__union_internal_tag == _TAG__Type1) return _Type1; }
		else if constexpr (std::is_same_v<__SomeT, Type2>) { if(__union_internal_tag == _TAG__Type2) return _Type2; }
		else if constexpr (std::is_same_v<__SomeT, Type3>) { if(__union_internal_tag == _TAG__Type3) return _Type3; }
		else static_assert(false, "Cannot to cast union type Union3 to __SomeT");
		return nullptr;
	}
	#line 9999 "FirstProgram.adv"
	public: template<class __SomeT> bool operator==(const __SomeT& other) const noexcept {
		if constexpr (std::is_same_v<__SomeT, Type1>) return __union_internal_tag == _TAG__Type1 && _Type1 == other;
		else if constexpr (std::is_same_v<__SomeT, Type2>) return __union_internal_tag == _TAG__Type2 && _Type2 == other;
		else if constexpr (std::is_same_v<__SomeT, Type3>) return __union_internal_tag == _TAG__Type3 && _Type3 == other;
		return false;
	}
	
};

template<class T1, class T2, class T3, class T4> class __Class_Union4;
#line 518 "FirstProgram.adv"
template<class T1, class T2, class T3, class T4> struct Union4 final : public CppAdvance::Union {
	public: using __self = Union4<T1, T2, T3, T4>;
	public: using __class = __Class_Union4<T1, T2, T3, T4>;
	public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
	#line 519 "FirstProgram.adv"
	public: using Type1 = T1; ADV_CHECK_REF_STRUCT("T1", T1);
	#line 520 "FirstProgram.adv"
	public: using Type2 = T2; ADV_CHECK_REF_STRUCT("T2", T2);
	#line 521 "FirstProgram.adv"
	public: using Type3 = T3; ADV_CHECK_REF_STRUCT("T3", T3);
	#line 522 "FirstProgram.adv"
	public: using Type4 = T4; ADV_CHECK_REF_STRUCT("T4", T4);
	private: union {
		#line 519 "FirstProgram.adv"
		Type1 _Type1;
		#line 520 "FirstProgram.adv"
		Type2 _Type2;
		#line 521 "FirstProgram.adv"
		Type3 _Type3;
		#line 522 "FirstProgram.adv"
		Type4 _Type4;
		
	};
	enum : unsigned char {
		_TAG__Type1, _TAG__Type2, _TAG__Type3, _TAG__Type4
	} __union_internal_tag;
	public:
	#line 518 "FirstProgram.adv"
	static constexpr int __variants = 4;
	#line 519 "FirstProgram.adv"
	Union4(CppAdvance::In<Type1> value) : __union_internal_tag{ _TAG__Type1 } { new (&_Type1) Type1(value); }
	#line 520 "FirstProgram.adv"
	Union4(CppAdvance::In<Type2> value) : __union_internal_tag{ _TAG__Type2 } { new (&_Type2) Type2(value); }
	#line 521 "FirstProgram.adv"
	Union4(CppAdvance::In<Type3> value) : __union_internal_tag{ _TAG__Type3 } { new (&_Type3) Type3(value); }
	#line 522 "FirstProgram.adv"
	Union4(CppAdvance::In<Type4> value) : __union_internal_tag{ _TAG__Type4 } { new (&_Type4) Type4(value); }
	#line 9999 "FirstProgram.adv"
	private: void __copy(const __self& other) {
		__union_internal_tag = other.__union_internal_tag;
		switch (__union_internal_tag) {
			#line 519 "FirstProgram.adv"
			case _TAG__Type1: new (&_Type1) Type1(other._Type1); break;
			#line 520 "FirstProgram.adv"
			case _TAG__Type2: new (&_Type2) Type2(other._Type2); break;
			#line 521 "FirstProgram.adv"
			case _TAG__Type3: new (&_Type3) Type3(other._Type3); break;
			#line 522 "FirstProgram.adv"
			case _TAG__Type4: new (&_Type4) Type4(other._Type4); break;
			
		}
	}
	#line 518 "FirstProgram.adv"
	public: Union4(const __self& other) { __copy(other); }
	#line 9999 "FirstProgram.adv"
	private: void __move(__self&& other) {
		__union_internal_tag = other.__union_internal_tag;
		switch (__union_internal_tag) {
			#line 519 "FirstProgram.adv"
			case _TAG__Type1: new (&_Type1) Type1(std::move(other._Type1)); break;
			#line 520 "FirstProgram.adv"
			case _TAG__Type2: new (&_Type2) Type2(std::move(other._Type2)); break;
			#line 521 "FirstProgram.adv"
			case _TAG__Type3: new (&_Type3) Type3(std::move(other._Type3)); break;
			#line 522 "FirstProgram.adv"
			case _TAG__Type4: new (&_Type4) Type4(std::move(other._Type4)); break;
			
		}
	}
	#line 518 "FirstProgram.adv"
	public: Union4(__self&& other) { __move(std::move(other)); }
	#line 9999 "FirstProgram.adv"
	private: void __destroy() {
		switch (__union_internal_tag) {
			#line 519 "FirstProgram.adv"
			case _TAG__Type1: _Type1.~Type1(); break;
			#line 520 "FirstProgram.adv"
			case _TAG__Type2: _Type2.~Type2(); break;
			#line 521 "FirstProgram.adv"
			case _TAG__Type3: _Type3.~Type3(); break;
			#line 522 "FirstProgram.adv"
			case _TAG__Type4: _Type4.~Type4(); break;
			
		}
	}
	#line 518 "FirstProgram.adv"
	public: ~Union4() { __destroy(); }
	#line 519 "FirstProgram.adv"
	Union4& operator=(CppAdvance::In<Type1> value) {
		__destroy();
		__union_internal_tag = _TAG__Type1;
		new (&_Type1) Type1(value); return *this;
	}
	#line 520 "FirstProgram.adv"
	Union4& operator=(CppAdvance::In<Type2> value) {
		__destroy();
		__union_internal_tag = _TAG__Type2;
		new (&_Type2) Type2(value); return *this;
	}
	#line 521 "FirstProgram.adv"
	Union4& operator=(CppAdvance::In<Type3> value) {
		__destroy();
		__union_internal_tag = _TAG__Type3;
		new (&_Type3) Type3(value); return *this;
	}
	#line 522 "FirstProgram.adv"
	Union4& operator=(CppAdvance::In<Type4> value) {
		__destroy();
		__union_internal_tag = _TAG__Type4;
		new (&_Type4) Type4(value); return *this;
	}
	#line 518 "FirstProgram.adv"
	public: __self& operator=(const __self& other) { __destroy(); __copy(other); return *this; }
	#line 518 "FirstProgram.adv"
	public: __self& operator=(__self&& other) { __destroy(); __move(std::move(other)); return *this; }
	#line 519 "FirstProgram.adv"
	public: auto GetType1() const { if (__union_internal_tag != _TAG__Type1) throw std::logic_error("Type mismatch in the discriminated union"); return _Type1; }
	#line 520 "FirstProgram.adv"
	public: auto GetType2() const { if (__union_internal_tag != _TAG__Type2) throw std::logic_error("Type mismatch in the discriminated union"); return _Type2; }
	#line 521 "FirstProgram.adv"
	public: auto GetType3() const { if (__union_internal_tag != _TAG__Type3) throw std::logic_error("Type mismatch in the discriminated union"); return _Type3; }
	#line 522 "FirstProgram.adv"
	public: auto GetType4() const { if (__union_internal_tag != _TAG__Type4) throw std::logic_error("Type mismatch in the discriminated union"); return _Type4; }
	#line 9999 "FirstProgram.adv"
	public: template<class __SomeT> bool Is() const noexcept {
		if constexpr (std::is_same_v<__SomeT, Type1>) return __union_internal_tag == _TAG__Type1;
		else if constexpr (std::is_same_v<__SomeT, Type2>) return __union_internal_tag == _TAG__Type2;
		else if constexpr (std::is_same_v<__SomeT, Type3>) return __union_internal_tag == _TAG__Type3;
		else if constexpr (std::is_same_v<__SomeT, Type4>) return __union_internal_tag == _TAG__Type4;
		return false;
	}
	#line 9999 "FirstProgram.adv"
	public: template<class __SomeT> CppAdvance::Nullable<__SomeT> As() const noexcept {
		if constexpr (std::is_same_v<__SomeT, Type1>) { if(__union_internal_tag == _TAG__Type1) return _Type1; }
		else if constexpr (std::is_same_v<__SomeT, Type2>) { if(__union_internal_tag == _TAG__Type2) return _Type2; }
		else if constexpr (std::is_same_v<__SomeT, Type3>) { if(__union_internal_tag == _TAG__Type3) return _Type3; }
		else if constexpr (std::is_same_v<__SomeT, Type4>) { if(__union_internal_tag == _TAG__Type4) return _Type4; }
		else static_assert(false, "Cannot to cast union type Union4 to __SomeT");
		return nullptr;
	}
	#line 9999 "FirstProgram.adv"
	public: template<class __SomeT> bool operator==(const __SomeT& other) const noexcept {
		if constexpr (std::is_same_v<__SomeT, Type1>) return __union_internal_tag == _TAG__Type1 && _Type1 == other;
		else if constexpr (std::is_same_v<__SomeT, Type2>) return __union_internal_tag == _TAG__Type2 && _Type2 == other;
		else if constexpr (std::is_same_v<__SomeT, Type3>) return __union_internal_tag == _TAG__Type3 && _Type3 == other;
		else if constexpr (std::is_same_v<__SomeT, Type4>) return __union_internal_tag == _TAG__Type4 && _Type4 == other;
		return false;
	}
	
};

template<class T1, class T2, class T3, class T4, class T5> class __Class_Union5;
#line 525 "FirstProgram.adv"
template<class T1, class T2, class T3, class T4, class T5> struct Union5 final : public CppAdvance::Union {
	public: using __self = Union5<T1, T2, T3, T4, T5>;
	public: using __class = __Class_Union5<T1, T2, T3, T4, T5>;
	public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
	#line 526 "FirstProgram.adv"
	public: using Type1 = T1; ADV_CHECK_REF_STRUCT("T1", T1);
	#line 527 "FirstProgram.adv"
	public: using Type2 = T2; ADV_CHECK_REF_STRUCT("T2", T2);
	#line 528 "FirstProgram.adv"
	public: using Type3 = T3; ADV_CHECK_REF_STRUCT("T3", T3);
	#line 529 "FirstProgram.adv"
	public: using Type4 = T4; ADV_CHECK_REF_STRUCT("T4", T4);
	#line 530 "FirstProgram.adv"
	public: using Type5 = T5; ADV_CHECK_REF_STRUCT("T5", T5);
	private: union {
		#line 526 "FirstProgram.adv"
		Type1 _Type1;
		#line 527 "FirstProgram.adv"
		Type2 _Type2;
		#line 528 "FirstProgram.adv"
		Type3 _Type3;
		#line 529 "FirstProgram.adv"
		Type4 _Type4;
		#line 530 "FirstProgram.adv"
		Type5 _Type5;
		
	};
	enum : unsigned char {
		_TAG__Type1, _TAG__Type2, _TAG__Type3, _TAG__Type4, _TAG__Type5
	} __union_internal_tag;
	public:
	#line 525 "FirstProgram.adv"
	static constexpr int __variants = 5;
	#line 526 "FirstProgram.adv"
	Union5(CppAdvance::In<Type1> value) : __union_internal_tag{ _TAG__Type1 } { new (&_Type1) Type1(value); }
	#line 527 "FirstProgram.adv"
	Union5(CppAdvance::In<Type2> value) : __union_internal_tag{ _TAG__Type2 } { new (&_Type2) Type2(value); }
	#line 528 "FirstProgram.adv"
	Union5(CppAdvance::In<Type3> value) : __union_internal_tag{ _TAG__Type3 } { new (&_Type3) Type3(value); }
	#line 529 "FirstProgram.adv"
	Union5(CppAdvance::In<Type4> value) : __union_internal_tag{ _TAG__Type4 } { new (&_Type4) Type4(value); }
	#line 530 "FirstProgram.adv"
	Union5(CppAdvance::In<Type5> value) : __union_internal_tag{ _TAG__Type5 } { new (&_Type5) Type5(value); }
	#line 9999 "FirstProgram.adv"
	private: void __copy(const __self& other) {
		__union_internal_tag = other.__union_internal_tag;
		switch (__union_internal_tag) {
			#line 526 "FirstProgram.adv"
			case _TAG__Type1: new (&_Type1) Type1(other._Type1); break;
			#line 527 "FirstProgram.adv"
			case _TAG__Type2: new (&_Type2) Type2(other._Type2); break;
			#line 528 "FirstProgram.adv"
			case _TAG__Type3: new (&_Type3) Type3(other._Type3); break;
			#line 529 "FirstProgram.adv"
			case _TAG__Type4: new (&_Type4) Type4(other._Type4); break;
			#line 530 "FirstProgram.adv"
			case _TAG__Type5: new (&_Type5) Type5(other._Type5); break;
			
		}
	}
	#line 525 "FirstProgram.adv"
	public: Union5(const __self& other) { __copy(other); }
	#line 9999 "FirstProgram.adv"
	private: void __move(__self&& other) {
		__union_internal_tag = other.__union_internal_tag;
		switch (__union_internal_tag) {
			#line 526 "FirstProgram.adv"
			case _TAG__Type1: new (&_Type1) Type1(std::move(other._Type1)); break;
			#line 527 "FirstProgram.adv"
			case _TAG__Type2: new (&_Type2) Type2(std::move(other._Type2)); break;
			#line 528 "FirstProgram.adv"
			case _TAG__Type3: new (&_Type3) Type3(std::move(other._Type3)); break;
			#line 529 "FirstProgram.adv"
			case _TAG__Type4: new (&_Type4) Type4(std::move(other._Type4)); break;
			#line 530 "FirstProgram.adv"
			case _TAG__Type5: new (&_Type5) Type5(std::move(other._Type5)); break;
			
		}
	}
	#line 525 "FirstProgram.adv"
	public: Union5(__self&& other) { __move(std::move(other)); }
	#line 9999 "FirstProgram.adv"
	private: void __destroy() {
		switch (__union_internal_tag) {
			#line 526 "FirstProgram.adv"
			case _TAG__Type1: _Type1.~Type1(); break;
			#line 527 "FirstProgram.adv"
			case _TAG__Type2: _Type2.~Type2(); break;
			#line 528 "FirstProgram.adv"
			case _TAG__Type3: _Type3.~Type3(); break;
			#line 529 "FirstProgram.adv"
			case _TAG__Type4: _Type4.~Type4(); break;
			#line 530 "FirstProgram.adv"
			case _TAG__Type5: _Type5.~Type5(); break;
			
		}
	}
	#line 525 "FirstProgram.adv"
	public: ~Union5() { __destroy(); }
	#line 526 "FirstProgram.adv"
	Union5& operator=(CppAdvance::In<Type1> value) {
		__destroy();
		__union_internal_tag = _TAG__Type1;
		new (&_Type1) Type1(value); return *this;
	}
	#line 527 "FirstProgram.adv"
	Union5& operator=(CppAdvance::In<Type2> value) {
		__destroy();
		__union_internal_tag = _TAG__Type2;
		new (&_Type2) Type2(value); return *this;
	}
	#line 528 "FirstProgram.adv"
	Union5& operator=(CppAdvance::In<Type3> value) {
		__destroy();
		__union_internal_tag = _TAG__Type3;
		new (&_Type3) Type3(value); return *this;
	}
	#line 529 "FirstProgram.adv"
	Union5& operator=(CppAdvance::In<Type4> value) {
		__destroy();
		__union_internal_tag = _TAG__Type4;
		new (&_Type4) Type4(value); return *this;
	}
	#line 530 "FirstProgram.adv"
	Union5& operator=(CppAdvance::In<Type5> value) {
		__destroy();
		__union_internal_tag = _TAG__Type5;
		new (&_Type5) Type5(value); return *this;
	}
	#line 525 "FirstProgram.adv"
	public: __self& operator=(const __self& other) { __destroy(); __copy(other); return *this; }
	#line 525 "FirstProgram.adv"
	public: __self& operator=(__self&& other) { __destroy(); __move(std::move(other)); return *this; }
	#line 526 "FirstProgram.adv"
	public: auto GetType1() const { if (__union_internal_tag != _TAG__Type1) throw std::logic_error("Type mismatch in the discriminated union"); return _Type1; }
	#line 527 "FirstProgram.adv"
	public: auto GetType2() const { if (__union_internal_tag != _TAG__Type2) throw std::logic_error("Type mismatch in the discriminated union"); return _Type2; }
	#line 528 "FirstProgram.adv"
	public: auto GetType3() const { if (__union_internal_tag != _TAG__Type3) throw std::logic_error("Type mismatch in the discriminated union"); return _Type3; }
	#line 529 "FirstProgram.adv"
	public: auto GetType4() const { if (__union_internal_tag != _TAG__Type4) throw std::logic_error("Type mismatch in the discriminated union"); return _Type4; }
	#line 530 "FirstProgram.adv"
	public: auto GetType5() const { if (__union_internal_tag != _TAG__Type5) throw std::logic_error("Type mismatch in the discriminated union"); return _Type5; }
	#line 9999 "FirstProgram.adv"
	public: template<class __SomeT> bool Is() const noexcept {
		if constexpr (std::is_same_v<__SomeT, Type1>) return __union_internal_tag == _TAG__Type1;
		else if constexpr (std::is_same_v<__SomeT, Type2>) return __union_internal_tag == _TAG__Type2;
		else if constexpr (std::is_same_v<__SomeT, Type3>) return __union_internal_tag == _TAG__Type3;
		else if constexpr (std::is_same_v<__SomeT, Type4>) return __union_internal_tag == _TAG__Type4;
		else if constexpr (std::is_same_v<__SomeT, Type5>) return __union_internal_tag == _TAG__Type5;
		return false;
	}
	#line 9999 "FirstProgram.adv"
	public: template<class __SomeT> CppAdvance::Nullable<__SomeT> As() const noexcept {
		if constexpr (std::is_same_v<__SomeT, Type1>) { if(__union_internal_tag == _TAG__Type1) return _Type1; }
		else if constexpr (std::is_same_v<__SomeT, Type2>) { if(__union_internal_tag == _TAG__Type2) return _Type2; }
		else if constexpr (std::is_same_v<__SomeT, Type3>) { if(__union_internal_tag == _TAG__Type3) return _Type3; }
		else if constexpr (std::is_same_v<__SomeT, Type4>) { if(__union_internal_tag == _TAG__Type4) return _Type4; }
		else if constexpr (std::is_same_v<__SomeT, Type5>) { if(__union_internal_tag == _TAG__Type5) return _Type5; }
		else static_assert(false, "Cannot to cast union type Union5 to __SomeT");
		return nullptr;
	}
	#line 9999 "FirstProgram.adv"
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
#line 533 "FirstProgram.adv"
template<class T1, class T2, class T3, class T4, class T5, class T6> struct Union6 final : public CppAdvance::Union {
	public: using __self = Union6<T1, T2, T3, T4, T5, T6>;
	public: using __class = __Class_Union6<T1, T2, T3, T4, T5, T6>;
	public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
	#line 534 "FirstProgram.adv"
	public: using Type1 = T1; ADV_CHECK_REF_STRUCT("T1", T1);
	#line 535 "FirstProgram.adv"
	public: using Type2 = T2; ADV_CHECK_REF_STRUCT("T2", T2);
	#line 536 "FirstProgram.adv"
	public: using Type3 = T3; ADV_CHECK_REF_STRUCT("T3", T3);
	#line 537 "FirstProgram.adv"
	public: using Type4 = T4; ADV_CHECK_REF_STRUCT("T4", T4);
	#line 538 "FirstProgram.adv"
	public: using Type5 = T5; ADV_CHECK_REF_STRUCT("T5", T5);
	#line 539 "FirstProgram.adv"
	public: using Type6 = T6; ADV_CHECK_REF_STRUCT("T6", T6);
	private: union {
		#line 534 "FirstProgram.adv"
		Type1 _Type1;
		#line 535 "FirstProgram.adv"
		Type2 _Type2;
		#line 536 "FirstProgram.adv"
		Type3 _Type3;
		#line 537 "FirstProgram.adv"
		Type4 _Type4;
		#line 538 "FirstProgram.adv"
		Type5 _Type5;
		#line 539 "FirstProgram.adv"
		Type6 _Type6;
		
	};
	enum : unsigned char {
		_TAG__Type1, _TAG__Type2, _TAG__Type3, _TAG__Type4, _TAG__Type5, _TAG__Type6
	} __union_internal_tag;
	public:
	#line 533 "FirstProgram.adv"
	static constexpr int __variants = 6;
	#line 534 "FirstProgram.adv"
	Union6(CppAdvance::In<Type1> value) : __union_internal_tag{ _TAG__Type1 } { new (&_Type1) Type1(value); }
	#line 535 "FirstProgram.adv"
	Union6(CppAdvance::In<Type2> value) : __union_internal_tag{ _TAG__Type2 } { new (&_Type2) Type2(value); }
	#line 536 "FirstProgram.adv"
	Union6(CppAdvance::In<Type3> value) : __union_internal_tag{ _TAG__Type3 } { new (&_Type3) Type3(value); }
	#line 537 "FirstProgram.adv"
	Union6(CppAdvance::In<Type4> value) : __union_internal_tag{ _TAG__Type4 } { new (&_Type4) Type4(value); }
	#line 538 "FirstProgram.adv"
	Union6(CppAdvance::In<Type5> value) : __union_internal_tag{ _TAG__Type5 } { new (&_Type5) Type5(value); }
	#line 539 "FirstProgram.adv"
	Union6(CppAdvance::In<Type6> value) : __union_internal_tag{ _TAG__Type6 } { new (&_Type6) Type6(value); }
	#line 9999 "FirstProgram.adv"
	private: void __copy(const __self& other) {
		__union_internal_tag = other.__union_internal_tag;
		switch (__union_internal_tag) {
			#line 534 "FirstProgram.adv"
			case _TAG__Type1: new (&_Type1) Type1(other._Type1); break;
			#line 535 "FirstProgram.adv"
			case _TAG__Type2: new (&_Type2) Type2(other._Type2); break;
			#line 536 "FirstProgram.adv"
			case _TAG__Type3: new (&_Type3) Type3(other._Type3); break;
			#line 537 "FirstProgram.adv"
			case _TAG__Type4: new (&_Type4) Type4(other._Type4); break;
			#line 538 "FirstProgram.adv"
			case _TAG__Type5: new (&_Type5) Type5(other._Type5); break;
			#line 539 "FirstProgram.adv"
			case _TAG__Type6: new (&_Type6) Type6(other._Type6); break;
			
		}
	}
	#line 533 "FirstProgram.adv"
	public: Union6(const __self& other) { __copy(other); }
	#line 9999 "FirstProgram.adv"
	private: void __move(__self&& other) {
		__union_internal_tag = other.__union_internal_tag;
		switch (__union_internal_tag) {
			#line 534 "FirstProgram.adv"
			case _TAG__Type1: new (&_Type1) Type1(std::move(other._Type1)); break;
			#line 535 "FirstProgram.adv"
			case _TAG__Type2: new (&_Type2) Type2(std::move(other._Type2)); break;
			#line 536 "FirstProgram.adv"
			case _TAG__Type3: new (&_Type3) Type3(std::move(other._Type3)); break;
			#line 537 "FirstProgram.adv"
			case _TAG__Type4: new (&_Type4) Type4(std::move(other._Type4)); break;
			#line 538 "FirstProgram.adv"
			case _TAG__Type5: new (&_Type5) Type5(std::move(other._Type5)); break;
			#line 539 "FirstProgram.adv"
			case _TAG__Type6: new (&_Type6) Type6(std::move(other._Type6)); break;
			
		}
	}
	#line 533 "FirstProgram.adv"
	public: Union6(__self&& other) { __move(std::move(other)); }
	#line 9999 "FirstProgram.adv"
	private: void __destroy() {
		switch (__union_internal_tag) {
			#line 534 "FirstProgram.adv"
			case _TAG__Type1: _Type1.~Type1(); break;
			#line 535 "FirstProgram.adv"
			case _TAG__Type2: _Type2.~Type2(); break;
			#line 536 "FirstProgram.adv"
			case _TAG__Type3: _Type3.~Type3(); break;
			#line 537 "FirstProgram.adv"
			case _TAG__Type4: _Type4.~Type4(); break;
			#line 538 "FirstProgram.adv"
			case _TAG__Type5: _Type5.~Type5(); break;
			#line 539 "FirstProgram.adv"
			case _TAG__Type6: _Type6.~Type6(); break;
			
		}
	}
	#line 533 "FirstProgram.adv"
	public: ~Union6() { __destroy(); }
	#line 534 "FirstProgram.adv"
	Union6& operator=(CppAdvance::In<Type1> value) {
		__destroy();
		__union_internal_tag = _TAG__Type1;
		new (&_Type1) Type1(value); return *this;
	}
	#line 535 "FirstProgram.adv"
	Union6& operator=(CppAdvance::In<Type2> value) {
		__destroy();
		__union_internal_tag = _TAG__Type2;
		new (&_Type2) Type2(value); return *this;
	}
	#line 536 "FirstProgram.adv"
	Union6& operator=(CppAdvance::In<Type3> value) {
		__destroy();
		__union_internal_tag = _TAG__Type3;
		new (&_Type3) Type3(value); return *this;
	}
	#line 537 "FirstProgram.adv"
	Union6& operator=(CppAdvance::In<Type4> value) {
		__destroy();
		__union_internal_tag = _TAG__Type4;
		new (&_Type4) Type4(value); return *this;
	}
	#line 538 "FirstProgram.adv"
	Union6& operator=(CppAdvance::In<Type5> value) {
		__destroy();
		__union_internal_tag = _TAG__Type5;
		new (&_Type5) Type5(value); return *this;
	}
	#line 539 "FirstProgram.adv"
	Union6& operator=(CppAdvance::In<Type6> value) {
		__destroy();
		__union_internal_tag = _TAG__Type6;
		new (&_Type6) Type6(value); return *this;
	}
	#line 533 "FirstProgram.adv"
	public: __self& operator=(const __self& other) { __destroy(); __copy(other); return *this; }
	#line 533 "FirstProgram.adv"
	public: __self& operator=(__self&& other) { __destroy(); __move(std::move(other)); return *this; }
	#line 534 "FirstProgram.adv"
	public: auto GetType1() const { if (__union_internal_tag != _TAG__Type1) throw std::logic_error("Type mismatch in the discriminated union"); return _Type1; }
	#line 535 "FirstProgram.adv"
	public: auto GetType2() const { if (__union_internal_tag != _TAG__Type2) throw std::logic_error("Type mismatch in the discriminated union"); return _Type2; }
	#line 536 "FirstProgram.adv"
	public: auto GetType3() const { if (__union_internal_tag != _TAG__Type3) throw std::logic_error("Type mismatch in the discriminated union"); return _Type3; }
	#line 537 "FirstProgram.adv"
	public: auto GetType4() const { if (__union_internal_tag != _TAG__Type4) throw std::logic_error("Type mismatch in the discriminated union"); return _Type4; }
	#line 538 "FirstProgram.adv"
	public: auto GetType5() const { if (__union_internal_tag != _TAG__Type5) throw std::logic_error("Type mismatch in the discriminated union"); return _Type5; }
	#line 539 "FirstProgram.adv"
	public: auto GetType6() const { if (__union_internal_tag != _TAG__Type6) throw std::logic_error("Type mismatch in the discriminated union"); return _Type6; }
	#line 9999 "FirstProgram.adv"
	public: template<class __SomeT> bool Is() const noexcept {
		if constexpr (std::is_same_v<__SomeT, Type1>) return __union_internal_tag == _TAG__Type1;
		else if constexpr (std::is_same_v<__SomeT, Type2>) return __union_internal_tag == _TAG__Type2;
		else if constexpr (std::is_same_v<__SomeT, Type3>) return __union_internal_tag == _TAG__Type3;
		else if constexpr (std::is_same_v<__SomeT, Type4>) return __union_internal_tag == _TAG__Type4;
		else if constexpr (std::is_same_v<__SomeT, Type5>) return __union_internal_tag == _TAG__Type5;
		else if constexpr (std::is_same_v<__SomeT, Type6>) return __union_internal_tag == _TAG__Type6;
		return false;
	}
	#line 9999 "FirstProgram.adv"
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
	#line 9999 "FirstProgram.adv"
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

#line 603 "FirstProgram.adv"
template<class T> using __extension_603_T = T;
#line 605 "FirstProgram.adv"
template<class T> inline constexpr auto __static_GetSuperCount(CppAdvance::i32 x, CppAdvance::i32 y)  -> const CppAdvance::i32;
#line 604 "FirstProgram.adv"
template<class T> inline constexpr auto __static_getCount3() -> const CppAdvance::i32;

#line 608 "FirstProgram.adv"
using __extension_608_i32 = CppAdvance::i32;
#line 612 "FirstProgram.adv"
[[clang::annotate("UserAttr: AllowPostfix")]] inline constexpr auto _operator_bsl_mul_div(__extension_608_i32 const& __this LIFETIMEBOUND)  -> const CppAdvance::i32;
[[clang::annotate("UserAttr: AllowPostfix")]] inline constexpr auto _operator_bsl_mul_div_postfix(__extension_608_i32 & __this)  -> decltype(auto);
#line 615 "FirstProgram.adv"
[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_bsl_mul_div(__extension_608_i32 const& __this LIFETIMEBOUND, CppAdvance::f32 other)  -> const CppAdvance::f32;
[[clang::annotate("UserAttr: Commutative")]] inline constexpr auto _operator_bsl_mul_div(CppAdvance::f32 other, const __extension_608_i32 & __this)  -> decltype(auto);
#line 609 "FirstProgram.adv"
inline constexpr auto getkm(__extension_608_i32 const& __this ) -> const CppAdvance::i32;

#line 618 "FirstProgram.adv"
using __extension_618_f64 = CppAdvance::f64;
#line 619 "FirstProgram.adv"
inline constexpr auto getkm(__extension_618_f64 const& __this ) -> const CppAdvance::f64;

#line 622 "FirstProgram.adv"
using __extension_622_str = CppAdvance::Str;
#line 623 "FirstProgram.adv"
inline constexpr auto getkm(__extension_622_str const& __this ) -> const CppAdvance::Str;

class __Class_TestStruct;
#line 629 "FirstProgram.adv"
struct alignas((alignof(CppAdvance::i64))) TestStruct final : public CppAdvance::Struct {
	public: using __self = TestStruct;
	public: using __class = __Class_TestStruct;
	public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
	#line 630 "FirstProgram.adv"
	private: CppAdvance::i64 x; ADV_CHECK_REF_STRUCT("i64", CppAdvance::i64);
	#line 631 "FirstProgram.adv"
	private: CppAdvance::i64 y; ADV_CHECK_REF_STRUCT("i64", CppAdvance::i64);
	public: TestStruct(CppAdvance::i64 _x, CppAdvance::i64 _y) : x{_x}, y{_y} {}
	#line 633 "FirstProgram.adv"
	static_assert(CppAdvance::usize(sizeof(CppAdvance::i32)) == CppAdvance::i32(4), "i32 must be 4 bytes");
	template <size_t I> friend auto& get(TestStruct&);
	template <size_t I> friend const auto& get(const TestStruct&);
	
};

template<class T1, class... TArgs> class __Class_GenericStruct;
#line 783 "FirstProgram.adv"
template<class T1, class... TArgs> struct GenericStruct final : public CppAdvance::Struct {
	public: using __self = GenericStruct<T1, TArgs...>;
	public: using __class = __Class_GenericStruct<T1, TArgs...>;
	public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
	#line 785 "FirstProgram.adv"
	public: T1 t1; ADV_CHECK_REF_STRUCT("T1", T1);
	#line 786 "FirstProgram.adv"
	public: std::tuple<TArgs...> t2; ADV_CHECK_REF_STRUCT("(TArgs...)", std::tuple<TArgs...>);
	#line 787 "FirstProgram.adv"
	private: CppAdvance::usize s; ADV_CHECK_REF_STRUCT("usize", CppAdvance::usize);
	public: GenericStruct(T1 _t1, std::tuple<TArgs...> _t2, CppAdvance::usize _s) : t1{_t1}, t2{_t2}, s{_s} {}
	#line 789 "FirstProgram.adv"
	public: [[clang::annotate("varargs:1")]] TESTDLL_API GenericStruct(const T1& t1, TArgs&&... args) ;
	
};


#line 57 "FirstProgram.adv"
class __Class_Vector3 final : public CppAdvance::ValueType
{
	#line 9999 "FirstProgram.adv"
	public: using __underlying = Vector3; using __self = __underlying;
	__self __value;
	using NestedStruct = __self::NestedStruct;
	__Class_Vector3(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
	operator __underlying() const noexcept { return __value; }
	auto getName() const -> CppAdvance::Str { return __value.getName(); }
	auto format() const noexcept -> CppAdvance::Str const { ADV_EXPRESSION_BODY(__value.format()); }
	auto HashCode() const  -> CppAdvance::usize const { ADV_EXPRESSION_BODY(__value.HashCode()); }
	operator CppAdvance::f32() const noexcept { return static_cast<CppAdvance::f32>(__value); }
	auto operator+(const __self& other) const  -> __self const { ADV_EXPRESSION_BODY(__value.operator+(other)); }
	auto operator++() -> __self & { ADV_EXPRESSION_BODY(__value.operator++()); }
	void setAt(CppAdvance::i32 idx, const CppAdvance::f32& value)  { __value.setAt(idx, value); }
	decltype(auto) getAt(CppAdvance::i32 idx)  { return __value._operator_subscript(idx); }
	decltype(auto) getAt(CppAdvance::i32 idx) const  { return __value._operator_subscript(idx); }
	decltype(auto) getAt(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3)  { return __value._operator_subscript(idx, idx2, idx3); }
	decltype(auto) getAt(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3) const  { return __value._operator_subscript(idx, idx2, idx3); }
	auto getX() const  -> CppAdvance::f32 const { ADV_EXPRESSION_BODY(__value.getX()); }
	auto getNext() const  -> Next const { ADV_EXPRESSION_BODY(__value.getNext()); }
	auto Reset() -> void { ADV_EXPRESSION_BODY(__value.Reset()); }
	
};
#line 57 "FirstProgram.adv"
ADV_CHECK_FOR_CONCRETE(Vector3);

#line 178 "FirstProgram.adv"
class __Class_BaseClass : public CppAdvance::Object {
	public: using __self = BaseClass;
	private: using ___super = CppAdvance::Object;
	public: using __selfClass = __Class_BaseClass;
	friend class __self;
	friend class __self::__weak_ref;
	#define ADV_PROPERTY_SELF __selfClass
	public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
	#line 179 "FirstProgram.adv"
	public: inline virtual auto getNext() const  -> const Next;
	
#define ADV_PROPERTY_SELF __self
};

#line 178 "FirstProgram.adv"
ADV_CHECK_FOR_CONCRETE(BaseClass);

#line 182 "FirstProgram.adv"
class ADV_NOVTABLE __Class_VectorClass ADV_ABSTRACT : public CppAdvance::ClassParent<BaseClass> {
	public: using __self = VectorClass;
	private: using ___super = CppAdvance::ClassParent<BaseClass>;
	public: using __selfClass = __Class_VectorClass;
	friend class __self;
	friend class __self::__weak_ref;
	#define ADV_PROPERTY_SELF __selfClass
	public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
	public: using NestedClass = __self::NestedClass;
	#line 191 "FirstProgram.adv"
	private: friend class TestStruct; friend class __Class_TestStruct;
	#line 192 "FirstProgram.adv"
	private: template<class T> friend class TestStruct2; template<class T> friend class __Class_TestStruct2;
	#line 193 "FirstProgram.adv"
	private: friend const CppAdvance::i32 func3(CppAdvance::i32 x);
	#line 185 "FirstProgram.adv"
	public: mutable CppAdvance::f32 x; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
	#line 185 "FirstProgram.adv"
	public: mutable CppAdvance::f32 y; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
	#line 185 "FirstProgram.adv"
	public: mutable CppAdvance::f32 z; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
	#line 214 "FirstProgram.adv"
	public: TESTDLL_API static CppAdvance::i32 Count2; ADV_CHECK_REF_STRUCT("i32", CppAdvance::i32);
	#line 216 "FirstProgram.adv"
	public: TESTDLL_API static const Vector3 ZERO; ADV_CHECK_REF_STRUCT("Vector3", Vector3);
	#line 215 "FirstProgram.adv"
	public: static constexpr auto BYTES = CppAdvance::i32(24);
	#line 217 "FirstProgram.adv"
	public: using Coords = __ntuples::NamedTuple_6893f862d6c49683;
	#line 209 "FirstProgram.adv"
	private: mutable CppAdvance::i32 p_Count; ADV_CHECK_REF_STRUCT("i32", CppAdvance::i32);
	#line 209 "FirstProgram.adv"
	public: virtual auto setCount(const CppAdvance::i32& value) -> __selfClass& = 0;
	#line 209 "FirstProgram.adv"
	public: virtual auto getCount() const  -> CppAdvance::i32 = 0;
	#line 9999 "FirstProgram.adv"
	ADV_PROPERTY_GETTER_SETTER(public, Count, public, getCount, public, setCount, CppAdvance::i32);
	#line 212 "FirstProgram.adv"
	private: mutable CppAdvance::Str p_Name; ADV_CHECK_REF_STRUCT("str", CppAdvance::Str);
	#line 212 "FirstProgram.adv"
	public: virtual auto setName(const CppAdvance::Str& value) -> __selfClass& = 0;
	#line 212 "FirstProgram.adv"
	public: virtual auto getName() const  -> CppAdvance::Str = 0;
	#line 9999 "FirstProgram.adv"
	ADV_PROPERTY_GETTER_SETTER(public, Name, public, getName, public, setName, CppAdvance::Str);
	#line 196 "FirstProgram.adv"
	public: inline constexpr auto format() const noexcept -> const CppAdvance::Str;
	#line 234 "FirstProgram.adv"
	protected: inline constexpr __Class_VectorClass()  = default;
	#line 236 "FirstProgram.adv"
	protected: inline constexpr __Class_VectorClass(CppAdvance::f32 x, CppAdvance::f32 y, CppAdvance::f32 z) noexcept;
	#line 242 "FirstProgram.adv"
	protected: template<class U> inline constexpr explicit __Class_VectorClass(U f) ;
	#line 247 "FirstProgram.adv"
	protected: inline explicit __Class_VectorClass(CppAdvance::In<__self> other) ;
	inline __Class_VectorClass(__selfClass& copy) : __Class_VectorClass(__self(copy)) {}
	#line 251 "FirstProgram.adv"
	public: inline ~__Class_VectorClass() noexcept;
	#line 256 "FirstProgram.adv"
	public: inline explicit operator CppAdvance::f32() const noexcept;
	public: inline CppAdvance::f32& getAt(CppAdvance::i32 idx);
	inline const CppAdvance::f32& getAt(CppAdvance::i32 idx) const;
	#line 288 "FirstProgram.adv"
	public: inline auto _operator_subscript(CppAdvance::i32 idx)  -> CppAdvance::f32& LIFETIMEBOUND;
	public: inline auto _operator_subscript(CppAdvance::i32 idx) const  -> const CppAdvance::f32&;
	public: inline const CppAdvance::f32 getAt(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3);
	inline const CppAdvance::f32 getAt(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3) const;
	#line 289 "FirstProgram.adv"
	public: inline auto _operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3)  -> const CppAdvance::f32;
	public: inline auto _operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3) const  -> const CppAdvance::f32;
	#line 291 "FirstProgram.adv"
	public: virtual auto getX() const  -> const CppAdvance::f32 = 0;
	#line 292 "FirstProgram.adv"
	public: inline virtual auto getNext() const  -> const Next final;
	#line 295 "FirstProgram.adv"
	public: inline constexpr static auto Method(CppAdvance::i32 x, CppAdvance::i32 y, CppAdvance::i32 z)  -> const CppAdvance::i32;
	#line 300 "FirstProgram.adv"
	public: inline constexpr auto Reset() const  -> void;
	#line 308 "FirstProgram.adv"
	public: template<class U> inline constexpr auto TemplateMethod(U x, U y, U z) const  -> const Coords;
	
#define ADV_PROPERTY_SELF __self
};

#line 182 "FirstProgram.adv"
ADV_CHECK_FOR_ABSTRACT(VectorClass);
#line 182 "FirstProgram.adv"
ADV_CHECK_INTERFACE_IMPLEMENTATION(VectorClass, BaseClass, BaseClass, VectorClass);

#line 327 "FirstProgram.adv"
class __Class_ConcreteVectorClass : public CppAdvance::ClassParent<VectorClass> {
	public: using __self = ConcreteVectorClass;
	private: using ___super = CppAdvance::ClassParent<VectorClass>;
	public: using __selfClass = __Class_ConcreteVectorClass;
	friend class __self;
	friend class __self::__weak_ref;
	#define ADV_PROPERTY_SELF __selfClass
	public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
	#line 338 "FirstProgram.adv"
	private: mutable CppAdvance::Str p_Name = CppAdvance::Str{u"ConcreteVectorClass"}; ADV_CHECK_REF_STRUCT("str", CppAdvance::Str);
	#line 338 "FirstProgram.adv"
	public: inline auto setName(const CppAdvance::Str& value) -> __selfClass&;
	#line 338 "FirstProgram.adv"
	public: inline auto getName() const  -> CppAdvance::Str;
	#line 9999 "FirstProgram.adv"
	ADV_PROPERTY_GETTER_SETTER(public, Name, public, getName, public, setName, CppAdvance::Str);
	#line 340 "FirstProgram.adv"
	private: mutable CppAdvance::i32 p_ZZ = CppAdvance::i32(5); ADV_CHECK_REF_STRUCT("i32", CppAdvance::i32);
	#line 340 "FirstProgram.adv"
	public: inline auto setZZ(const CppAdvance::i32& value) -> __selfClass&;
	#line 340 "FirstProgram.adv"
	public: inline auto getZZ() const  -> CppAdvance::i32;
	#line 9999 "FirstProgram.adv"
	ADV_PROPERTY_GETTER_SETTER(public, ZZ, public, getZZ, public, setZZ, CppAdvance::i32);
	#line 342 "FirstProgram.adv"
	private: mutable CppAdvance::i32 p_Count = CppAdvance::i32(1); ADV_CHECK_REF_STRUCT("i32", CppAdvance::i32);
	#line 347 "FirstProgram.adv"
	private: TESTDLL_API virtual auto setCount(const CppAdvance::i32& value) -> __selfClass& final;
	#line 343 "FirstProgram.adv"
	public: TESTDLL_API virtual auto getCount() const  -> CppAdvance::i32 final;
	#line 9999 "FirstProgram.adv"
	ADV_PROPERTY_GETTER_SETTER(public, Count, public, getCount, private, setCount, CppAdvance::i32);
	#line 354 "FirstProgram.adv"
	public: inline constexpr auto getCount123() const  -> CppAdvance::i32;
	#line 9999 "FirstProgram.adv"
	ADV_PROPERTY_GETTER(public, Count123, getCount123, CppAdvance::i32);
	#line 328 "FirstProgram.adv"
	public: inline constexpr __Class_ConcreteVectorClass()  = default;
	#line 330 "FirstProgram.adv"
	public: inline constexpr __Class_ConcreteVectorClass(CppAdvance::f32 x, CppAdvance::f32 y, CppAdvance::f32 z) noexcept;
	#line 334 "FirstProgram.adv"
	public: inline constexpr  __Class_ConcreteVectorClass(CppAdvance::i32 i) noexcept;
	#line 356 "FirstProgram.adv"
	public: inline virtual auto getX() const  -> const CppAdvance::f32 final;
	#line 358 "FirstProgram.adv"
	public: inline auto operator+(const ConcreteVectorClass& other) const  -> const ConcreteVectorClass;
	#line 359 "FirstProgram.adv"
	public: inline auto GetMagicNumber(CppAdvance::In<VectorClass> i) const  -> const CppAdvance::f32;
	#line 361 "FirstProgram.adv"
	public: inline auto operator==(CppAdvance::In<__self> other) const  -> const bool;
	
#define ADV_PROPERTY_SELF __self
};

#line 327 "FirstProgram.adv"
ADV_CHECK_FOR_CONCRETE(ConcreteVectorClass);
#line 327 "FirstProgram.adv"
ADV_CHECK_INTERFACE_IMPLEMENTATION(ConcreteVectorClass, VectorClass, VectorClass, ConcreteVectorClass);

#line 369 "FirstProgram.adv"
class __Class_Next : public CppAdvance::Object {
	public: using __self = Next;
	private: using ___super = CppAdvance::Object;
	public: using __selfClass = __Class_Next;
	friend class __self;
	friend class __self::__weak_ref;
	#define ADV_PROPERTY_SELF __selfClass
	public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
	#line 370 "FirstProgram.adv"
	public: mutable CppAdvance::i32 i; ADV_CHECK_REF_STRUCT("i32", CppAdvance::i32);
	#line 371 "FirstProgram.adv"
	public: mutable CppAdvance::Nullable<Next>::__weak_ref v;
	#line 373 "FirstProgram.adv"
	public: inline __Class_Next()  = default;
	#line 375 "FirstProgram.adv"
	public: inline ~__Class_Next() ;
	#line 377 "FirstProgram.adv"
	public: inline explicit __Class_Next(CppAdvance::i32 i) ;
	#line 382 "FirstProgram.adv"
	public: inline explicit __Class_Next(CppAdvance::In<__self> other) ;
	inline __Class_Next(__selfClass& copy) : __Class_Next(__self(copy)) {}
	#line 386 "FirstProgram.adv"
	public: inline auto operator*() const  -> const CppAdvance::i32;
	#line 388 "FirstProgram.adv"
	public: inline auto printNext() const  -> void;
	
#define ADV_PROPERTY_SELF __self
};

#line 369 "FirstProgram.adv"
ADV_CHECK_FOR_CONCRETE(Next);


#line 421 "FirstProgram.adv"
class __Class_DayOfWeek final : public CppAdvance::ValueType
{
	#line 9999 "FirstProgram.adv"
	public: using __underlying = DayOfWeek; using __self = __underlying;
	__self __value;
	__Class_DayOfWeek(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
	operator __underlying() const noexcept { return __value; }
	
};
#line 421 "FirstProgram.adv"
ADV_CHECK_FOR_CONCRETE(DayOfWeek);


#line 432 "FirstProgram.adv"
class __Class_Options final : public CppAdvance::ValueType
{
	#line 9999 "FirstProgram.adv"
	public: using __underlying = Options; using __self = __underlying;
	__self __value;
	__Class_Options(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
	operator __underlying() const noexcept { return __value; }
	auto getIsWeekend() const -> bool { return __value.getIsWeekend(); }
	
};
#line 432 "FirstProgram.adv"
ADV_CHECK_FOR_CONCRETE(Options);


#line 447 "FirstProgram.adv"
class __Class_Text final : public CppAdvance::ValueType
{
	#line 9999 "FirstProgram.adv"
	public: using __underlying = Text; using __self = __underlying;
	__self __value;
	__Class_Text(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
	operator __underlying() const noexcept { return __value; }
	auto ToShortString() const  -> CppAdvance::Str const { ADV_EXPRESSION_BODY(__value.ToShortString()); }
	
};
#line 447 "FirstProgram.adv"
ADV_CHECK_FOR_CONCRETE(Text);

#line 462 "FirstProgram.adv"
class __Class_ComplexVariant final : public CppAdvance::EnumClass {
	public: using __self = ComplexVariant;
	private: using ___super = CppAdvance::EnumClass;
	public: using __selfClass = __Class_ComplexVariant;
	friend class __self;
	friend class __self::__weak_ref;
	#define ADV_PROPERTY_SELF __selfClass
	public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
	#line 469 "FirstProgram.adv"
	public: const CppAdvance::i32 i; ADV_CHECK_REF_STRUCT("i32", CppAdvance::i32);
	#line 470 "FirstProgram.adv"
	public: const CppAdvance::f32 f; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
	#line 471 "FirstProgram.adv"
	public: const CppAdvance::Str s; ADV_CHECK_REF_STRUCT("str", CppAdvance::Str);
	private: __Class_ComplexVariant(CppAdvance::i32 _i, CppAdvance::f32 _f, CppAdvance::Str _s) : i{_i}, f{_f}, s{_s} {}
	#line 463 "FirstProgram.adv"
	public: static TESTDLL_API const __self Value1;
	#line 464 "FirstProgram.adv"
	public: static TESTDLL_API const __self Value2;
	#line 465 "FirstProgram.adv"
	public: static TESTDLL_API const __self Value3;
	#line 466 "FirstProgram.adv"
	public: static TESTDLL_API const __self Value4;
	#line 462 "FirstProgram.adv"
	private: static TESTDLL_API const __self __values[];
	#line 462 "FirstProgram.adv"
	public: static std::span<const __self> GetValues() noexcept { return { __values, 4 }; }
	#line 462 "FirstProgram.adv"
	public: static constexpr int __variants = 4;
	#line 483 "FirstProgram.adv"
	public: inline constexpr auto getCount123() const  -> CppAdvance::i32;
	#line 9999 "FirstProgram.adv"
	ADV_PROPERTY_GETTER(public, Count123, getCount123, CppAdvance::i32);
	#line 485 "FirstProgram.adv"
	public: inline constexpr static auto getCount10()  -> CppAdvance::i32;
	#line 9999 "FirstProgram.adv"
	ADV_PROPERTY_GETTER_STATIC(public, TESTDLL_API, Count10, getCount10, CppAdvance::i32);
	#line 474 "FirstProgram.adv"
	public: inline auto operator*() const  -> const CppAdvance::i32;
	#line 476 "FirstProgram.adv"
	public: inline auto printVariant() const  -> void;
	#line 481 "FirstProgram.adv"
	public: inline auto GetMagicNumber(CppAdvance::In<VectorClass> f) const  -> const CppAdvance::f32;
	
#define ADV_PROPERTY_SELF __self
};

#line 462 "FirstProgram.adv"
ADV_CHECK_FOR_CONCRETE(ComplexVariant);


#line 488 "FirstProgram.adv"
class __Class_Media final : public CppAdvance::ValueType
{
	#line 488 "FirstProgram.adv"
	ADV_CHECK_INTERFACE(IMagicNumber, IMagicNumber);
	#line 9999 "FirstProgram.adv"
	public: using __underlying = Media; using __self = __underlying;
	__self __value;
	__Class_Media(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
	operator __underlying() const noexcept { return __value; }
	auto getCount123() const -> CppAdvance::i32 { return __value.getCount123(); }
	auto printVariant() const  -> void { ADV_EXPRESSION_BODY(__value.printVariant()); }
	auto GetMagicNumber(CppAdvance::In<VectorClass> f) const  -> CppAdvance::f32 const { ADV_EXPRESSION_BODY(__value.GetMagicNumber(f)); }
	
};
#line 488 "FirstProgram.adv"
ADV_CHECK_FOR_CONCRETE(Media);
#line 488 "FirstProgram.adv"
ADV_CHECK_INTERFACE_IMPLEMENTATION(Media, IMagicNumber, IMagicNumber, Media);


#line 507 "FirstProgram.adv"
template<class T1, class T2> class __Class_Union2 final : public CppAdvance::ValueType
{
	#line 9999 "FirstProgram.adv"
	public: using __underlying = Union2<T1, T2>; using __self = __underlying;
	__self __value;
	__Class_Union2(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
	operator __underlying() const noexcept { return __value; }
	
};


#line 512 "FirstProgram.adv"
template<class T1, class T2, class T3> class __Class_Union3 final : public CppAdvance::ValueType
{
	#line 9999 "FirstProgram.adv"
	public: using __underlying = Union3<T1, T2, T3>; using __self = __underlying;
	__self __value;
	__Class_Union3(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
	operator __underlying() const noexcept { return __value; }
	
};


#line 518 "FirstProgram.adv"
template<class T1, class T2, class T3, class T4> class __Class_Union4 final : public CppAdvance::ValueType
{
	#line 9999 "FirstProgram.adv"
	public: using __underlying = Union4<T1, T2, T3, T4>; using __self = __underlying;
	__self __value;
	__Class_Union4(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
	operator __underlying() const noexcept { return __value; }
	
};


#line 525 "FirstProgram.adv"
template<class T1, class T2, class T3, class T4, class T5> class __Class_Union5 final : public CppAdvance::ValueType
{
	#line 9999 "FirstProgram.adv"
	public: using __underlying = Union5<T1, T2, T3, T4, T5>; using __self = __underlying;
	__self __value;
	__Class_Union5(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
	operator __underlying() const noexcept { return __value; }
	
};


#line 533 "FirstProgram.adv"
template<class T1, class T2, class T3, class T4, class T5, class T6> class __Class_Union6 final : public CppAdvance::ValueType
{
	#line 9999 "FirstProgram.adv"
	public: using __underlying = Union6<T1, T2, T3, T4, T5, T6>; using __self = __underlying;
	__self __value;
	__Class_Union6(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
	operator __underlying() const noexcept { return __value; }
	
};


#line 629 "FirstProgram.adv"
class __Class_TestStruct final : public CppAdvance::ValueType
{
	#line 9999 "FirstProgram.adv"
	public: using __underlying = TestStruct; using __self = __underlying;
	__self __value;
	__Class_TestStruct(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
	operator __underlying() const noexcept { return __value; }
	
};
#line 629 "FirstProgram.adv"
ADV_CHECK_FOR_CONCRETE(TestStruct);


#line 783 "FirstProgram.adv"
template<class T1, class... TArgs> class __Class_GenericStruct final : public CppAdvance::ValueType
{
	#line 9999 "FirstProgram.adv"
	public: using __underlying = GenericStruct<T1, TArgs...>; using __self = __underlying;
	__self __value;
	__Class_GenericStruct(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
	operator __underlying() const noexcept { return __value; }
	
};

namespace __ntuples {
	#line 9999 "FirstProgram.adv"
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
namespace std {
	template <> struct tuple_size<__ntuples::NamedTuple_4e7be1ed49b09d71> : integral_constant<size_t, 3> {};
	template <> struct tuple_element<0, __ntuples::NamedTuple_4e7be1ed49b09d71> { using type = CppAdvance::i32; };
	template <> struct tuple_element<1, __ntuples::NamedTuple_4e7be1ed49b09d71> { using type = CppAdvance::f64; };
	template <> struct tuple_element<2, __ntuples::NamedTuple_4e7be1ed49b09d71> { using type = CppAdvance::Str; };
	
}
namespace __ntuples {
	#line 9999 "FirstProgram.adv"
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
namespace std {
	template <> struct tuple_size<__ntuples::NamedTuple_6893f862d6c49683> : integral_constant<size_t, 3> {};
	template <> struct tuple_element<0, __ntuples::NamedTuple_6893f862d6c49683> { using type = CppAdvance::i32; };
	template <> struct tuple_element<1, __ntuples::NamedTuple_6893f862d6c49683> { using type = CppAdvance::i32; };
	template <> struct tuple_element<2, __ntuples::NamedTuple_6893f862d6c49683> { using type = CppAdvance::i32; };
	
}
//###############################################################################
//# Free function declarations
//###############################################################################
#line 19 "FirstProgram.adv"
inline constexpr auto square(auto a)  -> decltype(auto);
#line 21 "FirstProgram.adv"
[[clang::annotate("varargs:1")]] TESTDLL_HIDDEN auto printParams(CppAdvance::Str s, std::initializer_list<CppAdvance::i32> params)  -> void;
#line 28 "FirstProgram.adv"
[[clang::annotate("varargs:1")]] TESTDLL_HIDDEN auto printParams(CppAdvance::Str s, std::initializer_list<CppAdvance::Str> params)  -> void;
#line 46 "FirstProgram.adv"
template<class T, int32_t U> auto sum(T a, T b)  -> decltype(auto);
#line 47 "FirstProgram.adv"
template<> inline constexpr auto sum<CppAdvance::i32, CppAdvance::i32(15)>(CppAdvance::i32 a, CppAdvance::i32 b)  -> decltype(auto);
#line 69 "FirstProgram.adv"
inline auto func4(CppAdvance::i32 x)  -> const CppAdvance::i32;
#line 367 "FirstProgram.adv"
inline auto _operator_subscript(CppAdvance::In<VectorClass> vec, CppAdvance::f32 x, CppAdvance::f32 y)  -> const CppAdvance::f32;
#line 626 "FirstProgram.adv"
inline auto getSum(CppAdvance::In<VectorClass> vec)  -> const CppAdvance::f32;
#line 636 "FirstProgram.adv"
inline constexpr auto testInt(CppAdvance::i32 i)  -> const CppAdvance::i32;
#line 638 "FirstProgram.adv"
inline auto printSuck()  -> decltype(auto);
#line 798 "FirstProgram.adv"
template<class... TArgs> inline auto printf(CppAdvance::In<CppAdvance::Str> fmt, TArgs&&... args)  -> decltype(auto);
//###############################################################################
//# Global compile-time constants
//###############################################################################
#if (_DEBUG)
#line 14 "FirstProgram.adv"
template<class T> inline constexpr T NORMAL_CONSTANT = CppAdvance::i32(45);
#endif 
#if (_DEBUG)
#line 15 "FirstProgram.adv"
inline constexpr auto INT_CONSTANT = NORMAL_CONSTANT<CppAdvance::i32>;
#endif 
#if (_DEBUG)
#line 16 "FirstProgram.adv"
inline constexpr auto LONG_CONSTANT = NORMAL_CONSTANT<CppAdvance::i64>;
#endif 
#line 772 "FirstProgram.adv"
template<class T> inline constexpr bool IS_VOID = !std::is_base_of_v<CppAdvance::ObjectRef, T> || std::is_base_of_v<CppAdvance::FuncBase, T> || std::convertible_to<T, CppAdvance::i32> || !CppAdvance::TypeIs<T, VectorClass> || CppAdvance::TypeIs<T, IInterface>;
//###############################################################################
//# Global variable declarations
//###############################################################################
#line 2 "FirstProgram.adv"
[[clang::annotate("unsafe")]] extern TESTDLL_HIDDEN volatile CppAdvance::Unsafe::__VolatileRawPtr<const CppAdvance::char16> globalVar;
#line 3 "FirstProgram.adv"
[[clang::annotate("unsafe")]] extern TESTDLL_HIDDEN const CppAdvance::Unsafe::__RawPtr<CppAdvance::i32> globalVar1;
//###############################################################################
//# Function definitions
//###############################################################################

#line 19 "FirstProgram.adv"
inline constexpr auto square(auto a)  -> decltype(auto)
{
	#line 19 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(a * a); 
}
#line 47 "FirstProgram.adv"
template<> inline constexpr auto sum<CppAdvance::i32, CppAdvance::i32(15)>(CppAdvance::i32 a, CppAdvance::i32 b)  -> decltype(auto)
{
	#line 47 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(a + b + CppAdvance::i32(15)); 
}
#line 54 "FirstProgram.adv"
inline Span::~Span() noexcept
{
	#line 54 "FirstProgram.adv"
	print(CppAdvance::Str{u"Span deiniting"}); 
}
#line 69 "FirstProgram.adv"
inline auto func4(CppAdvance::i32 x)  -> const CppAdvance::i32
{
	#line 70 "FirstProgram.adv"
	return CppAdvance::i32(0);
}
#line 74 "FirstProgram.adv"
inline constexpr auto Vector3::format() const noexcept -> const CppAdvance::Str
{
	#line 74 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(CppAdvance::Str{u"test"}); 
}
#line 75 "FirstProgram.adv"
inline constexpr auto Vector3::HashCode() const  -> const CppAdvance::usize
{
	#line 75 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(CppAdvance::u32(654321U)); 
}
#line 90 "FirstProgram.adv"
inline constexpr auto Vector3::getName() const  -> CppAdvance::Str 
{
	#line 90 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(CppAdvance::Str{u"Vector3"}); 
}

#line 102 "FirstProgram.adv"
inline constexpr auto Vector3::__Class_NestedStruct::count(CppAdvance::i32 i)  -> const CppAdvance::i32
{
	#line 102 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(i * CppAdvance::i32(10)); 
}
#line 109 "FirstProgram.adv"
template<class U> inline constexpr Vector3::Vector3(U f)  :
#line 110 "FirstProgram.adv"
Vector3(f, f, f)
{
	#line 111 "FirstProgram.adv"
	this->x = f;
}
#line 114 "FirstProgram.adv"
inline Vector3::~Vector3() noexcept
{
	#line 114 "FirstProgram.adv"
	print(CppAdvance::Str{u"Vector3 deiniting"}); 
}
#line 116 "FirstProgram.adv"
inline constexpr Vector3::operator CppAdvance::f32() const noexcept
{
	#line 116 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(y); 
}
#line 118 "FirstProgram.adv"
inline auto Vector3::operator+(const __self& other) const  -> const __self
{
	#line 118 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(__self{ADV_UPCS(x)((*this).__ref()) + ADV_UPCS(x)(other.__ref()), ADV_UPCS(y)((*this).__ref()) + ADV_UPCS(y)(other.__ref()), ADV_UPCS(z)((*this).__ref()) + ADV_UPCS(z)(other.__ref())}); 
}
#line 120 "FirstProgram.adv"
inline auto Vector3::operator++()  -> __self&
{
	#line 121 "FirstProgram.adv"
	++x;
	#line 122 "FirstProgram.adv"
	++y;
	#line 123 "FirstProgram.adv"
	++z;
	#line 124 "FirstProgram.adv"
	++Count;
	#line 127 "FirstProgram.adv"
	return (*this);
}
#line 120 "FirstProgram.adv"
inline auto Vector3::operator++(int)  -> __self { auto copy = CppAdvance::New<__self>(__self(*this)); ++(*this); return copy; }
#line 130 "FirstProgram.adv"
auto Vector3::_operator_subscript(CppAdvance::i32 idx)  -> __IndexerAccessor_130<CppAdvance::f32>
{
	return __IndexerAccessor_130<CppAdvance::f32>{ *this, idx };
}

#line 130 "FirstProgram.adv"
auto Vector3::_operator_subscript(CppAdvance::i32 idx)  const  -> const __IndexerAccessor_130<CppAdvance::f32>
{
	return __IndexerAccessor_130<CppAdvance::f32>{ *this, idx };
}

#line 130 "FirstProgram.adv"
auto Vector3::getAt(CppAdvance::i32 idx)  -> const CppAdvance::f32
{
	#line 132 "FirstProgram.adv"
	print(CppAdvance::Str{u"Read"});
	#line 133 "FirstProgram.adv"
	return x;
}
#line 130 "FirstProgram.adv"
auto Vector3::getAt(CppAdvance::i32 idx) const  -> const CppAdvance::f32
{
	#line 132 "FirstProgram.adv"
	print(CppAdvance::Str{u"Read"});
	#line 133 "FirstProgram.adv"
	return x;
}
#line 135 "FirstProgram.adv"
auto Vector3::setAt(CppAdvance::i32 idx, const CppAdvance::f32& value)  -> void 
{
	#line 136 "FirstProgram.adv"
	if (value < CppAdvance::i32(10)) {
		#line 136 "FirstProgram.adv"
		return ;
	}
	#line 137 "FirstProgram.adv"
	x = CppAdvance::i32(5);
}
#line 140 "FirstProgram.adv"
inline constexpr auto Vector3::_operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3)  -> const CppAdvance::f32
{
	#line 140 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(y + z); 
}
#line 140 "FirstProgram.adv"
inline constexpr auto Vector3::_operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3)  const  -> const CppAdvance::f32
{
	#line 140 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(y + z); 
}
#line 140 "FirstProgram.adv"
inline constexpr auto Vector3::getAt(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3)  -> const CppAdvance::f32 { return _operator_subscript(idx, idx2, idx3); }
#line 140 "FirstProgram.adv"
inline constexpr auto Vector3::getAt(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3) const  -> const CppAdvance::f32 { return _operator_subscript(idx, idx2, idx3); }
#line 142 "FirstProgram.adv"
inline constexpr auto Vector3::getX() const  -> const CppAdvance::f32
{
	#line 142 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(x); 
}
#line 143 "FirstProgram.adv"
inline auto Vector3::getNext() const  -> const Next
{
	#line 143 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(CppAdvance::New<Next>(CppAdvance::i32(6))); 
}
#line 146 "FirstProgram.adv"
inline constexpr auto Vector3::Method(CppAdvance::i32 x, CppAdvance::i32 y, CppAdvance::i32 z)  -> const CppAdvance::i32
{
	#line 147 "FirstProgram.adv"
	return y + z;
}
#line 152 "FirstProgram.adv"
inline constexpr auto Vector3::Reset()  -> void
{
	#line 153 "FirstProgram.adv"
	x = CppAdvance::i32(0);
	#line 154 "FirstProgram.adv"
	y = CppAdvance::i32(0);
	#line 155 "FirstProgram.adv"
	z = CppAdvance::i32(0);
}
#line 160 "FirstProgram.adv"
template<class U> inline constexpr auto Vector3::TemplateMethod(U x, U y, U z)  -> const typename Vector3::Coords
{
	#line 161 "FirstProgram.adv"
	class __Class_LocalStruct;
	#line 161 "FirstProgram.adv"
	struct LocalStruct : public CppAdvance::Struct
	{
		public: using __self = LocalStruct;
		public: using __class = __Class_LocalStruct;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 162 "FirstProgram.adv"
		#line 162 "FirstProgram.adv"
		public: CppAdvance::f32 x{}; 
		#line 162 "FirstProgram.adv"
		public: CppAdvance::f32 y{}; 
		#line 162 "FirstProgram.adv"
		public: CppAdvance::f32 z{}; 
		
		
	};
	#line 161 "FirstProgram.adv"
	class __Class_LocalStruct : public CppAdvance::ValueType
	{
		#line 9999 "FirstProgram.adv"
		LocalStruct __value;
		public: using __underlying = LocalStruct; using __self = __underlying;
		__Class_LocalStruct(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
		operator __underlying() const noexcept { return __value; }
		
	};
	#line 171 "FirstProgram.adv"
	ADV_UFCS(_operator_subscript)((*this).__ref(), CppAdvance::i32(0)) = CppAdvance::i32(13);
	#line 173 "FirstProgram.adv"
	return { x, y, z };
}
#line 179 "FirstProgram.adv"
inline auto __Class_BaseClass::getNext() const  -> const Next
{
	#line 179 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(CppAdvance::New<Next>(CppAdvance::i32(5))); 
}
#line 196 "FirstProgram.adv"
inline constexpr auto __Class_VectorClass::format() const noexcept -> const CppAdvance::Str
{
	#line 196 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(CppAdvance::Str{u"test"}); 
}
#line 225 "FirstProgram.adv"
inline constexpr VectorClass::__Class_NestedClass::__Class_NestedClass(CppAdvance::f32 x, CppAdvance::f32 y, CppAdvance::f32 z) noexcept : 
#line 226 "FirstProgram.adv"
x{x}, 
#line 227 "FirstProgram.adv"
y{y}, 
#line 228 "FirstProgram.adv"
z{z}
{
}
#line 230 "FirstProgram.adv"
inline constexpr auto VectorClass::__Class_NestedClass::count(CppAdvance::i32 i)  -> const CppAdvance::i32
{
	#line 230 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(i * CppAdvance::i32(10)); 
}
#line 236 "FirstProgram.adv"
inline constexpr __Class_VectorClass::__Class_VectorClass(CppAdvance::f32 x, CppAdvance::f32 y, CppAdvance::f32 z) noexcept : 
#line 237 "FirstProgram.adv"
x{x}, 
#line 238 "FirstProgram.adv"
y{y}, 
#line 239 "FirstProgram.adv"
z{z}
{
}
#line 242 "FirstProgram.adv"
template<class U> inline constexpr __Class_VectorClass::__Class_VectorClass(U f)  :
#line 243 "FirstProgram.adv"
__Class_VectorClass(f, f, f)
{
	#line 244 "FirstProgram.adv"
	this->x = f;
}
#line 247 "FirstProgram.adv"
inline __Class_VectorClass::__Class_VectorClass(CppAdvance::In<__self> other)  :
#line 248 "FirstProgram.adv"
__Class_VectorClass(ADV_UPCS_NONLOCAL(x)(other.__ref()), ADV_UPCS_NONLOCAL(y)(other.__ref()), ADV_UPCS_NONLOCAL(z)(other.__ref()))
{
}
#line 251 "FirstProgram.adv"
inline __Class_VectorClass::~__Class_VectorClass() noexcept
{
	#line 251 "FirstProgram.adv"
	print(CppAdvance::Str{u"VectorClass deiniting"}); 
}
#line 256 "FirstProgram.adv"
inline __Class_VectorClass::operator CppAdvance::f32() const noexcept
{
	#line 256 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(y); 
}
#line 288 "FirstProgram.adv"
inline auto __Class_VectorClass::_operator_subscript(CppAdvance::i32 idx)  -> CppAdvance::f32&
{
	#line 288 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(x); 
}
#line 288 "FirstProgram.adv"
inline auto __Class_VectorClass::_operator_subscript(CppAdvance::i32 idx)  const  -> const CppAdvance::f32&
{
	#line 288 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(x); 
}
#line 288 "FirstProgram.adv"
inline auto __Class_VectorClass::getAt(CppAdvance::i32 idx)  -> CppAdvance::f32& { return _operator_subscript(idx); }
#line 288 "FirstProgram.adv"
inline auto __Class_VectorClass::getAt(CppAdvance::i32 idx) const  -> const CppAdvance::f32& { return _operator_subscript(idx); }
#line 289 "FirstProgram.adv"
inline auto __Class_VectorClass::_operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3)  -> const CppAdvance::f32
{
	#line 289 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(y + z); 
}
#line 289 "FirstProgram.adv"
inline auto __Class_VectorClass::_operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3)  const  -> const CppAdvance::f32
{
	#line 289 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(y + z); 
}
#line 289 "FirstProgram.adv"
inline auto __Class_VectorClass::getAt(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3)  -> const CppAdvance::f32 { return _operator_subscript(idx, idx2, idx3); }
#line 289 "FirstProgram.adv"
inline auto __Class_VectorClass::getAt(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3) const  -> const CppAdvance::f32 { return _operator_subscript(idx, idx2, idx3); }
#line 292 "FirstProgram.adv"
inline auto __Class_VectorClass::getNext() const  -> const Next
{
	#line 292 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(___super::getNext()); 
}
#line 295 "FirstProgram.adv"
inline constexpr auto __Class_VectorClass::Method(CppAdvance::i32 x, CppAdvance::i32 y, CppAdvance::i32 z)  -> const CppAdvance::i32
{
	#line 296 "FirstProgram.adv"
	return y + z;
}
#line 300 "FirstProgram.adv"
inline constexpr auto __Class_VectorClass::Reset() const  -> void
{
	#line 301 "FirstProgram.adv"
	x = CppAdvance::i32(0);
	#line 302 "FirstProgram.adv"
	y = CppAdvance::i32(0);
	#line 303 "FirstProgram.adv"
	z = CppAdvance::i32(0);
}
#line 308 "FirstProgram.adv"
template<class U> inline constexpr auto __Class_VectorClass::TemplateMethod(U x, U y, U z) const  -> const typename __Class_VectorClass::Coords
{
	#line 309 "FirstProgram.adv"
	class __Class_LocalStruct;
	#line 309 "FirstProgram.adv"
	struct LocalStruct : public CppAdvance::Struct
	{
		public: using __self = LocalStruct;
		public: using __class = __Class_LocalStruct;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 310 "FirstProgram.adv"
		#line 310 "FirstProgram.adv"
		public: CppAdvance::f32 x{}; 
		#line 310 "FirstProgram.adv"
		public: CppAdvance::f32 y{}; 
		#line 310 "FirstProgram.adv"
		public: CppAdvance::f32 z{}; 
		
		
	};
	#line 309 "FirstProgram.adv"
	class __Class_LocalStruct : public CppAdvance::ValueType
	{
		#line 9999 "FirstProgram.adv"
		LocalStruct __value;
		public: using __underlying = LocalStruct; using __self = __underlying;
		__Class_LocalStruct(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
		operator __underlying() const noexcept { return __value; }
		
	};
	#line 319 "FirstProgram.adv"
	ADV_UFCS(_operator_subscript)((*this).__ref(), CppAdvance::i32(0)) = CppAdvance::i32(13);
	#line 321 "FirstProgram.adv"
	return { x, y, z };
}
#line 330 "FirstProgram.adv"
inline constexpr __Class_ConcreteVectorClass::__Class_ConcreteVectorClass(CppAdvance::f32 x, CppAdvance::f32 y, CppAdvance::f32 z) noexcept :
#line 331 "FirstProgram.adv"
___super(x, y, z)
{
}
#line 334 "FirstProgram.adv"
inline constexpr __Class_ConcreteVectorClass::__Class_ConcreteVectorClass(CppAdvance::i32 i) noexcept :
#line 335 "FirstProgram.adv"
___super(CppAdvance::f32{i}, CppAdvance::f32{i}, CppAdvance::f32{i})
{
}
#line 338 "FirstProgram.adv"
inline auto __Class_ConcreteVectorClass::setName(const CppAdvance::Str& value) -> __selfClass& { p_Name = value; return *this;}
#line 338 "FirstProgram.adv"
inline auto __Class_ConcreteVectorClass::getName() const  -> CppAdvance::Str { return p_Name; }

#line 340 "FirstProgram.adv"
inline auto __Class_ConcreteVectorClass::setZZ(const CppAdvance::i32& value) -> __selfClass& { p_ZZ = value; return *this;}
#line 340 "FirstProgram.adv"
inline auto __Class_ConcreteVectorClass::getZZ() const  -> CppAdvance::i32 { return p_ZZ; }

#line 354 "FirstProgram.adv"
inline constexpr auto __Class_ConcreteVectorClass::getCount123() const  -> CppAdvance::i32 
{
	#line 354 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(CppAdvance::i32(1500)); 
}

#line 356 "FirstProgram.adv"
inline auto __Class_ConcreteVectorClass::getX() const  -> const CppAdvance::f32
{
	#line 356 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(x); 
}
#line 358 "FirstProgram.adv"
inline auto __Class_ConcreteVectorClass::operator+(const ConcreteVectorClass& other) const  -> const ConcreteVectorClass
{
	#line 358 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(CppAdvance::New<ConcreteVectorClass>(ADV_UPCS(x)((*this).__ref()) + ADV_UPCS(x)(other.__ref()), ADV_UPCS(y)((*this).__ref()) + ADV_UPCS(y)(other.__ref()), ADV_UPCS(z)((*this).__ref()) + ADV_UPCS(z)(other.__ref()))); 
}
#line 359 "FirstProgram.adv"
inline auto __Class_ConcreteVectorClass::GetMagicNumber(CppAdvance::In<VectorClass> i) const  -> const CppAdvance::f32
{
	#line 359 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(ADV_UPCS(x)((*this).__ref()) * ADV_UPCS(x)(i.__ref())); 
}
#line 361 "FirstProgram.adv"
inline auto __Class_ConcreteVectorClass::operator==(CppAdvance::In<__self> other) const  -> const bool
{
	#line 361 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(x == ADV_UPCS(x)(other.__ref()) && y == ADV_UPCS(y)(other.__ref()) && z == ADV_UPCS(z)(other.__ref())); 
}
#line 367 "FirstProgram.adv"
inline auto _operator_subscript(CppAdvance::In<VectorClass> vec, CppAdvance::f32 x, CppAdvance::f32 y)  -> const CppAdvance::f32
{
	#line 367 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(ADV_UPCS(x)(vec.__ref()) * x + ADV_UPCS(y)(vec.__ref()) * y); 
}
#line 375 "FirstProgram.adv"
inline __Class_Next::~__Class_Next() 
{
	#line 375 "FirstProgram.adv"
	print(CppAdvance::Str{u"Next deiniting"}); 
}
#line 377 "FirstProgram.adv"
inline __Class_Next::__Class_Next(CppAdvance::i32 i)  : 
#line 378 "FirstProgram.adv"
i{i}
{
}
#line 382 "FirstProgram.adv"
inline __Class_Next::__Class_Next(CppAdvance::In<__self> other)  : 
#line 383 "FirstProgram.adv"
i{CppAdvance::i32(0)}
{
}
#line 386 "FirstProgram.adv"
inline auto __Class_Next::operator*() const  -> const CppAdvance::i32
{
	#line 386 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(i); 
}
#line 388 "FirstProgram.adv"
inline auto __Class_Next::printNext() const  -> void
{
	#line 389 "FirstProgram.adv"
	auto func2 = [__this = __self::__weak_ref(*this)] (CppAdvance::i32 x, CppAdvance::i32 y) -> const CppAdvance::i32 
	{
		#line 389 "FirstProgram.adv"
		auto j = x * y * ADV_UPCS(i)((*(__this)).__ref()); 
		#line 389 "FirstProgram.adv"
		return j * CppAdvance::i32(2);
	}; 
	#line 390 "FirstProgram.adv"
	print(CppAdvance::Str{u"This is printNext function in optional chaining call"});
	#line 391 "FirstProgram.adv"
	print(func2(CppAdvance::i32(3), CppAdvance::i32(4)));
}
#line 445 "FirstProgram.adv"
inline auto Options::getIsWeekend() const  -> bool 
{
	#line 445 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(ADV_UFCS(HasFlag)(Weekend.__ref(), (*this))); 
}

#line 456 "FirstProgram.adv"
inline auto Text::ToShortString() const  -> const CppAdvance::Str
{
	#line 457 "FirstProgram.adv"
	return Value;
}
#line 474 "FirstProgram.adv"
inline auto __Class_ComplexVariant::operator*() const  -> const CppAdvance::i32
{
	#line 474 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(i); 
}
#line 476 "FirstProgram.adv"
inline auto __Class_ComplexVariant::printVariant() const  -> void
{
	#line 477 "FirstProgram.adv"
	print(CppAdvance::Str{u"This is printVariant function in optional chaining call"});
	#line 478 "FirstProgram.adv"
	print(s);
}
#line 481 "FirstProgram.adv"
inline auto __Class_ComplexVariant::GetMagicNumber(CppAdvance::In<VectorClass> f) const  -> const CppAdvance::f32
{
	#line 481 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(ADV_UPCS(f)((*this).__ref()) * ADV_UPCS(x)(f.__ref())); 
}
#line 483 "FirstProgram.adv"
inline constexpr auto __Class_ComplexVariant::getCount123() const  -> CppAdvance::i32 
{
	#line 483 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(CppAdvance::i32(1234567890)); 
}

#line 485 "FirstProgram.adv"
inline constexpr auto __Class_ComplexVariant::getCount10()  -> CppAdvance::i32 
{
	#line 485 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(CppAdvance::i32(12345)); 
}

#line 626 "FirstProgram.adv"
inline auto getSum(CppAdvance::In<VectorClass> vec)  -> const CppAdvance::f32
{
	#line 626 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(ADV_UPCS(x)(vec.__ref()) + ADV_UPCS(y)(vec.__ref()) + ADV_UPCS(z)(vec.__ref())); 
}
#line 636 "FirstProgram.adv"
inline constexpr auto testInt(CppAdvance::i32 i)  -> const CppAdvance::i32
{
	#line 636 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(i * CppAdvance::i32(2)); 
}
#line 638 "FirstProgram.adv"
inline auto printSuck()  -> decltype(auto)
{
	#line 638 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(print(CppAdvance::Str{u"Suck my dick"})); 
}
#line 789 "FirstProgram.adv"
template<class T1, class... TArgs> GenericStruct<T1, TArgs...>::GenericStruct(const T1& t1, TArgs&&... args)  : 
#line 791 "FirstProgram.adv"
t1{t1}, 
#line 792 "FirstProgram.adv"
t2{std::forward<decltype(args)>(args)...}, 
#line 793 "FirstProgram.adv"
s{CppAdvance::usize(sizeof...(TArgs))}
{
	#line 794 "FirstProgram.adv"
	print(s);
}
#line 798 "FirstProgram.adv"
template<class... TArgs> inline auto printf(CppAdvance::In<CppAdvance::Str> fmt, TArgs&&... args)  -> decltype(auto)
{
	#line 798 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(std::printf(fmt, std::forward<decltype(args)>(args)...)); 
}
#line 9999 "FirstProgram.adv"

#line 9999 "FirstProgram.adv"
inline Vector3::NestedStruct::ADV_CLASS_STRONG_CTOR_REF(NestedStruct)
inline Vector3::NestedStruct& Vector3::NestedStruct::ADV_CLASS_STRONG_ASSIGN_REF(NestedStruct)
inline Vector3::NestedStruct__Unowned::ADV_CLASS_UNOWNED_CTOR_REF(NestedStruct__Unowned)
inline Vector3::NestedStruct__Unowned& Vector3::NestedStruct__Unowned::ADV_CLASS_UNOWNED_ASSIGN_REF(NestedStruct__Unowned)
inline Vector3::NestedStruct__Weak::ADV_CLASS_WEAK_CTOR_REF(NestedStruct__Weak)
inline Vector3::NestedStruct__Weak& Vector3::NestedStruct__Weak::ADV_CLASS_WEAK_ASSIGN_REF(NestedStruct__Weak)
#line 102 "FirstProgram.adv"
inline constexpr decltype(auto) Vector3::NestedStruct::count(CppAdvance::i32 i){ ADV_EXPRESSION_BODY(__class::count(i)); }

#line 9999 "FirstProgram.adv"
inline BaseClass::ADV_CLASS_DEFAULT_CTOR(BaseClass)
inline BaseClass::ADV_CLASS_STRONG_CTOR_REF(BaseClass)
inline BaseClass& BaseClass::ADV_CLASS_STRONG_ASSIGN_REF(BaseClass)
inline BaseClass__Unowned::ADV_CLASS_UNOWNED_CTOR_REF(BaseClass__Unowned)
inline BaseClass__Unowned& BaseClass__Unowned::ADV_CLASS_UNOWNED_ASSIGN_REF(BaseClass__Unowned)
inline BaseClass__Weak::ADV_CLASS_WEAK_CTOR_REF(BaseClass__Weak)
inline BaseClass__Weak& BaseClass__Weak::ADV_CLASS_WEAK_ASSIGN_REF(BaseClass__Weak)

#line 9999 "FirstProgram.adv"
inline VectorClass::NestedClass::ADV_CLASS_STRONG_CTOR_REF(NestedClass)
inline VectorClass::NestedClass& VectorClass::NestedClass::ADV_CLASS_STRONG_ASSIGN_REF(NestedClass)
inline VectorClass::NestedClass__Unowned::ADV_CLASS_UNOWNED_CTOR_REF(NestedClass__Unowned)
inline VectorClass::NestedClass__Unowned& VectorClass::NestedClass__Unowned::ADV_CLASS_UNOWNED_ASSIGN_REF(NestedClass__Unowned)
inline VectorClass::NestedClass__Weak::ADV_CLASS_WEAK_CTOR_REF(NestedClass__Weak)
inline VectorClass::NestedClass__Weak& VectorClass::NestedClass__Weak::ADV_CLASS_WEAK_ASSIGN_REF(NestedClass__Weak)
#line 230 "FirstProgram.adv"
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
#line 256 "FirstProgram.adv"
inline VectorClass::operator CppAdvance::f32() const noexcept{ ADV_EXPRESSION_BODY(__ref().operator CppAdvance::f32()); }
inline VectorClass__Unowned::operator CppAdvance::f32() const noexcept{ ADV_EXPRESSION_BODY(__ref().operator CppAdvance::f32()); }
#line 288 "FirstProgram.adv"
inline decltype(auto) VectorClass::_operator_subscript(CppAdvance::i32 idx) const  LIFETIMEBOUND{ ADV_EXPRESSION_BODY(__ref()._operator_subscript(idx)); }
inline decltype(auto) VectorClass__Unowned::_operator_subscript(CppAdvance::i32 idx) const  LIFETIMEBOUND{ ADV_EXPRESSION_BODY(__ref()._operator_subscript(idx)); }
#line 289 "FirstProgram.adv"
inline decltype(auto) VectorClass::_operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3) const { ADV_EXPRESSION_BODY(__ref()._operator_subscript(idx, idx2, idx3)); }
inline decltype(auto) VectorClass__Unowned::_operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3) const { ADV_EXPRESSION_BODY(__ref()._operator_subscript(idx, idx2, idx3)); }
#line 295 "FirstProgram.adv"
inline constexpr decltype(auto) VectorClass::Method(CppAdvance::i32 x, CppAdvance::i32 y, CppAdvance::i32 z){ ADV_EXPRESSION_BODY(__class::Method(x, y, z)); }

#line 9999 "FirstProgram.adv"
inline ConcreteVectorClass::ADV_CLASS_DEFAULT_CTOR(ConcreteVectorClass)
inline ConcreteVectorClass::ADV_CLASS_STRONG_CTOR_REF(ConcreteVectorClass)
inline ConcreteVectorClass& ConcreteVectorClass::ADV_CLASS_STRONG_ASSIGN_REF(ConcreteVectorClass)
inline ConcreteVectorClass__Unowned::ADV_CLASS_UNOWNED_CTOR_REF(ConcreteVectorClass__Unowned)
inline ConcreteVectorClass__Unowned& ConcreteVectorClass__Unowned::ADV_CLASS_UNOWNED_ASSIGN_REF(ConcreteVectorClass__Unowned)
inline ConcreteVectorClass__Weak::ADV_CLASS_WEAK_CTOR_REF(ConcreteVectorClass__Weak)
inline ConcreteVectorClass__Weak& ConcreteVectorClass__Weak::ADV_CLASS_WEAK_ASSIGN_REF(ConcreteVectorClass__Weak)
#line 334 "FirstProgram.adv"
inline ConcreteVectorClass::ConcreteVectorClass(CppAdvance::i32 i)noexcept : ___super(new (::operator new(sizeof(__class))) __class(i)) {}
#line 358 "FirstProgram.adv"
inline decltype(auto) ConcreteVectorClass::operator+(const ConcreteVectorClass& other) const { ADV_EXPRESSION_BODY(__ref().operator+(other)); }
inline decltype(auto) ConcreteVectorClass__Unowned::operator+(const ConcreteVectorClass& other) const { ADV_EXPRESSION_BODY(__ref().operator+(other)); }
#line 361 "FirstProgram.adv"
inline decltype(auto) ConcreteVectorClass::operator==(CppAdvance::In<__self> other) const { ADV_EXPRESSION_BODY(__ref().operator==(other)); }
inline decltype(auto) ConcreteVectorClass__Unowned::operator==(CppAdvance::In<__self> other) const { ADV_EXPRESSION_BODY(__ref().operator==(other)); }

#line 9999 "FirstProgram.adv"
inline Next::ADV_CLASS_DEFAULT_CTOR(Next)
inline Next::ADV_CLASS_STRONG_CTOR_REF(Next)
inline Next& Next::ADV_CLASS_STRONG_ASSIGN_REF(Next)
inline Next__Unowned::ADV_CLASS_UNOWNED_CTOR_REF(Next__Unowned)
inline Next__Unowned& Next__Unowned::ADV_CLASS_UNOWNED_ASSIGN_REF(Next__Unowned)
inline Next__Weak::ADV_CLASS_WEAK_CTOR_REF(Next__Weak)
inline Next__Weak& Next__Weak::ADV_CLASS_WEAK_ASSIGN_REF(Next__Weak)
#line 386 "FirstProgram.adv"
inline decltype(auto) Next::operator*() const { ADV_EXPRESSION_BODY(__ref().operator*()); }
inline decltype(auto) Next__Unowned::operator*() const { ADV_EXPRESSION_BODY(__ref().operator*()); }

#line 396 "FirstProgram.adv"
inline constexpr auto TestInt(__extension_395_Next const& __this LIFETIMEBOUND, CppAdvance::i32 j)  -> const CppAdvance::i32
{
	#line 396 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(ADV_UPCS(i)(__this.__ref()) + j * CppAdvance::i32(2)); 
}

#line 9999 "FirstProgram.adv"

#line 9999 "FirstProgram.adv"

#line 9999 "FirstProgram.adv"

inline const CppAdvance::f32 IInterface::__default_DefaultMethod(CppAdvance::In<VectorClass> f) const 
{
	#line 412 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(ADV_UFCS(GetMagicNumber)((*this).__ref(), f)); 
}
inline const CppAdvance::i32 IInterface::SomeStaticMethod(CppAdvance::i32 i) 
{
	#line 418 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(i * CppAdvance::i32(123)); 
}
#line 9999 "FirstProgram.adv"

#line 9999 "FirstProgram.adv"

#line 9999 "FirstProgram.adv"

#line 9999 "FirstProgram.adv"

#line 9999 "FirstProgram.adv"
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
#line 474 "FirstProgram.adv"
inline decltype(auto) ComplexVariant::operator*() const { ADV_EXPRESSION_BODY(__ref().operator*()); }
inline decltype(auto) ComplexVariant__Unowned::operator*() const { ADV_EXPRESSION_BODY(__ref().operator*()); }

#line 9999 "FirstProgram.adv"

#line 9999 "FirstProgram.adv"

#line 9999 "FirstProgram.adv"

#line 9999 "FirstProgram.adv"

#line 9999 "FirstProgram.adv"

#line 9999 "FirstProgram.adv"

#line 605 "FirstProgram.adv"
template<class T> inline constexpr auto __static_GetSuperCount(CppAdvance::i32 x, CppAdvance::i32 y)  -> const CppAdvance::i32
{
	#line 605 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(x * y + x + y); 
}

#line 604 "FirstProgram.adv"
template<class T> inline constexpr auto __static_getCount3() -> const CppAdvance::i32
{
	#line 604 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(CppAdvance::i32(333)); 
}
#line 9999 "FirstProgram.adv"

#line 612 "FirstProgram.adv"
inline constexpr auto _operator_bsl_mul_div(__extension_608_i32 const& __this LIFETIMEBOUND)  -> const CppAdvance::i32
{
	#line 612 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(__this / CppAdvance::i32(2)); 
}
inline constexpr auto _operator_bsl_mul_div_postfix(__extension_608_i32 & __this)  -> decltype(auto) { auto copy = __this; ADV_UFCS(_operator_bsl_mul_div)(__this); return copy; }

#line 615 "FirstProgram.adv"
inline constexpr auto _operator_bsl_mul_div(__extension_608_i32 const& __this LIFETIMEBOUND, CppAdvance::f32 other)  -> const CppAdvance::f32
{
	#line 615 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(CppAdvance::f32{__this} * other * CppAdvance::i32(2)); 
}
inline constexpr auto _operator_bsl_mul_div(CppAdvance::f32 other, const __extension_608_i32 & __this)  -> decltype(auto) { return ADV_UFCS(_operator_bsl_mul_div)(__this, other); }

#line 609 "FirstProgram.adv"
inline constexpr auto getkm(__extension_608_i32 const& __this ) -> const CppAdvance::i32
{
	#line 609 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(__this * CppAdvance::i32(1000)); 
}
#line 9999 "FirstProgram.adv"

#line 619 "FirstProgram.adv"
inline constexpr auto getkm(__extension_618_f64 const& __this ) -> const CppAdvance::f64
{
	#line 619 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(__this * CppAdvance::f32(1000.0f)); 
}
#line 9999 "FirstProgram.adv"

#line 623 "FirstProgram.adv"
inline constexpr auto getkm(__extension_622_str const& __this ) -> const CppAdvance::Str
{
	#line 623 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(CppAdvance::Str{u"1000km"}); 
}
#line 9999 "FirstProgram.adv"

#line 9999 "FirstProgram.adv"

#line 9999 "FirstProgram.adv"

