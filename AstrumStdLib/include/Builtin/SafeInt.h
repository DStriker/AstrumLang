#pragma once
#include "CheckedArithmetic.h"

namespace Builtin {
	
	template <class T>
	class __Class_SafeInt;
	
	template <class T>
	struct SafeInt : public Struct {
		static_assert(std::is_integral_v<T>, "T must be integer");
		template <class U>
		friend struct SafeInt;
		constexpr SafeInt() noexcept = default;

		using __self = SafeInt<T>;
		using __class = __Class_SafeInt<T>;
		using __underlying = T;
		using Unsigned = SafeInt<std::make_unsigned_t<T>>;

		constexpr __self& __ref() noexcept { return *this; }
		constexpr const __self& __ref() const noexcept { return *this; }
		/*constexpr SafeInt(const T& i) noexcept : value(i) {
		    static_assert(__details::NumericType<T>::isInt, "T must be integer");
		}*/

		/*constexpr explicit SafeInt(bool b) noexcept : value(T(b ? 1 : 0)) {
		    static_assert(__details::NumericType<T>::isInt, "T must be integer");
		}*/

		template <class U>
		constexpr explicit(sizeof(U) > sizeof(T) ||
		                   (sizeof(U) == sizeof(T) && (std::numeric_limits<T>::is_signed !=
		                                               std::numeric_limits<U>::is_signed)) ||
		                   (!std::numeric_limits<T>::is_signed &&
		                    std::numeric_limits<U>::is_signed)) SafeInt(const SafeInt<U>& u)
		    : value(0) {
			static_assert(__details::NumericType<T>::isInt, "T must be integer");
			value = (T) SafeInt<T>((U) u);
		}

		template <class U>
		constexpr explicit(sizeof(U) > sizeof(T) ||
		                   (sizeof(U) == sizeof(T) && (std::numeric_limits<T>::is_signed !=
		                                               std::numeric_limits<U>::is_signed)) ||
		                   (!std::numeric_limits<T>::is_signed &&
		                    std::numeric_limits<U>::is_signed))
		    SafeInt(const U& i) requires(std::is_integral_v<U>)
		    : value(0) {
			static_assert(__details::NumericType<T>::isInt, "T must be integer");
			if constexpr (std::is_same_v<T, U>) {
				value = i;
			} else if constexpr (std::is_same_v<U, bool>) {
				value = T(i ? 1 : 0);
			} else {
				SafeCastHelper<T, U, CastMethodHelper<T, U>::method>::CastThrow(i, value);
			}
		}

		template <class U>
		constexpr SafeInt<T>& operator=(const U& rhs) requires(
		    std::is_integral_v<U> &&
		    (sizeof(U) < sizeof(T) ||
		     (sizeof(U) == sizeof(T) &&
		      (std::numeric_limits<T>::is_signed == std::numeric_limits<U>::is_signed)))) {
			if constexpr (!std::numeric_limits<T>::is_signed && std::numeric_limits<U>::is_signed) {
				static_assert(false, "Cannot assign signed value to unsigned type");
			}
			value = SafeInt<T>(rhs);
			return *this;
		}

		template <class U>
		constexpr SafeInt<T>& operator=(const SafeInt<U>& rhs) requires(
		    sizeof(U) < sizeof(T) ||
		    (sizeof(U) == sizeof(T) &&
		     (std::numeric_limits<T>::is_signed == std::numeric_limits<U>::is_signed))) {
			if constexpr (!std::numeric_limits<T>::is_signed && std::numeric_limits<U>::is_signed) {
				static_assert(false, "Cannot assign signed value to unsigned type");
			}
			SafeCastHelper<T, U, CastMethodHelper<T, U>::method>::CastThrow(rhs.__builtin_ref(),
			                                                                value);
			return *this;
		}

		constexpr explicit operator bool() const noexcept { return !!value; }

		constexpr explicit(sizeof(T) > 1 || (std::numeric_limits<T>::is_signed !=
		                                     std::numeric_limits<char>::is_signed))
		operator char() const {
			char v = 0;
			SafeCastHelper<char, T, CastMethodHelper<char, T>::method>::CastThrow(value, v);
			return v;
		}

