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
namespace __ntuples { class NamedTuple_ffda88e0b5252a0a; } 
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
namespace __ntuples { class NamedTuple_ffda88e0b5252a0a; } 
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
	class __Class_NestedStruct;
	#line 95 "FirstProgram.adv"
	struct NestedStruct final : public CppAdvance::Struct {
		private: using __self = NestedStruct;
		public: using __class = __Class_NestedStruct;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 97 "FirstProgram.adv"
		public: CppAdvance::f32 x; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
		#line 98 "FirstProgram.adv"
		public: CppAdvance::f32 y; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
		#line 99 "FirstProgram.adv"
		public: CppAdvance::f32 z; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
		public: NestedStruct(CppAdvance::f32 _x, CppAdvance::f32 _y, CppAdvance::f32 _z) : x{_x}, y{_y}, z{_z} {}
		#line 100 "FirstProgram.adv"
		private: __FirstProgram_Protected::Test111 p_tt; ADV_CHECK_REF_STRUCT("Test111", __FirstProgram_Protected::Test111);
		#line 100 "FirstProgram.adv"
		private: inline auto settt(const __FirstProgram_Protected::Test111& value) -> __self&;
		#line 100 "FirstProgram.adv"
		public: inline auto gettt() const  -> __FirstProgram_Protected::Test111;
		#line 9999 "FirstProgram.adv"
		ADV_PROPERTY_GETTER_SETTER(public, tt, public, gettt, private, settt, __FirstProgram_Protected::Test111);
		
	};
	public: 
	
	#line 95 "FirstProgram.adv"
	class __Class_NestedStruct final : public CppAdvance::ValueType
	{
		#line 9999 "FirstProgram.adv"
		NestedStruct __value;
		public: using __underlying = NestedStruct; using __self = __underlying;
		__Class_NestedStruct(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
		operator __underlying() const noexcept { return __value; }
		auto gettt() const -> __FirstProgram_Protected::Test111 { return __value.gettt(); }
		
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
	#line 106 "FirstProgram.adv"
	public: inline constexpr Vector3()  = default;
	#line 108 "FirstProgram.adv"
	public: template<class U> inline constexpr  Vector3(U f) ;
	#line 113 "FirstProgram.adv"
	public: inline constexpr  operator CppAdvance::f32() const noexcept;
	#line 115 "FirstProgram.adv"
	public: inline constexpr auto operator+(const __self& other) const  -> decltype(auto);
	#line 117 "FirstProgram.adv"
	public: inline auto operator++()  -> __self& LIFETIMEBOUND;
	public: inline auto operator++(int)  -> Vector3;
	#line 9999 "FirstProgram.adv"
	private: template<class __IdxT = CppAdvance::f32> struct __IndexerAccessor_127 {
		private:
		Vector3& _parent;
		CppAdvance::i32 _idx;
		 friend class Vector3;
		public:
		FORCE_INLINE __IndexerAccessor_127(Vector3& parent, CppAdvance::i32 idx) : _parent(parent), _idx(idx) {}
		FORCE_INLINE __IndexerAccessor_127(Vector3 const& parent, CppAdvance::i32 idx) : _parent(const_cast<std::remove_cvref_t<decltype(parent)>&>(parent)), _idx(idx) {}
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
		template<class Ch> friend FORCE_INLINE decltype(auto) operator<<(std::basic_ostream<Ch>& stream, const __IndexerAccessor_127<__IdxT>& elem) { return stream << elem.__ref(); }
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

	friend struct __IndexerAccessor_127<CppAdvance::f32>;
	inline CppAdvance::f32 getAt(CppAdvance::i32 idx);
	inline const CppAdvance::f32 getAt(CppAdvance::i32 idx) const;
	inline void setAt(CppAdvance::i32 idx, const CppAdvance::f32& value);
	#line 127 "FirstProgram.adv"
	public: inline auto operator[](CppAdvance::i32 idx)  -> __IndexerAccessor_127<CppAdvance::f32>;
	public: inline auto operator[](CppAdvance::i32 idx) const  -> const __IndexerAccessor_127<CppAdvance::f32>;
	#line 137 "FirstProgram.adv"
	public: inline constexpr auto _operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3)  -> CppAdvance::f32;
	public: inline constexpr auto _operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3) const  -> const CppAdvance::f32;
	#line 139 "FirstProgram.adv"
	public: inline constexpr auto getX() const  -> CppAdvance::f32;
	#line 140 "FirstProgram.adv"
	public: inline auto getNext() const  -> Next;
	#line 143 "FirstProgram.adv"
	public: inline constexpr static auto Method(CppAdvance::i32 x, CppAdvance::i32 y, CppAdvance::i32 z)  -> CppAdvance::i32;
	#line 147 "FirstProgram.adv"
	public: inline constexpr static auto GetTest()  -> __FirstProgram_Protected::Test111;
	#line 149 "FirstProgram.adv"
	public: template<class U> inline constexpr auto TemplateMethod(U x, U y, U z)  -> Coords;
	
};
template<> inline constexpr bool CppAdvance::__details::cheapCopy<BaseClass> = false;
#line 167 "FirstProgram.adv"
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
#line 167 "FirstProgram.adv"
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
#line 167 "FirstProgram.adv"
class BaseClass__Weak : public CppAdvance::ObjectRef__Weak {
	private: using __self = BaseClass;
	public: using __strong_ref = BaseClass;
	public: using __unowned_ref = BaseClass__Unowned;
	public: using __weak_ref = BaseClass__Weak;
	private: using ___super = CppAdvance::ObjectRef__Weak;
	public: using __class = __Class_BaseClass;
	public: FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
	ADV_CLASS_WEAK_FROM_PTR(BaseClass__Weak)
	ADV_CLASS_WEAK_COMMON_CTORS(BaseClass__Weak)
	#define ADV_PROPERTY_SELF __self
};

