#pragma once
#include "Types.h"

namespace Builtin {
	template <class... Args>
	struct RefTuple;

	template <class... Args>
	struct ValueTuple : public Struct {
		static_assert((!std::is_base_of_v<RefStruct, Args> && ...),
		              "Value references does not allows in the tuples. Use custom ref struct.");

		using $self  = ValueTuple<Args...>;
		using $class = $Class_Basic<$self>;
		template <class... OtherArgs>
		friend struct ValueTuple;
		template <class... OtherArgs>
		friend struct RefTuple;

		constexpr decltype(auto) $ref() noexcept { return *this; }
		constexpr decltype(auto) $ref() const noexcept { return *this; }

		constexpr ValueTuple()                      = default;
		constexpr ValueTuple(const ValueTuple&)     = default;
		constexpr ValueTuple(ValueTuple&&) noexcept = default;

		constexpr $self& operator=(const ValueTuple&) = default;
		constexpr $self& operator=(ValueTuple&&) noexcept = default;

		constexpr ValueTuple(const std::tuple<Args...>& value) : _value(value) {}
		constexpr ValueTuple(std::tuple<Args...>&& value) : _value(std::move(value)) {}

		constexpr ValueTuple(const Args&... args) requires(std::is_copy_constructible_v<Args>&&...)
		    : _value(args...) {}

		template <class... OtherTypes>
		constexpr ValueTuple(OtherTypes&&... args) requires(
		    sizeof...(OtherTypes) == sizeof...(Args) &&
		    (std::is_constructible_v<Args, OtherTypes> && ...))
		    : _value(std::forward<OtherTypes>(args)...) {}

		template <class... OtherTypes>
		constexpr ValueTuple(const ValueTuple<OtherTypes...>& other) requires(
		    sizeof...(OtherTypes) == sizeof...(Args) &&
		    (std::is_constructible_v<Args, OtherTypes> && ...))
		    : _value(other._value) {}

		template <class... OtherTypes>
		constexpr ValueTuple(ValueTuple<OtherTypes...>&& other) requires(
		    sizeof...(OtherTypes) == sizeof...(Args) &&
		    (std::is_constructible_v<Args, OtherTypes> && ...))
		    : _value(std::move(other._value)) {}

		template <class... OtherTypes>
		constexpr $self& operator=(const ValueTuple<OtherTypes...>& other) requires(
		    sizeof...(OtherTypes) == sizeof...(Args) &&
		    (std::is_assignable_v<Args, OtherTypes> && ...)) {
			_value = other._value;
			return *this;
		}

		template <class... OtherTypes>
		constexpr $self& operator=(ValueTuple<OtherTypes...>&& other) requires(
		    sizeof...(OtherTypes) == sizeof...(Args) &&
		    (std::is_assignable_v<Args, OtherTypes> && ...)) {
			_value = std::move(other._value);
			return *this;
		}

		template <class... OtherTypes>
		constexpr ValueTuple(const RefTuple<OtherTypes...>& other) requires(
		    sizeof...(OtherTypes) == sizeof...(Args) &&
		    (std::is_constructible_v<Args, OtherTypes> && ...));

		template <class... OtherTypes>
		constexpr ValueTuple(RefTuple<OtherTypes...>&& other) requires(
		    sizeof...(OtherTypes) == sizeof...(Args) &&
		    (std::is_constructible_v<Args, OtherTypes> && ...));

		template <class... OtherTypes>
		constexpr $self& operator=(const RefTuple<OtherTypes...>& other) requires(
		    sizeof...(OtherTypes) == sizeof...(Args) &&
		    (std::is_assignable_v<Args, OtherTypes> && ...));

		template <class... OtherTypes>
		constexpr $self& operator=(RefTuple<OtherTypes...>&& other) requires(
		    sizeof...(OtherTypes) == sizeof...(Args) &&
		    (std::is_assignable_v<Args, OtherTypes> && ...));

		constexpr operator std::tuple<Args...>() const noexcept { return _value; }

