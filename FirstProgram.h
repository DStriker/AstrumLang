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
namespace __ntuples { class NamedTuple_146d1fee4bfecdc3; } 
class Utils;
class Utils2;
namespace __ntuples { class NamedTuple_4e7be1ed49b09d71; } 
namespace __ntuples { class NamedTuple_6893f862d6c49683; } 
namespace __ntuples { class NamedTuple_6893f862d6c49683; } 
namespace __ntuples { class NamedTuple_146d1fee4bfecdc3; } 
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
//###############################################################################
//# Type definitions
//###############################################################################
class Span;
#line 50 "FirstProgram.adv"
struct [[clang::annotate("ref_struct")]] Span final : public CppAdvance::RefStruct {
	private: using __self = Span;
	public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
	#line 52 "FirstProgram.adv"
	public: CppAdvance::f32 & data;
	#line 53 "FirstProgram.adv"
	public: CppAdvance::i32 length;
	
};
class __Class_Vector3;
#line 56 "FirstProgram.adv"
struct Vector3 final : public CppAdvance::Struct {
	private: using __self = Vector3;
	public: using __class = __Class_Vector3;
	public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
	public: 
	class NestedStruct; class NestedStruct__Unowned; class NestedStruct__Weak; class __Class_NestedStruct;
	#line 95 "FirstProgram.adv"
	class NestedStruct : public CppAdvance::ObjectRef {
		private: using __self = NestedStruct;
		private: using ___super = CppAdvance::ObjectRef;
		public: using __class = __Class_NestedStruct;
		private: friend class NestedStruct__Unowned;
		friend class NestedStruct__Weak;
		public: using __strong_ref = NestedStruct;
		public: using __unowned_ref = NestedStruct__Unowned;
		public: using __weak_ref = NestedStruct__Weak;
		public: FORCE_INLINE decltype(auto) __ref() const noexcept { return *reinterpret_cast<__class*>(_obj); }
		ADV_CLASS_FROM_PTR(NestedStruct)
		ADV_CLASS_INIT(NestedStruct)
		ADV_CLASS_STRONG_COMMON_CTORS(NestedStruct)
		#define ADV_PROPERTY_SELF __class
		#line 100 "FirstProgram.adv"
		public: inline constexpr static decltype(auto) count(CppAdvance::i32 i) ;
		#define ADV_PROPERTY_SELF __self
	};
	#line 95 "FirstProgram.adv"
	class NestedStruct__Unowned : public CppAdvance::ObjectRef__Unowned {
		private: using __self = NestedStruct;
		public: using __strong_ref = NestedStruct;
		public: using __unowned_ref = NestedStruct__Unowned;
		public: using __weak_ref = NestedStruct__Weak;
		private: using ___super = CppAdvance::ObjectRef__Unowned;
		public: using __class = __Class_NestedStruct;
		public: FORCE_INLINE decltype(auto) __ref() const noexcept { CppAdvance::UnownedCheck(_obj); return *reinterpret_cast<__class*>(_obj); }
		ADV_CLASS_FROM_PTR(NestedStruct__Unowned)
		ADV_CLASS_UNOWNED_COMMON_CTORS(NestedStruct__Unowned)
		
	};
	#line 95 "FirstProgram.adv"
	class NestedStruct__Weak : public CppAdvance::ObjectRef__Weak {
		private: using __self = NestedStruct;
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
	#line 95 "FirstProgram.adv"
	class __Class_NestedStruct : public CppAdvance::Object {
		private: using __self = NestedStruct;
		private: using ___super = CppAdvance::Object;
		private: using __selfClass = __Class_NestedStruct;
		friend class __self;
		friend class __self::__weak_ref;
		#define ADV_PROPERTY_SELF __selfClass
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 97 "FirstProgram.adv"
		public: CppAdvance::f32 x; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
		#line 98 "FirstProgram.adv"
		public: CppAdvance::f32 y; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
		#line 99 "FirstProgram.adv"
		public: CppAdvance::f32 z; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
		#line 100 "FirstProgram.adv"
		public: inline constexpr static auto count(CppAdvance::i32 i)  -> CppAdvance::i32;
		
#define ADV_PROPERTY_SELF __self
	};
	#line 95 "FirstProgram.adv"
	ADV_CHECK_FOR_CONCRETE(NestedStruct);
	