		constexpr explicit(sizeof(T) > 1 || (std::numeric_limits<T>::is_signed !=
		                                     std::numeric_limits<signed char>::is_signed))
		operator signed char() const {
			signed char v = 0;
			SafeCastHelper<signed char, T, CastMethodHelper<signed char, T>::method>::CastThrow(
			    value, v);
			return v;
		}

		constexpr explicit(sizeof(T) > 1 || (std::numeric_limits<T>::is_signed !=
		                                     std::numeric_limits<unsigned char>::is_signed))
		operator unsigned char() const {
			unsigned char v = 0;
			SafeCastHelper<unsigned char, T, CastMethodHelper<unsigned char, T>::method>::CastThrow(
			    value, v);
			return v;
		}

		constexpr explicit(sizeof(T) > 2 ||
		                   (sizeof(T) == 2 && std::numeric_limits<T>::is_signed !=
		                                          std::numeric_limits<signed char>::is_signed))
		operator short() const {
			short v = 0;
			SafeCastHelper<short, T, CastMethodHelper<short, T>::method>::CastThrow(value, v);
			return v;
		}

		constexpr explicit(sizeof(T) > 2 ||
		                   (sizeof(T) == 2 && std::numeric_limits<T>::is_signed !=
		                                          std::numeric_limits<unsigned char>::is_signed))
		operator unsigned short() const {
			unsigned short v = 0;
			SafeCastHelper<unsigned short, T,
			               CastMethodHelper<unsigned short, T>::method>::CastThrow(value, v);
			return v;
		}

		constexpr explicit(sizeof(T) > 4 ||
		                   (sizeof(T) == 4 && std::numeric_limits<T>::is_signed !=
		                                          std::numeric_limits<int>::is_signed))
		operator int() const {
			int v = 0;
			SafeCastHelper<int, T, CastMethodHelper<int, T>::method>::CastThrow(value, v);
			return v;
		}

		constexpr explicit(sizeof(T) > 4 ||
		                   (sizeof(T) == 4 && std::numeric_limits<T>::is_signed !=
		                                          std::numeric_limits<unsigned int>::is_signed))
		operator unsigned int() const {
			unsigned int v = 0;
			SafeCastHelper<unsigned int, T, CastMethodHelper<unsigned int, T>::method>::CastThrow(
			    value, v);
			return v;
		}

		constexpr explicit(sizeof(T) > sizeof(long) ||
		                   (sizeof(T) == sizeof(long) && std::numeric_limits<T>::is_signed !=
		                                                     std::numeric_limits<long>::is_signed))
		operator long() const {
			long v = 0;
			SafeCastHelper<long, T, CastMethodHelper<long, T>::method>::CastThrow(value, v);
			return v;
		}

		constexpr explicit(sizeof(T) > sizeof(long) ||
		                   (sizeof(T) == sizeof(long) &&
		                    std::numeric_limits<T>::is_signed !=
		                        std::numeric_limits<unsigned long>::is_signed))
		operator unsigned long() const {
			unsigned long v = 0;
			SafeCastHelper<unsigned long, T, CastMethodHelper<unsigned long, T>::method>::CastThrow(
			    value, v);
			return v;
		}

		constexpr explicit(sizeof(T) == 8 && std::numeric_limits<T>::is_signed !=
		                                         std::numeric_limits<long long>::is_signed)
		operator long long() const {
			long long v = 0;
			SafeCastHelper<long long, T, CastMethodHelper<long long, T>::method>::CastThrow(value,
			                                                                                v);
			return v;
		}

		constexpr explicit(sizeof(T) == 8 && std::numeric_limits<T>::is_signed !=
		                                         std::numeric_limits<unsigned long long>::is_signed)
		operator unsigned long long() const {
			unsigned long long v = 0;
			SafeCastHelper<unsigned long long, T,
			               CastMethodHelper<unsigned long long, T>::method>::CastThrow(value, v);
			return v;
		}

		constexpr explicit(sizeof(T) > sizeof(wchar_t) ||
		                   (sizeof(T) == sizeof(wchar_t) &&
		                    std::numeric_limits<T>::is_signed !=
		                        std::numeric_limits<wchar_t>::is_signed))
		operator wchar_t() const {
			wchar_t v = 0;
			SafeCastHelper<wchar_t, T, CastMethodHelper<wchar_t, T>::method>::CastThrow(value, v);
			return v;
		}

