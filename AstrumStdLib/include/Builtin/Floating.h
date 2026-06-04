#pragma once
#include <charconv>

#include "BuiltinInt128.h"

namespace Builtin {
	template <class T>
	class __Class_Basic;

	template <class T>
	struct alignas(T) Float : public Struct {
		static_assert(std::is_floating_point<T>::value, "T must be a floating point type");
		template <class U>
		friend struct Float;
		using __self       = Float<T>;
		using __class      = __Class_Basic<Float<T>>;
		using __underlying = T;
		using BitsType =
		    std::conditional_t<sizeof(T) == 4, u32, std::conditional_t<sizeof(T) == 8, u64, u128>>;
		using DivisibleArithmeticType = Float<T>;

		constexpr __self& __ref() noexcept { return *this; }
		constexpr const __self& __ref() const noexcept { return *this; }

		constexpr Float() noexcept = default;
		constexpr Float(float f) noexcept : value(f) {}
		constexpr explicit(sizeof(T) < sizeof(double)) Float(double f) noexcept : value(f) {}
		constexpr explicit(sizeof(T) < sizeof(long double)) Float(long double f) noexcept
		    : value(f) {}
		template <class U>
		constexpr explicit(sizeof(T) < sizeof(U)) Float(Float<U> f) noexcept : value(f) {}

		constexpr explicit Float(bool b) noexcept : value(b ? (T) 1.0 : (T) 0.0) {}
		template <class U>
		constexpr explicit(sizeof(T) == 2 && sizeof(T) < sizeof(U)) Float(U v) noexcept
		    requires(std::is_integral_v<U>)
		    : value(v) {}
		constexpr Float(i8 v) noexcept : value(v) {}
		constexpr Float(i16 v) noexcept : value(v) {}
		constexpr explicit(sizeof(T) == 2) Float(i32 v) noexcept : value(v) {}
		constexpr explicit(sizeof(T) == 2) Float(i64 v) noexcept : value(v) {}
		constexpr explicit(sizeof(T) == 2) Float(i128 v) noexcept : value(v) {}
		constexpr Float(u8 v) noexcept : value(v) {}
		constexpr Float(u16 v) noexcept : value(v) {}
		constexpr explicit(sizeof(T) == 2) Float(u32 v) noexcept : value(v) {}
		constexpr explicit(sizeof(T) == 2) Float(u64 v) noexcept : value(v) {}
		constexpr explicit(sizeof(T) == 2) Float(u128 v) noexcept : value(v) {}

		constexpr Float& operator=(float f) noexcept requires(sizeof(T) >= sizeof(float)) {
			value = f;
			return *this;
		}

		constexpr Float& operator=(double f) noexcept requires(sizeof(T) >= sizeof(double)) {
			value = f;
			return *this;
		}

		constexpr Float& operator=(long double f) noexcept
		    requires(sizeof(T) >= sizeof(long double)) {
			value = f;
			return *this;
		}

		template <class U>
		constexpr Float& operator=(Float<U> f) noexcept requires(sizeof(T) >= sizeof(U)) {
			value = f;
			return *this;
		}

		template <class U>
		constexpr Float& operator=(U v) noexcept
		    requires(std::is_integral_v<U> && (sizeof(T) > 2 || sizeof(T) >= sizeof(U))) {
			value = v;
			return *this;
		}

		constexpr Float& operator=(i8 v) noexcept {
			value = v;
			return *this;
		}

		constexpr Float& operator=(i16 v) noexcept {
			value = v;
			return *this;
		}

		constexpr Float& operator=(i32 v) noexcept requires(sizeof(T) > 2) {
			value = v;
			return *this;
		}

		constexpr Float& operator=(i64 v) noexcept requires(sizeof(T) > 2) {
			value = v;
			return *this;
		}

		constexpr Float& operator=(i128 v) noexcept requires(sizeof(T) > 2) {
			value = v;
			return *this;
		}

		constexpr Float& operator=(u8 v) noexcept {
			value = v;
			return *this;
		}

		constexpr Float& operator=(u16 v) noexcept {
			value = v;
			return *this;
		}

		constexpr Float& operator=(u32 v) noexcept requires(sizeof(T) > 2) {
			value = v;
			return *this;
		}

		constexpr Float& operator=(u64 v) noexcept requires(sizeof(T) > 2) {
			value = v;
			return *this;
		}

		constexpr Float& operator=(u128 v) noexcept requires(sizeof(T) > 2) {
			value = v;
			return *this;
		}

		constexpr explicit(sizeof(T) > sizeof(float)) operator float() const noexcept {
			return value;
		}

		constexpr explicit(sizeof(T) > sizeof(double)) operator double() const noexcept {
			return value;
		}

		constexpr explicit(sizeof(T) > sizeof(long double)) operator long double() const noexcept {
			return value;
		}

		constexpr explicit operator i8() const {
#ifdef Builtin_OVERFLOW_CHECKS
			if (value < INT8_MIN || value > INT8_MAX || std::isnan(value))
				throw IntegerOverflowException();
#endif
			return static_cast<int8_t>(value);
		}
		constexpr explicit operator i16() const {
#ifdef Builtin_OVERFLOW_CHECKS
			if (value < INT16_MIN || value > INT16_MAX || std::isnan(value))
				throw IntegerOverflowException();
#endif
			return static_cast<int16_t>(value);
		}
		constexpr explicit operator i32() const {
#ifdef Builtin_OVERFLOW_CHECKS
			if (value < INT32_MIN || value > INT32_MAX || std::isnan(value))
				throw IntegerOverflowException();
#endif
			return static_cast<int32_t>(value);
		}
		constexpr explicit operator i64() const {
#ifdef Builtin_OVERFLOW_CHECKS
			if (value < INT64_MIN || value > INT64_MAX || std::isnan(value))
				throw IntegerOverflowException();
#endif
			return static_cast<int64_t>(value);
		}
		constexpr explicit operator u8() const {
#ifdef Builtin_OVERFLOW_CHECKS
			if (value < 0 || value > UINT8_MAX || std::isnan(value))
				throw IntegerOverflowException();
#endif
			return static_cast<uint8_t>(value);
		}
		constexpr explicit operator u16() const {
#ifdef Builtin_OVERFLOW_CHECKS
			if (value < 0 || value > UINT16_MAX || std::isnan(value))
				throw IntegerOverflowException();
#endif
			return static_cast<uint16_t>(value);
		}
		constexpr explicit operator u32() const {
#ifdef Builtin_OVERFLOW_CHECKS
			if (value < 0 || value > UINT32_MAX || std::isnan(value))
				throw IntegerOverflowException();
#endif
			return static_cast<uint32_t>(value);
		}
		constexpr explicit operator u64() const {
#ifdef Builtin_OVERFLOW_CHECKS
			if (value < 0 || value > UINT64_MAX || std::isnan(value))
				throw IntegerOverflowException();
#endif
			return static_cast<uint64_t>(value);
		}
		constexpr explicit operator u128() const {
			if constexpr (sizeof(T) < 4) {
				return static_cast<u128>(float(*this));
			}
#ifdef Builtin_OVERFLOW_CHECKS
			if (value < 0 || value > 340282366920938463463374607431768211455.0 || std::isnan(value))
				throw IntegerOverflowException();
#endif
			constexpr T two_32 {static_cast<T>(1ull << 32)};
			constexpr T two_64 {two_32 * two_32};

			if (!(value >= T {0})) {
				return 0u;
			}

			const T scaled = value / two_64;
			if (scaled >= two_64) {
				return UINT128_MAX;
			}

			std::uint64_t h {static_cast<std::uint64_t>(scaled)};
			const T remainder {value - static_cast<T>(h) * two_64};
			std::uint64_t l {static_cast<std::uint64_t>(remainder)};

			return u128(h, l);
		}
		constexpr explicit operator i128() const {
			if constexpr (sizeof(T) < 4) {
				return static_cast<i128>(float(*this));
			}

#ifdef Builtin_OVERFLOW_CHECKS
			if (value < -170141183460469231731687303715884105728.0 ||
			    value > 170141183460469231731687303715884105727.0 || std::isnan(value))
				throw IntegerOverflowException();
#endif
			constexpr T two_32 {static_cast<T>(1ull << 32)};
			constexpr T two_64 {two_32 * two_32};
			constexpr T two_127 {two_64 * static_cast<T>(1ull << 63)};

			if (!(value >= T {0}) && !(value <= T {0})) {
				return 0;
			}

			if (value >= two_127) {
				return INT128_MAX;
			}

			if (value <= -two_127) {
				return INT128_MIN;
			}

			const bool negative {value < T {0}};
			const T abs_f {negative ? -value : value};

			std::uint64_t h {static_cast<std::uint64_t>(abs_f / two_64)};
			const T remainder {abs_f - static_cast<T>(h) * two_64};
			std::uint64_t l {static_cast<std::uint64_t>(remainder)};

			if (negative) {
				// Two's complement negation of (h, l): new_l = -l (with wraparound),
				// new_h = ~h if a borrow occurred (l != 0), else ~h + 1.
				const bool low_was_zero {l == 0};
				l = 0ull - l;
				h = ~h + (low_was_zero ? 1ull : 0ull);
			}

			return i128(static_cast<std::int64_t>(h), l);
		}

		template <class U>
		constexpr auto operator+(Float<U> rhs) const noexcept {
			return Float<std::conditional_t<sizeof(T) <= sizeof(U), U, T>>(value + rhs.value);
		}

		template <class U>
		constexpr auto operator+(U rhs) const noexcept requires(std::is_floating_point_v<U>) {
			return Float<std::conditional_t<sizeof(T) <= sizeof(U), U, T>>(value + rhs);
		}

		template <class U>
		constexpr Float<T> operator+(U rhs) const noexcept requires(std::is_integral_v<U>) {
			return value + (T) rhs;
		}

		constexpr Float<T> operator+(i8 rhs) const noexcept { return value + (T) rhs; }

		constexpr Float<T> operator+(i16 rhs) const noexcept { return value + (T) rhs; }

		constexpr Float<T> operator+(i32 rhs) const noexcept { return value + (T) rhs; }

		constexpr Float<T> operator+(i64 rhs) const noexcept { return value + (T) rhs; }

		constexpr Float<T> operator+(i128 rhs) const noexcept { return value + (T) rhs; }

		constexpr Float<T> operator+(u8 rhs) const noexcept { return value + (T) rhs; }

		constexpr Float<T> operator+(u16 rhs) const noexcept { return value + (T) rhs; }

		constexpr Float<T> operator+(u32 rhs) const noexcept { return value + (T) rhs; }

		constexpr Float<T> operator+(u64 rhs) const noexcept { return value + (T) rhs; }

		constexpr Float<T> operator+(u128 rhs) const noexcept { return value + (T) rhs; }

		template <class U>
		friend constexpr Float<T> operator+(U lhs, Float<T> rhs) noexcept
		    requires(std::is_integral_v<U> || std::is_floating_point_v<U>) {
			return (T) lhs + rhs.value;
		}

		template <class U>
		friend constexpr U& operator+=(U& lhs, Float<T> rhs) noexcept
		    requires(std::is_floating_point_v<U>) {
			lhs += rhs.value;
			return lhs;
		}

		template <class U>
		constexpr Float& operator+=(U rhs) noexcept {
			value += rhs;
			return *this;
		}

		template <class U>
		constexpr Float& operator+=(Float<U> rhs) noexcept {
			value += (U) rhs;
			return *this;
		}

		constexpr Float& operator+=(i8 rhs) noexcept {
			value += (T) rhs;
			return *this;
		}

		constexpr Float& operator+=(i16 rhs) noexcept {
			value += (T) rhs;
			return *this;
		}

		constexpr Float& operator+=(i32 rhs) noexcept {
			value += (T) rhs;
			return *this;
		}

		constexpr Float& operator+=(i64 rhs) noexcept {
			value += (T) rhs;
			return *this;
		}

		constexpr Float& operator+=(i128 rhs) noexcept {
			value += (T) rhs;
			return *this;
		}

		constexpr Float& operator+=(u8 rhs) noexcept {
			value += (T) rhs;
			return *this;
		}

		constexpr Float& operator+=(u16 rhs) noexcept {
			value += (T) rhs;
			return *this;
		}

		constexpr Float& operator+=(u32 rhs) noexcept {
			value += (T) rhs;
			return *this;
		}

		constexpr Float& operator+=(u64 rhs) noexcept {
			value += (T) rhs;
			return *this;
		}

		constexpr Float& operator+=(u128 rhs) noexcept {
			value += (T) rhs;
			return *this;
		}

		template <class U>
		constexpr auto operator-(Float<U> rhs) const noexcept {
			return Float<std::conditional_t<sizeof(T) <= sizeof(U), U, T>>(value - rhs.value);
		}

		template <class U>
		constexpr auto operator-(U rhs) const noexcept requires(std::is_floating_point_v<U>) {
			return Float<std::conditional_t<sizeof(T) <= sizeof(U), U, T>>(value - rhs);
		}

		template <class U>
		constexpr Float<T> operator-(U rhs) const noexcept requires(std::is_integral_v<U>) {
			return value - (T) rhs;
		}

		constexpr Float<T> operator-(i8 rhs) const noexcept { return value - (T) rhs; }

		constexpr Float<T> operator-(i16 rhs) const noexcept { return value - (T) rhs; }

		constexpr Float<T> operator-(i32 rhs) const noexcept { return value - (T) rhs; }

		constexpr Float<T> operator-(i64 rhs) const noexcept { return value - (T) rhs; }

		constexpr Float<T> operator-(i128 rhs) const noexcept { return value - (T) rhs; }

		constexpr Float<T> operator-(u8 rhs) const noexcept { return value - (T) rhs; }

		constexpr Float<T> operator-(u16 rhs) const noexcept { return value - (T) rhs; }

		constexpr Float<T> operator-(u32 rhs) const noexcept { return value - (T) rhs; }

		constexpr Float<T> operator-(u64 rhs) const noexcept { return value - (T) rhs; }

		constexpr Float<T> operator-(u128 rhs) const noexcept { return value - (T) rhs; }

		template <class U>
		friend constexpr Float<T> operator-(U lhs, Float<T> rhs) noexcept
		    requires(std::is_integral_v<U> || std::is_floating_point_v<U>) {
			return (T) lhs - rhs.value;
		}

		template <class U>
		friend constexpr U& operator-=(U& lhs, Float<T> rhs) noexcept
		    requires(std::is_floating_point_v<U>) {
			lhs -= rhs.value;
			return lhs;
		}

		template <class U>
		constexpr Float& operator-=(U rhs) noexcept {
			value -= rhs;
			return *this;
		}

		template <class U>
		constexpr Float& operator-=(Float<U> rhs) noexcept {
			value -= (U) rhs;
			return *this;
		}

		constexpr Float& operator-=(i8 rhs) noexcept {
			value -= (T) rhs;
			return *this;
		}

		constexpr Float& operator-=(i16 rhs) noexcept {
			value -= (T) rhs;
			return *this;
		}

		constexpr Float& operator-=(i32 rhs) noexcept {
			value -= (T) rhs;
			return *this;
		}

		constexpr Float& operator-=(i64 rhs) noexcept {
			value -= (T) rhs;
			return *this;
		}

		constexpr Float& operator-=(i128 rhs) noexcept {
			value -= (T) rhs;
			return *this;
		}

		constexpr Float& operator-=(u8 rhs) noexcept {
			value -= (T) rhs;
			return *this;
		}

		constexpr Float& operator-=(u16 rhs) noexcept {
			value -= (T) rhs;
			return *this;
		}

		constexpr Float& operator-=(u32 rhs) noexcept {
			value -= (T) rhs;
			return *this;
		}

		constexpr Float& operator-=(u64 rhs) noexcept {
			value -= (T) rhs;
			return *this;
		}

		constexpr Float& operator-=(u128 rhs) noexcept {
			value -= (T) rhs;
			return *this;
		}

