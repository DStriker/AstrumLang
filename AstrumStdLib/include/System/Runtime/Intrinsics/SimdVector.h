#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "SimdInstructionSet.h"
#include "System/IEquatable.h"
using namespace System;

namespace System::Runtime::Intrinsics {
namespace __Unsafe {} namespace __SimdVector_Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
template<class T, class Arch> class SimdVector;
template<class T, class Arch> class SimdMask;
//###############################################################################
//# Type definitions
//###############################################################################
template<class T, class Arch> class __Class_SimdVector;
	#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> struct SimdVector final : public Builtin::Struct {
		public: using __self = SimdVector<T, Arch>;
		public: using __class = __Class_SimdVector<T, Arch>;
		public: FORCE_INLINE constexpr decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) __ref() const noexcept { return *this; }
		#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		private: using TMask = SimdMask<T, Arch>;
		#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		private: using TRegister = typename Arch::template Register<T>;
		#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		private: using TNative = typename TRegister::TRegister;
		public: SimdVector() = default;
		#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline static auto getOne()  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, One, getOne, __self);
		#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline static auto getZero()  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, Zero, getZero, __self);
		#line 316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getAbs() const  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Abs, getAbs, __self);
		#line 317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getShuffle() const  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Shuffle, getShuffle, __self);
		#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline  SimdVector(TNative reg) noexcept;
		#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline  operator TNative() const noexcept;
		#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto ToNative() const  -> const TNative;
		#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: template<class U> inline static auto Create(U val)  -> const __self;
		#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: template<class... Ts> inline static auto Create(T val0, T val1, Ts... tail)  -> const __self;
		#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline static auto FromMask(const TMask& b)  -> const __self;
		#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: [[clang::annotate("unsafe")]] inline static auto LoadAligned(Builtin::Unsafe::__RawPtr<const T> source)  -> const __self;
		#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: [[clang::annotate("unsafe")]] inline static auto Load(Builtin::Unsafe::__RawPtr<const T> source)  -> const __self;
		#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline static auto LoadUnsafe(const T& source)  -> const __self;
		#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: [[clang::annotate("unsafe")]] inline auto StoreAligned(Builtin::Unsafe::__RawPtr<T> destination) const  -> void;
		#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: [[clang::annotate("unsafe")]] inline auto Store(Builtin::Unsafe::__RawPtr<T> destination) const  -> decltype(auto);
		#line 70 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto StoreUnsafe(Builtin::MutableRef<T> __destination__) const  -> void;
		#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: template<class U, class V> requires(std::convertible_to<U, T>) [[clang::annotate("unsafe")]] inline static auto Gather(Builtin::Unsafe::__RawPtr<const U> src, const SimdVector<V, Arch>& index)  -> const __self;
		#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: template<class U, class V> requires(std::convertible_to<U, T>) [[clang::annotate("unsafe")]] inline auto Scatter(Builtin::Unsafe::__RawPtr<U> dst, const SimdVector<V, Arch>& index) const  -> decltype(auto);
		public: inline const T getAt(Builtin::usize index);
		inline const T getAt(Builtin::usize index) const;
		#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_subscript(Builtin::usize index)  -> const T;
		public: inline auto _operator_subscript(Builtin::usize index) const  -> const T;
		#line 95 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator==(const __self& other) const noexcept -> const TMask;
		#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator!=(const __self& other) const noexcept -> const TMask;
		#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator<(const __self& other) const noexcept -> const TMask;
		#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator<=(const __self& other) const noexcept -> const TMask;
		#line 99 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator>(const __self& other) const noexcept -> const TMask;
		#line 100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator>=(const __self& other) const noexcept -> const TMask;
		#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator==(T other) const noexcept -> const TMask;
		#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator!=(T other) const noexcept -> const TMask;
		#line 103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator<(T other) const noexcept -> const TMask;
		#line 104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator<=(T other) const noexcept -> const TMask;
		#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator>(T other) const noexcept -> const TMask;
		#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator>=(T other) const noexcept -> const TMask;
		#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto EqualsAll(const __self& other) const noexcept -> const bool;
		#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto EqualsAny(const __self& other) const noexcept -> const bool;
		#line 122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto LessThanAll(const __self& other) const noexcept -> const bool;
		#line 128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto LessThanAny(const __self& other) const noexcept -> const bool;
		#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto LessThanAll(T other) const noexcept -> const bool;
		#line 138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto LessThanAny(T other) const noexcept -> const bool;
		#line 144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto LessThanOrEqualAll(const __self& other) const noexcept -> const bool;
		#line 150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto LessThanOrEqualAny(const __self& other) const noexcept -> const bool;
		#line 155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto LessThanOrEqualAll(T other) const noexcept -> const bool;
		#line 160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto LessThanOrEqualAny(T other) const noexcept -> const bool;
		#line 166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto GreaterThanAll(const __self& other) const noexcept -> const bool;
		#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto GreaterThanAny(const __self& other) const noexcept -> const bool;
		#line 177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto GreaterThanAll(T other) const noexcept -> const bool;
		#line 182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto GreaterThanAny(T other) const noexcept -> const bool;
		#line 188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto GreaterThanOrEqualAll(const __self& other) const noexcept -> const bool;
		#line 194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto GreaterThanOrEqualAny(const __self& other) const noexcept -> const bool;
		#line 199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto GreaterThanOrEqualAll(T other) const noexcept -> const bool;
		#line 204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto GreaterThanOrEqualAny(T other) const noexcept -> const bool;
		#line 209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_eq_eq_ne(const __self& other) const noexcept -> const bool;
		#line 210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_eq_eq_ne(T other) const noexcept -> const bool;
		#line 211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_ne_eq_ne(const __self& other) const noexcept -> const bool;
		#line 212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_ne_eq_ne(T other) const noexcept -> const bool;
		#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_eq_eq_qst(const __self& other) const noexcept -> const bool;
		#line 214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_eq_eq_qst(T other) const noexcept -> const bool;
		#line 215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_ne_eq_qst(const __self& other) const noexcept -> const bool;
		#line 216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_ne_eq_qst(T other) const noexcept -> const bool;
		#line 218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_lt_ne(const __self& other) const noexcept -> const bool;
		#line 219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_lt_ne(T other) const noexcept -> const bool;
		#line 220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_lt_qst(const __self& other) const noexcept -> const bool;
		#line 221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_lt_qst(T other) const noexcept -> const bool;
		#line 222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_gt_ne(const __self& other) const noexcept -> const bool;
		#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_gt_ne(T other) const noexcept -> const bool;
		#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_gt_qst(const __self& other) const noexcept -> const bool;
		#line 225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_gt_qst(T other) const noexcept -> const bool;
		#line 227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_lt_eq_ne(const __self& other) const noexcept -> const bool;
		#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_lt_eq_ne(T other) const noexcept -> const bool;
		#line 229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_lt_eq_qst(const __self& other) const noexcept -> const bool;
		#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_lt_eq_qst(T other) const noexcept -> const bool;
		#line 231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_gt_eq_ne(const __self& other) const noexcept -> const bool;
		#line 232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_gt_eq_ne(T other) const noexcept -> const bool;
		#line 233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_gt_eq_qst(const __self& other) const noexcept -> const bool;
		#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_gt_eq_qst(T other) const noexcept -> const bool;
		#line 239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator+() const noexcept -> const __self;
		#line 240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator-() const noexcept -> const __self;
		#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_not() const noexcept -> const __self;
		#line 244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator+=(const __self& other) const  LIFETIMEBOUND -> __self&;
		#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator+=(T other) const  LIFETIMEBOUND -> __self&;
		#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator-=(const __self& other) const  LIFETIMEBOUND -> __self&;
		#line 247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator-=(T other) const  LIFETIMEBOUND -> __self&;
		#line 248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator*=(const __self& other) const  LIFETIMEBOUND -> __self&;
		#line 249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator*=(T other) const  LIFETIMEBOUND -> __self&;
		#line 250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator/=(const __self& other) const  LIFETIMEBOUND -> __self&;
		#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator/=(T other) const  LIFETIMEBOUND -> __self&;
		#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator%=(const __self& other) const  LIFETIMEBOUND -> __self&;
		#line 256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator%=(T other) const  LIFETIMEBOUND -> __self&;
		#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator&=(const __self& other) const  LIFETIMEBOUND -> __self&;
		#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator&=(T other) const  LIFETIMEBOUND -> __self&;
		#line 262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_and_not_eq(const __self& other) const  LIFETIMEBOUND -> __self&;
		#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_and_not_eq(T other) const  LIFETIMEBOUND -> __self&;
		#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator|=(const __self& other) const  LIFETIMEBOUND -> __self&;
		#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator|=(T other) const  LIFETIMEBOUND -> __self&;
		#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator^=(const __self& other) const  LIFETIMEBOUND -> __self&;
		#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator^=(T other) const  LIFETIMEBOUND -> __self&;
		#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator>>=(const __self& other) const  LIFETIMEBOUND -> __self&;
		#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator<<=(const __self& other) const  LIFETIMEBOUND -> __self&;
		#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator>>=(Builtin::i32 shift) const  LIFETIMEBOUND -> __self&;
		#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator<<=(Builtin::i32 shift) const  LIFETIMEBOUND -> __self&;
		#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: [[clang::annotate("UserAttr: Commutative")]] inline auto operator++() const  LIFETIMEBOUND -> __self&;
		public: [[clang::annotate("UserAttr: Commutative")]] inline auto operator++(int)  -> SimdVector;
		#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: [[clang::annotate("UserAttr: Commutative")]] inline auto operator--() const  LIFETIMEBOUND -> __self&;
		public: [[clang::annotate("UserAttr: Commutative")]] inline auto operator--(int)  -> SimdVector;
		#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator+(const __self& other) const  -> const __self;
		#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator+(T other) const  -> const __self;
		#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator-(const __self& other) const  -> const __self;
		#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator-(T other) const  -> const __self;
		#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator*(const __self& other) const  -> const __self;
		#line 298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator*(T other) const  -> const __self;
		#line 299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator/(const __self& other) const  -> const __self;
		#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator/(T other) const  -> const __self;
		#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator%(const __self& other) const  -> const __self;
		#line 302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator%(T other) const  -> const __self;
		#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator&(const __self& other) const  -> const __self;
		#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator&(T other) const  -> const __self;
		#line 305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_and_not(const __self& other) const  -> const __self;
		#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_and_not(T other) const  -> const __self;
		#line 307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator|(const __self& other) const  -> const __self;
		#line 308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator|(T other) const  -> const __self;
		#line 309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator^(const __self& other) const  -> const __self;
		#line 310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator^(T other) const  -> const __self;
		#line 311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator>>(const __self& other) const  -> const __self;
		#line 312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator>>(Builtin::i32 shift) const  -> const __self;
		#line 313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator<<(const __self& other) const  -> const __self;
		#line 314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator<<(Builtin::i32 shift) const  -> const __self;
		#line 322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto All(T val) const  -> const bool;
		#line 327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto Any(T val) const  -> const bool;
		#line 332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto None(T val) const  -> const bool;
		#line 334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto Count(T val) const  -> const Builtin::usize;
		#line 339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto IndexOf(T val) const  -> const Builtin::Nullable<Builtin::usize>;
		#line 344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto LastIndexOf(T val) const  -> const Builtin::Nullable<Builtin::usize>;
		#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		private: TRegister _reg; ADV_CHECK_REF_STRUCT("TRegister", TRegister);
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: static constexpr Builtin::u32 Length = Builtin::usize(sizeof (TNative)) / Builtin::usize(sizeof (T));
		#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		static_assert(SimdInstructionSet::IsSimdType<T>, "T must be a SIMD type");
		#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		static_assert(Builtin::TypeIs<Arch, SimdInstructionSet>(), "Arch must be a SIMD instruction set");
		template <size_t I, class T, class Arch> friend auto& get(SimdVector<T, Arch>&);
		template <size_t I, class T, class Arch> friend const auto& get(const SimdVector<T, Arch>&);
		
	};
	
	template<class T, class Arch> class __Class_SimdMask;
	#line 350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> struct SimdMask final : public Builtin::Struct {
		public: using __self = SimdMask<T, Arch>;
		public: using __class = __Class_SimdMask<T, Arch>;
		public: FORCE_INLINE constexpr decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) __ref() const noexcept { return *this; }
		#line 355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		private: using TVector = SimdVector<T, Arch>;
		#line 356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		private: using TRegister = typename Arch::template BoolRegister<T>;
		#line 357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		private: using TNative = typename TRegister::TRegister;
		public: SimdMask() = default;
		#line 383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getScalarMask() const  -> Builtin::u64;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, ScalarMask, getScalarMask, Builtin::u64);
		#line 415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline static auto getTrue()  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, True, getTrue, __self);
		#line 416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline static auto getFalse()  -> __self;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER_STATIC(public, ASTRUMSTD_API, False, getFalse, __self);
		#line 449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getAll() const  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, All, getAll, bool);
		#line 450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getAny() const  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Any, getAny, bool);
		#line 451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getNone() const  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, None, getNone, bool);
		#line 452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getCount() const  -> Builtin::usize;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, Count, getCount, Builtin::usize);
		#line 453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getFirstSet() const  -> Builtin::Nullable<Builtin::usize>;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, FirstSet, getFirstSet, Builtin::Nullable<Builtin::usize>);
		#line 462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto getLastSet() const  -> Builtin::Nullable<Builtin::usize>;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_PROPERTY_GETTER(public, LastSet, getLastSet, Builtin::Nullable<Builtin::usize>);
		#line 363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline  SimdMask(TNative reg) noexcept;
		#line 364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline  operator TNative() const noexcept;
		#line 366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto ToNative() const  -> const TNative;
		#line 368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		private: template<class U, class... V, size_t I, size_t... Is> inline static auto MakeRegister(typename Builtin::template IndexSequence<I, Is...> __var_368_68, U u, V... v) noexcept -> const TNative;
		#line 370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		private: template<class... V> inline static auto MakeRegister(typename Builtin::template IndexSequence<> __var_370_41, V... v) noexcept -> const TNative;
		#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline static auto Create(bool val)  -> const __self;
		#line 376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: template<class... Ts> inline static auto Create(bool val0, bool val1, Ts... tail)  -> const __self;
		#line 381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline static auto FromScalarMask(Builtin::u64 mask)  -> const __self;
		#line 387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: [[clang::annotate("unsafe")]] inline static auto LoadAligned(Builtin::Unsafe::__RawPtr<const bool> source)  -> const __self;
		#line 396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: [[clang::annotate("unsafe")]] inline static auto Load(Builtin::Unsafe::__RawPtr<const bool> source)  -> const __self;
		#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline static auto LoadUnsafe(const bool& source)  -> const __self;
		#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: [[clang::annotate("unsafe")]] inline auto Store(Builtin::Unsafe::__RawPtr<bool> destination) const  -> decltype(auto);
		#line 409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto StoreUnsafe(Builtin::MutableRef<bool> __destination__) const  -> void;
		public: inline const T getAt(Builtin::usize index);
		inline const T getAt(Builtin::usize index) const;
		#line 420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_subscript(Builtin::usize index)  -> const T;
		public: inline auto _operator_subscript(Builtin::usize index) const  -> const T;
		#line 428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator==(const __self& other) const noexcept -> const __self;
		#line 429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator!=(const __self& other) const noexcept -> const __self;
		#line 434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto _operator_not() const noexcept -> const __self;
		#line 437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator&=(const __self& other) const  LIFETIMEBOUND -> __self&;
		#line 438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator|=(const __self& other) const  LIFETIMEBOUND -> __self&;
		#line 439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator^=(const __self& other) const  LIFETIMEBOUND -> __self&;
		#line 443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator&(const __self& other) const  -> const __self;
		#line 444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator|(const __self& other) const  -> const __self;
		#line 445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: inline auto operator^(const __self& other) const  -> const __self;
		#line 358 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		private: TRegister _reg; ADV_CHECK_REF_STRUCT("TRegister", TRegister);
		#line 361 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: static constexpr Builtin::u32 Length = Builtin::usize(sizeof (TVector)) / Builtin::usize(sizeof (T));
		#line 454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: static constexpr auto unusedBits = Builtin::usize(64U) - Length;
		#line 455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: static constexpr auto lowMask = (Length <=> Builtin::i32(64)) < 0 ? (Builtin::u64(1ULL) << Builtin::i32{Length % Builtin::i32(64)}) - Builtin::i32(1) : ADV_UFCS_NONLOCAL(_operator_not)(Builtin::u64{Builtin::i32(0)});
		#line 463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: static constexpr auto stop = (Length <=> Builtin::i32(64)) < 0 ? (Builtin::u64(1ULL) << Builtin::i32{Length % Builtin::i32(64)}) : Builtin::u64(0ULL);
		#line 352 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		static_assert(SimdInstructionSet::IsSimdType<T>, "T must be a SIMD type");
		#line 353 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		static_assert(Builtin::TypeIs<Arch, SimdInstructionSet>(), "Arch must be a SIMD instruction set");
		template <size_t I, class T, class Arch> friend auto& get(SimdMask<T, Arch>&);
		template <size_t I, class T, class Arch> friend const auto& get(const SimdMask<T, Arch>&);
		
	};
	
	
	#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> class __Class_SimdVector final : public Builtin::ValueType
	{
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: using __underlying = SimdVector<T, Arch>; using __self = __underlying;
		__self __value;
		__Class_SimdVector(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
		operator __underlying() const noexcept { return __value; }
		#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		private: using TMask = SimdMask<T, Arch>;
		#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		private: using TRegister = typename Arch::template Register<T>;
		#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		private: using TNative = typename TRegister::TRegister;
		auto getAbs() const -> __self { return __value.getAbs(); }
		auto getShuffle() const -> __self { return __value.getShuffle(); }
		auto ToNative() const  -> TNative const { ADV_EXPRESSION_BODY(__value.ToNative()); }
		static auto FromMask(const TMask& b) -> __self const { ADV_EXPRESSION_BODY(__self::FromMask(b)); }
		static auto LoadAligned(Builtin::Unsafe::__RawPtr<const T> source) -> __self const { ADV_EXPRESSION_BODY(__self::LoadAligned(source)); }
		static auto Load(Builtin::Unsafe::__RawPtr<const T> source) -> __self const { ADV_EXPRESSION_BODY(__self::Load(source)); }
		static auto LoadUnsafe(const T& source) -> __self const { ADV_EXPRESSION_BODY(__self::LoadUnsafe(source)); }
		auto StoreAligned(Builtin::Unsafe::__RawPtr<T> destination) const  -> void { ADV_EXPRESSION_BODY(__value.StoreAligned(destination)); }
		auto StoreUnsafe(Builtin::MutableRef<T> destination) const  -> void { ADV_EXPRESSION_BODY(__value.StoreUnsafe(destination)); }
		decltype(auto) getAt(Builtin::usize index)  { return __value._operator_subscript(index); }
		decltype(auto) getAt(Builtin::usize index) const  { return __value._operator_subscript(index); }
		auto operator==(const __self& other) const noexcept -> TMask const { ADV_EXPRESSION_BODY(__value.operator==(other)); }
		auto operator!=(const __self& other) const noexcept -> TMask const { ADV_EXPRESSION_BODY(__value.operator!=(other)); }
		auto operator<(const __self& other) const noexcept -> TMask const { ADV_EXPRESSION_BODY(__value.operator<(other)); }
		auto operator<=(const __self& other) const noexcept -> TMask const { ADV_EXPRESSION_BODY(__value.operator<=(other)); }
		auto operator>(const __self& other) const noexcept -> TMask const { ADV_EXPRESSION_BODY(__value.operator>(other)); }
		auto operator>=(const __self& other) const noexcept -> TMask const { ADV_EXPRESSION_BODY(__value.operator>=(other)); }
		auto operator==(T other) const noexcept -> TMask const { ADV_EXPRESSION_BODY(__value.operator==(other)); }
		auto operator!=(T other) const noexcept -> TMask const { ADV_EXPRESSION_BODY(__value.operator!=(other)); }
		auto operator<(T other) const noexcept -> TMask const { ADV_EXPRESSION_BODY(__value.operator<(other)); }
		auto operator<=(T other) const noexcept -> TMask const { ADV_EXPRESSION_BODY(__value.operator<=(other)); }
		auto operator>(T other) const noexcept -> TMask const { ADV_EXPRESSION_BODY(__value.operator>(other)); }
		auto operator>=(T other) const noexcept -> TMask const { ADV_EXPRESSION_BODY(__value.operator>=(other)); }
		auto EqualsAll(const __self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.EqualsAll(other)); }
		auto EqualsAny(const __self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.EqualsAny(other)); }
		auto LessThanAll(const __self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.LessThanAll(other)); }
		auto LessThanAny(const __self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.LessThanAny(other)); }
		auto LessThanAll(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.LessThanAll(other)); }
		auto LessThanAny(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.LessThanAny(other)); }
		auto LessThanOrEqualAll(const __self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.LessThanOrEqualAll(other)); }
		auto LessThanOrEqualAny(const __self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.LessThanOrEqualAny(other)); }
		auto LessThanOrEqualAll(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.LessThanOrEqualAll(other)); }
		auto LessThanOrEqualAny(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.LessThanOrEqualAny(other)); }
		auto GreaterThanAll(const __self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.GreaterThanAll(other)); }
		auto GreaterThanAny(const __self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.GreaterThanAny(other)); }
		auto GreaterThanAll(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.GreaterThanAll(other)); }
		auto GreaterThanAny(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.GreaterThanAny(other)); }
		auto GreaterThanOrEqualAll(const __self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.GreaterThanOrEqualAll(other)); }
		auto GreaterThanOrEqualAny(const __self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.GreaterThanOrEqualAny(other)); }
		auto GreaterThanOrEqualAll(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.GreaterThanOrEqualAll(other)); }
		auto GreaterThanOrEqualAny(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.GreaterThanOrEqualAny(other)); }
		auto _operator_eq_eq_ne(const __self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_eq_eq_ne(other)); }
		auto _operator_eq_eq_ne(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_eq_eq_ne(other)); }
		auto _operator_ne_eq_ne(const __self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_ne_eq_ne(other)); }
		auto _operator_ne_eq_ne(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_ne_eq_ne(other)); }
		auto _operator_eq_eq_qst(const __self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_eq_eq_qst(other)); }
		auto _operator_eq_eq_qst(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_eq_eq_qst(other)); }
		auto _operator_ne_eq_qst(const __self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_ne_eq_qst(other)); }
		auto _operator_ne_eq_qst(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_ne_eq_qst(other)); }
		auto _operator_lt_ne(const __self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_lt_ne(other)); }
		auto _operator_lt_ne(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_lt_ne(other)); }
		auto _operator_lt_qst(const __self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_lt_qst(other)); }
		auto _operator_lt_qst(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_lt_qst(other)); }
		auto _operator_gt_ne(const __self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_gt_ne(other)); }
		auto _operator_gt_ne(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_gt_ne(other)); }
		auto _operator_gt_qst(const __self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_gt_qst(other)); }
		auto _operator_gt_qst(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_gt_qst(other)); }
		auto _operator_lt_eq_ne(const __self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_lt_eq_ne(other)); }
		auto _operator_lt_eq_ne(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_lt_eq_ne(other)); }
		auto _operator_lt_eq_qst(const __self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_lt_eq_qst(other)); }
		auto _operator_lt_eq_qst(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_lt_eq_qst(other)); }
		auto _operator_gt_eq_ne(const __self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_gt_eq_ne(other)); }
		auto _operator_gt_eq_ne(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_gt_eq_ne(other)); }
		auto _operator_gt_eq_qst(const __self& other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_gt_eq_qst(other)); }
		auto _operator_gt_eq_qst(T other) const noexcept -> bool const { ADV_EXPRESSION_BODY(__value._operator_gt_eq_qst(other)); }
		auto operator+() const noexcept -> __self const { ADV_EXPRESSION_BODY(__value.operator+()); }
		auto operator-() const noexcept -> __self const { ADV_EXPRESSION_BODY(__value.operator-()); }
		auto _operator_not() const noexcept -> __self const { ADV_EXPRESSION_BODY(__value._operator_not()); }
		auto operator+=(const __self& other) const  -> __self & { ADV_EXPRESSION_BODY(__value.operator+=(other)); }
		auto operator+=(T other) const  -> __self & { ADV_EXPRESSION_BODY(__value.operator+=(other)); }
		auto operator-=(const __self& other) const  -> __self & { ADV_EXPRESSION_BODY(__value.operator-=(other)); }
		auto operator-=(T other) const  -> __self & { ADV_EXPRESSION_BODY(__value.operator-=(other)); }
		auto operator*=(const __self& other) const  -> __self & { ADV_EXPRESSION_BODY(__value.operator*=(other)); }
		auto operator*=(T other) const  -> __self & { ADV_EXPRESSION_BODY(__value.operator*=(other)); }
		auto operator/=(const __self& other) const  -> __self & { ADV_EXPRESSION_BODY(__value.operator/=(other)); }
		auto operator/=(T other) const  -> __self & { ADV_EXPRESSION_BODY(__value.operator/=(other)); }
		auto operator%=(const __self& other) const  -> __self & { ADV_EXPRESSION_BODY(__value.operator%=(other)); }
		auto operator%=(T other) const  -> __self & { ADV_EXPRESSION_BODY(__value.operator%=(other)); }
		auto operator&=(const __self& other) const  -> __self & { ADV_EXPRESSION_BODY(__value.operator&=(other)); }
		auto operator&=(T other) const  -> __self & { ADV_EXPRESSION_BODY(__value.operator&=(other)); }
		auto _operator_and_not_eq(const __self& other) const  -> __self & { ADV_EXPRESSION_BODY(__value._operator_and_not_eq(other)); }
		auto _operator_and_not_eq(T other) const  -> __self & { ADV_EXPRESSION_BODY(__value._operator_and_not_eq(other)); }
		auto operator|=(const __self& other) const  -> __self & { ADV_EXPRESSION_BODY(__value.operator|=(other)); }
		auto operator|=(T other) const  -> __self & { ADV_EXPRESSION_BODY(__value.operator|=(other)); }
		auto operator^=(const __self& other) const  -> __self & { ADV_EXPRESSION_BODY(__value.operator^=(other)); }
		auto operator^=(T other) const  -> __self & { ADV_EXPRESSION_BODY(__value.operator^=(other)); }
		auto operator>>=(const __self& other) const  -> __self & { ADV_EXPRESSION_BODY(__value.operator>>=(other)); }
		auto operator<<=(const __self& other) const  -> __self & { ADV_EXPRESSION_BODY(__value.operator<<=(other)); }
		auto operator>>=(Builtin::i32 shift) const  -> __self & { ADV_EXPRESSION_BODY(__value.operator>>=(shift)); }
		auto operator<<=(Builtin::i32 shift) const  -> __self & { ADV_EXPRESSION_BODY(__value.operator<<=(shift)); }
		auto operator++() const  -> __self & { ADV_EXPRESSION_BODY(__value.operator++()); }
		auto operator--() const  -> __self & { ADV_EXPRESSION_BODY(__value.operator--()); }
		auto operator+(const __self& other) const  -> __self const { ADV_EXPRESSION_BODY(__value.operator+(other)); }
		auto operator+(T other) const  -> __self const { ADV_EXPRESSION_BODY(__value.operator+(other)); }
		auto operator-(const __self& other) const  -> __self const { ADV_EXPRESSION_BODY(__value.operator-(other)); }
		auto operator-(T other) const  -> __self const { ADV_EXPRESSION_BODY(__value.operator-(other)); }
		auto operator*(const __self& other) const  -> __self const { ADV_EXPRESSION_BODY(__value.operator*(other)); }
		auto operator*(T other) const  -> __self const { ADV_EXPRESSION_BODY(__value.operator*(other)); }
		auto operator/(const __self& other) const  -> __self const { ADV_EXPRESSION_BODY(__value.operator/(other)); }
		auto operator/(T other) const  -> __self const { ADV_EXPRESSION_BODY(__value.operator/(other)); }
		auto operator%(const __self& other) const  -> __self const { ADV_EXPRESSION_BODY(__value.operator%(other)); }
		auto operator%(T other) const  -> __self const { ADV_EXPRESSION_BODY(__value.operator%(other)); }
		auto operator&(const __self& other) const  -> __self const { ADV_EXPRESSION_BODY(__value.operator&(other)); }
		auto operator&(T other) const  -> __self const { ADV_EXPRESSION_BODY(__value.operator&(other)); }
		auto _operator_and_not(const __self& other) const  -> __self const { ADV_EXPRESSION_BODY(__value._operator_and_not(other)); }
		auto _operator_and_not(T other) const  -> __self const { ADV_EXPRESSION_BODY(__value._operator_and_not(other)); }
		auto operator|(const __self& other) const  -> __self const { ADV_EXPRESSION_BODY(__value.operator|(other)); }
		auto operator|(T other) const  -> __self const { ADV_EXPRESSION_BODY(__value.operator|(other)); }
		auto operator^(const __self& other) const  -> __self const { ADV_EXPRESSION_BODY(__value.operator^(other)); }
		auto operator^(T other) const  -> __self const { ADV_EXPRESSION_BODY(__value.operator^(other)); }
		auto operator>>(const __self& other) const  -> __self const { ADV_EXPRESSION_BODY(__value.operator>>(other)); }
		auto operator>>(Builtin::i32 shift) const  -> __self const { ADV_EXPRESSION_BODY(__value.operator>>(shift)); }
		auto operator<<(const __self& other) const  -> __self const { ADV_EXPRESSION_BODY(__value.operator<<(other)); }
		auto operator<<(Builtin::i32 shift) const  -> __self const { ADV_EXPRESSION_BODY(__value.operator<<(shift)); }
		auto All(T val) const  -> bool const { ADV_EXPRESSION_BODY(__value.All(val)); }
		auto Any(T val) const  -> bool const { ADV_EXPRESSION_BODY(__value.Any(val)); }
		auto None(T val) const  -> bool const { ADV_EXPRESSION_BODY(__value.None(val)); }
		auto Count(T val) const  -> Builtin::usize const { ADV_EXPRESSION_BODY(__value.Count(val)); }
		auto IndexOf(T val) const  -> Builtin::Nullable<Builtin::usize> const { ADV_EXPRESSION_BODY(__value.IndexOf(val)); }
		auto LastIndexOf(T val) const  -> Builtin::Nullable<Builtin::usize> const { ADV_EXPRESSION_BODY(__value.LastIndexOf(val)); }
		
	};
	

	#line 350 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> class __Class_SimdMask final : public Builtin::ValueType
	{
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		public: using __underlying = SimdMask<T, Arch>; using __self = __underlying;
		__self __value;
		__Class_SimdMask(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
		operator __underlying() const noexcept { return __value; }
		#line 355 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		private: using TVector = SimdVector<T, Arch>;
		#line 356 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		private: using TRegister = typename Arch::template BoolRegister<T>;
		#line 357 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		private: using TNative = typename TRegister::TRegister;
		auto getScalarMask() const -> Builtin::u64 { return __value.getScalarMask(); }
		auto getAll() const -> bool { return __value.getAll(); }
		auto getAny() const -> bool { return __value.getAny(); }
		auto getNone() const -> bool { return __value.getNone(); }
		auto getCount() const -> Builtin::usize { return __value.getCount(); }
		auto getFirstSet() const -> Builtin::Nullable<Builtin::usize> { return __value.getFirstSet(); }
		auto getLastSet() const -> Builtin::Nullable<Builtin::usize> { return __value.getLastSet(); }
		auto ToNative() const  -> TNative const { ADV_EXPRESSION_BODY(__value.ToNative()); }
		static auto Create(bool val) -> __self const { ADV_EXPRESSION_BODY(__self::Create(val)); }
		static auto FromScalarMask(Builtin::u64 mask) -> __self const { ADV_EXPRESSION_BODY(__self::FromScalarMask(mask)); }
		static auto LoadAligned(Builtin::Unsafe::__RawPtr<const bool> source) -> __self const { ADV_EXPRESSION_BODY(__self::LoadAligned(source)); }
		static auto Load(Builtin::Unsafe::__RawPtr<const bool> source) -> __self const { ADV_EXPRESSION_BODY(__self::Load(source)); }
		static auto LoadUnsafe(const bool& source) -> __self const { ADV_EXPRESSION_BODY(__self::LoadUnsafe(source)); }
		auto StoreUnsafe(Builtin::MutableRef<bool> destination) const  -> void { ADV_EXPRESSION_BODY(__value.StoreUnsafe(destination)); }
		decltype(auto) getAt(Builtin::usize index)  { return __value._operator_subscript(index); }
		decltype(auto) getAt(Builtin::usize index) const  { return __value._operator_subscript(index); }
		auto operator==(const __self& other) const noexcept -> __self const { ADV_EXPRESSION_BODY(__value.operator==(other)); }
		auto operator!=(const __self& other) const noexcept -> __self const { ADV_EXPRESSION_BODY(__value.operator!=(other)); }
		auto _operator_not() const noexcept -> __self const { ADV_EXPRESSION_BODY(__value._operator_not()); }
		auto operator&=(const __self& other) const  -> __self & { ADV_EXPRESSION_BODY(__value.operator&=(other)); }
		auto operator|=(const __self& other) const  -> __self & { ADV_EXPRESSION_BODY(__value.operator|=(other)); }
		auto operator^=(const __self& other) const  -> __self & { ADV_EXPRESSION_BODY(__value.operator^=(other)); }
		auto operator&(const __self& other) const  -> __self const { ADV_EXPRESSION_BODY(__value.operator&(other)); }
		auto operator|(const __self& other) const  -> __self const { ADV_EXPRESSION_BODY(__value.operator|(other)); }
		auto operator^(const __self& other) const  -> __self const { ADV_EXPRESSION_BODY(__value.operator^(other)); }
		
	};
	
//###############################################################################
//# Function definitions
//###############################################################################

#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline SimdVector<T, Arch>::SimdVector(typename SimdVector<T, Arch>::TNative reg) noexcept
	{
		#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_UPCS(data)(_reg.__ref()) = reg;
	}
#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline SimdVector<T, Arch>::operator typename SimdVector<T, Arch>::TNative() const noexcept
	{
		#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(data)(_reg.__ref())); 
	}
#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::ToNative() const  -> const typename SimdVector<T, Arch>::TNative
	{
		#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(data)(_reg.__ref())); 
	}
#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> template<class U> inline auto SimdVector<T, Arch>::Create(U val)  -> const __self
	{
		#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Arch), Broadcast)(Builtin::Cast<true, T>(val))); 
	}
#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> template<class... Ts> inline auto SimdVector<T, Arch>::Create(T val0, T val1, Ts... tail)  -> const __self
	{
		#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		static_assert(Builtin::usize(sizeof...(Ts)) + Builtin::i32(2) == Length, "Invalid number of arguments");
		#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_USFCS((Arch), CreateFrom)(val0, val1, T{tail}...);
	}
#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::FromMask(const typename SimdVector<T, Arch>::TMask& b)  -> const __self
	{
		#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Arch), FromMask)(b)); 
	}
#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::LoadAligned(Builtin::Unsafe::__RawPtr<const T> source)  -> const __self
	{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __SimdVector_Protected__Unsafe;
		Builtin::CheckForUnsafeContext(); Builtin::UnsafeContextGuard __unsafe_context_guard38{};
		#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		if (ADV_UFCS(UnsafeNarrowToInteger)(source.__ref()) % ADV_USPCS(Alignment, Arch)() != Builtin::i32(0)) [[unlikely]] {
			#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
			Builtin::Throw(Builtin::AccessViolationException{});
		}
		#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_USFCS((Arch), LoadAligned)(source);
	}