		constexpr explicit(sizeof(T) > sizeof(char8_t) ||
		                   (sizeof(T) == sizeof(char8_t) &&
		                    std::numeric_limits<T>::is_signed !=
		                        std::numeric_limits<char8_t>::is_signed))
		operator char8_t() const {
			uint8_t v = 0;
			SafeCastHelper<uint8_t, T, CastMethodHelper<uint8_t, T>::method>::CastThrow(value, v);
			return (char8_t) v;
		}

		constexpr explicit(sizeof(T) > sizeof(char16_t) ||
		                   (sizeof(T) == sizeof(char16_t) &&
		                    std::numeric_limits<T>::is_signed !=
		                        std::numeric_limits<char8_t>::is_signed))
		operator char16_t() const {
			uint16_t v = 0;
			SafeCastHelper<uint16_t, T, CastMethodHelper<uint16_t, T>::method>::CastThrow(value, v);
			return (char16_t) v;
		}

		constexpr explicit(sizeof(T) > sizeof(char32_t) ||
		                   (sizeof(T) == sizeof(char32_t) &&
		                    std::numeric_limits<T>::is_signed !=
		                        std::numeric_limits<char8_t>::is_signed))
		operator char32_t() const {
			uint32_t v = 0;
			SafeCastHelper<uint32_t, T, CastMethodHelper<uint32_t, T>::method>::CastThrow(value, v);
			return (char32_t) v;
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

		constexpr const SafeInt<T>& operator+() const noexcept { return *this; }

		constexpr SafeInt<T> operator-() const {
			//static_assert(std::numeric_limits<T>::is_signed,
			              //"Cannot to negate the unsigned number");
			return SafeInt<T>(
			    NegationHelper<T, std::numeric_limits<T>::is_signed>::NegativeThrow(value));
		}

		constexpr SafeInt<T>& operator++() {
			if (value != std::numeric_limits<T>::max()) {
				++value;
				return *this;
			}
			throw IntegerOverflowException();
		}

		constexpr SafeInt<T>& operator--() {
			if (value != std::numeric_limits<T>::min()) {
				--value;
				return *this;
			}
			throw IntegerOverflowException();
		}

		constexpr SafeInt<T> operator++(int) {
			if (value != std::numeric_limits<T>::max()) {
				SafeInt<T> tmp(value);
				++value;
				return tmp;
			}
			throw IntegerOverflowException();
		}

		constexpr SafeInt<T> operator--(int) {
			if (value != std::numeric_limits<T>::min()) {
				SafeInt<T> tmp(value);
				--value;
				return tmp;
			}
			throw IntegerOverflowException();
		}

		constexpr SafeInt<T> operator~() const noexcept { return SafeInt<T>((T) ~value); }
		constexpr SafeInt<T> _operator_not() const noexcept { return SafeInt<T>((T) ~value); }

		template <class U>
		constexpr SafeInt<T> operator%(U rhs) const {
			T result = 0;
			ModulusHelper<T, U, ValidComparison<T, U>::method>::ModulusThrow(value, rhs, result);
			return SafeInt<T>(result);
		}

		template <class U>
		constexpr SafeInt<T> operator%(SafeInt<U> rhs) const {
			T result = 0;
			ModulusHelper<T, U, ValidComparison<T, U>::method>::ModulusThrow(value, (U) rhs,
			                                                                 result);
			return SafeInt<T>(result);
		}

		template <class U>
		constexpr SafeInt<T>& operator%=(U rhs) {
			ModulusHelper<T, U, ValidComparison<T, U>::method>::ModulusThrow(value, rhs, value);
			return *this;
		}

		template <class U>
		constexpr SafeInt<T>& operator%=(SafeInt<U> rhs) {
			ModulusHelper<T, U, ValidComparison<T, U>::method>::ModulusThrow(value, (U) rhs, value);
			return *this;
		}

		template <class U>
		constexpr SafeInt<T> operator*(U rhs) const {
			T result = 0;
			MultiplicationHelper<T, U, MultiplicationMethod<T, U>::method>::MultiplyThrow(
			    value, rhs, result);
			return SafeInt<T>(result);
		}

		template <class U>
		constexpr SafeInt<T> operator*(SafeInt<U> rhs) const {
			T result = 0;
			MultiplicationHelper<T, U, MultiplicationMethod<T, U>::method>::MultiplyThrow(
			    value, (U) rhs, result);
			return SafeInt<T>(result);
		}

		template <class U>
		constexpr SafeInt<T>& operator*=(U rhs) {
			MultiplicationHelper<T, U, MultiplicationMethod<T, U>::method>::MultiplyThrow(
			    value, rhs, value);
			return *this;
		}

		template <class U>
		constexpr SafeInt<T>& operator*=(SafeInt<U> rhs) {
			MultiplicationHelper<T, U, MultiplicationMethod<T, U>::method>::MultiplyThrow(
			    value, (U) rhs, value);
			return *this;
		}

		template <class U>
		constexpr SafeInt<T> Div(U rhs) const {
			T result = 0;
			DivisionHelper<T, U, DivisionMethod<T, U>::method>::DivideThrow(value, rhs, result);
			return SafeInt<T>(result);
		}

		template <class U>
		constexpr SafeInt<T> Div(SafeInt<U> rhs) const {
			T result = 0;
			DivisionHelper<T, U, DivisionMethod<T, U>::method>::DivideThrow(value, (U) rhs, result);
			return SafeInt<T>(result);
		}

		template <class U>
		constexpr SafeInt<T>& DivAssign(U rhs) {
			DivisionHelper<T, U, DivisionMethod<T, U>::method>::DivideThrow(value, rhs, value);
			return *this;
		}

		template <class U>
		constexpr SafeInt<T>& DivAssign(SafeInt<U> rhs) {
			DivisionHelper<T, U, DivisionMethod<T, U>::method>::DivideThrow(value, (U) rhs, value);
			return *this;
		}

		template <class U>
		constexpr SafeInt<T>& operator/=(U rhs) {
			value = (T) std::round((double) value / (double) rhs);
			return *this;
		}

		template <class U>
		constexpr SafeInt<T>& operator/=(SafeInt<U> rhs) {
			value = (T) std::round((double) value / (double) rhs);
			return *this;
		}

		template <class U>
		constexpr SafeInt<T> operator+(U rhs) const {
			T result = 0;
			AdditionHelper<T, U, AdditionMethod<T, U>::method>::AdditionThrow(value, rhs, result);
			return SafeInt<T>(result);
		}

		template <class U>
		constexpr SafeInt<T> operator+(SafeInt<U> rhs) const {
			T result = 0;
			AdditionHelper<T, U, AdditionMethod<T, U>::method>::AdditionThrow(value, (U) rhs,
			                                                                  result);
			return SafeInt<T>(result);
		}

		template <class U>
		constexpr SafeInt<T>& operator+=(U rhs) {
			AdditionHelper<T, U, AdditionMethod<T, U>::method>::AdditionThrow(value, rhs, value);
			return *this;
		}

		template <class U>
		constexpr SafeInt<T>& operator+=(SafeInt<U> rhs) {
			AdditionHelper<T, U, AdditionMethod<T, U>::method>::AdditionThrow(value, (U) rhs,
			                                                                  value);
			return *this;
		}

		template <class U>
		constexpr SafeInt<T> operator-(U rhs) const {
			T result = 0;
			SubtractionHelper<T, U, SubtractionMethod<T, U>::method>::SubtractThrow(value, rhs,
			                                                                        result);
			return SafeInt<T>(result);
		}

		template <class U>
		constexpr SafeInt<T> operator-(SafeInt<U> rhs) const {
			T result = 0;
			SubtractionHelper<T, U, SubtractionMethod<T, U>::method>::SubtractThrow(value, (U) rhs,
			                                                                        result);
			return SafeInt<T>(result);
		}

		template <class U>
		constexpr SafeInt<T>& operator-=(U rhs) {
			SubtractionHelper<T, U, SubtractionMethod<T, U>::method>::SubtractThrow(value, rhs,
			                                                                        value);
			return *this;
		}

		template <class U>
		constexpr SafeInt<T>& operator-=(SafeInt<U> rhs) {
			SubtractionHelper<T, U, SubtractionMethod<T, U>::method>::SubtractThrow(value, (U) rhs,
			                                                                        value);
			return *this;
		}

		template <class U>
		constexpr SafeInt<T> operator<<(U bits) const {
			if (ValidBitCount<T, U>(bits)) {
				return SafeInt<T>((T) (value << bits));
			}
			throw IntegerOverflowException();
		}

		template <class U>
		constexpr SafeInt<T> operator<<(SafeInt<U> bits) const {
			if (ValidBitCount<T, U>(bits)) {
				return SafeInt<T>((T) (value << (U) bits));
			}
			throw IntegerOverflowException();
		}

		template <class U>
		constexpr SafeInt<T>& operator<<=(U bits) {
			if (ValidBitCount<T, U>(bits)) {
				value <<= bits;
				return *this;
			}
			throw IntegerOverflowException();
		}

		template <class U>
		constexpr SafeInt<T>& operator<<=(SafeInt<U> bits) {
			if (ValidBitCount<T, U>(bits)) {
				value <<= (U) bits;
				return *this;
			}
			throw IntegerOverflowException();
		}

		template <class U>
		constexpr SafeInt<T> operator>>(U bits) const {
			if (ValidBitCount<T, U>(bits)) {
				return SafeInt<T>((T) (value >> bits));
			}
			throw IntegerOverflowException();
		}

		template <class U>
		constexpr SafeInt<T> operator>>(SafeInt<U> bits) const {
			if (ValidBitCount<T, U>(bits)) {
				return SafeInt<T>((T) (value >> (U) bits));
			}
			throw IntegerOverflowException();
		}

		template <class U>
		constexpr SafeInt<T>& operator>>=(U bits) {
			if (ValidBitCount<T, U>(bits)) {
				value >>= bits;
				return *this;
			}
			throw IntegerOverflowException();
		}

		template <class U>
		constexpr SafeInt<T>& operator>>=(SafeInt<U> bits) {
			if (ValidBitCount<T, U>(bits)) {
				value >>= (U) bits;
				return *this;
			}
			throw IntegerOverflowException();
		}

		constexpr SafeInt<T> operator&(SafeInt<T> rhs) const noexcept {
			return SafeInt<T>(value & (T) rhs);
		}

		template <class U>
		constexpr SafeInt<T> operator&(SafeInt<U> rhs) const noexcept {
			return (*this & (U) rhs);
		}

		template <class U>
		constexpr SafeInt<T> operator&(U rhs) const noexcept {
			return SafeInt<T>(BinaryAndHelper<T, U, BinaryMethod<T, U>::method>::And(value, rhs));
		}

		constexpr SafeInt<T>& operator&=(SafeInt<T> rhs) noexcept {
			value &= (T) rhs;
			return *this;
		}

		template <class U>
		constexpr SafeInt<T>& operator&=(U rhs) noexcept {
			value = BinaryAndHelper<T, U, BinaryMethod<T, U>::method>::And(value, rhs);
			return *this;
		}

		template <class U>
		constexpr SafeInt<T>& operator&=(SafeInt<U> rhs) noexcept {
			value = BinaryAndHelper<T, U, BinaryMethod<T, U>::method>::And(value, (U) rhs);
			return *this;
		}

		constexpr SafeInt<T> operator|(SafeInt<T> rhs) const noexcept {
			return SafeInt<T>(value | (T) rhs);
		}

		template <class U>
		constexpr SafeInt<T> operator|(SafeInt<U> rhs) const noexcept {
			return (*this | (U) rhs);
		}

		template <class U>
		constexpr SafeInt<T> operator|(U rhs) const noexcept {
			return SafeInt<T>(BinaryOrHelper<T, U, BinaryMethod<T, U>::method>::Or(value, rhs));
		}

		constexpr SafeInt<T>& operator|=(SafeInt<T> rhs) noexcept {
			value |= (T) rhs;
			return *this;
		}

		template <class U>
		constexpr SafeInt<T>& operator|=(U rhs) noexcept {
			value = BinaryOrHelper<T, U, BinaryMethod<T, U>::method>::Or(value, rhs);
			return *this;
		}

		template <class U>
		constexpr SafeInt<T>& operator|=(SafeInt<U> rhs) noexcept {
			value = BinaryOrHelper<T, U, BinaryMethod<T, U>::method>::Or(value, (U) rhs);
			return *this;
		}

		constexpr SafeInt<T> operator^(SafeInt<T> rhs) const noexcept {
			return SafeInt<T>(value ^ (T) rhs);
		}

		template <class U>
		constexpr SafeInt<T> operator^(SafeInt<U> rhs) const noexcept {
			return (*this ^ (U) rhs);
		}

		template <class U>
		constexpr SafeInt<T> operator^(U rhs) const noexcept {
			return SafeInt<T>(BinaryXorHelper<T, U, BinaryMethod<T, U>::method>::Xor(value, rhs));
		}

		constexpr SafeInt<T>& operator^=(SafeInt<T> rhs) noexcept {
			value ^= (T) rhs;
			return *this;
		}

		template <class U>
		constexpr SafeInt<T>& operator^=(U rhs) noexcept {
			value = BinaryXorHelper<T, U, BinaryMethod<T, U>::method>::Xor(value, rhs);
			return *this;
		}

		template <class U>
		constexpr SafeInt<T>& operator^=(SafeInt<U> rhs) noexcept {
			value = BinaryXorHelper<T, U, BinaryMethod<T, U>::method>::Xor(value, (U) rhs);
			return *this;
		}

		template<class U>
		inline constexpr auto __builtin_UnsafeNarrow() noexcept {
			auto result = U{};
			result.value = value;
			return result;
		}

	   private:
		T value {};
	};

