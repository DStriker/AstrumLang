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
template<class T> class IMagicNumber;
template<class T> class IMagicNumber__Unowned;
template<class T> class IMagicNumber__Weak;
class IResettable;
class IResettable__Unowned;
class IResettable__Weak;
template<class T> class IInterface;
template<class T> class IInterface__Unowned;
template<class T> class IInterface__Weak;
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
	#line 145 "FirstProgram.adv"
	public: inline constexpr auto GetMagicNumber(CppAdvance::f32 i) const  -> CppAdvance::f32;
	#line 146 "FirstProgram.adv"
	public: inline auto DefaultMethod(CppAdvance::f32 f) const  -> CppAdvance::f32;
	#line 147 "FirstProgram.adv"
	public: inline constexpr auto Reset()  -> void;
	#line 155 "FirstProgram.adv"
	public: template<class U> inline constexpr auto TemplateMethod(U x, U y, U z)  -> Coords;
	
};
template<> inline constexpr bool CppAdvance::__details::cheapCopy<BaseClass> = false;
#line 173 "FirstProgram.adv"
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
#line 173 "FirstProgram.adv"
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
#line 173 "FirstProgram.adv"
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
#line 177 "FirstProgram.adv"
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
	#line 214 "FirstProgram.adv"
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
		#line 225 "FirstProgram.adv"
		public: inline constexpr static decltype(auto) count(CppAdvance::i32 i) ;
		#define ADV_PROPERTY_SELF __self
	};
	#line 214 "FirstProgram.adv"
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
	#line 214 "FirstProgram.adv"
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
	#line 214 "FirstProgram.adv"
	class __Class_NestedClass : public CppAdvance::Object {
		private: using __self = NestedClass;
		private: using ___super = CppAdvance::Object;
		private: using __selfClass = __Class_NestedClass;
		friend class __self;
		friend class __self::__weak_ref;
		#define ADV_PROPERTY_SELF __selfClass
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 216 "FirstProgram.adv"
		public: CppAdvance::f32 x; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
		#line 217 "FirstProgram.adv"
		public: CppAdvance::f32 y; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
		#line 218 "FirstProgram.adv"
		public: CppAdvance::f32 z; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
		#line 220 "FirstProgram.adv"
		public: inline constexpr __Class_NestedClass(CppAdvance::f32 x, CppAdvance::f32 y, CppAdvance::f32 z) noexcept;
		#line 225 "FirstProgram.adv"
		public: inline constexpr static auto count(CppAdvance::i32 i)  -> CppAdvance::i32;
		
#define ADV_PROPERTY_SELF __self
	};
	#line 214 "FirstProgram.adv"
	ADV_CHECK_FOR_CONCRETE(NestedClass);
	
	public: static decltype(auto) getCount2();
	static void setCount2(const CppAdvance::i32& value);
	ADV_PROPERTY_GETTER_SETTER_STATIC(public, TESTDLL_API, Count2, public, getCount2, public, setCount2, CppAdvance::i32);
	public: static decltype(auto) getZERO();
	ADV_PROPERTY_GETTER_STATIC(public, TESTDLL_API, ZERO, getZERO, Vector3);
	#define ADV_PROPERTY_SELF __class
	#line 251 "FirstProgram.adv"
	public: inline  operator CppAdvance::f32() const noexcept;
	#line 273 "FirstProgram.adv"
	public: inline decltype(auto) operator[](CppAdvance::i32 idx) const ;
	#line 283 "FirstProgram.adv"
	public: inline decltype(auto) _operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3) const ;
	#line 289 "FirstProgram.adv"
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
#line 177 "FirstProgram.adv"
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
	#line 251 "FirstProgram.adv"
	public: inline  operator CppAdvance::f32() const noexcept;
	#line 273 "FirstProgram.adv"
	public: inline decltype(auto) operator[](CppAdvance::i32 idx) const ;
	#line 283 "FirstProgram.adv"
	public: inline decltype(auto) _operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3) const ;
	
};
#line 177 "FirstProgram.adv"
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
#line 321 "FirstProgram.adv"
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
	#line 328 "FirstProgram.adv"
	public: inline  ConcreteVectorClass(CppAdvance::i32 i) noexcept;
	#line 348 "FirstProgram.adv"
	public: inline decltype(auto) operator+(CppAdvance::In<__self> other) const ;
	#define ADV_PROPERTY_SELF __self
};
#line 321 "FirstProgram.adv"
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
	#line 348 "FirstProgram.adv"
	public: inline decltype(auto) operator+(CppAdvance::In<__self> other) const ;
	
};
#line 321 "FirstProgram.adv"
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
#line 355 "FirstProgram.adv"
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
	#line 372 "FirstProgram.adv"
	public: inline decltype(auto) operator*() const ;
	#define ADV_PROPERTY_SELF __self
};
#line 355 "FirstProgram.adv"
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
	#line 372 "FirstProgram.adv"
	public: inline decltype(auto) operator*() const ;
	
};
#line 355 "FirstProgram.adv"
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

template<class T> inline constexpr bool CppAdvance::__details::cheapCopy<IMagicNumber<T>> = false;
#line 380 "FirstProgram.adv"
template<class __AnyType, class T> concept __HasMethodImplementation_61fc0fee41f68054 = requires(typename __AnyType::__class t) { {t.GetMagicNumber(std::declval<T>())} -> std::convertible_to<CppAdvance::f32>; } || requires(typename __AnyType::__class t) { {GetMagicNumber(t, std::declval<T>())} -> std::convertible_to<CppAdvance::f32>; };
namespace __vtables {
	#line 379 "FirstProgram.adv"
	template<class T> struct __vtable_IMagicNumber
	{
		using fn_61fc0fee41f68054 = CppAdvance::f32(CppAdvance::Object*, T f);
		fn_61fc0fee41f68054* fnptr_61fc0fee41f68054;
		#line 380 "FirstProgram.adv"
		template<class __AnyType> static CppAdvance::f32 impl_61fc0fee41f68054(CppAdvance::Object* obj, T f) { ADV_EXPRESSION_BODY(ADV_UFCS(GetMagicNumber)(*static_cast<typename __AnyType::__class*>(obj), f)); }
		
	};
}
#line 379 "FirstProgram.adv"
template<class __AnyType, class T> inline constexpr __vtables::__vtable_IMagicNumber<T> __vtable_IMagicNumber_for = {&__vtables::__vtable_IMagicNumber<T>::template impl_61fc0fee41f68054<__AnyType>
	};