template<> inline constexpr bool CppAdvance::__details::cheapCopy<VectorClass> = false;
#line 171 "FirstProgram.adv"
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
	class __Class_NestedStruct;
	#line 208 "FirstProgram.adv"
	struct NestedStruct final : public CppAdvance::Struct {
		private: using __self = NestedStruct;
		public: using __class = __Class_NestedStruct;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 210 "FirstProgram.adv"
		public: CppAdvance::f32 x; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
		#line 211 "FirstProgram.adv"
		public: CppAdvance::f32 y; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
		#line 212 "FirstProgram.adv"
		public: CppAdvance::f32 z; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
		public: NestedStruct(CppAdvance::f32 _x, CppAdvance::f32 _y, CppAdvance::f32 _z) : x{_x}, y{_y}, z{_z} {}
		#line 213 "FirstProgram.adv"
		private: __FirstProgram_Protected::Test111 p_tt; ADV_CHECK_REF_STRUCT("Test111", __FirstProgram_Protected::Test111);
		#line 213 "FirstProgram.adv"
		private: inline auto settt(const __FirstProgram_Protected::Test111& value) -> __self&;
		#line 213 "FirstProgram.adv"
		public: inline auto gettt() const  -> __FirstProgram_Protected::Test111;
		#line 9999 "FirstProgram.adv"
		ADV_PROPERTY_GETTER_SETTER(public, tt, public, gettt, private, settt, __FirstProgram_Protected::Test111);
		
	};
	public: 
	
	#line 208 "FirstProgram.adv"
	class __Class_NestedStruct final : public CppAdvance::ValueType
	{
		#line 9999 "FirstProgram.adv"
		NestedStruct __value;
		public: using __underlying = NestedStruct; using __self = __underlying;
		__Class_NestedStruct(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
		operator __underlying() const noexcept { return __value; }
		auto gettt() const -> __FirstProgram_Protected::Test111 { return __value.gettt(); }
		
	};
	#line 208 "FirstProgram.adv"
	ADV_CHECK_FOR_CONCRETE(NestedStruct);
	public: static decltype(auto) getCount2();
	static void setCount2(const CppAdvance::i32& value);
	ADV_PROPERTY_GETTER_SETTER_STATIC(public, TESTDLL_API, Count2, public, getCount2, public, setCount2, CppAdvance::i32);
	public: static decltype(auto) getZERO();
	ADV_PROPERTY_GETTER_STATIC(public, TESTDLL_API, ZERO, getZERO, Vector3);
	#define ADV_PROPERTY_SELF __class
	#line 241 "FirstProgram.adv"
	public: inline  operator CppAdvance::f32() const noexcept;
	#line 263 "FirstProgram.adv"
	public: inline decltype(auto) operator[](CppAdvance::i32 idx) const ;
	#line 273 "FirstProgram.adv"
	public: inline decltype(auto) _operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3) const ;
	#line 279 "FirstProgram.adv"
	public: inline constexpr static decltype(auto) Method(CppAdvance::i32 x, CppAdvance::i32 y, CppAdvance::i32 z) ;
	#line 283 "FirstProgram.adv"
	public: inline constexpr static decltype(auto) GetTest() ;
	public: static constexpr decltype(auto) BYTES = CppAdvance::i32(24);
	public: using Coords = __ntuples::NamedTuple_6893f862d6c49683;
	friend class TestStruct;
	friend class __Class_TestStruct;
	template<class T> friend class TestStruct2;
	template<class T> friend class __Class_TestStruct2;
	friend CppAdvance::i32 func3(CppAdvance::i32 x);
	#define ADV_PROPERTY_SELF __self
};
#line 171 "FirstProgram.adv"
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
	#line 241 "FirstProgram.adv"
	public: inline  operator CppAdvance::f32() const noexcept;
	#line 263 "FirstProgram.adv"
	public: inline decltype(auto) operator[](CppAdvance::i32 idx) const ;
	#line 273 "FirstProgram.adv"
	public: inline decltype(auto) _operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3) const ;
	
};
#line 171 "FirstProgram.adv"
class VectorClass__Weak : public CppAdvance::ClassRefParentWeak<BaseClass> {
	private: using __self = VectorClass;
	public: using __strong_ref = VectorClass;
	public: using __unowned_ref = VectorClass__Unowned;
	public: using __weak_ref = VectorClass__Weak;
	private: using ___super = CppAdvance::ClassRefParentWeak<BaseClass>;
	public: using __class = __Class_VectorClass;
	public: FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
	ADV_CLASS_WEAK_FROM_PTR(VectorClass__Weak)
	ADV_CLASS_WEAK_COMMON_CTORS(VectorClass__Weak)
	#define ADV_PROPERTY_SELF __self
};