	template <class T, class U>
	constexpr auto operator<=>(const U& lhs, const SafeInt<T>& rhs) noexcept requires(std::is_integral_v<U>) {
		if (GreaterThanTest<T, U, ValidComparison<T, U>::method>::GreaterThan((T) rhs, lhs)) {
			return -1;
		}
		if (GreaterThanTest<U, T, ValidComparison<U, T>::method>::GreaterThan(lhs, (T) rhs)) {
			return 1;
		}
		return 0;
	}

	template <class T, class U>
	constexpr auto operator<=>(const SafeInt<T>& lhs, const U& rhs) noexcept
	    requires(std::is_integral_v<U>) {
		if (GreaterThanTest<U, T, ValidComparison<U, T>::method>::GreaterThan(rhs, (T) lhs)) {
			return -1;
		}
		if (GreaterThanTest<T, U, ValidComparison<T, U>::method>::GreaterThan((T) lhs, rhs)) {
			return 1;
		}
		return 0;
	}

	template <class T, class U>
	constexpr auto operator<=>(const SafeInt<U>& lhs, const SafeInt<T>& rhs) noexcept {
		if (GreaterThanTest<T, U, ValidComparison<T, U>::method>::GreaterThan((T) rhs, (U) lhs)) {
			return -1;
		}
		if (GreaterThanTest<U, T, ValidComparison<U, T>::method>::GreaterThan((U) lhs, (T) rhs)) {
			return 1;
		}
		return 0;
	}