#line 379 "FirstProgram.adv"
template<class __AnyType, class T> concept __ImplementsInterface_IMagicNumber = __HasMethodImplementation_61fc0fee41f68054<__AnyType, T>;
#line 379 "FirstProgram.adv"
template<class T> class IMagicNumber final : public CppAdvance::InterfaceRef {
	private: using __self = IMagicNumber<T>;
	public: using __vtable = __vtables::__vtable_IMagicNumber<T>;
	public: using __class = CppAdvance::Object;
	public: using ___super = CppAdvance::InterfaceRef;
	private: friend class IMagicNumber__Unowned<T>;
	friend class IMagicNumber__Weak<T>;
	public: using __strong_ref = __self;
	public: using __unowned_ref = IMagicNumber__Unowned<T>;
	public: using __weak_ref = IMagicNumber__Weak<T>;
	public: template<class __AnyType> static constexpr bool __ImplementsInterface = __ImplementsInterface_IMagicNumber<__AnyType, T>;
	public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
	private: const __vtable* _vtable;
	ADV_INTERFACE_STRONG_COMMON_CTORS(IMagicNumber);
	public: template<class> friend class IMagicNumber;
	public: template<class> friend class IMagicNumber__Unowned;
	public: template<class> friend class IMagicNumber__Weak;
	public: template<class Other__T> requires std::derived_from<T, Other__T> IMagicNumber(const IMagicNumber<Other__T>& other) : ___super(other._obj), _vtable{ reinterpret_cast<const __vtable*>(other._vtable) } { CppAdvance::Retain(_obj); }
	public: template<class Other__T> requires std::derived_from<T, Other__T> IMagicNumber & operator=(const IMagicNumber < Other__T>& other) { if (_obj) CppAdvance::Release(_obj); _obj = other._obj; 
	_vtable = reinterpret_cast<const __vtable*>(other._vtable); CppAdvance::Retain(_obj); return *this; }
	public: template<class Other__T> requires std::derived_from<T, Other__T> IMagicNumber(IMagicNumber < Other__T>&& other) : ___super(other._obj), _vtable{ reinterpret_cast<const __vtable*>(other._vtable) } { other._obj = nullptr; other._vtable = nullptr; }
	public: template<class Other__T> requires std::derived_from<T, Other__T> IMagicNumber & operator=(IMagicNumber < Other__T>&& other) { if (_obj) CppAdvance::Release(_obj); _obj = other._obj; 
	_vtable = reinterpret_cast<const __vtable*>(other._vtable); other._obj = nullptr; other._vtable = nullptr; return *this; }
	public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, CppAdvance::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
	IMagicNumber(const __AnyType& value) : ___super(CppAdvance::GetObjectReference(&value)), _vtable{ CppAdvance::GetVTableFromInterface(&value) } 
	{
		CppAdvance::Retain(_obj);
	}
	public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, CppAdvance::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable> && std::is_rvalue_reference_v<__AnyType&&>
	IMagicNumber(__AnyType&& value) : ___super(CppAdvance::GetObjectReference(&value)), _vtable{ CppAdvance::GetVTableFromInterface(&value) } 
	{
		CppAdvance::ClearObjectReference(&value);
	}
	public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, CppAdvance::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
	IMagicNumber& operator=(const __AnyType& value) { if (_obj) CppAdvance::Release(_obj); _obj = CppAdvance::GetObjectReference(&value); CppAdvance::Retain(_obj); _vtable = CppAdvance::GetVTableFromInterface(&value); return *this; } 
	public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, CppAdvance::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable> && std::is_rvalue_reference_v<__AnyType&&>
	IMagicNumber& operator=(__AnyType&& value) { if (_obj) CppAdvance::Release(_obj); _obj = CppAdvance::GetObjectReference(&value); _vtable = CppAdvance::GetVTableFromInterface(&value); CppAdvance::ClearObjectReference(&value); return *this; } 
	public: template<class __AnyType> requires __ImplementsInterface_IMagicNumber<__AnyType, T> IMagicNumber(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
	{
		if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(&value); CppAdvance::Retain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
			else static_assert(false, "Incompatible interfaces");
		} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(&value); CppAdvance::Retain(_obj);
			_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>, T>;
		} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value)); CppAdvance::Retain(_obj);
			_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>, T>;
		} else if constexpr (std::is_base_of_v<CppAdvance::Object, std::remove_cvref_t<__AnyType>>) {
		_obj = &value; CppAdvance::Retain(_obj); _vtable = &__vtable_IMagicNumber_for<typename std::remove_cvref_t<__AnyType>::__self, T>;
		} else if constexpr (std::is_base_of_v<CppAdvance::Struct, std::remove_cvref_t<__AnyType>>) {
		_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
			_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>, T>;
		} else static_assert(false,"Not implemented yet");
	}
	public: template<class __AnyType> requires __ImplementsInterface_IMagicNumber<__AnyType, T> IMagicNumber(__AnyType&& value) : ___super(nullptr), _vtable{ nullptr } 
	{
		if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(&value); CppAdvance::ClearObjectReference(&value); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
			else static_assert(false, "Incompatible interfaces");
		} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(&value); CppAdvance::ClearObjectReference(&value);
			_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>, T>;
		} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value)); CppAdvance::Retain(_obj);
			_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>, T>;
		} else if constexpr (std::is_base_of_v<CppAdvance::Object, std::remove_cvref_t<__AnyType>>) {
		_obj = &value; CppAdvance::Retain(_obj);_vtable = &__vtable_IMagicNumber_for<typename std::remove_cvref_t<__AnyType>::__self, T>;
		} else if constexpr (std::is_base_of_v<CppAdvance::Struct, std::remove_cvref_t<__AnyType>>) {
		_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
			_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>, T>;
		} else static_assert(false,"Not implemented yet");
	}
	public: template<class __AnyType> requires __ImplementsInterface_IMagicNumber<__AnyType, T> IMagicNumber& operator=(const __AnyType& value) {
		if (_obj) CppAdvance::Release(_obj);
		if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(&value); CppAdvance::Retain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
			else static_assert(false, "Incompatible interfaces");
		} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(&value); CppAdvance::Retain(_obj);
			_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>, T>;
		} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value)); CppAdvance::Retain(_obj);
			_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>, T>;
		} else if constexpr (std::is_base_of_v<CppAdvance::Object, std::remove_cvref_t<__AnyType>>) {
		_obj = &value; CppAdvance::Retain(_obj);_vtable = &__vtable_IMagicNumber_for<typename std::remove_cvref_t<__AnyType>::__self, T>;
		} else if constexpr (std::is_base_of_v<CppAdvance::Struct, std::remove_cvref_t<__AnyType>>) {
		_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
			_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>, T>;
		} else static_assert(false,"Not implemented yet"); return *this;
	}
	public: template<class __AnyType> requires __ImplementsInterface_IMagicNumber<__AnyType, T> IMagicNumber& operator=(__AnyType&& value) {
		if (_obj) CppAdvance::Release(_obj);
		if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(&value); CppAdvance::ClearObjectReference(&value); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
			else static_assert(false, "Incompatible interfaces");
		} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(&value); CppAdvance::ClearObjectReference(&value);
			_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>, T>;
		} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value)); CppAdvance::Retain(_obj);
			_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>, T>;
		} else if constexpr (std::is_base_of_v<CppAdvance::Object, std::remove_cvref_t<__AnyType>>) {
		_obj = &value; CppAdvance::Retain(_obj);_vtable = &__vtable_IMagicNumber_for<typename std::remove_cvref_t<__AnyType>::__self, T>;
		} else if constexpr (std::is_base_of_v<CppAdvance::Struct, std::remove_cvref_t<__AnyType>>) {
		_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
			_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>, T>;
		} else static_assert(false,"Not implemented yet"); return *this;
	}
	
};
template<class T> class IMagicNumber__Unowned final : public CppAdvance::InterfaceRef__Unowned {
	private: using __self = IMagicNumber__Unowned<T>;
	public: using __vtable = __vtables::__vtable_IMagicNumber<T>;
	public: using __class = CppAdvance::Object;
	public: using ___super = CppAdvance::InterfaceRef__Unowned;
	private: friend class IMagicNumber<T>;
	public: using __strong_ref = IMagicNumber<T>;
	public: using __unowned_ref = __self;
	public: using __weak_ref = IMagicNumber__Weak<T>;
	public: FORCE_INLINE decltype(auto) __ref() noexcept { UnownedCheck(_obj); return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { UnownedCheck(_obj); return *this; }
	private: const __vtable* _vtable;
	ADV_INTERFACE_UNOWNED_COMMON_CTORS(IMagicNumber__Unowned);
	public: template<class> friend class IMagicNumber;
	public: template<class Other__T> requires std::derived_from<T, Other__T> IMagicNumber__Unowned(const IMagicNumber<Other__T>& other) : ___super(other._obj), _vtable{ reinterpret_cast<const __vtable*>(other._vtable) } { CppAdvance::UnownedRetain(_obj); }
	public: template<class Other__T> requires std::derived_from<T, Other__T> IMagicNumber__Unowned& operator=(const IMagicNumber < Other__T>& other) { if (_obj) CppAdvance::UnownedRelease(_obj); _obj = other._obj; 
	_vtable = reinterpret_cast<const __vtable*>(other._vtable); CppAdvance::UnownedRetain(_obj); return *this; }
	public: template<class Other__T> requires std::derived_from<T, Other__T> IMagicNumber__Unowned(IMagicNumber < Other__T>&& other) : ___super(other._obj), _vtable{ reinterpret_cast<const __vtable*>(other._vtable) } { other._obj = nullptr; other._vtable = nullptr; }
	public: template<class Other__T> requires std::derived_from<T, Other__T> IMagicNumber__Unowned& operator=(IMagicNumber < Other__T>&& other) { if (_obj) CppAdvance::UnownedRelease(_obj); _obj = other._obj; 
	_vtable = reinterpret_cast<const __vtable*>(other._vtable); other._obj = nullptr; other._vtable = nullptr; return *this; }
	public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, CppAdvance::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
	IMagicNumber__Unowned(const __AnyType& value) : ___super(CppAdvance::GetObjectReference(&value)), _vtable{ CppAdvance::GetVTableFromInterface(&value) } 
	{
		CppAdvance::UnownedRetain(_obj);
	}
	public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, CppAdvance::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
	IMagicNumber__Unowned& operator=(const __AnyType& value) { if (_obj) CppAdvance::UnownedRelease(_obj); _obj = CppAdvance::GetObjectReference(&value); CppAdvance::UnownedRetain(_obj); _vtable = CppAdvance::GetVTableFromInterface(&value); return *this; } 
	public: template<class __AnyType> requires __ImplementsInterface_IMagicNumber<__AnyType, T> IMagicNumber__Unowned(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
	{
		if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReferenceFromInterface(&value); CppAdvance::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
			else static_assert(false, "Incompatible interfaces");
		} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(&value); CppAdvance::UnownedRetain(_obj);
			_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>, T>;
		} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value)); CppAdvance::UnownedRetain(_obj);
			_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>, T>;
		} else static_assert(false,"Cannot to create unowned reference from this object");
	}
	public: template<class __AnyType> requires __ImplementsInterface_IMagicNumber<__AnyType, T> IMagicNumber__Unowned(__AnyType&& value) : ___super(nullptr), _vtable{ nullptr } 
	{
		if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReferenceFromInterface(&value); CppAdvance::UnownedRetain(_obj);if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
			else static_assert(false, "Incompatible interfaces");
		} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(&value); CppAdvance::UnownedRetain(_obj);
			_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>, T>;
		} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value)); CppAdvance::ClearObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value));
			_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>, T>;
		} else static_assert(false,"Cannot to create unowned reference from this object");
	}
	public: template<class __AnyType> requires __ImplementsInterface_IMagicNumber<__AnyType, T> IMagicNumber__Unowned& operator=(const __AnyType& value) {
		if (_obj) CppAdvance::Release(_obj);
		if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReferenceFromInterface(&value); CppAdvance::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
			else static_assert(false, "Incompatible interfaces");
		} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(&value); CppAdvance::UnownedRetain(_obj);
			_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>, T>;
		} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value)); CppAdvance::UnownedRetain(_obj);
			_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>, T>;
		} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
	}
	public: template<class __AnyType> requires __ImplementsInterface_IMagicNumber<__AnyType, T> IMagicNumber__Unowned& operator=(__AnyType&& value) {
		if (_obj) CppAdvance::Release(_obj);
		if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReferenceFromInterface(&value); CppAdvance::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
			else static_assert(false, "Incompatible interfaces");
		} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(&value); CppAdvance::UnownedRetain(_obj);
			_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>, T>;
		} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value)); CppAdvance::ClearObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value));
			_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>, T>;
		} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
	}
	
};
template<class T> class IMagicNumber__Weak final : public CppAdvance::ObjectRef__Weak {
	private: using __self = IMagicNumber__Weak<T>;
	public: using __vtable = __vtables::__vtable_IMagicNumber<T>;
	public: using __class = CppAdvance::Object;
	public: using ___super = CppAdvance::ObjectRef__Weak;
	private: friend class IMagicNumber<T>;
	public: using __strong_ref = IMagicNumber<T>;
	public: using __unowned_ref = IMagicNumber__Unowned<T>;
	public: using __weak_ref = __self;
	public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
	private: const __vtable* _vtable;
	ADV_INTERFACE_WEAK_COMMON_CTORS(IMagicNumber__Weak);
	public: template<class> friend class IMagicNumber;
	public: template<class Other__T> requires std::derived_from<T, Other__T> IMagicNumber__Weak(const IMagicNumber<Other__T>& other) : ___super(formWeakRef(other._obj)), _vtable{ reinterpret_cast<const __vtable*>(other._vtable) } {}
	public: template<class Other__T> requires std::derived_from<T, Other__T> IMagicNumber__Weak& operator=(const IMagicNumber < Other__T>& other) { if (!_obj || other._obj != _obj->unsafeGetObject()) { if (_obj) _obj->decrementWeak(); _obj = formWeakRef(other._obj); 
	_vtable = reinterpret_cast<const __vtable*>(other._vtable); } return *this; }
	public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, CppAdvance::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
	IMagicNumber__Weak(const __AnyType& value) : ___super(formWeakRef(CppAdvance::GetObjectReferenceFromInterface(&value))), _vtable{ CppAdvance::GetVTableFromInterface(&value) } 
	{}
	public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, CppAdvance::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
	IMagicNumber__Weak& operator=(const __AnyType& value) { if (_obj) _obj->decrementWeak(); _obj = formWeakRef(CppAdvance::GetObjectReferenceFromInterface(&value)); _vtable = CppAdvance::GetVTableFromInterface(&value); return *this; } 
	public: template<class __AnyType> requires __ImplementsInterface_IMagicNumber<__AnyType, T> IMagicNumber__Weak(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
	{
		if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
		_obj = formWeakRef(CppAdvance::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
			else static_assert(false, "Incompatible interfaces");
		} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
		_obj = formWeakRef(CppAdvance::GetObjectReference(&value)); 
			_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>, T>;
		} else static_assert(false,"Cannot to create unowned reference from this object");
	}
	public: template<class __AnyType> requires __ImplementsInterface_IMagicNumber<__AnyType, T> IMagicNumber__Weak& operator=(const __AnyType& value) {
		if (_obj) _obj->decrementWeak();
		if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
		_obj = formWeakRef(CppAdvance::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
			else static_assert(false, "Incompatible interfaces");
		} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
		_obj = formWeakRef(CppAdvance::GetObjectReference(&value)); 
			_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>, T>;
		} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
	}
	
};
template<class T> FORCE_INLINE CppAdvance::f32 GetMagicNumber(IMagicNumber<T> iface, T f)  { ADV_EXPRESSION_BODY(CppAdvance::GetVTableFromInterface(&iface)->fnptr_61fc0fee41f68054(CppAdvance::GetObjectReferenceFromInterface(&iface), f)); }

