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
namespace __ntuples { class NamedTuple_ffda88e0b5252a0a; } 
namespace __ntuples { class NamedTuple_4e7be1ed49b09d71; } 
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
#line 40 "FirstProgram.adv"
template<class A, class C> using SimpleTuple = std::tuple<A, bool, C>;
#line 41 "FirstProgram.adv"
using ImportantOptions = __ntuples::NamedTuple_4e7be1ed49b09d71;
//###############################################################################
//# Type definitions
//###############################################################################
#line 48 "FirstProgram.adv"
struct [[clang::annotate("ref_struct")]] Span : CppAdvance::RefStruct {
	private: using __self = Span;
	public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
	#line 50 "FirstProgram.adv"
	public: CppAdvance::f32 & data;
	#line 51 "FirstProgram.adv"
	public: CppAdvance::i32 length;
	
};
#line 54 "FirstProgram.adv"
struct Vector3 {
	private: using __self = Vector3;
	public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
	public: 
	#line 84 "FirstProgram.adv"
	struct NestedStruct {
		private: using __self = NestedStruct;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 86 "FirstProgram.adv"
		public: CppAdvance::f32 x; ADV_CHECK_REF_STRUCT(CppAdvance::f32, "f32");
		#line 87 "FirstProgram.adv"
		public: CppAdvance::f32 y; ADV_CHECK_REF_STRUCT(CppAdvance::f32, "f32");
		#line 88 "FirstProgram.adv"
		public: CppAdvance::f32 z; ADV_CHECK_REF_STRUCT(CppAdvance::f32, "f32");
		#line 89 "FirstProgram.adv"
		private: __FirstProgram_Protected::Test111 p_t; ADV_CHECK_REF_STRUCT(__FirstProgram_Protected::Test111, "Test111");
		#line 89 "FirstProgram.adv"
		private: inline auto sett(const __FirstProgram_Protected::Test111& value) -> __self&;
		#line 89 "FirstProgram.adv"
		public: inline auto gett() const  -> __FirstProgram_Protected::Test111;
		#line 9999 "FirstProgram.adv"
		ADV_PROPERTY_GETTER_SETTER(public, Vector3::NestedStruct, __FirstProgram_Protected::Test111, t, public, gett, private, sett);
		
	};
	#line 57 "FirstProgram.adv"
	public: CppAdvance::f32 x; ADV_CHECK_REF_STRUCT(CppAdvance::f32, "f32");
	#line 58 "FirstProgram.adv"
	public: CppAdvance::f32 y; ADV_CHECK_REF_STRUCT(CppAdvance::f32, "f32");
	#line 59 "FirstProgram.adv"
	public: CppAdvance::f32 z; ADV_CHECK_REF_STRUCT(CppAdvance::f32, "f32");
	#line 79 "FirstProgram.adv"
	private: TESTDLL_HIDDEN static thread_local CppAdvance::i32 Count2; ADV_CHECK_REF_STRUCT(CppAdvance::i32, "i32");
	#line 81 "FirstProgram.adv"
	public: TESTDLL_API static const Vector3 ZERO;
	#line 80 "FirstProgram.adv"
	public: static constexpr auto BYTES = CppAdvance::i32(24);
	#line 82 "FirstProgram.adv"
	private: using Coords = __ntuples::NamedTuple_6893f862d6c49683;
	#line 60 "FirstProgram.adv"
	private: NestedStruct p_t; ADV_CHECK_REF_STRUCT(NestedStruct, "NestedStruct");
	#line 60 "FirstProgram.adv"
	private: inline auto sett(const NestedStruct& value) -> __self&;
	#line 60 "FirstProgram.adv"
	public: inline auto gett() const  -> NestedStruct;
	#line 9999 "FirstProgram.adv"
	ADV_PROPERTY_GETTER_SETTER(public, Vector3, NestedStruct, t, public, gett, private, sett);
	#line 65 "FirstProgram.adv"
	private: static CppAdvance::i32 p_Count; ADV_CHECK_REF_STRUCT(CppAdvance::i32, "i32");
	#line 70 "FirstProgram.adv"
	public: TESTDLL_API static auto setCount(const CppAdvance::i32& value) -> void;
	#line 66 "FirstProgram.adv"
	public: TESTDLL_API static auto getCount()  -> CppAdvance::i32;
	#line 9999 "FirstProgram.adv"
	ADV_PROPERTY_GETTER_SETTER_STATIC(public, Vector3, CppAdvance::i32, Count, public, getCount, public, setCount);
	#line 77 "FirstProgram.adv"
	public: inline constexpr auto getName() const  -> CppAdvance::Str;
	#line 9999 "FirstProgram.adv"
	ADV_PROPERTY_GETTER(public, Vector3, CppAdvance::Str, Name, getName);
	#line 95 "FirstProgram.adv"
	public: inline constexpr Vector3()  = default;
	#line 97 "FirstProgram.adv"
	public: inline constexpr Vector3(CppAdvance::f32 x, CppAdvance::f32 y, CppAdvance::f32 z) noexcept;
	#line 103 "FirstProgram.adv"
	public: template<class U> inline constexpr  Vector3(U f) ;
	#line 108 "FirstProgram.adv"
	public: inline constexpr  operator CppAdvance::f32() const noexcept;
	#line 110 "FirstProgram.adv"
	public: inline constexpr auto operator+(const __self& other) const  -> decltype(auto);
	#line 112 "FirstProgram.adv"
	public: inline auto operator++()  -> __self& LIFETIMEBOUND;
	public: inline auto operator++(int)  -> Vector3;
	#line 9999 "FirstProgram.adv"
	private: template<class __IdxT = __FirstProgram_Protected::Test111> struct __IndexerAccessor_121 {
		private:
		Vector3& _parent;
		CppAdvance::i32 _idx;
		 friend class Vector3;
		public:
		FORCE_INLINE __IndexerAccessor_121(Vector3& parent, CppAdvance::i32 idx) : _parent(parent), _idx(idx) {}
		FORCE_INLINE __IndexerAccessor_121(Vector3 const& parent, CppAdvance::i32 idx) : _parent(const_cast<std::remove_cvref_t<decltype(parent)>&>(parent)), _idx(idx) {}
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
		template<class Ch> friend FORCE_INLINE decltype(auto) operator<<(std::basic_ostream<Ch>& stream, const __IndexerAccessor_121<__IdxT>& elem) { return stream << elem.__ref(); }
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

	friend struct __IndexerAccessor_121<__FirstProgram_Protected::Test111>;
	inline __FirstProgram_Protected::Test111 getAt(CppAdvance::i32 idx);
	inline const __FirstProgram_Protected::Test111 getAt(CppAdvance::i32 idx) const;
	template<class _ElemRight> inline void setAt(CppAdvance::i32 idx, const _ElemRight& value);
	#line 121 "FirstProgram.adv"
	public: inline auto operator[](CppAdvance::i32 idx)  -> __IndexerAccessor_121<__FirstProgram_Protected::Test111>;
	public: inline auto operator[](CppAdvance::i32 idx) const  -> const __IndexerAccessor_121<__FirstProgram_Protected::Test111>;
	#line 131 "FirstProgram.adv"
	public: inline constexpr auto _operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3)  -> CppAdvance::f32;
	public: inline constexpr auto _operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3) const  -> const CppAdvance::f32;
	#line 133 "FirstProgram.adv"
	public: inline constexpr auto getX() const  -> CppAdvance::f32;
	#line 136 "FirstProgram.adv"
	public: inline constexpr static auto Method(CppAdvance::i32 x, CppAdvance::i32 y, CppAdvance::i32 z)  -> CppAdvance::i32;
	#line 140 "FirstProgram.adv"
	public: inline constexpr static auto GetTest()  -> __FirstProgram_Protected::Test111;
	#line 142 "FirstProgram.adv"
	public: template<class U> inline constexpr auto TemplateMethod(U x, U y, U z)  -> Coords;
	
};
namespace __ntuples {
	#line 9999 "FirstProgram.adv"
	struct NamedTuple_ffda88e0b5252a0a {
		CppAdvance::i32 i;
		typename Test1::Test2::TestClass t;
		bool b;
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
	struct NamedTuple_4e7be1ed49b09d71 {
		CppAdvance::i32 i;
		CppAdvance::f64 f;
		CppAdvance::Str s;
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
	struct NamedTuple_6893f862d6c49683 {
		CppAdvance::i32 x;
		CppAdvance::i32 y;
		CppAdvance::i32 z;
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
#line 44 "FirstProgram.adv"
template<class T, int32_t U> auto sum(T a, T b)  -> decltype(auto);
#line 45 "FirstProgram.adv"
template<> inline constexpr auto sum<CppAdvance::i32, CppAdvance::i32(15)>(CppAdvance::i32 a, CppAdvance::i32 b)  -> decltype(auto);
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
#line 45 "FirstProgram.adv"
template<> inline constexpr auto sum<CppAdvance::i32, CppAdvance::i32(15)>(CppAdvance::i32 a, CppAdvance::i32 b)  -> decltype(auto)
{
	#line 45 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(a + b + CppAdvance::i32(15)); 
}
#line 60 "FirstProgram.adv"
inline auto Vector3::sett(const typename Vector3::NestedStruct& value) -> __self& { p_t = value; return *this;}
#line 60 "FirstProgram.adv"
inline auto Vector3::gett() const  -> typename Vector3::NestedStruct { return p_t; }

#line 77 "FirstProgram.adv"
inline constexpr auto Vector3::getName() const  -> CppAdvance::Str 
{
	#line 77 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(CppAdvance::Str{u"Vector3"}); 
}

#line 89 "FirstProgram.adv"
inline auto Vector3::NestedStruct::sett(const __FirstProgram_Protected::Test111& value) -> __self& { p_t = value; return *this;}
#line 89 "FirstProgram.adv"
inline auto Vector3::NestedStruct::gett() const  -> __FirstProgram_Protected::Test111 { return p_t; }

#line 97 "FirstProgram.adv"
inline constexpr Vector3::Vector3(CppAdvance::f32 x, CppAdvance::f32 y, CppAdvance::f32 z) noexcept : 
#line 98 "FirstProgram.adv"
x{x}, 
#line 99 "FirstProgram.adv"
y{y}, 
#line 100 "FirstProgram.adv"
z{z}
{
}
#line 103 "FirstProgram.adv"
template<class U> inline constexpr Vector3::Vector3(U f)  :
#line 104 "FirstProgram.adv"
Vector3(f, f, f)
{
	#line 105 "FirstProgram.adv"
	this->x = f;
}
#line 108 "FirstProgram.adv"
inline constexpr Vector3::operator CppAdvance::f32() const noexcept
{
	#line 108 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(y); 
}
#line 110 "FirstProgram.adv"
inline constexpr auto Vector3::operator+(const __self& other) const  -> decltype(auto)
{
	#line 110 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(__self{(*this).__ref().x + other.__ref().x, (*this).__ref().y + other.__ref().y, (*this).__ref().z + other.__ref().z}); 
}
#line 112 "FirstProgram.adv"
inline auto Vector3::operator++()  -> __self&
{
	#line 113 "FirstProgram.adv"
	++x;
	#line 114 "FirstProgram.adv"
	++y;
	#line 115 "FirstProgram.adv"
	++z;
	#line 116 "FirstProgram.adv"
	++Count;
	#line 118 "FirstProgram.adv"
	return (*this);
}
#line 112 "FirstProgram.adv"
inline auto Vector3::operator++(int)  -> Vector3 { auto copy = *this; ++(*this); return copy; }
#line 121 "FirstProgram.adv"
auto Vector3::operator[](CppAdvance::i32 idx)  -> __IndexerAccessor_121<__FirstProgram_Protected::Test111>
{
	return __IndexerAccessor_121<__FirstProgram_Protected::Test111>{ *this, idx };
}

#line 121 "FirstProgram.adv"
auto Vector3::operator[](CppAdvance::i32 idx)  const  -> const __IndexerAccessor_121<__FirstProgram_Protected::Test111>
{
	return __IndexerAccessor_121<__FirstProgram_Protected::Test111>{ *this, idx };
}

#line 122 "FirstProgram.adv"
auto Vector3::getAt(CppAdvance::i32 idx)  -> __FirstProgram_Protected::Test111
{
	#line 123 "FirstProgram.adv"
	print(CppAdvance::Str{u"Read"});
	#line 124 "FirstProgram.adv"
	return GetTest();
}
#line 122 "FirstProgram.adv"
auto Vector3::getAt(CppAdvance::i32 idx) const  -> const __FirstProgram_Protected::Test111
{
	#line 123 "FirstProgram.adv"
	print(CppAdvance::Str{u"Read"});
	#line 124 "FirstProgram.adv"
	return GetTest();
}
#line 126 "FirstProgram.adv"
template<class _ElemRight> auto Vector3::setAt(CppAdvance::i32 idx, const _ElemRight& value)  -> void 
{
	#line 127 "FirstProgram.adv"
	if (value < CppAdvance::i32(10)) {
		#line 127 "FirstProgram.adv"
		return ;
	}
	#line 128 "FirstProgram.adv"
	x = CppAdvance::i32(5);
}
#line 131 "FirstProgram.adv"
inline constexpr auto Vector3::_operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3)  -> CppAdvance::f32
{
	#line 131 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(y + z); 
}
#line 131 "FirstProgram.adv"
inline constexpr auto Vector3::_operator_subscript(CppAdvance::i32 idx, CppAdvance::i32 idx2, CppAdvance::i32 idx3)  const  -> const CppAdvance::f32
{
	#line 131 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(y + z); 
}
#line 133 "FirstProgram.adv"
inline constexpr auto Vector3::getX() const  -> CppAdvance::f32
{
	#line 133 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(x); 
}
#line 136 "FirstProgram.adv"
inline constexpr auto Vector3::Method(CppAdvance::i32 x, CppAdvance::i32 y, CppAdvance::i32 z)  -> CppAdvance::i32
{
	#line 137 "FirstProgram.adv"
	return y + z;
}
#line 140 "FirstProgram.adv"
inline constexpr auto Vector3::GetTest()  -> __FirstProgram_Protected::Test111
{
	#line 140 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(__FirstProgram_Protected::Test111{}); 
}
#line 142 "FirstProgram.adv"
template<class U> inline constexpr auto Vector3::TemplateMethod(U x, U y, U z)  -> typename Vector3::Coords
{
	#line 143 "FirstProgram.adv"
	struct LocalStruct : public CppAdvance::Struct
	{
		private: using __self = LocalStruct;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 144 "FirstProgram.adv"
		public: CppAdvance::i32 x{}; 
		#line 145 "FirstProgram.adv"
		public: CppAdvance::i32 y{}; 
		#line 146 "FirstProgram.adv"
		public: CppAdvance::i32 z{}; 
		#line 148 "FirstProgram.adv"
		
		#line 154 "FirstProgram.adv"
		#line 154 "FirstProgram.adv"
		private: inline auto hidden() const  -> CppAdvance::i32
		{
			#line 156 "FirstProgram.adv"
			print(CppAdvance::Str{u"hidden"});
			#line 157 "FirstProgram.adv"
			return CppAdvance::i32(0);
		}

		
		#line 161 "FirstProgram.adv"
		#line 161 "FirstProgram.adv"
		public: inline auto printt() const  -> void
		{
			#line 163 "FirstProgram.adv"
			print(x);
			#line 164 "FirstProgram.adv"
			print(y);
			#line 165 "FirstProgram.adv"
			print(z);
		}

		
		
	};
	#line 169 "FirstProgram.adv"
	(*this)[CppAdvance::i32(0)] = CppAdvance::i32(13);
	#line 171 "FirstProgram.adv"
	LocalStruct ls{ CppAdvance::i32(5), CppAdvance::i32(3), CppAdvance::i32(10) }; 
	#line 172 "FirstProgram.adv"
	ADV_UFCS(printt)(ls.__ref());
	#line 173 "FirstProgram.adv"
	return { x, y, z };
}