		constexpr Float& operator++() noexcept {
			++value;
			return *this;
		}

		constexpr Float operator++(int) noexcept {
			Float<T> tmp {value};
			++value;
			return tmp;
		}

		constexpr Float& operator--() noexcept {
			--value;
			return *this;
		}

		constexpr Float operator--(int) noexcept {
			Float<T> tmp {value};
			--value;
			return tmp;
		}

		template <class U>
		constexpr auto operator*(Float<U> rhs) const noexcept {
			return Float<std::conditional_t<sizeof(T) <= sizeof(U), U, T>>(value * rhs.value);
		}

		template <class U>
		constexpr auto operator*(U rhs) const noexcept requires(std::is_floating_point_v<U>) {
			return Float<std::conditional_t<sizeof(T) <= sizeof(U), U, T>>(value * rhs);
		}

		template <class U>
		constexpr Float<T> operator*(U rhs) const noexcept requires(std::is_integral_v<U>) {
			return value * (T) rhs;
		}

		constexpr Float<T> operator*(i8 rhs) const noexcept { return value * (T) rhs; }

		constexpr Float<T> operator*(i16 rhs) const noexcept { return value * (T) rhs; }

		constexpr Float<T> operator*(i32 rhs) const noexcept { return value * (T) rhs; }

		constexpr Float<T> operator*(i64 rhs) const noexcept { return value * (T) rhs; }

		constexpr Float<T> operator*(i128 rhs) const noexcept { return value * (T) rhs; }

		constexpr Float<T> operator*(u8 rhs) const noexcept { return value * (T) rhs; }

		constexpr Float<T> operator*(u16 rhs) const noexcept { return value * (T) rhs; }

		constexpr Float<T> operator*(u32 rhs) const noexcept { return value * (T) rhs; }

		constexpr Float<T> operator*(u64 rhs) const noexcept { return value * (T) rhs; }

		constexpr Float<T> operator*(u128 rhs) const noexcept { return value * (T) rhs; }

		template <class U>
		friend constexpr Float<T> operator*(U lhs, Float<T> rhs) noexcept
		    requires(std::is_integral_v<U> || std::is_floating_point_v<U>) {
			return (T) lhs * rhs.value;
		}

		template <class U>
		friend constexpr U& operator*=(U& lhs, Float<T> rhs) noexcept
		    requires(std::is_floating_point_v<U>) {
			lhs *= rhs.value;
			return lhs;
		}

		template <class U>
		constexpr Float& operator*=(U rhs) noexcept {
			value *= rhs;
			return *this;
		}

		template <class U>
		constexpr Float& operator*=(Float<U> rhs) noexcept {
			value *= (U) rhs;
			return *this;
		}

		constexpr Float& operator*=(i8 rhs) noexcept {
			value *= (T) rhs;
			return *this;
		}

		constexpr Float& operator*=(i16 rhs) noexcept {
			value *= (T) rhs;
			return *this;
		}

		constexpr Float& operator*=(i32 rhs) noexcept {
			value *= (T) rhs;
			return *this;
		}

		constexpr Float& operator*=(i64 rhs) noexcept {
			value *= (T) rhs;
			return *this;
		}

		constexpr Float& operator*=(i128 rhs) noexcept {
			value *= (T) rhs;
			return *this;
		}

		constexpr Float& operator*=(u8 rhs) noexcept {
			value *= (T) rhs;
			return *this;
		}

		constexpr Float& operator*=(u16 rhs) noexcept {
			value *= (T) rhs;
			return *this;
		}

		constexpr Float& operator*=(u32 rhs) noexcept {
			value *= (T) rhs;
			return *this;
		}

		constexpr Float& operator*=(u64 rhs) noexcept {
			value *= (T) rhs;
			return *this;
		}

		constexpr Float& operator*=(u128 rhs) noexcept {
			value *= (T) rhs;
			return *this;
		}

		template <class U>
		constexpr auto operator/(Float<U> rhs) const noexcept {
			return Float<std::conditional_t<sizeof(T) <= sizeof(U), U, T>>(value / rhs.value);
		}

		template <class U>
		constexpr auto operator/(U rhs) const noexcept requires(std::is_floating_point_v<U>) {
			return Float<std::conditional_t<sizeof(T) <= sizeof(U), U, T>>(value / rhs);
		}

		template <class U>
		constexpr Float<T> operator/(U rhs) const noexcept requires(std::is_integral_v<U>) {
			return value / (T) rhs;
		}

		constexpr Float<T> operator/(i8 rhs) const noexcept { return value / (T) rhs; }

		constexpr Float<T> operator/(i16 rhs) const noexcept { return value / (T) rhs; }

		constexpr Float<T> operator/(i32 rhs) const noexcept { return value / (T) rhs; }

		constexpr Float<T> operator/(i64 rhs) const noexcept { return value / (T) rhs; }

		constexpr Float<T> operator/(i128 rhs) const noexcept { return value / (T) rhs; }

		constexpr Float<T> operator/(u8 rhs) const noexcept { return value / (T) rhs; }

		constexpr Float<T> operator/(u16 rhs) const noexcept { return value / (T) rhs; }

		constexpr Float<T> operator/(u32 rhs) const noexcept { return value / (T) rhs; }

		constexpr Float<T> operator/(u64 rhs) const noexcept { return value / (T) rhs; }

		constexpr Float<T> operator/(u128 rhs) const noexcept { return value / (T) rhs; }

		template <class U>
		friend constexpr Float<T> operator/(U lhs, Float<T> rhs) noexcept
		    requires(std::is_integral_v<U> || std::is_floating_point_v<U>) {
			return (T) lhs / rhs.value;
		}

		template <class U>
		friend constexpr U& operator/=(U& lhs, Float<T> rhs) noexcept
		    requires(std::is_floating_point_v<U>) {
			lhs /= rhs.value;
			return lhs;
		}

		template <class U>
		constexpr Float& operator/=(U rhs) noexcept {
			value /= rhs;
			return *this;
		}

		template <class U>
		constexpr Float& operator/=(Float<U> rhs) noexcept {
			value /= (U) rhs;
			return *this;
		}

		constexpr Float& operator/=(i8 rhs) noexcept {
			value /= (T) rhs;
			return *this;
		}

		constexpr Float& operator/=(i16 rhs) noexcept {
			value /= (T) rhs;
			return *this;
		}

		constexpr Float& operator/=(i32 rhs) noexcept {
			value /= (T) rhs;
			return *this;
		}

		constexpr Float& operator/=(i64 rhs) noexcept {
			value /= (T) rhs;
			return *this;
		}

		constexpr Float& operator/=(i128 rhs) noexcept {
			value /= (T) rhs;
			return *this;
		}

		constexpr Float& operator/=(u8 rhs) noexcept {
			value /= (T) rhs;
			return *this;
		}

		constexpr Float& operator/=(u16 rhs) noexcept {
			value /= (T) rhs;
			return *this;
		}

		constexpr Float& operator/=(u32 rhs) noexcept {
			value /= (T) rhs;
			return *this;
		}

		constexpr Float& operator/=(u64 rhs) noexcept {
			value /= (T) rhs;
			return *this;
		}

		constexpr Float& operator/=(u128 rhs) noexcept {
			value /= (T) rhs;
			return *this;
		}

		template <class U>
		constexpr auto operator%(Float<U> rhs) const noexcept {
			return Float<std::conditional_t<sizeof(T) <= sizeof(U), U, T>>(
			    std::fmod(value, rhs.value));
		}

		template <class U>
		constexpr auto operator%(U rhs) const noexcept requires(std::is_floating_point_v<U>) {
			return Float<std::conditional_t<sizeof(T) <= sizeof(U), U, T>>(std::fmod(value, rhs));
		}

		template <class U>
		constexpr Float<T> operator%(U rhs) const noexcept requires(std::is_integral_v<U>) {
			return std::fmod(value, (T) rhs);
		}

		constexpr Float<T> operator%(i8 rhs) const noexcept { return std::fmod(value, (T) rhs); }

		constexpr Float<T> operator%(i16 rhs) const noexcept { return std::fmod(value, (T) rhs); }

		constexpr Float<T> operator%(i32 rhs) const noexcept { return std::fmod(value, (T) rhs); }

		constexpr Float<T> operator%(i64 rhs) const noexcept { return std::fmod(value, (T) rhs); }

		constexpr Float<T> operator%(i128 rhs) const noexcept { return std::fmod(value, (T) rhs); }

		constexpr Float<T> operator%(u8 rhs) const noexcept { return std::fmod(value, (T) rhs); }

		constexpr Float<T> operator%(u16 rhs) const noexcept { return std::fmod(value, (T) rhs); }

		constexpr Float<T> operator%(u32 rhs) const noexcept { return std::fmod(value, (T) rhs); }

		constexpr Float<T> operator%(u64 rhs) const noexcept { return std::fmod(value, (T) rhs); }

		constexpr Float<T> operator%(u128 rhs) const noexcept { return std::fmod(value, (T) rhs); }

		template <class U>
		friend constexpr Float<T> operator%(U lhs, Float<T> rhs) noexcept
		    requires(std::is_integral_v<U> || std::is_floating_point_v<U>) {
			return std::fmod((T) lhs, rhs.value);
		}

		template <class U>
		friend constexpr U& operator%=(U& lhs, Float<T> rhs) noexcept
		    requires(std::is_floating_point_v<U>) {
			lhs = std::fmod(lhs, rhs.value);
			return lhs;
		}

		template <class U>
		constexpr Float& operator%=(U rhs) noexcept {
			value = std::fmod(value, rhs);
			return *this;
		}

		template <class U>
		constexpr Float& operator%=(Float<U> rhs) noexcept {
			value = std::fmod(value, (U) rhs);
			return *this;
		}

		constexpr Float& operator%=(i8 rhs) noexcept {
			value = std::fmod(value, (T) rhs);
			return *this;
		}

		constexpr Float& operator%=(i16 rhs) noexcept {
			value = std::fmod(value, (T) rhs);
			return *this;
		}

		constexpr Float& operator%=(i32 rhs) noexcept {
			value = std::fmod(value, (T) rhs);
			return *this;
		}

		constexpr Float& operator%=(i64 rhs) noexcept {
			value = std::fmod(value, (T) rhs);
			return *this;
		}

		constexpr Float& operator%=(i128 rhs) noexcept {
			value = std::fmod(value, (T) rhs);
			return *this;
		}

		constexpr Float& operator%=(u8 rhs) noexcept {
			value = std::fmod(value, (T) rhs);
			return *this;
		}

		constexpr Float& operator%=(u16 rhs) noexcept {
			value = std::fmod(value, (T) rhs);
			return *this;
		}

		constexpr Float& operator%=(u32 rhs) noexcept {
			value = std::fmod(value, (T) rhs);
			return *this;
		}

		constexpr Float& operator%=(u64 rhs) noexcept {
			value = std::fmod(value, (T) rhs);
			return *this;
		}

		constexpr Float& operator%=(u128 rhs) noexcept {
			value = std::fmod(value, (T) rhs);
			return *this;
		}

		constexpr Float<T> operator+() const noexcept { return *this; }

		constexpr Float<T> operator-() const noexcept { return -value; }

		T* ptr() noexcept { return &value; }

		const T* ptr() const noexcept { return &value; }

		constexpr const T& ref() const noexcept { return value; }

		/*T* operator&()  noexcept {
		    return &value;
		}

		const T* operator&() const noexcept {
		    return &value;
		}*/

		template <class U>
		constexpr bool operator==(Float<U> rhs) const noexcept {
			return value == rhs.value;
		}

		template <class U>
		constexpr bool operator!=(Float<U> rhs) const noexcept {
			return value != rhs.value;
		}

		template <class U>
		constexpr bool operator==(U rhs) const noexcept
		    requires(std::is_integral_v<U> || std::is_floating_point_v<U>) {
			return value == static_cast<T>(rhs);
		}

		template <class U>
		constexpr bool operator!=(U rhs) const noexcept
		    requires(std::is_integral_v<U> || std::is_floating_point_v<U>) {
			return value != static_cast<T>(rhs);
		}

		template <class U>
		friend constexpr bool operator==(U lhs, Float<T> rhs) noexcept
		    requires(std::is_integral_v<U> || std::is_floating_point_v<U>) {
			return static_cast<T>(lhs) == rhs.value;
		}

		template <class U>
		friend constexpr bool operator!=(U lhs, Float<T> rhs) noexcept
		    requires(std::is_integral_v<U> || std::is_floating_point_v<U>) {
			return static_cast<T>(lhs) != rhs.value;
		}

		constexpr bool operator==(i8 rhs) const noexcept { return value == static_cast<T>(rhs); }

		constexpr bool operator!=(i8 rhs) const noexcept { return value != static_cast<T>(rhs); }

		constexpr bool operator==(i16 rhs) const noexcept { return value == static_cast<T>(rhs); }

		constexpr bool operator!=(i16 rhs) const noexcept { return value != static_cast<T>(rhs); }

		constexpr bool operator==(i32 rhs) const noexcept { return value == static_cast<T>(rhs); }

		constexpr bool operator!=(i32 rhs) const noexcept { return value != static_cast<T>(rhs); }

		constexpr bool operator==(i64 rhs) const noexcept { return value == static_cast<T>(rhs); }

		constexpr bool operator!=(i64 rhs) const noexcept { return value != static_cast<T>(rhs); }

		constexpr bool operator==(u8 rhs) const noexcept { return value == static_cast<T>(rhs); }

		constexpr bool operator!=(u8 rhs) const noexcept { return value != static_cast<T>(rhs); }

		constexpr bool operator==(u16 rhs) const noexcept { return value == static_cast<T>(rhs); }

		constexpr bool operator!=(u16 rhs) const noexcept { return value != static_cast<T>(rhs); }

		constexpr bool operator==(u32 rhs) const noexcept { return value == static_cast<T>(rhs); }

		constexpr bool operator!=(u32 rhs) const noexcept { return value != static_cast<T>(rhs); }

		constexpr bool operator==(u64 rhs) const noexcept { return value == static_cast<T>(rhs); }

		constexpr bool operator!=(u64 rhs) const noexcept { return value != static_cast<T>(rhs); }

		constexpr bool operator==(i128 rhs) const noexcept { return value == static_cast<T>(rhs); }

		constexpr bool operator!=(i128 rhs) const noexcept { return value != static_cast<T>(rhs); }

		constexpr bool operator==(u128 rhs) const noexcept { return value == static_cast<T>(rhs); }

		constexpr bool operator!=(u128 rhs) const noexcept { return value != static_cast<T>(rhs); }

		friend constexpr bool operator==(i8 lhs, Float<T> rhs) noexcept {
			return static_cast<T>(lhs) == rhs.value;
		}

		friend constexpr bool operator!=(i8 lhs, Float<T> rhs) noexcept {
			return static_cast<T>(lhs) != rhs.value;
		}

		friend constexpr bool operator==(i16 lhs, Float<T> rhs) noexcept {
			return static_cast<T>(lhs) == rhs.value;
		}

		friend constexpr bool operator!=(i16 lhs, Float<T> rhs) noexcept {
			return static_cast<T>(lhs) != rhs.value;
		}

		friend constexpr bool operator==(i32 lhs, Float<T> rhs) noexcept {
			return static_cast<T>(lhs) == rhs.value;
		}

		friend constexpr bool operator!=(i32 lhs, Float<T> rhs) noexcept {
			return static_cast<T>(lhs) != rhs.value;
		}

		friend constexpr bool operator==(i64 lhs, Float<T> rhs) noexcept {
			return static_cast<T>(lhs) == rhs.value;
		}

		friend constexpr bool operator!=(i64 lhs, Float<T> rhs) noexcept {
			return static_cast<T>(lhs) != rhs.value;
		}

		friend constexpr bool operator==(i128 lhs, Float<T> rhs) noexcept {
			return static_cast<T>(lhs) == rhs.value;
		}