	#line 65 "FirstProgram.adv"
	private: friend class TestStruct; friend class __Class_TestStruct;
	#line 66 "FirstProgram.adv"
	private: template<class T> friend class TestStruct2; template<class T> friend class __Class_TestStruct2;
	#line 67 "FirstProgram.adv"
	private: friend CppAdvance::i32 func3(CppAdvance::i32 x);
	#line 68 "FirstProgram.adv"
	private: friend CppAdvance::i32 func4(CppAdvance::i32 x);
	#line 59 "FirstProgram.adv"
	public: CppAdvance::f32 x; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
	#line 59 "FirstProgram.adv"
	public: CppAdvance::f32 y; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
	#line 59 "FirstProgram.adv"
	public: CppAdvance::f32 z; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
	#line 90 "FirstProgram.adv"
	private: static thread_local CppAdvance::i32 Count2; ADV_CHECK_REF_STRUCT("i32", CppAdvance::i32);
	#line 92 "FirstProgram.adv"
	public: TESTDLL_API static const Vector3 ZERO;
	public: constexpr Vector3(CppAdvance::f32 _x, CppAdvance::f32 _y, CppAdvance::f32 _z) : x{_x}, y{_y}, z{_z} {}
	#line 91 "FirstProgram.adv"
	public: static constexpr auto BYTES = CppAdvance::i32(24);
	#line 93 "FirstProgram.adv"
	private: using Coords = __ntuples::NamedTuple_6893f862d6c49683;
	#line 76 "FirstProgram.adv"
	private: static CppAdvance::i32 p_Count; ADV_CHECK_REF_STRUCT("i32", CppAdvance::i32);
	#line 81 "FirstProgram.adv"
	public: TESTDLL_API static auto setCount(const CppAdvance::i32& value) -> void;
	#line 77 "FirstProgram.adv"
	public: TESTDLL_API static auto getCount()  -> CppAdvance::i32;
	#line 9999 "FirstProgram.adv"
	ADV_PROPERTY_GETTER_SETTER_STATIC(public, TESTDLL_API, Count, public, getCount, public, setCount, CppAdvance::i32);
	#line 88 "FirstProgram.adv"
	public: inline constexpr auto getName() const  -> CppAdvance::Str;
	#line 9999 "FirstProgram.adv"
	ADV_PROPERTY_GETTER(public, Name, getName, CppAdvance::Str);
	#line 72 "FirstProgram.adv"
	public: inline constexpr auto Equals(const IEquatable& other) const noexcept -> bool;
	#line 73 "FirstProgram.adv"
	public: inline constexpr auto format() const noexcept -> CppAdvance::Str;
	#line 74 "FirstProgram.adv"
	public: inline constexpr auto HashCode() const  -> CppAdvance::usize;
	#line 104 "FirstProgram.adv"
	public: inline constexpr Vector3()  = default;
	#line 106 "FirstProgram.adv"
	public: template<class U> inline constexpr  Vector3(U f) ;
	#line 111 "FirstProgram.adv"
	public: inline constexpr  operator CppAdvance::f32() const noexcept;
	#line 113 "FirstProgram.adv"
	public: inline constexpr auto operator+(const __self& other) const  -> decltype(auto);
	#line 115 "FirstProgram.adv"
	public: inline auto operator++()  -> __self& LIFETIMEBOUND;
	public: inline auto operator++(int)  -> Vector3;
	#line 9999 "FirstProgram.adv"
	private: template<class __IdxT = CppAdvance::f32> struct __IndexerAccessor_125 {
		private:
		Vector3& _parent;
		CppAdvance::i32 _idx;
		 friend class Vector3;
		public:
		FORCE_INLINE __IndexerAccessor_125(Vector3& parent, CppAdvance::i32 idx) : _parent(parent), _idx(idx) {}
		FORCE_INLINE __IndexerAccessor_125(Vector3 const& parent, CppAdvance::i32 idx) : _parent(const_cast<std::remove_cvref_t<decltype(parent)>&>(parent)), _idx(idx) {}
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
		template<class _ElemRight> FORCE_INLINE decltype(auto) operator[](_ElemRight&& other) requires requires(__IdxT t, _ElemRight u) { t[u];} { return __ref()[std::forward<_ElemRight>(other)]; }
		template<class _ElemRight> FORCE_INLINE decltype(auto) operator[](_ElemRight&& other) const requires requires(__IdxT t, _ElemRight u) { t[u];} { return __ref()[std::forward<_ElemRight>(other)]; }
		template<class... Args> FORCE_INLINE decltype(auto) operator()(Args&&... other) { return __ref()(std::forward<Args>(other)...); }
		template<class... Args> FORCE_INLINE decltype(auto) operator()(Args&&... other) const { return __ref()(std::forward<Args>(other)...); }
		template<class Ch> friend FORCE_INLINE decltype(auto) operator<<(std::basic_ostream<Ch>& stream, const __IndexerAccessor_125<__IdxT>& elem) { return stream << elem.__ref(); }
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

	friend struct __IndexerAccessor_125<CppAdvance::f32>;
	inline CppAdvance::f32 getAt(CppAdvance::i32 idx);
	inline const CppAdvance::f32 getAt(CppAdvance::i32 idx) const;
	inline void setAt(CppAdvance::i32 idx, const CppAdvance::f32& value);
	#line 125 "FirstProgram.adv"
	public: inline auto operator[](CppAdvance::i32 idx)  -> __IndexerAccessor_125<CppAdvance::f32>;
	public: inline auto operator[](CppAdvance::i32 idx) const  -> const __IndexerAccessor_125<CppAdvance::f32>;
	#line 135 "FirstProgram.adv"
	public: inline constexpr auto _operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3)  -> CppAdvance::f32;
	public: inline constexpr auto _operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3) const  -> const CppAdvance::f32;
	#line 137 "FirstProgram.adv"
	public: inline constexpr auto getX() const  -> CppAdvance::f32;
	#line 138 "FirstProgram.adv"
	public: inline auto getNext() const  -> Next;
	#line 141 "FirstProgram.adv"
	public: inline constexpr static auto Method(CppAdvance::i32 x, CppAdvance::i32 y, CppAdvance::i32 z)  -> CppAdvance::i32;
	#line 147 "FirstProgram.adv"
	public: template<class U> inline constexpr auto TemplateMethod(U x, U y, U z)  -> Coords;
	
};
template<> inline constexpr bool CppAdvance::__details::cheapCopy<BaseClass> = false;
#line 165 "FirstProgram.adv"
class BaseClass : public CppAdvance::ObjectRef {
	private: using __self = BaseClass;
	private: using ___super = CppAdvance::ObjectRef;
	public: using __class = __Class_BaseClass;
	private: friend class BaseClass__Unowned;
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
#line 165 "FirstProgram.adv"
class BaseClass__Unowned : public CppAdvance::ObjectRef__Unowned {
	private: using __self = BaseClass;
	public: using __strong_ref = BaseClass;
	public: using __unowned_ref = BaseClass__Unowned;
	public: using __weak_ref = BaseClass__Weak;
	private: using ___super = CppAdvance::ObjectRef__Unowned;
	public: using __class = __Class_BaseClass;
	public: FORCE_INLINE decltype(auto) __ref() const noexcept { CppAdvance::UnownedCheck(_obj); return *reinterpret_cast<__class*>(_obj); }
	ADV_CLASS_FROM_PTR(BaseClass__Unowned)
	ADV_CLASS_UNOWNED_COMMON_CTORS(BaseClass__Unowned)
	
};
#line 165 "FirstProgram.adv"
class BaseClass__Weak : public CppAdvance::ObjectRef__Weak {
	private: using __self = BaseClass;
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

template<> inline constexpr bool CppAdvance::__details::cheapCopy<VectorClass> = false;
#line 169 "FirstProgram.adv"
class VectorClass : public CppAdvance::ClassRefParent<BaseClass> {
	private: using __self = VectorClass;
	private: using ___super = CppAdvance::ClassRefParent<BaseClass>;
	public: using __class = __Class_VectorClass;
	private: friend class VectorClass__Unowned;
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
	#line 206 "FirstProgram.adv"
	class NestedClass : public CppAdvance::ObjectRef {
		private: using __self = NestedClass;
		private: using ___super = CppAdvance::ObjectRef;
		public: using __class = __Class_NestedClass;
		private: friend class NestedClass__Unowned;
		friend class NestedClass__Weak;
		public: using __strong_ref = NestedClass;
		public: using __unowned_ref = NestedClass__Unowned;
		public: using __weak_ref = NestedClass__Weak;
		public: FORCE_INLINE decltype(auto) __ref() const noexcept { return *reinterpret_cast<__class*>(_obj); }
		ADV_CLASS_FROM_PTR(NestedClass)
		ADV_CLASS_INIT(NestedClass)
		ADV_CLASS_STRONG_COMMON_CTORS(NestedClass)
		#define ADV_PROPERTY_SELF __class
		#line 217 "FirstProgram.adv"
		public: inline constexpr static decltype(auto) count(CppAdvance::i32 i) ;
		#define ADV_PROPERTY_SELF __self
	};
	#line 206 "FirstProgram.adv"
	class NestedClass__Unowned : public CppAdvance::ObjectRef__Unowned {
		private: using __self = NestedClass;
		public: using __strong_ref = NestedClass;
		public: using __unowned_ref = NestedClass__Unowned;
		public: using __weak_ref = NestedClass__Weak;
		private: using ___super = CppAdvance::ObjectRef__Unowned;
		public: using __class = __Class_NestedClass;
		public: FORCE_INLINE decltype(auto) __ref() const noexcept { CppAdvance::UnownedCheck(_obj); return *reinterpret_cast<__class*>(_obj); }
		ADV_CLASS_FROM_PTR(NestedClass__Unowned)
		ADV_CLASS_UNOWNED_COMMON_CTORS(NestedClass__Unowned)
		
	};
	#line 206 "FirstProgram.adv"
	class NestedClass__Weak : public CppAdvance::ObjectRef__Weak {
		private: using __self = NestedClass;
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
	#line 206 "FirstProgram.adv"
	class __Class_NestedClass : public CppAdvance::Object {
		private: using __self = NestedClass;
		private: using ___super = CppAdvance::Object;
		private: using __selfClass = __Class_NestedClass;
		friend class __self;
		friend class __self::__weak_ref;
		#define ADV_PROPERTY_SELF __selfClass
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 208 "FirstProgram.adv"
		public: CppAdvance::f32 x; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
		#line 209 "FirstProgram.adv"
		public: CppAdvance::f32 y; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
		#line 210 "FirstProgram.adv"
		public: CppAdvance::f32 z; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
		#line 212 "FirstProgram.adv"
		public: inline constexpr __Class_NestedClass(CppAdvance::f32 x, CppAdvance::f32 y, CppAdvance::f32 z) noexcept;
		#line 217 "FirstProgram.adv"
		public: inline constexpr static auto count(CppAdvance::i32 i)  -> CppAdvance::i32;
		
#define ADV_PROPERTY_SELF __self
	};
	#line 206 "FirstProgram.adv"
	ADV_CHECK_FOR_CONCRETE(NestedClass);
	