template<> inline constexpr bool CppAdvance::__details::cheapCopy<IResettable> = false;
#line 384 "FirstProgram.adv"
template<class __AnyType> concept __HasMethodImplementation_565bebff34b81aa1 = requires(typename __AnyType::__class t) { {t.Reset()} -> std::same_as<void>; } || requires(typename __AnyType::__class t) { {Reset(t)} -> std::same_as<void>; };
namespace __vtables {
	#line 383 "FirstProgram.adv"
	struct __vtable_IResettable
	{
		using fn_565bebff34b81aa1 = void(CppAdvance::Object*);
		fn_565bebff34b81aa1* fnptr_565bebff34b81aa1;
		#line 384 "FirstProgram.adv"
		template<class __AnyType> static void impl_565bebff34b81aa1(CppAdvance::Object* obj) { ADV_EXPRESSION_BODY(ADV_UFCS(Reset)(*static_cast<typename __AnyType::__class*>(obj))); }
		
	};
}
#line 383 "FirstProgram.adv"
template<class __AnyType> inline constexpr __vtables::__vtable_IResettable __vtable_IResettable_for = {&__vtables::__vtable_IResettable::template impl_565bebff34b81aa1<__AnyType>
	};
#line 383 "FirstProgram.adv"
template<class __AnyType> concept __ImplementsInterface_IResettable = __HasMethodImplementation_565bebff34b81aa1<__AnyType>;
#line 383 "FirstProgram.adv"
class IResettable final : public CppAdvance::InterfaceRef {
	private: using __self = IResettable;
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
		CppAdvance::ClearObjectReference(&value);
	}
	public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, CppAdvance::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
	IResettable& operator=(const __AnyType& value) { if (_obj) CppAdvance::Release(_obj); _obj = CppAdvance::GetObjectReference(&value); CppAdvance::Retain(_obj); _vtable = CppAdvance::GetVTableFromInterface(&value); return *this; } 
	public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, CppAdvance::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable> && std::is_rvalue_reference_v<__AnyType&&>
	IResettable& operator=(__AnyType&& value) { if (_obj) CppAdvance::Release(_obj); _obj = CppAdvance::GetObjectReference(&value); _vtable = CppAdvance::GetVTableFromInterface(&value); CppAdvance::ClearObjectReference(&value); return *this; } 
	public: template<class __AnyType> requires __ImplementsInterface_IResettable<__AnyType> IResettable(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
	{
		if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(&value); CppAdvance::Retain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
			else static_assert(false, "Incompatible interfaces");
		} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(&value); CppAdvance::Retain(_obj);
			_vtable = &__vtable_IResettable_for<std::remove_cvref_t<__AnyType>>;
		} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value)); CppAdvance::Retain(_obj);
			_vtable = &__vtable_IResettable_for<std::remove_cvref_t<__AnyType>>;
		} else if constexpr (std::is_base_of_v<CppAdvance::Object, std::remove_cvref_t<__AnyType>>) {
		_obj = &value; CppAdvance::Retain(_obj); _vtable = &__vtable_IResettable_for<typename std::remove_cvref_t<__AnyType>::__self>;
		} else if constexpr (std::is_base_of_v<CppAdvance::Struct, std::remove_cvref_t<__AnyType>>) {
		_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
			_vtable = &__vtable_IResettable_for<std::remove_cvref_t<__AnyType>>;
		} else static_assert(false,"Not implemented yet");
	}
	public: template<class __AnyType> requires __ImplementsInterface_IResettable<__AnyType> IResettable(__AnyType&& value) : ___super(nullptr), _vtable{ nullptr } 
	{
		if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(&value); CppAdvance::ClearObjectReference(&value); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
			else static_assert(false, "Incompatible interfaces");
		} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(&value); CppAdvance::ClearObjectReference(&value);
			_vtable = &__vtable_IResettable_for<std::remove_cvref_t<__AnyType>>;
		} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value)); CppAdvance::Retain(_obj);
			_vtable = &__vtable_IResettable_for<std::remove_cvref_t<__AnyType>>;
		} else if constexpr (std::is_base_of_v<CppAdvance::Object, std::remove_cvref_t<__AnyType>>) {
		_obj = &value; CppAdvance::Retain(_obj);_vtable = &__vtable_IResettable_for<typename std::remove_cvref_t<__AnyType>::__self>;
		} else if constexpr (std::is_base_of_v<CppAdvance::Struct, std::remove_cvref_t<__AnyType>>) {
		_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
			_vtable = &__vtable_IResettable_for<std::remove_cvref_t<__AnyType>>;
		} else static_assert(false,"Not implemented yet");
	}
	public: template<class __AnyType> requires __ImplementsInterface_IResettable<__AnyType> IResettable& operator=(const __AnyType& value) {
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
		} else if constexpr (std::is_base_of_v<CppAdvance::Object, std::remove_cvref_t<__AnyType>>) {
		_obj = &value; CppAdvance::Retain(_obj);_vtable = &__vtable_IResettable_for<typename std::remove_cvref_t<__AnyType>::__self>;
		} else if constexpr (std::is_base_of_v<CppAdvance::Struct, std::remove_cvref_t<__AnyType>>) {
		_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
			_vtable = &__vtable_IResettable_for<std::remove_cvref_t<__AnyType>>;
		} else static_assert(false,"Not implemented yet"); return *this;
	}
	public: template<class __AnyType> requires __ImplementsInterface_IResettable<__AnyType> IResettable& operator=(__AnyType&& value) {
		if (_obj) CppAdvance::Release(_obj);
		if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(&value); CppAdvance::ClearObjectReference(&value); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
			else static_assert(false, "Incompatible interfaces");
		} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(&value); CppAdvance::ClearObjectReference(&value);
			_vtable = &__vtable_IResettable_for<std::remove_cvref_t<__AnyType>>;
		} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value)); CppAdvance::Retain(_obj);
			_vtable = &__vtable_IResettable_for<std::remove_cvref_t<__AnyType>>;
		} else if constexpr (std::is_base_of_v<CppAdvance::Object, std::remove_cvref_t<__AnyType>>) {
		_obj = &value; CppAdvance::Retain(_obj);_vtable = &__vtable_IResettable_for<typename std::remove_cvref_t<__AnyType>::__self>;
		} else if constexpr (std::is_base_of_v<CppAdvance::Struct, std::remove_cvref_t<__AnyType>>) {
		_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
			_vtable = &__vtable_IResettable_for<std::remove_cvref_t<__AnyType>>;
		} else static_assert(false,"Not implemented yet"); return *this;
	}
	
};
class IResettable__Unowned final : public CppAdvance::InterfaceRef__Unowned {
	private: using __self = IResettable__Unowned;
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
	public: template<class __AnyType> requires __ImplementsInterface_IResettable<__AnyType> IResettable__Unowned(__AnyType&& value) : ___super(nullptr), _vtable{ nullptr } 
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
	public: template<class __AnyType> requires __ImplementsInterface_IResettable<__AnyType> IResettable__Unowned& operator=(__AnyType&& value) {
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
	private: using __self = IResettable__Weak;
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
FORCE_INLINE void Reset(IResettable iface)  { ADV_EXPRESSION_BODY(CppAdvance::GetVTableFromInterface(&iface)->fnptr_565bebff34b81aa1(CppAdvance::GetObjectReferenceFromInterface(&iface))); }

template<class T> inline constexpr bool CppAdvance::__details::cheapCopy<IInterface<T>> = false;
#line 388 "FirstProgram.adv"
template<class __AnyType, class T> concept __HasMethodImplementation_5d97f8870752785f = requires(typename __AnyType::__class t) { {t.DefaultMethod(std::declval<T>())} -> std::convertible_to<CppAdvance::f32>; } || requires(typename __AnyType::__class t) { {DefaultMethod(t, std::declval<T>())} -> std::convertible_to<CppAdvance::f32>; };
namespace __vtables {
	#line 387 "FirstProgram.adv"
	template<class T> struct __vtable_IInterface : public IMagicNumber<T>::__vtable, public IResettable::__vtable
	{
		using fn_5d97f8870752785f = CppAdvance::f32(CppAdvance::Object*, T f);
		fn_5d97f8870752785f* fnptr_5d97f8870752785f;
		#line 388 "FirstProgram.adv"
		template<class __AnyType> static CppAdvance::f32 impl_5d97f8870752785f(CppAdvance::Object* obj, T f) { 
			if constexpr(__HasMethodImplementation_5d97f8870752785f<__AnyType, T>) {
				ADV_EXPRESSION_BODY(ADV_UFCS(DefaultMethod)(*static_cast<typename __AnyType::__class*>(obj), f)); 
			} else { throw 0; }
		}
		
	};
}
#line 387 "FirstProgram.adv"
template<class __AnyType, class T> inline constexpr __vtables::__vtable_IInterface<T> __vtable_IInterface_for = {__vtable_IMagicNumber_for<__AnyType, T>
	, __vtable_IResettable_for<__AnyType>
	, __HasMethodImplementation_5d97f8870752785f<__AnyType, T> ? &__vtables::__vtable_IInterface<T>::template impl_5d97f8870752785f<__AnyType> : nullptr
	};
#line 387 "FirstProgram.adv"
template<class __AnyType, class T> concept __ImplementsInterface_IInterface = __ImplementsInterface_IMagicNumber<__AnyType, T> && __ImplementsInterface_IResettable<__AnyType>;
#line 387 "FirstProgram.adv"
template<class T> class IInterface final : public CppAdvance::InterfaceRef {
	private: using __self = IInterface<T>;
	public: using __vtable = __vtables::__vtable_IInterface<T>;
	public: using __class = CppAdvance::Object;
	public: using ___super = CppAdvance::InterfaceRef;
	private: friend class IInterface__Unowned<T>;
	friend class IInterface__Weak<T>;
	public: using __strong_ref = __self;
	public: using __unowned_ref = IInterface__Unowned<T>;
	public: using __weak_ref = IInterface__Weak<T>;
	public: template<class __AnyType> static constexpr bool __ImplementsInterface = __ImplementsInterface_IInterface<__AnyType, T>;
	public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
	private: const __vtable* _vtable;
	ADV_INTERFACE_STRONG_COMMON_CTORS(IInterface);
	public: template<class> friend class IInterface;
	public: template<class> friend class IInterface__Unowned;
	public: template<class> friend class IInterface__Weak;
	public: template<class Other__T> requires std::derived_from<T, Other__T> IInterface(const IInterface<Other__T>& other) : ___super(other._obj), _vtable{ reinterpret_cast<const __vtable*>(other._vtable) } { CppAdvance::Retain(_obj); }
	public: template<class Other__T> requires std::derived_from<T, Other__T> IInterface & operator=(const IInterface < Other__T>& other) { if (_obj) CppAdvance::Release(_obj); _obj = other._obj; 
	_vtable = reinterpret_cast<const __vtable*>(other._vtable); CppAdvance::Retain(_obj); return *this; }
	public: template<class Other__T> requires std::derived_from<T, Other__T> IInterface(IInterface < Other__T>&& other) : ___super(other._obj), _vtable{ reinterpret_cast<const __vtable*>(other._vtable) } { other._obj = nullptr; other._vtable = nullptr; }
	public: template<class Other__T> requires std::derived_from<T, Other__T> IInterface & operator=(IInterface < Other__T>&& other) { if (_obj) CppAdvance::Release(_obj); _obj = other._obj; 
	_vtable = reinterpret_cast<const __vtable*>(other._vtable); other._obj = nullptr; other._vtable = nullptr; return *this; }
	public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, CppAdvance::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
	IInterface(const __AnyType& value) : ___super(CppAdvance::GetObjectReference(&value)), _vtable{ CppAdvance::GetVTableFromInterface(&value) } 
	{
		CppAdvance::Retain(_obj);
	}
	public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, CppAdvance::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable> && std::is_rvalue_reference_v<__AnyType&&>
	IInterface(__AnyType&& value) : ___super(CppAdvance::GetObjectReference(&value)), _vtable{ CppAdvance::GetVTableFromInterface(&value) } 
	{
		CppAdvance::ClearObjectReference(&value);
	}
	public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, CppAdvance::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
	IInterface& operator=(const __AnyType& value) { if (_obj) CppAdvance::Release(_obj); _obj = CppAdvance::GetObjectReference(&value); CppAdvance::Retain(_obj); _vtable = CppAdvance::GetVTableFromInterface(&value); return *this; } 
	public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, CppAdvance::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable> && std::is_rvalue_reference_v<__AnyType&&>
	IInterface& operator=(__AnyType&& value) { if (_obj) CppAdvance::Release(_obj); _obj = CppAdvance::GetObjectReference(&value); _vtable = CppAdvance::GetVTableFromInterface(&value); CppAdvance::ClearObjectReference(&value); return *this; } 
	public: template<class __AnyType> requires __ImplementsInterface_IInterface<__AnyType, T> IInterface(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
	{
		if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(&value); CppAdvance::Retain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
			else static_assert(false, "Incompatible interfaces");
		} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(&value); CppAdvance::Retain(_obj);
			_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>, T>;
		} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value)); CppAdvance::Retain(_obj);
			_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>, T>;
		} else if constexpr (std::is_base_of_v<CppAdvance::Object, std::remove_cvref_t<__AnyType>>) {
		_obj = &value; CppAdvance::Retain(_obj); _vtable = &__vtable_IInterface_for<typename std::remove_cvref_t<__AnyType>::__self, T>;
		} else if constexpr (std::is_base_of_v<CppAdvance::Struct, std::remove_cvref_t<__AnyType>>) {
		_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
			_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>, T>;
		} else static_assert(false,"Not implemented yet");
	}
	public: template<class __AnyType> requires __ImplementsInterface_IInterface<__AnyType, T> IInterface(__AnyType&& value) : ___super(nullptr), _vtable{ nullptr } 
	{
		if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(&value); CppAdvance::ClearObjectReference(&value); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
			else static_assert(false, "Incompatible interfaces");
		} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(&value); CppAdvance::ClearObjectReference(&value);
			_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>, T>;
		} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value)); CppAdvance::Retain(_obj);
			_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>, T>;
		} else if constexpr (std::is_base_of_v<CppAdvance::Object, std::remove_cvref_t<__AnyType>>) {
		_obj = &value; CppAdvance::Retain(_obj);_vtable = &__vtable_IInterface_for<typename std::remove_cvref_t<__AnyType>::__self, T>;
		} else if constexpr (std::is_base_of_v<CppAdvance::Struct, std::remove_cvref_t<__AnyType>>) {
		_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
			_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>, T>;
		} else static_assert(false,"Not implemented yet");
	}
	public: template<class __AnyType> requires __ImplementsInterface_IInterface<__AnyType, T> IInterface& operator=(const __AnyType& value) {
		if (_obj) CppAdvance::Release(_obj);
		if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(&value); CppAdvance::Retain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
			else static_assert(false, "Incompatible interfaces");
		} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(&value); CppAdvance::Retain(_obj);
			_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>, T>;
		} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value)); CppAdvance::Retain(_obj);
			_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>, T>;
		} else if constexpr (std::is_base_of_v<CppAdvance::Object, std::remove_cvref_t<__AnyType>>) {
		_obj = &value; CppAdvance::Retain(_obj);_vtable = &__vtable_IInterface_for<typename std::remove_cvref_t<__AnyType>::__self, T>;
		} else if constexpr (std::is_base_of_v<CppAdvance::Struct, std::remove_cvref_t<__AnyType>>) {
		_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
			_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>, T>;
		} else static_assert(false,"Not implemented yet"); return *this;
	}
	public: template<class __AnyType> requires __ImplementsInterface_IInterface<__AnyType, T> IInterface& operator=(__AnyType&& value) {
		if (_obj) CppAdvance::Release(_obj);
		if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(&value); CppAdvance::ClearObjectReference(&value); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
			else static_assert(false, "Incompatible interfaces");
		} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(&value); CppAdvance::ClearObjectReference(&value);
			_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>, T>;
		} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value)); CppAdvance::Retain(_obj);
			_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>, T>;
		} else if constexpr (std::is_base_of_v<CppAdvance::Object, std::remove_cvref_t<__AnyType>>) {
		_obj = &value; CppAdvance::Retain(_obj);_vtable = &__vtable_IInterface_for<typename std::remove_cvref_t<__AnyType>::__self, T>;
		} else if constexpr (std::is_base_of_v<CppAdvance::Struct, std::remove_cvref_t<__AnyType>>) {
		_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
			_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>, T>;
		} else static_assert(false,"Not implemented yet"); return *this;
	}
	public: CppAdvance::f32 __default_DefaultMethod(T f) ;
	
};
template<class T> class IInterface__Unowned final : public CppAdvance::InterfaceRef__Unowned {
	private: using __self = IInterface__Unowned<T>;
	public: using __vtable = __vtables::__vtable_IInterface<T>;
	public: using __class = CppAdvance::Object;
	public: using ___super = CppAdvance::InterfaceRef__Unowned;
	private: friend class IInterface<T>;
	public: using __strong_ref = IInterface<T>;
	public: using __unowned_ref = __self;
	public: using __weak_ref = IInterface__Weak<T>;
	public: FORCE_INLINE decltype(auto) __ref() noexcept { UnownedCheck(_obj); return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { UnownedCheck(_obj); return *this; }
	private: const __vtable* _vtable;
	ADV_INTERFACE_UNOWNED_COMMON_CTORS(IInterface__Unowned);
	public: template<class> friend class IInterface;
	public: template<class Other__T> requires std::derived_from<T, Other__T> IInterface__Unowned(const IInterface<Other__T>& other) : ___super(other._obj), _vtable{ reinterpret_cast<const __vtable*>(other._vtable) } { CppAdvance::UnownedRetain(_obj); }
	public: template<class Other__T> requires std::derived_from<T, Other__T> IInterface__Unowned& operator=(const IInterface < Other__T>& other) { if (_obj) CppAdvance::UnownedRelease(_obj); _obj = other._obj; 
	_vtable = reinterpret_cast<const __vtable*>(other._vtable); CppAdvance::UnownedRetain(_obj); return *this; }
	public: template<class Other__T> requires std::derived_from<T, Other__T> IInterface__Unowned(IInterface < Other__T>&& other) : ___super(other._obj), _vtable{ reinterpret_cast<const __vtable*>(other._vtable) } { other._obj = nullptr; other._vtable = nullptr; }
	public: template<class Other__T> requires std::derived_from<T, Other__T> IInterface__Unowned& operator=(IInterface < Other__T>&& other) { if (_obj) CppAdvance::UnownedRelease(_obj); _obj = other._obj; 
	_vtable = reinterpret_cast<const __vtable*>(other._vtable); other._obj = nullptr; other._vtable = nullptr; return *this; }
	public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, CppAdvance::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
	IInterface__Unowned(const __AnyType& value) : ___super(CppAdvance::GetObjectReference(&value)), _vtable{ CppAdvance::GetVTableFromInterface(&value) } 
	{
		CppAdvance::UnownedRetain(_obj);
	}
	public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, CppAdvance::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
	IInterface__Unowned& operator=(const __AnyType& value) { if (_obj) CppAdvance::UnownedRelease(_obj); _obj = CppAdvance::GetObjectReference(&value); CppAdvance::UnownedRetain(_obj); _vtable = CppAdvance::GetVTableFromInterface(&value); return *this; } 
	public: template<class __AnyType> requires __ImplementsInterface_IInterface<__AnyType, T> IInterface__Unowned(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
	{
		if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReferenceFromInterface(&value); CppAdvance::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
			else static_assert(false, "Incompatible interfaces");
		} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(&value); CppAdvance::UnownedRetain(_obj);
			_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>, T>;
		} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value)); CppAdvance::UnownedRetain(_obj);
			_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>, T>;
		} else static_assert(false,"Cannot to create unowned reference from this object");
	}
	public: template<class __AnyType> requires __ImplementsInterface_IInterface<__AnyType, T> IInterface__Unowned(__AnyType&& value) : ___super(nullptr), _vtable{ nullptr } 
	{
		if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReferenceFromInterface(&value); CppAdvance::UnownedRetain(_obj);if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
			else static_assert(false, "Incompatible interfaces");
		} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(&value); CppAdvance::UnownedRetain(_obj);
			_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>, T>;
		} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value)); CppAdvance::ClearObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value));
			_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>, T>;
		} else static_assert(false,"Cannot to create unowned reference from this object");
	}
	public: template<class __AnyType> requires __ImplementsInterface_IInterface<__AnyType, T> IInterface__Unowned& operator=(const __AnyType& value) {
		if (_obj) CppAdvance::Release(_obj);
		if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReferenceFromInterface(&value); CppAdvance::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
			else static_assert(false, "Incompatible interfaces");
		} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(&value); CppAdvance::UnownedRetain(_obj);
			_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>, T>;
		} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value)); CppAdvance::UnownedRetain(_obj);
			_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>, T>;
		} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
	}
	public: template<class __AnyType> requires __ImplementsInterface_IInterface<__AnyType, T> IInterface__Unowned& operator=(__AnyType&& value) {
		if (_obj) CppAdvance::Release(_obj);
		if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReferenceFromInterface(&value); CppAdvance::UnownedRetain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
			else static_assert(false, "Incompatible interfaces");
		} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(&value); CppAdvance::UnownedRetain(_obj);
			_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>, T>;
		} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value)); CppAdvance::ClearObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value));
			_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>, T>;
		} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
	}
	
};
template<class T> class IInterface__Weak final : public CppAdvance::ObjectRef__Weak {
	private: using __self = IInterface__Weak<T>;
	public: using __vtable = __vtables::__vtable_IInterface<T>;
	public: using __class = CppAdvance::Object;
	public: using ___super = CppAdvance::ObjectRef__Weak;
	private: friend class IInterface<T>;
	public: using __strong_ref = IInterface<T>;
	public: using __unowned_ref = IInterface__Unowned<T>;
	public: using __weak_ref = __self;
	public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
	private: const __vtable* _vtable;
	ADV_INTERFACE_WEAK_COMMON_CTORS(IInterface__Weak);
	public: template<class> friend class IInterface;
	public: template<class Other__T> requires std::derived_from<T, Other__T> IInterface__Weak(const IInterface<Other__T>& other) : ___super(formWeakRef(other._obj)), _vtable{ reinterpret_cast<const __vtable*>(other._vtable) } {}
	public: template<class Other__T> requires std::derived_from<T, Other__T> IInterface__Weak& operator=(const IInterface < Other__T>& other) { if (!_obj || other._obj != _obj->unsafeGetObject()) { if (_obj) _obj->decrementWeak(); _obj = formWeakRef(other._obj); 
	_vtable = reinterpret_cast<const __vtable*>(other._vtable); } return *this; }
	public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, CppAdvance::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
	IInterface__Weak(const __AnyType& value) : ___super(formWeakRef(CppAdvance::GetObjectReferenceFromInterface(&value))), _vtable{ CppAdvance::GetVTableFromInterface(&value) } 
	{}
	public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, CppAdvance::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
	IInterface__Weak& operator=(const __AnyType& value) { if (_obj) _obj->decrementWeak(); _obj = formWeakRef(CppAdvance::GetObjectReferenceFromInterface(&value)); _vtable = CppAdvance::GetVTableFromInterface(&value); return *this; } 
	public: template<class __AnyType> requires __ImplementsInterface_IInterface<__AnyType, T> IInterface__Weak(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
	{
		if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
		_obj = formWeakRef(CppAdvance::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
			else static_assert(false, "Incompatible interfaces");
		} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
		_obj = formWeakRef(CppAdvance::GetObjectReference(&value)); 
			_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>, T>;
		} else static_assert(false,"Cannot to create unowned reference from this object");
	}
	public: template<class __AnyType> requires __ImplementsInterface_IInterface<__AnyType, T> IInterface__Weak& operator=(const __AnyType& value) {
		if (_obj) _obj->decrementWeak();
		if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
		_obj = formWeakRef(CppAdvance::GetObjectReferenceFromInterface(&value)); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
			else static_assert(false, "Incompatible interfaces");
		} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
		_obj = formWeakRef(CppAdvance::GetObjectReference(&value)); 
			_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>, T>;
		} else static_assert(false,"Cannot to create unowned reference from this object"); return *this;
	}
	
};
template<class T> FORCE_INLINE CppAdvance::f32 DefaultMethod(IInterface<T> iface, T f)  {
	auto func = CppAdvance::GetVTableFromInterface(&iface)->fnptr_5d97f8870752785f;
	if (func) { ADV_EXPRESSION_BODY(func(CppAdvance::GetObjectReferenceFromInterface(&iface), f)); }
	else { ADV_EXPRESSION_BODY(iface.__default_DefaultMethod(f)); }
}


