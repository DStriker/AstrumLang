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
	#line 54 "FirstProgram.adv"
	public: inline ~Span() noexcept;
	
};
class __Class_Vector3;
#line 57 "FirstProgram.adv"
struct Vector3 final : public CppAdvance::Struct {
	private: using __self = Vector3;
	public: using __class = __Class_Vector3;
	public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
	public: 
	class NestedStruct; class NestedStruct__Unowned; class NestedStruct__Weak; class __Class_NestedStruct;
	#line 96 "FirstProgram.adv"
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
		#line 101 "FirstProgram.adv"
		public: inline constexpr static decltype(auto) count(CppAdvance::i32 i) ;
		#define ADV_PROPERTY_SELF __self
	};
	#line 96 "FirstProgram.adv"
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
	#line 96 "FirstProgram.adv"
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
	#line 96 "FirstProgram.adv"
	class __Class_NestedStruct : public CppAdvance::Object {
		private: using __self = NestedStruct;
		private: using ___super = CppAdvance::Object;
		private: using __selfClass = __Class_NestedStruct;
		friend class __self;
		friend class __self::__weak_ref;
		#define ADV_PROPERTY_SELF __selfClass
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 98 "FirstProgram.adv"
		public: mutable CppAdvance::f32 x; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
		#line 99 "FirstProgram.adv"
		public: mutable CppAdvance::f32 y; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
		#line 100 "FirstProgram.adv"
		public: mutable CppAdvance::f32 z; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
		#line 101 "FirstProgram.adv"
		public: inline constexpr static auto count(CppAdvance::i32 i)  -> const CppAdvance::i32;
		
#define ADV_PROPERTY_SELF __self
	};
	#line 96 "FirstProgram.adv"
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
	#line 91 "FirstProgram.adv"
	private: static thread_local CppAdvance::i32 Count2; ADV_CHECK_REF_STRUCT("i32", CppAdvance::i32);
	#line 93 "FirstProgram.adv"
	public: TESTDLL_API static const Vector3 ZERO;
	public: constexpr Vector3(CppAdvance::f32 _x, CppAdvance::f32 _y, CppAdvance::f32 _z) : x{_x}, y{_y}, z{_z} {}
	#line 92 "FirstProgram.adv"
	public: static constexpr auto BYTES = CppAdvance::i32(24);
	#line 94 "FirstProgram.adv"
	private: using Coords = __ntuples::NamedTuple_6893f862d6c49683;
	#line 77 "FirstProgram.adv"
	private: static CppAdvance::i32 p_Count; ADV_CHECK_REF_STRUCT("i32", CppAdvance::i32);
	#line 82 "FirstProgram.adv"
	public: TESTDLL_API static auto setCount(const CppAdvance::i32& value) -> void;
	#line 78 "FirstProgram.adv"
	public: TESTDLL_API static auto getCount()  -> CppAdvance::i32;
	#line 9999 "FirstProgram.adv"
	ADV_PROPERTY_GETTER_SETTER_STATIC(public, TESTDLL_API, Count, public, getCount, public, setCount, CppAdvance::i32);
	#line 89 "FirstProgram.adv"
	public: inline constexpr auto getName() const  -> CppAdvance::Str;
	#line 9999 "FirstProgram.adv"
	ADV_PROPERTY_GETTER(public, Name, getName, CppAdvance::Str);
	#line 73 "FirstProgram.adv"
	public: inline constexpr auto Equals(const IEquatable& other) const noexcept -> const bool;
	#line 74 "FirstProgram.adv"
	public: inline constexpr auto format() const noexcept -> const CppAdvance::Str;
	#line 75 "FirstProgram.adv"
	public: inline constexpr auto HashCode() const  -> const CppAdvance::usize;
	#line 105 "FirstProgram.adv"
	public: inline constexpr Vector3()  = default;
	#line 107 "FirstProgram.adv"
	public: template<class U> inline constexpr  Vector3(U f) ;
	#line 112 "FirstProgram.adv"
	public: inline ~Vector3() noexcept;
	#line 114 "FirstProgram.adv"
	public: inline constexpr  operator CppAdvance::f32() const noexcept;
	#line 116 "FirstProgram.adv"
	public: inline auto operator+(const __self& other) const  -> const __self;
	#line 118 "FirstProgram.adv"
	public: inline auto operator++()  -> __self& LIFETIMEBOUND;
	public: inline auto operator++(int)  -> Vector3;
	#line 9999 "FirstProgram.adv"
	private: template<class __IdxT = CppAdvance::f32> struct __IndexerAccessor_128 {
		private:
		Vector3& _parent;
		CppAdvance::i32 _idx;
		 friend class Vector3;
		public:
		FORCE_INLINE __IndexerAccessor_128(Vector3& parent, CppAdvance::i32 idx) : _parent(parent), _idx(idx) {}
		FORCE_INLINE __IndexerAccessor_128(Vector3 const& parent, CppAdvance::i32 idx) : _parent(const_cast<std::remove_cvref_t<decltype(parent)>&>(parent)), _idx(idx) {}
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
		template<class Ch> friend FORCE_INLINE decltype(auto) operator<<(std::basic_ostream<Ch>& stream, const __IndexerAccessor_128<__IdxT>& elem) { return stream << elem.__ref(); }
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

	friend struct __IndexerAccessor_128<CppAdvance::f32>;
	public: inline const CppAdvance::f32 getAt(CppAdvance::i32 idx);
	inline const CppAdvance::f32 getAt(CppAdvance::i32 idx) const;
	public: inline void setAt(CppAdvance::i32 idx, const CppAdvance::f32& value);
	#line 128 "FirstProgram.adv"
	public: inline auto operator[](CppAdvance::i32 idx)  -> __IndexerAccessor_128<CppAdvance::f32>;
	public: inline auto operator[](CppAdvance::i32 idx) const  -> const __IndexerAccessor_128<CppAdvance::f32>;
	#line 138 "FirstProgram.adv"
	public: inline constexpr auto _operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3)  -> const CppAdvance::f32;
	public: inline constexpr auto _operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3) const  -> const CppAdvance::f32;
	#line 140 "FirstProgram.adv"
	public: inline constexpr auto getX() const  -> const CppAdvance::f32;
	#line 141 "FirstProgram.adv"
	public: inline auto getNext() const  -> const Next;
	#line 144 "FirstProgram.adv"
	public: inline constexpr static auto Method(CppAdvance::i32 x, CppAdvance::i32 y, CppAdvance::i32 z)  -> const CppAdvance::i32;
	#line 148 "FirstProgram.adv"
	public: inline constexpr auto GetMagicNumber(CppAdvance::f32 i) const  -> const CppAdvance::f32;
	#line 149 "FirstProgram.adv"
	public: inline auto DefaultMethod(CppAdvance::f32 f) const  -> const CppAdvance::f32;
	#line 150 "FirstProgram.adv"
	public: inline constexpr auto Reset()  -> void;
	#line 158 "FirstProgram.adv"
	public: template<class U> inline constexpr auto TemplateMethod(U x, U y, U z)  -> const Coords;
	
};
template<> inline constexpr bool CppAdvance::__details::cheapCopy<BaseClass> = false;
#line 176 "FirstProgram.adv"
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
#line 176 "FirstProgram.adv"
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
#line 176 "FirstProgram.adv"
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
#line 180 "FirstProgram.adv"
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
	#line 217 "FirstProgram.adv"
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
		#line 228 "FirstProgram.adv"
		public: inline constexpr static decltype(auto) count(CppAdvance::i32 i) ;
		#define ADV_PROPERTY_SELF __self
	};
	#line 217 "FirstProgram.adv"
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
	#line 217 "FirstProgram.adv"
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
	#line 217 "FirstProgram.adv"
	class __Class_NestedClass : public CppAdvance::Object {
		private: using __self = NestedClass;
		private: using ___super = CppAdvance::Object;
		private: using __selfClass = __Class_NestedClass;
		friend class __self;
		friend class __self::__weak_ref;
		#define ADV_PROPERTY_SELF __selfClass
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 219 "FirstProgram.adv"
		public: mutable CppAdvance::f32 x; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
		#line 220 "FirstProgram.adv"
		public: mutable CppAdvance::f32 y; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
		#line 221 "FirstProgram.adv"
		public: mutable CppAdvance::f32 z; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
		#line 223 "FirstProgram.adv"
		public: inline constexpr __Class_NestedClass(CppAdvance::f32 x, CppAdvance::f32 y, CppAdvance::f32 z) noexcept;
		#line 228 "FirstProgram.adv"
		public: inline constexpr static auto count(CppAdvance::i32 i)  -> const CppAdvance::i32;
		
#define ADV_PROPERTY_SELF __self
	};
	#line 217 "FirstProgram.adv"
	ADV_CHECK_FOR_CONCRETE(NestedClass);
	
	public: static decltype(auto) getCount2();
	static void setCount2(const CppAdvance::i32& value);
	ADV_PROPERTY_GETTER_SETTER_STATIC(public, TESTDLL_API, Count2, public, getCount2, public, setCount2, CppAdvance::i32);
	public: static decltype(auto) getZERO();
	ADV_PROPERTY_GETTER_STATIC(public, TESTDLL_API, ZERO, getZERO, Vector3);
	#define ADV_PROPERTY_SELF __class
	#line 254 "FirstProgram.adv"
	public: inline  operator CppAdvance::f32() const noexcept;
	#line 276 "FirstProgram.adv"
	public: inline decltype(auto) operator[](CppAdvance::i32 idx) const ;
	#line 286 "FirstProgram.adv"
	public: inline decltype(auto) _operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3) const ;
	#line 292 "FirstProgram.adv"
	public: inline constexpr static decltype(auto) Method(CppAdvance::i32 x, CppAdvance::i32 y, CppAdvance::i32 z) ;
	public: static constexpr decltype(auto) BYTES = CppAdvance::i32(24);
	public: using Coords = __ntuples::NamedTuple_6893f862d6c49683;
	friend class TestStruct;
	friend class __Class_TestStruct;
	template<class T> friend class TestStruct2;
	template<class T> friend class __Class_TestStruct2;
	friend const CppAdvance::i32 func3(CppAdvance::i32 x);
	#define ADV_PROPERTY_SELF __self
};
#line 180 "FirstProgram.adv"
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
	#line 254 "FirstProgram.adv"
	public: inline  operator CppAdvance::f32() const noexcept;
	#line 276 "FirstProgram.adv"
	public: inline decltype(auto) operator[](CppAdvance::i32 idx) const ;
	#line 286 "FirstProgram.adv"
	public: inline decltype(auto) _operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3) const ;
	
};
#line 180 "FirstProgram.adv"
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
#line 324 "FirstProgram.adv"
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
	#line 331 "FirstProgram.adv"
	public: inline  ConcreteVectorClass(CppAdvance::i32 i) noexcept;
	#line 353 "FirstProgram.adv"
	public: inline decltype(auto) operator+(CppAdvance::In<__self> other) const ;
	#define ADV_PROPERTY_SELF __self
};
#line 324 "FirstProgram.adv"
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
	#line 353 "FirstProgram.adv"
	public: inline decltype(auto) operator+(CppAdvance::In<__self> other) const ;
	
};
#line 324 "FirstProgram.adv"
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
#line 359 "FirstProgram.adv"
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
	#line 376 "FirstProgram.adv"
	public: inline decltype(auto) operator*() const ;
	#define ADV_PROPERTY_SELF __self
};
#line 359 "FirstProgram.adv"
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
	#line 376 "FirstProgram.adv"
	public: inline decltype(auto) operator*() const ;
	
};
#line 359 "FirstProgram.adv"
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