template<> inline constexpr bool CppAdvance::__details::cheapCopy<ConcreteVectorClass> = false;
#line 303 "FirstProgram.adv"
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
	#line 326 "FirstProgram.adv"
	public: inline decltype(auto) operator+(CppAdvance::In<__self> other) const ;
	#define ADV_PROPERTY_SELF __self
};
#line 303 "FirstProgram.adv"
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
	#line 326 "FirstProgram.adv"
	public: inline decltype(auto) operator+(CppAdvance::In<__self> other) const ;
	
};
#line 303 "FirstProgram.adv"
class ConcreteVectorClass__Weak : public CppAdvance::ClassRefParentWeak<VectorClass> {
	private: using __self = ConcreteVectorClass;
	public: using __strong_ref = ConcreteVectorClass;
	public: using __unowned_ref = ConcreteVectorClass__Unowned;
	public: using __weak_ref = ConcreteVectorClass__Weak;
	private: using ___super = CppAdvance::ClassRefParentWeak<VectorClass>;
	public: using __class = __Class_ConcreteVectorClass;
	public: FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
	ADV_CLASS_WEAK_FROM_PTR(ConcreteVectorClass__Weak)
	ADV_CLASS_WEAK_COMMON_CTORS(ConcreteVectorClass__Weak)
	#define ADV_PROPERTY_SELF __self
};

template<> inline constexpr bool CppAdvance::__details::cheapCopy<Next> = false;
#line 330 "FirstProgram.adv"
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
	#line 347 "FirstProgram.adv"
	public: inline decltype(auto) operator*() const ;
	#define ADV_PROPERTY_SELF __self
};
#line 330 "FirstProgram.adv"
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
	#line 347 "FirstProgram.adv"
	public: inline decltype(auto) operator*() const ;
	
};
#line 330 "FirstProgram.adv"
class Next__Weak : public CppAdvance::ObjectRef__Weak {
	private: using __self = Next;
	public: using __strong_ref = Next;
	public: using __unowned_ref = Next__Unowned;
	public: using __weak_ref = Next__Weak;
	private: using ___super = CppAdvance::ObjectRef__Weak;
	public: using __class = __Class_Next;
	public: FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
	ADV_CLASS_WEAK_FROM_PTR(Next__Weak)
	ADV_CLASS_WEAK_COMMON_CTORS(Next__Weak)
	#define ADV_PROPERTY_SELF __self
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
#line 167 "FirstProgram.adv"
class __Class_BaseClass : public CppAdvance::Object {
	private: using __self = BaseClass;
	private: using ___super = CppAdvance::Object;
	private: using __selfClass = __Class_BaseClass;
	friend class __self;
	friend class __self::__weak_ref;
	#define ADV_PROPERTY_SELF __selfClass
	public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
	#line 168 "FirstProgram.adv"
	public: inline virtual auto getNext() const  -> Next;
	
#define ADV_PROPERTY_SELF __self
};
#line 167 "FirstProgram.adv"
ADV_CHECK_FOR_CONCRETE(BaseClass);

#line 171 "FirstProgram.adv"
class ADV_NOVTABLE __Class_VectorClass ADV_ABSTRACT : public CppAdvance::ClassParent<BaseClass, CppAdvance::Object, BaseClass>, public CppAdvance::ClassParent<BaseClass, BaseClass, IEquatable>, public CppAdvance::ClassParent<BaseClass, IEquatable, IFormattable>, public CppAdvance::ClassParent<BaseClass, IFormattable, CppAdvance::EmptyType> {
	private: using __self = VectorClass;
	private: using ___super = CppAdvance::ClassParent<BaseClass, CppAdvance::Object, BaseClass>;
	private: using __selfClass = __Class_VectorClass;
	friend class __self;
	friend class __self::__weak_ref;
	#define ADV_PROPERTY_SELF __selfClass
	#line 171 "FirstProgram.adv"
	ADV_CHECK_INTERFACE(IEquatable, IEquatable);
	#line 171 "FirstProgram.adv"
	ADV_CHECK_INTERFACE(IFormattable, IFormattable);
	public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
	public: using NestedStruct = __self::NestedStruct;
	#line 180 "FirstProgram.adv"
	private: friend class TestStruct; friend class __Class_TestStruct;
	#line 181 "FirstProgram.adv"
	private: template<class T> friend class TestStruct2; template<class T> friend class __Class_TestStruct2;
	#line 182 "FirstProgram.adv"
	private: friend CppAdvance::i32 func3(CppAdvance::i32 x);
	#line 174 "FirstProgram.adv"
	public: CppAdvance::f32 x; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
	#line 174 "FirstProgram.adv"
	public: CppAdvance::f32 y; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
	#line 174 "FirstProgram.adv"
	public: CppAdvance::f32 z; ADV_CHECK_REF_STRUCT("f32", CppAdvance::f32);
	#line 203 "FirstProgram.adv"
	public: TESTDLL_API static CppAdvance::i32 Count2; ADV_CHECK_REF_STRUCT("i32", CppAdvance::i32);
	#line 205 "FirstProgram.adv"
	public: TESTDLL_API static const Vector3 ZERO; ADV_CHECK_REF_STRUCT("Vector3", Vector3);
	#line 204 "FirstProgram.adv"
	public: static constexpr auto BYTES = CppAdvance::i32(24);
	#line 206 "FirstProgram.adv"
	public: using Coords = __ntuples::NamedTuple_6893f862d6c49683;
	#line 175 "FirstProgram.adv"
	private: __FirstProgram_Protected::Test111 p_t; ADV_CHECK_REF_STRUCT("Test111", __FirstProgram_Protected::Test111);
	#line 175 "FirstProgram.adv"
	private: inline auto sett(const __FirstProgram_Protected::Test111& value) -> __selfClass&;
	#line 175 "FirstProgram.adv"
	public: inline auto gett() const  -> __FirstProgram_Protected::Test111;
	#line 9999 "FirstProgram.adv"
	ADV_PROPERTY_GETTER_SETTER(public, t, public, gett, private, sett, __FirstProgram_Protected::Test111);
	#line 198 "FirstProgram.adv"
	private: CppAdvance::i32 p_Count; ADV_CHECK_REF_STRUCT("i32", CppAdvance::i32);
	#line 198 "FirstProgram.adv"
	public: virtual auto setCount(const CppAdvance::i32& value) -> __selfClass& = 0;
	#line 198 "FirstProgram.adv"
	public: virtual auto getCount() const  -> CppAdvance::i32 = 0;
	#line 9999 "FirstProgram.adv"
	ADV_PROPERTY_GETTER_SETTER(public, Count, public, getCount, public, setCount, CppAdvance::i32);
	#line 201 "FirstProgram.adv"
	public: virtual auto getName() const  -> CppAdvance::Str = 0;
	#line 9999 "FirstProgram.adv"
	ADV_PROPERTY_GETTER(public, Name, getName, CppAdvance::Str);
	#line 184 "FirstProgram.adv"
	public: inline constexpr auto Equals(const IEquatable& other) const noexcept -> bool override;
	#line 185 "FirstProgram.adv"
	public: inline constexpr auto format() const noexcept -> CppAdvance::Str override;
	#line 219 "FirstProgram.adv"
	protected: inline constexpr __Class_VectorClass()  = default;
	#line 221 "FirstProgram.adv"
	protected: inline constexpr __Class_VectorClass(CppAdvance::f32 x, CppAdvance::f32 y, CppAdvance::f32 z) noexcept;
	#line 227 "FirstProgram.adv"
	protected: template<class U> inline constexpr  __Class_VectorClass(U f) ;
	#line 232 "FirstProgram.adv"
	protected: inline  __Class_VectorClass(CppAdvance::In<__self> other) ;
	inline __Class_VectorClass(__selfClass& copy) : __Class_VectorClass(__self(copy)) {}
	#line 236 "FirstProgram.adv"
	public: inline ~__Class_VectorClass() noexcept;
	#line 241 "FirstProgram.adv"
	public: inline  operator CppAdvance::f32() const noexcept;
	#line 243 "FirstProgram.adv"
	public: inline auto increment()  -> __selfClass& LIFETIMEBOUND;
	#line 9999 "FirstProgram.adv"
	private: template<class __IdxT = CppAdvance::f32> struct __IndexerAccessor_263 {
		private:
		__Class_VectorClass& _parent;
		CppAdvance::i32 _idx;
		 friend class VectorClass;
		public:
		FORCE_INLINE __IndexerAccessor_263(__Class_VectorClass& parent, CppAdvance::i32 idx) : _parent(parent), _idx(idx) {}
		FORCE_INLINE __IndexerAccessor_263(__Class_VectorClass const& parent, CppAdvance::i32 idx) : _parent(const_cast<std::remove_cvref_t<decltype(parent)>&>(parent)), _idx(idx) {}
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
		template<class Ch> friend FORCE_INLINE decltype(auto) operator<<(std::basic_ostream<Ch>& stream, const __IndexerAccessor_263<__IdxT>& elem) { return stream << elem.__ref(); }
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

	friend struct __IndexerAccessor_263<CppAdvance::f32>;
	inline CppAdvance::f32 getAt(CppAdvance::i32 idx);
	inline const CppAdvance::f32 getAt(CppAdvance::i32 idx) const;
	inline void setAt(CppAdvance::i32 idx, const CppAdvance::f32& value);
	#line 263 "FirstProgram.adv"
	public: inline auto operator[](CppAdvance::i32 idx)  -> __IndexerAccessor_263<CppAdvance::f32>;
	public: inline auto operator[](CppAdvance::i32 idx) const  -> const __IndexerAccessor_263<CppAdvance::f32>;
	#line 273 "FirstProgram.adv"
	public: inline auto _operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3)  -> CppAdvance::f32;
	public: inline auto _operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3) const  -> const CppAdvance::f32;
	#line 275 "FirstProgram.adv"
	public: virtual auto getX() const  -> CppAdvance::f32 = 0;
	#line 276 "FirstProgram.adv"
	public: inline virtual auto getNext() const  -> Next final;
	#line 279 "FirstProgram.adv"
	public: inline constexpr static auto Method(CppAdvance::i32 x, CppAdvance::i32 y, CppAdvance::i32 z)  -> CppAdvance::i32;
	#line 283 "FirstProgram.adv"
	public: inline constexpr static auto GetTest()  -> __FirstProgram_Protected::Test111;
	#line 285 "FirstProgram.adv"
	public: template<class U> inline constexpr auto TemplateMethod(U x, U y, U z)  -> Coords;
	
#define ADV_PROPERTY_SELF __self
};
#line 171 "FirstProgram.adv"
ADV_CHECK_FOR_ABSTRACT(VectorClass);

