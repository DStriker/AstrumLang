#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "Int8.h"
#include "UInt8.h"
#include "Int16.h"
#include "UInt16.h"
#include "Int32.h"
#include "UInt32.h"
#include "Int64.h"
#include "UInt64.h"
#include "Int128.h"
#include "UInt128.h"

namespace System {
namespace __Unsafe {} namespace __Math$Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
class Math;
//###############################################################################
//# Type definitions
//###############################################################################
#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	struct Math : public Builtin::StaticClass {
		public: using $self = Math;
		#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		private: using IsqrtData = std::tuple<Builtin::u8, Builtin::u8>;
		private: Math() = default;
		#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		private: template<$ImplementsInterface_IFixedWidthInteger T> inline constexpr static auto _isqrtFirstStage(T num)  -> const std::tuple<Builtin::u8, Builtin::u8>;
		#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		private: template<$ImplementsInterface_IFixedWidthInteger T, $ImplementsInterface_IFixedWidthInteger U> inline constexpr static auto _isqrtMiddleStage(T num, auto root, auto rem)  -> const std::tuple<U, U>;
		#line 70 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		private: template<$ImplementsInterface_IFixedWidthInteger T> inline constexpr static auto _isqrtLastStage(T num, auto root, auto rem)  -> const T;
		#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: inline constexpr static auto Isqrt8(Builtin::u8 num) noexcept -> const Builtin::u8;
		#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: inline constexpr static auto Isqrt16(Builtin::u16 num)  -> const Builtin::u16;
		#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: inline constexpr static auto Isqrt32(Builtin::u32 num)  -> const Builtin::u32;
		#line 125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: inline constexpr static auto Isqrt64(Builtin::u64 num)  -> const Builtin::u64;
		#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: inline constexpr static auto Isqrt128(Builtin::u128 num)  -> const Builtin::u128;
		#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T, class U> inline constexpr static auto Add(T lhs, U rhs)  -> const std::remove_cvref_t<T>;
		#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T, class U> inline constexpr static auto WrappingAdd(T lhs, U rhs)  -> const std::remove_cvref_t<T>;
		#line 164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T, class U> inline constexpr static auto SaturatingAdd(T lhs, U rhs)  -> const std::remove_cvref_t<T>;
		#line 165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T, class U> inline constexpr static auto StrictAdd(T lhs, U rhs)  -> const std::remove_cvref_t<T>;
		#line 166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T, class U> inline constexpr static auto CheckedAdd(T lhs, U rhs)  -> const Builtin::Nullable<std::remove_cvref_t<T>>;
		#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T, class U> inline constexpr static auto OverflowingAdd(T lhs, U rhs)  -> const std::tuple<std::remove_cvref_t<T>, bool>;
		#line 168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T, class U> inline constexpr static auto Subtract(T lhs, U rhs)  -> const std::remove_cvref_t<T>;
		#line 169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T, class U> inline constexpr static auto WrappingSubtract(T lhs, U rhs)  -> const std::remove_cvref_t<T>;
		#line 170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T, class U> inline constexpr static auto SaturatingSubtract(T lhs, U rhs)  -> const std::remove_cvref_t<T>;
		#line 171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T, class U> inline constexpr static auto StrictSubtract(T lhs, U rhs)  -> const std::remove_cvref_t<T>;
		#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T, class U> inline constexpr static auto CheckedSubtract(T lhs, U rhs)  -> const Builtin::Nullable<std::remove_cvref_t<T>>;
		#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T, class U> inline constexpr static auto OverflowingSubtract(T lhs, U rhs)  -> const std::tuple<std::remove_cvref_t<T>, bool>;
		#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T, class U> inline constexpr static auto Multiply(T lhs, U rhs)  -> const std::remove_cvref_t<T>;
		#line 175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T, class U> inline constexpr static auto WrappingMultiply(T lhs, U rhs)  -> const std::remove_cvref_t<T>;
		#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T, class U> inline constexpr static auto SaturatingMultiply(T lhs, U rhs)  -> const std::remove_cvref_t<T>;
		#line 177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T, class U> inline constexpr static auto StrictMultiply(T lhs, U rhs)  -> const std::remove_cvref_t<T>;
		#line 178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T, class U> inline constexpr static auto CheckedMultiply(T lhs, U rhs)  -> const Builtin::Nullable<std::remove_cvref_t<T>>;
		#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T, class U> inline constexpr static auto OverflowingMultiply(T lhs, U rhs)  -> const std::tuple<std::remove_cvref_t<T>, bool>;
		#line 180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T, class U> inline constexpr static auto IPow(T lhs, U rhs)  -> auto;
		#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T, class U> inline constexpr static auto WrappingIPow(T lhs, U rhs)  -> auto;
		#line 182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T, class U> inline constexpr static auto SaturatingIPow(T lhs, U rhs)  -> auto;
		#line 183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T, class U> inline constexpr static auto StrictIPow(T lhs, U rhs)  -> auto;
		#line 184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T, class U> inline constexpr static auto CheckedIPow(T lhs, U rhs)  -> auto;
		#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T, class U> inline constexpr static auto OverflowingIPow(T lhs, U rhs)  -> auto;
		#line 186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T, class U> inline constexpr static auto Pow(T lhs, U rhs)  -> auto;
		#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T, class U> inline constexpr static auto Divide(T lhs, U rhs)  -> auto;
		#line 188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T, class U> inline constexpr static auto IntegerDivide(T lhs, U rhs)  -> auto;
		#line 189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T, class U> inline constexpr static auto WrappingDivide(T lhs, U rhs)  -> auto;
		#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T, class U> inline constexpr static auto SaturatingDivide(T lhs, U rhs)  -> auto;
		#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T, class U> inline constexpr static auto StrictDivide(T lhs, U rhs)  -> auto;
		#line 192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T, class U> inline constexpr static auto CheckedDivide(T lhs, U rhs)  -> auto;
		#line 193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T, class U> inline constexpr static auto OverflowingDivide(T lhs, U rhs)  -> auto;
		#line 194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T, class U> inline constexpr static auto Remainder(T lhs, U rhs)  -> auto;
		#line 195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T, class U> inline constexpr static auto WrappingRemainder(T lhs, U rhs)  -> auto;
		#line 196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T, class U> inline constexpr static auto SaturatingRemainder(T lhs, U rhs)  -> auto;
		#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T, class U> inline constexpr static auto StrictRemainder(T lhs, U rhs)  -> auto;
		#line 198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T, class U> inline constexpr static auto CheckedRemainder(T lhs, U rhs)  -> auto;
		#line 199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T, class U> inline constexpr static auto OverflowingRemainder(T lhs, U rhs)  -> auto;
		#line 200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T, class U> inline constexpr static auto RoundDiv(T lhs, U rhs)  -> auto;
		#line 201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T, class U> inline constexpr static auto CeilDiv(T lhs, U rhs)  -> auto;
		#line 202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T, class U> inline constexpr static auto FloorDiv(T lhs, U rhs)  -> auto;
		#line 203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T, class U> inline constexpr static auto FloorMod(T lhs, U rhs)  -> auto;
		#line 204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T, class U> inline constexpr static auto DivRem(T lhs, U rhs)  -> auto;
		#line 205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T> inline constexpr static auto Abs(T lhs)  -> auto;
		#line 206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T> inline constexpr static auto WrappingAbs(T lhs)  -> auto;
		#line 207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T> inline constexpr static auto SaturatingAbs(T lhs)  -> auto;
		#line 208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T> inline constexpr static auto StrictAbs(T lhs)  -> auto;
		#line 209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T> inline constexpr static auto CheckedAbs(T lhs)  -> auto;
		#line 210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T> inline constexpr static auto OverflowingAbs(T lhs)  -> auto;
		#line 211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T, class U, class V> inline constexpr static auto Clamp(T lhs, U min, V max)  -> const std::remove_cvref_t<T>;
		#line 212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T, class U, class V> inline constexpr static auto Lerp(T lhs, U rhs, V scale)  -> const std::remove_cvref_t<T>;
		#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T> inline constexpr static auto Sign(T lhs)  -> const std::remove_cvref_t<T>;
		#line 214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T, class U> inline constexpr static auto CopySign(T lhs, U rhs)  -> const std::remove_cvref_t<T>;
		#line 215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T> inline constexpr static auto IsPow2(T lhs)  -> const bool;
		#line 216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T> inline constexpr static auto NextPow2(T lhs)  -> const std::remove_cvref_t<T>;
		#line 217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T> inline constexpr static auto PrevPow2(T lhs)  -> const std::remove_cvref_t<T>;
		#line 218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T, class U> inline constexpr static auto IsMultipleOf(T lhs, U rhs)  -> const bool;
		#line 219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T, class U> inline constexpr static auto NextMultipleOf(T lhs, U rhs)  -> const std::remove_cvref_t<T>;
		#line 220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T, class U> inline constexpr static auto Midpoint(T lhs, U rhs)  -> const std::remove_cvref_t<T>;
		#line 221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T> inline constexpr static auto Round(T lhs)  -> const std::remove_cvref_t<T>;
		#line 222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T> inline constexpr static auto RoundTiesEven(T lhs)  -> const std::remove_cvref_t<T>;
		#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T> inline constexpr static auto Truncate(T lhs)  -> const std::remove_cvref_t<T>;
		#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T> inline constexpr static auto Ceil(T lhs)  -> const std::remove_cvref_t<T>;
		#line 225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T> inline constexpr static auto Floor(T lhs)  -> const std::remove_cvref_t<T>;
		#line 226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T> inline constexpr static auto Log2(T lhs)  -> const std::remove_cvref_t<T>;
		#line 227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T> inline constexpr static auto Log10(T lhs)  -> const std::remove_cvref_t<T>;
		#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T> inline constexpr static auto Ln(T lhs)  -> const std::remove_cvref_t<T>;
		#line 229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T> inline constexpr static auto Ln1P(T lhs)  -> const std::remove_cvref_t<T>;
		#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T, class V> inline constexpr static auto Log(T lhs, V base)  -> const std::remove_cvref_t<T>;
		#line 231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T> inline constexpr static auto Exp2(T lhs)  -> const std::remove_cvref_t<T>;
		#line 232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T> inline constexpr static auto Exp10(T lhs)  -> const std::remove_cvref_t<T>;
		#line 233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T> inline constexpr static auto Exp(T lhs)  -> const std::remove_cvref_t<T>;
		#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T> inline constexpr static auto ExpM1(T lhs)  -> const std::remove_cvref_t<T>;
		#line 235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T> inline constexpr static auto Sqrt(T lhs)  -> const std::remove_cvref_t<T>;
		#line 236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T> inline constexpr static auto Cbrt(T lhs)  -> const std::remove_cvref_t<T>;
		#line 237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T, class U> inline constexpr static auto Hypot(T lhs, U rhs)  -> const std::remove_cvref_t<T>;
		#line 238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T, class U> inline constexpr static auto Root(T lhs, U exp)  -> const std::remove_cvref_t<T>;
		#line 239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T> inline constexpr static auto Sin(T lhs)  -> const std::remove_cvref_t<T>;
		#line 240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T> inline constexpr static auto Cos(T lhs)  -> const std::remove_cvref_t<T>;
		#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T> inline constexpr static auto Tan(T lhs)  -> const std::remove_cvref_t<T>;
		#line 242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T> inline constexpr static auto SinPi(T lhs)  -> const std::remove_cvref_t<T>;
		#line 243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T> inline constexpr static auto CosPi(T lhs)  -> const std::remove_cvref_t<T>;
		#line 244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T> inline constexpr static auto TanPi(T lhs)  -> const std::remove_cvref_t<T>;
		#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T> inline constexpr static auto Cot(T lhs)  -> const std::remove_cvref_t<T>;
		#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T> inline constexpr static auto Sec(T lhs)  -> const std::remove_cvref_t<T>;
		#line 247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T> inline constexpr static auto Csc(T lhs)  -> const std::remove_cvref_t<T>;
		#line 248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T> inline constexpr static auto Asin(T lhs)  -> const std::remove_cvref_t<T>;
		#line 249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T> inline constexpr static auto Acos(T lhs)  -> const std::remove_cvref_t<T>;
		#line 250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T> inline constexpr static auto Atan(T lhs)  -> const std::remove_cvref_t<T>;
		#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T, class U> inline constexpr static auto Atan2(T lhs, U rhs)  -> const std::remove_cvref_t<T>;
		#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T> inline constexpr static auto Acot(T lhs)  -> const std::remove_cvref_t<T>;
		#line 253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T> inline constexpr static auto Asec(T lhs)  -> const std::remove_cvref_t<T>;
		#line 254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T> inline constexpr static auto Acsc(T lhs)  -> const std::remove_cvref_t<T>;
		#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T> inline constexpr static auto Sinh(T lhs)  -> const std::remove_cvref_t<T>;
		#line 256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T> inline constexpr static auto Cosh(T lhs)  -> const std::remove_cvref_t<T>;
		#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T> inline constexpr static auto Tanh(T lhs)  -> const std::remove_cvref_t<T>;
		#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T> inline constexpr static auto Coth(T lhs)  -> const std::remove_cvref_t<T>;
		#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T> inline constexpr static auto Sech(T lhs)  -> const std::remove_cvref_t<T>;
		#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T> inline constexpr static auto Csch(T lhs)  -> const std::remove_cvref_t<T>;
		#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T> inline constexpr static auto Asinh(T lhs)  -> const std::remove_cvref_t<T>;
		#line 262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T> inline constexpr static auto Acosh(T lhs)  -> const std::remove_cvref_t<T>;
		#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T> inline constexpr static auto Atanh(T lhs)  -> const std::remove_cvref_t<T>;
		#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T> inline constexpr static auto Acoth(T lhs)  -> const std::remove_cvref_t<T>;
		#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T> inline constexpr static auto Asech(T lhs)  -> const std::remove_cvref_t<T>;
		#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T> inline constexpr static auto Acsch(T lhs)  -> const std::remove_cvref_t<T>;
		#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T, class U> inline constexpr static auto Max(T lhs, U rhs)  -> const std::remove_cvref_t<T>;
		#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		public: template<class T, class U> inline constexpr static auto Min(T lhs, U rhs)  -> const std::remove_cvref_t<T>;
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		private: static constexpr Builtin::InlineArray<Builtin::i32(256), IsqrtData> _isqrtLookupTable = [] () 
		{
			#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
			Builtin::InlineArray<Builtin::i32(256), IsqrtData> result{}; 
			#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
			Builtin::usize n = Builtin::u32(0U); 
			#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
			Builtin::usize rootN = Builtin::u32(0U); 
			#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
			while ((n <=> Builtin::i32(256)) < 0) 
			{
				#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
				ADV_UFCS(_operator_subscript)(result.$ref(), Builtin::Cast<true, Builtin::i32>(n)) = std::make_tuple(Builtin::Cast<true, Builtin::u8>(rootN), Builtin::Cast<true, Builtin::u8>((n - ADV_UFCS(_operator_xor_xor)(rootN, Builtin::u32(2U)))));
				#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
				n++;
				#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
				if (n == ADV_UFCS(_operator_xor_xor)((rootN + Builtin::i32(1)), Builtin::u32(2U))) {
					#line 26 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
					rootN++;
				}
			}
			#line 30 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
			return result;
		}();
		#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		private: static constexpr auto EVEN_MAKING_BITMASK = ADV_UFCS_NONLOCAL(_operator_not)(Builtin::u32(1U));
		
	};
	
	} namespace $extensions {
template<class __TT> struct $static_StrictAbs;
template<class __TT> struct $static_getStrictAbs;
template<class __TT> struct $static_BitWidth;
template<class __TT> struct $static_getBitWidth;
template<class __TT> struct $static_LeadingZeroCount;
template<class __TT> struct $static_getLeadingZeroCount;
template<class __TT> struct $static_Sech;
template<class __TT> struct $static_getSech;
template<class __TT> struct $static_Acot;
template<class __TT> struct $static_getAcot;
template<class __TT> struct $static_Asin;
template<class __TT> struct $static_getAsin;
template<class __TT> struct $static_MaxValue;
template<class __TT> struct $static_getMaxValue;
template<class __TT> struct $static_Abs;
template<class __TT> struct $static_getAbs;
template<class __TT> struct $static_WrappingAbs;
template<class __TT> struct $static_getWrappingAbs;
template<class __TT> struct $static_Cot;
template<class __TT> struct $static_getCot;
template<class __TT> struct $static_SaturatingAbs;
template<class __TT> struct $static_getSaturatingAbs;
template<class __TT> struct $static_CheckedAbs;
template<class __TT> struct $static_getCheckedAbs;
template<class __TT> struct $static_OverflowingAbs;
template<class __TT> struct $static_getOverflowingAbs;
template<class __TT> struct $static_Coth;
template<class __TT> struct $static_getCoth;
template<class __TT> struct $static_Lerp;
template<class __TT> struct $static_getLerp;
template<class __TT> struct $static_Sign;
template<class __TT> struct $static_getSign;
template<class __TT> struct $static_Hypot;
template<class __TT> struct $static_getHypot;
template<class __TT> struct $static_CopySign;
template<class __TT> struct $static_getCopySign;
template<class __TT> struct $static_Acosh;
template<class __TT> struct $static_getAcosh;
template<class __TT> struct $static_IsPow2;
template<class __TT> struct $static_getIsPow2;
template<class __TT> struct $static_NextPow2;
template<class __TT> struct $static_getNextPow2;
template<class __TT> struct $static_PrevPow2;
template<class __TT> struct $static_getPrevPow2;
template<class __TT> struct $static_IsMultipleOf;
template<class __TT> struct $static_getIsMultipleOf;
template<class __TT> struct $static_Sin;
template<class __TT> struct $static_getSin;
template<class __TT> struct $static_NextMultipleOf;
template<class __TT> struct $static_getNextMultipleOf;
template<class __TT> struct $static_Exp10;
template<class __TT> struct $static_getExp10;
template<class __TT> struct $static_Midpoint;
template<class __TT> struct $static_getMidpoint;
template<class __TT> struct $static_Round;
template<class __TT> struct $static_getRound;
template<class __TT> struct $static_RoundTiesEven;
template<class __TT> struct $static_getRoundTiesEven;
template<class __TT> struct $static_CosPi;
template<class __TT> struct $static_getCosPi;
template<class __TT> struct $static_Truncate;
template<class __TT> struct $static_getTruncate;
template<class __TT> struct $static_Csch;
template<class __TT> struct $static_getCsch;
template<class __TT> struct $static_Exp;
template<class __TT> struct $static_getExp;
template<class __TT> struct $static_Ceil;
template<class __TT> struct $static_getCeil;
template<class __TT> struct $static_Floor;
template<class __TT> struct $static_getFloor;
template<class __TT> struct $static_Log2;
template<class __TT> struct $static_getLog2;
template<class __TT> struct $static_Tanh;
template<class __TT> struct $static_getTanh;
template<class __TT> struct $static_Log10;
template<class __TT> struct $static_getLog10;
template<class __TT> struct $static_Atan;
template<class __TT> struct $static_getAtan;
template<class __TT> struct $static_Ln;
template<class __TT> struct $static_getLn;
template<class __TT> struct $static_Exp2;
template<class __TT> struct $static_getExp2;
template<class __TT> struct $static_Ln1P;
template<class __TT> struct $static_getLn1P;
template<class __TT> struct $static_Log;
template<class __TT> struct $static_getLog;
template<class __TT> struct $static_ExpM1;
template<class __TT> struct $static_getExpM1;
template<class __TT> struct $static_Acoth;
template<class __TT> struct $static_getAcoth;
template<class __TT> struct $static_SinPi;
template<class __TT> struct $static_getSinPi;
template<class __TT> struct $static_Asinh;
template<class __TT> struct $static_getAsinh;
template<class __TT> struct $static_Sqrt;
template<class __TT> struct $static_getSqrt;
template<class __TT> struct $static_Cbrt;
template<class __TT> struct $static_getCbrt;
template<class __TT> struct $static_Root;
template<class __TT> struct $static_getRoot;
template<class __TT> struct $static_Cosh;
template<class __TT> struct $static_getCosh;
template<class __TT> struct $static_Cos;
template<class __TT> struct $static_getCos;
template<class __TT> struct $static_Tan;
template<class __TT> struct $static_getTan;
template<class __TT> struct $static_TanPi;
template<class __TT> struct $static_getTanPi;
template<class __TT> struct $static_Sec;
template<class __TT> struct $static_getSec;
template<class __TT> struct $static_Csc;
template<class __TT> struct $static_getCsc;
template<class __TT> struct $static_Sinh;
template<class __TT> struct $static_getSinh;
template<class __TT> struct $static_Acos;
template<class __TT> struct $static_getAcos;
template<class __TT> struct $static_Atan2;
template<class __TT> struct $static_getAtan2;
template<class __TT> struct $static_Asec;
template<class __TT> struct $static_getAsec;
template<class __TT> struct $static_Asech;
template<class __TT> struct $static_getAsech;
template<class __TT> struct $static_Acsc;
template<class __TT> struct $static_getAcsc;
template<class __TT> struct $static_Atanh;
template<class __TT> struct $static_getAtanh;
template<class __TT> struct $static_Acsch;
template<class __TT> struct $static_getAcsch;
template<class __TT> struct $static_Max;
template<class __TT> struct $static_getMax;
template<class __TT> struct $static_Isqrt8;
template<class __TT> struct $static_getIsqrt8;
template<class __TT> struct $static_Isqrt16;
template<class __TT> struct $static_getIsqrt16;
template<class __TT> struct $static_Isqrt32;
template<class __TT> struct $static_getIsqrt32;
template<class __TT> struct $static_Isqrt64;
template<class __TT> struct $static_getIsqrt64;
template<class __TT> struct $static_Isqrt128;
template<class __TT> struct $static_getIsqrt128;
} namespace System {
//###############################################################################
//# Function definitions
//###############################################################################

#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<$ImplementsInterface_IFixedWidthInteger T> inline constexpr auto Math::_isqrtFirstStage(T num)  -> const std::tuple<Builtin::u8, Builtin::u8>
	{
		#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_ASSERT((num != Builtin::i32(0)), "num!=0");
		#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		constexpr Builtin::Auto<decltype(ADV_USPCS(BitWidth, T)() - Builtin::i32(8))> SHIFT = ADV_USPCS(BitWidth, T)() - Builtin::i32(8);
		#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		num >>= Builtin::Cast<true, Builtin::i32>(SHIFT);
		#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		return ADV_UFCS(_operator_subscript)(_isqrtLookupTable.$ref(), Builtin::Cast<true, Builtin::i32>(num));
	}
#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<$ImplementsInterface_IFixedWidthInteger T, $ImplementsInterface_IFixedWidthInteger U> inline constexpr auto Math::_isqrtMiddleStage(T num, auto root, auto rem)  -> const std::tuple<U, U>
	{
		#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_ASSERT((root != Builtin::i32(0)), "root!=0");
		#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		constexpr Builtin::Auto<decltype(ADV_USPCS(BitWidth, T)() - ADV_USPCS(BitWidth, U)())> SHIFT = ADV_USPCS(BitWidth, T)() - ADV_USPCS(BitWidth, U)();
		#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		constexpr Builtin::Auto<decltype(ADV_USPCS(BitWidth, U)() >> Builtin::i32(1))> HALF_BITS = ADV_USPCS(BitWidth, U)() >> Builtin::i32(1);
		#line 49 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		constexpr Builtin::Auto<decltype(ADV_USPCS(BitWidth, U)() >> Builtin::i32(2))> QUARTER_BITS = ADV_USPCS(BitWidth, U)() >> Builtin::i32(2);
		#line 50 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		constexpr Builtin::Auto<decltype(U{(Builtin::u64(1ULL) << HALF_BITS) - Builtin::i32(1)})> LOWER_HALF_BITS = U{(Builtin::u64(1ULL) << HALF_BITS) - Builtin::i32(1)};
		#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		constexpr Builtin::Auto<decltype(U{(Builtin::u64(1ULL) << QUARTER_BITS) - Builtin::i32(1)})> LOWER_QUARTER_BITS = U{(Builtin::u64(1ULL) << QUARTER_BITS) - Builtin::i32(1)};
		#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const Builtin::Auto<decltype(U{num >> (Builtin::Cast<true, Builtin::i32>(SHIFT))})> n = U{num >> (Builtin::Cast<true, Builtin::i32>(SHIFT))}; 
		#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const Builtin::Auto<decltype(n & LOWER_HALF_BITS)> low = n & LOWER_HALF_BITS; 
		#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const Builtin::Auto<decltype((U{rem} << QUARTER_BITS) | (low >> QUARTER_BITS))> numerator = (U{rem} << QUARTER_BITS) | (low >> QUARTER_BITS); 
		#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const Builtin::Auto<decltype(U{root} << Builtin::i32(1))> denominator = U{root} << Builtin::i32(1); 
		#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const auto& [q, u] = ADV_UFCS(_operator_div_mod)(numerator, denominator);
		#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		U r{}; 
		#line 60 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		Builtin::Auto<decltype(U{root << QUARTER_BITS} + q)> s = U{root << QUARTER_BITS} + q; 
		#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const auto& [sub, overflow] = ADV_UFCS(_operator_sub_mod_qst)(((u << QUARTER_BITS) | (low & LOWER_QUARTER_BITS)), (q * q));
		#line 62 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		r = sub;
		#line 63 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		if (overflow) {
			#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
			ADV_UFCS(_operator_add_mod_eq)(r, (s * Builtin::i32(2) - Builtin::i32(1)));
			#line 65 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
			s--;
		}
		#line 68 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		return std::make_tuple(s, r);
	}
