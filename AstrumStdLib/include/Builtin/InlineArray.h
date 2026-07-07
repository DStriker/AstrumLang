#pragma once
#include <type_traits>

#include "Types.h"

namespace Builtin {
	template <class T>
	class __Class_Basic;

	template <size_t S, class T>
	class InlineArray : public Struct {
		T arr[S];

	   public:
		using __self                   = InlineArray<S, T>;
		using __class                  = __Class_Basic<__self>;
		static constexpr size_t Length = S;

		constexpr __self& __ref() noexcept { return *this; }
		constexpr const __self& __ref() const noexcept { return *this; }

		constexpr InlineArray() {
			for (int i = 0; i < S; i++) { arr[i] = T {}; }
		}

		constexpr InlineArray(std::initializer_list<T> il) { std::move(il.begin(), il.end(), arr); }

		constexpr T& operator[](size_t i) {
			if (i >= S)
				throw InvalidArgumentException();
			return arr[i];
		}
		constexpr const T& operator[](size_t i) const {
			if (i >= S)
				throw InvalidArgumentException();
			return arr[i];
		}

		constexpr T& _operator_subscript(UncheckedTag, size_t i) { return arr[i]; }
		constexpr const T& _operator_subscript(UncheckedTag, size_t i) const { return arr[i]; }

		constexpr T& _operator_subscript(size_t i) { return (*this)[i]; }
		constexpr const T& _operator_subscript(size_t i) const { return (*this)[i]; }
	};

	template <class T, size_t S, size_t... I>
	constexpr InlineArray<S, std::remove_cv_t<T>> _to_array_lvalue_impl(T (&arr)[S],
	                                                                    std::index_sequence<I...>) {
		return {arr[I]...};
	}

	template <class T, size_t S, size_t... I>
	constexpr InlineArray<S, std::remove_cv_t<T>> _to_array_rvalue_impl(T(&&arr)[S],
	                                                                    std::index_sequence<I...>) {
		return {std::move(arr[I])...};
	}

	template <class T, size_t S>
	constexpr InlineArray<S, std::remove_cv_t<T>> ToInlineArray(T (&arr)[S]) {
		static_assert(!std::is_array_v<T>,
		              "ToInlineArray does not accept multidimensional arrays.");
		static_assert(std::is_constructible_v<T, T&>,
		              "ToInlineArray requires copy constructible elements.");
		return _to_array_lvalue_impl(arr, std::make_index_sequence<S> {});
	}

	template <class T, size_t S>
	constexpr InlineArray<S, std::remove_cv_t<T>> ToInlineArray(T(&&arr)[S]) {
		static_assert(!std::is_array_v<T>,
		              "ToInlineArray does not accept multidimensional arrays.");
		static_assert(std::is_move_constructible_v<T>,
		              "ToInlineArray requires move constructible elements.");
		return _to_array_rvalue_impl(std::move(arr), std::make_index_sequence<S> {});
	}

	template <class T>
	struct InitializerList : public Struct {
	   private:
		std::initializer_list<T> initList;

	   public:
		using __self  = InitializerList<T>;
		using __class = __Class_Basic<__self>;

		constexpr auto& __ref() noexcept { return *this; }
		constexpr const auto& __ref() const noexcept { return *this; }
		constexpr InitializerList(std::initializer_list<T> lst) noexcept : initList(lst) {}

		constexpr operator std::initializer_list<T>() const noexcept { return initList; }
		constexpr const T* begin() const noexcept { return initList.begin(); }
		constexpr const T* end() const noexcept { return initList.end(); }
		constexpr size_t size() const noexcept { return initList.size(); }
	};

	template <class T>
	struct InitializerListIterator : public Struct {
	   private:
		const T* begin = nullptr;
		size_t length;
		size_t index = ~size_t {0u};

	   public:
		using ElementType = T;
		using __self      = InitializerListIterator<T>;
		using __class     = __Class_Basic<__self>;

		constexpr auto& __ref() noexcept { return *this; }
		constexpr const auto& __ref() const noexcept { return *this; }
		constexpr explicit InitializerListIterator(Builtin::InitializerList<T> initList) noexcept
		    : begin {initList.begin()}, length {initList.size()} {}

		constexpr void Reset() noexcept { index = -1; }

		constexpr const T GetCurrent() const {
			if (index >= length)
				throw InvalidOperationException();
			return begin[index];
		}
		constexpr const T& GetCurrentRef() const {
			if (index >= length)
				throw InvalidOperationException();
			return begin[index];
		}

		constexpr bool MoveNext() noexcept {
			const auto nextIndex = index + 1;
			if (nextIndex >= length) {
				index = length;
				return false;
			}
			index = nextIndex;
			return true;
		}
	};
}  // namespace Builtin

template <class T>
constexpr auto Iterate(Builtin::InitializerList<T> initList) noexcept {
	return Builtin::InitializerListIterator {initList};
}