template<> inline constexpr bool CppAdvance::__details::cheapCopy<IMagicNumber> = false;
#line 384 "FirstProgram.adv"
template<class __AnyType> concept __HasMethodImplementation_a2e2f819fa3cd789 = requires(typename __AnyType::__class t) { {t.GetMagicNumber(std::declval<VectorClass>())} -> std::convertible_to<CppAdvance::f32>; } || requires(typename __AnyType::__class t) { {GetMagicNumber(t, std::declval<VectorClass>())} -> std::convertible_to<CppAdvance::f32>; };
namespace __vtables {
	#line 383 "FirstProgram.adv"
	struct __vtable_IMagicNumber
	{
		using fn_a2e2f819fa3cd789 = const CppAdvance::f32(CppAdvance::Object*, CppAdvance::In<VectorClass> f);
		fn_a2e2f819fa3cd789* fnptr_a2e2f819fa3cd789;
		#line 384 "FirstProgram.adv"
		template<class __AnyType> static const CppAdvance::f32 impl_a2e2f819fa3cd789(CppAdvance::Object* obj, CppAdvance::In<VectorClass> f) { ADV_EXPRESSION_BODY(ADV_UFCS(GetMagicNumber)(*static_cast<typename __AnyType::__class*>(obj), f)); }
		
	};
}
#line 383 "FirstProgram.adv"
template<class __AnyType> inline constexpr __vtables::__vtable_IMagicNumber __vtable_IMagicNumber_for = {&__vtables::__vtable_IMagicNumber::template impl_a2e2f819fa3cd789<__AnyType>
	};