#line 70 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<$ImplementsInterface_IFixedWidthInteger T> inline constexpr auto Math::_isqrtLastStage(T num, auto root, auto rem)  -> const T
	{
		#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_ASSERT((root != Builtin::i32(0)), "root!=0");
		#line 74 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		constexpr Builtin::Auto<decltype(ADV_USPCS(BitWidth, T)() >> Builtin::i32(1))> HALF_BITS = ADV_USPCS(BitWidth, T)() >> Builtin::i32(1);
		#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		constexpr Builtin::Auto<decltype(ADV_USPCS(BitWidth, T)() >> Builtin::i32(2))> QUARTER_BITS = ADV_USPCS(BitWidth, T)() >> Builtin::i32(2);
		#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		constexpr Builtin::Auto<decltype(T{(Builtin::u128(1ULL) << HALF_BITS) - Builtin::i32(1)})> LOWER_HALF_BITS = T{(Builtin::u128(1ULL) << HALF_BITS) - Builtin::i32(1)};
		#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const Builtin::Auto<decltype(num & LOWER_HALF_BITS)> low = num & LOWER_HALF_BITS; 
		#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const Builtin::Auto<decltype((T{rem} << QUARTER_BITS) | (low >> QUARTER_BITS))> numerator = (T{rem} << QUARTER_BITS) | (low >> QUARTER_BITS); 
		#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const Builtin::Auto<decltype(T{root} << Builtin::i32(1))> denominator = T{root} << Builtin::i32(1); 
		#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const Builtin::Auto<decltype(ADV_UFCS(_operator_bsl)(numerator, denominator))> q = ADV_UFCS(_operator_bsl)(numerator, denominator); 
		#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		Builtin::Auto<decltype(T{root << QUARTER_BITS} + q)> result = T{root << QUARTER_BITS} + q; 
		#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const auto& [squared, overflow] = ADV_UFCS(_operator_mul_mod_qst)(result, result);
		#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		if (overflow || (squared <=> num) > 0) {
			#line 84 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
			--result;
		}
		#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		return result;
	}
