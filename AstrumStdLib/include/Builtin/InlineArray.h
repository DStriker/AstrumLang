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
		using ElementType              = T;
		static constexpr size_t Length = S;

		constexpr __self& __ref() noexcept { return *this; }
		constexpr const __self& __ref() const noexcept { return *this; }

		constexpr InlineArray() {
			for (int i = 0; i < S; i++) { arr[i] = T {}; }
		}

		constexpr InlineArray(std::initializer_list<T> il) { std::move(il.begin(), il.end(), arr); }

		constexpr T& operator[](i32 i) {
			const size_t index = size_t(i);
			if (index >= S)
				throw InvalidArgumentException();
			return arr[index];
		}
		constexpr const T& operator[](i32 i) const {
			const size_t index = size_t(i);
			if (index >= S)
				throw InvalidArgumentException();
			return arr[index];
		}

		constexpr T& _operator_subscript(UncheckedTag, i32 i) { return arr[size_t(i)]; }
		constexpr const T& _operator_subscript(UncheckedTag, i32 i) const { return arr[size_t(i)]; }

		constexpr T& _operator_subscript(i32 i) { return (*this)[i]; }
		constexpr const T& _operator_subscript(i32 i) const { return (*this)[i]; }

		constexpr T& GetDataReference() noexcept { return arr[0]; }
		constexpr const T& GetDataReference() const noexcept { return arr[0]; }

		constexpr bool operator==(const __self& other) const noexcept {
			for (int i = 0; i < S; i++) {
				if (arr[i] != other[i])
					return false;
			}
			return true;
		}

		template <bool IsConst = true>
		class __Class_Iterator;

		template <bool IsConst = true>
		struct Iterator : public Struct {
			using ElementType = T;
			using __self      = Iterator<IsConst>;
			using __class     = __Class_Iterator<IsConst>;
			constexpr __self& __ref() noexcept { return *this; }
			constexpr const __self& __ref() const noexcept { return *this; }

		   private:
			using PtrType = std::conditional_t<IsConst, const T*, T*>;
			PtrType ptr;
			size_t index = size_t(-1);

			friend InlineArray<S, T>;

		   public:
			constexpr Iterator(PtrType ref) noexcept : ptr(ref) {}

			constexpr bool MoveNext() noexcept {
				const auto newIndex = index + 1;
				if (newIndex < S) {
					index = newIndex;
					return true;
				}
				return false;
			}

			constexpr const T GetCurrent() const { return ptr[index]; }
			constexpr decltype(auto) GetCurrentRef() const { return ptr[index]; }
		};

		template <bool IsConst>
		class __Class_Iterator : public ValueType {
			Iterator<IsConst> __value;

		   public:
			using __self       = Iterator<IsConst>;
			using __underlying = __self;
			__Class_Iterator(const __underlying& value) noexcept(
			    std::is_nothrow_copy_constructible_v<__underlying>)
			    : __value {value} {}
			operator __underlying() const noexcept { return __value; }

			constexpr bool MoveNext() noexcept { return __value.MoveNext(); }

			constexpr const T GetCurrent() const noexcept { return __value.GetCurrent(); }
			constexpr decltype(auto) GetCurrentRef() const noexcept {
				return __value.GetCurrentRef();
			}
		};

	};

	template<class T, size_t S>
	auto Iterate(InlineArray<S, T>& arr) noexcept {
		return typename InlineArray<S, T>::Iterator<false>(&arr.GetDataReference());
	}
	template <class T, size_t S>
	auto Iterate(const InlineArray<S, T>& arr) noexcept {
		return typename InlineArray<S, T>::Iterator<true>(&arr.GetDataReference());
	}

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