#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::Load(Builtin::Unsafe::__RawPtr<const T> source)  -> const __self
	{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __SimdVector_Protected__Unsafe;
		#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Arch), Load)(source)); 
	}
#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::LoadUnsafe(const T& source)  -> const __self
	{
		#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __SimdVector_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard51{};
			#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
			return ADV_USFCS((Arch), Load)((__RawPtr(std::addressof(source))));
		}
		return {};
	}
#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::StoreAligned(Builtin::Unsafe::__RawPtr<T> destination) const  -> void
	{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __SimdVector_Protected__Unsafe;
		Builtin::CheckForUnsafeContext(); Builtin::UnsafeContextGuard __unsafe_context_guard58{};
		#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		if (ADV_UFCS(UnsafeNarrowToInteger)(destination.__ref()) % ADV_USPCS(Alignment, Arch)() != Builtin::i32(0)) [[unlikely]] {
			#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
			Builtin::Throw(Builtin::AccessViolationException{});
		}
		#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_USFCS((Arch), StoreAligned)((*this), destination);
	}
#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::Store(Builtin::Unsafe::__RawPtr<T> destination) const  -> decltype(auto)
	{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __SimdVector_Protected__Unsafe;
		#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Arch), Store)((*this), destination)); 
	}
#line 70 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::StoreUnsafe(Builtin::MutableRef<T> __destination__) const  -> void
	{
		T& destination = __destination__;
		#line 71 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __SimdVector_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard71{};
			#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
			ADV_USFCS((Arch), Store)((*this), (__RawPtr(std::addressof(destination))));
		}
	}