#line 56 "FirstProgram.adv"
class __Class_Vector3 final : public CppAdvance::ValueType
{
	#line 9999 "FirstProgram.adv"
	Vector3 __value;
	public: using __underlying = Vector3; using __self = __underlying;
	using NestedStruct = __self::NestedStruct;
	__Class_Vector3(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
	operator __underlying() const noexcept { return __value; }
	auto getName() const -> CppAdvance::Str { return __value.getName(); }
	auto Equals(const IEquatable& other) const noexcept -> bool { ADV_EXPRESSION_BODY(__value.Equals(other)); }
	auto format() const noexcept -> CppAdvance::Str { ADV_EXPRESSION_BODY(__value.format()); }
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
	auto GetMagicNumber(CppAdvance::f32 i) const  -> CppAdvance::f32 { ADV_EXPRESSION_BODY(__value.GetMagicNumber(i)); }
	auto DefaultMethod(CppAdvance::f32 f) const  -> CppAdvance::f32 { ADV_EXPRESSION_BODY(__value.DefaultMethod(f)); }
	auto Reset() -> void { ADV_EXPRESSION_BODY(__value.Reset()); }
	
};
#line 56 "FirstProgram.adv"
ADV_CHECK_FOR_CONCRETE(Vector3);

#line 173 "FirstProgram.adv"
class __Class_BaseClass : public CppAdvance::Object {
	private: using __self = BaseClass;
	private: using ___super = CppAdvance::Object;
	private: using __selfClass = __Class_BaseClass;
	friend class __self;
	friend class __self::__weak_ref;
	#define ADV_PROPERTY_SELF __selfClass
	public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
	#line 174 "FirstProgram.adv"
	public: inline virtual auto getNext() const  -> Next;
	
#define ADV_PROPERTY_SELF __self
};
#line 173 "FirstProgram.adv"
ADV_CHECK_FOR_CONCRETE(BaseClass);

#line 177 "FirstProgram.adv"
class ADV_NOVTABLE __Class_VectorClass ADV_ABSTRACT : public CppAdvance::ClassParent<BaseClass> {
	private: using __self = VectorClass;
	private: using ___super = CppAdvance::ClassParent<BaseClass>;
	private: using __selfClass = __Class_VectorClass;
	friend class __self;
	friend class __self::__weak_ref;
	#define ADV_PROPERTY_SELF __selfClass
	public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
	public: using NestedClass = __self::NestedClass;
	#line 186 "FirstProgram.adv"
	private: friend class TestStruct; friend class __Class_TestStruct;
	#line 187 "FirstProgram.adv"
	private: template<class T> friend class TestStruct2; template<class T> friend class __Class_TestStruct2;
	#line 188 "FirstProgram.adv"
	private: friend CppAdvance::i32 func3(CppAdvance::i32 x);
	#line 180 "FirstProgram.adv"
	public: CppAdvance::f32 x; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
	#line 180 "FirstProgram.adv"
	public: CppAdvance::f32 y; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
	#line 180 "FirstProgram.adv"
	public: CppAdvance::f32 z; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
	#line 209 "FirstProgram.adv"
	public: TESTDLL_API static CppAdvance::i32 Count2; ADV_CHECK_REF_STRUCT("i32", CppAdvance::i32);
	#line 211 "FirstProgram.adv"
	public: TESTDLL_API static const Vector3 ZERO; ADV_CHECK_REF_STRUCT("Vector3", Vector3);
	#line 210 "FirstProgram.adv"
	public: static constexpr auto BYTES = CppAdvance::i32(24);
	#line 212 "FirstProgram.adv"
	public: using Coords = __ntuples::NamedTuple_6893f862d6c49683;
	#line 204 "FirstProgram.adv"
	private: CppAdvance::i32 p_Count; ADV_CHECK_REF_STRUCT("i32", CppAdvance::i32);
	#line 204 "FirstProgram.adv"
	public: virtual auto setCount(const CppAdvance::i32& value) -> __selfClass& = 0;
	#line 204 "FirstProgram.adv"
	public: virtual auto getCount() const  -> CppAdvance::i32 = 0;
	#line 9999 "FirstProgram.adv"
	ADV_PROPERTY_GETTER_SETTER(public, Count, public, getCount, public, setCount, CppAdvance::i32);
	#line 207 "FirstProgram.adv"
	public: virtual auto getName() const  -> CppAdvance::Str = 0;
	#line 9999 "FirstProgram.adv"
	ADV_PROPERTY_GETTER(public, Name, getName, CppAdvance::Str);
	#line 190 "FirstProgram.adv"
	public: inline constexpr auto Equals(const IEquatable& other) const noexcept -> bool;
	#line 191 "FirstProgram.adv"
	public: inline constexpr auto format() const noexcept -> CppAdvance::Str;
	#line 229 "FirstProgram.adv"
	protected: inline constexpr __Class_VectorClass()  = default;
	#line 231 "FirstProgram.adv"
	protected: inline constexpr __Class_VectorClass(CppAdvance::f32 x, CppAdvance::f32 y, CppAdvance::f32 z) noexcept;
	#line 237 "FirstProgram.adv"
	protected: template<class U> inline constexpr explicit __Class_VectorClass(U f) ;
	#line 242 "FirstProgram.adv"
	protected: inline explicit __Class_VectorClass(CppAdvance::In<__self> other) ;
	inline __Class_VectorClass(__selfClass& copy) : __Class_VectorClass(__self(copy)) {}
	#line 246 "FirstProgram.adv"
	public: inline ~__Class_VectorClass() noexcept;
	#line 251 "FirstProgram.adv"
	public: inline  operator CppAdvance::f32() const noexcept;
	#line 253 "FirstProgram.adv"
	public: inline auto increment()  -> __selfClass& LIFETIMEBOUND;
	#line 9999 "FirstProgram.adv"
	private: template<class __IdxT = CppAdvance::f32> struct __IndexerAccessor_273 {
		private:
		__Class_VectorClass& _parent;
		CppAdvance::i32 _idx;
		 friend class VectorClass;
		public:
		FORCE_INLINE __IndexerAccessor_273(__Class_VectorClass& parent, CppAdvance::i32 idx) : _parent(parent), _idx(idx) {}
		FORCE_INLINE __IndexerAccessor_273(__Class_VectorClass const& parent, CppAdvance::i32 idx) : _parent(const_cast<std::remove_cvref_t<decltype(parent)>&>(parent)), _idx(idx) {}
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
		template<class Ch> friend FORCE_INLINE decltype(auto) operator<<(std::basic_ostream<Ch>& stream, const __IndexerAccessor_273<__IdxT>& elem) { return stream << elem.__ref(); }
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

	friend struct __IndexerAccessor_273<CppAdvance::f32>;
	inline CppAdvance::f32 getAt(CppAdvance::i32 idx);
	inline const CppAdvance::f32 getAt(CppAdvance::i32 idx) const;
	inline void setAt(CppAdvance::i32 idx, const CppAdvance::f32& value);
	#line 273 "FirstProgram.adv"
	public: inline auto operator[](CppAdvance::i32 idx)  -> __IndexerAccessor_273<CppAdvance::f32>;
	public: inline auto operator[](CppAdvance::i32 idx) const  -> const __IndexerAccessor_273<CppAdvance::f32>;
	#line 283 "FirstProgram.adv"
	public: inline auto _operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3)  -> CppAdvance::f32;
	public: inline auto _operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3) const  -> const CppAdvance::f32;
	#line 285 "FirstProgram.adv"
	public: virtual auto getX() const  -> CppAdvance::f32 = 0;
	#line 286 "FirstProgram.adv"
	public: inline virtual auto getNext() const  -> Next final;
	#line 289 "FirstProgram.adv"
	public: inline constexpr static auto Method(CppAdvance::i32 x, CppAdvance::i32 y, CppAdvance::i32 z)  -> CppAdvance::i32;
	#line 294 "FirstProgram.adv"
	public: inline constexpr auto Reset()  -> void;
	#line 302 "FirstProgram.adv"
	public: template<class U> inline constexpr auto TemplateMethod(U x, U y, U z)  -> Coords;
	
#define ADV_PROPERTY_SELF __self
};
#line 177 "FirstProgram.adv"
ADV_CHECK_FOR_ABSTRACT(VectorClass);
#line 177 "FirstProgram.adv"
ADV_CHECK_INTERFACE_IMPLEMENTATION(VectorClass, BaseClass, BaseClass, VectorClass);

