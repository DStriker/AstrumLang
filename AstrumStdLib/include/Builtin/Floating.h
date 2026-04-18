#pragma once
#include "Int128.h"

namespace CppAdvance {
	template <class T>
	struct Float {
		static_assert(std::is_floating_point<T>::value, "T must be a floating point type");
		template <class U>
		friend struct Float;
		constexpr decltype(auto) __ref() const noexcept { return *this; }

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

		constexpr explicit(sizeof(T) > sizeof(float)) operator float() noexcept { return value; }

		constexpr explicit(sizeof(T) > sizeof(double)) operator double() noexcept { return value; }

		constexpr operator long double() noexcept { return value; }

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
		constexpr auto operator<=>(Float<U> rhs) const noexcept {
			return value <=> rhs.value;
		}

		template <class U>
		constexpr auto operator<=>(U rhs) const noexcept
		    requires(std::is_integral_v<U> || std::is_floating_point_v<U>) {
			return value <=> rhs;
		}

		template <class U>
		friend constexpr auto operator<=>(U lhs, Float<T> rhs) noexcept
		    requires(std::is_integral_v<U> || std::is_floating_point_v<U>) {
			return lhs <=> rhs.value;
		}

		constexpr auto operator<=>(i8 rhs) const noexcept { return value <=> static_cast<T>(rhs); }

		friend constexpr auto operator<=>(i8 lhs, Float<T> rhs) noexcept {
			return static_cast<T>(lhs) <=> rhs.value;
		}

		constexpr auto operator<=>(i16 rhs) const noexcept { return value <=> static_cast<T>(rhs); }

		friend constexpr auto operator<=>(i16 lhs, Float<T> rhs) noexcept {
			return static_cast<T>(lhs) <=> rhs.value;
		}

		constexpr auto operator<=>(i32 rhs) const noexcept { return value <=> static_cast<T>(rhs); }

		friend constexpr auto operator<=>(i32 lhs, Float<T> rhs) noexcept {
			return static_cast<T>(lhs) <=> rhs.value;
		}

		constexpr auto operator<=>(i64 rhs) const noexcept { return value <=> static_cast<T>(rhs); }

		friend constexpr auto operator<=>(i64 lhs, Float<T> rhs) noexcept {
			return static_cast<T>(lhs) <=> rhs.value;
		}

		constexpr auto operator<=>(i128 rhs) const noexcept {
			return value <=> static_cast<T>(rhs);
		}

		friend constexpr auto operator<=>(i128 lhs, Float<T> rhs) noexcept {
			return static_cast<T>(lhs) <=> rhs.value;
		}

		constexpr auto operator<=>(u8 rhs) const noexcept { return value <=> static_cast<T>(rhs); }

		friend constexpr auto operator<=>(u8 lhs, Float<T> rhs) noexcept {
			return static_cast<T>(lhs) <=> rhs.value;
		}

		constexpr auto operator<=>(u16 rhs) const noexcept { return value <=> static_cast<T>(rhs); }

		friend constexpr auto operator<=>(u16 lhs, Float<T> rhs) noexcept {
			return static_cast<T>(lhs) <=> rhs.value;
		}

		constexpr auto operator<=>(u32 rhs) const noexcept { return value <=> static_cast<T>(rhs); }

		friend constexpr auto operator<=>(u32 lhs, Float<T> rhs) noexcept {
			return static_cast<T>(lhs) <=> rhs.value;
		}

		constexpr auto operator<=>(u64 rhs) const noexcept { return value <=> static_cast<T>(rhs); }

		friend constexpr auto operator<=>(u64 lhs, Float<T> rhs) noexcept {
			return static_cast<T>(lhs) <=> rhs.value;
		}

		constexpr auto operator<=>(u128 rhs) const noexcept {
			return value <=> static_cast<T>(rhs);
		}

		friend constexpr auto operator<=>(u128 lhs, Float<T> rhs) noexcept {
			return static_cast<T>(lhs) <=> rhs.value;
		}

	   private:
		T value {};
	};

	using f32  = Float<float>;
	using f64  = Float<double>;
	using fext = Float<long double>;

}  // namespace CppAdvance