#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	inline constexpr auto Math::Isqrt8(Builtin::u8 num) noexcept -> const Builtin::u8
	{
		#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(std::get<0>(ADV_UFCS(_operator_subscript)(_isqrtLookupTable.$ref(), Builtin::Cast<true, Builtin::i32>(num)))); 
	}
#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	inline constexpr auto Math::Isqrt16(Builtin::u16 num)  -> const Builtin::u16
	{
		#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		if ((num <=> ADV_USPCS(MaxValue, Builtin::u8)()) <= 0) {
			#line 95 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
			return Isqrt8(Builtin::Cast<true, Builtin::u8>(num));
		}
		#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const Builtin::Auto<decltype(ADV_UPCS(LeadingZeroCount)(num.$ref()) & EVEN_MAKING_BITMASK)> normShift = ADV_UPCS(LeadingZeroCount)(num.$ref()) & EVEN_MAKING_BITMASK; 
		#line 99 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		num <<= normShift;
		#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const auto& [s, r] = _isqrtFirstStage(num);
		#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const Builtin::Auto<decltype(_isqrtLastStage(num, s, r))> result = _isqrtLastStage(num, s, r); 
		#line 104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const Builtin::Auto<decltype(normShift >> Builtin::i32(1))> denormShift = normShift >> Builtin::i32(1); 
		#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		return result >> denormShift;
	}