	public: static decltype(auto) getCount2();
	static void setCount2(const CppAdvance::i32& value);
	ADV_PROPERTY_GETTER_SETTER_STATIC(public, TESTDLL_API, Count2, public, getCount2, public, setCount2, CppAdvance::i32);
	public: static decltype(auto) getZERO();
	ADV_PROPERTY_GETTER_STATIC(public, TESTDLL_API, ZERO, getZERO, Vector3);
	#define ADV_PROPERTY_SELF __class
	#line 243 "FirstProgram.adv"
	public: inline  operator CppAdvance::f32() const noexcept;
	#line 265 "FirstProgram.adv"
	public: inline decltype(auto) operator[](CppAdvance::i32 idx) const ;
	#line 275 "FirstProgram.adv"
	public: inline decltype(auto) _operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3) const ;
	#line 281 "FirstProgram.adv"
	public: inline constexpr static decltype(auto) Method(CppAdvance::i32 x, CppAdvance::i32 y, CppAdvance::i32 z) ;
	public: static constexpr decltype(auto) BYTES = CppAdvance::i32(24);
	public: using Coords = __ntuples::NamedTuple_6893f862d6c49683;
	friend class TestStruct;
	friend class __Class_TestStruct;
	template<class T> friend class TestStruct2;
	template<class T> friend class __Class_TestStruct2;
	friend CppAdvance::i32 func3(CppAdvance::i32 x);
	#define ADV_PROPERTY_SELF __self
};
#line 169 "FirstProgram.adv"
class VectorClass__Unowned : public CppAdvance::ClassRefParentUnowned<BaseClass> {
	private: using __self = VectorClass;
	public: using __strong_ref = VectorClass;
	public: using __unowned_ref = VectorClass__Unowned;
	public: using __weak_ref = VectorClass__Weak;
	private: using ___super = CppAdvance::ClassRefParentUnowned<BaseClass>;
	public: using __class = __Class_VectorClass;
	public: FORCE_INLINE decltype(auto) __ref() const noexcept { CppAdvance::UnownedCheck(_obj); return *reinterpret_cast<__class*>(_obj); }
	ADV_CLASS_FROM_PTR(VectorClass__Unowned)
	ADV_CLASS_UNOWNED_COMMON_CTORS(VectorClass__Unowned)
	#line 243 "FirstProgram.adv"
	public: inline  operator CppAdvance::f32() const noexcept;
	#line 265 "FirstProgram.adv"
	public: inline decltype(auto) operator[](CppAdvance::i32 idx) const ;
	#line 275 "FirstProgram.adv"
	public: inline decltype(auto) _operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3) const ;
	
};
#line 169 "FirstProgram.adv"
class VectorClass__Weak : public CppAdvance::ClassRefParentWeak<BaseClass> {
	private: using __self = VectorClass;
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
#line 305 "FirstProgram.adv"
class ConcreteVectorClass : public CppAdvance::ClassRefParent<VectorClass> {
	private: using __self = ConcreteVectorClass;
	private: using ___super = CppAdvance::ClassRefParent<VectorClass>;
	public: using __class = __Class_ConcreteVectorClass;
	private: friend class ConcreteVectorClass__Unowned;
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
	#line 312 "FirstProgram.adv"
	public: inline  ConcreteVectorClass(CppAdvance::i32 i) noexcept;
	#line 332 "FirstProgram.adv"
	public: inline decltype(auto) operator+(CppAdvance::In<__self> other) const ;
	#define ADV_PROPERTY_SELF __self
};
#line 305 "FirstProgram.adv"
class ConcreteVectorClass__Unowned : public CppAdvance::ClassRefParentUnowned<VectorClass> {
	private: using __self = ConcreteVectorClass;
	public: using __strong_ref = ConcreteVectorClass;
	public: using __unowned_ref = ConcreteVectorClass__Unowned;
	public: using __weak_ref = ConcreteVectorClass__Weak;
	private: using ___super = CppAdvance::ClassRefParentUnowned<VectorClass>;
	public: using __class = __Class_ConcreteVectorClass;
	public: FORCE_INLINE decltype(auto) __ref() const noexcept { CppAdvance::UnownedCheck(_obj); return *reinterpret_cast<__class*>(_obj); }
	ADV_CLASS_FROM_PTR(ConcreteVectorClass__Unowned)
	ADV_CLASS_UNOWNED_COMMON_CTORS(ConcreteVectorClass__Unowned)
	#line 332 "FirstProgram.adv"
	public: inline decltype(auto) operator+(CppAdvance::In<__self> other) const ;
	
};
#line 305 "FirstProgram.adv"
class ConcreteVectorClass__Weak : public CppAdvance::ClassRefParentWeak<VectorClass> {
	private: using __self = ConcreteVectorClass;
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
#line 336 "FirstProgram.adv"
class Next : public CppAdvance::ObjectRef {
	private: using __self = Next;
	private: using ___super = CppAdvance::ObjectRef;
	public: using __class = __Class_Next;
	private: friend class Next__Unowned;
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
	#line 353 "FirstProgram.adv"
	public: inline decltype(auto) operator*() const ;
	#define ADV_PROPERTY_SELF __self
};
#line 336 "FirstProgram.adv"
class Next__Unowned : public CppAdvance::ObjectRef__Unowned {
	private: using __self = Next;
	public: using __strong_ref = Next;
	public: using __unowned_ref = Next__Unowned;
	public: using __weak_ref = Next__Weak;
	private: using ___super = CppAdvance::ObjectRef__Unowned;
	public: using __class = __Class_Next;
	public: FORCE_INLINE decltype(auto) __ref() const noexcept { CppAdvance::UnownedCheck(_obj); return *reinterpret_cast<__class*>(_obj); }
	ADV_CLASS_FROM_PTR(Next__Unowned)
	ADV_CLASS_UNOWNED_COMMON_CTORS(Next__Unowned)
	#line 353 "FirstProgram.adv"
	public: inline decltype(auto) operator*() const ;
	
};
#line 336 "FirstProgram.adv"
class Next__Weak : public CppAdvance::ObjectRef__Weak {
	private: using __self = Next;
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

#line 360 "FirstProgram.adv"
struct Utils : public CppAdvance::StaticClass {
	private: using __self = Utils;
	public: 
	class NestedClass; class NestedClass__Unowned; class NestedClass__Weak; class __Class_NestedClass;
	#line 380 "FirstProgram.adv"
	class NestedClass : public CppAdvance::ObjectRef {
		private: using __self = NestedClass;
		private: using ___super = CppAdvance::ObjectRef;
		public: using __class = __Class_NestedClass;
		private: friend class NestedClass__Unowned;
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
	};
	#line 380 "FirstProgram.adv"
	class NestedClass__Unowned : public CppAdvance::ObjectRef__Unowned {
		private: using __self = NestedClass;
		public: using __strong_ref = NestedClass;
		public: using __unowned_ref = NestedClass__Unowned;
		public: using __weak_ref = NestedClass__Weak;
		private: using ___super = CppAdvance::ObjectRef__Unowned;
		public: using __class = __Class_NestedClass;
		public: FORCE_INLINE decltype(auto) __ref() const noexcept { CppAdvance::UnownedCheck(_obj); return *reinterpret_cast<__class*>(_obj); }
		ADV_CLASS_FROM_PTR(NestedClass__Unowned)
		ADV_CLASS_UNOWNED_COMMON_CTORS(NestedClass__Unowned)
		
	};
	#line 380 "FirstProgram.adv"
	class NestedClass__Weak : public CppAdvance::ObjectRef__Weak {
		private: using __self = NestedClass;
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
	#line 380 "FirstProgram.adv"
	class __Class_NestedClass : public CppAdvance::Object {
		private: using __self = NestedClass;
		private: using ___super = CppAdvance::Object;
		private: using __selfClass = __Class_NestedClass;
		friend class __self;
		friend class __self::__weak_ref;
		#define ADV_PROPERTY_SELF __selfClass
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 381 "FirstProgram.adv"
		public: CppAdvance::i32 x; ADV_CHECK_REF_STRUCT("i32", CppAdvance::i32);
		#line 381 "FirstProgram.adv"
		public: CppAdvance::i32 y; ADV_CHECK_REF_STRUCT("i32", CppAdvance::i32);
		#line 381 "FirstProgram.adv"
		public: CppAdvance::i32 z; ADV_CHECK_REF_STRUCT("i32", CppAdvance::i32);
		
#define ADV_PROPERTY_SELF __self
	};
	#line 380 "FirstProgram.adv"
	ADV_CHECK_FOR_CONCRETE(NestedClass);
	
