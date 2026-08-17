#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "IComparable.h"
#include "IEquatable.h"

namespace System {
namespace __Unsafe {} namespace __Optional$Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
template<class T> class Optional;
template<class T> class OptionalRef;
//###############################################################################
//# Type definitions
//###############################################################################
template<class T> class $Class_Optional;
	#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> struct Optional final : public Builtin::Struct {
		public: using $self = Optional<T>;
		public: using $class = $Class_Optional<T>;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: using ElementType = typename Builtin::template NullableElementType<T>;
		#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		private: T p_Value; ADV_CHECK_REF_STRUCT("T", T);
		#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		private: inline constexpr auto setValue(const T& value) -> $self&;
		#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: inline constexpr auto getValue() const  -> T;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		ADV_PROPERTY_GETTER_SETTER(public, Value, public, getValue, private, setValue, T);
		#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		private: bool p_HasValue = Builtin::Boolean(false); ADV_CHECK_REF_STRUCT("bool", bool);
		#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		private: inline auto setHasValue(const bool& value) -> $self&;
		#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: inline auto getHasValue() const  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		ADV_PROPERTY_GETTER_SETTER(public, HasValue, public, getHasValue, private, setHasValue, bool);
		#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: inline constexpr Optional()  = default;
		#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: template<class U> requires(std::convertible_to<U, T>) inline constexpr  Optional(U value) ;
		#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: inline constexpr  Optional(decltype(nullptr) __var_32_25) ;
		#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: inline constexpr auto IsValid() const noexcept -> const bool;
		#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: inline constexpr auto operator*() const  -> const T;
		#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: inline constexpr explicit operator bool() const noexcept;
		#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: inline constexpr auto Flatten() const  -> const Builtin::Nullable<ElementType>;
		#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: inline constexpr auto IsValidFlatten() const  -> const bool;
		#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: template<class F> inline auto AndThen(F&& func) const  -> decltype(auto);
		#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: template<class F> inline auto ValueOr(F&& func) const  -> const std::remove_cvref_t<T>;
		#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: template<class F> inline auto AssignIfNull(F&& func)  LIFETIMEBOUND -> $self&;
		#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: inline constexpr auto operator==($self rhs) const  -> const bool;
		#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: inline constexpr auto operator==(decltype(nullptr) __var_107_24) const  -> const bool;
		#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: inline constexpr auto operator<=>($self rhs) const  -> const Builtin::i32;
		#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: static constexpr auto __IS_ADV_NULLABLE = Builtin::Boolean(true);
		#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		static_assert(Builtin::IsStructType<T> || std::is_base_of_v<Builtin::Enum, T> || std::is_base_of_v<Builtin::Union, T> || Builtin::TypeIs<T, typename Builtin::OptionalStrongRef>() || Builtin::TypeIs<T, typename Builtin::OptionalUnownedRef>() || Builtin::TypeIs<T, typename Builtin::WeakObjectRef>() || Builtin::TypeIs<T, typename Builtin::OptionalFunctionRef>(), "T must be a struct, an enum, an union or optional reference type");
		template <size_t I, class T> friend auto& get(Optional<T>&);
		template <size_t I, class T> friend const auto& get(const Optional<T>&);
		
	};
	
	#line 123 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> struct [[clang::annotate("ref_struct")]] OptionalRef final : public Builtin::RefStruct {
		public: using $self = OptionalRef<T>;
		public: using $class = $self;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: using ElementType = typename Builtin::template NullableElementType<T>;
		#line 129 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		private: T p_Value;
		#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		private: inline constexpr auto setValue(const T& value) -> $self&;
		#line 130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: inline constexpr auto getValue() const  -> T;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		ADV_PROPERTY_GETTER_SETTER(public, Value, public, getValue, private, setValue, T);
		#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		private: bool p_HasValue = Builtin::Boolean(false);
		#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		private: inline auto setHasValue(const bool& value) -> $self&;
		#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: inline auto getHasValue() const  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		ADV_PROPERTY_GETTER_SETTER(public, HasValue, public, getHasValue, private, setHasValue, bool);
		#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: inline constexpr OptionalRef()  = default;
		#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: template<class U> requires(std::convertible_to<U, T>) inline constexpr  OptionalRef(U value) ;
		#line 146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: inline constexpr  OptionalRef(decltype(nullptr) __var_146_25) ;
		#line 150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: inline constexpr auto IsValid() const noexcept -> const bool;
		#line 152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: inline constexpr auto operator*() const  -> const T;
		#line 153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: inline constexpr explicit operator bool() const noexcept;
		#line 155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: inline constexpr auto Flatten() const  -> const Builtin::Nullable<ElementType>;
		#line 165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: inline constexpr auto IsValidFlatten() const  -> const bool;
		#line 178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: template<class F> inline auto AndThen(F&& func) const  -> decltype(auto);
		#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: template<class F> inline auto ValueOr(F&& func) const  -> const std::remove_cvref_t<T>;
		#line 203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: template<class F> inline auto AssignIfNull(F&& func) const  LIFETIMEBOUND -> $self&;
		#line 212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: inline constexpr auto operator==($self rhs) const  -> const bool;
		#line 221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: inline constexpr auto operator==(decltype(nullptr) __var_221_24) const  -> const bool;
		#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: inline constexpr auto operator<=>($self rhs) const  -> const Builtin::i32;
		#line 126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: static constexpr auto __IS_ADV_NULLABLE = Builtin::Boolean(true);
		#line 125 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		static_assert(std::is_base_of_v<Builtin::RefStruct, T>, "T must be a ref struct");
		
	};
	
	
	
	#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> class $Class_Optional final : public Builtin::ValueType
	{
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: using $underlying = Optional<T>; using $self = $underlying;
		$self __value;
		$Class_Optional(const $underlying& value) noexcept(std::is_nothrow_copy_constructible_v<$underlying>) : __value{value} {}
		operator $underlying() const noexcept { return __value; }
		#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: using ElementType = typename Builtin::template NullableElementType<T>;
		auto getValue() const -> T { return __value.getValue(); }
		auto getHasValue() const -> bool { return __value.getHasValue(); }
		auto IsValid() const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.IsValid()); }
		auto operator*() const  -> T const { ADV_EXPRESSION_BODY(__value.operator*()); }
		auto Flatten() const  -> Builtin::Nullable<ElementType> const { ADV_EXPRESSION_BODY(__value.Flatten()); }
		auto IsValidFlatten() const  -> bool const { ADV_EXPRESSION_BODY(__value.IsValidFlatten()); }
		auto operator==($self rhs) const  -> bool const { ADV_EXPRESSION_BODY(__value.operator==(rhs)); }
		auto operator==(decltype(nullptr) __var_107_24) const  -> bool const { ADV_EXPRESSION_BODY(__value.operator==(__var_107_24)); }
		auto operator<=>($self rhs) const  -> Builtin::i32 const { ADV_EXPRESSION_BODY(__value.operator<=>(rhs)); }
		
	};
	
} namespace $extensions {
template<class __TT> struct $static_Value;
template<class __TT> struct $static_getValue;
template<class __TT> struct $static_InvalidOperationException;
template<class __TT> struct $static_getInvalidOperationException;
template<class __TT> struct $static_IsValid;
template<class __TT> struct $static_getIsValid;
template<class __TT> struct $static_Flatten;
template<class __TT> struct $static_getFlatten;
template<class __TT> struct $static_invoke;
template<class __TT> struct $static_getinvoke;
template<class __TT> struct $static_IsValidFlatten;
template<class __TT> struct $static_getIsValidFlatten;
template<class __TT> struct $static_HasValue;
template<class __TT> struct $static_getHasValue;
} namespace System {
//###############################################################################
//# Function definitions
//###############################################################################

#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> inline constexpr auto Optional<T>::setValue(const T& value) -> $self& 
	{
		#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		p_Value = value;
		return *this;
	}
	
#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> inline constexpr auto Optional<T>::getValue() const  -> T 
	{
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		if (!HasValue) {
			#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
			Builtin::Throw(Builtin::InvalidOperationException{});
		}
		#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		return p_Value;
	}
	
#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> inline auto Optional<T>::setHasValue(const bool& value) -> $self& { p_HasValue = value; return *this;}
	
#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> inline auto Optional<T>::getHasValue() const  -> bool { return p_HasValue; }
	
#line 27 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> template<class U> requires(std::convertible_to<U, T>) inline constexpr Optional<T>::Optional(U value) 
	{
		#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		Value = value;
		#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		HasValue = Builtin::Boolean(true);
	}
#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> inline constexpr Optional<T>::Optional(decltype(nullptr) __var_32_25) 
	{
		#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		HasValue = Builtin::Boolean(false);
	}
#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> inline constexpr auto Optional<T>::IsValid() const noexcept -> const bool
	{
		#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		ADV_EXPRESSION_BODY(HasValue); 
	}
#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> inline constexpr auto Optional<T>::operator*() const  -> const T
	{
		#line 38 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		ADV_EXPRESSION_BODY(Value); 
	}
#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> inline constexpr Optional<T>::operator bool() const noexcept
	{
		#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		ADV_EXPRESSION_BODY(HasValue); 
	}
#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> inline constexpr auto Optional<T>::Flatten() const  -> const Builtin::Nullable<typename Optional<T>::ElementType>
	{
		#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		if constexpr (Builtin::IsNullable<T>) {
			#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
			if (HasValue) {
				#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
				return ADV_UFCS(Flatten)(Value.$ref());
			}
			#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
			return nullptr;
		} else {
			#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
			{
				#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
				return (*this);
			}
		}
		return {};
	}
