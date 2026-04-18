#pragma once
#include <type_traits>

namespace CppAdvance {
	class ObjectRef;

	namespace __details {
		template <class T>
		constexpr bool cheapCopy =
		    sizeof(T) <= 2 * sizeof(void*) && std::is_trivially_copyable_v<T>;

		template <class T>
		requires std::is_union_v<T> || std::is_array_v<T> || std::is_function_v<T>
		constexpr bool cheapCopy<T> = false;

		template <class T>
		requires(!std::is_void_v<T>) using InType =
		    std::conditional_t<cheapCopy<T>, const T, const T&>;
	}  // namespace __details

	template <class T>
	requires(!std::is_void_v<T>) using In =
	    std::conditional_t<__details::cheapCopy<T>, const T, const T&>;

	template <class T>
	struct MutableRef {
		using type = std::remove_cvref_t<T>;
		type& value;

		constexpr explicit MutableRef(type& value) noexcept : value(value) {}

		constexpr operator type&() noexcept { return value; }
	};

	template <class T>
	class DeferredInit {
		alignas(T) std::byte data[sizeof(T)];
		bool init = false;

		auto t() -> T& { return *std::launder(reinterpret_cast<T*>(&data)); }

		template <class U>
		friend class Out;

		void destroy() {
			if (init) {
				t().~T();
				init = false;
			}
		}

	   public:
		constexpr DeferredInit() noexcept {}
		constexpr ~DeferredInit() noexcept { destroy(); }

		constexpr T& value() noexcept {
			assert(init);
			return t();
		}

		constexpr void construct(auto&&... args) {
			assert(!init);
			new (&data) T {std::forward<decltype(args)>(args)...};
			init = true;
		}
	};

	template <class T>
	class Out {
		union {
			T* t;
			DeferredInit<T>* dt;
		};
		Out<T>* ot = {};
		bool hasT;
		int uncaught     = std::uncaught_exceptions();
		bool constructed = false;

	   public:
		constexpr Out(T* _t) noexcept : t(_t), hasT(true) { assert(t); }

		constexpr Out(DeferredInit<T>* _dt) noexcept : dt(_dt), hasT(false) { assert(dt); }

		constexpr Out(Out<T>* _ot) noexcept : ot(_ot), hasT(ot->hasT) {
			assert(ot);
			if (hasT)
				t = ot->t;
			else
				dt = ot->dt;
		}

		constexpr ~Out() {
			assert(hasT || calledConstruct() || (!hasT && dt && dt->init));
			if (calledConstruct() && uncaught != std::uncaught_exceptions()) {
				assert(!hasT);
				dt->destroy();
				calledConstruct() = false;
			}
		}

		constexpr bool& calledConstruct() {
			if (ot)
				return ot->calledConstruct();
			return constructed;
		}

		constexpr T& value() noexcept {
			if (hasT) {
				assert(t);
				return *t;
			}

			assert(dt);
			return dt->value();
		}

		constexpr void construct(auto&&... args) {
			if (hasT || calledConstruct()) {
				if constexpr (requires { *t = T(std::forward<decltype(args)>(args)...); }) {
					assert(t);
					*t = T(std::forward<decltype(args)>(args)...);
				} else {
					static_assert(
					    false,
					    "Copy assignment is not available in the Out parameter construction");
				}
			} else {
				assert(dt);
				if (dt->init) {
					if constexpr (requires { *t = T(std::forward<decltype(args)>(args)...); }) {
						dt->value() = T(std::forward<decltype(args)>(args)...);
					} else {
						static_assert(
						    false,
						    "Copy assignment is not available in the Out parameter construction");
					}
				} else {
					dt->construct(std::forward<decltype(args)>(args)...);
					calledConstruct() = true;
				}
			}
		}
	};
}  // namespace CppAdvance