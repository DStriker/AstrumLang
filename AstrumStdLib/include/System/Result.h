#pragma once
#ifndef __ASTRUM_INCLUDE_PARSER
#include "Builtin/Builtin.h"
#endif
#include "ASTRUMSTD_export.h"
#include "Optional.h"

namespace System {
namespace __Unsafe {} namespace __Result$Protected__Unsafe {}
//###############################################################################
//# Type forward declarations
//###############################################################################
template<class T, class E> class Result;
template<class T, class E> class $Class_Result;
//###############################################################################
//# Type definitions
//###############################################################################
template<class T, class E> class $Class_Result;
	#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
	template<class T, class E> struct Result final : public Builtin::Union {
		public: using $self = Result<T, E>;
		public: using $class = $Class_Result<T, E>;
		public: FORCE_INLINE constexpr decltype(auto) $ref() noexcept { return *this; } FORCE_INLINE constexpr decltype(auto) $ref() const noexcept { return *this; }
		#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		public: using Ok = T; ADV_CHECK_REF_STRUCT("T", T);
		#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		public: struct Err : Builtin::Struct { decltype(auto) $ref() const noexcept { return *this; }
			E error; ADV_CHECK_REF_STRUCT("E", E);
			Err() = default; Err(E _error) : error{_error} {}
			bool operator==(const Err& that) const noexcept { return error == that.error; }
		};
		private: union {
			#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
			Ok _Ok;
			#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
			Err _Err;
			
		};
		enum : unsigned char {
			_TAGUNINITIALIZED_, _TAG__Ok, _TAG__Err
 		} __union_internal_tag;
		public:
		#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		static constexpr int __variants = 2;
		Result() : __union_internal_tag{ _TAGUNINITIALIZED_ } {};
		#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		Result(Builtin::In<Ok> value) : __union_internal_tag{ _TAG__Ok } { new (&_Ok) Ok(value); }
		#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		Result(Builtin::In<Err> value) : __union_internal_tag{ _TAG__Err } { new (&_Err) Err(value); }
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		private: void __copy(const $self& other) {
			__union_internal_tag = other.__union_internal_tag;
			switch (__union_internal_tag) {
				#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
				case _TAG__Ok: new (&_Ok) Ok(other._Ok); break;
				#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
				case _TAG__Err: new (&_Err) Err(other._Err); break;
				
			}
		}
		#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		public: Result(const $self& other) { __copy(other); }
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		private: void __move($self&& other) {
			__union_internal_tag = other.__union_internal_tag;
			switch (__union_internal_tag) {
				#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
				case _TAG__Ok: new (&_Ok) Ok(std::move(other._Ok)); break;
				#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
				case _TAG__Err: new (&_Err) Err(std::move(other._Err)); break;
				
			}
		}
		#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		public: Result($self&& other) { __move(std::move(other)); }
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		private: void __destroy() {
			switch (__union_internal_tag) {
				#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
				case _TAG__Ok: _Ok.~Ok(); break;
				#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
				case _TAG__Err: _Err.~Err(); break;
				
			}
		}
		#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		public: ~Result() { __destroy(); }
		#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		Result& operator=(Builtin::In<Ok> value) {
			__destroy();
			__union_internal_tag = _TAG__Ok;
			new (&_Ok) Ok(value); return *this;
		}
		#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		Result& operator=(Builtin::In<Err> value) {
			__destroy();
			__union_internal_tag = _TAG__Err;
			new (&_Err) Err(value); return *this;
		}
		#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		public: $self& operator=(const $self& other) { __destroy(); __copy(other); return *this; }
		#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		public: $self& operator=($self&& other) { __destroy(); __move(std::move(other)); return *this; }
		#line 7 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		public: auto GetOk() { if (__union_internal_tag != _TAG__Ok) throw std::logic_error("Type mismatch in the discriminated union"); return _Ok; }
		#line 8 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		public: auto GetErr() { if (__union_internal_tag != _TAG__Err) throw std::logic_error("Type mismatch in the discriminated union"); return _Err; }
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		public: template<class __SomeT> bool Is() const noexcept {
			if constexpr (std::is_same_v<__SomeT, Ok>) return __union_internal_tag == _TAG__Ok;
			else if constexpr (std::is_same_v<__SomeT, Err>) return __union_internal_tag == _TAG__Err;
			return false;
		}
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		public: template<class __SomeT> Builtin::Nullable<__SomeT> As() const noexcept {
			if constexpr (std::is_same_v<__SomeT, Ok>) { if(__union_internal_tag == _TAG__Ok) return _Ok; }
			else if constexpr (std::is_same_v<__SomeT, Err>) { if(__union_internal_tag == _TAG__Err) return _Err; }
			else static_assert(false, "Cannot to cast union type Result to __SomeT");
			return nullptr;
		}
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		public: template<class __SomeT> bool operator==(const __SomeT& other) const noexcept {
			if constexpr (std::is_same_v<__SomeT, Ok>) return __union_internal_tag == _TAG__Ok && _Ok == other;
			else if constexpr (std::is_same_v<__SomeT, Err>) return __union_internal_tag == _TAG__Err && _Err == other;
			return false;
		}
		#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		public: inline auto operator*() const  -> const T;
		#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		public: inline explicit operator bool() const noexcept;
		#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		public: template<class F> inline auto AndThen(F&& func) const  -> decltype(auto);
		#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		public: template<class F> inline auto ValueOr(F&& func) const  -> const std::remove_cvref_t<T>;
		
	};
	
		} namespace $extensions { using namespace System;
#line 43 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
	template<class T, class E> using $extension_Result_43_Result = Result<T, E>;
	#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
	template<class T, class E> inline auto getHasValue($extension_Result_43_Result<T, E> const& $this ) -> const bool;
	#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
	template<class T, class E> inline auto getValue($extension_Result_43_Result<T, E> const& $this ) -> const T;
	#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
	template<class T, class E> inline auto getError($extension_Result_43_Result<T, E> const& $this ) -> const E;
	} namespace System{
using $extensions::getHasValue;
using $extensions::getValue;
using $extensions::getError;

	
	#line 6 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
	template<class T, class E> class $Class_Result final : public Builtin::ValueType
	{
		#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		public: using $underlying = Result<T, E>; using $self = $underlying;
		$self __value;
		$Class_Result(const $underlying& value) noexcept(std::is_nothrow_copy_constructible_v<$underlying>) : __value{value} {}
		operator $underlying() const noexcept { return __value; }
		auto operator*() const  -> T const { ADV_EXPRESSION_BODY(__value.operator*()); }
		
	};
	
} namespace $extensions {
template<class __TT> struct $static_Error;
template<class __TT> struct $static_getError;
template<class __TT> struct $static_error;
template<class __TT> struct $static_geterror;
template<class __TT> struct $static_HasValue;
template<class __TT> struct $static_getHasValue;
template<class __TT> struct $static_invoke;
template<class __TT> struct $static_getinvoke;
template<class __TT> struct $static_Value;
template<class __TT> struct $static_getValue;
template<class __TT> struct $static_NextPow2;
template<class __TT> struct $static_getNextPow2;
} namespace System {
//###############################################################################
//# Function definitions
//###############################################################################

#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
	template<class T, class E> inline auto Result<T, E>::operator*() const  -> const T
	{
		#line 10 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, T>((*this))); 
	}
#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
	template<class T, class E> inline Result<T, E>::operator bool() const noexcept
	{
		#line 11 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		ADV_EXPRESSION_BODY(ADV_UPCS(HasValue)((Builtin::Cast<false, T>((*this))).$ref())); 
	}
#line 13 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
	template<class T, class E> template<class F> inline auto Result<T, E>::AndThen(F&& func) const  -> decltype(auto)
	{
		#line 15 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		using TResult = typename std::template invoke_result_t<F, T>;
		#line 16 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		if constexpr (std::is_void_v<TResult>) {
			#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
			if (const auto result = Builtin::Cast<false, T>((*this))) {
				{
					#line 17 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
					auto __tmp0 = *result; const auto& result = __tmp0;
					
					#line 18 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
					std::invoke(std::forward<decltype(func)>(func), result);
				}
			}
		} else {
			#line 20 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
			{
				#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
				if (const auto result = Builtin::Cast<false, T>((*this))) {
					{
						#line 21 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
						auto __tmp0 = *result; const auto& result = __tmp0;
						
						#line 22 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
						return Builtin::Cast<true, Builtin::Nullable<TResult>>(std::invoke(std::forward<decltype(func)>(func), result));
					}
				}
				#line 24 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
				Builtin::Nullable<TResult> res = nullptr; 
				#line 25 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
				return res;
			}
		}
	}
