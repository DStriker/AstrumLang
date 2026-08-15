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
} namespace $extensions {
template<class __TT> struct $static_InvalidOperationException;
template<class __TT> struct $static_getInvalidOperationException;
} namespace System {
//###############################################################################
//# Type definitions
//###############################################################################
template<class T> class $Class_Optional;
	#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> struct Optional final : public Builtin::Struct {
		public: using $self = Optional<T>;
		public: using $class = $Class_Optional<T>;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		private: T p_Value; ADV_CHECK_REF_STRUCT("T", T);
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		private: inline constexpr auto setValue(const T& value) -> $self&;
		#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: inline constexpr auto getValue() const  -> T;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		ADV_PROPERTY_GETTER_SETTER(public, Value, public, getValue, private, setValue, T);
		#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		private: bool p_HasValue = Builtin::Boolean(false); ADV_CHECK_REF_STRUCT("bool", bool);
		#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		private: inline auto setHasValue(const bool& value) -> $self&;
		#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: inline auto getHasValue() const  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		ADV_PROPERTY_GETTER_SETTER(public, HasValue, public, getHasValue, private, setHasValue, bool);
		#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: inline constexpr Optional()  = default;
		#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: template<class U> requires(std::convertible_to<U, T>) inline constexpr  Optional(U value) ;
		#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: inline constexpr  Optional(decltype(nullptr) __var_28_25) ;
		#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: inline constexpr auto IsValid() const noexcept -> const bool;
		#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: inline constexpr auto operator*() const  -> const T;
		#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: inline constexpr explicit operator bool() const noexcept;
		#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: template<class F> inline auto AndThen(F&& func) const  -> decltype(auto);
		#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: template<class F> inline auto ValueOr(F&& func) const  -> const std::remove_cvref_t<T>;
		#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: template<class F> inline auto AssignIfNull(F&& func) const  LIFETIMEBOUND -> $self&;
		#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: inline constexpr auto operator==($self rhs) const  -> const bool;
		#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: inline constexpr auto operator==(decltype(nullptr) __var_82_24) const  -> const bool;
		#line 84 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: inline constexpr auto operator<=>($self rhs) const  -> const Builtin::i32;
		#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: static constexpr auto __IS_ADV_NULLABLE = Builtin::Boolean(true);
		#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		static_assert(Builtin::IsStructType<T> || std::is_base_of_v<Builtin::Enum, T>, "T must be a struct or an enum");
		template <size_t I, class T> friend auto& get(Optional<T>&);
		template <size_t I, class T> friend const auto& get(const Optional<T>&);
		
	};
	
	#line 98 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> struct [[clang::annotate("ref_struct")]] OptionalRef final : public Builtin::RefStruct {
		public: using $self = OptionalRef<T>;
		public: using $class = $self;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		#line 103 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		private: T p_Value;
		#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		private: inline constexpr auto setValue(const T& value) -> $self&;
		#line 104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: inline constexpr auto getValue() const  -> T;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		ADV_PROPERTY_GETTER_SETTER(public, Value, public, getValue, private, setValue, T);
		#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		private: bool p_HasValue = Builtin::Boolean(false);
		#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		private: inline auto setHasValue(const bool& value) -> $self&;
		#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: inline auto getHasValue() const  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		ADV_PROPERTY_GETTER_SETTER(public, HasValue, public, getHasValue, private, setHasValue, bool);
		#line 113 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: inline constexpr OptionalRef()  = default;
		#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: template<class U> requires(std::convertible_to<U, T>) inline constexpr  OptionalRef(U value) ;
		#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: inline constexpr  OptionalRef(decltype(nullptr) __var_120_25) ;
		#line 124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: inline constexpr auto IsValid() const noexcept -> const bool;
		#line 126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: inline constexpr auto operator*() const  -> const T;
		#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: inline constexpr explicit operator bool() const noexcept;
		#line 131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: template<class F> inline auto AndThen(F&& func) const  -> decltype(auto);
		#line 144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: template<class F> inline auto ValueOr(F&& func) const  -> const std::remove_cvref_t<T>;
		#line 156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: template<class F> inline auto AssignIfNull(F&& func) const  LIFETIMEBOUND -> $self&;
		#line 165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: inline constexpr auto operator==($self rhs) const  -> const bool;
		#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: inline constexpr auto operator==(decltype(nullptr) __var_174_24) const  -> const bool;
		#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: inline constexpr auto operator<=>($self rhs) const  -> const Builtin::i32;
		#line 101 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: static constexpr auto __IS_ADV_NULLABLE = Builtin::Boolean(true);
		#line 100 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
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
		auto getValue() const -> T { return __value.getValue(); }
		auto getHasValue() const -> bool { return __value.getHasValue(); }
		auto IsValid() const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.IsValid()); }
		auto operator*() const  -> T const { ADV_EXPRESSION_BODY(__value.operator*()); }
		auto operator==($self rhs) const  -> bool const { ADV_EXPRESSION_BODY(__value.operator==(rhs)); }
		auto operator==(decltype(nullptr) __var_82_24) const  -> bool const { ADV_EXPRESSION_BODY(__value.operator==(__var_82_24)); }
		auto operator<=>($self rhs) const  -> Builtin::i32 const { ADV_EXPRESSION_BODY(__value.operator<=>(rhs)); }
		
	};
	