#line 51 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> inline constexpr auto Optional<T>::IsValidFlatten() const  -> const bool
	{
		#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		if constexpr (Builtin::IsNullable<T>) {
			#line 53 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
			if (HasValue) {
				#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
				return ADV_UFCS(IsValidFlatten)(Value.$ref());
			}
			#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
			return Builtin::Boolean(false);
		} else {
			#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
			{
				#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
				return IsValid();
			}
		}
		return {};
	}
#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> template<class F> inline auto Optional<T>::AndThen(F&& func) const  -> decltype(auto)
	{
		#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		using TResult = typename std::template invoke_result_t<F, T>;
		#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		if constexpr (std::is_void_v<TResult>) {
			#line 68 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
			if (HasValue) {
				#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
				std::invoke(std::forward<decltype(func)>(func), Value);
			}
		} else {
			#line 70 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
			{
				#line 71 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
				if (HasValue) {
					#line 72 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
					return Builtin::Cast<true, Builtin::Nullable<TResult>>(std::invoke(std::forward<decltype(func)>(func), Value));
				}
				#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
				return nullptr;
			}
		}
	}
#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> template<class F> inline auto Optional<T>::ValueOr(F&& func) const  -> const std::remove_cvref_t<T>
	{
		#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		using TOrigin = std::remove_cvref_t<T>;
		#line 80 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		using TResult = typename std::template invoke_result_t<F>;
		#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		static_assert(std::convertible_to<T, TOrigin>, "T must be convertible to TOrigin");
		#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		static_assert(std::convertible_to<TResult, TOrigin>, "TResult must be convertible to TOrigin");
		#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		if (HasValue) {
			#line 84 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
			return Value;
		}
		#line 86 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		return std::invoke(std::forward<decltype(func)>(func));
	}
