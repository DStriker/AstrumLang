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
	#line 96 "FirstProgram.adv"
	class NestedStruct : public CppAdvance::ObjectRef {
		public: using __self = NestedStruct;
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
	#line 96 "FirstProgram.adv"
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
	#line 96 "FirstProgram.adv"
	class __Class_NestedStruct : public CppAdvance::Object {
		public: using __self = NestedStruct;
		private: using ___super = CppAdvance::Object;
		public: using __selfClass = __Class_NestedStruct;
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
		template<class... _ElemRight> FORCE_INLINE decltype(auto) _operator_subscript(_ElemRight&&... other) { return __ref().__ref()._operator_subscript(std::forward<_ElemRight>(other)...); }
		template<class... _ElemRight> FORCE_INLINE decltype(auto) _operator_subscript(_ElemRight&&... other) const { return __ref().__ref()._operator_subscript(std::forward<_ElemRight>(other)...); }
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
	public: inline void setAt(CppAdvance::i32 idx, const CppAdvance::f32& value);
	public: inline const CppAdvance::f32 getAt(CppAdvance::i32 idx);
	inline const CppAdvance::f32 getAt(CppAdvance::i32 idx) const;
	#line 128 "FirstProgram.adv"
	public: inline auto _operator_subscript(CppAdvance::i32 idx)  -> __IndexerAccessor_128<CppAdvance::f32>;
	public: inline auto _operator_subscript(CppAdvance::i32 idx) const  -> const __IndexerAccessor_128<CppAdvance::f32>;
	public: inline constexpr const CppAdvance::f32 getAt(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3);
	inline constexpr const CppAdvance::f32 getAt(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3) const;
	#line 138 "FirstProgram.adv"
	public: inline constexpr auto _operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3)  -> const CppAdvance::f32;
	public: inline constexpr auto _operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3) const  -> const CppAdvance::f32;
	#line 140 "FirstProgram.adv"
	public: inline constexpr auto getX() const  -> const CppAdvance::f32;
	#line 141 "FirstProgram.adv"
	public: inline auto getNext() const  -> const Next;
	#line 144 "FirstProgram.adv"
	public: inline constexpr static auto Method(CppAdvance::i32 x, CppAdvance::i32 y, CppAdvance::i32 z)  -> const CppAdvance::i32;
	#line 150 "FirstProgram.adv"
	public: inline constexpr auto Reset()  -> void;
	#line 158 "FirstProgram.adv"
	public: template<class U> inline constexpr auto TemplateMethod(U x, U y, U z)  -> const Coords;
	
};
template<> inline constexpr bool CppAdvance::__details::cheapCopy<BaseClass> = false;
#line 176 "FirstProgram.adv"
class BaseClass : public CppAdvance::ObjectRef {
	public: using __self = BaseClass;
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
#line 176 "FirstProgram.adv"
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

template<> inline constexpr bool CppAdvance::__details::cheapCopy<VectorClass> = false;
#line 180 "FirstProgram.adv"
class VectorClass : public CppAdvance::ClassRefParent<BaseClass> {
	public: using __self = VectorClass;
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
		public: using __self = NestedClass;
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
	#line 217 "FirstProgram.adv"
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
	#line 217 "FirstProgram.adv"
	class __Class_NestedClass : public CppAdvance::Object {
		public: using __self = NestedClass;
		private: using ___super = CppAdvance::Object;
		public: using __selfClass = __Class_NestedClass;
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
	#line 286 "FirstProgram.adv"
	public: inline decltype(auto) _operator_subscript(CppAdvance::i32 idx) const  LIFETIMEBOUND;
	#line 287 "FirstProgram.adv"
	public: inline decltype(auto) _operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3) const ;
	#line 293 "FirstProgram.adv"
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
	public: using __self = VectorClass;
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
	#line 286 "FirstProgram.adv"
	public: inline decltype(auto) _operator_subscript(CppAdvance::i32 idx) const  LIFETIMEBOUND;
	#line 287 "FirstProgram.adv"
	public: inline decltype(auto) _operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3) const ;
	
};
#line 180 "FirstProgram.adv"
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
#line 325 "FirstProgram.adv"
class ConcreteVectorClass : public CppAdvance::ClassRefParent<VectorClass> {
	public: using __self = ConcreteVectorClass;
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
	#line 332 "FirstProgram.adv"
	public: inline  ConcreteVectorClass(CppAdvance::i32 i) noexcept;
	#line 356 "FirstProgram.adv"
	public: inline decltype(auto) operator+(const ConcreteVectorClass& other) const ;
	#define ADV_PROPERTY_SELF __self
};
#line 325 "FirstProgram.adv"
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
	#line 356 "FirstProgram.adv"
	public: inline decltype(auto) operator+(const ConcreteVectorClass& other) const ;
	
};
#line 325 "FirstProgram.adv"
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
#line 364 "FirstProgram.adv"
class Next : public CppAdvance::ObjectRef {
	public: using __self = Next;
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
	#line 381 "FirstProgram.adv"
	public: inline decltype(auto) operator*() const ;
	#define ADV_PROPERTY_SELF __self
};
#line 364 "FirstProgram.adv"
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
	#line 381 "FirstProgram.adv"
	public: inline decltype(auto) operator*() const ;
	
};
#line 364 "FirstProgram.adv"
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