//###############################################################################
//# Function definitions
//###############################################################################

#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> inline constexpr auto Optional<T>::setValue(const T& value) -> $self& 
	{
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		p_Value = value;
		return *this;
	}
	
#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> inline constexpr auto Optional<T>::getValue() const  -> T 
	{
		#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		if (!HasValue) {
			#line 14 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
			Builtin::Throw(Builtin::InvalidOperationException{});
		}
		#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		return p_Value;
	}
	
#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> inline auto Optional<T>::setHasValue(const bool& value) -> $self& { p_HasValue = value; return *this;}
	
#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> inline auto Optional<T>::getHasValue() const  -> bool { return p_HasValue; }
	
#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> template<class U> requires(std::convertible_to<U, T>) inline constexpr Optional<T>::Optional(U value) 
	{
		#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		Value = value;
		#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		HasValue = Builtin::Boolean(true);
	}
#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> inline constexpr Optional<T>::Optional(decltype(nullptr) __var_28_25) 
	{
		#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		HasValue = Builtin::Boolean(false);
	}
#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> inline constexpr auto Optional<T>::IsValid() const noexcept -> const bool
	{
		#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		ADV_EXPRESSION_BODY(HasValue); 
	}
#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> inline constexpr auto Optional<T>::operator*() const  -> const T
	{
		#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		ADV_EXPRESSION_BODY(Value); 
	}
#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> inline constexpr Optional<T>::operator bool() const noexcept
	{
		#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		ADV_EXPRESSION_BODY(HasValue); 
	}
#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> template<class F> inline auto Optional<T>::AndThen(F&& func) const  -> decltype(auto)
	{
		#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		using TResult = typename std::template invoke_result_t<F, T>;
		#line 42 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		if constexpr (std::is_void_v<TResult>) {
			#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
			if (HasValue) {
				#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
				std::invoke(std::forward<decltype(func)>(func), Value);
			}
		} else {
			#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
			{
				#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
				if (HasValue) {
					#line 47 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
					return Builtin::Cast<true, Builtin::Nullable<TResult>>(std::invoke(std::forward<decltype(func)>(func), Value));
				}
				#line 48 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
				return nullptr;
			}
		}
		return {};
	}
#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> template<class F> inline auto Optional<T>::ValueOr(F&& func) const  -> const std::remove_cvref_t<T>
	{
		#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		using TOrigin = std::remove_cvref_t<T>;
		#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		using TResult = typename std::template invoke_result_t<F>;
		#line 56 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		static_assert(std::convertible_to<T, TOrigin>, "T must be convertible to TOrigin");
		#line 57 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		static_assert(std::convertible_to<TResult, TOrigin>, "TResult must be convertible to TOrigin");
		#line 58 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		if (HasValue) {
			#line 59 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
			return Value;
		}
		#line 61 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		return std::invoke(std::forward<decltype(func)>(func));
	}
#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> template<class F> inline auto Optional<T>::AssignIfNull(F&& func) const  -> $self&
	{
		#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		using TResult = typename std::template invoke_result_t<F>;
		#line 67 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		static_assert(std::convertible_to<TResult, T>, "TResult must be convertible to T");
		#line 68 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		if (!HasValue) {
			#line 69 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
			Value = std::invoke(std::forward<decltype(func)>(func));
		}
		#line 70 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		return (*this);
	}
#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> inline constexpr auto Optional<T>::operator==($self rhs) const  -> const bool
	{
		#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "T must implement ISelfEquatable");
		#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		if (HasValue && ADV_UPCS(HasValue)(rhs.$ref())) {
			#line 77 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
			return Value == ADV_UPCS(Value)(rhs.$ref());
		}
		#line 79 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		return HasValue == ADV_UPCS(HasValue)(rhs.$ref());
	}
#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> inline constexpr auto Optional<T>::operator==(decltype(nullptr) __var_82_24) const  -> const bool
	{
		#line 82 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		ADV_EXPRESSION_BODY(!HasValue); 
	}
#line 84 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> inline constexpr auto Optional<T>::operator<=>($self rhs) const  -> const Builtin::i32
	{
		#line 86 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		static_assert(Builtin::TypeIs<T, ISelfComparable>(), "T must implement ISelfComparable");
		#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		if (HasValue) {
			#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
			if (ADV_UPCS(HasValue)(rhs.$ref())) {
				#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
				return (Value <=> ADV_UPCS(Value)(rhs.$ref()));
			}
			#line 90 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
			return Builtin::i32(1);
		}
		#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		if (ADV_UPCS(HasValue)(rhs.$ref())) {
			#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
			return Builtin::i32(-1);
		}
		#line 94 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		return Builtin::i32(0);
	}
#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> inline constexpr auto OptionalRef<T>::setValue(const T& value) -> $self& 
	{
		#line 109 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		p_Value = value;
		return *this;
	}
	