#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> template<class U, class V> requires(std::convertible_to<U, T>) inline auto SimdVector<T, Arch>::Gather(Builtin::Unsafe::__RawPtr<const U> src, const SimdVector<V, Arch>& index)  -> const __self
	{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __SimdVector_Protected__Unsafe;
		#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS_TEMPLATE((Arch), Gather<T>)(src, index)); 
	}
#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> template<class U, class V> requires(std::convertible_to<U, T>) inline auto SimdVector<T, Arch>::Scatter(Builtin::Unsafe::__RawPtr<U> dst, const SimdVector<V, Arch>& index) const  -> decltype(auto)
	{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __SimdVector_Protected__Unsafe;
		#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Arch), Scatter)((*this), dst, index)); 
	}
#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getOne()  -> __self 
	{
		#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Create(T{Builtin::i32(1)})); 
	}
	
#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getZero()  -> __self 
	{
		#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Create(T{Builtin::i32(0)})); 
	}
	
#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_subscript(Builtin::usize index)  -> const T
	{
		#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		if ((index <=> Length) >= 0) {
			#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_USFCS((Arch), GetElement)((*this), index);
	}
	#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_subscript(Builtin::usize index)  const  -> const T
	{
		#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		if ((index <=> Length) >= 0) {
			#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_USFCS((Arch), GetElement)((*this), index);
	}
	#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getAt(Builtin::usize index)  -> const T { return _operator_subscript(index); }
	#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getAt(Builtin::usize index) const  -> const T { return _operator_subscript(index); }
