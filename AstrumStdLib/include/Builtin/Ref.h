#pragma once
#include "Exceptions.h"
#include "Types.h"

namespace Builtin {

	template <class T>
	struct MutableRef : public RefStruct {
		using $ref_underlying_type = Auto<T>;
		using Type                 = $ref_underlying_type;

	   private:
		$ref_underlying_type* ptr = nullptr;

		constexpr $ref_underlying_type& get() const {
			if (ptr != nullptr)
				LIKELY { return *ptr; }
			throw NullReferenceException {};
			return *ptr;
		}

		using $selfRef = MutableRef<T>;

	   public:
		using $self  = typename Builtin::SelfProxyType<$ref_underlying_type>;
		using $class = typename Builtin::ClassProxyType<$ref_underlying_type>;

		constexpr decltype(auto) $ref() const noexcept { return get(); }

		constexpr MutableRef() noexcept                = default;
		constexpr MutableRef(const $selfRef&) noexcept = default;
		constexpr MutableRef($selfRef&&) noexcept      = default;
		MutableRef(decltype(nullptr))                  = delete;

		constexpr explicit MutableRef($ref_underlying_type& ref) noexcept
		    : ptr {std::addressof(ref)} {}
		explicit MutableRef(const $ref_underlying_type& ref)  = delete;
		explicit MutableRef($ref_underlying_type&& ref)       = delete;
		explicit MutableRef(const $ref_underlying_type&& ref) = delete;

		constexpr $selfRef& operator=($selfRef&) noexcept = default;
		constexpr $selfRef& operator=(const $selfRef&) noexcept = default;
		constexpr $selfRef& operator=($selfRef&&) noexcept = default;
		template <class U>
		constexpr const $selfRef& operator=(U&& val) const
		    noexcept(std::is_nothrow_assignable_v<$ref_underlying_type, U>) requires(
		        !std::is_same_v<std::decay_t<U>, $selfRef> && std::is_assignable_v<$ref_underlying_type, U>) {
			get() = std::forward<U>(val);
			return *this;
		}

		constexpr operator $ref_underlying_type&() const { return get(); }

