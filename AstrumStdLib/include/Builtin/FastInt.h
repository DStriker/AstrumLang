#pragma once
#include <cmath>
#include <cstddef>
#include <cstdint>
#include <limits>
#include <type_traits>

#include "CompilerUtils.h"

namespace CppAdvance {
	template <class T>
	struct FastInt {
		static_assert(std::is_integral_v<T> || std::is_enum_v<T>, "T must be integer");
		template <class U>
		friend struct FastInt;
		constexpr decltype(auto) __ref() const noexcept { return *this; }

		constexpr FastInt() noexcept = default; /* {
		    //static_assert(std::is_integral_v<T> || std::is_enum_v<T>, "T must be integer");
		}*/

		/*constexpr explicit FastInt(bool b) noexcept : value(T(b ? 1 : 0)) {
		    static_assert(std::is_integral_v<T> || std::is_enum_v<T>, "T must be integer");
		}*/

		template <class U>
		constexpr explicit(sizeof(U) > sizeof(T) ||
		                   (sizeof(U) == sizeof(T) && (std::numeric_limits<T>::is_signed !=
		                                               std::numeric_limits<U>::is_signed)) ||
		                   (!std::numeric_limits<T>::is_signed &&
		                    std::numeric_limits<U>::is_signed))
		    FastInt(const FastInt<U>& u) noexcept
		    : value((U) u) {
			static_assert(std::is_integral_v<T> || std::is_enum_v<T>, "T must be integer");
		}

		template <class U>
		constexpr explicit(sizeof(U) > sizeof(T) ||
		                   (sizeof(U) == sizeof(T) && (std::numeric_limits<T>::is_signed !=
		                                               std::numeric_limits<U>::is_signed)) ||
		                   (!std::numeric_limits<T>::is_signed &&
		                    std::numeric_limits<U>::is_signed)) FastInt(const U& i) noexcept
		    requires(std::is_integral_v<U>)
		    : value(i) {
			static_assert(std::is_integral_v<T> || std::is_enum_v<T>, "T must be integer");
		}

		template <class U>
		constexpr FastInt<T>& operator=(const U& rhs) noexcept
		    requires(std::is_integral_v<U> &&
		             (sizeof(U) < sizeof(T) ||
		              (sizeof(U) == sizeof(T) &&
		               (std::numeric_limits<T>::is_signed == std::numeric_limits<U>::is_signed)))) {
			if constexpr (!std::numeric_limits<T>::is_signed && std::numeric_limits<U>::is_signed) {
				static_assert(false, "Cannot assign signed value to unsigned type");
			}
			value = rhs;
			return *this;
		}

		template <class U>
		constexpr FastInt<T>& operator=(const FastInt<U>& rhs) noexcept
		    requires(sizeof(U) < sizeof(T) ||
		             (sizeof(U) == sizeof(T) &&
		              (std::numeric_limits<T>::is_signed == std::numeric_limits<U>::is_signed))) {
			if constexpr (!std::numeric_limits<T>::is_signed && std::numeric_limits<U>::is_signed) {
				static_assert(false, "Cannot assign signed value to unsigned type");
			}
			value = (U) rhs;
			return *this;
		}

		template <class U>
		constexpr volatile FastInt<T>& operator=(const U& rhs) volatile noexcept
		    requires(std::is_integral_v<U> &&
		             (sizeof(U) < sizeof(T) ||
		              (sizeof(U) == sizeof(T) &&
		               (std::numeric_limits<T>::is_signed == std::numeric_limits<U>::is_signed)))) {
			if constexpr (!std::numeric_limits<T>::is_signed && std::numeric_limits<U>::is_signed) {
				static_assert(false, "Cannot assign signed value to unsigned type");
			}
			value = rhs;
			return *this;
		}

		template <class U>
		constexpr volatile FastInt<T>& operator=(const FastInt<U>& rhs) volatile noexcept
		    requires(sizeof(U) < sizeof(T) ||
		             (sizeof(U) == sizeof(T) &&
		              (std::numeric_limits<T>::is_signed == std::numeric_limits<U>::is_signed))) {
			if constexpr (!std::numeric_limits<T>::is_signed && std::numeric_limits<U>::is_signed) {
				static_assert(false, "Cannot assign signed value to unsigned type");
			}
			value = (U) rhs;
			return *this;
		}

		constexpr explicit operator bool() const noexcept { return !!value; }

		constexpr explicit(sizeof(T) > 1 || (std::numeric_limits<T>::is_signed !=
		                                     std::numeric_limits<char>::is_signed))
		operator char() const noexcept {
			return value;
		}

