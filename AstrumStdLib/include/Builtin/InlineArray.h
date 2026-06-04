#pragma once
#include <type_traits>

namespace Builtin {
	template <class T>
	class __Class_Basic;

	template <size_t S, class T>
	class InlineArray {
		T arr[S];

	   public:
		using __self  = InlineArray<S, T>;
		using __class = __Class_Basic<__self>;

		constexpr __self& __ref() noexcept { return *this; }
		constexpr const __self& __ref() const noexcept { return *this; }

		constexpr InlineArray() {
			for (int i = 0; i < S; i++) { arr[i] = T {}; }
		}

		constexpr InlineArray(std::initializer_list<T> il) { std::move(il.begin(), il.end(), arr); }

		constexpr T& operator[](size_t i) { return arr[i]; }
		constexpr const T& operator[](size_t i) const { return arr[i]; }

		constexpr T& _operator_subscript(size_t i) { return arr[i]; }
		constexpr const T& _operator_subscript(size_t i) const { return arr[i]; }
	};

	template <class T, size_t S, size_t... I>
	constexpr InlineArray<S, std::remove_cv_t<T>> _to_array_lvalue_impl(
	    T (&arr)[S], std::index_sequence<I...>) {
		return {arr[I]...};
	}

	template <class T, size_t S, size_t... I>
	constexpr InlineArray<S, std::remove_cv_t<T>> _to_array_rvalue_impl(
	    T(&&arr)[S], std::index_sequence<I...>) {
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
}  // namespace Builtin