		friend constexpr bool operator!=(i128 lhs, Float<T> rhs) noexcept {
			return static_cast<T>(lhs) != rhs.value;
		}

		friend constexpr bool operator==(u8 lhs, Float<T> rhs) noexcept {
			return static_cast<T>(lhs) == rhs.value;
		}

		friend constexpr bool operator!=(u8 lhs, Float<T> rhs) noexcept {
			return static_cast<T>(lhs) != rhs.value;
		}

		friend constexpr bool operator==(u16 lhs, Float<T> rhs) noexcept {
			return static_cast<T>(lhs) == rhs.value;
		}

		friend constexpr bool operator!=(u16 lhs, Float<T> rhs) noexcept {
			return static_cast<T>(lhs) != rhs.value;
		}

		friend constexpr bool operator==(u32 lhs, Float<T> rhs) noexcept {
			return static_cast<T>(lhs) == rhs.value;
		}

		friend constexpr bool operator!=(u32 lhs, Float<T> rhs) noexcept {
			return static_cast<T>(lhs) != rhs.value;
		}

		friend constexpr bool operator==(u64 lhs, Float<T> rhs) noexcept {
			return static_cast<T>(lhs) == rhs.value;
		}

		friend constexpr bool operator!=(u64 lhs, Float<T> rhs) noexcept {
			return static_cast<T>(lhs) != rhs.value;
		}

		friend constexpr bool operator==(u128 lhs, Float<T> rhs) noexcept {
			return static_cast<T>(lhs) == rhs.value;
		}

		friend constexpr bool operator!=(u128 lhs, Float<T> rhs) noexcept {
			return static_cast<T>(lhs) != rhs.value;
		}

		template <class U>
		constexpr int operator<=>(Float<U> rhs) const noexcept {
			if (value < rhs.value) {
				return -1;
			}
			if (value > rhs.value) {
				return 1;
			}
			return 0;
		}

		template <class U>
		constexpr int operator<=>(U rhs) const noexcept
		    requires(std::is_integral_v<U> || std::is_floating_point_v<U>) {
			if (value < rhs) {
				return -1;
			}
			if (value > rhs) {
				return 1;
			}
			return 0;
		}

		template <class U>
		friend constexpr int operator<=>(U lhs, Float<T> rhs) noexcept
		    requires(std::is_integral_v<U> || std::is_floating_point_v<U>) {
			if (lhs < rhs.value) {
				return -1;
			}
			if (lhs > rhs.value) {
				return 1;
			}
			return 0;
		}

		constexpr int operator<=>(i8 rhs) const noexcept { return *this <=> static_cast<T>(rhs); }

		friend constexpr int operator<=>(i8 lhs, Float<T> rhs) noexcept {
			return static_cast<__self>(lhs) <=> rhs.value;
		}

		constexpr int operator<=>(i16 rhs) const noexcept { return *this <=> static_cast<T>(rhs); }

		friend constexpr int operator<=>(i16 lhs, Float<T> rhs) noexcept {
			return static_cast<__self>(lhs) <=> rhs.value;
		}

		constexpr int operator<=>(i32 rhs) const noexcept { return *this <=> static_cast<T>(rhs); }

		friend constexpr int operator<=>(i32 lhs, Float<T> rhs) noexcept {
			return static_cast<__self>(lhs) <=> rhs.value;
		}

		constexpr int operator<=>(i64 rhs) const noexcept { return *this <=> static_cast<T>(rhs); }

		friend constexpr int operator<=>(i64 lhs, Float<T> rhs) noexcept {
			return static_cast<__self>(lhs) <=> rhs.value;
		}

		constexpr int operator<=>(i128 rhs) const noexcept { return *this <=> static_cast<T>(rhs); }

		friend constexpr int operator<=>(i128 lhs, Float<T> rhs) noexcept {
			return static_cast<__self>(lhs) <=> rhs.value;
		}

		constexpr int operator<=>(u8 rhs) const noexcept { return *this <=> static_cast<T>(rhs); }

		friend constexpr int operator<=>(u8 lhs, Float<T> rhs) noexcept {
			return static_cast<__self>(lhs) <=> rhs.value;
		}

		constexpr int operator<=>(u16 rhs) const noexcept { return *this <=> static_cast<T>(rhs); }

		friend constexpr int operator<=>(u16 lhs, Float<T> rhs) noexcept {
			return static_cast<__self>(lhs) <=> rhs.value;
		}

		constexpr int operator<=>(u32 rhs) const noexcept { return *this <=> static_cast<T>(rhs); }

		friend constexpr int operator<=>(u32 lhs, Float<T> rhs) noexcept {
			return static_cast<__self>(lhs) <=> rhs.value;
		}

		constexpr int operator<=>(u64 rhs) const noexcept { return *this <=> static_cast<T>(rhs); }

		friend constexpr int operator<=>(u64 lhs, Float<T> rhs) noexcept {
			return static_cast<__self>(lhs) <=> rhs.value;
		}

		constexpr int operator<=>(u128 rhs) const noexcept { return *this <=> static_cast<T>(rhs); }

		friend constexpr int operator<=>(u128 lhs, Float<T> rhs) noexcept {
			return static_cast<__self>(lhs) <=> rhs.value;
		}

	   private:
		T value {};
	};

#ifndef __FLT16_MAX__
	struct alignas(uint16_t) Float16 : public Struct {
		using __self                  = Float16;
		using __class                 = __Class_Basic<Float16>;
		using __underlying            = Float16;
		using BitsType                = u16;
		using DivisibleArithmeticType = Float16;

		constexpr __self& __ref() noexcept { return *this; }
		constexpr const __self& __ref() const noexcept { return *this; }

		constexpr Float16() noexcept                 = default;
		constexpr Float16(const Float16& f) noexcept = default;
		constexpr explicit Float16(float f) noexcept {
			// Minimum exponent for rounding
			constexpr uint32_t MinExp = 0x38800000u;
			// Exponent displacement #1
			constexpr uint32_t Exponent126 = 0x3f000000u;
			// Exponent mask
			constexpr uint32_t SingleBiasedExponentMask = 0x7F800000;
			// Exponent displacement #2
			constexpr uint32_t Exponent13 = 0x06800000u;
			// Maximum value that is not Infinity in Half
			constexpr float MaxHalfValueBelowInfinity = 65520.0f;
			// Mask for exponent bits in Half
			constexpr uint32_t ExponentMask = 0x7C00;

			uint32_t bitValue       = std::bit_cast<uint32_t>(f);
			const uint32_t sign     = (bitValue & 0x80000000) >> 16;
			const uint32_t realMask = int(f != f) - 1;
			f                       = std::bit_cast<float>(bitValue & 0x7FFFFFFF);
			f                       = std::min(f, MaxHalfValueBelowInfinity);
			uint32_t exponentOffset0 =
			    std::bit_cast<uint32_t>(std::max(f, std::bit_cast<float>(MinExp)));
			exponentOffset0 &= SingleBiasedExponentMask;
			exponentOffset0 += Exponent13;

			f += std::bit_cast<float>(exponentOffset0);
			bitValue                                = std::bit_cast<uint32_t>(f);
			const uint32_t maskedHalfExponentForNaN = ~realMask & ExponentMask;
			bitValue -= Exponent126;
			const uint32_t newExponent = bitValue >> 13;
			bitValue &= realMask;
			bitValue += newExponent;
			bitValue &= ~maskedHalfExponentForNaN;
			const uint32_t signAndMaskedExponent = maskedHalfExponentForNaN | sign;
			bitValue |= signAndMaskedExponent;
			value = static_cast<uint16_t>(bitValue);
		}

		constexpr explicit Float16(double d) noexcept {
			constexpr int doubleMaxExponent = 0x7FF;
			const uint64_t bits             = std::bit_cast<uint64_t>(d);
			const bool sign                 = ((bits & 0x8000000000000000ull) >> 63) != 0;
			const int exp                   = (bits & 0x7FF0000000000000ull) >> 52;
			const uint64_t sig              = bits & 0x000FFFFFFFFFFFFF;

			if (exp == doubleMaxExponent) {
				if (sig != 0) {
					constexpr uint32_t nanBits = 0x7C00 | 0x200;
					value = ((sign ? 1u : 0u) << 15) | nanBits | unsigned((sig << 12) >> 54);
					return;
				}
				value = sign ? 0xFC00 : 0x7C00;
				return;
			}

			const uint32_t sigHalf = Float16::ShiftRightJam(sig, 38);
			if ((exp | int(sigHalf)) == 0) {
				value = sign ? 0x8000 : 0;
				return;
			}

			int16_t halfExp  = exp - 0x3F1;
			uint16_t halfSig = sigHalf | 0x4000;

			constexpr int roundIncrement = 8;
			int roundBits                = halfSig & 0xF;
			if (unsigned(halfExp) >= 0x1D) {
				if (halfExp < 0) {
					halfSig   = Float16::ShiftRightJam((unsigned) halfSig, -halfExp);
					halfExp   = 0;
					roundBits = halfSig & 0xF;
				} else if (halfExp > 0x1D || halfSig + roundIncrement >= 0x8000) {
					value = sign ? 0xFC00 : 0x7C00;
					return;
				}
			}

			halfSig = (halfSig + roundIncrement) >> 4;
			halfSig &= ~(((roundBits ^ 8) != 0 ? 0 : 1) & 1);

			if (halfSig == 0) {
				halfExp = 0;
			}

			value = ((sign ? 1 : 0) << 15) + (halfExp << 10) + halfSig;
		}

		constexpr explicit Float16(long double d) noexcept : Float16(double(d)) {}
		constexpr explicit Float16(Float<float> d) noexcept : Float16(float(d)) {}
		constexpr explicit Float16(Float<double> d) noexcept : Float16(double(d)) {}
		constexpr explicit Float16(Float<long double> d) noexcept : Float16(double(d)) {}

		template <class U>
		constexpr explicit(sizeof(U) > sizeof(uint16_t)) Float16(U v) noexcept
		    requires(std::is_integral_v<U>)
		    : Float16(float(v)) {}
		constexpr Float16(i8 v) noexcept : Float16(float(v)) {}
		constexpr Float16(i16 v) noexcept : Float16(float(v)) {}
		constexpr explicit Float16(i32 v) noexcept : Float16(float(v)) {}
		constexpr explicit Float16(i64 v) noexcept : Float16(float(v)) {}
		constexpr explicit Float16(i128 v) noexcept : Float16(float(v)) {}
		constexpr Float16(u8 v) noexcept : Float16(float(v)) {}
		constexpr Float16(u16 v) noexcept : Float16(float(v)) {}
		constexpr explicit Float16(u32 v) noexcept : Float16(float(v)) {}
		constexpr explicit Float16(u64 v) noexcept : Float16(float(v)) {}
		constexpr explicit Float16(u128 v) noexcept : Float16(float(v)) {}

		constexpr Float16& operator=(const Float16& f) noexcept = default;

		template <class U>
		constexpr Float16& operator=(U v) noexcept
		    requires(std::is_integral_v<U> && sizeof(U) <= sizeof(uint16_t)) {
			return *this = Float16(float(v));
		}

		constexpr Float16& operator=(i8 v) noexcept { return *this = Float16(float(v)); }

		constexpr Float16& operator=(i16 v) noexcept { return *this = Float16(float(v)); }

		constexpr Float16& operator=(u8 v) noexcept { return *this = Float16(float(v)); }

		constexpr Float16& operator=(u16 v) noexcept { return *this = Float16(float(v)); }

		constexpr operator Float<float>() const noexcept {
			// The smallest positive normal number in f16, converted to f32
			constexpr uint32_t ExponentLowerBound = 0x38800000u;
			constexpr uint32_t ExponentOffset     = 0x38000000u;
			// Mask for sign bit in f32
			constexpr uint32_t SingleSignMask = 0x80000000u;
			// Mask for exponent bits in f16
			constexpr uint32_t HalfExponentMask = 0x7C00u;
			// Mask for bits in f32 converted from f16
			constexpr int HalfToSingleBitsMask = 0x0FFFE000;

			const int16_t bits                      = std::bit_cast<int16_t>(value);
			const uint32_t sign                     = unsigned(int(bits)) & SingleSignMask;
			uint32_t ubits                          = bits;
			const uint32_t offsetExponent           = ubits & HalfExponentMask;
			const uint32_t subnormalMask            = -int(offsetExponent == 0);
			const int infNanMask                    = offsetExponent == HalfExponentMask;
			const uint32_t maskedExponentLowerBound = subnormalMask & ExponentLowerBound;
			uint32_t offsetMaskedExponentLowerBound = ExponentOffset | maskedExponentLowerBound;
			ubits <<= 13;
			offsetMaskedExponentLowerBound <<= infNanMask;
			ubits &= HalfToSingleBitsMask;
			ubits += offsetMaskedExponentLowerBound;
			const uint32_t abs = std::bit_cast<uint32_t>(
			    std::bit_cast<float>(ubits) - std::bit_cast<float>(maskedExponentLowerBound));

			return std::bit_cast<float>(abs | sign);
		}

		constexpr operator Float<double>() const noexcept {
			const bool sign = short(value) < 0;
			int exp         = (value >> 10) & (0x7C00 >> 10);
			uint32_t sig    = value & 0x03FF;

			if (exp == 0x1F) {
				if (sig != 0) {
					constexpr auto nanBits = 0x7FF0000000000000ull | 0x8000000000000ull;
					return std::bit_cast<double>(((sign ? 1ull : 0ull) << 63) | nanBits |
					                             ((uint64_t(sig) << 54) >> 12));
				}
				return sign ? -std::numeric_limits<double>::infinity()
				            : +std::numeric_limits<double>::infinity();
			}

			if (exp == 0) {
				if (sig == 0) {
					return std::bit_cast<double>(sign ? 0x8000000000000000ull : 0ull);
				}
				const int shiftDist = std::countl_zero(sig) - 16 - 5;
				exp                 = 1 - shiftDist;
				sig <<= shiftDist;
				exp--;
			}

			return std::bit_cast<double>(((sign ? 1ull : 0ull) << 63) +
			                             (uint64_t(exp + 0x3F0) << 52) + (uint64_t(sig) << 42));
		}

		constexpr operator Float<long double>() const noexcept {
			return static_cast<double>(*this);
		}

		constexpr explicit operator float() const noexcept {
			return static_cast<Float<float>>(*this);
		}
		constexpr explicit operator double() const noexcept {
			return static_cast<Float<double>>(*this);
		}
		// constexpr operator long double() const noexcept {
		//	return static_cast<double>(*this);
		//}