#line 104 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> inline constexpr auto OptionalRef<T>::getValue() const  -> T 
	{
		#line 105 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		if (!HasValue) {
			#line 106 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
			Builtin::Throw(Builtin::InvalidOperationException{});
		}
		#line 107 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		return p_Value;
	}
	
#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> inline auto OptionalRef<T>::setHasValue(const bool& value) -> $self& { p_HasValue = value; return *this;}
	
#line 111 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> inline auto OptionalRef<T>::getHasValue() const  -> bool { return p_HasValue; }
	
#line 115 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> template<class U> requires(std::convertible_to<U, T>) inline constexpr OptionalRef<T>::OptionalRef(U value) 
	{
		#line 116 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		Value = value;
		#line 117 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		HasValue = Builtin::Boolean(true);
	}
#line 120 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> inline constexpr OptionalRef<T>::OptionalRef(decltype(nullptr) __var_120_25) 
	{
		#line 121 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		HasValue = Builtin::Boolean(false);
	}
#line 124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> inline constexpr auto OptionalRef<T>::IsValid() const noexcept -> const bool
	{
		#line 124 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		ADV_EXPRESSION_BODY(HasValue); 
	}
#line 126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> inline constexpr auto OptionalRef<T>::operator*() const  -> const T
	{
		#line 126 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		ADV_EXPRESSION_BODY(Value); 
	}
#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> inline constexpr OptionalRef<T>::operator bool() const noexcept
	{
		#line 127 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		ADV_EXPRESSION_BODY(HasValue); 
	}
#line 131 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> template<class F> inline auto OptionalRef<T>::AndThen(F&& func) const  -> decltype(auto)
	{
		#line 133 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		using TResult = typename std::template invoke_result_t<F, T>;
		#line 134 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		if constexpr (std::is_void_v<TResult>) {
			#line 135 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
			if (HasValue) {
				#line 136 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
				std::invoke(std::forward<decltype(func)>(func), Value);
			}
		} else {
			#line 137 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
			{
				#line 138 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
				if (HasValue) {
					#line 139 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
					return Builtin::Cast<true, Builtin::Nullable<TResult>>(std::invoke(std::forward<decltype(func)>(func), Value));
				}
				#line 140 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
				return nullptr;
			}
		}
		return {};
	}
#line 144 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> template<class F> inline auto OptionalRef<T>::ValueOr(F&& func) const  -> const std::remove_cvref_t<T>
	{
		#line 146 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		using TOrigin = std::remove_cvref_t<T>;
		#line 147 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		using TResult = typename std::template invoke_result_t<F>;
		#line 148 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		static_assert(std::convertible_to<T, TOrigin>, "T must be convertible to TOrigin");
		#line 149 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		static_assert(std::convertible_to<TResult, TOrigin>, "TResult must be convertible to TOrigin");
		#line 150 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		if (HasValue) {
			#line 151 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
			return Value;
		}
		#line 153 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		return std::invoke(std::forward<decltype(func)>(func));
	}
#line 156 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> template<class F> inline auto OptionalRef<T>::AssignIfNull(F&& func) const  -> $self&
	{
		#line 158 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		using TResult = typename std::template invoke_result_t<F>;
		#line 159 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		static_assert(std::convertible_to<TResult, T>, "TResult must be convertible to T");
		#line 160 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		if (!HasValue) {
			#line 161 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
			Value = std::invoke(std::forward<decltype(func)>(func));
		}
		#line 162 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		return (*this);
	}
#line 165 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> inline constexpr auto OptionalRef<T>::operator==($self rhs) const  -> const bool
	{
		#line 167 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		static_assert(Builtin::TypeIs<T, ISelfEquatable>(), "T must implement ISelfEquatable");
		#line 168 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		if (HasValue && ADV_UPCS(HasValue)(rhs.$ref())) {
			#line 169 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
			return Value == ADV_UPCS(Value)(rhs.$ref());
		}
		#line 171 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		return HasValue == ADV_UPCS(HasValue)(rhs.$ref());
	}
#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> inline constexpr auto OptionalRef<T>::operator==(decltype(nullptr) __var_174_24) const  -> const bool
	{
		#line 174 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		ADV_EXPRESSION_BODY(!HasValue); 
	}
#line 176 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> inline constexpr auto OptionalRef<T>::operator<=>($self rhs) const  -> const Builtin::i32
	{
		#line 178 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		static_assert(Builtin::TypeIs<T, ISelfComparable>(), "T must implement ISelfComparable");
		#line 179 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		if (HasValue) {
			#line 180 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
			if (ADV_UPCS(HasValue)(rhs.$ref())) {
				#line 181 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
				return (Value <=> ADV_UPCS(Value)(rhs.$ref()));
			}
			#line 182 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
			return Builtin::i32(1);
		}
		#line 184 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		if (ADV_UPCS(HasValue)(rhs.$ref())) {
			#line 185 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
			return Builtin::i32(-1);
		}
		#line 186 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		return Builtin::i32(0);
	}
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	

}