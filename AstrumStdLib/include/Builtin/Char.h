#pragma once
#include "Integer.h"

namespace CppAdvance {
	template <class T>
	struct Character {
		constexpr decltype(auto) __ref() const noexcept { return *this; }
		template <class U>
		friend struct Character;
		constexpr Character() noexcept = default;
		constexpr Character(bool)      = delete;
		constexpr Character(char value) noexcept : value {(uint8_t) value} {}
		constexpr Character(signed char value) noexcept : value {(uint8_t) value} {}
		constexpr Character(unsigned char value) noexcept : value {(T) value} {}
		constexpr explicit(sizeof(T) < sizeof(uint16_t)) Character(uint16_t value) noexcept
		    : value {(T) value} {}
		constexpr explicit Character(int value) noexcept : value {(T) value} {}
		constexpr explicit(sizeof(T) < sizeof(uint32_t)) Character(uint32_t value) noexcept
		    : value {(T) value} {}
		constexpr explicit(sizeof(T) < sizeof(wchar_t)) Character(wchar_t value) noexcept
		    : value {(T) value} {}
		constexpr Character(char8_t value) noexcept : value {(T) value} {}
		constexpr explicit(sizeof(T) < sizeof(char16_t)) Character(char16_t value) noexcept
		    : value {(T) value} {}
		constexpr explicit(sizeof(T) < sizeof(char32_t)) Character(char32_t value) noexcept
		    : value {(T) value} {}
		template <class U>
		constexpr explicit(sizeof(T) < sizeof(U)) Character(Character<U> v) noexcept
		    : value {v.value} {}
		constexpr explicit Character(i8 v) : value {(T) v} {}
		constexpr Character(u8 v) noexcept : value {(T) v} {}
		constexpr explicit Character(i16 v) : value {(T) v} {}
		constexpr explicit(sizeof(T) < sizeof(u16)) Character(u16 v) noexcept : value {(T) v} {}
		constexpr explicit Character(i32 v) : value {(T) v} {}
		constexpr explicit(sizeof(T) < sizeof(u32)) Character(u32 v) noexcept : value {(T) v} {}

		constexpr Character& operator=(char rhs) noexcept {
			value = (uint8_t) rhs;
			return *this;
		}
		constexpr Character& operator=(signed char rhs) noexcept {
			value = (uint8_t) rhs;
			return *this;
		}
		constexpr Character& operator=(unsigned char rhs) noexcept {
			value = (T) rhs;
			return *this;
		}
		constexpr Character& operator=(uint16_t rhs) noexcept
		    requires(sizeof(T) >= sizeof(uint16_t)) {
			value = (T) rhs;
			return *this;
		}
		constexpr Character& operator=(uint32_t rhs) noexcept
		    requires(sizeof(T) >= sizeof(uint32_t)) {
			value = (T) rhs;
			return *this;
		}
		constexpr Character& operator=(wchar_t rhs) noexcept
		    requires(sizeof(T) >= sizeof(wchar_t)) {
			value = (T) rhs;
			return *this;
		}
		constexpr Character& operator=(char8_t rhs) noexcept
		    requires(sizeof(T) >= sizeof(char8_t)) {
			value = (T) rhs;
			return *this;
		}
		constexpr Character& operator=(char16_t rhs) noexcept
		    requires(sizeof(T) >= sizeof(char16_t)) {
			value = (T) rhs;
			return *this;
		}
		constexpr Character& operator=(char32_t rhs) noexcept
		    requires(sizeof(T) >= sizeof(char32_t)) {
			value = (T) rhs;
			return *this;
		}
		template <class U>
		constexpr Character& operator=(Character<U> rhs) noexcept requires(sizeof(T) >= sizeof(U)) {
			value = rhs.value;
			return *this;
		}
		constexpr Character& operator=(u8 rhs) noexcept {
			value = (T) rhs;
			return *this;
		}
		constexpr Character& operator=(u16 rhs) noexcept requires(sizeof(T) >= sizeof(u16)) {
			value = (T) rhs;
			return *this;
		}
		constexpr Character& operator=(u32 rhs) noexcept requires(sizeof(T) >= sizeof(u32)) {
			value = (T) rhs;
			return *this;
		}

