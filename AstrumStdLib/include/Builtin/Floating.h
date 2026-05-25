#pragma once
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

		constexpr explicit operator float() const noexcept { return static_cast<Float<float>>(*this); }
		constexpr explicit operator double() const noexcept { return static_cast<Float<double>>(*this); }
		//constexpr operator long double() const noexcept {
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

#ifdef __FLT16_MAX__
	using f16 = Float<_Float16>;
#else
	using f16 = Float16;
#endif
	using f32  = Float<float>;
	using f64  = Float<double>;
	using fext = Float<long double>;
#ifdef __SIZEOF_FLOAT128__
	using f128 = Float<__float128>;
#else

#endif

	template <class T, class U>
	inline constexpr f64 operator/(T lhs, U rhs) noexcept
	    requires(std::convertible_to<T, f64>&& std::convertible_to<U, f64> &&
	             !std::is_same_v<T, f16> && !std::is_same_v<T, f32> && !std::is_same_v<T, f64> &&
	             !std::is_same_v<U, f16> && !std::is_same_v<U, f32> && !std::is_same_v<U, f64>) {
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