#pragma once
#include "Exceptions.h"
#include "Types.h"

namespace Builtin {

	template <class T>
	struct MutableRef : public RefStruct {
		using __ref_underlying_type = Auto<T>;
		using Type                  = __ref_underlying_type;

	   private:
		__ref_underlying_type* ptr = nullptr;

		constexpr __ref_underlying_type& get() const {
			if (ptr != nullptr)
				LIKELY { return *ptr; }
			throw NullReferenceException {};
			return *ptr;
		}

		using __selfRef = MutableRef<T>;

	   public:
		using __self  = typename Builtin::SelfProxyType<__ref_underlying_type>;
		using __class = typename Builtin::ClassProxyType<__ref_underlying_type>;

		constexpr decltype(auto) __ref() const noexcept { return get(); }

		constexpr MutableRef() noexcept                 = default;
		constexpr MutableRef(const __selfRef&) noexcept = default;
		constexpr MutableRef(__selfRef&&) noexcept      = default;
		MutableRef(decltype(nullptr))                   = delete;

		constexpr explicit MutableRef(__ref_underlying_type& ref) noexcept
		    : ptr {std::addressof(ref)} {}
		explicit MutableRef(const __ref_underlying_type& ref)  = delete;
		explicit MutableRef(__ref_underlying_type&& ref)       = delete;
		explicit MutableRef(const __ref_underlying_type&& ref) = delete;

		constexpr __selfRef& operator=(const __selfRef&) noexcept = default;
		constexpr __selfRef& operator=(__selfRef&&) noexcept = default;
		constexpr __selfRef& operator=(const __selfRef&) const = delete;
		constexpr __selfRef& operator=(__selfRef&&) const = delete;
		template <class U>
		constexpr const __selfRef& operator=(U&& val) const
		    noexcept(std::is_nothrow_assignable_v<__ref_underlying_type, U>) requires(
		        std::is_assignable_v<__ref_underlying_type, U>) {
			get() = std::forward<U>(val);
			return *this;
		}

		constexpr operator __ref_underlying_type&() const { return get(); }

