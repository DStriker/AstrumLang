#pragma once

#include <coroutine>

#include "Types.h"

namespace Builtin {

	using ExceptionRef = std::exception_ptr;

	template <class T>
	class Generator;
	template <class T>
	class Generator__Unowned;
	template <class T>
	class Generator__Weak;
	template <class T>
	class $Class_Generator;

	template <class T>
	struct GeneratorPromise {
		using value_type     = std::remove_reference_t<T>;
		using reference_type = std::conditional_t<std::is_reference_v<T>, const T, const T&>;
		using pointer_type   = const value_type*;

		GeneratorPromise() = default;

		Generator<T> get_return_object() noexcept;

		constexpr auto initial_suspend() const noexcept { return std::suspend_always {}; }
		constexpr auto final_suspend() const noexcept { return std::suspend_always {}; }

		template <typename U = T, std::enable_if_t<!std::is_rvalue_reference<U>::value, int> = 0>
		std::suspend_always yield_value(const std::remove_reference_t<T>& value) noexcept {
			_value = std::addressof(value);
			return {};
		}

		std::suspend_always yield_value(std::remove_reference_t<T>&& value) noexcept {
			_value = std::addressof(value);
			return {};
		}

		void unhandled_exception() { _exception = std::current_exception(); }

		void return_void() noexcept {}

		reference_type value() const noexcept { return static_cast<reference_type>(*_value); }

		template <class U>
		std::suspend_never await_transform(U&& value) = delete;

		void rethrow_if_exception() {
			if (_exception) {
				std::rethrow_exception(_exception);
			}
		}

	   private:
		pointer_type _value;
		std::exception_ptr _exception;
	};

	template <class T>
	using CoroutineHandle = std::coroutine_handle<GeneratorPromise<T>>;

	template <class T>
	class Generator : public ObjectRef {
	   public:
		using $self = Generator<T>;

	   private:
		using $super = ObjectRef;

	   public:
		using $class = $Class_Generator<T>;

	   private:
		friend class Generator__Unowned<T>;
		friend class $Class_Generator<T>;
		friend class Generator__Weak<T>;

	   public:
		using $strong_ref = Generator<T>;

	   public:
		using $unowned_ref = Generator__Unowned<T>;

	   public:
		using $weak_ref = Generator__Weak<T>;

	   public:
		FORCE_INLINE decltype(auto) $ref() const noexcept {
			return *reinterpret_cast<$class*>(_obj);
		}
		ADV_CLASS_FROM_PTR(Generator)
		ADV_CLASS_INIT(Generator)
		ADV_CLASS_STRONG_COMMON_CTORS(Generator)

	   public:
		using ElementType = T;

		class $Class_Iterator;

		struct Iterator : public Struct {
			using ElementType = T;
			using $self      = Iterator;
			using $class     = $Class_Iterator;
			constexpr $self& $ref() noexcept { return *this; }
			constexpr const $self& $ref() const noexcept { return *this; }

		   private:
			CoroutineHandle<T> _coroutine;

		   public:
			Iterator(CoroutineHandle<T> handle) noexcept : _coroutine(handle) {}

			bool MoveNext() {
				if (!_coroutine || _coroutine.done())
					return false;

				_coroutine.resume();
				if (_coroutine.done()) {
					_coroutine.promise().rethrow_if_exception();
					return false;
				}
				return true;
			}

			const T GetCurrent() const { return _coroutine.promise().value(); }
			const T& GetCurrentRef() const { return _coroutine.promise().value(); }
		};

		class $Class_Iterator : public ValueType {
			Iterator __value;

		   public:
			using $self       = Iterator;
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

		using promise_type = GeneratorPromise<T>;
	};

	template <class T>
	class Generator__Unowned : public ObjectRef$Unowned {
	   public:
		using $self = Generator<T>;

	   public:
		using $strong_ref = Generator<T>;

	   public:
		using $unowned_ref = Generator__Unowned<T>;

	   public:
		using $weak_ref = Generator__Weak<T>;

	   private:
		using $super = ObjectRef$Unowned;

	   public:
		using $class = $Class_Generator<T>;

	   public:
		FORCE_INLINE decltype(auto) $ref() const noexcept {
			Builtin::UnownedCheck(_obj);
			return *reinterpret_cast<$class*>(_obj);
		}
		ADV_CLASS_FROM_PTR(Generator__Unowned)
		ADV_CLASS_UNOWNED_COMMON_CTORS(Generator__Unowned)
	};

	template <class T>
	class Generator__Weak : public ObjectRef$Weak {
	   public:
		using $self = Generator<T>;

	   public:
		using $strong_ref = Generator<T>;

	   public:
		using $unowned_ref = Generator__Unowned<T>;

	   public:
		using $weak_ref = Generator__Weak<T>;

	   private:
		using $super = ObjectRef$Weak;

	   public:
		using $class                           = $Class_Generator<T>;
		static constexpr bool __IS_ADV_NULLABLE = true;

	   public:
		FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		ADV_CLASS_WEAK_FROM_PTR(Generator__Weak)
		ADV_CLASS_WEAK_COMMON_CTORS(Generator__Weak)
#define ADV_PROPERTY_SELF $self
	};

	template <class T>
	class $Class_Generator : public Object {
	   public:
		using $self = Generator<T>;

	   private:
		using $super = Object;

	   public:
		using $selfClass = $Class_Generator<T>;
		friend class $self;
		friend class $self::$weak_ref;

		FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; }
		FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }

		using Iterator     = $self::Iterator;
		using promise_type = GeneratorPromise<T>;

	   public:
		inline explicit $Class_Generator(CoroutineHandle<T> handle) noexcept : _coroutine(handle) {}

	   public:
		inline $Class_Generator() noexcept : _coroutine(nullptr) {}
		inline ~$Class_Generator() {
			if (_coroutine) {
				_coroutine.destroy();
			}
		}
		inline auto Iterate() const -> const Iterator {
			return Iterator{_coroutine};
		}

	   private:
		mutable CoroutineHandle<T> _coroutine;
	};

	template <typename T>
	Generator<T> GeneratorPromise<T>::get_return_object() noexcept {
		using coroutine_handle = std::coroutine_handle<GeneratorPromise<T>>;
		return New<Generator<T>>(coroutine_handle::from_promise(*this));
	}

	template <class T>
	inline Generator<T>::ADV_CLASS_STRONG_CTOR_REF(Generator) 
	template <class T>
	inline Generator<T>& Generator<T>::ADV_CLASS_STRONG_ASSIGN_REF(Generator) 
	template <class T>
	inline Generator__Unowned<T>::ADV_CLASS_UNOWNED_CTOR_REF(Generator__Unowned) 
	template <class T>
	inline Generator__Unowned<T>& Generator__Unowned<T>::ADV_CLASS_UNOWNED_ASSIGN_REF(
	    Generator__Unowned) 
	template <class T>
	inline Generator__Weak<T>::ADV_CLASS_WEAK_CTOR_REF(Generator__Weak) 
	template <class T>
	inline Generator__Weak<T>& Generator__Weak<T>::ADV_CLASS_WEAK_ASSIGN_REF(Generator__Weak)
}  // namespace Builtin