template<> inline constexpr bool CppAdvance::__details::cheapCopy<IMagicNumber> = false;
#line 389 "FirstProgram.adv"
template<class __AnyType> concept __HasMethodImplementation_a2e2f819fa3cd789 = requires(typename __AnyType::__class t) { {t.GetMagicNumber(std::declval<VectorClass>())} -> std::convertible_to<CppAdvance::f32>; }  || requires(typename __AnyType::__class t) { {GetMagicNumber(t, std::declval<VectorClass>())} -> std::convertible_to<CppAdvance::f32>; };
#line 390 "FirstProgram.adv"
template<class __AnyType> concept __HasMethodImplementation_getaddd298886dbcfb6 = requires(typename __AnyType::__class t) { {t.__ref().getCount123()} -> std::convertible_to<CppAdvance::i32>; } || requires(typename __AnyType::__class t) { {getCount123(t)} -> std::convertible_to<CppAdvance::i32>; };
namespace __vtables {
	#line 388 "FirstProgram.adv"
	struct __vtable_IMagicNumber
	{
		using fn_a2e2f819fa3cd789 = const CppAdvance::f32(CppAdvance::Object*, CppAdvance::In<VectorClass> f);
		fn_a2e2f819fa3cd789* fnptr_a2e2f819fa3cd789;
		#line 389 "FirstProgram.adv"
		template<class __AnyType> static const CppAdvance::f32 impl_a2e2f819fa3cd789(CppAdvance::Object* obj, CppAdvance::In<VectorClass> f) { ADV_EXPRESSION_BODY(ADV_UFCS(GetMagicNumber)(*static_cast<typename __AnyType::__class*>(obj), f)); }
		using fn_getCount123 = CppAdvance::i32(CppAdvance::Object*);
		fn_getCount123* fnptr_getCount123;
		#line 390 "FirstProgram.adv"
		template<class __AnyType> static CppAdvance::i32 impl_getCount123(CppAdvance::Object* obj) { return ADV_UFCS(getCount123)(*static_cast<typename __AnyType::__class*>(obj)); }
		
	};
}
#line 388 "FirstProgram.adv"
template<class __AnyType> inline constexpr __vtables::__vtable_IMagicNumber __vtable_IMagicNumber_for = {&__vtables::__vtable_IMagicNumber::template impl_a2e2f819fa3cd789<__AnyType>
	, &__vtables::__vtable_IMagicNumber::template impl_getCount123<__AnyType>
	};
#line 388 "FirstProgram.adv"
template<class __AnyType> concept __ImplementsInterface_IMagicNumber = __HasMethodImplementation_a2e2f819fa3cd789<__AnyType> && __HasMethodImplementation_getaddd298886dbcfb6<__AnyType>;
#line 388 "FirstProgram.adv"
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
		} else static_assert(false,"Not implemented yet");
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
		} else static_assert(false,"Not implemented yet");
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
		} else static_assert(false,"Not implemented yet"); return *this;
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
		} else static_assert(false,"Not implemented yet"); return *this;
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
#line 394 "FirstProgram.adv"
template<class __AnyType> concept __HasMethodImplementation_565bebff34b81aa1 = requires(typename __AnyType::__class t) { {t.Reset()} -> std::same_as<void>; }  || requires(typename __AnyType::__class t) { {Reset(t)} -> std::same_as<void>; };
namespace __vtables {
	#line 393 "FirstProgram.adv"
	struct __vtable_IResettable
	{
		using fn_565bebff34b81aa1 = void(CppAdvance::Object*);
		fn_565bebff34b81aa1* fnptr_565bebff34b81aa1;
		#line 394 "FirstProgram.adv"
		template<class __AnyType> static void impl_565bebff34b81aa1(CppAdvance::Object* obj) { ADV_EXPRESSION_BODY(ADV_UFCS(Reset)(*static_cast<typename __AnyType::__class*>(obj))); }
		
	};
}
#line 393 "FirstProgram.adv"
template<class __AnyType> inline constexpr __vtables::__vtable_IResettable __vtable_IResettable_for = {&__vtables::__vtable_IResettable::template impl_565bebff34b81aa1<__AnyType>
	};