	template <class T, class U>
	constexpr bool operator==(const SafeInt<T>& lhs, const SafeInt<U>& rhs) noexcept {
		return EqualityTest<T, U, ValidComparison<T, U>::method>::IsEquals((T) lhs, (U) rhs);
	}

	template <class T, class U>
	constexpr bool operator==(const U& lhs, const SafeInt<T>& rhs) noexcept requires(std::is_integral_v<U>) {
		return EqualityTest<T, U, ValidComparison<T, U>::method>::IsEquals((T) rhs, lhs);
	}

	template <class T, class U>
	constexpr bool operator==(const SafeInt<T>& lhs, const U& rhs) noexcept
	    requires(std::is_integral_v<U>) {
		return EqualityTest<T, U, ValidComparison<T, U>::method>::IsEquals((T) lhs, rhs);
	}

	/*template <class T>
	constexpr bool operator==(bool lhs, SafeInt<T> rhs) noexcept {
		return lhs == ((T) rhs == 0 ? false : true);
	}*/

	/*template <class T>
	constexpr bool operator==(SafeInt<T> lhs, bool rhs) noexcept {
	    return rhs == ((T) lhs == 0 ? false : true);
	}*/

	template <class T, class U>
	constexpr bool operator!=(const SafeInt<T>& lhs, const SafeInt<U>& rhs) noexcept {
		return !EqualityTest<T, U, ValidComparison<T, U>::method>::IsEquals((T) lhs, (U) rhs);
	}