		constexpr explicit(sizeof(T) > 1 || (std::numeric_limits<T>::is_signed !=
		                                     std::numeric_limits<signed char>::is_signed))
		operator signed char() const noexcept {
			return value;
		}

		constexpr explicit(sizeof(T) > 1 || (std::numeric_limits<T>::is_signed !=
		                                     std::numeric_limits<unsigned char>::is_signed))
		operator unsigned char() const noexcept {
			return value;
		}

		constexpr explicit(sizeof(T) > 2 ||
		                   (sizeof(T) == 2 && std::numeric_limits<T>::is_signed !=
		                                          std::numeric_limits<signed char>::is_signed))
		operator short() const noexcept {
			return value;
		}

		constexpr explicit(sizeof(T) > 2 ||
		                   (sizeof(T) == 2 && std::numeric_limits<T>::is_signed !=
		                                          std::numeric_limits<unsigned char>::is_signed))
		operator unsigned short() const noexcept {
			return value;
		}

		constexpr explicit(sizeof(T) > 4 ||
		                   (sizeof(T) == 4 && std::numeric_limits<T>::is_signed !=
		                                          std::numeric_limits<int>::is_signed))
		operator int() const noexcept {
			return value;
		}

		constexpr explicit(sizeof(T) > 4 ||
		                   (sizeof(T) == 4 && std::numeric_limits<T>::is_signed !=
		                                          std::numeric_limits<unsigned int>::is_signed))
		operator unsigned int() const noexcept {
			return value;
		}

		constexpr explicit(sizeof(T) > sizeof(long) ||
		                   (sizeof(T) == sizeof(long) && std::numeric_limits<T>::is_signed !=
		                                                     std::numeric_limits<long>::is_signed))
		operator long() const noexcept {
			return value;
		}

		constexpr explicit(sizeof(T) > sizeof(long) ||
		                   (sizeof(T) == sizeof(long) &&
		                    std::numeric_limits<T>::is_signed !=
		                        std::numeric_limits<unsigned long>::is_signed))
		operator unsigned long() const noexcept {
			return value;
		}

		constexpr explicit(sizeof(T) == 8 && std::numeric_limits<T>::is_signed !=
		                                         std::numeric_limits<long long>::is_signed)
		operator long long() const noexcept {
			return value;
		}

		constexpr explicit(sizeof(T) == 8 && std::numeric_limits<T>::is_signed !=
		                                         std::numeric_limits<unsigned long long>::is_signed)
		operator unsigned long long() const noexcept {
			return value;
		}

		constexpr explicit(sizeof(T) > sizeof(wchar_t) ||
		                   (sizeof(T) == sizeof(wchar_t) &&
		                    std::numeric_limits<T>::is_signed !=
		                        std::numeric_limits<wchar_t>::is_signed))
		operator wchar_t() const {
			return value;
		}

		constexpr explicit(sizeof(T) > sizeof(char8_t) ||
		                   (sizeof(T) == sizeof(char8_t) &&
		                    std::numeric_limits<T>::is_signed !=
		                        std::numeric_limits<char8_t>::is_signed))
		operator char8_t() const {
			return value;
		}

		constexpr explicit(sizeof(T) > sizeof(char16_t) ||
		                   (sizeof(T) == sizeof(char16_t) &&
		                    std::numeric_limits<T>::is_signed !=
		                        std::numeric_limits<char16_t>::is_signed))
		operator char16_t() const {
			return value;
		}

		constexpr explicit(sizeof(T) > sizeof(char32_t) ||
		                   (sizeof(T) == sizeof(char32_t) &&
		                    std::numeric_limits<T>::is_signed !=
		                        std::numeric_limits<char32_t>::is_signed))
		operator char32_t() const {
			return value;
		}

		constexpr operator float() const noexcept { return value; }

		constexpr operator double() const noexcept { return value; }

		constexpr operator long double() const noexcept { return value; }

		T* ptr() noexcept { return &value; }

		const T* ptr() const noexcept { return &value; }

		constexpr const T& ref() const noexcept { return value; }

		/*T* operator&()  noexcept {
		    return &value;
		}

		const T* operator&() const noexcept {
		    return &value;
		}*/

		constexpr const FastInt<T>& operator+() const noexcept { return *this; }

		constexpr FastInt<T> operator-() const {
			static_assert(std::numeric_limits<T>::is_signed,
			              "Cannot to negate the unsigned number");
			return (T) -value;
		}

		constexpr FastInt<T>& operator++() noexcept {
			++value;
			return *this;
		}