#line 303 "FirstProgram.adv"
class __Class_ConcreteVectorClass : public CppAdvance::ClassParent<VectorClass, CppAdvance::Object, VectorClass>, public CppAdvance::ClassParent<VectorClass, VectorClass, CppAdvance::EmptyType> {
	private: using __self = ConcreteVectorClass;
	private: using ___super = CppAdvance::ClassParent<VectorClass, CppAdvance::Object, VectorClass>;
	private: using __selfClass = __Class_ConcreteVectorClass;
	friend class __self;
	friend class __self::__weak_ref;
	#define ADV_PROPERTY_SELF __selfClass
	public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
	#line 310 "FirstProgram.adv"
	public: inline constexpr auto getName() const  -> CppAdvance::Str;
	#line 9999 "FirstProgram.adv"
	ADV_PROPERTY_GETTER(public, Name, getName, CppAdvance::Str);
	#line 312 "FirstProgram.adv"
	private: CppAdvance::i32 p_Count = CppAdvance::i32(1); ADV_CHECK_REF_STRUCT("i32", CppAdvance::i32);
	#line 317 "FirstProgram.adv"
	private: TESTDLL_API virtual auto setCount(const CppAdvance::i32& value) -> __selfClass& final;
	#line 313 "FirstProgram.adv"
	public: TESTDLL_API virtual auto getCount() const  -> CppAdvance::i32 final;
	#line 9999 "FirstProgram.adv"
	ADV_PROPERTY_GETTER_SETTER(public, Count, public, getCount, private, setCount, CppAdvance::i32);
	#line 304 "FirstProgram.adv"
	public: inline constexpr __Class_ConcreteVectorClass()  = default;
	#line 306 "FirstProgram.adv"
	public: inline constexpr __Class_ConcreteVectorClass(CppAdvance::f32 x, CppAdvance::f32 y, CppAdvance::f32 z) noexcept;
	#line 324 "FirstProgram.adv"
	public: inline virtual auto getX() const  -> CppAdvance::f32 final;
	#line 326 "FirstProgram.adv"
	public: inline auto operator+(CppAdvance::In<__self> other) const  -> __self;
	
#define ADV_PROPERTY_SELF __self
};
#line 303 "FirstProgram.adv"
ADV_CHECK_FOR_CONCRETE(ConcreteVectorClass);

