#pragma once
#include "BuiltinInt128.h"

namespace Builtin {
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
		constexpr Float(U v) noexcept requires(std::is_integral_v<U>) : value(v) {}
		constexpr Float(i8 v) noexcept : value(v) {}
		constexpr Float(i16 v) noexcept : value(v) {}
		constexpr Float(i32 v) noexcept : value(v) {}
		constexpr Float(i64 v) noexcept : value(v) {}
		constexpr Float(i128 v) noexcept : value(v) {}
		constexpr Float(u8 v) noexcept : value(v) {}
		constexpr Float(u16 v) noexcept : value(v) {}
		constexpr Float(u32 v) noexcept : value(v) {}
		constexpr Float(u64 v) noexcept : value(v) {}
		constexpr Float(u128 v) noexcept : value(v) {}

		constexpr Float& operator=(float f) noexcept {
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
		constexpr Float& operator=(U v) noexcept requires(std::is_integral_v<U>) {
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

		constexpr Float& operator=(i32 v) noexcept {
			value = v;
			return *this;
		}

		constexpr Float& operator=(i64 v) noexcept {
			value = v;
			return *this;
		}

		constexpr Float& operator=(i128 v) noexcept {
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

		constexpr Float& operator=(u32 v) noexcept {
			value = v;
			return *this;
		}

		constexpr Float& operator=(u64 v) noexcept {
			value = v;
			return *this;
		}

		constexpr Float& operator=(u128 v) noexcept {
			value = v;
			return *this;
		}

		constexpr explicit(sizeof(T) > sizeof(float)) operator float() const noexcept {
			return value;
		}

		constexpr explicit(sizeof(T) > sizeof(double)) operator double() const noexcept {
			return value;
		}

		constexpr operator long double() const noexcept { return value; }

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

		constexpr Float& operator+() noexcept { return *this; }

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

	using f32  = Float<float>;
	using f64  = Float<double>;
	using fext = Float<long double>;

	template <class T, class U>
	inline constexpr f64 operator/(T lhs, U rhs) noexcept
	    requires(std::convertible_to<T, f64>&& std::convertible_to<U, f64> &&
	             !std::is_same_v<T, f32> && !std::is_same_v<T, f64> && !std::is_same_v<U, f32> &&
	             !std::is_same_v<U, f64>) {
		return static_cast<f64>(lhs) / static_cast<f64>(rhs);
	}

	inline constexpr float NanValue() noexcept { return NAN; }

}  // namespace Builtin

template <class T, class U>
inline constexpr T UnsafeCast(Builtin::Float<U> value) noexcept {
	if constexpr (std::is_same_v<T, Builtin::i128> || std::is_same_v<T, Builtin::u128>) {
		return T::NarrowFromFloat((U) value);
	}

	return static_cast<typename T::__underlying>((U) value);
}