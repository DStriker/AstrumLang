#pragma once
#include <type_traits>

#include "Types.h"

namespace System {
	template <class T>
	struct Span;
	template <class T>
	struct MutableSpan;
}  // namespace System

namespace Builtin {
	template <size_t S, class T, bool IsConstStrArray>
	class $Class_InlineArray;
	template <class T>
	class $Class_Basic;
	
	template <class T>
	struct InitializerList : public Struct {
	   private:
		std::initializer_list<T> initList;

	   public:
		using $self  = InitializerList<T>;
		using $class = $Class_Basic<$self>;

		constexpr auto& $ref() noexcept { return *this; }
		constexpr const auto& $ref() const noexcept { return *this; }
		constexpr InitializerList(std::initializer_list<T> lst) noexcept : initList(lst) {}

		constexpr operator std::initializer_list<T>() const noexcept { return initList; }
		constexpr const T* begin() const noexcept { return initList.begin(); }
		constexpr const T* end() const noexcept { return initList.end(); }
		constexpr size_t size() const noexcept { return initList.size(); }

		struct Iterator : public Struct {
		   private:
			const T* begin = nullptr;
			size_t length;
			size_t index = ~size_t {0u};

		   public:
			using ElementType = T;
			using $self       = Iterator;
			using $class      = $Class_Basic<$self>;

			constexpr auto& $ref() noexcept { return *this; }
			constexpr const auto& $ref() const noexcept { return *this; }
			constexpr explicit Iterator(
			    Builtin::InitializerList<T> initList) noexcept;

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

		constexpr auto Iterate() const noexcept {
			return Iterator {*this};
		}
	};

	template<class T>
	inline constexpr InitializerList<T>::Iterator::Iterator(
	    InitializerList<T> initList) noexcept
	    : begin {initList.begin()}, length {initList.size()} {}

	template <size_t S, class T, bool IsConstStrArray = false>
	class InlineArray : public Struct {
		T arr[S];

		static_assert((IsConstStrArray && std::is_same_v<T, Str>) ||
		                  !std::is_base_of_v<Builtin::RefStruct, T>,
		              "Inline array doesn't support ref structs");

	   public:
		using $self                    = InlineArray<S, T, IsConstStrArray>;
		using $class                   = $Class_InlineArray<S, T, IsConstStrArray>;
		using ElementType              = T;
		using SpanType                 = System::Span<T>;
		using MutableSpanType          = System::MutableSpan<T>;
		static constexpr size_t Length = S;

		constexpr $self& $ref() noexcept { return *this; }
		constexpr const $self& $ref() const noexcept { return *this; }

		constexpr InlineArray() {
			for (int i = 0; i < S; i++) { arr[i] = T {}; }
		}

		constexpr InlineArray(std::initializer_list<T> il) {
			std::move(il.begin(), il.end(), arr);
		}
		constexpr InlineArray(Builtin::InitializerList<T> il) { std::move(il.begin(), il.end(), arr); }

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

		constexpr bool operator==(const $self& other) const noexcept {
			for (int i = 0; i < S; i++) {
				if (arr[i] != other[i])
					return false;
			}
			return true;
		}

		template <bool IsConst = true>
		class $Class_Iterator;

		template <bool IsConst = true>
		struct Iterator : public Struct {
			using ElementType = T;
			using $self       = Iterator<IsConst>;
			using $class      = $Class_Iterator<IsConst>;
			constexpr $self& $ref() noexcept { return *this; }
			constexpr const $self& $ref() const noexcept { return *this; }

		   private:
			using PtrType = std::conditional_t<IsConst, const T*, T*>;
			PtrType ptr;
			size_t index = size_t(-1);

		   public:
			constexpr Iterator() noexcept = default;
			constexpr Iterator(PtrType ref) noexcept : ptr(ref) {}

			constexpr bool MoveNext() noexcept {
				const auto newIndex = index + 1;
				if (newIndex < S) {
					index = newIndex;
					return true;
				}
				return false;
			}

			constexpr void Reset() noexcept { index = size_t(-1); }

			constexpr const T GetCurrent() const { return ptr[index]; }
			constexpr decltype(auto) GetCurrentRef() const { return ptr[index]; }
		};

		template <bool IsConst>
		class $Class_Iterator : public ValueType {
			Iterator<IsConst> __value;

		   public:
			using $self       = Iterator<IsConst>;
			using $underlying = $self;
			$Class_Iterator(const $underlying& value) noexcept(
			    std::is_nothrow_copy_constructible_v<$underlying>)
			    : __value {value} {}
			operator $underlying() const noexcept { return __value; }

			constexpr bool MoveNext() noexcept { return __value.MoveNext(); }

			constexpr const T GetCurrent() const noexcept { return __value.GetCurrent(); }
			constexpr decltype(auto) GetCurrentRef() const noexcept {
				return __value.GetCurrentRef();
			}
		};

		auto Iterate() noexcept { return Iterator<false>(&GetDataReference()); }
		auto Iterate() const noexcept { return Iterator<true>(&GetDataReference()); }
	};

	template <class T>
	inline constexpr bool IsInlineArray = std::false_type {};

	template <auto S, class T, auto IsConstStrArray>
	inline constexpr bool IsInlineArray<InlineArray<S, T, IsConstStrArray>> = std::true_type {};

	template <size_t S, class T, bool IsConstStrArray>
	class $Class_InlineArray : public ValueType {
		InlineArray<S, T, IsConstStrArray> __value;

	   public:
		using $self       = InlineArray<S, T, IsConstStrArray>;
		using $underlying = InlineArray<S, T, IsConstStrArray>;
		$Class_InlineArray(const $underlying& value) noexcept(
		    std::is_nothrow_copy_constructible_v<$underlying>)
		    : __value {value} {}
		operator $underlying() const noexcept { return __value; }

		auto Iterate() noexcept { return __value.Iterate(); }
		auto Iterate() const noexcept { return __value.Iterate(); }
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

	template <size_t S, size_t... I>
	constexpr InlineArray<S, Str, true> _to_array_lvalue_impl_str(Str (&arr)[S],
	                                                              std::index_sequence<I...>) {
		return {arr[I]...};
	}

	template <size_t S, size_t... I>
	constexpr InlineArray<S, Str, true> _to_array_rvalue_impl_str(Str(&&arr)[S],
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

	template <size_t S>
	constexpr InlineArray<S, Str, true> ToInlineArrayStr(Str (&arr)[S]) {
		return _to_array_lvalue_impl_str(arr, std::make_index_sequence<S> {});
	}

	template <size_t S>
	constexpr InlineArray<S, Str, true> ToInlineArrayStr(Str(&&arr)[S]) {
		return _to_array_rvalue_impl_str(std::move(arr), std::make_index_sequence<S> {});
	}

}  // namespace Builtin