		template <class... OtherTypes>
		constexpr bool operator==(const ValueTuple<OtherTypes...>& other) const noexcept
		    requires(sizeof...(OtherTypes) == sizeof...(Args)) {
			return _value == other._value;
		}

		template <class... OtherTypes>
		constexpr int operator<=>(const ValueTuple<OtherTypes...>& other) const noexcept
		    requires(sizeof...(OtherTypes) == sizeof...(Args)) {
			return [&]<size_t... I>(std::index_sequence<I...>) {
				int cmp = 0;
				return (
				    (cmp = cmp != 0
				               ? cmp
				               : (std::get<I>(_value) < std::get<I>(other._value)
				                      ? -1
				                      : (std::get<I>(_value) > std::get<I>(other._value) ? 1 : 0))),
				    ...);
			}
			(std::make_index_sequence<sizeof...(Args)> {});
		}

		template <class... OtherTypes>
		auto operator+(const ValueTuple<OtherTypes...>& other) const noexcept {
			using TResult = ValueTuple<Args..., OtherTypes...>;
			return std::tuple_cat(_value, other._value);
		}

		template <size_t I>
		friend auto& get($self& t) noexcept {
			return std::get<I>(t._value);
		}
		template <size_t I>
		friend const auto& get(const $self& t) noexcept {
			return std::get<I>(t._value);
		}
		template <size_t I>
		friend auto&& get($self&& t) noexcept {
			return std::get<I>(t._value);
		}
		template <size_t I>
		friend const auto&& get(const $self&& t) noexcept {
			return std::get<I>(t._value);
		}

	   private:
		std::tuple<Args...> _value;
	};

	template <class... Args>
	ValueTuple(Args...) -> ValueTuple<Args...>;

	template <class... Args>
	struct RefTuple : public RefStruct {
		using $self  = RefTuple<Args...>;
		using $class = $self;
		template <class... OtherArgs>
		friend struct RefTuple;
		template <class... OtherArgs>
		friend struct ValueTuple;

		constexpr decltype(auto) $ref() noexcept { return *this; }
		constexpr decltype(auto) $ref() const noexcept { return *this; }

		constexpr RefTuple()                    = default;
		constexpr RefTuple(const RefTuple&)     = default;
		constexpr RefTuple(RefTuple&&) noexcept = default;

		constexpr $self& operator=(const RefTuple&) = default;
		constexpr $self& operator=(RefTuple&&) noexcept = default;

		constexpr RefTuple(const std::tuple<Args...>& value) : _value(value) {}
		constexpr RefTuple(std::tuple<Args...>&& value) : _value(std::move(value)) {}

		constexpr RefTuple(const Args&... args) requires(std::is_copy_constructible_v<Args>&&...)
		    : _value(args...) {}

		template <class... OtherTypes>
		constexpr RefTuple(OtherTypes&&... args) requires(
		    sizeof...(OtherTypes) == sizeof...(Args) &&
		    (std::is_constructible_v<Args, OtherTypes> && ...))
		    : _value(std::forward<OtherTypes>(args)...) {}

		template <class... OtherTypes>
		constexpr RefTuple(const RefTuple<OtherTypes...>& other) requires(
		    sizeof...(OtherTypes) == sizeof...(Args) &&
		    (std::is_constructible_v<Args, OtherTypes> && ...))
		    : _value(other._value) {}

		template <class... OtherTypes>
		constexpr RefTuple(RefTuple<OtherTypes...>&& other) requires(
		    sizeof...(OtherTypes) == sizeof...(Args) &&
		    (std::is_constructible_v<Args, OtherTypes> && ...))
		    : _value(std::move(other._value)) {}

		template <class... OtherTypes>
		constexpr $self& operator=(const RefTuple<OtherTypes...>& other) requires(
		    sizeof...(OtherTypes) == sizeof...(Args) &&
		    (std::is_assignable_v<Args, OtherTypes> && ...)) {
			_value = other._value;
			return *this;
		}

