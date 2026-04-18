#pragma once
#include "Types.h"

namespace CppAdvance {
	struct TypeDummy {
		template <typename T>
		operator T() const;
	};

	template <class TResult, class... TArgs>
	class AbstractCallable : public Object {
	   public:
		virtual TResult Call(TArgs... args) const = 0;

		virtual bool operator==(const AbstractCallable& other) const noexcept { return false; }

		~AbstractCallable() { std::cout << "Callable deinit\n"; }
	};

	template <class TResult, class... TArgs>
	class OwnedCallableRef : public ObjectRef {
	   public:
		using Callable = AbstractCallable<TResult, TArgs...>;

		OwnedCallableRef(Callable* obj) : ObjectRef(obj) {}
		OwnedCallableRef(const Callable& obj) : ObjectRef(obj) {}

		TResult Call(TArgs&&... args) const {
			return static_cast<Callable*>(_obj)->Call(std::forward<TArgs>(args)...);
		}
	};

	template <class... TArgs>
	class OwnedCallableRef<void, TArgs...> : public ObjectRef {
	   public:
		using Callable = AbstractCallable<void, TArgs...>;

		OwnedCallableRef(Callable* obj) : ObjectRef(obj) {}
		OwnedCallableRef(const Callable& obj) : ObjectRef(obj) {}

		void Call(TArgs&&... args) const {
			static_cast<Callable*>(_obj)->Call(std::forward<TArgs>(args)...);
		}
	};

	template <class TClosure, class TResult, class... TArgs>
	class ClosureWrapper : public AbstractCallable<TResult, TArgs...> {
		mutable TClosure closure;

	   public:
		ClosureWrapper(const TClosure& closure) : closure(closure) {}
		ClosureWrapper(TClosure&& closure) : closure(std::move(closure)) {}

		TResult Call(TArgs... args) const override { return closure(std::forward<TArgs>(args)...); }

		bool operator==(const ClosureWrapper& other) const noexcept {
			if constexpr (std::equality_comparable<TClosure>) {
				return closure == other.closure;
			}

			return false;
		}

		bool operator==(const AbstractCallable<TResult, TArgs...>& other) const noexcept override {
			if (typeid(*this) != typeid(other)) {
				return false;
			}

			return *this == static_cast<const ClosureWrapper<TClosure, TResult, TArgs...>&>(other);
		}
	};

	template <class TClosure, class... TArgs>
	class ClosureWrapper<TClosure, void, TArgs...> : public AbstractCallable<void, TArgs...> {
		mutable TClosure closure;

	   public:
		ClosureWrapper(const TClosure& closure) : closure(closure) {}

		void Call(TArgs... args) const override { closure(std::forward<TArgs>(args)...); }

		bool operator==(const ClosureWrapper& other) const noexcept {
			if constexpr (std::equality_comparable<TClosure>) {
				return closure == other.closure;
			}

			return false;
		}

		bool operator==(const AbstractCallable<void, TArgs...>& other) const noexcept override {
			if (typeid(*this) != typeid(other)) {
				return false;
			}

			return *this == static_cast<const ClosureWrapper<TClosure, void, TArgs...>&>(other);
		}
	};

	template <class TObject, class TResult, class TMethodOwner>
	class InstanceMethod {
		using MethodPointer = TResult(TMethodOwner::*);
		TObject _obj;
		MethodPointer _method;

	   public:
		InstanceMethod(const TObject& obj, TResult TMethodOwner::*method)
		    : _obj(obj), _method(method) {}
		InstanceMethod(const InstanceMethod&) = default;
		InstanceMethod(InstanceMethod&&)      = default;

		template <class... TArgs>
		decltype(auto) operator()(TArgs&&... args) const {
			if constexpr (IsNullable<TObject>) {
				if constexpr (!std::is_void_v<decltype(((*_obj).__ref().*
				                                        _method)(std::forward<TArgs>(args)...))>) {
					return ((*_obj).__ref().*_method)(std::forward<TArgs>(args)...);
				} else {
					((*_obj).__ref().*_method)(std::forward<TArgs>(args)...);
				}
			} else if constexpr (!std::is_void_v<decltype((_obj.__ref().*_method)(
			                         std::forward<TArgs>(args)...))>) {
				return (_obj.__ref().*_method)(std::forward<TArgs>(args)...);
			} else {
				(_obj.__ref().*_method)(std::forward<TArgs>(args)...);
			}
		}