#line 95 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator==(const __self& other) const noexcept -> const typename SimdVector<T, Arch>::TMask
	{
		#line 95 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Arch), Equal)((*this), other)); 
	}
#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator!=(const __self& other) const noexcept -> const typename SimdVector<T, Arch>::TMask
	{
		#line 96 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Arch), NotEqual)((*this), other)); 
	}
#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator<(const __self& other) const noexcept -> const typename SimdVector<T, Arch>::TMask
	{
		#line 97 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Arch), Less)((*this), other)); 
	}
#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator<=(const __self& other) const noexcept -> const typename SimdVector<T, Arch>::TMask
	{
		#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Arch), LessOrEqual)((*this), other)); 
	}
#line 99 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator>(const __self& other) const noexcept -> const typename SimdVector<T, Arch>::TMask
	{
		#line 99 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Arch), Greater)((*this), other)); 
	}
#line 100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator>=(const __self& other) const noexcept -> const typename SimdVector<T, Arch>::TMask
	{
		#line 100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Arch), GreaterOrEqual)((*this), other)); 
	}
#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator==(T other) const noexcept -> const typename SimdVector<T, Arch>::TMask
	{
		#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Arch), Equal)((*this), Create(other))); 
	}
#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator!=(T other) const noexcept -> const typename SimdVector<T, Arch>::TMask
	{
		#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Arch), NotEqual)((*this), Create(other))); 
	}