		constexpr FastInt<T>& operator--() noexcept {
			--value;
			return *this;
		}

		constexpr FastInt<T> operator++(int) noexcept {
			FastInt<T> tmp(*this);
			++value;
			return tmp;
		}

		constexpr FastInt<T> operator--(int) noexcept {
			FastInt<T> tmp(*this);
			--value;
			return tmp;
		}

		constexpr FastInt<T> operator~() const noexcept { return (T) ~value; }

		template <class U>
		constexpr FastInt<T> operator%(U rhs) const noexcept {
			return value % rhs;
		}

		template <class U>
		constexpr FastInt<T> operator%(FastInt<U> rhs) const noexcept {
			return FastInt<T>(value % (U) rhs);
		}

		template <class U>
		constexpr FastInt<T>& operator%=(U rhs) noexcept {
			value %= rhs;
			return *this;
		}

		template <class U>
		constexpr FastInt<T>& operator%=(FastInt<U> rhs) noexcept {
			value %= (U) rhs;
			return *this;
		}

		template <class U>
		constexpr FastInt<T> operator*(U rhs) const noexcept {
			return FastInt<T>(value * rhs);
		}

		template <class U>
		constexpr FastInt<T> operator*(FastInt<U> rhs) const noexcept {
			return FastInt<T>(value * (U) rhs);
		}

		template <class U>
		constexpr FastInt<T>& operator*=(U rhs) noexcept {
			value *= rhs;
			return *this;
		}

		template <class U>
		constexpr FastInt<T>& operator*=(FastInt<U> rhs) noexcept {
			value *= (U) rhs;
			return *this;
		}

		template <class U>
		constexpr FastInt<T> operator/(U rhs) const noexcept {
			return FastInt<T>(value / rhs);
		}

		template <class U>
		constexpr FastInt<T> operator/(FastInt<U> rhs) const noexcept {
			return FastInt<T>(value / (U) rhs);
		}

		template <class U>
		constexpr FastInt<T>& operator/=(U rhs) noexcept {
			value /= rhs;
			return *this;
		}

		template <class U>
		constexpr FastInt<T>& operator/=(FastInt<U> rhs) noexcept {
			value /= (U) rhs;
			return *this;
		}

		template <class U>
		constexpr FastInt<T> operator+(U rhs) const noexcept {
			return value + rhs;
		}

		template <class U>
		constexpr FastInt<T> operator+(FastInt<U> rhs) const noexcept {
			return FastInt<T>(value + (U) rhs);
		}

		template <class U>
		constexpr FastInt<T>& operator+=(U rhs) noexcept {
			value += rhs;
			return *this;
		}

		template <class U>
		constexpr FastInt<T>& operator+=(FastInt<U> rhs) noexcept {
			value += (U) rhs;
			return *this;
		}

		template <class U>
		constexpr FastInt<T> operator-(U rhs) const noexcept {
			return value - rhs;
		}

		template <class U>
		constexpr FastInt<T> operator-(FastInt<U> rhs) const noexcept {
			return FastInt<T>(value - (U) rhs);
		}

		template <class U>
		constexpr FastInt<T>& operator-=(U rhs) noexcept {
			value -= rhs;
			return *this;
		}

		template <class U>
		constexpr FastInt<T>& operator-=(FastInt<U> rhs) noexcept {
			value -= (U) rhs;
			return *this;
		}

		template <class U>
		constexpr FastInt<T> operator<<(U bits) const noexcept {
			return value << bits;
		}

		template <class U>
		constexpr FastInt<T> operator<<(FastInt<U> bits) const noexcept {
			return FastInt<T>(value << (U) bits);
		}

		template <class U>
		constexpr FastInt<T>& operator<<=(U bits) noexcept {
			value <<= bits;
			return *this;
		}

		template <class U>
		constexpr FastInt<T>& operator<<=(FastInt<U> bits) noexcept {
			value <<= (U) bits;
			return *this;
		}

		template <class U>
		constexpr FastInt<T> operator>>(U bits) const noexcept {
			return FastInt<T>(value >> bits);
		}

		template <class U>
		constexpr FastInt<T> operator>>(FastInt<U> bits) const noexcept {
			return FastInt<T>(value >> (U) bits);
		}

		template <class U>
		constexpr FastInt<T>& operator>>=(U bits) noexcept {
			value >>= bits;
			return *this;
		}

		template <class U>
		constexpr FastInt<T>& operator>>=(FastInt<U> bits) noexcept {
			value >>= (U) bits;
			return *this;
		}

		constexpr FastInt<T> operator&(FastInt<T> rhs) const noexcept {
			return FastInt<T>(value & (T) rhs);
		}