#line 393 "FirstProgram.adv"
template<class __AnyType> concept __ImplementsInterface_IResettable = __HasMethodImplementation_565bebff34b81aa1<__AnyType>;
#line 393 "FirstProgram.adv"
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
		} else static_assert(false,"Not implemented yet");
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
		} else static_assert(false,"Not implemented yet");
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
		} else static_assert(false,"Not implemented yet"); return *this;
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
		} else static_assert(false,"Not implemented yet"); return *this;
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
#line 401 "FirstProgram.adv"
template<class __AnyType> concept __HasMethodImplementation_6cedb65857a10a4e = requires(typename __AnyType::__class t) { {t.DefaultMethod(std::declval<VectorClass>())} -> std::convertible_to<CppAdvance::f32>; } ;
#line 402 "FirstProgram.adv"
template<class __AnyType> concept __HasMethodImplementation_fbc51d6746c8ca94 = requires(typename __AnyType::__class t) { {t.operator+(std::declval<ConcreteVectorClass>())} -> std::convertible_to<ConcreteVectorClass>; }  || requires(typename __AnyType::__class t) { {operator+(t, std::declval<ConcreteVectorClass>())} -> std::convertible_to<ConcreteVectorClass>; };
#line 405 "FirstProgram.adv"
template<class __AnyType> concept __HasMethodImplementation_921126693c79e307 = requires(typename __AnyType::__class t) { {t.getAt(std::declval<CppAdvance::i32>())} -> std::convertible_to<CppAdvance::f32&>; }  || requires(typename __AnyType::__class t) { {_operator_subscript(t)} -> std::convertible_to<CppAdvance::f32&>; };
#line 404 "FirstProgram.adv"
template<class __AnyType> concept __HasMethodImplementation_getfd864fe31949d59b = requires(typename __AnyType::__class t) { {t.__ref().getName()} -> std::convertible_to<CppAdvance::Str>; } || requires(typename __AnyType::__class t) { {getName(t)} -> std::convertible_to<CppAdvance::Str>; };
#line 397 "FirstProgram.adv"
ADV_CHECK_INTERFACE(IMagicNumber, IMagicNumber);
#line 397 "FirstProgram.adv"
ADV_CHECK_INTERFACE(IResettable, IResettable);
namespace __vtables {
	#line 397 "FirstProgram.adv"
	struct __vtable_IInterface : public IMagicNumber::__vtable, public IResettable::__vtable
	{
		using fn_6cedb65857a10a4e = const CppAdvance::f32(CppAdvance::Object*, CppAdvance::In<VectorClass> f);
		fn_6cedb65857a10a4e* fnptr_6cedb65857a10a4e;
		#line 401 "FirstProgram.adv"
		template<class __AnyType> static const CppAdvance::f32 impl_6cedb65857a10a4e(CppAdvance::Object* obj, CppAdvance::In<VectorClass> f) { 
			if constexpr(__HasMethodImplementation_6cedb65857a10a4e<__AnyType>) {
				ADV_EXPRESSION_BODY(ADV_UFCS(DefaultMethod)(*static_cast<typename __AnyType::__class*>(obj), f)); 
			} else { throw 0; }
		}
		using fn_fbc51d6746c8ca94 = const ConcreteVectorClass(CppAdvance::Object*, const ConcreteVectorClass& f);
		fn_fbc51d6746c8ca94* fnptr_fbc51d6746c8ca94;
		#line 402 "FirstProgram.adv"
		template<class __AnyType> static const ConcreteVectorClass impl_fbc51d6746c8ca94(CppAdvance::Object* obj, const ConcreteVectorClass& f) { ADV_EXPRESSION_BODY(ADV_UFCS(operator+)(*static_cast<typename __AnyType::__class*>(obj), f)); }
		using fn_921126693c79e307 = CppAdvance::f32&(CppAdvance::Object*, CppAdvance::i32 i);
		fn_921126693c79e307* fnptr_921126693c79e307;
		#line 405 "FirstProgram.adv"
		template<class __AnyType> static CppAdvance::f32& impl_921126693c79e307(CppAdvance::Object* obj, CppAdvance::i32 i) { return ADV_UFCS(getAt)(*static_cast<typename __AnyType::__class*>(obj), i); }
		using fn_getName = CppAdvance::Str(CppAdvance::Object*);
		fn_getName* fnptr_getName;
		#line 404 "FirstProgram.adv"
		template<class __AnyType> static CppAdvance::Str impl_getName(CppAdvance::Object* obj) { return ADV_UFCS(getName)(*static_cast<typename __AnyType::__class*>(obj)); }
		
	};
}
#line 397 "FirstProgram.adv"
template<class __AnyType> inline constexpr __vtables::__vtable_IInterface __vtable_IInterface_for = {__vtable_IMagicNumber_for<__AnyType>
	, __vtable_IResettable_for<__AnyType>
	, __HasMethodImplementation_6cedb65857a10a4e<__AnyType> ? &__vtables::__vtable_IInterface::template impl_6cedb65857a10a4e<__AnyType> : nullptr
	, &__vtables::__vtable_IInterface::template impl_fbc51d6746c8ca94<__AnyType>
	, &__vtables::__vtable_IInterface::template impl_921126693c79e307<__AnyType>
	, &__vtables::__vtable_IInterface::template impl_getName<__AnyType>
	};