#line 103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator<(T other) const noexcept -> const typename SimdVector<T, Arch>::TMask
	{
		#line 103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Arch), Less)((*this), Create(other))); 
	}
#line 104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator<=(T other) const noexcept -> const typename SimdVector<T, Arch>::TMask
	{
		#line 104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Arch), LessOrEqual)((*this), Create(other))); 
	}
#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator>(T other) const noexcept -> const typename SimdVector<T, Arch>::TMask
	{
		#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Arch), Greater)((*this), Create(other))); 
	}
#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator>=(T other) const noexcept -> const typename SimdVector<T, Arch>::TMask
	{
		#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Arch), GreaterOrEqual)((*this), Create(other))); 
	}
#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::EqualsAll(const __self& other) const noexcept -> const bool
	{
		#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype((*this) == other)> mask = (*this) == other; 
		#line 112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(All)(mask.__ref());
	}
#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::EqualsAny(const __self& other) const noexcept -> const bool
	{
		#line 117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype((*this) == other)> mask = (*this) == other; 
		#line 118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(Any)(mask.__ref());
	}
#line 122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::LessThanAll(const __self& other) const noexcept -> const bool
	{
		#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(((*this) <=> other) < 0)> mask = ((*this) <=> other) < 0; 
		#line 124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(All)(mask.__ref());
	}
#line 128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::LessThanAny(const __self& other) const noexcept -> const bool
	{
		#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(((*this) <=> other) < 0)> mask = ((*this) <=> other) < 0; 
		#line 130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(Any)(mask.__ref());
	}
#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::LessThanAll(T other) const noexcept -> const bool
	{
		#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(((*this) <=> Create(other)) < 0)> mask = ((*this) <=> Create(other)) < 0; 
		#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(All)(mask.__ref());
	}
#line 138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::LessThanAny(T other) const noexcept -> const bool
	{
		#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(((*this) <=> Create(other)) < 0)> mask = ((*this) <=> Create(other)) < 0; 
		#line 140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(Any)(mask.__ref());
	}