#line 330 "FirstProgram.adv"
class __Class_Next : public CppAdvance::Object {
	private: using __self = Next;
	private: using ___super = CppAdvance::Object;
	private: using __selfClass = __Class_Next;
	friend class __self;
	friend class __self::__weak_ref;
	#define ADV_PROPERTY_SELF __selfClass
	public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
	#line 331 "FirstProgram.adv"
	public: CppAdvance::i32 i; ADV_CHECK_REF_STRUCT("i32", CppAdvance::i32);
	#line 334 "FirstProgram.adv"
	public: inline __Class_Next()  = default;
	#line 336 "FirstProgram.adv"
	public: inline ~__Class_Next() ;
	#line 338 "FirstProgram.adv"
	public: inline explicit __Class_Next(CppAdvance::i32 i) ;
	#line 343 "FirstProgram.adv"
	public: inline explicit __Class_Next(CppAdvance::In<__self> other) ;
	inline __Class_Next(__selfClass& copy) : __Class_Next(__self(copy)) {}
	#line 347 "FirstProgram.adv"
	public: inline auto operator*() const  -> CppAdvance::i32;
	
#define ADV_PROPERTY_SELF __self
};
#line 330 "FirstProgram.adv"
ADV_CHECK_FOR_CONCRETE(Next);

namespace __ntuples {
	#line 9999 "FirstProgram.adv"
	struct NamedTuple_ffda88e0b5252a0a final : public CppAdvance::Struct { 
		using __class = CppAdvance::__Class_Basic<NamedTuple_ffda88e0b5252a0a>;
		CppAdvance::i32 i;
		typename Test1::Test2::TestClass t;
		bool b;
		NamedTuple_ffda88e0b5252a0a() = default;
		NamedTuple_ffda88e0b5252a0a(CppAdvance::In<CppAdvance::i32> _i, CppAdvance::In<typename Test1::Test2::TestClass> _t, CppAdvance::In<bool> _b) : i{_i}, t{_t}, b{_b} {}
		FORCE_INLINE decltype(auto) __ref() noexcept { return *this; }
		FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
	};
}
namespace std {
	template <> struct tuple_size<__ntuples::NamedTuple_ffda88e0b5252a0a> : integral_constant<size_t, 3> {};
	template <size_t I> auto& get(__ntuples::NamedTuple_ffda88e0b5252a0a&);
	template <size_t I> const auto& get(const __ntuples::NamedTuple_ffda88e0b5252a0a&);
	template <> struct tuple_element<0, __ntuples::NamedTuple_ffda88e0b5252a0a> { using type = CppAdvance::i32; };
	template <> inline auto& get<0>(__ntuples::NamedTuple_ffda88e0b5252a0a& t) { return t.i; }
	template <> inline const auto& get<0>(const __ntuples::NamedTuple_ffda88e0b5252a0a& t) { return t.i; }
	template <> struct tuple_element<1, __ntuples::NamedTuple_ffda88e0b5252a0a> { using type = typename Test1::Test2::TestClass; };
	template <> inline auto& get<1>(__ntuples::NamedTuple_ffda88e0b5252a0a& t) { return t.t; }
	template <> inline const auto& get<1>(const __ntuples::NamedTuple_ffda88e0b5252a0a& t) { return t.t; }
	template <> struct tuple_element<2, __ntuples::NamedTuple_ffda88e0b5252a0a> { using type = bool; };
	template <> inline auto& get<2>(__ntuples::NamedTuple_ffda88e0b5252a0a& t) { return t.b; }
	template <> inline const auto& get<2>(const __ntuples::NamedTuple_ffda88e0b5252a0a& t) { return t.b; }
	
}
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
#line 34 "FirstProgram.adv"
TESTDLL_HIDDEN auto testt(CppAdvance::i32 x)  -> __ntuples::NamedTuple_ffda88e0b5252a0a;
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
inline auto Vector3::NestedStruct::settt(const __FirstProgram_Protected::Test111& value) -> __self& { p_tt = value; return *this;}
#line 100 "FirstProgram.adv"
inline auto Vector3::NestedStruct::gettt() const  -> __FirstProgram_Protected::Test111 { return p_tt; }

