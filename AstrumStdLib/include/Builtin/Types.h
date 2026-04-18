#pragma once
#include <optional>
#include <span>
#include <stdexcept>

#include "Floating.h"
#include "Int128.h"
#include "Integer.h"
#include "RefCounts.h"
#include "Str.h"

namespace System {
	template <class T>
	struct Optional;
}

namespace CppAdvance {
	struct EmptyType {
		using __class = EmptyType;
	};

	struct Struct {
		constexpr Struct() noexcept = default;

		Str ToString() const { return u"Struct"; }

		usize HashCode() const { return 123456u; }
	};

	struct RefStruct {
		Str ToString() const { return u"Struct"; }

		usize HashCode() const { return 123456u; }
	};
	struct Enum {};
	struct Union {};
	struct InterfaceRef;

	struct FuncBase {};

	template <class T, template <class...> class U>
	inline constexpr bool is_instance_of_v = std::false_type {};

	template <template <class...> class U, class... Vs>
	inline constexpr bool is_instance_of_v<U<Vs...>, U> = std::true_type {};

	template <typename T>
	concept IsInterface = std::is_base_of_v<InterfaceRef, T>;

	template <typename T>
	concept IsNullable = requires {
		T::__IS_ADV_NULLABLE;
	};

	struct StaticClass {};

	class Object {
		InlineRefCounts _refCounts = InlineRefCounts(InlineRefCounts::InitTag());
		friend void DeinitObject(Object* obj);
		friend void UnownedRelease(Object* obj);
		friend Object* UnownedRetain(Object* obj);
		friend void UnownedCheck(Object* obj);
		friend Object* Retain(Object* obj);
		friend void Release(Object* obj);

		friend class ObjectRef__Weak;

	   public:
		using __class = Object;

		Object()              = default;
		Object(const Object&) = delete;
		Object(Object&&)      = delete;

		virtual ~Object() { assert(_refCounts.isDeiniting()); }

		Object& operator=(const Object&) = delete;
		Object& operator=(Object&&) = delete;

		virtual Str ToString() { return u"Struct"; }

		virtual usize HashCode() { return 123456u; }

		friend inline void InitStackObject(Object* obj);

		virtual bool IsDeiniting() const final { return _refCounts.isDeiniting(); }

		virtual bool IsUniquelyReferenced() const final { return _refCounts.isUnique(); }

		virtual bool IsStackAllocated() const final { return _refCounts.isStackAlloc(); }

		virtual usize GetStrongReferenceCount() const final { return _refCounts.getCount(); }

		virtual usize GetUnownedReferenceCount() const final {
			return _refCounts.getUnownedCount();
		}

		virtual usize GetWeakReferenceCount() const final { return _refCounts.getWeakCount(); }
	};

	inline void InitStackObject(Object* obj) { obj->_refCounts.stackInit(); }

	inline void DeinitObject(Object* obj) {
		assert(obj->_refCounts.isDeiniting() && !obj->_refCounts.isStackAlloc());
		obj->~Object();

		if (obj->_refCounts.canBeFreed()) {
			// TODO: custom allocator
			// std::cout << "Deiniting\n";
			::operator delete(obj);
		} else {
			UnownedRelease(obj);
		}
	}

	inline void UnownedRelease(Object* obj) {
		if (!obj)
			return;

		if (obj->_refCounts.decrementUnownedShouldFree(1)) {
			::operator delete(obj);
		}
	}

	inline Object* UnownedRetain(Object* obj) {
		if (!obj)
			return obj;

		obj->_refCounts.incrementUnowned(1);
		return obj;
	}

	inline void UnownedCheck(Object* obj) {
		if (!obj)
			return;
		assert(obj->_refCounts.getUnownedCount());
		if (obj->_refCounts.isDeiniting()) {
			throw std::runtime_error("Unowned object access violation");
			// access error
		}
	}

	inline Object* Retain(Object* obj) {
		if (!obj)
			return obj;

		return obj->_refCounts.increment(obj, 1);
	}

	inline void Release(Object* obj) {
		if (!obj)
			return;

		obj->_refCounts.decrementAndDeinit(1);
	}

	template <class T, class... Types>
	inline constexpr bool IsAnyOf = std::disjunction_v<std::is_same<T, Types>...>;
	template <class T>
	inline constexpr bool IsPrimitiveType =
	    IsAnyOf<std::remove_cv_t<T>, i8, i16, i32, i64, u8, u16, u32, u64, isize, usize, i128, u128,
	            f32, f64, char16, Str, bool>;
	template <class T>
	inline constexpr bool IsValueType =
	    std::is_base_of_v<Struct, T> || std::is_base_of_v<RefStruct, T> ||
	    std::is_base_of_v<Enum, T> || std::is_base_of_v<Union, T> || std::is_union_v<T>;

	class ObjectRef__Unowned;
	class ObjectRef__Weak;

	class ObjectRef {
	   protected:
		Object* _obj;
		struct InitTag {};
		template <class T, class... Args>
		friend T New(Args&&... args);
		template <unsigned Memory, class T, class... Args>
		friend T NewWithExtraMemory(Args&&... args);
		// template<class T>
		// friend T Stackalloc(typename T::__class& obj);
		template <class T>
		friend struct Stackalloc;
		friend Object* GetObjectReference(const ObjectRef* iface);
		friend void ClearObjectReference(ObjectRef* iface);

		friend class ObjectRef__Unowned;
		friend class ObjectRef__Weak;
		template <class T>
		friend class OptionalStrongRef;

		ObjectRef(Object* obj) : _obj {obj} {}

		FORCE_INLINE ObjectRef(decltype(nullptr)) noexcept : _obj {nullptr} {}
		FORCE_INLINE ObjectRef& operator=(decltype(nullptr)) {
			if (_obj) {
				Release(_obj);
			}

			_obj = nullptr;
			return *this;
		}

	   public:
		using __self        = ObjectRef;
		using __class       = Object;
		using __strong_ref  = ObjectRef;
		using __unowned_ref = ObjectRef__Unowned;
		using __weak_ref    = ObjectRef__Weak;

	   public:
		FORCE_INLINE decltype(auto) __ref() noexcept { return *static_cast<__class*>(_obj); }
		FORCE_INLINE decltype(auto) __ref() const noexcept { return *static_cast<__class*>(_obj); }

		ObjectRef() {
			void* ptr = ::operator new(sizeof(Object));
			_obj      = new (ptr) Object;
		}

		ObjectRef(const Object& ref) : _obj {(Object*) &ref} { Retain(_obj); }

		ObjectRef(const ObjectRef& copy) : _obj {copy._obj} { Retain(_obj); }