		constexpr explicit operator bool() noexcept { return value > 0; }
		constexpr explicit(sizeof(T) > sizeof(char)) operator char() noexcept {
			return (char) value;
		}
		constexpr explicit(sizeof(T) > sizeof(char)) operator signed char() noexcept {
			return (signed char) value;
		}
		constexpr explicit(sizeof(T) > sizeof(char)) operator unsigned char() noexcept {
			return (unsigned char) value;
		}
		constexpr explicit(sizeof(T) > sizeof(wchar_t)) operator wchar_t() noexcept {
			return (wchar_t) value;
		}
		constexpr explicit(sizeof(T) > sizeof(char8_t)) operator char8_t() noexcept {
			return (char8_t) value;
		}
		constexpr explicit(sizeof(T) > sizeof(char16_t)) operator char16_t() noexcept {
			return (char16_t) value;
		}
		constexpr explicit(sizeof(T) > sizeof(char32_t)) operator char32_t() noexcept {
			return (char32_t) value;
		}
		constexpr explicit(sizeof(T) > sizeof(short)) operator short() noexcept {
			return (short) value;
		}
		constexpr explicit(sizeof(T) > sizeof(short)) operator unsigned short() noexcept {
			return (unsigned short) value;
		}
		constexpr operator int() noexcept { return (int) value; }
		constexpr operator unsigned int() noexcept { return (unsigned int) value; }
		constexpr operator long() noexcept { return (long) value; }
		constexpr operator unsigned long() noexcept { return (unsigned long) value; }
		constexpr operator long long() noexcept { return (long long) value; }
		constexpr operator unsigned long long() noexcept { return (unsigned long long) value; }
		constexpr explicit operator i8() { return i8((int) value); }
		constexpr explicit(sizeof(T) > sizeof(u8)) operator u8() { return u8((unsigned) value); }
		constexpr explicit operator i16() { return i16((int) value); }
		constexpr explicit(sizeof(T) > sizeof(u16)) operator u16() { return u16((unsigned) value); }
		constexpr operator i32() { return i32((int) value); }
		constexpr operator u32() { return u32((unsigned) value); }
		constexpr operator i64() { return i64((int) value); }
		constexpr operator u64() { return u64((unsigned) value); }

		constexpr Character& operator++() noexcept {
			++value;
			return *this;
		}
		constexpr Character operator++(int) noexcept {
			Character<T> tmp {value};
			++value;
			return tmp;
		}
		constexpr Character& operator--() noexcept {
			--value;
			return *this;
		}
		constexpr Character operator--(int) noexcept {
			Character<T> tmp {value};
			--value;
			return tmp;
		}

		template <class U>
		constexpr Character& operator+=(U rhs) noexcept
		    requires(std::is_integral_v<U> && sizeof(T) >= sizeof(U)) {
			value += (T) rhs;
			return *this;
		}
		constexpr Character& operator+=(i8 rhs) {
			value += (T) rhs;
			return *this;
		}
		constexpr Character& operator+=(u8 rhs) {
			value += (T) rhs;
			return *this;
		}
		constexpr Character& operator+=(i16 rhs) requires(sizeof(T) >= sizeof(i16)) {
			value += (T) rhs;
			return *this;
		}
		constexpr Character& operator+=(u16 rhs) requires(sizeof(T) >= sizeof(i16)) {
			value += (T) rhs;
			return *this;
		}
		constexpr Character& operator+=(i32 rhs) requires(sizeof(T) >= sizeof(i32)) {
			value += (T) rhs;
			return *this;
		}
		constexpr Character& operator+=(u32 rhs) requires(sizeof(T) >= sizeof(i32)) {
			value += (T) rhs;
			return *this;
		}