	#line 362 "FirstProgram.adv"
	public: TESTDLL_API static ConcreteVectorClass v; ADV_CHECK_REF_STRUCT("ConcreteVectorClass", ConcreteVectorClass);
	#line 363 "FirstProgram.adv"
	public: TESTDLL_API static const Vector3 vv; ADV_CHECK_REF_STRUCT("Vector3", Vector3);
	private: Utils() = default;
	#line 365 "FirstProgram.adv"
	public: static constexpr auto BYTES = CppAdvance::i32(24);
	#if (_DEBUG)
	#line 366 "FirstProgram.adv"
	public: using Color = __ntuples::NamedTuple_146d1fee4bfecdc3;
	#endif 
	#line 368 "FirstProgram.adv"
	private: static CppAdvance::i32 p_Count; ADV_CHECK_REF_STRUCT("i32", CppAdvance::i32);
	#line 373 "FirstProgram.adv"
	private: TESTDLL_API static auto setCount(const CppAdvance::i32& value) -> void;
	#line 369 "FirstProgram.adv"
	public: TESTDLL_API static auto getCount()  -> CppAdvance::i32;
	#line 9999 "FirstProgram.adv"
	ADV_PROPERTY_GETTER_SETTER_STATIC(public, TESTDLL_API, Count, public, getCount, private, setCount, CppAdvance::i32);
	#line 384 "FirstProgram.adv"
	public: inline static auto printUtils()  -> void;
	#line 388 "FirstProgram.adv"
	public: template<class U> inline constexpr static auto TemplateMethod(U x, U y, U z)  -> Color;
	
};
#line 401 "FirstProgram.adv"
struct Utils2 : public VectorClass {
	private: using __self = Utils2;
	#line 401 "FirstProgram.adv"
	ADV_CHECK_STATIC_CLASS(VectorClass, VectorClass);
	private: Utils2() = default;
	#line 402 "FirstProgram.adv"
	public: inline static auto printUtils()  -> void;
	
};

#line 56 "FirstProgram.adv"
class __Class_Vector3 final : public CppAdvance::ValueType, public IEquatable::__class, public IFormattable::__class
{
	#line 56 "FirstProgram.adv"
	ADV_CHECK_INTERFACE(IEquatable, IEquatable);
	#line 56 "FirstProgram.adv"
	ADV_CHECK_INTERFACE(IFormattable, IFormattable);
	#line 9999 "FirstProgram.adv"
	Vector3 __value;
	public: using __underlying = Vector3; using __self = __underlying;
	using NestedStruct = __self::NestedStruct;
	__Class_Vector3(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
	operator __underlying() const noexcept { return __value; }
	auto getName() const -> CppAdvance::Str { return __value.getName(); }
	auto Equals(const IEquatable& other) const noexcept -> bool override { ADV_EXPRESSION_BODY(__value.Equals(other)); }
	auto format() const noexcept -> CppAdvance::Str override { ADV_EXPRESSION_BODY(__value.format()); }
	auto HashCode() const  -> CppAdvance::usize { ADV_EXPRESSION_BODY(__value.HashCode()); }
	operator CppAdvance::f32() const noexcept { return static_cast<CppAdvance::f32>(__value); }
	auto operator++() -> __self & { ADV_EXPRESSION_BODY(__value.operator++()); }
	void setAt(CppAdvance::i32 idx, const CppAdvance::f32& value)  { __value.operator[](idx) = value; }
	decltype(auto) getAt(CppAdvance::i32 idx)  { return __value.operator[](idx); }
	decltype(auto) getAt(CppAdvance::i32 idx) const  { return __value.operator[](idx); }
	void setAt(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3, const CppAdvance::f32& value)  { __value._operator_subscript(idx, idx2, idx3) = value; }
	decltype(auto) getAt(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3)  { return __value._operator_subscript(idx, idx2, idx3); }
	decltype(auto) getAt(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3) const  { return __value._operator_subscript(idx, idx2, idx3); }
	auto getX() const  -> CppAdvance::f32 { ADV_EXPRESSION_BODY(__value.getX()); }
	auto getNext() const  -> Next { ADV_EXPRESSION_BODY(__value.getNext()); }
	
};
#line 56 "FirstProgram.adv"
ADV_CHECK_FOR_CONCRETE(Vector3);
#line 165 "FirstProgram.adv"
class __Class_BaseClass : public CppAdvance::Object {
	private: using __self = BaseClass;
	private: using ___super = CppAdvance::Object;
	private: using __selfClass = __Class_BaseClass;
	friend class __self;
	friend class __self::__weak_ref;
	#define ADV_PROPERTY_SELF __selfClass
	public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
	#line 166 "FirstProgram.adv"
	public: inline virtual auto getNext() const  -> Next;
	
#define ADV_PROPERTY_SELF __self
};
#line 165 "FirstProgram.adv"
ADV_CHECK_FOR_CONCRETE(BaseClass);

#line 169 "FirstProgram.adv"
class ADV_NOVTABLE __Class_VectorClass ADV_ABSTRACT : public CppAdvance::ClassParent<BaseClass, CppAdvance::Object, BaseClass>, public CppAdvance::ClassParent<BaseClass, BaseClass, IEquatable>, public CppAdvance::ClassParent<BaseClass, IEquatable, IFormattable>, public CppAdvance::ClassParent<BaseClass, IFormattable, CppAdvance::EmptyType> {
	private: using __self = VectorClass;
	private: using ___super = CppAdvance::ClassParent<BaseClass, CppAdvance::Object, BaseClass>;
	private: using __selfClass = __Class_VectorClass;
	friend class __self;
	friend class __self::__weak_ref;
	#define ADV_PROPERTY_SELF __selfClass
	#line 169 "FirstProgram.adv"
	ADV_CHECK_INTERFACE(IEquatable, IEquatable);
	#line 169 "FirstProgram.adv"
	ADV_CHECK_INTERFACE(IFormattable, IFormattable);
	public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
	public: using NestedClass = __self::NestedClass;
	#line 178 "FirstProgram.adv"
	private: friend class TestStruct; friend class __Class_TestStruct;
	#line 179 "FirstProgram.adv"
	private: template<class T> friend class TestStruct2; template<class T> friend class __Class_TestStruct2;
	#line 180 "FirstProgram.adv"
	private: friend CppAdvance::i32 func3(CppAdvance::i32 x);
	#line 172 "FirstProgram.adv"
	public: CppAdvance::f32 x; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
	#line 172 "FirstProgram.adv"
	public: CppAdvance::f32 y; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
	#line 172 "FirstProgram.adv"
	public: CppAdvance::f32 z; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
	#line 201 "FirstProgram.adv"
	public: TESTDLL_API static CppAdvance::i32 Count2; ADV_CHECK_REF_STRUCT("i32", CppAdvance::i32);
	#line 203 "FirstProgram.adv"
	public: TESTDLL_API static const Vector3 ZERO; ADV_CHECK_REF_STRUCT("Vector3", Vector3);
	#line 202 "FirstProgram.adv"
	public: static constexpr auto BYTES = CppAdvance::i32(24);
	#line 204 "FirstProgram.adv"
	public: using Coords = __ntuples::NamedTuple_6893f862d6c49683;
	#line 196 "FirstProgram.adv"
	private: CppAdvance::i32 p_Count; ADV_CHECK_REF_STRUCT("i32", CppAdvance::i32);
	#line 196 "FirstProgram.adv"
	public: virtual auto setCount(const CppAdvance::i32& value) -> __selfClass& = 0;
	#line 196 "FirstProgram.adv"
	public: virtual auto getCount() const  -> CppAdvance::i32 = 0;
	#line 9999 "FirstProgram.adv"
	ADV_PROPERTY_GETTER_SETTER(public, Count, public, getCount, public, setCount, CppAdvance::i32);
	#line 199 "FirstProgram.adv"
	public: virtual auto getName() const  -> CppAdvance::Str = 0;
	#line 9999 "FirstProgram.adv"
	ADV_PROPERTY_GETTER(public, Name, getName, CppAdvance::Str);
	#line 182 "FirstProgram.adv"
	public: inline constexpr auto Equals(const IEquatable& other) const noexcept -> bool override;
	#line 183 "FirstProgram.adv"
	public: inline constexpr auto format() const noexcept -> CppAdvance::Str override;
	#line 221 "FirstProgram.adv"
	protected: inline constexpr __Class_VectorClass()  = default;
	#line 223 "FirstProgram.adv"
	protected: inline constexpr __Class_VectorClass(CppAdvance::f32 x, CppAdvance::f32 y, CppAdvance::f32 z) noexcept;
	#line 229 "FirstProgram.adv"
	protected: template<class U> inline constexpr explicit __Class_VectorClass(U f) ;
	#line 234 "FirstProgram.adv"
	protected: inline explicit __Class_VectorClass(CppAdvance::In<__self> other) ;
	inline __Class_VectorClass(__selfClass& copy) : __Class_VectorClass(__self(copy)) {}
	#line 238 "FirstProgram.adv"
	public: inline ~__Class_VectorClass() noexcept;
	#line 243 "FirstProgram.adv"
	public: inline  operator CppAdvance::f32() const noexcept;
	#line 245 "FirstProgram.adv"
	public: inline auto increment()  -> __selfClass& LIFETIMEBOUND;
	#line 9999 "FirstProgram.adv"
	private: template<class __IdxT = CppAdvance::f32> struct __IndexerAccessor_265 {
		private:
		__Class_VectorClass& _parent;
		CppAdvance::i32 _idx;
		 friend class VectorClass;
		public:
		FORCE_INLINE __IndexerAccessor_265(__Class_VectorClass& parent, CppAdvance::i32 idx) : _parent(parent), _idx(idx) {}
		FORCE_INLINE __IndexerAccessor_265(__Class_VectorClass const& parent, CppAdvance::i32 idx) : _parent(const_cast<std::remove_cvref_t<decltype(parent)>&>(parent)), _idx(idx) {}
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
		template<class _ElemRight> FORCE_INLINE decltype(auto) operator[](_ElemRight&& other) requires requires(__IdxT t, _ElemRight u) { t[u];} { return __ref()[std::forward<_ElemRight>(other)]; }
		template<class _ElemRight> FORCE_INLINE decltype(auto) operator[](_ElemRight&& other) const requires requires(__IdxT t, _ElemRight u) { t[u];} { return __ref()[std::forward<_ElemRight>(other)]; }
		template<class... Args> FORCE_INLINE decltype(auto) operator()(Args&&... other) { return __ref()(std::forward<Args>(other)...); }
		template<class... Args> FORCE_INLINE decltype(auto) operator()(Args&&... other) const { return __ref()(std::forward<Args>(other)...); }
		template<class Ch> friend FORCE_INLINE decltype(auto) operator<<(std::basic_ostream<Ch>& stream, const __IndexerAccessor_265<__IdxT>& elem) { return stream << elem.__ref(); }
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

	friend struct __IndexerAccessor_265<CppAdvance::f32>;
	inline CppAdvance::f32 getAt(CppAdvance::i32 idx);
	inline const CppAdvance::f32 getAt(CppAdvance::i32 idx) const;
	inline void setAt(CppAdvance::i32 idx, const CppAdvance::f32& value);
	#line 265 "FirstProgram.adv"
	public: inline auto operator[](CppAdvance::i32 idx)  -> __IndexerAccessor_265<CppAdvance::f32>;
	public: inline auto operator[](CppAdvance::i32 idx) const  -> const __IndexerAccessor_265<CppAdvance::f32>;
	#line 275 "FirstProgram.adv"
	public: inline auto _operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3)  -> CppAdvance::f32;
	public: inline auto _operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3) const  -> const CppAdvance::f32;
	#line 277 "FirstProgram.adv"
	public: virtual auto getX() const  -> CppAdvance::f32 = 0;
	#line 278 "FirstProgram.adv"
	public: inline virtual auto getNext() const  -> Next final;
	#line 281 "FirstProgram.adv"
	public: inline constexpr static auto Method(CppAdvance::i32 x, CppAdvance::i32 y, CppAdvance::i32 z)  -> CppAdvance::i32;
	#line 287 "FirstProgram.adv"
	public: template<class U> inline constexpr auto TemplateMethod(U x, U y, U z)  -> Coords;
	
#define ADV_PROPERTY_SELF __self
};
#line 169 "FirstProgram.adv"
ADV_CHECK_FOR_ABSTRACT(VectorClass);

#line 305 "FirstProgram.adv"
class __Class_ConcreteVectorClass : public CppAdvance::ClassParent<VectorClass, CppAdvance::Object, VectorClass>, public CppAdvance::ClassParent<VectorClass, VectorClass, CppAdvance::EmptyType> {
	private: using __self = ConcreteVectorClass;
	private: using ___super = CppAdvance::ClassParent<VectorClass, CppAdvance::Object, VectorClass>;
	private: using __selfClass = __Class_ConcreteVectorClass;
	friend class __self;
	friend class __self::__weak_ref;
	#define ADV_PROPERTY_SELF __selfClass
	public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
	#line 316 "FirstProgram.adv"
	public: inline constexpr auto getName() const  -> CppAdvance::Str;
	#line 9999 "FirstProgram.adv"
	ADV_PROPERTY_GETTER(public, Name, getName, CppAdvance::Str);
	#line 318 "FirstProgram.adv"
	private: CppAdvance::i32 p_Count = CppAdvance::i32(1); ADV_CHECK_REF_STRUCT("i32", CppAdvance::i32);
	#line 323 "FirstProgram.adv"
	private: TESTDLL_API virtual auto setCount(const CppAdvance::i32& value) -> __selfClass& final;
	#line 319 "FirstProgram.adv"
	public: TESTDLL_API virtual auto getCount() const  -> CppAdvance::i32 final;
	#line 9999 "FirstProgram.adv"
	ADV_PROPERTY_GETTER_SETTER(public, Count, public, getCount, private, setCount, CppAdvance::i32);
	#line 306 "FirstProgram.adv"
	public: inline constexpr __Class_ConcreteVectorClass()  = default;
	#line 308 "FirstProgram.adv"
	public: inline constexpr __Class_ConcreteVectorClass(CppAdvance::f32 x, CppAdvance::f32 y, CppAdvance::f32 z) noexcept;
	#line 312 "FirstProgram.adv"
	public: inline constexpr  __Class_ConcreteVectorClass(CppAdvance::i32 i) noexcept;
	#line 330 "FirstProgram.adv"
	public: inline virtual auto getX() const  -> CppAdvance::f32 final;
	#line 332 "FirstProgram.adv"
	public: inline auto operator+(CppAdvance::In<__self> other) const  -> __self;
	
#define ADV_PROPERTY_SELF __self
};
#line 305 "FirstProgram.adv"
ADV_CHECK_FOR_CONCRETE(ConcreteVectorClass);

#line 336 "FirstProgram.adv"
class __Class_Next : public CppAdvance::Object {
	private: using __self = Next;
	private: using ___super = CppAdvance::Object;
	private: using __selfClass = __Class_Next;
	friend class __self;
	friend class __self::__weak_ref;
	#define ADV_PROPERTY_SELF __selfClass
	public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
	#line 337 "FirstProgram.adv"
	public: CppAdvance::i32 i; ADV_CHECK_REF_STRUCT("i32", CppAdvance::i32);
	#line 338 "FirstProgram.adv"
	public: CppAdvance::Nullable<Next>::__weak_ref v;
	#line 340 "FirstProgram.adv"
	public: inline __Class_Next()  = default;
	#line 342 "FirstProgram.adv"
	public: inline ~__Class_Next() ;
	#line 344 "FirstProgram.adv"
	public: inline explicit __Class_Next(CppAdvance::i32 i) ;
	#line 349 "FirstProgram.adv"
	public: inline explicit __Class_Next(CppAdvance::In<__self> other) ;
	inline __Class_Next(__selfClass& copy) : __Class_Next(__self(copy)) {}
	#line 353 "FirstProgram.adv"
	public: inline auto operator*() const  -> CppAdvance::i32;
	#line 355 "FirstProgram.adv"
	public: inline auto printNext() const  -> void;
	
#define ADV_PROPERTY_SELF __self
};
#line 336 "FirstProgram.adv"
ADV_CHECK_FOR_CONCRETE(Next);

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
	};
}
namespace std {
	template <> struct tuple_size<__ntuples::NamedTuple_4e7be1ed49b09d71> : integral_constant<size_t, 3> {};
	template <size_t I> auto& get(__ntuples::NamedTuple_4e7be1ed49b09d71&);
	template <size_t I> const auto& get(const __ntuples::NamedTuple_4e7be1ed49b09d71&);
	template <> struct tuple_element<0, __ntuples::NamedTuple_4e7be1ed49b09d71> { using type = CppAdvance::i32; };
	template <> inline auto& get<0>(__ntuples::NamedTuple_4e7be1ed49b09d71& t) { return t.i; }
	template <> inline const auto& get<0>(const __ntuples::NamedTuple_4e7be1ed49b09d71& t) { return t.i; }
	template <> struct tuple_element<1, __ntuples::NamedTuple_4e7be1ed49b09d71> { using type = CppAdvance::f64; };
	template <> inline auto& get<1>(__ntuples::NamedTuple_4e7be1ed49b09d71& t) { return t.f; }
	template <> inline const auto& get<1>(const __ntuples::NamedTuple_4e7be1ed49b09d71& t) { return t.f; }
	template <> struct tuple_element<2, __ntuples::NamedTuple_4e7be1ed49b09d71> { using type = CppAdvance::Str; };
	template <> inline auto& get<2>(__ntuples::NamedTuple_4e7be1ed49b09d71& t) { return t.s; }
	template <> inline const auto& get<2>(const __ntuples::NamedTuple_4e7be1ed49b09d71& t) { return t.s; }
	
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
	};
}
namespace std {
	template <> struct tuple_size<__ntuples::NamedTuple_6893f862d6c49683> : integral_constant<size_t, 3> {};
	template <size_t I> auto& get(__ntuples::NamedTuple_6893f862d6c49683&);
	template <size_t I> const auto& get(const __ntuples::NamedTuple_6893f862d6c49683&);
	template <> struct tuple_element<0, __ntuples::NamedTuple_6893f862d6c49683> { using type = CppAdvance::i32; };
	template <> inline auto& get<0>(__ntuples::NamedTuple_6893f862d6c49683& t) { return t.x; }
	template <> inline const auto& get<0>(const __ntuples::NamedTuple_6893f862d6c49683& t) { return t.x; }
	template <> struct tuple_element<1, __ntuples::NamedTuple_6893f862d6c49683> { using type = CppAdvance::i32; };
	template <> inline auto& get<1>(__ntuples::NamedTuple_6893f862d6c49683& t) { return t.y; }
	template <> inline const auto& get<1>(const __ntuples::NamedTuple_6893f862d6c49683& t) { return t.y; }
	template <> struct tuple_element<2, __ntuples::NamedTuple_6893f862d6c49683> { using type = CppAdvance::i32; };
	template <> inline auto& get<2>(__ntuples::NamedTuple_6893f862d6c49683& t) { return t.z; }
	template <> inline const auto& get<2>(const __ntuples::NamedTuple_6893f862d6c49683& t) { return t.z; }
	
}
namespace __ntuples {
	#line 9999 "FirstProgram.adv"
	struct NamedTuple_146d1fee4bfecdc3 final : public CppAdvance::Struct { 
		using __class = CppAdvance::__Class_Basic<NamedTuple_146d1fee4bfecdc3>;
		CppAdvance::i32 r;
		CppAdvance::i32 g;
		CppAdvance::i32 b;
		NamedTuple_146d1fee4bfecdc3() = default;
		NamedTuple_146d1fee4bfecdc3(CppAdvance::In<CppAdvance::i32> _r, CppAdvance::In<CppAdvance::i32> _g, CppAdvance::In<CppAdvance::i32> _b) : r{_r}, g{_g}, b{_b} {}
		FORCE_INLINE decltype(auto) __ref() noexcept { return *this; }
		FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
	};
}
namespace std {
	template <> struct tuple_size<__ntuples::NamedTuple_146d1fee4bfecdc3> : integral_constant<size_t, 3> {};
	template <size_t I> auto& get(__ntuples::NamedTuple_146d1fee4bfecdc3&);
	template <size_t I> const auto& get(const __ntuples::NamedTuple_146d1fee4bfecdc3&);
	template <> struct tuple_element<0, __ntuples::NamedTuple_146d1fee4bfecdc3> { using type = CppAdvance::i32; };
	template <> inline auto& get<0>(__ntuples::NamedTuple_146d1fee4bfecdc3& t) { return t.r; }
	template <> inline const auto& get<0>(const __ntuples::NamedTuple_146d1fee4bfecdc3& t) { return t.r; }
	template <> struct tuple_element<1, __ntuples::NamedTuple_146d1fee4bfecdc3> { using type = CppAdvance::i32; };
	template <> inline auto& get<1>(__ntuples::NamedTuple_146d1fee4bfecdc3& t) { return t.g; }
	template <> inline const auto& get<1>(const __ntuples::NamedTuple_146d1fee4bfecdc3& t) { return t.g; }
	template <> struct tuple_element<2, __ntuples::NamedTuple_146d1fee4bfecdc3> { using type = CppAdvance::i32; };
	template <> inline auto& get<2>(__ntuples::NamedTuple_146d1fee4bfecdc3& t) { return t.b; }
	template <> inline const auto& get<2>(const __ntuples::NamedTuple_146d1fee4bfecdc3& t) { return t.b; }
	
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
#line 68 "FirstProgram.adv"
inline auto func4(CppAdvance::i32 x)  -> CppAdvance::i32;
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
#line 68 "FirstProgram.adv"
inline auto func4(CppAdvance::i32 x)  -> CppAdvance::i32
{
	#line 69 "FirstProgram.adv"
	return CppAdvance::i32(0);
}
#line 72 "FirstProgram.adv"
inline constexpr auto Vector3::Equals(const IEquatable& other) const noexcept -> bool
{
	#line 72 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(true); 
}
#line 73 "FirstProgram.adv"
inline constexpr auto Vector3::format() const noexcept -> CppAdvance::Str
{
	#line 73 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(CppAdvance::Str{u"test"}); 
}
#line 74 "FirstProgram.adv"
inline constexpr auto Vector3::HashCode() const  -> CppAdvance::usize
{
	#line 74 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(CppAdvance::u32(654321U)); 
}
#line 88 "FirstProgram.adv"
inline constexpr auto Vector3::getName() const  -> CppAdvance::Str 
{
	#line 88 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(CppAdvance::Str{u"Vector3"}); 
}

#line 100 "FirstProgram.adv"
inline constexpr auto Vector3::__Class_NestedStruct::count(CppAdvance::i32 i)  -> CppAdvance::i32
{
	#line 100 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(i * CppAdvance::i32(10)); 
}
#line 106 "FirstProgram.adv"
template<class U> inline constexpr Vector3::Vector3(U f)  :
#line 107 "FirstProgram.adv"
Vector3(f, f, f)
{
	#line 108 "FirstProgram.adv"
	this->x = f;
}
#line 111 "FirstProgram.adv"
inline constexpr Vector3::operator CppAdvance::f32() const noexcept
{
	#line 111 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(y); 
}
#line 113 "FirstProgram.adv"
inline constexpr auto Vector3::operator+(const __self& other) const  -> decltype(auto)
{
	#line 113 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(__self{(*this).__ref().x + other.__ref().x, (*this).__ref().y + other.__ref().y, (*this).__ref().z + other.__ref().z}); 
}
#line 115 "FirstProgram.adv"
inline auto Vector3::operator++()  -> __self&
{
	#line 116 "FirstProgram.adv"
	++x;
	#line 117 "FirstProgram.adv"
	++y;
	#line 118 "FirstProgram.adv"
	++z;
	#line 119 "FirstProgram.adv"
	++Count;
	#line 122 "FirstProgram.adv"
	return (*this);
}
#line 115 "FirstProgram.adv"
inline auto Vector3::operator++(int)  -> __self { auto copy = CppAdvance::New<__self>(__self(*this)); ++(*this); return copy; }
#line 125 "FirstProgram.adv"
auto Vector3::operator[](CppAdvance::i32 idx)  -> __IndexerAccessor_125<CppAdvance::f32>
{
	return __IndexerAccessor_125<CppAdvance::f32>{ *this, idx };
}

#line 125 "FirstProgram.adv"
auto Vector3::operator[](CppAdvance::i32 idx)  const  -> const __IndexerAccessor_125<CppAdvance::f32>
{
	return __IndexerAccessor_125<CppAdvance::f32>{ *this, idx };
}

#line 126 "FirstProgram.adv"
auto Vector3::getAt(CppAdvance::i32 idx)  -> CppAdvance::f32
{
	#line 127 "FirstProgram.adv"
	print(CppAdvance::Str{u"Read"});
	#line 128 "FirstProgram.adv"
	return x;
}
#line 126 "FirstProgram.adv"
auto Vector3::getAt(CppAdvance::i32 idx) const  -> const CppAdvance::f32
{
	#line 127 "FirstProgram.adv"
	print(CppAdvance::Str{u"Read"});
	#line 128 "FirstProgram.adv"
	return x;
}
#line 130 "FirstProgram.adv"
auto Vector3::setAt(CppAdvance::i32 idx, const CppAdvance::f32& value)  -> void 
{
	#line 131 "FirstProgram.adv"
	if (value < CppAdvance::i32(10)) {
		#line 131 "FirstProgram.adv"
		return ;
	}
	#line 132 "FirstProgram.adv"
	x = CppAdvance::i32(5);
}
#line 135 "FirstProgram.adv"
inline constexpr auto Vector3::_operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3)  -> CppAdvance::f32
{
	#line 135 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(y + z); 
}
#line 135 "FirstProgram.adv"
inline constexpr auto Vector3::_operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3)  const  -> const CppAdvance::f32
{
	#line 135 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(y + z); 
}
#line 137 "FirstProgram.adv"
inline constexpr auto Vector3::getX() const  -> CppAdvance::f32
{
	#line 137 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(x); 
}
#line 138 "FirstProgram.adv"
inline auto Vector3::getNext() const  -> Next
{
	#line 138 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(CppAdvance::New<Next>(CppAdvance::i32(6))); 
}
#line 141 "FirstProgram.adv"
inline constexpr auto Vector3::Method(CppAdvance::i32 x, CppAdvance::i32 y, CppAdvance::i32 z)  -> CppAdvance::i32
{
	#line 142 "FirstProgram.adv"
	return y + z;
}
#line 147 "FirstProgram.adv"
template<class U> inline constexpr auto Vector3::TemplateMethod(U x, U y, U z)  -> typename Vector3::Coords
{
	#line 148 "FirstProgram.adv"
	class __Class_LocalStruct;
	#line 148 "FirstProgram.adv"
	struct LocalStruct : public CppAdvance::Struct
	{
		private: using __self = LocalStruct;
		public: using __class = __Class_LocalStruct;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 149 "FirstProgram.adv"
		#line 149 "FirstProgram.adv"
		public: CppAdvance::f32 x{}; 
		#line 149 "FirstProgram.adv"
		public: CppAdvance::f32 y{}; 
		#line 149 "FirstProgram.adv"
		public: CppAdvance::f32 z{}; 
		#line 149 "FirstProgram.adv"
		private: __FirstProgram_Protected::Test111 p_tt;
		#line 153 "FirstProgram.adv"
		private: inline auto settt(const __FirstProgram_Protected::Test111& value) -> __self& { p_tt = value; return *this; }
		#line 153 "FirstProgram.adv"
		public: inline auto gettt() const  -> __FirstProgram_Protected::Test111 { return p_tt; }
		#line 9999 "FirstProgram.adv"
		ADV_PROPERTY_GETTER_SETTER(public, tt, public, gettt, private, settt, __FirstProgram_Protected::Test111);
		
		
	};
	#line 148 "FirstProgram.adv"
	class __Class_LocalStruct : public CppAdvance::ValueType
	{
		#line 9999 "FirstProgram.adv"
		LocalStruct __value;
		public: using __underlying = LocalStruct; using __self = __underlying;
		__Class_LocalStruct(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
		operator __underlying() const noexcept { return __value; }
		auto gettt() const -> __FirstProgram_Protected::Test111 { return __value.gettt(); }
		
	};
	#line 158 "FirstProgram.adv"
	(*this)[CppAdvance::i32(0)] = CppAdvance::i32(13);
	#line 160 "FirstProgram.adv"
	return { x, y, z };
}
#line 166 "FirstProgram.adv"
inline auto __Class_BaseClass::getNext() const  -> Next
{
	#line 166 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(CppAdvance::New<Next>(CppAdvance::i32(5))); 
}
#line 182 "FirstProgram.adv"
inline constexpr auto __Class_VectorClass::Equals(const IEquatable& other) const noexcept -> bool
{
	#line 182 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(true); 
}
#line 183 "FirstProgram.adv"
inline constexpr auto __Class_VectorClass::format() const noexcept -> CppAdvance::Str
{
	#line 183 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(CppAdvance::Str{u"test"}); 
}
#line 212 "FirstProgram.adv"
inline constexpr VectorClass::__Class_NestedClass::__Class_NestedClass(CppAdvance::f32 x, CppAdvance::f32 y, CppAdvance::f32 z) noexcept : 
#line 213 "FirstProgram.adv"
x{x}, 
#line 214 "FirstProgram.adv"
y{y}, 
#line 215 "FirstProgram.adv"
z{z}
{
}
#line 217 "FirstProgram.adv"
inline constexpr auto VectorClass::__Class_NestedClass::count(CppAdvance::i32 i)  -> CppAdvance::i32
{
	#line 217 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(i * CppAdvance::i32(10)); 
}
#line 223 "FirstProgram.adv"
inline constexpr __Class_VectorClass::__Class_VectorClass(CppAdvance::f32 x, CppAdvance::f32 y, CppAdvance::f32 z) noexcept : 
#line 224 "FirstProgram.adv"
x{x}, 
#line 225 "FirstProgram.adv"
y{y}, 
#line 226 "FirstProgram.adv"
z{z}
{
}
#line 229 "FirstProgram.adv"
template<class U> inline constexpr __Class_VectorClass::__Class_VectorClass(U f)  :
#line 230 "FirstProgram.adv"
__Class_VectorClass(f, f, f)
{
	#line 231 "FirstProgram.adv"
	this->x = f;
}
#line 234 "FirstProgram.adv"
inline __Class_VectorClass::__Class_VectorClass(CppAdvance::In<__self> other)  :
#line 235 "FirstProgram.adv"
__Class_VectorClass(other.__ref().x, other.__ref().y, other.__ref().z)
{
}
#line 238 "FirstProgram.adv"
inline __Class_VectorClass::~__Class_VectorClass() noexcept
{
	#line 238 "FirstProgram.adv"
	print(CppAdvance::Str{u"VectorClass deiniting"}); 
}
#line 243 "FirstProgram.adv"
inline __Class_VectorClass::operator CppAdvance::f32() const noexcept
{
	#line 243 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(y); 
}
#line 245 "FirstProgram.adv"
inline auto __Class_VectorClass::increment()  -> __selfClass&
{
	#line 246 "FirstProgram.adv"
	++x;
	#line 247 "FirstProgram.adv"
	++y;
	#line 248 "FirstProgram.adv"
	++z;
	#line 249 "FirstProgram.adv"
	++Count;
	#line 252 "FirstProgram.adv"
	return (*this);
}
#line 265 "FirstProgram.adv"
auto __Class_VectorClass::operator[](CppAdvance::i32 idx)  -> __IndexerAccessor_265<CppAdvance::f32>
{
	return __IndexerAccessor_265<CppAdvance::f32>{ *this, idx };
}

#line 265 "FirstProgram.adv"
auto __Class_VectorClass::operator[](CppAdvance::i32 idx)  const  -> const __IndexerAccessor_265<CppAdvance::f32>
{
	return __IndexerAccessor_265<CppAdvance::f32>{ *this, idx };
}

#line 266 "FirstProgram.adv"
auto __Class_VectorClass::getAt(CppAdvance::i32 idx)  -> CppAdvance::f32
{
	#line 267 "FirstProgram.adv"
	print(CppAdvance::Str{u"Read"});
	#line 268 "FirstProgram.adv"
	return x;
}
#line 266 "FirstProgram.adv"
auto __Class_VectorClass::getAt(CppAdvance::i32 idx) const  -> const CppAdvance::f32
{
	#line 267 "FirstProgram.adv"
	print(CppAdvance::Str{u"Read"});
	#line 268 "FirstProgram.adv"
	return x;
}
#line 270 "FirstProgram.adv"
auto __Class_VectorClass::setAt(CppAdvance::i32 idx, const CppAdvance::f32& value)  -> void 
{
	#line 271 "FirstProgram.adv"
	if (value < CppAdvance::i32(10)) {
		#line 271 "FirstProgram.adv"
		return ;
	}
	#line 272 "FirstProgram.adv"
	x = CppAdvance::i32(5);
}
#line 275 "FirstProgram.adv"
inline auto __Class_VectorClass::_operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3)  -> CppAdvance::f32
{
	#line 275 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(y + z); 
}
#line 275 "FirstProgram.adv"
inline auto __Class_VectorClass::_operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3)  const  -> const CppAdvance::f32
{
	#line 275 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(y + z); 
}
#line 278 "FirstProgram.adv"
inline auto __Class_VectorClass::getNext() const  -> Next
{
	#line 278 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(___super::getNext()); 
}
#line 281 "FirstProgram.adv"
inline constexpr auto __Class_VectorClass::Method(CppAdvance::i32 x, CppAdvance::i32 y, CppAdvance::i32 z)  -> CppAdvance::i32
{
	#line 282 "FirstProgram.adv"
	return y + z;
}
#line 287 "FirstProgram.adv"
template<class U> inline constexpr auto __Class_VectorClass::TemplateMethod(U x, U y, U z)  -> typename __Class_VectorClass::Coords
{
	#line 288 "FirstProgram.adv"
	class __Class_LocalStruct;
	#line 288 "FirstProgram.adv"
	struct LocalStruct : public CppAdvance::Struct
	{
		private: using __self = LocalStruct;
		public: using __class = __Class_LocalStruct;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 289 "FirstProgram.adv"
		#line 289 "FirstProgram.adv"
		public: CppAdvance::f32 x{}; 
		#line 289 "FirstProgram.adv"
		public: CppAdvance::f32 y{}; 
		#line 289 "FirstProgram.adv"
		public: CppAdvance::f32 z{}; 
		
		
	};
	#line 288 "FirstProgram.adv"
	class __Class_LocalStruct : public CppAdvance::ValueType
	{
		#line 9999 "FirstProgram.adv"
		LocalStruct __value;
		public: using __underlying = LocalStruct; using __self = __underlying;
		__Class_LocalStruct(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
		operator __underlying() const noexcept { return __value; }
		
	};
	#line 298 "FirstProgram.adv"
	(*this)[CppAdvance::i32(0)] = CppAdvance::i32(13);
	#line 300 "FirstProgram.adv"
	return { x, y, z };
}
#line 308 "FirstProgram.adv"
inline constexpr __Class_ConcreteVectorClass::__Class_ConcreteVectorClass(CppAdvance::f32 x, CppAdvance::f32 y, CppAdvance::f32 z) noexcept :
#line 309 "FirstProgram.adv"
___super(x, y, z)
{
}
#line 312 "FirstProgram.adv"
inline constexpr __Class_ConcreteVectorClass::__Class_ConcreteVectorClass(CppAdvance::i32 i) noexcept :
#line 313 "FirstProgram.adv"
___super(CppAdvance::f32{i}, CppAdvance::f32{i}, CppAdvance::f32{i})
{
}
#line 316 "FirstProgram.adv"
inline constexpr auto __Class_ConcreteVectorClass::getName() const  -> CppAdvance::Str 
{
	#line 316 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(CppAdvance::Str{u"VectorClass"}); 
}

#line 330 "FirstProgram.adv"
inline auto __Class_ConcreteVectorClass::getX() const  -> CppAdvance::f32
{
	#line 330 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(x); 
}
#line 332 "FirstProgram.adv"
inline auto __Class_ConcreteVectorClass::operator+(CppAdvance::In<__self> other) const  -> __self
{
	#line 332 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(CppAdvance::New<__self>((*this).__ref().x + other.__ref().x, (*this).__ref().y + other.__ref().y, (*this).__ref().z + other.__ref().z)); 
}
#line 342 "FirstProgram.adv"
inline __Class_Next::~__Class_Next() 
{
	#line 342 "FirstProgram.adv"
	print(CppAdvance::Str{u"Next deiniting"}); 
}
#line 344 "FirstProgram.adv"
inline __Class_Next::__Class_Next(CppAdvance::i32 i)  : 
#line 345 "FirstProgram.adv"
i{i}
{
}
#line 349 "FirstProgram.adv"
inline __Class_Next::__Class_Next(CppAdvance::In<__self> other)  : 
#line 350 "FirstProgram.adv"
i{CppAdvance::i32(0)}
{
}
#line 353 "FirstProgram.adv"
inline auto __Class_Next::operator*() const  -> CppAdvance::i32
{
	#line 353 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(i); 
}
#line 355 "FirstProgram.adv"
inline auto __Class_Next::printNext() const  -> void
{
	#line 356 "FirstProgram.adv"
	print(CppAdvance::Str{u"This is printNext function in optional chaining call"});
}
#line 384 "FirstProgram.adv"
inline auto Utils::printUtils()  -> void
{
	#line 385 "FirstProgram.adv"
	print(CppAdvance::Str{u"This is printUtils function"});
}
#line 388 "FirstProgram.adv"
template<class U> inline constexpr auto Utils::TemplateMethod(U x, U y, U z)  -> typename Utils::Color
{
	#line 389 "FirstProgram.adv"
	class __Class_LocalStruct;
	#line 389 "FirstProgram.adv"
	struct LocalStruct : public CppAdvance::Struct
	{
		private: using __self = LocalStruct;
		public: using __class = __Class_LocalStruct;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 390 "FirstProgram.adv"
		#line 390 "FirstProgram.adv"
		public: CppAdvance::f32 x{}; 
		#line 390 "FirstProgram.adv"
		public: CppAdvance::f32 y{}; 
		#line 390 "FirstProgram.adv"
		public: CppAdvance::f32 z{}; 
		
		
	};
	#line 389 "FirstProgram.adv"
	class __Class_LocalStruct : public CppAdvance::ValueType
	{
		#line 9999 "FirstProgram.adv"
		LocalStruct __value;
		public: using __underlying = LocalStruct; using __self = __underlying;
		__Class_LocalStruct(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
		operator __underlying() const noexcept { return __value; }
		
	};
	#line 396 "FirstProgram.adv"
	return { x, y, z };
}
#line 402 "FirstProgram.adv"
inline auto Utils2::printUtils()  -> void
{
	#line 403 "FirstProgram.adv"
	print(CppAdvance::Str{u"This is printUtils2 function"});
}
#line 9999 "FirstProgram.adv"
inline BaseClass::ADV_CLASS_DEFAULT_CTOR(BaseClass)
inline BaseClass::ADV_CLASS_STRONG_CTOR_REF(BaseClass)
inline BaseClass& BaseClass::ADV_CLASS_STRONG_ASSIGN_REF(BaseClass)
inline BaseClass__Unowned::ADV_CLASS_UNOWNED_CTOR_REF(BaseClass__Unowned)
inline BaseClass__Unowned& BaseClass__Unowned::ADV_CLASS_UNOWNED_ASSIGN_REF(BaseClass__Unowned)
inline BaseClass__Weak::ADV_CLASS_WEAK_CTOR_REF(BaseClass__Weak)
inline BaseClass__Weak& BaseClass__Weak::ADV_CLASS_WEAK_ASSIGN_REF(BaseClass__Weak)

#line 9999 "FirstProgram.adv"
inline VectorClass::ADV_CLASS_STRONG_CTOR_REF(VectorClass)
inline VectorClass& VectorClass::ADV_CLASS_STRONG_ASSIGN_REF(VectorClass)
inline VectorClass__Unowned::ADV_CLASS_UNOWNED_CTOR_REF(VectorClass__Unowned)
inline VectorClass__Unowned& VectorClass__Unowned::ADV_CLASS_UNOWNED_ASSIGN_REF(VectorClass__Unowned)
inline VectorClass__Weak::ADV_CLASS_WEAK_CTOR_REF(VectorClass__Weak)
inline VectorClass__Weak& VectorClass__Weak::ADV_CLASS_WEAK_ASSIGN_REF(VectorClass__Weak)
inline decltype(auto) VectorClass::getCount2() { return __class::Count2; }
inline void VectorClass::setCount2(const CppAdvance::i32& value) { __class::Count2 = value; }
inline decltype(auto) VectorClass::getZERO() { return __class::ZERO; }
#line 243 "FirstProgram.adv"
inline VectorClass::operator CppAdvance::f32() const noexcept{ ADV_EXPRESSION_BODY(__ref().operator CppAdvance::f32()); }
inline VectorClass__Unowned::operator CppAdvance::f32() const noexcept{ ADV_EXPRESSION_BODY(__ref().operator CppAdvance::f32()); }
#line 265 "FirstProgram.adv"
inline decltype(auto) VectorClass::operator[](CppAdvance::i32 idx) const { ADV_EXPRESSION_BODY(__ref().operator[](idx)); }
inline decltype(auto) VectorClass__Unowned::operator[](CppAdvance::i32 idx) const { ADV_EXPRESSION_BODY(__ref().operator[](idx)); }
#line 275 "FirstProgram.adv"
inline decltype(auto) VectorClass::_operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3) const { ADV_EXPRESSION_BODY(__ref()._operator_subscript(idx, idx2, idx3)); }
inline decltype(auto) VectorClass__Unowned::_operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3) const { ADV_EXPRESSION_BODY(__ref()._operator_subscript(idx, idx2, idx3)); }