#line 383 "FirstProgram.adv"
template<class __AnyType> concept __ImplementsInterface_IMagicNumber = __HasMethodImplementation_a2e2f819fa3cd789<__AnyType>;
#line 383 "FirstProgram.adv"
class IMagicNumber final : public CppAdvance::InterfaceRef {
	private: using __self = IMagicNumber;
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
	public: template<class __AnyType> requires __ImplementsInterface_IMagicNumber<__AnyType> IMagicNumber(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
	{
		if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(&value); CppAdvance::Retain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
			else static_assert(false, "Incompatible interfaces");
		} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(&value); CppAdvance::Retain(_obj);
			_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>>;
		} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value)); CppAdvance::Retain(_obj);
			_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>>;
		} else if constexpr (std::is_base_of_v<CppAdvance::Object, std::remove_cvref_t<__AnyType>>) {
		_obj = &value; CppAdvance::Retain(_obj); _vtable = &__vtable_IMagicNumber_for<typename std::remove_cvref_t<__AnyType>::__self>;
		} else if constexpr (std::is_base_of_v<CppAdvance::Struct, std::remove_cvref_t<__AnyType>>) {
		_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
			_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>>;
		} else static_assert(false,"Not implemented yet");
	}
	public: template<class __AnyType> requires __ImplementsInterface_IMagicNumber<__AnyType> IMagicNumber(__AnyType&& value) : ___super(nullptr), _vtable{ nullptr } 
	{
		if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(&value); CppAdvance::ClearObjectReference((CppAdvance::ObjectRef*)&value); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
			else static_assert(false, "Incompatible interfaces");
		} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(&value); CppAdvance::ClearObjectReference((CppAdvance::ObjectRef*)&value);
			_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>>;
		} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value)); CppAdvance::Retain(_obj);
			_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>>;
		} else if constexpr (std::is_base_of_v<CppAdvance::Object, std::remove_cvref_t<__AnyType>>) {
		_obj = &value; CppAdvance::Retain(_obj);_vtable = &__vtable_IMagicNumber_for<typename std::remove_cvref_t<__AnyType>::__self>;
		} else if constexpr (std::is_base_of_v<CppAdvance::Struct, std::remove_cvref_t<__AnyType>>) {
		_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
			_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>>;
		} else static_assert(false,"Not implemented yet");
	}
	public: template<class __AnyType> requires __ImplementsInterface_IMagicNumber<__AnyType> IMagicNumber& operator=(const __AnyType& value) {
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
		} else if constexpr (std::is_base_of_v<CppAdvance::Object, std::remove_cvref_t<__AnyType>>) {
		_obj = &value; CppAdvance::Retain(_obj);_vtable = &__vtable_IMagicNumber_for<typename std::remove_cvref_t<__AnyType>::__self>;
		} else if constexpr (std::is_base_of_v<CppAdvance::Struct, std::remove_cvref_t<__AnyType>>) {
		_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
			_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>>;
		} else static_assert(false,"Not implemented yet"); return *this;
	}
	public: template<class __AnyType> requires __ImplementsInterface_IMagicNumber<__AnyType> IMagicNumber& operator=(__AnyType&& value) {
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
		} else if constexpr (std::is_base_of_v<CppAdvance::Object, std::remove_cvref_t<__AnyType>>) {
		_obj = &value; CppAdvance::Retain(_obj);_vtable = &__vtable_IMagicNumber_for<typename std::remove_cvref_t<__AnyType>::__self>;
		} else if constexpr (std::is_base_of_v<CppAdvance::Struct, std::remove_cvref_t<__AnyType>>) {
		_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
			_vtable = &__vtable_IMagicNumber_for<std::remove_cvref_t<__AnyType>>;
		} else static_assert(false,"Not implemented yet"); return *this;
	}
	
};
class IMagicNumber__Unowned final : public CppAdvance::InterfaceRef__Unowned {
	private: using __self = IMagicNumber__Unowned;
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
	public: template<class __AnyType> requires __ImplementsInterface_IMagicNumber<__AnyType> IMagicNumber__Unowned(__AnyType&& value) : ___super(nullptr), _vtable{ nullptr } 
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
	public: template<class __AnyType> requires __ImplementsInterface_IMagicNumber<__AnyType> IMagicNumber__Unowned& operator=(__AnyType&& value) {
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
	private: using __self = IMagicNumber__Weak;
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
FORCE_INLINE const CppAdvance::f32 GetMagicNumber(const IMagicNumber& iface, CppAdvance::In<VectorClass> f)  { ADV_EXPRESSION_BODY(CppAdvance::GetVTableFromInterface(&iface)->fnptr_a2e2f819fa3cd789(CppAdvance::GetObjectReferenceFromInterface(&iface), f)); }

template<> inline constexpr bool CppAdvance::__details::cheapCopy<IResettable> = false;
#line 388 "FirstProgram.adv"
template<class __AnyType> concept __HasMethodImplementation_565bebff34b81aa1 = requires(typename __AnyType::__class t) { {t.Reset()} -> std::same_as<void>; } || requires(typename __AnyType::__class t) { {Reset(t)} -> std::same_as<void>; };
namespace __vtables {
	#line 387 "FirstProgram.adv"
	struct __vtable_IResettable
	{
		using fn_565bebff34b81aa1 = void(CppAdvance::Object*);
		fn_565bebff34b81aa1* fnptr_565bebff34b81aa1;
		#line 388 "FirstProgram.adv"
		template<class __AnyType> static void impl_565bebff34b81aa1(CppAdvance::Object* obj) { ADV_EXPRESSION_BODY(ADV_UFCS(Reset)(*static_cast<typename __AnyType::__class*>(obj))); }
		
	};
}
#line 387 "FirstProgram.adv"
template<class __AnyType> inline constexpr __vtables::__vtable_IResettable __vtable_IResettable_for = {&__vtables::__vtable_IResettable::template impl_565bebff34b81aa1<__AnyType>
	};
#line 387 "FirstProgram.adv"
template<class __AnyType> concept __ImplementsInterface_IResettable = __HasMethodImplementation_565bebff34b81aa1<__AnyType>;
#line 387 "FirstProgram.adv"
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
		CppAdvance::ClearObjectReference((CppAdvance::ObjectRef*)&value);
	}
	public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, CppAdvance::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable>
	IResettable& operator=(const __AnyType& value) { if (_obj) CppAdvance::Release(_obj); _obj = CppAdvance::GetObjectReference(&value); CppAdvance::Retain(_obj); _vtable = CppAdvance::GetVTableFromInterface(&value); return *this; } 
	public: template<class __AnyType> requires std::derived_from<std::remove_cvref_t<__AnyType>, CppAdvance::InterfaceRef> && std::derived_from<typename std::remove_cvref_t<__AnyType>::__vtable, __vtable> && std::is_rvalue_reference_v<__AnyType&&>
	IResettable& operator=(__AnyType&& value) { if (_obj) CppAdvance::Release(_obj); _obj = CppAdvance::GetObjectReference(&value); _vtable = CppAdvance::GetVTableFromInterface(&value); CppAdvance::ClearObjectReference((CppAdvance::ObjectRef*)&value); return *this; } 
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
		_obj = CppAdvance::GetObjectReference(&value); CppAdvance::ClearObjectReference((CppAdvance::ObjectRef*)&value); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
			else static_assert(false, "Incompatible interfaces");
		} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(&value); CppAdvance::ClearObjectReference((CppAdvance::ObjectRef*)&value);
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
		_obj = CppAdvance::GetObjectReference(&value); CppAdvance::ClearObjectReference((CppAdvance::ObjectRef*)&value); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
			else static_assert(false, "Incompatible interfaces");
		} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(&value); CppAdvance::ClearObjectReference((CppAdvance::ObjectRef*)&value);
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
FORCE_INLINE void Reset(const IResettable& iface)  { ADV_EXPRESSION_BODY(CppAdvance::GetVTableFromInterface(&iface)->fnptr_565bebff34b81aa1(CppAdvance::GetObjectReferenceFromInterface(&iface))); }

template<> inline constexpr bool CppAdvance::__details::cheapCopy<IInterface> = false;
#line 392 "FirstProgram.adv"
template<class __AnyType> concept __HasMethodImplementation_6cedb65857a10a4e = requires(typename __AnyType::__class t) { {t.DefaultMethod(std::declval<VectorClass>())} -> std::convertible_to<CppAdvance::f32>; } || requires(typename __AnyType::__class t) { {DefaultMethod(t, std::declval<VectorClass>())} -> std::convertible_to<CppAdvance::f32>; };
#line 393 "FirstProgram.adv"
template<class __AnyType> concept __HasMethodImplementation_fbc51d6746c8ca94 = requires(typename __AnyType::__class t) { {t.operator+(std::declval<ConcreteVectorClass>())} -> std::convertible_to<ConcreteVectorClass>; } || requires(typename __AnyType::__class t) { {operator+(t, std::declval<ConcreteVectorClass>())} -> std::convertible_to<ConcreteVectorClass>; };
#line 395 "FirstProgram.adv"
template<class __AnyType> concept __HasMethodImplementation_getfd864fe31949d59b = requires(typename __AnyType::__class t) { {t.__ref().getName()} -> std::convertible_to<CppAdvance::Str>; } || requires(__AnyType t) { {getName(t)} -> std::convertible_to<CppAdvance::Str>; };
namespace __vtables {
	#line 391 "FirstProgram.adv"
	struct __vtable_IInterface : public IMagicNumber::__vtable, public IResettable::__vtable
	{
		using fn_6cedb65857a10a4e = const CppAdvance::f32(CppAdvance::Object*, const VectorClass& f);
		fn_6cedb65857a10a4e* fnptr_6cedb65857a10a4e;
		#line 392 "FirstProgram.adv"
		template<class __AnyType> static const CppAdvance::f32 impl_6cedb65857a10a4e(CppAdvance::Object* obj, const VectorClass& f) { 
			if constexpr(__HasMethodImplementation_6cedb65857a10a4e<__AnyType>) {
				ADV_EXPRESSION_BODY(ADV_UFCS(DefaultMethod)(*static_cast<typename __AnyType::__class*>(obj), f)); 
			} else { throw 0; }
		}
		using fn_fbc51d6746c8ca94 = const ConcreteVectorClass(CppAdvance::Object*, const ConcreteVectorClass& f);
		fn_fbc51d6746c8ca94* fnptr_fbc51d6746c8ca94;
		#line 393 "FirstProgram.adv"
		template<class __AnyType> static const ConcreteVectorClass impl_fbc51d6746c8ca94(CppAdvance::Object* obj, const ConcreteVectorClass& f) { ADV_EXPRESSION_BODY(ADV_UFCS(operator+)(*static_cast<typename __AnyType::__class*>(obj), f)); }
		using fn_getName = CppAdvance::Str(CppAdvance::Object*);
		fn_getName* fnptr_getName;
		#line 395 "FirstProgram.adv"
		template<class __AnyType> static CppAdvance::Str impl_getName(CppAdvance::Object* obj) { return ADV_UFCS(getName)(*static_cast<typename __AnyType::__class*>(obj)); }
		
	};
}
#line 391 "FirstProgram.adv"
template<class __AnyType> inline constexpr __vtables::__vtable_IInterface __vtable_IInterface_for = {__vtable_IMagicNumber_for<__AnyType>
	, __vtable_IResettable_for<__AnyType>
	, __HasMethodImplementation_6cedb65857a10a4e<__AnyType> ? &__vtables::__vtable_IInterface::template impl_6cedb65857a10a4e<__AnyType> : nullptr
	, &__vtables::__vtable_IInterface::template impl_fbc51d6746c8ca94<__AnyType>
	, &__vtables::__vtable_IInterface::template impl_getName<__AnyType>
	};