		bool operator==(const InstanceMethod& other) const noexcept {
			return IdentityEquals(_obj, other._obj) && _method == other._method;
		}
	};

	template <class TObject, class TResult, class... TArgs>
	class ExtensionMethod {
		using MethodPointer = TResult (*)(const typename TObject::__self&, TArgs...);
		TObject _obj;
		MethodPointer _method;

	   public:
		ExtensionMethod(const TObject& obj, MethodPointer method) : _obj(obj), _method(method) {}
		ExtensionMethod(const ExtensionMethod&) = default;
		ExtensionMethod(ExtensionMethod&&)      = default;

		template <class... TArgs>
		TResult operator()(TArgs&&... args) const {
			if constexpr (IsNullable<TObject>) {
				return _method((*_obj), std::forward<TArgs>(args)...);
			} else {
				return _method(_obj, std::forward<TArgs>(args)...);
			}
		}

		bool operator==(const ExtensionMethod& other) const noexcept {
			return IdentityEquals(_obj, other._obj) && _method == other._method;
		}
	};

	template <class TObject, class... TArgs>
	class ExtensionMethod<TObject, void, TArgs...> {
		using MethodPointer = void (*)(const typename TObject::__self&, TArgs...);
		TObject _obj;
		MethodPointer _method;

	   public:
		ExtensionMethod(const TObject& obj, MethodPointer method) : _obj(obj), _method(method) {}
		ExtensionMethod(const ExtensionMethod&) = default;
		ExtensionMethod(ExtensionMethod&&)      = default;

		template <class... TArgs>
		void operator()(TArgs&&... args) const {
			if constexpr (IsNullable<TObject>) {
				_method((*_obj), std::forward<TArgs>(args)...);
			} else {
				_method(_obj, std::forward<TArgs>(args)...);
			}
		}

		bool operator==(const ExtensionMethod& other) const noexcept {
			return IdentityEquals(_obj, other._obj) && _method == other._method;
		}
	};

	template <class T>
	class FunctionRef;

	template <class TResult, class... TArgs>
	class __Class_FunctionRef;

	template <class TResult, class... TArgs>
	class FunctionRef<TResult(TArgs...)> : public FuncBase {
		using Signature            = TResult(TArgs...);
		using FunctionPointer      = TResult (*)(TArgs...);
		using ConstFunctionPointer = std::add_const_t<TResult> (*)(TArgs...);
		using ClosureRef           = OwnedCallableRef<TResult, TArgs...>;

		union {
			FunctionPointer functionPointer;
			ClosureRef closure;
		};

		enum : uint8_t { STATIC, CLOSURE } kind;

		FunctionRef(decltype(nullptr)) : functionPointer(nullptr), kind {STATIC} {}
		FunctionRef& operator=(decltype(nullptr)) {
			// destroy;
			functionPointer = nullptr;
			kind            = STATIC;
			return *this;
		}

		template <class T>
		friend class OptionalFunctionRef;

		void copy(const FunctionRef& other) {
			kind = other.kind;

			if (kind == CLOSURE) {
				new (&closure) ClosureRef(other.closure);
			} else {
				functionPointer = other.functionPointer;
			}
		}

		void move(FunctionRef&& other) noexcept {
			kind = other.kind;

			if (kind == CLOSURE) {
				new (&closure) ClosureRef(std::move(other.closure));
			} else {
				functionPointer = other.functionPointer;
			}

			other.functionPointer = nullptr;
			other.kind            = STATIC;
		}

		template <class F>
		requires(std::is_invocable_r_v<TResult, F, TArgs...>) void init(F&& func) {
			if constexpr (std::is_convertible_v<F, FunctionPointer>) {
				kind            = STATIC;
				functionPointer = static_cast<FunctionPointer>(std::forward<F>(func));
				std::cout << "STATIC\n";
			} else if constexpr (std::is_convertible_v<F, ConstFunctionPointer>) {
				kind            = STATIC;
				functionPointer = reinterpret_cast<FunctionPointer>(std::forward<F>(func));
				std::cout << "STATIC\n";
			} else {
				using TClosure = ClosureWrapper<std::decay_t<F>, TResult, TArgs...>;
				kind           = CLOSURE;
				new (&closure) ClosureRef(new (::operator new(sizeof(TClosure)))
				                              TClosure(std::forward<F>(func)));
				std::cout << "CLOSURE\n";
			}
		}