#line 108 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	inline constexpr auto Math::Isqrt32(Builtin::u32 num)  -> const Builtin::u32
	{
		#line 110 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		if ((num <=> ADV_USPCS(MaxValue, Builtin::u16)()) <= 0) {
			#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
			return Isqrt16(Builtin::Cast<true, Builtin::u16>(num));
		}
		#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const Builtin::Auto<decltype(ADV_UPCS(LeadingZeroCount)(num.$ref()) & EVEN_MAKING_BITMASK)> normShift = ADV_UPCS(LeadingZeroCount)(num.$ref()) & EVEN_MAKING_BITMASK; 
		#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		num <<= normShift;
		#line 117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const auto& [s1, r1] = _isqrtFirstStage(num);
		#line 118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const auto& [s2, r2] = _isqrtMiddleStage<Builtin::u32, Builtin::u16>(num, s1, r1);
		#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const Builtin::Auto<decltype(_isqrtLastStage(num, s2, r2))> result = _isqrtLastStage(num, s2, r2); 
		#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const Builtin::Auto<decltype(normShift >> Builtin::i32(1))> denormShift = normShift >> Builtin::i32(1); 
		#line 122 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		return result >> denormShift;
	}
#line 125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	inline constexpr auto Math::Isqrt64(Builtin::u64 num)  -> const Builtin::u64
	{
		#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		if ((num <=> ADV_USPCS(MaxValue, Builtin::u32)()) <= 0) {
			#line 128 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
			return Isqrt32(Builtin::Cast<true, Builtin::u32>(num));
		}
		#line 131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const Builtin::Auto<decltype(ADV_UPCS(LeadingZeroCount)(num.$ref()) & EVEN_MAKING_BITMASK)> normShift = ADV_UPCS(LeadingZeroCount)(num.$ref()) & EVEN_MAKING_BITMASK; 
		#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		num <<= normShift;
		#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const auto& [s1, r1] = _isqrtFirstStage(num);
		#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const auto& [s2, r2] = _isqrtMiddleStage<Builtin::u64, Builtin::u16>(num, s1, r1);
		#line 136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const auto& [s3, r3] = _isqrtMiddleStage<Builtin::u64, Builtin::u32>(num, s2, r2);
		#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const Builtin::Auto<decltype(_isqrtLastStage(num, s3, r3))> result = _isqrtLastStage(num, s3, r3); 
		#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const Builtin::Auto<decltype(normShift >> Builtin::i32(1))> denormShift = normShift >> Builtin::i32(1); 
		#line 140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		return result >> denormShift;
	}
