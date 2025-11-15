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
class Next;
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
class __Class_Vector3;
#line 54 "FirstProgram.adv"
struct Vector3 : CppAdvance::Struct {
	private: using __self = Vector3;
	public: using __class = __Class_Vector3;
	public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
	public: 
	class __Class_NestedStruct;
	#line 89 "FirstProgram.adv"
	struct NestedStruct : CppAdvance::Struct {
		private: using __self = NestedStruct;
		public: using __class = __Class_NestedStruct;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 91 "FirstProgram.adv"
		public: CppAdvance::f32 x; ADV_CHECK_REF_STRUCT(CppAdvance::f32, "f32");
		#line 92 "FirstProgram.adv"
		public: CppAdvance::f32 y; ADV_CHECK_REF_STRUCT(CppAdvance::f32, "f32");
		#line 93 "FirstProgram.adv"
		public: CppAdvance::f32 z; ADV_CHECK_REF_STRUCT(CppAdvance::f32, "f32");
		#line 94 "FirstProgram.adv"
		private: __FirstProgram_Protected::Test111 p_tt; ADV_CHECK_REF_STRUCT(__FirstProgram_Protected::Test111, "Test111");
		#line 94 "FirstProgram.adv"
		private: inline auto settt(const __FirstProgram_Protected::Test111& value) -> __self&;
		#line 94 "FirstProgram.adv"
		public: inline auto gettt() const  -> __FirstProgram_Protected::Test111;
		#line 9999 "FirstProgram.adv"
		ADV_PROPERTY_GETTER_SETTER(public, Vector3::NestedStruct, __FirstProgram_Protected::Test111, tt, public, gettt, private, settt);
		
	};
	public: 
	
