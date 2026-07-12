#pragma once
#include "Integer.h"

namespace Builtin::Unsafe {
	template <class T>
	struct __RawPtr : public Struct {
		using __self  = __RawPtr<T>;
		using __class = __Class_Basic<__self>;

		constexpr decltype(auto) __ref() noexcept { return *this; }
		constexpr decltype(auto) __ref() const noexcept { return *this; }
		constexpr __RawPtr() noexcept = default;
		constexpr __RawPtr(T* _value) noexcept : value(_value) {}
		constexpr __RawPtr(decltype(nullptr)) noexcept : value {nullptr} {}
		constexpr __RawPtr(const __RawPtr<T>& other) noexcept = default;
		constexpr __RawPtr& operator=(const __RawPtr<T>& other) noexcept = default;
		constexpr __RawPtr& operator=(decltype(nullptr)) noexcept {
			value = nullptr;
			return *this;
		}
		constexpr __RawPtr& operator=(T* _value) noexcept {
			value = _value;
			return *this;
		}

		constexpr operator T*() const noexcept { return value; }

		constexpr auto& operator*() requires(!std::is_same_v<T, void>) { return *value; }

		constexpr const auto& operator*() const requires(!std::is_same_v<T, void>) {
			return *value;
		}

		constexpr operator bool() const noexcept { return !!value; }

		constexpr bool operator==(const __RawPtr<T>& other) const noexcept {
			return value == other.value;
		}

		constexpr bool operator==(T* other) const noexcept { return value == other; }

		constexpr bool operator==(decltype(nullptr)) const noexcept { return value == nullptr; }

		constexpr bool operator!=(const __RawPtr<T>& other) const noexcept {
			return value != other.value;
		}

		constexpr bool operator!=(T* other) const noexcept { return value != other; }

		constexpr bool operator!=(decltype(nullptr)) const noexcept { return value != nullptr; }

		constexpr __RawPtr<T>& UnsafeIncrement() noexcept {
			++value;
			return *this;
		}

		constexpr __RawPtr<T>& UnsafeIncrement(size_t offset) noexcept {
			value += offset;
			return *this;
		}

		constexpr __RawPtr<T>& UnsafeDecrement() noexcept {
			--value;
			return *this;
		}

		constexpr __RawPtr<T>& UnsafeDecrement(size_t offset) noexcept {
			value -= offset;
			return *this;
		}

		constexpr __RawPtr<T>& operator+=(size_t offset) noexcept {
			value += offset;
			return *this;
		}

		constexpr __RawPtr<T>& operator++() noexcept { return UnsafeIncrement(); }

		constexpr __RawPtr<T> operator++(int) noexcept {
			auto copy = *this;
			UnsafeIncrement();
			return copy;
		}

		constexpr __RawPtr<T>& operator-=(size_t offset) noexcept {
			value -= offset;
			return *this;
		}

		constexpr __RawPtr<T>& operator--() noexcept { return UnsafeDecrement(); }

		constexpr __RawPtr<T> operator--(int) noexcept {
			auto copy = *this;
			UnsafeDecrement();
			return copy;
		}

		constexpr __RawPtr<T> UnsafeAdd(size_t offset) const noexcept {
			return __RawPtr<T>(value + offset);
		}

		constexpr __RawPtr<T> operator+(size_t offset) const noexcept { return UnsafeAdd(offset); }

		constexpr isize UnsafeDifference(__RawPtr<T> other) const noexcept {
			return value - other.value;
		}

		constexpr isize operator-(__RawPtr<T> other) const noexcept {
			return UnsafeDifference(other);
		}

		constexpr __RawPtr<T> operator-(size_t other) const noexcept {
			return value - other;
		}

		constexpr auto& operator[](size_t offset) requires(!std::is_same_v<T, void>) {
			return value[offset];
		}

		constexpr const auto& operator[](size_t offset) const requires(!std::is_same_v<T, void>) {
			return value[offset];
		}

		constexpr auto& _operator_subscript(size_t offset) requires(!std::is_same_v<T, void>) {
			return value[offset];
		}

		constexpr const auto& _operator_subscript(size_t offset) const
		    requires(!std::is_same_v<T, void>) {
			return value[offset];
		}

		constexpr usize UnsafeNarrowToInteger() const noexcept {
			return reinterpret_cast<size_t>(value);
		}

		/*template <class U>
		constexpr __RawPtr<U> UnsafePointerCast() const noexcept {
			return ((U*) (value));
		}*/

		static constexpr __RawPtr<T> UnsafeNarrowToPointer(usize value) noexcept {
			return reinterpret_cast<T*>((size_t) value);
		}

	   private:
		T* value;
	};