#line 397 "FirstProgram.adv"
template<class __AnyType> concept __ImplementsInterface_IInterface = __ImplementsInterface_IMagicNumber<__AnyType> && __ImplementsInterface_IResettable<__AnyType> && __HasMethodImplementation_fbc51d6746c8ca94<__AnyType> && __HasMethodImplementation_921126693c79e307<__AnyType> && __HasMethodImplementation_getfd864fe31949d59b<__AnyType>;
#line 397 "FirstProgram.adv"
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
		} else static_assert(false,"Not implemented yet");
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
		} else static_assert(false,"Not implemented yet");
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
		} else static_assert(false,"Not implemented yet"); return *this;
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
		} else static_assert(false,"Not implemented yet"); return *this;
	}
	public: template<class __AnyType, class __FixedType = std::decay_t<__AnyType>::__self> requires std::is_base_of_v<CppAdvance::Object, std::decay_t<__AnyType>> IInterface& operator=(__AnyType&& value) { static_assert(__ImplementsInterface_IInterface<__FixedType>, "Cannot initialize interface IInterface from this type"); 
 	if (_obj) CppAdvance::Release(_obj); _obj = (CppAdvance::Object*)&value; CppAdvance::Retain(_obj); 
	_vtable = &__vtable_IInterface_for<__FixedType>; return *this; }
	#line 398 "FirstProgram.adv"
	static constexpr auto VERSION = CppAdvance::i32(12345);
	#line 399 "FirstProgram.adv"
	using SomeInt = CppAdvance::i32;
	#line 401 "FirstProgram.adv"
	public: const CppAdvance::f32 __default_DefaultMethod(CppAdvance::In<VectorClass> f) const ;
	#line 407 "FirstProgram.adv"
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
template<class __AnyInterface> requires std::derived_from<__AnyInterface, CppAdvance::InterfaceRef> FORCE_INLINE CppAdvance::f32& getAt(const __AnyInterface& iface, CppAdvance::i32 i)  { ADV_EXPRESSION_BODY(CppAdvance::GetVTableFromInterface(&iface)->fnptr_921126693c79e307(CppAdvance::GetObjectReferenceFromInterface(&iface), i)); }
template<class __AnyInterface> requires std::derived_from<__AnyInterface, CppAdvance::InterfaceRef> FORCE_INLINE decltype(auto) _operator_subscript(const __AnyInterface& iface, CppAdvance::i32 i) { return getAt(iface, i); }
template<class __AnyInterface> requires std::derived_from<__AnyInterface, CppAdvance::InterfaceRef> FORCE_INLINE const CppAdvance::Str getName(const __AnyInterface& iface) { return CppAdvance::GetVTableFromInterface(&iface)->fnptr_getName(CppAdvance::GetObjectReferenceFromInterface(&iface)); }


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

#line 176 "FirstProgram.adv"
class __Class_BaseClass : public CppAdvance::Object {
	public: using __self = BaseClass;
	private: using ___super = CppAdvance::Object;
	public: using __selfClass = __Class_BaseClass;
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
	public: using __self = VectorClass;
	private: using ___super = CppAdvance::ClassParent<BaseClass>;
	public: using __selfClass = __Class_VectorClass;
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
	public: inline CppAdvance::f32& getAt(CppAdvance::i32 idx);
	inline const CppAdvance::f32& getAt(CppAdvance::i32 idx) const;
	#line 286 "FirstProgram.adv"
	public: inline auto _operator_subscript(CppAdvance::i32 idx)  -> CppAdvance::f32& LIFETIMEBOUND;
	public: inline auto _operator_subscript(CppAdvance::i32 idx) const  -> const CppAdvance::f32&;
	public: inline const CppAdvance::f32 getAt(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3);
	inline const CppAdvance::f32 getAt(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3) const;
	#line 287 "FirstProgram.adv"
	public: inline auto _operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3)  -> const CppAdvance::f32;
	public: inline auto _operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3) const  -> const CppAdvance::f32;
	#line 289 "FirstProgram.adv"
	public: virtual auto getX() const  -> const CppAdvance::f32 = 0;
	#line 290 "FirstProgram.adv"
	public: inline virtual auto getNext() const  -> const Next final;
	#line 293 "FirstProgram.adv"
	public: inline constexpr static auto Method(CppAdvance::i32 x, CppAdvance::i32 y, CppAdvance::i32 z)  -> const CppAdvance::i32;
	#line 298 "FirstProgram.adv"
	public: inline constexpr auto Reset() const  -> void;
	#line 306 "FirstProgram.adv"
	public: template<class U> inline constexpr auto TemplateMethod(U x, U y, U z) const  -> const Coords;
	
