#pragma once
#include "CheckedArithmetic.h"

namespace Builtin {

	template <class T>
	class __Class_FastInt;

	template <class T>
	struct FastInt : public Struct {
		static_assert(std::is_integral_v<T> || std::is_enum_v<T>, "T must be integer");
		template <class U>
		friend struct FastInt;
		using __self  = FastInt<T>;
		using __class      = __Class_FastInt<T>;
		using __underlying = T;
		using Unsigned     = FastInt<std::make_unsigned_t<T>>;
		constexpr __self& __ref() noexcept { return *this; }
		constexpr const __self& __ref() const noexcept { return *this; }

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

		T* __builtin_ptr() noexcept { return &value; }

		const T* __builtin_ptr() const noexcept { return &value; }

		constexpr T& __builtin_ref() noexcept { return value; }
		constexpr const T& __builtin_ref() const noexcept { return value; }

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
		constexpr FastInt<T> _operator_not() const noexcept { return (T) ~value; }

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
		constexpr FastInt<T> Div(U rhs) const {
			if (rhs == 0)
				throw DivisionByZeroException();
			return FastInt<T>(value / rhs);
		}

		template <class U>
		constexpr FastInt<T> Div(FastInt<U> rhs) const {
			if (rhs == 0)
				throw DivisionByZeroException();
			return FastInt<T>(value / (U) rhs);
		}

		template <class U>
		constexpr FastInt<T>& DivAssign(U rhs) {
			if (rhs == 0)
				throw DivisionByZeroException();
			value /= rhs;
			return *this;
		}

		template <class U>
		constexpr FastInt<T>& DivAssign(FastInt<U> rhs) {
			if (rhs == 0)
				throw DivisionByZeroException();
			value /= (U) rhs;
			return *this;
		}

		template <class U>
		constexpr FastInt<T>& operator/=(U rhs) {
			if (rhs == 0)
				throw DivisionByZeroException();
			value = (T) std::round((double) value / (double) rhs);
			return *this;
		}