		FORCE_INLINE constexpr decltype(auto) operator+() const requires requires(T t) { t = +t; }
		{ return +get(); }
		FORCE_INLINE constexpr decltype(auto) operator-() const requires requires(T t) { t = -t; }
		{ return -get(); }
		FORCE_INLINE constexpr decltype(auto) operator~() const requires requires(T t) { t = ~t; }
		{ return ~get(); }
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator+(_ElemRight&& other) const {
			if constexpr (requires { typename std::decay_t<_ElemRight>::$ref_underlying_type; }) {
				return (get() +
				        static_cast<typename std::decay_t<_ElemRight>::$ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() + other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator-(_ElemRight&& other) const {
			if constexpr (requires { typename std::decay_t<_ElemRight>::$ref_underlying_type; }) {
				return (get() -
				        static_cast<typename std::decay_t<_ElemRight>::$ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() - other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator*(_ElemRight&& other) const {
			if constexpr (requires { typename std::decay_t<_ElemRight>::$ref_underlying_type; }) {
				return (get() *
				        static_cast<typename std::decay_t<_ElemRight>::$ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() * other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator/(_ElemRight&& other) const {
			if constexpr (requires { typename std::decay_t<_ElemRight>::$ref_underlying_type; }) {
				return (get() /
				        static_cast<typename std::decay_t<_ElemRight>::$ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() / other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator%(_ElemRight&& other) const {
			if constexpr (requires { typename std::decay_t<_ElemRight>::$ref_underlying_type; }) {
				return (get() %
				        static_cast<typename std::decay_t<_ElemRight>::$ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() % other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator&(_ElemRight&& other) const {
			if constexpr (requires { typename std::decay_t<_ElemRight>::$ref_underlying_type; }) {
				return (get() &
				        static_cast<typename std::decay_t<_ElemRight>::$ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() & other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator|(_ElemRight&& other) const {
			if constexpr (requires { typename std::decay_t<_ElemRight>::$ref_underlying_type; }) {
				return (get() |
				        static_cast<typename std::decay_t<_ElemRight>::$ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() | other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator^(_ElemRight&& other) const {
			if constexpr (requires { typename std::decay_t<_ElemRight>::$ref_underlying_type; }) {
				return (get() ^
				        static_cast<typename std::decay_t<_ElemRight>::$ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() ^ other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator<<(_ElemRight&& other) const {
			if constexpr (requires { typename std::decay_t<_ElemRight>::$ref_underlying_type; }) {
				return (
				    get() << static_cast<typename std::decay_t<_ElemRight>::$ref_underlying_type>(
				        std::forward<_ElemRight>(other)));
			} else {
				return (get() << other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator>>(_ElemRight&& other) const {
			if constexpr (requires { typename std::decay_t<_ElemRight>::$ref_underlying_type; }) {
				return (get() >>
				        static_cast<typename std::decay_t<_ElemRight>::$ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() >> other);
			}
		}
		template <class... _ElemRight>
		FORCE_INLINE constexpr decltype(auto) _operator_subscript(_ElemRight&&... other) {
			return get().$ref()._operator_subscript(std::forward<_ElemRight>(other)...);
		}
		template <class... _ElemRight>
		FORCE_INLINE constexpr decltype(auto) _operator_subscript(_ElemRight&&... other) const {
			return get().$ref()._operator_subscript(std::forward<_ElemRight>(other)...);
		}
		template <class... Args>
		FORCE_INLINE constexpr decltype(auto) operator()(Args&&... other) {
			return get()(std::forward<Args>(other)...);
		}
		template <class... Args>
		FORCE_INLINE constexpr decltype(auto) operator()(Args&&... other) const {
			return get()(std::forward<Args>(other)...);
		}
		template <class Ch>
		friend FORCE_INLINE constexpr decltype(auto) operator<<(std::basic_ostream<Ch>& stream,
		                                                        const MutableRef<T>& elem) {
			return stream << elem.get();
		}
		FORCE_INLINE constexpr decltype(auto) operator*() const requires requires(T t) { *t; }
		{ return *get(); }
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator==(_ElemRight&& other) const {
			if constexpr (requires { typename std::decay_t<_ElemRight>::$ref_underlying_type; }) {
				return (get() ==
				        static_cast<typename std::decay_t<_ElemRight>::$ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() == other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator!=(_ElemRight&& other) const {
			if constexpr (requires { typename std::decay_t<_ElemRight>::$ref_underlying_type; }) {
				return (get() !=
				        static_cast<typename std::decay_t<_ElemRight>::$ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() != other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr int operator<=>(_ElemRight&& other) const {
			if constexpr (requires { typename std::decay_t<_ElemRight>::$ref_underlying_type; }) {
				return (get() <=>
				        static_cast<typename std::decay_t<_ElemRight>::$ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() <=> other);
			}
		}
		FORCE_INLINE constexpr explicit operator bool() const requires(!std::is_same_v<T, bool>) {
			return static_cast<bool>(get());
		}

		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator+=(_ElemRight&& other) const
		/*requires requires(T t, _ElemRight u) { t = t += u; }*/ {
			if constexpr (requires { typename std::decay_t<_ElemRight>::$ref_underlying_type; }) {
				return (get() +=
				        static_cast<typename std::decay_t<_ElemRight>::$ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() += other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator-=(_ElemRight&& other) const
		/*requires requires(T t, _ElemRight u) { t = t -= u; }*/ {
			if constexpr (requires { typename std::decay_t<_ElemRight>::$ref_underlying_type; }) {
				return (get() -=
				        static_cast<typename std::decay_t<_ElemRight>::$ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() -= other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator*=(_ElemRight&& other) const
		/*requires requires(T t, _ElemRight u) { t = t *= u; }*/ {
			if constexpr (requires { typename std::decay_t<_ElemRight>::$ref_underlying_type; }) {
				return (get() *=
				        static_cast<typename std::decay_t<_ElemRight>::$ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() *= other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator/=(_ElemRight&& other) const
		/*requires requires(T t, _ElemRight u) { t = t /= u; }*/ {
			if constexpr (requires { typename std::decay_t<_ElemRight>::$ref_underlying_type; }) {
				return (get() /=
				        static_cast<typename std::decay_t<_ElemRight>::$ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() /= other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator%=(_ElemRight&& other) const
		/*requires requires(T t, _ElemRight u) { t = t %= u; }*/ {
			if constexpr (requires { typename std::decay_t<_ElemRight>::$ref_underlying_type; }) {
				return (get() %=
				        static_cast<typename std::decay_t<_ElemRight>::$ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() %= other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator&=(_ElemRight&& other) const
		/*requires requires(T t, _ElemRight u) { t = t &= u; }*/ {
			if constexpr (requires { typename std::decay_t<_ElemRight>::$ref_underlying_type; }) {
				return (get() &=
				        static_cast<typename std::decay_t<_ElemRight>::$ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() &= other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator|=(_ElemRight&& other) const
		/*requires requires(T t, _ElemRight u) { t = t |= u; }*/ {
			if constexpr (requires { typename std::decay_t<_ElemRight>::$ref_underlying_type; }) {
				return (get() |=
				        static_cast<typename std::decay_t<_ElemRight>::$ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() |= other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator^=(_ElemRight&& other) const
		/*requires requires(T t, _ElemRight u) { t = t ^= u; }*/ {
			if constexpr (requires { typename std::decay_t<_ElemRight>::$ref_underlying_type; }) {
				return (get() ^=
				        static_cast<typename std::decay_t<_ElemRight>::$ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() ^= other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator<<=(_ElemRight&& other) const
		/*requires requires(T t, _ElemRight u) { t = t <<= u; }*/ {
			if constexpr (requires { typename std::decay_t<_ElemRight>::$ref_underlying_type; }) {
				return (get() <<=
				        static_cast<typename std::decay_t<_ElemRight>::$ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() <<= other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator>>=(_ElemRight&& other) const
		/*requires requires(T t, _ElemRight u) { t = t >>= u; }*/ {
			if constexpr (requires { typename std::decay_t<_ElemRight>::$ref_underlying_type; }) {
				return (get() >>=
				        static_cast<typename std::decay_t<_ElemRight>::$ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() >>= other);
			}
		}
		FORCE_INLINE constexpr decltype(auto) operator++() const requires requires(T t) { ++t; }
		{ return ++get(); }
		FORCE_INLINE constexpr decltype(auto) operator++(int) const requires requires(T t) { t++; }
		{ return get()++; }
		FORCE_INLINE constexpr decltype(auto) operator--() const requires requires(T t) { --t; }
		{ return --get(); }
		FORCE_INLINE constexpr decltype(auto) operator--(int) const requires requires(T t) { t--; }
		{ return get()--; }
	};
	template <class T>
	MutableRef(T&) -> MutableRef<Auto<T>>;

	template <class T>
	struct Ref : public RefStruct {
		using $ref_underlying_type = Auto<T>;
		using Type                 = $ref_underlying_type;

	   private:
		const $ref_underlying_type* ptr = nullptr;

		constexpr const $ref_underlying_type& get() const {
			if (ptr != nullptr)
				LIKELY { return *ptr; }
			throw NullReferenceException {};
			return *ptr;
		}

		using $selfRef = Ref<T>;

	   public:
		using $self  = typename Builtin::SelfProxyType<$ref_underlying_type>;
		using $class = typename Builtin::ClassProxyType<$ref_underlying_type>;

		constexpr decltype(auto) $ref() const noexcept { return get(); }

		constexpr Ref() noexcept                = default;
		constexpr Ref(const $selfRef&) noexcept = default;
		constexpr Ref($selfRef&&) noexcept      = default;
		Ref(decltype(nullptr))                  = delete;

		constexpr Ref(MutableRef<T> ref) noexcept
		    : ptr {std::bit_cast<const $ref_underlying_type*>(ref)} {}
		constexpr Ref($ref_underlying_type& ref) noexcept : ptr {std::addressof(ref)} {}
		constexpr Ref(const $ref_underlying_type& ref) noexcept : ptr {std::addressof(ref)} {}
		Ref($ref_underlying_type&& ref)       = delete;
		Ref(const $ref_underlying_type&& ref) = delete;

		constexpr $selfRef& operator=(const $selfRef&) noexcept = default;
		constexpr $selfRef& operator=($selfRef&&) noexcept = default;
		constexpr $selfRef& operator                       =($ref_underlying_type& val) noexcept {
            ptr = std::addressof(val);
            return *this;
		}
		constexpr $selfRef& operator=(const $ref_underlying_type& val) noexcept {
			ptr = std::addressof(val);
			return *this;
		}
		$selfRef& operator=($ref_underlying_type&&) = delete;
		$selfRef& operator=(const $ref_underlying_type&&) = delete;

		constexpr operator const $ref_underlying_type&() const { return get(); }

		FORCE_INLINE constexpr decltype(auto) operator+() const requires requires(T t) { t = +t; }
		{ return +get(); }
		FORCE_INLINE constexpr decltype(auto) operator-() const requires requires(T t) { t = -t; }
		{ return -get(); }
		FORCE_INLINE constexpr decltype(auto) operator~() const requires requires(T t) { t = ~t; }
		{ return ~get(); }
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator+(_ElemRight&& other) const {
			if constexpr (requires { typename std::decay_t<_ElemRight>::$ref_underlying_type; }) {
				return (get() +
				        static_cast<typename std::decay_t<_ElemRight>::$ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() + other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator-(_ElemRight&& other) const {
			if constexpr (requires { typename std::decay_t<_ElemRight>::$ref_underlying_type; }) {
				return (get() -
				        static_cast<typename std::decay_t<_ElemRight>::$ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() - other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator*(_ElemRight&& other) const {
			if constexpr (requires { typename std::decay_t<_ElemRight>::$ref_underlying_type; }) {
				return (get() *
				        static_cast<typename std::decay_t<_ElemRight>::$ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() * other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator/(_ElemRight&& other) const {
			if constexpr (requires { typename std::decay_t<_ElemRight>::$ref_underlying_type; }) {
				return (get() /
				        static_cast<typename std::decay_t<_ElemRight>::$ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() / other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator%(_ElemRight&& other) const {
			if constexpr (requires { typename std::decay_t<_ElemRight>::$ref_underlying_type; }) {
				return (get() %
				        static_cast<typename std::decay_t<_ElemRight>::$ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() % other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator&(_ElemRight&& other) const {
			if constexpr (requires { typename std::decay_t<_ElemRight>::$ref_underlying_type; }) {
				return (get() &
				        static_cast<typename std::decay_t<_ElemRight>::$ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() & other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator|(_ElemRight&& other) const {
			if constexpr (requires { typename std::decay_t<_ElemRight>::$ref_underlying_type; }) {
				return (get() |
				        static_cast<typename std::decay_t<_ElemRight>::$ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() | other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator^(_ElemRight&& other) const {
			if constexpr (requires { typename std::decay_t<_ElemRight>::$ref_underlying_type; }) {
				return (get() ^
				        static_cast<typename std::decay_t<_ElemRight>::$ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() ^ other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator<<(_ElemRight&& other) const {
			if constexpr (requires { typename std::decay_t<_ElemRight>::$ref_underlying_type; }) {
				return (
				    get() << static_cast<typename std::decay_t<_ElemRight>::$ref_underlying_type>(
				        std::forward<_ElemRight>(other)));
			} else {
				return (get() << other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator>>(_ElemRight&& other) const {
			if constexpr (requires { typename std::decay_t<_ElemRight>::$ref_underlying_type; }) {
				return (get() >>
				        static_cast<typename std::decay_t<_ElemRight>::$ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() >> other);
			}
		}
		template <class... _ElemRight>
		FORCE_INLINE constexpr decltype(auto) _operator_subscript(_ElemRight&&... other) {
			return get().$ref()._operator_subscript(std::forward<_ElemRight>(other)...);
		}
		template <class... _ElemRight>
		FORCE_INLINE constexpr decltype(auto) _operator_subscript(_ElemRight&&... other) const {
			return get().$ref()._operator_subscript(std::forward<_ElemRight>(other)...);
		}
		template <class... Args>
		FORCE_INLINE constexpr decltype(auto) operator()(Args&&... other) {
			return get()(std::forward<Args>(other)...);
		}
		template <class... Args>
		FORCE_INLINE constexpr decltype(auto) operator()(Args&&... other) const {
			return get()(std::forward<Args>(other)...);
		}
		template <class Ch>
		friend FORCE_INLINE constexpr decltype(auto) operator<<(std::basic_ostream<Ch>& stream,
		                                                        const Ref<T>& elem) {
			return stream << elem.get();
		}
		FORCE_INLINE constexpr decltype(auto) operator*() const requires requires(T t) { *t; }
		{ return *get(); }
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator==(_ElemRight&& other) const {
			if constexpr (requires { typename std::decay_t<_ElemRight>::$ref_underlying_type; }) {
				return (get() ==
				        static_cast<typename std::decay_t<_ElemRight>::$ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() == other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator!=(_ElemRight&& other) const {
			if constexpr (requires { typename std::decay_t<_ElemRight>::$ref_underlying_type; }) {
				return (get() !=
				        static_cast<typename std::decay_t<_ElemRight>::$ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() != other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr int operator<=>(_ElemRight&& other) const {
			if constexpr (requires { typename std::decay_t<_ElemRight>::$ref_underlying_type; }) {
				return (get() <=>
				        static_cast<typename std::decay_t<_ElemRight>::$ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() <=> other);
			}
		}
		FORCE_INLINE constexpr explicit operator bool() const requires(!std::is_same_v<T, bool>) {
			return static_cast<bool>(get());
		}
	};

	template <class T>
	Ref(T&) -> Ref<Auto<T>>;
	template <class T>
	Ref(const T&) -> Ref<Auto<T>>;
}  // namespace Builtin

namespace std {
	template <class T>
	inline constexpr auto addressof(Builtin::MutableRef<T> ref) noexcept {
		return std::bit_cast<typename Builtin::MutableRef<T>::$ref_underlying_type*>(ref);
	}

	template <class T>
	inline constexpr auto addressof(Builtin::Ref<T> ref) noexcept {
		return std::bit_cast<const typename Builtin::Ref<T>::$ref_underlying_type*>(ref);
	}
}  // namespace std

namespace $extensions {
	template <typename T>
	struct $proxy {
		using $self                     = typename std::remove_cvref_t<T>::$self;
		using $class                    = typename std::remove_cvref_t<T>::$class;
		using $property_underlying_type = $self;

		T val;

		inline constexpr operator $self() const { return val; }
		inline constexpr operator $self&() { return val; }
		inline constexpr operator Builtin::MutableRef<$self>() {
			return Builtin::MutableRef<$self>(val);
		}
	};
}  // namespace $extensions

inline bool _operator_ne_eq_mul(auto lhs, auto rhs) {
	return !_operator_eq_eq_mul($extensions::$proxy {lhs}, rhs);
}