		constexpr explicit operator i8() const {
#ifdef Builtin_OVERFLOW_CHECKS
			if (*this < INT8_MIN || *this > INT8_MAX || _isNan())
				throw IntegerOverflowException();
#endif
			return static_cast<int8_t>(static_cast<float>(*this));
		}
		constexpr explicit operator i16() const {
#ifdef Builtin_OVERFLOW_CHECKS
			if (*this < INT16_MIN || *this > INT16_MAX || _isNan())
				throw IntegerOverflowException();
#endif
			return static_cast<int16_t>(static_cast<float>(*this));
		}
		constexpr explicit operator i32() const {
#ifdef Builtin_OVERFLOW_CHECKS
			if (*this < INT32_MIN || *this > INT32_MAX || _isNan())
				throw IntegerOverflowException();
#endif
			return static_cast<int32_t>(static_cast<float>(*this));
		}
		constexpr explicit operator i64() const {
#ifdef Builtin_OVERFLOW_CHECKS
			if (*this < INT64_MIN || *this > INT64_MAX || _isNan())
				throw IntegerOverflowException();
#endif
			return static_cast<int64_t>(static_cast<float>(*this));
		}
		constexpr explicit operator u8() const {
#ifdef Builtin_OVERFLOW_CHECKS
			if (*this < 0 || *this > UINT8_MAX || _isNan())
				throw IntegerOverflowException();
#endif
			return static_cast<uint8_t>(static_cast<float>(*this));
		}
		constexpr explicit operator u16() const {
#ifdef Builtin_OVERFLOW_CHECKS
			if (*this < 0 || *this > UINT16_MAX || _isNan())
				throw IntegerOverflowException();
#endif
			return static_cast<uint16_t>(static_cast<float>(*this));
		}
		constexpr explicit operator u32() const {
#ifdef Builtin_OVERFLOW_CHECKS
			if (*this < 0 || *this > UINT32_MAX || _isNan())
				throw IntegerOverflowException();
#endif
			return static_cast<uint32_t>(static_cast<float>(*this));
		}
		constexpr explicit operator u64() const {
#ifdef Builtin_OVERFLOW_CHECKS
			if (*this < 0 || *this > UINT64_MAX || _isNan())
				throw IntegerOverflowException();
#endif
			return static_cast<uint64_t>(static_cast<float>(*this));
		}
		constexpr explicit operator u128() const {
#ifdef Builtin_OVERFLOW_CHECKS
			if (*this < 0 || *this > 340282366920938463463374607431768211455.0 || _isNan())
				throw IntegerOverflowException();
#endif
			return u128(static_cast<float>(*this));
		}
		constexpr explicit operator i128() const {
#ifdef Builtin_OVERFLOW_CHECKS
			if (*this < -170141183460469231731687303715884105728.0 ||
			    *this > 170141183460469231731687303715884105727.0 || _isNan())
				throw IntegerOverflowException();
#endif
			return i128(static_cast<float>(*this));
		}

		template <class U>
		requires std::is_constructible_v<float, U>
		constexpr Float16 operator+(U rhs) const noexcept {
			return Float16(static_cast<float>(*this) + static_cast<float>(rhs));
		}

		template <class U>
		friend constexpr U operator+(U lhs, Float16 rhs) noexcept
		    requires(std::is_convertible_v<U, float>&& std::is_constructible_v<U, float> &&
		             !std::is_same_v<U, Float16>) {
			return U(static_cast<float>(lhs) + static_cast<float>(rhs));
		}

		template <class U>
		requires std::is_constructible_v<float, U>
		constexpr Float16& operator+=(U rhs) noexcept {
			return *this = Float16(static_cast<float>(*this) + static_cast<float>(rhs));
		}

		template <class U>
		requires std::is_constructible_v<float, U>
		constexpr Float16 operator-(U rhs) const noexcept {
			return Float16(static_cast<float>(*this) - static_cast<float>(rhs));
		}

		template <class U>
		friend constexpr U operator-(U lhs, Float16 rhs) noexcept
		    requires(std::is_convertible_v<U, float>&& std::is_constructible_v<U, float> &&
		             !std::is_same_v<U, Float16>) {
			return U(static_cast<float>(lhs) - static_cast<float>(rhs));
		}

		template <class U>
		requires std::is_constructible_v<float, U>
		constexpr Float16& operator-=(U rhs) noexcept {
			return *this = Float16(static_cast<float>(*this) - static_cast<float>(rhs));
		}

		constexpr Float16& operator++() noexcept {
			return *this = Float16(static_cast<float>(*this) + 1.0f);
		}

		constexpr Float16 operator++(int) noexcept {
			Float16 tmp {*this};
			++*this;
			return tmp;
		}

		constexpr Float16& operator--() noexcept {
			return *this = Float16(static_cast<float>(*this) - 1.0f);
		}

		constexpr Float16 operator--(int) noexcept {
			Float16 tmp {*this};
			--*this;
			return tmp;
		}
		template <class U>
		requires std::is_constructible_v<float, U>
		constexpr Float16 operator*(U rhs) const noexcept {
			return Float16(static_cast<float>(*this) * static_cast<float>(rhs));
		}

		template <class U>
		friend constexpr U operator*(U lhs, Float16 rhs) noexcept
		    requires(std::is_convertible_v<U, float>&& std::is_constructible_v<U, float> &&
		             !std::is_same_v<U, Float16>) {
			return U(static_cast<float>(lhs) * static_cast<float>(rhs));
		}

		template <class U>
		requires std::is_constructible_v<float, U>
		constexpr Float16& operator*=(U rhs) noexcept {
			return *this = Float16(static_cast<float>(*this) * static_cast<float>(rhs));
		}

		template <class U>
		requires std::is_constructible_v<float, U>
		constexpr Float16 operator/(U rhs) const noexcept {
			return Float16(static_cast<float>(*this) / static_cast<float>(rhs));
		}

		template <class U>
		friend constexpr U operator/(U lhs, Float16 rhs) noexcept
		    requires(std::is_convertible_v<U, float>&& std::is_constructible_v<U, float> &&
		             !std::is_same_v<U, Float16>) {
			return U(static_cast<float>(lhs) / static_cast<float>(rhs));
		}

		template <class U>
		requires std::is_constructible_v<float, U>
		constexpr Float16& operator/=(U rhs) noexcept {
			return *this = Float16(static_cast<float>(*this) / static_cast<float>(rhs));
		}

		template <class U>
		requires std::is_constructible_v<float, U>
		constexpr Float16 operator%(U rhs) const noexcept {
			return Float16(std::fmodf(static_cast<float>(*this), static_cast<float>(rhs)));
		}

		template <class U>
		friend constexpr U operator%(U lhs, Float16 rhs) noexcept
		    requires(std::is_convertible_v<U, float>&& std::is_constructible_v<U, float> &&
		             !std::is_same_v<U, Float16>) {
			return U(std::fmodf(static_cast<float>(lhs), static_cast<float>(rhs)));
		}

		template <class U>
		requires std::is_constructible_v<float, U>
		constexpr Float16& operator%=(U rhs) noexcept {
			return *this = Float16(std::fmodf(static_cast<float>(*this), static_cast<float>(rhs)));
		}

		constexpr Float16 operator+() const noexcept { return *this; }

		constexpr Float16 operator-() const noexcept { return Float16(-static_cast<float>(*this)); }

		// constexpr const T& ref() const noexcept { return value; }

		constexpr bool operator==(Float16 rhs) const noexcept {
			if (_isNan() || rhs._isNan()) {
				return false;
			}
			return value == rhs.value || areZero(rhs);
		}

		constexpr bool operator!=(Float16 rhs) const noexcept { return !(*this == rhs); }

		template <class U>
		constexpr bool operator==(U rhs) const noexcept
		    requires(std::is_integral_v<U> || std::is_floating_point_v<U>) {
			return *this == static_cast<Float16>(rhs);
		}

		template <class U>
		constexpr bool operator!=(U rhs) const noexcept
		    requires(std::is_integral_v<U> || std::is_floating_point_v<U>) {
			return !(*this == rhs);
		}

		template <class U>
		constexpr bool operator==(Float<U> rhs) const noexcept {
			return static_cast<Float<U>>(*this) == rhs;
		}

		template <class U>
		constexpr bool operator!=(Float<U> rhs) const noexcept {
			return static_cast<Float<U>>(*this) != rhs;
		}

		constexpr bool operator==(i8 rhs) const noexcept {
			return float(*this) == static_cast<float>(rhs);
		}

		constexpr bool operator!=(i8 rhs) const noexcept {
			return float(*this) != static_cast<float>(rhs);
		}

		constexpr bool operator==(i16 rhs) const noexcept {
			return float(*this) == static_cast<float>(rhs);
		}

		constexpr bool operator!=(i16 rhs) const noexcept {
			return float(*this) != static_cast<float>(rhs);
		}

		constexpr bool operator==(i32 rhs) const noexcept {
			return float(*this) == static_cast<float>(rhs);
		}

		constexpr bool operator!=(i32 rhs) const noexcept {
			return float(*this) != static_cast<float>(rhs);
		}

		constexpr bool operator==(i64 rhs) const noexcept {
			return float(*this) == static_cast<float>(rhs);
		}

		constexpr bool operator!=(i64 rhs) const noexcept {
			return float(*this) != static_cast<float>(rhs);
		}

		constexpr bool operator==(u8 rhs) const noexcept {
			return float(*this) == static_cast<float>(rhs);
		}

		constexpr bool operator!=(u8 rhs) const noexcept {
			return float(*this) != static_cast<float>(rhs);
		}

		constexpr bool operator==(u16 rhs) const noexcept {
			return float(*this) == static_cast<float>(rhs);
		}

		constexpr bool operator!=(u16 rhs) const noexcept {
			return float(*this) != static_cast<float>(rhs);
		}

		constexpr bool operator==(u32 rhs) const noexcept {
			return float(*this) == static_cast<float>(rhs);
		}

		constexpr bool operator!=(u32 rhs) const noexcept {
			return float(*this) != static_cast<float>(rhs);
		}

		constexpr bool operator==(u64 rhs) const noexcept {
			return float(*this) == static_cast<float>(rhs);
		}

		constexpr bool operator!=(u64 rhs) const noexcept {
			return float(*this) != static_cast<float>(rhs);
		}

		constexpr bool operator==(i128 rhs) const noexcept {
			return float(*this) == static_cast<float>(rhs);
		}

		constexpr bool operator!=(i128 rhs) const noexcept {
			return float(*this) != static_cast<float>(rhs);
		}

		constexpr bool operator==(u128 rhs) const noexcept {
			return float(*this) == static_cast<float>(rhs);
		}

		constexpr bool operator!=(u128 rhs) const noexcept {
			return float(*this) != static_cast<float>(rhs);
		}

		constexpr int operator<=>(Float16 rhs) const noexcept {
			if (_isNan() || rhs._isNan()) {
				return 0;
			}

			bool isNegative = int16_t(value) < 0;
			if (isNegative != (int16_t(rhs.value) < 0) && !areZero(rhs)) {
				return isNegative ? -1 : 1;
			}

			if (value < rhs.value) {
				return -1;
			}
			if (value > rhs.value) {
				return 1;
			}
			return 0;
		}

		template <class U>
		constexpr int operator<=>(Float<U> rhs) const noexcept {
			float fThis = static_cast<float>(*this);

			if (fThis < rhs) {
				return -1;
			}
			if (fThis > rhs) {
				return 1;
			}
			return 0;
		}

		template <class U>
		constexpr int operator<=>(U rhs) const noexcept
		    requires(std::is_integral_v<U> || std::is_floating_point_v<U>) {
			float fThis = static_cast<float>(*this);

			if (fThis < rhs) {
				return -1;
			}
			if (fThis > rhs) {
				return 1;
			}
			return 0;
		}

		constexpr int operator<=>(i8 rhs) const noexcept {
			return (this->operator Float<float>()) <=> rhs;
		}

		constexpr int operator<=>(i16 rhs) const noexcept {
			return (this->operator Float<float>()) <=> rhs;
		}

		constexpr int operator<=>(i32 rhs) const noexcept {
			return (this->operator Float<float>()) <=> rhs;
		}

		constexpr int operator<=>(i64 rhs) const noexcept {
			return (this->operator Float<float>()) <=> rhs;
		}

		constexpr int operator<=>(i128 rhs) const noexcept {
			return (this->operator Float<float>()) <=> rhs;
		}

		constexpr int operator<=>(u8 rhs) const noexcept {
			return (this->operator Float<float>()) <=> rhs;
		}

		constexpr int operator<=>(u16 rhs) const noexcept {
			return (this->operator Float<float>()) <=> rhs;
		}

		constexpr int operator<=>(u32 rhs) const noexcept {
			return (this->operator Float<float>()) <=> rhs;
		}

		constexpr int operator<=>(u64 rhs) const noexcept {
			return (this->operator Float<float>()) <=> rhs;
		}

		constexpr int operator<=>(u128 rhs) const noexcept {
			return (this->operator Float<float>()) <=> rhs;
		}

	   private:
		uint16_t value {};

		static constexpr int FLOAT16_EXP_BIAS      = 15;
		static constexpr int FLOAT16_EXP_MAX       = 0x1F;
		static constexpr int FLOAT16_MANTISSA_BITS = 10;
		static constexpr int FLOAT16_MANTISSA_MAX  = 0x3FF;
		static constexpr int FLOAT32_EXP_BIAS      = 127;
		static constexpr int FLOAT32_MANTISSA_BITS = 23;

		static constexpr uint32_t ShiftRightJam(uint32_t i, int dist) {
			return dist < 31 ? (i >> dist) | (i << (-dist & 31) != 0 ? 1U : 0U)
			                 : (i != 0 ? 1U : 0U);
		}

		static constexpr uint64_t ShiftRightJam(uint64_t l, int dist) {
			return dist < 63 ? (l >> dist) | (l << (-dist & 63) != 0 ? 1UL : 0UL)
			                 : (l != 0 ? 1UL : 0UL);
		}

		constexpr bool _isNan() const noexcept { return (value & 0x7FFF) > 0x7C00; }
		constexpr bool areZero(Float16 other) const noexcept {
			return ((value | other.value) & ~0x8000) == 0;
		}
	};
#endif

	inline constexpr u32 ReciprocalApproximate(uint32_t a) noexcept {
		constexpr uint16_t approx_1k0s[] = {0xFFC4, 0xF0BE, 0xE363, 0xD76F, 0xCCAD, 0xC2F0,
		                                    0xBA16, 0xB201, 0xAA97, 0xA3C6, 0x9D7A, 0x97A6,
		                                    0x923C, 0x8D32, 0x887E, 0x8417};
		constexpr uint16_t approx_1k1s[] = {0xF0F1, 0xD62C, 0xBFA1, 0xAC77, 0x9C0A, 0x8DDB,
		                                    0x8185, 0x76BA, 0x6D3B, 0x64D4, 0x5D5C, 0x56B1,
		                                    0x50B6, 0x4B55, 0x4679, 0x4211};

		const int index        = (a >> 27) & 0xF;
		const uint16_t epsilon = a >> 11;
		const uint16_t r0 = approx_1k0s[index] - ((approx_1k1s[index] * (unsigned) epsilon) >> 20);
		const uint32_t sigma0    = ~uint32_t((r0 * uint64_t(a)) >> 7);
		auto r                   = uint32_t((uint32_t(r0) << 16) + ((r0 * uint64_t(sigma0)) >> 24));
		const uint32_t sqrSigma0 = (uint64_t(sigma0) * sigma0) >> 32;
		r += uint32_t((r * uint64_t(sqrSigma0)) >> 48);
		return r;
	}

#ifndef __SIZEOF_FLOAT128__
	struct alignas(16) Float128 : public Struct {
		using __self                  = Float128;
		using __class                 = __Class_Basic<Float128>;
		using __underlying            = Float128;
		using BitsType                = u128;
		using DivisibleArithmeticType = Float128;

		constexpr __self& __ref() noexcept { return *this; }
		constexpr const __self& __ref() const noexcept { return *this; }

		constexpr Float128() noexcept = default;
		// constexpr Float128(const Float128& f) noexcept = default;
		constexpr Float128(float f) noexcept {
			constexpr int floatMaxExponent  = 0xFF;
			constexpr int floatExponentBias = 127;

			const uint32_t bits = std::bit_cast<uint32_t>(f);
			const bool sign     = f < 0;
			int exp             = (bits >> 23) & floatMaxExponent;
			uint32_t sig        = bits & 0x007FFFFF;

			// NaN or infinity
			if (exp == floatMaxExponent) {
				// NaN
				if (sig != 0) {
					value = makeNanBits();
					return;
				}

				// Infinity
				value = sign ? makeNegativeInfinityBits() : makePositiveInfinityBits();
				return;
			}

			// zero or subnormal values
			if (exp == 0) {
				// zero
				if (sig == 0) {
					if (sign)
						value = makeNegativeZeroBits();
					return;
				}

				// subnormal values
				const auto normalized = normalizeFloat(sig);
				exp                   = normalized.first;
				sig                   = normalized.second;
				exp--;
			}

			// normal values
			value = packBits(sign, exp + (EXPONENT_BIAS - floatExponentBias), u128(sig) << 89);
		}