	template <class T>
	struct __VolatileRawPtr : public Struct {
		using __self = __VolatileRawPtr<T>;
		using __class = __Class_Basic<__self>;

		constexpr decltype(auto) __ref() noexcept { return *this; }
		constexpr decltype(auto) __ref() const noexcept { return *this; }
		constexpr __VolatileRawPtr() noexcept = default;
		constexpr __VolatileRawPtr(volatile T* _value) noexcept : value(_value) {}
		constexpr __VolatileRawPtr(decltype(nullptr)) noexcept : value {nullptr} {}
		constexpr __VolatileRawPtr(const __VolatileRawPtr<T>& other) noexcept = default;
		constexpr volatile __VolatileRawPtr& operator                         =(
            const __VolatileRawPtr<T>& other) volatile noexcept {
			value = other.value;
			return *this;
		}

		constexpr __VolatileRawPtr(const __RawPtr<T>& other) noexcept : value {(T*) other} {}
		constexpr volatile __VolatileRawPtr& operator=(const __RawPtr<T>& other) volatile noexcept {
			value = (T*) other;
			return *this;
		}

		constexpr volatile __VolatileRawPtr& operator=(decltype(nullptr)) volatile noexcept {
			value = nullptr;
			return *this;
		}
		constexpr volatile __VolatileRawPtr& operator=(volatile T* _value) volatile noexcept {
			value = _value;
			return *this;
		}

		constexpr operator volatile T*() const volatile noexcept { return value; }

		constexpr auto& operator*() volatile noexcept requires(!std::is_same_v<T, void>) {
			return *value;
		}

		constexpr const auto& operator*() const volatile noexcept
		    requires(!std::is_same_v<T, void>) {
			return *value;
		}

		constexpr operator bool() const volatile noexcept { return !!value; }

		constexpr bool operator==(const __VolatileRawPtr<T>& other) const volatile noexcept {
			return value == other.value;
		}

		constexpr bool operator==(const __RawPtr<T>& other) const volatile noexcept {
			return value == (T*) other;
		}

		constexpr bool operator==(volatile T* other) const volatile noexcept {
			return value == other;
		}

		constexpr bool operator==(decltype(nullptr)) const volatile noexcept {
			return value == nullptr;
		}

		constexpr bool operator!=(const __VolatileRawPtr<T>& other) const volatile noexcept {
			return value != other.value;
		}

		constexpr bool operator!=(const __RawPtr<T>& other) const volatile noexcept {
			return value != (T*) other;
		}

		constexpr bool operator!=(volatile T* other) const volatile noexcept {
			return value != other;
		}

		constexpr bool operator!=(decltype(nullptr)) const volatile noexcept {
			return value != nullptr;
		}

		constexpr volatile __VolatileRawPtr<T>& UnsafeIncrement() volatile noexcept {
			++value;
			return *this;
		}

		constexpr volatile __VolatileRawPtr<T>& UnsafeIncrement(size_t step) volatile noexcept {
			value += step;
			return *this;
		}

		constexpr volatile __VolatileRawPtr<T>& UnsafeDecrement() volatile noexcept {
			--value;
			return *this;
		}

		constexpr volatile __VolatileRawPtr<T>& UnsafeDecrement(size_t step) volatile noexcept {
			value -= step;
			return *this;
		}

		constexpr volatile __VolatileRawPtr<T> UnsafeAdd(size_t step) const volatile noexcept {
			return __VolatileRawPtr<T>(value + step);
		}

		constexpr isize UnsafeDifference(__VolatileRawPtr<T> other) const
		    volatile noexcept {
			return value - other.value;
		}

		constexpr usize UnsafeNarrowToInteger() const volatile noexcept {
			return reinterpret_cast<size_t>(value);
		}

		/*template <class U>
		constexpr __VolatileRawPtr<U> UnsafePointerCast() const volatile noexcept {
			return ((U*) (value));
		}*/

		static constexpr __VolatileRawPtr<T> UnsafeNarrowToPointer(usize value) noexcept {
			return reinterpret_cast<T*>((size_t) value);
		}

	   private:
		T* volatile value;
	};

	template <class T>
	constexpr usize UnsafeCastToUsize(__RawPtr<T> ptr) noexcept {
		return reinterpret_cast<size_t>((T*) ptr);
	}

	template <class U, class T>
	constexpr __RawPtr<U> UnsafePointerCast(__RawPtr<T> ptr) noexcept {
		return ((U*) (T*) ptr);
	}

	template <class T>
	constexpr __RawPtr<T> UnsafeCastToPointer(usize value) noexcept {
		return reinterpret_cast<T*>((size_t) value);
	}
}  // namespace Builtin::Unsafe