		template <class U>
		constexpr FastInt<T> operator&(U rhs) const noexcept {
			return FastInt<T>(value & rhs);
		}

		constexpr FastInt<T>& operator&=(FastInt<T> rhs) noexcept {
			value &= (T) rhs;
			return *this;
		}

		template <class U>
		constexpr FastInt<T>& operator&=(U rhs) noexcept {
			value &= rhs;
			return *this;
		}

		template <class U>
		constexpr FastInt<T>& operator&=(FastInt<U> rhs) noexcept {
			value &= (U) rhs;
			return *this;
		}

		constexpr FastInt<T> operator|(FastInt<T> rhs) const noexcept {
			return FastInt<T>(value | (T) rhs);
		}

		template <class U>
		constexpr FastInt<T> operator|(U rhs) const noexcept {
			return FastInt<T>(value | rhs);
		}

		constexpr FastInt<T>& operator|=(FastInt<T> rhs) noexcept {
			value |= (T) rhs;
			return *this;
		}

		template <class U>
		constexpr FastInt<T>& operator|=(U rhs) noexcept {
			value |= rhs;
			return *this;
		}

		template <class U>
		constexpr FastInt<T>& operator|=(FastInt<U> rhs) noexcept {
			value |= (U) rhs;
			return *this;
		}

		constexpr FastInt<T> operator^(FastInt<T> rhs) const noexcept {
			return FastInt<T>(value ^ (T) rhs);
		}

		template <class U>
		constexpr FastInt<T> operator^(U rhs) const noexcept {
			return FastInt<T>(value ^ rhs);
		}

		constexpr FastInt<T>& operator^=(FastInt<T> rhs) noexcept {
			value ^= (T) rhs;
			return *this;
		}

		template <class U>
		constexpr FastInt<T>& operator^=(U rhs) noexcept {
			value ^= rhs;
			return *this;
		}

		template <class U>
		constexpr FastInt<T>& operator^=(FastInt<U> rhs) noexcept {
			value ^= (U) rhs;
			return *this;
		}

	   private:
		T value {};
	};
}  // namespace CppAdvance

template <class T, class U>
constexpr auto operator<=>(U lhs, CppAdvance::FastInt<T> rhs) noexcept {
	if (lhs < (T) rhs) {
		return std::strong_ordering::less;
	}
	if (lhs > (T) rhs) {
		return std::strong_ordering::greater;
	}
	return std::strong_ordering::equal;
}

template <class T, class U>
constexpr auto operator<=>(CppAdvance::FastInt<T> lhs, U rhs) noexcept {
	if ((T) lhs < rhs) {
		return std::strong_ordering::less;
	}
	if ((T) lhs > rhs) {
		return std::strong_ordering::greater;
	}
	return std::strong_ordering::equal;
}

template <class T, class U>
constexpr auto operator<=>(CppAdvance::FastInt<U> lhs, CppAdvance::FastInt<T> rhs) noexcept {
	if ((U) lhs < (T) rhs) {
		return std::strong_ordering::less;
	}
	if ((U) lhs > (T) rhs) {
		return std::strong_ordering::greater;
	}
	return std::strong_ordering::equal;
}

template <class T, class U>
constexpr bool operator==(const CppAdvance::FastInt<T>& lhs,
                          const CppAdvance::FastInt<U>& rhs) noexcept {
	return lhs.ref() == rhs.ref();
}

template <class T, class U>
constexpr bool operator==(const CppAdvance::FastInt<T>& lhs, U rhs) noexcept {
	return lhs == (CppAdvance::FastInt<T>) rhs;
}

template <class T, class U>
constexpr bool operator==(U lhs, const CppAdvance::FastInt<T>& rhs) noexcept {
	return (T) lhs == rhs.ref();
}

template <class T>
constexpr bool operator==(bool lhs, CppAdvance::FastInt<T> rhs) noexcept {
	return lhs == ((T) rhs == 0 ? false : true);
}

template <class T>
constexpr bool operator==(CppAdvance::FastInt<T> lhs, bool rhs) noexcept {
	return rhs == ((T) lhs == 0 ? false : true);
}

template <class T, class U>
constexpr bool operator!=(CppAdvance::FastInt<T> lhs, CppAdvance::FastInt<U> rhs) noexcept {
	return (T) lhs != (U) rhs;
}

template <class T, class U>
constexpr bool operator!=(CppAdvance::FastInt<T> lhs, U rhs) noexcept {
	return lhs != (CppAdvance::FastInt<T>) rhs;
}