#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	inline constexpr auto Math::Isqrt128(Builtin::u128 num)  -> const Builtin::u128
	{
		#line 145 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		if ((num <=> ADV_USPCS(MaxValue, Builtin::u64)()) <= 0) {
			#line 146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
			return Isqrt64(Builtin::Cast<true, Builtin::u64>(num));
		}
		#line 149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const Builtin::Auto<decltype(ADV_UPCS(LeadingZeroCount)(num.$ref()) & EVEN_MAKING_BITMASK)> normShift = ADV_UPCS(LeadingZeroCount)(num.$ref()) & EVEN_MAKING_BITMASK; 
		#line 150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		num <<= Builtin::Cast<true, Builtin::i32>(normShift);
		#line 152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const auto& [s1, r1] = _isqrtFirstStage(num);
		#line 153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const auto& [s2, r2] = _isqrtMiddleStage<Builtin::u128, Builtin::u16>(num, s1, r1);
		#line 154 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const auto& [s3, r3] = _isqrtMiddleStage<Builtin::u128, Builtin::u32>(num, s2, r2);
		#line 155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const auto& [s4, r4] = _isqrtMiddleStage<Builtin::u128, Builtin::u64>(num, s3, r3);
		#line 156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const Builtin::Auto<decltype(_isqrtLastStage(num, s4, r4))> result = _isqrtLastStage(num, s4, r4); 
		#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		const Builtin::Auto<decltype(normShift >> Builtin::i32(1))> denormShift = normShift >> Builtin::i32(1); 
		#line 159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		return result >> (Builtin::Cast<true, Builtin::i32>(denormShift));
	}
#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T, class U> inline constexpr auto Math::Add(T lhs, U rhs)  -> const std::remove_cvref_t<T>
	{
		#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(lhs + rhs); 
	}
#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T, class U> inline constexpr auto Math::WrappingAdd(T lhs, U rhs)  -> const std::remove_cvref_t<T>
	{
		#line 163 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_mod)(lhs, rhs)); 
	}