		constexpr Float128(double d) noexcept {
			constexpr int doubleMaxExponent  = 0x07FF;
			constexpr int doubleExponentBias = 1023;

			const uint64_t bits = std::bit_cast<uint64_t>(d);
			const bool sign     = d < 0;
			int exp             = (bits >> 52) & doubleMaxExponent;
			uint64_t sig        = bits & 0x000FFFFFFFFFFFFF;

			// NaN or infinity
			if (exp == doubleMaxExponent) {
				// NaN
				if (sig != 0) {
					value = makeNanBits();
					return;
				}

				// Infinity
				value = sign ? makeNegativeInfinityBits() : makePositiveInfinityBits();
				return;
			}

			// zero or subnormal values
			if (exp == 0) {
				// zero
				if (sig == 0) {
					if (sign)
						value = makeNegativeZeroBits();
					return;
				}

				// subnormal values
				const auto normalized = normalizeDouble(sig);
				exp                   = normalized.first;
				sig                   = normalized.second;
				exp--;
			}

			// normal values
			value = packBits(sign, exp + (EXPONENT_BIAS - doubleExponentBias), u128(sig) << 60);
		}

		constexpr Float128(long double d) noexcept : Float128(double(d)) {}
		constexpr Float128(Float<float> d) noexcept : Float128(float(d)) {}
		constexpr Float128(Float<double> d) noexcept : Float128(double(d)) {}
		constexpr Float128(Float<long double> d) noexcept : Float128(double(d)) {}
#ifndef __FLT16_MAX__
		constexpr Float128(Float16 f) noexcept {
			constexpr int halfMaxExponent  = 0x1F;
			constexpr int halfExponentBias = 15;

			const uint16_t bits = std::bit_cast<uint16_t>(f);
			const bool sign     = f < 0;
			int exp             = (bits >> 10) & halfMaxExponent;
			uint32_t sig        = bits & 0x03FF;

			// NaN or infinity
			if (exp == halfMaxExponent) {
				// NaN
				if (sig != 0) {
					value = makeNanBits();
					return;
				}

				// Infinity
				value = sign ? makeNegativeInfinityBits() : makePositiveInfinityBits();
				return;
			}

			// zero or subnormal values
			if (exp == 0) {
				// zero
				if (sig == 0) {
					if (sign)
						value = makeNegativeZeroBits();
					return;
				}

				// subnormal values
				const auto normalized = normalizeFloat(sig);
				exp                   = normalized.first;
				sig                   = normalized.second;
				exp--;
			}

			// normal values
			value = packBits(sign, exp + (EXPONENT_BIAS - halfExponentBias), u128(sig) << 102);
		}
#endif

		constexpr Float128(uint8_t v) noexcept : Float128(uint32_t(v)) {}
		constexpr Float128(uint16_t v) noexcept : Float128(uint32_t(v)) {}
		constexpr Float128(uint32_t v) noexcept {
			if (v != 0) {
				const int shiftDist = std::countl_zero(v) + 17;
				value = u128((uint64_t(int(0x402E) - shiftDist) << 48) + (uint64_t(v) << shiftDist),
				             0u);
			}
		}
		constexpr Float128(uint64_t v) noexcept {
			if (v != 0) {
				const int shiftDist = std::countl_zero(v) + 49;
				u128 sig;
				if (shiftDist >= 64) {
					sig = u128(v << (shiftDist - 64), 0u);
				} else {
					sig = u128(v) << shiftDist;
				}

				value = packBits(false, 0x406F - shiftDist, sig);
			}
		}
		constexpr Float128(int8_t v) noexcept : Float128(uint32_t(v < 0 ? -v : v)) {
			if (v < 0) {
				value |= u128(1u) << SIGN_SHIFT;
			}
		}
		constexpr Float128(int16_t v) noexcept : Float128(uint32_t(v < 0 ? -v : v)) {
			if (v < 0) {
				value |= u128(1u) << SIGN_SHIFT;
			}
		}
		constexpr Float128(int32_t v) noexcept : Float128(uint32_t(v < 0 ? -v : v)) {
			if (v < 0) {
				value |= u128(1u) << SIGN_SHIFT;
			}
		}
		constexpr Float128(int64_t v) noexcept : Float128(uint64_t(v < 0 ? -v : v)) {
			if (v < 0) {
				value |= u128(1u) << SIGN_SHIFT;
			}
		}

		constexpr Float128(i8 v) noexcept : Float128(int8_t(v)) {}
		constexpr Float128(i16 v) noexcept : Float128(int16_t(v)) {}
		constexpr Float128(i32 v) noexcept : Float128(int(v)) {}
		constexpr Float128(i64 v) noexcept : Float128(int64_t(v)) {}
		constexpr Float128(u8 v) noexcept : Float128(uint32_t(v)) {}
		constexpr Float128(u16 v) noexcept : Float128(uint32_t(v)) {}
		constexpr Float128(u32 v) noexcept : Float128(uint32_t(v)) {}
		constexpr Float128(u64 v) noexcept : Float128(uint64_t(v)) {}

		constexpr Float128(u128 v) noexcept {
			if (v != 0) {
				const int shiftDist = v.High64() == 0 ? 64 + LeadingZeroCount(v.Low64())
				                                      : LeadingZeroCount(v.High64());
				const u128 a        = v << shiftDist >> 15;
				const u128 b        = v << shiftDist << 113;
				const u128 m        = a + ((b - (b >> 127 & (a == 0 ? u128(1u) : u128()))) >> 127);
				const u128 e        = 0x407Du - shiftDist;
				value               = (e << 112) + m;
			}
		}

		constexpr Float128(i128 v) noexcept : Float128(v < 0 ? u128(~v) + 1 : u128(v)) {
			if (v < 0) {
				value |= u128(1u) << SIGN_SHIFT;
			}
		}

		constexpr Float128(const Float128& f) noexcept = default;
		constexpr Float128& operator=(const Float128& f) noexcept = default;

		template <class U>
		constexpr Float128& operator=(U v) noexcept requires(std::is_integral_v<U>) {
			return *this = Float128(v);
		}

		constexpr Float128& operator=(i8 v) noexcept { return *this = Float128(v); }

		constexpr Float128& operator=(i16 v) noexcept { return *this = Float128(v); }

		constexpr Float128& operator=(i32 v) noexcept { return *this = Float128(v); }

		constexpr Float128& operator=(i64 v) noexcept { return *this = Float128(v); }

		constexpr Float128& operator=(i128 v) noexcept { return *this = Float128(v); }

		constexpr Float128& operator=(u8 v) noexcept { return *this = Float128(v); }

		constexpr Float128& operator=(u16 v) noexcept { return *this = Float128(v); }

		constexpr Float128& operator=(u32 v) noexcept { return *this = Float128(v); }

		constexpr Float128& operator=(u64 v) noexcept { return *this = Float128(v); }

		constexpr Float128& operator=(u128 v) noexcept { return *this = Float128(v); }

		constexpr Float128& operator=(float v) noexcept { return *this = Float128(v); }

		constexpr Float128& operator=(double v) noexcept { return *this = Float128(v); }

		constexpr Float128& operator=(Float<float> v) noexcept { return *this = Float128(v); }

		constexpr Float128& operator=(Float<double> v) noexcept { return *this = Float128(v); }

#ifndef __FLT16_MAX__
		constexpr Float128& operator=(Float16 v) noexcept { return *this = Float128(v); }
#endif

	   private:
		constexpr Float128(u64 high, u64 low) noexcept : value {u128(high, low)} {}

	   public:
		constexpr explicit operator Float<float>() const noexcept {
			const bool sign = (value >> 127) != 0;
			int exp         = int((value & EXPONENT_MASK) >> EXPONENT_SHIFT);
			const u128 sig  = value & MANTISSA_MASK;

			// NaN or Inf
			if (exp == 0x7FFF) {
				// NaN
				if (sig != 0) {
					return std::numeric_limits<float>::quiet_NaN();
				}
				// infinity
				return sign ? -std::numeric_limits<float>::infinity()
				            : std::numeric_limits<float>::infinity();
			}

			uint32_t sigQuad =
			    shiftRightJam(uint64_t(sig.High64() | (sig.Low64() != 0 ? 1UL : 0UL)), 18);

			// zero
			if ((uint32_t(exp) | sigQuad) == 0) {
				return sign ? -0.0f : 0.0f;
			}

			exp -= 0x3F81;
			exp = exp < -0x1000 ? -0x1000 : exp;

			return std::bit_cast<float>(packBits32(sign, exp, (sigQuad | 0x40000000)));
		}

		constexpr explicit operator Float<double>() const noexcept {
			const bool sign = (value >> 127) != 0;
			int exp         = int((value & EXPONENT_MASK) >> EXPONENT_SHIFT);
			u128 sig        = value & MANTISSA_MASK;

			// NaN or Inf
			if (exp == 0x7FFF) {
				// NaN
				if (sig != 0) {
					return std::numeric_limits<double>::quiet_NaN();
				}
				// infinity
				return sign ? -std::numeric_limits<double>::infinity()
				            : std::numeric_limits<double>::infinity();
			}

			sig <<= 14;
			uint64_t sigQuad = sig.High64() | (sig.Low64() != 0 ? 1ULL : 0ULL);

			// zero
			if ((uint32_t(exp) | sigQuad) == 0) {
				return sign ? -0.0f : 0.0f;
			}

			exp -= 0x3C01;
			exp = exp < -0x1000 ? -0x1000 : exp;

			return std::bit_cast<double>(packBits64(sign, exp, (sigQuad | 0x4000000000000000)));
		}

		constexpr explicit operator float() const noexcept {
			return static_cast<Float<float>>(*this);
		}
		constexpr explicit operator double() const noexcept {
			return static_cast<Float<double>>(*this);
		}

#ifndef __FLT16_MAX__
		constexpr explicit operator Float16() const noexcept {
			const bool sign = (value >> 127) != 0;
			int exp         = int((value & EXPONENT_MASK) >> EXPONENT_SHIFT);
			const u128 sig  = value & MANTISSA_MASK;

			// NaN or Inf
			if (exp == 0x7FFF) {
				// NaN
				if (sig != 0) {
					return std::bit_cast<Float16>(uint16_t(0x7C00 | 0x200));
				}
				// infinity
				return sign ? std::bit_cast<Float16>(uint16_t(0xFC00))
				            : std::bit_cast<Float16>(uint16_t(0x7C00));
			}

			uint16_t sigHalf =
			    shiftRightJam(uint64_t(sig.High64() | (sig.Low64() != 0 ? 1ULL : 0ULL)), 34);

			// zero
			if ((uint32_t(exp) | sigHalf) == 0) {
				return sign ? std::bit_cast<Float16>(uint16_t(0x8000)) : Float16();
			}

			exp -= 0x3FF1;
			exp = exp < -0x40 ? -0x40 : exp;

			return std::bit_cast<Float16>(packBits16(sign, exp, (sigHalf | 0x4000)));
		}
#endif

		constexpr explicit operator i8() const {
#ifdef Builtin_OVERFLOW_CHECKS
			if (*this < INT8_MIN || *this > INT8_MAX || _isNan())
				throw IntegerOverflowException();
#endif
			constexpr auto twoPow7 = Float128(0x4006000000000000u, 0u);
			constexpr auto one     = Float128(1);

			if (*this < -twoPow7) {
				return i8(INT8_MIN);
			}

			if (*this > +twoPow7) {
				return i8(INT8_MAX);
			}

			if (_isNan()) {
				return i8(0);
			}

			auto q = *this;
			if (value > INT128_MAX) {
				q = -q;
			}

			if (q >= one) {
				auto bits  = std::bit_cast<u128>(q);
				i32 result = uint8_t(UnsafeCast<u8>(bits >> 105) | 0x80) >>
				             ((EXPONENT_BIAS + 8 - 1 - (int) (bits >> 112) & 7));
				if (value > INT128_MAX) {
					result = -result;
				}
				return i8(result);
			}

			return i8(0);
		}
		constexpr explicit operator i16() const {
#ifdef Builtin_OVERFLOW_CHECKS
			if (*this < INT16_MIN || *this > INT16_MAX || _isNan())
				throw IntegerOverflowException();
#endif
			constexpr auto twoPow15 = Float128(0x400E000000000000u, 0u);
			constexpr auto one      = Float128(1);

			if (*this < -twoPow15) {
				return i16(INT16_MIN);
			}

			if (*this > +twoPow15) {
				return i16(INT16_MAX);
			}

			if (_isNan()) {
				return i16(0);
			}

			auto q = *this;
			if (value > INT128_MAX) {
				q = -q;
			}

			if (q >= one) {
				auto bits  = std::bit_cast<u128>(q);
				i32 result = uint16_t(UnsafeCast<u16>(bits >> 97) | 0x8000) >>
				             ((EXPONENT_BIAS + 16 - 1 - (int) (bits >> 112) & 15));
				if (value > INT128_MAX) {
					result = -result;
				}
				return i16(result);
			}

			return i16(0);
		}
		constexpr explicit operator i32() const {
#ifdef Builtin_OVERFLOW_CHECKS
			if (*this < INT32_MIN || *this > INT32_MAX || _isNan())
				throw IntegerOverflowException();
#endif
			constexpr auto twoPow31 = Float128(0x401E000000000000u, 0u);
			constexpr auto one      = Float128(1);

			if (*this < -twoPow31) {
				return INT32_MIN;
			}

			if (*this > +twoPow31) {
				return INT32_MAX;
			}

			if (_isNan()) {
				return 0;
			}

			auto q = *this;
			if (value > INT128_MAX) {
				q = -q;
			}

			if (q >= one) {
				auto bits  = std::bit_cast<u128>(q);
				i64 result = uint32_t(UnsafeCast<u32>(bits >> 81) | 0x80000000) >>
				             ((EXPONENT_BIAS + 32 - 1 - (int) (bits >> 112) & 31));
				if (value > INT128_MAX) {
					result = -result;
				}
				return i32(result);
			}

			return 0;
		}
		constexpr explicit operator i64() const {
#ifdef Builtin_OVERFLOW_CHECKS
			if (*this < INT64_MIN || *this > INT64_MAX || _isNan())
				throw IntegerOverflowException();
#endif
			constexpr auto twoPow63 = Float128(0x403E000000000000u, 0u);
			constexpr auto one      = Float128(1);

			if (*this <= -twoPow63) {
				return INT64_MIN;
			}

			if (*this > +twoPow63) {
				return INT64_MAX;
			}

			if (_isNan()) {
				return 0;
			}

			auto q = *this;
			if (value > INT128_MAX) {
				q = -q;
			}

			if (q >= one) {
				auto bits  = std::bit_cast<u128>(q);
				i64 result = int64_t(uint64_t(UnsafeCast<u64>(bits >> 49) | 0x8000000000000000) >>
				                     ((EXPONENT_BIAS + 64 - 1 - (int) (bits >> 112)) & 63));
				if (value > INT128_MAX) {
					result = -result;
				}
				return result;
			}

			return 0;
		}
		constexpr explicit operator u8() const {
#ifdef Builtin_OVERFLOW_CHECKS
			if (*this < 0 || *this > UINT8_MAX || _isNan())
				throw IntegerOverflowException();
#endif
			constexpr auto twoPow8 = Float128(0x4007000000000000u, 0u);
			constexpr auto one     = Float128(1);

			if (_isNan() || value > INT128_MAX) {
				return u8(0u);
			}

			if (*this > twoPow8) {
				return u8(UINT8_MAX);
			}

			if (*this >= one) {
				u8 result = uint8_t(uint8_t(UnsafeCast<u8>(value >> 105) | 0x80) >>
				                    ((EXPONENT_BIAS + 8 - 1 - (int) (value >> 112)) & 7));

				return result;
			}

			return u8(0u);
		}
		constexpr explicit operator u16() const {
#ifdef Builtin_OVERFLOW_CHECKS
			if (*this < 0 || *this > UINT16_MAX || _isNan())
				throw IntegerOverflowException();
#endif
			constexpr auto twoPow16 = Float128(0x400F000000000000u, 0u);
			constexpr auto one      = Float128(1);

			if (_isNan() || value > INT128_MAX) {
				return u16(0u);
			}

			if (*this > twoPow16) {
				return u16(UINT16_MAX);
			}

			if (*this >= one) {
				u16 result = uint16_t(uint16_t(UnsafeCast<u16>(value >> 97) | 0x8000) >>
				                      ((EXPONENT_BIAS + 16 - 1 - (int) (value >> 112)) & 15));

				return result;
			}

			return u16(0u);
		}
		constexpr explicit operator u32() const {
#ifdef Builtin_OVERFLOW_CHECKS
			if (*this < 0 || *this > UINT32_MAX || _isNan())
				throw IntegerOverflowException();
#endif
			constexpr auto twoPow32 = Float128(0x401F000000000000u, 0u);
			constexpr auto one      = Float128(1);

			if (_isNan() || value > INT128_MAX) {
				return 0u;
			}

			if (*this > twoPow32) {
				return UINT32_MAX;
			}

			if (*this >= one) {
				u32 result = uint32_t(uint32_t(UnsafeCast<u32>(value >> 81) | 0x80000000) >>
				                      ((EXPONENT_BIAS + 32 - 1 - (int) (value >> 112)) & 31));

				return result;
			}

			return 0u;
		}
		constexpr explicit operator u64() const {
#ifdef Builtin_OVERFLOW_CHECKS
			if (*this < 0 || *this > UINT64_MAX || _isNan())
				throw IntegerOverflowException();
#endif
			constexpr auto twoPow64 = Float128(0x403F000000000000u, 0u);
			constexpr auto one      = Float128(1);

			if (_isNan() || value > INT128_MAX) {
				return 0u;
			}

			if (*this > twoPow64) {
				return UINT64_MAX;
			}

			if (*this >= one) {
				u64 result = uint64_t(uint64_t(UnsafeCast<u64>(value >> 49) | 0x8000000000000000) >>
				                      ((EXPONENT_BIAS + 64 - 1 - (int) (value >> 112)) & 63));

				return result;
			}

			return 0u;
		}
		constexpr explicit operator u128() const {
#ifdef Builtin_OVERFLOW_CHECKS
			if (*this < 0 || *this > 340282366920938463463374607431768211455.0 || _isNan())
				throw IntegerOverflowException();
#endif
			constexpr auto twoPow128 = Float128(0x407F000000000000u, 0u);
			constexpr auto one       = Float128(1);

			if (_isNan() || value > INT128_MAX) {
				return 0u;
			}

			if (*this > twoPow128) {
				return UINT128_MAX;
			}

			if (*this >= one) {
				auto shift  = EXPONENT_BIAS + 128 - 1 - int(value >> 112);
				u128 result = ((value << 16) >> 1) | u128(0x8000000000000000u, 0u);
				result >>= (shift & 127);

				return result;
			}

			return 0u;
		}
		constexpr explicit operator i128() const {
#ifdef Builtin_OVERFLOW_CHECKS
			if (*this < -170141183460469231731687303715884105728.0 ||
			    *this > 170141183460469231731687303715884105727.0 || _isNan())
				throw IntegerOverflowException();
#endif
			constexpr auto twoPow127 = Float128(0x407E000000000000u, 0u);
			constexpr auto one       = Float128(1);

			if (*this <= -twoPow127) {
				return INT128_MIN;
			}

			if (*this > +twoPow127) {
				return INT128_MAX;
			}

			if (_isNan()) {
				return 0;
			}

			auto q = *this;
			if (value > INT128_MAX) {
				q = -q;
			}

			if (q >= one) {
				auto bits  = std::bit_cast<u128>(q);
				auto shift = EXPONENT_BIAS + 128 - 1 - int(value >> 112);

				i128 result = (i128((bits << 16) >> 1) | INT128_MIN);
				result      = i128(std::bit_cast<u128>(result) >> (shift & 127));
				if (value > INT128_MAX) {
					result = -result;
				}
				return result;
			}

			return 0;
		}