	#line 89 "FirstProgram.adv"
	class __Class_NestedStruct : public CppAdvance::ValueType
	{
		#line 9999 "FirstProgram.adv"
		NestedStruct __value;
		public: using __underlying = NestedStruct; using __self = __underlying;
		__Class_NestedStruct(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
		operator __underlying() const noexcept { return __value; }
		auto gettt() const -> __FirstProgram_Protected::Test111 { return __value.gettt(); }
		
	};
	#line 63 "FirstProgram.adv"
	private: friend class TestStruct;
	#line 64 "FirstProgram.adv"
	private: template<class T> friend class TestStruct2;
	#line 65 "FirstProgram.adv"
	private: friend CppAdvance::i32 func3(CppAdvance::i32 x);
	#line 66 "FirstProgram.adv"
	private: friend CppAdvance::i32 func4(CppAdvance::i32 x);
	#line 57 "FirstProgram.adv"
	public: CppAdvance::f32 x; ADV_CHECK_REF_STRUCT(CppAdvance::f32, "f32");
	#line 57 "FirstProgram.adv"
	public: CppAdvance::f32 y; ADV_CHECK_REF_STRUCT(CppAdvance::f32, "f32");
	#line 57 "FirstProgram.adv"
	public: CppAdvance::f32 z; ADV_CHECK_REF_STRUCT(CppAdvance::f32, "f32");
	#line 84 "FirstProgram.adv"
	private: TESTDLL_HIDDEN static thread_local CppAdvance::i32 Count2; ADV_CHECK_REF_STRUCT(CppAdvance::i32, "i32");
	#line 86 "FirstProgram.adv"
	public: TESTDLL_API static const Vector3 ZERO;
	#line 85 "FirstProgram.adv"
	public: static constexpr auto BYTES = CppAdvance::i32(24);
	#line 87 "FirstProgram.adv"
	private: using Coords = __ntuples::NamedTuple_6893f862d6c49683;
	#line 58 "FirstProgram.adv"
	private: NestedStruct p_t; ADV_CHECK_REF_STRUCT(NestedStruct, "NestedStruct");
	#line 58 "FirstProgram.adv"
	private: inline auto sett(const NestedStruct& value) -> __self&;
	#line 58 "FirstProgram.adv"
	public: inline auto gett() const  -> NestedStruct;
	#line 9999 "FirstProgram.adv"
	ADV_PROPERTY_GETTER_SETTER(public, Vector3, NestedStruct, t, public, gett, private, sett);
	#line 70 "FirstProgram.adv"
	private: static CppAdvance::i32 p_Count; ADV_CHECK_REF_STRUCT(CppAdvance::i32, "i32");
	#line 75 "FirstProgram.adv"
	public: TESTDLL_API static auto setCount(const CppAdvance::i32& value) -> void;
	#line 71 "FirstProgram.adv"
	public: TESTDLL_API static auto getCount()  -> CppAdvance::i32;
	#line 9999 "FirstProgram.adv"
	ADV_PROPERTY_GETTER_SETTER_STATIC(public, Vector3, CppAdvance::i32, Count, public, getCount, public, setCount);
	#line 82 "FirstProgram.adv"
	public: inline constexpr auto getName() const  -> CppAdvance::Str;
	#line 9999 "FirstProgram.adv"
	ADV_PROPERTY_GETTER(public, Vector3, CppAdvance::Str, Name, getName);
	#line 100 "FirstProgram.adv"
	public: inline constexpr Vector3()  = default;
	#line 102 "FirstProgram.adv"
	public: inline constexpr Vector3(CppAdvance::f32 x, CppAdvance::f32 y, CppAdvance::f32 z) noexcept;
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
	public: inline constexpr auto getNext() const  -> Next;
	#line 143 "FirstProgram.adv"
	public: inline constexpr static auto Method(CppAdvance::i32 x, CppAdvance::i32 y, CppAdvance::i32 z)  -> CppAdvance::i32;
	#line 147 "FirstProgram.adv"
	public: inline constexpr static auto GetTest()  -> __FirstProgram_Protected::Test111;
	#line 149 "FirstProgram.adv"
	public: template<class U> inline constexpr auto TemplateMethod(U x, U y, U z)  -> Coords;
	
};
class __Class_Next;
#line 167 "FirstProgram.adv"
struct Next : CppAdvance::Struct {
	private: using __self = Next;
	public: using __class = __Class_Next;
	public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
	#line 168 "FirstProgram.adv"
	public: CppAdvance::i32 i; ADV_CHECK_REF_STRUCT(CppAdvance::i32, "i32");
	#line 170 "FirstProgram.adv"
	public: inline constexpr explicit Next(CppAdvance::i32 i) ;
	
};


#line 54 "FirstProgram.adv"
class __Class_Vector3 : public CppAdvance::ValueType, public IEquatable, public IFormattable
{
	#line 54 "FirstProgram.adv"
	ADV_CHECK_INTERFACE(IEquatable, IEquatable);
	#line 54 "FirstProgram.adv"
	ADV_CHECK_INTERFACE(IFormattable, IFormattable);
	#line 9999 "FirstProgram.adv"
	Vector3 __value;
	public: using __underlying = Vector3; using __self = __underlying;
	using NestedStruct = __self::NestedStruct;
	__Class_Vector3(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
	operator __underlying() const noexcept { return __value; }
	auto gett() const -> NestedStruct { return __value.gett(); }
	auto getName() const -> CppAdvance::Str { return __value.getName(); }
	operator CppAdvance::f32() const noexcept { return static_cast<CppAdvance::f32>(__value); }
	auto operator++() -> __self & { ADV_EXPRESSION_BODY(__value.operator++()); }
	auto getX() const  -> CppAdvance::f32 { ADV_EXPRESSION_BODY(__value.getX()); }
	auto getNext() const  -> Next { ADV_EXPRESSION_BODY(__value.getNext()); }
	
};

#line 167 "FirstProgram.adv"
class __Class_Next : public CppAdvance::ValueType
{
	#line 9999 "FirstProgram.adv"
	Next __value;
	public: using __underlying = Next; using __self = __underlying;
	__Class_Next(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
	operator __underlying() const noexcept { return __value; }
	
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
#line 66 "FirstProgram.adv"
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
#line 45 "FirstProgram.adv"
template<> inline constexpr auto sum<CppAdvance::i32, CppAdvance::i32(15)>(CppAdvance::i32 a, CppAdvance::i32 b)  -> decltype(auto)
{
	#line 45 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(a + b + CppAdvance::i32(15)); 
}
#line 58 "FirstProgram.adv"
inline auto Vector3::sett(const typename Vector3::NestedStruct& value) -> __self& { p_t = value; return *this;}
#line 58 "FirstProgram.adv"
inline auto Vector3::gett() const  -> typename Vector3::NestedStruct { return p_t; }

#line 66 "FirstProgram.adv"
inline auto func4(CppAdvance::i32 x)  -> CppAdvance::i32
{
	#line 67 "FirstProgram.adv"
	return CppAdvance::i32(0);
}
#line 82 "FirstProgram.adv"
inline constexpr auto Vector3::getName() const  -> CppAdvance::Str 
{
	#line 82 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(CppAdvance::Str{u"Vector3"}); 
}

#line 94 "FirstProgram.adv"
inline auto Vector3::NestedStruct::settt(const __FirstProgram_Protected::Test111& value) -> __self& { p_tt = value; return *this;}
#line 94 "FirstProgram.adv"
inline auto Vector3::NestedStruct::gettt() const  -> __FirstProgram_Protected::Test111 { return p_tt; }

#line 102 "FirstProgram.adv"
inline constexpr Vector3::Vector3(CppAdvance::f32 x, CppAdvance::f32 y, CppAdvance::f32 z) noexcept : 
#line 103 "FirstProgram.adv"
x{x}, 
#line 104 "FirstProgram.adv"
y{y}, 
#line 105 "FirstProgram.adv"
z{z}
{
}
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
inline auto Vector3::operator++(int)  -> Vector3 { auto copy = *this; ++(*this); return copy; }
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
inline constexpr auto Vector3::getNext() const  -> Next
{
	#line 140 "FirstProgram.adv"
	ADV_EXPRESSION_BODY(Next{CppAdvance::i32(6)}); 
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
		ADV_PROPERTY_GETTER_SETTER(public, __self, __FirstProgram_Protected::Test111, tt, public, gettt, private, settt);
		
		
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
#line 170 "FirstProgram.adv"
inline constexpr Next::Next(CppAdvance::i32 i)  : 
#line 171 "FirstProgram.adv"
i{i}
{
}