#line 164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T, class U> inline constexpr auto Math::SaturatingAdd(T lhs, U rhs)  -> const std::remove_cvref_t<T>
	{
		#line 164 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_or)(lhs, rhs)); 
	}
#line 165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T, class U> inline constexpr auto Math::StrictAdd(T lhs, U rhs)  -> const std::remove_cvref_t<T>
	{
		#line 165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_ne)(lhs, rhs)); 
	}
#line 166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T, class U> inline constexpr auto Math::CheckedAdd(T lhs, U rhs)  -> const Builtin::Nullable<std::remove_cvref_t<T>>
	{
		#line 166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_qst)(lhs, rhs)); 
	}
#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T, class U> inline constexpr auto Math::OverflowingAdd(T lhs, U rhs)  -> const std::tuple<std::remove_cvref_t<T>, bool>
	{
		#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_add_mod_qst)(lhs, rhs)); 
	}
#line 168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T, class U> inline constexpr auto Math::Subtract(T lhs, U rhs)  -> const std::remove_cvref_t<T>
	{
		#line 168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(lhs - rhs); 
	}
#line 169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T, class U> inline constexpr auto Math::WrappingSubtract(T lhs, U rhs)  -> const std::remove_cvref_t<T>
	{
		#line 169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_mod)(lhs, rhs)); 
	}
#line 170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T, class U> inline constexpr auto Math::SaturatingSubtract(T lhs, U rhs)  -> const std::remove_cvref_t<T>
	{
		#line 170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_or)(lhs, rhs)); 
	}
#line 171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T, class U> inline constexpr auto Math::StrictSubtract(T lhs, U rhs)  -> const std::remove_cvref_t<T>
	{
		#line 171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_ne)(lhs, rhs)); 
	}
#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T, class U> inline constexpr auto Math::CheckedSubtract(T lhs, U rhs)  -> const Builtin::Nullable<std::remove_cvref_t<T>>
	{
		#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_qst)(lhs, rhs)); 
	}
#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T, class U> inline constexpr auto Math::OverflowingSubtract(T lhs, U rhs)  -> const std::tuple<std::remove_cvref_t<T>, bool>
	{
		#line 173 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_sub_mod_qst)(lhs, rhs)); 
	}
#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T, class U> inline constexpr auto Math::Multiply(T lhs, U rhs)  -> const std::remove_cvref_t<T>
	{
		#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(lhs * rhs); 
	}
#line 175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T, class U> inline constexpr auto Math::WrappingMultiply(T lhs, U rhs)  -> const std::remove_cvref_t<T>
	{
		#line 175 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mod)(lhs, rhs)); 
	}
#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T, class U> inline constexpr auto Math::SaturatingMultiply(T lhs, U rhs)  -> const std::remove_cvref_t<T>
	{
		#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_or)(lhs, rhs)); 
	}
#line 177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T, class U> inline constexpr auto Math::StrictMultiply(T lhs, U rhs)  -> const std::remove_cvref_t<T>
	{
		#line 177 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_ne)(lhs, rhs)); 
	}
#line 178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T, class U> inline constexpr auto Math::CheckedMultiply(T lhs, U rhs)  -> const Builtin::Nullable<std::remove_cvref_t<T>>
	{
		#line 178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_qst)(lhs, rhs)); 
	}
#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T, class U> inline constexpr auto Math::OverflowingMultiply(T lhs, U rhs)  -> const std::tuple<std::remove_cvref_t<T>, bool>
	{
		#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mod_qst)(lhs, rhs)); 
	}
#line 180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T, class U> inline constexpr auto Math::IPow(T lhs, U rhs)  -> auto
	{
		#line 180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_xor_xor)(lhs, rhs)); 
	}
#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T, class U> inline constexpr auto Math::WrappingIPow(T lhs, U rhs)  -> auto
	{
		#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_xor_xor_mod)(lhs, rhs)); 
	}
#line 182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T, class U> inline constexpr auto Math::SaturatingIPow(T lhs, U rhs)  -> auto
	{
		#line 182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_xor_xor_or)(lhs, rhs)); 
	}
#line 183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T, class U> inline constexpr auto Math::StrictIPow(T lhs, U rhs)  -> auto
	{
		#line 183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_xor_xor_ne)(lhs, rhs)); 
	}
#line 184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T, class U> inline constexpr auto Math::CheckedIPow(T lhs, U rhs)  -> auto
	{
		#line 184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_xor_xor_qst)(lhs, rhs)); 
	}
#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T, class U> inline constexpr auto Math::OverflowingIPow(T lhs, U rhs)  -> auto
	{
		#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_xor_xor_mod_qst)(lhs, rhs)); 
	}
#line 186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T, class U> inline constexpr auto Math::Pow(T lhs, U rhs)  -> auto
	{
		#line 186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mul_mul)(lhs, rhs)); 
	}
#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T, class U> inline constexpr auto Math::Divide(T lhs, U rhs)  -> auto
	{
		#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(lhs / rhs); 
	}
#line 188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T, class U> inline constexpr auto Math::IntegerDivide(T lhs, U rhs)  -> auto
	{
		#line 188 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl)(lhs, rhs)); 
	}
#line 189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T, class U> inline constexpr auto Math::WrappingDivide(T lhs, U rhs)  -> auto
	{
		#line 189 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl_mod)(lhs, rhs)); 
	}
#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T, class U> inline constexpr auto Math::SaturatingDivide(T lhs, U rhs)  -> auto
	{
		#line 190 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl_or)(lhs, rhs)); 
	}
#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T, class U> inline constexpr auto Math::StrictDivide(T lhs, U rhs)  -> auto
	{
		#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl_ne)(lhs, rhs)); 
	}
#line 192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T, class U> inline constexpr auto Math::CheckedDivide(T lhs, U rhs)  -> auto
	{
		#line 192 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl_qst)(lhs, rhs)); 
	}
#line 193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T, class U> inline constexpr auto Math::OverflowingDivide(T lhs, U rhs)  -> auto
	{
		#line 193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_bsl_mod_qst)(lhs, rhs)); 
	}
#line 194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T, class U> inline constexpr auto Math::Remainder(T lhs, U rhs)  -> auto
	{
		#line 194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(lhs % rhs); 
	}
#line 195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T, class U> inline constexpr auto Math::WrappingRemainder(T lhs, U rhs)  -> auto
	{
		#line 195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mod_mod)(lhs, rhs)); 
	}
#line 196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T, class U> inline constexpr auto Math::SaturatingRemainder(T lhs, U rhs)  -> auto
	{
		#line 196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mod_or)(lhs, rhs)); 
	}
#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T, class U> inline constexpr auto Math::StrictRemainder(T lhs, U rhs)  -> auto
	{
		#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mod_ne)(lhs, rhs)); 
	}