		constexpr explicit operator int8_t() const { return static_cast<i8>(*this); }
		constexpr explicit operator int16_t() const { return static_cast<i16>(*this); }
		constexpr explicit operator int32_t() const { return static_cast<i32>(*this); }
		constexpr explicit operator int64_t() const { return static_cast<i64>(*this); }
		constexpr explicit operator uint8_t() const { return static_cast<u8>(*this); }
		constexpr explicit operator uint16_t() const { return static_cast<u16>(*this); }
		constexpr explicit operator uint32_t() const { return static_cast<u32>(*this); }
		constexpr explicit operator uint64_t() const { return static_cast<u64>(*this); }

		constexpr Float128 operator+(Float128 rhs) const noexcept {
			const bool lhsSign = ((value & SIGN_MASK) >> SIGN_SHIFT) != 0;
			const bool rhsSign = ((rhs.value & SIGN_MASK) >> SIGN_SHIFT) != 0;
			if (lhsSign == rhsSign) {
				return std::bit_cast<Float128>(addBits(value, rhs.value, lhsSign));
			} else {
				return std::bit_cast<Float128>(subBits(value, rhs.value, lhsSign));
			}
		}

		template <class U>
		friend constexpr U operator+(U lhs, Float128 rhs) noexcept
		    requires(std::is_convertible_v<U, double>&& std::is_constructible_v<U, double> &&
		             !std::is_same_v<U, Float128>) {
			return U(static_cast<double>(lhs) + static_cast<double>(rhs));
		}

		constexpr Float128& operator+=(Float128 rhs) noexcept { return *this = *this + rhs; }

		constexpr Float128 operator-(Float128 rhs) const noexcept {
			const bool lhsSign = ((value & SIGN_MASK) >> SIGN_SHIFT) != 0;
			const bool rhsSign = ((rhs.value & SIGN_MASK) >> SIGN_SHIFT) != 0;
			if (lhsSign == rhsSign) {
				return std::bit_cast<Float128>(subBits(value, rhs.value, lhsSign));
			} else {
				return std::bit_cast<Float128>(addBits(value, rhs.value, lhsSign));
			}
		}

		template <class U>
		friend constexpr U operator-(U lhs, Float128 rhs) noexcept
		    requires(std::is_convertible_v<U, double>&& std::is_constructible_v<U, double> &&
		             !std::is_same_v<U, Float128>) {
			return U(static_cast<double>(lhs) - static_cast<double>(rhs));
		}

		constexpr Float128& operator-=(Float128 rhs) noexcept { return *this = *this - rhs; }

		constexpr Float128& operator++() noexcept { return *this = *this + ONE; }

		constexpr Float128 operator++(int) noexcept {
			Float128 tmp {*this};
			++*this;
			return tmp;
		}

		constexpr Float128& operator--() noexcept { return *this = *this - ONE; }

		constexpr Float128 operator--(int) noexcept {
			Float128 tmp {*this};
			--*this;
			return tmp;
		}

		constexpr Float128 operator*(Float128 rhs) const noexcept {
			const bool lhsSign = ((value & SIGN_MASK) >> SIGN_SHIFT) != 0;
			const bool rhsSign = ((rhs.value & SIGN_MASK) >> SIGN_SHIFT) != 0;
			uint16_t lhsExp    = extractExponent(value);
			uint16_t rhsExp    = extractExponent(rhs.value);
			u128 lhsMantissa   = extractTrailingSignificand(value);
			u128 rhsMantissa   = extractTrailingSignificand(rhs.value);

			const bool resultSign = lhsSign ^ rhsSign;
			uint16_t resultExp;
			u128 resultMantissa;

			// special cases
			if (lhsExp == 0x7FFF) {
				// nan * nan = nan
				if (lhsMantissa != 0 || (rhsExp == 0x7FFF && rhsMantissa != 0))
					return std::bit_cast<Float128>(makeNanBits());

				// inf * 0 = nan
				const bool magBits = (rhsMantissa | rhsExp) != 0;
				if (!magBits)
					return std::bit_cast<Float128>(makeNanBits());

				// inf * x = inf
				return resultSign ? std::bit_cast<Float128>(makeNegativeInfinityBits())
				                  : std::bit_cast<Float128>(makePositiveInfinityBits());
			}
			if (rhsExp == 0x7FFF) {
				// x * nan = nan
				if (rhsMantissa != 0)
					return std::bit_cast<Float128>(makeNanBits());

				// 0 * inf = nan
				const bool magBits = (lhsMantissa | lhsExp) != 0;
				if (!magBits)
					return std::bit_cast<Float128>(makeNanBits());

				// x * inf = inf
				return resultSign ? std::bit_cast<Float128>(makeNegativeInfinityBits())
				                  : std::bit_cast<Float128>(makePositiveInfinityBits());
			}

			// zero and subnormal values
			if (lhsExp == 0) {
				// 0 * x = 0
				if (lhsMantissa == 0)
					return resultSign ? std::bit_cast<Float128>(makeNegativeZeroBits())
					                  : Float128();

				const auto normalized = normalizeSubnormal(lhsMantissa);
				lhsExp                = normalized.first;
				lhsMantissa           = normalized.second;
			}
			if (rhsExp == 0) {
				// x * 0 = 0
				if (rhsMantissa == 0)
					return resultSign ? std::bit_cast<Float128>(makeNegativeZeroBits())
					                  : Float128();

				const auto normalized = normalizeSubnormal(rhsMantissa);
				rhsExp                = normalized.first;
				rhsMantissa           = normalized.second;
			}

			// exponent sum
			resultExp = lhsExp + rhsExp - EXPONENT_BIAS - 1;

			// multiply mantissas
			lhsMantissa |= HIDDEN_BIT;
			rhsMantissa <<= 16;
			const auto mul               = WideningMul128u(lhsMantissa, rhsMantissa);
			const auto mulLow            = std::get<0>(mul);
			const auto mulHigh           = std::get<1>(mul);
			uint64_t resultMantissaExtra = mulLow != 0 || mulHigh != 0;
			WrappingAdd(mulHigh, lhsMantissa, resultMantissa);

			// process overflow
			if (resultMantissa >= (u128(1u) << 113)) {
				++resultExp;
				resultMantissa = shortShiftRightJamExtra(resultMantissa, resultMantissaExtra, 1,
				                                         resultMantissaExtra);
			}

			return std::bit_cast<Float128>(
			    roundPackBits(resultSign, resultExp, resultMantissa, resultMantissaExtra));
		}

		template <class U>
		friend constexpr U operator*(U lhs, Float128 rhs) noexcept
		    requires(std::is_convertible_v<U, double>&& std::is_constructible_v<U, double> &&
		             !std::is_same_v<U, Float128>) {
			return U(static_cast<double>(lhs) * static_cast<double>(rhs));
		}

		constexpr Float128& operator*=(Float128 rhs) noexcept { return *this = *this * rhs; }

		constexpr Float128 operator/(Float128 rhs) const noexcept {
			const bool lhsSign = ((value & SIGN_MASK) >> SIGN_SHIFT) != 0;
			const bool rhsSign = ((rhs.value & SIGN_MASK) >> SIGN_SHIFT) != 0;
			uint16_t lhsExp    = extractExponent(value);
			uint16_t rhsExp    = extractExponent(rhs.value);
			u128 lhsMantissa   = extractTrailingSignificand(value);
			u128 rhsMantissa   = extractTrailingSignificand(rhs.value);

			const bool resultSign = lhsSign ^ rhsSign;

			// special cases
			if (lhsExp == 0x7FFF) {
				// NaN / x = NaN
				if (lhsMantissa != 0)
					return std::bit_cast<Float128>(makeNanBits());

				// inf / inf(NaN) = NaN
				if (rhsExp == 0x7FFF)
					return std::bit_cast<Float128>(makeNanBits());

				// inf / x
				return resultSign ? std::bit_cast<Float128>(makeNegativeInfinityBits())
				                  : std::bit_cast<Float128>(makePositiveInfinityBits());
			}
			if (rhsExp == 0x7FFF) {
				// x / NaN = NaN
				if (rhsMantissa != 0)
					return std::bit_cast<Float128>(makeNanBits());

				// x / inf = 0
				return resultSign ? std::bit_cast<Float128>(makeNegativeZeroBits()) : Float128();
			}

			// zero and subnormal values
			if (rhsExp == 0) {
				// x / 0
				if (rhsMantissa == 0) {
					// 0 / 0 = NaN
					if ((lhsExp | lhsMantissa) == 0)
						return std::bit_cast<Float128>(makeNanBits());

					// x / 0 = inf
					return resultSign ? std::bit_cast<Float128>(makeNegativeInfinityBits())
					                  : std::bit_cast<Float128>(makePositiveInfinityBits());
				}

				// normalization
				const auto normalized = normalizeSubnormal(rhsMantissa);
				rhsExp                = normalized.first;
				rhsMantissa           = normalized.second;
			}
			if (lhsExp == 0) {
				// 0 / x = 0
				if (lhsMantissa == 0)
					return resultSign ? std::bit_cast<Float128>(makeNegativeZeroBits())
					                  : Float128();

				// normalization
				const auto normalized = normalizeSubnormal(lhsMantissa);
				lhsExp                = normalized.first;
				lhsMantissa           = normalized.second;
			}

			// compute exponent
			int16_t resultExp = lhsExp - rhsExp + EXPONENT_BIAS - 1;

			// divide mantissas
			lhsMantissa |= HIDDEN_BIT;
			rhsMantissa |= HIDDEN_BIT;

			u128 rem = lhsMantissa;
			if (lhsMantissa < rhsMantissa) {
				--resultExp;
				rem = lhsMantissa + lhsMantissa;
			}

			const uint32_t recip =
			    ReciprocalApproximate(UnsafeCast<u32>((rhsMantissa >> 81).Low64()));

			uint32_t q;
			uint32_t qs[3];
			u128 term;

			for (int ix = 3;;) {
				uint64_t q64 = uint64_t(UnsafeCast<u32>(rem >> 83)) * recip;

				q = uint32_t((q64 + 0x80000000) >> 32);
				if (--ix < 0)
					break;

				rem <<= 29;
				WrappingMultiply(rhsMantissa, u32(q), term);
				WrappingSubtract(rem, term, rem);
				if ((rem & SIGN_MASK) != 0) {
					--q;
					WrappingAdd(rem, rhsMantissa, rem);
				}
				qs[ix] = q;
			}

			if (((q + 1) & 7) < 2) {
				rem <<= 29;
				WrappingMultiply(rhsMantissa, u32(q), term);
				WrappingSubtract(rem, term, rem);
				if ((rem & SIGN_MASK) != 0) {
					--q;
					WrappingAdd(rem, rhsMantissa, rem);
				} else if (rhsMantissa <= rem) {
					++q;
					WrappingSubtract(rem, rhsMantissa, rem);
				}
				if (rem != 0) {
					q |= 1;
				}
			}

			const auto resultMantissaExtra = uint64_t(q) << 60;
			term                           = u128(0u, qs[1]) << 54;
			u128 resultMantissa;
			WrappingAdd(u128(uint64_t(qs[2]) << 19, (uint64_t(qs[0]) << 25) + (q >> 4)), term,
			            resultMantissa);
			return std::bit_cast<Float128>(
			    roundPackBits(resultSign, resultExp, resultMantissa, resultMantissaExtra));
		}

		template <class U>
		friend constexpr U operator/(U lhs, Float128 rhs) noexcept
		    requires(std::is_convertible_v<U, double>&& std::is_constructible_v<U, double> &&
		             !std::is_same_v<U, Float128>) {
			return U(static_cast<double>(lhs) / static_cast<double>(rhs));
		}

		constexpr Float128& operator/=(Float128 rhs) noexcept { return *this = *this / rhs; }