#line 144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::LessThanOrEqualAll(const __self& other) const noexcept -> const bool
	{
		#line 145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(((*this) <=> other) <= 0)> mask = ((*this) <=> other) <= 0; 
		#line 146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(All)(mask.__ref());
	}
#line 150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::LessThanOrEqualAny(const __self& other) const noexcept -> const bool
	{
		#line 151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(((*this) <=> other) <= 0)> mask = ((*this) <=> other) <= 0; 
		#line 152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(Any)(mask.__ref());
	}
#line 155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::LessThanOrEqualAll(T other) const noexcept -> const bool
	{
		#line 156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(((*this) <=> Create(other)) <= 0)> mask = ((*this) <=> Create(other)) <= 0; 
		#line 157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(All)(mask.__ref());
	}
#line 160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::LessThanOrEqualAny(T other) const noexcept -> const bool
	{
		#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(((*this) <=> Create(other)) <= 0)> mask = ((*this) <=> Create(other)) <= 0; 
		#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(Any)(mask.__ref());
	}
#line 166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::GreaterThanAll(const __self& other) const noexcept -> const bool
	{
		#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(((*this) <=> other) > 0)> mask = ((*this) <=> other) > 0; 
		#line 168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(All)(mask.__ref());
	}
#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::GreaterThanAny(const __self& other) const noexcept -> const bool
	{
		#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(((*this) <=> other) > 0)> mask = ((*this) <=> other) > 0; 
		#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(Any)(mask.__ref());
	}
#line 177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::GreaterThanAll(T other) const noexcept -> const bool
	{
		#line 178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(((*this) <=> Create(other)) > 0)> mask = ((*this) <=> Create(other)) > 0; 
		#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(All)(mask.__ref());
	}
#line 182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::GreaterThanAny(T other) const noexcept -> const bool
	{
		#line 183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(((*this) <=> Create(other)) > 0)> mask = ((*this) <=> Create(other)) > 0; 
		#line 184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(Any)(mask.__ref());
	}
#line 188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::GreaterThanOrEqualAll(const __self& other) const noexcept -> const bool
	{
		#line 189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(((*this) <=> other) >= 0)> mask = ((*this) <=> other) >= 0; 
		#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(All)(mask.__ref());
	}
#line 194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::GreaterThanOrEqualAny(const __self& other) const noexcept -> const bool
	{
		#line 195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(((*this) <=> other) >= 0)> mask = ((*this) <=> other) >= 0; 
		#line 196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(Any)(mask.__ref());
	}
#line 199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::GreaterThanOrEqualAll(T other) const noexcept -> const bool
	{
		#line 200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(((*this) <=> Create(other)) >= 0)> mask = ((*this) <=> Create(other)) >= 0; 
		#line 201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(All)(mask.__ref());
	}
#line 204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::GreaterThanOrEqualAny(T other) const noexcept -> const bool
	{
		#line 205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(((*this) <=> Create(other)) >= 0)> mask = ((*this) <=> Create(other)) >= 0; 
		#line 206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(Any)(mask.__ref());
	}
#line 209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_eq_eq_ne(const __self& other) const noexcept -> const bool
	{
		#line 209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(EqualsAll(other)); 
	}
#line 210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_eq_eq_ne(T other) const noexcept -> const bool
	{
		#line 210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(All(other)); 
	}
#line 211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_ne_eq_ne(const __self& other) const noexcept -> const bool
	{
		#line 211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(!EqualsAll(other)); 
	}
#line 212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_ne_eq_ne(T other) const noexcept -> const bool
	{
		#line 212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(!All(other)); 
	}
#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_eq_eq_qst(const __self& other) const noexcept -> const bool
	{
		#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(EqualsAny(other)); 
	}
#line 214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_eq_eq_qst(T other) const noexcept -> const bool
	{
		#line 214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Any(other)); 
	}
#line 215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_ne_eq_qst(const __self& other) const noexcept -> const bool
	{
		#line 215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(!EqualsAny(other)); 
	}
#line 216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_ne_eq_qst(T other) const noexcept -> const bool
	{
		#line 216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(!Any(other)); 
	}
#line 218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_lt_ne(const __self& other) const noexcept -> const bool
	{
		#line 218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(LessThanAll(other)); 
	}
#line 219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_lt_ne(T other) const noexcept -> const bool
	{
		#line 219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(LessThanAll(other)); 
	}
#line 220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_lt_qst(const __self& other) const noexcept -> const bool
	{
		#line 220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(LessThanAny(other)); 
	}
#line 221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_lt_qst(T other) const noexcept -> const bool
	{
		#line 221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(LessThanAny(other)); 
	}
#line 222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_gt_ne(const __self& other) const noexcept -> const bool
	{
		#line 222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(GreaterThanAll(other)); 
	}
#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_gt_ne(T other) const noexcept -> const bool
	{
		#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(GreaterThanAll(other)); 
	}
#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_gt_qst(const __self& other) const noexcept -> const bool
	{
		#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(GreaterThanAny(other)); 
	}
#line 225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_gt_qst(T other) const noexcept -> const bool
	{
		#line 225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(GreaterThanAny(other)); 
	}
#line 227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_lt_eq_ne(const __self& other) const noexcept -> const bool
	{
		#line 227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(LessThanOrEqualAll(other)); 
	}
#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_lt_eq_ne(T other) const noexcept -> const bool
	{
		#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(LessThanOrEqualAll(other)); 
	}
#line 229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_lt_eq_qst(const __self& other) const noexcept -> const bool
	{
		#line 229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(LessThanOrEqualAny(other)); 
	}
#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_lt_eq_qst(T other) const noexcept -> const bool
	{
		#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(LessThanOrEqualAny(other)); 
	}
#line 231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_gt_eq_ne(const __self& other) const noexcept -> const bool
	{
		#line 231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(GreaterThanOrEqualAll(other)); 
	}
#line 232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_gt_eq_ne(T other) const noexcept -> const bool
	{
		#line 232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(GreaterThanOrEqualAll(other)); 
	}
#line 233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_gt_eq_qst(const __self& other) const noexcept -> const bool
	{
		#line 233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(GreaterThanOrEqualAny(other)); 
	}
#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_gt_eq_qst(T other) const noexcept -> const bool
	{
		#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(GreaterThanOrEqualAny(other)); 
	}
#line 239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator+() const noexcept -> const __self
	{
		#line 239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this)); 
	}
#line 240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator-() const noexcept -> const __self
	{
		#line 240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Arch), Negate)((*this))); 
	}
#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_not() const noexcept -> const __self
	{
		#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Arch), BitwiseNot)((*this))); 
	}
#line 244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator+=(const __self& other) const  -> __self&
	{
		#line 244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = ADV_USFCS((Arch), Add)((*this), other)); 
	}
#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator+=(T other) const  -> __self&
	{
		#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = ADV_USFCS((Arch), Add)((*this), Create(other))); 
	}
#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator-=(const __self& other) const  -> __self&
	{
		#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = ADV_USFCS((Arch), Subtract)((*this), other)); 
	}
#line 247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator-=(T other) const  -> __self&
	{
		#line 247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = ADV_USFCS((Arch), Subtract)((*this), Create(other))); 
	}
#line 248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator*=(const __self& other) const  -> __self&
	{
		#line 248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = ADV_USFCS((Arch), Multiply)((*this), other)); 
	}
#line 249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator*=(T other) const  -> __self&
	{
		#line 249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = ADV_USFCS((Arch), Multiply)((*this), Create(other))); 
	}
#line 250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator/=(const __self& other) const  -> __self&
	{
		#line 250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = ADV_USFCS((Arch), Divide)((*this), other)); 
	}
#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator/=(T other) const  -> __self&
	{
		#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = ADV_USFCS((Arch), Divide)((*this), Create(other))); 
	}
#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator%=(const __self& other) const  -> __self&
	{
		#line 253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		static_assert(!Builtin::IsAnyOf<T, Builtin::f32, Builtin::f64>, "Modulo operator is not supported for floating-point types");
		#line 254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return (*this) = ADV_USFCS((Arch), Mod)((*this), other);
	}
#line 256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator%=(T other) const  -> __self&
	{
		#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		static_assert(!Builtin::IsAnyOf<T, Builtin::f32, Builtin::f64>, "Modulo operator is not supported for floating-point types");
		#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return (*this) = ADV_USFCS((Arch), Mod)((*this), Create(other));
	}