	template <class T, class U>
	constexpr bool operator!=(const U& lhs, SafeInt<T> rhs) noexcept requires(std::is_integral_v<U>) {
	    return !EqualityTest<T, U, ValidComparison<T, U>::method>::IsEquals((T) rhs, lhs);
	}

	template <class T, class U>
	constexpr bool operator!=(const SafeInt<T>& lhs, const U& rhs) noexcept
	    requires(std::is_integral_v<U>) {
	    return !EqualityTest<T, U, ValidComparison<T, U>::method>::IsEquals((T) lhs, rhs);
	}

	/*template <class T>
	constexpr bool operator!=(bool lhs, SafeInt<T> rhs) noexcept {
	    return ((T) rhs == 0 ? false : true) != lhs;
	}*/

	/*template <class T>
	constexpr bool operator!=(SafeInt<T> lhs, bool rhs) noexcept {
	    return ((T) lhs == 0 ? false : true) != rhs;
	}*/

	

	template <class T, class U>
	constexpr SafeInt<T> operator%(U lhs, SafeInt<T> rhs) requires(std::is_integral_v<U>) {
		SafeInt<T> result;
		if (ModulusSimpleCaseHelper < T, U,
		    (sizeof(T) == sizeof(U)) &&
		        ((bool) std::numeric_limits<T>::is_signed ==
		         (bool) std::numeric_limits<U>::is_signed) > ::ModulusSimpleCase(lhs, rhs, result))
			return result;

		result = (SafeInt<U>(lhs) % (T) rhs);
		return result;
	}