#line 29 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
	template<class T, class E> template<class F> inline auto Result<T, E>::ValueOr(F&& func) const  -> const std::remove_cvref_t<T>
	{
		#line 31 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		using TOrigin = std::remove_cvref_t<T>;
		#line 32 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		using TResult = typename std::template invoke_result_t<F>;
		#line 33 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		static_assert(std::convertible_to<T, TOrigin>, "T must be convertible to TOrigin");
		#line 34 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		static_assert(std::convertible_to<TResult, TOrigin>, "TResult must be convertible to TOrigin");
		#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		if (const auto result = Builtin::Cast<false, T>((*this))) {
			{
				#line 35 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
				auto __tmp0 = *result; const auto& result = __tmp0;
				
				#line 36 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
				return result;
			}
		}
		#line 39 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		return std::invoke(std::forward<decltype(func)>(func));
	}
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
	
} namespace $extensions { using namespace System;
#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
	template<class T, class E> inline auto getHasValue($extension_Result_43_Result<T, E> const& $this ) -> const bool
	{
		#line 44 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		ADV_EXPRESSION_BODY((Builtin::Is<T>($this))); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
	template<class T, class E> inline auto getValue($extension_Result_43_Result<T, E> const& $this ) -> const T
	{
		#line 45 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		ADV_EXPRESSION_BODY(Builtin::Cast<true, T>($this)); 
	}
	} namespace System{
} namespace $extensions { using namespace System;
#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
	template<class T, class E> inline auto getError($extension_Result_43_Result<T, E> const& $this ) -> const E
	{
		#line 46 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
		ADV_EXPRESSION_BODY((Builtin::Cast<true, typename $extension_Result_43_Result<T, E>::Err>($this)).$ref().error); 
	}
	} namespace System{
#line 9999 "C:\\Users\\user\\Documents\\VSProjects\\MyLanguage\\AstrumStdLib\\include\\System\\Result.ast"
	

}