		void destroy() const {
			if (kind == CLOSURE) {
				closure.~ClosureRef();
			}
		}

	   public:
		template <class F>
		static constexpr bool IsInvocable() noexcept {
			return std::is_invocable_r_v<TResult, F, TArgs...>;
		}

		FunctionRef(const FunctionRef& other) { copy(other); }

		FunctionRef(FunctionRef&& other) noexcept { move(std::move(other)); }

		template <class F>
		requires(std::is_invocable_r_v<TResult, F, TArgs...>) FunctionRef(F&& func) {
			init(std::forward<F>(func));
		}

		~FunctionRef() { destroy(); }

		FunctionRef& operator=(const FunctionRef& other) {
			if (this != &other) {
				destroy();
				copy(other);
			}
			return *this;
		}

		FunctionRef& operator=(FunctionRef&& other) {
			if (this != &other) {
				destroy();
				move(std::move(other));
			}
			return *this;
		}

		template <class F>
		requires(std::is_invocable_r_v<TResult, F, TArgs...>) FunctionRef& operator=(F&& func) {
			destroy();
			init(std::forward<F>(func));
			return *this;
		}

		TResult operator()(TArgs... args) const {
			if (isEmpty()) {
				throw std::runtime_error("Call a null function");
			}

			if (kind == STATIC) {
				return functionPointer(std::forward<TArgs>(args)...);
			}

			return closure.Call(std::forward<TArgs>(args)...);
		}

		TResult Invoke(TArgs... args) const { return operator()(std::forward<TArgs>(args)...); }

		bool isEmpty() const noexcept { return kind == STATIC && functionPointer == nullptr; }

		bool operator==(const FunctionRef& other) const noexcept {
			return kind == other.kind &&
			       (kind == STATIC ? functionPointer == other.functionPointer : false);
		}

		bool operator==(decltype(nullptr)) const noexcept { return isEmpty(); }

		decltype(auto) __ref() const noexcept { return *this; }
		using __self  = FunctionRef<TResult(TArgs...)>;
		using __class = __Class_FunctionRef<TResult, TArgs...>;
	};

	template <class TResult, class... TArgs>
	class __Class_FunctionRef final : public ValueType {
	   public:
		using __underlying = FunctionRef<TResult(TArgs...)>;
		using __self       = __underlying;
		__self __value;
		__Class_FunctionRef(const __underlying& value) : __value {value} {}
		operator __underlying() const noexcept { return __value; }
	};

	template <class T>
	class OptionalFunctionRef {
		T ref;

	   public:
		static_assert(std::is_base_of_v<FuncBase, T>);
		static constexpr bool __IS_ADV_NULLABLE = true;
		using __class                           = typename T::__class;
		using __self                            = T;
		template <class U>
		friend class OptionalFunctionRef;

		FORCE_INLINE OptionalFunctionRef() noexcept : ref {nullptr} {}
		FORCE_INLINE OptionalFunctionRef(const OptionalFunctionRef& other) : ref(other.ref) {}
		FORCE_INLINE OptionalFunctionRef(OptionalFunctionRef&& other) noexcept
		    : ref(std::move(other.ref)) {}
		FORCE_INLINE OptionalFunctionRef(decltype(nullptr)) noexcept : ref {nullptr} {}
		FORCE_INLINE OptionalFunctionRef(const T& other) : ref(other) {}
		FORCE_INLINE OptionalFunctionRef(T&& other) : ref(std::move(other)) {}
		template <class U>
		requires(T::template IsInvocable<U>()) OptionalFunctionRef(U&& other)
		    : ref(std::forward<U>(other)) {}

		FORCE_INLINE OptionalFunctionRef& operator=(const OptionalFunctionRef& other) {
			ref = other.ref;
			return *this;
		}
		FORCE_INLINE OptionalFunctionRef& operator=(OptionalFunctionRef&& other) {
			ref = std::move(other.ref);
			return *this;
		}
		FORCE_INLINE OptionalFunctionRef& operator=(decltype(nullptr)) {
			ref = nullptr;
			return *this;
		}
		FORCE_INLINE OptionalFunctionRef& operator=(const T& other) {
			ref = other;
			return *this;
		}
		FORCE_INLINE OptionalFunctionRef& operator=(T&& other) {
			ref = std::move(other);
			return *this;
		}

		template <class U>
		requires(T::template IsInvocable<U>()) OptionalFunctionRef& operator=(U&& other) {
			ref = std::forward<U>(other);
			return *this;
		}

		FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }

		FORCE_INLINE T& operator*() {
			if (ref == nullptr)
				throw std::runtime_error("NullPointerException");
			return ref;
		}

		FORCE_INLINE const T& operator*() const {
			if (ref == nullptr)
				throw std::runtime_error("NullPointerException");
			return ref;
		}

		FORCE_INLINE bool operator==(const OptionalFunctionRef& other) const noexcept {
			return ref == other.ref;
		}
		FORCE_INLINE bool operator==(decltype(nullptr)) const noexcept { return ref == nullptr; }
		FORCE_INLINE bool operator==(const T& other) const noexcept { return ref == other; }
		FORCE_INLINE bool operator!=(const OptionalFunctionRef& other) const noexcept {
			return ref != other.ref;
		}
		FORCE_INLINE bool operator!=(decltype(nullptr)) const noexcept { return ref != nullptr; }
		FORCE_INLINE bool operator!=(const T& other) const noexcept { return ref != other; }

		FORCE_INLINE explicit operator bool() const noexcept { return !ref.isEmpty(); }

		FORCE_INLINE bool isValid() const noexcept { return !ref.isEmpty(); }

		template <class F>
		auto andThen(F&& func) & {
			using return_type = std::invoke_result_t<F, const T&>;
			if constexpr (std::is_void_v<return_type>) {
				if (isValid())
					std::invoke(std::forward<F>(func), ref);
			} else {
				using wrapped_type = Nullable<return_type>;
				if (!isValid())
					return wrapped_type(nullptr);
				return wrapped_type(std::invoke(std::forward<F>(func), ref));
			}
		}

		template <class F>
		auto andThen(F&& func) const& {
			using return_type = std::invoke_result_t<F, const T&>;
			if constexpr (std::is_void_v<return_type>) {
				if (isValid())
					std::invoke(std::forward<F>(func), ref);
			} else {
				using wrapped_type = Nullable<return_type>;
				if (!isValid())
					return wrapped_type(nullptr);
				return wrapped_type(std::invoke(std::forward<F>(func), ref));
			}
		}

		template <class F>
		auto andThen(F&& func) && {
			using return_type = std::invoke_result_t<F, const T&>;
			if constexpr (std::is_void_v<return_type>) {
				if (isValid())
					std::invoke(std::forward<F>(func), std::move(ref));
			} else {
				using wrapped_type = Nullable<return_type>;
				if (!isValid())
					return wrapped_type(nullptr);
				return wrapped_type(std::invoke(std::forward<F>(func), std::move(ref)));
			}
		}

		template <class F>
		auto andThen(F&& func) const&& {
			using return_type = std::invoke_result_t<F, const T&>;
			if constexpr (std::is_void_v<return_type>) {
				if (isValid())
					std::invoke(std::forward<F>(func), std::move(ref));
			} else {
				using wrapped_type = Nullable<return_type>;
				if (!isValid())
					return wrapped_type(nullptr);
				return wrapped_type(std::invoke(std::forward<F>(func), std::move(ref)));
			}
		}

		template <class F>
		std::remove_cv_t<T> valueOr(F&& func) const& {
			using X = std::remove_cv_t<T>;
			using U = std::invoke_result_t<F>;
			static_assert(std::is_convertible_v<const T&, X>,
			              "Must be able to convert const T& to remove_cv_t<T>");
			static_assert(std::is_convertible_v<U, X>,
			              "Default value must be convertible to left side of the expression");
			if (isValid())
				return ref;
			return std::invoke(std::forward<F>(func));
		}

		template <class F>
		std::remove_cv_t<T> valueOr(F&& func) && {
			using X = std::remove_cv_t<T>;
			using U = std::invoke_result_t<F>;
			static_assert(std::is_convertible_v<T, X>,
			              "Must be able to convert T to remove_cv_t<T>");
			static_assert(std::is_convertible_v<U, X>,
			              "Default value must be convertible to left side of the expression");
			if (isValid())
				return std::move(ref);
			return std::invoke(std::forward<F>(func));
		}

		template <class F>
		OptionalFunctionRef& assignIfNull(F&& func) {
			using return_type = std::invoke_result_t<F>;
			static_assert(std::is_assignable_v<T, return_type>,
			              "Default value must be convertible to left side of the expression");
			if (!isValid())
				ref = std::invoke(std::forward<F>(func));
			return *this;
		}
	};
}  // namespace CppAdvance