		ObjectRef(ObjectRef&& moved) noexcept : _obj {moved._obj} { moved._obj = nullptr; }

		template <class T>
		ObjectRef(const T& value) requires(std::is_base_of_v<Struct, T> || std::is_union_v<T> ||
		                                   std::is_base_of_v<Enum, T> ||
		                                   std::is_base_of_v<Union, T> ||
		                                   std::is_base_of_v<FuncBase, T>) {
			void* ptr = ::operator new(sizeof(T::__class));
			_obj      = new (ptr) T::__class(value);
		}

		template <class T>
		ObjectRef(T value) requires(IsPrimitiveType<std::remove_cv_t<T>>);

		ObjectRef(Object* obj, InitTag) : _obj(obj) {}

		~ObjectRef() {
			if (_obj)
				Release(_obj);
		}

		ObjectRef& operator=(const Object& ref) {
			if (&ref != _obj) {
				Release(_obj);
				_obj = (Object*) &ref;
				Retain(_obj);
			}

			return *this;
		}

		ObjectRef& operator=(const ObjectRef& copy) {
			if (copy._obj != _obj) {
				Release(_obj);
				_obj = copy._obj;
				Retain(_obj);
			}

			return *this;
		}

		ObjectRef& operator=(ObjectRef&& moved) {
			if (moved._obj != _obj) {
				Release(_obj);
				_obj = moved._obj;
			}
			moved._obj = nullptr;

			return *this;
		}

		template <class T>
		ObjectRef& operator=(const T& value) requires(std::is_base_of_v<Struct, T> ||
		                                              std::is_union_v<T> ||
		                                              std::is_base_of_v<Enum, T> ||
		                                              std::is_base_of_v<Union, T> ||
		                                              std::is_base_of_v<FuncBase, T>) {
			if (_obj) {
				Release(_obj);
			}

			void* ptr = ::operator new(sizeof(T::__class));
			_obj      = new (ptr) T::__class(value);
			return *this;
		}

		template <class T>
		ObjectRef& operator=(T value) requires(IsPrimitiveType<std::remove_cv_t<T>>);
	};

	class ObjectRef__Unowned {
	   protected:
		Object* _obj;
		ObjectRef__Unowned(Object* obj) : _obj {obj} {}

		friend class ObjectRef;
		template <class T>
		friend class OptionalUnownedRef;
		friend Object* GetObjectReference(const ObjectRef__Unowned* iface);

		FORCE_INLINE ObjectRef__Unowned(decltype(nullptr)) noexcept : _obj {nullptr} {}
		FORCE_INLINE ObjectRef__Unowned& operator=(decltype(nullptr)) {
			if (_obj) {
				UnownedRelease(_obj);
			}

			_obj = nullptr;
			return *this;
		}

	   public:
		using __self        = ObjectRef;
		using __class       = Object;
		using __strong_ref  = ObjectRef;
		using __unowned_ref = ObjectRef__Unowned;
		using __weak_ref    = ObjectRef__Weak;

		FORCE_INLINE decltype(auto) __ref() const {
			UnownedCheck(_obj);
			return *static_cast<__class*>(_obj);
		}

		ObjectRef__Unowned(const Object& ref) : _obj {(Object*) &ref} { UnownedRetain(_obj); }

		ObjectRef__Unowned(const ObjectRef__Unowned& copy) : _obj {copy._obj} {
			UnownedRetain(_obj);
		}

		ObjectRef__Unowned(ObjectRef__Unowned&& moved) noexcept : _obj {moved._obj} {
			moved._obj = nullptr;
		}

		ObjectRef__Unowned(const __strong_ref& strong) : _obj {strong._obj} { UnownedRetain(_obj); }

		~ObjectRef__Unowned() {
			if (_obj)
				UnownedRelease(_obj);
		}

		ObjectRef__Unowned& operator=(const Object& ref) {
			if (&ref != _obj) {
				UnownedRelease(_obj);
				_obj = (Object*) &ref;
				UnownedRetain(_obj);
			}

			return *this;
		}

		ObjectRef__Unowned& operator=(const ObjectRef__Unowned& copy) {
			if (copy._obj != _obj) {
				UnownedRelease(_obj);
				_obj = copy._obj;
				UnownedRetain(_obj);
			}

			return *this;
		}

		ObjectRef__Unowned& operator=(const __strong_ref& strong) {
			if (strong._obj != _obj) {
				UnownedRelease(_obj);
				_obj = strong._obj;
				UnownedRetain(_obj);
			}

			return *this;
		}

		ObjectRef__Unowned& operator=(ObjectRef__Unowned&& moved) {
			if (moved._obj != _obj) {
				UnownedRelease(_obj);
				_obj = moved._obj;
			}
			moved._obj = nullptr;

			return *this;
		}

		FORCE_INLINE operator __strong_ref() const { return __ref(); }
	};

	template <class T>
	class OptionalStrongRef;
	template <class T>
	class OptionalUnownedRef;
	template <class T>
	class OptionalFunctionRef;
	template <class T>
	using Nullable = std::conditional_t<
	    std::is_base_of_v<ObjectRef, T>, OptionalStrongRef<T>,
	    std::conditional_t<
	        std::is_base_of_v<ObjectRef__Unowned, T>, OptionalUnownedRef<T>,
	        std::conditional_t<
	            std::is_base_of_v<ObjectRef__Weak, T>, T,
	            std::conditional_t<std::is_base_of_v<FuncBase, T>, OptionalFunctionRef<T>,
	                               std::conditional_t<IsNullable<T>, T, System::Optional<T>>>>>>;

	template <class T>
	class OptionalStrongRef {
		T ref;

	   public:
		static_assert(std::is_base_of_v<ObjectRef, T>);
		static constexpr bool __IS_ADV_NULLABLE = true;
		using __class                           = typename T::__class;
		using __self                            = T;
		using __strong_ref                      = OptionalStrongRef<T>;
		using __unowned_ref                     = OptionalUnownedRef<typename T::__unowned_ref>;
		using __weak_ref                        = typename T::__weak_ref;
		template <class U>
		friend class OptionalStrongRef;
		template <class U>
		friend class OptionalUnownedRef;