#line 321 "FirstProgram.adv"
class __Class_ConcreteVectorClass : public CppAdvance::ClassParent<VectorClass> {
	private: using __self = ConcreteVectorClass;
	private: using ___super = CppAdvance::ClassParent<VectorClass>;
	private: using __selfClass = __Class_ConcreteVectorClass;
	friend class __self;
	friend class __self::__weak_ref;
	#define ADV_PROPERTY_SELF __selfClass
	#line 321 "FirstProgram.adv"
	ADV_CHECK_INTERFACE(IInterface<ConcreteVectorClass>, IInterface<ConcreteVectorClass>);
	public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
	#line 332 "FirstProgram.adv"
	public: inline constexpr auto getName() const  -> CppAdvance::Str;
	#line 9999 "FirstProgram.adv"
	ADV_PROPERTY_GETTER(public, Name, getName, CppAdvance::Str);
	#line 334 "FirstProgram.adv"
	private: CppAdvance::i32 p_Count = CppAdvance::i32(1); ADV_CHECK_REF_STRUCT("i32", CppAdvance::i32);
	#line 339 "FirstProgram.adv"
	private: TESTDLL_API virtual auto setCount(const CppAdvance::i32& value) -> __selfClass& final;
	#line 335 "FirstProgram.adv"
	public: TESTDLL_API virtual auto getCount() const  -> CppAdvance::i32 final;
	#line 9999 "FirstProgram.adv"
	ADV_PROPERTY_GETTER_SETTER(public, Count, public, getCount, private, setCount, CppAdvance::i32);
	#line 322 "FirstProgram.adv"
	public: inline constexpr __Class_ConcreteVectorClass()  = default;
	#line 324 "FirstProgram.adv"
	public: inline constexpr __Class_ConcreteVectorClass(CppAdvance::f32 x, CppAdvance::f32 y, CppAdvance::f32 z) noexcept;
	#line 328 "FirstProgram.adv"
	public: inline constexpr  __Class_ConcreteVectorClass(CppAdvance::i32 i) noexcept;
	#line 346 "FirstProgram.adv"
	public: inline virtual auto getX() const  -> CppAdvance::f32 final;
	#line 348 "FirstProgram.adv"
	public: inline auto operator+(CppAdvance::In<__self> other) const  -> __self;
	#line 349 "FirstProgram.adv"
	public: inline auto GetMagicNumber(CppAdvance::In<ConcreteVectorClass> i) const  -> CppAdvance::f32;
	
#define ADV_PROPERTY_SELF __self
};
#line 321 "FirstProgram.adv"
ADV_CHECK_FOR_CONCRETE(ConcreteVectorClass);
#line 321 "FirstProgram.adv"
ADV_CHECK_INTERFACE_IMPLEMENTATION(ConcreteVectorClass, VectorClass, VectorClass, ConcreteVectorClass);
#line 321 "FirstProgram.adv"
ADV_CHECK_INTERFACE_IMPLEMENTATION(ConcreteVectorClass, IInterface, IInterface<ConcreteVectorClass>, ConcreteVectorClass);