#line 198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T, class U> inline constexpr auto Math::CheckedRemainder(T lhs, U rhs)  -> auto
	{
		#line 198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mod_qst)(lhs, rhs)); 
	}
#line 199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T, class U> inline constexpr auto Math::OverflowingRemainder(T lhs, U rhs)  -> auto
	{
		#line 199 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mod_mod_qst)(lhs, rhs)); 
	}
#line 200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T, class U> inline constexpr auto Math::RoundDiv(T lhs, U rhs)  -> auto
	{
		#line 200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_div_not)(lhs, rhs)); 
	}
#line 201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T, class U> inline constexpr auto Math::CeilDiv(T lhs, U rhs)  -> auto
	{
		#line 201 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_div_gt)(lhs, rhs)); 
	}
#line 202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T, class U> inline constexpr auto Math::FloorDiv(T lhs, U rhs)  -> auto
	{
		#line 202 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_div_lt)(lhs, rhs)); 
	}
#line 203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T, class U> inline constexpr auto Math::FloorMod(T lhs, U rhs)  -> auto
	{
		#line 203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_mod_lt)(lhs, rhs)); 
	}
#line 204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T, class U> inline constexpr auto Math::DivRem(T lhs, U rhs)  -> auto
	{
		#line 204 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(_operator_div_mod)(lhs, rhs)); 
	}
#line 205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T> inline constexpr auto Math::Abs(T lhs)  -> auto
	{
		#line 205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Abs)(lhs.$ref())); 
	}
#line 206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T> inline constexpr auto Math::WrappingAbs(T lhs)  -> auto
	{
		#line 206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(WrappingAbs)(lhs.$ref())); 
	}
#line 207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T> inline constexpr auto Math::SaturatingAbs(T lhs)  -> auto
	{
		#line 207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(SaturatingAbs)(lhs.$ref())); 
	}
#line 208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T> inline constexpr auto Math::StrictAbs(T lhs)  -> auto
	{
		#line 208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(StrictAbs)(lhs.$ref())); 
	}
#line 209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T> inline constexpr auto Math::CheckedAbs(T lhs)  -> auto
	{
		#line 209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(CheckedAbs)(lhs.$ref())); 
	}
#line 210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T> inline constexpr auto Math::OverflowingAbs(T lhs)  -> auto
	{
		#line 210 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(OverflowingAbs)(lhs.$ref())); 
	}
#line 211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T, class U, class V> inline constexpr auto Math::Clamp(T lhs, U min, V max)  -> const std::remove_cvref_t<T>
	{
		#line 211 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(Max(Min(lhs, max), min)); 
	}
#line 212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T, class U, class V> inline constexpr auto Math::Lerp(T lhs, U rhs, V scale)  -> const std::remove_cvref_t<T>
	{
		#line 212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Lerp)(lhs.$ref(), rhs, scale)); 
	}
#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T> inline constexpr auto Math::Sign(T lhs)  -> const std::remove_cvref_t<T>
	{
		#line 213 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Sign)(lhs.$ref())); 
	}
#line 214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T, class U> inline constexpr auto Math::CopySign(T lhs, U rhs)  -> const std::remove_cvref_t<T>
	{
		#line 214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(CopySign)(lhs.$ref(), rhs)); 
	}
#line 215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T> inline constexpr auto Math::IsPow2(T lhs)  -> const bool
	{
		#line 215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(IsPow2)(lhs.$ref())); 
	}
#line 216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T> inline constexpr auto Math::NextPow2(T lhs)  -> const std::remove_cvref_t<T>
	{
		#line 216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(NextPow2)(lhs.$ref())); 
	}
#line 217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T> inline constexpr auto Math::PrevPow2(T lhs)  -> const std::remove_cvref_t<T>
	{
		#line 217 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(PrevPow2)(lhs.$ref())); 
	}
#line 218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T, class U> inline constexpr auto Math::IsMultipleOf(T lhs, U rhs)  -> const bool
	{
		#line 218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(IsMultipleOf)(lhs.$ref(), rhs)); 
	}
#line 219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T, class U> inline constexpr auto Math::NextMultipleOf(T lhs, U rhs)  -> const std::remove_cvref_t<T>
	{
		#line 219 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(NextMultipleOf)(lhs.$ref(), rhs)); 
	}
#line 220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T, class U> inline constexpr auto Math::Midpoint(T lhs, U rhs)  -> const std::remove_cvref_t<T>
	{
		#line 220 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Midpoint)(lhs.$ref(), rhs)); 
	}
#line 221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T> inline constexpr auto Math::Round(T lhs)  -> const std::remove_cvref_t<T>
	{
		#line 221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Round)(lhs.$ref())); 
	}
#line 222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T> inline constexpr auto Math::RoundTiesEven(T lhs)  -> const std::remove_cvref_t<T>
	{
		#line 222 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(RoundTiesEven)(lhs.$ref())); 
	}
#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T> inline constexpr auto Math::Truncate(T lhs)  -> const std::remove_cvref_t<T>
	{
		#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Truncate)(lhs.$ref())); 
	}
#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T> inline constexpr auto Math::Ceil(T lhs)  -> const std::remove_cvref_t<T>
	{
		#line 224 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Ceil)(lhs.$ref())); 
	}
#line 225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T> inline constexpr auto Math::Floor(T lhs)  -> const std::remove_cvref_t<T>
	{
		#line 225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Floor)(lhs.$ref())); 
	}
#line 226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T> inline constexpr auto Math::Log2(T lhs)  -> const std::remove_cvref_t<T>
	{
		#line 226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Log2)(lhs.$ref())); 
	}
#line 227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T> inline constexpr auto Math::Log10(T lhs)  -> const std::remove_cvref_t<T>
	{
		#line 227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Log10)(lhs.$ref())); 
	}
#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T> inline constexpr auto Math::Ln(T lhs)  -> const std::remove_cvref_t<T>
	{
		#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Ln)(lhs.$ref())); 
	}
#line 229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T> inline constexpr auto Math::Ln1P(T lhs)  -> const std::remove_cvref_t<T>
	{
		#line 229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Ln1P)(lhs.$ref())); 
	}
#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T, class V> inline constexpr auto Math::Log(T lhs, V base)  -> const std::remove_cvref_t<T>
	{
		#line 230 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Log)(lhs.$ref(), base)); 
	}
#line 231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T> inline constexpr auto Math::Exp2(T lhs)  -> const std::remove_cvref_t<T>
	{
		#line 231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Exp2)(lhs.$ref())); 
	}
#line 232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T> inline constexpr auto Math::Exp10(T lhs)  -> const std::remove_cvref_t<T>
	{
		#line 232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Exp10)(lhs.$ref())); 
	}