#line 391 "FirstProgram.adv"
template<class __AnyType> concept __ImplementsInterface_IInterface = __ImplementsInterface_IMagicNumber<__AnyType> && __ImplementsInterface_IResettable<__AnyType> && __HasMethodImplementation_fbc51d6746c8ca94<__AnyType> && __HasMethodImplementation_getfd864fe31949d59b<__AnyType>;
#line 391 "FirstProgram.adv"
class IInterface final : public CppAdvance::InterfaceRef {
	private: using __self = IInterface;
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
	public: template<class __AnyType> requires __ImplementsInterface_IInterface<__AnyType> IInterface(const __AnyType& value) : ___super(nullptr), _vtable{ nullptr } 
	{
		if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(&value); CppAdvance::Retain(_obj); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
			else static_assert(false, "Incompatible interfaces");
		} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(&value); CppAdvance::Retain(_obj);
			_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>>;
		} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value)); CppAdvance::Retain(_obj);
			_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>>;
		} else if constexpr (std::is_base_of_v<CppAdvance::Object, std::remove_cvref_t<__AnyType>>) {
		_obj = &value; CppAdvance::Retain(_obj); _vtable = &__vtable_IInterface_for<typename std::remove_cvref_t<__AnyType>::__self>;
		} else if constexpr (std::is_base_of_v<CppAdvance::Struct, std::remove_cvref_t<__AnyType>>) {
		_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
			_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>>;
		} else static_assert(false,"Not implemented yet");
	}
	public: template<class __AnyType> requires __ImplementsInterface_IInterface<__AnyType> IInterface(__AnyType&& value) : ___super(nullptr), _vtable{ nullptr } 
	{
		if constexpr (std::is_base_of_v<CppAdvance::InterfaceRef, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(&value); CppAdvance::ClearObjectReference((CppAdvance::ObjectRef*)&value); if constexpr(std::is_base_of_v<__vtable,typename std::remove_cvref_t<__AnyType>::__vtable>) _vtable = CppAdvance::GetVTableFromInterface(&value);
			else static_assert(false, "Incompatible interfaces");
		} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(&value); CppAdvance::ClearObjectReference((CppAdvance::ObjectRef*)&value);
			_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>>;
		} else if constexpr (std::is_base_of_v<CppAdvance::ObjectRef__Unowned, std::remove_cvref_t<__AnyType>>) {
		_obj = CppAdvance::GetObjectReference(reinterpret_cast<CppAdvance::ObjectRef*>(&value)); CppAdvance::Retain(_obj);
			_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>>;
		} else if constexpr (std::is_base_of_v<CppAdvance::Object, std::remove_cvref_t<__AnyType>>) {
		_obj = &value; CppAdvance::Retain(_obj);_vtable = &__vtable_IInterface_for<typename std::remove_cvref_t<__AnyType>::__self>;
		} else if constexpr (std::is_base_of_v<CppAdvance::Struct, std::remove_cvref_t<__AnyType>>) {
		_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
			_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>>;
		} else static_assert(false,"Not implemented yet");
	}
	public: template<class __AnyType> requires __ImplementsInterface_IInterface<__AnyType> IInterface& operator=(const __AnyType& value) {
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
		} else if constexpr (std::is_base_of_v<CppAdvance::Object, std::remove_cvref_t<__AnyType>>) {
		_obj = &value; CppAdvance::Retain(_obj);_vtable = &__vtable_IInterface_for<typename std::remove_cvref_t<__AnyType>::__self>;
		} else if constexpr (std::is_base_of_v<CppAdvance::Struct, std::remove_cvref_t<__AnyType>>) {
		_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
			_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>>;
		} else static_assert(false,"Not implemented yet"); return *this;
	}
	public: template<class __AnyType> requires __ImplementsInterface_IInterface<__AnyType> IInterface& operator=(__AnyType&& value) {
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
		} else if constexpr (std::is_base_of_v<CppAdvance::Object, std::remove_cvref_t<__AnyType>>) {
		_obj = &value; CppAdvance::Retain(_obj);_vtable = &__vtable_IInterface_for<typename std::remove_cvref_t<__AnyType>::__self>;
		} else if constexpr (std::is_base_of_v<CppAdvance::Struct, std::remove_cvref_t<__AnyType>>) {
		_obj = new (::operator new(sizeof(typename std::remove_cvref_t<__AnyType>::__class))) typename std::remove_cvref_t<__AnyType>::__class(value);
			_vtable = &__vtable_IInterface_for<std::remove_cvref_t<__AnyType>>;
		} else static_assert(false,"Not implemented yet"); return *this;
	}
	public: const CppAdvance::f32 __default_DefaultMethod(const VectorClass& f) const ;
	
};
class IInterface__Unowned final : public CppAdvance::InterfaceRef__Unowned {
	private: using __self = IInterface__Unowned;
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
	public: template<class __AnyType> requires __ImplementsInterface_IInterface<__AnyType> IInterface__Unowned(__AnyType&& value) : ___super(nullptr), _vtable{ nullptr } 
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
	public: template<class __AnyType> requires __ImplementsInterface_IInterface<__AnyType> IInterface__Unowned& operator=(__AnyType&& value) {
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
	private: using __self = IInterface__Weak;
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
FORCE_INLINE const CppAdvance::f32 DefaultMethod(const IInterface& iface, const VectorClass& f)  {
	auto func = CppAdvance::GetVTableFromInterface(&iface)->fnptr_6cedb65857a10a4e;
	if (func) { ADV_EXPRESSION_BODY(func(CppAdvance::GetObjectReferenceFromInterface(&iface), f)); }
	else { ADV_EXPRESSION_BODY(reinterpret_cast<const IInterface*>(&iface)->__default_DefaultMethod(f)); }
}
FORCE_INLINE const ConcreteVectorClass operator+(const IInterface& iface, const ConcreteVectorClass& f)  { ADV_EXPRESSION_BODY(CppAdvance::GetVTableFromInterface(&iface)->fnptr_fbc51d6746c8ca94(CppAdvance::GetObjectReferenceFromInterface(&iface), f)); }
FORCE_INLINE const CppAdvance::Str getName(const IInterface& iface) { return CppAdvance::GetVTableFromInterface(&iface)->fnptr_getName(CppAdvance::GetObjectReferenceFromInterface(&iface)); }


#line 57 "FirstProgram.adv"
class __Class_Vector3 final : public CppAdvance::ValueType
{
	#line 9999 "FirstProgram.adv"
	Vector3 __value;
	public: using __underlying = Vector3; using __self = __underlying;
	using NestedStruct = __self::NestedStruct;
	__Class_Vector3(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
	operator __underlying() const noexcept { return __value; }
	auto getName() const -> CppAdvance::Str { return __value.getName(); }
	auto Equals(const IEquatable& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.Equals(other)); }
	auto format() const noexcept -> CppAdvance::Str const { ADV_EXPRESSION_BODY(__value.format()); }
	auto HashCode() const  -> CppAdvance::usize const { ADV_EXPRESSION_BODY(__value.HashCode()); }
	operator CppAdvance::f32() const noexcept { return static_cast<CppAdvance::f32>(__value); }
	auto operator+(const __self& other) const  -> __self const { ADV_EXPRESSION_BODY(__value.operator+(other)); }
	auto operator++() -> __self & { ADV_EXPRESSION_BODY(__value.operator++()); }
	void setAt(CppAdvance::i32 idx, const CppAdvance::f32& value)  { __value.setAt(idx, value); }
	decltype(auto) getAt(CppAdvance::i32 idx)  { return __value.operator[](idx); }
	decltype(auto) getAt(CppAdvance::i32 idx) const  { return __value.operator[](idx); }
	decltype(auto) getAt(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3)  { return __value._operator_subscript(idx, idx2, idx3); }
	decltype(auto) getAt(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3) const  { return __value._operator_subscript(idx, idx2, idx3); }
	auto getX() const  -> CppAdvance::f32 const { ADV_EXPRESSION_BODY(__value.getX()); }
	auto getNext() const  -> Next const { ADV_EXPRESSION_BODY(__value.getNext()); }
	auto GetMagicNumber(CppAdvance::f32 i) const  -> CppAdvance::f32 const { ADV_EXPRESSION_BODY(__value.GetMagicNumber(i)); }
	auto DefaultMethod(CppAdvance::f32 f) const  -> CppAdvance::f32 const { ADV_EXPRESSION_BODY(__value.DefaultMethod(f)); }
	auto Reset() -> void { ADV_EXPRESSION_BODY(__value.Reset()); }
	
};
#line 57 "FirstProgram.adv"
ADV_CHECK_FOR_CONCRETE(Vector3);

#line 176 "FirstProgram.adv"
class __Class_BaseClass : public CppAdvance::Object {
	private: using __self = BaseClass;
	private: using ___super = CppAdvance::Object;
	private: using __selfClass = __Class_BaseClass;
	friend class __self;
	friend class __self::__weak_ref;
	#define ADV_PROPERTY_SELF __selfClass
	public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
	#line 177 "FirstProgram.adv"
	public: inline virtual auto getNext() const  -> const Next;
	
#define ADV_PROPERTY_SELF __self
};
#line 176 "FirstProgram.adv"
ADV_CHECK_FOR_CONCRETE(BaseClass);

#line 180 "FirstProgram.adv"
class ADV_NOVTABLE __Class_VectorClass ADV_ABSTRACT : public CppAdvance::ClassParent<BaseClass> {
	private: using __self = VectorClass;
	private: using ___super = CppAdvance::ClassParent<BaseClass>;
	private: using __selfClass = __Class_VectorClass;
	friend class __self;
	friend class __self::__weak_ref;
	#define ADV_PROPERTY_SELF __selfClass
	public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
	public: using NestedClass = __self::NestedClass;
	#line 189 "FirstProgram.adv"
	private: friend class TestStruct; friend class __Class_TestStruct;
	#line 190 "FirstProgram.adv"
	private: template<class T> friend class TestStruct2; template<class T> friend class __Class_TestStruct2;
	#line 191 "FirstProgram.adv"
	private: friend const CppAdvance::i32 func3(CppAdvance::i32 x);
	#line 183 "FirstProgram.adv"
	public: mutable CppAdvance::f32 x; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
	#line 183 "FirstProgram.adv"
	public: mutable CppAdvance::f32 y; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
	#line 183 "FirstProgram.adv"
	public: mutable CppAdvance::f32 z; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
	#line 212 "FirstProgram.adv"
	public: TESTDLL_API static CppAdvance::i32 Count2; ADV_CHECK_REF_STRUCT("i32", CppAdvance::i32);
	#line 214 "FirstProgram.adv"
	public: TESTDLL_API static const Vector3 ZERO; ADV_CHECK_REF_STRUCT("Vector3", Vector3);
	#line 213 "FirstProgram.adv"
	public: static constexpr auto BYTES = CppAdvance::i32(24);
	#line 215 "FirstProgram.adv"
	public: using Coords = __ntuples::NamedTuple_6893f862d6c49683;
	#line 207 "FirstProgram.adv"
	private: mutable CppAdvance::i32 p_Count; ADV_CHECK_REF_STRUCT("i32", CppAdvance::i32);
	#line 207 "FirstProgram.adv"
	public: virtual auto setCount(const CppAdvance::i32& value) -> __selfClass& = 0;
	#line 207 "FirstProgram.adv"
	public: virtual auto getCount() const  -> CppAdvance::i32 = 0;
	#line 9999 "FirstProgram.adv"
	ADV_PROPERTY_GETTER_SETTER(public, Count, public, getCount, public, setCount, CppAdvance::i32);
	#line 210 "FirstProgram.adv"
	private: mutable CppAdvance::Str p_Name; ADV_CHECK_REF_STRUCT("str", CppAdvance::Str);
	#line 210 "FirstProgram.adv"
	public: virtual auto setName(const CppAdvance::Str& value) -> __selfClass& = 0;
	#line 210 "FirstProgram.adv"
	public: virtual auto getName() const  -> CppAdvance::Str = 0;
	#line 9999 "FirstProgram.adv"
	ADV_PROPERTY_GETTER_SETTER(public, Name, public, getName, public, setName, CppAdvance::Str);
	#line 193 "FirstProgram.adv"
	public: inline constexpr auto Equals(const IEquatable& other) const noexcept -> const bool;
	#line 194 "FirstProgram.adv"
	public: inline constexpr auto format() const noexcept -> const CppAdvance::Str;
	#line 232 "FirstProgram.adv"
	protected: inline constexpr __Class_VectorClass()  = default;
	#line 234 "FirstProgram.adv"
	protected: inline constexpr __Class_VectorClass(CppAdvance::f32 x, CppAdvance::f32 y, CppAdvance::f32 z) noexcept;
	#line 240 "FirstProgram.adv"
	protected: template<class U> inline constexpr explicit __Class_VectorClass(U f) ;
	#line 245 "FirstProgram.adv"
	protected: inline explicit __Class_VectorClass(CppAdvance::In<__self> other) ;
	inline __Class_VectorClass(__selfClass& copy) : __Class_VectorClass(__self(copy)) {}
	#line 249 "FirstProgram.adv"
	public: inline ~__Class_VectorClass() noexcept;
	#line 254 "FirstProgram.adv"
	public: inline  operator CppAdvance::f32() const noexcept;
	#line 9999 "FirstProgram.adv"
	private: template<class __IdxT = CppAdvance::f32> struct __IndexerAccessor_276 {
		private:
		__Class_VectorClass& _parent;
		CppAdvance::i32 _idx;
		 friend class VectorClass;
		public:
		FORCE_INLINE __IndexerAccessor_276(__Class_VectorClass& parent, CppAdvance::i32 idx) : _parent(parent), _idx(idx) {}
		FORCE_INLINE __IndexerAccessor_276(__Class_VectorClass const& parent, CppAdvance::i32 idx) : _parent(const_cast<std::remove_cvref_t<decltype(parent)>&>(parent)), _idx(idx) {}
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
		template<class Ch> friend FORCE_INLINE decltype(auto) operator<<(std::basic_ostream<Ch>& stream, const __IndexerAccessor_276<__IdxT>& elem) { return stream << elem.__ref(); }
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

	friend struct __IndexerAccessor_276<CppAdvance::f32>;
	public: inline const CppAdvance::f32 getAt(CppAdvance::i32 idx);
	inline const CppAdvance::f32 getAt(CppAdvance::i32 idx) const;
	public: inline void setAt(CppAdvance::i32 idx, const CppAdvance::f32& value);
	#line 276 "FirstProgram.adv"
	public: inline auto operator[](CppAdvance::i32 idx)  -> __IndexerAccessor_276<CppAdvance::f32>;
	public: inline auto operator[](CppAdvance::i32 idx) const  -> const __IndexerAccessor_276<CppAdvance::f32>;
	#line 286 "FirstProgram.adv"
	public: inline auto _operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3)  -> const CppAdvance::f32;
	public: inline auto _operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3) const  -> const CppAdvance::f32;
	#line 288 "FirstProgram.adv"
	public: virtual auto getX() const  -> const CppAdvance::f32 = 0;
	#line 289 "FirstProgram.adv"
	public: inline virtual auto getNext() const  -> const Next final;
	#line 292 "FirstProgram.adv"
	public: inline constexpr static auto Method(CppAdvance::i32 x, CppAdvance::i32 y, CppAdvance::i32 z)  -> const CppAdvance::i32;
	#line 297 "FirstProgram.adv"
	public: inline constexpr auto Reset() const  -> void;
	#line 305 "FirstProgram.adv"
	public: template<class U> inline constexpr auto TemplateMethod(U x, U y, U z) const  -> const Coords;
	
#define ADV_PROPERTY_SELF __self
};
#line 180 "FirstProgram.adv"
ADV_CHECK_FOR_ABSTRACT(VectorClass);
#line 180 "FirstProgram.adv"
ADV_CHECK_INTERFACE_IMPLEMENTATION(VectorClass, BaseClass, BaseClass, VectorClass);

#line 324 "FirstProgram.adv"
class __Class_ConcreteVectorClass : public CppAdvance::ClassParent<VectorClass> {
	private: using __self = ConcreteVectorClass;
	private: using ___super = CppAdvance::ClassParent<VectorClass>;
	private: using __selfClass = __Class_ConcreteVectorClass;
	friend class __self;
	friend class __self::__weak_ref;
	#define ADV_PROPERTY_SELF __selfClass
	#line 324 "FirstProgram.adv"
	ADV_CHECK_INTERFACE(IInterface, IInterface);
	public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
	#line 335 "FirstProgram.adv"
	private: mutable CppAdvance::Str p_Name = CppAdvance::Str{u"ConcreteVectorClass"}; ADV_CHECK_REF_STRUCT("str", CppAdvance::Str);
	#line 335 "FirstProgram.adv"
	public: inline auto setName(const CppAdvance::Str& value) -> __selfClass&;
	#line 335 "FirstProgram.adv"
	public: inline auto getName() const  -> CppAdvance::Str;
	#line 9999 "FirstProgram.adv"
	ADV_PROPERTY_GETTER_SETTER(public, Name, public, getName, public, setName, CppAdvance::Str);
	#line 337 "FirstProgram.adv"
	private: mutable CppAdvance::i32 p_ZZ = CppAdvance::i32(5); ADV_CHECK_REF_STRUCT("i32", CppAdvance::i32);
	#line 337 "FirstProgram.adv"
	public: inline auto setZZ(const CppAdvance::i32& value) -> __selfClass&;
	#line 337 "FirstProgram.adv"
	public: inline auto getZZ() const  -> CppAdvance::i32;
	#line 9999 "FirstProgram.adv"
	ADV_PROPERTY_GETTER_SETTER(public, ZZ, public, getZZ, public, setZZ, CppAdvance::i32);
	#line 339 "FirstProgram.adv"
	private: mutable CppAdvance::i32 p_Count = CppAdvance::i32(1); ADV_CHECK_REF_STRUCT("i32", CppAdvance::i32);
	#line 344 "FirstProgram.adv"
	private: TESTDLL_API virtual auto setCount(const CppAdvance::i32& value) -> __selfClass& final;
	#line 340 "FirstProgram.adv"
	public: TESTDLL_API virtual auto getCount() const  -> CppAdvance::i32 final;
	#line 9999 "FirstProgram.adv"
	ADV_PROPERTY_GETTER_SETTER(public, Count, public, getCount, private, setCount, CppAdvance::i32);
	#line 325 "FirstProgram.adv"
	public: inline constexpr __Class_ConcreteVectorClass()  = default;
	#line 327 "FirstProgram.adv"
	public: inline constexpr __Class_ConcreteVectorClass(CppAdvance::f32 x, CppAdvance::f32 y, CppAdvance::f32 z) noexcept;
	#line 331 "FirstProgram.adv"
	public: inline constexpr  __Class_ConcreteVectorClass(CppAdvance::i32 i) noexcept;
	#line 351 "FirstProgram.adv"
	public: inline virtual auto getX() const  -> const CppAdvance::f32 final;
	#line 353 "FirstProgram.adv"
	public: inline auto operator+(CppAdvance::In<__self> other) const  -> const __self;
	#line 354 "FirstProgram.adv"
	public: inline auto GetMagicNumber(CppAdvance::In<VectorClass> i) const  -> const CppAdvance::f32;
	
#define ADV_PROPERTY_SELF __self
};
#line 324 "FirstProgram.adv"
ADV_CHECK_FOR_CONCRETE(ConcreteVectorClass);
#line 324 "FirstProgram.adv"
ADV_CHECK_INTERFACE_IMPLEMENTATION(ConcreteVectorClass, VectorClass, VectorClass, ConcreteVectorClass);
#line 324 "FirstProgram.adv"
ADV_CHECK_INTERFACE_IMPLEMENTATION(ConcreteVectorClass, IInterface, IInterface, ConcreteVectorClass);

#line 359 "FirstProgram.adv"
class __Class_Next : public CppAdvance::Object {
	private: using __self = Next;
	private: using ___super = CppAdvance::Object;
	private: using __selfClass = __Class_Next;
	friend class __self;
	friend class __self::__weak_ref;
	#define ADV_PROPERTY_SELF __selfClass
	public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
	#line 360 "FirstProgram.adv"
	public: mutable CppAdvance::i32 i; ADV_CHECK_REF_STRUCT("i32", CppAdvance::i32);
	#line 361 "FirstProgram.adv"
	public: mutable CppAdvance::Nullable<Next>::__weak_ref v;
	#line 363 "FirstProgram.adv"
	public: inline __Class_Next()  = default;
	#line 365 "FirstProgram.adv"
	public: inline ~__Class_Next() ;
	#line 367 "FirstProgram.adv"
	public: inline explicit __Class_Next(CppAdvance::i32 i) ;
	#line 372 "FirstProgram.adv"
	public: inline explicit __Class_Next(CppAdvance::In<__self> other) ;
	inline __Class_Next(__selfClass& copy) : __Class_Next(__self(copy)) {}
	#line 376 "FirstProgram.adv"
	public: inline auto operator*() const  -> const CppAdvance::i32;
	#line 378 "FirstProgram.adv"
	public: inline auto printNext() const  -> void;
	
#define ADV_PROPERTY_SELF __self
};
#line 359 "FirstProgram.adv"
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
#line 69 "FirstProgram.adv"
inline auto func4(CppAdvance::i32 x)  -> const CppAdvance::i32;
#line 357 "FirstProgram.adv"
inline auto GetMagicNumber(CppAdvance::In<VectorClass> vec, VectorClass i)  -> const CppAdvance::f32;
#line 399 "FirstProgram.adv"
inline auto getSum(CppAdvance::In<VectorClass> vec)  -> const CppAdvance::f32;
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
#line 73 "FirstProgram.adv"
inline constexpr auto Vector3::Equals(const IEquatable& other) const noexcept -> const bool
{
	#line 73 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(true); 
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
#line 89 "FirstProgram.adv"
inline constexpr auto Vector3::getName() const  -> CppAdvance::Str 
{
	#line 89 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(CppAdvance::Str{u"Vector3"}); 
}

#line 101 "FirstProgram.adv"
inline constexpr auto Vector3::__Class_NestedStruct::count(CppAdvance::i32 i)  -> const CppAdvance::i32
{
	#line 101 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(i * CppAdvance::i32(10)); 
}
#line 107 "FirstProgram.adv"
template<class U> inline constexpr Vector3::Vector3(U f)  :
#line 108 "FirstProgram.adv"
Vector3(f, f, f)
{
	#line 109 "FirstProgram.adv"
	this->x = f;
}
#line 112 "FirstProgram.adv"
inline Vector3::~Vector3() noexcept
{
	#line 112 "FirstProgram.adv"
	print(CppAdvance::Str{u"Vector3 deiniting"}); 
}
#line 114 "FirstProgram.adv"
inline constexpr Vector3::operator CppAdvance::f32() const noexcept
{
	#line 114 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(y); 
}
#line 116 "FirstProgram.adv"
inline auto Vector3::operator+(const __self& other) const  -> const __self
{
	#line 116 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(__self{ADV_UPCS(x)((*this).__ref()) + ADV_UPCS(x)(other.__ref()), ADV_UPCS(y)((*this).__ref()) + ADV_UPCS(y)(other.__ref()), ADV_UPCS(z)((*this).__ref()) + ADV_UPCS(z)(other.__ref())}); 
}
#line 118 "FirstProgram.adv"
inline auto Vector3::operator++()  -> __self&
{
	#line 119 "FirstProgram.adv"
	++x;
	#line 120 "FirstProgram.adv"
	++y;
	#line 121 "FirstProgram.adv"
	++z;
	#line 122 "FirstProgram.adv"
	++Count;
	#line 125 "FirstProgram.adv"
	return (*this);
}
#line 118 "FirstProgram.adv"
inline auto Vector3::operator++(int)  -> __self { auto copy = CppAdvance::New<__self>(__self(*this)); ++(*this); return copy; }
#line 128 "FirstProgram.adv"
auto Vector3::operator[](CppAdvance::i32 idx)  -> __IndexerAccessor_128<CppAdvance::f32>
{
	return __IndexerAccessor_128<CppAdvance::f32>{ *this, idx };
}

#line 128 "FirstProgram.adv"
auto Vector3::operator[](CppAdvance::i32 idx)  const  -> const __IndexerAccessor_128<CppAdvance::f32>
{
	return __IndexerAccessor_128<CppAdvance::f32>{ *this, idx };
}

#line 129 "FirstProgram.adv"
auto Vector3::getAt(CppAdvance::i32 idx)  -> const CppAdvance::f32
{
	#line 130 "FirstProgram.adv"
	print(CppAdvance::Str{u"Read"});
	#line 131 "FirstProgram.adv"
	return x;
}
#line 129 "FirstProgram.adv"
auto Vector3::getAt(CppAdvance::i32 idx) const  -> const CppAdvance::f32
{
	#line 130 "FirstProgram.adv"
	print(CppAdvance::Str{u"Read"});
	#line 131 "FirstProgram.adv"
	return x;
}
#line 133 "FirstProgram.adv"
auto Vector3::setAt(CppAdvance::i32 idx, const CppAdvance::f32& value)  -> void 
{
	#line 134 "FirstProgram.adv"
	if (value < CppAdvance::i32(10)) {
		#line 134 "FirstProgram.adv"
		return ;
	}
	#line 135 "FirstProgram.adv"
	x = CppAdvance::i32(5);
}
#line 138 "FirstProgram.adv"
inline constexpr auto Vector3::_operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3)  -> const CppAdvance::f32
{
	#line 138 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(y + z); 
}
#line 138 "FirstProgram.adv"
inline constexpr auto Vector3::_operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3)  const  -> const CppAdvance::f32
{
	#line 138 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(y + z); 
}
#line 140 "FirstProgram.adv"
inline constexpr auto Vector3::getX() const  -> const CppAdvance::f32
{
	#line 140 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(x); 
}
#line 141 "FirstProgram.adv"
inline auto Vector3::getNext() const  -> const Next
{
	#line 141 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(CppAdvance::New<Next>(CppAdvance::i32(6))); 
}
#line 144 "FirstProgram.adv"
inline constexpr auto Vector3::Method(CppAdvance::i32 x, CppAdvance::i32 y, CppAdvance::i32 z)  -> const CppAdvance::i32
{
	#line 145 "FirstProgram.adv"
	return y + z;
}
#line 148 "FirstProgram.adv"
inline constexpr auto Vector3::GetMagicNumber(CppAdvance::f32 i) const  -> const CppAdvance::f32
{
	#line 148 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(i * x); 
}
#line 149 "FirstProgram.adv"
inline auto Vector3::DefaultMethod(CppAdvance::f32 f) const  -> const CppAdvance::f32
{
	#line 149 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(f * CppAdvance::i32(15)); 
}
#line 150 "FirstProgram.adv"
inline constexpr auto Vector3::Reset()  -> void
{
	#line 151 "FirstProgram.adv"
	x = CppAdvance::i32(0);
	#line 152 "FirstProgram.adv"
	y = CppAdvance::i32(0);
	#line 153 "FirstProgram.adv"
	z = CppAdvance::i32(0);
}
#line 158 "FirstProgram.adv"
template<class U> inline constexpr auto Vector3::TemplateMethod(U x, U y, U z)  -> const typename Vector3::Coords
{
	#line 159 "FirstProgram.adv"
	class __Class_LocalStruct;
	#line 159 "FirstProgram.adv"
	struct LocalStruct : public CppAdvance::Struct
	{
		private: using __self = LocalStruct;
		public: using __class = __Class_LocalStruct;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 160 "FirstProgram.adv"
		#line 160 "FirstProgram.adv"
		public: CppAdvance::f32 x{}; 
		#line 160 "FirstProgram.adv"
		public: CppAdvance::f32 y{}; 
		#line 160 "FirstProgram.adv"
		public: CppAdvance::f32 z{}; 
		
		
	};
	#line 159 "FirstProgram.adv"
	class __Class_LocalStruct : public CppAdvance::ValueType
	{
		#line 9999 "FirstProgram.adv"
		LocalStruct __value;
		public: using __underlying = LocalStruct; using __self = __underlying;
		__Class_LocalStruct(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
		operator __underlying() const noexcept { return __value; }
		
	};
	#line 169 "FirstProgram.adv"
	(*this)[CppAdvance::i32(0)] = CppAdvance::i32(13);
	#line 171 "FirstProgram.adv"
	return { x, y, z };
}
#line 177 "FirstProgram.adv"
inline auto __Class_BaseClass::getNext() const  -> const Next
{
	#line 177 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(CppAdvance::New<Next>(CppAdvance::i32(5))); 
}
#line 193 "FirstProgram.adv"
inline constexpr auto __Class_VectorClass::Equals(const IEquatable& other) const noexcept -> const bool
{
	#line 193 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(true); 
}
#line 194 "FirstProgram.adv"
inline constexpr auto __Class_VectorClass::format() const noexcept -> const CppAdvance::Str
{
	#line 194 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(CppAdvance::Str{u"test"}); 
}
#line 223 "FirstProgram.adv"
inline constexpr VectorClass::__Class_NestedClass::__Class_NestedClass(CppAdvance::f32 x, CppAdvance::f32 y, CppAdvance::f32 z) noexcept : 
#line 224 "FirstProgram.adv"
x{x}, 
#line 225 "FirstProgram.adv"
y{y}, 
#line 226 "FirstProgram.adv"
z{z}
{
}
#line 228 "FirstProgram.adv"
inline constexpr auto VectorClass::__Class_NestedClass::count(CppAdvance::i32 i)  -> const CppAdvance::i32
{
	#line 228 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(i * CppAdvance::i32(10)); 
}
#line 234 "FirstProgram.adv"
inline constexpr __Class_VectorClass::__Class_VectorClass(CppAdvance::f32 x, CppAdvance::f32 y, CppAdvance::f32 z) noexcept : 
#line 235 "FirstProgram.adv"
x{x}, 
#line 236 "FirstProgram.adv"
y{y}, 
#line 237 "FirstProgram.adv"
z{z}
{
}
#line 240 "FirstProgram.adv"
template<class U> inline constexpr __Class_VectorClass::__Class_VectorClass(U f)  :
#line 241 "FirstProgram.adv"
__Class_VectorClass(f, f, f)
{
	#line 242 "FirstProgram.adv"
	this->x = f;
}
#line 245 "FirstProgram.adv"
inline __Class_VectorClass::__Class_VectorClass(CppAdvance::In<__self> other)  :
#line 246 "FirstProgram.adv"
__Class_VectorClass(ADV_UPCS_NONLOCAL(x)(other.__ref()), ADV_UPCS_NONLOCAL(y)(other.__ref()), ADV_UPCS_NONLOCAL(z)(other.__ref()))
{
}
#line 249 "FirstProgram.adv"
inline __Class_VectorClass::~__Class_VectorClass() noexcept
{
	#line 249 "FirstProgram.adv"
	print(CppAdvance::Str{u"VectorClass deiniting"}); 
}
#line 254 "FirstProgram.adv"
inline __Class_VectorClass::operator CppAdvance::f32() const noexcept
{
	#line 254 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(y); 
}
#line 276 "FirstProgram.adv"
auto __Class_VectorClass::operator[](CppAdvance::i32 idx)  -> __IndexerAccessor_276<CppAdvance::f32>
{
	return __IndexerAccessor_276<CppAdvance::f32>{ *this, idx };
}

#line 276 "FirstProgram.adv"
auto __Class_VectorClass::operator[](CppAdvance::i32 idx)  const  -> const __IndexerAccessor_276<CppAdvance::f32>
{
	return __IndexerAccessor_276<CppAdvance::f32>{ *this, idx };
}

#line 277 "FirstProgram.adv"
auto __Class_VectorClass::getAt(CppAdvance::i32 idx)  -> const CppAdvance::f32
{
	#line 278 "FirstProgram.adv"
	print(CppAdvance::Str{u"Read"});
	#line 279 "FirstProgram.adv"
	return x;
}
#line 277 "FirstProgram.adv"
auto __Class_VectorClass::getAt(CppAdvance::i32 idx) const  -> const CppAdvance::f32
{
	#line 278 "FirstProgram.adv"
	print(CppAdvance::Str{u"Read"});
	#line 279 "FirstProgram.adv"
	return x;
}
#line 281 "FirstProgram.adv"
auto __Class_VectorClass::setAt(CppAdvance::i32 idx, const CppAdvance::f32& value)  -> void 
{
	#line 282 "FirstProgram.adv"
	if (value < CppAdvance::i32(10)) {
		#line 282 "FirstProgram.adv"
		return ;
	}
	#line 283 "FirstProgram.adv"
	x = CppAdvance::i32(5);
}
#line 286 "FirstProgram.adv"
inline auto __Class_VectorClass::_operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3)  -> const CppAdvance::f32
{
	#line 286 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(y + z); 
}
#line 286 "FirstProgram.adv"
inline auto __Class_VectorClass::_operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3)  const  -> const CppAdvance::f32
{
	#line 286 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(y + z); 
}
#line 289 "FirstProgram.adv"
inline auto __Class_VectorClass::getNext() const  -> const Next
{
	#line 289 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(___super::getNext()); 
}
#line 292 "FirstProgram.adv"
inline constexpr auto __Class_VectorClass::Method(CppAdvance::i32 x, CppAdvance::i32 y, CppAdvance::i32 z)  -> const CppAdvance::i32
{
	#line 293 "FirstProgram.adv"
	return y + z;
}
#line 297 "FirstProgram.adv"
inline constexpr auto __Class_VectorClass::Reset() const  -> void
{
	#line 298 "FirstProgram.adv"
	x = CppAdvance::i32(0);
	#line 299 "FirstProgram.adv"
	y = CppAdvance::i32(0);
	#line 300 "FirstProgram.adv"
	z = CppAdvance::i32(0);
}
#line 305 "FirstProgram.adv"
template<class U> inline constexpr auto __Class_VectorClass::TemplateMethod(U x, U y, U z) const  -> const typename __Class_VectorClass::Coords
{
	#line 306 "FirstProgram.adv"
	class __Class_LocalStruct;
	#line 306 "FirstProgram.adv"
	struct LocalStruct : public CppAdvance::Struct
	{
		private: using __self = LocalStruct;
		public: using __class = __Class_LocalStruct;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 307 "FirstProgram.adv"
		#line 307 "FirstProgram.adv"
		public: CppAdvance::f32 x{}; 
		#line 307 "FirstProgram.adv"
		public: CppAdvance::f32 y{}; 
		#line 307 "FirstProgram.adv"
		public: CppAdvance::f32 z{}; 
		
		
	};
	#line 306 "FirstProgram.adv"
	class __Class_LocalStruct : public CppAdvance::ValueType
	{
		#line 9999 "FirstProgram.adv"
		LocalStruct __value;
		public: using __underlying = LocalStruct; using __self = __underlying;
		__Class_LocalStruct(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
		operator __underlying() const noexcept { return __value; }
		
	};
	#line 316 "FirstProgram.adv"
	(*this)[CppAdvance::i32(0)] = CppAdvance::i32(13);
	#line 318 "FirstProgram.adv"
	return { x, y, z };
}
#line 327 "FirstProgram.adv"
inline constexpr __Class_ConcreteVectorClass::__Class_ConcreteVectorClass(CppAdvance::f32 x, CppAdvance::f32 y, CppAdvance::f32 z) noexcept :
#line 328 "FirstProgram.adv"
___super(x, y, z)
{
}
#line 331 "FirstProgram.adv"
inline constexpr __Class_ConcreteVectorClass::__Class_ConcreteVectorClass(CppAdvance::i32 i) noexcept :
#line 332 "FirstProgram.adv"
___super(CppAdvance::f32{i}, CppAdvance::f32{i}, CppAdvance::f32{i})
{
}
#line 335 "FirstProgram.adv"
inline auto __Class_ConcreteVectorClass::setName(const CppAdvance::Str& value) -> __selfClass& { p_Name = value; return *this;}
#line 335 "FirstProgram.adv"
inline auto __Class_ConcreteVectorClass::getName() const  -> CppAdvance::Str { return p_Name; }

#line 337 "FirstProgram.adv"
inline auto __Class_ConcreteVectorClass::setZZ(const CppAdvance::i32& value) -> __selfClass& { p_ZZ = value; return *this;}
#line 337 "FirstProgram.adv"
inline auto __Class_ConcreteVectorClass::getZZ() const  -> CppAdvance::i32 { return p_ZZ; }

#line 351 "FirstProgram.adv"
inline auto __Class_ConcreteVectorClass::getX() const  -> const CppAdvance::f32
{
	#line 351 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(x); 
}
#line 353 "FirstProgram.adv"
inline auto __Class_ConcreteVectorClass::operator+(CppAdvance::In<__self> other) const  -> const __self
{
	#line 353 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(CppAdvance::New<__self>(ADV_UPCS(x)((*this).__ref()) + ADV_UPCS(x)(other.__ref()), ADV_UPCS(y)((*this).__ref()) + ADV_UPCS(y)(other.__ref()), ADV_UPCS(z)((*this).__ref()) + ADV_UPCS(z)(other.__ref()))); 
}
#line 354 "FirstProgram.adv"
inline auto __Class_ConcreteVectorClass::GetMagicNumber(CppAdvance::In<VectorClass> i) const  -> const CppAdvance::f32
{
	#line 354 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(x * ADV_UPCS(x)(i.__ref())); 
}
#line 357 "FirstProgram.adv"
inline auto GetMagicNumber(CppAdvance::In<VectorClass> vec, VectorClass i)  -> const CppAdvance::f32
{
	#line 357 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(ADV_UPCS(y)(vec.__ref()) * ADV_UPCS(y)(i.__ref())); 
}
#line 365 "FirstProgram.adv"
inline __Class_Next::~__Class_Next() 
{
	#line 365 "FirstProgram.adv"
	print(CppAdvance::Str{u"Next deiniting"}); 
}
#line 367 "FirstProgram.adv"
inline __Class_Next::__Class_Next(CppAdvance::i32 i)  : 
#line 368 "FirstProgram.adv"
i{i}
{
}
#line 372 "FirstProgram.adv"
inline __Class_Next::__Class_Next(CppAdvance::In<__self> other)  : 
#line 373 "FirstProgram.adv"
i{CppAdvance::i32(0)}
{
}
#line 376 "FirstProgram.adv"
inline auto __Class_Next::operator*() const  -> const CppAdvance::i32
{
	#line 376 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(i); 
}
#line 378 "FirstProgram.adv"
inline auto __Class_Next::printNext() const  -> void
{
	#line 379 "FirstProgram.adv"
	print(CppAdvance::Str{u"This is printNext function in optional chaining call"});
}
#line 399 "FirstProgram.adv"
inline auto getSum(CppAdvance::In<VectorClass> vec)  -> const CppAdvance::f32
{
	#line 399 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(ADV_UPCS(x)(vec.__ref()) + ADV_UPCS(y)(vec.__ref()) + ADV_UPCS(z)(vec.__ref())); 
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
#line 254 "FirstProgram.adv"
inline VectorClass::operator CppAdvance::f32() const noexcept{ ADV_EXPRESSION_BODY(__ref().operator CppAdvance::f32()); }
inline VectorClass__Unowned::operator CppAdvance::f32() const noexcept{ ADV_EXPRESSION_BODY(__ref().operator CppAdvance::f32()); }
#line 276 "FirstProgram.adv"
inline decltype(auto) VectorClass::operator[](CppAdvance::i32 idx) const { ADV_EXPRESSION_BODY(__ref().operator[](idx)); }
inline decltype(auto) VectorClass__Unowned::operator[](CppAdvance::i32 idx) const { ADV_EXPRESSION_BODY(__ref().operator[](idx)); }
#line 286 "FirstProgram.adv"
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
#line 331 "FirstProgram.adv"
inline ConcreteVectorClass::ConcreteVectorClass(CppAdvance::i32 i)noexcept : ___super(new (::operator new(sizeof(__class))) __class(i)) {}
#line 353 "FirstProgram.adv"
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
#line 376 "FirstProgram.adv"
inline decltype(auto) Next::operator*() const { ADV_EXPRESSION_BODY(__ref().operator*()); }
inline decltype(auto) Next__Unowned::operator*() const { ADV_EXPRESSION_BODY(__ref().operator*()); }

inline const CppAdvance::f32 IInterface::__default_DefaultMethod(const VectorClass& f) const 
{
	#line 392 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(ADV_UFCS(GetMagicNumber)((*this).__ref(), f)); 
}