		FORCE_INLINE constexpr decltype(auto) operator+() const requires requires(T t) { t = +t; }
		{ return +get(); }
		FORCE_INLINE constexpr decltype(auto) operator-() const requires requires(T t) { t = -t; }
		{ return -get(); }
		FORCE_INLINE constexpr decltype(auto) operator~() const requires requires(T t) { t = ~t; }
		{ return ~get(); }
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator+(_ElemRight&& other) const {
			if constexpr (requires { typename std::decay_t<_ElemRight>::__ref_underlying_type; }) {
				return (get() +
				        static_cast<typename std::decay_t<_ElemRight>::__ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() + other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator-(_ElemRight&& other) const {
			if constexpr (requires { typename std::decay_t<_ElemRight>::__ref_underlying_type; }) {
				return (get() -
				        static_cast<typename std::decay_t<_ElemRight>::__ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() - other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator*(_ElemRight&& other) const {
			if constexpr (requires { typename std::decay_t<_ElemRight>::__ref_underlying_type; }) {
				return (get() *
				        static_cast<typename std::decay_t<_ElemRight>::__ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() * other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator/(_ElemRight&& other) const {
			if constexpr (requires { typename std::decay_t<_ElemRight>::__ref_underlying_type; }) {
				return (get() /
				        static_cast<typename std::decay_t<_ElemRight>::__ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() / other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator%(_ElemRight&& other) const {
			if constexpr (requires { typename std::decay_t<_ElemRight>::__ref_underlying_type; }) {
				return (get() %
				        static_cast<typename std::decay_t<_ElemRight>::__ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() % other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator&(_ElemRight&& other) const {
			if constexpr (requires { typename std::decay_t<_ElemRight>::__ref_underlying_type; }) {
				return (get() &
				        static_cast<typename std::decay_t<_ElemRight>::__ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() & other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator|(_ElemRight&& other) const {
			if constexpr (requires { typename std::decay_t<_ElemRight>::__ref_underlying_type; }) {
				return (get() |
				        static_cast<typename std::decay_t<_ElemRight>::__ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() | other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator^(_ElemRight&& other) const {
			if constexpr (requires { typename std::decay_t<_ElemRight>::__ref_underlying_type; }) {
				return (get() ^
				        static_cast<typename std::decay_t<_ElemRight>::__ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() ^ other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator<<(_ElemRight&& other) const {
			if constexpr (requires { typename std::decay_t<_ElemRight>::__ref_underlying_type; }) {
				return (
				    get() << static_cast<typename std::decay_t<_ElemRight>::__ref_underlying_type>(
				        std::forward<_ElemRight>(other)));
			} else {
				return (get() << other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator>>(_ElemRight&& other) const {
			if constexpr (requires { typename std::decay_t<_ElemRight>::__ref_underlying_type; }) {
				return (get() >>
				        static_cast<typename std::decay_t<_ElemRight>::__ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() >> other);
			}
		}
		template <class... _ElemRight>
		FORCE_INLINE constexpr decltype(auto) _operator_subscript(_ElemRight&&... other) {
			return get().__ref()._operator_subscript(std::forward<_ElemRight>(other)...);
		}
		template <class... _ElemRight>
		FORCE_INLINE constexpr decltype(auto) _operator_subscript(_ElemRight&&... other) const {
			return get().__ref()._operator_subscript(std::forward<_ElemRight>(other)...);
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
			if constexpr (requires { typename std::decay_t<_ElemRight>::__ref_underlying_type; }) {
				return (get() ==
				        static_cast<typename std::decay_t<_ElemRight>::__ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() == other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator!=(_ElemRight&& other) const {
			if constexpr (requires { typename std::decay_t<_ElemRight>::__ref_underlying_type; }) {
				return (get() !=
				        static_cast<typename std::decay_t<_ElemRight>::__ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() != other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr int operator<=>(_ElemRight&& other) const {
			if constexpr (requires { typename std::decay_t<_ElemRight>::__ref_underlying_type; }) {
				return (get() <=>
				        static_cast<typename std::decay_t<_ElemRight>::__ref_underlying_type>(
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
			if constexpr (requires { typename std::decay_t<_ElemRight>::__ref_underlying_type; }) {
				return (get() +=
				        static_cast<typename std::decay_t<_ElemRight>::__ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() += other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator-=(_ElemRight&& other) const
		/*requires requires(T t, _ElemRight u) { t = t -= u; }*/ {
			if constexpr (requires { typename std::decay_t<_ElemRight>::__ref_underlying_type; }) {
				return (get() -=
				        static_cast<typename std::decay_t<_ElemRight>::__ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() -= other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator*=(_ElemRight&& other) const
		/*requires requires(T t, _ElemRight u) { t = t *= u; }*/ {
			if constexpr (requires { typename std::decay_t<_ElemRight>::__ref_underlying_type; }) {
				return (get() *=
				        static_cast<typename std::decay_t<_ElemRight>::__ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() *= other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator/=(_ElemRight&& other) const
		/*requires requires(T t, _ElemRight u) { t = t /= u; }*/ {
			if constexpr (requires { typename std::decay_t<_ElemRight>::__ref_underlying_type; }) {
				return (get() /=
				        static_cast<typename std::decay_t<_ElemRight>::__ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() /= other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator%=(_ElemRight&& other) const
		/*requires requires(T t, _ElemRight u) { t = t %= u; }*/ {
			if constexpr (requires { typename std::decay_t<_ElemRight>::__ref_underlying_type; }) {
				return (get() %=
				        static_cast<typename std::decay_t<_ElemRight>::__ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() %= other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator&=(_ElemRight&& other) const
		/*requires requires(T t, _ElemRight u) { t = t &= u; }*/ {
			if constexpr (requires { typename std::decay_t<_ElemRight>::__ref_underlying_type; }) {
				return (get() &=
				        static_cast<typename std::decay_t<_ElemRight>::__ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() &= other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator|=(_ElemRight&& other) const
		/*requires requires(T t, _ElemRight u) { t = t |= u; }*/ {
			if constexpr (requires { typename std::decay_t<_ElemRight>::__ref_underlying_type; }) {
				return (get() |=
				        static_cast<typename std::decay_t<_ElemRight>::__ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() |= other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator^=(_ElemRight&& other) const
		/*requires requires(T t, _ElemRight u) { t = t ^= u; }*/ {
			if constexpr (requires { typename std::decay_t<_ElemRight>::__ref_underlying_type; }) {
				return (get() ^=
				        static_cast<typename std::decay_t<_ElemRight>::__ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() ^= other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator<<=(_ElemRight&& other) const
		/*requires requires(T t, _ElemRight u) { t = t <<= u; }*/ {
			if constexpr (requires { typename std::decay_t<_ElemRight>::__ref_underlying_type; }) {
				return (get() <<=
				        static_cast<typename std::decay_t<_ElemRight>::__ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() <<= other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator>>=(_ElemRight&& other) const
		/*requires requires(T t, _ElemRight u) { t = t >>= u; }*/ {
			if constexpr (requires { typename std::decay_t<_ElemRight>::__ref_underlying_type; }) {
				return (get() >>=
				        static_cast<typename std::decay_t<_ElemRight>::__ref_underlying_type>(
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
		using __ref_underlying_type = Auto<T>;
		using Type                  = __ref_underlying_type;

	   private:
		const __ref_underlying_type* ptr = nullptr;

		constexpr const __ref_underlying_type& get() const {
			if (ptr != nullptr)
				LIKELY { return *ptr; }
			throw NullReferenceException {};
			return *ptr;
		}

		using __selfRef = Ref<T>;

	   public:
		using __self  = typename Builtin::SelfProxyType<__ref_underlying_type>;
		using __class = typename Builtin::ClassProxyType<__ref_underlying_type>;

		constexpr decltype(auto) __ref() const noexcept { return get(); }

		constexpr Ref() noexcept                 = default;
		constexpr Ref(const __selfRef&) noexcept = default;
		constexpr Ref(__selfRef&&) noexcept      = default;
		Ref(decltype(nullptr))                   = delete;

		constexpr Ref(MutableRef<T> ref) noexcept
		    : ptr {std::bit_cast<const __ref_underlying_type*>(ref)} {}
		constexpr Ref(__ref_underlying_type& ref) noexcept : ptr {std::addressof(ref)} {}
		constexpr Ref(const __ref_underlying_type& ref) noexcept : ptr {std::addressof(ref)} {}
		Ref(__ref_underlying_type&& ref)       = delete;
		Ref(const __ref_underlying_type&& ref) = delete;

		constexpr __selfRef& operator=(const __selfRef&) noexcept = default;
		constexpr __selfRef& operator=(__selfRef&&) noexcept = default;
		constexpr __selfRef& operator=(__ref_underlying_type& val) noexcept {
			ptr = std::addressof(val);
			return *this;
		}
		constexpr __selfRef& operator=(const __ref_underlying_type& val) noexcept {
			ptr = std::addressof(val);
			return *this;
		}
		__selfRef& operator=(__ref_underlying_type&&) = delete;
		__selfRef& operator=(const __ref_underlying_type&&) = delete;

		constexpr operator const __ref_underlying_type&() const { return get(); }

		FORCE_INLINE constexpr decltype(auto) operator+() const requires requires(T t) { t = +t; }
		{ return +get(); }
		FORCE_INLINE constexpr decltype(auto) operator-() const requires requires(T t) { t = -t; }
		{ return -get(); }
		FORCE_INLINE constexpr decltype(auto) operator~() const requires requires(T t) { t = ~t; }
		{ return ~get(); }
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator+(_ElemRight&& other) const {
			if constexpr (requires { typename std::decay_t<_ElemRight>::__ref_underlying_type; }) {
				return (get() +
				        static_cast<typename std::decay_t<_ElemRight>::__ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() + other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator-(_ElemRight&& other) const {
			if constexpr (requires { typename std::decay_t<_ElemRight>::__ref_underlying_type; }) {
				return (get() -
				        static_cast<typename std::decay_t<_ElemRight>::__ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() - other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator*(_ElemRight&& other) const {
			if constexpr (requires { typename std::decay_t<_ElemRight>::__ref_underlying_type; }) {
				return (get() *
				        static_cast<typename std::decay_t<_ElemRight>::__ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() * other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator/(_ElemRight&& other) const {
			if constexpr (requires { typename std::decay_t<_ElemRight>::__ref_underlying_type; }) {
				return (get() /
				        static_cast<typename std::decay_t<_ElemRight>::__ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() / other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator%(_ElemRight&& other) const {
			if constexpr (requires { typename std::decay_t<_ElemRight>::__ref_underlying_type; }) {
				return (get() %
				        static_cast<typename std::decay_t<_ElemRight>::__ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() % other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator&(_ElemRight&& other) const {
			if constexpr (requires { typename std::decay_t<_ElemRight>::__ref_underlying_type; }) {
				return (get() &
				        static_cast<typename std::decay_t<_ElemRight>::__ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() & other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator|(_ElemRight&& other) const {
			if constexpr (requires { typename std::decay_t<_ElemRight>::__ref_underlying_type; }) {
				return (get() |
				        static_cast<typename std::decay_t<_ElemRight>::__ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() | other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator^(_ElemRight&& other) const {
			if constexpr (requires { typename std::decay_t<_ElemRight>::__ref_underlying_type; }) {
				return (get() ^
				        static_cast<typename std::decay_t<_ElemRight>::__ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() ^ other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator<<(_ElemRight&& other) const {
			if constexpr (requires { typename std::decay_t<_ElemRight>::__ref_underlying_type; }) {
				return (
				    get() << static_cast<typename std::decay_t<_ElemRight>::__ref_underlying_type>(
				        std::forward<_ElemRight>(other)));
			} else {
				return (get() << other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator>>(_ElemRight&& other) const {
			if constexpr (requires { typename std::decay_t<_ElemRight>::__ref_underlying_type; }) {
				return (get() >>
				        static_cast<typename std::decay_t<_ElemRight>::__ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() >> other);
			}
		}
		template <class... _ElemRight>
		FORCE_INLINE constexpr decltype(auto) _operator_subscript(_ElemRight&&... other) {
			return get().__ref()._operator_subscript(std::forward<_ElemRight>(other)...);
		}
		template <class... _ElemRight>
		FORCE_INLINE constexpr decltype(auto) _operator_subscript(_ElemRight&&... other) const {
			return get().__ref()._operator_subscript(std::forward<_ElemRight>(other)...);
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
			if constexpr (requires { typename std::decay_t<_ElemRight>::__ref_underlying_type; }) {
				return (get() ==
				        static_cast<typename std::decay_t<_ElemRight>::__ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() == other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr decltype(auto) operator!=(_ElemRight&& other) const {
			if constexpr (requires { typename std::decay_t<_ElemRight>::__ref_underlying_type; }) {
				return (get() !=
				        static_cast<typename std::decay_t<_ElemRight>::__ref_underlying_type>(
				            std::forward<_ElemRight>(other)));
			} else {
				return (get() != other);
			}
		}
		template <class _ElemRight>
		FORCE_INLINE constexpr int operator<=>(_ElemRight&& other) const {
			if constexpr (requires { typename std::decay_t<_ElemRight>::__ref_underlying_type; }) {
				return (get() <=>
				        static_cast<typename std::decay_t<_ElemRight>::__ref_underlying_type>(
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
		return std::bit_cast<typename Builtin::MutableRef<T>::__ref_underlying_type*>(ref);
	}

	template <class T>
	inline constexpr auto addressof(Builtin::Ref<T> ref) noexcept {
		return std::bit_cast<const typename Builtin::Ref<T>::__ref_underlying_type*>(ref);
	}
}  // namespace std

namespace __extensions {
	template <typename T>
	struct __proxy {
		using __self                     = typename std::decay_t<T>::__self;
		using __class                    = typename std::decay_t<T>::__class;
		using __property_underlying_type = __self;

		T val;

		inline constexpr operator __self() const { return val; }
		inline constexpr operator __self&() { return val; }
		inline constexpr operator Builtin::MutableRef<__self>() {
			return Builtin::MutableRef<__self>(val);
		}
	};
}  // namespace __extensions

inline bool _operator_ne_eq_mul(auto lhs, auto rhs) {
	return !_operator_eq_eq_mul(__extensions::__proxy {lhs}, rhs);
}