#line 108 "FirstProgram.adv"
template<class U> inline constexpr Vector3::Vector3(U f)  :
#line 109 "FirstProgram.adv"
Vector3(f, f, f)
{
	#line 110 "FirstProgram.adv"
	this->x = f;
}
#line 113 "FirstProgram.adv"
inline constexpr Vector3::operator CppAdvance::f32() const noexcept
{
	#line 113 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(y); 
}
#line 115 "FirstProgram.adv"
inline constexpr auto Vector3::operator+(const __self& other) const  -> decltype(auto)
{
	#line 115 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(__self{(*this).__ref().x + other.__ref().x, (*this).__ref().y + other.__ref().y, (*this).__ref().z + other.__ref().z}); 
}
#line 117 "FirstProgram.adv"
inline auto Vector3::operator++()  -> __self&
{
	#line 118 "FirstProgram.adv"
	++x;
	#line 119 "FirstProgram.adv"
	++y;
	#line 120 "FirstProgram.adv"
	++z;
	#line 121 "FirstProgram.adv"
	++Count;
	#line 122 "FirstProgram.adv"
	__FirstProgram_Protected::Test111 t{}; 
	#line 124 "FirstProgram.adv"
	return (*this);
}
#line 117 "FirstProgram.adv"
inline auto Vector3::operator++(int)  -> __self { auto copy = CppAdvance::New<__self>(__self(*this)); ++(*this); return copy; }
#line 127 "FirstProgram.adv"
auto Vector3::operator[](CppAdvance::i32 idx)  -> __IndexerAccessor_127<CppAdvance::f32>
{
	return __IndexerAccessor_127<CppAdvance::f32>{ *this, idx };
}

#line 127 "FirstProgram.adv"
auto Vector3::operator[](CppAdvance::i32 idx)  const  -> const __IndexerAccessor_127<CppAdvance::f32>
{
	return __IndexerAccessor_127<CppAdvance::f32>{ *this, idx };
}