template <class T, class U>
constexpr bool operator!=(U lhs, CppAdvance::FastInt<T> rhs) noexcept {
	return (T) rhs != lhs;
}

template <class T>
constexpr bool operator!=(bool lhs, CppAdvance::FastInt<T> rhs) noexcept {
	return ((T) rhs == 0 ? false : true) != lhs;
}

template <class T>
constexpr bool operator!=(CppAdvance::FastInt<T> lhs, bool rhs) noexcept {
	return ((T) lhs == 0 ? false : true) != rhs;
}

template <class T, class U>
constexpr CppAdvance::FastInt<T> operator%(U lhs, CppAdvance::FastInt<T> rhs) {
	return lhs % (T) rhs;
}

template <class T, class U>
constexpr CppAdvance::FastInt<T> operator*(U lhs, CppAdvance::FastInt<T> rhs) {
	return lhs * (T) rhs;
}

template <class T, class U>
constexpr CppAdvance::FastInt<T> operator/(U lhs, CppAdvance::FastInt<T> rhs) {
	return lhs / (T) rhs;
}

template <class T, class U>
constexpr CppAdvance::FastInt<T> operator+(U lhs, CppAdvance::FastInt<T> rhs) {
	return lhs + (T) rhs;
}

template <class T, class U>
constexpr CppAdvance::FastInt<T> operator-(U lhs, CppAdvance::FastInt<T> rhs) {
	return lhs - (T) rhs;
}

template <class T, class U>
constexpr T& operator+=(T& lhs, CppAdvance::FastInt<U> rhs) requires(std::is_integral_v<T>) {
	lhs += (U) rhs;
	return lhs;
}

template <class T, class U>
constexpr T& operator-=(T& lhs, CppAdvance::FastInt<U> rhs) requires(std::is_integral_v<T>) {
	lhs -= (U) rhs;
	return lhs;
}

template <class T, class U>
constexpr T& operator*=(T& lhs, CppAdvance::FastInt<U> rhs) requires(std::is_integral_v<T>) {
	lhs *= (U) rhs;
	return lhs;
}

template <class T, class U>
constexpr T& operator/=(T& lhs, CppAdvance::FastInt<U> rhs) requires(std::is_integral_v<T>) {
	lhs /= (U) rhs;
	return lhs;
}

template <class T, class U>
constexpr T& operator%=(T& lhs, CppAdvance::FastInt<U> rhs) requires(std::is_integral_v<T>) {
	lhs %= (U) rhs;
	return lhs;
}

template <class T, class U>
constexpr T& operator&=(T& lhs, CppAdvance::FastInt<U> rhs) noexcept
    requires(std::is_integral_v<T>) {
	lhs &= (U) rhs;
	return lhs;
}

template <class T, class U>
constexpr T& operator|=(T& lhs, CppAdvance::FastInt<U> rhs) noexcept
    requires(std::is_integral_v<T>) {
	lhs |= (U) rhs;
	return lhs;
}

template <class T, class U>
constexpr T& operator^=(T& lhs, CppAdvance::FastInt<U> rhs) noexcept
    requires(std::is_integral_v<T>) {
	lhs ^= (U) rhs;
	return lhs;
}

template <class T, class U>
constexpr T& operator<<=(T& lhs, CppAdvance::FastInt<U> rhs) noexcept
    requires(std::is_integral_v<T>) {
	lhs <<= (U) rhs;
	return lhs;
}

template <class T, class U>
constexpr T& operator>>=(T& lhs, CppAdvance::FastInt<U> rhs) noexcept
    requires(std::is_integral_v<T>) {
	lhs >>= (U) rhs;
	return lhs;
}

template <class T, class U>
constexpr static CppAdvance::FastInt<U> operator<<(U lhs, CppAdvance::FastInt<T> bits) {
	return (lhs << (T) bits);
}

template <class T, class U>
constexpr static CppAdvance::FastInt<U> operator>>(U lhs, CppAdvance::FastInt<T> bits) {
	return (lhs >> (T) bits);
}

template <class T, class U>
constexpr CppAdvance::FastInt<T> operator&(U lhs, CppAdvance::FastInt<T> rhs) noexcept {
	return (lhs & (T) rhs);
}

template <class T, class U>
constexpr CppAdvance::FastInt<T> operator|(U lhs, CppAdvance::FastInt<T> rhs) noexcept {
	return (lhs | (T) rhs);
}

template <class T, class U>
constexpr CppAdvance::FastInt<T> operator^(U lhs, CppAdvance::FastInt<T> rhs) noexcept {
	return (lhs ^ (T) rhs);
}