#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator&=(const __self& other) const  -> __self&
	{
		#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = ADV_USFCS((Arch), BitwiseAnd)((*this), other)); 
	}
#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator&=(T other) const  -> __self&
	{
		#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = ADV_USFCS((Arch), BitwiseAnd)((*this), Create(other))); 
	}
#line 262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_and_not_eq(const __self& other) const  -> __self&
	{
		#line 262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = ADV_USFCS((Arch), BitwiseAnd)((*this), ADV_UFCS(_operator_not)(other))); 
	}
#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_and_not_eq(T other) const  -> __self&
	{
		#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = ADV_USFCS((Arch), BitwiseAnd)((*this), Create(ADV_UFCS(_operator_not)(other)))); 
	}
#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator|=(const __self& other) const  -> __self&
	{
		#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = ADV_USFCS((Arch), BitwiseOr)((*this), other)); 
	}
#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator|=(T other) const  -> __self&
	{
		#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = ADV_USFCS((Arch), BitwiseOr)((*this), Create(other))); 
	}
#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator^=(const __self& other) const  -> __self&
	{
		#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = ADV_USFCS((Arch), BitwiseXor)((*this), other)); 
	}
#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator^=(T other) const  -> __self&
	{
		#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = ADV_USFCS((Arch), BitwiseXor)((*this), Create(other))); 
	}
#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator>>=(const __self& other) const  -> __self&
	{
		#line 269 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		static_assert(!Builtin::IsAnyOf<T, Builtin::f32, Builtin::f64>, "Bitwise operators is not supported for floating-point types");
		#line 270 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return (*this) = ADV_USFCS((Arch), LeftShift)((*this), other);
	}
#line 272 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator<<=(const __self& other) const  -> __self&
	{
		#line 273 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		static_assert(!Builtin::IsAnyOf<T, Builtin::f32, Builtin::f64>, "Bitwise operators is not supported for floating-point types");
		#line 274 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return (*this) = ADV_USFCS((Arch), RightShift)((*this), other);
	}
#line 276 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator>>=(Builtin::i32 shift) const  -> __self&
	{
		#line 277 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		static_assert(!Builtin::IsAnyOf<T, Builtin::f32, Builtin::f64>, "Bitwise operators is not supported for floating-point types");
		#line 278 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return (*this) = ADV_USFCS((Arch), LeftShift)((*this), shift);
	}
#line 280 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator<<=(Builtin::i32 shift) const  -> __self&
	{
		#line 281 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		static_assert(!Builtin::IsAnyOf<T, Builtin::f32, Builtin::f64>, "Bitwise operators is not supported for floating-point types");
		#line 282 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return (*this) = ADV_USFCS((Arch), RightShift)((*this), shift);
	}
#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator++() const  -> __self&
	{
		#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = ADV_USFCS((Arch), Add)((*this), typename __self::Create{T{Builtin::i32(1)}})); 
	}
	#line 287 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator++(int)  -> __self { auto copy = Builtin::New<__self>(__self{*this}); operator++(); return copy; }
#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator--() const  -> __self&
	{
		#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = ADV_USFCS((Arch), Subtract)((*this), typename __self::Create{T{Builtin::i32(1)}})); 
	}
	#line 289 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator--(int)  -> __self { auto copy = Builtin::New<__self>(__self{*this}); operator--(); return copy; }
#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator+(const __self& other) const  -> const __self
	{
		#line 293 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(__self{(*this)} += other); 
	}
#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator+(T other) const  -> const __self
	{
		#line 294 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(__self{(*this)} += other); 
	}
#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator-(const __self& other) const  -> const __self
	{
		#line 295 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(__self{(*this)} -= other); 
	}
#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator-(T other) const  -> const __self
	{
		#line 296 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(__self{(*this)} -= other); 
	}
#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator*(const __self& other) const  -> const __self
	{
		#line 297 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(__self{(*this)} *= other); 
	}
#line 298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator*(T other) const  -> const __self
	{
		#line 298 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(__self{(*this)} *= other); 
	}
#line 299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator/(const __self& other) const  -> const __self
	{
		#line 299 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(__self{(*this)} /= other); 
	}
#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator/(T other) const  -> const __self
	{
		#line 300 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(__self{(*this)} /= other); 
	}
#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator%(const __self& other) const  -> const __self
	{
		#line 301 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(__self{(*this)} %= other); 
	}
#line 302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator%(T other) const  -> const __self
	{
		#line 302 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(__self{(*this)} %= other); 
	}
#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator&(const __self& other) const  -> const __self
	{
		#line 303 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(__self{(*this)} &= other); 
	}
#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator&(T other) const  -> const __self
	{
		#line 304 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(__self{(*this)} &= other); 
	}
#line 305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_and_not(const __self& other) const  -> const __self
	{
		#line 305 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_and_not_eq)(__self{(*this)}, other)); 
	}
#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::_operator_and_not(T other) const  -> const __self
	{
		#line 306 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_and_not_eq)(__self{(*this)}, other)); 
	}
#line 307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator|(const __self& other) const  -> const __self
	{
		#line 307 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(__self{(*this)} |= other); 
	}
#line 308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator|(T other) const  -> const __self
	{
		#line 308 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(__self{(*this)} |= other); 
	}
#line 309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator^(const __self& other) const  -> const __self
	{
		#line 309 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(__self{(*this)} ^= other); 
	}
#line 310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator^(T other) const  -> const __self
	{
		#line 310 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(__self{(*this)} ^= other); 
	}
#line 311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator>>(const __self& other) const  -> const __self
	{
		#line 311 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(__self{(*this)} >>= other); 
	}
#line 312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator>>(Builtin::i32 shift) const  -> const __self
	{
		#line 312 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(__self{(*this)} >>= shift); 
	}
#line 313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator<<(const __self& other) const  -> const __self
	{
		#line 313 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(__self{(*this)} <<= other); 
	}
#line 314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::operator<<(Builtin::i32 shift) const  -> const __self
	{
		#line 314 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(__self{(*this)} <<= shift); 
	}
#line 316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getAbs() const  -> __self 
	{
		#line 316 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Arch), Abs)((*this))); 
	}
	
#line 317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::getShuffle() const  -> __self 
	{
		#line 317 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Arch), Shuffle)((*this))); 
	}
	
#line 322 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::All(T val) const  -> const bool
	{
		#line 323 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype((*this) == val)> mask = (*this) == val; 
		#line 324 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(All)(mask.__ref());
	}
#line 327 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::Any(T val) const  -> const bool
	{
		#line 328 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype((*this) == val)> mask = (*this) == val; 
		#line 329 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(Any)(mask.__ref());
	}
#line 332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::None(T val) const  -> const bool
	{
		#line 332 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(!Any(val)); 
	}
#line 334 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::Count(T val) const  -> const Builtin::usize
	{
		#line 335 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype((*this) == val)> mask = (*this) == val; 
		#line 336 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(Count)(mask.__ref());
	}
#line 339 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::IndexOf(T val) const  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 340 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype((*this) == val)> mask = (*this) == val; 
		#line 341 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(FirstSet)(mask.__ref());
	}
#line 344 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdVector<T, Arch>::LastIndexOf(T val) const  -> const Builtin::Nullable<Builtin::usize>
	{
		#line 345 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype((*this) == val)> mask = (*this) == val; 
		#line 346 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_UPCS(LastSet)(mask.__ref());
	}
#line 363 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline SimdMask<T, Arch>::SimdMask(typename SimdMask<T, Arch>::TNative reg) noexcept : _reg{TRegister{reg}} {}
#line 364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline SimdMask<T, Arch>::operator typename SimdMask<T, Arch>::TNative() const noexcept
	{
		#line 364 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(data)(_reg.__ref())); 
	}
#line 366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::ToNative() const  -> const typename SimdMask<T, Arch>::TNative
	{
		#line 366 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(data)(_reg.__ref())); 
	}
#line 368 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> template<class U, class... V, size_t I, size_t... Is> inline auto SimdMask<T, Arch>::MakeRegister(typename Builtin::template IndexSequence<I, Is...> __var_368_68, U u, V... v) noexcept -> const typename SimdMask<T, Arch>::TNative
	{
		#line 369 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(MakeRegister(Builtin::IndexSequence<Is...>(), u, u, v...)); 
	}
#line 370 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> template<class... V> inline auto SimdMask<T, Arch>::MakeRegister(typename Builtin::template IndexSequence<> __var_370_41, V... v) noexcept -> const typename SimdMask<T, Arch>::TNative
	{
		#line 371 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(ToNative)(ADV_USFCS((Arch), CreateMaskFrom)(v...).__ref())); 
	}