	template <class T, class U>
	CONSTEXPR_MULTIPLY SafeInt<T> operator*(U lhs, SafeInt<T> rhs) requires(std::is_integral_v<U>) {
		T result = 0;
		MultiplicationHelper<T, U, MultiplicationMethod<T, U>::method>::MultiplyThrow((T) rhs, lhs,
		                                                                              result);
		return SafeInt<T>(result);
	}


	template <class T, class U>
	constexpr SafeInt<T> Div(U lhs, SafeInt<T> rhs) requires(std::is_integral_v<U>) {
		SafeInt<T> result;
		if (DivisionCornerCaseHelper<
		        T, U, (int) DivisionMethod<U, T>::method == (int) DivisionState_UnsignedSigned>::
		        DivisionCornerCase1(lhs, rhs, result))
			return result;
		if (DivisionCornerCaseHelper2<
		        T, U, __details::TypeCompare<T, U>::isBothSigned>::DivisionCornerCase2(lhs, rhs,
		                                                                               result))
			return result;

		U ret = 0;
		DivisionHelper<U, T, DivisionMethod<U, T>::method>::DivideThrow(lhs, (T) rhs, ret);
		return SafeInt<T>(ret);
	}

	/* template <class T, class U>
	constexpr SafeInt<T> operator+(U lhs, SafeInt<T> rhs) requires(std::is_integral_v<U>) {
		T result {0};
		AdditionHelper<T, U, AdditionMethod<T, U>::method>::AdditionThrow((T) rhs, lhs, result);
		return SafeInt<T>(result);
	}*/

	template <class T, class U>
	constexpr SafeInt<T> operator-(U lhs, SafeInt<T> rhs) requires(std::is_integral_v<U>) {
		T result {0};
		SubtractionHelper<U, T, SubtractionMethod2<U, T>::method>::SubtractThrow(
		    lhs, rhs.__builtin_ref(),
		                                                                         result);
		return SafeInt<T>(result);
	}

	template <class T, class U>
	constexpr T& operator+=(T& lhs, SafeInt<U> rhs) requires(std::is_integral_v<T>) {
		T result {0};
		AdditionHelper<T, U, AdditionMethod<T, U>::method>::AdditionThrow(lhs, (U) rhs, result);
		lhs = result;
		return lhs;
	}

	template <class T, class U>
	constexpr T& operator-=(T& lhs, SafeInt<U> rhs) requires(std::is_integral_v<T>) {
		T result {0};
		SubtractionHelper<T, U, SubtractionMethod<T, U>::method>::SubtractThrow(lhs, (U) rhs,
		                                                                        result);
		lhs = result;
		return lhs;
	}

	template <class T, class U>
	constexpr T& operator*=(T& lhs, SafeInt<U> rhs) requires(std::is_integral_v<T>) {
		T result {0};
		MultiplicationHelper<T, U, MultiplicationMethod<T, U>::method>::MultiplyThrow(lhs, (U) rhs,
		                                                                              result);
		lhs = result;
		return lhs;
	}