#define ADV_PROPERTY_SELF __self
};
#line 180 "FirstProgram.adv"
ADV_CHECK_FOR_ABSTRACT(VectorClass);
#line 180 "FirstProgram.adv"
ADV_CHECK_INTERFACE_IMPLEMENTATION(VectorClass, BaseClass, BaseClass, VectorClass);

#line 325 "FirstProgram.adv"
class __Class_ConcreteVectorClass : public CppAdvance::ClassParent<VectorClass> {
	public: using __self = ConcreteVectorClass;
	private: using ___super = CppAdvance::ClassParent<VectorClass>;
	public: using __selfClass = __Class_ConcreteVectorClass;
	friend class __self;
	friend class __self::__weak_ref;
	#define ADV_PROPERTY_SELF __selfClass
	public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
	#line 336 "FirstProgram.adv"
	private: mutable CppAdvance::Str p_Name = CppAdvance::Str{u"ConcreteVectorClass"}; ADV_CHECK_REF_STRUCT("str", CppAdvance::Str);
	#line 336 "FirstProgram.adv"
	public: inline auto setName(const CppAdvance::Str& value) -> __selfClass&;
	#line 336 "FirstProgram.adv"
	public: inline auto getName() const  -> CppAdvance::Str;
	#line 9999 "FirstProgram.adv"
	ADV_PROPERTY_GETTER_SETTER(public, Name, public, getName, public, setName, CppAdvance::Str);
	#line 338 "FirstProgram.adv"
	private: mutable CppAdvance::i32 p_ZZ = CppAdvance::i32(5); ADV_CHECK_REF_STRUCT("i32", CppAdvance::i32);
	#line 338 "FirstProgram.adv"
	public: inline auto setZZ(const CppAdvance::i32& value) -> __selfClass&;
	#line 338 "FirstProgram.adv"
	public: inline auto getZZ() const  -> CppAdvance::i32;
	#line 9999 "FirstProgram.adv"
	ADV_PROPERTY_GETTER_SETTER(public, ZZ, public, getZZ, public, setZZ, CppAdvance::i32);
	#line 340 "FirstProgram.adv"
	private: mutable CppAdvance::i32 p_Count = CppAdvance::i32(1); ADV_CHECK_REF_STRUCT("i32", CppAdvance::i32);
	#line 345 "FirstProgram.adv"
	private: TESTDLL_API virtual auto setCount(const CppAdvance::i32& value) -> __selfClass& final;
	#line 341 "FirstProgram.adv"
	public: TESTDLL_API virtual auto getCount() const  -> CppAdvance::i32 final;
	#line 9999 "FirstProgram.adv"
	ADV_PROPERTY_GETTER_SETTER(public, Count, public, getCount, private, setCount, CppAdvance::i32);
	#line 352 "FirstProgram.adv"
	public: inline constexpr auto getCount123() const  -> CppAdvance::i32;
	#line 9999 "FirstProgram.adv"
	ADV_PROPERTY_GETTER(public, Count123, getCount123, CppAdvance::i32);
	#line 326 "FirstProgram.adv"
	public: inline constexpr __Class_ConcreteVectorClass()  = default;
	#line 328 "FirstProgram.adv"
	public: inline constexpr __Class_ConcreteVectorClass(CppAdvance::f32 x, CppAdvance::f32 y, CppAdvance::f32 z) noexcept;
	#line 332 "FirstProgram.adv"
	public: inline constexpr  __Class_ConcreteVectorClass(CppAdvance::i32 i) noexcept;
	#line 354 "FirstProgram.adv"
	public: inline virtual auto getX() const  -> const CppAdvance::f32 final;
	#line 356 "FirstProgram.adv"
	public: inline auto operator+(const ConcreteVectorClass& other) const  -> const ConcreteVectorClass;
	#line 357 "FirstProgram.adv"
	public: inline auto GetMagicNumber(CppAdvance::In<VectorClass> i) const  -> const CppAdvance::f32;
	
#define ADV_PROPERTY_SELF __self
};
#line 325 "FirstProgram.adv"
ADV_CHECK_FOR_CONCRETE(ConcreteVectorClass);
#line 325 "FirstProgram.adv"
ADV_CHECK_INTERFACE_IMPLEMENTATION(ConcreteVectorClass, VectorClass, VectorClass, ConcreteVectorClass);