#line 9999 "FirstProgram.adv"
inline ConcreteVectorClass::ADV_CLASS_DEFAULT_CTOR(ConcreteVectorClass)
inline ConcreteVectorClass::ADV_CLASS_STRONG_CTOR_REF(ConcreteVectorClass)
inline ConcreteVectorClass& ConcreteVectorClass::ADV_CLASS_STRONG_ASSIGN_REF(ConcreteVectorClass)
inline ConcreteVectorClass__Unowned::ADV_CLASS_UNOWNED_CTOR_REF(ConcreteVectorClass__Unowned)
inline ConcreteVectorClass__Unowned& ConcreteVectorClass__Unowned::ADV_CLASS_UNOWNED_ASSIGN_REF(ConcreteVectorClass__Unowned)
inline ConcreteVectorClass__Weak::ADV_CLASS_WEAK_CTOR_REF(ConcreteVectorClass__Weak)
inline ConcreteVectorClass__Weak& ConcreteVectorClass__Weak::ADV_CLASS_WEAK_ASSIGN_REF(ConcreteVectorClass__Weak)
#line 312 "FirstProgram.adv"
inline ConcreteVectorClass::ConcreteVectorClass(CppAdvance::i32 i)noexcept : ___super(new (::operator new(sizeof(__class))) __class(i)) {}
#line 332 "FirstProgram.adv"
inline decltype(auto) ConcreteVectorClass::operator+(CppAdvance::In<__self> other) const { ADV_EXPRESSION_BODY(__ref().operator+(other)); }
inline decltype(auto) ConcreteVectorClass__Unowned::operator+(CppAdvance::In<__self> other) const { ADV_EXPRESSION_BODY(__ref().operator+(other)); }

#line 9999 "FirstProgram.adv"
inline Next::ADV_CLASS_DEFAULT_CTOR(Next)
inline Next::ADV_CLASS_STRONG_CTOR_REF(Next)
inline Next& Next::ADV_CLASS_STRONG_ASSIGN_REF(Next)
inline Next__Unowned::ADV_CLASS_UNOWNED_CTOR_REF(Next__Unowned)
inline Next__Unowned& Next__Unowned::ADV_CLASS_UNOWNED_ASSIGN_REF(Next__Unowned)
inline Next__Weak::ADV_CLASS_WEAK_CTOR_REF(Next__Weak)
inline Next__Weak& Next__Weak::ADV_CLASS_WEAK_ASSIGN_REF(Next__Weak)
#line 353 "FirstProgram.adv"
inline decltype(auto) Next::operator*() const { ADV_EXPRESSION_BODY(__ref().operator*()); }
inline decltype(auto) Next__Unowned::operator*() const { ADV_EXPRESSION_BODY(__ref().operator*()); }