		constexpr Float128 operator%(Float128 rhs) const noexcept {
			// return (this.Abs - (right.Abs * (this.Abs / right.Abs).Floor)) * this.Sign;
			const auto lhsAbs = std::bit_cast<Float128>(value & (~SIGN_MASK));
			const auto rhsAbs = std::bit_cast<Float128>(rhs.value & (~SIGN_MASK));
			const auto sign   = *this < Float128() ? -1 : *this > Float128() ? 1 : 0;

			auto xy               = lhsAbs / rhsAbs;
			const auto xyExponent = extractExponent(xy.value);
			const auto xySign     = std::bit_cast<i128>(xy) < 0;
			Float128 y;

			if (xyExponent < (0x3FFF + 112) && xy != Float128()) {
				const auto largeNumber = std::bit_cast<Float128>(u128(0x406F000000000000u, 0u));
				if (xySign)
				{
					y = xy - largeNumber + largeNumber - xy;
				} else {
					y = xy + largeNumber - largeNumber - xy;
				}

				if (xyExponent <= 0x3FFF - 1)
				{
					xy = xySign ? -1 : 0;
				} else if (y > Float128()) {
					xy = xy + y - 1;
				} else {
					xy += y;
				}
			}

			return lhsAbs - (rhsAbs * xy) * sign;
		}

		template <class U>
		friend constexpr U operator%(U lhs, Float128 rhs) noexcept
		    requires(std::is_convertible_v<U, double>&& std::is_constructible_v<U, double> &&
		             !std::is_same_v<U, Float128>) {
			return U(static_cast<double>(lhs) % static_cast<double>(rhs));
		}

		constexpr Float128& operator%=(Float128 rhs) noexcept { return *this = *this % rhs; }

		constexpr Float128 operator+() const noexcept { return *this; }

		constexpr Float128 operator-() const noexcept {
			return std::bit_cast<Float128>(value ^ SIGN_MASK);
		}

		// constexpr const T& ref() const noexcept { return value; }

		constexpr bool operator==(Float128 rhs) const noexcept {
			if (_isNan() || rhs._isNan()) {
				return false;
			}
			return value == rhs.value || areZero(rhs);
		}

		constexpr bool operator!=(Float128 rhs) const noexcept { return !(*this == rhs); }

		template <class U>
		constexpr bool operator==(U rhs) const noexcept
		    requires(std::is_integral_v<U> || std::is_floating_point_v<U>) {
			return *this == static_cast<Float128>(rhs);
		}

		template <class U>
		constexpr bool operator!=(U rhs) const noexcept
		    requires(std::is_integral_v<U> || std::is_floating_point_v<U>) {
			return !(*this == rhs);
		}

		template <class U>
		constexpr bool operator==(Float<U> rhs) const noexcept {
			return *this == Float128(rhs);
		}

		template <class U>
		constexpr bool operator!=(Float<U> rhs) const noexcept {
			return !(*this == rhs);
		}

#ifndef __FLT16_MAX__
		constexpr bool operator==(Float16 rhs) const noexcept { return *this == Float128(rhs); }

		template <class U>
		constexpr bool operator!=(Float16 rhs) const noexcept {
			return !(*this == rhs);
		}
#endif

		constexpr bool operator==(i8 rhs) const noexcept { return *this == Float128(rhs); }

		constexpr bool operator!=(i8 rhs) const noexcept { return !(*this == rhs); }

		constexpr bool operator==(i16 rhs) const noexcept { return *this == Float128(rhs); }

		constexpr bool operator!=(i16 rhs) const noexcept { return !(*this == rhs); }

		constexpr bool operator==(i32 rhs) const noexcept { return *this == Float128(rhs); }

		constexpr bool operator!=(i32 rhs) const noexcept { return !(*this == rhs); }

		constexpr bool operator==(i64 rhs) const noexcept { return *this == Float128(rhs); }

		constexpr bool operator!=(i64 rhs) const noexcept { return !(*this == rhs); }

		constexpr bool operator==(u8 rhs) const noexcept { return *this == Float128(rhs); }

		constexpr bool operator!=(u8 rhs) const noexcept { return !(*this == rhs); }

		constexpr bool operator==(u16 rhs) const noexcept { return *this == Float128(rhs); }

		constexpr bool operator!=(u16 rhs) const noexcept { return !(*this == rhs); }

		constexpr bool operator==(u32 rhs) const noexcept { return *this == Float128(rhs); }

		constexpr bool operator!=(u32 rhs) const noexcept { return !(*this == rhs); }

		constexpr bool operator==(u64 rhs) const noexcept { return *this == Float128(rhs); }

		constexpr bool operator!=(u64 rhs) const noexcept { return !(*this == rhs); }

		constexpr bool operator==(i128 rhs) const noexcept { return *this == Float128(rhs); }

		constexpr bool operator!=(i128 rhs) const noexcept { return !(*this == rhs); }

		constexpr bool operator==(u128 rhs) const noexcept { return *this == Float128(rhs); }

		constexpr bool operator!=(u128 rhs) const noexcept { return !(*this == rhs); }

		constexpr int operator<=>(Float128 rhs) const noexcept {
			if (_isNan() || rhs._isNan()) {
				return 0;
			}

			bool isNegative    = value > INT128_MAX;
			bool rhsIsNegative = rhs.value > INT128_MAX;
			if (isNegative != rhsIsNegative && !areZero(rhs)) {
				return isNegative ? -1 : 1;
			}

			if ((value < rhs.value) ^ isNegative) {
				return -1;
			}
			if ((value > rhs.value) ^ rhsIsNegative) {
				return 1;
			}
			return 0;
		}

		template <class U>
		constexpr int operator<=>(Float<U> rhs) const noexcept {
			return *this <=> Float128(rhs);
		}

		template <class U>
		constexpr int operator<=>(U rhs) const noexcept
		    requires(std::is_integral_v<U> || std::is_floating_point_v<U>) {
			return *this <=> Float128(rhs);
		}

#ifndef __FLT16_MAX__
		constexpr int operator<=>(Float16 rhs) const noexcept { return *this == Float128(rhs); }
#endif

		constexpr int operator<=>(i8 rhs) const noexcept { return *this <=> Float128(rhs); }

		constexpr int operator<=>(i16 rhs) const noexcept { return *this <=> Float128(rhs); }

		constexpr int operator<=>(i32 rhs) const noexcept { return *this <=> Float128(rhs); }

		constexpr int operator<=>(i64 rhs) const noexcept { return *this <=> Float128(rhs); }

		constexpr int operator<=>(i128 rhs) const noexcept { return *this <=> Float128(rhs); }

		constexpr int operator<=>(u8 rhs) const noexcept { return *this <=> Float128(rhs); }

		constexpr int operator<=>(u16 rhs) const noexcept { return *this <=> Float128(rhs); }

		constexpr int operator<=>(u32 rhs) const noexcept { return *this <=> Float128(rhs); }

		constexpr int operator<=>(u64 rhs) const noexcept { return *this <=> Float128(rhs); }

		constexpr int operator<=>(u128 rhs) const noexcept { return *this <=> Float128(rhs); }

	   private:
		u128 value {};

		static constexpr size_t SIGN_SHIFT     = 127;
		static constexpr size_t EXPONENT_BITS  = 15;
		static constexpr size_t MANTISSA_BITS  = 112;
		static constexpr size_t EXPONENT_SHIFT = MANTISSA_BITS;
		static constexpr u128 SIGN_MASK        = u128(1u) << SIGN_SHIFT;
		static constexpr u128 EXPONENT_MASK = ((u128(1u) << EXPONENT_BITS) - 1u) << EXPONENT_SHIFT;
		static constexpr u128 MANTISSA_MASK = ((u128(1u) << MANTISSA_BITS) - 1u);
		static constexpr u128 HIDDEN_BIT    = u128(1u) << MANTISSA_BITS;
		static constexpr int EXPONENT_BIAS  = 16383;
		static const Float128 ONE;

		constexpr Float128(bool sign, uint16_t exp, u128 sig) noexcept
		    : value {packBits(sign, exp, sig)} {}

		static inline constexpr u128 packBits(bool sign, uint16_t exp, u128 sig) noexcept {
			return ((sign ? u128(1u) : u128()) << SIGN_SHIFT) +
			       ((u128(exp) << EXPONENT_SHIFT) & EXPONENT_MASK) + (sig);
		}

		static inline constexpr uint16_t packBits16(bool sign, int16_t exp, uint16_t sig) noexcept {
			constexpr uint16_t roundIncrement = 0x8;

			uint8_t roundBits = sig & 0xF;
			if (uint16_t(exp) >= 0x1D) {
				if (exp < 0) {
					sig       = shiftRightJam((unsigned) sig, -exp);
					exp       = 0;
					roundBits = sig & 0xF;
				} else if (exp > 0x1D || sig + roundIncrement >= 0x8000) {
					return sign ? 0xFC00 : 0x7C00;
				}
			}

			sig = (sig + roundIncrement) >> 4;
			sig &= uint16_t(~(((roundBits ^ 8) != 0 ? 0 : 1) & 1));

			if (sig == 0) {
				exp = 0;
			}

			return uint16_t(((sign ? 1 : 0) << 15) + (exp << 10) + (sig));
		}

		static inline constexpr uint32_t packBits32(bool sign, int16_t exp, uint32_t sig) noexcept {
			constexpr uint16_t roundIncrement = 0x40;

			uint8_t roundBits = sig & 0x7F;
			if (uint16_t(exp) >= 0xFD) {
				if (exp < 0) {
					sig       = shiftRightJam(sig, -exp);
					exp       = 0;
					roundBits = sig & 0x7F;
				} else if (exp > 0xFD || sig + roundIncrement >= 0x80000000) {
					return std::bit_cast<uint32_t>(sign ? -std::numeric_limits<float>::infinity()
					                                    : std::numeric_limits<float>::infinity());
				}
			}

			sig = (sig + roundIncrement) >> 7;
			sig &= uint32_t(~(((roundBits ^ 0x40) != 0 ? 0 : 1) & 1));

			if (sig == 0) {
				exp = 0;
			}

			return uint32_t((sign ? 1ULL << 31 : 0ull) + (((uint64_t) exp) << 23) + (sig));
		}

		static inline constexpr uint64_t packBits64(bool sign, int16_t exp, uint64_t sig) noexcept {
			constexpr uint16_t roundIncrement = 0x200;

			uint64_t roundBits = sig & 0x3FF;
			if (uint16_t(exp) >= 0x7FD) {
				if (exp < 0) {
					sig       = shiftRightJam(sig, -exp);
					exp       = 0;
					roundBits = sig & 0x3FF;
				} else if (exp > 0x7FD || sig + roundIncrement >= 0x8000000000000000) {
					return std::bit_cast<uint64_t>(sign ? -std::numeric_limits<double>::infinity()
					                                    : std::numeric_limits<double>::infinity());
				}
			}

			sig = (sig + roundIncrement) >> 10;
			sig &= uint64_t(~(((roundBits ^ 0x200) != 0 ? 0 : 1) & 1));

			if (sig == 0) {
				exp = 0;
			}

			return uint64_t((sign ? 1ULL << 63 : 0ull) + (((uint64_t) exp) << 52) + (sig));
		}

		static inline constexpr u128 makeNegativeZeroBits() noexcept {
			return u128(1u) << SIGN_SHIFT;
		}

		static inline constexpr u128 makeNanBits() noexcept {
			return EXPONENT_MASK | (u128(1u) << (EXPONENT_SHIFT - 1));
		}

		static inline constexpr u128 makePositiveInfinityBits() noexcept { return EXPONENT_MASK; }

		static inline constexpr u128 makeNegativeInfinityBits() noexcept {
			return EXPONENT_MASK | (u128(1u) << SIGN_SHIFT);
		}

		static inline constexpr std::pair<int, uint32_t> normalizeFloat(uint32_t sig) noexcept {
			int shiftDist = std::countl_zero(sig) - 8;
			return std::make_pair(1 - shiftDist, sig << shiftDist);
		}

		static inline constexpr std::pair<int, uint64_t> normalizeDouble(uint64_t sig) noexcept {
			int shiftDist = std::countl_zero(sig) - 11;
			return std::make_pair(1 - shiftDist, sig << shiftDist);
		}

		static inline constexpr std::pair<uint16_t, u128> normalizeSubnormal(u128 sig) noexcept {
			const int shiftDist = leadingZeroCount(sig) - 15;
			return std::make_pair(1 - shiftDist, sig << shiftDist);
		}

		static inline constexpr uint32_t shiftRightJam(uint32_t i, int dist) noexcept {
			return dist < 31 ? (i >> dist) | (i << (-dist & 31) != 0 ? 1U : 0U)
			                 : (i != 0 ? 1U : 0U);
		}

		static inline constexpr uint64_t shiftRightJam(uint64_t l, int dist) noexcept {
			return dist < 63 ? (l >> dist) | (l << (-dist & 63) != 0 ? 1UL : 0UL)
			                 : (l != 0 ? 1UL : 0UL);
		}

		static inline constexpr u128 shiftRightJam(u128 l, int dist) noexcept {
			return dist < 127 ? (l >> dist) | (l << (-dist & 127) != 0 ? 1UL : 0UL)
			                  : (l != 0 ? 1UL : 0UL);
		}

		inline constexpr bool _isNan() const noexcept {
			return (value & (~SIGN_MASK)) > EXPONENT_MASK;
		}

		inline constexpr bool _isInf() const noexcept {
			return (value & (~SIGN_MASK)) == EXPONENT_MASK;
		}

		inline constexpr bool _isZero() const noexcept { return (value & (~SIGN_MASK)) == 0; }

		constexpr bool areZero(Float128 other) const noexcept {
			return ((value | other.value) & ~SIGN_MASK) == 0;
		}

		constexpr u128 mantissaWithHiddenBit() const noexcept {
			u128 mantissa  = value & MANTISSA_MASK;
			const u128 exp = value & EXPONENT_MASK;
			if (exp != 0) {
				mantissa |= HIDDEN_BIT;
			}

			return mantissa;
		}

		static constexpr unsigned leadingZeroCount(u128 bits) noexcept {
			return bits.High64() == 0 ? 64 + LeadingZeroCount(bits.Low64())
			                          : LeadingZeroCount(bits.High64());
		}

		static constexpr uint16_t extractExponent(u128 bits) noexcept {
			return uint16_t((bits >> EXPONENT_SHIFT) & 0x7FFF);
		}

		static constexpr u128 extractTrailingSignificand(u128 bits) noexcept {
			return bits & MANTISSA_MASK;
		}

		static constexpr u128 shortShiftRightJamExtra(u128 a, uint64_t extra, int dist,
		                                              uint64_t& out) noexcept {
			const int negDist    = -dist;
			const uint64_t aHigh = a.High64();
			const uint64_t aLow  = a.Low64();

			const uint64_t aHighShifted = aHigh >> dist;
			const uint64_t aLowShifted  = (aHigh << (negDist & 63)) | (aLow >> dist);
			out                         = (aLow << (negDist & 63)) | (extra != 0 ? 1ull : 0ull);
			return u128(aHighShifted, aLowShifted);
		}

		static constexpr u128 shiftRightJamExtra(u128 a, uint64_t extra, int dist,
		                                         uint64_t& out) noexcept {
			uint16_t u8NegDist;
			u128 z;
			uint64_t a64 = a.High64();
			uint64_t a0  = a.Low64();

			u8NegDist = -dist;
			if (dist < 64) {
				z   = u128(a64 >> dist, a64 << (u8NegDist & 63) | a0 >> dist);
				out = a0 << (u8NegDist & 63);
			} else {
				uint64_t z0  = 0;
				uint64_t z64 = 0;

				if (dist == 64) {
					z0  = a64;
					out = a0;
				} else {
					extra |= a0;

					if (dist < 128) {
						z0  = a64 >> (dist & 63);
						out = a64 << (u8NegDist & 63);
					} else {
						z0  = 0;
						out = (dist == 128) ? a64 : uint64_t(a64 != 0);
					}
				}

				z = u128(z64, z0);
			}

			out |= uint64_t(extra != 0);
			return z;
		}