#line 364 "FirstProgram.adv"
class __Class_Next : public CppAdvance::Object {
	public: using __self = Next;
	private: using ___super = CppAdvance::Object;
	public: using __selfClass = __Class_Next;
	friend class __self;
	friend class __self::__weak_ref;
	#define ADV_PROPERTY_SELF __selfClass
	public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
	#line 365 "FirstProgram.adv"
	public: mutable CppAdvance::i32 i; ADV_CHECK_REF_STRUCT("i32", CppAdvance::i32);
	#line 366 "FirstProgram.adv"
	public: mutable CppAdvance::Nullable<Next>::__weak_ref v;
	#line 368 "FirstProgram.adv"
	public: inline __Class_Next()  = default;
	#line 370 "FirstProgram.adv"
	public: inline ~__Class_Next() ;
	#line 372 "FirstProgram.adv"
	public: inline explicit __Class_Next(CppAdvance::i32 i) ;
	#line 377 "FirstProgram.adv"
	public: inline explicit __Class_Next(CppAdvance::In<__self> other) ;
	inline __Class_Next(__selfClass& copy) : __Class_Next(__self(copy)) {}
	#line 381 "FirstProgram.adv"
	public: inline auto operator*() const  -> const CppAdvance::i32;
	#line 383 "FirstProgram.adv"
	public: inline auto printNext() const  -> void;
	
#define ADV_PROPERTY_SELF __self
};
#line 364 "FirstProgram.adv"
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
#line 362 "FirstProgram.adv"
inline auto _operator_subscript(CppAdvance::In<VectorClass> vec, CppAdvance::f32 x, CppAdvance::f32 y)  -> const CppAdvance::f32;
#line 445 "FirstProgram.adv"
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
auto Vector3::_operator_subscript(CppAdvance::i32 idx)  -> __IndexerAccessor_128<CppAdvance::f32>
{
	return __IndexerAccessor_128<CppAdvance::f32>{ *this, idx };
}

#line 128 "FirstProgram.adv"
auto Vector3::_operator_subscript(CppAdvance::i32 idx)  const  -> const __IndexerAccessor_128<CppAdvance::f32>
{
	return __IndexerAccessor_128<CppAdvance::f32>{ *this, idx };
}