		FORCE_INLINE OptionalStrongRef() noexcept : ref {nullptr} {}
		// FORCE_INLINE OptionalStrongRef(const OptionalStrongRef& other) : ref(other.ref) {}
		template <class U>
		FORCE_INLINE OptionalStrongRef(const OptionalStrongRef<U>& other) : ref(other.ref) {}
		// FORCE_INLINE OptionalStrongRef(OptionalStrongRef&& other) noexcept :
		// ref(std::move(other.ref)) {}
		template <class U>
		requires std::is_rvalue_reference_v<OptionalStrongRef<U> &&> FORCE_INLINE
		OptionalStrongRef(OptionalStrongRef<U>&& other) noexcept
		    : ref(std::move(other.ref)) {}
		FORCE_INLINE OptionalStrongRef(typename T::__unowned_ref const& other) : ref(other) {}
		FORCE_INLINE OptionalStrongRef(typename T::__weak_ref const& other)
		    : OptionalStrongRef(other.pin()) {}
		FORCE_INLINE OptionalStrongRef(decltype(nullptr)) noexcept : ref {nullptr} {}
		FORCE_INLINE OptionalStrongRef(T::__class& obj) : ref(obj) {}
		FORCE_INLINE OptionalStrongRef(const T& other) : ref(other) {}
		FORCE_INLINE OptionalStrongRef(T&& other) : ref(std::move(other)) {}
		template <class U>
		requires(std::derived_from<T, InterfaceRef> &&
		         !IsNullable<std::decay_t<U>>) /*&& T::template
		                                          __ImplementsInterface<std::remove_cvref_t<U>>*/
		    OptionalStrongRef(U&& other)
		    : ref(std::forward<U>(other)) {}
		template <class U>
		requires(std::same_as<T, ObjectRef>) OptionalStrongRef(U&& other)
		    : ref(std::forward<U>(other)) {}

		template <class U>
		FORCE_INLINE OptionalStrongRef& operator=(const OptionalStrongRef<U>& other) {
			ref = other.ref;
			return *this;
		}
		template <class U>
		requires std::is_rvalue_reference_v<OptionalStrongRef<U> &&> FORCE_INLINE OptionalStrongRef&
		operator=(OptionalStrongRef<U>&& other) {
			ref = std::move(other.ref);
			return *this;
		}
		FORCE_INLINE OptionalStrongRef& operator=(typename T::__unowned_ref const& other) {
			ref = other;
			return *this;
		}
		FORCE_INLINE OptionalStrongRef& operator=(typename T::__weak_ref const& other) {
			return *this = other.pin();
		}
		FORCE_INLINE OptionalStrongRef& operator=(decltype(nullptr)) {
			ref = nullptr;
			return *this;
		}
		FORCE_INLINE OptionalStrongRef& operator=(T::__class& obj) {
			ref = obj;
			return *this;
		}
		FORCE_INLINE OptionalStrongRef& operator=(const T& other) {
			ref = other;
			return *this;
		}
		FORCE_INLINE OptionalStrongRef& operator=(T&& other) {
			ref = std::move(other);
			return *this;
		}

		template <class U>
		requires(std::derived_from<T, InterfaceRef> &&
		         !IsNullable<std::decay_t<U>>) /*&& T::template
		                                          __ImplementsInterface<std::remove_cvref_t<U>>*/
		    OptionalStrongRef&
		    operator=(U&& other) {
			ref = std::forward<U>(other);
			return *this;
		}

		template <class U>
		requires(std::same_as<T, ObjectRef>) OptionalStrongRef& operator=(U&& other) {
			ref = std::forward<U>(other);
			return *this;
		}

		FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }

		FORCE_INLINE operator typename T::__weak_ref() const {
			if (ref._obj == nullptr)
				return typename T::__weak_ref {nullptr};
			return ref;
		}

		FORCE_INLINE T& operator*() {
			if (ref._obj == nullptr)
				throw std::runtime_error("NullPointerException");
			return ref;
		}

		FORCE_INLINE const T& operator*() const {
			if (ref._obj == nullptr)
				throw std::runtime_error("NullPointerException");
			return ref;
		}

		template <class U>
		FORCE_INLINE bool operator==(const OptionalStrongRef<U>& other) const noexcept {
			return ref == other.ref;
		}
		FORCE_INLINE bool operator==(decltype(nullptr)) const noexcept {
			return ref._obj == nullptr;
		}
		FORCE_INLINE bool operator==(const T& other) const noexcept { return ref == other; }
		template <class U>
		FORCE_INLINE bool operator!=(const OptionalStrongRef<U>& other) const noexcept {
			return ref != other.ref;
		}
		FORCE_INLINE bool operator!=(decltype(nullptr)) const noexcept {
			return ref._obj != nullptr;
		}
		FORCE_INLINE bool operator!=(const T& other) const noexcept { return ref != other; }

		FORCE_INLINE explicit operator bool() const noexcept { return ref._obj != nullptr; }