#line 233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T> inline constexpr auto Math::Exp(T lhs)  -> const std::remove_cvref_t<T>
	{
		#line 233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Exp)(lhs.$ref())); 
	}
#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T> inline constexpr auto Math::ExpM1(T lhs)  -> const std::remove_cvref_t<T>
	{
		#line 234 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(ExpM1)(lhs.$ref())); 
	}
#line 235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T> inline constexpr auto Math::Sqrt(T lhs)  -> const std::remove_cvref_t<T>
	{
		#line 235 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Sqrt)(lhs.$ref())); 
	}
#line 236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T> inline constexpr auto Math::Cbrt(T lhs)  -> const std::remove_cvref_t<T>
	{
		#line 236 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Cbrt)(lhs.$ref())); 
	}
#line 237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T, class U> inline constexpr auto Math::Hypot(T lhs, U rhs)  -> const std::remove_cvref_t<T>
	{
		#line 237 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Hypot)(lhs.$ref())); 
	}
#line 238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T, class U> inline constexpr auto Math::Root(T lhs, U exp)  -> const std::remove_cvref_t<T>
	{
		#line 238 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Root)(lhs.$ref(), exp)); 
	}
#line 239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T> inline constexpr auto Math::Sin(T lhs)  -> const std::remove_cvref_t<T>
	{
		#line 239 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Sin)(lhs.$ref())); 
	}
#line 240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T> inline constexpr auto Math::Cos(T lhs)  -> const std::remove_cvref_t<T>
	{
		#line 240 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Cos)(lhs.$ref())); 
	}
#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T> inline constexpr auto Math::Tan(T lhs)  -> const std::remove_cvref_t<T>
	{
		#line 241 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Tan)(lhs.$ref())); 
	}
#line 242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T> inline constexpr auto Math::SinPi(T lhs)  -> const std::remove_cvref_t<T>
	{
		#line 242 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(SinPi)(lhs.$ref())); 
	}
#line 243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T> inline constexpr auto Math::CosPi(T lhs)  -> const std::remove_cvref_t<T>
	{
		#line 243 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(CosPi)(lhs.$ref())); 
	}
#line 244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T> inline constexpr auto Math::TanPi(T lhs)  -> const std::remove_cvref_t<T>
	{
		#line 244 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(TanPi)(lhs.$ref())); 
	}
#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T> inline constexpr auto Math::Cot(T lhs)  -> const std::remove_cvref_t<T>
	{
		#line 245 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Cot)(lhs.$ref())); 
	}
#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T> inline constexpr auto Math::Sec(T lhs)  -> const std::remove_cvref_t<T>
	{
		#line 246 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Sec)(lhs.$ref())); 
	}
#line 247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T> inline constexpr auto Math::Csc(T lhs)  -> const std::remove_cvref_t<T>
	{
		#line 247 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Csc)(lhs.$ref())); 
	}
#line 248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T> inline constexpr auto Math::Asin(T lhs)  -> const std::remove_cvref_t<T>
	{
		#line 248 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Asin)(lhs.$ref())); 
	}
#line 249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T> inline constexpr auto Math::Acos(T lhs)  -> const std::remove_cvref_t<T>
	{
		#line 249 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Acos)(lhs.$ref())); 
	}
#line 250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T> inline constexpr auto Math::Atan(T lhs)  -> const std::remove_cvref_t<T>
	{
		#line 250 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Atan)(lhs.$ref())); 
	}
#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T, class U> inline constexpr auto Math::Atan2(T lhs, U rhs)  -> const std::remove_cvref_t<T>
	{
		#line 251 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UFCS(Atan2)(lhs.$ref(), rhs)); 
	}
#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T> inline constexpr auto Math::Acot(T lhs)  -> const std::remove_cvref_t<T>
	{
		#line 252 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Acot)(lhs.$ref())); 
	}
#line 253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T> inline constexpr auto Math::Asec(T lhs)  -> const std::remove_cvref_t<T>
	{
		#line 253 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Asec)(lhs.$ref())); 
	}
#line 254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T> inline constexpr auto Math::Acsc(T lhs)  -> const std::remove_cvref_t<T>
	{
		#line 254 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Acsc)(lhs.$ref())); 
	}
#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T> inline constexpr auto Math::Sinh(T lhs)  -> const std::remove_cvref_t<T>
	{
		#line 255 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Sinh)(lhs.$ref())); 
	}
#line 256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T> inline constexpr auto Math::Cosh(T lhs)  -> const std::remove_cvref_t<T>
	{
		#line 256 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Cosh)(lhs.$ref())); 
	}
#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T> inline constexpr auto Math::Tanh(T lhs)  -> const std::remove_cvref_t<T>
	{
		#line 257 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Tanh)(lhs.$ref())); 
	}
#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T> inline constexpr auto Math::Coth(T lhs)  -> const std::remove_cvref_t<T>
	{
		#line 258 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Coth)(lhs.$ref())); 
	}
#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T> inline constexpr auto Math::Sech(T lhs)  -> const std::remove_cvref_t<T>
	{
		#line 259 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Sech)(lhs.$ref())); 
	}
#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T> inline constexpr auto Math::Csch(T lhs)  -> const std::remove_cvref_t<T>
	{
		#line 260 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Csch)(lhs.$ref())); 
	}
#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T> inline constexpr auto Math::Asinh(T lhs)  -> const std::remove_cvref_t<T>
	{
		#line 261 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Asinh)(lhs.$ref())); 
	}
#line 262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T> inline constexpr auto Math::Acosh(T lhs)  -> const std::remove_cvref_t<T>
	{
		#line 262 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Acosh)(lhs.$ref())); 
	}
#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T> inline constexpr auto Math::Atanh(T lhs)  -> const std::remove_cvref_t<T>
	{
		#line 263 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Atanh)(lhs.$ref())); 
	}
#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T> inline constexpr auto Math::Acoth(T lhs)  -> const std::remove_cvref_t<T>
	{
		#line 264 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Acoth)(lhs.$ref())); 
	}
#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T> inline constexpr auto Math::Asech(T lhs)  -> const std::remove_cvref_t<T>
	{
		#line 265 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Asech)(lhs.$ref())); 
	}
#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T> inline constexpr auto Math::Acsch(T lhs)  -> const std::remove_cvref_t<T>
	{
		#line 266 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(Acsch)(lhs.$ref())); 
	}
#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T, class U> inline constexpr auto Math::Max(T lhs, U rhs)  -> const std::remove_cvref_t<T>
	{
		#line 267 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY((lhs <=> rhs) > 0 ? lhs : T{rhs}); 
	}
#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	template<class T, class U> inline constexpr auto Math::Min(T lhs, U rhs)  -> const std::remove_cvref_t<T>
	{
		#line 268 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
		ADV_EXPRESSION_BODY((lhs <=> rhs) < 0 ? lhs : T{rhs}); 
	}
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Math.ast"
	

}