		template <class U>
		constexpr auto operator+(U rhs) const noexcept requires(std::is_integral_v<U>) {
			return (U) value + rhs;
		}
		constexpr auto operator+(i8 rhs) const { return i32(int(value)) + rhs; }
		constexpr auto operator+(i16 rhs) const { return i32(int(value)) + rhs; }
		constexpr auto operator+(i32 rhs) const { return i32(int(value)) + rhs; }
		constexpr auto operator+(u8 rhs) const { return u32(unsigned(value)) + rhs; }
		constexpr auto operator+(u16 rhs) const { return u32(unsigned(value)) + rhs; }
		constexpr auto operator+(u32 rhs) const { return u32(unsigned(value)) + rhs; }
		template <class U>
		friend constexpr auto operator+(U lhs, Character<T> rhs) noexcept
		    requires(std::is_integral_v<U>) {
			return lhs + (U) rhs.value;
		}
		friend constexpr auto operator+(i8 lhs, Character<T> rhs) {
			return lhs + i32(int(rhs.value));
		}
		friend constexpr auto operator+(i16 lhs, Character<T> rhs) {
			return lhs + i32(int(rhs.value));
		}
		friend constexpr auto operator+(i32 lhs, Character<T> rhs) {
			return lhs + i32(int(rhs.value));
		}
		friend constexpr auto operator+(u8 lhs, Character<T> rhs) {
			return lhs + u32(unsigned(rhs.value));
		}
		friend constexpr auto operator+(u16 lhs, Character<T> rhs) {
			return lhs + u32(unsigned(rhs.value));
		}
		friend constexpr auto operator+(u32 lhs, Character<T> rhs) {
			return lhs + u32(unsigned(rhs.value));
		}

		template <class U>
		constexpr Character& operator-=(U rhs) noexcept
		    requires(std::is_integral_v<U> && sizeof(T) >= sizeof(U)) {
			value -= (T) rhs;
			return *this;
		}
		constexpr Character& operator-=(i8 rhs) {
			value -= (T) rhs;
			return *this;
		}
		constexpr Character& operator-=(u8 rhs) {
			value -= (T) rhs;
			return *this;
		}
		constexpr Character& operator-=(i16 rhs) requires(sizeof(T) >= sizeof(i16)) {
			value -= (T) rhs;
			return *this;
		}
		constexpr Character& operator-=(u16 rhs) requires(sizeof(T) >= sizeof(i16)) {
			value -= (T) rhs;
			return *this;
		}
		constexpr Character& operator-=(i32 rhs) requires(sizeof(T) >= sizeof(i32)) {
			value -= (T) rhs;
			return *this;
		}
		constexpr Character& operator-=(u32 rhs) requires(sizeof(T) >= sizeof(i32)) {
			value -= (T) rhs;
			return *this;
		}

		template <class U>
		constexpr auto operator-(U rhs) const noexcept requires(std::is_integral_v<U>) {
			return (U) value - rhs;
		}
		constexpr auto operator-(i8 rhs) const { return i32(int(value)) - rhs; }
		constexpr auto operator-(i16 rhs) const { return i32(int(value)) - rhs; }
		constexpr auto operator-(i32 rhs) const { return i32(int(value)) - rhs; }
		constexpr auto operator-(u8 rhs) const { return u32(unsigned(value)) - rhs; }
		constexpr auto operator-(u16 rhs) const { return u32(unsigned(value)) - rhs; }
		constexpr auto operator-(u32 rhs) const { return u32(unsigned(value)) - rhs; }
		template <class U>
		friend constexpr auto operator-(U lhs, Character<T> rhs) noexcept
		    requires(std::is_integral_v<U>) {
			return lhs - (U) rhs.value;
		}
		friend constexpr auto operator-(i8 lhs, Character<T> rhs) {
			return lhs - i32(int(rhs.value));
		}
		friend constexpr auto operator-(i16 lhs, Character<T> rhs) {
			return lhs - i32(int(rhs.value));
		}
		friend constexpr auto operator-(i32 lhs, Character<T> rhs) {
			return lhs - i32(int(rhs.value));
		}
		friend constexpr auto operator-(u8 lhs, Character<T> rhs) {
			return lhs - u32(unsigned(rhs.value));
		}
		friend constexpr auto operator-(u16 lhs, Character<T> rhs) {
			return lhs - u32(unsigned(rhs.value));
		}
		friend constexpr auto operator-(u32 lhs, Character<T> rhs) {
			return lhs - u32(unsigned(rhs.value));
		}

	   private:
		T value;
	};

	using char8  = Character<char8_t>;
	using char16 = Character<char16_t>;
	using char32 = Character<char32_t>;
}  // namespace CppAdvance