		template <class... OtherTypes>
		constexpr $self& operator=(RefTuple<OtherTypes...>&& other) requires(
		    sizeof...(OtherTypes) == sizeof...(Args) &&
		    (std::is_assignable_v<Args, OtherTypes> && ...)) {
			_value = std::move(other._value);
			return *this;
		}

		template <class... OtherTypes>
		constexpr RefTuple(const ValueTuple<OtherTypes...>& other) requires(
		    sizeof...(OtherTypes) == sizeof...(Args) &&
		    (std::is_constructible_v<Args, OtherTypes> && ...));

		template <class... OtherTypes>
		constexpr RefTuple(ValueTuple<OtherTypes...>&& other) requires(
		    sizeof...(OtherTypes) == sizeof...(Args) &&
		    (std::is_constructible_v<Args, OtherTypes> && ...));

		template <class... OtherTypes>
		constexpr $self& operator=(const ValueTuple<OtherTypes...>& other) requires(
		    sizeof...(OtherTypes) == sizeof...(Args) &&
		    (std::is_assignable_v<Args, OtherTypes> && ...));

		template <class... OtherTypes>
		constexpr $self& operator=(ValueTuple<OtherTypes...>&& other) requires(
		    sizeof...(OtherTypes) == sizeof...(Args) &&
		    (std::is_assignable_v<Args, OtherTypes> && ...));

		constexpr operator std::tuple<Args...>() const noexcept { return _value; }

		template <class... OtherTypes>
		constexpr bool operator==(const RefTuple<OtherTypes...>& other) const noexcept
		    requires(sizeof...(OtherTypes) == sizeof...(Args)) {
			return _value == other._value;
		}

		template <class... OtherTypes>
		constexpr int operator<=>(const RefTuple<OtherTypes...>& other) const noexcept
		    requires(sizeof...(OtherTypes) == sizeof...(Args)) {
			return [&]<size_t... I>(std::index_sequence<I...>) {
				int cmp = 0;
				return (
				    (cmp = cmp != 0
				               ? cmp
				               : (std::get<I>(_value) < std::get<I>(other._value)
				                      ? -1
				                      : (std::get<I>(_value) > std::get<I>(other._value) ? 1 : 0))),
				    ...);
			}
			(std::make_index_sequence<sizeof...(Args)> {});
		}

		template <class... OtherTypes>
		auto operator+(const ValueTuple<OtherTypes...>& other) const noexcept {
			using TResult = ValueTuple<Args..., OtherTypes...>;
			return std::tuple_cat(_value, other._value);
		}

		template <size_t I>
		friend auto& get($self& t) noexcept {
			return std::get<I>(t._value);
		}
		template <size_t I>
		friend const auto& get(const $self& t) noexcept {
			return std::get<I>(t._value);
		}
		template <size_t I>
		friend auto&& get($self&& t) noexcept {
			return std::get<I>(t._value);
		}
		template <size_t I>
		friend const auto&& get(const $self&& t) noexcept {
			return std::get<I>(t._value);
		}

	   private:
		std::tuple<Args...> _value;
	};

	template <class... Args>
	RefTuple(Args...) -> RefTuple<Args...>;

	template <class... Args>
	template <class... OtherTypes>
	inline constexpr ValueTuple<Args...>::ValueTuple(const RefTuple<OtherTypes...>& other) requires(
	    sizeof...(OtherTypes) == sizeof...(Args) &&
	    (std::is_constructible_v<Args, OtherTypes> && ...))
	    : _value(other._value) {}

	template <class... Args>
	template <class... OtherTypes>
	inline constexpr ValueTuple<Args...>::ValueTuple(RefTuple<OtherTypes...>&& other) requires(
	    sizeof...(OtherTypes) == sizeof...(Args) &&
	    (std::is_constructible_v<Args, OtherTypes> && ...))
	    : _value(std::move(other._value)) {}