		FORCE_INLINE bool isValid() const noexcept { return ref._obj != nullptr; }

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
		OptionalStrongRef& assignIfNull(F&& func) {
			using return_type = std::invoke_result_t<F>;
			static_assert(std::is_assignable_v<T, return_type>,
			              "Default value must be convertible to left side of the expression");
			if (!isValid())
				ref = std::invoke(std::forward<F>(func));
			return *this;
		}
	};

	template <class T>
	class OptionalUnownedRef {
		T ref;

	   public:
		static_assert(std::is_base_of_v<ObjectRef__Unowned, T>);
		static constexpr bool __IS_ADV_NULLABLE = true;
		using __class                           = typename T::__class;
		using __self                            = T::__strong_ref;
		using __strong_ref                      = OptionalStrongRef<typename T::__strong_ref>;
		using __unowned_ref                     = OptionalUnownedRef<T>;
		using __weak_ref                        = typename T::__weak_ref;
		template <class U>
		friend class OptionalStrongRef;
		template <class U>
		friend class OptionalUnownedRef;

		FORCE_INLINE OptionalUnownedRef() noexcept : ref {nullptr} {}
		template <class U>
		FORCE_INLINE OptionalUnownedRef(const OptionalUnownedRef<U>& other) : ref(other.ref) {}
		template <class U>
		requires std::is_rvalue_reference_v<OptionalUnownedRef<U> &&> FORCE_INLINE
		OptionalUnownedRef(OptionalUnownedRef<U>&& other) noexcept
		    : ref(std::move(other.ref)) {}
		template <class U>
		FORCE_INLINE OptionalUnownedRef(const OptionalStrongRef<U>& other) : ref(other.ref) {}
		FORCE_INLINE OptionalUnownedRef(const typename T::__strong_ref& other) : ref(other) {}
		FORCE_INLINE OptionalUnownedRef(decltype(nullptr)) noexcept : ref {nullptr} {}
		FORCE_INLINE OptionalUnownedRef(typename T::__class& obj) : ref(obj) {}
		FORCE_INLINE OptionalUnownedRef(const T& other) : ref(other) {}
		FORCE_INLINE OptionalUnownedRef(T&& other) : ref(std::move(other)) {}

		template <class U>
		FORCE_INLINE OptionalUnownedRef& operator=(const OptionalUnownedRef<U>& other) {
			ref = other.ref;
		}
		template <class U>
		requires std::is_rvalue_reference_v<OptionalUnownedRef<U> &&>
		    FORCE_INLINE OptionalUnownedRef& operator=(OptionalUnownedRef<U>&& other) {
			ref = std::move(other.ref);
		}
		template <class U>
		FORCE_INLINE OptionalUnownedRef& operator=(const OptionalStrongRef<U>& other) {
			ref = other.ref;
		}
		FORCE_INLINE OptionalUnownedRef& operator=(const typename T::__strong_ref& other) {
			ref = other;
		}
		FORCE_INLINE OptionalUnownedRef& operator=(decltype(nullptr)) { ref = nullptr; }
		FORCE_INLINE OptionalUnownedRef& operator=(typename T::__class& obj) { ref = obj; }
		FORCE_INLINE OptionalUnownedRef& operator=(const T& other) { ref = other; }
		FORCE_INLINE OptionalUnownedRef& operator=(T&& other) { ref = std::move(other); }

		template <class U>
		FORCE_INLINE operator OptionalStrongRef<U>() const {
			return ref;
		}

		FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }

		FORCE_INLINE T& operator*() {
			if (ref._obj == nullptr)
				throw std::runtime_error("NullPointerException");
			return ref;
		}

		FORCE_INLINE const T& operator*() const {
			if (ref._obj == nullptr)
				throw std::runtime_error("NullPointerException");
			return ref;
		}

		template <class U>
		FORCE_INLINE bool operator==(const OptionalUnownedRef<U>& other) const noexcept {
			return ref == other.ref;
		}
		FORCE_INLINE bool operator==(decltype(nullptr)) const noexcept {
			return ref._obj == nullptr;
		}
		FORCE_INLINE bool operator==(const T& other) const noexcept { return ref == other; }
		template <class U>
		FORCE_INLINE bool operator!=(const OptionalUnownedRef<U>& other) const noexcept {
			return ref != other.ref;
		}
		FORCE_INLINE bool operator!=(decltype(nullptr)) const noexcept {
			return ref._obj != nullptr;
		}
		FORCE_INLINE bool operator!=(const T& other) const noexcept { return ref != other; }

		FORCE_INLINE explicit operator bool() const noexcept { return ref._obj != nullptr; }

		FORCE_INLINE bool isValid() const noexcept { return ref._obj != nullptr; }

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
		OptionalUnownedRef& assignIfNull(F&& func) {
			using return_type = std::invoke_result_t<F>;
			static_assert(std::is_assignable_v<T, return_type>,
			              "Default value must be convertible to left side of the expression");
			if (!isValid())
				ref = std::invoke(std::forward<F>(func));
			return *this;
		}
	};

	class ObjectRef__Weak {
	   protected:
		ObjectSideTable* _obj;

		ObjectRef__Weak(ObjectSideTable* table) : _obj {table} {}
		static ObjectSideTable* formWeakRef(Object* obj) { return obj->_refCounts.formWeakRef(); }

	   public:
		using __class                           = Object;
		using __strong_ref                      = ObjectRef;
		using __unowned_ref                     = ObjectRef__Unowned;
		using __weak_ref                        = ObjectRef__Weak;
		static constexpr bool __IS_ADV_NULLABLE = true;

		FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }

		ObjectRef__Weak() : _obj {nullptr} {}

		ObjectRef__Weak(Object& ref) : _obj {ref._refCounts.formWeakRef()} {}

		ObjectRef__Weak(const ObjectRef__Weak& copy) : _obj {copy._obj} { _obj->incrementWeak(); }

		ObjectRef__Weak(ObjectRef__Weak&& moved) noexcept : _obj {moved._obj} {
			moved._obj = nullptr;
		}

		ObjectRef__Weak(const __strong_ref& strong)
		    : _obj {strong._obj->_refCounts.formWeakRef()} {}

		ObjectRef__Weak(decltype(nullptr)) : _obj {nullptr} {}

		~ObjectRef__Weak() {
			if (_obj)
				_obj->decrementWeak();
		}

		ObjectRef__Weak& operator=(Object& ref) {
			if (&ref != _obj->unsafeGetObject()) {
				_obj->decrementWeak();
				_obj = ref._refCounts.formWeakRef();
			}

			return *this;
		}

		ObjectRef__Weak& operator=(const ObjectRef__Weak& copy) {
			if (copy._obj != _obj) {
				_obj->decrementWeak();
				_obj = copy._obj;
				_obj->incrementWeak();
			}

			return *this;
		}

		ObjectRef__Weak& operator=(const __strong_ref& strong) {
			if (strong._obj != _obj->unsafeGetObject()) {
				_obj->decrementWeak();
				_obj = strong._obj->_refCounts.formWeakRef();
			}

			return *this;
		}

		ObjectRef__Weak& operator=(ObjectRef__Weak&& moved) {
			if (moved._obj != _obj) {
				_obj->decrementWeak();
				_obj = moved._obj;
			}
			moved._obj = nullptr;

			return *this;
		}

		FORCE_INLINE OptionalStrongRef<ObjectRef> pin() const {
			if (_obj) {
				auto ptr = _obj->tryRetain();
				if (ptr) {
					return __strong_ref(ptr, CppAdvance::ObjectRef::InitTag());
				}
				return nullptr;
			}
			return nullptr;
		}

		FORCE_INLINE __strong_ref operator*() const { return *pin(); }

		ObjectRef__Weak& operator=(decltype(nullptr)) {
			if (_obj) {
				_obj->decrementWeak();
			}
			_obj = nullptr;
			return *this;
		}

		FORCE_INLINE bool operator==(const ObjectRef__Weak& other) const noexcept {
			return _obj == other._obj;
		}

		FORCE_INLINE bool operator!=(const ObjectRef__Weak& other) const noexcept {
			return _obj != other._obj;
		}

		FORCE_INLINE bool operator==(decltype(nullptr)) const noexcept { return _obj == nullptr; }

		FORCE_INLINE bool operator!=(decltype(nullptr)) const noexcept { return _obj != nullptr; }

		FORCE_INLINE explicit operator bool() const noexcept { return isValid(); }

		FORCE_INLINE bool isValid() const {
			if (_obj) {
				return !_obj->isDeiniting();
			}
			return false;
		}

		template <class F>
		auto andThen(F&& func) const {
			using return_type = std::invoke_result_t<F, const __strong_ref&>;
			auto strong       = pin();
			if constexpr (std::is_void_v<return_type>) {
				if (strong.isValid())
					std::invoke(std::forward<F>(func), *strong);
			} else {
				using wrapped_type = Nullable<return_type>;
				if (!strong.isValid())
					return wrapped_type(nullptr);
				return wrapped_type(std::invoke(std::forward<F>(func), *strong));
			}
		}

		template <class F>
		__strong_ref valueOr(F&& func) const {
			using return_type = std::invoke_result_t<F>;
			static_assert(std::is_convertible_v<return_type, __strong_ref>,
			              "Default value must be convertible to left side of the expression");
			auto strong = pin();
			if (strong.isValid())
				return *strong;
			return std::invoke(std::forward<F>(func));
		}

		template <class F>
		ObjectRef__Weak& assignIfNull(F&& func) {
			using return_type = std::invoke_result_t<F>;
			static_assert(std::is_assignable_v<__weak_ref, return_type>,
			              "Default value must be convertible to left side of the expression");
			if (!isValid())
				*this = std::invoke(std::forward<F>(func));
			return *this;
		}
	};

	class InterfaceRef : public ObjectRef {
	   public:
		InterfaceRef(Object* obj) : ObjectRef(obj) {}

		FORCE_INLINE Str ToString() const { return _obj->ToString(); }

		FORCE_INLINE usize HashCode() const { return _obj->HashCode(); }

		FORCE_INLINE usize GetStrongReferenceCount() const {
			return _obj->GetStrongReferenceCount();
		}

		FORCE_INLINE usize GetUnownedReferenceCount() const {
			return _obj->GetUnownedReferenceCount();
		}

		FORCE_INLINE usize GetWeakReferenceCount() const { return _obj->GetWeakReferenceCount(); }

		FORCE_INLINE bool IsStackAllocated() const { return _obj->IsStackAllocated(); }

		friend Object* GetObjectReferenceFromInterface(const InterfaceRef* iface);
		friend void ClearObjectReference(ObjectRef* iface);
	};

	class InterfaceRef__Unowned : public ObjectRef__Unowned {
	   public:
		InterfaceRef__Unowned(Object* obj) : ObjectRef__Unowned(obj) {}

		FORCE_INLINE Str ToString() const {
			UnownedCheck(_obj);
			return _obj->ToString();
		}

		FORCE_INLINE usize HashCode() const {
			UnownedCheck(_obj);
			return _obj->HashCode();
		}
	};

	class EnumClass : public Object {};

	class EnumClassRef : public ObjectRef {
	   public:
		EnumClassRef(Object* obj) : ObjectRef(obj) {}
		EnumClassRef(const Object& obj) : ObjectRef(obj) {}
	};

	inline Object* GetObjectReference(const ObjectRef* iface) { return (Object*) (iface->_obj); }

	inline Object* GetObjectReference(const ObjectRef__Unowned* iface) {
		return (Object*) (iface->_obj);
	}

	inline Object* GetObjectReferenceFromInterface(const InterfaceRef* iface) {
		return (Object*) (iface->_obj);
	}

	inline void ClearObjectReference(ObjectRef* iface) { iface->_obj = nullptr; }

	template <class T>
	decltype(auto) GetVTableFromInterface(T* iface) {
		static_assert(std::derived_from<T, InterfaceRef> ||
		              std::derived_from<T, InterfaceRef__Unowned>);
		return iface->_vtable;
	}

	template <class Iface, class Type>
	inline constexpr bool ImplementsInterface() noexcept {
		if constexpr (IsInterface<Iface>) {
			return Iface::template __ImplementsInterface<Type>;
		}
		return true;
	}

	class ValueType : public Object {};

	template <class Parent>
	using ClassParent = std::conditional_t<IsInterface<Parent>, Object, typename Parent::__class>;

	template <class Parent>
	using ClassRefParent = std::conditional_t<IsInterface<Parent>, ObjectRef, Parent>;

	template <class Parent>
	using ClassRefParentUnowned =
	    std::conditional_t<IsInterface<Parent>, ObjectRef__Unowned, typename Parent::__unowned_ref>;

	template <class Parent>
	using ClassRefParentWeak =
	    std::conditional_t<IsInterface<Parent>, ObjectRef__Weak, typename Parent::__weak_ref>;

	template <class T>
	class __Class_Basic : public ValueType {
		T __value;

	   public:
		using __underlying = T;
		__Class_Basic(const __underlying& value) noexcept(
		    std::is_nothrow_copy_constructible_v<__underlying>)
		    : __value {value} {}
		operator __underlying() const noexcept { return __value; }
	};

	template <class T>
	inline ObjectRef::ObjectRef(T value) requires(IsPrimitiveType<std::remove_cv_t<T>>) {
		using boxed_type = __Class_Basic<std::remove_cv_t<T>>;
		void* ptr        = ::operator new(sizeof(boxed_type));
		_obj             = new (ptr) boxed_type(value);
	}

	template <class T>
	inline ObjectRef& ObjectRef::operator=(T value) requires(IsPrimitiveType<std::remove_cv_t<T>>) {
		using boxed_type = __Class_Basic<std::remove_cv_t<T>>;
		if (_obj)
			Release(_obj);
		void* ptr = ::operator new(sizeof(boxed_type));
		_obj      = new (ptr) boxed_type(value);

		return *this;
	}

	template <class T, class U>
	bool IdentityEquals(T lhs, U rhs) noexcept {
		using leftType              = std::decay_t<T>;
		using rightType             = std::decay_t<U>;
		constexpr bool isLeftObject = std::derived_from<leftType, ObjectRef> ||
		                              std::derived_from<leftType, ObjectRef__Unowned>;
		constexpr bool isRightObject = std::derived_from<rightType, ObjectRef> ||
		                               std::derived_from<rightType, ObjectRef__Unowned>;
		auto getObjectReference = []<class Obj>(Obj&& obj) {
			using T = std::decay_t<Obj>;

			if constexpr (std::derived_from<T, ObjectRef__Weak>) {
				auto strong = *obj;
				return GetObjectReference(&strong);
			} else if constexpr (IsNullable<Obj>) {
				return GetObjectReference(&*(obj));
			} else if constexpr (std::derived_from<T, ObjectRef__Unowned>) {
				return GetObjectReference((ObjectRef__Unowned*) &obj);
			} else {
				return GetObjectReference((ObjectRef*) &obj);
			}
		};

		if constexpr (isLeftObject && isRightObject) {
			return GetObjectReference(&lhs) == GetObjectReference(&rhs);
		} else if constexpr (IsNullable<leftType> && IsNullable<rightType>) {
			return lhs.isValid() == rhs.isValid() &&
			       (!lhs.isValid() || getObjectReference(lhs) == getObjectReference(rhs));
		} else if constexpr (isLeftObject && IsNullable<rightType>) {
			return rhs.isValid() && GetObjectReference(&lhs) == getObjectReference(rhs);
		} else if constexpr (IsNullable<leftType> && isRightObject) {
			return lhs.isValid() && getObjectReference(lhs) == GetObjectReference(&rhs);
		} else if constexpr (requires { std::declval<leftType> == std::declval<rightType>; }) {
			return lhs == rhs;
		}

		return false;
	}

	template <bool Force, class U, class T>
	constexpr std::conditional_t<Force, U, Nullable<U>> Cast(T&& value) {
		using inputType                      = std::decay_t<T>;
		constexpr bool isOutputReferenceType = std::derived_from<U, ObjectRef>;
		constexpr bool isOutputInterfaceType = std::derived_from<U, InterfaceRef>;
		constexpr bool isOutputOptionalType  = IsNullable<U>;
		constexpr bool isOutputSystemObject  = std::same_as<U, ObjectRef>;
		constexpr bool isInputReferenceType  = std::derived_from<inputType, ObjectRef> ||
		                                      std::derived_from<inputType, ObjectRef__Unowned>;
		constexpr bool isInputInterfaceType = std::derived_from<inputType, InterfaceRef> ||
		                                      std::derived_from<inputType, InterfaceRef__Unowned>;
		constexpr bool isInputOptionalType = IsNullable<inputType>;
		constexpr bool isInputSystemObject =
		    std::same_as<inputType, ObjectRef> || std::same_as<inputType, ObjectRef__Unowned>;
		constexpr bool isInputUnion = std::derived_from<inputType, Union>;

		if constexpr (std::same_as<inputType, U> || std::derived_from<inputType, U>) {
			return std::forward<T>(value);
		} else if constexpr (isInputOptionalType) {
			if constexpr (isOutputOptionalType || !Force) {
				if (!value.isValid()) {
					return nullptr;
				}
			}

			return Cast<Force, U, decltype(*value)>(std::forward<decltype(*value)>(*value));
		} else if constexpr (isInputUnion) {
			auto result = value.template As<U>();
			if (result)
				return *result;
		} else if constexpr (isOutputOptionalType) {
			return Cast<false, std::decay_t<decltype(*(std::declval<U>()))>, T>(
			    std::forward<T>(value));
		} else if constexpr (isOutputInterfaceType) {
			if constexpr (isInputInterfaceType) {
				if constexpr (std::derived_from<typename inputType::__vtable,
				                                typename U::__vtable>) {
					return std::forward<T>(value);
				} else /*if constexpr (std::derived_from<typename U::__vtable, typename
				          inputType::__vtable>)*/
				{
					// TODO
					/*auto obj = GetObjectReferenceFromInterface(&value);
					if (auto vtable = obj->GetType()->ImplementsInterface(U::__static_getType()))
					{
					    return U(obj, vtable);
					}*/
				}
			} else if constexpr (ImplementsInterface<U, inputType>()) {
				return static_cast<U>(std::forward<T>(value));
			} else if constexpr (isInputReferenceType) {
				// TODO: Use reflection
				/*auto obj = GetObjectReference(&value);
				if (auto vtable = obj->GetType()->ImplementsInterface(U::__static_getType()))
				{
				    return U(obj, vtable);
				}*/
			} else {
				static_assert(false, "Invalid cast to interface");
				static_cast<U>(std::forward<T>(value));
				U {std::forward<T>(value)};
			}
		} else if constexpr (isOutputReferenceType) {
			if constexpr (isInputInterfaceType) {
				auto obj = GetObjectReferenceFromInterface(&value);
				if constexpr (isOutputSystemObject) {
					return *obj;
				} else {
					/*if (U::__static_getType().IsBaseOf(obj->GetType()))
					{
					    return *static_cast<typename U::__class*>(obj);
					}*/
				}
			} else if constexpr (isInputReferenceType &&
			                     std::derived_from<U, typename inputType::__strong_ref>) {
				// TODO: Use reflection
				auto tmp = dynamic_cast<typename U::__class*>(
				    static_cast<typename inputType::__class*>(GetObjectReference(&value)));
				if (tmp)
					return *tmp;
				/*if (U::__static_getType().IsBaseOf(obj->GetType()))
				{
				    return *static_cast<typename U::__class*>(obj);
				}*/
			} else if constexpr (std::convertible_to<inputType, U>) {
				return static_cast<U>(std::forward<T>(value));
			} else if constexpr (requires { U {std::declval<inputType>()}; }) {
				return U {std::forward<T>(value)};
			} else {
				static_assert(false, "Invalid cast to reference type");
				static_cast<U>(std::forward<T>(value));
				U {std::forward<T>(value)};
			}
		} else if constexpr (std::derived_from<inputType, InterfaceRef> ||
		                     std::derived_from<inputType, InterfaceRef__Unowned>) {
			auto obj = GetObjectReferenceFromInterface(&value);
			/*if (obj->GetType() == U::__static_getType())
			{
			    return *static_cast<typename U::__class*>(obj);
			}*/
		} else if constexpr (std::same_as<inputType, ObjectRef> ||
		                     std::same_as<inputType, ObjectRef__Unowned>) {
			auto obj = GetObjectReference(&value);
			/*if (obj->GetType() == U::__static_getType())
			{
			    return *static_cast<typename U::__class*>(obj);
			}*/
		} else if constexpr (std::convertible_to<inputType, U>) {
			return static_cast<U>(std::forward<T>(value));
		} else if constexpr (requires { U {std::declval<inputType>()}; }) {
			return U {std::forward<T>(value)};
		} else {
			static_assert(false, "Invalid cast to value type");
			static_cast<U>(std::forward<T>(value));
			U {std::forward<T>(value)};
		}
		// TODO: Add ValueType unboxing

		if constexpr (!Force || isOutputOptionalType) {
			return nullptr;
		} else {
			throw std::runtime_error("InvalidCastException");
		}
	}

	template <template <typename...> class Template, typename SourceType>
	constexpr auto Is(SourceType&&) {
		return is_instance_of_v<SourceType, Template>;
	}

	template <class U, class T>
	constexpr bool Is(T&& value) noexcept {
		using inputType                      = std::decay_t<T>;
		constexpr bool isOutputReferenceType = std::derived_from<U, ObjectRef>;
		constexpr bool isOutputInterfaceType = std::derived_from<U, InterfaceRef>;
		constexpr bool isOutputOptionalType  = IsNullable<U>;
		constexpr bool isOutputSystemObject  = std::same_as<U, ObjectRef>;
		constexpr bool isInputReferenceType  = std::derived_from<inputType, ObjectRef> ||
		                                      std::derived_from<inputType, ObjectRef__Unowned>;
		constexpr bool isInputInterfaceType = std::derived_from<inputType, InterfaceRef> ||
		                                      std::derived_from<inputType, InterfaceRef__Unowned>;
		constexpr bool isInputOptionalType = IsNullable<inputType>;
		constexpr bool isInputSystemObject =
		    std::same_as<inputType, ObjectRef> || std::same_as<inputType, ObjectRef__Unowned>;
		constexpr bool isInputUnion = std::derived_from<inputType, Union>;

		if constexpr (std::same_as<inputType, U> || std::derived_from<inputType, U>) {
			return true;
		} else if constexpr (isInputOptionalType) {
			if (!value.isValid()) {
				return std::same_as<inputType, decltype(nullptr)>;
			}

			return Is<U, decltype(*value)>(std::forward<decltype(*value)>(*value));
		} else if constexpr (isInputUnion) {
			return value.template Is<U>();
		} else if constexpr (isOutputOptionalType) {
			return Is<std::decay_t<decltype(*(std::declval<U>()))>, T>(std::forward<T>(value));
		} else if constexpr (isOutputInterfaceType) {
			if constexpr (isInputInterfaceType) {
				if constexpr (std::derived_from<typename inputType::__vtable,
				                                typename U::__vtable>) {
					return true;
				} else /*if constexpr (std::derived_from<typename U::__vtable, typename
				          inputType::__vtable>)*/
				{
					// TODO
					/*auto obj = GetObjectReferenceFromInterface(&value);
					return obj->GetType()->ImplementsInterface(U::__static_getType());
					*/
				}
			} else if constexpr (ImplementsInterface<U, inputType>()) {
				return true;
			} else if constexpr (isInputReferenceType) {
				// TODO: Use reflection
				/*auto obj = GetObjectReference(&value);
				return obj->GetType()->ImplementsInterface(U::__static_getType());*/
			}
		} else if constexpr (isOutputReferenceType) {
			if constexpr (isInputInterfaceType) {
				auto obj = GetObjectReferenceFromInterface(&value);
				if constexpr (isOutputSystemObject) {
					return true;
				} else {
					/*return U::__static_getType().IsBaseOf(obj->GetType());*/
				}
			} else if constexpr (isInputReferenceType &&
			                     std::derived_from<U, typename inputType::__strong_ref>) {
				// TODO: Use reflection
				return dynamic_cast<typename U::__class*>(static_cast<typename inputType::__class*>(
				           GetObjectReference(&value))) != nullptr;
				/*return U::__static_getType().IsBaseOf(obj->GetType());*/
			}
		} else if constexpr (std::derived_from<inputType, InterfaceRef> ||
		                     std::derived_from<inputType, InterfaceRef__Unowned>) {
			auto obj = GetObjectReferenceFromInterface(&value);
			/*return obj->GetType() == U::__static_getType();*/
		} else if constexpr (std::same_as<inputType, ObjectRef> ||
		                     std::same_as<inputType, ObjectRef__Unowned>) {
			auto obj = GetObjectReference(&value);
			/*return obj->GetType() == U::__static_getType();*/
		}
		// TODO: Add ValueType unboxing

		return false;
	}

	template <class T, class U>
	constexpr bool Is(T&& lhs, U&& rhs) {
		if constexpr (requires { std::declval<T>() == std::declval<U>(); }) {
			return lhs == rhs;
		} else {
			if (auto casted = Cast<false, std::decay_t<U>>(std::forward<T>(lhs))) {
				return *casted == rhs;
			}
		}

		return false;
	}

	template <class T, class U>
	constexpr bool IsGreater(T&& lhs, U&& rhs) {
		if constexpr (requires { std::declval<T>() > std::declval<U>(); }) {
			return lhs > rhs;
		} else {
			if (auto casted = Cast<false, std::decay_t<U>>(std::forward<T>(lhs))) {
				return *casted > rhs;
			}
		}

		return false;
	}

	template <class T, class U>
	constexpr bool IsGreaterOrEqual(T&& lhs, U&& rhs) {
		if constexpr (requires { std::declval<T>() >= std::declval<U>(); }) {
			return lhs >= rhs;
		} else {
			if (auto casted = Cast<false, std::decay_t<U>>(std::forward<T>(lhs))) {
				return *casted >= rhs;
			}
		}

		return false;
	}

	template <class T, class U>
	constexpr bool IsLess(T&& lhs, U&& rhs) {
		if constexpr (requires { std::declval<T>() < std::declval<U>(); }) {
			return lhs < rhs;
		} else {
			if (auto casted = Cast<false, std::decay_t<U>>(std::forward<T>(lhs))) {
				return *casted < rhs;
			}
		}

		return false;
	}

	template <class T, class U>
	constexpr bool IsLessOrEqual(T&& lhs, U&& rhs) {
		if constexpr (requires { std::declval<T>() <= std::declval<U>(); }) {
			return lhs <= rhs;
		} else {
			if (auto casted = Cast<false, std::decay_t<U>>(std::forward<T>(lhs))) {
				return *casted <= rhs;
			}
		}

		return false;
	}

	template <class T, class U>
	constexpr bool TypeIs() noexcept {
		if constexpr (std::is_base_of_v<InterfaceRef, U>) {
			if constexpr (std::is_base_of_v<InterfaceRef, std::decay_t<T>>) {
				return std::derived_from<typename std::decay_t<T>::__vtable, typename U::__vtable>;
			} else {
				return ImplementsInterface<U, std::decay_t<T>>();
			}
		} else {
			return std::derived_from<std::decay_t<T>, U>;
		}
	}

	template <class T>
	constexpr int GetVariantsCount() noexcept {
		if constexpr (requires { T::__variants; }) {
			return T::__variants;
		} else if constexpr (requires { T::__self::__variants; }) {
			return T::__self::__variants;
		} else if constexpr (requires { T::__class::__variants; }) {
			return T::__class::__variants;
		} else {
			return 0;
		}
	}

	template <class T>
	struct ConstructorProxy {
		using ConstructingType =
		    std::conditional_t<std::is_base_of_v<ObjectRef, T>, typename T::__class, T>;

		void* memory;
		ConstructorProxy(void* _memory) : memory {_memory} {}
	};

	template <class T, class... Args>
	T New(Args&&... args) {
		static_assert(!IsInterface<T>, "Cannot to create instance of the interface type");
		if constexpr (std::is_base_of_v<ObjectRef, T>) {
			static_assert(!std::is_abstract_v<T::__class>,
			              "Cannot to create instance of the abstract class");
			void* ptr = ::operator new(sizeof(T::__class));
			typename T::__class* obj;
			if constexpr (std::is_constructible_v<T::__class, Args...>) {
				obj = new (ptr) typename T::__class(std::forward<Args>(args)...);
			} else if constexpr (requires {
				                     __construct_(std::declval<ConstructorProxy<T>>(),
				                                  std::declval<Args>()...);
			                     }) {
				obj = __construct_(ConstructorProxy<T> {ptr}, std::forward<Args>(args)...);
			} else {
				static_assert(false, "Constructor does not exists with this arguments");
			}

			return T {obj, ObjectRef::InitTag()};
		} else {
			if constexpr (std::is_constructible_v<T, Args...>) {
				return T {std::forward<Args>(args)...};
			} else if constexpr (requires {
				                     __construct_(std::declval<ConstructorProxy<T>>(),
				                                  std::declval<Args>()...);
			                     }) {
				alignas(T) unsigned char memory[sizeof(T)];
				return *__construct_(ConstructorProxy<T>(memory), std::forward<Args>(args)...);
			} else {
				static_assert(false, "Constructor does not exists with this arguments");
			}
		}
	}

	struct MemorySpace {
		u32 reservedSize;
	};

	template <unsigned Memory, class T, class... Args>
	T NewWithExtraMemory(Args&&... args) {
		static_assert(Memory >= sizeof(typename T::__class),
		              "Too little memory for initialization of this type");
		static_assert(Memory % 8 == 0, "Memory size must be multiple of 8");
		static_assert(!IsInterface<T>, "Cannot to create instance of the interface type");
		if constexpr (std::is_base_of_v<ObjectRef, T>) {
			static_assert(!std::is_abstract_v<T::__class>,
			              "Cannot to create instance of the abstract class");
			void* ptr = ::operator new(Memory);
			typename T::__class* obj;
			if constexpr (std::is_constructible_v<T::__class, MemorySpace, Args...>) {
				obj = new (ptr) typename T::__class(
				    MemorySpace {Memory - static_cast<unsigned>(sizeof(typename T::__class))},
				    std::forward<Args>(args)...);
			} else if constexpr (requires {
				                     __construct_(std::declval<ConstructorProxy<T>>(), MemorySpace,
				                                  std::declval<Args>()...);
			                     }) {
				obj = __construct_(
				    ConstructorProxy<T> {ptr},
				    MemorySpace {Memory - static_cast<unsigned>(sizeof(typename T::__class))},
				    std::forward<Args>(args)...);
			} else {
				static_assert(false, "Constructor does not exists with this arguments");
			}
			return T {obj, ObjectRef::InitTag()};
		} else {
			static_assert(false,
			              "Operator new with extra memory setter cannot be used for value types");
			return T {std::forward<Args>(args)...};
		}
	}

	template <class T>
	struct Stackalloc {
		static_assert(!IsInterface<T>, "Cannot to create instance of the interface type");
		static_assert(!std::is_abstract_v<T::__class>,
		              "Cannot to create instance of the abstract class");
		using __type  = T;
		using __class = typename T::__class;
		alignas(__class) unsigned char obj[sizeof(__class)];

		template <class... Args>
		requires std::is_constructible_v<__class, Args...> Stackalloc(Args&&... args) {
			new (obj) __class(std::forward<Args>(args)...);
		}

		template <class... Args>
		Stackalloc(Args&&... args) {
			static_assert(
			    requires {
				    __construct_(std::declval<ConstructorProxy<T>>(), std::declval<Args>()...);
			    },
			    "Constructor does not exists with this arguments");
			__construct_(ConstructorProxy<T> {obj}, std::forward<Args>(args)...);
		}

		~Stackalloc() {
			auto ptr = reinterpret_cast<__class*>(obj);
			ptr->~__class();
		}

		template <class U>
		operator U() const noexcept {
			return T {(__class*) obj, ObjectRef::InitTag()};
		}
	};

	template <class T, unsigned Memory>
	struct StackallocWithExtraMemory {
		static_assert(!IsInterface<T>, "Cannot to create instance of the interface type");
		static_assert(!std::is_abstract_v<T::__class>,
		              "Cannot to create instance of the abstract class");
		static_assert(Memory >= sizeof(typename T::__class),
		              "Too little memory for initialization of this type");
		static_assert(Memory % 8 == 0, "Memory size must be multiple of 8");

		using __type  = T;
		using __class = typename T::__class;

		alignas(__class) unsigned char obj[sizeof(__class)];
		alignas(typename T::ElementType) unsigned char extraMemory[Memory - sizeof(__class)];

		template <class... Args>
		requires std::is_constructible_v<__class, MemorySpace, Args...> StackallocWithExtraMemory(
		    Args&&... args) {
			new (obj) __class(MemorySpace {Memory - static_cast<unsigned>(sizeof(__class))},
			                  std::forward<Args>(args)...);
		}

		template <class... Args>
		StackallocWithExtraMemory(Args&&... args) {
			static_assert(
			    requires {
				    __construct_(std::declval<ConstructorProxy<T>>(), std::declval<MemorySpace>(),
				                 std::declval<Args>()...);
			    },
			    "Constructor does not exists with this arguments");
			__construct_(ConstructorProxy<T> {obj},
			             MemorySpace {Memory - static_cast<unsigned>(sizeof(__class))},
			             std::forward<Args>(args)...);
		}

		~StackallocWithExtraMemory() {
			auto ptr = reinterpret_cast<__class*>(obj);
			ptr->~__class();
		}

		template <class U>
		operator U() const noexcept {
			return T {(__class*) obj, ObjectRef::InitTag()};
		}
	};

	template <class LeftOperand, class RightLambda>
	FORCE_INLINE std::remove_cvref_t<LeftOperand> ElvisOperator(LeftOperand&& lhs,
	                                                            RightLambda&& rhs) {
		using X = std::remove_cvref_t<LeftOperand>;
		using U = std::invoke_result_t<RightLambda>;
		static_assert(std::is_convertible_v<U, X>,
		              "Default value must be convertible to left side of the expression");
		if (lhs)
			return std::forward<LeftOperand>(lhs);
		return std::invoke(std::forward<RightLambda>(rhs));
	}

	struct UncheckedTag {};
}  // namespace CppAdvance