#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> template<class F> inline auto Optional<T>::AssignIfNull(F&& func)  -> $self&
	{
		#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		using TResult = typename std::template invoke_result_t<F>;
		#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		static_assert(std::convertible_to<TResult, T>, "TResult must be convertible to T");
		#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		if (!HasValue) {
			#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
			Value = std::invoke(std::forward<decltype(func)>(func));
		}
		#line 95 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		return (*this);
	}
#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> inline constexpr auto Optional<T>::operator==($self rhs) const  -> const bool
	{
		#line 100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "T must implement ISelfEquatable");
		#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		if (HasValue && ADV_UPCS(HasValue)(rhs.$ref())) {
			#line 102 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
			return Value == ADV_UPCS(Value)(rhs.$ref());
		}
		#line 104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		return HasValue == ADV_UPCS(HasValue)(rhs.$ref());
	}
#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> inline constexpr auto Optional<T>::operator==(decltype(nullptr) __var_107_24) const  -> const bool
	{
		#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		ADV_EXPRESSION_BODY(!HasValue); 
	}
#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> inline constexpr auto Optional<T>::operator<=>($self rhs) const  -> const Builtin::i32
	{
		#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		static_assert(Builtin::TypeIs<T, ISelfComparable>(), "T must implement ISelfComparable");
		#line 112 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		if (HasValue) {
			#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
			if (ADV_UPCS(HasValue)(rhs.$ref())) {
				#line 114 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
				return (Value <=> ADV_UPCS(Value)(rhs.$ref()));
			}
			#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
			return Builtin::i32(1);
		}
		#line 117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		if (ADV_UPCS(HasValue)(rhs.$ref())) {
			#line 118 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
			return Builtin::i32(-1);
		}
		#line 119 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		return Builtin::i32(0);
	}
#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> inline constexpr auto OptionalRef<T>::setValue(const T& value) -> $self& 
	{
		#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		p_Value = value;
		return *this;
	}
	
#line 130 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> inline constexpr auto OptionalRef<T>::getValue() const  -> T 
	{
		#line 131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		if (!HasValue) {
			#line 132 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
			Builtin::Throw(Builtin::InvalidOperationException{});
		}
		#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		return p_Value;
	}
	
#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> inline auto OptionalRef<T>::setHasValue(const bool& value) -> $self& { p_HasValue = value; return *this;}
	
#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> inline auto OptionalRef<T>::getHasValue() const  -> bool { return p_HasValue; }
	
#line 141 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> template<class U> requires(std::convertible_to<U, T>) inline constexpr OptionalRef<T>::OptionalRef(U value) 
	{
		#line 142 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		Value = value;
		#line 143 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		HasValue = Builtin::Boolean(true);
	}
#line 146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> inline constexpr OptionalRef<T>::OptionalRef(decltype(nullptr) __var_146_25) 
	{
		#line 147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		HasValue = Builtin::Boolean(false);
	}