	template <class... Args>
	template <class... OtherTypes>
	inline constexpr ValueTuple<Args...>& ValueTuple<Args...>::operator=(
	    const RefTuple<OtherTypes...>& other) requires(sizeof...(OtherTypes) == sizeof...(Args) &&
	                                                   (std::is_assignable_v<Args, OtherTypes> &&
	                                                    ...)) {
		_value = other._value;
		return *this;
	}

	template <class... Args>
	template <class... OtherTypes>
	inline constexpr ValueTuple<Args...>& ValueTuple<Args...>::operator=(
	    RefTuple<OtherTypes...>&& other) requires(sizeof...(OtherTypes) == sizeof...(Args) &&
	                                              (std::is_assignable_v<Args, OtherTypes> && ...)) {
		_value = std::move(other._value);
		return *this;
	}

	template <class... Args>
	template <class... OtherTypes>
	inline constexpr RefTuple<Args...>::RefTuple(const ValueTuple<OtherTypes...>& other) requires(
	    sizeof...(OtherTypes) == sizeof...(Args) &&
	    (std::is_constructible_v<Args, OtherTypes> && ...))
	    : _value(other._value) {}

	template <class... Args>
	template <class... OtherTypes>
	inline constexpr RefTuple<Args...>::RefTuple(ValueTuple<OtherTypes...>&& other) requires(
	    sizeof...(OtherTypes) == sizeof...(Args) &&
	    (std::is_constructible_v<Args, OtherTypes> && ...))
	    : _value(std::move(other._value)) {}

	template <class... Args>
	template <class... OtherTypes>
	inline constexpr RefTuple<Args...>& RefTuple<Args...>::operator=(
	    const ValueTuple<OtherTypes...>& other) requires(sizeof...(OtherTypes) == sizeof...(Args) &&
	                                                     (std::is_assignable_v<Args, OtherTypes> &&
	                                                      ...)) {
		_value = other._value;
		return *this;
	}

	template <class... Args>
	template <class... OtherTypes>
	inline constexpr RefTuple<Args...>& RefTuple<Args...>::operator=(
	    ValueTuple<OtherTypes...>&& other) requires(sizeof...(OtherTypes) == sizeof...(Args) &&
	                                                (std::is_assignable_v<Args, OtherTypes> &&
	                                                 ...)) {
		_value = std::move(other._value);
		return *this;
	}

	template <class... Args>
	using Tuple = std::conditional_t<(std::is_base_of_v<RefStruct, Args> || ...), RefTuple<Args...>,
	                                 ValueTuple<Args...>>;

	template <class... Args>
	constexpr Tuple<std::decay_t<Args>...> MakeTuple(Args&&... args) {
		using T = Tuple<std::decay_t<Args>...>;
		return T(std::forward<Args>(args)...);
	}

	template <class... Args>
	constexpr RefTuple<Args&...> Tie(Args&... args) {
		using T = RefTuple<Args&...>;
		return T(args...);
	}
}  // namespace Builtin

namespace std {
	template <class... Args>
	struct tuple_size<Builtin::ValueTuple<Args...>> : integral_constant<size_t, sizeof...(Args)> {};
	template <size_t I, class Head, class... Tail>
	struct tuple_element<I, Builtin::ValueTuple<Head, Tail...>>
	    : tuple_element<I - 1, Builtin::ValueTuple<Tail...>> {};
	template <class Head, class... Tail>
	struct tuple_element<0, Builtin::ValueTuple<Head, Tail...>> {
		using type = Head;
	};

	template <class... Args>
	struct tuple_size<Builtin::RefTuple<Args...>> : integral_constant<size_t, sizeof...(Args)> {};
	template <size_t I, class Head, class... Tail>
	struct tuple_element<I, Builtin::RefTuple<Head, Tail...>>
	    : tuple_element<I - 1, Builtin::RefTuple<Tail...>> {};
	template <class Head, class... Tail>
	struct tuple_element<0, Builtin::RefTuple<Head, Tail...>> {
		using type = Head;
	};

}  // namespace std