#line 355 "FirstProgram.adv"
class __Class_Next : public CppAdvance::Object {
	private: using __self = Next;
	private: using ___super = CppAdvance::Object;
	private: using __selfClass = __Class_Next;
	friend class __self;
	friend class __self::__weak_ref;
	#define ADV_PROPERTY_SELF __selfClass
	public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
	#line 356 "FirstProgram.adv"
	public: CppAdvance::i32 i; ADV_CHECK_REF_STRUCT("i32", CppAdvance::i32);
	#line 357 "FirstProgram.adv"
	public: CppAdvance::Nullable<Next>::__weak_ref v;
	#line 359 "FirstProgram.adv"
	public: inline __Class_Next()  = default;
	#line 361 "FirstProgram.adv"
	public: inline ~__Class_Next() ;
	#line 363 "FirstProgram.adv"
	public: inline explicit __Class_Next(CppAdvance::i32 i) ;
	#line 368 "FirstProgram.adv"
	public: inline explicit __Class_Next(CppAdvance::In<__self> other) ;
	inline __Class_Next(__selfClass& copy) : __Class_Next(__self(copy)) {}
	#line 372 "FirstProgram.adv"
	public: inline auto operator*() const  -> CppAdvance::i32;
	#line 374 "FirstProgram.adv"
	public: inline auto printNext() const  -> void;
	
#define ADV_PROPERTY_SELF __self
};
#line 355 "FirstProgram.adv"
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
#line 352 "FirstProgram.adv"
inline auto GetMagicNumber(CppAdvance::In<VectorClass> vec, VectorClass i)  -> CppAdvance::f32;
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
#line 145 "FirstProgram.adv"
inline constexpr auto Vector3::GetMagicNumber(CppAdvance::f32 i) const  -> CppAdvance::f32
{
	#line 145 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(i * x); 
}
#line 146 "FirstProgram.adv"
inline auto Vector3::DefaultMethod(CppAdvance::f32 f) const  -> CppAdvance::f32
{
	#line 146 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(f * CppAdvance::i32(15)); 
}
#line 147 "FirstProgram.adv"
inline constexpr auto Vector3::Reset()  -> void
{
	#line 148 "FirstProgram.adv"
	x = CppAdvance::i32(0);
	#line 149 "FirstProgram.adv"
	y = CppAdvance::i32(0);
	#line 150 "FirstProgram.adv"
	z = CppAdvance::i32(0);
}
#line 155 "FirstProgram.adv"
template<class U> inline constexpr auto Vector3::TemplateMethod(U x, U y, U z)  -> typename Vector3::Coords
{
	#line 156 "FirstProgram.adv"
	class __Class_LocalStruct;
	#line 156 "FirstProgram.adv"
	struct LocalStruct : public CppAdvance::Struct
	{
		private: using __self = LocalStruct;
		public: using __class = __Class_LocalStruct;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 157 "FirstProgram.adv"
		#line 157 "FirstProgram.adv"
		public: CppAdvance::f32 x{}; 
		#line 157 "FirstProgram.adv"
		public: CppAdvance::f32 y{}; 
		#line 157 "FirstProgram.adv"
		public: CppAdvance::f32 z{}; 
		#line 157 "FirstProgram.adv"
		private: __FirstProgram_Protected::Test111 p_tt;
		#line 161 "FirstProgram.adv"
		private: inline auto settt(const __FirstProgram_Protected::Test111& value) -> __self& { p_tt = value; return *this; }
		#line 161 "FirstProgram.adv"
		public: inline auto gettt() const  -> __FirstProgram_Protected::Test111 { return p_tt; }
		#line 9999 "FirstProgram.adv"
		ADV_PROPERTY_GETTER_SETTER(public, tt, public, gettt, private, settt, __FirstProgram_Protected::Test111);
		
		
	};
	#line 156 "FirstProgram.adv"
	class __Class_LocalStruct : public CppAdvance::ValueType
	{
		#line 9999 "FirstProgram.adv"
		LocalStruct __value;
		public: using __underlying = LocalStruct; using __self = __underlying;
		__Class_LocalStruct(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
		operator __underlying() const noexcept { return __value; }
		auto gettt() const -> __FirstProgram_Protected::Test111 { return __value.gettt(); }
		
	};
	#line 166 "FirstProgram.adv"
	(*this)[CppAdvance::i32(0)] = CppAdvance::i32(13);
	#line 168 "FirstProgram.adv"
	return { x, y, z };
}
#line 174 "FirstProgram.adv"
inline auto __Class_BaseClass::getNext() const  -> Next
{
	#line 174 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(CppAdvance::New<Next>(CppAdvance::i32(5))); 
}
#line 190 "FirstProgram.adv"
inline constexpr auto __Class_VectorClass::Equals(const IEquatable& other) const noexcept -> bool
{
	#line 190 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(true); 
}
#line 191 "FirstProgram.adv"
inline constexpr auto __Class_VectorClass::format() const noexcept -> CppAdvance::Str
{
	#line 191 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(CppAdvance::Str{u"test"}); 
}
#line 220 "FirstProgram.adv"
inline constexpr VectorClass::__Class_NestedClass::__Class_NestedClass(CppAdvance::f32 x, CppAdvance::f32 y, CppAdvance::f32 z) noexcept : 
#line 221 "FirstProgram.adv"
x{x}, 
#line 222 "FirstProgram.adv"
y{y}, 
#line 223 "FirstProgram.adv"
z{z}
{
}
#line 225 "FirstProgram.adv"
inline constexpr auto VectorClass::__Class_NestedClass::count(CppAdvance::i32 i)  -> CppAdvance::i32
{
	#line 225 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(i * CppAdvance::i32(10)); 
}
#line 231 "FirstProgram.adv"
inline constexpr __Class_VectorClass::__Class_VectorClass(CppAdvance::f32 x, CppAdvance::f32 y, CppAdvance::f32 z) noexcept : 
#line 232 "FirstProgram.adv"
x{x}, 
#line 233 "FirstProgram.adv"
y{y}, 
#line 234 "FirstProgram.adv"
z{z}
{
}
#line 237 "FirstProgram.adv"
template<class U> inline constexpr __Class_VectorClass::__Class_VectorClass(U f)  :
#line 238 "FirstProgram.adv"
__Class_VectorClass(f, f, f)
{
	#line 239 "FirstProgram.adv"
	this->x = f;
}
#line 242 "FirstProgram.adv"
inline __Class_VectorClass::__Class_VectorClass(CppAdvance::In<__self> other)  :
#line 243 "FirstProgram.adv"
__Class_VectorClass(other.__ref().x, other.__ref().y, other.__ref().z)
{
}
#line 246 "FirstProgram.adv"
inline __Class_VectorClass::~__Class_VectorClass() noexcept
{
	#line 246 "FirstProgram.adv"
	print(CppAdvance::Str{u"VectorClass deiniting"}); 
}
#line 251 "FirstProgram.adv"
inline __Class_VectorClass::operator CppAdvance::f32() const noexcept
{
	#line 251 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(y); 
}
#line 253 "FirstProgram.adv"
inline auto __Class_VectorClass::increment()  -> __selfClass&
{
	#line 254 "FirstProgram.adv"
	++x;
	#line 255 "FirstProgram.adv"
	++y;
	#line 256 "FirstProgram.adv"
	++z;
	#line 257 "FirstProgram.adv"
	++Count;
	#line 260 "FirstProgram.adv"
	return (*this);
}
#line 273 "FirstProgram.adv"
auto __Class_VectorClass::operator[](CppAdvance::i32 idx)  -> __IndexerAccessor_273<CppAdvance::f32>
{
	return __IndexerAccessor_273<CppAdvance::f32>{ *this, idx };
}

#line 273 "FirstProgram.adv"
auto __Class_VectorClass::operator[](CppAdvance::i32 idx)  const  -> const __IndexerAccessor_273<CppAdvance::f32>
{
	return __IndexerAccessor_273<CppAdvance::f32>{ *this, idx };
}

#line 274 "FirstProgram.adv"
auto __Class_VectorClass::getAt(CppAdvance::i32 idx)  -> CppAdvance::f32
{
	#line 275 "FirstProgram.adv"
	print(CppAdvance::Str{u"Read"});
	#line 276 "FirstProgram.adv"
	return x;
}
#line 274 "FirstProgram.adv"
auto __Class_VectorClass::getAt(CppAdvance::i32 idx) const  -> const CppAdvance::f32
{
	#line 275 "FirstProgram.adv"
	print(CppAdvance::Str{u"Read"});
	#line 276 "FirstProgram.adv"
	return x;
}
#line 278 "FirstProgram.adv"
auto __Class_VectorClass::setAt(CppAdvance::i32 idx, const CppAdvance::f32& value)  -> void 
{
	#line 279 "FirstProgram.adv"
	if (value < CppAdvance::i32(10)) {
		#line 279 "FirstProgram.adv"
		return ;
	}
	#line 280 "FirstProgram.adv"
	x = CppAdvance::i32(5);
}
#line 283 "FirstProgram.adv"
inline auto __Class_VectorClass::_operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3)  -> CppAdvance::f32
{
	#line 283 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(y + z); 
}
#line 283 "FirstProgram.adv"
inline auto __Class_VectorClass::_operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3)  const  -> const CppAdvance::f32
{
	#line 283 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(y + z); 
}
#line 286 "FirstProgram.adv"
inline auto __Class_VectorClass::getNext() const  -> Next
{
	#line 286 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(___super::getNext()); 
}
#line 289 "FirstProgram.adv"
inline constexpr auto __Class_VectorClass::Method(CppAdvance::i32 x, CppAdvance::i32 y, CppAdvance::i32 z)  -> CppAdvance::i32
{
	#line 290 "FirstProgram.adv"
	return y + z;
}
#line 294 "FirstProgram.adv"
inline constexpr auto __Class_VectorClass::Reset()  -> void
{
	#line 295 "FirstProgram.adv"
	x = CppAdvance::i32(0);
	#line 296 "FirstProgram.adv"
	y = CppAdvance::i32(0);
	#line 297 "FirstProgram.adv"
	z = CppAdvance::i32(0);
}
#line 302 "FirstProgram.adv"
template<class U> inline constexpr auto __Class_VectorClass::TemplateMethod(U x, U y, U z)  -> typename __Class_VectorClass::Coords
{
	#line 303 "FirstProgram.adv"
	class __Class_LocalStruct;
	#line 303 "FirstProgram.adv"
	struct LocalStruct : public CppAdvance::Struct
	{
		private: using __self = LocalStruct;
		public: using __class = __Class_LocalStruct;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 304 "FirstProgram.adv"
		#line 304 "FirstProgram.adv"
		public: CppAdvance::f32 x{}; 
		#line 304 "FirstProgram.adv"
		public: CppAdvance::f32 y{}; 
		#line 304 "FirstProgram.adv"
		public: CppAdvance::f32 z{}; 
		
		
	};
	#line 303 "FirstProgram.adv"
	class __Class_LocalStruct : public CppAdvance::ValueType
	{
		#line 9999 "FirstProgram.adv"
		LocalStruct __value;
		public: using __underlying = LocalStruct; using __self = __underlying;
		__Class_LocalStruct(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
		operator __underlying() const noexcept { return __value; }
		
	};
	#line 313 "FirstProgram.adv"
	(*this)[CppAdvance::i32(0)] = CppAdvance::i32(13);
	#line 315 "FirstProgram.adv"
	return { x, y, z };
}
#line 324 "FirstProgram.adv"
inline constexpr __Class_ConcreteVectorClass::__Class_ConcreteVectorClass(CppAdvance::f32 x, CppAdvance::f32 y, CppAdvance::f32 z) noexcept :
#line 325 "FirstProgram.adv"
___super(x, y, z)
{
}
#line 328 "FirstProgram.adv"
inline constexpr __Class_ConcreteVectorClass::__Class_ConcreteVectorClass(CppAdvance::i32 i) noexcept :
#line 329 "FirstProgram.adv"
___super(CppAdvance::f32{i}, CppAdvance::f32{i}, CppAdvance::f32{i})
{
}
#line 332 "FirstProgram.adv"
inline constexpr auto __Class_ConcreteVectorClass::getName() const  -> CppAdvance::Str 
{
	#line 332 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(CppAdvance::Str{u"VectorClass"}); 
}

#line 346 "FirstProgram.adv"
inline auto __Class_ConcreteVectorClass::getX() const  -> CppAdvance::f32
{
	#line 346 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(x); 
}
#line 348 "FirstProgram.adv"
inline auto __Class_ConcreteVectorClass::operator+(CppAdvance::In<__self> other) const  -> __self
{
	#line 348 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(CppAdvance::New<__self>((*this).__ref().x + other.__ref().x, (*this).__ref().y + other.__ref().y, (*this).__ref().z + other.__ref().z)); 
}
#line 349 "FirstProgram.adv"
inline auto __Class_ConcreteVectorClass::GetMagicNumber(CppAdvance::In<ConcreteVectorClass> i) const  -> CppAdvance::f32
{
	#line 349 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(y * i.__ref().y); 
}
#line 352 "FirstProgram.adv"
inline auto GetMagicNumber(CppAdvance::In<VectorClass> vec, VectorClass i)  -> CppAdvance::f32
{
	#line 352 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(vec.__ref().x * i.__ref().x); 
}
#line 361 "FirstProgram.adv"
inline __Class_Next::~__Class_Next() 
{
	#line 361 "FirstProgram.adv"
	print(CppAdvance::Str{u"Next deiniting"}); 
}
#line 363 "FirstProgram.adv"
inline __Class_Next::__Class_Next(CppAdvance::i32 i)  : 
#line 364 "FirstProgram.adv"
i{i}
{
}
#line 368 "FirstProgram.adv"
inline __Class_Next::__Class_Next(CppAdvance::In<__self> other)  : 
#line 369 "FirstProgram.adv"
i{CppAdvance::i32(0)}
{
}
#line 372 "FirstProgram.adv"
inline auto __Class_Next::operator*() const  -> CppAdvance::i32
{
	#line 372 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(i); 
}
#line 374 "FirstProgram.adv"
inline auto __Class_Next::printNext() const  -> void
{
	#line 375 "FirstProgram.adv"
	print(CppAdvance::Str{u"This is printNext function in optional chaining call"});
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
#line 251 "FirstProgram.adv"
inline VectorClass::operator CppAdvance::f32() const noexcept{ ADV_EXPRESSION_BODY(__ref().operator CppAdvance::f32()); }
inline VectorClass__Unowned::operator CppAdvance::f32() const noexcept{ ADV_EXPRESSION_BODY(__ref().operator CppAdvance::f32()); }
#line 273 "FirstProgram.adv"
inline decltype(auto) VectorClass::operator[](CppAdvance::i32 idx) const { ADV_EXPRESSION_BODY(__ref().operator[](idx)); }
inline decltype(auto) VectorClass__Unowned::operator[](CppAdvance::i32 idx) const { ADV_EXPRESSION_BODY(__ref().operator[](idx)); }
#line 283 "FirstProgram.adv"
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
#line 328 "FirstProgram.adv"
inline ConcreteVectorClass::ConcreteVectorClass(CppAdvance::i32 i)noexcept : ___super(new (::operator new(sizeof(__class))) __class(i)) {}
#line 348 "FirstProgram.adv"
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
#line 372 "FirstProgram.adv"
inline decltype(auto) Next::operator*() const { ADV_EXPRESSION_BODY(__ref().operator*()); }
inline decltype(auto) Next__Unowned::operator*() const { ADV_EXPRESSION_BODY(__ref().operator*()); }

template<class T> inline CppAdvance::f32 IInterface<T>::__default_DefaultMethod(T f) 
{
	#line 388 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(ADV_UFCS_TEMPLATE(GetMagicNumber<T>)((*this).__ref(), f)); 
}