		static constexpr u128 roundPackBits(bool sign, int exp, u128 sig, uint64_t extra) noexcept {
			bool needIncrement = extra >= 0x8000'0000'0000'0000;
			uint64_t high, low;

			if (uint32_t(exp) >= 0x7FFD) {
				if (exp < 0) {
					const bool isTiny = (exp < -1) || !needIncrement ||
					                    sig < u128(0x0001FFFFFFFFFFFFu, 0xFFFFFFFFFFFFFFFFu);
					sig           = shiftRightJamExtra(sig, extra, -exp, extra);
					exp           = 0;
					needIncrement = extra >= 0x8000'0000'0000'0000;
				} else if (exp > 0x7FFD || ((exp == 0x7FFD) &&
				                            sig == u128(0x0001FFFFFFFFFFFFu, 0xFFFFFFFFFFFFFFFFu) &&
				                            needIncrement)) {
					return u128(packBits64(sign, 0x7FFF, 0), 0u);
				}
			}

			if (needIncrement) {
				const u128 sig128 = sig + u128(1u);
				sig =
				    sig128 & u128(UINT64_MAX,
				                  sig128.Low64() & ~uint64_t((extra & 0x7FFF'FFFF'FFFF'FFFF) == 0));
			} else if (sig == 0) {
				exp = 0;
			}

			return packBits(sign, exp, sig);
		}

		static constexpr u128 normalizeRoundPackBits(bool sign, int exp, u128 sig) noexcept {
			uint64_t extra;
			const int shiftDist = leadingZeroCount(sig) - 15;
			exp -= shiftDist;

			if (shiftDist >= 0) {
				if (shiftDist != 0) {
					sig <<= shiftDist;
				}

				if (uint32_t(exp) < 0x7FFD) {
					return packBits(sign, sig != 0 ? exp : 0, sig);
				}

				extra = 0;
			} else {
				sig = shortShiftRightJamExtra(sig, 0, -shiftDist, extra);
			}

			return roundPackBits(sign, exp, sig, extra);
		}

		static constexpr u128 addBits(u128 lhs, u128 rhs, bool sign) noexcept {
			const int16_t lhsExp = extractExponent(lhs);
			const int16_t rhsExp = extractExponent(rhs);
			u128 lhsMantissa     = extractTrailingSignificand(lhs);
			u128 rhsMantissa     = extractTrailingSignificand(rhs);
			u128 resultMantissa;
			u128 result;
			uint64_t resultMantissaExtra = 0;

			int deltaExp  = lhsExp - rhsExp;
			int resultExp = 0;

			// same exponent
			if (deltaExp == 0) {
				if (lhsExp == 0x7FFF) {
					// NaN + NaN/inf = NaN
					if ((lhsMantissa | rhsMantissa) != 0)
						return makeNanBits();
					// inf + inf = inf
					return lhs;
				}

				WrappingAdd(lhsMantissa, rhsMantissa, resultMantissa);

				// subnormal values
				if (lhsExp == 0)
					return packBits(sign, 0, resultMantissa);
				resultExp = lhsExp;
				resultMantissa |= (u128(1u) << 113);
				resultMantissa = shortShiftRightJamExtra(resultMantissa, resultMantissaExtra, 1,
				                                         resultMantissaExtra);
				return roundPackBits(sign, resultExp, resultMantissa, resultMantissaExtra);
			}
			// small + large
			if (deltaExp < 0) {
				if (rhsExp == 0x7FFF) {
					// x + NaN = NaN
					if (rhsMantissa != 0)
						return makeNanBits();

					// x + inf = inf
					result = sign ? makeNegativeInfinityBits() : makePositiveInfinityBits();
					return result;
				}

				resultExp = rhsExp;
				if (lhsExp != 0) {
					lhsMantissa |= HIDDEN_BIT;
				} else {
					++deltaExp;
					resultMantissaExtra = 0;
					if (deltaExp == 0) {
						WrappingAdd(lhsMantissa | HIDDEN_BIT, rhsMantissa, resultMantissa);
						--resultExp;
						if (resultMantissa < (u128(1u) << 113)) {
							return roundPackBits(sign, resultExp, resultMantissa,
							                     resultMantissaExtra);
						}
						++resultExp;

						resultMantissa = shortShiftRightJamExtra(
						    resultMantissa, resultMantissaExtra, 1, resultMantissaExtra);
						return roundPackBits(sign, resultExp, resultMantissa, resultMantissaExtra);
					}
				}

				lhsMantissa = shiftRightJamExtra(lhsMantissa, 0, -deltaExp, resultMantissaExtra);
				// large + small
			} else {
				if (lhsExp == 0x7FFF) {
					// NaN + x = NaN
					if (lhsMantissa != 0)
						return makeNanBits();

					// inf + x = inf
					result = lhs;
					return result;
				}

				resultExp = lhsExp;
				if (rhsExp != 0) {
					rhsMantissa |= HIDDEN_BIT;
				} else {
					--deltaExp;
					resultMantissaExtra = 0;
					if (deltaExp == 0) {
						WrappingAdd(lhsMantissa | HIDDEN_BIT, rhsMantissa, resultMantissa);
						--resultExp;
						if (resultMantissa < (u128(1u) << 113)) {
							return roundPackBits(sign, resultExp, resultMantissa,
							                     resultMantissaExtra);
						}
						++resultExp;

						resultMantissa = shortShiftRightJamExtra(
						    resultMantissa, resultMantissaExtra, 1, resultMantissaExtra);
						return roundPackBits(sign, resultExp, resultMantissa, resultMantissaExtra);
					}
				}

				rhsMantissa = shiftRightJamExtra(rhsMantissa, 0, deltaExp, resultMantissaExtra);
			}

			WrappingAdd(lhsMantissa | HIDDEN_BIT, rhsMantissa, resultMantissa);
			--resultExp;
			if (resultMantissa < (u128(1u) << 113)) {
				return roundPackBits(sign, resultExp, resultMantissa, resultMantissaExtra);
			}
			++resultExp;

			resultMantissa = shortShiftRightJamExtra(resultMantissa, resultMantissaExtra, 1,
			                                         resultMantissaExtra);
			return roundPackBits(sign, resultExp, resultMantissa, resultMantissaExtra);
		}

		static constexpr u128 subBits(u128 lhs, u128 rhs, bool sign) noexcept {
			const int16_t lhsExp = extractExponent(lhs);
			const int16_t rhsExp = extractExponent(rhs);
			u128 lhsMantissa     = extractTrailingSignificand(lhs) << 4;
			u128 rhsMantissa     = extractTrailingSignificand(rhs) << 4;
			u128 resultMantissa;
			u128 result;

			int deltaExp  = lhsExp - rhsExp;
			int resultExp = 0;

			// large - small
			if (deltaExp > 0) {
				if (lhsExp == 0x7FFF) {
					// NaN - x = NaN
					if (lhsMantissa != 0)
						return makeNanBits();

					// inf - x = inf
					return lhs;
				}

				if (rhsExp != 0) {
					rhsMantissa |= u128(0x0010000000000000u, 0u);
				} else {
					--deltaExp;
					if (deltaExp == 0) {
						resultExp = lhsExp;
						lhsMantissa |= u128(0x0010000000000000u, 0u);
						WrappingSubtract(lhsMantissa, rhsMantissa, resultMantissa);
						return normalizeRoundPackBits(sign, resultExp - 5, resultMantissa);
					}
				}

				rhsMantissa = shiftRightJam(rhsMantissa, deltaExp);
				resultExp   = lhsExp;
				lhsMantissa |= u128(0x0010000000000000u, 0u);
				WrappingSubtract(lhsMantissa, rhsMantissa, resultMantissa);
				return normalizeRoundPackBits(sign, resultExp - 5, resultMantissa);
			}
			// small - large
			if (deltaExp < 0) {
				if (rhsExp == 0x7FFF) {
					// x - NaN = NaN
					if (rhsMantissa != 0)
						return makeNanBits();

					// x - inf = inf
					return u128(packBits64(sign ^ true, 0x7FFF, 0), 0u);
				}

				if (lhsExp != 0) {
					lhsMantissa |= u128(0x0010000000000000u, 0u);
				} else {
					++deltaExp;
					if (deltaExp == 0) {
						resultExp = rhsExp;
						rhsMantissa |= u128(0x0010000000000000u, 0u);
						sign = !sign;
						WrappingSubtract(rhsMantissa, lhsMantissa, resultMantissa);
						return normalizeRoundPackBits(sign, resultExp - 5, resultMantissa);
					}
				}

				lhsMantissa = shiftRightJam(lhsMantissa, -deltaExp);
				resultExp   = rhsExp;
				rhsMantissa |= u128(0x0010000000000000u, 0u);
				sign = !sign;
				WrappingSubtract(rhsMantissa, lhsMantissa, resultMantissa);
				return normalizeRoundPackBits(sign, resultExp - 5, resultMantissa);
			}
			// inf - inf = NaN
			if (lhsExp == 0x7FFF)
				return makeNanBits();

			resultExp = lhsExp;
			if (resultExp == 0)
				resultExp = 1;
			if (lhsMantissa > rhsMantissa) {
				WrappingSubtract(lhsMantissa, rhsMantissa, resultMantissa);
				return normalizeRoundPackBits(sign, resultExp - 5, resultMantissa);
			}
			if (lhsMantissa < rhsMantissa) {
				sign = !sign;
				WrappingSubtract(rhsMantissa, lhsMantissa, resultMantissa);
				return normalizeRoundPackBits(sign, resultExp - 5, resultMantissa);
			}

			return 0u;
		}

		friend std::string DebugPrintFloat128(Float128 value);
	};

	inline constexpr Float128 Float128::ONE = Float128(1.0);

	static_assert(sizeof(Float128) == sizeof(u128));
#endif

#ifdef __FLT16_MAX__
	using f16 = Float<_Float16>;
#else
	using f16  = Float16;
#endif
	using f32  = Float<float>;
	using f64  = Float<double>;
	using fext = Float<long double>;
#ifdef __SIZEOF_FLOAT128__
	using f128 = Float<__float128>;
#else
	using f128 = Float128;
#endif

	inline std::string DebugPrintFloat128(f128 value) {
		constexpr f128 divTen = 0.1;
		constexpr f128 mulTen = 10;

		const bool sign = std::bit_cast<i128>(value) < 0;

		if (value._isNan()) {
			return "nan";
		}

		if (value._isInf()) {
			return sign ? "-inf" : "inf";
		}

		if (value._isZero()) {
			return sign ? "-0" : "0";
		}

		// i128 result = (i128((bits << 16) >> 1) | INT128_MIN) >>
		// (EXPONENT_BIAS + 128 - 1 - (int) (bits >> 112));
		if (value > INT128_MAX || value < INT128_MIN) {
			return std::to_string(static_cast<double>(value));
		}

		auto integerPart   = static_cast<i128>(value);
		std::string result = DebugPrintInt128(integerPart);
		integerPart        = integerPart < 0 ? -integerPart : integerPart;
		if (integerPart == 0 && value < 0)
			result = "-0";
		value = value < 0 ? -value : value;
		value = value - integerPart;
		if (value._isZero()) {
			return result;
		}

		result += '.';
		for (int i = 0; i < 4967; i++) {
			value *= mulTen;
			i128 decimal = static_cast<i128>(value);
			result += DebugPrintInt128(decimal);
			value -= decimal;
			if (value._isZero())
				break;
		}

		return result;
	}

	inline constexpr f128 ParseFloat128(std::string_view input) {
		constexpr auto charToNum = [](char val) {
			constexpr f128 a(0);
			constexpr f128 b(1);
			constexpr f128 c(2);
			constexpr f128 d(3);
			constexpr f128 e(4);
			constexpr f128 f(5);
			constexpr f128 g(6);
			constexpr f128 h(7);
			constexpr f128 i(8);
			constexpr f128 j(9);

			switch (val) {
				case '0':
					return a;
				case '1':
					return b;
				case '2':
					return c;
				case '3':
					return d;
				case '4':
					return e;
				case '5':
					return f;
				case '6':
					return g;
				case '7':
					return h;
				case '8':
					return i;
				case '9':
					return j;
				default:
					return f128();
			}
		};

		if (input == "0") {
			return f128 {};
		}
		if (input == "-0") {
			return std::bit_cast<f128>(u128(0x8000000000000000u, 0u));
		}

		const auto decimalPos = input.find('.');
		const auto expPos     = input.find('e');
		if (decimalPos == std::string_view::npos) {
			return f128(ParseInt128(input));
		}

		auto integerPart = ParseInt128(input.substr(0, decimalPos));
		const bool isMinusZero = integerPart == 0 && input.starts_with("-");
		f128 result(integerPart);
		std::string_view decimalText = input.substr(decimalPos + 1, expPos);
		f128 mul(integerPart < 0 || isMinusZero ? -1 : 1);

		while (!decimalText.empty()) {
			mul /= 10;
			result += (charToNum(decimalText[0]) * mul);
			decimalText = decimalText.substr(1);
		}

		auto bits = std::bit_cast<u128>(result);
		if ((bits & 1) != 0) {
			++bits;
			result = std::bit_cast<f128>(bits);
		}

		if (expPos != std::string_view::npos) {
			decimalText     = input.substr(expPos + 1);
			bool isPositive = true;
			if (decimalText[0] == '-') {
				isPositive  = false;
				decimalText = decimalText.substr(1);
			} else if (decimalText[0] == '+') {
				decimalText = decimalText.substr(1);
			}

			int exp = int(ParseInt128(decimalText));
			f128 resultExp(1);
			f128 base = 10.0;
			while (exp != 0) {
				if (exp & 1)
					resultExp *= base;
				base *= base;
				exp >>= 1;
			}
			result *= isPositive ? resultExp : f128(1) / resultExp;
		}

		return result;
	}

	template <class T, class U>
	inline constexpr f64 operator/(T lhs, U rhs) noexcept
	    requires(std::convertible_to<T, f64>&& std::convertible_to<U, f64> &&
	             !std::is_same_v<T, f16> && !std::is_same_v<T, f32> && !std::is_same_v<T, f64> &&
	             !std::is_same_v<T, f128> && !std::is_same_v<U, f16> && !std::is_same_v<U, f32> &&
	             !std::is_same_v<U, f64> && !std::is_same_v<U, f128>) {
		return static_cast<f64>(lhs) / static_cast<f64>(rhs);
	}

	inline constexpr float NanValue() noexcept { return NAN; }

}  // namespace Builtin

template <class T, class U>
inline constexpr T UnsafeCast(Builtin::Float<U> value) noexcept {
	if constexpr (sizeof(U) < 4) {
		return UnsafeCast<T>(Builtin::Float<float>(value));
	}
	if constexpr (std::is_same_v<T, Builtin::i128> || std::is_same_v<T, Builtin::u128>) {
		return T::NarrowFromFloat((U) value);
	}

	return static_cast<typename T::__underlying>((U) value);
}

#ifndef __FLT16_MAX__
template <class T>
inline constexpr T UnsafeCast(Builtin::Float16 value) noexcept {
	if constexpr (std::is_same_v<T, Builtin::i128> || std::is_same_v<T, Builtin::u128>) {
		return T::NarrowFromFloat((float) value);
	}

	return static_cast<typename T::__underlying>((float) value);
}
#endif  // !1

#ifndef __SIZEOF_FLOAT128__
template <class T>
inline constexpr T UnsafeCast(Builtin::Float128 value) noexcept {
	if constexpr (std::is_same_v<T, Builtin::i128> || std::is_same_v<T, Builtin::u128>) {
		return T::NarrowFromFloat((double) value);
	}

	return static_cast<typename T::__underlying>((double) value);
}
#endif  // !1