	template <class T, class U>
	constexpr T& DivAssign(T& lhs, SafeInt<U> rhs) requires(std::is_integral_v<T>) {
		T result {0};
		DivisionHelper<T, U, DivisionMethod<T, U>::method>::DivideThrow(lhs, (U) rhs, result);
		lhs = result;
		return lhs;
	}

	template <class T, class U>
	constexpr T& operator/=(T& lhs, SafeInt<U> rhs) requires(std::is_integral_v<T>) {
		if (rhs == 0)
			throw DivisionByZeroException();
		lhs = (T)std::round((double) lhs / (double) rhs);
		return lhs;
	}

	template <class T, class U>
	constexpr T& operator%=(T& lhs, SafeInt<U> rhs) requires(std::is_integral_v<T>) {
		T result {0};
		ModulusHelper<T, U, ValidComparison<T, U>::method>::ModulusThrow(lhs, (U) rhs, result);
		lhs = result;
		return lhs;
	}

	template <class T, class U>
	constexpr T& operator&=(T& lhs, SafeInt<U> rhs) noexcept requires(std::is_integral_v<T>) {
		lhs = BinaryAndHelper<T, U, BinaryMethod<T, U>::method>::And(lhs, (U) rhs);
		return lhs;
	}

	template <class T, class U>
	constexpr T& operator|=(T& lhs, SafeInt<U> rhs) noexcept requires(std::is_integral_v<T>) {
		lhs = BinaryOrHelper<T, U, BinaryMethod<T, U>::method>::Or(lhs, (U) rhs);
		return lhs;
	}

	template <class T, class U>
	constexpr T& operator^=(T& lhs, SafeInt<U> rhs) noexcept requires(std::is_integral_v<T>) {
		lhs = BinaryXorHelper<T, U, BinaryMethod<T, U>::method>::Xor(lhs, (U) rhs);
		return lhs;
	}

	template <class T, class U>
	constexpr T& operator<<=(T& lhs, SafeInt<U> rhs) noexcept requires(std::is_integral_v<T>) {
		lhs = (T) (SafeInt<T>(lhs) << (U) rhs);
		return lhs;
	}

	template <class T, class U>
	constexpr T& operator>>=(T& lhs, SafeInt<U> rhs) noexcept requires(std::is_integral_v<T>) {
		lhs = (T) (SafeInt<T>(lhs) >> (U) rhs);
		return lhs;
	}

	template <class T, class U>
	constexpr static SafeInt<U> operator<<(U lhs, SafeInt<T> bits) requires(std::is_integral_v<U>) {
		if (ValidBitCount<T, U>(bits)) {
			return SafeInt<U>((U) (lhs << (T) bits));
		}
		throw IntegerOverflowException();
	}

	template <class T, class U>
	constexpr static SafeInt<U> operator>>(U lhs, SafeInt<T> bits) requires(std::is_integral_v<U>) {
		if (ValidBitCount<T, U>(bits)) {
			return SafeInt<U>((U) (lhs >> (T) bits));
		}
		throw IntegerOverflowException();
	}

	template <class T, class U>
	constexpr SafeInt<T> operator&(U lhs, SafeInt<T> rhs) noexcept requires(std::is_integral_v<U>) {
		return SafeInt<T>(BinaryAndHelper<T, U, BinaryMethod<T, U>::method>::And((T) rhs, lhs));
	}

	template <class T, class U>
	constexpr SafeInt<T> operator|(U lhs, SafeInt<T> rhs) noexcept requires(std::is_integral_v<U>) {
		return SafeInt<T>(BinaryOrHelper<T, U, BinaryMethod<T, U>::method>::Or((T) rhs, lhs));
	}

	template <class T, class U>
	constexpr SafeInt<T> operator^(U lhs, SafeInt<T> rhs) noexcept requires(std::is_integral_v<U>) {
		return SafeInt<T>(BinaryXorHelper<T, U, BinaryMethod<T, U>::method>::Xor((T) rhs, lhs));
	}

}  // namespace Builtin

inline constexpr bool operator!=(auto lhs, auto rhs) { return !(lhs == rhs); }