#line 128 "FirstProgram.adv"
auto Vector3::getAt(CppAdvance::i32 idx)  -> CppAdvance::f32
{
	#line 129 "FirstProgram.adv"
	print(CppAdvance::Str{u"Read"});
	#line 130 "FirstProgram.adv"
	return x;
}
#line 128 "FirstProgram.adv"
auto Vector3::getAt(CppAdvance::i32 idx) const  -> const CppAdvance::f32
{
	#line 129 "FirstProgram.adv"
	print(CppAdvance::Str{u"Read"});
	#line 130 "FirstProgram.adv"
	return x;
}
#line 132 "FirstProgram.adv"
auto Vector3::setAt(CppAdvance::i32 idx, const CppAdvance::f32& value)  -> void 
{
	#line 133 "FirstProgram.adv"
	if (value < CppAdvance::i32(10)) {
		#line 133 "FirstProgram.adv"
		return ;
	}
	#line 134 "FirstProgram.adv"
	x = CppAdvance::i32(5);
}
#line 137 "FirstProgram.adv"
inline constexpr auto Vector3::_operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3)  -> CppAdvance::f32
{
	#line 137 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(y + z); 
}
#line 137 "FirstProgram.adv"
inline constexpr auto Vector3::_operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3)  const  -> const CppAdvance::f32
{
	#line 137 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(y + z); 
}
#line 139 "FirstProgram.adv"
inline constexpr auto Vector3::getX() const  -> CppAdvance::f32
{
	#line 139 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(x); 
}
#line 140 "FirstProgram.adv"
inline auto Vector3::getNext() const  -> Next
{
	#line 140 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(CppAdvance::New<Next>(CppAdvance::i32(6))); 
}
#line 143 "FirstProgram.adv"
inline constexpr auto Vector3::Method(CppAdvance::i32 x, CppAdvance::i32 y, CppAdvance::i32 z)  -> CppAdvance::i32
{
	#line 144 "FirstProgram.adv"
	return y + z;
}
#line 147 "FirstProgram.adv"
inline constexpr auto Vector3::GetTest()  -> __FirstProgram_Protected::Test111
{
	#line 147 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(__FirstProgram_Protected::Test111{}); 
}
#line 149 "FirstProgram.adv"
template<class U> inline constexpr auto Vector3::TemplateMethod(U x, U y, U z)  -> typename Vector3::Coords
{
	#line 150 "FirstProgram.adv"
	class __Class_LocalStruct;
	#line 150 "FirstProgram.adv"
	struct LocalStruct : public CppAdvance::Struct
	{
		private: using __self = LocalStruct;
		public: using __class = __Class_LocalStruct;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 151 "FirstProgram.adv"
		#line 151 "FirstProgram.adv"
		public: CppAdvance::f32 x{}; 
		#line 151 "FirstProgram.adv"
		public: CppAdvance::f32 y{}; 
		#line 151 "FirstProgram.adv"
		public: CppAdvance::f32 z{}; 
		#line 151 "FirstProgram.adv"
		private: __FirstProgram_Protected::Test111 p_tt;
		#line 155 "FirstProgram.adv"
		private: inline auto settt(const __FirstProgram_Protected::Test111& value) -> __self& { p_tt = value; return *this; }
		#line 155 "FirstProgram.adv"
		public: inline auto gettt() const  -> __FirstProgram_Protected::Test111 { return p_tt; }
		#line 9999 "FirstProgram.adv"
		ADV_PROPERTY_GETTER_SETTER(public, tt, public, gettt, private, settt, __FirstProgram_Protected::Test111);
		
		
	};
	#line 150 "FirstProgram.adv"
	class __Class_LocalStruct : public CppAdvance::ValueType
	{
		#line 9999 "FirstProgram.adv"
		LocalStruct __value;
		public: using __underlying = LocalStruct; using __self = __underlying;
		__Class_LocalStruct(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
		operator __underlying() const noexcept { return __value; }
		auto gettt() const -> __FirstProgram_Protected::Test111 { return __value.gettt(); }
		
	};
	#line 160 "FirstProgram.adv"
	(*this)[CppAdvance::i32(0)] = CppAdvance::i32(13);
	#line 162 "FirstProgram.adv"
	return { x, y, z };
}
#line 168 "FirstProgram.adv"
inline auto __Class_BaseClass::getNext() const  -> Next
{
	#line 168 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(CppAdvance::New<Next>(CppAdvance::i32(5))); 
}
#line 175 "FirstProgram.adv"
inline auto __Class_VectorClass::sett(const __FirstProgram_Protected::Test111& value) -> __selfClass& { p_t = value; return *this;}
#line 175 "FirstProgram.adv"
inline auto __Class_VectorClass::gett() const  -> __FirstProgram_Protected::Test111 { return p_t; }

#line 184 "FirstProgram.adv"
inline constexpr auto __Class_VectorClass::Equals(const IEquatable& other) const noexcept -> bool
{
	#line 184 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(true); 
}
#line 185 "FirstProgram.adv"
inline constexpr auto __Class_VectorClass::format() const noexcept -> CppAdvance::Str
{
	#line 185 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(CppAdvance::Str{u"test"}); 
}
#line 213 "FirstProgram.adv"
inline auto __Class_VectorClass::NestedStruct::settt(const __FirstProgram_Protected::Test111& value) -> __self& { p_tt = value; return *this;}
#line 213 "FirstProgram.adv"
inline auto __Class_VectorClass::NestedStruct::gettt() const  -> __FirstProgram_Protected::Test111 { return p_tt; }

#line 221 "FirstProgram.adv"
inline constexpr __Class_VectorClass::__Class_VectorClass(CppAdvance::f32 x, CppAdvance::f32 y, CppAdvance::f32 z) noexcept : 
#line 222 "FirstProgram.adv"
x{x}, 
#line 223 "FirstProgram.adv"
y{y}, 
#line 224 "FirstProgram.adv"
z{z}
{
}
#line 227 "FirstProgram.adv"
template<class U> inline constexpr __Class_VectorClass::__Class_VectorClass(U f)  :
#line 228 "FirstProgram.adv"
__Class_VectorClass(f, f, f)
{
	#line 229 "FirstProgram.adv"
	this->x = f;
}
#line 232 "FirstProgram.adv"
inline __Class_VectorClass::__Class_VectorClass(CppAdvance::In<__self> other)  :
#line 233 "FirstProgram.adv"
__Class_VectorClass(other.__ref().x, other.__ref().y, other.__ref().z)
{
}
#line 236 "FirstProgram.adv"
inline __Class_VectorClass::~__Class_VectorClass() noexcept
{
	#line 236 "FirstProgram.adv"
	print(CppAdvance::Str{u"VectorClass deiniting"}); 
}
#line 241 "FirstProgram.adv"
inline __Class_VectorClass::operator CppAdvance::f32() const noexcept
{
	#line 241 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(y); 
}
#line 243 "FirstProgram.adv"
inline auto __Class_VectorClass::increment()  -> __selfClass&
{
	#line 244 "FirstProgram.adv"
	++x;
	#line 245 "FirstProgram.adv"
	++y;
	#line 246 "FirstProgram.adv"
	++z;
	#line 247 "FirstProgram.adv"
	++Count;
	#line 248 "FirstProgram.adv"
	__FirstProgram_Protected::Test111 t{}; 
	#line 250 "FirstProgram.adv"
	return (*this);
}
#line 263 "FirstProgram.adv"
auto __Class_VectorClass::operator[](CppAdvance::i32 idx)  -> __IndexerAccessor_263<CppAdvance::f32>
{
	return __IndexerAccessor_263<CppAdvance::f32>{ *this, idx };
}

#line 263 "FirstProgram.adv"
auto __Class_VectorClass::operator[](CppAdvance::i32 idx)  const  -> const __IndexerAccessor_263<CppAdvance::f32>
{
	return __IndexerAccessor_263<CppAdvance::f32>{ *this, idx };
}

#line 264 "FirstProgram.adv"
auto __Class_VectorClass::getAt(CppAdvance::i32 idx)  -> CppAdvance::f32
{
	#line 265 "FirstProgram.adv"
	print(CppAdvance::Str{u"Read"});
	#line 266 "FirstProgram.adv"
	return x;
}
#line 264 "FirstProgram.adv"
auto __Class_VectorClass::getAt(CppAdvance::i32 idx) const  -> const CppAdvance::f32
{
	#line 265 "FirstProgram.adv"
	print(CppAdvance::Str{u"Read"});
	#line 266 "FirstProgram.adv"
	return x;
}
#line 268 "FirstProgram.adv"
auto __Class_VectorClass::setAt(CppAdvance::i32 idx, const CppAdvance::f32& value)  -> void 
{
	#line 269 "FirstProgram.adv"
	if (value < CppAdvance::i32(10)) {
		#line 269 "FirstProgram.adv"
		return ;
	}
	#line 270 "FirstProgram.adv"
	x = CppAdvance::i32(5);
}
#line 273 "FirstProgram.adv"
inline auto __Class_VectorClass::_operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3)  -> CppAdvance::f32
{
	#line 273 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(y + z); 
}
#line 273 "FirstProgram.adv"
inline auto __Class_VectorClass::_operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3)  const  -> const CppAdvance::f32
{
	#line 273 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(y + z); 
}
#line 276 "FirstProgram.adv"
inline auto __Class_VectorClass::getNext() const  -> Next
{
	#line 276 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(___super::getNext()); 
}
#line 279 "FirstProgram.adv"
inline constexpr auto __Class_VectorClass::Method(CppAdvance::i32 x, CppAdvance::i32 y, CppAdvance::i32 z)  -> CppAdvance::i32
{
	#line 280 "FirstProgram.adv"
	return y + z;
}
#line 283 "FirstProgram.adv"
inline constexpr auto __Class_VectorClass::GetTest()  -> __FirstProgram_Protected::Test111
{
	#line 283 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(__FirstProgram_Protected::Test111{}); 
}
#line 285 "FirstProgram.adv"
template<class U> inline constexpr auto __Class_VectorClass::TemplateMethod(U x, U y, U z)  -> typename __Class_VectorClass::Coords
{
	#line 286 "FirstProgram.adv"
	class __Class_LocalStruct;
	#line 286 "FirstProgram.adv"
	struct LocalStruct : public CppAdvance::Struct
	{
		private: using __self = LocalStruct;
		public: using __class = __Class_LocalStruct;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 287 "FirstProgram.adv"
		#line 287 "FirstProgram.adv"
		public: CppAdvance::f32 x{}; 
		#line 287 "FirstProgram.adv"
		public: CppAdvance::f32 y{}; 
		#line 287 "FirstProgram.adv"
		public: CppAdvance::f32 z{}; 
		#line 287 "FirstProgram.adv"
		private: __FirstProgram_Protected::Test111 p_tt;
		#line 291 "FirstProgram.adv"
		private: inline auto settt(const __FirstProgram_Protected::Test111& value) -> __self& { p_tt = value; return *this; }
		#line 291 "FirstProgram.adv"
		public: inline auto gettt() const  -> __FirstProgram_Protected::Test111 { return p_tt; }
		#line 9999 "FirstProgram.adv"
		ADV_PROPERTY_GETTER_SETTER(public, tt, public, gettt, private, settt, __FirstProgram_Protected::Test111);
		
		
	};
	#line 286 "FirstProgram.adv"
	class __Class_LocalStruct : public CppAdvance::ValueType
	{
		#line 9999 "FirstProgram.adv"
		LocalStruct __value;
		public: using __underlying = LocalStruct; using __self = __underlying;
		__Class_LocalStruct(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
		operator __underlying() const noexcept { return __value; }
		auto gettt() const -> __FirstProgram_Protected::Test111 { return __value.gettt(); }
		
	};
	#line 296 "FirstProgram.adv"
	(*this)[CppAdvance::i32(0)] = CppAdvance::i32(13);
	#line 298 "FirstProgram.adv"
	return { x, y, z };
}
#line 306 "FirstProgram.adv"
inline constexpr __Class_ConcreteVectorClass::__Class_ConcreteVectorClass(CppAdvance::f32 x, CppAdvance::f32 y, CppAdvance::f32 z) noexcept :
#line 307 "FirstProgram.adv"
___super(x, y, z)
{
}
#line 310 "FirstProgram.adv"
inline constexpr auto __Class_ConcreteVectorClass::getName() const  -> CppAdvance::Str 
{
	#line 310 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(CppAdvance::Str{u"VectorClass"}); 
}

#line 324 "FirstProgram.adv"
inline auto __Class_ConcreteVectorClass::getX() const  -> CppAdvance::f32
{
	#line 324 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(x); 
}
#line 326 "FirstProgram.adv"
inline auto __Class_ConcreteVectorClass::operator+(CppAdvance::In<__self> other) const  -> __self
{
	#line 326 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(CppAdvance::New<__self>((*this).__ref().x + other.__ref().x, (*this).__ref().y + other.__ref().y, (*this).__ref().z + other.__ref().z)); 
}
#line 336 "FirstProgram.adv"
inline __Class_Next::~__Class_Next() 
{
	#line 336 "FirstProgram.adv"
	print(CppAdvance::Str{u"Next deiniting"}); 
}
#line 338 "FirstProgram.adv"
inline __Class_Next::__Class_Next(CppAdvance::i32 i)  : 
#line 339 "FirstProgram.adv"
i{i}
{
}
#line 343 "FirstProgram.adv"
inline __Class_Next::__Class_Next(CppAdvance::In<__self> other)  : 
#line 344 "FirstProgram.adv"
i{CppAdvance::i32(0)}
{
}
#line 347 "FirstProgram.adv"
inline auto __Class_Next::operator*() const  -> CppAdvance::i32
{
	#line 347 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(i); 
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
#line 241 "FirstProgram.adv"
inline VectorClass::operator CppAdvance::f32() const noexcept{ ADV_EXPRESSION_BODY(__ref().operator CppAdvance::f32()); }
inline VectorClass__Unowned::operator CppAdvance::f32() const noexcept{ ADV_EXPRESSION_BODY(__ref().operator CppAdvance::f32()); }
#line 263 "FirstProgram.adv"
inline decltype(auto) VectorClass::operator[](CppAdvance::i32 idx) const { ADV_EXPRESSION_BODY(__ref().operator[](idx)); }
inline decltype(auto) VectorClass__Unowned::operator[](CppAdvance::i32 idx) const { ADV_EXPRESSION_BODY(__ref().operator[](idx)); }
#line 273 "FirstProgram.adv"
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
#line 326 "FirstProgram.adv"
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
#line 347 "FirstProgram.adv"
inline decltype(auto) Next::operator*() const { ADV_EXPRESSION_BODY(__ref().operator*()); }
inline decltype(auto) Next__Unowned::operator*() const { ADV_EXPRESSION_BODY(__ref().operator*()); }