		template <class U>
		constexpr FastInt<T>& operator/=(FastInt<U> rhs) {
			if (rhs == 0)
				throw DivisionByZeroException();
			value = (T)std::round((double) value / (double) rhs);
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
		constexpr FastInt<T> operator&(FastInt<U> rhs) const noexcept {
			return (*this & (U) rhs);
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
		constexpr FastInt<T> operator|(FastInt<U> rhs) const noexcept {
			return (*this | (U) rhs);
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
		constexpr FastInt<T> operator^(FastInt<U> rhs) const noexcept {
			return (*this ^ (U) rhs);
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

	
	template <class T, class U>
	constexpr auto operator<=>(const FastInt<U>& lhs,
	                           const FastInt<T>& rhs) noexcept {
		if ((U) lhs < (T) rhs) {
			return -1;
		}
		if ((U) lhs > (T) rhs) {
			return 1;
		}
		return 0;
	}

	template <class T, class U>
	constexpr auto operator<=>(const U& lhs, const FastInt<T>& rhs) noexcept
	    requires(std::is_integral_v<U>) {
		if (lhs < (T) rhs) {
			return -1;
		}
		if (lhs > (T) rhs) {
			return 1;
		}
		return 0;
	}

	template <class T, class U>
	constexpr auto operator<=>(const FastInt<T>& lhs, const U& rhs) noexcept
	    requires(std::is_integral_v<U>) {
		if ((T) lhs < rhs) {
			return -1;
		}
		if ((T) lhs > rhs) {
			return 1;
		}
		return 0;
	}

	template <class T, class U>
	constexpr bool operator==(const FastInt<T>& lhs, const FastInt<U>& rhs) noexcept {
		return lhs.__builtin_ref() == rhs.__builtin_ref();
	}

	template <class T, class U>
	constexpr bool operator==(const FastInt<T>& lhs, const U& rhs) noexcept
	    requires(std::is_integral_v<U>) {
		return lhs == (FastInt<T>) rhs;
	}

	template <class T, class U>
	constexpr bool operator==(const U& lhs, const FastInt<T>& rhs) noexcept
	    requires(std::is_integral_v<U>) {
		return (T) lhs == rhs.__builtin_ref();
	}

	template <class T, class U>
	constexpr bool operator!=(const FastInt<T>& lhs, const FastInt<U>& rhs) noexcept {
		return (T) lhs != (U) rhs;
	}

	template <class T, class U>
	constexpr bool operator!=(const FastInt<T>& lhs, const U& rhs) noexcept
	    requires(std::is_integral_v<U>) {
		return lhs != (FastInt<T>) rhs;
	}

	template <class T, class U>
	constexpr bool operator!=(const U& lhs, FastInt<T> rhs) noexcept
	    requires(std::is_integral_v<U>) {
		return (T) rhs != lhs;
	}

	template <class T, class U>
	constexpr FastInt<T> operator%(U lhs, FastInt<T> rhs) requires(std::is_integral_v<U>) {
		return lhs % (T) rhs;
	}

	template <class T, class U>
	constexpr FastInt<T> operator*(U lhs, FastInt<T> rhs) requires(std::is_integral_v<U>) {
		return lhs * (T) rhs;
	}

	template <class T, class U>
	constexpr FastInt<T> Div(U lhs, FastInt<T> rhs) requires(std::is_integral_v<U>) {
		if (rhs == 0)
			throw DivisionByZeroException();
		return lhs / (T) rhs;
	}

	template <class T, class U>
	constexpr FastInt<T> operator+(U lhs, FastInt<T> rhs) requires(std::is_integral_v<U>) {
		return lhs + (T) rhs;
	}

	template <class T, class U>
	constexpr FastInt<T> operator-(U lhs, FastInt<T> rhs) requires(std::is_integral_v<U>) {
		return lhs - (T) rhs;
	}

	template <class T, class U>
	constexpr T& operator+=(T& lhs, FastInt<U> rhs) requires(std::is_integral_v<T>) {
		lhs += (U) rhs;
		return lhs;
	}

	template <class T, class U>
	constexpr T& operator-=(T& lhs, FastInt<U> rhs) requires(std::is_integral_v<T>) {
		lhs -= (U) rhs;
		return lhs;
	}

	template <class T, class U>
	constexpr T& operator*=(T& lhs, FastInt<U> rhs) requires(std::is_integral_v<T>) {
		lhs *= (U) rhs;
		return lhs;
	}

	template <class T, class U>
	constexpr T& operator/=(T& lhs, FastInt<U> rhs) requires(std::is_integral_v<T>) {
		if (rhs == 0)
			throw DivisionByZeroException();
		lhs = (T) std::round((double) lhs / (double) rhs);
		return lhs;
	}

	template <class T, class U>
	constexpr T& operator%=(T& lhs, FastInt<U> rhs) requires(std::is_integral_v<T>) {
		lhs %= (U) rhs;
		return lhs;
	}

	template <class T, class U>
	constexpr T& operator&=(T& lhs, FastInt<U> rhs) noexcept requires(std::is_integral_v<T>) {
		lhs &= (U) rhs;
		return lhs;
	}

	template <class T, class U>
	constexpr T& operator|=(T& lhs, FastInt<U> rhs) noexcept requires(std::is_integral_v<T>) {
		lhs |= (U) rhs;
		return lhs;
	}

	template <class T, class U>
	constexpr T& operator^=(T& lhs, FastInt<U> rhs) noexcept requires(std::is_integral_v<T>) {
		lhs ^= (U) rhs;
		return lhs;
	}

	template <class T, class U>
	constexpr T& operator<<=(T& lhs, FastInt<U> rhs) noexcept requires(std::is_integral_v<T>) {
		lhs <<= (U) rhs;
		return lhs;
	}

	template <class T, class U>
	constexpr T& operator>>=(T& lhs, FastInt<U> rhs) noexcept requires(std::is_integral_v<T>) {
		lhs >>= (U) rhs;
		return lhs;
	}

	template <class T, class U>
	constexpr static FastInt<U> operator<<(U lhs, FastInt<T> bits) requires(std::is_integral_v<U>) {
		return (lhs << (T) bits);
	}

	template <class T, class U>
	constexpr static FastInt<U> operator>>(U lhs, FastInt<T> bits) requires(std::is_integral_v<U>) {
		return (lhs >> (T) bits);
	}

	template <class T, class U>
	constexpr FastInt<T> operator&(U lhs, FastInt<T> rhs) noexcept requires(std::is_integral_v<U>) {
		return (lhs & (T) rhs);
	}

	template <class T, class U>
	constexpr FastInt<T> operator|(U lhs, FastInt<T> rhs) noexcept requires(std::is_integral_v<U>) {
		return (lhs | (T) rhs);
	}

	template <class T, class U>
	constexpr FastInt<T> operator^(U lhs, FastInt<T> rhs) noexcept requires(std::is_integral_v<U>) {
		return (lhs ^ (T) rhs);
	}

}  // namespace Builtin


template <class T, class U>
inline constexpr auto UnsafeCast(Builtin::FastInt<U> value) noexcept {
	return static_cast<T>((U)value);
}