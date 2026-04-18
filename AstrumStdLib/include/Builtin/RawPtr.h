#pragma once
#include "Integer.h"

namespace CppAdvance::Unsafe {
	template <class T>
	struct __RawPtr {
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

		constexpr __RawPtr<T>& unsafeIncrement() noexcept {
			++value;
			return *this;
		}

		constexpr __RawPtr<T>& unsafeIncrement(size_t offset) noexcept {
			value += offset;
			return *this;
		}

		constexpr __RawPtr<T>& unsafeDecrement() noexcept {
			--value;
			return *this;
		}

		constexpr __RawPtr<T>& unsafeDecrement(size_t offset) noexcept {
			value -= offset;
			return *this;
		}

		constexpr __RawPtr<T>& operator+=(size_t offset) noexcept {
			value += offset;
			return *this;
		}

		constexpr __RawPtr<T>& operator++() noexcept { return unsafeIncrement(); }

		constexpr __RawPtr<T> operator++(int) noexcept {
			auto copy = *this;
			unsafeIncrement();
			return copy;
		}

		constexpr __RawPtr<T>& operator-=(size_t offset) noexcept {
			value -= offset;
			return *this;
		}

		constexpr __RawPtr<T>& operator--() noexcept { return unsafeDecrement(); }

		constexpr __RawPtr<T> operator--(int) noexcept {
			auto copy = *this;
			unsafeDecrement();
			return copy;
		}

		constexpr __RawPtr<T> unsafeAdd(size_t offset) const noexcept {
			return __RawPtr<T>(value + offset);
		}

		constexpr __RawPtr<T> operator+(size_t offset) const noexcept { return unsafeAdd(offset); }

		constexpr __RawPtr<T> unsafeDifference(__RawPtr<T> other) const noexcept {
			return __RawPtr<T>(value - other.value);
		}

		constexpr __RawPtr<T> operator-(__RawPtr<T> other) const noexcept {
			return unsafeDifference(other);
		}

		constexpr auto& operator[](size_t offset) requires(!std::is_same_v<T, void>) {
			return value[offset];
		}

		constexpr const auto& operator[](size_t offset) const requires(!std::is_same_v<T, void>) {
			return value[offset];
		}

		constexpr usize unsafeNarrowToInteger() const noexcept {
			return reinterpret_cast<size_t>(value);
		}

		template <class U>
		constexpr __RawPtr<U> unsafePointerCast() const noexcept {
			return ((U*) (value));
		}

		static constexpr __RawPtr<T> unsafeNarrowToPointer(usize value) noexcept {
			return reinterpret_cast<T*>((size_t) value);
		}

	   private:
		T* value;
	};

	template <class T>
	struct __VolatileRawPtr {
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

		constexpr volatile __VolatileRawPtr<T>& unsafeIncrement() volatile noexcept {
			++value;
			return *this;
		}

		constexpr volatile __VolatileRawPtr<T>& unsafeIncrement(size_t step) volatile noexcept {
			value += step;
			return *this;
		}

		constexpr volatile __VolatileRawPtr<T>& unsafeDecrement() volatile noexcept {
			--value;
			return *this;
		}

		constexpr volatile __VolatileRawPtr<T>& unsafeDecrement(size_t step) volatile noexcept {
			value -= step;
			return *this;
		}

		constexpr volatile __VolatileRawPtr<T> unsafeAdd(size_t step) const volatile noexcept {
			return __VolatileRawPtr<T>(value + step);
		}

		constexpr volatile __VolatileRawPtr<T> unsafeDifference(__VolatileRawPtr<T> other) const
		    volatile noexcept {
			return __VolatileRawPtr<T>(value - other.value);
		}

		constexpr usize unsafeNarrowToInteger() const volatile noexcept {
			return reinterpret_cast<size_t>(value);
		}

		template <class U>
		constexpr __VolatileRawPtr<U> unsafePointerCast() const volatile noexcept {
			return ((U*) (value));
		}

		static constexpr __VolatileRawPtr<T> unsafeNarrowToPointer(usize value) noexcept {
			return reinterpret_cast<T*>((size_t) value);
		}

	   private:
		T* volatile value;
	};

	template <class T>
	constexpr usize UnsafeCastToUsize(__RawPtr<T> ptr) noexcept {
		return reinterpret_cast<size_t>((T*) ptr);
	}

	template <class T, class U>
	constexpr __RawPtr<U> UnsafePointerCast(__RawPtr<T> ptr) noexcept {
		return ((U*) (T*) ptr);
	}

	template <class T>
	constexpr __RawPtr<T> UnsafeCastToPointer(usize value) noexcept {
		return reinterpret_cast<T*>((size_t) value);
	}
}  // namespace CppAdvance::Unsafe