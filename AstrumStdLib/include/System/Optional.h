#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "IComparable.h"

namespace System {
namespace __Unsafe {} namespace __Optional_Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
template<class T> class Optional;
//###############################################################################
//# Type definitions
//###############################################################################
template<class T> class __Class_Optional;
	#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> struct Optional final : public Builtin::Struct {
		public: using __self = Optional<T>;
		public: using __class = __Class_Optional<T>;
		public: FORCE_INLINE decltype(auto) __ref() noexcept { return *this; } FORCE_INLINE decltype(auto) __ref() const noexcept { return *this; }
		#line 9 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: static constexpr auto __IS_ADV_NULLABLE = true;
		#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		private: T p_Value; ADV_CHECK_REF_STRUCT("T", T);
		#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		private: inline constexpr auto setValue(const T& value) -> __self&;
		#line 12 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: inline constexpr auto getValue() const  -> T;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		ADV_PROPERTY_GETTER_SETTER(public, Value, public, getValue, private, setValue, T);
		#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		private: bool p_HasValue = false; ADV_CHECK_REF_STRUCT("bool", bool);
		#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		private: inline auto setHasValue(const bool& value) -> __self&;
		#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: inline auto getHasValue() const  -> bool;
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		ADV_PROPERTY_GETTER_SETTER(public, HasValue, public, getHasValue, private, setHasValue, bool);
		#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: inline constexpr Optional()  = default;
		#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: inline constexpr  Optional(T value) ;
		#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: inline constexpr  Optional(decltype(nullptr) __var_28_25) ;
		#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: inline constexpr auto IsValid() const noexcept -> const bool;
		#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: inline constexpr auto operator*() const  -> const T;
		#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: inline constexpr explicit operator bool() const noexcept;
		#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: inline constexpr explicit operator T() const ;
		#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: template<class F> inline auto AndThen(F&& func) const  -> decltype(auto);
		#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: template<class F> inline auto ValueOr(F&& func) const  -> const std::remove_cvref_t<T>;
		#line 64 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: template<class F> inline auto AssignIfNull(F&& func) const  LIFETIMEBOUND -> __self&;
		#line 73 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: inline constexpr auto operator==(__self rhs) const  -> const bool;
		#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: inline constexpr auto operator==(decltype(nullptr) __var_81_24) const  -> const bool;
		#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: inline constexpr auto operator<=>(__self rhs) const  -> const Builtin::i32;
		#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		static_assert(std::is_base_of_v<Builtin::Struct, T> || std::is_base_of_v<Builtin::Enum, T>, "T must be a struct or an enum");
		template <size_t I, class T> friend auto& get(Optional<T>&);
		template <size_t I, class T> friend const auto& get(const Optional<T>&);
		
	};
	
	
	#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> class __Class_Optional final : public Builtin::ValueType
	{
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		public: using __underlying = Optional<T>; using __self = __underlying;
		__self __value;
		__Class_Optional(const __underlying& value) noexcept(std::is_nothrow_copy_constructible_v<__underlying>) : __value{value} {}
		operator __underlying() const noexcept { return __value; }
		auto getValue() const -> T { return __value.getValue(); }
		auto getHasValue() const -> bool { return __value.getHasValue(); }
		auto IsValid() const noexcept -> bool const { ADV_EXPRESSION_BODY(__value.IsValid()); }
		auto operator*() const  -> T const { ADV_EXPRESSION_BODY(__value.operator*()); }
		operator bool() const noexcept { return static_cast<bool>(__value); }
		operator T() const  { return static_cast<T>(__value); }
		auto operator==(__self rhs) const  -> bool const { ADV_EXPRESSION_BODY(__value.operator==(rhs)); }
		auto operator==(decltype(nullptr) __var_81_24) const  -> bool const { ADV_EXPRESSION_BODY(__value.operator==(__var_81_24)); }
		auto operator<=>(__self rhs) const  -> Builtin::i32 const { ADV_EXPRESSION_BODY(__value.operator<=>(rhs)); }
		
	};
	
//###############################################################################
//# Function definitions
//###############################################################################

#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> inline constexpr auto Optional<T>::setValue(const T& value) -> __self& 
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
	template<class T> inline auto Optional<T>::setHasValue(const bool& value) -> __self& { p_HasValue = value; return *this;}
	#line 19 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> inline auto Optional<T>::getHasValue() const  -> bool { return p_HasValue; }
	
#line 23 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> inline constexpr Optional<T>::Optional(T value) 
	{
		#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		Value = value;
		#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		HasValue = true;
	}
#line 28 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> inline constexpr Optional<T>::Optional(decltype(nullptr) __var_28_25) 
	{
		#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		HasValue = false;
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
#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> inline constexpr Optional<T>::operator T() const 
	{
		#line 37 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		ADV_EXPRESSION_BODY(Value); 
	}
#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> template<class F> inline auto Optional<T>::AndThen(F&& func) const  -> decltype(auto)
	{
		#line 41 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		using TResult = typename std::invoke_result_t<F, T>;
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
	}
#line 52 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> template<class F> inline auto Optional<T>::ValueOr(F&& func) const  -> const std::remove_cvref_t<T>
	{
		#line 54 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		using TOrigin = std::remove_cvref_t<T>;
		#line 55 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		using TResult = typename std::invoke_result_t<F>;
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
	template<class T> template<class F> inline auto Optional<T>::AssignIfNull(F&& func) const  -> __self&
	{
		#line 66 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		using TResult = typename std::invoke_result_t<F>;
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
	template<class T> inline constexpr auto Optional<T>::operator==(__self rhs) const  -> const bool
	{
		#line 75 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		if (HasValue && ADV_UPCS(HasValue)(rhs.__ref())) {
			#line 76 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
			return Value == ADV_UPCS(Value)(rhs.__ref());
		}
		#line 78 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		return HasValue == ADV_UPCS(HasValue)(rhs.__ref());
	}
#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> inline constexpr auto Optional<T>::operator==(decltype(nullptr) __var_81_24) const  -> const bool
	{
		#line 81 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		ADV_EXPRESSION_BODY(!HasValue); 
	}
#line 83 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	template<class T> inline constexpr auto Optional<T>::operator<=>(__self rhs) const  -> const Builtin::i32
	{
		#line 85 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		static_assert(Builtin::TypeIs<T, IComparable<T>>(), "T must implement IComparable<T>");
		#line 86 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		if (HasValue) {
			#line 87 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
			if (ADV_UPCS(HasValue)(rhs.__ref())) {
				#line 88 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
				return (Value <=> ADV_UPCS(Value)(rhs.__ref()));
			}
			#line 89 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
			return Builtin::i32(1);
		}
		#line 91 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		if (ADV_UPCS(HasValue)(rhs.__ref())) {
			#line 92 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
			return Builtin::i32(-1);
		}
		#line 93 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
		return Builtin::i32(0);
	}
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Optional.ast"
	

}