#line 128 "FirstProgram.adv"
auto Vector3::getAt(CppAdvance::i32 idx)  -> const CppAdvance::f32
{
	#line 130 "FirstProgram.adv"
	print(CppAdvance::Str{u"Read"});
	#line 131 "FirstProgram.adv"
	return x;
}
#line 128 "FirstProgram.adv"
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
#line 138 "FirstProgram.adv"
inline constexpr auto Vector3::getAt(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3)  -> const CppAdvance::f32 { return _operator_subscript(idx, idx2, idx3); }
#line 138 "FirstProgram.adv"
inline constexpr auto Vector3::getAt(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3) const  -> const CppAdvance::f32 { return _operator_subscript(idx, idx2, idx3); }
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
		public: using __self = LocalStruct;
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
	ADV_UFCS(_operator_subscript)((*this).__ref(), CppAdvance::i32(0)) = CppAdvance::i32(13);
	#line 171 "FirstProgram.adv"
	return { x, y, z };
}
#line 177 "FirstProgram.adv"
inline auto __Class_BaseClass::getNext() const  -> const Next
{
	#line 177 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(CppAdvance::New<Next>(CppAdvance::i32(5))); 
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
#line 286 "FirstProgram.adv"
inline auto __Class_VectorClass::_operator_subscript(CppAdvance::i32 idx)  -> CppAdvance::f32&
{
	#line 286 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(x); 
}
#line 286 "FirstProgram.adv"
inline auto __Class_VectorClass::_operator_subscript(CppAdvance::i32 idx)  const  -> const CppAdvance::f32&
{
	#line 286 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(x); 
}
#line 286 "FirstProgram.adv"
inline auto __Class_VectorClass::getAt(CppAdvance::i32 idx)  -> CppAdvance::f32& { return _operator_subscript(idx); }
#line 286 "FirstProgram.adv"
inline auto __Class_VectorClass::getAt(CppAdvance::i32 idx) const  -> const CppAdvance::f32& { return _operator_subscript(idx); }
#line 287 "FirstProgram.adv"
inline auto __Class_VectorClass::_operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3)  -> const CppAdvance::f32
{
	#line 287 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(y + z); 
}
#line 287 "FirstProgram.adv"
inline auto __Class_VectorClass::_operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3)  const  -> const CppAdvance::f32
{
	#line 287 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(y + z); 
}
#line 287 "FirstProgram.adv"
inline auto __Class_VectorClass::getAt(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3)  -> const CppAdvance::f32 { return _operator_subscript(idx, idx2, idx3); }
#line 287 "FirstProgram.adv"
inline auto __Class_VectorClass::getAt(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3) const  -> const CppAdvance::f32 { return _operator_subscript(idx, idx2, idx3); }
#line 290 "FirstProgram.adv"
inline auto __Class_VectorClass::getNext() const  -> const Next
{
	#line 290 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(___super::getNext()); 
}
#line 293 "FirstProgram.adv"
inline constexpr auto __Class_VectorClass::Method(CppAdvance::i32 x, CppAdvance::i32 y, CppAdvance::i32 z)  -> const CppAdvance::i32
{
	#line 294 "FirstProgram.adv"
	return y + z;
}
#line 298 "FirstProgram.adv"
inline constexpr auto __Class_VectorClass::Reset() const  -> void
{
	#line 299 "FirstProgram.adv"
	x = CppAdvance::i32(0);
	#line 300 "FirstProgram.adv"
	y = CppAdvance::i32(0);
	#line 301 "FirstProgram.adv"
	z = CppAdvance::i32(0);
}
#line 306 "FirstProgram.adv"
template<class U> inline constexpr auto __Class_VectorClass::TemplateMethod(U x, U y, U z) const  -> const typename __Class_VectorClass::Coords
{
	#line 307 "FirstProgram.adv"
	class __Class_LocalStruct;
	#line 307 "FirstProgram.adv"
	struct LocalStruct : public CppAdvance::Struct
	{
		public: using __self = LocalStruct;
		public: using __class = __Class_LocalStruct;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 308 "FirstProgram.adv"
		#line 308 "FirstProgram.adv"
		public: CppAdvance::f32 x{}; 
		#line 308 "FirstProgram.adv"
		public: CppAdvance::f32 y{}; 
		#line 308 "FirstProgram.adv"
		public: CppAdvance::f32 z{}; 
		
		
	};
	#line 307 "FirstProgram.adv"
	class __Class_LocalStruct : public CppAdvance::ValueType
	{
		#line 9999 "FirstProgram.adv"
		LocalStruct __value;
		public: using __underlying = LocalStruct; using __self = __underlying;
		__Class_LocalStruct(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
		operator __underlying() const noexcept { return __value; }
		
	};
	#line 317 "FirstProgram.adv"
	ADV_UFCS(_operator_subscript)((*this).__ref(), CppAdvance::i32(0)) = CppAdvance::i32(13);
	#line 319 "FirstProgram.adv"
	return { x, y, z };
}
#line 328 "FirstProgram.adv"
inline constexpr __Class_ConcreteVectorClass::__Class_ConcreteVectorClass(CppAdvance::f32 x, CppAdvance::f32 y, CppAdvance::f32 z) noexcept :
#line 329 "FirstProgram.adv"
___super(x, y, z)
{
}
#line 332 "FirstProgram.adv"
inline constexpr __Class_ConcreteVectorClass::__Class_ConcreteVectorClass(CppAdvance::i32 i) noexcept :
#line 333 "FirstProgram.adv"
___super(CppAdvance::f32{i}, CppAdvance::f32{i}, CppAdvance::f32{i})
{
}
#line 336 "FirstProgram.adv"
inline auto __Class_ConcreteVectorClass::setName(const CppAdvance::Str& value) -> __selfClass& { p_Name = value; return *this;}
#line 336 "FirstProgram.adv"
inline auto __Class_ConcreteVectorClass::getName() const  -> CppAdvance::Str { return p_Name; }

#line 338 "FirstProgram.adv"
inline auto __Class_ConcreteVectorClass::setZZ(const CppAdvance::i32& value) -> __selfClass& { p_ZZ = value; return *this;}
#line 338 "FirstProgram.adv"
inline auto __Class_ConcreteVectorClass::getZZ() const  -> CppAdvance::i32 { return p_ZZ; }

#line 352 "FirstProgram.adv"
inline constexpr auto __Class_ConcreteVectorClass::getCount123() const  -> CppAdvance::i32 
{
	#line 352 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(CppAdvance::i32(1500)); 
}

#line 354 "FirstProgram.adv"
inline auto __Class_ConcreteVectorClass::getX() const  -> const CppAdvance::f32
{
	#line 354 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(x); 
}
#line 356 "FirstProgram.adv"
inline auto __Class_ConcreteVectorClass::operator+(const ConcreteVectorClass& other) const  -> const ConcreteVectorClass
{
	#line 356 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(CppAdvance::New<ConcreteVectorClass>(ADV_UPCS(x)((*this).__ref()) + ADV_UPCS(x)(other.__ref()), ADV_UPCS(y)((*this).__ref()) + ADV_UPCS(y)(other.__ref()), ADV_UPCS(z)((*this).__ref()) + ADV_UPCS(z)(other.__ref()))); 
}
#line 357 "FirstProgram.adv"
inline auto __Class_ConcreteVectorClass::GetMagicNumber(CppAdvance::In<VectorClass> i) const  -> const CppAdvance::f32
{
	#line 357 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(ADV_UPCS(x)((*this).__ref()) * ADV_UPCS(x)(i.__ref())); 
}
#line 362 "FirstProgram.adv"
inline auto _operator_subscript(CppAdvance::In<VectorClass> vec, CppAdvance::f32 x, CppAdvance::f32 y)  -> const CppAdvance::f32
{
	#line 362 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(ADV_UPCS(x)(vec.__ref()) * x + ADV_UPCS(y)(vec.__ref()) * y); 
}
#line 370 "FirstProgram.adv"
inline __Class_Next::~__Class_Next() 
{
	#line 370 "FirstProgram.adv"
	print(CppAdvance::Str{u"Next deiniting"}); 
}
#line 372 "FirstProgram.adv"
inline __Class_Next::__Class_Next(CppAdvance::i32 i)  : 
#line 373 "FirstProgram.adv"
i{i}
{
}
#line 377 "FirstProgram.adv"
inline __Class_Next::__Class_Next(CppAdvance::In<__self> other)  : 
#line 378 "FirstProgram.adv"
i{CppAdvance::i32(0)}
{
}
#line 381 "FirstProgram.adv"
inline auto __Class_Next::operator*() const  -> const CppAdvance::i32
{
	#line 381 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(i); 
}
#line 383 "FirstProgram.adv"
inline auto __Class_Next::printNext() const  -> void
{
	#line 384 "FirstProgram.adv"
	print(CppAdvance::Str{u"This is printNext function in optional chaining call"});
}
#line 445 "FirstProgram.adv"
inline auto getSum(CppAdvance::In<VectorClass> vec)  -> const CppAdvance::f32
{
	#line 445 "FirstProgram.adv"
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
#line 286 "FirstProgram.adv"
inline decltype(auto) VectorClass::_operator_subscript(CppAdvance::i32 idx) const  LIFETIMEBOUND{ ADV_EXPRESSION_BODY(__ref()._operator_subscript(idx)); }
inline decltype(auto) VectorClass__Unowned::_operator_subscript(CppAdvance::i32 idx) const  LIFETIMEBOUND{ ADV_EXPRESSION_BODY(__ref()._operator_subscript(idx)); }
#line 287 "FirstProgram.adv"
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
#line 332 "FirstProgram.adv"
inline ConcreteVectorClass::ConcreteVectorClass(CppAdvance::i32 i)noexcept : ___super(new (::operator new(sizeof(__class))) __class(i)) {}
#line 356 "FirstProgram.adv"
inline decltype(auto) ConcreteVectorClass::operator+(const ConcreteVectorClass& other) const { ADV_EXPRESSION_BODY(__ref().operator+(other)); }
inline decltype(auto) ConcreteVectorClass__Unowned::operator+(const ConcreteVectorClass& other) const { ADV_EXPRESSION_BODY(__ref().operator+(other)); }

#line 9999 "FirstProgram.adv"
inline Next::ADV_CLASS_DEFAULT_CTOR(Next)
inline Next::ADV_CLASS_STRONG_CTOR_REF(Next)
inline Next& Next::ADV_CLASS_STRONG_ASSIGN_REF(Next)
inline Next__Unowned::ADV_CLASS_UNOWNED_CTOR_REF(Next__Unowned)
inline Next__Unowned& Next__Unowned::ADV_CLASS_UNOWNED_ASSIGN_REF(Next__Unowned)
inline Next__Weak::ADV_CLASS_WEAK_CTOR_REF(Next__Weak)
inline Next__Weak& Next__Weak::ADV_CLASS_WEAK_ASSIGN_REF(Next__Weak)
#line 381 "FirstProgram.adv"
inline decltype(auto) Next::operator*() const { ADV_EXPRESSION_BODY(__ref().operator*()); }
inline decltype(auto) Next__Unowned::operator*() const { ADV_EXPRESSION_BODY(__ref().operator*()); }

inline const CppAdvance::f32 IInterface::__default_DefaultMethod(CppAdvance::In<VectorClass> f) const 
{
	#line 401 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(ADV_UFCS(GetMagicNumber)((*this).__ref(), f)); 
}
inline const CppAdvance::i32 IInterface::SomeStaticMethod(CppAdvance::i32 i) 
{
	#line 407 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(i * CppAdvance::i32(123)); 
}