#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::Create(bool val)  -> const __self
	{
		#line 374 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(MakeRegister(Builtin::IndexSequence<Length - Builtin::u32(1U)>(), val)); 
	}
#line 376 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> template<class... Ts> inline auto SimdMask<T, Arch>::Create(bool val0, bool val1, Ts... tail)  -> const __self
	{
		#line 377 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		static_assert(Builtin::usize(sizeof...(Ts)) + Builtin::i32(2) == Length, "Invalid number of arguments");
		#line 378 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_USFCS((Arch), CreateMaskFrom)(val0, val1, bool{tail}...);
	}
#line 381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::FromScalarMask(Builtin::u64 mask)  -> const __self
	{
		#line 381 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Arch), MaskFromScalar)(mask)); 
	}
#line 383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::getScalarMask() const  -> Builtin::u64 
	{
		#line 383 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Arch), MaskToScalar)((*this))); 
	}
	
#line 387 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::LoadAligned(Builtin::Unsafe::__RawPtr<const bool> source)  -> const __self
	{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __SimdVector_Protected__Unsafe;
		Builtin::CheckForUnsafeContext(); Builtin::UnsafeContextGuard __unsafe_context_guard387{};
		#line 388 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		if (ADV_UFCS(UnsafeNarrowToInteger)(source.__ref()) % ADV_USPCS(Alignment, Arch)() != Builtin::i32(0)) [[unlikely]] {
			#line 390 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
			Builtin::Throw(Builtin::AccessViolationException{});
		}
		#line 392 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_USFCS((Arch), LoadMaskAligned)(source);
	}
#line 396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::Load(Builtin::Unsafe::__RawPtr<const bool> source)  -> const __self
	{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __SimdVector_Protected__Unsafe;
		#line 396 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Arch), LoadMask)(source)); 
	}
#line 399 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::LoadUnsafe(const bool& source)  -> const __self
	{
		#line 400 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __SimdVector_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard400{};
			#line 401 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
			return ADV_USFCS((Arch), LoadMask)((__RawPtr(std::addressof(source))));
		}
		return {};
	}
#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::Store(Builtin::Unsafe::__RawPtr<bool> destination) const  -> decltype(auto)
	{	using namespace Builtin::Unsafe;	using namespace __Unsafe;	using namespace __SimdVector_Protected__Unsafe;
		#line 406 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Arch), Store)((*this), destination)); 
	}
#line 409 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::StoreUnsafe(Builtin::MutableRef<bool> __destination__) const  -> void
	{
		bool& destination = __destination__;
		#line 410 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		{	using namespace Builtin::Unsafe;	using namespace System::Runtime::Intrinsics::__Unsafe;	using namespace __SimdVector_Protected__Unsafe;	Builtin::UnsafeContextGuard __unsafe_context_guard410{};
			#line 411 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
			ADV_USFCS((Arch), Store)((*this), (__RawPtr(std::addressof(destination))));
		}
	}
#line 415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::getTrue()  -> __self 
	{
		#line 415 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Create(Builtin::Boolean(true))); 
	}
	
#line 416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::getFalse()  -> __self 
	{
		#line 416 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Create(Builtin::Boolean(false))); 
	}
	
#line 420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::_operator_subscript(Builtin::usize index)  -> const T
	{
		#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		if ((index <=> Length) >= 0) {
			#line 422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_USFCS((Arch), GetElement)((*this), index);
	}
	#line 420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::_operator_subscript(Builtin::usize index)  const  -> const T
	{
		#line 421 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		if ((index <=> Length) >= 0) {
			#line 422 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
			Builtin::Throw(Builtin::IndexOutOfRangeException{});
		}
		#line 424 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return ADV_USFCS((Arch), GetElement)((*this), index);
	}
	#line 420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::getAt(Builtin::usize index)  -> const T { return _operator_subscript(index); }
	#line 420 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::getAt(Builtin::usize index) const  -> const T { return _operator_subscript(index); }
#line 428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::operator==(const __self& other) const noexcept -> const __self
	{
		#line 428 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(ToNative)(ADV_USFCS((Arch), Equal)((*this), other).__ref())); 
	}
#line 429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::operator!=(const __self& other) const noexcept -> const __self
	{
		#line 429 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(ToNative)(ADV_USFCS((Arch), NotEqual)((*this), other).__ref())); 
	}
#line 434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::_operator_not() const noexcept -> const __self
	{
		#line 434 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(ToNative)(ADV_USFCS((Arch), BitwiseNot)((*this)).__ref())); 
	}
#line 437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::operator&=(const __self& other) const  -> __self&
	{
		#line 437 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = ADV_UFCS(ToNative)(ADV_USFCS((Arch), BitwiseAnd)((*this), other).__ref())); 
	}
#line 438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::operator|=(const __self& other) const  -> __self&
	{
		#line 438 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = ADV_UFCS(ToNative)(ADV_USFCS((Arch), BitwiseOr)((*this), other).__ref())); 
	}
#line 439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::operator^=(const __self& other) const  -> __self&
	{
		#line 439 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY((*this) = ADV_UFCS(ToNative)(ADV_USFCS((Arch), BitwiseXor)((*this), other).__ref())); 
	}
#line 443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::operator&(const __self& other) const  -> const __self
	{
		#line 443 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(__self{(*this)} &= other); 
	}
#line 444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::operator|(const __self& other) const  -> const __self
	{
		#line 444 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(__self{(*this)} |= other); 
	}
#line 445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::operator^(const __self& other) const  -> const __self
	{
		#line 445 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(__self{(*this)} ^= other); 
	}
#line 449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::getAll() const  -> bool 
	{
		#line 449 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Arch), All)((*this))); 
	}
	
#line 450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::getAny() const  -> bool 
	{
		#line 450 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(ADV_USFCS((Arch), Any)((*this))); 
	}
	
#line 451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::getNone() const  -> bool 
	{
		#line 451 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(!Any); 
	}
	
#line 452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::getCount() const  -> Builtin::usize 
	{
		#line 452 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		ADV_EXPRESSION_BODY(Builtin::PopCount(Builtin::Cast<true, Builtin::u64>(ScalarMask))); 
	}
	
#line 453 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::getFirstSet() const  -> Builtin::Nullable<Builtin::usize> 
	{
		#line 454 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		constexpr Builtin::Auto<decltype(Builtin::usize(64U) - Length)> unusedBits = Builtin::usize(64U) - Length;
		#line 455 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		constexpr Builtin::Auto<decltype((Length <=> Builtin::i32(64)) < 0 ? (Builtin::u64(1ULL) << Builtin::i32{Length % Builtin::i32(64)}) - Builtin::i32(1) : ADV_UFCS(_operator_not)(Builtin::u64{Builtin::i32(0)}))> lowMask = (Length <=> Builtin::i32(64)) < 0 ? (Builtin::u64(1ULL) << Builtin::i32{Length % Builtin::i32(64)}) - Builtin::i32(1) : ADV_UFCS(_operator_not)(Builtin::u64{Builtin::i32(0)});
		#line 456 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(Builtin::LeadingZeroCount(Builtin::u64{ScalarMask}))> index = Builtin::LeadingZeroCount(Builtin::u64{ScalarMask}); 
		#line 457 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		if ((index <=> Builtin::i32(64)) >= 0) {
			#line 458 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
			return nullptr;
		}
		#line 460 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return index - unusedBits;
	}
	
#line 462 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	template<class T, class Arch> inline auto SimdMask<T, Arch>::getLastSet() const  -> Builtin::Nullable<Builtin::usize> 
	{
		#line 463 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		constexpr Builtin::Auto<decltype((Length <=> Builtin::i32(64)) < 0 ? (Builtin::u64(1ULL) << Builtin::i32{Length % Builtin::i32(64)}) : Builtin::u64(0ULL))> stop = (Length <=> Builtin::i32(64)) < 0 ? (Builtin::u64(1ULL) << Builtin::i32{Length % Builtin::i32(64)}) : Builtin::u64(0ULL);
		#line 464 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		const Builtin::Auto<decltype(Builtin::TrailingZeroCount(Builtin::u64{ScalarMask} | stop))> index = Builtin::TrailingZeroCount(Builtin::u64{ScalarMask} | stop); 
		#line 465 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		if ((index <=> Length) >= 0) {
			#line 466 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
			return nullptr;
		}
		#line 468 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
		return Length - Builtin::i32(1) - index;
	}
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Runtime\\Intrinsics\\SimdVector.ast"
	

}