#line 150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> inline constexpr auto OptionalRef<T>::IsValid() const noexcept -> const bool
	{
		#line 150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		ADV_EXPRESSION_BODY(HasValue); 
	}
#line 152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> inline constexpr auto OptionalRef<T>::operator*() const  -> const T
	{
		#line 152 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		ADV_EXPRESSION_BODY(Value); 
	}
#line 153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> inline constexpr OptionalRef<T>::operator bool() const noexcept
	{
		#line 153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		ADV_EXPRESSION_BODY(HasValue); 
	}
#line 155 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> inline constexpr auto OptionalRef<T>::Flatten() const  -> const Builtin::Nullable<typename OptionalRef<T>::ElementType>
	{
		#line 156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		if constexpr (Builtin::IsNullable<T>) {
			#line 157 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
			if (HasValue) {
				#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
				return ADV_UFCS(Flatten)(Value.$ref());
			}
			#line 160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
			return nullptr;
		} else {
			#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
			{
				#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
				return (*this);
			}
		}
		return {};
	}
#line 165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> inline constexpr auto OptionalRef<T>::IsValidFlatten() const  -> const bool
	{
		#line 166 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		if constexpr (Builtin::IsNullable<T>) {
			#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
			if (HasValue) {
				#line 168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
				return ADV_UFCS(IsValidFlatten)(Value.$ref());
			}
			#line 170 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
			return Builtin::Boolean(false);
		} else {
			#line 171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
			{
				#line 172 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
				return IsValid();
			}
		}
		return {};
	}
#line 178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> template<class F> inline auto OptionalRef<T>::AndThen(F&& func) const  -> decltype(auto)
	{
		#line 180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		using TResult = typename std::template invoke_result_t<F, T>;
		#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		if constexpr (std::is_void_v<TResult>) {
			#line 182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
			if (HasValue) {
				#line 183 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
				std::invoke(std::forward<decltype(func)>(func), Value);
			}
		} else {
			#line 184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
			{
				#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
				if (HasValue) {
					#line 186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
					return Builtin::Cast<true, Builtin::Nullable<TResult>>(std::invoke(std::forward<decltype(func)>(func), Value));
				}
				#line 187 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
				return nullptr;
			}
		}
	}
#line 191 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> template<class F> inline auto OptionalRef<T>::ValueOr(F&& func) const  -> const std::remove_cvref_t<T>
	{
		#line 193 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		using TOrigin = std::remove_cvref_t<T>;
		#line 194 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		using TResult = typename std::template invoke_result_t<F>;
		#line 195 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		static_assert(std::convertible_to<T, TOrigin>, "T must be convertible to TOrigin");
		#line 196 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		static_assert(std::convertible_to<TResult, TOrigin>, "TResult must be convertible to TOrigin");
		#line 197 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		if (HasValue) {
			#line 198 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
			return Value;
		}
		#line 200 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		return std::invoke(std::forward<decltype(func)>(func));
	}
#line 203 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> template<class F> inline auto OptionalRef<T>::AssignIfNull(F&& func) const  -> $self&
	{
		#line 205 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		using TResult = typename std::template invoke_result_t<F>;
		#line 206 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		static_assert(std::convertible_to<TResult, T>, "TResult must be convertible to T");
		#line 207 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		if (!HasValue) {
			#line 208 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
			Value = std::invoke(std::forward<decltype(func)>(func));
		}
		#line 209 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		return (*this);
	}
#line 212 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> inline constexpr auto OptionalRef<T>::operator==($self rhs) const  -> const bool
	{
		#line 214 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "T must implement ISelfEquatable");
		#line 215 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		if (HasValue && ADV_UPCS(HasValue)(rhs.$ref())) {
			#line 216 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
			return Value == ADV_UPCS(Value)(rhs.$ref());
		}
		#line 218 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		return HasValue == ADV_UPCS(HasValue)(rhs.$ref());
	}
#line 221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> inline constexpr auto OptionalRef<T>::operator==(decltype(nullptr) __var_221_24) const  -> const bool
	{
		#line 221 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		ADV_EXPRESSION_BODY(!HasValue); 
	}
#line 223 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> inline constexpr auto OptionalRef<T>::operator<=>($self rhs) const  -> const Builtin::i32
	{
		#line 225 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		static_assert(Builtin::TypeIs<T, ISelfComparable>(), "T must implement ISelfComparable");
		#line 226 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		if (HasValue) {
			#line 227 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
			if (ADV_UPCS(HasValue)(rhs.$ref())) {
				#line 228 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
				return (Value <=> ADV_UPCS(Value)(rhs.$ref()));
			}
			#line 229 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
			return Builtin::i32(1);
		}
		#line 231 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		if (ADV_UPCS(HasValue)(rhs.$ref())) {
			#line 232 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
			return Builtin::i32(-1);
		}
		#line 233 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		return Builtin::i32(0);
	}
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	

}